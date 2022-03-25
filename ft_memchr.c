/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:48:18 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/25 09:32:32 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		if (((unsigned char *) memoryBlock)[i] == (unsigned char) searchedChar)
			return ((void *) &memoryBlock[i]);
	return (NULL);
}
