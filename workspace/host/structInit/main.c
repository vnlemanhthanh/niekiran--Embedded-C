
#include<stdint.h>
#include<stdio.h>

struct carModel {
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void) {
	struct carModel carBMW = { 0,0,0,0 };
	struct carModel carHonda;
	printf("Sizeof of struct carModel is %I64u\n", sizeof(struct carModel));

	getchar();

	return 0;
}

