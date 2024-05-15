/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:20:30 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:22:57 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
isprint()
              checks for any printable character including space.*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
