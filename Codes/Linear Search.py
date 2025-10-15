def linear_search_new(arr, target):
    for i, value in enumerate(arr):
        if value == target:
            return i
    return -1

# Тест
data = [14, 3, 27, 8, 19, 52, 6]
key = 19
result = linear_search_new(data, key)
print(f"Исходный массив: {data}")
print(f"Элемент {key} найден на позиции {result}" if result != -1 else f"Элемент {key} не найден")
