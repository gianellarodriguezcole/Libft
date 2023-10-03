/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:41:54 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/28 15:43:39 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
	{
		if ((unsigned char) c == *((unsigned char *)s + i))
			return ((void *)s + i);
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] = "Gianella R";
    printf("Resultado original: %s\n", (char *)memchr(dest, 'R', 122));
    char s11[] = "Gianella R";
    printf("Resultado copia m: %s\n", (char *)ft_memchr(s11, 'R', 122));
    return 0;
}
*/
