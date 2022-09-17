# https://iceland.kattis.com/problems/iceland.takkar

button_trump = int(input()) # size of Donald Trumps's button
button_ung = int(input()) # size of Kim Jong-Ung's button

if button_trump > button_ung: print("MAGA!")
elif button_trump < button_ung: print("FAKE NEWS!")
elif button_trump == button_ung: print("WORLD WAR 3!")
else: print("some exceptional input happened")