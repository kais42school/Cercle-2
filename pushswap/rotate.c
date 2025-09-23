/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:30:43 by kfredj            #+#    #+#             */
/*   Updated: 2025/08/03 22:11:30 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	write(1, "ra\n", 3);
	rotate(stack);
}
void	rb(t_stack *stack)
{
	write(1, "rb\n", 3);
	rotate(stack);
}
void	rr(t_stack *stack1, t_stack *stack2)
{
	write(1, "rr\n", 3);
	rotate(stack1);
	rotate(stack2);
}
