/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:52:46 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/07 19:00:25 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
			|| c == '\t' || c == '\v')
		return (8192);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("isspace: %i\n", isspace('a'));
	printf("ft_isspace: %i\n", ft_isspace('a'));
}
*/
