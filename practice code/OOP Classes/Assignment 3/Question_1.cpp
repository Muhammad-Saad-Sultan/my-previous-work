#include <iostream>
#include "Question_1.h"

int main()
{
    // User input for electronics
    char name[100];
    double price;
    int quantity;
    char brand[100];
    int choice;

    cout << "|--------------------------------------------------------|" << endl;
    cout << "| Categories you can can shop at our store.              |" << endl;
    cout << "| 1. Electronics                                         |" << endl;
    cout << "| 2. Books                                               |" << endl;
    cout << "| 3. Clothing                                            |" << endl;
    cout << "|--------------------------------------------------------|" << endl;


    cout << "Enter electronics details:" << endl;
    cout << "Name: ";
    cin.getline(name, sizeof(name));

    cout << "Price: $";
    cin >> price;
    
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore();
    
    cout << "Brand: ";
    cin.getline(brand, sizeof(brand));

    Electronics laptop(name, price, quantity, brand);

    // User input for book
    char bookName[100];
    double bookPrice;
    int bookQuantity;
    char author[100];

    cout << "\nEnter book details:" << endl;
    cout << "Name: ";
    cin.getline(bookName, sizeof(bookName));
    
    cout << "Price: $";
    cin >> bookPrice;
    
    cout << "Quantity: ";
    cin >> bookQuantity;
    cin.ignore();
    
    cout << "Author: ";
    cin.getline(author, sizeof(author));

    Book book(bookName, bookPrice, bookQuantity, author);

    // User input for clothing
    char clothingName[100];
    double clothingPrice;
    int clothingQuantity;
    char size[20];

    cout << "\nEnter clothing details:" << endl;
    cout << "Name: ";
    cin.getline(clothingName, sizeof(clothingName));
    
    cout << "Price: $";
    cin >> clothingPrice;
    
    cout << "Quantity: ";
    cin >> clothingQuantity;
    cin.ignore();
    
    cout << "Size: ";
    cin.getline(size, sizeof(size));

    Clothing shirt(clothingName, clothingPrice, clothingQuantity, size);
    
    cout << endl;
    cout << "|----------------------------------|" << endl;
    // Display order summary
    ShoppingCart shoppingCart;
    shoppingCart.addProduct(&laptop);
    shoppingCart.addProduct(&book);
    shoppingCart.addProduct(&shirt);
    shoppingCart.generateOrderSummary();

    // User input for regular customer
    char regularCustomerName[100];
    char regularCustomerEmail[100];
    char regularCustomerAddress[100];

    cout << "\nEnter regular customer details:" << endl;
    cout << "Name: ";
    cin.getline(regularCustomerName, sizeof(regularCustomerName));
    
    cout << "Email: ";
    cin.getline(regularCustomerEmail, sizeof(regularCustomerEmail));
    
    cout << "Shipping Address: ";
    cin.getline(regularCustomerAddress, sizeof(regularCustomerAddress));

    RegularCustomer regularCustomer(regularCustomerName, regularCustomerEmail, regularCustomerAddress);

    // User input for premium customer
    char premiumCustomerName[100];
    char premiumCustomerEmail[100];
    char premiumCustomerAddress[100];
    int loyaltyPoints;

    cout << "\nEnter premium customer details:" << endl;
    cout << "Name: ";
    cin.getline(premiumCustomerName, sizeof(premiumCustomerName));
    
    cout << "Email: ";
    cin.getline(premiumCustomerEmail, sizeof(premiumCustomerEmail));
    
    cout << "Address: ";
    cin.getline(premiumCustomerAddress, sizeof(premiumCustomerAddress));
    
    cout << "Loyalty Points: ";
    cin >> loyaltyPoints;

    PremiumCustomer premiumCustomer(premiumCustomerName, premiumCustomerEmail, premiumCustomerAddress, loyaltyPoints);

    cout << endl;
    cout << "|----------------------------------|" << endl;
    // Display customer details
    regularCustomer.displayDetails();

    cout << "|----------------------------------|" << endl;
    
    premiumCustomer.displayDetails();

    return 0;
}
