/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilamim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:07:27 by ilamim            #+#    #+#             */
/*   Updated: 2021/11/05 14:13:51 by ilamim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	stop;

	stop = 0;
	while (*src != '\0' && stop < n)
	{
		*dest = *src;
		dest++;
		src++;
		stop++;
	}
	*dest = '\0';
	return (dest);
}
