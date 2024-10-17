#include <stdio.h>

void getsales(double* sales, int size);
double totalsales(double* sales, int size);

int main()
{
    int quarters = 4;
    double sales[quarters];

    getsales(sales, quarters);

    for (int i = 0; i < quarters; i++)
    {
        printf("Sales of Quarter %i: %.2f\n", i+1, sales[i]);
    }

    double total = totalsales(sales, quarters);

    printf("Total Sales: $%.2f\n", total);

}

void getsales(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter Sales of Quarter %i: ", i+1);
        scanf("%lf", &arr[i]);
    }
}

double totalsales(double* arr, int size)
{
    double sum = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}