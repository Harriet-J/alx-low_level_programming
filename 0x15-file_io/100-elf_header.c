#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUFFER_SIZE 64

void print_error(const char *msg, int code)
{
    fprintf(stderr, "%s\n", msg);
    exit(code);
}

void print_elf_header(const Elf64_Ehdr *header)
{
    int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], (i == EI_NIDENT - 1) ? '\n' : ' ');
    printf("  Class:                             %s\n", 
           (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", 
           (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", 
           (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "<unknown>");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", 
           (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "<unknown>");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename", 97);

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error: Can't read file", 98);

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        close(fd);
        print_error("Error: Can't read ELF header", 98);
    }

    if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || 
        header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
    {
        close(fd);
        print_error("Error: Not an ELF file", 98);
    }

    print_elf_header(&header);
    close(fd);

    return (0);
}

