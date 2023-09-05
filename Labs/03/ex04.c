question ## 4 of lab manual ## 1

#include <stdio.h>

int main() {
    int original_price = 1500;
    int discount= 20;

    int after_discount = (original_price*discount)/100;
    int sale_price = (original_price - after_discount);
    printf("The original price was: %d\n", sale_price);
    printf("The price after discount is: %d\n", after_discount);
    printf("The sale price is: %d\n", sale_price);
    return 0;
}
