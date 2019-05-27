# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:32:53 by event             #+#    #+#              #
#    Updated: 2019/05/27 16:06:51 by amaquena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c
OFILES = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_tolower.o ft_toupper.o ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isprint.o ft_isascii.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o

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

gcc:
	@gcc main.c $(NAME)
	@./a.out

#clean remove unneccessary files
#re make then clean to remove un files rm a.out & .o
#remove exe file & all o files feclean make & fclean
