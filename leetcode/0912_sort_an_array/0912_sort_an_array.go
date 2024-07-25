// method1: merge sort
func sortArray(nums []int) []int {
	buff := make([]int, len(nums))
	mergeSort(nums, 0, len(nums)-1, buff)
	return nums
}

func merge(A []int, start int, mid int, end int, buff []int) {
	left, right := start, mid+1
	s := end - start + 1
	for i := 0; i < s; i++ {
		i0 := start + i
		if left > mid {
			buff[i0] = A[right]
			right++
		} else if right > end {
			buff[i0] = A[left]
			left++
		} else if A[left] < A[right] {
			buff[i0] = A[left]
			left++
		} else {
			buff[i0] = A[right]
			right++
		}
	}
	for i := start; i < start+s; i++ {
		A[i] = buff[i]
	}
}

func mergeSort(A []int, start int, end int, buff []int) {
	if end <= start {
		return
	}
	mid := start + (end-start)/2
	mergeSort(A, start, mid, buff)
	mergeSort(A, mid+1, end, buff)
	merge(A, start, mid, end, buff)
}

// method2: counting sort
func sortArray(nums []int) []int {
	min, max := nums[0], nums[0]
	for _, num := range nums {
		if num < min {
			min = num
		}
		if num > max {
			max = num
		}
	}
	counts := make([]int, max-min+1)
	for _, num := range nums {
		counts[num-min]++
	}
	for i := 1; i < len(counts); i++ {
		counts[i] += counts[i-1]
	}
	sorted := make([]int, len(nums))
	for i := len(nums) - 1; i >= 0; i-- {
		sorted[counts[nums[i]-min]-1] = nums[i]
		counts[nums[i]-min]--
	}
	return sorted
}

// method3 (TLE): quick sort
func sortArray(nums []int) []int {
	quickSort(nums, 0, len(nums)-1)
	return nums
}

func quickSort(nums []int, start, end int) {
	if start >= end {
		return
	}
	pivot := nums[start]
	left, right := start, end
	for left < right {
		for left < right && nums[right] >= pivot {
			right--
		}
		nums[left] = nums[right]
		for left < right && nums[left] <= pivot {
			left++
		}
		nums[right] = nums[left]
	}
	nums[left] = pivot
	quickSort(nums, start, left-1)
	quickSort(nums, left+1, end)
}

// method4: radix sort
func sortArray(nums []int) []int {
	const xmin = -5 * 1e4
	bucket := [64][]int{}
	radixSort(nums, bucket, xmin)
	return nums
}

func radixSort(nums []int, bucket [64][]int, xmin int) {
	for i := range nums {
		nums[i] -= xmin
		bucket[nums[i]&63] = append(bucket[nums[i]&63], nums[i])
	}

	i := 0
	for _, b := range bucket {
		for _, v := range b {
			nums[i] = v
			i++
		}
	}

	for i := range bucket {
		bucket[i] = bucket[i][:0]
	}

	for i := range nums {
		bucket[nums[i]>>6&63] = append(bucket[nums[i]>>6&63], nums[i])
	}

	i = 0

	for _, b := range bucket {
		for _, v := range b {
			nums[i] = v
			i++
		}
	}

	for i := range bucket {
		bucket[i] = bucket[i][:0]
	}

	for i := range nums {
		bucket[nums[i]>>12] = append(bucket[nums[i]>>12], nums[i])
	}

	i = 0

	for _, b := range bucket {
		for _, v := range b {
			nums[i] = v + xmin
			i++
		}
	}

}

// method5: heap sort
func sortArray(nums []int) []int {
	heapSort(nums)
	return nums
}

func heapSort(nums []int) {
	n := len(nums)
	for i := n/2 - 1; i >= 0; i-- {
		heapify(nums, n, i)
	}
	for i := n - 1; i > 0; i-- {
		nums[0], nums[i] = nums[i], nums[0]
		heapify(nums, i, 0)
	}
}

func heapify(nums []int, n, i int) {
	largest := i
	left, right := 2*i+1, 2*i+2
	if left < n && nums[left] > nums[largest] {
		largest = left
	}
	if right < n && nums[right] > nums[largest] {
		largest = right
	}
	if largest != i {
		nums[i], nums[largest] = nums[largest], nums[i]
		heapify(nums, n, largest)
	}
}

