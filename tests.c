/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:37:57 by elaronda          #+#    #+#             */
/*   Updated: 2021/02/07 20:40:02 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_strlen_test(void)
{
	write(1, BLUE, 5);
	write(1, "\n\nTEST 1 (hello):\n", 18);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_putnbr(strlen("hello"));
	write(1, "\n<<< ", 5);
	ft_putnbr(ft_strlen("hello"));
	write(1, BLUE, 5);
	write(1, "\n\nTEST 4 (true\\0soul):\n", 23);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_putnbr(strlen("true\0soul"));
	write(1, "\n<<< ", 5);
	ft_putnbr(ft_strlen("true\0soul"));
	write(1, BLUE, 5);
	write(1, "\n\nTEST 5 ():\n", 13);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_putnbr(strlen(""));
	write(1, "\n<<< ", 5);
	ft_putnbr(ft_strlen(""));
}

void	ft_strcpy_test(void)
{
	char buf[10];
	char buf2[10];

	write(1, BLUE, 5);
	write(1, "\n\nTEST 1 () (world):\n", 21);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_strcpy(buf, "world");
	write(1, buf, 5);
	write(1, "\n<<< ", 5);
	strcpy(buf2, "world");
	write(1, buf2, 5);
}

void	ft_strcmp_test(void)
{
	write(1, BLUE, 5);
	write(1, "\n\nTEST 1 (hello) (world):\n", 26);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_putnbr(strcmp("hello", "world"));
	write(1, "\n<<< ", 5);
	ft_putnbr(ft_strcmp("hello", "world"));
	write(1, BLUE, 5);
	write(1, "\n\nTEST 3 () ():\n", 16);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_putnbr(strcmp("", ""));
	write(1, "\n<<< ", 5);
	ft_putnbr(ft_strcmp("", ""));
	write(1, BLUE, 5);
	write(1, "\n\nTEST 4 (very long string) (short):\n", 37);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	ft_putnbr(strcmp("very long string", "short"));
	write(1, "\n<<< ", 5);
	ft_putnbr(ft_strcmp("very long string", "short"));
}

void	ft_write_test(void)
{
	write(1, BLUE, 5);
	write(1, "\n\nTEST 1 (hello):\n", 18);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	write(1, "hello", 5);
	write(1, "\n<<< ", 5);
	ft_write(1, "hello", 5);
	write(1, BLUE, 5);
	write(1, "\n\nTEST 3 (NULL):\n", 17);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	write(1, NULL, 1);
	write(1, "\n<<< ", 5);
	ft_write(1, NULL, 1);
	write(1, BLUE, 5);
	write(1, "\n\nTEST 4 (alexa\\0ndria):\n", 26);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	write(1, "alexa\0ndria", 11);
	write(1, "\n<<< ", 5);
	ft_write(1, "alexa\0ndria", 11);
}

void	ft_read_test(void)
{
	char buf[10];

	write(1, BLUE, 5);
	write(1, "\n\nOPEN | CREATE FILE", 20);
	write(1, GREEN, 5);
	read(open("tro", O_RDONLY), buf, 10);
	write(1, "\n>>> ", 5);
	write(1, buf, 10);
	ft_read(open("tro", O_RDONLY), buf, 10);
	write(1, "<<< ", 4);
	write(1, buf, 10);
}
