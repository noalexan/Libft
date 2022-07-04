/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:08:18 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:14:07 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*copy;

	copy = ft_calloc(ft_strlen(source) + 5, sizeof(char));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, source, ft_strlen(source));
	return (copy);
}
