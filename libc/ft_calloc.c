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

// it allocate memory like malloc but then it set memory to '0'
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	i;

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}


#include <stdio.h>
int	main(void)
{
	int *array = calloc(4, sizeof(int));
	int i = 0;
	while (i < 12)
	{
		printf("%i", array[i]);
		i++;
	}
	free(array);
}
