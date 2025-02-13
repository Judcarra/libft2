/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:30:41 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:30:41 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2len;
	size_t	i;
	size_t	j;

	s2len = ft_strlen((char *)s2);
	if (s2len == 0)
		return ((char *)s1);
	i = 0;
	while (i + s2len <= n && s1[i] != '\0')
	{
		j = 0;
		while (j < s2len && s1[i + j] != '\0' && s1[i + j] == s2[j])
			j++;
		if (j == s2len)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
