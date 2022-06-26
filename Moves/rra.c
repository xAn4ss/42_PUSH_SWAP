/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:31:22 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/24 19:52:27 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stacka)
{
	t_list	*node;

	node = (*stacka);
	while (node->next->next)
	{
		node = node->next;
	}
	ft_addtop(stacka, add(node->next->data, node->next->index));
	free(ft_lstlast(stacka));
	node->next = NULL;
	write(1, "rra\n", 4);
}
