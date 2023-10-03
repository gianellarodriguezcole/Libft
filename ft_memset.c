/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:15:30 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 15:59:35 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *) b;
	while (len--)
		*temp++ = (unsigned char) c;
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    ft_memset(str, 'A', 5);
    printf("ft_memset: %s\n", str);
    memset(str, 'B', 5);
    printf("memset: %s\n", str);
    return (0);
}
*/
