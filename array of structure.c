#include <stdio.h>
#include <unistd.h> // Required for sleep function

struct student {
    char name[50];
    int marks[5];
    float average;
};

int main() {
    struct student s[3]; // Array of 3 students

    // Input student information
    for (int i = 0; i < 3; ++i) {
        printf("Enter the information of student %d: \n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        int sum = 0; // Initialize sum for each student
        printf("Enter five subject marks of the student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j]; // Sum marks
        }
        s[i].average = (float)sum / 5.0; // Calculate average
        printf("\n");
    }

    // Find the topper
    int maxindex = 0;
    float maxaverage = s[0].average;

    for (int i = 1; i < 3; i++) {
        if (s[i].average > maxaverage) {
            maxaverage = s[i].average;
            maxindex = i; // Update index of topper
        }
    }

    // Print topper's information
    sleep(4); // Pause for 4 seconds
    printf("The topper's name: %s\n", s[maxindex].name);
    printf("The average marks of the topper: %.2f\n", s[maxindex].average);

    return 0; // Return success
}
