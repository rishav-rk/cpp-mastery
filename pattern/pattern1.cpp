#include<bits/stdc++.h>
using namespace std;

void squareMatrixPattern(int n){
    //function to print sqaure matrix pattern.
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
            cout << "* ";
    cout << "\n";
    }
    cout<< "\n\n";
}

void lowerTriangularMatrix(int n){
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout<< "\n\n";
}

void lowerTriangularMatrixWithNumbers_1(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void lowerTriangularMatrixWithNumbers_2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void upperTriangularMatrix(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void upperTriangularMatrixWithNumbers(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void trianglePattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n-1; j >= i; j--)
        cout << "  ";

        for(int k = 1; k <= i; k++){
            cout << "* ";
        }
        for(int l = 2; l <= i; l++)
        cout << "* " ;
        cout << "\n";
    }
    cout << "\n\n";
}

void invertedTrianglePattern(int n){
    for(int i = 1; i <= n; i++){

        for(int k = 2; k <= i; k++){
            cout << "  ";
        }

        for(int j = n; j >= i; j--){
            cout << "* ";
        }

        for(int l = n-1; l >= i;l--){
            cout << "* ";
        }

        cout << "\n";
    }
    cout << "\n\n";
}

int main(){
    int choice, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout<<"The pattern is: " << choice << "\n\n";

    squareMatrixPattern(rows);

    lowerTriangularMatrix(rows);
    lowerTriangularMatrixWithNumbers_1(rows);
    lowerTriangularMatrixWithNumbers_2(rows);

    upperTriangularMatrix(rows);
    upperTriangularMatrixWithNumbers(rows);

    trianglePattern(rows);
    invertedTrianglePattern(rows);
    return 0;
}
