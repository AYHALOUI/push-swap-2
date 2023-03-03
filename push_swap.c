/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:45:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/03 21:20:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void    ff()
{
    system("leaks push_swap");
}

// function to print the list
void print_list(t_list *head)
{
    t_list *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void sort(t_list **head_a, t_list **head_b)
{
    int size;

    (void)head_b;
    size = ft_lstsize(*head_a);
    if (size == 2)
        sa(head_a);
    else if (size == 3)
        sort_3(head_a);
    else if (size <= 5)
        sort_5(head_a, head_b);
    else if (size > 5 && size <= 100)
        sort_100(head_a, head_b, 5);
    else
        sort_100(head_a, head_b, 9);
}

void free_list(t_list **head)
{
    t_list *temp;
    t_list *temp1;

    temp = *head;
    while (temp != NULL)
    {
        temp1 = temp->next;
        free(temp);
        temp = temp1;
    }
    *head = NULL;
}

int main(int ac, char **av)
{
    //atexit(ff);
    t_list *head_a;
    t_list *head_b;
    if (ac == 1)
        return (0);
    add_element(&head_a ,ac, av);
    sort(&head_a, &head_b);
    //free_list(&head_a);
    return (0);
}


