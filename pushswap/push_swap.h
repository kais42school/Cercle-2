/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:19:32 by kfredj            #+#    #+#             */
/*   Updated: 2025/09/23 17:24:13 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
}					t_stack;

typedef struct s_pswap
{
	t_stack			*a;
	t_stack			*b;
}					t_pswap;

t_stack				new_stack(void);
char				*normalize(char *strjoined);
int					is_int(char *str);

t_stack				*parse2(char **splitout);
char				**parse1(char **entry);
void				ft_append(char **s1, char *s2);

/*NODE*/
t_node				*node_init(int value);
void				node_destroy_all(t_node *node);

/*STACK*/
void				stack_destoy(t_stack *stack);
t_stack				*stack_init(void);
int					check_dupe(t_stack *stack);
void				add_list(t_stack **stack, int value);
void				free_tab(char **tab);

/*OPERATIONS*/
void				rra(t_stack *stack);
void				rrb(t_stack *stack);
void				rrr(t_stack *stack1, t_stack *stack2);

void				ra(t_stack *stack);
void				rb(t_stack *stack);
void				rr(t_stack *stack1, t_stack *stack2);

void				pa(t_pswap *ps);
void				pb(t_pswap *ps);

void				sa(t_stack *stack);
void				sb(t_stack *stack);
void				ss(t_stack *stack1, t_stack *stack2);

/*STACK_UTILS*/
void				reverse_rotate(t_stack *stack);
void				rotate(t_stack *stack);
void				push(t_stack *stack, t_node *node);
t_node				*pop(t_stack *stack);
void				swap(t_stack *stack);

/*ALGO*/
void				sort_stack_of_three(t_pswap *ps);
t_pswap				*pswap_init(void);
void				free_pswap(t_pswap *ps);
#endif
