/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:54:22 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/23 11:18:19 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime (int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 1)
	{
		while (i <= nb / i)
		{
			if (i * (nb / i) == nb)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(3));
}
