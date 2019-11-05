/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:35:26 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 13:18:24 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	char			*s;

	j = 0;
	i = ft_strlen(dst);
	s = (char*)src;
	while (src[j] && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + j] = '\0';
	return (i + j);
}
