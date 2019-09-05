/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:27:31 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/03 18:06:05 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*sour;

	dest = (unsigned char *)destination;
	sour = (unsigned char *)source;
	i = 0;
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (sour);
}
