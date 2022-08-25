/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 05:19:51 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 05:29:12 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	char out;

	while(1)
	{
		out = *str;
		if (out == "\0")
		{
			break;
		}
		ft_str(out);
		str++;
}

void	ft_str(char c)
{
	write(1, &c, 1);
}

