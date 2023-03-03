/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:15 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/03 21:31:05 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int instriction(int size_b, int pos)
{
    int middle;
    int instriction;
    if (size_b < 2)
        return (0);
    middle = (size_b / 2);
    if (pos >= middle)
        instriction = (size_b - pos) + 1;
    else
        instriction = pos;
    return (instriction);
}

void push_to_B(t_list **head_a, t_list **head_b, int chunk)
{
    int nbr_chunk;
    int mid;
    int nbr_chunk_fix;
    int mid_fix;

    nbr_chunk = ft_lstsize(*head_a) / chunk;
    mid = nbr_chunk / 2;
    mid_fix = mid;
    nbr_chunk_fix = nbr_chunk;
    
    while (*head_a)
    {
        while (*head_a && ft_lstsize(*head_b) < nbr_chunk)
        {
            if (*head_a && (*head_a)->index < nbr_chunk)
            {
                if ((*head_a)->index < mid)
                {   
                    pb(head_a, head_b);
                    rb(head_b);
                }
                else
                    pb(head_a, head_b);
        }
        else
            ra(head_a);
        }
        nbr_chunk += nbr_chunk_fix;
        mid = nbr_chunk - mid_fix;
    }
}

void f1(t_list **head_a, t_list **head_b, int size_b)
{
    while (get_position(*head_b, size_b - 2) != 0 && get_position(*head_b, size_b - 2) >= size_b / 2)
        rrb(head_b);
    while (get_position(*head_b, size_b - 2) != 0 && get_position(*head_b, size_b - 2) < size_b / 2)
        rb(head_b);
    if (get_position(*head_b, size_b - 2) == 0)
        pa(head_a, head_b);
    
    while (get_position(*head_b, size_b - 1) != 0 && get_position(*head_b, size_b - 1) >= size_b / 2)
        rrb(head_b);
    while (get_position(*head_b, size_b - 1) != 0 && get_position(*head_b, size_b - 1) < size_b / 2)
        rb(head_b);
    if (get_position(*head_b, size_b - 1) == 0)
        pa(head_a, head_b);
    if ((*head_a)->index > (*head_a)->next->index)
        sa(head_a);
}

void f2(t_list **head_a, t_list **head_b, int size_b)
{
     while (get_position(*head_b, size_b - 1) != 0 && get_position(*head_b, size_b - 1) >= size_b / 2)
        rrb(head_b);
    while (get_position(*head_b, size_b - 1) != 0 && get_position(*head_b, size_b - 1) < size_b / 2)
        rb(head_b);
    if (get_position(*head_b, size_b - 1) == 0)
        pa(head_a, head_b);
}

void sort_100(t_list **head_a, t_list **head_b, int chunk_divide)
{
    int chunk;
	int	instriction_max;
	int	instriction_bef_max;
    int size_b;

    
    chunk = chunk_divide;
    push_to_B(head_a, head_b, chunk);
    size_b = ft_lstsize(*head_b);
    while (ft_lstsize(*head_b))
    {
	    size_b = ft_lstsize(*head_b);
	    instriction_max = instriction(size_b, get_position(*head_b, ft_lstsize(*head_b) - 1));
	    instriction_bef_max = instriction(size_b, get_position(*head_b, ft_lstsize(*head_b) - 2));
        if (instriction_max > instriction_bef_max)
            f1(head_a, head_b, size_b);
	    else
            f2(head_a, head_b, size_b);
    }
}