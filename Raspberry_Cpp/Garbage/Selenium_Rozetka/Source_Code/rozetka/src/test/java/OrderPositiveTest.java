import common.CommonActions;
import org.junit.jupiter.api.Test;
import org.openqa.selenium.WebDriver;
import pages.order.Order;
import pages.base.BasePage;

import static constants.Constants.DOMAINS_URL.ROZETKA_ORDER_WITHOUT_LOGIN_URL;
import static constants.Constants.TestDataForMonitorWithoutLogin.*;

public class OrderPositiveTest  {
    protected CommonActions commonActions = CommonActions.getInstance();
    protected WebDriver driver = commonActions.driver;
    protected BasePage basePage = new BasePage(driver);
    protected pages.order.Order OrderReplenishment = new Order(driver);

    @Test
    void check() {
        basePage.goToURL(ROZETKA_ORDER_WITHOUT_LOGIN_URL);
        System.out.println("============================== \n" +
                           "| Run test case Create Order | \n" +
                           "| Without Login to site      | \n" +
                           "==============================");
        OrderReplenishment
            .searchFormInput(MonitorDell)   // .findElement
            .submitFormToSearch()           // .click
            .addMonitorToCart()             // .click
            .openCart()                     // .click
            .makeOrder()                    // .click
            .inputNameOnPage(Name)          // .findElement
            .inputSrNameOnPage(SrName)      // .findElement
            .inputPhoneOnPage(Phone)        // .click + .sendKeys
            .choose1DeliveryUserOrder()     // .click
            .choose2DeliveryUserOrder()     // .click
            .approuveOrder();               // .click
    }


}
