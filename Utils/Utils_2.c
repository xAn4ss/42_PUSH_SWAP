/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 02:48:52 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/09 00:16:09 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_all_a(t_list **stacka, t_list **stackb, int i, int ac)
{
	t_list	*b;

	b = (*stackb);
	if (i == (ac - 1))
	{
		while (b)
		{
			push_a(stacka, stackb);
			b = b->next;
		}
	}
	else
		return ;
}

void	is_num(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
		{
			write(1, "Error.\n", 8);
			exit(0);
		}
	}
}

int	ft_atoi(const char *nptr)
{
	long	ret;
	int		i;
	long	sign;

	ret = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	is_num((nptr + i));
	while (nptr[i] >= '0' && nptr[i] <= '9')
		ret = (ret * 10) + (nptr[i++] - '0');
	return (check_max_mix((ret * sign)));
}

int	*check_arg(int ac, char **av)
{
	int	*tab;
	int	i;
	int	j;

	j = 1;
	i = 0;
	tab = malloc((ac - 1) * sizeof(int));
	while (i < (ac - 1))
	{
		tab[i] = ft_atoi(av[j]);
		i++;
		j++;
	}
	i = 0;
	while (i < (ac - 2))
	{
		if (tab[i] < tab[i + 1])
			i++;
		else
			break ;
	}
	return (check_sorted_duplic(tab, ac, i));
}
