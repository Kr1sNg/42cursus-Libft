/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:36:13 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/07 12:36:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: modify string with specified function
**
**	DESCRIPTION:
** 	Applies the function ’f’ on each character of the string 's' passed as
**	argument, passing its index as first argument. Each character is passed by
**	address to ’f’ to be modified if necessary.
**
**	RETURN VALUE: N/A
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}

/*
#include <stdio.h>
// Convert character to uppercase if index is even, lowercase if odd
void	ft_toupper_even(unsigned int i, char *s)
{
	if (i % 2 == 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
	}
	else
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + ('a' - 'A');
	}
}

int main(void)
{
	char	s[] = "This is CS 50 from Harvard University.";
	printf("ft_striteri before: %s\n", s);

	ft_striteri(s, ft_toupper_even);
	printf("ft_striteri after: %s\n", s);
	return (0);
}
*/