/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:30:04 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:30:05 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Descripcion: Reserva (con malloc(3)) y devuelve una substring de
//la string ’s’. La substring empieza desde
//el índice ’start’ y tiene una longitud máxima ’len’.
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		len;
	char	*new_str;
	int		i;

	len = ft_strlen((char *)str1);
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		new_str[i] = str1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
