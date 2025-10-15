// Copyright Maximiliano Fairman
// oct 10th 2025
// all rights reserved
#include <iostream>

int main() {
    // Greetings for when the user start the program
    std::cout << "Hello user!" << std ::endl;
    std::cout << "This program calculators trapezoidal prisms." << std ::endl;
    std::cout << "Specifically volume and surface area" << std ::endl;
    std::cout << "" << std ::endl;

    // Get user input
    double topbase, bottombase, height, slant1and2, length;
    std::cout << "Input top base (a): ";
    std::cin >> topbase;
    std::cout << "Input bottom base (b): ";
    std::cin >> bottombase;
    std::cout << "Input height of trapezoid (h): ";
    std::cin >> height;
    std::cout << "Input slant 1 and 2 (s1&2): ";
    std::cin >> slant1and2;
    std::cout << "Input length of the prism: ";
    std::cin >> length;

    // Calculate base area
    double base_area = 0.5 * (topbase + bottombase) * height;

    // Calculate volume
    double volume = base_area * length;

    // Calculate surface area
    double surface_area = 2 * base_area +
                          (topbase + bottombase + slant1and2) * length;
    // Display answers
    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Surface Area: " << surface_area << std::endl;

    // Announce to user when calculations are finished
    std::cout << "This program has finished." << std::endl;
}
