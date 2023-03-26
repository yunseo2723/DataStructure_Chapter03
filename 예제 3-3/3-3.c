#include <stdio.h>

int main(void) {
	int i,*ptr;

	int sale[2][2][4] = { { {10,20,30,40},{23,34,64,95} }, { { 24,123,45,78 }, { 96,26,82,83 } } };

	ptr = &sale[0][0][0];			//포인터에 뭐 넣을때 제발 앰퍼센트좀...

	for (i = 0; i < 16; i++) {
		printf("\naddress : %u sale %d = %d", ptr, i, *ptr);
		ptr++;
}
	getchar();
	return 0;
}