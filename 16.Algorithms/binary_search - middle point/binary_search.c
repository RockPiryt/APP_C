// Binary Search Algorithm

#include <stdio.h>

int binary_search(int array[], int x, int l, int r);

int main()
{
    int sorted_array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int index = binary_search(sorted_array, 11, 0, 14);//0 start index, 14 end index
    printf("index of 11: %d\n", index);

    return 0;
}

int binary_search(int array[], int x, int l, int r)
{
  // Index of middle point
  int mid = l + (r - l) / 2;
  
  // When we search all array and didn't find x
  if (l > r) return -1;
  
  //Check the indexes in array
  if (array[mid] == x) //middle point=x
    return mid;
  else if (array[mid] > x)// x in left side of middle point
    return binary_search(array, x, l, mid - 1);
  else// x in right side of middle point
    return binary_search(array, x, mid + 1, r);
}