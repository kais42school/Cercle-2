/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:02:35 by kfredj            #+#    #+#             */
/*   Updated: 2025/04/02 13:16:01 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*mdst;
	const unsigned char	*msrc;

	msrc = (const unsigned char *)src;
	mdst = (unsigned char *)dst;
	if (mdst > msrc && mdst < msrc + n)
		while (n--)
			mdst[n] = msrc[n];
	else
	{
		i = 0;
		while (i < n)
		{
			mdst[i] = msrc[i];
			i++;
		}
	}
	return (dst);
}
