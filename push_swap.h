/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:46:26 by aoukhart          #+#    #+#             */
/*   Updated: 2022/06/26 21:18:59 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

int			ft_atoi(const char *nptr);
t_list		*add(int value, int index);
t_list		*ft_lstlast(t_list **lst);
void		ft_addlast(t_list **head, t_list *new);
void		ft_addtop(t_list **head, t_list *new);
void		push_b(t_list **stacka, t_list **stackb);
void		push_a(t_list **stacka, t_list **stackb);
void		ra(t_list **stacka);
void		rb(t_list **stackb);
void		sa(t_list **stacka);
void		sb(t_list **stackb);
int			lstlen(t_list **stack);
void		rra(t_list **stacka);
void		sort_3(t_list **stack);
void		sort_10(t_list **stacka, t_list **stackb, int ac);
int			get_min_index(t_list **stack);
void		rra_sa(t_list **stack);
int			*check_sorted_duplic(int *tab, int ac, int i);
int			check_max_mix(long num);
void		ft_radix(t_list **stacka, t_list **stackb, int max_bit, int ac);
void		push_all_a(t_list **stacka, t_list **stackb, int i, int ac);
int			*check_arg(int ac, char **av);
void		ft_sort(t_list **stacka, t_list **stackb, int ac, int *tab);
void		sort_arr(int *tab, int ac);
void		ft_index(t_list **stacka, int *tab);
void		sort(t_list **stacka, t_list **stackb, int ac);
char		**ft_split(char const *s, char c);
void		*ft_calloc(size_t count, size_t size);

#endif