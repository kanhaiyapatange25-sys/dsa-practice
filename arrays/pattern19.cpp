#include <bits/stdc++.h>
using namespace std;
void pattern19(int n)
{
 for (int i = 0 ; i < n ; i++)
 {
    for (int j = n ; j > i ; j--)
    {
        cout <<"*";
    }
    for (int j = 0 ; j < i ; j++)
    {
        cout <<"  ";
    }
    for (int j = n ; j > i ; j--)
    {
        cout <<"*";
    }
    cout <<"\n";
 }
for (int i = 0 ; i < n ; i++)
 {
    for (int j = 0 ; j <= i ; j++)
    {
        cout <<"*";
    }
    for (int j = n-1  ; j > i ; j--)
    {
        cout <<"  ";
    }
    for (int j = 0 ; j <= i ; j++)
    {
        cout <<"*";
    }
    cout <<"\n";
 }
}
int main()
{
    int n;
    cout << "enter the number"<<"\n";
    cin >> n;
    pattern19(n);
    return 0;
}