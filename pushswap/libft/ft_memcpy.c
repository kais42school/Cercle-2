/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:59:40 by kfredj            #+#    #+#             */
/*   Updated: 2025/04/06 16:36:57 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int					i;
	unsigned char		*mdst;
	const unsigned char	*msrc;

	i = 0;
	msrc = (const unsigned char *)src;
	mdst = dst;
	while (i < (int)n)
	{
		mdst[i] = msrc[i];
		i++;
	}
	return (dst);
}
