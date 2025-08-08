def bucket_sort(arr):
    if not arr:
        return arr
    min_val = min(arr)
    max_val = max(arr)
    bucket_count = len(arr)
    buckets = [[] for _ in range(bucket_count)]
    for num in arr:
        index = int((num - min_val) / (max_val - min_val + 1) * bucket_count)
        buckets[index].append(num)
    arr.clear()
    for bucket in buckets:
        arr.extend(sorted(bucket))
    return arr

if __name__ == "__main__":
    arr = [0.42, 4.21, 1.23, 0.12, 2.34, 3.14, 2.71]
    print("Original array:", arr)
    bucket_sort(arr)
    print("Sorted array:", arr)
