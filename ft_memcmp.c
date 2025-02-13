/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:25 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/13 12:58:50 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>

int	ft_memcmp(void *buf1, void *buf2, size_t count)
{
	unsigned char	*bff1;
	unsigned char	*bff2;
	size_t			i;

	i = 0;
	bff1 = buf1;
	bff2 = buf2;
	while (i < count)
	{
		if (bff1[i] != bff2[i])
		{
			return (bff1[i] - bff2[i]);
		}
		i++;
	}
	return (0);
}
