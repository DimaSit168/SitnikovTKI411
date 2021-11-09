#include <iostream>
#include <cstdlib>

using namespace std;
// Функция сортровки элементов массива
int sort(const int size, int* values);

// Функция заполнения массива случайными значениями
int massSet(const int size, int* values);

// Функция отображения массива
int printMass(const int size, int* values);

// Функция задания размера массива
int setSize();

// Тело функции
int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = setSize(); 
    int* values = new int[size];
    massSet(size, values); // Заполнение массива
    cout << "Заданный Массив:" << "\n";
    printMass(size, values); // Вывод массива
    sort(size, values); // Сортировка массива
    cout << "Отсортированный массив:" << "\n";
    printMass(size, values); // Вывод отсортированного массива
    cin.get();
    return 0;
}

int setSize()
{
    int size;
    cout << "Задайте размерность массива: ";
    while (true)    // Проверка на корректнсть введённых символов
    {
        cin >> size;
        if (size < 0)
        {
            cout << "Задайте положительное чило элементов массива: ";
        }
        else return size;
    }
}


int sort(const int  size, int* values)
{
    for (int stInd = 0; stInd < size - 1; stInd++)
    {
        int maxIndex = stInd;
        for (int curInd = stInd + 1; curInd < size; curInd++)
        {
            if (values[curInd] > values[maxIndex])
                maxIndex = curInd;
        }
        swap(values[stInd], values[maxIndex]);
    }
    return 0;
}

int massSet(const int  size, int* values)
{
    srand(clock());
    for (int i = 0; i < size; i++)
    {
        values[i] = rand();
    }
    return 0;
}

int printMass(const int  size, int* values)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ": " << values[i] << "\n";
    }
    return 0;
}
