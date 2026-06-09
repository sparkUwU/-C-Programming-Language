#include <stdio.h>
#include <string.h>

int main() {
    char noun[30] = "";
    char verb[30] = "";
    char adjective[30] = "";
    char adjective2[30] = "";
    char adjective3[30] = "";

    printf("Enter a noun (animal or person): ");
    fgets(noun,sizeof(noun),stdin);
    noun[strcspn(noun, "\n")] = '\0'; // Remove newline character

    printf("Enter a verb (ending w/-ing): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strcspn(verb, "\n")] = '\0'; // Remove newline character

    printf("Enter an adjective (description): ");
    fgets(adjective,sizeof(adjective),stdin);
    adjective[strcspn(adjective, "\n")] = '\0'; // Remove newline character

    printf("Enter another adjective (description): ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strcspn(adjective2, "\n")] = '\0'; // Remove newline character

    printf("Enter one more adjective (description): ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strcspn(adjective3, "\n")] = '\0'; // Remove newline character


    printf("Today I went to a %s zoo.\n", adjective);
    printf("And I saw %s.\n", noun);
    printf("It was %s.\n", verb);
    printf("The %s %s was very %s.\n", adjective2, noun, adjective3);

    return 0;
}