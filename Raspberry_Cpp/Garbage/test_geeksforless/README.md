Calculator ==> Проек у папці calc

========================================

Пунк 1 реализовано

Пунк 2 превірає лише зачинені дужки ")" ці дужки ( після виразу не перевіряє

Пунк 3 це працює криво

========================================

syntax ( X + X ) 

input: ( 4 + 5 )

res: 9.0

Process finished with exit code 0

========================================

Пунк 4 не реалізовано

==> Проек у папці Docker_MySQL_Testing

Пунк 5 нажаль досвіду недостаньо скоріше часу в неділю недостаньо для реалізації

Але я колись писав Авттести на Селеніум на своєму проєкті для тестування Mysql тож може ви приймете мої відповіді

Базу у контейнері можна запустити файлом Docker_MySQL_Container/run_DOCKER.sh

Сама структура БД тут знаходиться Docker_MySQL_Container/documentation/BD.jpg

Суть тесту була створити запит у БД потім Аптейд зробити та видалити

На картинці тут у папці (result.png) видно які тести я робив з завдання (Тест 6 Тест 8 Тест 15)











String sqlStr = "SELECT * FROM (SELECT * FROM " + table + " ORDER BY id_product)Var1 ORDER BY id_product ASC;";

Test 6 SELECT

---------------------------------------------------------------------------------------------------------------

Table "products" contains data from base - "base" :

---------------------------------------------------------------------------------------------------------------

| id |         name         | price | count | mark |                 description                 | id_catalog |

---------------------------------------------------------------------------------------------------------------

  last 3 record "ID" .... . . . . .

  1 | Celeron 1.8  10  1595.00 | 3.6 | CPU Celeron 1.8GHz, 128kb, 478-PGA, 400Mhz, OEM 0.18 | 1

  2 | Celeron 2.0GHz  2  1969.00 | 3.7 | CPU Celeron 2.0GHz, 128KB, 478-PGA, 400MHz, OEM  | 1

  3 | Celeron 2.4GHz  4  2109.00 | 3.9 | CPU CeleronR 2.4GHz, 128kb, 478-PGA, 400Mhz, OEM  | 1

......

  30 | DDR-400 512MB Hynix  8  1717.00 | 4.5 | RAM DDR-400 512MB Hynix  | 5














String query = "UPDATE " + table + " SET name = 'UpDate', " +

                    "price = '6543.00', " +

                    "count = '12', " +

                    "mark = '1.2', " +

                    "description = 'UpDate description', " +

                    "id_catalog = '2' " +

                    "WHERE id_product = " + idrecout + ";";

Test 8 UPDATE

---------------------------------------------------------------------------------------------------------------

UPDATE Record <ID> = 75 -> OK 

Update statement Done!
















String query = "SELECT * FROM products WHERE id_product = 1";

if (1595.00 == i2)

{

     System.out.print("equal " + price + " = 1595.00");

}

else

{

    System.out.print("not equal " + price + " != 1595.00");

}



Test 15 SELECT 

---------------------------------------------------------------------------------------------------------------

equal 1595.00 = 1595.00

===============================================

Default Suite

Total tests run: 6, Failures: 0, Skips: 0

===============================================

Process finished with exit code 0
