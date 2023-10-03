/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:43:54 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/28 15:44:33 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return ((*((unsigned char *)s1 + i)) - *((unsigned char *)s2 + i));
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char s1[] = "hola como ";
    char s2[] = "hola como estas";
    printf("Resultado original: %i\n", memcmp(s1, s2, 12));
    printf("Resultado copia c: %i\n", ft_memcmp(s1, s2, 12));
    return 0;
}
*/
