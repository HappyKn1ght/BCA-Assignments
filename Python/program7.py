# Program 7. Write a function that takes a string input and checks if it‘s a palindrome or not. 

# def is_palindrome(): without parameter
    
#     text = input("Enter text or word: ").lower().replace(" ", "")

#     reversed_text = text[::-1]
#     # print(reversed_text)
#     if reversed_text == text:
#         print("it's palindrome")
#     else:
#         print("it's not palindrome")

# is_palindrome()

def is_palindrome(text):

    reversed_text = text[::-1]
    # print(reversed_text)
    if reversed_text == text:
        print("it's palindrome")
    else:
        print("it's not palindrome")

text = input("Enter text or word: ").lower().replace(" ", "")
is_palindrome(text)