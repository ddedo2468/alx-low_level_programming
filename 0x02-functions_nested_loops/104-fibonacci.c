#include <stdio.h>
#define LARGEST 10000000000
int main(void)
{
	unsigned long int previous_1 = 0, previous_2 = 1, current_1 = 0, current_2 = 2;
	unsigned long int carry_1, carry_2, carry_3;
	int count;

	printf("%lu, %lu, ", previous_2, current_2);

	for (count = 2; count < 98; count++)
	{
		if (current_1 + current_2 > LARGEST || previous_2 > 0 || previous_1 > 0)
		{
			carry_1 = (current_1 + current_2) / LARGEST;
			carry_2 = (current_1 + current_2) % LARGEST;
			carry_3 = previous_1 + previous_2 + carry_1;
			previous_1 = previous_2, previous_2 = carry_3;
			current_1 = current_2, current_2 = carry_2;
			printf("%lu%010lu", previous_2, current_2);
		}
		else
		{
			carry_2 = previous_1 + previous_2;
			previous_1 = previous_2, previous_2 = carry_2;
			printf("%lu", previous_2);
		}

		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
