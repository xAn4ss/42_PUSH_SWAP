/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:46:09 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/27 02:06:21 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_arr(int *tab, int ac)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < (ac - 1))
	{
		j = i + 1;
		while (j < (ac - 1))
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				i = 0;
				tmp = 0;
			}
			j++;
		}
		i++;
	}
}

void	ft_index(t_list **stacka, int *tab)
{
	t_list	*node;
	int		i;

	node = (*stacka);
	while (node)
	{
		i = 1;
		while (i < lstlen(stacka))
		{
			if (node->data == tab[i])
				node->index = i;
			i++;
		}
		node = node->next;
	}
}

void	sort(t_list **stacka, t_list **stackb, int ac)
{
	int		max_bit;

	max_bit = 0;
	while (((ac - 1) >> max_bit) != 0)
		max_bit++;
	ft_radix(stacka, stackb, max_bit, ac);
}

void	push_swap(t_list **stacka, t_list **stackb, int ac, int *tab)
{
	(void)stackb;
	if ((ac - 1) == 2)
	{
		if ((*stacka)->data > (*stacka)->next->data)
			sa(stacka);
	}
	else if ((ac - 1) <= 10 && (ac - 1) >= 3)
	{
		sort_arr(tab, ac);
		ft_index(stacka, tab);
		sort_10(stacka, stackb, ac);
	}
	else if ((ac - 1) > 10)
	{
		sort_arr(tab, ac);
		ft_index(stacka, tab);
		sort(stacka, stackb, ac);
	}
	free(tab);
}

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;
	int		*tab;
	int		i;

	stacka = NULL;
	stackb = NULL;
	if (ac > 1)
	{
		tab = check_arg(ac, av);
		if (!tab)
			exit(0);
		i = 0;
		while (++i < ac)
			ft_addlast(&stacka, add(ft_atoi(av[i]), 0));
		push_swap(&stacka, &stackb, ac, tab);
	}
}
