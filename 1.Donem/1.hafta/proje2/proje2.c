#include <stdio.h>

int main()
{
    char name[20];
    char nickName[20];
    long long int studentNumber;
    float GPA;
    printf("Enter Your Name: ");
    scanf("%s", &name);
    printf("Enter Your Nickname: ");
    scanf("%s", &nickName);
    printf("Enter Your Student Number: ");
    scanf("%d", &studentNumber);
    printf("Enter Your GPA: ");
    scanf("%f", &GPA);

    printf("\nFull Name: %s %s\n", name, nickName);
    printf("Student Number: %d\n", studentNumber);
    printf("GPA:  %.1f", GPA);
    return 0;
}