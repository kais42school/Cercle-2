/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:00:59 by kfredj            #+#    #+#             */
/*   Updated: 2025/04/02 14:48:41 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	j = 0;
	while (src[j] && dest_len + j < size - 1)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
