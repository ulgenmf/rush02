// #ifndef HELPER_FUNCTIONS_H
// # define HELPER_FUNCTIONS_H

// # include "errors.h"
// # include <fcntl.h>
// # include <stdio.h>
// # include <stdlib.h>
// # include <unistd.h>

// void	mf_putstr(char *str);
// void	mf_putchar(char c);
// int		mf_atoi(char *str);
// char	*mf_strdup(char *src);
// int		mf_strlen(char *str);
// void	mf_strcpy(char *dst, char *src);
// void mf_putnbr(int nb);

// int mf_strlen(char *str)
// {
// 	int	index;

// 	index = 0;
// 	while (str[index])
// 		index++;
// 	return (index);
// }

// int	mf_is_space(char c)
// {
// 	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
// 		|| c == '\r');
// }
// void	mf_putstr(char *str)
// {
// 	while (*str)
// 	{
// 		write(1, str++, 1);
// 	}
// 	write(1, "\n", 1);
// }
// void	mf_putstr_argv(char **str)
// {
// 	while (**str)
// 	{
// 		write(1, str++, 1);
// 	}
// 	write(1, "\n", 1);
// }

// void	mf_putchar(char c)
// {
// 	write(1, &c, 1);

// }

// int	mf_atoi(char *str)
// {
// 	int	result;

// 	result = 0;
// 	while (*str)
// 	{
// 		result *= 10;
// 		result += (*str) - '0';
// 		str++;
// 	}
// 	return (result);
// }

// char	*mf_strdup(char *src)
// {
// 	int		length;
// 	int		index;
// 	char	*dest;

// 	length = mf_strlen(src);
// 	index = 0;
// 	if ((dest = (char *)malloc((length + 1) * sizeof(char))) == NULL)
// 		return (0);
// 	while (src[index])
// 	{
// 		dest[index] = src[index];
// 		index++;
// 	}
// 	dest[index] = '\0';
// 	return (dest);
// }

// void	mf_strcpy(char *dst, char *src)
// {
// 	while (*src != '\0')
// 	{
// 		*dst = *src;
// 		dst++;
// 		src++;
// 	}
// 	*dst = '\0';
// }

// int	mf_strchr(char *str, char c)
// {
// 	while (*str)
// 	{
// 		if (*str == c)
// 		{
// 			return (1);
// 		}
// 		str++;
// 	}
// 	return (0);
// }

// #endif

#ifndef HELPER_FUNCTIONS_H
# define HELPER_FUNCTIONS_H

# include "errors.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	mf_putstr(char *str);
void	mf_putchar(char c);
int		mf_atoi(char *str);
char	*mf_strdup(char *src);
int		mf_strlen(char *str);
void	mf_strcpy(char *dst, char *src);
char	*mf_strsrch(char *str, int ch);

void	trim_spaces(char *str)
{
	char	*start;
	char	*end;

	if (str == NULL)
	{
		return ; // Handle NULL pointer
	}
	start = str;
	while (*start == ' ')
	{
		start++;
	}
	if (*start == '\0')
	{
		*str = '\0';
		return ;
	}
	end = start;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > start && *end == ' ')
	{
		end--;
	}
	*(end + 1) = '\0';
	if (start != str)
	{
		while (*start)
		{
			*str++ = *start++;
		}
	}
	*str = '\0';
}

int	mf_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	mf_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}
char	*mf_strsrch(char *str, int ch)
{
	if (str == NULL)
	{
		return (NULL); // Handle NULL input string
	}
	while (*str)
	{
		if (*str == (char)ch)
		{
			return ((char *)str);
			// Return pointer to the first occurrence of ch
		}
		str++; // Move to the next character
	}
	return (NULL); // Return NULL if character not found
}
void	mf_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

void	mf_putchar(char c)
{
	write(1, &c, 1);
}

int	mf_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	return (result);
}

char	*mf_strdup(char *src)
{
	int		length;
	int		index;
	char	*dest;

	length = mf_strlen(src);
	index = 0;
	if ((dest = (char *)malloc((length + 1) * sizeof(char))) == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	mf_strcpy(char *dst, char *src)
{
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
}

#endif
