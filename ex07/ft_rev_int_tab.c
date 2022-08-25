/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 05:32:59 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 05:40:55 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int *tmp;
	int cnt;

	cnt = 0;
	while (cnt <  size/2)
	{
		tmp= tab[cnt];
		tab[cnt] = tab[size - cnt - 1];
		tab[size - cnt - 1] = tmp;
		cnt++;
	}
}

