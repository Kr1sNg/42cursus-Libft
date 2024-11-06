/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:05:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/06 17:05:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, const char *src)
{
    unsigned int	i;
    unsigned int	d_len;

    d_len = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (dest);
}
