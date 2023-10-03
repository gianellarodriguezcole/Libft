/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:57:59 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/27 15:59:46 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

/*
int main(void)
{
    char ch = 'a';

    printf("Original character: %c\n", ch);
    ch = ft_toupper(ch);
    printf("Character after ft_toupper: %c\n", ch);

    return 0;
}
*/
