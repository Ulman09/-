def quick_sort_new(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort_new(left) + middle + quick_sort_new(right)

# Тест
data = [67, 22, 8, 91, 15, 43]
print("До сортировки:", data)
result = quick_sort_new(data)
print("После сортировки:", result)
