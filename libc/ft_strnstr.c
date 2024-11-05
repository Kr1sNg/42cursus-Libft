/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:36:38 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 15:30:06 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j < len) && big[i + j] != '\0' && little[j] == big[i + j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

/*
#include <bsd/string.h>
int	main(void)
{
	char big[] = "Visual Studio Code with GitHub Copilot supercharges your code";
	char little[] = "with";
	printf("strnstr: %s\n", strnstr(big, little, 0));
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, 0));
}
*/