#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks " <<"\n";
    cin >>marks;
    if (marks>79)
    {
        cout << "your grade is A"<<"\n";
    
        }
        if (marks>59 && marks<80)
            {
        cout << "your grade is B"<<"\n";
    
        }
         if (marks>49 && marks<60)
            {
        cout << "your grade is C"<<"\n";
    
        }
         if (marks>39 && marks<50)
            {
        cout << "your grade is D"<<"\n";
    
        }
         if (marks>29 && marks<40)
            {
        cout << "your grade is E"<<"\n";
    
        }
        return 0;
}