/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:12:31 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:49:51 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			n = n * -1;
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		i = i * 10 + (*nptr - '0');
		nptr++;
	}
	return (i * n);
}
/*

int	main (int argc, char** argv)
{
	int i = 1;

printf("[%s|%d|%d]", argv[i], atoi(argv[i]), ft_atoi((const char*) argv[i]));
	while (i < argc) 
	{
		if (atoi(argv[i]) == ft_atoi((const char*) argv[i])) 
		{
			printf("correct");
		}
		else 
		{
			printf("[%s|%d|%d]", argv[i], atoi(argv[i]), ft_atoi((const char*) argv[i]));
		}
		i++;
	}
}
*/
