#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    char single;
    char numReq;
    char purp;
    long number;  // Changed to long to accommodate larger numbers

    printf("What is Your Name?\n>> ");
    fgets(name, sizeof(name), stdin);
    // Remove trailing newline character if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("\nEnter Your Age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf(">> Wauuuu Nice!\n");
    } else {
        printf(">> Oh No! Nanu Sorry la, Bye.\n");
    }

    // Clear the input buffer
    while (getchar() != '\n');

    printf("\nAni Are you Single (y/n)?\n>> ");
    scanf("%c", &single);
    // Clear the input buffer
    while (getchar() != '\n');
    if (single == 'y') {
        printf(">> Wauuuu Nice!\n");
    } else {
        printf(">> Oh No! Very bad it's heart breaking :<.\n");
    }

    printf("\nCan I get your Mobile Number (y/n)?\n>> ");
    scanf("%c", &numReq);
    // Clear the input buffer
    while (getchar() != '\n');
    if (numReq == 'y') {
        printf("\n>> Please Enter Your Number: \n");
        scanf("%ld", &number);  // Read long integer
    } else {
        printf("\n>> Please Don't break my heart, Number Deu na (y/n)\n>> ");
        scanf("%c", &numReq);
        // Clear the input buffer
        while (getchar() != '\n');
        if (numReq == 'y') {
            printf("\n>> Please Enter Your Number: \n");
            scanf("%ld", &number);  // Read long integer
        } else {
            printf(">> Oh No! Very bad it's heart breaking :<.\n");
        }
    }

    while (getchar() != '\n');

    printf("\nMa timilai dherai man parauxu ani maya garxu, I love you <3 \n>> Will you be mine (y/n)? ");
    scanf("%c", &purp);
    while (getchar() != '\n');
    if (purp == 'y') {
        printf(">> Love you Toooooooooooooooo! \n");
    } else {
        printf(">> Fuck up I reject you, jau nani kam xaina timro byeeeee...\n");
    }
    // Total data
    printf("\n*********DATA*********\n");
    printf("Name: %s\n", name); 
    printf("Age: %d\n", age);
    if (numReq == 'y') {
        printf("Mobile Number: %ld\n", number); 
    }
    return 0;
}

