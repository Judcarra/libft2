/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:53 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/12 18:02:36 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_words(char **words, int i)
{
	while (i > 0)
	{
		i--;
		free(words[i]);
	}
	free(words);
}

static char	*extract_word(const char **s, char c)
{
	const char	*start;
	char		*word;
	int			len;
	int			i;

	while (**s == c && **s)
		(*s)++;
	start = *s;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**words;
	int		i;

	if (!s)
		return (NULL);
	nwords = count_words(s, c);
	words = (char **)malloc((nwords + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < nwords)
	{
		words[i] = extract_word(&s, c);
		if (!words[i])
		{
			free_words(words, i);
			return (NULL);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}
