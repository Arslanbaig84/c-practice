#include <stdio.h>

int trip_duration();
float mileage();
float parking(int);
float taxi(int);
float airfare();
float lodging(int);
int departure();
int arrival();
float breakfast(int, int, int);
float lunch(int, int, int);
float dinner(int, int, int);
float meals(float, float, float );

int main()
{
    int trip_days = trip_duration();
    //printf("No. of days of trip: %i\n", trip_days);

    float fuel_cost = mileage(trip_days);

    float parking_cost = parking(trip_days);
    float max_parking = trip_days * 12;

    float taxi_cost =  taxi(trip_days);
    float max_taxi = trip_days * 40;

    float flight_cost = airfare();

    float hotel_cost = lodging(trip_days);
    float max_hotel_cost = trip_days * 90;

    int departure_time = departure();

    int arrival_time = arrival();

    float breakfast_charges = breakfast(trip_days, departure_time, arrival_time);
    float max_breakfast_charges;
    if (departure_time < 7 && arrival_time > 8)
    {
        max_breakfast_charges = trip_days * 18;
    }
    else if (departure_time >= 7 && arrival_time > 8)
    {
        max_breakfast_charges = (trip_days - 1) * 18;
    }
    else
    {
        max_breakfast_charges = (trip_days - 2) * 18;
    }
    //printf("Breakfast Charges: %.2f, Max Allowed Breakfast Charges: %.2f\n", breakfast_charges, max_breakfast_charges);

    float lunch_charges = lunch(trip_days, departure_time, arrival_time);
    float max_lunch_charges;
    if (departure_time < 12 && arrival_time > 13)
    {
        max_lunch_charges = trip_days * 12;
    }
    else if (departure_time >= 12 && arrival_time > 13)
    {
        max_lunch_charges = (trip_days - 1) * 12;
    }
    else
    {
        max_lunch_charges = (trip_days - 2) * 12;
    }
    //printf("Lunch Charges: %.2f, Max Allowed Lunch Charges: %.2f\n", lunch_charges, max_lunch_charges);

    float dinner_charges = dinner(trip_days, departure_time, arrival_time);
    float max_dinner_charges;
    if (departure_time < 18 && arrival_time > 19)
    {
        max_dinner_charges = trip_days * 20;
    }
    else if (departure_time >= 18 && arrival_time > 19)
    {
        max_dinner_charges = (trip_days - 1) * 20;
    }
    else
    {
        max_dinner_charges = (trip_days - 2) * 20;
    }

    //printf("Dinner Charges: %.2f, Max Allowed Dinner Charges: %.2f\n", dinner_charges, max_dinner_charges);

    float meal_cost = meals(breakfast_charges, lunch_charges, dinner_charges);
    float max_meal_cost = meals(max_breakfast_charges, max_lunch_charges, max_dinner_charges);

    float trip_cost = fuel_cost + parking_cost + taxi_cost + flight_cost + hotel_cost + meal_cost;
    float max_trip_cost = fuel_cost + max_parking + max_taxi + flight_cost + max_hotel_cost + max_meal_cost;

    printf("Fuel Cost of personal vehicle: %.2f\n", fuel_cost);
    printf("Parking Fee Claimed: %.2f, Max Allowed Parking Fee: %.2f\n", parking_cost, max_parking);
    printf("Taxi Charges Claimed: %.2f, Max Allowed Taxi Chargges: %.2f\n", taxi_cost, max_taxi);
    printf("Total Flight Cost: %.2f\n", flight_cost);
    printf("Hotel Cost Claimed: %.2f, Max Hotel Cost Allowed: %.2f\n", hotel_cost, max_hotel_cost);
    printf("Total Meals Cost Claimed: %.2f, Max Meals Cost Allowed: %.2f\n", meal_cost, max_meal_cost);
    printf("Total Trip Cost: %.2f, Max Allowed Trip Cost: %.2f\n", trip_cost, max_trip_cost);
    return 0;
}

int trip_duration()
{
    int days;
    printf("No of day trip lasted: ");
    scanf("%i", &days);

    while (days < 1)
    {
        printf("Invalid Input\n");
        printf("No of day trip lasted: ");
        scanf("%i", &days);
    }
    return days;
}

float mileage()
{
    float miles;
    do
    {
        printf("Miles driven on private car: ");
        scanf("%f", &miles);
    }
    while (miles < 1);

    float mileage_cost = 0.58 * miles;
    return mileage_cost;
}

float parking(int trip_days)
{
    float parking_fee;
    float parking_cost = 0;
    for (int i = 0; i < trip_days; i++)
    {
        printf("Parking Fee of day %i: ",i+1);
        scanf("%f", &parking_fee);

        while (parking_fee < 0)
        {
            printf("Please input number greater than zero.\n");
            printf("Parking Fee of day %i: ",i+1);
            scanf("%f", &parking_fee);
        }

        if (parking_fee > 12)
        {
            parking_fee = 12;
        }

        parking_cost += parking_fee;
    }
    return parking_cost;
}

float taxi(int trip_days)
{
    float taxi_charges;
    float taxi_cost = 0;
    for (int i = 0; i < trip_days; i++)
    {
        printf("Taxi Charges of day %i: ", i+1);
        scanf("%f", &taxi_charges);

        while (taxi_charges < 0)
        {
            printf("Please input number greater than zero.\n");
            printf("Taxi Charges of day %i: ",i+1);
            scanf("%f", &taxi_charges);
        }
        if (taxi_charges > 40)
        {
            taxi_charges = 40;
        }
        taxi_cost += taxi_charges;
    }
    return taxi_cost;
}

float airfare()
{
    float airfare;
    printf("Airfare for round trip: ");
    scanf("%f", &airfare);
    return airfare;
}

