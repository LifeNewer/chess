//В этом коде мы сначала запрашиваем у пользователя номер строки и столбца, на 
//которых стоит слон.Затем мы перебираем все клетки на доске и проверяем, находятся
//ли они на той же диагонали, что и слон. Если да, мы выводим координаты клетки и сообщение "is under attack".
#include <iostream>

int main() {
    int row, col;
    std::cout << "Enter the row number of the bishop: ";
    std::cin >> row;
    std::cout << "Enter the column number of the bishop: ";
    std::cin >> col;

  
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
           
            if (abs(i - row) == abs(j - col)) {
                std::cout << "Cell " << i << "," << j << " is under attack\n";
            }
        }
    }

    return 0;
}