#include "UserManager.h"

int main()
{
    cout << "Hello world!" << endl;
    UserManager user;
    user.register_user("jack", "fanning", 123, 456, "m");
    Workout list_of_workouts;
    int i;
    while(true)
    {
        i = 0;
        user.menu_list();
        if(user.FLAG_check() == 1){
            while (i < 7){
                list_of_workouts.workout_list();
                user.submit_workout(list_of_workouts);
                i++;
            }
        }else if(user.FLAG_check() == 2){
            return 0;
        }
    }
}
