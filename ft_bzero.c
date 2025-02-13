/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:28:27 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/12 12:03:57 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t count)
{
	unsigned char	*ptr;

	ptr = s;
	while (count--)
	{
		*ptr = 0;
		ptr++;
	}
}
