/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:56:35 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/30 18:06:14 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!stack)
		return ;
	if (!stack->top)
		return ;
	tmp->value = stack->top->value;
	stack->top->value = stack->top->next->value;
	stack->top->next->value = tmp->value;
}

t_node	*pop(t_stack *stack)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!stack)
		return (NULL);
	if (!stack->top)
		return (NULL);
	tmp->value = stack->top->value;
	tmp->next = NULL;
	stack->top = stack->top->next;
	return (tmp);
}

void	push(t_stack *stack, t_node *node)
{
	if (!stack || !node)
		return ;
	if (!stack->top)
		stack->top = node;
	else
	{
		node->next = stack->top;
		stack->top = node;
	}
}

void	rotate(t_stack *stack)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!stack)
		return ;
	if (!stack->top)
		return ;
	tmp = stack->top;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next->value = stack->top->value;
	stack->top->value = stack->top->next->value;
	// tmp->next->next->value = NULL;
}

void	reverse_rotate(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	if (!stack->top)
		return ;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = stack->top;
	stack->top->next = NULL;
	stack->top = tmp;
}
