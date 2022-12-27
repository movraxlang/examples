// clang -o test test.c
#include <stdio.h>

int test_func(void) {
	printf("i am test_func\n");
	return 0;
}

int main(int argc, char ** argv) {
	printf("main called\n");
	int ret = test_func();
	printf("i have got %d\n", ret);
	return 0;
}
