/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:31:23 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/03 19:41:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int srclen;

	srclen = ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
		srclen = srclen + size;
	else
		srclen = srclen + i;
	if (size > i)
	{
		while (src[j] != '\0' && i + 1 < size)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (srclen);
}
