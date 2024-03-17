#include <iostream>
#include <iomanip>
using namespace std;

double type1Price(double distance, double waitingTime)
{
    if (distance < 20)
    {
        return 9 + distance * 12 + waitingTime * 20;
    }
    else
    {
        return 9 + 20 * 12 + (distance - 30) * 10 + waitingTime * 30;
    }
}
double type2Price(double distance, double waitingTime)
{
    if (distance < 20)
    {
        return 10 + distance * 14 + waitingTime * 30;
    }
    else
    {
        return 10 + 20 * 14 + (distance - 20) * 12 + waitingTime * 30;
    }
}

double calculatePrice(int type, double distance, double waitingTime)
{
    if (distance > 0 && waitingTime > 0 && distance < 10000 && waitingTime < 3)
    {
        if (type == 1)
        {
            return type1Price(distance, waitingTime);
        }
        if (type == 2)
        {
            return type2Price(distance, waitingTime);
        }
    }
    return -1;
}
int main()
{
    int type;
    double distance, waitingTime;
    cout << "Choose type of taxi: ";
    cin >> type;
    cout << "Enter the distance: ";
    cin >> distance;
    cout << "Enter the waiting time: ";
    cin >> waitingTime;
    cout << "The total price is: " << setprecision(2) << fixed << calculatePrice(type, distance, waitingTime);
    return 0;
}
