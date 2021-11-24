/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:00:23 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/24 15:41:28 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp -> next != NULL)
	{
		temp = temp -> next;
	}
	return (temp);
}
/*int main()
{
	t_list *nd1 = ft_lstnew("taha");
	t_list	*nd2 = ft_lstnew("bbbb");
	nd1 -> next =nd2;
	nd2 -> next = NULL;
	printf("%s",(char*)ft_lstlast(nd1)->content);
	printf("\n%s", (char*)nd2->content);
}*/
