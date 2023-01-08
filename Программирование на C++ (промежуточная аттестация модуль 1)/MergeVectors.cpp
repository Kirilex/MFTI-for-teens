/* Ваша задача написать функцию

std::vector<int> merge(std::vector<int> a, std::vector<int> b);

Аргументы -- 2 вектора, возвращает вектор.

Эта функция создает новый вектор и кладет в него элементы векторов a и b.
Причем сначала идут элементы из a, в том порядке, в котором они в нем шли,
а затем идут элементы из b, в том же порядке.

Такая операция еще называется конкатенация.

Например, если вектор a равен {4, 5}, а вектор b равен {1, 2, 3},
то их конкатенация, т.е. merge(a, b) будет {4, 5, 1, 2, 3}
*/

/*
std::vector<int> merge(std::vector<int> a, std::vector<int> b) {
	std::vector<int> res;

	for (int &i : a) {
    	res.push_back(i);
    }

	for (int &i : b) {
        res.push_back(i);
    }
	return res;
}
*/

std::vector<int> merge(std::vector<int> a, std::vector<int> b) {
	for (int &i : b) {
        a.push_back(i);
    }
	return a;
}
