#ifndef ERRORS_H
# define ERRORS_H

# include "helper_functions.h"
void	mf_putstr(char *str);

typedef enum
{
	ERR_INVALID_NUMBER,
	ERR_PARSING_ERROR,
	ERR_CONVERSION_ERROR
}		Error;

typedef enum
{

	false = 0,
	true = 1,

}		mf_bool;

int	mf_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
		|| c == '\f')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int	mf_is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

void	mf_write_error(Error err)
{
	if (err == ERR_INVALID_NUMBER)
		mf_putstr("Error");
	else if (err == ERR_PARSING_ERROR)
		mf_putstr("Dict Error");
	else if (err == ERR_CONVERSION_ERROR)
		mf_putstr("Dict Error");
}
int	mf_is_valid_number(char *str)
{
	while (*str)
	{
		if (mf_is_number(*str))
		{
			mf_write_error(ERR_INVALID_NUMBER);
			return (1);
		}
		str++;
	}
	return (0);
}
#endif

/*

void	ft_write_invalid_number_error(void)
{
	mf_putstr("Error");
}

void	ft_write_parsing_error(void)
{
	mf_putstr("Dict Error");
}

void	ft_write_conversion_error(void)
{
	mf_putstr("Dict Error");
}
*/