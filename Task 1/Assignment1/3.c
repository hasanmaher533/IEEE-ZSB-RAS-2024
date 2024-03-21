#include <stdio.h>

void count1(int arr[], int size)
{
    int freq[size];
    int i, j, count;

    for(i = 0; i < size; i++)
    {
        freq[i] = -1;
    }
    for(i = 0; i < size; i++)
    {
        count = 1;
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("Frequency of each element:\n");
    for(i = 0; i < size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 1, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    count1(arr, size);

    return 0;
}
