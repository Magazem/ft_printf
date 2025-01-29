# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 16:14:06 by ysuliman          #+#    #+#              #
#    Updated: 2024/03/12 16:15:34 by ysuliman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT		= ./libft/libft.a
LIBFTDIR	= ./libft
LIBFT_URL = https://github.com/Magazem/libft.git

SRC			= ./files

PRINTF_SRCS	= ft_printf.c ft_printf_hexa.c ft_printf_point.c \
				ft_printf_uns.c ft_printf_func.c

OBJS		= $(PRINTF_SRCS:.c=.o)

CC			= cc 
AR			= ar rcs
RM			= rm -rf 
CFLAGS		= -Wall -Wextra -Werror
CP			= cp

all:		$(NAME)

$(LIBFT): $(LIBFTDIR)
	@$(MAKE) --no-print-directory bonus -C $(LIBFTDIR)

$(LIBFTDIR):
	@echo "$(CYAN)Downloading libft...$(NORMAL)"
	git clone -q $(LIBFT_URL) $(LIBFTDIR)
	@echo "$(GREEN)Libft downloaded successfully$(NORMAL)"

$(NAME):	$(LIBFT) $(OBJS)
				$(CP) $(LIBFT) $(NAME)
				@$(AR) $(NAME) $(OBJS)

$(LIBFT):	$(LIBFTDIR)
				@$(MAKE) -C $(LIBFTDIR)

%.o: 		$(SRC)/%.c
				@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(MAKE) clean -C $(LIBFTDIR)
			@$(RM) $(OBJS)

fclean:		clean
				@$(RM) ${LIBFTDIR}
				@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
