#include <iostream>
#include <cstdlib>

using namespace std;
// ������� ��������� ��������� �������
int sort(const int size, int* values);

// ������� ���������� ������� ���������� ����������
int massSet(const int size, int* values);

// ������� ����������� ������� 
int printMass(const int size, int* values);

// ������� ������� ������� �������
int setSize();

// ���� �������
int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = setSize(); 
    int* values = new int[size];
    massSet(size, values); // ���������� �������
    cout << "�������� ������:" << "\n";
    printMass(size, values); // ����� �������
    sort(size, values); // ���������� �������
    cout << "��������������� ������:" << "\n";
    printMass(size, values); // ����� ���������������� �������
    cin.get();
    return 0;
}


int setSize()
{
    int size;
    cout << "������� ����������� �������: ";
    while (true)    // �������� �� ����������� �������� ��������
    {
        cin >> size;
        if (size < 0)
        {
            cout << "������� ������������� ���� ��������� �������: ";
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