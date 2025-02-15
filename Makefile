# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 12:44:47 by hounajar          #+#    #+#              #
#    Updated: 2025/02/15 13:10:58 by hounajar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

NAME = push_swap.a

SRCS = push_swap.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
    make -c $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(OBJS) $(LIBFT) -O $(NAME)

%.o: %.c
	@$(CC) -c $< -o $@

clean:
    make -c $(LIBFT_DIR) clean
	@$(RM) $(OBJS)

fclean: clean
    make -c $(LIBFT_DIR) fclean
	@$(RM) $(NAME)

re: fclean all