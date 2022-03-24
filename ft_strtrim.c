/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:23:05 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/24 16:57:31 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	l;
	int		o;

	result = ft_calloc(ft_strlen(s1), sizeof(char));
	if (result == NULL)
		return (NULL);
	i = -1;
	j = -1;
	l = -1;
	o = 1;
	while (s1[++i])
	{
		while (s1[++i] && o)
		{
			o = 0;
			while (set[++j] && !o)
				if (s1[i] == set[j])
					o = 1;
		}
	}
	return (result);
}
