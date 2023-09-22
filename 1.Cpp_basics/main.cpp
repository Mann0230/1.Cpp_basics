//
//  main.cpp
//  1.Cpp_basics
//
//  Created by Mansi Bakshi on 21/09/23.
//
// Basics of CPP
// int --> 10^-9 to +9 long --> 10^-12 to +12 long long --> 10^-18 to +18 double
// string and getline()
// char
// if-else
// switch-case
// arrays
// strings
// functions
// Pass by value --> Copy goes
// array --> always with reference

#include <iostream>
#include <string>
// #include <bits/stdc++.h> ---> //include all the possible libraries
using namespace std;
void printName(string name){
    cout<<"Hey "<<name<<endl;
}
int main(int argc, const char * argv[]) {
                       //DATATYPESSSSSSSS
    cout << "Nmaste, World!"<<endl;  //print
    cout << "Nmaste, Bharat!"<<endl; //print
    int x = 4;  //data-type
//    cin>>x; //taking input
    cout<<"Value of x is:"<<x<<endl;  //output
    long y = 267289000298726; //int,long,long long ---> int
    long long z = 26732592977626;
    cout<<y<<endl;
    cout<<z<<endl;
    float a = 12.9; //float,double
    double b = 23.4521;
    cout<<a<<endl;
    cout<<b<<endl;
    //string and getline()
    string str;
    cout<<"String:";
  //  cin>>str; //upto space only
    getline(cin,str);
    cout<<str<<endl;
//   getline() to remove this
    char ch = 'g';
    cout<<ch<<endl;
                            //If-else
    int age;
    char sex;
    cout<<"age:";
    cin>>age;
    cout<<"Sex:";
    cin>>sex;
    if(age >= 18 && sex == 'M'){
        cout<<"Adult Male"<<endl;
    }
    else{
        cout<<"! an Adult Male"<<endl;
    }
    //if you have if block,else block is not mandatory
                         //Switch-Case
    int dayNum;
    cout<<"Enter day number :";
    cin >> dayNum;
    switch(dayNum){
        case 1:
            cout<<"Mon"<<endl;
            break;
        case 2:
            cout<<"Tues"<<endl;
            break;
        case 3:
            cout<<"Wed"<<endl;
            break;
        case 4:
            cout<<"Thur"<<endl;
            break;
        case 5:
            cout<<"Fri"<<endl;
            break;
        case 6:
            cout<<"Sat"<<endl;
            break;
        case 7:
            cout<<"Sun"<<endl;
            break;
        default:
            cout<<"INvalid"<<endl;
    }
                  //ARRAYSSSSSS ------> similar data type
    int arr[5] = {2,4,5,7,9};
//    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3] += 10;
    cout<<arr[3]<<endl;
    int darr[3][5];
    darr[1][3] = 11;
    cout<<darr[1][3]<<endl;
    cout<<darr[1][2]<<endl;
                   //STRINGSSSS
    string s = "striver";
    int len = s.size();
    cout<<s[len -1]<<endl;
    s[len -1] = 'f';
    cout<<s<<endl;
                   //FOR LOOP
    for(int i = 1 ; i <= 10 ; i++){
        cout<<"Mann0230 "<<i<<endl;
    }
    // Functions
    // void return parameterised non parameterised
    string Name;
   cin>>Name;
    printName(Name);
    return 0;
}
 
