/*Given two integers a and b. You need to find and return the count of possible ways in which we can represent the number a as the sum of unique integers raise to the power b.
For eg. if a = 10 and b = 2, only way to represent 10 as -
10 = 1^2 + 3^2
Hence, answer is 1.
Note : x^y represents x raise to the power y
Inout Format :
Two integers a and b (separated by space)
Output Format :
Count
*/
#include<iostream>
#include<cmath>
using namespace std;
int allWays(int number, int power) {

    if(power == 0)
        return 0;
    int maxOption = floor(pow(number,1.0/power));
    int* possibleOptions = new int[maxOption];

    int k = 0;
    for(int i=1;i<=maxOption;i++)
        possibleOptions[k++] = i;

    int**storage = new int*[number+1];
    for(int i=0;i<=number;i++)
    {
        storage[i] = new int[maxOption+1];
    }
    //base case filling
    for(int j=0;j<=maxOption;j++)
        storage[0][j] = 1;
    for(int j=0;j<=number;j++)
        storage[j][0] = 0;
    storage[0][0] = 1;

    for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=maxOption;j++)
        {
            int arrayIndex = maxOption-j;
            int Op1 = 0,Op2 = 0;
            int index = (int)pow(possibleOptions[arrayIndex],power);

            if(i >= index)
            {
                Op1 = storage[i - index][j-1];
            }
            Op2 = storage[i][j-1];
            storage[i][j] = Op1+Op2;
        }
    }
    int ans = storage[number][maxOption];
    for(int i=0;i<=maxOption;i++)
        delete[]storage[i];
    delete[]storage;

    return ans;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << allWays(x, n);
    return 0;
}
