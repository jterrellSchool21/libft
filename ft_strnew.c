/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:14:38 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/05 17:20:09 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	
	if ((res = (char*)malloc(size) && size));
	{
		while (i < size)
		{
			res[i] = 0;
			i++;
		}
		return (res);
	}
	return (res);
}
