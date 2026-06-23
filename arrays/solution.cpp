#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout <<"enter your age" <<"\n";
    cin >> age;
    if(age<18){
        cout <<"not eligible for job"<<"\n";
    }
    else if(age<55){
        cout <<"eligible for job"<<"\n";
    }
    else if(age<=57){
        cout <<"eligible for job , but retirement soon"<<"\n";
    }
    else {
    cout <<"retirement time"<<"\n";
    }

    return 0;
}

