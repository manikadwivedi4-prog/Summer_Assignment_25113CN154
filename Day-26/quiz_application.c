#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("Question 1: What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B')
        score++;

    printf("\nQuestion 2: Which language is used for system programming?\n");
    printf("a) HTML\nb) CSS\nc) C\nd) SQL\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C')
        score++;

    printf("\nQuestion 3: How many bits are there in a byte?\n");
    printf("a) 4\nb) 8\nc) 16\nd) 32\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B')
        score++;

    printf("\nYour Final Score = %d/3\n", score);

    return 0;
}