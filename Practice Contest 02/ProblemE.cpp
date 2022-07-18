#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter2 = 0;
    int hd = 0;
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        int counter = 0;
        for (int j = 1; j <= n; j++)
        {
            if (k % 2 == 0)
            {
                k = k / 2;
                counter++;
            }
            else
            {
                break;
            }
        }
        if (counter2 < counter)
        {
            counter2 = counter;
            hd = i;
           
        }
    }
    if(n==1){
        hd=1;
    }
    cout << hd << endl;
    return 0;
}