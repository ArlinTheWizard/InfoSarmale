#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[255];
    cin.get(c,255);
    int l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')
        {
            if(c[i]>='A' && c[i]<='Z')
            {
                c[i]+='a'-'A';
            }
        }
        else
        {
            if(c[i]>='a' && c[i]<='z')
            {
                c[i]-='a'-'A';
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        if((c[i-1]==' ' || i==0) && c[i]>='a' && c[i]<='z')
        {
            c[i]-='a'-'A';
        }
    }
    cout << c;
}
