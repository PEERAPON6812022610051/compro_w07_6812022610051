#include <stdio.h>

int main() {
    int memberType;
    printf("กรุณาเลือกประเภทบัตรสมาชิก (1-4): ");
    scanf("%d", &memberType);

    switch (memberType) {
        case 1:
            printf("Silver: 5%% discount\n");
            break;
        case 2:
            printf("Gold: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond: 20%% discount + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");
            break;
    }

    return 0;
}
// สรุป ทั้งสองแบบทำงานเหมือนกัน แต่โครงสร้างต่างกัน

// if-else if เหมาะกับเงื่อนไขซับซ้อนหรือไม่ใช่ตัวเลขตรง ๆ

// switch-case เหมาะกับตัวเลือกที่แน่นอน เช่น ตัวเลข 1–4 แบบนี้