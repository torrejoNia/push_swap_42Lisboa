/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:00:18 by esnavarr          #+#    #+#             */
/*   Updated: 2026/02/17 16:38:24 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	/*
	Performs a rotation action of a linked list stack by moving its first
	element to the end. It returns -1 if the stack has less than 2 elements.
	*/

static int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

	/*
	Performs a rotation action of a linked list stack (A) by moving its
	first element to the end. Prints "ra".
	*/

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	write(1, "ra\n", 3);
	return (0);
}

	/*
	Performs a rotation action of a linked list stack (B) by moving its
	first element to the end. Prints "rb".
	*/

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	write(1, "rb\n", 3);
	return (0);
}

	/*
	Performs a rotation of the top element of both linked list stacks
	(A and B) by moving their first element to the end of the list. Prints "rr".
	*/

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
	return (0);
}
