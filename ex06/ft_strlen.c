/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 05:29:38 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 05:32:31 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int num;
	char string;

	num = 0;
	while(1)
	{
		string = *str;
		if (string == "\0")
		{
			break;
		}
		num++;
		str++;
	}
	return num;
}

