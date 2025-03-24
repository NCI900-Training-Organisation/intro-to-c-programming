#include <stdio.h>
#include <stdlib.h>

typedef struct vehicle
{
    int wheels;
    int gears;
} Vehicle;

typedef struct cars
{
    Vehicle details;
    double  enginecc;
} Cars;

void main()
{
    Cars *objCars = NULL;
    Vehicle *objVehicle = NULL; 

    objCars = (Cars*) malloc(sizeof(Cars));
    objCars->details.wheels = 4;
    objCars->details.gears = 5;
    objCars->enginecc = 1000;

    objVehicle = (Vehicle *) objCars;

    printf("Wheels %d, Gears %d \n", objVehicle->wheels, objVehicle->gears);

    free(objCars);
}

