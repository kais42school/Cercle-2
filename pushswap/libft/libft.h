/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfredj <kfredj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:14:42 by kfredj            #+#    #+#             */
/*   Updated: 2025/05/29 18:57:02 by kfredj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

char			*ft_itoa(int n);
int				ft_atoi(const char *str);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			*ft_calloc(size_t count, size_t size);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_bzero(void *s, size_t n);
int				ft_isascii(int c);
void			*ft_memchr(const void *memory, int character, size_t size);
int				ft_memcmp(char *s1, char *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(char *chaine, int lettre);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strrchr(char *chaine, int lettre);
char			*ft_strnstr(const char *str, const char *needle, size_t len);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			**ft_split(char const *s, char c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_append(char **s1, char *s2);

#endif