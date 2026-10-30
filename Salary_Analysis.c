#include <stdio.h>

int main () {
    //variable
    double salaries, highest, lowest, average;
    double total = 0; //initial total to zero to avoid rubbish value

    puts("======================");
    puts("Salary analysis");
    puts("======================");


    for (int i = 0; i < 50; i++) {
        printf("Enter salary: ");
        scanf("%lf", &salaries);

        if (i == 0) {
            //iniatilaze highest and lowest to the salary entered at index 0
            highest = salaries;
            lowest = salaries;
        }
        //compare the salary
        if (salaries > highest) {
            highest = salaries;
        }
        if (salaries < lowest) {
            lowest = salaries;
        }

        total += salaries;
        
    }

    average = total / 50;


    //display salaries analyses
    printf("Higest salary: N$ %.2f\n", highest);
    printf("Lowest salary: N$ %.2f\n", lowest);
    printf("Average salary: N$ %.2f\n", average);
    printf("Total salaries: N$ %.2f\n", total);



    return 0;


}
