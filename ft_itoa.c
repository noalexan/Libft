/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:33:30 by noalexan          #+#    #+#             */
/*   Updated: 2026/03/28 22:21:44 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_compute_len(int n)
{
	if (n)
		return (ft_compute_len(n / 10) + 1);
	return (1);
}

static void	ft_perform_itoa(char **str, int n)
{
	static const char	base[] = "0123456789";

	if (n < 10)
		**str = base[n];
	else
	{
		ft_perform_itoa(str, n / 10);
		(*str)++;
		ft_perform_itoa(str, n % 10);
	}
}

char	*ft_itoa(int n)
{
	const size_t	len = ft_compute_len(n);
	char *const		nstr = malloc(len + 1);
	char			*ptr;

	if (!nstr)
		return (NULL);
	ptr = nstr;
	ft_perform_itoa(&ptr, n);
	return (nstr);
}
