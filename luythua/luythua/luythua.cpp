#include <iostream>
using namespace std;
int luythua(int a, int n)
{
    if (n == 1) 
    {
        return a;
    }
    else 
    {
        if (n % 2 == 0)
        {
            return luythua(a, n / 2) * luythua(a, n / 2);
        }   
        else
        {
            return luythua(a, n / 2) * luythua(a, n / 2) * a;
        }       
    }
}
int main()
{
    int a,n;
    cin >> a >> n;
    cout << luythua(a, n);
    return 0;
}