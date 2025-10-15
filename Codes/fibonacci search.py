def fibonacci_search_new(arr, x):
    n = len(arr)
    fib_m2, fib_m1 = 0, 1
    fib_m = fib_m2 + fib_m1
    while fib_m < n:
        fib_m2, fib_m1 = fib_m1, fib_m
        fib_m = fib_m2 + fib_m1

    offset = -1
    while fib_m > 1:
        i = min(offset + fib_m2, n - 1)
        if arr[i] < x:
            fib_m, fib_m1, fib_m2 = fib_m1, fib_m2, fib_m - fib_m1
            offset = i
        elif arr[i] > x:
            fib_m, fib_m1, fib_m2 = fib_m2, fib_m1 - fib_m2, fib_m - fib_m1
        else:
            return i
    if fib_m1 and offset + 1 < n and arr[offset + 1] == x:
        return offset + 1
    return -1

# Тест
data = [5, 12, 19, 26, 33, 40, 47, 54, 61, 68, 75]
key = 47
result = fibonacci_search_new(data, key)
print(f"Исходный массив: {data}")
print(f"Элемент {key} найден на позиции {result}" if result != -1 else f"Элемент {key} не найден")
