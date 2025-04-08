// #include "./helpers/errors.h"
// #include "helpers/file_utils.h"

// #define FILE "./numbers.dict"

// char	*use_file(char *file_path);
// void	mf_putchar(char c);
// void	get(char *buffer);
// void	mf_putstr(char *str);
// int	main(int arc, char **argv)
// {
// 	(void)argv;
// 	if (arc == 1)
// 	{
// 		mf_putstr(use_file(FILE));
// 	}

// 	else
// 	{
// 		mf_putstr("add file name pic");
// 	}
// }

/*

	ft_write_error(ERR_CONVERSION_ERROR);
	ft_write_error(ERR_PARSING_ERROR);
	ft_write_error(ERR_INVALID_NUMBER);
*/
#include "./helpers/errors.h"
#include "./helpers/file_utils.h"
#include "./helpers/helper_functions.h"

#define FILE "./numbers.dict"

char			*mf_strsrch(char *str, int ch);

void			mf_trim_spaces(char *str);
typedef struct
{
	int			number;
	char		*word;
}				DictionaryEntry;

DictionaryEntry	*dict = NULL;
int				dict_size = 0;

void			mf_putstr(char *str);

void	parse_dict(char *buffer)
{
	char	*line;
	char	*next_line;

	line = buffer;
	while ((next_line = mf_strsrch(line, '\n')))
	{
		*next_line = '\0';
		if (line[0] == '\0' || mf_is_space(line[0]))
		{
			line = next_line + 1;
			continue ;
		}
		line = next_line + 1;
	}
}

char	*find_word(int number)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		if (dict[i].number == number)
		{
			return (dict[i].word);
		}
		i++;
	}
	return (NULL);
}

int	main(int arc, char **argv)
{
	char	*file_content;
	int		number;
	char	*word;

	if (arc != 2)
	{
		mf_putstr("Error");
		return (1);
	}
	file_content = use_file(FILE);
	if (!file_content)
	{
		mf_putstr("Dict Error");
		return (1);
	}
	mf_putstr(file_content);
	parse_dict(file_content);
	free(file_content);
	number = mf_atoi(argv[1]);
	word = find_word(number);
	if (word)
	{
		mf_putstr(word);
	}
	else
	{
		mf_putstr("Dict Error.");
	}
	int i = 0;
	while (i < dict_size)
	{
		free(dict[i].word);
		i++;
	}
	free(dict);
	return (0);
}
