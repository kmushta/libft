/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:45:16 by kmushta           #+#    #+#             */
/*   Updated: 2017/10/29 16:45:17 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (n && (*s1 || *s2))
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			n--;
		}
		return (1);
	}
	else if (!s1 && !s2)
		return (1);
	return (0);
}
