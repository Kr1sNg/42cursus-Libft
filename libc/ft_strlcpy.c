/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:20:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 11:25:58 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_len(const char *restrict str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_len(src);
	if (dstsize == 0)
		return (len_src);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/*
#include <stdio.h>
int	main(void)
{
	unsigned int n = 12;
	char dst1[n];
	char dst2[n];
	const char *src = "This is 9";
	printf("strlcpy: %lu, dst: %s\n", strlcpy(dst1, src, n), dst1);
	printf("ft_strlcpy: %lu, dst: %s\n", ft_strlcpy(dst2, src, n), dst2);
	return (0);
}
*/	
