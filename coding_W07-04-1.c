#include <stdio.h>

int main() {
    int memberType;
    printf("กรุณาเลือกประเภทบัตรสมาชิก (1-4): ");
    scanf("%d", &memberType);

    if (memberType == 1) {
        printf("Silver: 5%% discount\n");
    } else if (memberType == 2) {
        printf("Gold: 10%% discount + Reward points\n");
    } else if (memberType == 3) {
        printf("Platinum: 15%% discount + Reward points + Birthday gift\n");
    } else if (memberType == 4) {
        printf("Diamond: 20%% discount + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }

    return 0;
}