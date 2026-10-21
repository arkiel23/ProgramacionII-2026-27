#include <iostream>

using namespace std;

void sumaX(int* p, int n, int x) {
    for (int i = 0; i < n; i++) {
        *(p + i) += x;
    }
}

void restaX(int* p, int n, int x) {
    for (int i = 0; i < n; i++) {
        *(p + i) -= x;
    }
}

void minimX(int* p, int n) {
    if (n <= 0) return;
    int min = *p; 
    for (int i = 1; i < n; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
    }
    cout << "[+] El valor minimo es: " << min << endl;
}

void mostrar(int* p, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "[+] Introduce el tamano del array: ";
    cin >> n;

    int* v = new int[n];

    cout << "[+] Introduce los " << n << " valores:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(v + i);
    }

    cout << "[+] Array antiguo: ";
    mostrar(v, n);

    minimX(v, n);

    sumaX(v, n, 5);
    cout << "[+] Array despues de sumaX: ";
    mostrar(v, n);

    restaX(v, n, 5);
    cout << "[+] Array despues de restaX : ";
    mostrar(v, n);

    delete[] v;
    v = nullptr;

    return 0;
}