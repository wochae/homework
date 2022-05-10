# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 08:50:44 by wochae            #+#    #+#              #
#    Updated: 2022/04/30 10:12:24 by wochae           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #



NAME		:=	libftprintf.a

CC			:=	cc
CFLAGS		:=	-Wall -Wextra -Werror
AR			:=	ar
ARFLAGS		:=	-rcs
RM			:=	rm -f

LIBFTDIR	:=	./libft
PRINTFDIR	:=	./ft_printf

SRCS		:=	\
				ft_printf.c \
				ft_printf_utils.c


OBJS		=	$(addprefix $(PRINTFDIR)/, $(notdir $(SRCS:.c=.o)))

.PHONY:			all clean fclean re bonus

all:		$(NAME)

clean:
			make clean --directory=$(LIBFTDIR)
			$(RM) $(OBJS)

fclean:	clean
			make fclean --directory=$(LIBFTDIR)
			$(RM) $(NAME)

re:		fclean bonus

$(NAME): $(OBJS)
			make bonus --directory=$(LIBFTDIR)
			cp $(LIBFTDIR)/libft.a $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)
