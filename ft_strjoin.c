/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 19:51:18 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 20:43:08 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	const size_t	len1 = ft_strlen(s1);
	const size_t	len2 = ft_strlen(s2);
	char *const		nstr = malloc(len1 + len2 + 1);

	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, s1, len1);
	ft_memcpy(nstr + len1, s2, len2);
	nstr[len1 + len2] = 0;
	return (nstr);
}
