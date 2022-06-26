/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:45:55 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/07 22:54:53 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add(int value, int index)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->data = value;
	new->index = index;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list **lst)
{
	t_list	*node;

	node = (*lst);
	while (node->next)
		node = node->next;
	return (node);
}

void	ft_addlast(t_list **head, t_list *new)
{
	t_list	*last;

	if (!*head)
	{
		*head = new;
		new->next = NULL;
		return ;
	}
	last = ft_lstlast(head);
	last->next = new;
}

void	ft_addtop(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}

int	lstlen(t_list **stack)
{
	int		i;
	t_list	*node;

	node = (*stack);
	i = 0;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
