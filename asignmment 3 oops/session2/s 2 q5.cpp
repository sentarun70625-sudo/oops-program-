// 5.
//Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update your instantiation code to use this new constructor signature.

#include <iostream>
using namespace std;

struct OrderData
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    // Constructor takes an object as parameter
    FoodOrder(OrderData data)
    {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order has been delivered successfully!" << endl;
    }

    void display()
    {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant Name: " << restaurantName << endl;
        cout << "Delivered: " << boolalpha << isDelivered << endl;
    }
};

int main()
{
    // Object containing order details
    OrderData data = {101, "Zomato Restaurant", false};

    // Passing object to constructor
    FoodOrder order1(data);

    order1.display();

    order1.markDelivered();

    cout << "\nUpdated Order Details:" << endl;
    order1.display();

    return 0;
}