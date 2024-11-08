/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:20:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 08:31:03 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	unsigned int n = 12;
	char dst1[0];
	char dst2[0];
	const char *src = "This is 9";
	printf("strlcpy: %lu, dst: %s\n", strlcpy(dst1, src, n), dst1);
	printf("ft_strlcpy: %lu, dst: %s\n", ft_strlcpy(dst2, src, n), dst2);
	return (0);
}
*/	
