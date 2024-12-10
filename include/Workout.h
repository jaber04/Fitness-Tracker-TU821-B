#include <iostream>
#include <string>

using namespace std;

const int MAX_C = 6;

class Workout
{
    public:
        Workout();
        virtual ~Workout();

        string Gettype() { return type; }
        void Settype(string val) { type = val; }
        int Getduration() { return duration; }
        void Setduration(int val) { duration = val; }
        int Getcalories() { return calories; }
        void Setcalories(int val) { calories = val; }

        void create_workout(string val, int val2, int val3);
        void workout_list();
        void workout_menu(int val);
        bool weekly_calories(float caloriesVal);
        void graph();
        void output();

    private:
        string type;
        int duration;
        int calories;

        int c_cnt = 0;
        int t_cnt = 0;
        float sum_x = 0;
        float week_of_calories[7];
        string week_day[7] = {"Monday  ", "Tuesday ", "Wednesday", "Thursday", "Friday  ", "Saturday", "Sunday  "};

    friend ostream& operator<< (ostream& ostr, const Workout & d);
};


