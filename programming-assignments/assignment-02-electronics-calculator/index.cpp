#include <iostream>
#include <string>
#include <iomanip> // Used to format the decimal outputs

int main() {
    // 1. Declare variables
    std::string userName;
    double voltage = 0.0;
    double resistance = 0.0;
    double current = 0.0;
    double power = 0.0;

    // 2. Welcome the user and get their name
    std::cout << "=======================================\n";
    std::cout << "     WELCOME TO THE OHM'S LAW CALC\n";
    std::cout << "=======================================\n";
    std::cout << "Please enter your name: ";
    std::getline(std::cin, userName);

    // 3. Get Voltage input with basic validation
    std::cout << "Enter the voltage (in Volts): ";
    std::cin >> voltage;

    // 4. Get Resistance input and check for division by zero
    std::cout << "Enter the resistance (in Ohms): ";
    std::cin >> resistance;

    if (resistance <= 0) {
        std::cout << "\nError: Resistance must be greater than zero to avoid division by zero.\n";
        return 1; // Exit the program with an error code
    }

    // 5. Perform basic electronics calculations
    current = voltage / resistance;
    power = voltage * current;

    // 6. Display the structured results
    std::cout << "\n=======================================\n";
    std::cout << "            CALCULATION RESULTS        \n";
    std::cout << "=======================================\n";
    std::cout << "Hello, " << userName << "!\n";
    std::cout << "Here are your calculated circuit values:\n\n";
    
    // Set decimal precision to 2 places for neat formatting
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "  - Voltage:    " << voltage << " V\n";
    std::cout << "  - Resistance: " << resistance << " Ohms\n";
    std::cout << "  - Current:    " << current << " A\n";
    std::cout << "  - Power:      " << power << " W\n";
    std::cout << "=======================================\n";

    return 0;
}