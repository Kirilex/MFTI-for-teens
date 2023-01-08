/* Ваша задача написать калькулятор. Вашему калькулятору будет дан только 1 запрос, который имеет вид:

a + b
a - b
a * b
Где вместо a и b будут числа.

Вы должны ответить на этот запроc
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char symbol;
    
    cin >> a >>  symbol >> b;
    
    switch (symbol) {
    case '-':
        a -= b;
        break;
    case '+':
        a += b;
        break;
    case '*':
        a *= b;
        break;
    }

    cout << a << endl;
    return 0;
}
