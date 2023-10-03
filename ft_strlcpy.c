/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:23:19 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 16:32:59 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		++src_len;
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_strlcpy(dest, src, sizeof(dest));

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);

    return 0;
}
*/
