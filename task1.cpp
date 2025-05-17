#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int main() {
    srand(time(0));
    int num = rand() % 100+ 1;
    int g;

    do {
        cout << "Guess the number (1 to 100): ";
        cin >> g;

        if (g > num) {
            cout << "Too high! Try again.\n";
        } else if (g < num) {
            cout << "Too low! Try again.\n";
        }
    } while (g != num);

    cout << "Congratulations! You guessed the number.\n";
    getch();
    return 0;
}