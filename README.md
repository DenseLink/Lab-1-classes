# Lab 1: Object-Oriented Programming with Classes

## Overview

Lab 1 introduces the fundamental concepts of Object-Oriented Programming (OOP) in C++, focusing on classes, inheritance, and basic data structures. Through the context of a dealership management system, students will learn how to define classes, create objects, and interact with them to perform various operations.

## Features

- **Vehicle Class**: Represents a vehicle with attributes like make, model, year, price, and mileage.
- **Showroom Class**: Manages a collection of vehicles, showcasing the use of vectors and class aggregation.
- **Dealership Class**: Aggregates multiple showrooms, demonstrating class relationships and data management across different objects.

## Repository Structure

- **`Dealership.cpp/h`**: Implementation of the Dealership class, managing a collection of Showroom objects.
- **`Main.cpp/h`**: Contains the main driver code demonstrating the usage of Vehicle, Showroom, and Dealership classes.
- **`Showroom.cpp/h`**: Implements the Showroom class, managing a collection of Vehicle objects.
- **`Vehicle.cpp/h`**: Defines the Vehicle class, encapsulating vehicle-related data.
- **`Lab 1.pdf`**: Documentation and instructions for completing Lab 1.

## Getting Started

To run the lab exercises:

1. Ensure you have a C++ compiler installed (GCC, Clang, MSVC).
2. Clone the repository to your local machine.
3. Compile the source files. For GCC or Clang, you can use the following command:

    ```bash
    g++ -o dealership Main.cpp Dealership.cpp Showroom.cpp Vehicle.cpp
    ```

4. Run the compiled executable:

    ```
    ./dealership
    ```

## Usage Example

```cpp
// Create a Vehicle object
Vehicle myCar("Tesla", "Model S", 2020, 79900, 12000);

// Display vehicle information
myCar.Display();

// Create a Showroom and add vehicles
Showroom myShowroom("Electric Cars", 2);
myShowroom.AddVehicle(myCar);

// Create a Dealership and add showrooms
Dealership myDealership("Eco Friendly Auto", 1);
myDealership.AddShowroom(myShowroom);
myDealership.ShowInventory();
```
## Contributing
Contributions to improve Lab 1 exercises or extend the functionality are welcome. Please feel free to fork the repository, make changes, and submit pull requests.

## License
This project is licensed under the MIT License. See the LICENSE file in the repository for more information.

## Acknowledgments
This project was developed for educational purposes as part of an introductory course on C++ and Object-Oriented Programming. Special thanks to all the students and instru

