/*Nama  : Jasmine Sarah Maqnolia*/
/*NIM   : 20051397078*/
/*Kelas : 2020B*/
/*Prodi : Manajemen Informatika*/

#include <iostream>
using namespace std;

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
}

void merge(int *array, int low, int mid, int high)
{
    int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= high)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + low] = temp[k];
        k--;
    }
}

void mergeSort(int *array, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, low, mid, high);
    }
}

int main()
{
    int array[] = {9,1,2,5,6,4};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "Sebelum di Urutkan Merge Sort : \n" ;
    printArray(array, n);

    mergeSort(array, 0, n - 1);

    cout << "\n Sesudah di Urutkan Merge Sort : \n" ;
    printArray(array, n);
    return (0);
}
