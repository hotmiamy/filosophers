/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_action.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotmiamy <hotmiamy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:20:59 by hotmiamy          #+#    #+#             */
/*   Updated: 2023/01/06 19:24:30 by hotmiamy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_action(t_phi_lst *phi_lst, char *action)
{
	long	cur_time;

	cur_time = current_time() - phi_lst->start_time;
	printf("%ld philosofer %i %s\n", cur_time, phi_lst->id, action);
}
