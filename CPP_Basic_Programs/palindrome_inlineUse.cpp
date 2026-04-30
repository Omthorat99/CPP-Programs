#include <iostream>
using namespace std;
class palindrome
{
public:
    int rem, num, reverse = 0, temp;

    void Getdata()
    {
        cout << "Enter a number : ";
        cin >> num;
    }

    inline void Checkpalindrome()
    {
        temp = num;
        while (num != 0)
        {
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num / 10;
        }
        if (temp == reverse)
        {
            cout << "Is a palindrome number ";
        }
        else
        {
            cout << "Is not a palindeome number";
        }
    }
};
int main()
{
    palindrome p;
    p.Getdata();
    p.Checkpalindrome();

    return 0;
}