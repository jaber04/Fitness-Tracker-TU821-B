#include "UserManager.h"
#include <iostream>


using namespace std;


UserManager::UserManager()
{
    //ctor
}
void UserManager::registerUser (string username, string password, string phone_number, float weight, string gender)
{

   // check if username exists

   for (int i = 0; i < userCount; ++i){
    if (usernames[i] == username ){
        cout << "Please choose another one, username already exists." << endl;
        return;
    }

   }


    usernames[userCount] = username;
    passwords[userCount] = password;
    phoneNumbers[userCount] = phone_number;
    weights[userCount] = weight;
    genders[userCount] = gender;
    userCount++;
    cout << "Registration successful " << endl;


}

 bool UserManager::login (string username, string password){

   for (int i = 0; i < userCount; ++i){
    if (usernames[i] == username ){
     if (passwords[i] == password ){

        cout << "Welcome back! " << username << "." << endl;
        cout << "phone number: " << phoneNumbers[i] << endl;
        cout << "weight: " << weights[i] << "kg" << endl;
        cout << "Gender: " << genders [i] << endl;
        return true;
     }else{
         cout << "wrong password, try again" << endl;
         return false;

     }

     }

 }
 cout << "this username does not exist " << endl;
 return false;
 }



UserManager::~UserManager()
{
    //dtor
}
