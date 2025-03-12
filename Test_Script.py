from selenium import webdriver  # Contains classes and methods for controlling the browser.
from selenium.webdriver.common.by import By  # Provides strategies to locate elements, such as by ID, name
from selenium.webdriver.common.keys import Keys # Provides keyboard interactions, such as pressing Enter 
import time

# Test Script
def test_login(): #create user defined function
    # Setup
    driver = webdriver.Chrome() #opening chrome
    driver.get("C:/Users/uttam/OneDrive/Desktop/M.tech/Software Engineering/index.html") #path of html file
    try:
        # Steps
        driver.find_element(By.ID, "username").send_keys("Bobby") 
        driver.find_element(By.ID, "password").send_keys("Test@123")
        driver.find_element(By.ID, "loginButton").click()
        time.sleep(2)  # Wait for the page to load
        # Expected Outcome Verification
        welcome_message = driver.find_element(By.ID, "welcomeMessage").text
        assert "Welcome, Bobby!" in welcome_message
        print("Test Passed!")
    except AssertionError:
        print("Test Failed: Welcome message not found.")
    except Exception as e:
        print(f"Test Failed: {e}")
    finally:
        # Cleanup
        driver.quit()
# Run Test
test_login()
