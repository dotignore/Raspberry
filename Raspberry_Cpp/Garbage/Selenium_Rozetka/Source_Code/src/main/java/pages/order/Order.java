package pages.order;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import pages.base.BasePage;

public class Order extends BasePage {

    public Order(WebDriver driver) {
        super(driver);
    }

    private final By inputSearchMonitor = By.xpath("//input[@name='search']");
    private final By buttonSubmitMonitor = By.xpath("//button[@class='button button_color_green button_size_medium search-form__submit ng-star-inserted']");
    private final By addMonitorToCart = By.xpath("//app-buy-button[@goods_id='228815893']");
    private final By openCart = By.xpath("//button[@class='header__button ng-star-inserted header__button--active']");
    private final By makeOrder = By.xpath("//a[@data-testid='cart-receipt-submit-order']");
    private final By inputNameOnPageOrder = By.xpath("//input[@formcontrolname='surname']");
    private final By inputSrNameOnPageOrder= By.xpath("//input[@formcontrolname='name']");
    private final By inputPhoneOnPageOrder= By.xpath("//input[@id='checkoutUserPhone']");
    private final By choose1UserDelivery = By.xpath("//button[@class='select-css select-css--medium']");
    private final By choose2UserDelivery = By.xpath("//*[contains(text(),'Фамилия  Имя')]");
    private final By clickApprouveOrder = By.xpath("//input[@type='submit']");

// ==========================

    /**
     * findElement. Ищем монитор MonitorDell
     */
    public Order searchFormInput(String monitor){
        WebElement monitorModel = driver.findElement(inputSearchMonitor);
        clearAndType(monitorModel, monitor);
        System.out.println("Input text to field Search - [OK]");
        return this;
    }

// ==========================

    /**
     * Click по кнопке SEARCH чтоб отправить запрос
     */
    public Order submitFormToSearch(){
        driver.findElement(buttonSubmitMonitor).click();
        System.out.println("Click Search Key- [OK]");
        return this;
    }

// ==========================

    /**
     * Click на найденом товаре в результате поиска
     */
    public Order addMonitorToCart(){
        driver.findElement(addMonitorToCart).click();
        System.out.println("Click on Find monitor - [OK]");
        return this;
    }

// ==========================

    /**
     * Click on Cart right up on the conrner
     */
    public Order openCart(){
        driver.findElement(openCart).click();
        System.out.println("Click on Cart right up on the conrner - [OK]");
        return this;
    }

// ==========================

    /**
     *
     */
    public Order makeOrder(){
        driver.findElement(makeOrder).click();
        System.out.println("Click on open Window with Order/Cart - [OK]");
        return this;
    }

// ==========================

    /**
     * Input Name
     */
    public Order inputNameOnPage(String name){
        WebElement nameUser = driver.findElement(inputNameOnPageOrder);
        clearAndType(nameUser, name);
        System.out.println("Input Name to field - [OK]");
        return this;
    }

// ==========================

    /**
     * Input SrName
     */
    public Order inputSrNameOnPage(String srname){
        WebElement nameSrUser = driver.findElement(inputSrNameOnPageOrder);
        clearAndType(nameSrUser, srname);
        System.out.println("Input SrName to field - [OK]");
        return this;
    }

// ==========================

    /**
     * Input PhoneNumber
     */
   public Order inputPhoneOnPage(String phone){
        driver.findElement(inputPhoneOnPageOrder).click();
        driver.findElement(inputPhoneOnPageOrder).sendKeys(phone);
            System.out.println("Input Phone Number to field - [OK]");
        return this;
    }

// ==========================

    /**
     *  Choose delivery User Contact
     */
    public Order choose1DeliveryUserOrder(){
        driver.findElement(choose1UserDelivery).click();
        System.out.println("Click 1 Delivery User by Order - [OK]");
        return this;
    }

    public Order choose2DeliveryUserOrder(){
        driver.findElement(choose2UserDelivery).click();
        System.out.println("Click 2 Delivery User by Order - [OK]");
        return this;
    }

// ==========================

    /**
     *  Click Approuve Order
     */
    public Order approuveOrder(){
        driver.findElement(clickApprouveOrder).click();
            System.out.println("Click Approuve Order - [OK]");
        return this;
    }

}