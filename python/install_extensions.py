import pyautogui
import time

def install_exe(exe):
    pyautogui.typewrite(exe)
    pyautogui.hotkey('enter')
    time.sleep(10)
    pyautogui.click(332, 204)
    time.sleep(1)
    pyautogui.click(322, 66)



pyautogui.hotkey('win')
time.sleep(2)
pyautogui.write('visual Studio Code')
pyautogui.hotkey('enter')
time.sleep(5)
pyautogui.hotkey('win', 'up')
time.sleep(1)
pyautogui.hotkey('ctrl' ,'shift' , 'x')
time.sleep(3)

install_exe("clangd")
install_exe("C++ TestMate")
install_exe("C++ Helper")
install_exe("CMake")
install_exe("CMake Tools")



