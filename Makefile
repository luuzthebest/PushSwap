# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 12:44:47 by hounajar          #+#    #+#              #
#    Updated: 2025/04/04 09:42:18 by lvvz             ###   ########.fr        #
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

OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)

MAKEFLAGS += --no-print-directory

all: $(LIBFT) $(NAME)

bonus: $(LIBFT) $(BONUS_NAME)

	
$(LIBFT):
	@echo LIBFT LOADING.. 
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT) push_swap.h
	@echo PUSH_SWAP LOADING..
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME)

$(BONUS_NAME): $(B_OBJS) $(LIBFT) push_swap_bonus.h
	@echo BONUS LOADING..
	@$(CC) $(B_OBJS) $(LIBFT) -o $(BONUS_NAME)

%.o: %.c
	@$(CC) -c $< -o $@
clean:
	@echo CLEANING..
	@$(RM) $(OBJS) $(B_OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo FULL CLEANING..
	@make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus