int compare_arrays(int arr1[], int arr2[], int size)
{
int i = 0;

for (i = 0; i < size; ++i)
{
if (arr1[i] != arr2[i])
return 0;
}
return 1;
}