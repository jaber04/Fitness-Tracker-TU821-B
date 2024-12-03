#include <iostream>

using namespace std;

const int MAX_days = 7;
int main()
{
    int x, calories_burned[MAX_days] = {330, 123, 1000, 468, 987, 345, 234};
    string week_day[MAX_days] = {"Monday  ", "Tuesday ", "Wednesday", "Thursday", "Friday  ", "Saturday", "Sunday  "};

    cout << "----------------------------------\n";
    for (int i=0; i<MAX_days; i++){
        x = (calories_burned[i] / 10);
        cout << week_day[i] << "\t |";
        for (int n=0; n<=x; n++){
            cout << "*";
        }
        cout << "\t (" << calories_burned[i] << " calories burned)";
        cout << "\n";
    }
    cout << "----------------------------------\n";
    return 0;
}