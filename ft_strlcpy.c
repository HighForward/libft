/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:45:15 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 18:06:52 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char			*s;

	s = (char*)src;
	i = 0;
	if (size == 0)
		return (ft_strlen(s));
	while (s[i] && i < size - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(s));
}
