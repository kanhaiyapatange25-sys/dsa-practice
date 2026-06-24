#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int age;
 cout <<"enter your age"<<"\n";
 cin >>age;
 if(age<18)
 {
    cout << "you are not eligible for job" <<"\n";
 }
 if (age>=18 && age<55)
 {
    cout << "you are eligible for job" <<"\n";
 }
 if(age>=55 && age<=57){
    cout << "eligible for job but retirement soon" <<"\n";
 }
 if (age>57) {
    cout << "retirement time" <<"\n";
 }
 return 0;
}