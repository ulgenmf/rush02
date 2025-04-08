# Source files
SCRS = srcs/main.c srcs/converter.c srcs/converter_utils.c \
       srcs/ft_utils.c srcs/parse_file.c srcs/parse_file_utils.c \
       srcs/parse_dict.c srcs/parse_dict_utils.c

# Object files
OBJS = ${SCRS:.c=.o}

# Final executable name
NAME = rush-02

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

# Default target
all: ${NAME}

# Link object files to create the final executable
${NAME}: ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

# Compile .c files to .o files
%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@

# Clean object files
clean:
		rm -f ${OBJS}

# Clean executable and object files
fclean: clean
		rm -f ${NAME}

# Phony targets
.PHONY: all clean fclean