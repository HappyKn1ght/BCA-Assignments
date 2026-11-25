# Program 8. Write a list function to convert a string into a list, as in list (‗abc‘) gives [a, b, c]. 

def string_to_list(text):
    result = []

    for char in text:
        result.append(char)
        
    return result

text = input("Enter a string: ")
print(string_to_list(text))