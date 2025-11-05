def power(x, n):
    if n == 0:
        return 1
    if n < 0:
        return 1 / power(x, -n)
    if n % 2 == 0:
        half = power(x, n // 2)
        return half * half
    else:
        return x * power(x, n - 1)

if __name__ == "__main__":
    base = 2
    exp = 5
    result = power(base, exp)
    print(f"{base}^{exp} = {result}")
    
    base = 3
    exp = -2
    result = power(base, exp)
    print(f"{base}^{exp} = {result}")
