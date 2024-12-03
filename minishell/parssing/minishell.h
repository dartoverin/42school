/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:02:46 by dbozic            #+#    #+#             */
/*   Updated: 2024/12/02 10:21:33 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is the main .h file

#ifndef MINISHELL_H
# define MINISHELL_H

# include "Libft/libft.h"
# include "db_colours.h"
# include "execution/execution.h"
# include <readline/history.h>
# include <readline/readline.h>

int		db_error(char *error_message, int error_code);
void	*db_nerror(char *error_message);

#endif