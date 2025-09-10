#include <vector>
#include <stack>
#include <string>

int main() {
    // Список палиндромов. 
    // В C++ каждая строка - отдельный элемент вектора
    std::vector<std::string> palindroms1 = {"ЗАКАЗ", "ЗАМАЗ", "ЗУЗ", "И ЧИ", "И", "ИААИ", "ИАИ", "ИБИ"};
    std::vector<std::string> palindroms2 = {"ЗАКАЗ", "ЗАМАЗ", "ЗУЗ", "И ЧИ", "И", "ИААИ", "ИВИ", "ИДИ-ИДИ"};
    std::vector<std::string> palindroms3 = {"ЗАКАЗ", "ЗАМАЗ", "ЗУЗ", "И ЧИ", "И", "ИБИ", "ИВИ", "ИДИ-ИДИ"};

    // Создаем стек для хранения векторов строк
    std::stack<std::vector<std::string>> stack;

    // Добавляем векторы в стек (операция push)
    stack.push(palindroms1);
    stack.push(palindroms2);
    stack.push(palindroms3);

    // Вывод содержимого стека.
    // Стек - это структура LIFO (последний вошел, первый вышел),
    // поэтому чтобы вывести все элементы, мы будем извлекать их один за другим
    while (!stack.empty()) {
        std::vector<std::string> top_list = stack.top(); // Получаем верхний элемент
        std::cout << "Список на вершине стека: [";
        for (const std::string& s : top_list) {
            std::cout << "\"" << s << "\", ";
        }
        std::cout << "]" << std::endl;
        stack.pop(); // Удаляем верхний элемент
    }

    return 0;
}