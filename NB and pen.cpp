#include <iostream>
using namespace std;

int main() {
    // Define the number of notebooks and pens
    const int numNotebooks = 15;
    const int numPens = 20;

    // Define the cost per notebook and per pen
    const double costPerNotebook = 2.25;
    const double costPerPen = 0.75;

    // Calculate the total cost for notebooks and pens
    double totalCostNotebooks = numNotebooks * costPerNotebook;
    double totalCostPens = numPens * costPerPen;

    // Calculate the total cost
    double totalCost = totalCostNotebooks + totalCostPens;

    // Output the total cost
    cout << "Total cost of supplies: Rs. " << totalCost << endl;

    return 0;
}
