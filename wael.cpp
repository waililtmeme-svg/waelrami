#include <iostream>
using namespace std;

int main() {
    int units;
    int unitPrice;
    int bill;

    cin >> units;

    if (units <= 100)
        unitPrice = 250;
    else if (units <= 300)
        unitPrice = 300;
    else
        unitPrice = 350;

    bill = units * unitPrice;

    if (bill > 100000)
        cout << "High consumption – Please reduce usage" << endl;
    else
        cout << "Normal consumption" << endl;

    cout << "Consumption: " << units << endl;
    cout << "Unit Price: " << unitPrice << endl;
    cout << "Total Bill: " << bill << endl;

    return 0;
}
