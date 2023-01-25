#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'reverse_words_order_and_swap_cases' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING sentence as parameter.
#

def reverse_words_order_and_swap_cases(sentence):
    # Write your code here

    word_list = sentence.split(" ")
    reversed_list = word_list[:: -1]
    reversed_sentence = " ".join(reversed_list)     # to make the new str

    reversed_sentence = reversed_sentence.swapcase()

    return reversed_sentence


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    sentence = input()
    result = reverse_words_order_and_swap_cases(sentence)

    fptr.write(result + '\n')
    
    fptr.close()