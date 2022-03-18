/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:23:04 by rdanyell          #+#    #+#             */
/*   Updated: 2022/02/21 14:51:46 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write (1, "Error\n", 6);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_info	info;

	if (argc < 2)
		exit(1);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_list(argc, argv, &info);
	solve(&stack_a, &stack_b, &info);
	clear_stack(stack_a);
	return (0);
}
