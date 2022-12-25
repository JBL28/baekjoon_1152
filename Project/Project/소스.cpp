#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[1000000];
	scanf("%[^\n]s", str);
	int i = 0;
	int count = 0;

	while (str[i] != '\0') {
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	printf("%d", count);
	return 0;
}