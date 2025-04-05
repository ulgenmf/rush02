/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuulgen <fuulgen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:05:11 by fuulgen           #+#    #+#             */
/*   Updated: 2025/04/05 17:16:02 by fuulgen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_FUNCTIONS_H
# define HELPER_FUNCTIONS_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


int mf_strlen(char *str){

	int i;

	i = 0;
	while(*str){
		str++;
		i++;
	}
	return i;
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
	write(1, "\n", 1);
}

#endif