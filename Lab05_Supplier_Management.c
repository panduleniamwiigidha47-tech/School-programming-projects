#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 100
int main () {
    //supplier
    char name[MAX_SUPPLIERS][100];
    char email[MAX_SUPPLIERS][100];
    char phone[MAX_SUPPLIERS][100];
    char town[MAX_SUPPLIERS][100];

    //backup variable
    char backupName[MAX_SUPPLIERS][100];
    char backupEmail[MAX_SUPPLIERS][100];
    char backupPhone[MAX_SUPPLIERS][100];
    char backupTown[MAX_SUPPLIERS][100];
    
    int count = 0;


    int choice;

    do {
    puts("=====================");
    puts("Supplier Management");
    puts("=====================");

    puts("1. Add supplier");
    puts("2. Search supplier");
    puts("3. Display suppliers");
    puts("4. Backup supliers");
    puts("5. Exit ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (getchar() != '\n');

    switch(choice) {
        case 1:
         // add supplier
         if (count >= MAX_SUPPLIERS) {
            puts("Supplier list is full.");
            break;
         }
         
            printf("Enter supplier name: ");
            fgets(name[count], sizeof(name[count]), stdin);
            name[count][strcspn(name[count], "\n")] = '\0';

            printf("Enter email: ");
            fgets(email[count], sizeof(email[count]), stdin);
            email[count][strcspn(email[count], "\n")] = '\0';

            printf("Enter phone: ");
            fgets(phone[count], sizeof(phone[count]), stdin);
            phone[count][strcspn(phone[count], "\n")] = '\0';

            printf("Enter town: ");
            fgets(town[count], sizeof(town[count]), stdin);
            town[count][strcspn(town[count], "\n")] = '\0';

            count++;
        
         break;
        case 2:
         //search supplier
         {
            char search[100];
            int found = 0;
            puts("===================");
            puts("Search Suppliers");
            puts("===================");

            if (count == 0) {
                puts("NO SUPPLIERS IN THE SYSTEM");
                break;
            }

            printf("Enter search: ");
            fgets(search, sizeof(search), stdin);
            search[strcspn(search, "\n")] = '\0';

            for (int i = 0; i < count; i++) {
                if (strcmp(name[i], search) == 0) {
                    printf("Supplier found at position: %d\n", i);
                    found = 1;
                    break;
                }

            }
            if (!found) {
                puts("Not Supplier found");
            }
            
         }
         break;

         case 3:
         {
         puts("Displaying supplier");
         
          for(int i = 0; i < count; i++) {
            printf("Supplier %d\n", i);
            printf("Name: %s\n",name[i]);
            printf("Email: %s\n",email[i]);
            printf("Phone: %s\n",phone[i]);
            printf("Town: %s\n", town[i]);
            puts("=============================");
          }

         }
         break;

         case 4:
           if (count == 0) {
             puts("Supplier system empty");
             break;
           }
            for (int i = 0; i < count; i++) {
                strcpy(backupName[i], name[i]);
                strcpy(backupEmail[i], email[i]);
                strcpy(backupPhone[i], phone[i]);
                strcpy(backupTown[i], town[i]);
            }

            puts("Backup complete.");
            break;
        case 5:
            puts("Exiting the system. Thank you");
            return 0;
        break;
        default:
            printf("[!] Invalid choice [!]\n");
    } // switch case brankets

    } while (choice != 5); // do loop branket
    return 0;
}
