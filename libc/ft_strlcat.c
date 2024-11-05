/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:43:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 12:04:17 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_len(const char *restrict str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
