#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[100];
    cin >> c;
    int k=1;
    int l=strlen(c);
    while((k<l-k && l%2==0) || (k<=l-k && l%2==1))
    {
    for(int i=k;i<l-k;i++)
    {
        cout << c[i];
    }
    cout << "\n";
    k++;
    }
}
