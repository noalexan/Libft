/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 19:40:50 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 20:42:51 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	const size_t	length = ft_strlen(s);
	char *const		nstr = malloc(length + 1);

	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, s, length);
	nstr[length] = 0;
	return (nstr);
}
