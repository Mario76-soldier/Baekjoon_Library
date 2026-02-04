#include <iostream>
using namespace std;

int arr[1000001];

void merge(int first, int mid, int last)
{
	int sorted[1000001];
	int i, j, k;
	i = first;
	j = mid + 1;
	k = 0;

	while (i <= mid && j <= last)
	{
		if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}

	if (i > mid) 
		while (j <= last) sorted[k++] = arr[j++];
	else
		while (i <= mid) sorted[k++] = arr[i++];

	for (i = first, k = 0; i <= last; i++, k++) arr[i] = sorted[k];
}

void mergeSort(int first, int last)
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergeSort(first, mid);
		mergeSort(mid + 1, last);
		merge(first, mid, last);
	}
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
}