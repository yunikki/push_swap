/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:04:23 by mpinson           #+#    #+#             */
/*   Updated: 2016/11/09 19:11:51 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*i;
	size_t			b;

	b = 0;
	i = (unsigned char *)s;
	while (b < n)
	{
		i[b] = '\0';
		b++;
	}
	return (s);
}
