//3.
// Create a class called FoodOrder with properties: orderId (number), restaurantName (string), and isDelivered (boolean). Write a member function markDelivered() that sets isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().

#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order has been delivered successfully!" << endl;
    }
};

int main()
{
    FoodOrder order1;

    order1.orderId = 101;
    order1.restaurantName = "Zomato Restaurant";
    order1.isDelivered = false;

    cout << "Order ID: " << order1.orderId << endl;
    cout << "Restaurant Name: " << order1.restaurantName << endl;
    cout << "Delivered: " << boolalpha << order1.isDelivered << endl;

    order1.markDelivered();

    cout << "Delivered: " << order1.isDelivered << endl;

    return 0;
}
