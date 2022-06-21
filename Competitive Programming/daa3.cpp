// find kth smallest and largest element in O(n) time

#include <stdio.h>

void merge(int a[], int l, int mid, int h)
{
	int i = l, j = mid + 1;
	int b[20], k = l;
	while (i <= mid && j <= h)
	{
		if (a[i] < a[j])
		{
			b[k++] = a[i++];
		}
		else
		{
			b[k++] = a[j++];
		}
	}

	while (i <= mid)
	{
		b[k++] = a[i++];
	}
	while (j <= h)
	{
		b[k++] = a[j++];
	}

	// copying back
	for (i = l; i <= h; i++)
	{
		a[i] = b[i];
	}
}

void merge_sort(int a[], int l, int h)
{
	int mid = 0;

	if (l < h)
	{
		mid = (l + h) / 2;
		merge_sort(a, l, mid);
		merge_sort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}

void print_array(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[] = {5, 4, 3, 2, 1, 8, 7, 0};
	int n = sizeof(a) / sizeof(a[0]);

	merge_sort(a, 0, n);
	print_array(a, n);
	return 0;
}