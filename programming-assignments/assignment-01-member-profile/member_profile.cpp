#include <iostream>
#include <string> // Required to use the string data type


using namespace std;

int main() {
     // 1. Creating variables to store member profile details
    const std::string name = "Nnaji Salome Chikamji";
    const std::string department = "Mechatronics Engineering";
    const int level = 100;
    const std::string preferredArea = "Mobile Robotics";
    const int projectsCompleted = 3;

// 2. Printing the properly arranged member profile to the console
    std::cout << "Member Profile\n";
    std::cout << "Name: " << name << '\n';
    std::cout << "Department: " << department << '\n';
    std::cout << "Preferred Area: " << preferredArea << '\n';
    std::cout << "Projects Completed: " << projectsCompleted << '\n';

    return 0;
}
