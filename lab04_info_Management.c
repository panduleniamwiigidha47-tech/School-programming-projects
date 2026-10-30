#include <stdio.h>
#include <string.h>

int main () {
    

    int choice;
    puts("====================");
    puts("Info Management");
    puts("====================");
    puts("1. Salary  analysis");
    puts("2. Department budget");
    puts("3. Vehicle registration");
    puts("4. Exit");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // salaries analysis
         {
            // variables
            double salaries[50];
            double highest, lowest, average, searchkey;
            double total = 0;
            int found = 0;

            for (int i = 0; i < 50; i++) {
                printf("Enter salary: ");
                scanf("%lf", &salaries[i]);

                if (i == 0) {
                    highest = salaries[0];
                    lowest = salaries[0];

                }

                if (salaries[i] > highest) {
                    highest =  salaries[i];
                }
                if (salaries[i] < lowest) {
                    lowest = salaries[i];
                }

                total += salaries[i];
            }

            average = total / 50;

            //display output
            puts("=======================");
            puts("Salary analysis");
            puts("=======================");
            printf("Average: N$ %.2f\n", average);
            printf("Highest: N$ %.2f\n", highest);
            printf("Lowest: N$ %.2f\n", lowest);

            printf("Salary to search: ");
            scanf(" %lf", &searchkey);

            for (int i = 0; i < 50; i++) {

                if (salaries[i] == searchkey) {
                    printf("Found at position: %d", i);
                    found = 1;
                    break;
                }
            }

                if (found == 0) {
                    puts("Salary not found.");
                    break;
                }
            
         }
        
        break;
        
        case 2: 
        {
        //department
        double budget[10];
        char names[10][100];
        double average;
        double total = 0;

          //add department in system
        for (int i = 0; i < 10; i++) {
            printf("Enter Department name: ");
            scanf(" %99[^\n]", names[i]);

            printf("Enter Department budget: ");
            scanf("%lf", &budget[i]);

            total += budget[i];
        }

        average = total / 10;  //calculate average

        //bubble sort algorithm

        int temp;
        for (int i = 0; i < 10 - 1; i++) {
            for (int j = 0; j < 10 - i - 1; j++) {
                if (budget[j] > budget[j + 1]){

                    temp = budget[j];
                    budget[j] = budget[j + 1];
                    budget[j + 1] = temp;
                }
            }
        }

        puts("=======================");
        puts("Budgets sorted (lowest to highest)");
        for (int i = 0; i < 10; i++) {
            printf("N$ %.2f\n", budget[i]);
        }

        printf("Average budget: N$ %.2f\n", average);
        printf("Total budget: N$ %.2f\n", total);

        }
        break;
        case 3:
        {
            char registration[20][20];
            char searchkey[20];

            //adding registration
            for(int i = 0; i < 20; i++) {
                printf("Enter vehicle registration: ");
                scanf("%19s", registration[i]);

            }

            //Displaying registration
            for (int i = 0; i < 10; i++) {
                printf("Vechile %d registration: %s\n", i, registration[i]);
            }

            puts("===================");
            puts("Search registration");
            puts("===================");

            printf("Enter search: ");
            scanf("%19s", searchkey);

            for (int i = 0; i < 10; i++) {
                if (strcmp(registration[i], searchkey) == 0) {
                    printf("Found at position: %d", i);
                    break;
                }
            }
        }
        break;
        case 4:
            printf("Exiting the system\n");
        break;
        default:
            printf("Invalid choice\n");
}

return 0;
}

