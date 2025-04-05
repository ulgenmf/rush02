#include "./helpers/helper_functions.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define FILE_LOC "numbers.dict"
#define SIZE 40

void	mf_putstr(char *str);
int	ft_open_file(void)
{
	return ();
}

open(FILE_LOC, O_RDONLY)

	int main(void)
{
	int		fd;
	ssize_t	r;
	char	buffer[SIZE];

	fd = ft_open_file();
	if (fd < 0)
	{
		// ADD PROPER  LOGGING
		perror("Failed to open file");
		return (1);
	}
	r = read(fd, buffer, sizeof(buffer) - 1);
	if (r < 0)
	{
		// ADD PROPER  LOGGING
		perror("Failed to read file");
		close(fd);
		return (1);
	}

	buffer[r] = '\0';
	mf_putstr(buffer);
	close(fd);
	return (0);
}

write(, &c, 1);



