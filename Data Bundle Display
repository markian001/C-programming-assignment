/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:Program to select data bundles and display
corresponding costs
*/
#include <stdio.h>

int main(){
    int choice;

    //Introduction of array to minimize repetition//
    char *bundles[] = {"100MB", "500MB", "1GB", "2GB"};
    int cost[] = {50, 200, 350, 600};
    printf("Select data bundle\n"
           "1. 100MB @ 50 KES\n"
           "2. 500MB @ 200 KES\n"
           "3. 1GB   @ 350 KES\n"
           "4. 2GB   @ 600 KES\n"
           "Enter your choice (1-4): ");
    scanf("%d", &choice);

      if(choice >= 1 && choice <= 4){
        printf("You selected %s. Cost = %d KES\n",
             //since in C array counts elements from 0//
               bundles[choice - 1], cost[choice - 1]);
      }else{printf("Invalid choice!");
    }
    return 0;
}
