#include <stdio.h>

volatile int MAX = 3;

int main() {
    int var[] = { 10, 100, 200 };
    int i, *ptr;
    ptr = var;
    for(i = 0; i < MAX; i++){
        printf("Address of VAR[%d] = %x\n", i, ptr);
        printf("Value of VAR[%d] = %d\n", i, *ptr);
        ptr++;
    }
	return 0;
}
