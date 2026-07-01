#include <bits/stdc++.h>
using namespace std;
void pattern20(int n)
{
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
 for (int i = 0 ; i < n ; i++)
 {
    for (int j = n-1 ; j > i ; j--)
    {
        cout <<"*";
    }
    for (int j = 1 ; j < i+2 ; j++)
    {
        cout <<"  ";
    }
    for (int j = n-1 ; j > i ; j--)
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
    pattern20(n);
    return 0;
}