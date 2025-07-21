#include <stdio.h>

int main() {
    float a = 0.617;
    int b = 25;
    float c = 19.000;
    int d = 9;
    float e = 124.555;
    float f = 0.001;

    printf("a = %7.3f %%\n", a);   // กำหนดช่องกว้าง 7 ตัวอักษร ทศนิยม 3 ตำแหน่ง
    printf("b = %5d %%\n", b);     // ช่องกว้าง 5 ตัวอักษร สำหรับจำนวนเต็ม
    printf("c = %7.3f %%\n", c);
    printf("d = %5d %%\n", d);
    printf("e = %8.3f %%\n", e);   // e ตัวเลขใหญ่กว่าหน่อย จึงขยายช่องกว้างขึ้น
    printf("f = %7.3f %%\n", f);

    return 0;
}
