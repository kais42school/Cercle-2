/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:35:00 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/23 19:06:36 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	parse1_2(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
	{
		if (is_int(tab[i]) == 1)
		{
			free_tab(tab);
			return (0);
		}
		i++;
	}
	return (1);
}

char	**parse1(char **entry)
{
	char	*splitout;
	int		i;
	char	**tab;

	tab = NULL;
	i = 1;
	splitout = malloc(1);
	splitout[0] = '\0';
	while (entry && entry[i])
	{
		ft_append(&splitout, entry[i]);
		ft_append(&splitout, " ");
		i++;
	}
	i = 0;
	tab = ft_split(splitout, ' ');
	free(splitout);
	if (parse1_2(tab) == 0)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}
void	add_list(t_stack **stack, int value)
{
	t_node	*temp;
	t_node	*node;

	if (*stack == NULL)
	{
		*stack = malloc(sizeof(t_stack));
		node = node_init(value);
		(*stack)->top = node;
		return ;
	}
	temp = (*stack)->top;
	while (temp->next)
		temp = temp->next;
	node = malloc(sizeof(t_node));
	node->next = NULL;
	node->value = value;
	temp->next = node;
}

int	check_dupe(t_stack *stack)
{
	t_node	*current;
	t_node	*runner;

	current = stack->top;
	while (current)
	{
		runner = current->next;
		while (runner)
		{
			if (runner->value == current->value)
				return (1);
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}
