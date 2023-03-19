#include <iostream>  
using namespace std;
int main()
{
    int sum = 0, N, i;
    while (cin >> N) {
        for (i = 1; i <= N; i++) {
            if (i % 3 == 0) {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
}