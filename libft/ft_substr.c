/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 08:32:02 by siran             #+#    #+#             */
/*   Updated: 2023/12/09 10:06:09 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_substr extracts a substring from the given string 
 * by allocating sufficient memory for the new string starting 
 * at index start and ending at len characters.
 * RETURN VALUE : A pointer to the new string.
 * NULL if the memory allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	char	*src;
	size_t	s2len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	src = (char *)s + start;
	if (ft_strlen(src) < len)
		s2len = ft_strlen(src) + 1;
	else
		s2len = len + 1;
	s2 = malloc(s2len * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, src, s2len);
	return (s2);
}
