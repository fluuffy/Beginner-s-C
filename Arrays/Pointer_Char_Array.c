#include <stdio.h>

volatile int MAX = 3;

int main() {
    char *stuff[] = {"Car","Man", "Wife", }; 
    int i;
    for (i = 0; i < MAX; i++){
        printf("Value of names [%d] = %s\n", i, stuff[i]);
    }
	return 0;
}
