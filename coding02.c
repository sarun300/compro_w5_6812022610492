#include <stdio.h> // รวมไลบรารีมาตรฐานสำหรับ input/output เช่น printf, scanf

int main() {
    char name[30];       // เก็บชื่อนักเรียน สูงสุด 29 ตัวอักษร + null terminator '\0'
    int age;             // อายุ (จำนวนเต็ม)
    float height;        // ส่วนสูง (ทศนิยม หน่วยเซนติเมตร)

    char subject;        // ตัวอักษรแทนชื่อวิชา เช่น 'M' = Math
    float grade;         // เกรดที่ได้ เช่น 3.75
    char description[20];// คำอธิบายเกรด เช่น "Very Good"

    // รับชื่อ อายุ และส่วนสูงจากผู้ใช้
    printf("Enter your name, age and height: ");
    scanf("%s %d %f", name, &age, &height);
    // หมายเหตุ: scanf("%s") รับแค่คำแรกของชื่อ เช่น "John Smith" จะได้แค่ "John"

    // รับชื่อวิชา เกรด และคำอธิบายจากผู้ใช้
    printf("Enter subject, grade, and grade description: ");
    scanf(" %c %f %s", &subject, &grade, description);
    // มีช่องว่างหน้าตัว %c เพื่อกิน newline character ค้างจากการกด Enter

    // แสดงผลข้อมูลที่รับมา
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %s got %.2f which is described as \"%s\".\n", subject, name, grade, description);

    return 0; // ส่งค่า 0 เพื่อแสดงว่าโปรแกรมทำงานเสร็จสิ้นสมบูรณ์
}
