/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:42:12 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/05 15:07:42 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*temp;
	char	*dup;
	int		i;

	i = 0;
	temp = (char*)s;
	len = ft_strlen(temp);
	if (!(dup = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		dup[i] = temp[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
