#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    do
    {
        printf("Nhap thang : ");
        scanf("%d", &x);
    } while (x < 1 || x > 12);
    switch (x)
    {
    case 1: case 2: case 3:
        printf("Quy 1");
        break;
    case 4: case 5: case 6:
        printf("Quy 2");
        break;
    case 7: case 8: case 9:
        printf("Quy 3");
        break;
    default:
        printf("Quy 4");
        break;
    }
    getch();
    return 0;
}