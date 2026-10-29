#include <stdio.h>

int main() {
    float baseSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    hra = baseSalary * hraPercent / 100;
    da = baseSalary * daPercent / 100;
    ta = baseSalary * taPercent / 100;

    grossSalary = baseSalary + hra + da + ta;

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    return 0;
}
