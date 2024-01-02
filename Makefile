# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 03:12:14 by ivalimak          #+#    #+#              #
#    Updated: 2024/01/02 03:23:49 by ivalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	funny

BUILD	=	normal

CC		=	cc

cflags.common	=	-Wall -Wextra -Werror
cflags.debug	=	-g -D DEBUG_MSG=1
cflags.normal	=	

CFLAGS	=	$(cflags.common) $(cflags.$(BUILD))

LIBDIR	=	libft-gc
LIBFT	=	$(LIBDIR)/libft.a

SRC		=	funny.c \
			ft_putcow.c \
			ft_roulette.c

all: $(NAME)

$(NAME): $(LIBFT) $(SRC)
	@echo Making the funny...
	@$(CC) $(CFLAGS) $(SRC) -I$(LIBDIR) -L$(LIBDIR) -lft -o $(NAME)

$(LIBFT):
	@make -C $(LIBDIR) --no-print-directory BUILD=$(BUILD)

clean:
	@make -C $(LIBDIR) clean --no-print-directory

fclean:
	@make -C $(LIBDIR) fclean --no-print-directory

re: fclean all
