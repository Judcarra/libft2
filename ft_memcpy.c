/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:32 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:29:33 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	if (!dest && !src)
	{
		return (0);
	}
	while (count--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
