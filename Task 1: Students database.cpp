/** The Code For this Task Goes Here, Please add some documentations and Comments to make the reading easier **/ 
#include <iostream>

using namespace std;
const int MAX_NAME=14; // Assume a name contains at most 14 characters
enum Gender{MALE,FEMALE};
char first_name[MAX_NAME+1];    //global vars
char last_name[MAX_NAME+1];
double GPA;
int ID;

class Info{


    public: struct Date{
        int year;
        int month;
        int day;
    };
    public: struct  Student                              //student Info
    {
        int ID;
        char first_name[MAX_NAME+1];
        char last_name[MAX_NAME+1];
        Date birth_date;
        Gender gender;
        double GPA;
    };


     void InputStudent(){
        cin>>ID;
        cin>>first_name[MAX_NAME+1];
        cin>>last_name[MAX_NAME+1];
        cin>>birth_date;
        cin>>gender;
        cin>>GPA;
    }
};
void OutputStudent(){
    cin>>ID;
    cin>>first_name[MAX_NAME+1];
    cin>>last_name[MAX_NAME+1];
    cin>>birth_date;
    cin>>gender;
    cin>>GPA;
}


int main()
{

    InputStudent();
    cout<<Student<<endl;
    return 0;
}