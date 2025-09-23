/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:35:32 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/23 19:11:08 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	char	**splitout;
// 	t_pswap	*ps;

// 	if (argc == 1)
// 		return (0);
// 	splitout = parse1(argv);
// 	if (!splitout)
// 	{
// 		printf("Error\n");
// 		free_tab(splitout);
// 		return (0);
// 	}
// 	ps = pswap_init();
// 	ps->a = parse2(splitout);
// 	ps->b = NULL;
// 	free_tab(splitout);
// 	if (!ps->a)
// 	{
// 		printf("Error dupe\n");
// 		free_pswap(ps);
// 		return (0);
// 	}
// 	free_tab(splitout);
// 	printf("Stack Initialisee\n");
// 	pb(ps);
// 	pb(ps);
// 	pb(ps);
// 	sort_stack_of_three(ps);
// 	free_pswap(ps);
// 	return (0);
// }

int	main(int argc, char **argv)
{
	char	**splitout;
	t_pswap	*ps;

	if (argc == 1)
		return (0);
	splitout = parse1(argv);
	if (!splitout)
	{
		printf("Error\n");
		return (0);
	}
	ps = pswap_init();
	if (!ps)
	{
		printf("Error\n");
		free_tab(splitout);
		return (0);
	}
	ps->a = parse2(splitout);
	ps->b = NULL;
	if (!ps->a)
	{
		printf("Error psa\n");
		free_tab(splitout);
		free_pswap(ps);
		return (0);
	}
	printf("Stack Initialisee\n");
	free_tab(splitout);
	free_pswap(ps);
	return (0);
}
