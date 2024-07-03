#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char user_name[50];

    printf("Who are you?\n> ");
    scanf("%s", user_name);
    printf("Hello, %s!\n", user_name);

    srand(time(NULL)); // 初期化

    printf("Tossing a coin...\n");
    int heads_count = 0;
    int tails_count = 0;

    for (int i = 0; i < 3; i++) {
        int toss = rand() % 2;
        if (toss == 0) {
            printf("Round %d: Heads\n", i + 1);
            heads_count++;
        } else {
            printf("Round %d: Tails\n", i + 1);
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    if (heads_count > tails_count) {
        printf("%s won!\n", user_name);
    } else {
        printf("%s lost!\n", user_name);
    }

    return 0;
}
