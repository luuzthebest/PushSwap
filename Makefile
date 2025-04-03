# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 12:44:47 by hounajar          #+#    #+#              #
#    Updated: 2025/04/03 22:07:47 by lvvz             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

NAME = push_swap

BONUS_NAME = checker

SRCS = push_swap.c utils.c ops.c ops_base.c ops_r.c lil_sort.c big_sort.c p_utils.c

B_SRCS = checker.c gnl.c utils.c gnl_utils.c ops.c ops_base.c ops_r.c p_utils.c

MAKEFLAGS += --no-print-directory

all: $(LIBFT) $(NAME)

bonus: $(LIBFT) $(BONUS_NAME)

	
$(LIBFT):
	@echo LIBFT LOADING.. 
	@make -C $(LIBFT_DIR)

$(NAME): $(SRCS) $(LIBFT)
	@echo PUSH_SWAP LOADING..
	@$(CC) $(SRCS) $(LIBFT) -o $(NAME)

$(BONUS_NAME): $(B_SRCS) $(LIBFT)
	@echo BONUS LOADING..
	@$(CC) $(B_SRCS) $(LIBFT) -o $(BONUS_NAME)

clean:
	@echo CLEANING..
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo FULL CLEANING..
	@make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re