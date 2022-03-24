/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:19:17 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/23 15:19:19 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;

	if (!s || start < 0 || len < 0)
		return (NULL);
	copy = ft_calloc(len, sizeof(char));
	i = 0;
	while (i <= len)
	{
		copy[i] = s[start];
		start++;
		i++;
	}
	return (copy);
}
