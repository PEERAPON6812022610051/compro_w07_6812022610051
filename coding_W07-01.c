#include <stdio.h>

int main() {
    int score;   // กำหนดคะแนนสอบ midterm
    float final_score; // ประกาศตัวแปรสำหรับเก็บคะแนนรวม

    printf("Enter your score");  // รับค่าคะแนนสอบของผู้ใช้
    scanf("%d", &score);    

    if (score >= 50) {      
        final_score = score * 1.05;   // ถ้าคะแนนมากกว่าหรือเท่ากับ 50 จะบวกเพิ่มอีก 5%
    } else {
        final_score = score;       // ถ้าคะแนนน้อยกว่า 50 ไม่บวกเพิ่ม
    }

    printf("Final score: %.2f\n", final_score); // แสดงคะแนนรวม
    printf("End of evaluation\n");      // แสดงข้อความจบการประเมิน 

    return 0;
}