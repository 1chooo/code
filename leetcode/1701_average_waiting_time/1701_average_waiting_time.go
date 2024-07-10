func averageWaitingTime(customers [][]int) float64 {
	wait := 0
	var t int
	for _, c := range customers {
		t = max(t, c[0]) + c[1]
		wait += t - c[0]
	}
	return float64(wait) / float64(len(customers))
}


func averageWaitingTime(customers [][]int) float64 {
	wait := 0
	var t int
    for i := 0; i < len(customers); i++ {
        c := customers[i]
        t = max(t, c[0]) + c[1]
        wait += t - c[0]
    }
	return float64(wait) / float64(len(customers))
}

