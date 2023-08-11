#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * main  - print elf header
 * @argc: first argument
 * @argv: pointer to the argument
 *
 * Return: the header file
 */

int man(int argc, char *argv[])
{
	int fd, i;
	off_t offset = 0;
	size_t bytes_read;
	Elf64_Ehdr elf_header;

	if (argc !=2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("open");
		exit(98);
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read != sizeof(elf_header))
	{
		perror("read");
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != 0x7f || elf_header.e_ident[EI_MAG1] != 'E' || elf_header.e_ident[EI_MAG2] != 'L' || elf_header.e_ident[EI_MAG3] != 'F')
	{
		fprintf(stderr, "Not an ELF file\n");
		exit(98);
	}
	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");

	printf("Class: %d\n", elf_header.e_class);
	printf("Data: %d\n", elf_header.e_data);
	printf("Version: %d\n", elf_header.e_version);
	printf("OS/ABI: %d\n", elf_header.e_osabi);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %1x\n", elf_header.e_entry);

	close(fd);
	return (0);
}
