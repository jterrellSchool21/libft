/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:54:45 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 18:23:50 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *strb, const char *stra)
{
	int		i;
	int		flag;
	int		j;

	flag = 1;
	i = 0;
	j = 0;
	while (strb[i])
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
