#include <stdio.h>
#include <math.h>
#include "text.h"

void printStr(char str[])
{
    printf("%s",str);
}
long int add(long int num1, long int num2){
	return num1 + num2;
}
long int subtract(long int num1, long int num2){
	return num1 - num2;
}
long int multiply(long int num1, long int num2){
	return num1 * num2;
}
long double divide(long int num1, long int num2){
	return num1 / num2;
}
long double squareRoot(long int num1){
	return sqrt(num1);
}
long int power(long int num1, long int num2){
	return pow(num1, num2);
}
int mainLoop(){
	while (1){
		int navigationInput = 0;
		long int calcIntInput1 = 0;
		long int calcIntInput2 = 0;
		long double calcDoubleInput1 = 0;
		long double calcDoubleInput2 = 0;
		long int longIntResult = 0;
		long double longDoubleResult = 0;
		scanf("%d", &navigationInput);
		switch (navigationInput){
			default:
				printf("Sorry, that is not a valid option... Opening Menu\n");
				printStr(MENU);
				break;
			case(0):
				printStr(INPUTERROR);
				return 0;
			case(1):
				printStr(EXITMESSAGE);
				return 0;
				break;
			case(2):
				printStr(WHY);
				break;
			case(3):
				// add
				printStr(ADDITION);
				scanf("%ld %ld", &calcIntInput1, &calcIntInput2);
				longIntResult = add(calcIntInput1, calcIntInput2);
				printf("Answer: %ld\n", longIntResult);
				printStr(MENU);
				break;
			case(4):
				// subtract
				printStr(SUBTRACTION);
				scanf("%ld %ld", &calcIntInput1, &calcIntInput2);
				longIntResult = subtract(calcIntInput1, calcIntInput2);
				printf("Answer: %ld\n", longIntResult);
				printStr(MENU);
				break;
			case(5):
				// multiply
				printStr(MULTIPLICATION);
				scanf("%ld %ld", &calcIntInput1, &calcIntInput2);
				longIntResult = multiply(calcIntInput1, calcIntInput2);
				printf("Answer: %ld\n", longIntResult);
				printStr(MENU);
				break;
			case(6):
				// divide
				printStr(DIVISION);
				scanf("%ld %ld", &calcIntInput1, &calcIntInput2);
				longDoubleResult = divide(calcIntInput1, calcIntInput2);
				printf("Answer: %LF\n", longIntResult);
				printStr(MENU);
				break;
			case(7):
				// squareroot
				printStr(SQUAREROOT);
				scanf("%ld", &calcIntInput1);
				longDoubleResult = squareRoot(calcIntInput1);
				printf("Answer: %Lf\n", longDoubleResult);
				printStr(MENU);
				break;
			case(8):
				// power
				printStr(POWER);
				scanf("%ld %ld", &calcIntInput1, &calcIntInput2);
				longIntResult = power(calcIntInput1, calcIntInput2);
				printf("Answer: %ld\n", longIntResult);
				printStr(MENU);
				break;
		}
	}
}
int main(){
	printStr(LOGO);
	printStr(MENU);
	mainLoop();
	return 0;
}
