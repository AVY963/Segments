
#include <iostream>
#include <vector>
using namespace std;
void reverseSegment(std::vector<char>& b, int i, int j) {
    while (i <  j) {
        std::swap(b[i], b[j]);
        i++;
        j--;
    }
}

void swapSegments(std::vector<char>& b, int m, int n, int p) {
    // Развернем первый сегмент b[m: n-1]
    reverseSegment(b, m, n-1);

    // Развернем второй сегмент b[n: p-1]
    reverseSegment(b, n, p-1);

    // Теперь развернутые сегменты находятся на своих местах,
    // но внутри каждого из них элементы в обратном порядке.

    // Восстановим правильный порядок элементов внутри каждого сегмента.
    reverseSegment(b, m, p-1);
}

int main() {
    std::vector<char> b = {'a','b', 'c', 'd', 'e', 'f', 'g'};
    int m = 1, n = 3, p = 7; // Пример значений m, n, p

    swapSegments(b, m, n, p);

    // Выведем результат
    for (char c : b) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}




