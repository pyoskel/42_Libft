# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 02:17:02 by pbartoch          #+#    #+#              #
#    Updated: 2024/11/06 00:26:37 by pbartoch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC  = cc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra

SOURCE =	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
			ft_tolower.c ft_toupper.c ft_strlen.c

OBJECTS = $(SOURCE:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Rule for compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Default rule
all: $(NAME)

# Clean object files
clean:
	@rm -f $(OBJECTS) $(BONUS_OBJECTS)

# Clean everything (object files and library)
fclean: clean
	@rm -f $(OBJECTS) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re bonus