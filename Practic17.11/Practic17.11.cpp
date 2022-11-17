#include <iostream>

using namespace std;

int main()
{
    /*
    написать программу, которая выводит таблицу умножения
    */
    /*for (int i = 1; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << "\n\n";
    }*/
    /*
    Вывести на экран прямоугольник из символов 20х20
    */
    /*int str = 1;
    int star_count;
    int length = 20;

    while (str <= length) {
        star_count = 1;
        while (star_count <= length)
        {
            cout << '*';
            star_count++;
        }
        cout << '\n';
        str++;
    }*/

    /*
    + = = =
    = + = =
    = = + =
    = = = +
    */

    /*int N = 4;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) cout << " + ";
            else cout << " = ";
        }
        cout << endl;
    }*/

    /*
    = = = + 0 3
    = = + = 1 2
    = + = = 2 1
    + = = = 3 0
    */

    /*int N = 4;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j == N - 1) cout << " + ";
            else cout << " = ";
        }
        cout << endl;
    }*/

    // нарисовать дом (стена и крыша)

    /*for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j >= 9 && i >= j) cout << "|===|";
            else cout << "     ";
        }
    }
    cout << endl;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "|###|";
        }
        cout << endl;
    }*/

    /*

    *  *  *     0 0     0 3     0 6
     * * *      1 1     1 3     1 5
      ***       2 2     2 3     2 4
    *******
      ***       0 2     0 3     0 4
     * * *      1 1     1 3     1 5
    *  *  *     2 0     2 3     2 6

    */

    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7;j++) 
        {
            if (i == j) cout << '*';
            else if (j == 3) cout << '*';
            else if (i + j == 6) cout << '*';
            else cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 7; i++) { cout << '*'; }
    cout << endl;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            if (i + j == 2) cout << "*";
            else if (j == 3) cout << "*";
            else if (j - i == 4) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }*/

    /*
    Вывести на экран прямоугольник с заданными
    сторонами заданным символом.
    */
    /*
    int w, h;
    char c;
    cin >> w >> h >> c;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << c;
        }
        cout << endl;
    }*/
    /*
    Вывести на экран пустой прямоугольник
    с заданными размерами заданным символом.
    */
    int w, int h;
    char c;

    for (int i = 0; i < w; i++) cout << c;
    cout << endl;
    for (int i = 0; i < h - 2; i++) 
    {
        for (int j = 0; j < w; j++) 
        {
            if (j == 0 || j == w - 1) cout << c;
            else cout << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < w; i++) cout << c;
}