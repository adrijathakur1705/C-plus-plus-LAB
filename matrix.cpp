#include <iostream>
using namespace std;

const int MAX = 10;

// Matrix Addition
void addition(int A[][MAX], int B[][MAX], int r, int c)
{
    int C[MAX][MAX];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Addition of matrices:" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << C[i][j] << " ";

        cout << endl;
    }
}

// Matrix Subtraction
void subtraction(int A[][MAX], int B[][MAX], int r, int c)
{
    int C[MAX][MAX];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtraction of matrices:" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << C[i][j] << " ";

        cout << endl;
    }
}

// Matrix Multiplication
void multiplication(int A[][MAX], int B[][MAX],
                    int r1, int c1, int r2, int c2)
{
    int C[MAX][MAX] = {0};

    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Multiplication of matrices:" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";

        cout << endl;
    }
}

// Transpose
void transpose(int A[][MAX], int r, int c)
{
    cout << "Transpose of matrix:" << endl;

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX];
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix A:" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];
    }

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix B:" << endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];
    }

    cout << "\n----- MENU -----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose of Matrix A" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            if (r1 == r2 && c1 == c2)
                addition(A, B, r1, c1);
            else
                cout << "Addition is not possible." << endl;
            break;

        case 2:
            if (r1 == r2 && c1 == c2)
                subtraction(A, B, r1, c1);
            else
                cout << "Subtraction is not possible." << endl;
            break;

        case 3:
            multiplication(A, B, r1, c1, r2, c2);
            break;

        case 4:
            transpose(A, r1, c1);
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
