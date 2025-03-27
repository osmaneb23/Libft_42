/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:21:14 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/27 15:07:48 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurrence;

	i = 0;
	last_occurrence = NULL;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last_occurrence = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (last_occurrence);
}
