/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:21:41 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/06 18:07:51 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoamalloc(int nb)
{
	int xd;

	xd = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		xd++;
	}
	return (xd);
}

static char	*ft_revitoa(char *str)
{
	int size;
	int i;
	char temp;

	i = 0;
	size = ft_strlen(str);
	while(i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char *str;
	int less;
	int nb;
	int i;
	
	less = 0;
	i = 0;
	if (n < 0)
	{
		nb = n * - 1;
		less = 1;
	}
	else
		nb = n;
	if(!(str = (char*)malloc(sizeof(char) * ft_itoamalloc(nb) + 1 + less)))
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	else
	{
		while (nb > 0)
		{
			str[i] = nb % 10 + 48;
			nb = nb / 10;
			i++;
		}
		if (less == 1)
		{
			str[i] = '-';
			i++;
		}
		str[i] = '\0';
		str = ft_revitoa(str);
	}
	return (str);
}
