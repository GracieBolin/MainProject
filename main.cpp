#include <iostream>
#include <random>
using namespace std;

int main() {
    int SDays;

    cout << "Enter the number of days: ";
    cin >> SDays;

    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<int> distribution(1, 100);

    for (int day = 1; day <= SDays; day++) {
        cout << "Day: " << day << endl;

        int randomNumber = distribution(generator);

        cout << "Random number: " << randomNumber << endl;

    }

 return 0;
}

