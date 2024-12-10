#include "UserManager.h"

UserManager::UserManager()
{
    username = "N/A";
    password = "N/A";
    weight = 0.0;
    target_weight = 0.0;
    gender = "N/A";
}

void UserManager::register_user(string usernameVal, string passwordVal, float weightVal, float target_weightVal, string genderVal)
{
    username = usernameVal;
    password = passwordVal;
    weight = weightVal;
    target_weight = target_weightVal;
    gender = genderVal;

    if(u_cnt < MAX_U){
        usernames[u_cnt] = usernameVal;
        passwords[u_cnt] = passwordVal;
        u_cnt++;
    }
}

ostream& operator << (ostream& ostr, const UserManager& d)
{
    ostr << "\n Username: " << d.username
    << "\n Gender: " << d.gender
    << "\n Weight: " << d.weight
    << "\n Target Weight: " << d.target_weight << endl;
    return ostr;
}

void UserManager::menu_list()
{
    int val;
    cout << "\n1. Register";
    cout << "\t2. Log in";
    cout << "\n3. Exit\n";
    cin >> val;
    menu(val);
}

void UserManager::menu(int val)
{
    string usernameVal, passwordVal, genderVal;
    float weightVal, target_weightVal;
    switch (val){
    case 1:
        cout << "Enter username: ";
        cin >> usernameVal;
        cout << "Enter password: ";
        cin >> passwordVal;
        cout << "Enter weight (in kg): ";
        cin >> weightVal;
        cout << "Enter target weight (in kg): ";
        cin >> target_weightVal;
        cout << "Enter gender (male, female, other): ";
        cin >> genderVal;

        for (int i = 0; i < MAX_U; ++i){
            if (usernames[i] == usernameVal ){
                cout << "Please choose another one, username already exists." << endl;
                break;
            }
        }
        register_user(usernameVal, passwordVal, weightVal, target_weightVal, genderVal);
        break;

    case 2:

        cout << "Enter username: ";
        cin >> usernameVal;
        cout << "Enter password: ";
        cin >> passwordVal;
        for (int i = 0; i < MAX_U; ++i){
            if (usernames[i] == usernameVal ){
                if (passwords[i] == passwordVal ){
                    cout << "Welcome back! " << usernameVal << "." << endl;
                    FLAG = 1;
                    break;
                }else{
                     cout << "wrong password, try again" << endl;
                     break;
                }
            }else {cout << "\nUsername does not exist";}
        }
        break;
    case 3:
        FLAG = 2;
        break;

    default:
        cout << "Invalid choice. Please try again." << endl;
    }
}

int UserManager::FLAG_check()
{
    return FLAG;
}

bool UserManager::submit_workout(Workout val)
{
    if(w_cnt < MAX_W){
        workouts[w_cnt] = val;
        w_cnt++;
        return true;
    }else {return false;}
}

UserManager::~UserManager()
{

}
