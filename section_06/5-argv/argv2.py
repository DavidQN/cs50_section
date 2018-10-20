import sys

# To better understand this, look at the file not_argv.py
for s in sys.argv:
    for c in s:
        print(c)
    print()
