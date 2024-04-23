#include <iostream>
#include <fstream>
#include <string>

bool isUserExist(const std::string& username) {
    std::ifstream userFile(username + ".txt");
    return userFile.good();
}

void registerUser(const std::string& username, const std::string& password) {
    std::ofstream userFile(username + ".txt");
    userFile << password;
    userFile.close();
    std::cout << "Registration successful." << std::endl;
}

void loginUser(const std::string& username, const std::string& password) {
    std::ifstream userFile(username + ".txt");
    if (!userFile.is_open()) {
        std::cout << "Login failed: Username does not exist." << std::endl;
        return;
    }
    
    std::string storedPassword;
    userFile >> storedPassword;
    if (storedPassword == password) {
        std::cout << "Login successful." << std::endl;
    } else {
        std::cout << "Login failed: Incorrect password." << std::endl;
    }
    userFile.close();
}

int main() {
    std::string username, password;
    int choice;

    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "Choose option (1-2): ";
    std::cin >> choice;
    std::cin.ignore();

    std::cout << "Enter username: ";
    std::getline(std::cin, username);
    std::cout << "Enter password: ";
    std::getline(std::cin, password);

    switch (choice) {
        case 1:  // Registration
            if (isUserExist(username)) {
                std::cout << "Registration failed: Username already exists." << std::endl;
            } else {
                registerUser(username, password);
            }
            break;
        case 2:  // Login
            loginUser(username, password);
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}
