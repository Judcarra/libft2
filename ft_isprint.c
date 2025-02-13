/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:11 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/12 12:21:21 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//comprueba si un caracter es imprimible (los que no son de control)
//devuelve 1 si es imprimible (0 si no lo es)

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
