# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 19:04:27 by dlenskyi          #+#    #+#              #
#    Updated: 2018/12/10 19:43:24 by dlenskyi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -c -Wall -Wextra -Werror
СС = gcc
SRC = ft_printf.c print_spec_udi.c print_spec_p.c \
ft_ltoa_base_u.c ft_bzero.c ft_strdup.c \
ft_ltoa_u.c ft_strjoin.c ft_strnew.c ft_itoa.c \
validate_params.c ft_strchr.c ft_atoi.c \
ft_strlen.c ft_toupper.c manage_spec.c manage_spec2.c \
ft_ltoa.c ft_strcpy.c ft_strsub.c print_spec_cs.c print_spec_box.c \
print_spec_nonvalid.c print_spec_f.c ft_strdel.c ft_memalloc.c
OBJ = $(SRC:.c=.o)
HEADER = -Ift_printf.h

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(HEADER) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
