//create a class TIME with member hour, minute and seconds. Take input add two time objects passing objects to function and display the result
#include <iostream>
using namespace std;

class TIME {
private:
    int hour;
    int minute;
    int second;

public:
    // Default constructor
    TIME() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // Parameterized constructor
    TIME(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // Function to take input
    void input() {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    // Function to display time
    void display() const {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }

    // Function to add two TIME objects
    TIME add(const TIME &t) {
        TIME result;
        result.second = second + t.second;
        result.minute = minute + t.minute + result.second / 60;
        result.second %= 60;
        result.hour = hour + t.hour + result.minute / 60;
        result.minute %= 60;
        result.hour %= 24; // To handle overflow beyond 24 hours
        return result;
    }
};

int main() {
    TIME t1, t2, result;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "Enter second time:" << endl;
    t2.input();

    // Adding two TIME objects
    result = t1.add(t2);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Added Time: ";
    result.display();

    return 0;
}
