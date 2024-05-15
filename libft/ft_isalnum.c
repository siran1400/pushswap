/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:13:23 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:04:53 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalnum()
              checks for an alphanumeric character; it is equivalent to (isal‐
              pha(c) || isdigit(c)).
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
		(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
