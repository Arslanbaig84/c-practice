#include <stdio.h>
#include <math.h>

//defining area covered per gallon & hrs labour worked per gallon
const int sqftpg = 160;
const int labour_cost = 28;

int prompting_inputs(void); //prompting input & calculating total area
int calculate_paint(int sum); //calculating total paint needed
int calculate_hours(int gallons); // calculating hours of labour worked
void cost_calculation(int gallons, int hours);

int main()
{
    int sum = prompting_inputs();
    int gallons = calculate_paint(sum);
    int hours = calculate_hours(gallons);
    cost_calculation(gallons, hours);
    return 0;
}

int prompting_inputs(void)
{
    int rooms, area;
    int sum = 0;
    printf("How many rooms to be painted: ");
    scanf("%i", &rooms);

    for (int i = 1 ; i <= rooms; i++)
    {
        printf("approximate area of room %i = ", i);
        scanf("%i", &area);
        sum += area;
    }
    printf("Total Area To Be Painted: %i\n", sum);
    return sum;
}

int calculate_paint(int sum)
{
    float paint = ((float)sum / sqftpg);
    int gallons = (int) ceil(paint);
    printf("Gallons of Paint needed: %i\n", gallons);
    return gallons;
}

int calculate_hours(int gallons)
{
    int hours = 3 * gallons;
    printf("Hours needed: %i\n", hours);
    return hours;
}

void cost_calculation(int gallons, int hours)
{
    float paint_cost;
    printf("Cost of paint/gallon: ");
    scanf("%f", &paint_cost);

    float tpc = paint_cost * gallons;
    printf("Paint Cost in full: %.2f\n", tpc);

    float labour_charges = labour_cost * hours;
    printf("Labour Charges: %.2f\n", labour_charges);

    float Total_Cost = tpc + labour_charges;
    printf("Total Cost of Paint Job: %.2f\n", Total_Cost);
}