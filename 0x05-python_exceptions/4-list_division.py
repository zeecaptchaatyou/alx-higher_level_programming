#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    new_list = []
    for i in range(list_length):
        try:
            result = my_list_1[i] / my_list_2[i]
        except (TypeError):
            print("wrong type")
            result = 0
        except (ZeroDivisionError):
            print("division by 0")
            result = 0
        except (IndexError):
            print("out of range")
            result = 0
        finally:
            new_list.append(result)
    return (new_list)
0-safe_print_list.py 1-safe_print_integer.py 2-safe_print_list_integers.py 3-safe_print_division.py 4-list_division.py 5-raise_exception.py 6-raise_exception_msg.py 100-safe_print_integer_err.py 101-safe_function.py 102-magic_calculation.py 103-python.c