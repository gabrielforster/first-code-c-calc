#include <stdio.h>

void main(){

	char operation;
	int first, second = 0;
	double result;

	printf("Which math operation do you want?");
	printf("\n+ for sum\n- for subtraction\n* for multiplication\n/ for division\n");
	scanf("%c", &operation);

	switch(operation) {
		case '+':
			printf("Type the first number:\n");
			scanf("%d", &first);

			printf("Type the second number to add into %d:\n", first);
			scanf("%d", &second);

			result = first + second;
			printf("The result is: %.2f", result);
			break;
		
		case '-':
			printf("Type the first number:\n");
			scanf("%d", &first);

			printf("Type the second number to subtract from %d:\n", first);
			scanf("%d", &second);

			result = first - second;
			printf("The result is: %.2f", result);
			break;

		case '*':
			printf("Type the first number:\n");
			scanf("%d", &first);

			printf("How many times do u wanna multply the number %d:\n", first);
			scanf("%d", &second);

			result = first * second;

				printf("The result is: %.2f: \n", result);
			break;

		case '/':
			printf("Type the first number:\n");
			scanf("%d", &first);

			printf("Type the second number to divide %d:\n", first);
			scanf("%d", &second);

			if(second == 0){
				printf("Cannot divide by zero");
				break;
			}

			result = first / second;
			printf("The result is: %.2f", result);
			break;

		default: printf("No such operation!");
	}
}
