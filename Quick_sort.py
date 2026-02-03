def quick_sort(arr):
    if len(arr) < 1:
        return arr
    
    pivot = arr[-1]
    left = []
    right = []

    for i in arr[:-1]:
        if i < pivot:
            left.append(i)
        else:
            right.append(i)

    return quick_sort(left) + [pivot] + quick_sort(right)


arr = [10,2,5,8,6,1,5]
print(quick_sort(arr))