/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:00:21 by omghazi           #+#    #+#             */
/*   Updated: 2023/11/14 05:18:51 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (dst);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n--)
		*destination++ = *source++;
	return (dst);
}
