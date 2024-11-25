#include <stdio.h>


int main() {

    printf("Type something you would like to be repeated\n");

    char str[50];
    fgets(str, 40, stdin);
    printf("%s", str);
    return 0;

    // Do not use gets(). Use fgets()
}
/*

//Attempt 1
int main(){
    char to_repeat[50];

    //to do: account for space
    fgets("%s\n", to_repeat);
    printf("%s\n", to_repeat);
    return 0;
}
*/
