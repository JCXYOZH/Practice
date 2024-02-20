/* 编写input()和output()函数 */


#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    char sex[5];
    int age;
}Stu;

void input(Stu *stu)
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %s %d", stu[i].name, stu[i].sex, &(stu[i].age));
    }
}

void output(Stu *stu)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
    }
}

int main()
{
    Stu stu[5];
    printf("5 name sex age:\n");
    input(stu);
    printf("rx:\n");
    output(stu);
    // 用于在控制台程序中暂停程序执行的命令。
    // 当在Windows平台上使用这个命令时，它会调用系统命令pause，
    // 在程序执行到这一行时，会显示消息："请按任意键继续. . ."，
    // 并等待用户按下任意键后才会继续执行程序。
    // 在其他操作系统如Linux或Mac上，这个命令可能没有相同的作用。
    system("pause");
    return 0;
}