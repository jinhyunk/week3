/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 05:41:21 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 05:47:55 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cnt;
	int index;
	int min;

	cnt = 0;
	index = 0;
	min = 10000;
	while (index <= size)
	{
		cnt = index;
		while (cnt <= size)
		{
			if (tab[cnt] < min)
			{
			min = tab[cnt];
			}
			cnt++;
		}
		tmp[index] = min;
		index++;

	}
}
