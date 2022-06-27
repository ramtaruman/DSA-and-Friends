def binary_search(list, item):
    low = 0
    high = len(list)-1

    while low <= high:
        mid = low+high
        guess = list[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid-1
        else:
            low = mid+1
    return None


def binary_recursion(list, item, low, high):

    if low > high:
        return -1
    mid = int((low+high)/2)

    guess = list[mid]

    if guess == item:
        return mid
    if guess > item:
        return binary_recursion(list, item, low, mid-1)
    else:
        return binary_recursion(list, item, mid+1, high)


ls = [1, 3, 5, 7, 8]

print(binary_recursion(ls, 3, 0, len(ls)-1)+1)
