# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:32:53 by event             #+#    #+#              #
#    Updated: 2019/05/22 13:04:28 by amaquena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
OFILES = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o

$(NAME):
	gcc -c -Wall -Wextra -Werror $(CFILES)
	ar rcs $(NAME) $(OFILES)
	ranlib $(NAME)

all: $(NAME)
clean:
	rm -r $(OFILES)
fclean: clean
	rm -r *.a
	rm -f a.out
re: fclean all

#clean remove unneccessary files
#re make then clean to remove un files rm a.out & .o
#remove exe file & all o files feclean make & fclean
