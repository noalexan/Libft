/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:03:29 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 20:51:09 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	const size_t	len = ft_strlen(s);
	const size_t	set_len = ft_strlen(set);
	const char		*start;
	const char		*end;

	start = s;
	end = s + len;
	if (!s)
		return (NULL);
	while (*start && ft_memchr(set, *start, set_len))
		start++;
	if (start != end)
		while (ft_memchr(set, *(--end), set_len))
			;
	return (ft_substr(s, start - s, end - start + 1));
}
