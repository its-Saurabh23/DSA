/*
Problem Statement: Car Class Implementation with Constructor Overloading

Design a C++ class called Car that represents information about cars. Implement the class with the following features:

    Data Members:
        brand (string): Represents the brand or make of the car.
        year (integer): Represents the manufacturing year of the car.
        price (double): Represents the price of the car.

    Constructors:
        Default Constructor: Initializes the car with default values ("Unknown" brand, year 2000, and price $0.0).
        Parameterized Constructor with Three Parameters: Takes values for brand, year, and price during object creation.
        Parameterized Constructor with Two Parameters: Takes values for brand and year during object creation, setting the price to a default value.

    Member Function:
        displayInfo(): Displays information about the car, including brand, year, and price.

    Usage in Main:
        Demonstrate the creation of objects using different constructors.
        Display information about the created cars using the displayInfo method.

Ensure that the class provides a flexible and convenient way to create Car objects with varying initial values based on the constructor used.


*/



#include<iostream>
using namespace std;

class Car {
    private:
    
    string brand;
    int year;
    double price;
    
    public:
    
    // Default Constructor 
    Car(){
        std::cout << "Default Costructor called" << std::endl;
        brand = "Unknown";
        year = 2000;
        price = 0.0;
    }
    
    // Parameterized Constructor 3 parameter
    Car(string b,int y,int p){
       std::cout << "Parameterized Constructor with 3 Parameter" << std::endl;
        brand = b;
        year = y;
        price = p;
        
    } 
    
    // Parameterized cosntructor with 2 parameter 
    Car(string b,int y){
        std::cout << "Parameterized cosntructor with 2 Parameter" << std::endl;
        brand = b;
        year = y;
        price = 0.0;  // defalul value
    }
    
    
    void displayInfo(){
        std::cout << "Brand "<<brand << std::endl;
        std::cout << "Year "<<year<< std::endl;
        std::cout << "Price: $ "<<price<< std::endl;
    }
};

int main() {
    // object creation
    
    Car defalulCar;                       // defalul cosntructor
    Car paraCar("Toyata",2022);           // 2 parameter
    Car customCar("Honda",2021,22000.0);  // 3 parameter   

 
    
// Displaying information abotu the created cars
  std::cout<< std::endl;
  std::cout <<"Information about defalul car" << std::endl;
  defalulCar.displayInfo();
  
  std::cout<< std::endl;
  std::cout <<"Information about the 2 parameter" << std::endl;
  paraCar.displayInfo();
  
  std::cout<< std::endl;
  std::cout << "Information about the 3 parameter" << std::endl;
  customCar.displayInfo();
   
  return 0;  
}
