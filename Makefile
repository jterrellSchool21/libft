# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jterrell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 19:01:32 by jterrell          #+#    #+#              #
#    Updated: 2019/09/19 11:28:00 by jterrell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c\
	  ft_isdigit.c ft_isprint.c ft_isspace.c ft_isxdigit.c ft_memccpy.c\
	  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c\
	  ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c\
	  ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c\
	  ft_strstr.c ft_tolower.c ft_toupper.c ft_isupper.c ft_islower.c\
	  \
	  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c\
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c\
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c\
	  ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	  ft_lstnew.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstadd.c\
	  ft_lstdel.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -Wall -Wextra -Werror
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

.PHONY: all clean fclean re

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

p:
	gcc $(NAME) main.c -o qwe
