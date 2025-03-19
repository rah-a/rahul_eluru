#include <stdio.h>

int main() {
    char name[10][10]; 
    int a;

    printf("Enter number of names :");
    scanf("%d",a);
    for (int i = 0; i < a; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%9s", name[i]); 
    }

    printf("\nThe names are as follows:\n");
    for (int i = 0; i < a; i++) {
        printf("Name %d: %s\n", i + 1, name[i]);
    }

    return 0;
}
