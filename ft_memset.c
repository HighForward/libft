/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:02:50 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/04 15:03:05 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;
	unsigned int	i;

	i = 0;
	d = (unsigned char*)s;
	while (i < n)
	{
		d[i] = (char)c;
		i++;
	}
	s = (void*)d;
	return (s);
}
