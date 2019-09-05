/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:32:10 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 17:43:43 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}
