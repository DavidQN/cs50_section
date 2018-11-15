


def main():
    # Create a and b
    a = open("file_one.txt", "r")
    a = a.read()

    b = open("file_two.txt", "r")
    b = b.read()

    lines(a, b)

def lines(a, b):
    # Elongated version:
    # a = a.splitlines()
    # a = set(a)
    
    # b = b.splitlines()
    # b = set(b)

    # result = a.intersection(b)

    # result = list(result)

    # print(result)


    # Pythonic
    result = list(set(a.splitlines()).intersection(set(b.splitlines())))
    print(result)


if __name__ == "__main__":
    main()