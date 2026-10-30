#include <stdio.h>

int main () {

    //variables
    char supplierName[100];
    double price;
    double budget;
    int regStatus;
    int completedDocs;

    puts("===========================");
    puts("Tender Evaluation");
    puts("===========================");
    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter supplier price: ");
    scanf("%lf", &price);

    printf("Enter tender budget: ");
    scanf("%lf", &budget);

    puts("");
    puts("Enter 1 (yes) or 0 (no)");

    printf("Is supplier registrated: ");
    scanf("%d", &regStatus);

    printf("Are Documents completed: ");
    scanf("%d", &completedDocs);


    if (regStatus == 1 && completedDocs == 1) {

        puts("=========================");
        if (budget >= price) {
            printf("\nQualified\n");
            //Displaying supplier who is qualified
            printf("Supplier name: %s\n", supplierName);
            printf("Supplier price: N$ %.2f\n", price);
            printf("Tender budget: N$ %.2f\n", budget);

        } else {
            printf("Not qualified");
        }

    } else {
        printf("Not qualified");
    }




    return 0;
}
