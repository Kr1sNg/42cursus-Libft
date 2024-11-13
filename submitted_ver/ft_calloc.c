/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:20:54 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 19:23:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// it allocate memory like malloc but then it set memory to '0' each bytes
// nmemb: number of elements, size: bytes each member

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	total_size;
	size_t	i;

	total_size = nmemb * size;
	s = malloc(total_size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	int *array = ft_calloc(4, sizeof(int));
	int i = 0;
	while (i < 4)
	{
		printf("%i", array[i]);
		i++;
	}
	free(array);
}
*/