/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:30:37 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/18 01:05:35 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stacka)
{
	t_list	*node;
	t_list	*nd;

	node = (*stacka);
	nd = node->next;
	ft_addtop(stacka, add(nd->data, nd->index));
	node->next = nd->next;
	free(nd);
	write(1, "sa\n", 3);
}
