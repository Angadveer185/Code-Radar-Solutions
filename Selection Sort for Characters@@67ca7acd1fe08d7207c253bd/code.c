void selectionSort(char arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int smallidx = i; //Takes current index (0, 1, 2...)
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[smallidx]) // checks smallest number
            {
                smallidx = j;
            }
        }
        if (smallidx != i)
        {
        int temp = arr[i];              //swaps smallest number with current index
        arr[i] = arr[smallidx];
        arr[smallidx] = temp;
        }
    }
}

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}