#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[25];
    cin >> c;
    int l=strlen(c);
    for(int i=0;i<l/2+1;i++)
    {
        if(c[i]!=c[l-i-1])
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
}
