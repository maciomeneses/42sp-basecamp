/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamontei <mamontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:30:48 by mamontei          #+#    #+#             */
/*   Updated: 2021/07/26 19:38:27 by mamontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	size--;
	while (i < size)
	{
		j = tab[size];
		tab[size] = tab[i];
		tab[i] = j;
		size--;
		i++;
	}
}
