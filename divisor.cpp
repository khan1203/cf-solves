#include <iostream>
#include <cmath>

using namespace std;

void findDivisors(int num)
{
    if (num <= 0)
    {
        cout << "Invalid input: Please enter a positive integer." << endl;
        return;
    }

    cout << "Divisors of " << num << " are: ";

    // Optimized approach: Iterate up to the square root
    int limit = sqrt(num);
    for (int i = 1; i <= limit; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            // Print the pair divisor only once if not a perfect square
            if (i != num / i)
            {
                cout << num / i << " ";
            }
        }
    }

    cout << endl;
}

int main()
{
    int num, t;
    cin >> t;

    cout << "Enter a positive integer: ";
    while (t--)
    {
        cin >> num;
        findDivisors(num);
    }

    return 0;
}


