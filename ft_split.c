/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:48:52 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/06 16:57:28 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checknextc(char *s, char c, int i)
{
	int size;

	size = 0;
	while(s[i] && s[i] != c)
	{
		i++;
		size++;
	}
	return (size);
}

static int	ft_nbword(char *s, char c)
{
	int i;
	int word;
	
	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static char	*ft_putstring(char *s, int i, int size)
{
	char *cpy;
	int x;
	
	x = 0;
	cpy = (char*)malloc(sizeof(char) * size + 1);
	while (s[i] && x < size)
	{
		cpy[x] = s[i];
		i++;
		x++;
	}
	cpy[x] = '\0';
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int nbword;
	char **split;
	int size;
	int j;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	nbword = ft_nbword((char*)s, c);
	if (!(split = (char**)malloc(sizeof(char*) * nbword + 1)))
		return (NULL);
	while(s[i] && j < nbword)
	{
		if(s[i] != c)
		{
			size = ft_checknextc((char*)s, c, i);
			split[j] = ft_putstring((char*)s, i, size);
			i = i + size;
			j++;
		}
		i++;
	}
	split[nbword] = NULL;
	return (split);
}
