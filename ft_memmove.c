/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:05:57 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/04 15:06:10 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*cpy;
	unsigned char	*s;
	unsigned char	temp[n];

	s = (unsigned char*)src;
	cpy = (unsigned char*)dest;
	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cpy[i] = temp[i];
		i++;
	}
	dest = (void*)cpy;
	return (dest);
}
