/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:47:47 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/31 18:38:08 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

typedef struct s_stack
{
	int					*stack_a;
	int					*stack_b;
	int					len_stack_a;
	int					max_a;
	int					len_stack_b;
	int					max_size;
	char				**tmpchr;
}					t_stack;

t_stack	*ft_struct_init(int argc, char **argv);
int		ft_stack_sice(char **tmpchr);
int		ft_atoi(const char *s);
void	ft_free_split(char **str);
void	ft_free(t_stack *stack);
void	ft_radix_b(t_stack *stack, int len_bit, int omited);
int		ft_isdigit(int c);
void	ft_normalize(t_stack *stack);
void	ft_replace(t_stack *data, int *temp, int *temp2);
int		count_params(char *s);
void	inserter(t_stack *stack, int argc, char **argv, int count);
int		main(int argc, char **argv);
char	**ft_split(char *s, char c);
void	ft_checklimits(t_stack *stack);
char	*ft_strchr(char *s, int c);
void	ft_radix(t_stack *stacks);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char	*s, unsigned int start, size_t len);
char	*ft_strchr(char *s, int c);
void	ft_bubble_sort(int *tmp, t_stack *stack);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(char *s);
void	ft_rb(t_stack *stack);
void	ft_ra_pb(t_stack *stack);
void	ft_repeat_nums(t_stack *stack);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_two(t_stack *stack);
void	ft_rra_pb(t_stack *stack);
void	ft_callocb(t_stack *stack);
int		ft_issorted(t_stack *stack);
void	ft_choice(t_stack *stack);
void	ft_three(t_stack *stack);
void	ft_five(t_stack *stack);
void	ft_pa(t_stack *stack);
void	atexittt(void);
void	ft_ra(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_sa(t_stack *stack);
void	ft_sa_ra(t_stack *stack);
void	ft_four(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_max(t_stack *stack);
#endif