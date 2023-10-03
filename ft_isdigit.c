/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:41:48 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 15:45:25 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = '5';
    printf("ft_isdigit: %d\n", ft_isdigit(c));
    printf("isdigit: %d\n", isdigit(c));
    return 0;
}
*/
