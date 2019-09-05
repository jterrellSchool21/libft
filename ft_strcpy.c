/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:32:58 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 16:39:35 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcpy(char *destination, const char *source)
{
	int		i;

	i = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = source[i];
	return (destination);
}
