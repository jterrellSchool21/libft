/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:11:52 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/03 18:38:21 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t cnt)
{
	unsigned char	*dest;
	unsigned char	*sour;
	int				i;

	dest = (unsigned char *)destination;
	sour = (unsigned char *)source;
	i = 0;
	while (i < cnt && sour[i] != (unsigned char)c)
	{
		dest[i] = sour[i];
		i++;
	}
	if (i != cnt)
		dest[i] = (unsigned char)c;
	return (dest);
}
