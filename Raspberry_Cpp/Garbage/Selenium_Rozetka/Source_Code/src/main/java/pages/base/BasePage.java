package pages.base;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class BasePage {

    public WebDriver driver;

    public BasePage(WebDriver driver) {
        this.driver = driver;
    }

    /**
     * A method for navigating to a specific URL
     */
    public void goToURL(String URL) {
        driver.get(URL);
    }

    /**
     * A method that cleans the element of the text and enters the desired text
     * @param element Selenium WebElement
     * @param value   text
     */
    protected void clearAndType(WebElement element, String value) {
        while (!element.getAttribute("value").equals("")) element.sendKeys(Keys.BACK_SPACE);
        element.sendKeys(value);
    }

}
