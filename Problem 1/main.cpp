#include <iostream>
using namespace std;
int a[4][4], b[4][4], A, B;
int  k , Alice , Bob ;

void calculateScore(int x, int y) {
    if (x == y)
        return;
    if (x == 3 && y == 2 || x == 2 && y == 1 || x == 1 && y == 3)
        Alice++;
    else
        Bob++;
}

int main() {

    cin >> k ;
    cin >> A ;
    cin >> B ;


    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j] ;


    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> b[i][j] ;


    int num = 0;

    while (num < k) {
        num++;
        calculateScore(A, B);
        cout << "("<< A << ", " << B <<")"<< endl;
        int t1 = A, t2 = B;
        A = a[t1][t2];
        B = b[t1][t2];
    }

    cout << Alice << " " << Bob << endl;

    return 0;
}
