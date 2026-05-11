#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    char cont;

    do {
        cout << "\n===== Multi-Purpose Calculator =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;

            case 5:
                // Modulus works with integers
                cout << "Result = " << (int)num1 % (int)num2 << endl;
                break;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Calculator exited.\n";
    return 0;
}