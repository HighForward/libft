/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:21:08 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 15:08:02 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (!(temp = malloc(nmemb * size)) || (nmemb == 0 || size == 0))
		return (NULL);
	ft_bzero(temp, nmemb);
	return (temp);
}
