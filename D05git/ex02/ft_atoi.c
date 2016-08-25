/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evialay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:06:19 by evialay           #+#    #+#             */
/*   Updated: 2016/08/19 11:10:29 by evialay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_chiffre(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int result;
	int n;

	result = 0;
	n = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		n = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_chiffre(*str) == 1 && *str != '\0')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	result = result * n;
	return (result);
}
