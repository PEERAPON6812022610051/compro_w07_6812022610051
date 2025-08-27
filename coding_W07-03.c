#include <stdio.h>

int main()
{
    int level;
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1: printf("Beginner\n"); break;
        case 2: printf("Intermediate\n"); break;
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        default: printf("invalid level\n");
        }
    
    return 0;
}

// input(level): 0 => output: invalid level
// input(level): 1 => output: Beginner
// input(level): 2 => output: Intermediate
// input(level): 3 => output: Advanced
// input(level): 4 => output: Expert
// input(level): 10 => output: invalid level