/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 19:43:34 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 21:58:23 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	const char	*base_ptr = s + start;
	char *const	nstr = malloc(len + 1);

	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, base_ptr, len);
	nstr[len] = 0;
	return (nstr);
}
