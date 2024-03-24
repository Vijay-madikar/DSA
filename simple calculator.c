//(10): Simple Caculator
// Simple Calculator
#include <stdio.h>

int main() {
    int numb1, numb2, result;
    char o;

    printf("Enter Number 1: ");
    scanf("%d", &numb1);

    printf("Enter Number 2: ");
    scanf("%d", &numb2);

    printf("Enter the Operation (+, -, /, *): ");
    scanf(" %c", &o);

switch (o) {
    case '+':
    result = numb1 + numb2;
    break;

    case '-':
    result = numb1 - numb2;
    break;

    case '*':
    result = numb1 * numb2;
    break;

    case '/':
    if (numb2 != 0) {
    result = numb1 / numb2;
    } else {
    printf("Error: Division by zero is not allowed.\n");
    return 1;
    }
    break;
  default:
  printf("Error: Invalid operator.\n");
  return 1; // Exit the program with an error code
    }
printf("Result: %d\n", result);
return 0;
}
