/* Рассмотрим функцию f(x), где x - натуральное.
Определим её следующим образом:
f(1)=1
f(2)=1
f(3)=1
При x ≥ 4: f(x)=f(x−1)+f(x−2)+f(x−3)
*/
#include <iostream>

using namespace std;

unsigned f(unsigned x) {
    if (x < 4) {
        return 1;
    }
    return f(x - 1) + f(x - 2) + f(x - 3);
}

int main()
{
    unsigned x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}