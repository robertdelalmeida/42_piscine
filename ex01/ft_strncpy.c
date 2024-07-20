/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:12:17 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/17 17:15:11 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;
	unsigned int	csrc;

	csrc = 1;
	c = 0;
	while (src[csrc] != 0)
		csrc++;
	if (csrc < n)
	{
		while (n >= 0)
		{
			dest[c] = src[c];
			n--;
			c++;
		}
		return (dest);
	}
	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = 0;
	return (dest);
}

/*
int	main(void)
{
	char src[]= "str n cpy";
	char dest[9];

	ft_strncpy(dest, src, 9);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return 0;
}
*/