#include <stdio.h>

int main() {
    int workernumber, hoursworked;
    double hourvalue, salary;

    scanf("%d", &workernumber);
    scanf("%d", &hoursworked);
    scanf("%lf", &hourvalue);

    salary = (hoursworked * hourvalue);

    printf("NUMBER = %d\n", workernumber);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
