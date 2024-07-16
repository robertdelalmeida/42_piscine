/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:02:00 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/15 11:02:04 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
	{
		write(1, &str[len], 1);
		len++;
	}
}
