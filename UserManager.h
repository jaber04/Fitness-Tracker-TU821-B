#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <iostream>
#include <string>

using namespace std;



//const int userCount=0;

class UserManager
{
    public:
        /** Default constructor */
        UserManager();
        /** Default destructor */
        virtual ~UserManager();

        /** Access usernames
         * \return The current value of usernames
         */


        void registerUser (string username, string password, string phone_number, float weight, string gender);
        bool login (string username, string password);


    protected:

    private:
        string usernames[10];//!< Member variable "usernames"
        string passwords[10] ;
        string phoneNumbers[10]; //!< Member variable "phoneNumbers"
        float weights[10]; //!< Member variable "weights"
        string genders[10]; //!< Member variable "genders"
        int userCount = 0;

};

#endif // USERMANAGER_H
