/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:35 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/24 08:59:22 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	i;

	i = -1;
	printf("\n%s -- %s (size = %zu)\n", source, destination, size);
	if (!source || !destination || size <= 0 || size > ft_strlen(source))
		return (ft_strlen(source));
	while (++i < size - 1)
		destination[size + i] = source[i];
	destination[i] = '\0';
	printf("%s -- %s\n", source, destination);
	return (ft_strlen(source));
}
