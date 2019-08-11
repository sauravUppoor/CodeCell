#include <stdio.h>
#include<math.h>

int main() {
	int  i = 11, n, c = 0;
	scanf("%d", &n);

	while(1) {

		while(n >= (int)pow(2, i)) {
			n -= (int)pow(2, i);
			c++;
		}
		i--;;
		if(n == 0) break;
	}
	printf("%d", c);
	return 0;
}
