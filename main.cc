 #include <stdio.h>
#include <math.h>

#define N 10
#define M 5
#define PI 3.1415926535

int task1() {
    float a[N], t, s = 0, old, avg;
    
    printf("=== ЗАДАНИЕ 1 ===\n");
    printf("Введите %d вещественных чисел:\n", N);
    for(int i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f", &t);
        a[i] = t;
    }

    printf("\n%-10s | %-20s | %-20s\n", "Индекс", "Исходное", "Новое");
    printf("--------------------------------------------------\n");
    
    for(int i = 0; i < N; i++) {
        old = a[i];
        a[i] = a[i] / 10.0; 
        s += a[i];        
        
        printf("%-10d | %-20.2f | %-20.2f\n", i + 1, old, a[i]);
    }
    printf("--------------------------------------------------\n");

    avg = s / N;
    printf("Среднее арифметическое: %.4f\n\n", avg);
    return 0;
}

int task2() {
    float b[100];
    float k = 10.0; 
    float res = 0;
    float start = 1.0;  
    float end = 3.0;    
    float h = (end - start) / 99.0; 
    float x;

    printf("=== ЗАДАНИЕ 2 ===\n");
    for(int i = 0; i < 100; i++) {
        x = start + i * h;
        b[i] = (x * x) - (cos(PI * x) * cos(PI * x)); 
        
        if ( (b[i] < -k || b[i] > -k/2.0) && (b[i] > k) ) {
            res += b[i];
        }
    }
    printf("Сумма по условию варианта: %.4f\n\n", res);
    return 0;
}

int task3() {
    float c[M] = {1.5, 4.0, 2.0, 8.0, 3.0};
    float mx = (c[0] + c[1]) / 2.0; 
    float cur;
    int pos = 0;

    printf("=== ДОМАШНЕЕ ЗАДАНИЕ (Вариант 30) ===\n");
    for(int i = 1; i < M - 1; i++) {
        cur = (c[i] + c[i+1]) / 2.0;
        if(cur > mx) {
            mx = cur;
            pos = i;
        }
    }

    printf("Наибольшее среднее: %.2f\n", mx);
    printf("Элементы: %d и %d (значения %.1f и %.1f)\n", 
            pos, pos + 1, c[pos], c[pos+1]);
    return 0;
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}
