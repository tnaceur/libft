/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:19:42 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/24 11:27:40 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*#include<stdio.h>
int main(void)
{
    t_list *b;
    t_list *c;
    t_list *e;
    t_list *d;

    b ->next =  c->content;
    c->next = e->content;
    e->next = d->content;
    d->next = NULL;
    printf("%d", ft_lstsize(b));
}*/
