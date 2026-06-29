#include <stdio.h>

int main() {
    int totalSeats = 50;
    int seats;

    printf("Available Seats: %d\n", totalSeats);

    printf("Enter number of seats to book: ");
    scanf("%d", &seats);

    if(seats <= totalSeats) {
        totalSeats -= seats;

        printf("Booking Successful.\n");
        printf("Remaining Seats: %d\n", totalSeats);
    }
    else {
        printf("Not enough seats available.\n");
    }

    return 0;
}