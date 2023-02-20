/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:33:40 by mtrautne          #+#    #+#             */
/*   Updated: 2023/02/20 15:55:07 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

int	main(int argc, char **argv)
{
	t_input	*input;

	if (argc != 5)
		error_fct(1);
	input = fill_input_struct(argv);
	if (input == NULL)
		return (0);
	// printf("file1: %s\n", input->file_1);
	// printf("file2: %s\n", input->file_2);
	// printf("cmd1: %s\n", input->cmd_1);
	// printf("cmd2: %s\n", input->cmd_2);
	free_struct(input);
}

void	error_fct(int error_int)
{
	if (error_int == 1)
		ft_putstr_fd("Error: Incorrect number of arguments. (Must be 4)\n", 1);
}

t_input	*fill_input_struct(char **arg_val)
{
	t_input	*input;

	input = (t_input *)malloc(sizeof(t_input));
	if (!input)
		return (NULL);
	input->file1 = arg_val[1];
	input->cmd1 = arg_val[2];
	input->cmd2 = arg_val[3];
	input->file2 = arg_val[4];
	return (input);
}

void	free_struct(t_input *input)
{
	free(input);
	exit(1);
}