/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:47:52 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/20 15:03:43 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*ns;
	int		i;
	int		j;

	l = ft_strlen(s1);
	l += ft_strlen(s2);
	ns = (char *)malloc(l * sizeof(char));
	if (!ns)
		return (NULL);
	i = 0;
	while (s1[i])
	{	
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ns[i] = s2[j];
		i++;
		j++;
	}
	return (ns);
}
