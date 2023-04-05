#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ticketNum;
    float fare, totalFare;
    char boardingPoint[50], destination[50], name[50];
    int departureDay, departureMonth, departureYear, departureHour, departureMinute;

    // Get user input
    printf("Enter Passenger name: ");
    scanf("%s", name );
    printf("Enter boarding point: ");
    scanf(" %s", boardingPoint);
    printf("Enter destination: ");
    scanf("%s", destination);
    printf("Enter fare: ");
    scanf("%f", &fare);
    printf("Enter date of departure (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &departureDay, &departureMonth, &departureYear);
    printf("Enter time of departure (hh:mm__24-hours format): ");
    scanf("%d:%d", &departureHour, &departureMinute);

    // Generate ticket number
    ticketNum = rand();

    //Calculating Total Fare
    totalFare = fare + (fare * 0.01); // Adding 10% service tax

    // Print ticket
    printf("\n");
    printf("----------------------------\n");
    printf("    E-Ticket for Bus\n");
    printf("----------------------------\n");
    printf("Name: %s\n", name);
    printf("Boarding Point: %s\n", boardingPoint);
    printf("Destination: %s\n", destination);
    printf("Fare: Rs. %.2f\n", fare);
    printf("Service Tax: Rs. %.2f\n", fare * 0.01);
    printf("Total Fare: Rs. %.2f\n", totalFare);
    printf("Ticket Number: %d\n", ticketNum);
    printf("Date of Departure: %02d/%02d/%d\n", departureDay, departureMonth, departureYear);
    printf("Time of Departure: %02d:%02d\n", departureHour, departureMinute);
    printf("----------------------------\n");

    return 0;
}