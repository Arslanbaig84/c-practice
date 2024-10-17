#include <stdio.h>

double getsales();
void findhighest();

const char *ne = "northeast";
const char *nw = "northwest";
const char *se = "southeast";
const char *sw = "southwest";

int main()
{
    double northeast = getsales(ne);
    double northwest = getsales(nw);
    double southeast = getsales(se);
    double southwest = getsales(sw);

    findhighest(northeast, northwest, southeast, southwest, ne, nw, se, sw);
    return 0;

}

double getsales(char *division)
{
    double sales;
    do
    {
        printf("Sales Results of the %s: ", division);
        scanf("%lf", &sales);
    }
    while(sales < 0);
    return sales;
}

void findhighest(double n1, double n2, double n3, double n4, char *division1, char *division2, char *division3, char *division4)
{
    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("%s is winner with highest sales %.2f\n", division1, n1);
    }
    else if (n2 > n3 && n2 > n4 && n2 > n1)
    {
        printf("%s is winner with highest sales %.2f\n", division2, n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("%s is winner with highest sales %.2f\n", division3, n3);
    }
    else
    printf("%s is winner with highest sales %.2f\n", division4, n4);

}