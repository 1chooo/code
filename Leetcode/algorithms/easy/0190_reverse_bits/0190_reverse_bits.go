func reverseBits(num uint32) uint32 {
    var result uint32 = 0
    var i uint = 0
    
    for i < 32 {
        result = (result << 1) | (num & 1) // Shift result to the left and add the least significant bit of num
        num >>= 1 // Shift num to the right
        i++
    }
    
    return result
}
