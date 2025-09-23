/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:33:06 by kfredj            #+#    #+#             */
/*   Updated: 2025/08/03 22:10:41 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	reverse_rotate(stack);
	write(1, "rra\n", 3);
}
void	rrb(t_stack *stack)
{
	write(1, "rrb\n", 3);
	reverse_rotate(stack);
}
void	rrr(t_stack *stack1, t_stack *stack2)
{
	write(1, "rrr\n", 3);
	reverse_rotate(stack1);
	reverse_rotate(stack2);
}
