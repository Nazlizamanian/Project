.c// Nazli Zamanian Gustavsson Assignment: "   Student Managment System   " 2022-01-25
// File: sms.cpp
// Summary: Simple project, student/teacher managemnet system with login
// Verison: 1.1
// Owner: Nazli Zamanian Gustavsson 
// ---------
// Log: 2022-01-22 Created the file.

#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>

using namespace std;

struct Student; //Strucuture students info.
char firstname[30];
char lastname[30];
int year[20];
int age[20];
 
struct Subject;


void display(Student);
bool enrol(Subject&,Student); 

void display(Student st){
    cout<<"ID #: "<<st.id<<endl;                                    //prints the id of the student
    cout<<"Name: "<<st.lname<<", "<<st.fname<<" "<<st.mname<<endl;    //prints students name                               
    cout<<"Year Level: "<<st.year<<endl;                            //prints the year level of the student
    cout<<"Age: "<<st.age<<endl;                                    //prints the students age
    cout<<"Press any key to continue..."<<endl;
    getch();
}

void firstpage(){
{
    char username[50]; //Defintion of the variables. 
    int password;

    printf("Login\n"); 
    printf("Please enter log information \n");
    scanf("%s",&username); //Teacher log in information. 

    printf("Please enter you password pincode\n"); //enter his/hers 4 digit password.
    scanf("%d",&password); //scans

    if (strcmp(username,"name")==0 && password == 1234){
         printf("Log in succeful!\n"); 
    }//If the input is equal to the right,loged in succefully.
     //Compares the info entered.If the right password is entered, log in succefully. 
   //Goes to next part 
    else{
     printf("Log in unsucceful!Wrong credentials\n");
    }
    //If wrong info is entered, retry. 

    return;
}   

}
int main(){
    char choice;
    cout<<"Select task from choices listed down below\n"; //Display page
    cout<<"1.Create new student ID\n";
    cout<<"2.Display all students IDs\n";
    cout<<"3.Modify student ID\n";
    cout<<"4.Exit\n";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Creating new student ID....\n";                                        
            Student St;                   //Case 1 adds new student.
            cout<<"Enter ID: ";           //the following asks for information about a student
            cin>>st.id;
            cout<<"Enter first name: ";
            cin.ignore();
            cin.getline(st.fname,30);
            cout<<"Enter last name: ";
            cin.getline(st.lname,30);
            cout<<"Enter year level: ";
            cin>>st.year;
            cout<<"Enter age: ";
            cin>>st.age;
            if(enrol(s,st)==true)        //checks if there was successful enrol        
                cout<<"Student successfully enrolled..."<<endl;
            else
                cout<<"Either subject is full or student is already enrolled..."<<endl;

        case 2: //Display all student.
        char name[30];
        cout<<"Enter last name: ";
        cin>> lastname;

        display(student);

        case 3: //Create changes within student. 

        case 4: exit((0)); // Exit programme.

    } while(choice=5);
}