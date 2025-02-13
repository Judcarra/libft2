/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:17 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/13 12:58:11 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(void *buf, int val, size_t count)
{
	unsigned char	*bff;
	unsigned char	c;
	size_t			i;

	i = 0;
	bff = (unsigned char *) buf;
	c = (unsigned char)val;
	while (i < count)
	{
		if (bff[i] == c)
			return (&bff[i]);
		i++;
	}
	return (NULL);
}
