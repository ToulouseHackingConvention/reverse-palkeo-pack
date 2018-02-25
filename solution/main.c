#include <stdio.h>
#include <string.h>

int main()
{
    char flag[] = "THC{IncrementedTheVeryLastByte}";
    char input[256];
    printf("Please enter the flag:\n");
    scanf("%s", input);
    if(strcmp(input, flag) == 0) {
        printf("You have the flag!\n");
    } else {
        printf("You lost the game.\n");
    }
    return 0;
}
