#include <stdio.h>

int main() {
    char itemName[30] = "";
    int itemCount = 0;
    float itemPrice = 0.0;
    float totalCost = 0.0;
    

    printf("What item would you like to purchase? ");
    fgets(itemName, sizeof(itemName), stdin);

    printf("How many items would you like to purchase? ");
    scanf("%d", &itemCount);

    printf("The price of the item is $ ");
    scanf("%f", &itemPrice);

    totalCost = itemCount * itemPrice;
    printf("Total cost is $ %.2f\n", totalCost);

    return 0;
}
