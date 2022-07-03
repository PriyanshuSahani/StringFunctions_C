#include <stdio.h>
#include "String.h"

int main() {
	char str1[15] = "Hello";
	char *str2 = "Hel5wd";
	
	printf("Comparision between the strings gives: %d\n",
		str_comp(str1, str2));

	str_cpy(str1, str2);
	printf("str1 after copying str2 elements to it: %s\n",
		str1);

	// str_cpy(str, str2);
	// int len = Length(str);
	// printf("%d\n", len);

	str_cat(str1, str2);
	printf("str1 after concatenation: %s\n", str1);
	

	// printf("%s\n", str1);
	int len = str_len(str1);
	printf("Length of str1 now: %d\n", len);

	to_upper(str1);
	printf("str1 after uppercasing: %s\n", str1);
	to_lower(str1);
	printf("str1 after lowercasing: %s\n", str1);

	
	return 0;
}