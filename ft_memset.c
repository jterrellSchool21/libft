/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:51:34 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/05 17:15:10 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *destination, int c, size_t n)
{
	int		i;

	i = 0;
	while (n--)
		((unsigned char *)destination)[i] = (unsigned char)c;
	return (destination);
}
