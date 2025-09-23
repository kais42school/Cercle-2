/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:07:18 by kfredj            #+#    #+#             */
/*   Updated: 2025/07/29 16:14:12 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init()
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	return (stack);
}

void	stack_add(t_stack *stack, t_node *node)
{
	t_node *tmp;

	if (!stack || !node)
		return ;
	if (!stack->top)
		stack->top = node;
	else
	{
		tmp = stack->top;
		while (tmp && tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}
}

void	stack_destoy(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->top)
		node_destroy_all(stack->top);
	free(stack);
}
