#include <iostream>
using namespace std;

class caculator
{
public:
    double Floor(int x)
    {
        return x;
    };

    double add(int x, int y)
    {
        return x + y;
    };

    double Max1(double x, double y)
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }

    bool find1(string &str, char ch)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
            {
                return true;
            }
        }
        return false;
    }

    int max2(int arr[], int z)
    {
        int maxValue = arr[0];
        for (int i = 1; i < z; i++)
        {
            if (arr[i] > maxValue)
            {
                maxValue = arr[0];
            }
        }
        return maxValue;
    }
};

int main()
{

    caculator hoogrunaa;
    double q = hoogrunaa.Floor(2.3);
    cout << q << "\n";

    caculator ooha;
    double o = ooha.add(-2, 3);
    cout << o << "\n";

    caculator koloi;
    double l = koloi.Max1(10.5, 7.5);
    cout << l << "\n";

    caculator rossel;
    string wow = "hello";
    char yooo = 'e';
    cout << (rossel.find1(wow, yooo) ? "true" : "false") << "\n";

    caculator paranor;
    int addad[] = {2, 1, 6, 7};
    int n = 5;
    cout << "Maximum value is: " << paranor.max2(addad, n) << "\n";
}
