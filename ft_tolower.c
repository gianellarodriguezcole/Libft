/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:02:56 by giarodri          #+#    #+#             */
/*   Updated: 2023/10/02 15:56:31 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    char result = ft_tolower(c);
    char original_result = tolower(c);

    printf("Resultado de ft_tolower: %c\n", result);
    printf("Resultado de tolower: %c\n", original_result);

    return 0;
}
*/
