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
void swap(int *t, V_p *vp)
{
    int temp = t[0];
    t[0] = vp->value;
    t[vp->positoin] = temp;
}

void tri(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        V_p min = min_of_tab(t + i, size - i);
        swap(t + i, &min);
    }
}

void display_vp(V_p vp)
{
    printf("value = %d, position = %d\n", vp.value, vp.positoin);
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
    display_T(t, 6); // index i : t + i, size - i
    V_p min_t = min_of_tab(t, 6);
    display_vp(min_t);
    // int min_t = min(t, 6);
    // printf("min tab = %d\n", min_t);
    printf("swaping\n");
    swap(t, &min_t);
    display_T(t, 6); // index i : t + i, size - i
    tri(t, 6);
    display_T(t, 6); // index i : t + i, size - i
    return 0;
}