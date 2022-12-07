#include <stdio.h>
#include <stdlib.h>
int main() {
    int day;
    system("chcp 1251");
    system("cls");
    printf("Enter number of week: ");
    scanf(R"(%d)", &day);
    switch (day) {
    case 1:
        printf("monday, 3 university couple");
        break;
    case 2:
        printf("tuesday, 3 university couple ");
        break;
    case 3:
        printf("wednesday, 2 university couple");
        break;
    case 4:
        printf("thursday, 4 university couple");
        break;
    case 5:
        printf("friday, 4 university couple" );
        break;
    case 6:
        printf("saturday, no university couple");
        break;
    case 7:
        printf("sunday, no university couple");
        break;
    default:
        printf("Wrong enter day of week");
        break;
    }
    getchar(); getchar();
    return 0;
}
