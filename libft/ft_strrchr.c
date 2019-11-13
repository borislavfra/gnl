/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwalda-r <dwalda-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 18:36:24 by dwalda-r          #+#    #+#             */
/*   Updated: 2019/03/15 15:20:04 by dwalda-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if ((unsigned char)c == '\0')
		return (ft_strchr(s, c));
	while (*s)
	{
		if ((ft_strchr(s, c)) != NULL)
			ptr = ft_strchr(s, c);
		s++;
	}
	return (ptr);
}
