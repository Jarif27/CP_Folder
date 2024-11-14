#include<iostream>
 
using namespace std;
 
struct Student
{
    int id;
    int creditsCompleted;
    double cgpa;
};
 
int main()
{
    int x;
    cout<<"Enter the number of students: ";
    cin>>x;
 
    Student stu[x];
 
    //Student details input
    for(int i=0; i<x; i++)
    {
        cout<<"Enter the details of student "<<i+1<<" :"<<endl;
        cout<<"ID: ";
        cin>>stu[i].id;
        cout<<"Credits completed: ";
        cin>>stu[i].creditsCompleted;
        cout<<"CGPA: ";
        cin>>stu[i].cgpa;
    }
 
    //Print id of the students who's CGPA is more than 3.75
    cout<<"ID of the students whose CGPA is more than 3.75:"<<endl;
    for(int i=0; i<x; i++)
    {
        if(stu[i].cgpa > 3.75)
        {
            cout<<"ID: "<<stu[i].id<<endl;
        }
    }
 
    
    cout<<"ID of the students who has completed more than 50 credits:"<<endl;
    for(int i=0; i<x; i++)
    {
        if(stu[i].creditsCompleted > 50)
        {
            cout<<"ID: "<<stu[i].id<<endl;
        }
    }
 
    return 0;
}
