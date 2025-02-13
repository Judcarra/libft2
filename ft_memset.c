/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:45 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/13 12:57:42 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//establece el primer recuento de bytes de *dest en el valor c 
//(que se convierte en un caracter sin signo)
//devuelve un puntero a dest

#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) dest;
	i = 0;
	while (i < count)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
