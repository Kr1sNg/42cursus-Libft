/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:31:13 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/06 10:31:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memmove() function copies n bytes from memory area src to memory area 
// dest. The memory areas may overlap (src + n > dest): copying from the end
// of the src back to the beginning */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src && src + n > dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((const char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int main(void)
{
	char	src1[] = "this_is_9";
	char	*dst1 = src1 + 5;
	printf("dst1: %s.\n", dst1);
	printf("memmove: %s.\n", (char *)memmove(dst1, src1, 8));

	char	src2[] = "THIS_IS_9";
	char	*dst2 = src2 + 5;
	printf("dst2: %s.\n", dst2);
	printf("ft_memmove: %s.\n", (char *)ft_memmove(dst2, src2, 8));
}
*/