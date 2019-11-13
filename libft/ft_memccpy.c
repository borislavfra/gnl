/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwalda-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:50:38 by dwalda-r          #+#    #+#             */
/*   Updated: 2018/12/26 16:12:17 by dwalda-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	b;

	b = c;
	i = 0;
	while (i < n)
	{
		a = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = a;
		if (a == b)
			return (((void *)(dst + i + 1)));
		i++;
	}
	return (NULL);
}
