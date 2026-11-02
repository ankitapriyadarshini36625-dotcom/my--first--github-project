#include <stdio.h>
#include <stdlib.h>

struct Order {
    int order_id;
    char product_category[20];
    int quantity;
    double price_per_unit;
};

int main() {
    // Array of 5 sample orders blending IT products and consumer items
    struct Order list[5] = {
        {101, "Electronics", 2, 450.00},
        {102, "Office_Supplies", 10, 15.50},
        {103, "Electronics", 1, 1200.00},
        {104, "Books", 5, 22.00},
        {105, "Office_Supplies", 3, 45.00}
    };

    FILE *file = fopen("orders.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write header
    fprintf(file, "order_id,product_category,quantity,price_per_unit\n");

    // Export structural rows
    for(int i = 0; i < 5; i++) {
        fprintf(file, "%d,%s,%d,%.2f\n", 
                list[i].order_id, 
                list[i].product_category, 
                list[i].quantity, 
                list[i].price_per_unit);
    }

    fclose(file);
    printf("Orders successfully processed and saved to orders.txt!\n");
    return 0;
}