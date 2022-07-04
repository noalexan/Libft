/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:22:32 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/03 09:39:57 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int value, int index, int order, t_stack *next)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->next = next;
	stack->index = index;
	stack->order = order;
	return (stack);
}
