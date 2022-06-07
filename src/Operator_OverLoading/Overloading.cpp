#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <time.h>

using namespace std;

struct Customers
{
    std::string Name;
    int CustomerItems;

    Customers(string name,
              int customerItems)
        : Name(name),
          CustomerItems(customerItems) {}
};

ostream &operator<<(ostream &COUT,
                    Customers &clientInfo);
int CustomerID();

int main(int argc,
         char const *argv[])
{

    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono;      // nanoseconds, system_clock, seconds

    Customers cust_01 = Customers("John ",
                                  CustomerID());
    sleep_for(nanoseconds(10));
    sleep_until(
        system_clock::now() + seconds(1));

    Customers cust_02 = Customers("Jane ",
                                  CustomerID());
    cout
        << cust_01
        << cust_02;

    return 0;
}

int CustomerID()
{
    int C_id;
    srand(time(NULL));
    C_id = rand() % 1000;
    return C_id;
}

ostream &
operator<<(ostream &COUT,
           Customers &clientInfo)
{
    COUT << "Name : "
         << clientInfo.Name
         << endl;
    COUT << "Customer Item # "
         << clientInfo.CustomerItems
         << endl;

    return COUT;
}
