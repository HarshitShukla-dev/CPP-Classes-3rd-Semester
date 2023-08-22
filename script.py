import pyautogui
import time

def main():
    print("Enter the text you want to type:")
    text = input()

    print("Switch to the application/window where you want to type.")
    print("You have 5 seconds to focus on the application...")
    time.sleep(5)

    pyautogui.typewrite(text)

if __name__ == "__main__":
    main()
