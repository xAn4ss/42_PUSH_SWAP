/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:29:06 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/07 22:47:52 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_list **stacka, t_list **stackb)
{
	t_list	*node;
	t_list	*new;

	node = (*stackb);
	new = add(node->data, node->index);
	ft_addtop(stacka, new);
	(*stackb) = (*stackb)->next;
	free(node);
	write(1, "pa\n", 3);
}
