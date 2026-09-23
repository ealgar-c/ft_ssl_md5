#include "../libs/ft_ssl_md5.h"

int main(int ac, char **av) {
	(void)ac;
	(void)av;
	char *str = malloc(sizeof(char));
	read(0, str, 5);
	write(1, str, 5);
	return (0);
}