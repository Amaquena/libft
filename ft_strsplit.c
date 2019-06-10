/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:11:53 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/10 14:34:24 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freetab(char **tab, int pos)
{
	int i;

	i = -1;
	while (++i < pos)
		free(tab[i]);
}

static int		ft_wordcount(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *str, char c, int wdpos)
{
	int count;

	count = 0;
	while (str[wdpos] != c && str[wdpos] != '\0')
	{
		count++;
		wdpos++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
    int i;
    int j;
    int k;
    int wlen;
    int wcount;
    char **str;
    
    wcount = ft_wordcount(s,c);
    if ( !c || !s || !(str = (char **)malloc(sizeof(char *) * wcount)))
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        wlen = ft_wordlen(s, c, i);
        while (j < wcount && s[i] != c)
        {
            if (!c || !s || !(str[j] = (char *)malloc(sizeof(char) * wlen + 1)))
			{
				ft_freetab(str, j);
				free(str);
                return (NULL);
			}
            k = 0;
            while (wlen > 0)
            {
                str[j][k] = s[i];
                k++;
                i++;
                wlen--;
            }
            str[j][k] = '\0';
            j++;
        }
    }
    return (str);
}
/*
int main (void)
{
	wc = 0;
	int	wl = 0;
	char *a = "*Hello**fellow**student*";

	wc = ft_wordcount(a,'l');
	wl = ft_wordlen(a, '*', 16);
	printf("%d", wl);
}*/
