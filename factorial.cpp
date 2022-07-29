#include <iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long double factorial = 1.0;
        cin >> n;

        if (n < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
        else
        {
            for(int i = 1; i <= n; ++i)
            {
                factorial *= i;
            }
            cout << factorial<<endl;
        }
    }

        return 0;
    }
