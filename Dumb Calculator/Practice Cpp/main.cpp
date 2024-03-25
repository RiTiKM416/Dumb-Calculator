#include "Header.h" // Import the headers from "Header.h" File 

using std::cout; // Import cout from std namespace

int main() {
    int result = 0; // Initialize variable to store result of calculation

    cout << "Hello, welcome to a simple C++ calculator!\n\n"; // Display welcome message

    // Prompt user to enter the first number
    cout << "Enter the first number: ";
    int n1 = 0;
    std::cin >> n1;

    // Prompt user to enter the second number
    cout << "Enter the second number: ";
    int n2 = 0;
    std::cin >> n2;

    system("cls"); // Clear the screen for better readability

    // Prompt user to choose an operation
    cout << "Choose the operation you want to perform:\n\n\n";
    cout << "Press 1 for Multiplication (*)\n\n";
    cout << "Press 2 for Division (/)\n\n";
    cout << "Press 3 for Subtraction (-)\n\n";
    cout << "Press 4 for Addition (+)\n\n";
    cout << "Enter your choice: ";

    int num2 = 0; // Variable to store user's choice
    std::cin >> num2;

    system("cls"); // Clear the screen for better readability

    // Perform the selected operation and display the result
    if (num2 == 1) {
        result = n1 * n2;
        cout << "The multiplication of " << n1 << " with " << n2 << " is: " << result << "\n\n\n Thank You For Using My Calculator :)\n\n\n\n";
    }
    else if (num2 == 2) {
        result = n1 / n2;
        cout << "The division of " << n1 << " by " << n2 << " is: " << result << "\n\n\n Thank You For Using My Calculator :)\n\n\n\n";
    }
    else if (num2 == 3) {
        result = n1 - n2;
        cout << "The subtraction of " << n1 << " from " << n2 << " is: " << result << "\n\n\n Thank You For Using My Calculator :)\n\n\n\n";
    }
    else if (num2 == 4) {
        result = n1 + n2;
        cout << "The addition of " << n1 << " with " << n2 << " is: " << result << "\n\n\n Thank You For Using My Calculator :)\n\n\n\n";
    }
    else {
        cout << "Invalid choice. Please choose a valid option.";
    }

    return 0; // Exit the program
}
