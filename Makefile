# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/01 15:17:00 by skorte            #+#    #+#              #
#    Updated: 2021/09/27 11:03:20 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c			\
		ft_strlen.c			\
		ft_printf_n.c		\
		ft_printf_int.c		\
		ft_printf_char.c	\
		ft_printf_pointer.c	\
		ft_printf_string.c	\

OBJS = $(SRCS:.c=.o)
OBJS_DIR = objs/
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "libftprintf done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)
	rm -f $(NAME:.a=.h.gch)

fclean: clean
	rm -f $(NAME)

re: fclean all
