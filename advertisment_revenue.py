def max_dot_product(a, b):
    #write your code here
    res = 0
    for i in range(len(a)):
        res += max(a)*max(b)
        a.remove(max(a))
        b.remove(max(b))
    return res

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    print(max_dot_product(a, b))