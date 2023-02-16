#include<iostream>
using namespace std;

struct studenttype
{
    string fname;
    string lname;
    int testscore;
    char grade;

};

void readdata(studenttype student[],int size);
void assigngrade(studenttype student[],int size);
int hscore(studenttype student[],int size);
void displayhighestname(studenttype student[],int size,int highest);

void readdata(studenttype student[],int size)
{
   for(int i=0;i<size;i++)
   {
       cout<<"enter first name"<<endl;
       cin>>student[i].fname;
       cout<<"enter last name"<<endl;
       cin>>student[i].lname;
       cout<<"enter test score"<<endl;
       cin>>student[i].testscore;
   } 
}

void assigngrade(studenttype student[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(student[i].testscore>=90)
        student[i].grade='A';
        else if(student[i].testscore>=80)
        student[i].grade='B';
        else if(student[i].testscore>=70)
        student[i].grade='C';
        else if(student[i].testscore>=60)
        student[i].grade='D';
        else if(student[i].testscore>=50)
        student[i].grade='E';
        else student[i].grade='F';

    }
}

int hscore(studenttype student[],int size)
{
    int highest=student[0].testscore;

    for(int i=0;i<size;i++)
    {
        if(highest<student[i].testscore)
        highest=student[i].testscore;
    }

    return highest;
}

void displayhighestname(studenttype student[],int size,int highest)
{
    for(int i=0;i<size;i++)
    {
        if(student[i].testscore==highest)
        {
            cout<<student[i].lname +","+student[i].fname<<endl;
            cout<<",Test Score="<< student[i].testscore<<endl;
        }
    }
}



int main()
{
    int size=2;
    studenttype student[size];

    readdata(student,size);

    assigngrade(student,size);

    int highest=hscore(student,size);
    
    cout<<"Student with highest test score is "<<endl;
    displayhighestname(student,size,highest);


    
    return 0;
}