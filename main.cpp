#include "lib.h"

using namespace std;

int main() {

    ifstream file ("/Users/apple/CLionProjects/Most_popular_numbers/Table");

    int *mass = new int[Numbers_count];

    mass = Read_file(file);

    Displaying_results(mass);

    return 0;
}