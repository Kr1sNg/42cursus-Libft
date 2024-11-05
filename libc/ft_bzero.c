/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:26:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 18:26:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*
#include <strings.h>
int	main(void)
{
	unsigned int i = 0;
	unsigned int n = 4;
	char s1[20] = "This is 42 Perpignan";
	bzero(s1, n);
	printf("bzero: ");
	while (i < 19)
	{
		if (s1[i] == '\0')
			printf(".");
		else
			printf("%c", s1[i]);
		i++;
	}
	printf("\n");

	i = 0;
	char s2[20] = "This is 42 Perpignan";
	ft_bzero(s2, n);
	printf("ft_bzero: ");
	while (i < 19)
	{
		if (s2[i] == '\0')
			printf("/");
		else
			printf("%c", s2[i]);
		i++;
	}
	printf("\n");
}
*/