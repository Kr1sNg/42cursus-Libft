/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:30:21 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 17:43:11 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (((unsigned char)s1[i] != '\0' || (unsigned char)s2[i] != '\0')
		&& i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s1 = "This is 23";
 	char *s2 = "This is 24";	

	printf("strncmp: %i\n", strncmp(s1, s2, 10));
	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, 10));
}
*/