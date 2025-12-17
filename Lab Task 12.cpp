#include <iostream>
using namespace std;
// Number of rows and columns in the theater
const int ROWS = 3;
const int COLS = 5;
// Function to display the seating arrangement
void displaySeats(int seats[ROWS][COLS]) 
{
    cout << "Seating Arrangement:\n";
    // Loop through each row
    for (int i = 0; i < ROWS; i++) 
	{
    // Loop through each column
    for (int j = 0; j < COLS; j++) 
    {
    // Print seat value (0 or 1)
            cout << seats[i][j] << " ";
        }
        cout << endl; // Move to next row
    }
}
// Function to reserve a seat
void reserveSeat(int seats[ROWS][COLS], int row, int col) 
{
    // Check if the selected seat is available
    if (seats[row][col] == 0)
	 {
        seats[row][col] = 1; // Mark seat as reserved
        cout << "Seat reserved successfully!\n";
    } else 
	{
    cout << "Seat already reserved.\n";
    }
}
int main()
 {
    // 2D array representing the seats
    // 0 = available, 1 = reserved
    int seats[ROWS][COLS] = 
	{
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0}
    };
    // Display current seating
    displaySeats(seats);
    // Take input from user for seat reservation
    int row, col;
    cout << "\nEnter row and column to reserve (starting from 0): ";
    cin >> row >> col;
    // Try to reserve the seat
    reserveSeat(seats, row, col);
    cout << endl;
    // Display updated seating
    displaySeats(seats);
    return 0; // End of program
}
