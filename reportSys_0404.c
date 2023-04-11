#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int my_htob(char c) {
	int n, arr[4] = { 0, };
	n = (int)c - 48;

	if (n > 9) n -= 7;

	for (int i = 0; i < 4; i++) {
		arr[i] = (n % 2);
		n /= 2;
	}
	bool print_start = false;
	int bit =4;
	for (int i = 3; i >= 0; i--) {
		if(arr[i] != 0) print_start = true;
		else if(print_start == false) bit--;
		if(print_start) printf("%d", arr[i]);
	}
	return bit;
}

int main() {
	char arr[4];
	int bit[4];
	scanf("%s", arr);
	
	for (int i = 0; i < strlen(arr); i++) {
		bit[i] = my_htob(arr[i]);
		if(i != strlen(arr)-1) printf(" : ");
	}
	printf("\n");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%d비트", bit[i]);
		if(i != strlen(arr)-1) printf(" : ");
	}
    printf("\n");
	return 0;
}