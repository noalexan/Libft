/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:55:19 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/25 14:26:53 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(const char *string, const char separator)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (string[++i])
		if (string[i] == separator && string[i - 1] != separator)
			j++;
	return (j + 1);
}

static int	ft_sizeofword(int i, const char *string, const char separator)
{
	int	len;
	int	j;

	j = 0;
	while (string[++i])
	{
		len = 0;
		if (string[i] == separator && string[i - 1] != separator)
			j++;
	}
	printf("%d\n", j);
	return (j);
}

static char	**ft_callocword(char **split, const char *string, const char separator)
{
	int	i;

	i = 0;
	while (i <= ft_wordcounter(string, separator))
	{
		split[i] = ft_calloc(ft_sizeofword(i, string, separator) + 1, sizeof(char));
		printf("split[%d] malloced\n", i);
	}
	return (split);
}

char	**ft_split(const char *string, char separator)
{
	char	**split;
	int		i;
	int		j;
	int		l;

	if (!string)
		return (NULL);
	split = ft_calloc(ft_wordcounter(string, separator) + 1, sizeof(char *));
	if (split == NULL)
		return (NULL);
	split = ft_callocword(split, string, separator);
	printf("\nCALLOC: done\n");
	i = 0;
	l = 0;
	j = 0;
	printf("STRING: \"%s\" -- SEPARATOR: '%c'\n", string, separator);
	printf("--- WHILE START ---\n");
	while (string[i])
	{
		printf("'%c' index (%d)\n", string[i], i);
		if (string[i] == separator)
		{
			split[j][l] = '\0';
			j++;
			l = 0;
			printf("TAB FINISHED: \"%s\" (split[%d])\n", split[j - 1], j - 1);
			printf("- NEW TAB -\n");
		}
		else
		{
			printf("write '%c' into split[%d][%d]\n", string[i], j, l);
			split[j][l] = string[i];
			l++;
			printf("write done\n");
		}
		i++;
	}
	printf("---  WHILE END  ---\n");
	return (split);
}
