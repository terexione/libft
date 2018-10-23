#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, const char *src, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int	ft_tolower(int c);
int	ft_toupper(int c);

int	main(void)
{
	// ft_atoi
	if (ft_atoi("2147483647") == 2147483647 && ft_atoi("-2147483648") == -2147483648 && ft_atoi("0") == 0)
		printf("ft_atoi OK :D\n");
	else
		printf("ft_atoi KO D:\n");
	// ft_bzero
	char s[] = "aaaa";
	ft_bzero(s, 3);
	if (s[0] == '\0' && s[1] == '\0' && s[2] == '\0' && s[3] == 'a')
		printf("ft_bzero OK :D\n");
	else
		printf("ft_bzero KO D:\n");

	printf("%d\n", ft_isalnum(122));
}
