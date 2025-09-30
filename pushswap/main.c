/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:35:32 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/30 18:02:24 by kfredj           ###   ########.fr       */
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

void	print_stack(t_stack *stack, char name)
{
	t_node	*current;

	if (!stack)
	{
		ft_putstr("Stack ");
		write(1, &name, 1);
		ft_putstr(" est NULL\n");
		return ;
	}
	// 2. Affiche l'en-tête de la pile
	ft_putstr("\n--- Pile ");
	write(1, &name, 1);
	ft_putstr(" ---\n");
	// 3. Parcourt la pile
	current = stack->top;
	if (!current)
	{
		ft_putstr("(Pile vide)\n");
	}
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	ft_putstr("----------\n");
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
	stack_destoy(ps->a);
	stack_destoy(ps->b);
	ps->a = parse2(splitout);
	ps->b = stack_init();
	free_tab(splitout);
	if (!ps->a)
	{
		printf("Error psa\n");
		free_pswap(ps);
		return (0);
	}
	printf("Stack Initialisee\n");
	print_stack(ps->a, 'A');
	print_stack(ps->b, 'B');
	pb(ps);
	pb(ps);
	pb(ps);
	print_stack(ps->a, 'A');
	print_stack(ps->b, 'B');
	sort_stack_of_three(ps);
	free_pswap(ps);
	return (0);
}
