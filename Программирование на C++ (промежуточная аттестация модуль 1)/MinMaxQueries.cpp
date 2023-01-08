/* В этой задаче вам нужно обработать q запросов.
В каждом запросе вам дается массив чисел, и вам нужно вывести разницу между максимальным и минимальным элементами массива
*/

#include <iostream>

using namespace std;

int foo() {
    int n, min, max, t;

    cin >> n >> min;

    max = min;
    
    for(; n > 1; n--) {
        cin >> t;
  
        if (t < min) {
            min = t;
        } else if (t > max) {
            max = t;
        }
    }

    cout << max - min << "\n";
    
    return 0;
} 

int main() {
    int q;

    cin >> q;

    for (; q > 0; q--) {
        foo();
    }
    
}
