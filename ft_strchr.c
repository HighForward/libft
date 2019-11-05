/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:10:31 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 18:15:34 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	int		i;

	temp = (char*)s;
	i = 0;
	while (s[i])
	{
		if (temp[i] == (unsigned char)c)
			return (&temp[i]);
		i++;
	}
	return (NULL);
}
