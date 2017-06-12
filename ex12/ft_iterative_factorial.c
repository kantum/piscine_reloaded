/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 17:27:49 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/10 18:28:01 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else if (nb > 12 || nb < 0)
		return (0);
	while (nb > 2)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
