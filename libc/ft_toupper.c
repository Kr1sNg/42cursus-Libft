/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:07:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/04 21:16:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c = '?';
	printf("%c toupper: %c\n", c, toupper(c));
	printf("%c ft_toupper: %c\n", c, ft_toupper(c));
	return (0);
}
*/
