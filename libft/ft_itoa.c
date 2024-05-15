/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:46:43 by siran             #+#    #+#             */
/*   Updated: 2023/12/10 13:06:02 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_l(long num)
{
	size_t	l;

	l = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		l++;
		num = num * -1;
	}
	while (num >= 1)
	{
		l++;
		num = num / 10;
	}
	return (l);
}

static char	*ft_num_to_str(long num, char *str, size_t l)
{
	str = ft_calloc((l +1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	l--;
	while (l)
	{
		str[l] = (num % 10) + '0';
		num = num / 10;
		l--;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	l;
	char	*str;

	num = n;
	l = ft_itoa_l(num);
	str = 0;
	str = ft_num_to_str(num, str, l);
	if (!str)
		return (NULL);
	return (str);
}
