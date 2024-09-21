#include<iostream>
#include<string>
#include<cstring>
using namespace std;
enum grades{
    Excellent,
    Average,
    Good,
    Poor
};
union scholarship
{
    int scholarship;
    char reason[50];//u can't use string here-it is a non trivial 
};
struct student
{
    string name;
    int rollno;
    float grade;
    scholarship sch;
    grades g;
};
void input_details(student &s){
    int grade;
    cout<<"Student name:";
    getline(cin,s.name);
    cout<<"Student Rollno:";
    cin>>s.rollno;
    cout<<"Student Grade:";
    cin>>grade;
    s.grade=grade;
    if(grade>=90){
        s.g=static_cast<grades>(Excellent);
    }
    else if(grade>=80 && grade<90){
        s.g=static_cast<grades>(Average);
        
    }
    else if(grade>=70 && grade<80){
        s.g=static_cast<grades>(Good);
    }
    else{
        // s.g="poor";//not possible
        s.g=static_cast<grades>(Poor);
    }};
void scholar(student &s){ 
    switch (s.g)
    {
    case Excellent:
        s.sch.scholarship=100;
        cout<<"you have "<<s.sch.scholarship<<" % "<<"scholarship"<<endl;
        break;
    case Average:
        s.sch.scholarship=75;
        cout<<"you have "<<s.sch.scholarship<<" % "<<"scholarship"<<endl;
        break;
    case Good:
        s.sch.scholarship=50;
        cout<<"you have "<<s.sch.scholarship<<" %"<<" scholarship"<<endl;
        break;
    case Poor:
        strcpy(s.sch.reason,"bad grades");
        cout<<"sorry you don't avail for any scholarship,Reason: "<<s.sch.reason<<endl;
    break;
    default:
        break;
    }
    };



void display_details(student &s){
    cout<<"Student Details:"<<endl;
    cout<<"Name:"<<s.name<<endl;
    cout<<"RollNo:"<<s.rollno<<endl;
    cout<<"Grades:"<<s.grade<<endl;
    
  
};
int main(){
    struct student sa;
    input_details(sa);
    display_details(sa);
    scholar(sa);
    
    return 0;
}

