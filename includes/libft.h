/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:41:07 by fvarrin           #+#    #+#             */
/*   Updated: 2022/09/24 15:30:00 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct s_list_el
{
	void				*content;
	struct s_list_el	*next;
}	t_list_el;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
_Bool		ft_isspace(const char c);
void		ft_swap(int *a, int *b);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
long		ft_atoi(const char *str);
int			ft_atoi_base(char *str, char *base);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_strndup(const char *s1, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_and_free(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		ft_get_last_char(char *str);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_printf(const char *str, ...);
int			ft_printf_fd(int fd, const char *str, ...);
void		ft_perror(const char *s);
int			ft_count_occurrence(char *str, char c);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
void		ft_build_decimalbase(char *dest);
void		ft_build_hexabase_lower(char *dest);
void		ft_build_hexabase_upper(char *dest);
void		ft_build_binary_base(char dest[3]);
void		ft_build_binary_base(char dest[3]);
char		*ft_get_next_line(int fd);
int			ft_abs(int n);

// Linked list
t_list_el	*ft_lstnew(void *content);
void		ft_lstadd_front(t_list_el **alst, t_list_el *new);
void		ft_lstadd_back(t_list_el **alst, t_list_el *new);
int			ft_lstsize(t_list_el *lst);
t_list_el	*ft_lstlast(t_list_el *lst);
void		ft_lstdelone(t_list_el *lst, void (*del)(void*));
void		ft_lstclear(t_list_el **lst, void (*del)(void*));
void		ft_lstiter(t_list_el *lst, void (*f)(void *));
t_list_el	*ft_lstmap(t_list_el *lst, void *(*f)(void *), void (*del)(void *));
t_list_el	*ft_lstcpy(t_list_el *lst, void (*del)(void *));
void		ft_lstremove(t_list_el **lst, t_list_el *item, void (*del)(void *));
t_list_el	*ft_lstfind_by_content(t_list_el *lst, void *content);
#endif
