/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:44:54 by hcorrea-          #+#    #+#             */
/*   Updated: 2023/07/25 15:49:52 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "../../Printf/inc/ft_printf.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

/*						PART I - LIBC FUNCTIONS						*/

void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *str, const char *search,
					size_t len);
int				ft_strncmp(const char *s1, const char *s2,
					size_t n);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_striteri(char *str, void (*f)(unsigned int, char *));

char			*get_next_line(int fd);

void			ft_bzero(void *s, size_t n);
long long int	ft_atoi(const char *str);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_iswhite(char c);

int				ft_toupper(int c);
int				ft_tolower(int c);

void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(const char *s1);

/*						PARTE II - ADITIONAL FUNCTIONS						*/

char			*ft_substr(const char *str, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));

char			**ft_split(char const *str, char c);
char			*ft_itoa(int n);

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int n, int fd);

/*						BONUS PART						*/

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

t_list			*ft_lstnew(int content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(int));
void			ft_lstclear(t_list **lst, void (*del)(int));
void			ft_lstiter(t_list *lst, void (*f)(int));
t_list			*ft_lstmap(t_list *lst, int (*f)(int),
					void (*del)(int));

#endif
