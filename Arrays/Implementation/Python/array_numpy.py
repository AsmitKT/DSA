import numpy as np

def main():
    arr = np.array([1, 2, 3, 4, 5])
    arr = np.append(arr, 6)
    print(*arr)
    print("Size:", arr.size)
    print("First:", arr[0], "Last:", arr[-1])

if __name__ == "__main__":
    main()
import numpy as np

def main():
    arr = np.array([1, 2, 3, 4, 5])
    for val in arr:
        print(val, end=" ")
    print()
    arr[2] = 10
    for val in arr:
        print(val, end=" ")
    print()
    print(arr.size)
    print(arr[0])
    print(arr[-1])
    arr = np.full(5, 7)
    for val in arr:
        print(val, end=" ")
    print()

if __name__ == "__main__":
    main()
