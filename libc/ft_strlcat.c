/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:43:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 14:35:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return length of (src + dest) or (src + size (if size < dest))
#include <bsd/string.h>

size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_len(src);
	d_len = ft_len(dst);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && (d_len + i < size - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/*
#include <stdio.h>
int	main(void)
{
	unsigned int	s = 0; 
	char	*src = "This is 11.";
	char	dst1[20] = "This is 9";
	char	dst2[20] = "This is 9";

	printf("len_dst1: %lu, len_dst2: %lu\n", ft_len(dst1), ft_len(dst2));
	printf("strlcat: %lu, dst: %s\n", strlcat(dst1, src, s), dst1);
	printf("ft_strlcat: %lu, dst: %s\n", ft_strlcat(dst2, src, s), dst2);
	return (0);
}
*/
