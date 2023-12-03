#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Input the number of people and the number of trips
    int n, m;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the number of trips: ";
    cin >> m;

    // Input the ticket costs
    int a, b, c, k;
    cout << "Enter the cost of a single trip ticket: ";
    cin >> a;
    cout << "Enter the cost of an unlimited ticket for one person: ";
    cin >> b;
    cout << "Enter the cost of a group unlimited ticket: ";
    cin >> c;
    cout << "Enter the number of people in the group unlimited ticket: ";
    cin >> k;

    // Calculate the minimum total cost of tickets
    int singleTicketIndCost = n * m * a; // individual cost with single trip tickets
    int unlimitedTicketIndCost = n * b; // individual cost with unlimited trip tickets
    int groupCost = (n / k) * c + (n % k) * min(a, c);  // cost of group and individual tickets

    // Output the result
    cout << "Minimum total cost of tickets: " << min(singleTicketIndCost, min(unlimitedTicketIndCost, groupCost)) << " hryvnias" << std::endl;

    return 0;
}
