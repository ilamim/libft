/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilamim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:41:23 by ilamim            #+#    #+#             */
/*   Updated: 2021/11/05 14:49:44 by ilamim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size > size)
		dest_size = size;
	if (dest_size == size)
		return (size + src_size);
	i = dest_size;
	while (*src && i < (size - 1))
		dest[i++] = *(src++);
	if (size != 0)
		dest[i] = '\0';
	return (dest_size + src_size);
}
