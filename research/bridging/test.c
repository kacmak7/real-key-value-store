#include<stdio.h>
#include "functions.h"

int fiboTest() {
	if (fibo(4) == 2 && fibo(5) == 3 && fibo(10) == 34)
	{
		printf("%s\n", "pass");
	}
}

int main(void) {
	fiboTest();
}
