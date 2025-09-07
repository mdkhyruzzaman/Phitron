import pyautogui

n = int(input())

for i in range(n):
    pyautogui.write('#'*(i+1), interval=0.25)
    pyautogui.press('enter')

