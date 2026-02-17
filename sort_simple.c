/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:00:33 by esnavarr          #+#    #+#             */
/*   Updated: 2026/02/17 18:13:00 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	/*
	Sorts the first stack containing four elements by performing a series of 
	operations that involve pushing elements to a second stack and using the
	previously defined sort_three function.
	*/

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (is_sorted(stack_a))
		return ;
	distance = index_distance_head(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

	/*
	Simalar to sort_four, sorts the stack by pushing two elements
	to stack_b, sorting the remaining three elements in stack_a,
	then pushing the two elements back to stack_a.
	*/

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = index_distance_head(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

	/*
	Checks the size of the stack and calls a corresponding sorting
	function to sort the stack, including sort_3, sort_4, and
	sort_4. If the stack is already sorted, or if the size is 0 or 1,
	the function returns without performing any operations.
	*/

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}
