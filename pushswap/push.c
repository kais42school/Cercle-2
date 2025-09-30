/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:28:50 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/30 17:49:51 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_pswap *ps)
{
	t_node	*node;

	write(1, "pa\n", 3);
	node = pop(ps->b);
	push(ps->a, node);
}
void	pb(t_pswap *ps)
{
	t_node	*node;

	printf("pb FUNCTION\n");
	print_stack(ps->a, 'A');
	print_stack(ps->b, 'B');
	// write(1, "pb\n", 3);
	node = pop(ps->a);
	push(ps->b, node);
	printf("pb FUNCTION AFTER\n");
	print_stack(ps->a, 'A');
	print_stack(ps->b, 'B');
}
