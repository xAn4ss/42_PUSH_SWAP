/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:29:45 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/07 22:47:56 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stacka)
{
	t_list	*node;

	node = (*stacka);
	ft_addlast(stacka, add(node->data, node->index));
	(*stacka) = (*stacka)->next;
	free(node);
	write(1, "ra\n", 3);
}
