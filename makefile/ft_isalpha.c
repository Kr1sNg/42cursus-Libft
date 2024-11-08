/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:38 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 00:08:52 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1024);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int c = 123;
	int i = isalpha(c);
	printf("isalpha: %i\n", i);
	int	a = ft_isalpha(c);
	printf("ft_isalpha: %i\n", a);
	return (0);
}
*/
