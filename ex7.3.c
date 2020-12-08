#include <stdio.h>

int main(){
	int i;
	int count = 0;

	for(i = 1; i <= 100; i = i + 1){
		if(i > 27)
			count = count + 1;
	}
	printf("%d numbers were greater than 27\n", count);
	return 0;
}