float lodging(int trip_days)
{
    float hotel_per_night;
    float hotel_cost = 0;

    for (int i = 0; i < trip_days; i++)
    {
        printf("Hotel Cost of day %i: ", i+1);
        scanf("%f", &hotel_per_night);

        while(hotel_per_night < 0)
        {
            printf("Please input number greater than zero.\n");
            printf("Per night cost of hotel: ");
            scanf("%f", &hotel_per_night);
        }

        if (hotel_per_night > 90)
        {
            hotel_per_night = 90;
        }

    hotel_cost += hotel_per_night;
    }
    return hotel_cost;
}

//prompting departture timing
int departure()
{
    int departure_time;
    do
    {
        printf("Departure Time (1 - 24): ");
        scanf("%i", &departure_time);
    }
    while (departure_time < 0 || departure_time > 23);

    return departure_time;
}

int arrival()
{
    int arrival_time;
    do
    {
        printf("Arrival Time (1 - 24): ");
        scanf("%i", &arrival_time);
    }
    while (arrival_time < 1 || arrival_time > 24);
    return arrival_time;
}



float breakfast(int trip_days, int departure_time, int arrival_time)
{
    float breakfast;
    float breakfast_cost = 0;

    //calculating breakfast cost on each day
    if (departure_time < 7 && arrival_time > 8)
    {
        for (int i = 0; i < trip_days; i++)
        {
            printf("Breakfast cost on day %i: ", i+1);
            scanf("%f", &breakfast);

            while (breakfast < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Breakfast cost on day %i: ", i+1);
                scanf("%f", &breakfast);
            }
            if (breakfast > 18)
            {
                breakfast = 18;
            }
            breakfast_cost += breakfast;
        }
    }
    else if (departure_time >= 7 && arrival_time > 8)
    {
        for (int i = 1; i < trip_days; i++)
        {
            printf("Breakfast cost on day %i: ", i+1);
            scanf("%f", &breakfast);

            while (breakfast < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Breakfast cost on day %i: ", i+1);
                scanf("%f", &breakfast);
            }
            if (breakfast > 18)
            {
                breakfast = 18;
            }
            breakfast_cost += breakfast;
        }
    }
    else
    {
        for (int i = 1; i < (trip_days - 1); i++)
        {
            printf("Breakfast cost on day %i: ", i+1);
            scanf("%f", &breakfast);

            while (breakfast < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Breakfast cost on day %i: ", i+1);
                scanf("%f", &breakfast);
            }
            if (breakfast > 18)
            {
                breakfast = 18;
            }
            breakfast_cost += breakfast;
        }
    }
    return breakfast_cost;
}

float lunch(int trip_days, int departure_time, int arrival_time)
{
    float lunch;
    float lunch_cost = 0;
    if (departure_time < 12 && arrival_time > 13)
    {
        for (int i = 0; i < trip_days; i++)
        {
            printf("Lunch cost on day %i: ", i+1);
            scanf("%f", &lunch);

            while (lunch < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Lunch cost on day %i: ", i+1);
                scanf("%f", &lunch);
            }
            if (lunch > 12)
            {
                lunch = 12;
            }
            lunch_cost += lunch;
        }
    }
    else if (departure_time >= 12 && arrival_time > 13)
    {
        for (int i = 1; i < trip_days; i++)
        {
            printf("Lunch cost on day %i: ", i+1);
            scanf("%f", &lunch);

            while (lunch < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Lunch cost on day %i: ", i+1);
                scanf("%f", &lunch);
            }
            if (lunch > 12)
            {
                lunch = 12;
            }
            lunch_cost += lunch;
        }
    }
    else
    {
        for (int i = 1; i < (trip_days - 1); i++)
        {
            printf("Lunch cost on day %i: ", i+1);
            scanf("%f", &lunch);

            while (lunch < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Lunch cost on day %i: ", i+1);
                scanf("%f", &lunch);
            }
            if (lunch > 12)
            {
                lunch = 12;
            }
            lunch_cost += lunch;
        }
    }
    return lunch_cost;
}

float dinner(int trip_days, int departure_time, int arrival_time)
{
    float dinner;
    float dinner_cost = 0;
    if (departure_time < 18 && arrival_time > 19)
    {
        for (int i = 0; i < trip_days; i++)
        {
            printf("Dinner cost on day %i: ", i+1);
            scanf("%f", &dinner);

            while (dinner < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Dinner cost on day %i: ", i+1);
                scanf("%f", &dinner);
            }
            if (dinner > 20)
            {
                dinner = 20;
            }
            dinner_cost += dinner;
        }
    }
    else if (departure_time >= 18 && arrival_time > 19)
    {
        for (int i = 1; i < trip_days; i++)
        {
            printf("Dinner cost on day %i: ", i+1);
            scanf("%f", &dinner);

            while (dinner < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Dinner cost on day %i: ", i+1);
                scanf("%f", &dinner);
            }
            if (dinner > 20)
            {
                dinner = 20;
            }
            dinner_cost += dinner;
        }
    }
    else
    {
        for (int i = 1; i < (trip_days - 1); i++)
        {
            printf("Dinner cost on day %i: ", i+1);
            scanf("%f", &dinner);

            while (dinner < 0)
            {
                printf("Please input number greater than zero.\n");
                printf("Dinner cost on day %i: ", i+1);
                scanf("%f", &dinner);
            }
            if (dinner > 18)
            {
                dinner = 18;
            }
            dinner_cost += dinner;
        }
    }
    return dinner_cost;
}

float meals(float breakfast_cost, float lunch_cost, float dinner_cost)
{
    float meals_cost = breakfast_cost + lunch_cost + dinner_cost;
    return meals_cost;
}