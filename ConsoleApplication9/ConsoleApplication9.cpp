#include <iostream>

// Функция выделяет память под переменную нужного типа и возвращает указатель
int* allocateMemory() {
    int* ptr = new int(42);  
    return ptr;
}

int main() {
    const int iterations = 10000000; 
    int* pointers[iterations];      

    
    for (int i = 0; i < iterations; ++i) {
        pointers[i] = allocateMemory();
    }

    
    std::cout << "enter";
    std::cin.get();

    
    for (int i = 0; i < iterations; ++i) {
        delete pointers[i]; 
    }

    return 0;
}
