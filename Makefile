# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 14:27:51 by hyungjup          #+#    #+#              #
#    Updated: 2022/11/16 15:28:18 by hyungjup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = CC
CFLAG = -Wall -Wextra -Werror
HEADER = libft.h

SRCS =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_bzero.c \
		ft_memset.c ft_memchr.c ft_memcpy.c ft_memmove.c \
		ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
		ft_strdup.c ft_atoi.c ft_calloc.c ft_strjoin.c \
		ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c \
			ft_lstsize.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRCS.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@ -I $(HEADER)

$(NAME): $(OBJS)
	ar rc $@ $^

bonus: $(OBJS) $(BONUS_OBJ)
	ar rc $(NAME) $^

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: bonus clean fclean re