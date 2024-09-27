/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:08:55 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/26 10:13:41 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* Functions for lists */
t_list	*ft_lstnew_bonus(void *content);

#endif /* LIBFT_H */
