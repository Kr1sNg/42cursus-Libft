/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:29:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 08:45:41 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c || c == '\0')
		return ((char *)(str + i));
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "This is 9";
	int	c = '.';
	printf("strchr: %s.\n", strchr(str, c));
	printf("ft_strchr: %s.\n", ft_strchr(str, c));
	return (0);
}
*/
