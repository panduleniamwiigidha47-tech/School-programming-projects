#include <stdio.h>

int main () {
    //variables - storing inputs
    double basicSalary;
    double houseAllowance;
    double transportAllowance;

    double tax;
    const double VAT = 0.15;  // keep vat constant to avoid it being change

    //storing output
    double grossSalary;
    double netSalary;

    puts("=======================================");
    // input & scan basic salary
    printf("Enter salary: ");
    scanf("%lf", &basicSalary);

    // input & scan house allowance
    printf("Enter house allowance: ");
    scanf("%lf", &houseAllowance);
    
    // input & scan transport allowance
    printf("Enter transport allowance: ");
    scanf("%lf", &transportAllowance);
    puts("======================================");
    //calculation
    grossSalary = basicSalary + houseAllowance + transportAllowance; //calculating gross salary

    tax = grossSalary * VAT; //calculating tax 

    netSalary =  grossSalary - tax; //calculate the net salary

    //Dispalying output
    puts("");
    puts("===============Display================");
    printf("Salary: N$ %.2f\n", basicSalary);
    printf("Housing Allowance: N$ %.2f\n", houseAllowance);
    printf("Transport Allowance: N$ %.2f\n", transportAllowance);
    puts("======================================");
    printf("Gross Salary: N$ %.2f\n", grossSalary);
    printf("Net Salary: N$ %.2f\n", netSalary); 

    // check if user earn more or less
        if (netSalary >= 20000) {
        printf("High Income"); //if it greater than or equal to 20 000
        } else {
        printf("Standard Income"); // if it less than 20 000
        }

    return 0;

}
