/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:51:54 by kfredj            #+#    #+#             */
/*   Updated: 2025/05/29 19:35:14 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_append(char **s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (s1 == NULL)
		return;
	str = malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return;
	while ((*s1)[i] != '\0')
	{
		str[i] = (*s1)[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(*s1);
	*s1 = str;
}
