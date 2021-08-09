/* 
                                       Date - 25/07/2021
                            Project Name - Parking Management System
                                    Author - Atharv Vani
                                Co-Author - Priyanshi Agrawal
                                        C - Language
*/
#include <stdio.h>
#include <stdlib.h>

int num_cycles = 0, num_motorb = 0, num_car = 0, num_bus = 0, total_Amt = 0, total_vehicles = 0;

int menu()
{
    int code;
    printf("\n*************************************************************\n");
    printf("Please Select an appropriate option from the following : ");
    printf("\n*************************************************************\n");

    printf("1 -> For cycle.\n");
    printf("2 -> For motor-bikes.\n");
    printf("3 -> Enter number of cars.\n");
    printf("4 -> Enter number of bus.\n");
    printf("5 -> Show Status of the Parking lot.\n");
    printf("6 -> Clear all the Status\n");
    printf("7 -> Exit the Program\n");

    printf("NOW SELECT :- ");
    scanf("%d", &code);

    return code;
}
void count_cycle()
{
    if (num_cycles < 200)
    {
        num_cycles++;
        total_Amt += 5;
        total_vehicles++;
    }
    else
    {
        printf("\nSorry!! There's no Space left for Cycle Parking.");
    }
}
void count_motorb()
{
    if (num_motorb < 150)
    {
        num_motorb++;
        total_Amt += 10;
        total_vehicles++;
    }
    else
    {
        printf("\nSorry!! There's no Space left for Motor-Bike Parking.");
    }
}
void count_car()
{
    if (num_car < 100)
    {
        num_car++;
        total_Amt += 20;
        total_vehicles++;
    }
    else
    {
        printf("\nSorry!! There's no Space left for Car Parking.");
    }
}
void count_bus()
{
    if (num_bus < 100)
    {
        num_bus++;
        total_Amt += 30;
        total_vehicles++;
    }
    else
    {
        printf("\nSorry!! There's no Space left for Bus Parking.");
    }
}
void show_Details()
{
    printf("\n-------------------------------------------------------------\n");
    printf("Details of Parking System : ");
    printf("\n-------------------------------------------------------------\n");

    printf("Details of Cycle parking : ");
    printf("\nNumber of Cycles Parked : %d", num_cycles);
    printf("\nNumber of parking left : %d/200", 200 - num_cycles);
    printf("\nTotal Amount from Cycle parking : %d", num_cycles * 5);
    printf("\n-------------------------------------------------------------\n");

    printf("Details of Motor-Bike parking : ");
    printf("\nNumber of Motor-Bikes Parked : %d", num_motorb);
    printf("\nNumber of parking left : %d/150", 150 - num_motorb);
    printf("\nTotal Amount from Motor-Bike parking : %d", num_motorb * 10);
    printf("\n-------------------------------------------------------------\n");

    printf("Details of Car parking : ");
    printf("\nNumber of Cars Parked : %d", num_car);
    printf("\nNumber of parking left : %d/100", 100 - num_car);
    printf("\nTotal Amount from Car parking : %d", num_car * 20);
    printf("\n-------------------------------------------------------------\n");

    printf("Details of Bus parking : ");
    printf("\nNumber of Buses Parked : %d\n", num_bus);
    printf("\nNumber of parking left : %d/15", 15 - num_bus);
    printf("\nTotal Amount from Bus parking : %d", num_bus * 30);
    printf("\n-------------------------------------------------------------\n");
    printf("Total Vehicles Parked : %d", total_vehicles);
    printf("\nTotal Parking Left : %d/465", 465 - total_vehicles);
    printf("\nTotal Amount Revenued from Whole Parking System : %d", total_Amt);
    printf("\n-------------------------------------------------------------\n");
}
void delete_data()
{
    num_cycles = 0;
    num_motorb = 0;
    num_car = 0;
    num_bus = 0;
    total_Amt = 0;
    total_vehicles = 0;
}
void main()
{
    while (1)
    {
        switch (menu())
        {
        case 1:
            count_cycle();
            break;
        case 2:
            count_motorb();
            break;
        case 3:
            count_car();
            break;
        case 4:
            count_bus();
            break;
        case 5:
            show_Details();
            break;
        case 6:
            printf("\nAre you sure to delete the whole data?\tpress y/Y for YES\n");
            char confirm_delete;
            getchar();
            scanf("%c", &confirm_delete);
            if (confirm_delete == 'y' || confirm_delete == 'Y')
            {
                delete_data();
            }
            break;
        case 7:
            printf("\nAre you sure to exit the Program?\tpress y/Y for YES.\n");
            char confirm_exit;
            getchar();
            scanf("%c", &confirm_exit);
            if (confirm_exit == 'y' || confirm_exit == 'Y')
            {
                exit(0);
            }
            break;
        default:
            printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
            printf("WARNING : Please Select the Correct option from the Menu.");
            printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
            break;
        }
    }
}
