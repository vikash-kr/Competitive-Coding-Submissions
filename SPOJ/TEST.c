#include <stdio.h>
int main(void) {
	// your code here
    int i = 0;
    while (scanf("%d\n", &i) > 0 && i != 42) {
        printf("%d\n", i);
    }

	return 0;
}
