#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void my_htob(char c) {
	int n, arr[4] = { 0, };
	n = (int)c - 48;

	if (n > 9) n -= 7;

	for (int i = 0; i < 4; i++) {
		arr[i] = (n % 2);
		n /= 2;
	}
	bool bitst = false;
	int bit =4;
	for (int i = 3; i >= 0; i--) {
		if(arr[i] != 0) bitst = true;
		else if(bitst == false) bit--;
		if(bitst) printf("%d", arr[i]);
	}
	printf("(%d비트) : ",bit);
}

int main() {
	char arr[4];

	scanf("%s", arr);
	
	for (int i = 0; i < strlen(arr); i++) {
		my_htob(arr[i]);
	}

	return 0;
}