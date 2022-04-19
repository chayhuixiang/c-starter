#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *productItem) {
    printf("Enter a product name: ");
    scanf("%s",productItem->itemName);
    printf("Enter a product price: ");
    scanf("%f",&(productItem->price));
    printf("Enter a product quantity: ");
    scanf("%d",&(productItem->quantity));
    productItem->amount = (productItem->quantity)*(productItem->price);
}

void printItem(struct item *productItem){
    printf("Product - Name: %s | Price: %f | Quantity: %d | Amount: %f",productItem->itemName,productItem->price,productItem->quantity,productItem->amount);
}

int main(){
    struct item productItem;
    productItem.itemName = (char *) malloc(sizeof(char)*100);
    readItem(&productItem);
    printItem(&productItem);
    return 0;
}