#include <stdio.h>

typedef struct V_p
{
    int value;
    int position;
} V_p;

void display_vp(V_p vp);
void display_T(int *tab, int size);
V_p min_of_tab(int *t, int size);
void swap(int *t, V_p *vp);
void tri(int *t, int size);

void test();

int main()
{

    // int tab[] = {1, 3, 5, 0, 2, -1, 8, 4, 2, -9, -5, 8, 3};
    // int size = sizeof(tab) / sizeof(tab[0]);
    // int *t = tab;

    // V_p min_t = min_of_tab(t, size);
    // printf("swaping\n");
    // display_T(t, size); // index i : t + i, size - i

    // tri(t, size);
    // display_T(t, size); // index i : t + i, size - i
    test();
    return 0;
}

/**
 * first
 *      we should know the MIN(value, position) of the tab
 * then
 *      swap the first element with the min element
 * do this for i = 0 to i = size - 1
 */

void display_vp(V_p vp)
{
    printf("value = %d, position = %d\n", vp.value, vp.position);
}

void display_T(int *tab, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d%c", tab[i], (i == size - 1) ? '\n' : ' ');
}

V_p min_of_tab(int *t, int size)
{

    V_p min = {t[0], 0};

    int position = 0;
    int m = t[0];
    for (int i = 0; i < size; i++)
        if (min.value > t[i])
        {
            min.value = t[i];
            min.position = i;
        }

    return min;
}

void swap(int *t, V_p *vp)
{
    int temp = t[0];
    t[0] = vp->value;
    t[vp->position] = temp;
}

void tri(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        V_p min = min_of_tab(t + i, size - i);
        swap(t + i, &min);
    }
}

// void tri(int *t, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         V_p min = min_of_tab(t + i, size - i);
//         min.position += i;  // Convertir la position relative en absolue
//         swap(t, &min);      // Passer l'index i à swap()
//         display_T(t, size); // Afficher après chaque swap
//     }
// }

void test()
{
    int tab[] = {3, 1, 4, 2, 0};
    int size = 5;
    tri(tab, size);
    display_T(tab, size);
}