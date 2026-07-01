#include <bits/stdc++.h>
 using namespace std;

void pattern14(int n)
{ 
    for(int  i = 0 ; i < n ; i++)
    { 
        char c = 'A';
        for (int j = 0 ; j < n-i ; j++)
        {
            cout << c++;
    }

    cout <<"\n";
    }

}
int main()
{
    int n;
    cout << "enter the number"<<"\n";
    cin >> n;
    pattern14(n);
    return 0;
}