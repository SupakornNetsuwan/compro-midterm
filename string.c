#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // string1 เท่ากับ string2 
    // * ในการเขียนสังเกตรูปแบบ single quote, double quote ให้ดี
    // char string1[20] = "Hello"; 
    // char string2[20] = {'H', 'e', 'l', 'l', 'o', '\n'};
    printf("size of char: %d\n", sizeof('b'));

    char myarray[20] = {'a', 'b', 'c', 'd', '\0'};
    // char myarray[] = {'a', 'b', 'c', 'd', '\0'}; // ลอง uncomment แล้วเปลี่ยนแบบไม่มีการจองพื้นที่ดูผลลัพธ์
    // char myarray[] = "abcd";

    //การลูป array of char 1nd หรือ string ทำได้ดังต่อไปนี้
    // 1 ---------------------------------------------------------------
    printf("(line: 17) Output:");
    for (int i = 0; myarray[i] != '\0'; i++)
    {
        printf(" %c", myarray[i]);
    }
    printf(" Output for i :");
    for (int i = 0; myarray[i] != '\0'; i++)
    {
        printf(" %d", i);
    }

    // 2 ---------------------------------------------------------------
    // (The best way cr. StackOverflow)
    printf("\n(line: 29) Output:");
    for (int i = 0; i < strlen(myarray); i++)
    {
        printf(" %c", myarray[i]);
    }
    printf(" Output for i :");
    for (int i = 0; i < strlen(myarray); i++)
    {
        printf(" %d", i);
    }

    // 3 ---------------------------------------------------------------
    // สามารถสังเกตได้ว่าค่า output มีการคลาดเคลื่อนในบางกรณี และ ถ้าหากคุณจองพ้นที่ใน array ไปแล้ว sizeof จะยึดตามขนาดที่คุณจอง 
    // sizeof() เมื่อใช้กับ string จะมีการ ค่าเกินมา 1 เนื่องจากนับ pointer ไปด้วย
    printf("\n(line: 43) Output:");
    for (int i = 0; i < sizeof(myarray); i++)
    {
        printf(" %c", myarray[i]);
    }
     printf("Output for i :");
    for (int i = 0; i < sizeof(myarray); i++)
    {
        printf(" %d", i);
    }

    return 0;
}