/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:36:13 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/09 12:02:38 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: modify string with specified function
**
**	DESCRIPTION:
** 	Applies the function 'f' on each character of the string 's' passed as
**	argument, passing its index as first argument. Each character is passed by
**	address to 'f' to be modified if necessary.
**
**	RETURN VALUE: N/A
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, s);
		i++;
	}
}

/*
#include <stdio.h>
// Convert character to uppercase if index is even, lowercase if odd
void	ft_touplow(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
	else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + ('a' - 'A');
}

int main(void)
{
	char	s[] = "ThIs Is Cs50 FrOm HaRdVaRd UnIvErSiTy";
	printf("ft_striteri before: %s\n", s);

	ft_striteri(s, &ft_touplow);
	printf("ft_striteri after: %s\n", s);
	return (0);
}
*/