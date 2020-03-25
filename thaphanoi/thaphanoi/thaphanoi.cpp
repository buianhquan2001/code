#include<iostream>
using namespace std;
int sapxep(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << "--" << c << endl;
        return 1;
    }
    sapxep(n - 1, a, c, b);
    sapxep(1, a, b, c);
    sapxep(n - 1, b, a, c);
}
int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    cin >> n;
    sapxep(n, a, b, c);
    return 0;
}