/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:45:48 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/27 02:04:05 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack)
{
	t_list	*node;
	int		min;

	min = get_min_index(stack);
	node = (*stack);
	if (node->index == min && node->next->index == (min + 2))
		rra_sa(stack);
	else if (node->index == (min + 1))
	{
		if (node->next->index == min)
			sa(stack);
		else
			rra(stack);
	}
	else if (node->index == (min + 2))
	{
		if (node->next->index == min)
			ra(stack);
		else
		{
			sa(stack);
			rra(stack);
		}
	}
}

int	get_min_index1(t_list **stack)
{
	t_list	*node;
	int		min;
	int		index;

	index = 1;
	node = (*stack);
	min = node->index;
	while (node)
	{
		if (node->index == get_min_index(stack))
			return (index);
		else
		{
			index++;
			node = node->next;
		}
	}
	return (index);
}

void	push_a_n_time(t_list **stacka, t_list **stackb, int n)
{
	while (n)
	{
		push_a(stacka, stackb);
		n--;
	}
}

void	sort_10(t_list **stacka, t_list **stackb, int ac)
{
	int		t;

	t = 0;
	while (t < (ac - 4))
	{	
		if (get_min_index1(stacka) > (lstlen(stacka) / 2))
		{
			while ((*stacka)->index != t)
			{
				rra(stacka);
			}
			push_b(stacka, stackb);
		}
		else
		{
			while ((*stacka)->index != t)
			{
				ra(stacka);
			}
			push_b(stacka, stackb);
		}
		t++;
	}
	sort_3(stacka);
	push_a_n_time(stacka, stackb, t);
}
