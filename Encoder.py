def string_to_binary_6bit(input_string):
    # Convert each character to a 6-bit binary representation
    binary_6bit = ''.join(format(ord(char), '06b') for char in input_string)
    return binary_6bit

def process_binary(binary_string):
    # Split the binary string into groups of 6 bits
    groups = [binary_string[i:i+6] for i in range(0, len(binary_string), 6)]
    
    # Remove the first bit of each group and join the remaining bits together
    modified_binary = ''.join(group[1:] for group in groups)
    return modified_binary

def xor_with_key(binary_str, key):
     # Convert the key to an 8-bit binary string
    xor_value = format(key, '08b')
    result = []

    # Split the binary string into 8-bit blocks
    for i in range(0, len(binary_str), 8):
        # Take an 8-bit block
        block = binary_str[i:i + 8]
        # Perform XOR operation between the block and the key
        xor_result = format(int(block, 2) ^ int(xor_value, 2), '08b')
        result.append(xor_result)

    # Join the XOR results together into a final binary string
    return ''.join(result)

def binary_to_string(binary_str):
    # Convert the binary string back to a regular string
    return ''.join(chr(int(binary_str[i:i+8], 2)) for i in range(0, len(binary_str), 8))

# Take input string and key from the user
input_string = input("string = ")
key = int(input("key = "))

# Step 1: Convert the input string to a 6-bit binary representation
binary_string = string_to_binary_6bit(input_string)
    
# Step 2: Remove the first bit from each 6-bit group
modified_binary = process_binary(binary_string)
    
# Step 3: XOR the modified binary with the given key
final_result = xor_with_key(modified_binary, key)

# Convert the final result back to a string and print it
print(binary_to_string(final_result))
