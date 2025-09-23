/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pswap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:05:37 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/23 19:21:43 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pswap	*pswap_init(void)
{
	t_pswap	*pswap;

	pswap = malloc(sizeof(t_pswap));
	if (!pswap)
		return (NULL);
	pswap->a = stack_init();
	if (!pswap->a)
	{
		free(pswap);
		return (NULL);
	}
	pswap->a->top = NULL;
	pswap->b = stack_init();
	if (!pswap->b)
	{
		stack_destoy(pswap->a);
		free(pswap->a);
		free(pswap);
		return (NULL);
	}
	return (pswap);
}

void	pswap(t_pswap *ps)
{
	if (!ps)
		return ;
	if (ps->a)
		stack_destoy(ps->a);
	if (ps->b)
		stack_destoy(ps->b);
}
void	free_pswap(t_pswap *ps)
{
	if (!ps)
		return ;
	if (ps->a)
	{
		stack_destoy(ps->a);
		free(ps->a);
	}
	if (ps->b)
	{
		stack_destoy(ps->b);
		free(ps->b);
	}
	free(ps);
}
