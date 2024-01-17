# Vito's family	

##### Tags: `CPE10406`, `UVA10041`


### Descriptions
The world-known gangster Vito Deadstone is moving to New York. He has a very big family there, all
of them living in Lamafia Avenue. Since he will visit all his relatives very often, he is trying to find a house close to them.  
Vito wants to minimize the total distance to all of them and has blackmailed you to write a program
that solves his problem.


### Input
The input consists of several test cases. The first line contains the number of test cases.  
For each test case you will be given the integer number of relatives r (0 < r < 500) and the street numbers (also integers) s1, s2, . . . , si, . . . , sr where they live (0 < si < 30000). Note that several relatives could live in the same street number.


### Output

For each test case your program must write the minimal sum of distances from the optimal Vito’s house to each one of his relatives. The distance between two street numbers si and sj is dij = |si − sj|.


### Sample Input
2
2 2 4
3 2 4 6
### Sample Output
2
4

## Note

1. sort the input array or vector(whatever the format to store the input)
2. find the median
3. count the total value and notice to the `abs()`

### Usage

#### `QuickSort()`
```cpp
void quickSort(int arr[], int left, int right)
{
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  while (i <= j)
  {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j)
    {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  }

  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}
```

#### `sort()`

```cpp
#include <algorithm>

sort(arr, arr + arr_size);
sort(arr, arr + arr_size, std::greater<int>());
```


## References

* [C++ std::sort 排序用法與範例完整介紹](https://shengyu7697.github.io/std-sort/)