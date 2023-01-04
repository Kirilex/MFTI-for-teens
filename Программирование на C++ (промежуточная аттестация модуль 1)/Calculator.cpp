/* Ваша задача написать калькулятор.
Ваш калькулятор будет отвечать на n запросов, каждый запрос имеет вид:

a + b
a - b
a * b
a / b

Где вместо a и b будут числа.

Вы должны ответить на каждый запрос.

В случае деления, вначале проверьте, что a действительно делится на b.
Если это так -- выведите результат. Если нет -- выведите No ( std::cout << "No\n"; )
*/
#include <iostream>

using namespace std;


int calc() {
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
    case '/':
        if(b == 0){
            return -1;
        } 
        int k = a / b;

        if(k * b != a) {
            return -1;
        } 
        a = k;
        break;
    }
    cout << a << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
   
    for(int i = 0; i < n; i++) {
        int error = calc();
        if (error == -1) {
            cout << "No\n";
        }
    }
}