# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 14:10:16 by ysuliman          #+#    #+#              #
#    Updated: 2024/03/07 17:27:04 by ysuliman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRCS	=	ft_atoi.c \
			ft_isalnum.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_calloc.c \
			ft_split.c \
			ft_bzero.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_memset.c \
			ft_strchr.c \
			ft_substr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strjoin.c 

OBJS	= $(SRCS:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .
.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS} 
	${LIBC} $(NAME) $(OBJS) 

all: $(NAME)

bonus: $(NAME) $(OBJS_B)
	${LIBC} $(NAME) $(OBJS_B)
    
fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all
