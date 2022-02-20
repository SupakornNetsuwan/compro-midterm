#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // เราสามารถเขียน array 2d ได้หลายแบบ
    // char array [][20] = {{'H', 'e', 'l', 'l', 'o', '\0'}, {'E', 'a', 'r', 't', 'h', '\0'}, {'I','T','K','M','T','L', '\0'}};
    // char array [][20] = {"Hello", "Earth", "ITKMITL"};

    // char myarray [][20] = {{'H', 'e', 'l', 'l', 'o', '\0'}, {'E', 'a', 'r', 't', 'h', '\0'}, {'I','T','K','M','T','L', '\0'}};
    char myarray[][20] = {"Hello", "Earth", "ITKMITL"};
    // char myarray[60][20] = {"Hello", "Earth", "ITKMITL"}; // ลอง uncomment แล้วเปลี่ยนแบบมีการจองพื้นที่ดูผลลัพธ์

    printf("size of array: %d\n", sizeof(myarray)); // จะได้ 60 เพราะ 20 * 3
    printf("finding size of array: %d\n", sizeof(myarray) / sizeof(myarray[0]));

    // การลูป array 2d ทำได้ดังต่อไปนี้

    // การลูป array ชั้นนอก
    printf("(line: 21) Output: ");
    for (int i = 0; i < sizeof(myarray) / sizeof(myarray[0]); i++)
    {
        printf("%s ", myarray[i]);
    }

    // การเข้าถึง array ชั้นใน เพื่อเข้าถึง char แต่ละตัว ทำได้ดังนี้
    // 1 ---------------------------------------------------------------
    for (int i = 0; i < sizeof(myarray) / sizeof(myarray[0]); i++)
    {
        for (int j = 0; j < strlen(myarray[i]); j++)
        {
            printf("%c + ", myarray[i][j]);
        }
        printf("\n");
    }

    // 2 ---------------------------------------------------------------
    printf("\n(line: 39) Output: ");
    for (int i = 0; i < sizeof(myarray) / sizeof(myarray[0]); i++)
    {
        // การ loop แบบยึกตามขนาดที่ fix ไว้โดย length of array ใน (ขนาด array มิติที่ 2 ตามตัวอย่างคือ 20)
        for (int j = 0; j < sizeof(myarray[i]); j++)
        {
            printf("%c + ", myarray[i][j]);
            // printf("%d ", j);
        }
        printf("\n");
    }

    // 2 ---------------------------------------------------------------
    // เมื่อคุณมีค่า length ของ array ที่ static แน่นอน
    // อาจมีข้อผิดพลาดได้
    printf("\n(line: 54) Output: ");
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c + ", myarray[i][j]);
        }   
        printf("\n");
    }
    
    return 0;
}