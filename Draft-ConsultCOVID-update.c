#include <stdio.h>

int main() {
    struct Profile {
        char FirstName[51];
        char LastName[51];
        int Age;
        float Weight, Height;
    } info;

    int logic = 1, answer = 0;

    while (logic == 1) {
        // Recieve Personal Info //
        printf("Please enter your information below.\n");
        printf("First Name :");
        scanf("%s", &info.FirstName);
        printf("\tLast Name :");
        scanf("%s", &info.LastName);

        printf("\nAge :");
        scanf("%d", &info.Age);
        printf("\tWeight");
        scanf("%f", &info.Weight);
        printf("\tHeight");
        scanf("%f", &info.Height);

        printf("\nPlease answer the question below.\n");
        printf("Have you ever been around or exposed to an infected person?\n");
        scanf("%d", &answer);
        if (answer == 1) {
            printf("You should see your doctor to be tested for infection.\n");
        } else if (answer == 1) {
            printf("Have you ever traveled to a risky area?\n");
            scanf("%d", &answer);
            if (answer == 1) {
                printf("You should quarantine for 14 days to watch for symptoms.\n");
                printf("If symptoms occur according to the Ministry of Public Health, seek medical attention immediately.\n");
            }
        } else {
            printf("You are still normal. Maintain health and wear a mask all the time when going out of the house.");
        }

        printf("Do you exit?");
        scanf("%d", &logic);
    }

    return 0;
}