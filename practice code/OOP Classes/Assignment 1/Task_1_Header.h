#pragma once

class ElectricityBoard
{
    private:
        char* userName;
        double unitsConsumed;
        double totalCost;

    public:

        ElectricityBoard();
        void setDetails(const char* name, double units);
        void displayDetails();
        ~ElectricityBoard();

};