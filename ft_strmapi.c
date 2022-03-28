/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:16:41 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/28 14:54:14 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*strmapi;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (0);
	strmapi = ft_calloc(ft_strlen(s), sizeof(char));
	if (strmapi == NULL)
		return (0);
	len = ft_strlen(s);
	i = -1;
	while (s[++i])
		strmapi[i] = (*f)(i, s[i]);
	strmapi[i] = '\0';
	return (strmapi);
}
