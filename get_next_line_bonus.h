/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:57:26 by wochae            #+#    #+#             */
/*   Updated: 2022/04/29 17:57:26 by wochae           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_list
{
	int				fd;
	char			*save;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
t_list	*get_node(t_list *head, int fd);
char	*read_iter(char *save, int fd);
char	*get_line(char const *save);
bool	set_remains(t_list **node, size_t offset);
void	del_node(t_list **node);
char	*append_buf(char const *save, char const *buf);
size_t	ft_strlen(char const *s);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);

#endif
