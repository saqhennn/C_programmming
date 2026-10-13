#include <stdio.h>

int calculateElectricBill(int units);

int main() {
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total bill = KSh. %d\n", calculateElectricBill(units));

    return 0;
}
int calculateElectricBill(int units) {
    int bill;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = 1000 + (units - 100) * 15;
    }
    else {
        bill = 1000 + 1500 + (units - 200) * 20;
    }

    return bill;
}
