# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:32:53 by event             #+#    #+#              #
#    Updated: 2019/05/21 13:42:52 by amaquena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_strlen.c
OFILES = ft_strlen.o

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
re: all fclean

#clean remove unneccessary files
#re make then clean to remove un files rm a.out & .o
#remove exe file & all o files feclean make & fclean
