#include <iostream>

using namespace std;

class FactorialCalculator {
private:
    int num;      // número
    int result;   // resultado del cálculo
    bool calculated;  // si el resultado se ha calculado
    bool error;       // si hay errores
    string errorMsg;  // mensaje de error
    int count;  // número de cálculos realizados
public:
    // Constructor
    FactorialCalculator(int n) {
        num = n;
        result = 0;
        calculated = false;
        error = false;
        errorMsg = "";
        count = 0;
    }

    // Método para calcular el factorial utilizando un ciclo for
    int calculateFactorialFor() {
        if (num < 0) {
            error = true;
            errorMsg = "Error: No se puede calcular el factorial de un número negativo";
            return -1;
        }
        calculated = true;
        count++;
        int fac = 1;
        for (int i = 2; i <= num; i++) {
            fac *= i;
        }
        result = fac;
        return result;
    }

    // Método para obtener el resultado del cálculo
    int getResult() {
        if (calculated) {
            return result;
        } else {
            error = true;
            errorMsg = "El resultado no se ha calculado todavía";
            return -1;
        }
    }
}
