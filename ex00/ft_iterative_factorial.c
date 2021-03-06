/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 08:55:47 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/24 10:45:30 by msamoile         ###   ########.fr       */
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
