func minSwaps(nums []int) int {
    onesCount := 0
	for _, num := range nums {
		if num == 1 {
			onesCount++
		}
	}

	if onesCount == 0 || onesCount == len(nums) {
		return 0
	}

	zeroCount := 0
	j := 0
	for j = 0; j < onesCount; j++ {
		if nums[j] == 0 {
			zeroCount++
		}
	}

	minSwap := zeroCount
	for i := 0; i < len(nums); i++ {
		if nums[j] == 0 {
			zeroCount++
		}
		if nums[i] == 0 {
			zeroCount--
		}
		if zeroCount < minSwap {
			minSwap = zeroCount
		}
		j = (j + 1) % len(nums)
	}

	return minSwap
}


func minSwaps(nums []int) int {
    n := len(nums)
    totalOnes := 0
    
    // Count total number of 1's
    for _, num := range nums {
        totalOnes += num
    }
    
    // Edge cases
    if totalOnes == 0 || totalOnes == n {
        return 0
    }
    
    currentOnes := 0
    
    // Count 1's in the first window of size totalOnes
    for i := 0; i < totalOnes; i++ {
        currentOnes += nums[i]
    }
    
    maxOnes := currentOnes
    
    // Use two pointers to slide the window
    for i := 0; i < n; i++ {
        currentOnes -= nums[i]
        currentOnes += nums[(i + totalOnes) % n]
        if currentOnes > maxOnes {
            maxOnes = currentOnes
        }
    }
    
    return totalOnes - maxOnes
}