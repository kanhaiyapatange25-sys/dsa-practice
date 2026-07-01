#include <bits/stdc++.h>
using namespace std;
void pattern18(int n)
{
 for (int i = 0 ; i < n ; i++ )
 {
    for(int j =  i; j >= 0 ; j--)
    {
        cout <<(char)('A'+n-j-1);
    }
    cout <<"\n";
 }
}
int main()
{
    int n;
    cout << "enter the number" <<"\n";
    cin >> n;
    pattern18(n);
    return 0;
}