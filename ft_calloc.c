/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:59:38 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/31 03:51:13 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	buf = malloc(nmemb * size);
	if (buf != NULL)
		ft_bzero(buf, nmemb * size);
	return (buf);
}
