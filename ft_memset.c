/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:39:29 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/29 13:45:03 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n > 0)
	{
		*a = (unsigned char)c;
		a++;
		n--;
	}
	return (s);
}
// int main ()
// {
// 		char d[] = "hello";
// 		char s[] = "hello";
//  	printf("%s\n",ft_memset(d,122,5));
// 		printf("%s\n",memset(s,122,5));

// }