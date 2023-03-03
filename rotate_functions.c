/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/03 15:26:17 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


void	ra(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = temp2;
        *list = temp2->next;
        temp2->next = NULL;
        ft_printf("ra\n");
    }
}


void	rb(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = temp2;
        *list = temp2->next;
        temp2->next = NULL;
        ft_printf("rb\n");
    }
}

void	rr(t_list **list_a, t_list **list_b)
{
    if (!*list_a || !*list_b || list_a || list_a)
		return ;
    rb(list_b);
    ra(list_a);
    ft_printf("rr\n");
}