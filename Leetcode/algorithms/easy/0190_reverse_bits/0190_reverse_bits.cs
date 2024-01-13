public class Solution {
    public uint reverseBits(uint n) {
        uint result = 0;
        for (int i = 0; i < 32; i++) {
            result = (result << 1) | (n & 1); // Shift result to the left and add the least significant bit of n
            n >>= 1; // Shift n to the right
        }
        return result;
    }
}
