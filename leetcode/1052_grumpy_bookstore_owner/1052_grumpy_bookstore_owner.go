package main

import (
	"fmt"
)

func maxSatisfied(customers []int, grumpy []int, minutes int) int {
	baseSatisfied        := 0
	satisfiedWithTech    := 0
	maxSatisfiedWithTech := 0

	for i := 0; i < len(customers); i++ {
		if grumpy[i] == 1 {
			satisfiedWithTech += customers[i]
		} else {
			baseSatisfied += customers[i]
		}

		if i >= minutes && grumpy[i-minutes] == 1 {
			satisfiedWithTech -= customers[i-minutes] // because not grumpy for minutes consecutive minutes
		}

		if satisfiedWithTech > maxSatisfiedWithTech {
			maxSatisfiedWithTech = satisfiedWithTech
		}
	}

	return baseSatisfied + maxSatisfiedWithTech
}

func main() {
	customers := []int{1, 0, 1, 2, 1, 1, 7, 5}
	grumpy    := []int{0, 1, 0, 1, 0, 1, 0, 1}
	minutes   := 3
	fmt.Println(maxSatisfied(customers, grumpy, minutes)) // 16
}
