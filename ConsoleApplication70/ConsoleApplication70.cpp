#include "iostream"
using namespace std;
int main()
{
    int a, b, x, y, n[50][50];
    setlocale(LC_ALL, "rus");
    cout << "Введите количество вершин: ";
    cin >> a;
    cout << "Введите количество рёбер: ";
    cin >> b;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            n[i][j] = 0;
        }
    }
    cout << endl;
    cout << "Введите рёбра: " << endl;
    for (int i = 1; i <= b; i++)
    {
        cin >> x >> y;
        n[x][y] = 1;
        n[y][x] = 1;
    }
    cout << endl;
    cout << "Матрица смежности: " << endl;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}