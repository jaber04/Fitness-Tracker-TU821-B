#ifndef WORKOUT_H
#define WORKOUT_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

using namespace std;


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
        friend ostream& operator<< (ostream& ostr, const Workout & d);
        void workout_list();
        void workout_menu(int val);

    protected:

    private:
        string type;
        int duration;
        int calories;
};

#endif // WORKOUT_H
