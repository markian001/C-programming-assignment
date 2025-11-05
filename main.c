#include <stdio.h>

int main()
{
    FILE *fptr;
    char title[50];
    char choice;

    fptr = fopen("borrowed_books.txt", "a");

    if(fptr == NULL){
        printf("Error opening file.\n");
        return 1;
    }
    do{
        printf("Enter book title (one word): ");
        scanf("%s", title);

        fprintf(fptr, "%s\n", title);
        printf("Book title saved successfully!\n");

        printf("Do you want to enter another title? (y/n): ");
        scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');

    fclose(fptr);
    printf("All records have been saved.\n");

    return 0;
}
