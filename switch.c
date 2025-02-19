#include <stdio.h>
int main() {
    int a;
    printf("Select a number between 1 and 5: ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("You're in luck! Today is your day!\n");
            break;
        case 2:
            printf("Good things are coming your way!\n");
            break;
        case 3:
            printf("Luck is on your side!\n");
            break;
        case 4:
            printf("Fortune favors you today!\n");
            break;
        case 5:
            printf("You're in for a lucky surprise!\n");
            break;
        default:
            printf("Invalid selection. Please select a number between 1 and 5.\n");
            break;
    }

    return 0;
}
