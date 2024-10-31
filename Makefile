# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 02:17:02 by pbartoch          #+#    #+#              #
#    Updated: 2024/10/31 18:35:42 by pbartoch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC  = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra

SOURCE =	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memset.c ft_strchr.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_strlen.c

OBJECTS = $(SOURCE:.c=.o)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all : $(NAME)

.PHONY : clean fclean

clean:
	@rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all