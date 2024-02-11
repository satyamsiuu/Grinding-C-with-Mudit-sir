#include<string.h>
#include<stdio.h>
int main() {
    char c[40], word[20];
    int i = 0, s = 0, lar;
    
    printf("Enter a string: ");
    fgets(c, 40, stdin);

    // Finding the length of the first word
    while (c[i] != ' ' && c[i] != '\n' && c[i] != '\0') {
        word[i] = c[i];
        i++;
    }
    lar = i;

    // Finding the longest word
    while (c[i] != '\0' && c[i] != '\n') {
        s = 0;
        
        // Counting the length of the current word
        while (c[i] != ' ' && c[i] != '\n' && c[i] != '\0') {
            s++;
            i++;
        }

        // Comparing with the longest word
        if (s > lar) {
            lar = s;

            // Copying the longest word
            for (int j = 0; j < lar; j++) {
                word[j] = c[i - lar + j];
            }
            word[lar] = '\0';
        }

        // Skip the space or newline character
        if (c[i] == ' ' || c[i] == '\n') {
            i++;
        }
    }

    printf("The longest word is: %s\n", word);

    return 0;
}
