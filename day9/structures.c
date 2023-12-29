#include <stdio.h>

struct Car
{
    char name[50];
    char model[50];
    int year;
    char color[50];
    int price;
};

typedef struct Car Vehicle; // alias

// -> car1.name

int main() {
    struct Car car1;
    struct Car car2;

    printf("Enter car name: ");
    scanf("%s", car1.name);
    printf("Enter car model: ");
    scanf("%s", car1.model);
    printf("Enter car year: ");
    scanf("%d", &car1.year);
    printf("Enter car color: ");
    scanf("%s", car1.color);
    printf("Enter car price: ");
    scanf("%d", &car1.price);

    printf("Enter car name: ");
    scanf("%s", car2.name);
    printf("Enter car model: ");
    scanf("%s", car2.model);
    printf("Enter car year: ");
    scanf("%d", &car2.year);
    printf("Enter car color: ");
    scanf("%s", car2.color);
    printf("Enter car price: ");
    scanf("%d", &car2.price);

    printf("Car 1: %s %s %d %s %d\n", car1.name, car1.model, car1.year, car1.color, car1.price);
    printf("Car 2: %s %s %d %s %d\n", car2.name, car2.model, car2.year, car2.color, car2.price);

    return 0;
}



