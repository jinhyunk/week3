/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 05:18:13 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 05:19:23 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp1;
	int tmp2;

	tmp1 = a / b;
	tmp2 = a % b;

	a = tmp1;
	b = tmp2;
}
