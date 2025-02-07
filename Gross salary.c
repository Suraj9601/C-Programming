#include <stdio.h>

    int main() {
    float basicPay, HRA, TA, grossSalary, professionalTax, netSalary;

    // Input for basic pay
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);

    // Calculations
    HRA = 0.10 * basicPay;  // HRA is 10% of basic pay
    TA = 0.05 * basicPay;   // TA is 5% of basic pay
    grossSalary = basicPay + HRA + TA; // Gross salary
    professionalTax = 0.02 * grossSalary; // Professional tax is 2% of gross salary
    netSalary = grossSalary - professionalTax; // Net salary after deductions

    // Output salary details
    printf("\nSalary Details:\n");
    printf("Basic Pay: %.2f\n", basicPay);
    printf("HRA (10%%): %.2f\n", HRA);
    printf("TA (5%%): %.2f\n", TA);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Professional Tax (2%%): %.2f\n", professionalTax);
    printf("Net Salary after deductions: %.2f\n", netSalary);

    return 0;
}
