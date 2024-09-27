#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <limits.h>

size_t	ft_strlen(const char *);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t len);

char *ft_strchr(const char *s, int c);

char	*ft_substr(char const *s, unsigned int start,size_t len);

char	*ft_strdup(const char *s);
char	*ft_strtrim(char const *s1, char const *set);
char *ft_strrchr(const char *s, int c);



#endif
