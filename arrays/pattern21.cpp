#include <bits/stdc++.h>
using namespace std;
void pattern21(int n)
{
    for(int j = 0 ; j < n ; j++)
    {
        cout <<"*";
    }
    cout <<"\n";
  for (int i = 0 ; i < n-2 ; i++)
  {
    cout << "*";
    for(int j = 0 ; j < n-2 ; j++)
    {
        cout << " ";
    }
    cout << "*" <<"\n";
  }
  for(int j = 0 ; j < n ; j++)
    {
        cout <<"*";
    }
    cout <<"\n";
}
int main()
{
    int n;
    cout << "enter the number" << "\n";
    cin >> n;
    pattern21(n);
    return 0;
}