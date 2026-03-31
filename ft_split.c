/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:51:23 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/31 16:10:22 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	ft_dup_next_segment(char **dst, char *s, char **end_ptr, char c)
{
	const char	*base_end_ptr;
	size_t		len;

	while (*end_ptr > s && *(*end_ptr - 1) == c)
		(*end_ptr)--;
	base_end_ptr = *end_ptr;
	while (*end_ptr > s && *(*end_ptr - 1) != c)
		(*end_ptr)--;
	len = base_end_ptr - *end_ptr;
	if (len)
	{
		*dst = ft_substr(s, *end_ptr - s, len);
		if (*dst == NULL)
			return (-1);
	}
	return (len);
}

char	**ft_split(const char *s, char c)
{
	const char	*ptr = s;
	size_t		seg_count;
	size_t		array_indx;
	char		**array;

	if (!s)
		return (NULL);
	seg_count = 0;
	while (*ptr)
		if (*(ptr++) != c && (*ptr == c || *ptr == 0))
			seg_count++;
	array_indx = seg_count;
	array = ft_calloc(seg_count + 1, sizeof(char *));
	while (array && array_indx > 0)
	{
		if (ft_dup_next_segment(array + --array_indx, (char *)s,
				(char **)&ptr, c) == (size_t)(-1))
		{
			while (array_indx < seg_count)
				free(array[array_indx++]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
