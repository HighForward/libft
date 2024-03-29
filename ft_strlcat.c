/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:35:26 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/06 12:59:43 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t count)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dst[j] && j < count)
		j++;
	i = j;
	while (src[j - i] && j + 1 < count)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < count)
		dst[j] = '\0';
	return (i + ft_strlen((char*)src));
}
