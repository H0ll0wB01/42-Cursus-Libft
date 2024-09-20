/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:37:34 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/20 13:01:13 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	j = 0;
	if (*l == '\0')
	{
		return (NULL);
	}
	while (i < len && b[i])
	{
		while (b[i + j] == l[j] && (i + j) < len)
		{
			if (l[j +1] == '\0')
				return (&b[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
