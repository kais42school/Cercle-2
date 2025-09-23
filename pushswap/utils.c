/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:42:02 by kfredj            #+#    #+#             */
/*   Updated: 2025/07/17 01:39:55 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// // ctrl /
// // dans le makefile de ton projet,
// 	tu vas faire appel au makefile de ta libft puis link le fichier cree (libft.a)
// // la fonction join renvois s1 et s2 colles (s1 suivi de s2 suivi de '\0')
// // donc rien a modifier
// // il faut que la fonction gere un char** au lieu de deux char*
// // tu as ton char **,
// 	tu vas boucler sur char[i]. pour chaque char[i] tu vas ajouter char[i] a la string que tu construit.
// // char **arg : arg
// 	-> contient une adresse pointant sur une case contenant une adresse pointant sur une case contenant un char
// // arg[i] la valeur contenue dans la case pointee par la case qui se situe i cases apres la case ou est stocke arg
// // arg[i][j] le charactere contenu dans la case dont l'adresse est contenu dans la case j case apres la case pointee par la case situee i cases apres arg
// // void ft_append(char **s1, char *s2) *s[i]
// // cree une str avec s1 suivi de s2,
long long	ft_atoll(const char *str)
{
	int			i;
	long long	ret;
	int			multi;

	i = 0;
	ret = 0;
	multi = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multi = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return (ret * multi);
}

int	is_int(char *str)
{
	long long	nb;
	int			i;

	if (!str || !str[0])
		return (1);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	nb = ft_atoll(str);
	if (nb > 2147483647 || nb < -2147483648)
		return (1);
	return (0);
}
