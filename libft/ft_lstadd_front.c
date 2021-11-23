/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:35:11 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/21 20:08:46 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new ->next = *alst;
	*alst = new;
}
/*int main(void)
{
	t_list *ta = ft_lstnew(ft_strdup("roma"));
	t_list *f = ft_lstnew(ft_strdup("malta"));
	t_list *d = ft_lstnew(ft_strdup("hola"));
	t_list *l ;

	l = malloc(sizeof(t_list));
	l->content = "ja3far";
	ta->next =f;
	f->next =d;
	d->next =NULL;
	l->next = NULL;
	ft_lstadd_front(&ta,l);
	printf("%s",l->next->content);



}*/