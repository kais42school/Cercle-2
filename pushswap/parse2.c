/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:24:56 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/25 22:17:09 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse2(char **splitout)
{
	int		i;
	int		stock;
	t_stack	*skyscraper;

	skyscraper = NULL;
	i = 0;
	stock = 0;
	if (!splitout)
		return (NULL);
	while (splitout[i])
	{
		stock = ft_atoi(splitout[i]);
		add_list(&skyscraper, stock);
		i++;
	}
	if (check_dupe(skyscraper) == 1)
	{
		stack_destoy(skyscraper);
		return (NULL);
	}
	return (skyscraper);
}
