# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 19:51:20 by cajose-s          #+#    #+#              #
#    Updated: 2021/10/28 12:38:04 by cajose-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ./src

CFLAGS = -Wall -Wextra -Werror
CC = gcc
FLAGLIB = -rcs
RM = /bin/rm -f

LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a

FT_PRINTF = ft_printf_utils.c ft_put_pointer.c ft_puthex.c ft_printf.c
OBJECTS = $(FT_PRINTF:.c=.o)

all:	$(NAME)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	@echo "Linking $(NAME)"
	@cp $(LIBFT) $(NAME)
	@ar $(FLAGLIB) $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(LIBFT): $(LIBFT_DIR)
	@echo "Compiling libft"
	@$(MAKE) -C $(LIBFT_DIR)

%.o: $(SRC)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(RM) $(OBJECTS)

fclean:	clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
