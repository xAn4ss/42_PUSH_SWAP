/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:50:40 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/09 00:24:22 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min_index(t_list **stack)
{
	t_list	*node;
	int		i;
	int		min;

	i = 0;
	node = (*stack);
	min = node->index;
	node = (*stack);
	while (node)
	{
		if (min > node->index)
			min = node->index;
		i++;
		node = node->next;
	}
	free(node);
	return (min);
}

void	rra_sa(t_list **stack)
{
	rra(stack);
	sa(stack);
}

int	check_max_mix(long num)
{
	if (num <= 2147483647 && num >= -2147483648)
		return (num);
	else
	{
		write(2, "Error.\n", 8);
		exit(0);
	}
}

int	*check_sorted_duplic(int *tab, int ac, int i)
{
	int	j;

	if (i == (ac - 2))
	{
		free(tab);
		exit(0);
	}
	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac - 1)
		{
			if (tab[i] == tab[j])
			{
				write(2, "Error.\n", 18);
				free(tab);
				exit(0);
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_radix(t_list **stacka, t_list **stackb, int max_bit, int ac)
{
	t_list	*a;
	int		bit;
	int		i;

	bit = -1;
	while (++bit < max_bit)
	{
		a = (*stacka);
		i = 0;
		while (i < (ac - 1))
		{
			if (((a->index >> bit) & 1) == 1)
				ra(stacka);
			else
				push_b(stacka, stackb);
			a = a->next;
			i++;
			push_all_a(stacka, stackb, i, ac);
		}
	}
}
