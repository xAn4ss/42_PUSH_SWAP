/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:46:21 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/07 22:55:17 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_list **stacka, t_list **stackb)
{
	t_list	*node;
	t_list	*new;

	node = (*stacka);
	new = add(node->data, node->index);
	ft_addtop(stackb, new);
	(*stacka) = (*stacka)->next;
	free(node);
	write(1, "pb\n", 3);
}
