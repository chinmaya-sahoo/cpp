def find_index(Str, ch):
    for i in range(len(Str)):
        if Str[i] == ch:
            return i
    return -1  # This line is technically not needed due to constraints

# Read input
Str = input().strip()
ch = input().strip()

# Find the index of the first occurrence of ch in Str
index = find_index(Str, ch)

# Print the result
print(index)