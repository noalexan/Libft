/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:23:05 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/24 18:52:12 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*stringstartskip(int *start, const char *s1, const char *set)
{
	int		o;
	int		j;
	int		pstart;

	start = (int *) -1;
	pstart = *start;
	j = -1;
	o = 1;
	while (s1[++pstart] && o)
	{
		o = 0;
		while (set[++j] && !o)
			if (s1[pstart] == set[j])
				o = 1;
	}
	pstart--;
	start = &pstart;
	return (start);
}

int	*stringendskip(int *end, const char *s1, const char *set)
{
	int		o;
	int		j;
	int		pend;

	end = (int *) ft_strlen(s1) + 1;
	pend = *end;
	j = -1;
	o = 1;
	while (s1[--pend] && o)
	{
		o = 0;
		while (set[++j] && !o)
			if (s1[pend] == set[j])
				o = 1;
	}
	pend++;
	end = &pend;
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	result = ft_calloc(ft_strlen(s1), sizeof(char));
	if (result == NULL)
		return (NULL);
	stringstartskip(&start, (char *) s1, (char *) set);
	stringendskip(&end, (char *) s1, (char *) set);
	printf("\n%d - %d\n", start, end);
	i = -1;
	while (++start < end)
		result[++i] = s1[start];
	result[++i] = '\0';
	return (result);
}
