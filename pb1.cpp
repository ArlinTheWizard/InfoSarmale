#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[255];
    char a;
    cin >> a;
    char s[10];
    cin >> s;
    cin.get();
    cin.get(c,255);
    int lenght=strlen(c);
    int k1=0;
    for(int i=0;i<lenght;i++)
    {
        if(a==c[i])
        {
            k1++;
        }
    }
    int k2=0;
    for(int i=0;i<lenght;i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')
        {
            k2++;
        }
    }
    int k3=0;
    int l=strlen(s);
    for(int i=0;i<lenght-l+1;i++)
    {
        int ii=0;
        bool b=true;
        for(int j=i;j<i+l;j++)
        {
            if(c[j]!=s[ii])
            {
                b=false;
            }
            ii++;
        }
        if(b==true)
        {
            k3++;
        }
    }
    cout << k1 << "\n" << k2 << "\n" << k3;
}
