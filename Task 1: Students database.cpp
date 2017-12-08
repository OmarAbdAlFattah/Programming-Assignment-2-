/** The Code For this Task Goes Here, Please add some documentations and Comments to make the reading easier **/ 
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_NAME=14; // Assume a name contains at most 14 characters
enum Gender{ MALE = 'm', FEMALE = 'f'};
string first_name;    //global vars
string last_name;
double GPA;
int ID, n, temp = 0;


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
    Student* s;


void InputStudent(Student *s){
    cin>>s->ID;
    cin>>s->first_name;
    cin>>s->last_name;
    cin>>s->birth_date.year;
    cin>>s->birth_date.month;
    cin>>s->birth_date.day;

    //cin>>info.gender;
    cin>>s->GPA;
}

void OutputStudent(Student *s){
    cout<<s->ID<<endl;
    cout<<s->first_name<<endl;
    cout<<s->last_name<<endl;
    cout<<s->birth_date.year<<endl;
    cout<<s->birth_date.month<<endl;
    cout<<s->birth_date.day<<endl;
    cout<<s->GPA<<endl;
}

void InputAllStudent(Student *s ,int n){
    bool LessThan(s);
    bool GPAGreater(s);

}
void OutputAllStudent(Student *s ,int n){
    for(int i = 0 ; i < n ; i++){
        OutputStudent(s);
    }
}
bool LessThan(Student *s){
    for(int i = 0 ; i < n ; i++){
        InputStudent(s);

        if(temp < s->ID){
            return 1;
        } else return 0;

        s->ID = temp;
    }
}

bool GPAGreater (Student *s){
    for(int i = 0 ; i < n ; i++){
        InputStudent(s);

        if(temp > s->GPA){
            return 1;
        } else return 0;
    }
}

void SortStudents(Student* s, int n, bool (*LessThan)(Student*,Student*)){

}

int main()
{
    Student* s;
    InputAllStudent(s, n);
    OutputAllStudent(s, n);
    return 0;
}

