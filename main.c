#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const char charVariable = 'c';
const int arrayAmount = 3;

void myFunction(int intParameter, int booleanParameter, char charParameter, float *arrayParameter) {
    char letter1 = 'o';
    char letter2 = 'l';

    if (intParameter >= 10) {
        printf("This is a large number = %d", intParameter);
    }
    else if (intParameter >= 0) {
        printf("This is a small number = %d", intParameter);
    }
    else {
        printf("This is a negative number = %d", intParameter);
    }
    printf("\n");

    if (booleanParameter != 0) {
        printf("This is the real truth. This value != 0.", booleanParameter);
        printf("\n");
    }

    printf("This is a string value = %c%c%c%c", charParameter, letter1, letter1, letter2);
    printf("\n");

    int i;
    for (i = 0; i <= arrayAmount; ++i) {
        printf("Array[%d] has a value of %f", i, arrayParameter[i]);
        printf("\n");
    }
}

int main()
{
    int intVariable;
    int logicalExpression = 0;
    double doubleVariable = 8;
    float floatArray[arrayAmount];

    printf("What should the value of our number variable be?\n");
    scanf("%d", &intVariable);

    int i;
    for (i = 0; i <= arrayAmount; ++i) {
        floatArray[i] = doubleVariable + i;
    }

    if (intVariable != 0) {
        logicalExpression = 1;
    }

    // Let's print out a random next line command. I'm a comment!
    printf("\n");

    myFunction(intVariable, logicalExpression, charVariable, floatArray);

    return 0;
}
