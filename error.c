/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:58:54 by esnavarr          #+#    #+#             */
/*   Updated: 2026/02/17 16:39:03 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	/*
	Prints an error message and terminates the program.
	*/

void	error_message(char *msg)
{
	(void)msg;
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

	/*
	Frees the memory allocated for a string array.
	*/

void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}

	/*
	Frees the memory allocated to a stack represented by a
	linked list by freeing each node in the list and the list itself.
	*/

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}
