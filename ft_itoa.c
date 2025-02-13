/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:41:59 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/13 18:09:23 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0 && n != -2147483648)
	{
		n = n * -1;
		count++;
	}
	if (n == -2147483648)
		return (11);
	while (n > 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n < 0)
			str[--len] = -(n % 10) + '0';
		else
			str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

/*int main(void)
{
	int numbers[] = {0, 42, -42, 2147483647, -2147483648};
	char *str;
	int i = 0;
	
	while (i < 5)
	{
		str = ft_itoa(numbers[i]);
		printf("Integer: %d, String: %s\n", numbers[i], str);
		free(str);
		i++;
	}
	return (0);
}*/
