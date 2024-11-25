#include <stdio.h>

int main() {
    printf("Hiii\n");
    printf("What is your name?\n");
    char name[50];
    scanf("%s",name);
    printf("What is up %s\n", name);
    return 0;
}

/*

Attempt 1
#include <stdio.h>

int main() {
    printf("Hiii");
    char name[50];
    name = scanf("What is your name?");
    printf("What is up %s", name)
    return 0;
}

Attempt 2
#include <stdio.h>

int main() {
    printf("Hiii");
    char name[50];
    printf("What is your name?\n")
    scanf("%s",name);
    printf("What is up %s", name);
    return 0;
}

Attempt 3
#include <stdio.h>

int main() {
    printf("Hiii");
    char name[50];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("What is up %s", name);
    return 0;
}

Attempt 4 is the final
*/
