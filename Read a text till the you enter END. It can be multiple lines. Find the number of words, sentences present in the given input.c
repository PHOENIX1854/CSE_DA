#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int countWords(char *text) {
    int wordCount = 0;
    int isWord = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            isWord = 0;
        } else if (isWord == 0) {
            isWord = 1;
            wordCount++;
        }
    }

    return wordCount;
}

int countSentences(char *text) {
    int sentenceCount = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
            sentenceCount++;
        }
    }

    return sentenceCount;
}

int main() {
    char text[MAX_LENGTH];
    char input[MAX_LENGTH];

    printf("Enter text (enter 'END' to finish):\n");

    while (1) {
        fgets(input, MAX_LENGTH, stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove trailing newline character

        if (strcmp(input, "END") == 0) {
            break;
        }

        strcat(text, input);
        strcat(text, " ");
    }

    int wordCount = countWords(text);
    int sentenceCount = countSentences(text);

    printf("Number of words: %d\n", wordCount);
    printf("Number of sentences: %d\n", sentenceCount);

    return 0;
}
