#include <stdio.h>
#include <string.h>

#define DATABASE_SIZE 6

void searchDatabase(const char* input, const char* database[][2], int databaseSize) {
    int found = 0;

    // Search for the input in the database
    for (int i = 0; i < databaseSize; i++) {
        if (strcmp(input, database[i][0]) == 0) {
            printf("Capital: %s\n", database[i][1]);
            found = 1;
            break;
        } else if (strcmp(input, database[i][1]) == 0) {
            printf("Country: %s\n", database[i][0]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No data found for '%s'\n", input);
    }
}

int main() {
    const char* database[][2] = {
        {"India", "New Delhi"},
        {"Australia", "Canberra"},
        {"Bangladesh", "Dhaka"},
        {"Bhutan", "Thimphu"},
        {"Canada", "Ottawa"},
        {"China", "Beijing"},
        {"Japan", "Tokyo"}
    };
    int databaseSize = DATABASE_SIZE;

    char input[100];

    while (1) {
        printf("Enter a country or capital (End to exit): ");
        scanf("%s", input);

        if (strcmp(input, "End") == 0) {
            break;
        }

        searchDatabase(input, database, databaseSize);
    }

    return 0;
}
