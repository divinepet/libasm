/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:40:19 by elaronda          #+#    #+#             */
/*   Updated: 2021/02/07 20:40:39 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_write(int fd, void *buf, int size);
int		ft_read(int handle, char *buf, int len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
void	ft_putnbr(int n);
void	ft_read_test();
void	ft_write_test();
void	ft_strcmp_test();
void	ft_strcpy_test();
void	ft_strlen_test();

#endif
