 #include <bits/stdc++.h>
 using namespace std;

void pattern17(int n)
{ 
    for(int  i = 0 ; i < n ; i++)
    { 
     for(int j = 0 ; j < n-i-1 ; j++)
    {
        cout <<" ";
    }
        char c = 'A';
        for (int j = 0 ; j <= i ; j++)
        {
            cout << c++;
    }
    for (int j = i ; j > 0 ; j--)
    {
        cout << (char)('A'+j-1);
    }

    cout <<"\n";
    }

}
int main()
{
    int n;
    cout << "enter the number"<<"\n";
    cin >> n;
    pattern17(n);
    return 0;
}