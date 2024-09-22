
#include <stdio.h>

void displayMenu();
float getPrice(int number);

void main() {
    int number, quantity;
    char choice;
   int totalBill = 0;
    
    while (1) {
        displayMenu();

        printf("Enter the number of the food item you want to order: ");
        scanf("%d", &number);

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        totalBill += getPrice(number) * quantity;
        printf("\nYour  bill is: %d\n", totalBill);

        printf("Do you want to order more items? (y/n): ");
        scanf(" %c", &choice); 

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    printf("\nYour total bill is: %.d\n", totalBill);
    
}

void displayMenu() {
    
    printf("1.pizza---->price=180rs\n");
    printf("2.Burger---->price=100rs\n");
    printf("3.Dosha---->price=120rs\n");
    printf("4.Idli---->price=50rs\n");
    
    
}

float getPrice(int number) {
    switch (number) {
        case 1: return 180;   // Price of pizza
        case 2: return 100;   // Price of Burger 
        case 3: return 120;   // Price of dosha 
        case 4: return 50;   // Price of idli
        default: 
            printf("Invalid number entered!\n");
    }
}