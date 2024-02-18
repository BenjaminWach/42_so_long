/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:42:47 by bwach             #+#    #+#             */
/*   Updated: 2024/02/17 15:20:56 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	character_mvt(t_data *game, t_play *p)
{
	move_right(game, p);
	move_left(game, p);
	move_up(game, p);
	move_dwn(game, p);
}

void	player(t_data *game)
{
	t_play	*p;

	p = game->player;
	p->up = 0;
	p->right = 0;
	p->down = 0;
	p->left = 0;
	p->lpos[0] = p->pos[0];
	p->lpos[1] = p->pos[1];
	//mini_raycasting(game, game->map);
	//character_mvt(game, p);
	//mvt_count(game);
	//display_character(game, p);
}