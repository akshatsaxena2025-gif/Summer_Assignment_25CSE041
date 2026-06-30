#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for (int i = 0; i < n; i++)
    {
        int isDuplicate = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1)
            printf("%d ", arr[i]);
    }
    return 0;
}