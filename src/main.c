#include <stdio.h>
#include <string.h>
#include <usart.h>

#define MAX 7
char names[MAX][10] = {"Moe", "Larry", "Curly", "Joey", "Johnny", "Mark", "Lucas"};

void printFirstLetters() {
    for (int i = 0; i <= MAX - 1; i++) {
        printf("%c \n", names[i - 1][0]);
    }
}


void printLastLetters() {
    for (int i = 0; i <= MAX - 1; i++) {
        printf("%c \n", names[i - 1][strlen((const char *) names) - 1]);
    }
}

void searchShortestName() {
    if (strlen(names[0]) < (strlen(names[MAX - 1]))) {
        printf("%s", names[0]);
    } else if (strlen(names[0]) > (strlen(names[1]))) {
        printf("%s", names[MAX - 1]);
    }
}

int main() {
    initUSART();
    printFirstLetters();
    printf("------------------------- \n");
    printLastLetters();
    printf("------------------------- \n");
    searchShortestName();
}