/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evialay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:40:27 by evialay           #+#    #+#             */
/*   Updated: 2016/08/24 05:36:40 by evialay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strlenmax(int argc, char **tab)
{
	int i;
	int len;

	i = 1;
	len = argc;
	while (i < argc)
	{
		len += ft_strlen(tab[i]);
		i++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (&dest[i]);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		f;
	char	*str;
	char	*tmp;

	i = 1;
	f = ft_strlenmax(argc, argv);
	str = (char*)malloc(sizeof(char) * f);
	tmp = str;
	while (i < argc)
	{
		tmp = ft_strcpy(tmp, argv[i]);
		*tmp = '\n';
		tmp++;
		i++;
	}
	tmp--;
	*tmp = '\0';
	return (str);
}
