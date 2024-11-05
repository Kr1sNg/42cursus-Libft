/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:29:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 08:51:58 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
	else if (count != 0)
		return ((char *)(str + count));
	else
		return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "This is 9.";
	int	c = (char)'a';
	printf("strrchr: %s.\n", strrchr(str, c));
	printf("ft_strrchr: %s.\n", ft_strrchr(str, c));
	return (0);
}
*/
