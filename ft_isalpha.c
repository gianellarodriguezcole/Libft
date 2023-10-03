/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:23:23 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 15:43:01 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = 'A';
    printf("ft_isalpha: %d\n", ft_isalpha(c));
    printf("isalpha: %d\n", isalpha(c));
    return 0;
}
*/
