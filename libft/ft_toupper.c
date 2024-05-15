/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:23:13 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:33:05 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*f c is a lowercase letter, toupper() returns its uppercase equivalent,
 * if an uppercase representation exists in the  current  locale.   
 * Otherwise,  it  returns c.  */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
