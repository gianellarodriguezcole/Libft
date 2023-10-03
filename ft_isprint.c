/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:21:12 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 15:53:08 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = '!';
    printf("ft_isprint: %d\n", ft_isprint(c));
    printf("isprint: %d\n", isprint(c));
    return 0;
}
*/
