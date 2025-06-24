from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys

driver = webdriver.Chrome()
driver.get("https://www.google.de/")
driver.find_element(By.ID, "W0wltc").click()
driver.find_element(By.ID, "APjFqb").send_keys("test" + Keys.ENTER)
input()