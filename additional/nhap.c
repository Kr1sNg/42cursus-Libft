#include "libft.h"


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

#include <stdio.h>
int	main(void)
{
	char *s = "This is 9.";
	unsigned int start = 1;
	unsigned int len = 6;
	char *sub = ft_substr(s, start, len);
	printf("ft_substr: %s\n", sub);
	free(sub);

	return (0);
}