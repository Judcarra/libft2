/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:30:46 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:30:47 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(char *str, int c)
{
	size_t	strsize;
	int		i;

	strsize = 0;
	while (str[strsize] != '\0')
		strsize++;
	if (c == '\0')
		return (&str[strsize]);
	i = strsize - 1;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
