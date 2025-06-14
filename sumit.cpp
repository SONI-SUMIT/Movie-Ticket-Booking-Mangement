#include <iostream>
#include <iomanip>
using namespace std;

const int Rows = 5;
const int Col = 10;

void display(bool seats[Rows][Col]) {
    system("cls");
    cout << "  ";
    for (int i = 1; i <= Col; i++) {
        cout << setw(3) << i;
    }
    cout << endl;
    for (int i = 0; i < Rows; i++) {
        cout << static_cast<char>('A' + i) << " ";
        for (int j = 0; j < Col; j++) {
            if (seats[i][j]) {
                cout << setw(3) << "X";
            } else {
                cout << setw(3) << "-";
            }
        }
        cout << endl;
    }
}

void reservation(bool seats[Rows][Col], int col, char row) {
    system("cls");
    if (seats[row - 'A'][col - 1]) {
        cout << "Seat already reserved" << endl;
    } else {
        seats[row - 'A'][col - 1] = true;
        cout << "Seat reserved successfully" << endl;
    }
}

int main() {
    bool seats[Rows][Col] = {false};
    int col;
    char row;

    display(seats);

    while (true) {
        cout << "Enter the row (A-E): "; cin >> row;
        cout << "Enter the column (1-10): "; cin >> col;

        if ((row < 'A' || row > 'E') || (col < 1 || col > 10)) {
            cout << "Enter a valid row and column" << endl;
            continue;
        }

        reservation(seats, col, row);
        display(seats);

        char choice;
        cout << "Do you want to reserve more seats (Y/N): "; cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
}
