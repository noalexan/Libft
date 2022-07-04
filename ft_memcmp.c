/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:15:31 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:23:00 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned long	position;
	int				delta;

	position = -1;
	while (++position < size)
	{
		delta = *(unsigned char *)pointer1++ - *(unsigned char *)pointer2++;
		if (delta)
			return (delta);
	}
	return (0);
}
