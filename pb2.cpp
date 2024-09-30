#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[100];
    cin >> c;
    char a=c[0];
    int l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(c[i]!=a)
        {
            cout << c[i];
        }
    }
}
