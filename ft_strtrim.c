/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:03:20 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/15 20:52:10 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_skip_set (char const *s1, char const *set)
{
    while(!*set)
    {
        if (*s1 == *set)
        {
            return(1)
            *s1++;
        }
      
    }
    return(0)
}

char	*ft_strtrim(char const *s1, char const *set)
{
    int     i;
    while(s!)
}

/* int	main(void)
{
	printf("%s\n", ft_strtrim("ouuuuhoooobonjourhoouhoo", "ouh"));
} */