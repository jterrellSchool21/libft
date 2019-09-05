/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:44:45 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 17:48:11 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			res = i;
		i++;
	}
	if (res)
		return ((char*)(str + res));
	return (NULL);
}
