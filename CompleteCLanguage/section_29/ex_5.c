#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car {
    int doors;
    char make[20];
    char model[20];
} Car;

void initialize_car(Car *car_ptr, int doors, const char *make_ptr, const char *model_ptr) {
    car_ptr->doors = doors;
    strncpy(car_ptr->make, make_ptr, sizeof(car_ptr->make) - 1);
    car_ptr->make[sizeof(car_ptr->make) - 1] = '\0';    
    strncpy(car_ptr->model, model_ptr, sizeof(car_ptr->model) - 1);
    car_ptr->model[sizeof(car_ptr->model) - 1] = '\0';    
}

void display_car_info(const Car *car_ptr, int car_number) {
    printf("\n\nCar %d details:\n", car_number);
    printf("Number of doors: %d\n", car_ptr->doors);
    printf("Car make: %s\n", car_ptr->make);
    printf("Car model: %s\n", car_ptr->model);
}

void create_a_car(Car *car_ptr) {
    printf("Enter number of car doors: ");
    if (scanf("%d", &car_ptr->doors) != 1) {
        fprintf(stderr, "Error reading number of doors\n");
        exit(1);
    }

    printf("Enter the car make: ");
    if (scanf("%19s", car_ptr->make) != 1) {
        fprintf(stderr, "Error reading car make\n");
        exit(1);
    }
    
    printf("Enter the car model: ");
    if (scanf("%19s", car_ptr->model) != 1) {
        fprintf(stderr, "Error reading car model\n");
        exit(1);
    }
}

int main() 
{
    int num_cars = 0;
    Car car_arr[100];

    while (1)
    {
        char yes_no;
        printf("Add a car?(y/n): ");
        scanf(" %c", &yes_no);
        if ((yes_no == 'y') || (yes_no == 'Y'))
        {
            if (num_cars >= 100)
            {
                printf("Maximun number of cars --> Exiting \n");
                break;
            }
            create_a_car(&car_arr[num_cars]);
            num_cars++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < num_cars; i++)
    {
        display_car_info(&car_arr[i], i + 1);
    }
    return 0;
    
}
