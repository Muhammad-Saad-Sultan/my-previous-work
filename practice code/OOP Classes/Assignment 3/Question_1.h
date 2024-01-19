#pragma once
#include <iostream>
using namespace std;

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|         Product Class         |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class Product
{
protected:
    char* name;
    double price;
    int quantity;

public:
    Product()
    {
        name = nullptr; 
        price = 0.0; 
        quantity = 0;
    }

    Product(const char* name, double price, int quantity)
    {
        this->name = allocateAndCopy(name);
        this->price = price;
        this->quantity = quantity;
    }

    virtual ~Product()
    {
        // Deallocate memory
        delete[] name;
    }

    // Getter and setter functions for attributes
    const char* getName() const
    {
        return name;
    }

    void setName(const char* name)
    {
        delete[] this->name;
        this->name = allocateAndCopy(name);
    }

    double getPrice() const
    {
        return price;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

    int getQuantity() const
    {
        return quantity;
    }

    void setQuantity(int quantity)
    {
        this->quantity = quantity;
    }

    // Virtual function to be overridden by derived classes
    virtual void displayDetails() const = 0;

    // Helper function to allocate memory and copy a string
    char* allocateAndCopy(const char* source)
    {
        int length = 0;
        while (source[length] != '\0')
        {
            length++;
        }

        char* destination = new char[length + 1];

        for (int i = 0; i <= length; ++i)
        {
            destination[i] = source[i];
        }

        return destination;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|       Electronics Class       |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class Electronics : public Product
{
private:
    char* brand;

public:
    Electronics(const char* name, double price, int quantity, const char* brand) : Product(name, price, quantity)
    {
        this->brand = allocateAndCopy(brand);
    }

    ~Electronics()
    {
        // Deallocate memory
        delete[] brand;
    }

    // Getter and setter functions for additional attributes
    const char* getBrand() const
    {
        return brand;
    }

    void setBrand(const char* brand)
    {
        delete[] this->brand;
        this->brand = allocateAndCopy(brand);
    }

    // Function to calculate warranty coverage
    void calculateWarrantyCoverage() const
    {
        // Implementation to calculate warranty coverage
        cout << "Calculating warranty coverage for electronics." << endl;
    }

    // Override displayDetails function from the base class
    void displayDetails() const override
    {
        // Override displayDetails function to include additional details
        cout << "Product: " << getName() << endl;
        cout << "Price: $" << getPrice() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Brand: " << brand << endl;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|          Book Class           |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class Book : public Product
{
private:
    char* author;

public:
    Book(const char* name, double price, int quantity, const char* author) : Product(name, price, quantity)
    {
        this->author = allocateAndCopy(author);
    }

    ~Book()
    {
        // Deallocate memory
        delete[] author;
    }

    // Getter and setter functions for additional attributes
    const char* getAuthor() const
    {
        return author;
    }

    void setAuthor(const char* author)
    {
        delete[] this->author;
        this->author = allocateAndCopy(author);
    }

    // Override displayDetails function from the base class
    void displayDetails() const override
    {
        // Override displayDetails function to include additional details
        cout << "Book: " << getName() << endl;
        cout << "Price: $" << getPrice() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Author: " << author << endl;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|        Clothing Class         |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class Clothing : public Product
{
private:
    char* size;

public:
    Clothing(const char* name, double price, int quantity, const char* size) : Product(name, price, quantity)
    {
        this->size = allocateAndCopy(size);
    }

    ~Clothing()
    {
        // Deallocate memory
        delete[] size;
    }

    // Getter and setter functions for additional attributes
    const char* getSize() const
    {
        return size;
    }

    void setSize(const char* size)
    {
        delete[] this->size;
        this->size = allocateAndCopy(size);
    }

    // Override displayDetails function from the base class
    void displayDetails() const override
    {
        // Override displayDetails function to include additional details
        cout << "Clothing: " << getName() << endl;
        cout << "Price: $" << getPrice() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Size: " << size << endl;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|        Customer Class         |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class Customer
{
protected:
    char* name;
    char* email;
    char* address;

public:
    Customer()
    {
        name = nullptr;
        email = nullptr;
        address = nullptr;
    }

    Customer(const char* name, const char* email, const char* address)
    {
        // Dynamic memory allocation for name, email, and address
        this->name = allocateAndCopy(name);
        this->email = allocateAndCopy(email);
        this->address = allocateAndCopy(address);
    }

    virtual ~Customer()
    {
        // Deallocate memory
        delete[] name;
        delete[] email;
        delete[] address;
    }

    // Getter and setter functions for attributes
    const char* getName() const
    {
        return name;
    }

    void setName(const char* name)
    {
        delete[] this->name;
        this->name = allocateAndCopy(name);
    }

    const char* getEmail() const
    {
        return email;
    }

    void setEmail(const char* email)
    {
        delete[] this->email;
        this->email = allocateAndCopy(email);
    }

    const char* getAddress() const
    {
        return address;
    }

    void setAddress(const char* address)
    {
        delete[] this->address;
        this->address = allocateAndCopy(address);
    }

    // Virtual function to be overridden by derived classes
    virtual void displayDetails() const = 0;

private:
    // Helper function to allocate memory and copy a string
    char* allocateAndCopy(const char* source)
    {
        int length = 0;
        while (source[length] != '\0')
        {
            length++;
        }

        char* destination = new char[length + 1];

        for (int i = 0; i <= length; ++i)
        {
            destination[i] = source[i];
        }

        return destination;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|    Regular Customer Class     |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class RegularCustomer : public Customer
{
public:
    RegularCustomer(const char* name, const char* email, const char* address) : Customer(name, email, address) {}

    ~RegularCustomer() {}

    // Override displayDetails function from the base class
    void displayDetails() const override
    {
        // Override displayDetails function to include additional details
        cout << "Customer Type: Regular" << endl;
        cout << "Customer: " << getName() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Address: " << getAddress() << endl;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|    Premium Customer Class     |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class PremiumCustomer : public Customer
{
private:
    int loyaltyPoints;

public:
    PremiumCustomer(const char* name, const char* email, const char* address, int loyaltyPoints) : Customer(name, email, address)
    {
        this->loyaltyPoints = loyaltyPoints;
    }

    ~PremiumCustomer() {}

    // Getter and setter functions for additional attributes
    int getLoyaltyPoints() const
    {
        return loyaltyPoints;
    }

    void setLoyaltyPoints(int points)
    {
        loyaltyPoints = points;
    }

    // Function to calculate discounts based on loyalty
    double calculateDiscount() const
    {
        // Implementation to calculate discounts based on loyalty
        // Example: 1 loyalty point gives a 1% discount
        return loyaltyPoints * 0.01;
    }

    // Override displayDetails function from the base class
    void displayDetails() const override
    {
        // Override displayDetails function to include additional details
        cout << "Customer Type: Premium" << endl;
        cout << "Customer: " << getName() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Loyalty Points: " << loyaltyPoints << endl;
    }
};

/**************************************************************************|-------------------------------|****************************************************************************/
/**************************************************************************|      ShoppingCart Class       |****************************************************************************/
/**************************************************************************|-------------------------------|****************************************************************************/

class ShoppingCart
{
private:
    static const int MAX_PRODUCTS = 10;
    Product* products[MAX_PRODUCTS];
    int numProducts;

public:
    ShoppingCart()
    {
        numProducts = 0;
    }

    ~ShoppingCart()
    {
        for (int i = 0; i < numProducts; i++)
        {
            delete products[i];
        }
    }

    void addProduct(Product* product)
    {
        if (numProducts < MAX_PRODUCTS)
        {
            products[numProducts++] = product;
        }
        else
        {
            cout << "Error: Maximum number of products reached." << endl;
        }
    }

    double calculateTotalPrice() const
    {
        double totalPrice = 0.0;

        for (int i = 0; i < numProducts; i++)
        {
            totalPrice += products[i]->getPrice() * products[i]->getQuantity();
        }
        return totalPrice;
    }

    void generateOrderSummary() const
    {
        for (int i = 0; i < numProducts; i++)
        {
            products[i]->displayDetails();
            cout << "-----------------------" << endl;
        }

        cout << "Total Price: $" << calculateTotalPrice() << endl;
    }
};