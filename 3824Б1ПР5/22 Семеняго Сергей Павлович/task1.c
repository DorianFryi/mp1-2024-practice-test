// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вернуть 1, если его элементы образуют арифметическую прогрессию,
// иначе вернуть 0.
int task1(unsigned A[], size_t n)
{
    if (n <= 1) {
        return 1; 
    }
    int diff = A[1] - A[0]; 

    for (size_t i = 2; i < n; i++) {
        if (A[i] - A[i - 1] != diff) {
            return 0; 
        }
    }
    return 1; 
}
