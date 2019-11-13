/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwalda-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:16:38 by dwalda-r          #+#    #+#             */
/*   Updated: 2018/12/26 18:51:27 by dwalda-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	dstsz;
	size_t	srcsz;

	srcsz = (size_t)ft_strlen(src);
	if ((dstsz = (size_t)ft_strlen(dst)) >= size)
		return (size + srcsz);
	if (srcsz < size - dstsz)
		ft_strncpy(dst + dstsz, src, srcsz + 1);
	else
	{
		ft_strncpy(dst + dstsz, src, size - dstsz - 1);
		*(dst + size - 1) = '\0';
	}
	return (dstsz + srcsz);
}
