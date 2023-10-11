#!/usr/bin/python3

def roman_to_int(romanian_string):
    rome = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    if (romanian_string is None) or (type(romanian_string) is not str):
        return 0

    num = len(romanian_string)
    int_value = rome[romanian_string[num-1]]
    for i in range(num - 1, 0, -1):
        current_value = rome[romanian_string[i]]
        prev_val = rome[romanian_string[i-1]]

        if prev_val >= current_value:
            int_value += prev_val
        else:
            int_value -= prev_val

    return int_value
