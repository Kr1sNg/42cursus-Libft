/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:07:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/04 21:18:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c = 'Z';
	printf("%c tolower: %c\n", c, tolower(c));
	printf("%c ft_tolower: %c\n", c, ft_tolower(c));
	return (0);
}
*/
