#include "Header.h"
#include <iostream>
using namespace std;

/*****************************************Driver Class*****************************************/

// Default Constructor
driver::driver()
{
    d_name = nullptr;
    d_CNO = nullptr;
    d_address = nullptr;
    d_CNIC = nullptr;
    d_trips = 0;
    d_rating = 0;
}

// Parameterized Constructor
driver::driver(char* name, char* CNO, char* address, char* CNIC, int trips, float rating)
{
    d_trips = trips;
    d_rating = rating;
    d_name = name;
    d_CNO = CNO;
    d_address = address;
    d_CNIC = CNIC;
}

// Destructor
driver::~driver()
{
    delete[] d_name;
    delete[] d_CNO;
    delete[] d_address;
    delete[] d_CNIC;
}

// Setters
void driver::setd_name(char* name)
{
    if (name)
    {
        size_t length = strlen(name);
        d_name = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            d_name[i] = name[i];
        }
    }
    else
    {
        d_name = nullptr;
    }
}

void driver::setd_CNO(char* CNO)
{
    if (CNO)
    {
        size_t length = strlen(CNO);
        d_CNO = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            d_CNO[i] = CNO[i];
        }
    }
    else
    {
        d_CNO = nullptr;
    }
}

void driver::setd_address(char* address)
{
    if (address)
    {
        size_t length = strlen(address);
        d_address = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            d_address[i] = address[i];
        }
    }
    else
    {
        d_address = nullptr;
    }
}

void driver::setd_CNIC(char* CNIC)
{
    if (CNIC)
    {
        size_t length = strlen(CNIC);
        d_CNIC = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            d_CNIC[i] = CNIC[i];
        }
    }
    else
    {
        d_CNIC = nullptr;
    }
}

void driver::setd_trips(int trips)
{
    d_trips = trips;
}

void driver::setd_rating(float rating)
{
    d_rating = rating;
}

// Getters
char* driver::getd_name()
{
    return d_name;
}

char* driver::getd_CNO()
{
    return d_CNO;
}

char* driver::getd_address()
{
    return d_address;
}

char* driver::getd_CNIC()
{
    return d_CNIC;
}

int driver::getd_trips()
{
    return d_trips;
}

float driver::getd_rating()
{
    return d_rating;
}

// Display

void driver::display1()
{
    std::cout << "Driver Name: " << d_name << std::endl;
    std::cout << "Contact Number: " << d_CNO << std::endl;
    std::cout << "Address: " << d_address << std::endl;
    std::cout << "CNIC: " << d_CNIC << std::endl;
    std::cout << "Trips: " << d_trips << std::endl;
    std::cout << "Rating: " << d_rating << std::endl;
}


/*****************************************Rider Class******************************************/


// Default Constructor
rider::rider()
{
    r_name = nullptr;
    r_CNO = nullptr;
    r_trips = 0;
    r_rating = 0.0;

}

// Parameterized Constructor
rider::rider(char* name, char* CNO, int trips, float rating)
{
    r_trips = trips;
    r_rating = rating;
    r_name = name;
    r_CNO = CNO;
}

// Destructor
rider::~rider()
{
    delete[] r_name;
    delete[] r_CNO;
}

// Setters
void rider::setr_name(char* name)
{
    if (name)
    {
        size_t length = strlen(name);
        r_name = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            r_name[i] = name[i];
        }
    }
    else
    {
        r_name = nullptr;
    }
}

void rider::setr_CNO(char* CNO)
{
    if (CNO)
    {
        size_t length = strlen(CNO);
        r_CNO = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            r_CNO[i] = CNO[i];
        }
    }
    else
    {
        r_CNO = nullptr;
    }
}

void rider::setr_trips(int trips)
{
    r_trips = trips;
}

void rider::setr_rating(float rating)
{
    r_rating = rating;
}

// Getters
char* rider::getr_name()
{
    return r_name;
}

char* rider::getr_CNO()
{
    return r_CNO;
}

int rider::getr_trips()
{
    return r_trips;
}

float rider::getr_rating()
{
    return r_rating;
}

// Display

void rider::display2()
{
    std::cout << "Rider Name: " << r_name << std::endl;
    std::cout << "Contact Number: " << r_CNO << std::endl;
    std::cout << "Trips: " << r_trips << std::endl;
    std::cout << "Rating: " << r_rating << std::endl;
}


/******************************************Ride Class******************************************/

// Default Constructor
ride::ride()
{
    p_loc = nullptr;
    d_loc = nullptr;
    v_num = nullptr;
    p_code = nullptr;
    category = nullptr;
    s_time = 0;
    a_time = 0;
    t_ID = 0;
    b_fare = 0.0;
    discount = 0.0;
    p_km = 0.0;
    p_min = 0.0;
}

