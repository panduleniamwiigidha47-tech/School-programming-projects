#include <stdio.h>

#define MAX_EMPLOYEES 5

int ID[MAX_EMPLOYEES];
double Salary[MAX_EMPLOYEES];
double Budget[MAX_EMPLOYEES];

int count = 0;


//prototype
void displayMenu(void);
void add_employees(void);
void search_employees(void);
void check_budget(void);
double salary_cal(void);
double netSalary(double basic, double house, double transport);

int main () {

    displayMenu();
    return 0;
}

void displayMenu (void) {
    int choice;
    puts(" Welcome to Municipal finacial system");
    do {
    puts("=======================================");
    puts("1. Add employee");
    puts("2. Search employee");
    puts("3. Check employee budget");
    puts("4. Exit");
    printf("Enter your choice: ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            add_employees();
        break;
        case 2:
            search_employees();
        break;
        case 3:
            check_budget();
        break;
        case 4:
            puts("Exiting the program");
        break;
        default:
            puts("[!] Invalid choice [!]");
    }

    } while (choice != 4);

    
} 

void add_employees(void) {
    if (count >= MAX_EMPLOYEES) {
        puts("SYSTEM IS FULL");
        return;
    }
    puts("\n=====================================");
    printf("Enter employee ID: ");
    scanf("%d", &ID[count]);
    Salary[count] = salary_cal();
    printf("Enter budget: ");
    scanf("%lf", &Budget[count]);

    count++;

    while (getchar() != '\n');
    puts("Employee added successfully!!");
    puts("======================================\n");
}

void search_employees(void) {
    if (count == 0) {
        puts("SYSTEM IS EMPTY");
        return;
    }

    int search;
    int found = 0;

    printf("Enter search ID: ");
    scanf("%d", &search);

    for (int i = 0; i < count; i++) {
        if (search == ID[i]) {
            puts("Found!!");
            found = 1;
            printf("ID: %d\n", ID[i]);
            printf("Salary: %.2f\n", Salary[i]);
            break;
        }
        
    }
    if (!found) {
        puts("Employee not found");
        return;
    } 
}

void check_budget(void) {
    if (count == 0) {
        puts("SYSTEM IS EMPTY");
        return;
    }

    int search;
    int found = 0;

    printf("Enter employee ID: ");
    scanf("%d", &search);

    for(int i = 0; i < count; i++) {
        if(search == ID[i]) {
            printf("Employee found\n");
            found = 1;
            printf("Salary: %.2f\n", Salary[i]);
                if (Budget[i] > Salary[i]) {
                    printf("SURPLUS\n");
                } else if (Budget[i] < Salary[i]) {
                    printf("DEFICIT\n");
                } else {
                    printf("BALANCED");
                }
                break;
        }

    }

        if (!found) {
            puts("Employee not found");
        }
    
}

double salary_cal(void) {


    double basicSalary;
    double house;
    double transport;

    


    printf("Enter salary: ");
    scanf("%lf", &basicSalary);
    printf("Enter house allowance: ");
    scanf("%lf", &house);
    printf("Enter transport allowance: ");
    scanf("%lf", &transport);

   return netSalary(basicSalary,house, transport);


}

double netSalary(double basic, double house, double transport) {
    double gross = basic + house + transport;
    
    return gross - (gross * 0.15);
}
