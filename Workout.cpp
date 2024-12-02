#include "Workout.h"

Workout::Workout()
{
    type = "N/A";
    duration = 0;
    calories = 0;
}

void Workout::create_workout(string val, int val2, int val3)
{
    type = val;
    duration = val2;
    calories = val3;
}

void Workout::workout_menu(int val)
{
    string typeVal;
    int durationVal, caloriesVal;
    switch (val){
    case 1:
        cout << "\nLets add that to your schedule";
    case 2:
        cout << "\nLets add that to your schedule";
    case 3:
        cout << "\nLets add that to your schedule";
    case 4:
        cout << "\nWhat are the details of the workout?";
        cout << "\nType: ";
        cin >> typeVal;
        cout << "\nDuration: ";
        cin >> durationVal;
        cout << "\nCalories: ";
        cin >> caloriesVal;
        create_workout(typeVal, durationVal, caloriesVal);
    }
}

void Workout::workout_list()
{
    int val;
    cout << "\n1. Running";
    cout << "\t2. Swimming";
    cout << "\n3. Weights";
    cout << "\t4. Other\n";
    cin >> val;
    workout_menu(val);
}

ostream& operator << (ostream& ostr, const Workout& d)
{
    ostr << "\n Workout: " << d.type
    << "\n Duration: " << d.duration
    << "\n Calories Burnt: " << d.calories
    << endl;
    return ostr;
}

Workout::~Workout()
{
    cout << type << " has been destroyed";
}
