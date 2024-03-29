/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:34:28 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 17:26:36 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*d;

	d = (char*)s;
	i = ft_strlen(d);
	while (i >= 0)
	{
		if (d[i] == (char)c)
			return (&d[i]);
		i--;
	}
	return (NULL);
}
