func climbStairs(n int) int {
    if n <= 2 {
        return n
    }

    prev1, prev2 := 1, 2

    for i := 3; i <= n; i++ {
        current := prev1 + prev2
        prev1 = prev2
        prev2 = current
    }

    return prev2
}


// Fibonacci: Time Limit Exceeded (TLE)
func climbStairs(n int) int {
    if n <= 2 {
        return n
    }
    return climbStairs(n - 1) + climbStairs(n - 2)
}
