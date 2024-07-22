// method 1 with sort.Sort()
func sortPeople(names []string, heights []int) []string {
    n := len(names)
	mapping := make(map[int]string)

	for i := 0; i < n; i++ {
		mapping[heights[i]] = names[i]
	}

	sort.Sort(sort.Reverse(sort.IntSlice(heights)))

	for i := 0; i < n; i++ {
		names[i] = mapping[heights[i]]
	}

	return names
}


package main

import (
	"fmt"
)


// method 2 with quicksort
func partition(arr []int, low, high int) int {
	pivot := arr[high]
	i := low - 1
	for j := low; j < high; j++ {
		if arr[j] > pivot {
			i++
			arr[i], arr[j] = arr[j], arr[i]
		}
	}
	arr[i+1], arr[high] = arr[high], arr[i+1]
	return i + 1
}

func quicksort(arr []int, low, high int) {
	if low < high {
		pi := partition(arr, low, high)
		quicksort(arr, low, pi-1)
		quicksort(arr, pi+1, high)
	}
}

func sortPeople(names []string, heights []int) []string {
	n := len(names)
	mapping := make(map[int]string)

	for i := 0; i < n; i++ {
		mapping[heights[i]] = names[i]
	}

	quicksort(heights, 0, n-1)

	for i := 0; i < n; i++ {
		names[i] = mapping[heights[i]]
	}

	return names
}

// method 3 with bubble sort
func sortPeople(names []string, heights []int) []string {
	n := len(names)
	mapping := make(map[int]string)

	for i := 0; i < n; i++ {
		mapping[heights[i]] = names[i]
	}

	for i := 0; i < n; i++ {
		for j := 0; j < n-i-1; j++ {
			if heights[j] < heights[j+1] {
				heights[j], heights[j+1] = heights[j+1], heights[j]
			}
		}
	}

	for i := 0; i < n; i++ {
		names[i] = mapping[heights[i]]
	}

	return names
}


// method 4 with insertion sort
func sortPeople(names []string, heights []int) []string {
	n := len(names)
	mapping := make(map[int]string)

	for i := 0; i < n; i++ {
		mapping[heights[i]] = names[i]
	}

	for i := 1; i < n; i++ {
		key := heights[i]
		j := i - 1
		for j >= 0 && heights[j] < key {
			heights[j+1] = heights[j]
			j--
		}
		heights[j+1] = key
	}

	for i := 0; i < n; i++ {
		names[i] = mapping[heights[i]]
	}

	return names
}


// method 5 with MergeSort
func merge(arr []int, l, m, r int) {
	n1 := m - l + 1
	n2 := r - m

	L := make([]int, n1)
	R := make([]int, n2)

	for i := 0; i < n1; i++ {
		L[i] = arr[l+i]
	}

	for i := 0; i < n2; i++ {
		R[i] = arr[m+1+i]
	}

	i := 0
	j := 0
	k := l

	for i < n1 && j < n2 {
		if L[i] >= R[j] {
			arr[k] = L[i]
			i++
		} else {
			arr[k] = R[j]
			j++
		}
		k++
	}

	for i < n1 {
		arr[k] = L[i]
		i++
		k++
	}

	for j < n2 {
		arr[k] = R[j]
		j++
		k++
	}
}

func mergeSort(arr []int, l, r int) {
	if l < r {
		m := l + (r-l)/2
		mergeSort(arr, l, m)
		mergeSort(arr, m+1, r)
		merge(arr, l, m, r)
	}
}

func sortPeople(names []string, heights []int) []string {
	n := len(names)
	mapping := make(map[int]string)

	for i := 0; i < n; i++ {
		mapping[heights[i]] = names[i]
	}

	mergeSort(heights, 0, n-1)

	for i := 0; i < n; i++ {
		names[i] = mapping[heights[i]]
	}

	return names
}

// method 6 with Selection Sort
func sortPeople(names []string, heights []int) []string {
	n := len(names)
	mapping := make(map[int]string)

	for i := 0; i < n; i++ {
		mapping[heights[i]] = names[i]
	}

	for i := 0; i < n-1; i++ {
		maxIndex := i
		for j := i + 1; j < n; j++ {
			if heights[j] > heights[maxIndex] {
				maxIndex = j
			}
		}
		heights[i], heights[maxIndex] = heights[maxIndex], heights[i]
	}

	for i := 0; i < n; i++ {
		names[i] = mapping[heights[i]]
	}

	return names
}

