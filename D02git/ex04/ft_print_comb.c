/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evialay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 13:33:25 by evialay           #+#    #+#             */
/*   Updated: 2016/08/22 00:43:59 by evialay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int i, int f, int t)
{
	ft_putchar(i);
	ft_putchar(f);
	ft_putchar(t);
	if (i != '7' || f != '8' || t != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int f;
	int t;

	i = '0';
	while (i <= '7')
	{
		f = i + 1;
		while (f <= '8')
		{
			t = f + 1;
			while (t <= '9')
			{
				ft_display(i, f, t);
				t++;
			}
			f++;
		}
		i++;
	}
}
