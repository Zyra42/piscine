/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evialay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 20:40:31 by evialay           #+#    #+#             */
/*   Updated: 2016/08/24 07:00:29 by evialay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (max - min));
	*range = tab;
	if (tab == NULL)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (max - min);
}
