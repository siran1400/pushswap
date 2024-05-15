/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:23:13 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:32:33 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  If c is an uppercase letter, tolower() returns its lowercase equivalent, 
 *  if a lowercase representation exists in the current locale.  
 *  Otherwise, it returns c.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
