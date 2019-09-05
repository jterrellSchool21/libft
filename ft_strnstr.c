/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:59:49 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 18:21:20 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *strb, const char *stra, size_t len)
{
	int		i;
	int		flag;
	int		j;

	flag = 1;
	i = 0;
	j = 0;
	while (i < len)
	{
		if (strb[i] == stra[0])
		{
			while (stra[j] && stra[j] == strb[j + i])
			{
				j++;
			}
			if (stra[j] == '\0')
				return ((char*)(strb + i));
			j = 0;
		}
		i++;
	}
	return (NULL);
}
