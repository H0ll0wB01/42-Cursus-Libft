/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:02:31 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/20 16:40:45 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ns;
	char *fs;
	int i;
	int	j;
	int	k;

	ns = (char *)malloc(ft_strlen(s1));
	fs = (char *) set;
	i = 0;
	j = 0;
	k = 0;
	while(s1[i])
	{	
		while (fs[j])
		{
			if (s1[i] != fs[j])
			{
				ns[k] = s1[i];
				k++;
			}
		}
		j = 0;
		i++;
	}
	return (ns);
}
