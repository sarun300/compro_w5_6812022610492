#include <stdio.h> // ใช้สำหรับฟังก์ชัน printf() และอื่น ๆ ที่เกี่ยวกับ input/output

int main() {
    char name = 'S';      // ประกาศตัวแปรเก็บอักษรตัวแรกของชื่อ (ชนิด char)
    int age = 18;         // ประกาศตัวแปรอายุเป็นจำนวนเต็ม
    float weight = 62.5;  // ประกาศตัวแปรน้ำหนักเป็นทศนิยม (float)

    // แสดงข้อความพร้อมข้อมูล name และ age ด้วย format specifier %c และ %d
    printf("Student %c is %d years old.\n", name, age);

    // ข้อความนี้ควรแก้ไขให้ถูกหลักภาษาอังกฤษ (จาก "him weighs is" เป็น "He weighs")
    printf("He weighs %.1f kg.\n", weight); // %.1f แสดงเลขทศนิยม 1 ตำแหน่ง

    return 0; // คืนค่า 0 เพื่อบอกว่าโปรแกรมจบการทำงานสมบูรณ์
}
