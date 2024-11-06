/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:36:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/06 17:36:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char s1[] = "Today is Monday, ";
	char s2[] = "it's a beautiful day.";
	char *new = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n", new);
}
