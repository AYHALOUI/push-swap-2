/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:56:09 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/03 21:49:06 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_action(char *line, t_list **head_a, t_list **head_b)
{
	if (!(ft_strncmp(line, "sa", 2)))
	{
		sa(head_a);
		return (0);
	}
	if (!(ft_strncmp(line, "sb", 2)))
	{
		sa(head_b);
		return (0);
	}
	if (!(ft_strncmp(line, "ss", 2)))
	{
        ss(head_a, head_b);
		return (0);
	}
	if (!(ft_strncmp(line, "pa", 2)))
	{
        pa(head_a, head_b);
		return (0);
	}
	if (!(ft_strncmp(line, "pb", 2)))
	{
		pb(head_a, head_b);
		return (0);
	}
	if (!(ft_strncmp(line, "ra", 2)))
	{
        ra(head_a);
		return (0);
	}
	if (!(ft_strncmp(line, "rb", 2)))
	{
		rb(head_b);
		return (0);
	}
	if (!(ft_strncmp(line, "rr", 2)))
	{
        rr(head_a, head_b);
		return (0);
	}
	if (!(ft_strncmp(line, "rra", 3)))
	{
        rra(head_a);
		return (0);
	}
	if (!(ft_strncmp(line, "rrb", 3)))
	{
        rrb(head_b);
		return (0);
	}	
	if (!(ft_strncmp(line, "rrr", 3)))
	{
        rrr(head_a, head_b);
		return (0);
	}
	return (1);
}
