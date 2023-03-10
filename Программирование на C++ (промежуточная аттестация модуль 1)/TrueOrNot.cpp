/* Напишите функцию isTrue, которая принимает на вход четыре целых числа p1, p2, p3 и p4 типа int,
которые были получены в результате операций сравнения и возвращает результат типа int.

Требуется вернуть 1, если верно хотя бы одно из следующих высказываний.

p1 верно;
p2 и p4 одновременно верны;
Неверны ни p2, ни p4, но при этом верно p3.
В остальных случаях верните 0.
*/

int isTrue(int p1, int p2, int p3, int p4) {
	if (p1 != 0) {
    	return 1;
    }
	if (p2 != 0) {
    	if (p4 != 0) {
    		return 1;
        }
    } else if (p4 == 0 && p3 != 0) {
		return 1;
    }
	return 0;
}