// Parameterized Constructor
ride::ride(char* pickup_loc, char* drop_loc, char* vehicle_num, char* promo_code, char* ride_category, int start_time, int arrival_time, int trip_ID, float base_fare, float discount_rate, float per_km, float per_min)
{
    s_time = start_time;
    a_time = arrival_time;
    t_ID = trip_ID;
    b_fare = base_fare;
    discount = discount_rate;
    p_km = per_km;
    p_min = per_min;
    p_loc = pickup_loc;
    d_loc = drop_loc;
    v_num = vehicle_num;
    p_code = promo_code;
    category = ride_category;
}

// Destructor
ride::~ride()
{
    delete[] p_loc;
    delete[] d_loc;
    delete[] v_num;
    delete[] p_code;
    delete[] category;
}

// Setters
void ride::setp_loc(char* pickup_loc)
{
    delete[] p_loc;
    if (pickup_loc)
    {
        size_t length = strlen(pickup_loc);
        p_loc = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            p_loc[i] = pickup_loc[i];
        }
    }
    else
    {
        p_loc = nullptr;
    }
}

void ride::setd_loc(char* drop_loc)
{
    delete[] d_loc;
    if (drop_loc)
    {
        size_t length = strlen(drop_loc);
        d_loc = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            d_loc[i] = drop_loc[i];
        }
    }
    else
    {
        d_loc = nullptr;
    }
}

void ride::setv_num(char* vehicle_num)
{
    delete[] v_num;
    if (vehicle_num)
    {
        size_t length = strlen(vehicle_num);
        v_num = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            v_num[i] = vehicle_num[i];
        }
    }
    else
    {
        v_num = nullptr;
    }
}

void ride::setp_code(char* promo_code)
{
    delete[] p_code;
    if (promo_code)
    {
        size_t length = strlen(promo_code);
        p_code = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            p_code[i] = promo_code[i];
        }
    }
    else
    {
        p_code = nullptr;
    }
}

void ride::setcategory(char* ride_category)
{
    delete[] category;
    if (ride_category)
    {
        size_t length = strlen(ride_category);
        category = new char[length + 1];
        for (size_t i = 0; i <= length; ++i)
        {
            category[i] = ride_category[i];
        }
    }
    else
    {
        category = nullptr;
    }
}

void ride::sets_time(int start_time)
{
    s_time = start_time;
}

void ride::seta_time(int arrival_time)
{
    a_time = arrival_time;
}

void ride::sett_ID(int trip_ID)
{
    t_ID = trip_ID;
}

void ride::setb_fare(float base_fare)
{
    b_fare = base_fare;
}

void ride::setdiscount(float discount_rate)
{
    discount = discount_rate;
}

void ride::setp_km(float per_km)
{
    p_km = per_km;
}

void ride::setp_min(float per_min)
{
    p_min = per_min;
}

// Getters
char* ride::getp_loc()
{
    return p_loc;
}

char* ride::getd_loc()
{
    return d_loc;
}

char* ride::getv_num()
{
    return v_num;
}

char* ride::getp_code()
{
    return p_code;
}

char* ride::getcategory()
{
    return category;
}

int ride::gets_time()
{
    return s_time;
}

int ride::geta_time()
{
    return a_time;
}

int ride::gett_ID()
{
    return t_ID;
}

float ride::getb_fare()
{
    return b_fare;
}

float ride::getdiscount()
{
    return discount;
}

float ride::getp_km()
{
    return p_km;
}

float ride::getp_min()
{
    return p_min;
}

float ride::calculateFare() const
{
    if (strcmp(category, "Bike") == 0)
    {
        return b_fare + (p_min * 3.67) + (p_km * 6.17);
    }
    else if (strcmp(category, "Auto") == 0)
    {
        return b_fare + (p_min * 2.79) + (p_km * 12.09);
    }
    else if (strcmp(category, "Mini") == 0)
    {
        return b_fare + (p_min * 3.63) + (p_km * 8.13);
    }
    else if (strcmp(category, "Go") == 0)
    {
        return b_fare + (p_min * 4.54) + (p_km * 10.16);
    }
    else if (strcmp(category, "UberX") == 0)
    {
        return b_fare + (p_min * 8.54) + (p_km * 15.16);
    }
    else
    {
        std::cerr << "Invalid ride category" << std::endl;
        return -1.0; // Or handle the error accordingly
    }
}

// Display

void ride::display3()
{
    std::cout << "Pickup Location: " << p_loc << std::endl;
    std::cout << "Drop Location: " << d_loc << std::endl;
    std::cout << "Vehicle Number: " << v_num << std::endl;
    std::cout << "Promo Code: " << p_code << std::endl;
    std::cout << "Ride Category: " << category << std::endl;
    std::cout << "Start Time: " << s_time << std::endl;
    std::cout << "Arrival Time: " << a_time << std::endl;
    std::cout << "Trip ID: " << t_ID << std::endl;
    std::cout << "Base Fare: " << b_fare << std::endl;
    std::cout << "Discount Rate: " << discount << std::endl;
    std::cout << "Per Km Rate: " << p_km << std::endl;
    std::cout << "Per Min Rate: " << p_min << std::endl;
}
