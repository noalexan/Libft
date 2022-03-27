/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:41 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/27 11:09:38 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = -1;
	// if (!first || !second)
	// 	return ((int) NULL);
	while (++i < length)
		if (first[i] != second[i])
			return ((int) first[i] - (int) second[i]);
	return (0);
}
