/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:30:12 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 15:45:24 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	array = (unsigned char *)arr;
	while (i < n)
	{
		if (array[i] == (unsigned char)c)
		{
			array[i] = '!';
			return (&array[i]);
		}
		i++;
	}
	return (NULL);
}
