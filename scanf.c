#include <stdio.h>

int main()
{
    //practicing David's example of scanf
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("value of x is %i\n", x);

    //practicing scanf
    int apples;
    printf("apples sold: ");
    scanf("%i", &apples);
    printf("On sunday we sold %i apples\n", apples);

    // printing letters from ASCII characters
    char letter;
    letter = 65;
    printf("%c\n", letter);
    letter = 66;
    printf("%c\n", letter);

    // string doesn't work in c but do in c++ with string library. Need to go with char *
    char *movie = "dumb & dumber";
    printf("my favourite movie is %s\n", movie);

    //checking out size of variable types
    float apple;
    printf("%lu\n", sizeof(apple));

    // checking auto dont understand it yet
    auto int amount = 100;
    printf("%i\n", amount);

    // checking how truncated part of an integer from buffer is stored in float
    int num1;
    float num2;
    printf("give an integer: ");
    scanf("%i", &num1);
    printf("%i\n", num1);

    printf("give a float: ");
    scanf("%f", &num2);
    printf("%f\n", num2);


    // remainder can also be applied on same variable just like other arithmetics %10d give 10 space right indentation before answer
    int c;
    printf("write an integer: ");
    scanf("%i", &c);
    c %= 3;
    printf("%10d\n", c);
}