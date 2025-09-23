/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:52:27 by kfredj            #+#    #+#             */
/*   Updated: 2025/04/22 18:52:40 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int lettre)
{
	int		i;
	char	*ret;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)lettre)
		{
			ret = &str[i];
			return (ret);
		}
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
