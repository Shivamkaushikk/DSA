#include <iostream> // this will include input output library 
//if we have to include all the library exists in C++ then we will use --->

#include<bits/stdc++.h> //this will include all the library in c++
using namespace std; // THIS LINE IS USED FOR REMOVING THE REPETITION OF STD WORD WHICH IS USED AS std::cin and std::cout

int main (){
    int x,y;
    cin >> x>>y;
    cout << "the value of x:"<<x<<"and y:"<<y;
    return 0;
}


//-----------------------------------------------------------------------------------------------------------------------//

// DATA TYPES

# include <iostream>
using namespace std;

int main(){
    // int , long , long long , float , double 
    // string , getline
    string s;  // in this case if input is hey shivam then the output should be only hey for print hey shivam we have to declare 2 variables
    cin >> s;
    cout <<s;

    string str;
    getline (cin,str); // in this case full line where the input is given is to be print it will print hey shivam 
    cout<<str;
    // char  ( String("") taken more space as compare the char (''))
    char ch;
    cin>>ch;
    cout<<ch;   
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------//

// if-else statement 

#include<iostream>
using namespace std;
// Write a program that takes an input of age and print if you are adult or not 
int main(){
    int age;
    cin >> age;

    if(age >= 18){
        cout << "You are an adult";
    } else if(age >= 13 && age < 18) {
        cout << "You are a teenager";
    } else {
        cout << "You are a child";
    }

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------//

//Switch statement 

#include <iostream>
using namespace std;
// Take the day no and print the corresponding day, For 1 print Monday for 2 print Tuesday and so on for 7 print Sunday

int main(){
    int day;
    cin>>day;

    switch (day){
        case 1:
          cout<<"Monday";
          break;

        case 2:
          cout<<"Tuesday";
          break;
        case 3:
          cout<<"Wednesday";
          break;
        case 4:
          cout<<"Thursday";
          break;
        case 5:
          cout<<"Friday";
          break;
        case 6:
          cout<<"Saturday";
          break;
        case 7:
          cout<<"Sunday";
          break;
        default:
        cout<<"Invalid Input";
    }
}

//--------------------------------------------------------------------------------------------------------------------------------------//