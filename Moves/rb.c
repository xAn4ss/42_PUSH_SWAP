/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:30:11 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/07 22:48:01 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stackb)
{
	t_list	*node;

	node = (*stackb);
	ft_addlast(stackb, add(node->data, node->index));
	(*stackb) = (*stackb)->next;
	free(node);
	write(1, "rb\n", 3);
}
