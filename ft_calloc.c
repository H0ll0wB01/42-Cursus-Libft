/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:39:18 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/20 14:39:48 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s;
	void	*ptr;

	s = nmemb * size;
	ptr = malloc(s + 1);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}
