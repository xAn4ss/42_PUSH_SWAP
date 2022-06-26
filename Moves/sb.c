/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:30:58 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/07 22:53:26 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **stackb)
{
	t_list	*node;
	t_list	*nd;

	node = (*stackb);
	nd = node->next;
	ft_addtop(stackb, add(nd->data, nd->index));
	node->next = nd->next;
	free(nd);
	write(1, "sb\n", 3);
}
