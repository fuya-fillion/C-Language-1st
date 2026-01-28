#include <stdio.h>
#include <string.h>

struct zodiac {
    char name[100];
    int age;
    char zodiac[10];
};

void Print_zodiac(char zodiac[10]) {
    printf("\nYour Japanese zodiac is %s.\n", zodiac);
}

int main(void) {
    struct zodiac a;
    int s_age;

    printf("Input your name: ");
    scanf("%s", a.name);
    printf("Input your age: ");
    scanf("%d", &a.age);

    s_age = a.age + 3;

    printf("\n%s!", a.name);

    switch (s_age % 12) {
        case 1 : strcpy(a.zodiac, "Rat"); Print_zodiac(a.zodiac);     break;
        case 2 : strcpy(a.zodiac, "Ox"); Print_zodiac(a.zodiac);      break;
        case 3 : strcpy(a.zodiac, "Tiger"); Print_zodiac(a.zodiac);   break;
        case 4 : strcpy(a.zodiac, "Rabbit"); Print_zodiac(a.zodiac);  break;
        case 5 : strcpy(a.zodiac, "Dragon"); Print_zodiac(a.zodiac);  break;
        case 6 : strcpy(a.zodiac, "Snake"); Print_zodiac(a.zodiac);   break;
        case 7 : strcpy(a.zodiac, "Horse"); Print_zodiac(a.zodiac);   break;
        case 8 : strcpy(a.zodiac, "Sheep"); Print_zodiac(a.zodiac);   break;
        case 9 : strcpy(a.zodiac, "Monkey"); Print_zodiac(a.zodiac);  break;
        case 10: strcpy(a.zodiac, "Rooster"); Print_zodiac(a.zodiac); break;
        case 11: strcpy(a.zodiac, "Dog"); Print_zodiac(a.zodiac);     break;
        default: strcpy(a.zodiac, "Boar"); Print_zodiac(a.zodiac);    break;
    }

    return 0;
}