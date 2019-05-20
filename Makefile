# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:32:53 by event             #+#    #+#              #
#    Updated: 2019/05/20 13:40:17 by event            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = *.c
OFILES = *.o

$(NAME):
	gcc -c -Wall -Wextra -Werror $(CFILES)
	ar rc $(NAME) $(CFILES)
	ranlib $(NAME)

all: $(NAME)
clean:
	rm -r *o
fclean: clean
	rm -r *.a
re: all fclean

*clean remove unneccessary files
*re make then clean to remove un files rm a.out & .o
*remove exe file & all o files feclean make & fclean