/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:40:33 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/11 15:44:41 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void ft_bzero(void *s, size_t n)
{
    unsigned int    i;

    i = 0;
    while (i < n)
    {
        ((unsigned char*)s)[i] = 0;
        i++;
    }
}