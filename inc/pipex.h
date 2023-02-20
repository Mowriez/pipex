/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:32:49 by mtrautne          #+#    #+#             */
/*   Updated: 2023/02/20 16:48:14 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stddef.h>
# include "../src/libft/libft.h"

// forbidden heades
# include <stdio.h>

// struct for storing input vars
typedef struct s_input {
	char	*file1;
	char	*cmd1;
	char	*cmd2;
	char	*file2;
}	t_input;

//pipex.c
void	error_fct(int error_int);
t_input	*fill_input_struct(char **arg_val);
void	free_struct(t_input *input);

#endif
