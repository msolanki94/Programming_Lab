#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

// Function to convert a string to lowercase
void toLowerCase(char* str) {
    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
}

// Function to remove punctuation and other non-alphabetic characters
void removePunctuation(char* str) {
    char temp[MAX_WORD_LENGTH];
    int j = 0;
    for(int i = 0; str[i]; i++) {
        if (isalpha(str[i]) || isspace(str[i])) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    FILE *file;
    char filename[100];
    char keyword[MAX_WORD_LENGTH];
    char word[MAX_WORD_LENGTH];
    int count = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Get the keyword from the user
    printf("Enter the keyword to search: ");
    scanf("%s", keyword);

    // Convert keyword to lowercase for case-insensitive comparison
    toLowerCase(keyword);

    // Open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read the file word by word
    while (fscanf(file, "%s", word) != EOF) {
        // Remove punctuation and convert word to lowercase
        removePunctuation(word);
        toLowerCase(word);

        // Compare with the keyword
        if (strcmp(word, keyword) == 0) {
            count++;
        }
    }

    // Close the file
    fclose(file);

    // Display the result
    printf("The keyword '%s' occurs %d times in the file %s.\n", keyword, count, filename);

    return 0;
}

