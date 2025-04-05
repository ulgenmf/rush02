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

void	ft_write_error(Error err)
{
	if (err == ERR_INVALID_NUMBER)
		mf_putstr("Error");
	else if (err == ERR_PARSING_ERROR)
		mf_putstr("Dict Error");
	else if (err == ERR_CONVERSION_ERROR)
		mf_putstr("Dict Error");
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