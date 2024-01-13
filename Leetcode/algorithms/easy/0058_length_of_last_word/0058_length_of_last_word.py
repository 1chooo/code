class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # Split the string by spaces and filter out empty strings
        words = s.split()
        
        # Check if there are any words after splitting
        if words:
            # Get the length of the last word in the list
            return len(words[-1])
        else:
            return 0  # If no words found, return 0
