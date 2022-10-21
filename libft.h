/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:37:37 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 12:56:15 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int					ft_atoi(const char *str);
void				ft_bzero(void *src, size_t len);
void				*ft_calloc(size_t len, size_t type_size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				*ft_memchr(const void *s, int c, size_t len);
int					ft_memcmp(const void *s11, const void *s22, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *str, int fd);
char				**ft_split(char const *str, char c);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *str);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t dest_len);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s11, const char *s22, size_t n);
char				*ft_strnstr(const char *str, const char *sear, size_t len);
char				*ft_strrchr(const char *str, int c);
char				*ft_strtrim(char const *str, const char *remove);
char				*ft_substr(char const *str, size_t start, size_t end);
int					ft_toupper(int c);
int					ft_tolower(int c);

#endif
