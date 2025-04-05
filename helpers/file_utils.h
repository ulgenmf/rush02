
#ifndef HELPER_FUNCTIONS_H
# define HELPER_FUNCTIONS_H

# include "helper_functions.h"
# include <fcntl.h>

int		fd;
ssize_t	r;
char *buffer buffer = (char *)malloc(SIZE * sizeof(char));
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

printf("Read %zd bytes: %s\n", r, buffer);

close(fd);
#endif