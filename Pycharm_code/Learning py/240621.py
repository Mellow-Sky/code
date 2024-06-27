# list = [4, 7, 2, 9, 1, 5, 8, 3, 6, 4, 7, 2, 9, 1, 5, 8, 3, 6, 4, 7, 2, 9, 1, 5, 8, 3, 6]
# set = set(list)
# print(set)

import tkinter as tk

def on_button_click():
    label.config(text="Hello, Tkinter!")

root = tk.Tk()
root.title("Simple GUI")

label = tk.Label(root, text="Welcome!")
label.pack()

button = tk.Button(root, text="Click Me", command=on_button_click)
button.pack()

root.mainloop()
