#include <iostream>
using namespace std;

int main () {

int arr[] = {10,30,50,20,40,70};
int n = sizeof(arr) / sizeof(arr[0]);
quickSort(arr, 0, n - 1);
cout<<"Sorted array: \n";
printArray(arr,n);
return 0;


}


void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

int paritition = (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low -1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return (i + 1);

