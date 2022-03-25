/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:23:05 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/25 14:27:11 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stringstartskip(int *start, const char *s1, const char *set)
{
	int		o;
	int		j;
	int		pstart;

	*start = -1;
	pstart = *start;
	j = -1;
	o = 1;
	while (s1[++pstart] && o)
	{
		o = 0;
		while (set[++j] && !o)
			if (s1[pstart] == set[j])
				o = 1;
		j = -1;
		if (!o)
			pstart--;
	}
	pstart--;
	start = &pstart;
	return (pstart);
}

static int	stringendskip(int *end, const char *s1, const char *set)
{
	int		o;
	int		j;
	int		pend;

	*end = ft_strlen(s1);
	pend = *end;
	j = -1;
	o = 1;
	while (--pend > 0 && o)
	{
		o = 0;
		while (set[++j] && !o)
			if (s1[pend] == set[j])
				o = 1;
		j = -1;
		if (o == 0)
			pend++;
	}
	end = &pend;
	return (pend);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	result = ft_calloc(ft_strlen(s1) + 2, sizeof(char));
	if (result == NULL)
		return (NULL);
	start = stringstartskip(&start, (char *) s1, (char *) set);
	end = stringendskip(&end, (char *) s1, (char *) set);
	i = -1;
	while (++start <= end)
		result[++i] = s1[start];
	result[++i] = '\0';
	return (result);
}
