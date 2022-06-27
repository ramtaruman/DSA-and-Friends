def findsmallest(arr):  # function to find the smallest element's position
    smallest = arr[0]
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index


# sorts the array by  creating an empty copy and filling with the smallest first
def selection_sort(arr):
    newarr = []
    for i in range(len(arr)):
        smallest = findsmallest(arr)
        newarr.append(arr.pop(smallest))
    return newarr


print(selection_sort([5, 3, 2, 7, 12]))
