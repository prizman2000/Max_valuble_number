#include "lib.h"

int* Read_file(std::ifstream &file){

    int *mass = new int[Numbers_count];
    string a, num;

    while (!file.eof()){

        getline(file, a);

        if (isdigit(a[0]) && a[1] == ' ') {

            for (int j = 0; j < a.length(); j++) {

                if (a[j] != ' ') {
                    num += a[j];
                } else {
                    int numb = atoi(num.c_str());
                    mass[numb]++;
                    num = "";
                }
            }
        }
    }
    return mass;
}

void Displaying_results(int *mass){

    cout<<"Общая информация.\n";

    for (int i = 0; i<Numbers_count; i++){

        cout<<"Число "<<i<<" повторяется "<<mass[i]<<" раз\n";
    }
}
