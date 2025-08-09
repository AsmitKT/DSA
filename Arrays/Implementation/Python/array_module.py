import array

def main():
    arr = array.array('i', [1, 2, 3, 4, 5])
    arr.append(6)
    print(*arr)
    print("Size:", len(arr))
    print("First:", arr[0], "Last:", arr[-1])

if __name__ == "__main__":
    main()
import array

def main():
    arr = array.array('i', [1, 2, 3, 4, 5])
    for val in arr:
        print(val, end=" ")
    print()
    arr[2] = 10
    for val in arr:
        print(val, end=" ")
    print()
    print(len(arr))
    print(arr[0])
    print(arr[-1])
    arr = array.array('i', [7] * 5)
    for val in arr:
        print(val, end=" ")
    print()

if __name__ == "__main__":
    main()
