# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 12:44:47 by hounajar          #+#    #+#              #
#    Updated: 2025/02/15 15:02:06 by hounajar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

NAME = push_swap

SRCS = push_swap.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	@$(CC) -c $< -o $@


clean:
	make -C $(LIBFT_DIR) clean
	@$(RM) $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME)

re: fclean all