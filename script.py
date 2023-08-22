import pyautogui
import time

def main():
    print("Enter the text you want to type (use Ctrl+D or Ctrl+Z to finish input):")
    lines = []
    try:
        while True:
            line = input()
            lines.append(line)
    except EOFError:
        pass

    print("Switch to the application/window where you want to type.")
    print("You have 5 seconds to focus on the application...")
    time.sleep(5)

    for line in lines:
        pyautogui.typewrite(line)
        pyautogui.press('enter')

if __name__ == "__main__":
    main()
