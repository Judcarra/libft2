/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:28:58 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/12 12:16:58 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*verifica el entero c pertenece al rango de 0 a 127
 * (caracteres de ASCII de control)
devueve 1 si esta en ese rango y nulo si no esta*/

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	else
		return (0);
}
