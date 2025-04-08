// #ifndef FILE_UTILS_H
// # define FILE_UTILS_H

// # include "error.h"
// # include "helper_functions.h"
// # include <fcntl.h>
// # include <stdlib.h>
// # include <unistd.h>

// # define SIZE 10000

// void	mf_putstr(char *str);

// int	open_file(char *file_path)
// {
// 	int	fd;

// 	fd = open(file_path, O_RDONLY);
// 	if (fd < 0)
// 	{
// 		mf_putstr("Failed to open file");
// 	}
// 	return (fd);
// }

// char	*use_file(char *file_path)
// {
// 	char	*buffer;
// 	int		fd;

// 	buffer = (char *)malloc(SIZE);
// 	if (!buffer)
// 	{
// 		mf_putstr("BUFFER CANNOT BE CREATED");
// 		return (NULL);
// 	}
// 	fd = open_file(file_path);
// 	if (fd < 0 || read(fd, buffer, SIZE - 1) < 0)
// 	{
// 		mf_putstr("Failed to read file");
// 		free(buffer);
// 		close(fd);
// 		return (NULL);
// 	}
// 	buffer[SIZE - 1] = '\0';
// 	close(fd);
// 	return (buffer);
// }

// #endif

#ifndef FILE_UTILS_H
# define FILE_UTILS_H

# include "helper_functions.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define SIZE 10000

void	mf_putstr(char *str);

int	open_file(char *file_path)
{
	int	fd;

	fd = open(file_path, O_RDONLY);
	if (fd < 0)
	{
		mf_putstr("Failed to open file");
	}
	return (fd);
}

char	*use_file(char *file_path)
{
	char	*buffer;
	int		fd;

	buffer = (char *)malloc(SIZE);
	if (!buffer)
	{
		mf_putstr("BUFFER CANNOT BE CREATED");
		return (NULL);
	}
	fd = open_file(file_path);
	if (fd < 0 || read(fd, buffer, SIZE - 1) < 0)
	{
		mf_putstr("Failed to read file");
		free(buffer);
		close(fd);
		return (NULL);
	}
	buffer[SIZE - 1] = '\0';
	close(fd);
	return (buffer);
}

#endif
