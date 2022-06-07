#include <iostream>
#include <stdlib.h>

using namespace std;

struct Customers
{
    std::string Name;
    int CustomerItems;

    Customers(string name, int customerItems)
        : Name(name), CustomerItems(customerItems) {}
};

ostream &operator<<(ostream &COUT, Customers &clientInfo);

int main(int argc, char const *argv[])
{
    int C_id = 0;
    C_id = rand() % 30 + 1985;

    Customers cust_01 = Customers("John ", C_id);
    Customers cust_02 = Customers("Jane ", C_id);

    cout << cust_01 << cust_02;

    return 0;
}

ostream &operator<<(ostream &COUT, Customers &clientInfo)
{
    COUT << "Name : " << clientInfo.Name << endl;
    COUT << "Customer Item # " << clientInfo.CustomerItems << endl;

    return COUT;
}
