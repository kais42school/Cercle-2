/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:14:56 by kfredj            #+#    #+#             */
/*   Updated: 2025/08/03 22:09:33 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	write(1, "sa\n", 3);
	swap(stack);
}
void	sb(t_stack *stack)
{
	write(1, "sb\n", 3);
	swap(stack);
}
void	ss(t_stack *stack1, t_stack *stack2)
{
	write(1, "ss\n", 3);
	swap(stack1);
	swap(stack2);
}
