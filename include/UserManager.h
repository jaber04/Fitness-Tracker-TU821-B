#include "Workout.h"

const int MAX_W = 6;
const int MAX_U = 1;

class UserManager
{
    public:
        UserManager();
        virtual ~UserManager();


        bool submit_workout(Workout val);
        void register_user(string usernameVal, string passwordVal, float weightVal, float target_weightVal, string genderVal);
        void menu_list();
        void menu(int val);
        int FLAG_check();
    protected:

    private:
        string username;
        string password;
        float weight;
        float target_weight;
        string gender;

        Workout workouts[MAX_W];
        int w_cnt = 0;

        string usernames[MAX_U];
        string passwords[MAX_U];
        int u_cnt = 0;

        int FLAG = 0;

        friend ostream& operator<< (ostream& ostr, const UserManager& d);
};


