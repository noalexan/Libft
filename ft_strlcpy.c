/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 05:49:45 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/31 04:44:06 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	const size_t	len = ft_strlen (src);

	if (len >= dsize)
	{
		if (dsize > 0)
		{
			ft_memcpy (dst, src, dsize);
			dst[dsize - 1] = 0;
		}
	}
	else
		ft_memcpy (dst, src, len + 1);
	return (len);
}
