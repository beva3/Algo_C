#include <stdio.h>

typedef struct V_p
{
    int value;
    int positoin;
} V_p;

V_p min_of_tab(int *t, int size)
{

    V_p min = {t[0], 0};

    int position = 0;
    int m = t[0];
    for (int i = 0; i < size; i++)
        if (min.value > t[i])
        {
            min.value = t[i];
            min.positoin = i;
        }

    return min;
}

// int min(int *t, int size_Tab)
// {
//     int position = 0;
//     int m = t[0];
//     for (int i = 0; i < size_Tab; i++)
//         if (m > t[i])
//         {
//             m = t[i];
//             position = i;
//         }

//     return m;
// }

void display_T(int *tab, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d%c", tab[i], (i == size - 1) ? '\n' : ' ');
}

// void display_minTab (int )

int main()
{
    // min pos
    // swap
    int tab[] = {1, 3, 5, 0, 2, -1};
    int *t = tab;
    display_T(t, 5); // index i : t + i, size - i
    // int min_t = min(t, 6);
    // printf("min tab = %d\n", min_t);

    return 0;
}