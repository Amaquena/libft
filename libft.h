/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:24:43 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/22 13:05:02 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

//memset;
//bzero;
//memcpy;
//memccpy;
//memmove;
//memchr;
//memcmp;
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
//strchr;
//strrchr;
//strstr;
//strnstr;
//strcmp;
//strncmp;
//atoi;
//isalpha;
//isdigit;
//isalnum;
//isascii;
//isprint;
//toupper;
//tolower;

#endif
