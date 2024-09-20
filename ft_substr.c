/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:09:07 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/20 14:54:33 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ns;
	char *aux;
	size_t	i;
	size_t	j;
	
	ns = (char *) malloc(len * sizeof(char));
	if (!ns)
		return (NULL);
	aux = (char *)s;
	i = start;
	j = 0;
	while(aux[i] && j < len)
	{
		ns[j] = aux[i];
		i++;
		j++;
	}
	
	return (ns);
}
