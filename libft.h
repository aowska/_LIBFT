/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awacowsk <awacowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:15:04 by awacowsk          #+#    #+#             */
/*   Updated: 2023/07/03 19:55:19 by awacowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_toupper(int a);
char	*ft_strcpy(char *dest, char const *src);
char	*ft_strcat(char *dest, char const *src);
int		ft_tolower(int a);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	*ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_calloc(size_t number, size_t size);
int		ft_isalnum(int arg);
int		ft_isalpha(int agr);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *s1, const char *s2, size_t s);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int     ft_strcmp(const char *s1, const char *s2);
#endif
