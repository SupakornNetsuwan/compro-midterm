#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int numberarray[] = {1, 2, 3, 44, 5, 7};
    // int numberarray[20] = {1, 2, 3, 44, 5, 7}; // ลอง uncomment แล้วเปลี่ยนแบบมีการจองพื้นที่ดูผลลัพธ์

    printf("size of int: %d\n", sizeof(1));
    printf("size of array of int (with 4 int): %d\n", sizeof(numberarray)); //สังเกตได้ว่า ขนาดออกมา 24 เพราะ 6 * 4 = 24 แตกต่างจาก sizeof array ที่าเป็น char

    //การลูป array of int หรือ string ทำได้ดังต่อไปนี้
    // 1 ---------------------------------------------------------------

    printf("(line: 16) Output: ");
    for (int i = 0; i < sizeof(numberarray)/sizeof(numberarray[0]); i++)
    {
        printf(" %d", numberarray[i]);
    }
    printf(" Output for i :");
    for (int i = 0; i < sizeof(numberarray)/sizeof(numberarray[0]); i++)
    {
        printf(" %d", i);
    }
    
    // 2 ---------------------------------------------------------------
    // เมื่อคุณมีค่า length ของ array ที่ static แน่นอน
    // หากเกิน length ที่มีต่าจะผิดพลาด

    printf("\n(line: 31) Output: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", numberarray[i]);
    }
    printf(" Output for i :");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", i);
    }

    return 0;
}