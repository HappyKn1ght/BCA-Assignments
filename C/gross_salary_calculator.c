/*
 * Gross Salary Calculator
 * Author: Yashwant Kumar
 * Date: April  2026
 */

/*write a program to calculate gross salary for the condition given below-
  basic salary           DA               HRA             convegance
  bs>=1000               110% of basic    20% of basic    500
  bs>=500 && bs<1000     100% of basic    15% of basic    400
  bs<500                 90% of basic     10% of basic    300
  */
#include <stdio.h>

int main()
{
    float basic_salary, da, hra, conveyance, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary >= 1000)
    {
        da = 1.10 * basic_salary;
        hra = 0.20 * basic_salary;
        conveyance = 500;
    }
    else if (basic_salary >= 500 && basic_salary < 1000)
    {
        da = 1.00 * basic_salary;
        hra = 0.15 * basic_salary;
        conveyance = 400;
    }
    else if (basic_salary < 500)
    {
        da = 0.90 * basic_salary;
        hra = 0.10 * basic_salary;
        conveyance = 300;
    }
    else
    {
        printf("Invalid input.\n");
        return 1;
    }

    gross_salary = basic_salary + da + hra + conveyance;

    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
