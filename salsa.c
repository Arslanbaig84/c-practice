#include <stdio.h>

//void print_sales(int arr[], char arr2[][7], int size);
int find_lowest(int arr[], int size);
int find_highest(int arr[], int size);
void find_total(int arr[], int size);
int main()
{
    char salsa[5][7] = {"mild", "medium", "sweet", "hot", "zetsy"};
    int flavours = 5;
    int sales[flavours];

    for (int i = 0; i < flavours; i++)
    {
        printf("sales of flavour %s: ", salsa[i]);
        scanf("%i", &sales[i]);
    }

    //print_sales(sales, salsa, flavours);
    for (int i = 0; i < flavours; i++)
    {
        printf("%s monthly sales: %i\n", salsa[i], sales[i]);
    }

    int lowest = find_lowest(sales, flavours);
    int highest = find_highest(sales, flavours);
    printf("Highest Sales Item: %s, Sales: %i\n", salsa[highest], sales[highest]);
    printf("Lowest Sales Item: %s, Sales: %i\n", salsa[lowest], sales[lowest]);
    find_total(sales, flavours);
    return 0;
}

//void print_sales(int arr[], char arr2[][7], int size)
//{
    //for (int i = 0; i < size; i++)
    //{
        //printf("%c flavour sales: %i\n", arr2[i][6], arr[i]);
    //}
//}

int find_lowest(int arr[], int size)
{
    int lowest_sales = arr[0];
    int lowest;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < lowest_sales)
        {
            lowest = i;
        }
    }
    return lowest;
}

int find_highest(int arr[], int size)
{
    int highest_sales = arr[0];
    int highest;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > highest_sales)
        {
            highest = i;
        }
    }
    return highest;
}

void find_total(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    printf("Total Monthly Sales: %i\n", total);
}