/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:59:08 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/06 17:20:30 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char *set)
{
	int x;
	
	x = 0;
	while (set[x])
	{
		if (c == set[x])
			return(1);
		x++;
	}
	return (0);
}

static int	checkset(char *s1, char *set)
{
	int i;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	return (i);
}

static int	checkendset(char *s1, char *set)
{
	int i;
	int len;

	len = ft_strlen(s1) - 1;
	i = 0;
	while (is_set(s1[len], set))
	{
		len--;
		i++;
	}
	return(i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int start;
	int end;
	char *trim;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char*)s1);
	i = 0;
	start = checkset((char*)s1, (char*)set);
	end = checkendset((char*)s1, (char*)set);
	if (!(trim = (char*)malloc(sizeof(char) * ft_strlen((char*)s1 - (end + start)))))
		return (NULL);
	while (i < ft_strlen((char*)s1) - (end + start))
	{
		trim[i] = (char)s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
