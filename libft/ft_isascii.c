/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:16:38 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:06:13 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*isascii()
              checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
