/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:48:42 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 16:00:04 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	unsigned int	i;

	d = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
	s = (void*)d;
}
