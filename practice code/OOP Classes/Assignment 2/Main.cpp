#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
    // Driver information input
    char driverName[50], driverCNO[15], driverAddress[100], driverCNIC[15];
    int driverTrips;
    float driverRating;

    cout << "Enter Driver Name: ";
    cin.getline(driverName, sizeof(driverName));

    cout << "Enter Driver Contact Number: ";
    cin.getline(driverCNO, sizeof(driverCNO));

    cout << "Enter Driver Address: ";
    cin.getline(driverAddress, sizeof(driverAddress));

    cout << "Enter Driver CNIC: ";
    cin.getline(driverCNIC, sizeof(driverCNIC));

    cout << "Enter Number of Trips: ";
    cin >> driverTrips;

    cout << "Enter Driver Rating: ";
    cin >> driverRating;

    // Creating a driver object
    driver myDriver(driverName, driverCNO, driverAddress, driverCNIC, driverTrips, driverRating);

    // Displaying driver information
    void display1();

    // Rider information input
    char riderName[50], riderCNO[15];
    int riderTrips;
    float riderRating;

    cout << "\nEnter Rider Name: ";
    cin.ignore(); // Ignore the newline character left in the buffer
    cin.getline(riderName, sizeof(riderName));

    cout << "Enter Rider Contact Number: ";
    cin.getline(riderCNO, sizeof(riderCNO));

    cout << "Enter Number of Trips: ";
    cin >> riderTrips;

    cout << "Enter Rider Rating: ";
    cin >> riderRating;

    // Creating a rider object
    rider myRider(riderName, riderCNO, riderTrips, riderRating);

    // Displaying rider information
    void display2();

    // Ride information input
    char pickupLoc[100], dropLoc[100], vehicleNum[20], promoCode[20], rideCategory[20];
    int startTime, arrivalTime, tripID;
    float baseFare, discountRate, perKm, perMin;

    cout << "\nEnter Pickup Location: ";
    cin.ignore(); // Ignore the newline character left in the buffer
    cin.getline(pickupLoc, sizeof(pickupLoc));

    cout << "Enter Drop Location: ";
    cin.getline(dropLoc, sizeof(dropLoc));

    cout << "Enter Vehicle Number: ";
    cin.getline(vehicleNum, sizeof(vehicleNum));

    cout << "Enter Promo Code: ";
    cin.getline(promoCode, sizeof(promoCode));

    cout << "Enter Ride Category: ";
    cin.getline(rideCategory, sizeof(rideCategory));

    cout << "Enter Start Time: ";
    cin >> startTime;

    cout << "Enter Arrival Time: ";
    cin >> arrivalTime;

    cout << "Enter Trip ID: ";
    cin >> tripID;

    cout << "Enter Base Fare: ";
    cin >> baseFare;

    cout << "Enter Discount Rate: ";
    cin >> discountRate;

    cout << "Enter Per Km Rate: ";
    cin >> perKm;

    cout << "Enter Per Min Rate: ";
    cin >> perMin;

    // Creating a ride object
    ride myRide(pickupLoc, dropLoc, vehicleNum, promoCode, rideCategory, startTime, arrivalTime, tripID, baseFare, discountRate, perKm, perMin);

    // Displaying ride information
    void display3();

    return 0;
}
