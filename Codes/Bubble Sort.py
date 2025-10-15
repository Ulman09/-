def bubble_sort_new(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break

# Тест
data = [55, 23, 8, 41, 14, 99]
print("До сортировки:", data)
bubble_sort_new(data)
print("После сортировки:", data)
