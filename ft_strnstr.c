/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:48:55 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 17:45:10 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	y;
	char			*s;
	char			*d;

	i = 0;
	y = 0;
	s = (char*)s1;
	d = (char*)s2;
	if (ft_strlen(d) == 0)
		return (s);
	if (ft_strlen(s) == 0)
		return (NULL);
	while (s[i] && i < n)
	{
		while (d[y] == s[i + y] && i + y < n)
		{
			y++;
			if (d[y] == '\0')
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
