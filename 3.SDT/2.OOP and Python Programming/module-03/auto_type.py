import pyautogui
from time import sleep

sleep(5)
for i in range(1, 3):
    pyautogui.write(f'This is a test message {i}', interval=0.25)
    pyautogui.press('enter')
