/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:57 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 15:50:51 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    int c = 128;
    printf("ft_isascii: %d\n", ft_isascii(c));
    printf("isascii: %d\n", isascii(c));
    return 0;
}
*/
