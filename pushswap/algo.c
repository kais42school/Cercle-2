/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:20:56 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/23 17:01:24 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_of_three(t_pswap *ps)
{
	int	x;
	int	y;
	int	z;

	if (!ps || !ps->b || !ps->b->top || !ps->b->top->next
		|| !ps->b->top->next->next)
	{
		write (1, "sortstackthree a return", 24);
		return ;
	}
	x = ps->b->top->value;
	y = ps->b->top->next->value;
	z = ps->b->top->next->next->value;
	if (x < y && y < z && x < z)
	{
		rb(ps->b);
		rb(ps->b);
	}
	if (x < y && y > z && x < z)
		rb(ps->b);
	if (x > y && y < z && x > z)
		rrb(ps->b);
	if (x < y && y > z && x < z)
		sb(ps->b);
	if (x > y && y < z && x > z)
	{
		rrb(ps->b);
		sb(ps->b);
	}
	if (x > y && y > z && x > z)
		return ;
}

/*Faire une fonction qui cible un nombre pour comparer les deux valeurs
  Le nombre doit etre superieur seulement de un cran
  Pour le nombre le plus grand, il ciblera le plus petit nombre(pour rotate)

  1 2 3 = if x < y < z
	- rotate 2 fois
  1 3 2 = if x < y > z
	- rotate
  2 1 3 = if x > y < z
	- reverse rotate
  2 3 1 = if x < y > z
	- swap
  3 1 2 = if x > y < z
	- reverse rotate
	- swap
  ! 3 2 1 = if x > y > z
	- objectif
  */
