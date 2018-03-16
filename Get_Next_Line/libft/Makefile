# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdragos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/25 16:17:16 by tdragos           #+#    #+#              #
#    Updated: 2018/01/15 20:23:41 by tdragos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNCTIONS = ft_strlen ft_strcpy ft_strdup ft_strncpy ft_strcat ft_strncat \
			ft_strchr ft_strrchr ft_strstr ft_strlcat ft_strnstr ft_strcmp \
			ft_strncmp ft_tolower ft_toupper ft_isprint ft_isascii \
			ft_isalpha ft_isdigit ft_isalnum ft_atoi ft_memset \
			ft_bzero ft_memcpy ft_memccpy ft_memcmp ft_memmove \
			ft_memchr ft_memalloc ft_memdel ft_strnew ft_strdel \
			ft_strclr ft_striter ft_striteri ft_strmap ft_strmapi \
			ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim \
			ft_strsplit ft_putchar ft_putstr ft_putendl ft_putnbr \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
			ft_countdigit ft_itoa ft_pow ft_lstnew ft_lstdelone \
			ft_lstdel ft_lstadd ft_lstiter ft_lstmap ft_min \
			ft_max ft_swap_int ft_strcutuntil ft_strshorten

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(patsubst %,%.c,$(FUNCTIONS))
	ar rcs $(NAME) $(patsubst %,%.o,$(FUNCTIONS))

clean:
	@rm -f $(patsubst %,%.o,$(FUNCTIONS))

fclean: clean
	@rm -f $(NAME)

re: fclean all
