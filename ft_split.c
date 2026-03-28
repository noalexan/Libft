/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:51:23 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 21:23:25 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_dup_next_segment(const char *s, const char **ptr, char c)
{
	const char	*base_ptr = (*ptr)--;

	while (*ptr != s && **ptr != c)
		(*ptr)--;
	return (ft_substr(s, *ptr - s, base_ptr - *ptr));
}

char	**ft_split(const char *s, char c)
{
	const char		*ptr = s;
	size_t			seg_count;
	size_t			array_indx;
	char			**array;

	seg_count = 1;
	while (*ptr)
		if (*(ptr++) == c)
			seg_count++;
	array_indx = seg_count;
	array = malloc(sizeof(char *) * seg_count);
	if (array == NULL)
		return (NULL);
	while (ptr != s)
	{
		array[--array_indx] = ft_dup_next_segment(s, &ptr, c);
		if (array[array_indx] == NULL)
		{
			while (++array_indx < seg_count)
				free(array[array_indx]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
