#include "Workout.h"
#include <fstream>

Workout::Workout()
{
    type = "N/A";
    duration = 0;
    calories = 0;
}

void Workout::create_workout(string typeVal, int durationVal, int caloriesVal)
{
    type = typeVal;
    duration = durationVal;
    calories = caloriesVal;
}

void Workout::output()
{
        ofstream outfile;
        outfile.open("log.txt");
        int k = 0;
        while (k<= 6)
        {
            outfile << week_day[k] << ":" << week_of_calories[k] << endl;
            k++;
        }
        outfile.close();
}

bool Workout::weekly_calories(float caloriesVal)
{
    if(c_cnt < MAX_C){
        week_of_calories[c_cnt] = caloriesVal;
        c_cnt++;
        return true;
    }else {return false;}
}

void Workout::workout_menu(int val)
{
    string typeVal;
    float durationVal, caloriesVal;
    switch (val){
    case 1:
        cout << "\nHow long did you run?\t";
        cin >> durationVal;
        caloriesVal = 200 * (durationVal/60);
        create_workout("Running", durationVal, caloriesVal);
        weekly_calories(caloriesVal);
        graph();
        output();
        break;
    case 2:
        cout << "\nHow long did you swim?\t";
        cin >> durationVal;
        caloriesVal = 350 * (durationVal/60);
        create_workout("Swimming", durationVal, caloriesVal);
        weekly_calories(caloriesVal);
        graph();
        output();
        break;
    case 3:
        cout << "\nHow long did lift weights for?\t";
        cin >> durationVal;
        caloriesVal = 150 * (durationVal/60);
        create_workout("Weights", durationVal, caloriesVal);
        weekly_calories(caloriesVal);
        graph();
        output();
        break;
    case 4:
        cout << "\nWhat are the details of the workout?\t";
        cout << "\nType: ";
        cin >> typeVal;
        cout << "\nDuration: ";
        cin >> durationVal;
        cout << "\nCalories burnt per hour: ";
        cin >> caloriesVal;
        create_workout(typeVal, durationVal, caloriesVal);
        weekly_calories(caloriesVal);
        graph();
        output();
        break;
    case 5:
        cout << "\nCompleted no workout today.";
        create_workout("N/A", 0, 0);
        caloriesVal = 0;
        weekly_calories(caloriesVal);
        graph();
        output();
        break;
    }
}

void Workout::workout_list()
{
    int val;
    cout << "\n1. Running";
    cout << "\t2. Swimming";
    cout << "\n3. Weights";
    cout << "\t4. Other";
    cout << "\n5. No Workout\n";
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

void Workout::graph()
{
    int x;

    cout << "\n----------------------------------\n";
    for (int i=0; i<MAX_C; i++){
        x = (week_of_calories[i] / 10);
        cout << week_day[i] << "\t |";
        for (int n=0; n<=x; n++){
            cout << "*";
        }
        cout << "\t (" << week_of_calories[i] << " calories burned)";
        cout << "\n";
    }
    cout << "----------------------------------\n";
    sum_x = sum_x + week_of_calories[t_cnt];
    t_cnt++;
    cout << "Total calories burnt this week so far: " << sum_x << endl;
}

Workout::~Workout()
{

}
