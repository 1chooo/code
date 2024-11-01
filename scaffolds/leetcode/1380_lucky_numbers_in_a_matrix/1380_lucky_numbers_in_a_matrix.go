func luckyNumbers(matrix [][]int) []int {
    N, M := len(matrix), len(matrix[0])
    rowMin := make([]int, N)
    for i := 0; i < N; i++ {
        rMin := math.MaxInt32
        for j := 0; j < M; j++ {
            rMin = min(rMin, matrix[i][j])
        }
        rowMin[i] = rMin
    }
    
    colMax := make([]int, M)
    for i := 0; i < M; i++ {
        cMax := math.MinInt32
        for j := 0; j < N; j++ {
            cMax = max(cMax, matrix[j][i])
        }
        colMax[i] = cMax
    }
    
    luckyNumbers := []int{}
    for i := 0; i < N; i++ {
        for j := 0; j < M; j++ {
            if matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j] {
                luckyNumbers = append(luckyNumbers, matrix[i][j])
            }
        }
    }
    
    return luckyNumbers
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}