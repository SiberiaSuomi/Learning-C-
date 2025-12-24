import hashlib

text = input("Enter text: ")
h = hashlib.sha256(text.encode()).hexdigest()
b = hashlib.sha256(h.encode()).hexdigest()
print("SHA-256:", b)

