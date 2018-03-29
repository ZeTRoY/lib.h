# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/25 12:28:49 by aroi              #+#    #+#              #
#    Updated: 2018/03/28 20:12:08 by aroi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

HEADER = libft.h

OBJ = ft_isdigit.o ft_atoi.o ft_bzero.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_itoa.o ft_lstadd.o ft_lstdelone.o ft_lstdel.o ft_lstnew.o ft_lstiter.o ft_lstmap.o ft_memalloc.o ft_memccpy.o ft_memcpy.o ft_memchr.o ft_memcmp.o ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o ft_putstr.o ft_putstr_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_strncat.o ft_strcat.o ft_strchr.o ft_strlcat.o ft_strclr.o ft_strncmp.o ft_strcmp.o ft_strncpy.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strnequ.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strmap.o ft_strmapi.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o

%.o: %.c $(HEADER)
	@ $(CC) -c -o $@ $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f libft.a

re: fclean all
