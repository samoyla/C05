/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 08:55:47 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/22 13:28:30 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_factorial(32));
	return (0);
}
