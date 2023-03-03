/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/03 15:26:23 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next->next = temp2;
        *list = temp->next;
        temp->next = NULL;
        ft_printf("rra\n");
    }
}

void	rrb(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next->next = temp2;
        *list = temp->next;
        temp->next = NULL;
        ft_printf("rrb\n");
    }
}

void	rrr(t_list **list_a, t_list **list_b)
{
    rra(list_a);
    rrb(list_b);
    ft_printf("rrr\n");
}