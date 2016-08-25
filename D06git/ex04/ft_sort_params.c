/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evialay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:45:05 by evialay           #+#    #+#             */
/*   Updated: 2016/08/21 14:00:54 by evialay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **c1, char **c2)
{
	char *c;

	c = *c1;
	*c1 = *c2;
	*c2 = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) >= 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
	}
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j++]);
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
