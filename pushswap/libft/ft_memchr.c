/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:51:24 by kfredj            #+#    #+#             */
/*   Updated: 2025/04/15 20:07:47 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *memory, int character, size_t size)
{
	int		i;
	char	*retour;
	char	*chaine;

	chaine = (char *)memory;
	i = 0;
	while (i < (int)size)
	{
		if (chaine[i] == (char)character)
		{
			retour = &chaine[i];
			i++;
			return ((void *)retour);
		}
		i++;
	}
	return (0);
}
