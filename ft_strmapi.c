/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 22:02:52 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 22:38:17 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	const size_t	len = ft_strlen(s);
	char *const		nstr = malloc(len + 1);
	size_t			i;

	i = 0;
	if (s)
	{
		while (*s)
		{
			nstr[i] = f(i, *(s++));
			i++;
		}
	}
	return (nstr);
}
