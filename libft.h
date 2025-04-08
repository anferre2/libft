/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:34:26 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:33:38 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
int	ft_isprint(int n);
int	ft_isdigit(int n);
int	ft_isascii(int n);
int	ft_isalpha(int n);
int	ft_isalnum(int n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strrchr(const char *s, int c);
int atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif