/** The Code For this Task Goes Here, Please add some documentations and Comments to make the reading easier **/ 
#include <iostream>
using namespace std;

const int MAX_NAME=14; // Assume a name contains at most 14 characters
enum Gender{ MALE = 'm', FEMALE = 'f'};
string first_name;    //global vars
string last_name;
double GPA;
int ID;


struct Date{
    int year;
    int month;
    int day;
};

struct  Student                              // Info
{
    int ID;
    string first_name;
    string last_name;
    Date birth_date;
    Gender gender;
    double GPA;
};
    Student info;


void InputStudent(Student info){
    cin>>info.ID;
    cin>>info.first_name;
    cout<<info.first_name<<endl;
    cin>>info.last_name;
    cin>>info.birth_date.year;
    cin>>info.birth_date.month;
    cin>>info.birth_date.day;

    //cin>>info.gender;
    cin>>info.GPA;
}

void OutputStudent(Student info){
    //cout<<info.ID<<endl;
    //cout<<info.first_name<<"adasd"<<endl;

    //cout<<info.last_name<<endl;
    //cout<<info.birth_date.year<<endl;
    //cout<<info.birth_date.month<<endl;
    //cout<<info.birth_date.day<<endl;
    //cout<<info.GPA<<endl;
}


int main()
{
    Student s;
    InputStudent(s);
    OutputStudent(s);
    return 0;
}
