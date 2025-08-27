#include <stdio.h>
 
int main(){
    int x, y;
    
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
    if (x > y) {
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");
    } else {
        printf("x เท่ากับ y\n");
    }
    
    return 0;
}