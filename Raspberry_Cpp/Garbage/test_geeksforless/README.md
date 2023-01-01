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
  4 | Celeron D 320 2.4GHz  1  1962.00 | 4.1 | CPU CeleronR D 320 2.4GHz, 256kb, 478-PGA, 533Mhz, OEM | 1
  5 | Celeron D 325 2.53GHz  6  2747.00 | 4.1 | CPU CeleronR D 325 2.53GHz, 256kb, 478-PGA, 533Mhz, OEM  | 1
  6 | Celeron D 315 2.26GHz  6  1880.00 | 4.1 | CPU CeleronR D 315 2.26GHz, 256kb, 478-PGA, 533Mhz, OEM  | 1
  7 | Intel Pentium 4 3.2GHz  5  7259.00 | 4.5 | CPU IntelR Pentium P4 3.2GHz, 1Mb, 478-PGA, 800Mhz, Hyper-Threading, OEM  | 1
  8 | Intel Pentium 4 3.0GHz  1  6147.00 | 4.6 | CPU IntelR Pentium P4 3.0GHz, 512Kb, 478-PGA, 800Mhz, Hyper-Threading, OEM  | 1
  9 | Intel Pentium 4 3.0GHz  12  5673.00 | 4.5 | CPU IntelR PentiumR4 3.0GHz, 1Mb, 478-PGA, 800Mhz, Hyper-Treading, OEM  | 1
  10 | Gigabyte GA-8I848P-RS  4  1896.00 | 3.9 | Motherboard SOCKET-478 Gigabyte GA-8I848P-RS i848, (800Mhz), DDR, AGP 8x, ATA100, SATA, Sound 6ch, USB2.0, ATX | 2
  11 | Gigabyte GA-8IG1000  2  2420.00 | 3.8 | Motherboard SOCKET-478 Gigabyte GA-8IG1000 i865g,FSB800/533/400,2chDDR400/333/266(4слота),Video,AGP,5PCI,ATA-100,S-ATA | 2
  12 | Gigabyte GA-8IPE1000G  6  2289.00 | 3.7 | Motherboard Socket-478 Gigabyte GA-8IPE1000G i865PE(800/533/400Mhz), 2ch400/333/266DDR,PCI/AGP,U-100,AC`97,Lan(1Gb), S-ATA, USB 2.0, ATX | 2
  13 | Asustek P4C800-E Delux  4  5395.00 | 4.1 | Motherboard Socket-478 Asustek P4C800-E Delux i875P, FSB800/533Mhz, 2chDDR400/333, AGP, 6PCI, iEEE1394, Raid, U-133, S-ATA, AC`97, Lan(1000), ATX | 2
  14 | Asustek P4P800-VM\L i865G  6  2518.00 | 4.0 | Motherboard Socket-478 Asustek P4P800-VM\L i865G FSB800/533/400, 2chDDR400/333/266(4слота), AGP, video, 3PCI, ATA-100, S-ATA, lan, M-ATX | 2
  15 | Epox EP-4PDA3I  5  2289.00 | 4.0 | Motherboard Socket-478 Epox EP-4PDA3I i865PE(800Mhz), 2chDDR, PCI/AGP, SATA, Lan, U-100, RAID, AC`97, LAN, ATX | 2
  16 | ASUSTEK A9600XT/TD  2  5156.00 | 4.7 | Video card ASUSTEK A9600XT/TD 128Mb DDR SDRAM, 2x400MHz DAC, AGP8x, ATI Radeon 9600XT, DVI, TV- out, BOX  | 3
  17 | ASUSTEK V9520X  6  1602.00 | 4.0 | Video card ASUSTEK V9520X 128Mb DDR SDRAM, 400MHz DAC, AGP 8x, GeForce FX 5200, TV- out, BOX  | 3
  18 | SAPPHIRE 256MB RADEON 9550  3  2730.00 | 3.8 | Video card SAPPHIRE 256MB RADEON 9550, TV-out, DVI, OEM  | 3
  19 | GIGABYTE AGP GV-N59X128D  6  5886.00 | 3.6 | Video card GIGABYTE AGP GV-N59X128D FX5900XT OEM  | 3
  20 | Maxtor 6Y120P0  6  2456.00 | 4.5 | HDD 120 GB Maxtor 6Y120P0, UDMA-133, 7200rpm, 8MB  | 4
  21 | Maxtor 6B200P0  4  3589.00 | 4.0 | HDD 200 GB Maxtor 6B200P0, UDMA-133, 7200rpm, 8Mb  | 4
  22 | Samsung SP0812C  5  2093.00 | 4.0 | HDD 80 GB Samsung SP0812C, SATA, 7200rpm SpinPoint P80 SerialATA, Cash 8 MB  7200rpm, Serial ATA 1.0 | 4
  23 | Seagate Barracuda ST3160023A  3  3139.00 | 4.1 | HDD 160 GB Seagate Barracuda ST3160023A, UDMA-100, 7200rpm, 8Mb  | 4
  24 | Seagate ST3120026A  8  2468.00 | 4.2 | HDD 120 GB Seagate ST3120026A, UDMA-100, 7200rpm, 8MB  | 4
  25 | DDR-400 256MB Kingston  20  1085.00 | 4.8 | RAM DDR-400 256MB Kingston  | 5
  26 | DDR-400 256MB Hynix Original   15  1179.00 | 4.6 | RAM DDR-400 256MB Hynix Original  | 5
  27 | DDR-400 256MB PQI  10  899.00 | 4.2 | RAM DDR-400 256MB PQI  | 5
  28 | DDR-400 512MB Kingston  20  1932.00 | 4.8 | RAM DDR-400 512MB Kingston  | 5
  29 | DDR-400 512MB PQI  12  1690.00 | 4.2 | RAM DDR-400 512MB PQI  | 5
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
