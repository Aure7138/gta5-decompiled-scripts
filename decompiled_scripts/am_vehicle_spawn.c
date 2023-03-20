#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	struct<3> Local_100 = { 0, 0, 0 } ;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	struct<102> Local_105 = { 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	struct<30> Local_239[32];
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	var uLocal_1205 = 0;
	struct<3> Local_1206 = { 0, 0, 0 } ;
	struct<14> Local_1209 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	int iLocal_1226 = 0;
	struct<6> Local_1227[32];
	var uLocal_1420 = 0;
	int iLocal_1421 = 0;
	var uLocal_1422 = 16;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	int iLocal_1587 = 0;
	var uLocal_1588[2] = { 0, 0 };
	int iLocal_1591[5] = { 0, 0, 0, 0, 0 };
	struct<2> Local_1597[5];
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	int iLocal_1610 = 0;
	int iLocal_1611 = 0;
	var uLocal_1612[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	var uLocal_1677 = 0;
	struct<29> Local_1678 = { 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = -1;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 1;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 6;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	int iLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	int iLocal_1993[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2026 = 0;
	int iLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	int iLocal_2030 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	Local_100 = { 0f, 0f, 0f };
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_420(ScriptParam_0))
		{
			func_418();
		}
		Local_1678.f_0 = 0;
	}
	while (true)
	{
		func_417();
		if ((!unk_0xA86CA03D9749EEB3() || func_408()) || func_369())
		{
			if (!func_368())
			{
				func_418();
			}
		}
		if (unk_0xA86CA03D9749EEB3())
		{
			uLocal_1421 = unk_0x4B50AAB32FBE0483();
		}
		func_367();
		if (!func_365(unk_0x0C1D3C552325765B()))
		{
			func_361(&uLocal_1420);
		}
		func_359();
		switch (func_358(unk_0x1A9CF4D5D4E2F266()))
		{
			case 0:
				if (func_357() == 1)
				{
					Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 1;
				}
				else if (func_357() == 4)
				{
					Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 3;
				}
				break;
			
			case 1:
				if (func_357() == 1)
				{
					switch (iLocal_104)
					{
						case 0:
							if (func_355(&Local_1678, 0, &uLocal_103) && !Global_2482149.f_747)
							{
								func_354(&iLocal_104, 2);
								Local_239[unk_0x0C1D3C552325765B() /*30*/].f_27 = -1;
							}
							break;
						
						case 2:
							if (func_355(&Local_1678, 0, &uLocal_103) && !Global_2482149.f_747)
							{
								Local_1678.f_5 = func_352(Local_1678.f_9);
								if (Local_1678.f_5 >= 0)
								{
									func_354(&iLocal_104, 3);
								}
							}
							else
							{
								func_354(&iLocal_104, 5);
							}
							break;
						
						case 3:
							if (!unk_0x712B9E0F5CC8AE72("luxe_veh_activity", Local_1678.f_5, 1, 0))
							{
								unk_0xE568CE38FF8C1318("luxe_veh_activity");
								if (unk_0x08BA6DD398CA197C(Global_25448, Local_1678.f_5))
								{
									unk_0x09C86C0C5CA26B1E(&Global_25448, Local_1678.f_5);
								}
								if (unk_0x71DF55A4DE7565D5("luxe_veh_activity"))
								{
									unk_0xB8BA7F44DF1575E1("luxe_veh_activity", &Local_1678, 312, 1424);
									unk_0x3CFCF109465A1DA6("luxe_veh_activity");
									iLocal_2030 = 0;
									Global_25447 = Local_1678.f_5;
									func_354(&iLocal_104, 4);
								}
							}
							else
							{
								iLocal_2030 = 1;
								Global_25447 = Local_1678.f_5;
								func_354(&iLocal_104, 4);
							}
							break;
						
						case 4:
							if (iLocal_2030 && !unk_0x712B9E0F5CC8AE72("luxe_veh_activity", Local_1678.f_5, 1, 0))
							{
								func_354(&iLocal_104, 3);
							}
							else if (unk_0x08BA6DD398CA197C(Global_25448, Local_1678.f_5))
							{
								func_354(&iLocal_104, 5);
							}
							break;
						
						case 5:
							if (!func_355(&Local_1678, Local_1678.f_9, &uLocal_103))
							{
								func_351();
								func_354(&iLocal_104, 0);
							}
							else if (Local_1678.f_5 >= 0)
							{
								if (!unk_0x05D53E8262695692(unk_0x0C1D3C552325765B(), "luxe_veh_activity", Local_1678.f_5))
								{
									if (Local_1678.f_7 > 15)
									{
										func_351();
										func_354(&iLocal_104, 0);
									}
									Local_1678.f_7++;
								}
							}
							else
							{
								func_351();
								func_354(&iLocal_104, 0);
							}
							break;
					}
					func_43();
				}
				else if (func_357() == 0)
				{
					func_34();
					Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 0;
				}
				else if (func_357() == 4)
				{
					Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 3;
				}
				break;
			
			case 3:
				func_33(&(Local_105.f_96));
				if (func_32(&(Local_105.f_96)))
				{
					Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 4;
				}
				break;
			
			case 2:
				Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 4;
			
			case 4:
				func_418();
				break;
		}
		if (unk_0xA86CA03D9749EEB3())
		{
			if (unk_0xD9E8CA806A80203D())
			{
				func_31();
				switch (func_357())
				{
					case 0:
						func_29();
						func_28();
						Local_105.f_0 = 1;
						Local_105.f_99 = -1;
						iVar0 = 0;
						while (iVar0 <= 31)
						{
							Local_105.f_101[iVar0] = -1;
							iVar0++;
						}
						break;
					
					case 1:
						func_9();
						func_7();
						func_2();
						break;
					
					case 4:
						break;
				}
				if (func_357() < 4)
				{
					if (func_1())
					{
						Local_105.f_0 = 4;
					}
				}
			}
		}
	}
}

int func_1()
{
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_6(&uLocal_1991))
	{
		func_5(&uLocal_1991, 0, 0);
	}
	if (func_4(&uLocal_1991, 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_105.f_101[iVar0] != -1)
			{
				if (!unk_0x712B9E0F5CC8AE72("luxe_veh_activity", iVar0, 0, 0))
				{
					iVar1 = 0;
					while (iVar1 <= 2)
					{
						if (!bVar2)
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1993[iVar0], iVar1))
							{
								unk_0x88B0F0DC270164B7(&(iLocal_1993[iVar0]), iVar1);
								bVar2 = true;
							}
						}
						iVar1++;
					}
					if (!bVar2)
					{
						Local_105.f_101[iVar0] = -1;
						iVar1 = 0;
						while (iVar1 <= 2)
						{
							unk_0x09C86C0C5CA26B1E(&(iLocal_1993[iVar0]), iVar1);
							iVar1++;
						}
					}
					bVar2 = false;
				}
				else
				{
					iLocal_1993[iVar0] = 0;
				}
			}
			iVar0++;
		}
		func_3(&uLocal_1991);
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Local_105.f_99 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_239[iVar0 /*30*/].f_28 == 1)
			{
				if (Local_239[iVar0 /*30*/].f_27 != -1)
				{
					Local_105.f_99 = unk_0x81C85E54237F8A2E(iVar0);
					iVar1 = 0;
					while (iVar1 <= 31)
					{
						if (Local_105.f_101[iVar1] == Local_239[iVar0 /*30*/].f_27)
						{
							Local_105.f_98 = iVar1;
							iVar1 = 31;
							bVar2 = true;
						}
						iVar1++;
					}
					if (!bVar2)
					{
						iVar1 = 0;
						while (iVar1 <= 31)
						{
							if (Local_105.f_101[iVar1] == -1)
							{
								Local_105.f_101[iVar1] = Local_239[iVar0 /*30*/].f_27;
								Local_105.f_98 = iVar1;
								iVar1 = 31;
							}
							iVar1++;
						}
					}
					iVar0 = 32;
					bVar2 = false;
				}
			}
			iVar0++;
		}
	}
	else if (Local_239[Local_105.f_99 /*30*/].f_29 == 1 && Local_239[Local_105.f_99 /*30*/].f_28 == 0)
	{
		Local_105.f_99 = -1;
	}
	else if (Local_239[Local_105.f_99 /*30*/].f_29 == 0 && Local_239[Local_105.f_99 /*30*/].f_28 == 0)
	{
		Local_105.f_99 = -1;
	}
	else if (Local_105.f_99 >= 0)
	{
		if (!func_8(Local_105.f_99, 0, 1))
		{
			Local_105.f_99 = -1;
		}
	}
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_9()
{
	func_17();
	func_10();
}

void func_10()
{
	if ((Global_2452937 != -1 || Global_2452939 != -1) || Global_2452938 != -1)
	{
		func_15();
	}
	func_11(iLocal_1611);
	iLocal_1611++;
	if (iLocal_1611 >= 60)
	{
		iLocal_1611 = 0;
	}
}

void func_11(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	if (Local_105.f_2[iParam0] > -1)
	{
		if (!func_8(unk_0x81C85E54237F8A2E(Local_105.f_2[iParam0]), 0, 1))
		{
			func_13(iParam0);
		}
		else
		{
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (func_12(Local_105.f_2[iParam0], iVar1) == iParam0)
				{
					bVar0 = true;
				}
				iVar1++;
			}
			if (!bVar0)
			{
				func_13(iParam0);
			}
		}
	}
}

int func_12(int iParam0, int iParam1)
{
	return Local_1227[iParam0 /*6*/][iParam1];
}

void func_13(int iParam0)
{
	if (Local_105.f_2[iParam0] != -1)
	{
		Local_105.f_2[iParam0] = -1;
		func_14(iParam0);
	}
}

int func_14(int iParam0)
{
	if (unk_0xDF658EB6CA91DFBC() < uLocal_1612[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if (Global_2452937 > -1 && Global_2452937 < 32)
	{
		if (Global_2452939 > -1 && Global_2452939 < 60)
		{
			if (Global_2452938 > -1 && Global_2452938 < 5)
			{
				func_16(Global_2452937, Global_2452938);
				func_13(Global_2452939);
			}
		}
	}
	Global_2452937 = -1;
	Global_2452939 = -1;
	Global_2452938 = -1;
}

void func_16(int iParam0, int iParam1)
{
	if (Local_1227[iParam0 /*6*/][iParam1] != -1)
	{
		Local_1227[iParam0 /*6*/][iParam1] = -1;
	}
}

void func_17()
{
	if ((Global_2452906 != -1 || Global_2452908 != -1) || Global_2452907 != -1)
	{
		func_27();
	}
	else
	{
		func_21(iLocal_1610);
	}
	func_18(iLocal_1610);
	iLocal_1610++;
	if (iLocal_1610 >= 32)
	{
		iLocal_1610 = 0;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_12(iParam0, iVar0) != -1)
		{
			if (!func_20(func_12(iParam0, iVar0)))
			{
				if (!func_14(func_12(iParam0, iVar0)))
				{
					func_19(iParam0, func_12(iParam0, iVar0));
				}
			}
		}
		iVar0++;
	}
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0 > -1 && func_8(unk_0x81C85E54237F8A2E(iParam0), 0, 1))
	{
		Local_105.f_2[iParam1] = iParam0;
		Local_105.f_63[iParam0] = uLocal_1421;
	}
}

int func_20(int iParam0)
{
	if (Local_105.f_2[iParam0] > -1)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	
	if (func_8(unk_0x81C85E54237F8A2E(iParam0), 0, 1) && !func_24(unk_0x81C85E54237F8A2E(iParam0), 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (unk_0x08BA6DD398CA197C(Local_239[iParam0 /*30*/].f_5[iVar0 /*4*/].f_1, 0))
			{
				func_23(iParam0, iVar0, Local_239[iParam0 /*30*/].f_5[iVar0 /*4*/]);
			}
			else
			{
				func_16(iParam0, iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_1227[iParam0 /*6*/][iVar0] = -1;
		iVar0++;
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	if (Local_1227[iParam0 /*6*/][iParam1] != iParam2)
	{
		Local_1227[iParam0 /*6*/][iParam1] = iParam2;
	}
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312731;
}

void func_27()
{
	if (Global_2452906 > -1 && Global_2452906 < 32)
	{
		if (Global_2452908 > -1 && Global_2452908 < 60)
		{
			if (Global_2452907 > -1 && Global_2452906 < 5)
			{
				func_23(Global_2452906, Global_2452907, Global_2452908);
				iLocal_1610 = Global_2452906;
			}
		}
	}
	Global_2452906 = -1;
	Global_2452907 = -1;
	Global_2452908 = -1;
}

void func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			Local_1227[iVar0 /*6*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_30(iVar0, 0);
		func_14(iVar0);
		iVar0++;
	}
}

void func_30(int iParam0, bool bParam1)
{
	Local_105.f_2[iParam0] = -1;
	if (bParam1)
	{
		func_14(iParam0);
	}
}

void func_31()
{
}

int func_32(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_33(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			func_5(uParam0, 0, 0);
		}
	}
}

void func_34()
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0xD9E8CA806A80203D())
		{
			Local_105.f_1 = 0;
		}
		Local_239[unk_0x0C1D3C552325765B() /*30*/].f_1 = 0;
		func_42();
		func_35(1, 0, 1);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3441), 8);
	unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3441), 10);
	Global_2482149.f_5277 = 0;
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_315 = 0;
	Global_2482149.f_5278 = 0;
}

void func_35(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 11))
		{
			func_41();
		}
	}
	if (bParam0)
	{
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 0))
		{
			if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6) && !unk_0x08BA6DD398CA197C(Local_1209.f_0, 14))
			{
				if (!func_40(138, -1))
				{
					func_37(138, 1, -1, 1);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1203, 2))
	{
		unk_0x09C86C0C5CA26B1E(&iLocal_1203, 2);
	}
	Global_2453160 = 0;
	if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
	{
		unk_0x0B57C567D698C373(&(Local_1209.f_4));
	}
	Local_1209.f_0 = 0;
	Local_1209.f_1 = 0;
	Local_1209.f_2 = -1;
	Local_1209.f_3 = -1;
	if (bParam2)
	{
		func_36(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49));
		if (Local_1209.f_12 != 0)
		{
			unk_0x2C07692AA3545079(Local_1209.f_12);
		}
		Local_1209.f_12 = 0;
		Local_1209.f_13 = { Local_100 };
	}
	Global_2482149.f_5277 = 0;
}

void func_36(var uParam0)
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_39())
	{
		iVar0 = Global_2506009[iParam0 /*3*/][func_38(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA75D835C91B77269(iVar0, iParam1, iParam3);
		}
	}
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_39()
{
	return 1;
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_38(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_41()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 12))
		{
			unk_0x88B0F0DC270164B7(&iLocal_1202, 5);
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 2, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			unk_0x88B0F0DC270164B7(&Local_1209, 12);
		}
	}
}

void func_42()
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(uLocal_1225))
	{
		uVar0 = unk_0x63CE7A3848B84093(uLocal_1225);
		unk_0x811BE251B0B13760(&uVar0);
		unk_0xB16B53F6FE1ADDB6(uVar0, 1);
	}
}

void func_43()
{
	if (!func_350())
	{
		func_349();
		func_337();
		func_312();
		func_291();
		func_257();
		func_247();
		func_197();
		func_188();
		func_82();
		func_75();
		func_74();
		func_48();
	}
	func_44();
}

void func_44()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xD3FACCDA4D66AEAD(Global_2432628.f_588[iLocal_1990]))
	{
		iVar0 = unk_0x705BC1BB91F530B5(Global_2432628.f_588[iLocal_1990]);
		if (func_46(iVar0))
		{
			if (unk_0x775F8FFC8E29F525(Global_2432628.f_588[iLocal_1990]))
			{
				if (unk_0xD3FACCDA4D66AEAD(Global_2432628.f_588[iLocal_1990]) && !unk_0x912AD5A10E7633F0(Global_2432628.f_588[iLocal_1990], 0))
				{
					if (unk_0xEF2C230B837A02A2(Global_2432628.f_588[iLocal_1990], 2) || unk_0xEF2C230B837A02A2(Global_2432628.f_588[iLocal_1990], 3))
					{
						if (!func_45(Global_2432628.f_588[iLocal_1990], &bVar1, &bVar2))
						{
							if (!bVar1)
							{
								unk_0xE7617DB3A22803B4(Global_2432628.f_588[iLocal_1990], 2, 0);
							}
							if (!bVar2)
							{
								unk_0xE7617DB3A22803B4(Global_2432628.f_588[iLocal_1990], 3, 0);
							}
						}
					}
				}
			}
		}
	}
	iLocal_1990++;
	if (iLocal_1990 >= 32)
	{
		iLocal_1990 = 0;
	}
}

int func_45(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = 0;
	*uParam2 = 0;
	iVar0 = unk_0x4300569FADD548DF(uParam0, 2);
	iVar1 = unk_0x4300569FADD548DF(uParam0, 3);
	if (unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		*uParam1 = 1;
	}
	if (unk_0xD3FACCDA4D66AEAD(iVar1) && !unk_0x912AD5A10E7633F0(iVar1, 0))
	{
		*uParam2 = 1;
	}
	if (*uParam1 && *uParam2)
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	if (func_47(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("swift2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
			return 1;
			break;
	}
	return 0;
}

void func_48()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (Global_2451808.f_19 && Global_2451808.f_17 != -1)
	{
		if (iLocal_2026 == 0)
		{
			if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 3) || unk_0x08BA6DD398CA197C(Local_1209.f_0, 9))
			{
				func_35(0, 1, 1);
			}
			if (unk_0xD3FACCDA4D66AEAD(Global_2432628.f_588[unk_0x0C1D3C552325765B()]))
			{
				if (unk_0x687CB62D355FD7FD(Global_2432628.f_588[unk_0x0C1D3C552325765B()], 0))
				{
					if (unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49))
					{
						if (func_4(&uLocal_2028, 10000, 0))
						{
							func_35(0, 1, 1);
						}
					}
					Global_2432628.f_621[unk_0x0C1D3C552325765B()] = Global_2432628.f_588[unk_0x0C1D3C552325765B()];
					func_65(&(Global_2432628.f_588[unk_0x0C1D3C552325765B()]), 1, -1);
					return;
				}
			}
			if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
			{
				unk_0x0B57C567D698C373(&(Local_1209.f_4));
			}
			iLocal_2027 = func_64(Global_2451808.f_17, -1);
			unk_0x491067A8E906F22D(iLocal_2027);
			iLocal_2026 = 1;
		}
		if (iLocal_2026 == 1)
		{
			if (unk_0x2C1B5A0D3E233FC3(iLocal_2027))
			{
				Var0 = { func_63(unk_0x0C1D3C552325765B()) };
				Var0.f_2 = -20f;
				if (func_58(unk_0x0C1D3C552325765B(), 0, 0, 0))
				{
					iVar3 = func_57(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11);
					if (func_56(iVar3))
					{
						Var0 = { func_55(iVar3) };
					}
				}
				if (func_54(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), iLocal_2027, Var0, 0f, 0, 1, 1, 0, 1, 1, 0))
				{
					iVar4 = unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49);
					if (!unk_0x912AD5A10E7633F0(iVar4, 0))
					{
						unk_0xBB21B5C3111E5F85(iVar4, 1);
						unk_0x591413670A1EF437(iVar4, 0, 0);
						unk_0xEDBE0CD7C81FA37E(iVar4, 0, 0);
						unk_0xC2407AC016215F2D(iVar4, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x2C07692AA3545079(iLocal_2027);
					iLocal_2026 = 2;
				}
			}
		}
		if (iLocal_2026 == 2)
		{
			if (func_49(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49)))
			{
				iLocal_2026 = 0;
				Global_2451808.f_17 = -1;
				Global_2451808.f_19 = 0;
				Global_2451808.f_20 = 1;
				func_3(&uLocal_2028);
			}
		}
	}
}

int func_49(int iParam0)
{
	var uVar0;
	char* sVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (unk_0x6B8DF4084A1CD2DC(iParam0))
			{
				if (unk_0x775F8FFC8E29F525(iParam0))
				{
					if (unk_0xD28B39973EB5D6B4(1))
					{
						sVar1 = unk_0x31A36F72D3ABDCD7(iParam0, &uVar0);
						if (!unk_0x509383441597090D(sVar1))
						{
							if (unk_0xA96867DD0A63C62C(unk_0x3BB8D1C5FAAB25B3(sVar1)) <= 0)
							{
								if (unk_0x18C670321BC98FDA(iParam0))
								{
									return 0;
								}
							}
						}
						if (!unk_0x18C670321BC98FDA(iParam0))
						{
							unk_0x7B17650F15A8876D(iParam0, 0, 1);
						}
						if (unk_0x18C670321BC98FDA(iParam0))
						{
							if (!unk_0x687CB62D355FD7FD(iParam0, 1))
							{
								unk_0x7B17650F15A8876D(iParam0, 0, 1);
							}
							else
							{
								Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49 = unk_0xDD3500FFBBCB3F3B(iParam0);
								unk_0x88B0F0DC270164B7(&Local_1209, 0);
								unk_0x88B0F0DC270164B7(&Local_1209, 6);
								unk_0x88B0F0DC270164B7(&Local_1209, 15);
								func_50();
								Local_1209.f_12 = unk_0x705BC1BB91F530B5(iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					unk_0x33E20212DBE504C2(iParam0);
				}
			}
		}
	}
	return 0;
}

void func_50()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	int iVar6;
	
	Global_2482149.f_280 = unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49);
	iVar0 = unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49));
	Var1 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 1) };
	uVar4 = unk_0x5E6FDC4F3A8C8EDE(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49));
	if (func_53(iVar0))
	{
		Local_1678.f_27 = Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49;
	}
	if (unk_0x71F81D3603710A43("MPBitset", 3))
	{
		if (unk_0x4184E6D274FCBFF1(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), "MPBitset"))
		{
			uVar5 = unk_0x96FB4818617F93B9(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), "MPBitset");
		}
		if (func_53(iVar0) || func_47(iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar5, 10);
		}
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 14))
		{
			unk_0x88B0F0DC270164B7(&uVar5, 17);
			unk_0x88B0F0DC270164B7(&iLocal_1203, 3);
			unk_0x88B0F0DC270164B7(&iLocal_1200, 2);
		}
		unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), "MPBitset", uVar5);
	}
	unk_0x731472D13E83EB4E(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49, unk_0x0C1D3C552325765B(), 1);
	if ((unk_0xE3C6E31B7236489F(iVar0) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
	{
		unk_0xCB50578868A841C2(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 1);
	}
	if (iVar0 == joaat("monster"))
	{
		unk_0x3A9188D7AA55A522(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0, 0, 0);
	}
	if (iVar0 == joaat("insurgent") || iVar0 == joaat("insurgent2"))
	{
		unk_0xE1A095B0BA3A0EA3(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0);
		unk_0xF55EA971ECC0BCE5(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 16, (unk_0x952B48FDCC7BFAAC(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 16) - 1), 0);
		unk_0x0DD72E0CB1FCF511(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0);
	}
	if (((iVar0 == joaat("technical") || iVar0 == joaat("limo2")) || iVar0 == joaat("brickade")) || iVar0 == joaat("rallytruck"))
	{
		unk_0x0DD72E0CB1FCF511(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0);
	}
	iVar6 = func_52(iVar0);
	if (func_51(iVar6))
	{
		if (unk_0x141913B932CAECD6(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49)) > 0)
		{
			unk_0xE1A095B0BA3A0EA3(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0);
		}
		if (unk_0x952B48FDCC7BFAAC(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 48) > 0)
		{
			unk_0xF55EA971ECC0BCE5(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 48, Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_50, 0);
		}
		else
		{
			unk_0xB9C9103C26C01C4F(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_50);
		}
		if (Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_51 != -1)
		{
			unk_0x728045E0733945FD(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_51, Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_52);
		}
	}
	unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0);
	Local_1209.f_13 = { Var1 };
	if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
	{
		unk_0x6E48FDB1A085F319(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), "CreatedByPegasus", 1);
		unk_0x5DAC607F3BD7200B(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 1);
	}
	else
	{
		unk_0x5DAC607F3BD7200B(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 0);
	}
	unk_0x2C07692AA3545079(iVar0);
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_315 = Global_2482149.f_5278;
}

int func_51(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279)
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		
		case joaat("stinger"):
			return 1;
		
		case joaat("jb700"):
			return 2;
		
		case joaat("cheetah"):
			return 3;
		
		case joaat("entityxf"):
			return 4;
		
		case joaat("adder"):
			return 5;
		
		case joaat("monroe"):
			return 6;
		
		case joaat("cogcabrio"):
			return 7;
		
		case joaat("shamal"):
			return 10;
		
		case joaat("stunt"):
			return 11;
		
		case joaat("cuban800"):
			return 12;
		
		case joaat("duster"):
			return 13;
		
		case joaat("luxor"):
			return 14;
		
		case joaat("frogger"):
			return 15;
		
		case joaat("maverick"):
			return 16;
		
		case joaat("rhino"):
			return 17;
		
		case joaat("titan"):
			return 18;
		
		case joaat("cargobob"):
			return 19;
		
		case joaat("buzzard"):
			return 20;
		
		case joaat("crusader"):
			return 21;
		
		case joaat("barracks"):
			return 22;
		
		case joaat("marquis"):
			return 24;
		
		case joaat("jetmax"):
			return 25;
		
		case joaat("squalo"):
			return 27;
		
		case joaat("tropic"):
			return 29;
		
		case joaat("seashark"):
			return 30;
		
		case joaat("submersible"):
			return 31;
		
		case joaat("suntrap"):
			return 32;
		
		case joaat("tug"):
			return 258;
		
		case joaat("bmx"):
			return 33;
		
		case joaat("scorcher"):
			return 34;
		
		case joaat("tribike"):
			return 35;
		
		case joaat("tribike2"):
			return 36;
		
		case joaat("tribike3"):
			return 37;
		
		case joaat("cruiser"):
			return 38;
		
		case joaat("schwarzer"):
			return 39;
		
		case joaat("zion"):
			return 40;
		
		case joaat("gauntlet"):
			return 41;
		
		case joaat("vigero"):
			return 42;
		
		case joaat("issi2"):
			return 43;
		
		case joaat("infernus"):
			return 44;
		
		case joaat("surano"):
			return 45;
		
		case joaat("vacca"):
			return 46;
		
		case joaat("ninef"):
			return 47;
		
		case joaat("comet2"):
			return 48;
		
		case joaat("banshee"):
			return 49;
		
		case joaat("feltzer2"):
			return 50;
		
		case joaat("bfinjection"):
			return 51;
		
		case joaat("sandking"):
			return 52;
		
		case joaat("fugitive"):
			return 53;
		
		case joaat("dilettante"):
			return 54;
		
		case joaat("superd"):
			return 55;
		
		case joaat("exemplar"):
			return 56;
		
		case joaat("baller2"):
			return 57;
		
		case joaat("cavalcade"):
			return 58;
		
		case joaat("rocoto"):
			return 59;
		
		case joaat("felon"):
			return 60;
		
		case joaat("oracle2"):
			return 61;
		
		case joaat("bati"):
			return 62;
		
		case joaat("akuma"):
			return 63;
		
		case joaat("ruffian"):
			return 64;
		
		case joaat("vader"):
			return 65;
		
		case joaat("blazer"):
			return 66;
		
		case joaat("pcj"):
			return 67;
		
		case joaat("sanchez"):
			return 68;
		
		case joaat("faggio2"):
			return 69;
		
		case joaat("airbus"):
			return 82;
		
		case joaat("annihilator"):
			return 78;
		
		case joaat("bati2"):
			return 94;
		
		case joaat("bison"):
			return 89;
		
		case joaat("bullet"):
			return 70;
		
		case joaat("bus"):
			return 83;
		
		case joaat("carbonizzare"):
			return 71;
		
		case joaat("coach"):
			return 84;
		
		case joaat("coquette"):
			return 72;
		
		case joaat("double"):
			return 90;
		
		case joaat("dump"):
			return 81;
		
		case joaat("felon2"):
			return 91;
		
		case joaat("hexer"):
			return 92;
		
		case joaat("journey"):
			return 85;
		
		case joaat("mammatus"):
			return 79;
		
		case joaat("mule"):
			return 86;
		
		case joaat("ninef2"):
			return 73;
		
		case joaat("rapidgt"):
			return 74;
		
		case joaat("rapidgt2"):
			return 75;
		
		case joaat("rentalbus"):
			return 87;
		
		case joaat("stingergt"):
			return 76;
		
		case joaat("stretch"):
			return 88;
		
		case joaat("velum"):
			return 80;
		
		case joaat("voltic"):
			return 77;
		
		case joaat("zion2"):
			return 93;
		
		case joaat("elegy2"):
			return 95;
		
		case joaat("khamelion"):
			return 96;
		
		case joaat("hotknife"):
			return 97;
		
		case joaat("carbonrs"):
			return 98;
		
		case joaat("bodhi2"):
			return 103;
		
		case joaat("dune"):
			return 104;
		
		case joaat("rebel"):
			return 105;
		
		case joaat("sadler"):
			return 106;
		
		case joaat("sanchez2"):
			return 107;
		
		case joaat("sandking2"):
			return 108;
		
		case joaat("asea"):
			return 128;
		
		case joaat("asterope"):
			return 129;
		
		case joaat("bobcatxl"):
			return 130;
		
		case joaat("cavalcade2"):
			return 131;
		
		case joaat("granger"):
			return 132;
		
		case joaat("ingot"):
			return 133;
		
		case joaat("intruder"):
			return 134;
		
		case joaat("minivan"):
			return 135;
		
		case joaat("premier"):
			return 136;
		
		case joaat("radi"):
			return 137;
		
		case joaat("rancherxl"):
			return 138;
		
		case joaat("ratloader"):
			return 139;
		
		case joaat("stanier"):
			return 140;
		
		case joaat("stratum"):
			return 141;
		
		case joaat("washington"):
			return 142;
		
		case joaat("dominator"):
			return 122;
		
		case joaat("f620"):
			return 123;
		
		case joaat("fusilade"):
			return 124;
		
		case joaat("penumbra"):
			return 125;
		
		case joaat("sentinel"):
			return 126;
		
		case joaat("sentinel2"):
			return 127;
		
		case joaat("picador"):
			return 150;
		
		case joaat("regina"):
			return 151;
		
		case joaat("surfer"):
			return 152;
		
		case joaat("youga"):
			return 153;
		
		case joaat("blazer3"):
			return 154;
		
		case joaat("rebel2"):
			return 155;
		
		case joaat("primo"):
			return 156;
		
		case joaat("buffalo"):
			return 157;
		
		case joaat("buffalo2"):
			return 158;
		
		case joaat("tailgater"):
			return 159;
		
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_68108)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	return -1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case joaat("luxor2"):
		case joaat("nimbus"):
			return 1;
			break;
	}
	return 0;
}

int func_54(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

Vector3 func_55(int iParam0)
{
	if (func_56(iParam0))
	{
		switch (iParam0)
		{
			case 68:
				return -1582.094f, -569.5358f, 115.3326f;
				break;
			
			case 69:
				return -1391.652f, -477.7002f, 90.25584f;
				break;
			
			case 70:
				return -144.5361f, -593.3737f, 210.7752f;
				break;
			
			case 71:
				return -75.06329f, -818.9553f, 325.1753f;
				break;
			}
	}
	return 0f, 0f, -1000f;
}

int func_56(int iParam0)
{
	if (((iParam0 == 68 || iParam0 == 69) || iParam0 == 70) || iParam0 == 71)
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
			return 68;
			break;
		
		case 88:
			return 69;
			break;
		
		case 89:
			return 70;
			break;
		
		case 90:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_62(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_59(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (func_8(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_60(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

int func_61()
{
	return -1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (func_8(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_60(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

Vector3 func_63(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_64(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case joaat("mpsv_lp0_31"):
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68108;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
	}
	return 0;
}

void func_65(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar0 = uLocal_1420;
	if (iParam2 > -1)
	{
		iVar0 = iParam2;
	}
	if (func_8(unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (unk_0xD3FACCDA4D66AEAD(*iParam0) && unk_0x1F1B2B6E500380C5(*iParam0, 0))
		{
			if (func_73(*iParam0))
			{
				return;
			}
		}
		if (!func_71(*iParam0, 1, 1, 0, 0, 0, 1, 0))
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x81C85E54237F8A2E(iVar1);
				if (func_8(iVar2, 0, 1))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iVar2), *iParam0, 0))
					{
						if (func_4(&uLocal_1608, 10000, 0) || bParam1)
						{
							func_69(func_70(iVar2), 0, 0f, 0, 0, 0);
							if (func_4(&uLocal_1608, 10000, 0))
							{
							}
							if (bParam1)
							{
							}
						}
						else if (unk_0x1A9CF4D5D4E2F266() == iVar1)
						{
							if (!unk_0x08BA6DD398CA197C(uLocal_1204, iVar0))
							{
								sVar3 = "PEG_RECLAIM";
								if (func_68(*iParam0))
								{
									sVar3 = "GB_RECLAIM";
								}
								func_67("TWOSTRINGS", sVar3, "EPS_DROP_EXIT", -1);
								unk_0x88B0F0DC270164B7(&iLocal_1204, iVar0);
							}
						}
					}
				}
				iVar1++;
			}
		}
		else if (!unk_0x775F8FFC8E29F525(*iParam0))
		{
			unk_0x33E20212DBE504C2(*iParam0);
			func_3(&uLocal_1608);
			unk_0x09C86C0C5CA26B1E(&iLocal_1204, iVar0);
		}
		else
		{
			unk_0x58046B46E2D18640(*iParam0, 1);
			unk_0x7B17650F15A8876D(*iParam0, 0, 1);
			unk_0xEBE848773EBE7FBC(*iParam0);
			unk_0xB16B53F6FE1ADDB6(*iParam0, 1);
			if (func_66(*iParam0))
			{
				unk_0xEFA1F34A28EE763C(iParam0);
			}
			else
			{
				unk_0x615DE34FC732CF11(iParam0);
			}
			iLocal_1676 = 0;
			func_3(&uLocal_1608);
			unk_0x09C86C0C5CA26B1E(&iLocal_1204, iVar0);
			unk_0x09C86C0C5CA26B1E(&uLocal_1205, iVar0);
		}
	}
}

int func_66(var uParam0)
{
	if ((unk_0xFD4DDA3E1EF89C67(uParam0, 358.9707f, -1597.852f, 20.00015f, 412.8247f, -1640.907f, 40.54209f, 33.25f, 0, 1, 0) || unk_0xFD4DDA3E1EF89C67(uParam0, 406.6252f, -1644.242f, 20.04219f, 417.1268f, -1652.937f, 41.951f, 20.25f, 0, 1, 0)) || unk_0xFD4DDA3E1EF89C67(uParam0, 414.6758f, -1635.666f, 20.09278f, 423.5415f, -1635.645f, 41.04316f, 15.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_67(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0xBDE6EEC5F6BDC060(sParam2);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam3);
}

int func_68(int iParam0)
{
	var uVar0;
	
	if (unk_0x1F1B2B6E500380C5(uParam0, 0))
	{
		if (unk_0x71F81D3603710A43("MPBitset", 3) && unk_0x4184E6D274FCBFF1(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x96FB4818617F93B9(iParam0, "MPBitset");
			if (unk_0x08BA6DD398CA197C(uVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_69(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 59;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 7, iParam0);
	}
}

int func_70(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

int func_71(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
	if (iParam4 || !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_72(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xD3FACCDA4D66AEAD(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xA0081090911D13E5())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xEB361B4BD195A4D3(iVar2))
					{
						if (unk_0x54F0AEFB11EA090A(iVar2))
						{
							if (unk_0x7DC70BB637724B43(unk_0xA43666ACD375E339(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xEB361B4BD195A4D3(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x6315EBE95A97CADF(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8FD32443A080784B(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			iVar0 = unk_0xA89799E38057BB0B(iParam0, iParam1);
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x21178DF77817BF39(iVar0, 451360105) == 1 || unk_0x21178DF77817BF39(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 0), unk_0xC59DF10B4FC39DF8(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_73(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 1) };
	if (unk_0x999A157665D69393(Var0, Global_1049287[1 /*1908*/].f_1742.f_114, 1) < 30f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, Global_1049287[1 /*1908*/].f_1742.f_117, Global_1049287[1 /*1908*/].f_1742.f_117.f_3, Global_1049287[1 /*1908*/].f_1742.f_117.f_6, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x999A157665D69393(Var0, Global_1049287[8 /*1908*/].f_1742.f_114, 1) < 30f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, Global_1049287[8 /*1908*/].f_1742.f_117, Global_1049287[8 /*1908*/].f_1742.f_117.f_3, Global_1049287[8 /*1908*/].f_1742.f_117.f_6, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x999A157665D69393(Var0, Global_1049287[17 /*1908*/].f_1742.f_114, 1) < 30f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, Global_1049287[17 /*1908*/].f_1742.f_117, Global_1049287[17 /*1908*/].f_1742.f_117.f_3, Global_1049287[17 /*1908*/].f_1742.f_117.f_6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (unk_0xD3FACCDA4D66AEAD(Global_2482149.f_5276))
	{
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 3) || unk_0x08BA6DD398CA197C(Local_1209.f_0, 9))
		{
			func_35(0, 1, 1);
		}
		if (unk_0xD3FACCDA4D66AEAD(Global_2432628.f_588[unk_0x0C1D3C552325765B()]))
		{
			if (unk_0x687CB62D355FD7FD(Global_2432628.f_588[unk_0x0C1D3C552325765B()], 0))
			{
				if (unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49))
				{
					if (!Global_2482149.f_5279)
					{
						func_35(0, 1, 1);
					}
					else
					{
						func_35(0, 1, 0);
						Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49 = 0;
					}
				}
				Global_2432628.f_621[unk_0x0C1D3C552325765B()] = Global_2432628.f_588[unk_0x0C1D3C552325765B()];
				func_65(&(Global_2432628.f_588[unk_0x0C1D3C552325765B()]), 0, unk_0x0C1D3C552325765B());
				return;
			}
		}
		if (Global_2482149.f_5279)
		{
			Global_2482149.f_5279 = 0;
		}
		if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
		{
			unk_0x0B57C567D698C373(&(Local_1209.f_4));
		}
		if (func_49(Global_2482149.f_5276))
		{
			Global_2482149.f_5276 = 0;
		}
	}
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iLocal_1591[iVar0])
		{
			if (func_4(&(Local_1597[iVar0 /*2*/]), 5000, 0))
			{
				func_76(iVar0);
				iLocal_1591[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	func_80(func_81(1, 1), iVar0, iParam0, Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/]);
	if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/].f_1, 2))
	{
		unk_0x23DFD22869618226((unk_0x6A3DEBF89FDFEB17(false) - 1));
	}
	func_77(Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/]);
	Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/] = -1;
	Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/].f_1 = 0;
	Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/].f_2 = 0;
	if (Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/].f_3 != 0)
	{
		unk_0x2C07692AA3545079(Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/].f_3);
	}
	Local_239[iVar0 /*30*/].f_5[iParam0 /*4*/].f_3 = 0;
	if (Local_239[iVar0 /*30*/].f_26 > 0)
	{
		Local_239[iVar0 /*30*/].f_26 = (Local_239[iVar0 /*30*/].f_26 - 1);
	}
}

void func_77(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (unk_0x08BA6DD398CA197C(uLocal_1588[func_79(iParam0)], func_78(iParam0)))
		{
			unk_0x09C86C0C5CA26B1E(&(uLocal_1588[func_79(iParam0)]), func_78(iParam0));
		}
	}
}

int func_78(int iParam0)
{
	return (iParam0 % 32);
}

int func_79(int iParam0)
{
	return unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
}

void func_80(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 344;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, iParam0);
}

int func_81(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_8(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_24(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_82()
{
	char* sVar0;
	int iVar4;
	int iVar5;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_1202, 0))
	{
		if (func_40(138, -1))
		{
			if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 1))
			{
				func_37(138, 0, -1, 1);
			}
			else if (func_4(&(Local_1209.f_9), 10000, 0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_1202, 0);
			}
		}
		else
		{
			func_3(&(Local_1209.f_9));
		}
	}
	if (iLocal_1202 != 0)
	{
		if (func_187(&sVar0, &iVar4, &iVar5))
		{
			if (func_179())
			{
				if (!func_178(8, -1) && !unk_0xC740F8182E7E9681())
				{
					if (func_83(iVar4, &sVar0, 0, 0))
					{
						if (iVar5 == 0)
						{
							func_37(138, 0, -1, 1);
						}
						unk_0x09C86C0C5CA26B1E(&iLocal_1202, iVar5);
					}
				}
			}
		}
		else
		{
			iLocal_1202 = 0;
		}
	}
}

bool func_83(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_84(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_84(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_85(&uVar0, iParam0, func_177(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_85(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_176(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(iParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(iParam7);
	}
	if (func_175(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_169(iParam6))
	{
		return 0;
	}
	if (func_166(iVar0, iVar1, iVar2))
	{
		if (func_165())
		{
			return 0;
		}
		func_164();
		return func_92(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_91(iParam4))
	{
		return 0;
	}
	func_86(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = iParam6;
	func_87(iParam4);
	func_164();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
}

void func_87(int iParam0)
{
	if (func_90(iParam0))
	{
		func_89();
		return;
	}
	func_88();
}

void func_88()
{
	Global_1336446.f_40.f_10 = 0;
}

void func_89()
{
	Global_1336446.f_40.f_10 = 1;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_91(int iParam0)
{
	return iParam0 > Global_1336446.f_40.f_8;
}

int func_92(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_163();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_160(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_157(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_160(uParam0, sParam3, sParam4);
		}
		return func_141(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_140(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_130(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_129(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_93(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_93(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_128();
	bVar0 = true;
	if (func_95(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_94(120000);
		return 1;
	}
	return 0;
}

void func_94(int iParam0)
{
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
}

int func_95(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_61();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_122(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_121(uParam5, bParam6, &iVar3);
	uVar5 = func_119(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x08BA6DD398CA197C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_118(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_99(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_98();
	}
	func_128();
	func_97();
	func_96();
	return 1;
}

void func_96()
{
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_97()
{
	Global_1336446.f_40 = 3;
}

void func_98()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
}

int func_99(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_100(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_100(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_112();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_111() == 0)
	{
		func_109();
		return 0;
	}
	func_108(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_112();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_107(0);
				break;
			
			case 1:
				func_107(1);
				break;
			
			case 2:
				func_107(2);
				break;
			
			case 3:
				func_107(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
	if (bParam10)
	{
		func_112();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_106())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_105(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_101(1);
			func_105(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_104(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_103(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_103(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_103(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_103(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_103(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_103(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_102(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_102(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_103(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_103(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_103(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_103(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_103(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_103(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

bool func_104(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_105(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_106()
{
	return Global_1315229;
}

void func_107(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_109()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_110(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
}

int func_110(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_110(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
	return 1;
}

void func_112()
{
	if (func_104(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_113();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_113()
{
	func_114();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_114()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_117(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_116(unk_0xA0081090911D13E5());
			if (func_115(iVar0) && (!func_104(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_115(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_115(int iParam0)
{
	return iParam0 < 3;
}

int func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_117(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_117(int iParam0)
{
	if (func_115(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_118(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_100(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_120(2, iParam1);
	return iParam0;
}

void func_120(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_121(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x509383441597090D(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_120(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = func_125(iParam0);
	if (iVar0 == -1)
	{
		func_123(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_123(int iParam0, bool bParam1)
{
	if (!func_8(iParam0, 0, 1))
	{
		return;
	}
	if (func_125(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_124(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (!func_8(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_126(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_126(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_127(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_61();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

void func_128()
{
	Global_1336446.f_40.f_9 = 4;
}

int func_129(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_128();
	bVar0 = false;
	return func_95(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_130(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_131(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_131(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_61();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_122(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_121(uParam5, bParam6, &iVar3);
	uVar5 = func_119(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x08BA6DD398CA197C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_139(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_133(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_98();
	}
	func_132();
	func_97();
	func_96();
	return 1;
}

void func_132()
{
	Global_1336446.f_40.f_9 = 3;
}

int func_133(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_134(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_134(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_112();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_138() == 0)
	{
		func_136();
		return 0;
	}
	func_135(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_107(0);
		func_107(2);
		func_107(1);
	}
	else
	{
		func_112();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_107(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_107(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_107(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_107(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_112();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_106())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_105(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_101(1);
			func_105(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_135(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_136()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_137(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_137(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_137(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_139(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_134(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	func_132();
	bVar0 = true;
	if (func_131(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_94(120000);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 4))
	{
		bVar0 = func_156(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_147(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(iParam4, 3))
		{
			func_146(1);
		}
		if (unk_0x08BA6DD398CA197C(iParam4, 5))
		{
			func_145(1);
		}
		func_144();
		func_97();
		func_143();
		func_142();
		return 1;
	}
	return 0;
}

void func_142()
{
	Global_2489614 = 0;
}

void func_143()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_144()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_145(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_146(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
	}
}

int func_147(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_155(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_148(sParam3, iParam4, bParam7);
}

int func_148(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x588D9B1F6CF36C3C(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_154();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_178(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_153();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_112();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_152())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_151())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_150();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_149();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_154();
	}
	return 0;
}

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_150()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_151()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_153()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

void func_154()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_155(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_148(sParam3, iParam4, bParam7);
}

int func_157(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (func_159(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_158();
		func_144();
		func_97();
		func_143();
		func_142();
		return 1;
	}
	return 0;
}

void func_158()
{
	Global_16763 = 0;
}

bool func_159(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_155(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_148(sParam3, iParam4, bParam8);
}

int func_160(var uParam0, char* sParam1, char* sParam2)
{
	if (func_162(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_161();
		func_97();
		func_143();
		return 1;
	}
	return 0;
}

void func_161()
{
	Global_1336446.f_40.f_9 = 2;
}

bool func_162(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_148(sParam2, iParam3, 0);
}

void func_163()
{
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_164()
{
	Global_1336446.f_40 = 1;
}

bool func_165()
{
	return Global_1336446.f_40 == 1;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_167(int iParam0)
{
	if (!func_168())
	{
		return 0;
	}
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_168()
{
	if (Global_1336446.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_169(int iParam0)
{
	if (func_174())
	{
		return 0;
	}
	if (func_173())
	{
		return 0;
	}
	if (func_172(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1738544 || func_171())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(iParam0, 6))
	{
		if (func_170())
		{
			return 0;
		}
	}
	return 1;
}

bool func_170()
{
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_171()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_173()
{
	return Global_1336446.f_40 == 3;
}

bool func_174()
{
	return func_151();
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	if (!func_173())
	{
		return 0;
	}
	return func_166(iParam0, iParam1, iParam2);
}

int func_176(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

char* func_177()
{
	return "TXTMSG";
}

bool func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_179()
{
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (func_186())
	{
		return 0;
	}
	if (func_185())
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (func_181())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	return 1;
}

bool func_180()
{
	return Global_2442442.f_569;
}

bool func_181()
{
	return Global_2442442.f_721;
}

bool func_182()
{
	return Global_2443212.f_2842.f_41;
}

bool func_183()
{
	return Global_2432628.f_2489.f_585;
}

bool func_184()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_185()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	if (Global_14443.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_187(char* sParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 14) || unk_0x08BA6DD398CA197C(iLocal_1203, 3))
	{
		*uParam1 = 82;
		bVar0 = true;
	}
	else
	{
		*uParam1 = 41;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1202, 0))
	{
		if (bVar0)
		{
			StringCopy(sParam0, "TXT_CAR_GBCOLL", 16);
		}
		else
		{
			StringCopy(sParam0, "TXT_CAR_PEGCOLL", 16);
		}
		*uParam2 = 0;
		return 1;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1202, 1))
	{
		if (bVar0)
		{
			StringCopy(sParam0, "GB_TXT_1", 16);
		}
		else
		{
			StringCopy(sParam0, "PEG_TXT_1", 16);
		}
		*uParam2 = 1;
		return 1;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1202, 2))
	{
		if (bVar0)
		{
			StringCopy(sParam0, "GB_TXT_2", 16);
		}
		else
		{
			StringCopy(sParam0, "PEG_TXT_2", 16);
		}
		*uParam2 = 2;
		return 1;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1202, 3))
	{
		if (bVar0)
		{
			StringCopy(sParam0, "GB_TXT_3", 16);
		}
		else
		{
			StringCopy(sParam0, "PEG_TXT_3", 16);
		}
		*uParam2 = 3;
		return 1;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1202, 4))
	{
		StringCopy(sParam0, "PEG_TXT_4", 16);
		*uParam1 = 12;
		*uParam2 = 4;
		return 1;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1202, 5))
	{
		StringCopy(sParam0, "PEG_TXT_5", 16);
		*uParam1 = 12;
		*uParam2 = 5;
		return 1;
	}
	return 0;
}

void func_188()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	
	if (iLocal_1201 != 0)
	{
		sVar0 = func_194();
		if (!unk_0x28C1B9853548BD8E(sVar0, "NULL"))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_1200, 0))
			{
				sVar1 = "PEGASUS";
				sVar2 = "CT_AUD";
				iVar3 = 41;
				if (unk_0x08BA6DD398CA197C(iLocal_1200, 2))
				{
					sVar1 = "BOSSAGENCY";
					sVar2 = "BACALAU";
					iVar3 = 82;
				}
				func_193(&uLocal_1422, 3, 0, sVar1, 0, 1);
				if (func_189(&uLocal_1422, iVar3, sVar2, sVar0, 0, 0))
				{
					unk_0x88B0F0DC270164B7(&iLocal_1200, 0);
				}
			}
			else if (!unk_0x08BA6DD398CA197C(iLocal_1200, 1))
			{
				if (func_172(0))
				{
					unk_0x88B0F0DC270164B7(&iLocal_1200, 1);
				}
			}
			else if (!func_172(0))
			{
				iLocal_1201 = 0;
				iLocal_1200 = 0;
			}
		}
	}
}

int func_189(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_191())
	{
		return 0;
	}
	if (func_190())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_85(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_190()
{
	return Global_2487434.f_1;
}

int func_191()
{
	if (Global_1336634.f_2)
	{
		return 1;
	}
	return func_192();
}

bool func_192()
{
	return func_174();
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

char* func_194()
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(iLocal_1201, 0))
	{
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 14))
		{
			return "BACAL_UNABLE";
		}
		if (func_195())
		{
			return "MPCT_19";
		}
		else
		{
			return "MPCT_20";
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1201, 1))
	{
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 14))
		{
			return "BACAL_ACCEPT";
		}
		iVar0 = Local_1209.f_12;
		if (iVar0 != 0)
		{
			if ((unk_0xE3C6E31B7236489F(iVar0) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
			{
				if (func_195())
				{
					return "MPCT_13";
				}
				else
				{
					return "MPCT_14";
				}
			}
			else if (unk_0x1E3C80E7C4B8041B(iVar0) || unk_0xFC4346F9DE2AB4AE(iVar0))
			{
				if (func_195())
				{
					return "MPCT_15";
				}
				else
				{
					return "MPCT_16";
				}
			}
			else if (func_195())
			{
				return "MPCT_17";
			}
			else
			{
				return "MPCT_18";
			}
		}
	}
	return "NULL";
}

bool func_195()
{
	return func_196(unk_0x0C1D3C552325765B());
}

int func_196(int iParam0)
{
	if (unk_0x705BC1BB91F530B5(unk_0x21F191D9AFF98B5E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_197()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 0))
	{
		if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 1))
		{
			if (unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49))
			{
				Local_1209.f_5 = uLocal_1421;
				unk_0x88B0F0DC270164B7(&Local_1209, 1);
				unk_0x09C86C0C5CA26B1E(&Local_1209, 9);
			}
			else
			{
				if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 2))
				{
					if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 3) && !unk_0x08BA6DD398CA197C(Local_1209.f_0, 15))
					{
						if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
						{
							unk_0x0B57C567D698C373(&(Local_1209.f_4));
						}
						if (!unk_0x16833EFAA58E63DB(Local_1209.f_4))
						{
							Local_1209.f_4 = func_245(func_246(Local_1209.f_3), 0);
						}
						func_242();
						if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
						{
							unk_0x6F18BFEFE84565FF(Local_1209.f_4, unk_0xFC96A08CFC53257A(Local_1209.f_12));
						}
						else if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 5) && Local_1209.f_2 != -1)
						{
							unk_0x6F18BFEFE84565FF(Local_1209.f_4, unk_0xFC96A08CFC53257A(Local_1209.f_12));
						}
						else
						{
							unk_0x6F18BFEFE84565FF(Local_1209.f_4, "VED_BLIPN");
						}
						if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 8))
						{
							unk_0x3AE9C8E8575D2576(Local_1209.f_4, 1);
							unk_0xFB70601EAE8F9B9E(Local_1209.f_4, 10000);
							unk_0x88B0F0DC270164B7(&Local_1209, 8);
						}
						unk_0x88B0F0DC270164B7(&Local_1209, 3);
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 9))
				{
					unk_0x88B0F0DC270164B7(&Local_1209, 9);
					Local_1209.f_5 = uLocal_1421;
				}
				else if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
				{
					if (unk_0xDDEA1623E4BFD71B(uLocal_1421, Local_1209.f_5) > 14400000)
					{
						unk_0x88B0F0DC270164B7(&iLocal_1202, 3);
						bVar0 = true;
					}
				}
			}
		}
		else if (unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49))
		{
			iVar2 = unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49);
			if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 2))
			{
				if ((!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iVar2, 1) && !func_241(iVar2)) && !func_235(iVar2))
				{
					if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
					{
						unk_0x0B57C567D698C373(&(Local_1209.f_4));
					}
					if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 3))
					{
						unk_0x09C86C0C5CA26B1E(&Local_1209, 3);
					}
					if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
					{
						Local_1209.f_4 = unk_0x91B4D18C6AFDC14C(iVar2);
						func_242();
						unk_0x6F18BFEFE84565FF(Local_1209.f_4, unk_0xFC96A08CFC53257A(Local_1209.f_12));
					}
					else
					{
						Local_1209.f_4 = func_232(iVar2, 0, 0);
						unk_0x6F18BFEFE84565FF(Local_1209.f_4, unk_0xFC96A08CFC53257A(Local_1209.f_12));
					}
					if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 8))
					{
						unk_0x3AE9C8E8575D2576(Local_1209.f_4, 1);
						unk_0xFB70601EAE8F9B9E(Local_1209.f_4, 10000);
						unk_0x88B0F0DC270164B7(&Local_1209, 8);
					}
					unk_0x88B0F0DC270164B7(&Local_1209, 2);
				}
			}
			else if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iVar2, 1) || func_235(iVar2))
			{
				if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
				{
					unk_0x0B57C567D698C373(&(Local_1209.f_4));
				}
				unk_0x09C86C0C5CA26B1E(&Local_1209, 2);
			}
			if (Local_1209.f_12 == joaat("limo2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), unk_0xC59DF10B4FC39DF8(iVar2, 0)) < 6f)
				{
					func_231(16);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 4))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), unk_0xC59DF10B4FC39DF8(iVar2, 0)) < 40000f)
				{
					unk_0x88B0F0DC270164B7(&Local_1209, 4);
				}
			}
			else if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), unk_0xC59DF10B4FC39DF8(iVar2, 0)) > 62500f)
			{
				unk_0x09C86C0C5CA26B1E(&Local_1209, 4);
				if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
			{
				if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 10))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iVar2, 1))
					{
						unk_0x88B0F0DC270164B7(&iLocal_1202, 4);
						Local_1209.f_6 = iLocal_1421;
						unk_0x88B0F0DC270164B7(&Local_1209, 10);
					}
				}
				else if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iVar2, 0), Local_1209.f_13) > 2500f)
				{
					if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 11))
					{
						unk_0x88B0F0DC270164B7(&Local_1209, 11);
					}
					if (unk_0xDDEA1623E4BFD71B(iLocal_1421, Local_1209.f_6) > 1440000)
					{
						func_41();
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 11))
				{
					unk_0x09C86C0C5CA26B1E(&Local_1209, 11);
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_1203, 2))
			{
				func_230();
			}
			else
			{
				bVar0 = true;
			}
			if (!unk_0x912AD5A10E7633F0(iVar2, 0))
			{
				if (!unk_0x6315EBE95A97CADF(iVar2, -1, 0))
				{
					iVar3 = unk_0x8FD32443A080784B(iVar2, -1, 0);
					if (iVar3 != unk_0xA0081090911D13E5() && unk_0x705BC1BB91F530B5(iVar3) != joaat("mp_f_helistaff_01"))
					{
						bVar1 = false;
						if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iVar2, 0), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) > 40000f && !func_226(iVar3, func_229()))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
						if (bVar1)
						{
							if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
							{
								if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 13))
								{
									unk_0x88B0F0DC270164B7(&iLocal_1202, 1);
									unk_0x88B0F0DC270164B7(&Local_1209, 13);
								}
							}
							else
							{
								bVar0 = true;
							}
						}
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
			{
				if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 4))
				{
					if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 7))
					{
						Local_1209.f_5 = iLocal_1421;
						unk_0x09C86C0C5CA26B1E(&Local_1209, 7);
					}
					if (unk_0xDDEA1623E4BFD71B(iLocal_1421, Local_1209.f_5) > 300000)
					{
						bVar0 = true;
					}
				}
				else if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 7))
				{
					unk_0x88B0F0DC270164B7(&Local_1209, 7);
				}
			}
			if (!unk_0x1F1B2B6E500380C5(iVar2, 0))
			{
				if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
				{
					func_225(&(Global_2443212.f_4171.f_137[22 /*2*/]), 1, 0);
					func_218(22, -1, -1);
					unk_0x88B0F0DC270164B7(&iLocal_1202, 2);
				}
				bVar0 = true;
			}
		}
		else
		{
			if (Global_2482149.f_282)
			{
				unk_0x09C86C0C5CA26B1E(&Local_1209, 6);
				Global_2482149.f_282 = 0;
			}
			if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
			{
				unk_0x09C86C0C5CA26B1E(&Local_1209, 1);
				unk_0x09C86C0C5CA26B1E(&Local_1209, 2);
				unk_0x09C86C0C5CA26B1E(&Local_1209, 3);
				unk_0x09C86C0C5CA26B1E(&Local_1209, 4);
				unk_0x09C86C0C5CA26B1E(&Local_1209, 5);
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!Global_2453160)
		{
			if (func_217(Local_1209.f_3))
			{
				Global_2453160 = 1;
			}
		}
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
		{
			if (!unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 8))
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_3441), 8);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 10))
		{
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_3441), 10);
		}
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 8))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3441), 8);
		}
		if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 10))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3441), 10);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 8) && unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 9))
	{
		if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
		{
			Var4 = { unk_0xA4C471C6C99EDD6B(Local_1209.f_4) };
			if (!unk_0x08BA6DD398CA197C(iLocal_1203, 0))
			{
				unk_0x509BFB0C9F78C574(Var4.f_0, Var4.f_1);
				Local_1206 = { Var4 };
				unk_0x88B0F0DC270164B7(&iLocal_1203, 0);
			}
			else if (((Local_1206.f_0 < (Var4.f_0 - 20f) || Local_1206.f_0 > (Var4.f_0 + 20f)) || Local_1206.f_1 < (Var4.f_1 - 20f)) || Local_1206.f_1 > (Var4.f_1 + 20f))
			{
				unk_0x509BFB0C9F78C574(Var4.f_0, Var4.f_1);
				Local_1206 = { Var4 };
			}
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1203, 0))
	{
		Local_1206 = { Local_100 };
		unk_0x09C86C0C5CA26B1E(&iLocal_1203, 0);
	}
	if (bVar0)
	{
		func_35(0, 1, 1);
	}
	if (unk_0x16833EFAA58E63DB(Local_1209.f_4))
	{
		if (!unk_0x17F99BFBF44159B8(Local_1209.f_4) == func_209())
		{
			func_207(&(Local_1209.f_4), func_209());
			unk_0x6F18BFEFE84565FF(Local_1209.f_4, unk_0xFC96A08CFC53257A(Local_1209.f_12));
		}
		if (unk_0xD3FACCDA4D66AEAD(iVar2))
		{
			if (func_203(iVar2, Local_1209.f_4, 1))
			{
				unk_0x6F18BFEFE84565FF(Local_1209.f_4, unk_0xFC96A08CFC53257A(Local_1209.f_12));
				func_207(&(Local_1209.f_4), func_209());
			}
			if (func_201(unk_0x0C1D3C552325765B()))
			{
				if (func_198(unk_0xC59DF10B4FC39DF8(iVar2, 0)))
				{
					unk_0x8373805E5E68D815(Local_1209.f_4, 3);
				}
				else
				{
					unk_0x8373805E5E68D815(Local_1209.f_4, 4);
				}
			}
			else
			{
				unk_0x8373805E5E68D815(Local_1209.f_4, 4);
			}
		}
	}
}

int func_198(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_199(Param0);
	if (iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_199(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (func_200(Param0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_200(struct<3> Param0, int iParam3)
{
	switch (iParam3)
	{
		case 87:
			if (unk_0xDFC5B758BDC9546F(Param0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 88:
			if (unk_0xDFC5B758BDC9546F(Param0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 89:
			if (unk_0xDFC5B758BDC9546F(Param0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 90:
			if (unk_0xDFC5B758BDC9546F(Param0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_201(int iParam0)
{
	if (func_202(Global_1588660[iParam0 /*532*/].f_256.f_11))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_203(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xE2D4B51819FD3439(uParam1);
	if (func_206(iParam0, bParam2))
	{
		if (!iVar0 == func_205(iVar0))
		{
			unk_0x32479C670EB9962F(uParam1, func_205(iVar0));
			return 1;
		}
	}
	else if (!iVar0 == func_204(iVar0))
	{
		unk_0x32479C670EB9962F(uParam1, func_204(iVar0));
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 422;
			break;
	}
	return iParam0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 422:
			return 64;
			break;
	}
	return iParam0;
}

int func_206(int iParam0, bool bParam1)
{
	if (((!unk_0x912AD5A10E7633F0(iParam0, 0) && (!unk_0x630BD2AFB0686BBA(iParam0) && unk_0xF4EC4B99EA67DA10(iParam0))) && unk_0x652D2EEEF1D3E62C(unk_0x24D47569A04F80A8(iParam0)) < 0.5f) && func_71(iParam0, bParam1, bParam1, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_207(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_208(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
	}
}

int func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_209()
{
	if (func_215(unk_0x0C1D3C552325765B(), 1))
	{
		return func_210(unk_0x0C1D3C552325765B());
	}
	return 13;
}

int func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(iParam0);
	if (iVar0 != -1)
	{
		return func_211(iVar0);
	}
	return 1;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_212(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_212(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_213(int iParam0)
{
	if (!iParam0 == func_61())
	{
		if (func_215(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_214(iParam0)];
		}
	}
	return -1;
}

int func_214(int iParam0)
{
	if (iParam0 != func_61())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_61();
}

bool func_215(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_216(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_61();
}

int func_216(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_61())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 14:
		case 15:
		case 31:
		case 43:
		case 55:
		case 56:
		case 57:
		case 58:
			return 1;
			break;
	}
	return 0;
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		Global_2443212.f_4171.f_228[iParam0] = (Global_2443212.f_4171.f_228[iParam0] + iParam2);
	}
	else if (iParam1 != -1)
	{
		Global_2443212.f_4171.f_228[iParam0] = iParam1;
	}
	else
	{
		Global_2443212.f_4171.f_228[iParam0] = func_219(iParam0);
	}
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 300000;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 600000;
			break;
		
		case 3:
			return 600000;
			break;
		
		case 4:
			return 600000;
			break;
		
		case 5:
			return 2880000;
			break;
		
		case 6:
			return 300000;
			break;
		
		case 7:
			return 300000;
			break;
		
		case 8:
			return 300000;
			break;
		
		case 9:
			return 300000;
			break;
		
		case 10:
			return 600000;
			break;
		
		case 11:
			return 300000;
			break;
		
		case 12:
			return 900000;
			break;
		
		case 13:
			return 300000;
			break;
		
		case 14:
			return 0;
			break;
		
		case 15:
			return 180000;
			break;
		
		case 16:
			return 0;
			break;
		
		case 17:
			return 180000;
			break;
		
		case 18:
			return 180000;
			break;
		
		case 19:
			return 180000;
			break;
		
		case 20:
			return 300000;
			break;
		
		case 21:
			return 180000;
			break;
		
		case 22:
			return func_224();
			break;
		
		case 23:
			return func_220();
			break;
		
		case 24:
			return func_220();
			break;
		
		case 25:
			return func_220();
			break;
		
		case 26:
			return func_220();
			break;
		
		case 35:
			return 480000;
			break;
		
		case 36:
			return 180000;
			break;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 0;
	}
	return 0;
}

int func_220()
{
	if (unk_0x712B9E0F5CC8AE72(func_223(46), -1, 0, 0) || func_221(unk_0x0C1D3C552325765B()) == 194)
	{
		return Global_262145.f_9919;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (func_222(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_222(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 2:
			return "AM_CR_SecurityVan";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 127:
			return "dont_cross_the_line";
		
		case 74:
			return "GB_BIKER_JOUST";
		
		case 73:
			return "GB_BIKER_RACE_P2P";
		
		case 75:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 76:
			return "GB_BIKER_BAD_DEAL";
		
		case 77:
			return "GB_BIKER_RESCUE_CONTACT";
		
		case 78:
			return "GB_BIKER_LAST_RESPECTS";
		
		case joaat("mpsv_lp0_31"):
			return "GB_BIKER_CONTRACT_KILLING";
		
		case 80:
			return "GB_BIKER_CONTRABAND_SELL";
		
		case 81:
			return "GB_BIKER_CONTRABAND_DEFEND";
		
		case 82:
			return "GB_ILLICIT_GOODS_RESUPPLY";
		
		case 83:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
		
		case 91:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
		
		case 84:
			return "GB_BIKER_RIPPIN_IT_UP";
		
		case 85:
			return "GB_BIKER_FREE_PRISONER";
		
		case 86:
			return "GB_BIKER_SAFECRACKER";
		
		case 87:
			return "GB_BIKER_STEAL_BIKES";
		
		case 88:
			return "GB_BIKER_SEARCH_AND_DESTROY";
		
		case 89:
			return "AM_PENNED_IN";
		
		case 90:
			return "GB_BIKER_STAND_YOUR_GROUND";
		
		case 92:
			return "GB_BIKER_DESTROY_VANS";
		
		case 93:
			return "GB_BIKER_BURN_ASSETS";
		
		case 94:
			return "GB_BIKER_SHUTTLE";
		
		case 95:
			return "GB_BIKER_WHEELIE_RIDER";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 96:
			return "AM_BOAT_TAXI";
		
		case 97:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 110:
			return "am_rollercoaster";
		
		case 111:
			return "am_ferriswheel";
		
		case 112:
			return "AM_LAUNCHER";
		
		case 113:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 98:
			return "fm_hold_up_tut";
		
		case 99:
			return "AM_CAR_MOD_TUT";
		
		case 100:
			return "AM_CONTACT_REQUESTS";
		
		case 101:
			return "am_mission_launch";
		
		case 102:
			return "am_npc_invites";
		
		case 103:
			return "am_lester_cut";
		
		case 106:
			return "AM_VEHICLE_SPAWN";
		
		case 107:
			return "am_ronTrevor_Cut";
		
		case 108:
			return "AM_ARMYBASE";
		
		case 109:
			return "AM_PRISON";
		
		case 114:
			return "AM_ArmWrestling";
		
		case 121:
			return "fm_Bj_race_controler";
		
		case 115:
			return "AM_Darts";
		
		case 122:
			return "fm_deathmatch_controler";
		
		case 120:
			return "FM_Impromptu_DM_Controler";
		
		case 123:
			return "fm_hideout_controler";
		
		case 116:
			return "golf_mp";
		
		case 119:
			return "Pilot_School_MP";
		
		case 124:
			return "FM_Mission_Controller";
		
		case 125:
			return "FM_Race_Controler";
		
		case 117:
			return "Range_Modern_MP";
		
		case 126:
			return "FM_Horde_Controler";
		
		case 118:
			return "tennis_network_mp";
		
		case 104:
			return "am_heist_int";
		
		case 105:
			return "am_lowrider_int";
		
		case 128:
			return "am_darts_apartment";
		
		case 129:
			return "AM_Armwrestling_Apartment";
		
		case 130:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
	}
	return "";
}

int func_224()
{
	if (unk_0x712B9E0F5CC8AE72(func_223(46), -1, 0, 0) || func_221(unk_0x0C1D3C552325765B()) == 194)
	{
		return Global_262145.f_9680;
	}
	return 0;
}

void func_225(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_61())
	{
		if (unk_0x54F0AEFB11EA090A(iParam0))
		{
			iVar0 = unk_0xA43666ACD375E339(iParam0);
			if (unk_0xCB129F9A01D14082(iVar0))
			{
				if (func_227(iVar0, iParam1, 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_61())
	{
		if (!bParam2)
		{
			if (func_228(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_61())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	if (iParam1 != func_61())
	{
		if (iParam0 != func_61())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_61())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_229()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

void func_230()
{
	int iVar0;
	
	if (unk_0x712B9E0F5CC8AE72(func_223(46), -1, 0, 0) || func_221(unk_0x0C1D3C552325765B()) == 194)
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49))
			{
				if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 0) && !unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
				{
					iVar0 = unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49);
					if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
					{
						func_225(&(Global_2443212.f_4171.f_137[25 /*2*/]), 1, 0);
						func_218(25, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_1203, 2);
					}
				}
			}
		}
	}
}

void func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_232(int iParam0, bool bParam1, bool bParam2)
{
	return func_233(iParam0, !bParam1, bParam2);
}

int func_233(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_234(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_234(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_234(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_234(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0x6315EBE95A97CADF(iParam0, (iVar1 - 1), 0))
		{
			iVar2 = unk_0x8FD32443A080784B(iParam0, (iVar1 - 1), 0);
			if (!unk_0xEB361B4BD195A4D3(iVar2))
			{
				if (unk_0x54F0AEFB11EA090A(iVar2))
				{
					iVar3 = unk_0xA43666ACD375E339(iVar2);
					if (unk_0xCB129F9A01D14082(iVar3))
					{
						if (func_237(iVar3) && func_236(iVar3) == func_236(unk_0x0C1D3C552325765B()))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_236(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

int func_237(int iParam0)
{
	if (func_240(iParam0) || func_238(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	return func_239(iParam0, 6);
}

bool func_239(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

bool func_240(int iParam0)
{
	return func_239(iParam0, 0);
}

int func_241(int iParam0)
{
	if (unk_0x71F81D3603710A43("UsingForTimeTrial", 2))
	{
		if (unk_0x4184E6D274FCBFF1(iParam0, "UsingForTimeTrial"))
		{
			return unk_0x86DCF0A510F96A88(iParam0, "UsingForTimeTrial");
		}
	}
	return 0;
}

void func_242()
{
	unk_0x32479C670EB9962F(Local_1209.f_4, func_243(Local_1209.f_12));
	func_207(&(Local_1209.f_4), func_209());
}

int func_243(int iParam0)
{
	if (unk_0xBFD32C1D4D54E09B(iParam0))
	{
		return 226;
	}
	else if (unk_0xFC4346F9DE2AB4AE(iParam0))
	{
		return 64;
	}
	else if (unk_0xE3C6E31B7236489F(iParam0))
	{
		return 410;
	}
	else if (func_244(iParam0))
	{
		return 424;
	}
	else if (unk_0x1E3C80E7C4B8041B(iParam0))
	{
		return 423;
	}
	else if (unk_0xA727EEDD175A1189(iParam0))
	{
		return 512;
	}
	else if (iParam0 == joaat("rhino"))
	{
		return 421;
	}
	else if (iParam0 == joaat("submersible") || iParam0 == joaat("submersible2"))
	{
		return 308;
	}
	else
	{
		return 225;
	}
	return 225;
}

int func_244(int iParam0)
{
	if ((iParam0 == joaat("lazer") || iParam0 == joaat("besra")) || iParam0 == joaat("hydra"))
	{
		return 1;
	}
	return 0;
}

var func_245(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x52CE8C31DD5898E7(Param0);
	unk_0xC40118229E47A3D7(uVar0, func_234(unk_0xA86CA03D9749EEB3(), 1f, 1f));
	unk_0x71E206F83114C3D2(uVar0, iParam3);
	return uVar0;
}

Vector3 func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1625.612f, -1164.281f, 0.9334f;
			break;
		
		case 1:
			return -842.4f, -1450.9f, 6.1216f;
			break;
		
		case 2:
			return 1518.52f, 3793.135f, 32.5059f;
			break;
		
		case 3:
			return -733.5297f, 6058.233f, -0.2164f;
			break;
		
		case 4:
			return -731.8922f, -1452.252f, 5.4344f;
			break;
		
		case 5:
			return -1146.162f, -2864.179f, 12.9484f;
			break;
		
		case 6:
			return -475.3545f, 5988.729f, 30.3369f;
			break;
		
		case 7:
			return 1771.08f, 3240.02f, 41.1395f;
			break;
		
		case 8:
			return 1715.443f, 3262.264f, 40.1312f;
			break;
		
		case 9:
			return 520.1676f, -3025.94f, 5.0005f;
			break;
		
		case 10:
			return 575.773f, -3135.996f, -8.9949f;
			break;
		
		case 11:
			return -1093.372f, -438.2651f, 35.5541f;
			break;
		
		case 12:
			return 324.8864f, 3420.438f, 35.584f;
			break;
		
		case 13:
			return -323.5444f, 6099.317f, 30.4632f;
			break;
		
		case 14:
			return -1148.34f, -2395.467f, 12.9455f;
			break;
		
		case 15:
			return -1393.226f, -3264.653f, 12.9452f;
			break;
		
		case 16:
			return 2141.187f, 4820.23f, 40.2502f;
			break;
		
		case 17:
			return 2111.084f, 4778.608f, 40.0314f;
			break;
		
		case 18:
			return -1598.685f, -1118.419f, 1.7377f;
			break;
		
		case 19:
			return 1130.078f, 57.6775f, 79.7564f;
			break;
		
		case 20:
			return 2555.835f, 4682.137f, 32.9564f;
			break;
		
		case 21:
			return -114.7001f, 2803.052f, 52.0026f;
			break;
		
		case 22:
			return -3239.993f, 1348.457f, -1.5927f;
			break;
		
		case 23:
			return 3857.871f, 4462.278f, 1.7289f;
			break;
		
		case 24:
			return 478.3669f, -3370.251f, 5.0701f;
			break;
		
		case 25:
			return 391.9728f, -1620.703f, 28.2928f;
			break;
		
		case 26:
			return -1052.069f, -857.0933f, 3.8774f;
			break;
		
		case 27:
			return 1871.872f, 3688.038f, 32.6619f;
			break;
		
		case 28:
			return -481.9919f, 6024.172f, 30.3405f;
			break;
		
		case 29:
			return 3896.306f, 4256.556f, -4.8117f;
			break;
		
		case 30:
			return -1606.457f, 5232.181f, -2.0718f;
			break;
		
		case 31:
			return -1269.021f, -3376.487f, 12.945f;
			break;
		
		case 32:
			return -139.0162f, -998.1196f, 26.2774f;
			break;
		
		case 33:
			return -829.929f, -805.6035f, 18.1434f;
			break;
		
		case 34:
			return 844.3568f, 2371.801f, 52.6607f;
			break;
		
		case 35:
			return 63.4185f, 6516.104f, 30.5574f;
			break;
		
		case 36:
			return -2004.862f, 3018.931f, 31.8102f;
			break;
		
		case 37:
			return 293.9662f, 175.6589f, 103.0877f;
			break;
		
		case 38:
			return -311.6394f, 226.6151f, 86.8577f;
			break;
		
		case 39:
			return 1407.988f, 1118.845f, 113.8379f;
			break;
		
		case 40:
			return -1889.739f, 2047.279f, 139.8724f;
			break;
		
		case 41:
			return -3418.401f, 947.1168f, -2.4595f;
			break;
		
		case 42:
			return 708.3345f, 4102.075f, 27.1703f;
			break;
		
		case 43:
			return -970.3618f, -2980.645f, 12.9451f;
			break;
		
		case 44:
			return 306.7414f, -1459.145f, 45.5095f;
			break;
		
		case 45:
			return -190.3906f, 6287.018f, 30.4893f;
			break;
		
		case 46:
			return 2925.429f, 4635.042f, 47.5451f;
			break;
		
		case 47:
			return -1647.039f, 3089.381f, 30.6732f;
			break;
		
		case 48:
			return 2858.688f, -639.0317f, -2.6077f;
			break;
		
		case 49:
			return 3385.162f, 5187.801f, -2.4114f;
			break;
		
		case 50:
			return 2503.077f, -391.1114f, 93.1199f;
			break;
		
		case 51:
			return 434.5729f, -622.2773f, 27.5001f;
			break;
		
		case 52:
			return 2689.16f, 1643.111f, 23.5992f;
			break;
		
		case 53:
			return -86.2156f, 1909.311f, 195.7091f;
			break;
		
		case 54:
			return -702.2061f, 5805.36f, 16.2945f;
			break;
		
		case 55:
			return -911.9402f, -3288.849f, 12.9444f;
			break;
		
		case 56:
			return -1027.515f, -3452.344f, 12.9443f;
			break;
		
		case 57:
			return -1294.321f, -2215.746f, 12.9334f;
			break;
		
		case 58:
			return -1372.378f, -2739.984f, 12.9449f;
			break;
		
		case 59:
			return 1445.472f, 3071.839f, 39.9571f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_247()
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(Global_2443212.f_5810, 4))
	{
		unk_0x88B0F0DC270164B7(&iLocal_1202, 0);
		unk_0x09C86C0C5CA26B1E(&(Global_2443212.f_5810), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2443212.f_5810, 0))
	{
		if (!unk_0x08BA6DD398CA197C(Global_2443212.f_5810, 1) && !unk_0x08BA6DD398CA197C(Global_2443212.f_5810, 2))
		{
			if (func_4(&(Local_1209.f_7), 10000, 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_2443212.f_5810), 2);
				if (unk_0x08BA6DD398CA197C(Global_2443212.f_5810, 3))
				{
					unk_0x09C86C0C5CA26B1E(&(Global_2443212.f_5810), 0);
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 1))
			{
				if (!unk_0x08BA6DD398CA197C(Local_1209.f_0, 0))
				{
					iVar0 = Global_2443212.f_3258.f_66;
					if (iVar0 != 0)
					{
						unk_0x491067A8E906F22D(iVar0);
						if (unk_0x2C1B5A0D3E233FC3(iVar0))
						{
							if (!unk_0x08BA6DD398CA197C(Local_1209.f_1, 0))
							{
								if (func_251(unk_0x6A3DEBF89FDFEB17(false) + 1, 0, 1))
								{
									unk_0x23DFD22869618226(unk_0x6A3DEBF89FDFEB17(false) + 1);
									unk_0x88B0F0DC270164B7(&(Local_1209.f_1), 0);
								}
							}
							else if (unk_0xD28B39973EB5D6B4(1))
							{
								unk_0x88B0F0DC270164B7(&Local_1209, 0);
								unk_0x88B0F0DC270164B7(&Local_1209, 6);
								if (func_249(iVar0, Global_2443212.f_3696, Global_2443212.f_3699, 0))
								{
									Local_1209.f_5 = iLocal_1421;
									Local_1209.f_11 = func_248(iVar0);
									Local_1209.f_12 = iVar0;
									Local_1209.f_1 = 0;
									unk_0x23DFD22869618226((unk_0x6A3DEBF89FDFEB17(false) - 1));
									unk_0x2C07692AA3545079(iVar0);
									unk_0x88B0F0DC270164B7(&(Global_2443212.f_5810), 1);
									if (unk_0x08BA6DD398CA197C(Global_2443212.f_5810, 3))
									{
										unk_0x09C86C0C5CA26B1E(&(Global_2443212.f_5810), 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		func_3(&(Local_1209.f_7));
	}
}

int func_248(int iParam0)
{
	if ((unk_0xE3C6E31B7236489F(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"))
	{
		return 0;
	}
	if (unk_0xFC4346F9DE2AB4AE(iParam0))
	{
		return 1;
	}
	if (unk_0x0778B61C8A904D0B(iParam0) || unk_0xA727EEDD175A1189(iParam0))
	{
		return 2;
	}
	if (unk_0x1E3C80E7C4B8041B(iParam0))
	{
		return 3;
	}
	return 2;
}

int func_249(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	if (!unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49) && !unk_0xD3FACCDA4D66AEAD(Global_2432628.f_588[unk_0x0C1D3C552325765B()]))
	{
		if (func_250(iParam0))
		{
			if (func_54(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), iParam0, Param1, uParam4, 0, 1, 0, 0, 1, 1, 0))
			{
				func_50();
				Global_2482149.f_280 = unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49);
				unk_0x74207974B5483203(unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49));
				if (bParam5)
				{
					unk_0x93399EEBD0090AD6(unk_0x63CE7A3848B84093(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49), 1, 1);
				}
				Global_2482149.f_5277 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

bool func_251(int iParam0, bool bParam1, bool bParam2)
{
	return func_252(1, iParam0, 1, bParam1, bParam2);
}

int func_252(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(Global_1353353, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_256(iParam0) - func_255(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_255(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_256(iParam0) - func_254(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_255(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_256(iParam0) - func_255(iParam0, 1));
		}
		if (!bParam4 && Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 3)
		{
			iVar1 = (iVar1 - func_253(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1353353.f_1;
			break;
		
		case 1:
			return Global_1353353.f_2;
			break;
		
		case 2:
			return Global_1353353.f_3;
			break;
	}
	return 0;
}

int func_255(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_209;
			}
			else
			{
				return unk_0x12FCC59A8F519B65(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_210;
			}
			else
			{
				return unk_0x6A3DEBF89FDFEB17(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_211;
			}
			else
			{
				return unk_0xD647AEF519458F05(!bParam1);
			}
			break;
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1353361;
			break;
		
		case 1:
			return Global_1353362;
			break;
		
		case 2:
			return Global_1353363;
			break;
	}
	return 0;
}

void func_257()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	bVar1 = false;
	bVar2 = false;
	if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 7))
	{
		iVar0 = func_248(Global_2432628.f_3442);
		bVar2 = true;
		bVar1 = true;
	}
	else if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 3))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 4))
	{
		iVar0 = 1;
		bVar1 = true;
	}
	else if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 5))
	{
		iVar0 = 2;
		bVar1 = true;
	}
	else if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 6))
	{
		iVar0 = 3;
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar8 = unk_0x0C1D3C552325765B();
		if (bVar1)
		{
			iVar6 = 0;
			while (iVar6 < 5)
			{
				if (bVar1)
				{
					if (!unk_0x08BA6DD398CA197C(Local_239[iVar8 /*30*/].f_5[iVar6 /*4*/].f_1, 1))
					{
						if (unk_0x08BA6DD398CA197C(Local_239[iVar8 /*30*/].f_5[iVar6 /*4*/].f_1, 0))
						{
							func_76(iVar6);
						}
						func_35(0, 1, 1);
						Local_1209.f_2 = iVar6;
						bVar1 = false;
					}
				}
				iVar6++;
			}
		}
		iVar9 = 0;
		if (Local_1209.f_2 != -1)
		{
			iVar10 = -1;
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < 60)
			{
				if (!func_290(iVar7))
				{
					bVar12 = Global_2432628.f_3442 == joaat("hydra");
					if (func_289(iVar7, iVar0) || (bVar12 && func_289(iVar7, 1)))
					{
						if (func_288(unk_0x0C1D3C552325765B(), iVar7) || bVar2)
						{
							if (func_287(iVar7) || !bVar2)
							{
								iVar11 = 0;
								if (bVar2)
								{
									iVar11 = Global_2432628.f_3442;
								}
								else
								{
									iVar11 = func_277(unk_0x0C1D3C552325765B(), iVar7);
								}
								if (iVar11 != 0)
								{
									if (!unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 5) || func_276(iVar11))
									{
										if (!func_275(iVar11) || func_274(iVar7))
										{
											if (!func_273(iVar11) || func_271(iVar7))
											{
												if (!func_270(iVar11) || func_267(iVar7))
												{
													if (func_266(iVar7, iVar11))
													{
														if (iVar10 == -1)
														{
															iVar10 = iVar7;
															iVar9 = iVar11;
														}
														else
														{
															if (func_265(unk_0x0C1D3C552325765B(), 1, 0) && Global_1588660[iVar8 /*532*/].f_256.f_11 > -1)
															{
																Var3 = { Global_1049287[Global_1588660[iVar8 /*532*/].f_256.f_11 /*1908*/].f_3[0 /*3*/] };
															}
															else
															{
																Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
															}
															if (unk_0xB7A628320EFF8E47(Var3, func_246(iVar7)) < unk_0xB7A628320EFF8E47(Var3, func_246(iVar10)))
															{
																iVar10 = iVar7;
																iVar9 = iVar11;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar7++;
			}
			if (iVar10 != -1)
			{
				Local_1209.f_3 = iVar10;
				Local_1209.f_5 = iLocal_1421;
				unk_0x88B0F0DC270164B7(&Local_1209, 0);
				Local_1209.f_11 = iVar0;
				Local_1209.f_12 = iVar9;
				if (bVar2)
				{
					unk_0x88B0F0DC270164B7(&Local_1209, 6);
				}
				if (unk_0x08BA6DD398CA197C(Global_2432628.f_3441, 12))
				{
					unk_0x88B0F0DC270164B7(&Local_1209, 14);
				}
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
		}
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
		{
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_3441), 1);
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_3441), 2);
		}
		else
		{
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_3441), 1);
			if (!bVar1)
			{
				if (iVar9 != 0)
				{
					Global_2432628.f_3442 = iVar9;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_3441), 2);
					func_258("VS_TCK_L", func_264(iVar0, 1), func_209(), 0, 0, 1);
				}
			}
		}
	}
}

int func_258(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x212C24688D441F9E(iParam3);
	}
	unk_0xBDE6EEC5F6BDC060(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
	}
	else
	{
		Global_2471194 = { func_263(unk_0x0C1D3C552325765B()) };
		if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
		{
			iVar1 = 0;
			if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2471124.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xF02E9753777E6C9C(iVar2, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar1, 0, Global_2471124, unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), Global_1316386, Global_1316387, Global_1316388);
		}
		else
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
	}
	func_259(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_259(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_262() || !unk_0x1504F110F2576375()) || !func_24(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_260(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_261(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_262()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

struct<13> func_263(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

char* func_264(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "VS_TCK_LB";
				break;
			
			case 1:
				return "VS_TCK_LH";
				break;
			
			case 2:
				return "VS_TCK_LC";
				break;
			
			case 3:
				return "VS_TCK_LP";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "VS_TCK_00";
				break;
			
			case 1:
				return "VS_TCK_01";
				break;
			
			case 2:
				return "VS_TCK_02";
				break;
			
			case 3:
				return "VS_TCK_03";
				break;
			}
	}
	return "";
}

int func_265(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_61())
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 != joaat("seashark") && iParam1 != joaat("seashark2"))
			{
				return 0;
			}
			break;
		
		case 38:
			if (iParam1 == joaat("rhino"))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_269(iParam0))
	{
		if (func_268(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 0;
					break;
				
				case 5:
					return 0;
					break;
				
				case 6:
					return 0;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
			break;
		
		case 1:
			return 7;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
		
		case 7:
			return 3;
			break;
		
		case 8:
			return 2;
			break;
		
		case 9:
			return 3;
			break;
		
		case 10:
			return 2;
			break;
		
		case 11:
			return 2;
			break;
		
		case 12:
			return 2;
			break;
		
		case 13:
			return 2;
			break;
		
		case 14:
			return 4;
			break;
		
		case 15:
			return 2;
			break;
		
		case 16:
			return 3;
			break;
		
		case 17:
			return 2;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 4;
			break;
		
		case 20:
			return 2;
			break;
		
		case 21:
			return 2;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 3;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 1;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 2;
			break;
		
		case 32:
			return 4;
			break;
		
		case 33:
			return 2;
			break;
		
		case 34:
			return 2;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 5;
			break;
		
		case 37:
			return 2;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 5;
			break;
		
		case 44:
			return 2;
			break;
		
		case 45:
			return 2;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 2;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 2;
			break;
		
		case 51:
			return 2;
			break;
		
		case 52:
			return 2;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 3;
			break;
		
		case 55:
			return 3;
			break;
		
		case 56:
			return 5;
			break;
		
		case 57:
			return 3;
			break;
		
		case 58:
			return 4;
			break;
		
		case 59:
			return 2;
			break;
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 == joaat("tug"))
	{
		return 1;
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_269(iParam0))
	{
		if (func_272(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_272(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
					return 1;
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_273(int iParam0)
{
	if ((((((((((((((((((iParam0 == joaat("stunt") || iParam0 == joaat("cuban800")) || iParam0 == joaat("duster")) || iParam0 == joaat("frogger")) || iParam0 == joaat("maverick")) || iParam0 == joaat("marquis")) || iParam0 == joaat("jetmax")) || iParam0 == joaat("squalo")) || iParam0 == joaat("tropic")) || iParam0 == joaat("seashark")) || iParam0 == joaat("submersible")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("suntrap")) || iParam0 == joaat("crusader")) || iParam0 == joaat("annihilator")) || iParam0 == joaat("mammatus")) || iParam0 == joaat("stretch")) || iParam0 == joaat("barracks")) || iParam0 == joaat("besra"))
	{
		return 0;
	}
	return 1;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
			break;
	}
	return 1;
}

int func_275(int iParam0)
{
	if (iParam0 == joaat("submersible") || iParam0 == joaat("submersible2"))
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0)
{
	if ((iParam0 == joaat("riot") || iParam0 == joaat("bulldozer")) || iParam0 == joaat("blazer"))
	{
		return 0;
	}
	return 1;
}

int func_277(int iParam0, int iParam1)
{
	unk_0xEB6337D14A471B33(unk_0xDF658EB6CA91DFBC());
	return func_278(iParam1, unk_0xB5BF1B58C833F7A9(0, func_279(func_283(iParam0), iParam1)));
}

int func_278(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
				
				case 1:
					return joaat("jetmax");
					break;
				
				case 2:
					return joaat("submersible");
					break;
				
				case 3:
					return joaat("marquis");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
				
				case 1:
					return joaat("jetmax");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("maverick");
					break;
				
				case 1:
					return joaat("frogger");
					break;
				
				case 2:
					return joaat("annihilator");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("maverick");
					break;
				
				case 1:
					return joaat("cargobob");
					break;
				
				case 2:
					return joaat("frogger");
					break;
				
				case 3:
					return joaat("annihilator");
					break;
				
				case 4:
					return joaat("buzzard");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("maverick");
					break;
				
				case 1:
					return joaat("annihilator");
					break;
				
				case 2:
					return joaat("buzzard");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("maverick");
					break;
				
				case 1:
					return joaat("cargobob");
					break;
				
				case 2:
					return joaat("frogger");
					break;
				
				case 3:
					return joaat("annihilator");
					break;
				
				case 4:
					return joaat("buzzard");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("mammatus");
					break;
				
				case 1:
					return joaat("velum");
					break;
				
				case 2:
					return joaat("titan");
					break;
				
				case 3:
					return joaat("stunt");
					break;
				
				case 4:
					return joaat("luxor");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("barracks");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("submersible");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("barracks");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("barracks");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("barracks");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("mammatus");
					break;
				
				case 1:
					return joaat("velum");
					break;
				
				case 2:
					return joaat("stunt");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("mammatus");
					break;
				
				case 1:
					return joaat("velum");
					break;
				
				case 2:
					return joaat("stunt");
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return joaat("cargobob");
					break;
				
				case 1:
					return joaat("frogger");
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return joaat("mammatus");
					break;
				
				case 1:
					return joaat("velum");
					break;
				
				case 2:
					return joaat("stunt");
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return joaat("blazer");
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return joaat("blazer");
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return joaat("blazer");
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return joaat("blazer");
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return joaat("jetmax");
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return joaat("jetmax");
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return joaat("cargobob");
					break;
				
				case 1:
					return joaat("buzzard");
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return joaat("riot");
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return joaat("riot");
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return joaat("riot");
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return joaat("riot");
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return joaat("submersible");
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
				
				case 1:
					return joaat("submersible");
					break;
				
				case 2:
					return joaat("marquis");
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return joaat("titan");
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return joaat("lazer");
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return joaat("stretch");
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return joaat("stretch");
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return joaat("stretch");
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return joaat("stretch");
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return joaat("marquis");
					break;
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return joaat("marquis");
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return joaat("luxor");
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return joaat("maverick");
					break;
				
				case 1:
					return joaat("cargobob");
					break;
				
				case 2:
					return joaat("frogger");
					break;
				
				case 3:
					return joaat("annihilator");
					break;
				
				case 4:
					return joaat("buzzard");
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return joaat("blazer");
					break;
				
				case 1:
					return joaat("bulldozer");
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return joaat("barracks");
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return joaat("barracks");
					break;
				
				case 1:
					return joaat("blazer");
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
				
				case 1:
					return joaat("jetmax");
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return joaat("seashark");
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return joaat("maverick");
					break;
				
				case 1:
					return joaat("annihilator");
					break;
			}
			break;
	}
	return 0;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < func_282(iParam1))
	{
		if (iParam0 >= func_280(func_278(iParam1, iVar1)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_280(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8000)
	{
		if (func_281(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("seashark");
			break;
		
		case 7:
			return joaat("maverick");
			break;
		
		case 10:
			return joaat("barracks");
			break;
		
		case 12:
			return joaat("mammatus");
			break;
		
		case 15:
			return joaat("blazer");
			break;
		
		case 17:
			return joaat("jetmax");
			break;
		
		case 20:
			return joaat("velum");
			break;
		
		case 22:
			return joaat("cargobob");
			break;
		
		case 25:
			return joaat("riot");
			break;
		
		case 27:
			return joaat("submersible");
			break;
		
		case 30:
			return joaat("frogger");
			break;
		
		case 32:
			return joaat("titan");
			break;
		
		case 35:
			return joaat("bulldozer");
			break;
		
		case 37:
			return joaat("annihilator");
			break;
		
		case 40:
			return joaat("stunt");
			break;
		
		case 42:
			return joaat("buzzard");
			break;
		
		case 44:
			return joaat("lazer");
			break;
		
		case 46:
			return joaat("stretch");
			break;
		
		case 48:
			return joaat("marquis");
			break;
		
		case 50:
			return joaat("luxor");
			break;
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 4;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 3;
			break;
		
		case 7:
			return 5;
			break;
		
		case 8:
			return 5;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 3;
			break;
		
		case 15:
			return 3;
			break;
		
		case 16:
			return 2;
			break;
		
		case 17:
			return 3;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 1;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 1;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 1;
			break;
		
		case 36:
			return 1;
			break;
		
		case 37:
			return 1;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 5;
			break;
		
		case 45:
			return 2;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 2;
			break;
		
		case 48:
			return 2;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 2;
			break;
		
		case 51:
			return 0;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 0;
			break;
		
		case 54:
			return 0;
			break;
		
		case 55:
			return 0;
			break;
		
		case 56:
			return 0;
			break;
		
		case 57:
			return 0;
			break;
		
		case 58:
			return 0;
			break;
		
		case 59:
			return 0;
			break;
	}
	return 0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = func_285(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_284(iVar0, 0);
}

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_285(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_38(-1)];
			}
			else if (func_286(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_38(-1)];
	}
	return 0;
}

int func_286(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 25:
		case 26:
		case 27:
		case 28:
		case 36:
			return 0;
			break;
	}
	return 1;
}

int func_288(int iParam0, int iParam1)
{
	if (func_283(iParam0) >= func_280(func_278(iParam1, 0)))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	return unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_2[func_79(iParam0)], func_78(iParam0));
}

void func_291()
{
	int iVar0;
	int iVar1;
	
	if (Global_2432628.f_3440 != 0)
	{
		iVar1 = unk_0x0C1D3C552325765B();
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (unk_0x08BA6DD398CA197C(Global_2432628.f_3440, iVar0))
			{
				if (unk_0x08BA6DD398CA197C(Local_239[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1, 0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_239[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1, 3))
					{
						unk_0x88B0F0DC270164B7(&(Local_239[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1), 3);
					}
					Local_239[iVar1 /*30*/].f_5[iVar0 /*4*/].f_2++;
					if (Local_239[iVar1 /*30*/].f_5[iVar0 /*4*/].f_2 >= 2)
					{
						if (unk_0x08BA6DD398CA197C(Local_239[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1, 1))
						{
							if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 6))
							{
								unk_0x88B0F0DC270164B7(&iLocal_1201, 0);
								func_307(func_309(22), 1, 0, 0f);
								func_294(func_309(22), 5, 2, 1);
							}
							else
							{
								func_293(func_264(Local_1209.f_11, 0), 1);
								func_294(func_292(Local_1209.f_11), 5, 2, 1);
							}
							func_35(0, 1, 1);
						}
						func_76(iVar0);
					}
				}
				unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3440), iVar0);
			}
			iVar0++;
		}
	}
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_309(23);
			break;
		
		case 1:
			return func_309(24);
			break;
		
		case 2:
			return func_309(25);
			break;
		
		case 3:
			return func_309(26);
			break;
	}
	return 0;
}

int func_293(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_259(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_294(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	
	StringCopy(&Var0, func_306(iParam1), 16);
	StringCopy(&Var4, func_305(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar8 = 1287308202;
			break;
		
		case 1:
			iVar8 = 691372038;
			break;
		
		case 2:
			iVar8 = 1480707108;
			break;
		
		case 3:
			iVar8 = 1512499951;
			break;
		
		case 4:
			iVar8 = 562283735;
			break;
		
		case 5:
			iVar8 = -154732333;
			break;
		
		case 6:
			iVar8 = -1362660491;
			break;
		
		case 7:
			iVar8 = 645708827;
			break;
		
		case 8:
			iVar8 = 767907967;
			break;
		
		case 9:
			iVar8 = -1970151306;
			break;
		
		case 10:
			iVar8 = 718859568;
			break;
		
		case 11:
			iVar8 = -1955564771;
			break;
		
		case 12:
			iVar8 = 892388724;
			break;
	}
	if (func_304())
	{
		func_295(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_2572880[iVar9 /*73*/].f_8.f_43 = { Var0 };
		Global_2572880[iVar9 /*73*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0x258D6E1C5F0486E3(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_295(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_304())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
			if (iParam1 > 0)
			{
				func_296(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
			func_296(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_304())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_26()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_303(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_302(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_297(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_297(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_298(iParam0);
	}
}

void func_298(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_304())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_301(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_299(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_299(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_300(&(uParam0->f_8.f_3));
	func_300(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_300(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_301(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_302(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_303(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_304())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_304()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

char* func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		default:
	}
	return "DEFAULT";
}

void func_307(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_4 = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 = (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_308(iVar1, 0);
	}
}

void func_308(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_311(iParam0) >= 0)
	{
		iVar0 = func_311(iParam0);
	}
	else
	{
		iVar0 = func_310(iParam0);
	}
	return iVar0;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 1)
			{
				return 200;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 2)
			{
				return 400;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 3)
			{
				return 600;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 4)
			{
				return 800;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5461;
			break;
		
		case 10:
			return Global_262145.f_4115;
			break;
		
		case 11:
			return Global_262145.f_4116;
			break;
		
		case 8:
			return Global_262145.f_4113;
			break;
		
		case 0:
			return Global_262145.f_4099;
			break;
		
		case 9:
			return Global_262145.f_4114;
			break;
		
		case 13:
			return Global_262145.f_4118;
			break;
		
		case 12:
			return Global_262145.f_4117;
			break;
		
		case 2:
			return Global_262145.f_4109;
			break;
		
		case 14:
			return Global_262145.f_4119;
			break;
		
		case 20:
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 1)
			{
				return Global_262145.f_5468;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 2)
			{
				return Global_262145.f_5469;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 3)
			{
				return Global_262145.f_5470;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 4)
			{
				return Global_262145.f_5471;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 5)
			{
				return Global_262145.f_5472;
			}
			break;
		
		case 6:
			return Global_262145.f_4112;
			break;
		
		case 22:
			return Global_262145.f_4125;
			break;
		
		case 23:
			return Global_262145.f_4126;
			break;
		
		case 24:
			return Global_262145.f_4127;
			break;
		
		case 25:
			return Global_262145.f_4128;
			break;
		
		case 26:
			return Global_262145.f_4129;
			break;
		
		case 35:
			return Global_262145.f_6037;
			break;
		
		case 15:
			return Global_262145.f_5462;
			break;
		
		case 17:
			return Global_262145.f_5462;
			break;
		
		case 18:
			return Global_262145.f_5462;
			break;
		
		case 19:
			return Global_262145.f_5462;
			break;
		
		case 21:
			return Global_262145.f_5462;
			break;
		
		case 36:
			return Global_262145.f_6502;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_11304;
			break;
		
		case 41:
			return Global_262145.f_11305;
			break;
		
		case 42:
			return Global_262145.f_11306;
			break;
		
		case 43:
			return Global_262145.f_13311;
			break;
		
		case 44:
			return Global_262145.f_13313;
			break;
	}
	return 0;
}

void func_312()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	float fVar15;
	
	iVar0 = unk_0x848AF823A8EA3C62();
	bVar3 = false;
	bVar11 = false;
	bVar12 = false;
	bVar13 = false;
	if (!unk_0x1489FFC2CBA39486(unk_0xA00C21A2AE68AB7B()))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 0))
		{
			if (!iLocal_1591[iVar1])
			{
				iVar14 = 0;
				if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 1))
				{
					iVar14 = Local_1209.f_12;
				}
				else
				{
					iVar14 = Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_3;
				}
				if (iVar14 != 0)
				{
					unk_0x491067A8E906F22D(iVar14);
					if (func_336(iVar0, Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/]))
					{
						if (unk_0x2C1B5A0D3E233FC3(iVar14))
						{
							if (!unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 2))
							{
								if (func_251(unk_0x6A3DEBF89FDFEB17(false) + 1, 0, 1))
								{
									unk_0x23DFD22869618226(unk_0x6A3DEBF89FDFEB17(false) + 1);
									unk_0x88B0F0DC270164B7(&(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1), 2);
								}
							}
							else if (unk_0xD28B39973EB5D6B4(1))
							{
								if (!unk_0x08BA6DD398CA197C(iLocal_1226, 0))
								{
									iLocal_1226 = func_335(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/]);
									unk_0x88B0F0DC270164B7(&iLocal_1226, 0);
								}
								if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 3))
								{
									bVar11 = false;
								}
								else
								{
									bVar11 = true;
								}
								if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 1))
								{
									bVar12 = false;
									bVar13 = false;
								}
								else
								{
									bVar12 = true;
									bVar13 = true;
								}
								iVar10 = -1;
								iVar2 = 0;
								while (iVar2 < func_269(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/]))
								{
									if (unk_0x08BA6DD398CA197C(iLocal_1226, iVar2))
									{
										if (func_334(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2, iVar14))
										{
											if (!func_273(iVar14) || func_272(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2))
											{
												if (!func_270(iVar14) || func_268(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2))
												{
													Var7 = { func_333(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2) };
													if (func_332(Var7, 1752.63f, 3241.048f, 40.8582f, 50f, 1))
													{
														fVar6 = 90000f;
													}
													else
													{
														fVar6 = 22500f;
													}
													if (!bVar12 || unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var7) < fVar6)
													{
														if (!bVar13 || func_329(func_333(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2)))
														{
															fVar15 = 8.5f;
															if (func_53(iVar14))
															{
																fVar15 = 13f;
															}
															if (func_322(Var7, fVar15, 1f, 1f, 5f, bVar11, bVar11, bVar11, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
															{
																if (!func_315(Var7, 5f, unk_0x0C1D3C552325765B(), 1, 1))
																{
																	if (iVar10 == -1)
																	{
																		iVar10 = iVar2;
																	}
																	else
																	{
																		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
																		{
																		}
																		fVar5 = unk_0xB7A628320EFF8E47(func_333(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1));
																		fVar4 = unk_0xB7A628320EFF8E47(func_333(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1));
																		if (fVar5 < fVar4)
																		{
																			iVar10 = iVar2;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									iVar2++;
								}
								bVar3 = false;
								if (iVar10 != -1)
								{
									if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 1))
									{
										if (func_249(iVar14, func_333(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), func_314(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), !bVar11))
										{
											bVar3 = true;
										}
									}
									else if (func_313(iVar14, func_333(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), func_314(Local_239[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), !bVar11))
									{
										bVar3 = true;
									}
									if (bVar3)
									{
										iLocal_1591[iVar1] = 1;
										func_3(&(Local_1597[iVar1 /*2*/]));
									}
								}
								if (!bVar3)
								{
									unk_0x88B0F0DC270164B7(&(Global_2432628.f_3440), iVar1);
								}
								iLocal_1226 = 0;
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
}

int func_313(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	var uVar0;
	
	if (!unk_0x3CF373660FCFAFCE(uLocal_1225))
	{
		if (unk_0xD28B39973EB5D6B4(1))
		{
			if (func_250(iParam0))
			{
				if (func_54(&uLocal_1225, iParam0, Param1, uParam4, 0, 1, 1, 0, 1, 1, 0))
				{
					if (bParam5)
					{
						unk_0x93399EEBD0090AD6(unk_0x63CE7A3848B84093(uLocal_1225), 1, 1);
					}
					unk_0x74207974B5483203(unk_0x15F0E6D5AC2852F1(uLocal_1225));
					if ((unk_0xE3C6E31B7236489F(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"))
					{
						if (unk_0x4804D51795E820C2(unk_0x15F0E6D5AC2852F1(uLocal_1225)))
						{
							unk_0xCB50578868A841C2(unk_0x15F0E6D5AC2852F1(uLocal_1225), 1);
						}
					}
					if (iParam0 == joaat("riot"))
					{
						unk_0x4BA36C8825F6A05D(unk_0x15F0E6D5AC2852F1(uLocal_1225), 1);
					}
					unk_0x5DAC607F3BD7200B(unk_0x15F0E6D5AC2852F1(uLocal_1225), 0);
					unk_0x2C07692AA3545079(iParam0);
					uVar0 = unk_0x63CE7A3848B84093(uLocal_1225);
					unk_0x811BE251B0B13760(&uVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 128.3942f;
					break;
				
				case 1:
					return 126.3376f;
					break;
				
				case 2:
					return 297.7065f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 48.7493f;
					break;
				
				case 1:
					return 198.9416f;
					break;
				
				case 2:
					return 289.8739f;
					break;
				
				case 3:
					return 200.5427f;
					break;
				
				case 4:
					return 108.7796f;
					break;
				
				case 5:
					return 231.5205f;
					break;
				
				case 6:
					return 113.5552f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 54.4917f;
					break;
				
				case 1:
					return 46.0841f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 18.5108f;
					break;
				
				case 1:
					return 104.1463f;
					break;
				
				case 2:
					return 85.4181f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141.0742f;
					break;
				
				case 1:
					return 227.2749f;
					break;
				
				case 2:
					return 47.0297f;
					break;
				
				case 3:
					return 316.7026f;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 328.732f;
					break;
				
				case 1:
					return 329.0177f;
					break;
				
				case 2:
					return 330.9617f;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 311.0102f;
					break;
				
				case 1:
					return 33.6118f;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 281.0591f;
					break;
				
				case 1:
					return 90.7711f;
					break;
				
				case 2:
					return 73.0547f;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 194.2706f;
					break;
				
				case 1:
					return 60.7644f;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 269.9959f;
					break;
				
				case 1:
					return 90.0267f;
					break;
				
				case 2:
					return 268.5896f;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 176.2578f;
					break;
				
				case 1:
					return 178.7439f;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 207.6093f;
					break;
				
				case 1:
					return 297.165f;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 254.9279f;
					break;
				
				case 1:
					return 71.8704f;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 223.7918f;
					break;
				
				case 1:
					return 17.6402f;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 108.2881f;
					break;
				
				case 1:
					return 63.4159f;
					break;
				
				case 2:
					return 238.7379f;
					break;
				
				case 3:
					return 61.5823f;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 295.6942f;
					break;
				
				case 1:
					return 352.7602f;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 154.0427f;
					break;
				
				case 1:
					return 114.8721f;
					break;
				
				case 2:
					return 114.8721f;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 26.9609f;
					break;
				
				case 1:
					return 81.5986f;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 262.7139f;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 269.5952f;
					break;
				
				case 1:
					return 57.4738f;
					break;
				
				case 2:
					return 296.6961f;
					break;
				
				case 3:
					return 236.5353f;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 19.2357f;
					break;
				
				case 1:
					return 66.2577f;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 280.1033f;
					break;
				
				case 1:
					return 328.2375f;
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 45.3565f;
					break;
				
				case 1:
					return 56.6296f;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 271.0457f;
					break;
				
				case 1:
					return 266.7824f;
					break;
				
				case 2:
					return 27.9728f;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 357.9262f;
					break;
				
				case 1:
					return 179.5456f;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 319.9087f;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 127.4169f;
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 178.1762f;
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 223.3915f;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 242.5401f;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 26.4664f;
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 330.5493f;
					break;
				
				case 1:
					return 60.313f;
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 210.3199f;
					break;
				
				case 1:
					return 184.992f;
					break;
				
				case 2:
					return 336.1376f;
					break;
				
				case 3:
					return 71.1016f;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 89.7232f;
					break;
				
				case 1:
					return 89.9283f;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 162.5932f;
					break;
				
				case 1:
					return 358.3655f;
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 196.5324f;
					break;
				
				case 1:
					return 41.3923f;
					break;
				
				case 2:
					return 221.6984f;
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 60.0988f;
					break;
				
				case 1:
					return 326.8047f;
					break;
				
				case 2:
					return 330.187f;
					break;
				
				case 3:
					return 329.5951f;
					break;
				
				case 4:
					return 328.4178f;
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 70.9345f;
					break;
				
				case 1:
					return 68.5237f;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 286.6174f;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 89.9501f;
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 70.5529f;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 91.3514f;
					break;
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 179.8932f;
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 59.3762f;
					break;
				
				case 1:
					return 59.3762f;
					break;
				
				case 2:
					return 150.0709f;
					break;
				
				case 3:
					return 106.7946f;
					break;
				
				case 4:
					return 151.1216f;
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 318.5715f;
					break;
				
				case 1:
					return 319.2958f;
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 37.0057f;
					break;
				
				case 1:
					return 314.6925f;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 316.0815f;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 290.6283f;
					break;
				
				case 1:
					return 179.5908f;
					break;
				
				case 2:
					return 128.0372f;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 313.5646f;
					break;
				
				case 1:
					return 271.7294f;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 264.2661f;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 45.284f;
					break;
				
				case 1:
					return 47.2513f;
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 333.0959f;
					break;
				
				case 1:
					return 149.2864f;
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0.2415f;
					break;
				
				case 1:
					return 162.6802f;
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					return 297.1316f;
					break;
				
				case 1:
					return 27.0734f;
					break;
				
				case 2:
					return 268.753f;
					break;
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 243.3595f;
					break;
				
				case 1:
					return 46.2343f;
					break;
				
				case 2:
					return 264.9337f;
					break;
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 60.6503f;
					break;
				
				case 1:
					return 59.6904f;
					break;
				
				case 2:
					return 60.0332f;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 330.3975f;
					break;
				
				case 1:
					return 328.2082f;
					break;
				
				case 2:
					return 328.7614f;
					break;
				
				case 3:
					return 16.6396f;
					break;
				
				case 4:
					return 329.3139f;
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 149.9306f;
					break;
				
				case 1:
					return 91.1942f;
					break;
				
				case 2:
					return 149.7415f;
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 240.1494f;
					break;
				
				case 1:
					return 240.974f;
					break;
				
				case 2:
					return 149.688f;
					break;
				
				case 3:
					return 150.7797f;
					break;
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 314.5487f;
					break;
				
				case 1:
					return 104.3043f;
					break;
			}
			break;
	}
	return 0f;
}

int func_315(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_321(Param0, fParam3, iParam4, iParam5, 0) || func_316(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_316(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415586.f_556[iVar0] == 0)
			{
				if (func_317(Param0, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 1036831949))
				{
					if (func_8(iVar1, 0, 1) && func_8(iParam3, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_317(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_320(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_319(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_318(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x7466327978A6A24C((Var6.f_1 - Var3.f_1));
		uVar10 = unk_0x7466327978A6A24C((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7466327978A6A24C((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xDFC5B758BDC9546F(Param0, Var12, Var15, uVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_318(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x81972CB541487AFD(iParam0))
	{
		unk_0xA27A0E75635DD922(iParam0, uParam1, uParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_319(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_320(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_318(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_321(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_8(iVar1, 0, 1) && func_8(iParam4, 0, 1))
				{
					if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_8(iVar1, 0, 1) && func_8(iParam4, 0, 1))
				{
					if (Global_2415586.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_63(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415586.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_8(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_63(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_322(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_325(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_323(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993.f_2++;
	return 1;
}

int func_323(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_8(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_63(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_8(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_324(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_63(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_63(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_324(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

int func_325(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_8(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_324(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_326(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_63(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_326(int iParam0)
{
	if (func_328(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_263(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_327(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_214(iParam0);
	if (!iVar0 == func_61())
	{
		if (iVar0 == func_214(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0, var uParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_263(iParam0) };
		Global_2471207 = { func_263(uParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_329(struct<2> Param0, var uParam2)
{
	int iVar0;
	
	if (func_331(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1626500.f_84175 - 1))
		{
			if (!func_330(Global_1626500.f_84198[iVar0 /*26*/][0 /*3*/]))
			{
				if (Global_1626500.f_84198[iVar0 /*26*/].f_9 == 2 || Global_1626500.f_84198[iVar0 /*26*/].f_9 == 0)
				{
					if (Param0.f_0 >= Global_1626500.f_84198[iVar0 /*26*/][0 /*3*/] && Param0.f_0 <= Global_1626500.f_84198[iVar0 /*26*/][1 /*3*/])
					{
						if (Param0.f_1 >= Global_1626500.f_84198[iVar0 /*26*/][0 /*3*/].f_1 && Param0.f_1 <= Global_1626500.f_84198[iVar0 /*26*/][1 /*3*/].f_1)
						{
							return 0;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_330(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312443 != 0)
	{
		return 0;
	}
	if (!func_286(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1588660[iVar0 /*532*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_332(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x999A157665D69393(Param0, Param3, iParam7) <= fParam6;
}

Vector3 func_333(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1631.246f, -1163.333f, 0.3f;
					break;
				
				case 1:
					return -1625.349f, -1169.75f, 0.3f;
					break;
				
				case 2:
					return -1797.309f, -1230.585f, -9.1264f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -749.8039f, -1354.674f, 0f;
					break;
				
				case 1:
					return -910.5193f, -1470.917f, 0f;
					break;
				
				case 2:
					return -856.5488f, -1327.532f, 0f;
					break;
				
				case 3:
					return -964.499f, -1389.41f, 0f;
					break;
				
				case 4:
					return -886.3637f, -1406.731f, 0f;
					break;
				
				case 5:
					return -748.0861f, -1356.179f, 0f;
					break;
				
				case 6:
					return -831.141f, -1405.736f, 0f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1512.634f, 3835.713f, 26.8383f;
					break;
				
				case 1:
					return 1559.578f, 3856.338f, 28.1415f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -784.8182f, 6041.999f, -0.7305f;
					break;
				
				case 1:
					return -883.2603f, 5894.483f, -0.8811f;
					break;
				
				case 2:
					return -860.3978f, 5868.235f, -1.549f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -746.1063f, -1469.455f, 4.0005f;
					break;
				
				case 1:
					return -746.037f, -1433.329f, 4.0005f;
					break;
				
				case 2:
					return -721.4189f, -1473.288f, 4.0005f;
					break;
				
				case 3:
					return -724.7337f, -1444.458f, 4.0005f;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1178.358f, -2845.708f, 12.9489f;
					break;
				
				case 1:
					return -1145.978f, -2864.416f, 12.9484f;
					break;
				
				case 2:
					return -1112.593f, -2883.884f, 12.9473f;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -475.1143f, 5989.245f, 30.3369f;
					break;
				
				case 1:
					return -501.8407f, 6009.769f, 32.2276f;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1771.08f, 3240.02f, 41.1395f;
					break;
				
				case 1:
					return 1797.559f, 3245.241f, 41.6465f;
					break;
				
				case 2:
					return 1741.472f, 3204.248f, 42.1659f;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1731.493f, 3309.878f, 40.2235f;
					break;
				
				case 1:
					return 1738.024f, 3246.974f, 40.4643f;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 528.8665f, -3047.849f, 5.0696f;
					break;
				
				case 1:
					return 535.2628f, -3008.072f, 5.0455f;
					break;
				
				case 2:
					return 503.1337f, -3007.931f, 5.0455f;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 580.5875f, -3226.611f, 1f;
					break;
				
				case 1:
					return 534.6127f, -3191.551f, 1f;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1093.372f, -438.2651f, 35.5541f;
					break;
				
				case 1:
					return -1086.315f, -468.2271f, 35.0215f;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 324.8864f, 3420.438f, 35.584f;
					break;
				
				case 1:
					return 321.7055f, 3388.256f, 35.4034f;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return -323.5444f, 6099.317f, 30.4632f;
					break;
				
				case 1:
					return -369.179f, 6062.401f, 30.5001f;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return -1137.657f, -2413.389f, 12.9455f;
					break;
				
				case 1:
					return -1064.271f, -2393.096f, 12.9446f;
					break;
				
				case 2:
					return -1204.911f, -2352.334f, 12.9446f;
					break;
				
				case 3:
					return -1297.172f, -2478.122f, 12.9452f;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return -1408.833f, -3247.453f, 12.9452f;
					break;
				
				case 1:
					return -1359.219f, -3277.738f, 12.9452f;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 2141.187f, 4820.23f, 40.2502f;
					break;
				
				case 1:
					return 2108.61f, 4811.015f, 40.1942f;
					break;
				
				case 2:
					return 2072.526f, 4793.965f, 40.1768f;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 2132.722f, 4784.79f, 39.9702f;
					break;
				
				case 1:
					return 2086.732f, 4768.653f, 40.211f;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return -1598.685f, -1118.419f, 1.7377f;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 1117.077f, 46.5436f, 79.7564f;
					break;
				
				case 1:
					return 1137.769f, 51.3561f, 79.7561f;
					break;
				
				case 2:
					return 1130.108f, 76.4697f, 79.7564f;
					break;
				
				case 3:
					return 1144.474f, 75.4546f, 79.7561f;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 2553.382f, 4670.181f, 32.95f;
					break;
				
				case 1:
					return 2556.755f, 4689.345f, 32.9077f;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return -99.1753f, 2797.601f, 52.3487f;
					break;
				
				case 1:
					return -126.862f, 2800.191f, 52.108f;
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return -3255.344f, 1342.802f, 0.3f;
					break;
				
				case 1:
					return -3249.797f, 1372.798f, 0.3f;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 3864.182f, 4467.866f, 0f;
					break;
				
				case 1:
					return 3855.905f, 4455.515f, 0f;
					break;
				
				case 2:
					return 3847.072f, 4502.619f, -2.1762f;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 478.3669f, -3370.251f, 5.0701f;
					break;
				
				case 1:
					return 475.2874f, -3305.371f, 5.0699f;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 391.9728f, -1620.703f, 28.2928f;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1052.069f, -857.0933f, 3.8774f;
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 1871.872f, 3688.038f, 32.6619f;
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return -481.9919f, 6024.172f, 30.3405f;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 3904.306f, 4256.556f, 0f;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return -1596.885f, 5270.366f, 0f;
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return -1269.021f, -3376.487f, 12.945f;
					break;
				
				case 1:
					return -1198.397f, -3353.465f, 12.9451f;
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return -174.4752f, -1027.184f, 26.274f;
					break;
				
				case 1:
					return -122.7135f, -1035.771f, 26.274f;
					break;
				
				case 2:
					return -115.7006f, -966.1431f, 26.2815f;
					break;
				
				case 3:
					return -15.5297f, -1032.054f, 27.9431f;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return -831.7932f, -805.6157f, 18.1033f;
					break;
				
				case 1:
					return -830.1885f, -764.1763f, 20.6692f;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 844.3568f, 2371.801f, 52.6607f;
					break;
				
				case 1:
					return 896.6462f, 2352.743f, 50.6525f;
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 41.2553f, 6550.582f, 30.4309f;
					break;
				
				case 1:
					return 81.7379f, 6497.685f, 30.3527f;
					break;
				
				case 2:
					return 95.5255f, 6532.83f, 30.5575f;
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return -1973.573f, 2814.709f, 31.8102f;
					break;
				
				case 1:
					return -2144.201f, 3020.408f, 31.8099f;
					break;
				
				case 2:
					return -2014.309f, 2947.878f, 31.8102f;
					break;
				
				case 3:
					return -1925.972f, 3023.613f, 31.8102f;
					break;
				
				case 4:
					return -2120.685f, 3136.5f, 31.81f;
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 334.3942f, 133.9089f, 102.065f;
					break;
				
				case 1:
					return 326.1827f, 163.3389f, 102.4264f;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return -311.6394f, 226.6151f, 86.8577f;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 1407.988f, 1118.845f, 113.8379f;
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return -1889.739f, 2047.279f, 139.8724f;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return -3418.401f, 947.1168f, 0f;
					break;
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 708.3345f, 4102.075f, 27.1703f;
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return -970.3618f, -2980.645f, 12.9451f;
					break;
				
				case 1:
					return -988.0789f, -3013.493f, 12.9451f;
					break;
				
				case 2:
					return -1005.77f, -2926.375f, 12.9479f;
					break;
				
				case 3:
					return -936.8502f, -3096.981f, 12.9444f;
					break;
				
				case 4:
					return -1061.671f, -2917.649f, 12.9499f;
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 298.9857f, -1454.191f, 45.5095f;
					break;
				
				case 1:
					return 312.6378f, -1466.203f, 45.5095f;
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return -169.3283f, 6273.044f, 30.4894f;
					break;
				
				case 1:
					return -200.9346f, 6274.809f, 30.4893f;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 2925.429f, 4635.042f, 47.5451f;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return -1654.695f, 3043.887f, 30.8236f;
					break;
				
				case 1:
					return -1661.318f, 3114.839f, 30.7181f;
					break;
				
				case 2:
					return -1618.914f, 3115.795f, 30.5577f;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 2873.637f, -669.3932f, 0f;
					break;
				
				case 1:
					return 2870.997f, -614.9962f, 0f;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 3385.162f, 5187.801f, 0f;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 2511.7f, -342.5626f, 117.1864f;
					break;
				
				case 1:
					return 2512.238f, -427.2642f, 117.1888f;
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 401.4161f, -629.7783f, 27.5002f;
					break;
				
				case 1:
					return 441.2266f, -572.7964f, 27.4998f;
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 2677.947f, 1392.45f, 23.5557f;
					break;
				
				case 1:
					return 2769.881f, 1478.75f, 23.5236f;
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					return -49.5069f, 1965.848f, 188.7261f;
					break;
				
				case 1:
					return -52.8253f, 1949.417f, 189.1861f;
					break;
				
				case 2:
					return -143.8556f, 1894.998f, 196.3254f;
					break;
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return -678.5846f, 5795.767f, 16.331f;
					break;
				
				case 1:
					return -671.1857f, 5840.759f, 16.3313f;
					break;
				
				case 2:
					return -724.7985f, 5821.66f, 16.2562f;
					break;
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return -911.9402f, -3288.849f, 12.9444f;
					break;
				
				case 1:
					return -954.3091f, -3363.94f, 12.9444f;
					break;
				
				case 2:
					return -869.6125f, -3218.142f, 12.9444f;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return -987.2319f, -3414.757f, 12.8401f;
					break;
				
				case 1:
					return -1015.516f, -3414.757f, 12.8401f;
					break;
				
				case 2:
					return -955.7935f, -3527.459f, 13.0788f;
					break;
				
				case 3:
					return -1027.5f, -3525.832f, 13.1484f;
					break;
				
				case 4:
					return -1088.219f, -3509.009f, 13.1484f;
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return -1259.8f, -2176.397f, 12.9446f;
					break;
				
				case 1:
					return -1252.201f, -2244.846f, 12.9451f;
					break;
				
				case 2:
					return -1325.796f, -2192.625f, 12.9448f;
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return -1468.903f, -2730.941f, 12.9449f;
					break;
				
				case 1:
					return -1432.699f, -2667.548f, 12.9449f;
					break;
				
				case 2:
					return -1404.617f, -2793.91f, 12.9449f;
					break;
				
				case 3:
					return -1325.068f, -2838.748f, 12.9449f;
					break;
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 1402.169f, 3000.364f, 39.5511f;
					break;
				
				case 1:
					return 1473.407f, 3120.128f, 39.5341f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_334(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == joaat("submersible"))
					{
						return 0;
					}
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == joaat("shamal"))
					{
						return 0;
					}
					break;
			}
			break;
	}
	if (iParam2 == joaat("riot"))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (func_8(unk_0x81C85E54237F8A2E(iVar0), 1, 1) && func_221(unk_0x81C85E54237F8A2E(iVar0)) == 167)
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_335(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < func_269(iParam0))
	{
		bVar3 = false;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (!bVar3)
			{
				if (func_8(unk_0x81C85E54237F8A2E(iVar1), 0, 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(unk_0x81C85E54237F8A2E(iVar1)), 0), func_333(iParam0, iVar0)) < 36f)
					{
						bVar3 = true;
					}
				}
			}
			iVar1++;
		}
		if (!bVar3)
		{
			unk_0x88B0F0DC270164B7(&iVar2, iVar0);
		}
		iVar0++;
	}
	return iVar2;
}

int func_336(int iParam0, int iParam1)
{
	if (Local_105.f_2[iParam1] == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_337()
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	struct<4> Var7;
	
	if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
	}
	iVar2 = unk_0x0C1D3C552325765B();
	if (func_332(func_246(iLocal_1587), 1752.63f, 3241.048f, 40.8582f, 50f, 1))
	{
		fVar0 = 90000f;
	}
	else
	{
		fVar0 = 22500f;
	}
	if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), func_246(iLocal_1587)) < fVar0)
	{
		bVar3 = false;
		bVar4 = false;
		if (!func_290(iLocal_1587))
		{
			func_348(iLocal_1587);
			if (!bVar3)
			{
				if ((((!func_346(unk_0x0C1D3C552325765B()) && func_288(unk_0x0C1D3C552325765B(), iLocal_1587)) && !func_345(iLocal_1587)) && func_344() < 5) && !func_277(unk_0x0C1D3C552325765B(), iLocal_1587) == 0)
				{
					bVar3 = true;
				}
			}
		}
		if (((unk_0x08BA6DD398CA197C(Local_1209.f_0, 0) && !unk_0x08BA6DD398CA197C(Local_1209.f_0, 5)) && !unk_0x08BA6DD398CA197C(Local_1209.f_0, 1)) && Local_1209.f_3 == iLocal_1587)
		{
			bVar3 = true;
			bVar4 = true;
		}
		if (bVar3)
		{
			iVar6 = -1;
			if (bVar4)
			{
				iVar6 = Local_1209.f_2;
			}
			else
			{
				iVar5 = 0;
				while (iVar5 < 5)
				{
					if (iVar6 == -1)
					{
						if (!unk_0x08BA6DD398CA197C(Local_239[iVar2 /*30*/].f_5[iVar5 /*4*/].f_1, 0) && iVar5 != Local_1209.f_2)
						{
							iVar6 = iVar5;
						}
					}
					iVar5++;
				}
			}
			if (iVar6 != -1)
			{
				Var7 = -1;
				Var7.f_0 = iLocal_1587;
				Var7.f_1 = 0;
				unk_0x88B0F0DC270164B7(&(Var7.f_1), 0);
				if (bVar4)
				{
					unk_0x88B0F0DC270164B7(&(Var7.f_1), 1);
					unk_0x88B0F0DC270164B7(&Local_1209, 5);
					if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 3))
					{
						unk_0x09C86C0C5CA26B1E(&Local_1209, 3);
					}
					Var7.f_3 = Local_1209.f_12;
				}
				else
				{
					Var7.f_3 = func_277(unk_0x0C1D3C552325765B(), iLocal_1587);
					if (unk_0x712B9E0F5CC8AE72(func_223(46), -1, 0, 0) && !func_341(Var7.f_3))
					{
						iVar6 = -1;
						Var7.f_0 = -1;
						Var7.f_1 = 0;
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					Local_239[iVar2 /*30*/].f_5[iVar6 /*4*/] = { Var7 };
					func_340(func_81(1, 1), iVar2, iVar6, iLocal_1587);
					Local_239[iVar2 /*30*/].f_26++;
					func_339(iLocal_1587);
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), func_246(iLocal_1587)) > 40000f)
	{
		if (func_290(iLocal_1587))
		{
			func_77(iLocal_1587);
			func_338(iLocal_1587);
		}
	}
	iLocal_1587++;
	if (iLocal_1587 >= 60)
	{
		iLocal_1587 = 0;
	}
}

void func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_2[func_79(iParam0)], func_78(iParam0)))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_239[iVar0 /*30*/].f_2[func_79(iParam0)]), func_78(iParam0));
	}
}

void func_339(int iParam0)
{
	if (!unk_0x08BA6DD398CA197C(uLocal_1588[func_79(iParam0)], func_78(iParam0)))
	{
		unk_0x88B0F0DC270164B7(&(uLocal_1588[func_79(iParam0)]), func_78(iParam0));
	}
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 343;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, iParam0);
}

int func_341(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_342(&uVar1, iParam0, 0, -1))
	{
		iVar0 = uVar1;
	}
	if (iVar0 <= 0)
	{
		iVar0 = unk_0x717F6A2571CEDA28(iParam0);
	}
	if (iVar0 > 400000)
	{
		return 0;
	}
	return 1;
}

int func_342(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	if (iParam3 == 0)
	{
		bVar0 = true;
	}
	else if (iParam3 == 1)
	{
		bVar0 = false;
	}
	if (!unk_0x30A854527925CD1E(iParam1))
	{
		if (iParam1 != 0)
		{
		}
		return 0;
	}
	iVar1 = -1;
	switch (iParam1)
	{
		case joaat("adder"):
			iVar1 = 1000000;
			break;
		
		case joaat("akuma"):
			iVar1 = 9000;
			break;
		
		case joaat("asea"):
			iVar1 = 12000;
			break;
		
		case joaat("asterope"):
			iVar1 = 26000;
			break;
		
		case joaat("bagger"):
			iVar1 = 16000;
			if (bVar0)
			{
				if (Global_262145.f_15328 >= 0)
				{
					iVar1 = Global_262145.f_15328;
				}
			}
			break;
		
		case joaat("baller"):
			iVar1 = 90000;
			break;
		
		case joaat("baller2"):
			iVar1 = 90000;
			break;
		
		case joaat("banshee"):
			iVar1 = 90000;
			break;
		
		case joaat("bati"):
			iVar1 = 10000;
			break;
		
		case joaat("bati2"):
			iVar1 = 10000;
			break;
		
		case joaat("bfinjection"):
			iVar1 = 16000;
			break;
		
		case joaat("bison"):
			iVar1 = 30000;
			break;
		
		case joaat("bison2"):
			iVar1 = 30000;
			break;
		
		case joaat("bison3"):
			iVar1 = 30000;
			break;
		
		case joaat("bjxl"):
			iVar1 = 27000;
			break;
		
		case joaat("blazer"):
			iVar1 = 8000;
			break;
		
		case joaat("blazer2"):
			iVar1 = 8000;
			break;
		
		case joaat("blista"):
			iVar1 = 16000;
			break;
		
		case joaat("bobcatxl"):
			iVar1 = 23000;
			break;
		
		case joaat("bodhi2"):
			iVar1 = 12000;
			break;
		
		case joaat("boxville"):
			iVar1 = 25000;
			break;
		
		case joaat("boxville2"):
			iVar1 = 25000;
			break;
		
		case joaat("boxville3"):
			iVar1 = 25000;
			break;
		
		case joaat("buccaneer"):
			iVar1 = 28000;
			break;
		
		case joaat("buffalo"):
			iVar1 = 35000;
			break;
		
		case joaat("buffalo2"):
			iVar1 = 96000;
			break;
		
		case joaat("bullet"):
			iVar1 = 150000;
			break;
		
		case joaat("burrito"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito2"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito3"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito4"):
			iVar1 = 13000;
			break;
		
		case joaat("carbonizzare"):
			iVar1 = 195000;
			break;
		
		case joaat("carbonrs"):
			iVar1 = 40000;
			break;
		
		case joaat("cavalcade"):
			iVar1 = 60000;
			break;
		
		case joaat("cavalcade2"):
			iVar1 = 70000;
			break;
		
		case joaat("cheetah"):
			iVar1 = 650000;
			break;
		
		case joaat("cogcabrio"):
			iVar1 = 185000;
			break;
		
		case joaat("comet2"):
			iVar1 = 85000;
			break;
		
		case joaat("coquette"):
			iVar1 = 55000;
			break;
		
		case joaat("daemon"):
			iVar1 = 20000;
			break;
		
		case joaat("dilettante"):
			iVar1 = 25000;
			break;
		
		case joaat("dominator"):
			iVar1 = 35000;
			break;
		
		case joaat("double"):
			iVar1 = 12000;
			break;
		
		case joaat("dubsta"):
			iVar1 = 120000;
			break;
		
		case joaat("dubsta2"):
			iVar1 = 120000;
			break;
		
		case joaat("elegy2"):
			iVar1 = 92000;
			break;
		
		case joaat("emperor"):
			iVar1 = 8000;
			break;
		
		case joaat("emperor2"):
			iVar1 = 5000;
			break;
		
		case joaat("emperor3"):
			iVar1 = 5000;
			break;
		
		case joaat("entityxf"):
			iVar1 = 795000;
			break;
		
		case joaat("exemplar"):
			iVar1 = 205000;
			break;
		
		case joaat("f620"):
			iVar1 = 80000;
			break;
		
		case joaat("faggio2"):
			iVar1 = 5000;
			break;
		
		case joaat("felon"):
			iVar1 = 100000;
			break;
		
		case joaat("felon2"):
			iVar1 = 95000;
			break;
		
		case joaat("feltzer2"):
			iVar1 = 145000;
			break;
		
		case joaat("fq2"):
			iVar1 = 50000;
			break;
		
		case joaat("fugitive"):
			iVar1 = 24000;
			break;
		
		case joaat("fusilade"):
			iVar1 = 36000;
			break;
		
		case joaat("futo"):
			iVar1 = 9000;
			break;
		
		case joaat("gauntlet"):
			iVar1 = 32000;
			break;
		
		case joaat("gburrito"):
			iVar1 = 16000;
			break;
		
		case joaat("granger"):
			iVar1 = 35000;
			break;
		
		case joaat("gresley"):
			iVar1 = 29000;
			break;
		
		case joaat("habanero"):
			iVar1 = 42000;
			break;
		
		case joaat("hexer"):
			iVar1 = 15000;
			break;
		
		case joaat("hotknife"):
			iVar1 = 90000;
			break;
		
		case joaat("infernus"):
			iVar1 = 440000;
			break;
		
		case joaat("ingot"):
			iVar1 = 9000;
			break;
		
		case joaat("intruder"):
			iVar1 = 16000;
			break;
		
		case joaat("issi2"):
			iVar1 = 18000;
			break;
		
		case joaat("jackal"):
			iVar1 = 60000;
			break;
		
		case joaat("jb700"):
			iVar1 = 475000;
			break;
		
		case joaat("khamelion"):
			iVar1 = 100000;
			break;
		
		case joaat("landstalker"):
			iVar1 = 58000;
			break;
		
		case joaat("lguard"):
			iVar1 = 35000;
			break;
		
		case joaat("manana"):
			iVar1 = 8000;
			break;
		
		case joaat("mesa"):
			iVar1 = 30000;
			break;
		
		case joaat("minivan"):
			iVar1 = 30000;
			break;
		
		case joaat("monroe"):
			iVar1 = 490000;
			break;
		
		case joaat("nemesis"):
			iVar1 = 12000;
			break;
		
		case joaat("ninef"):
			iVar1 = 120000;
			break;
		
		case joaat("ninef2"):
			iVar1 = 130000;
			break;
		
		case joaat("oracle"):
			iVar1 = 82000;
			break;
		
		case joaat("oracle2"):
			iVar1 = 80000;
			break;
		
		case joaat("patriot"):
			iVar1 = 50000;
			break;
		
		case joaat("pcj"):
			iVar1 = 9000;
			break;
		
		case joaat("penumbra"):
			iVar1 = 24000;
			break;
		
		case joaat("peyote"):
			iVar1 = 12000;
			break;
		
		case joaat("phoenix"):
			iVar1 = 20000;
			break;
		
		case joaat("prairie"):
			iVar1 = 25000;
			break;
		
		case joaat("pranger"):
			iVar1 = 35000;
			break;
		
		case joaat("premier"):
			iVar1 = 10000;
			break;
		
		case joaat("primo"):
			iVar1 = 9000;
			break;
		
		case joaat("radi"):
			iVar1 = 32000;
			break;
		
		case joaat("rancherxl"):
			iVar1 = 9000;
			break;
		
		case joaat("rancherxl2"):
			iVar1 = 9000;
			break;
		
		case joaat("rapidgt"):
			iVar1 = 118000;
			break;
		
		case joaat("rapidgt2"):
			iVar1 = 136000;
			break;
		
		case joaat("ratloader"):
			iVar1 = 6000;
			break;
		
		case joaat("rebel"):
			iVar1 = 7000;
			break;
		
		case joaat("rebel2"):
			iVar1 = 22000;
			break;
		
		case joaat("regina"):
			iVar1 = 8000;
			break;
		
		case joaat("rocoto"):
			iVar1 = 85000;
			break;
		
		case joaat("ruffian"):
			iVar1 = 10000;
			break;
		
		case joaat("ruiner"):
			iVar1 = 10000;
			break;
		
		case joaat("rumpo"):
			iVar1 = 13000;
			break;
		
		case joaat("sabregt"):
			iVar1 = 15000;
			if (bVar0)
			{
				if (Global_262145.f_12446 >= 0)
				{
					iVar1 = Global_262145.f_12446;
				}
			}
			break;
		
		case joaat("sadler"):
			iVar1 = 35000;
			break;
		
		case joaat("sanchez"):
			iVar1 = 7000;
			break;
		
		case joaat("sandking"):
			iVar1 = 45000;
			break;
		
		case joaat("sandking2"):
			iVar1 = 45000;
			break;
		
		case joaat("schafter2"):
			iVar1 = 65000;
			break;
		
		case joaat("schwarzer"):
			iVar1 = 80000;
			break;
		
		case joaat("seashark"):
			iVar1 = 16899;
			break;
		
		case joaat("seminole"):
			iVar1 = 30000;
			break;
		
		case joaat("sentinel"):
			iVar1 = 60000;
			break;
		
		case joaat("sentinel2"):
			iVar1 = 60000;
			break;
		
		case joaat("serrano"):
			iVar1 = 60000;
			break;
		
		case joaat("speedo"):
			iVar1 = 15000;
			break;
		
		case joaat("speedo2"):
			iVar1 = 15000;
			break;
		
		case joaat("stanier"):
			iVar1 = 10000;
			break;
		
		case joaat("stinger"):
			iVar1 = 1000000;
			break;
		
		case joaat("stingergt"):
			iVar1 = 1000000;
			break;
		
		case joaat("stratum"):
			iVar1 = 10000;
			break;
		
		case joaat("stretch"):
			iVar1 = 30000;
			break;
		
		case joaat("sultan"):
			iVar1 = 12000;
			break;
		
		case joaat("superd"):
			iVar1 = 250000;
			break;
		
		case joaat("surano"):
			iVar1 = 99000;
			break;
		
		case joaat("surge"):
			iVar1 = 38000;
			break;
		
		case joaat("tailgater"):
			iVar1 = 55000;
			break;
		
		case joaat("taxi"):
			iVar1 = 13000;
			break;
		
		case joaat("tornado"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_12447 >= 0)
				{
					iVar1 = Global_262145.f_12447;
				}
			}
			break;
		
		case joaat("tornado2"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_12447 >= 0)
				{
					iVar1 = Global_262145.f_12447;
				}
			}
			break;
		
		case joaat("tornado3"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_12447 >= 0)
				{
					iVar1 = Global_262145.f_12447;
				}
			}
			break;
		
		case joaat("tornado4"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_12447 >= 0)
				{
					iVar1 = Global_262145.f_12447;
				}
			}
			break;
		
		case joaat("vacca"):
			iVar1 = 240000;
			break;
		
		case joaat("vader"):
			iVar1 = 9000;
			break;
		
		case joaat("vigero"):
			iVar1 = 21000;
			break;
		
		case joaat("voltic"):
			iVar1 = 80000;
			break;
		
		case joaat("voodoo2"):
			iVar1 = 5000;
			break;
		
		case joaat("washington"):
			iVar1 = 15000;
			break;
		
		case joaat("youga"):
			iVar1 = 16000;
			break;
		
		case joaat("zion"):
			iVar1 = 50000;
			break;
		
		case joaat("zion2"):
			iVar1 = 65000;
			break;
		
		case joaat("bmx"):
			iVar1 = 500;
			break;
		
		case joaat("scorcher"):
			iVar1 = 1000;
			break;
		
		case joaat("tribike"):
			iVar1 = 2500;
			break;
		
		case joaat("tribike2"):
			iVar1 = 2500;
			break;
		
		case joaat("tribike3"):
			iVar1 = 2500;
			break;
		
		case joaat("cruiser"):
			iVar1 = 3000;
			break;
		
		case joaat("ztype"):
			if (bVar0)
			{
				iVar1 = 1000000;
			}
			else
			{
				iVar1 = 10000000;
			}
			break;
	}
	if (bVar0 || iParam3 == 1)
	{
		switch (iParam1)
		{
			case joaat("adder"):
				iVar1 = 1000000;
				break;
			
			case joaat("airbus"):
				iVar1 = 550000;
				break;
			
			case joaat("akuma"):
				iVar1 = 9000;
				break;
			
			case joaat("annihilator"):
				iVar1 = 4000000;
				break;
			
			case joaat("baller2"):
				iVar1 = 90000;
				break;
			
			case joaat("banshee"):
				iVar1 = 105000;
				break;
			
			case joaat("barracks"):
				iVar1 = 450000;
				break;
			
			case joaat("bati"):
				iVar1 = 15000;
				break;
			
			case joaat("bati2"):
				iVar1 = 15000;
				break;
			
			case joaat("bfinjection"):
				iVar1 = 16000;
				break;
			
			case joaat("bison"):
				iVar1 = 30000;
				break;
			
			case joaat("blazer"):
				iVar1 = 8000;
				break;
			
			case joaat("bmx"):
				iVar1 = 800;
				break;
			
			case joaat("bullet"):
				iVar1 = 155000;
				break;
			
			case joaat("bus"):
				iVar1 = 500000;
				break;
			
			case joaat("buzzard"):
				iVar1 = 2000000;
				break;
			
			case joaat("carbonizzare"):
				iVar1 = 195000;
				break;
			
			case joaat("carbonrs"):
				iVar1 = 40000;
				break;
			
			case joaat("cargobob"):
				iVar1 = 185000;
				break;
			
			case joaat("cheetah"):
				iVar1 = 650000;
				break;
			
			case joaat("coach"):
				iVar1 = 525000;
				break;
			
			case joaat("cogcabrio"):
				iVar1 = 185000;
				break;
			
			case joaat("comet2"):
				iVar1 = 100000;
				break;
			
			case joaat("coquette"):
				iVar1 = 138000;
				break;
			
			case joaat("cruiser"):
				iVar1 = 800;
				break;
			
			case joaat("crusader"):
				iVar1 = 225000;
				break;
			
			case joaat("cuban800"):
				iVar1 = 240000;
				break;
			
			case joaat("dilettante"):
				iVar1 = 25000;
				break;
			
			case joaat("double"):
				iVar1 = 12000;
				break;
			
			case joaat("dubsta"):
				iVar1 = 70000;
				break;
			
			case joaat("dubsta2"):
				iVar1 = 70000;
				break;
			
			case joaat("dump"):
				iVar1 = 1000000;
				break;
			
			case joaat("duster"):
				iVar1 = 275000;
				break;
			
			case joaat("elegy2"):
				iVar1 = 95000;
				break;
			
			case joaat("entityxf"):
				iVar1 = 795000;
				break;
			
			case joaat("exemplar"):
				iVar1 = 205000;
				break;
			
			case joaat("faggio2"):
				iVar1 = 5000;
				break;
			
			case joaat("felon"):
				iVar1 = 90000;
				break;
			
			case joaat("felon2"):
				iVar1 = 95000;
				break;
			
			case joaat("feltzer2"):
				iVar1 = 145000;
				break;
			
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			
			case joaat("fugitive"):
				iVar1 = 24000;
				break;
			
			case joaat("gauntlet"):
				iVar1 = 32000;
				break;
			
			case joaat("hexer"):
				iVar1 = 15000;
				break;
			
			case joaat("hotknife"):
				iVar1 = 90000;
				break;
			
			case joaat("infernus"):
				iVar1 = 440000;
				break;
			
			case joaat("issi2"):
				iVar1 = 18000;
				break;
			
			case joaat("jb700"):
				iVar1 = 350000;
				break;
			
			case joaat("jetmax"):
				iVar1 = 299000;
				break;
			
			case joaat("journey"):
				iVar1 = 15000;
				break;
			
			case joaat("khamelion"):
				iVar1 = 100000;
				break;
			
			case joaat("luxor"):
				iVar1 = 1500000;
				break;
			
			case joaat("mammatus"):
				iVar1 = 300000;
				break;
			
			case joaat("marquis"):
				iVar1 = 413990;
				break;
			
			case joaat("maverick"):
				iVar1 = 780000;
				break;
			
			case joaat("monroe"):
				iVar1 = 490000;
				break;
			
			case joaat("mule"):
				iVar1 = 27000;
				break;
			
			case joaat("ninef"):
				iVar1 = 120000;
				break;
			
			case joaat("ninef2"):
				iVar1 = 130000;
				break;
			
			case joaat("oracle2"):
				iVar1 = 80000;
				break;
			
			case joaat("pcj"):
				iVar1 = 9000;
				break;
			
			case joaat("picador"):
				iVar1 = 9000;
				break;
			
			case joaat("rapidgt"):
				iVar1 = 132000;
				break;
			
			case joaat("rapidgt2"):
				iVar1 = 140000;
				break;
			
			case joaat("rentalbus"):
				iVar1 = 30000;
				break;
			
			case joaat("rocoto"):
				iVar1 = 85000;
				break;
			
			case joaat("ruffian"):
				iVar1 = 10000;
				break;
			
			case joaat("sanchez"):
				iVar1 = 7000;
				break;
			
			case joaat("sandking"):
				iVar1 = 45000;
				break;
			
			case joaat("schwarzer"):
				iVar1 = 80000;
				break;
			
			case joaat("scorcher"):
				iVar1 = 2000;
				break;
			
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			
			case joaat("squalo"):
				iVar1 = 196621;
				break;
			
			case joaat("stinger"):
				iVar1 = 850000;
				break;
			
			case joaat("stingergt"):
				iVar1 = 875000;
				break;
			
			case joaat("stretch"):
				iVar1 = 30000;
				break;
			
			case joaat("stunt"):
				iVar1 = 250000;
				break;
			
			case joaat("suntrap"):
				iVar1 = 25160;
				break;
			
			case joaat("superd"):
				iVar1 = 250000;
				break;
			
			case joaat("surano"):
				iVar1 = 110000;
				break;
			
			case joaat("titan"):
				iVar1 = 5000000;
				break;
			
			case joaat("tribike"):
				iVar1 = 10000;
				break;
			
			case joaat("tribike2"):
				iVar1 = 10000;
				break;
			
			case joaat("tribike3"):
				iVar1 = 10000;
				break;
			
			case joaat("tropic"):
				iVar1 = 22000;
				break;
			
			case joaat("vacca"):
				iVar1 = 240000;
				break;
			
			case joaat("vader"):
				iVar1 = 9000;
				break;
			
			case joaat("velum"):
				iVar1 = 450000;
				break;
			
			case joaat("vigero"):
				iVar1 = 21000;
				break;
			
			case joaat("voltic"):
				iVar1 = 150000;
				break;
			
			case joaat("zion"):
				iVar1 = 60000;
				break;
			
			case joaat("zion2"):
				iVar1 = 65000;
				break;
			
			case joaat("ztype"):
				iVar1 = 950000;
				break;
		}
		switch (iParam1)
		{
			case joaat("annihilator"):
				iVar1 = 1825000;
				break;
			
			case joaat("blazer3"):
				iVar1 = 69000;
				break;
			
			case joaat("bodhi2"):
				iVar1 = 25000;
				break;
			
			case joaat("buzzard"):
				iVar1 = 1750000;
				break;
			
			case joaat("dilettante2"):
				iVar1 = 25000;
				break;
			
			case joaat("dloader"):
				iVar1 = 15000;
				break;
			
			case joaat("dune2"):
				iVar1 = 1000000;
				break;
			
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			
			case joaat("luxor"):
				iVar1 = 1625000;
				break;
			
			case joaat("mesa3"):
				iVar1 = 87000;
				break;
			
			case joaat("peyote"):
				iVar1 = 38000;
				break;
			
			case joaat("rhino"):
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_4067 >= 0)
					{
						iVar1 = Global_262145.f_4067;
					}
				}
				break;
			
			case joaat("romero"):
				iVar1 = 45000;
				break;
			
			case joaat("sentinel2"):
				iVar1 = 95000;
				break;
			
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			
			case joaat("surfer"):
				iVar1 = 11000;
				break;
			
			case joaat("surfer2"):
				iVar1 = 5000;
				break;
			
			case joaat("titan"):
				iVar1 = 2000000;
				break;
			
			case joaat("towtruck2"):
				iVar1 = 32000;
				break;
		}
		switch (iParam1)
		{
			case joaat("bodhi2"):
				iVar1 = 25000;
				if (bVar0)
				{
					if (Global_262145.f_4868 >= 0)
					{
						iVar1 = Global_262145.f_4868;
					}
				}
				break;
			
			case joaat("dune"):
				iVar1 = 20000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 20000;
					if (Global_262145.f_4869 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4869;
					}
				}
				break;
			
			case joaat("rebel"):
				iVar1 = 3000;
				break;
			
			case joaat("sadler"):
				iVar1 = 35000;
				break;
			
			case joaat("sanchez2"):
				iVar1 = 8000;
				break;
			
			case joaat("sandking2"):
				iVar1 = 38000;
				break;
		}
		switch (iParam1)
		{
			case joaat("asea"):
				iVar1 = 12000;
				break;
			
			case joaat("asterope"):
				iVar1 = 26000;
				if (bVar0)
				{
					if (Global_262145.f_5387 >= 0)
					{
						iVar1 = Global_262145.f_5387;
					}
				}
				break;
			
			case joaat("bobcatxl"):
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_5388 >= 0)
					{
						iVar1 = Global_262145.f_5388;
					}
				}
				break;
			
			case joaat("cavalcade"):
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 60000;
					if (Global_262145.f_4024 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4024;
					}
				}
				break;
			
			case joaat("cavalcade2"):
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 70000;
					if (Global_262145.f_5389 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_5389;
					}
				}
				break;
			
			case joaat("granger"):
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_5390 >= 0)
					{
						iVar1 = Global_262145.f_5390;
					}
				}
				break;
			
			case joaat("ingot"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_5391 >= 0)
					{
						iVar1 = Global_262145.f_5391;
					}
				}
				break;
			
			case joaat("intruder"):
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_5392 >= 0)
					{
						iVar1 = Global_262145.f_5392;
					}
				}
				break;
			
			case joaat("minivan"):
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_5393 >= 0)
					{
						iVar1 = Global_262145.f_5393;
					}
				}
				break;
			
			case joaat("premier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_5394 >= 0)
					{
						iVar1 = Global_262145.f_5394;
					}
				}
				break;
			
			case joaat("radi"):
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_5395 >= 0)
					{
						iVar1 = Global_262145.f_5395;
					}
				}
				break;
			
			case joaat("rancherxl"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_5396 >= 0)
					{
						iVar1 = Global_262145.f_5396;
					}
				}
				break;
			
			case joaat("ratloader"):
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_5416 >= 0)
					{
						iVar1 = Global_262145.f_5416;
					}
				}
				break;
			
			case joaat("stanier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_5397 >= 0)
					{
						iVar1 = Global_262145.f_5397;
					}
				}
				break;
			
			case joaat("stratum"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_5398 >= 0)
					{
						iVar1 = Global_262145.f_5398;
					}
				}
				break;
			
			case joaat("washington"):
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_5399 >= 0)
					{
						iVar1 = Global_262145.f_5399;
					}
				}
				break;
			
			case joaat("cargobob"):
				iVar1 = 1790000;
				if (bVar0)
				{
					if (Global_262145.f_13988 >= 0)
					{
						iVar1 = Global_262145.f_13988;
					}
				}
				break;
			
			case joaat("cargobob2"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_13989 >= 0)
					{
						iVar1 = Global_262145.f_13989;
					}
				}
				break;
			
			case joaat("tug"):
				iVar1 = 1250000;
				if (bVar0)
				{
					if (Global_262145.f_13995 >= 0)
					{
						iVar1 = Global_262145.f_13995;
					}
				}
				break;
			
			case joaat("nimbus"):
				iVar1 = 1900000;
				if (bVar0)
				{
					if (Global_262145.f_13993 >= 0)
					{
						iVar1 = Global_262145.f_13993;
					}
				}
				break;
			
			case joaat("brickade"):
				iVar1 = 1110000;
				if (bVar0)
				{
					if (Global_262145.f_13991 >= 0)
					{
						iVar1 = Global_262145.f_13991;
					}
				}
				break;
			
			case joaat("windsor2"):
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_13997 >= 0)
					{
						iVar1 = Global_262145.f_13997;
					}
				}
				break;
			
			case joaat("prototipo"):
				iVar1 = 2700000;
				if (bVar0)
				{
					if (Global_262145.f_14002 >= 0)
					{
						iVar1 = Global_262145.f_14002;
					}
				}
				break;
			
			case joaat("fmj"):
				iVar1 = 1750000;
				if (bVar0)
				{
					if (Global_262145.f_13992 >= 0)
					{
						iVar1 = Global_262145.f_13992;
					}
				}
				break;
			
			case joaat("bestiagts"):
				iVar1 = 610000;
				if (bVar0)
				{
					if (Global_262145.f_13990 >= 0)
					{
						iVar1 = Global_262145.f_13990;
					}
				}
				break;
			
			case joaat("xls"):
				iVar1 = 253000;
				if (bVar0)
				{
					if (Global_262145.f_13998 >= 0)
					{
						iVar1 = Global_262145.f_13998;
					}
				}
				break;
			
			case joaat("xls2"):
				iVar1 = 522000;
				if (bVar0)
				{
					if (Global_262145.f_13999 >= 0)
					{
						iVar1 = Global_262145.f_13999;
					}
				}
				break;
			
			case joaat("seven70"):
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_14000 >= 0)
					{
						iVar1 = Global_262145.f_14000;
					}
				}
				break;
			
			case joaat("pfister811"):
				iVar1 = 1135000;
				if (bVar0)
				{
					if (Global_262145.f_14001 >= 0)
					{
						iVar1 = Global_262145.f_14001;
					}
				}
				break;
			
			case joaat("reaper"):
				iVar1 = 1595000;
				if (bVar0)
				{
					if (Global_262145.f_13465 >= 0)
					{
						iVar1 = Global_262145.f_13465;
					}
				}
				break;
			
			case joaat("rumpo3"):
				iVar1 = 130000;
				if (bVar0)
				{
					if (Global_262145.f_13994 >= 0)
					{
						iVar1 = Global_262145.f_13994;
					}
				}
				break;
			
			case joaat("volatus"):
				iVar1 = 2295000;
				if (bVar0)
				{
					if (Global_262145.f_13996 >= 0)
					{
						iVar1 = Global_262145.f_13996;
					}
				}
				break;
			
			case joaat("le7b"):
				iVar1 = 2475000;
				if (bVar0)
				{
					if (Global_262145.f_14765 >= 0)
					{
						iVar1 = Global_262145.f_14765;
					}
				}
				break;
			
			case joaat("omnis"):
				iVar1 = 701000;
				if (bVar0)
				{
					if (Global_262145.f_14766 >= 0)
					{
						iVar1 = Global_262145.f_14766;
					}
				}
				break;
			
			case joaat("tropos"):
				iVar1 = 816000;
				if (bVar0)
				{
					if (Global_262145.f_14767 >= 0)
					{
						iVar1 = Global_262145.f_14767;
					}
				}
				break;
			
			case joaat("brioso"):
				iVar1 = 155000;
				if (bVar0)
				{
					if (Global_262145.f_14768 >= 0)
					{
						iVar1 = Global_262145.f_14768;
					}
				}
				break;
			
			case joaat("trophytruck"):
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_14769 >= 0)
					{
						iVar1 = Global_262145.f_14769;
					}
				}
				break;
			
			case joaat("trophytruck2"):
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_14770 >= 0)
					{
						iVar1 = Global_262145.f_14770;
					}
				}
				break;
			
			case joaat("contender"):
				iVar1 = 250000;
				if (bVar0)
				{
					if (Global_262145.f_14771 >= 0)
					{
						iVar1 = Global_262145.f_14771;
					}
				}
				break;
			
			case joaat("cliffhanger"):
				iVar1 = 225000;
				if (bVar0)
				{
					if (Global_262145.f_14772 >= 0)
					{
						iVar1 = Global_262145.f_14772;
					}
				}
				break;
			
			case joaat("bf400"):
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_14773 >= 0)
					{
						iVar1 = Global_262145.f_14773;
					}
				}
				break;
			
			case joaat("tyrus"):
				iVar1 = 2550000;
				if (bVar0)
				{
					if (Global_262145.f_14763 >= 0)
					{
						iVar1 = Global_262145.f_14763;
					}
				}
				break;
			
			case joaat("lynx"):
				iVar1 = 1735000;
				if (bVar0)
				{
					if (Global_262145.f_14774 >= 0)
					{
						iVar1 = Global_262145.f_14774;
					}
				}
				break;
			
			case joaat("sheava"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_14762 >= 0)
					{
						iVar1 = Global_262145.f_14762;
					}
				}
				break;
			
			case joaat("rallytruck"):
				if (!bParam2)
				{
					iVar1 = 1300000;
					if (bVar0)
					{
						if (Global_262145.f_14776 >= 0)
						{
							iVar1 = Global_262145.f_14776;
						}
					}
				}
				else
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_14777 >= 0)
						{
							iVar1 = Global_262145.f_14777;
						}
					}
				}
				break;
			
			case joaat("tampa2"):
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_14764 >= 0)
					{
						iVar1 = Global_262145.f_14764;
					}
				}
				break;
			
			case joaat("gargoyle"):
				iVar1 = 120000;
				if (bVar0)
				{
					if (Global_262145.f_14775 >= 0)
					{
						iVar1 = Global_262145.f_14775;
					}
				}
				break;
			
			case joaat("esskey"):
				iVar1 = 264000;
				if (bVar0)
				{
					if (Global_262145.f_15333 >= 0)
					{
						iVar1 = Global_262145.f_15333;
					}
				}
				break;
			
			case joaat("nightblade"):
				iVar1 = 100000;
				if (bVar0)
				{
					if (Global_262145.f_15336 >= 0)
					{
						iVar1 = Global_262145.f_15336;
					}
				}
				break;
			
			case joaat("defiler"):
				iVar1 = 412000;
				if (bVar0)
				{
					if (Global_262145.f_15332 >= 0)
					{
						iVar1 = Global_262145.f_15332;
					}
				}
				break;
			
			case joaat("avarus"):
				iVar1 = 116000;
				if (bVar0)
				{
					if (Global_262145.f_15327 >= 0)
					{
						iVar1 = Global_262145.f_15327;
					}
				}
				break;
			
			case joaat("zombiea"):
				iVar1 = 99000;
				if (bVar0)
				{
					if (Global_262145.f_15343 >= 0)
					{
						iVar1 = Global_262145.f_15343;
					}
				}
				break;
			
			case joaat("zombieb"):
				iVar1 = 122000;
				if (bVar0)
				{
					if (Global_262145.f_15344 >= 0)
					{
						iVar1 = Global_262145.f_15344;
					}
				}
				break;
			
			case joaat("chimera"):
				iVar1 = 210000;
				if (bVar0)
				{
					if (Global_262145.f_15330 >= 0)
					{
						iVar1 = Global_262145.f_15330;
					}
				}
				break;
			
			case joaat("daemon2"):
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_15331 >= 0)
					{
						iVar1 = Global_262145.f_15331;
					}
				}
				break;
			
			case joaat("ratbike"):
				iVar1 = 48000;
				if (bVar0)
				{
					if (Global_262145.f_15338 >= 0)
					{
						iVar1 = Global_262145.f_15338;
					}
				}
				break;
			
			case joaat("shotaro"):
				iVar1 = 2375000;
				if (bVar0)
				{
					if (Global_262145.f_15340 >= 0)
					{
						iVar1 = Global_262145.f_15340;
					}
				}
				break;
			
			case joaat("raptor"):
				iVar1 = 648000;
				if (bVar0)
				{
					if (Global_262145.f_15337 >= 0)
					{
						iVar1 = Global_262145.f_15337;
					}
				}
				break;
			
			case joaat("hakuchou2"):
				iVar1 = 976000;
				if (bVar0)
				{
					if (Global_262145.f_15334 >= 0)
					{
						iVar1 = Global_262145.f_15334;
					}
				}
				break;
			
			case joaat("blazer4"):
				iVar1 = 81000;
				if (bVar0)
				{
					if (Global_262145.f_15329 >= 0)
					{
						iVar1 = Global_262145.f_15329;
					}
				}
				break;
			
			case joaat("sanctus"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_15339 >= 0)
					{
						iVar1 = Global_262145.f_15339;
					}
				}
				break;
			
			case joaat("vortex"):
				iVar1 = 356000;
				if (bVar0)
				{
					if (Global_262145.f_15341 >= 0)
					{
						iVar1 = Global_262145.f_15341;
					}
				}
				break;
			
			case joaat("manchez"):
				iVar1 = 67000;
				if (bVar0)
				{
					if (Global_262145.f_15335 >= 0)
					{
						iVar1 = Global_262145.f_15335;
					}
				}
				break;
			
			case joaat("tornado6"):
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_16389 >= 0)
					{
						iVar1 = Global_262145.f_16389;
					}
				}
				break;
			
			case joaat("youga2"):
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_16392 >= 0)
					{
						iVar1 = Global_262145.f_16392;
					}
				}
				break;
			
			case joaat("wolfsbane"):
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_15342 >= 0)
					{
						iVar1 = Global_262145.f_15342;
					}
				}
				break;
			
			case joaat("faggio3"):
				iVar1 = 55000;
				if (bVar0)
				{
					if (Global_262145.f_16390 >= 0)
					{
						iVar1 = Global_262145.f_16390;
					}
				}
				break;
			
			case joaat("faggio"):
				iVar1 = 47500;
				if (bVar0)
				{
					if (Global_262145.f_16391 >= 0)
					{
						iVar1 = Global_262145.f_16391;
					}
				}
				break;
			}
	}
	switch (iParam1)
	{
		case joaat("paradise"):
			iVar1 = 50000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 25000;
				if (Global_262145.f_5983 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_5983;
				}
			}
			break;
		
		case joaat("bifta"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5981 >= 0)
				{
					iVar1 = Global_262145.f_5981;
				}
			}
			break;
		
		case joaat("kalahari"):
			iVar1 = 40000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 40000;
				if (Global_262145.f_5982 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_5982;
				}
			}
			break;
		
		case joaat("speeder"):
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_5984 >= 0)
				{
					iVar1 = Global_262145.f_5984;
				}
			}
			break;
		
		case joaat("btype"):
			iVar1 = 1150000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 750000;
				if (Global_262145.f_5411 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_5411;
				}
			}
			break;
		
		case joaat("jester"):
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_5383 >= 0)
				{
					iVar1 = Global_262145.f_5383;
				}
			}
			break;
		
		case joaat("turismor"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_5385 >= 0)
				{
					iVar1 = Global_262145.f_5385;
				}
			}
			break;
		
		case joaat("alpha"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_5381 >= 0)
				{
					iVar1 = Global_262145.f_5381;
				}
			}
			break;
		
		case joaat("vestra"):
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_5436 >= 0)
				{
					iVar1 = Global_262145.f_5436;
				}
			}
			break;
		
		case joaat("massacro"):
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_5384 >= 0)
				{
					iVar1 = Global_262145.f_5384;
				}
			}
			break;
		
		case joaat("zentorno"):
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_5386 >= 0)
				{
					iVar1 = Global_262145.f_5386;
				}
			}
			break;
		
		case joaat("huntley"):
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_5382 >= 0)
				{
					iVar1 = Global_262145.f_5382;
				}
			}
			break;
		
		case joaat("thrust"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5985 >= 0)
				{
					iVar1 = Global_262145.f_5985;
				}
			}
			break;
		
		case joaat("blade"):
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_6459 >= 0)
				{
					iVar1 = Global_262145.f_6459;
				}
			}
			break;
		
		case joaat("warrener"):
			iVar1 = 125000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 120000;
				if (Global_262145.f_6462 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6462;
				}
			}
			break;
		
		case joaat("glendale"):
			iVar1 = 200000;
			if (bVar0)
			{
				if (Global_262145.f_6460 >= 0)
				{
					iVar1 = Global_262145.f_6460;
				}
			}
			break;
		
		case joaat("rhapsody"):
			iVar1 = 100000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 140000;
				if (Global_262145.f_6461 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6461;
				}
			}
			break;
		
		case joaat("panto"):
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_6463 >= 0)
				{
					iVar1 = Global_262145.f_6463;
				}
			}
			break;
		
		case joaat("dubsta3"):
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_6464 >= 0)
				{
					iVar1 = Global_262145.f_6464;
				}
			}
			break;
		
		case joaat("pigalle"):
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_6458 >= 0)
				{
					iVar1 = Global_262145.f_6458;
				}
			}
			break;
		
		case joaat("besra"):
			iVar1 = 658000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1150000;
				if (Global_262145.f_6854 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6854;
				}
			}
			break;
		
		case joaat("miljet"):
			iVar1 = 1750000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1700000;
				if (Global_262145.f_6855 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6855;
				}
			}
			break;
		
		case joaat("swift"):
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_6856 >= 0)
					{
						iVar1 = Global_262145.f_6856;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_6857 >= 0)
					{
						iVar1 = Global_262145.f_6857;
					}
				}
			}
			break;
		
		case joaat("coquette2"):
			if (bParam2)
			{
				iVar1 = 350000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_6852 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_6852;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_6853 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_6853;
					}
				}
			}
			break;
		
		case joaat("sovereign"):
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_6617 >= 0)
				{
					iVar1 = Global_262145.f_6617;
				}
			}
			break;
		
		case joaat("monster"):
			iVar1 = 742000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 742014;
				if (Global_262145.f_6616 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6616;
				}
			}
			break;
		
		case joaat("innovation"):
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_7132 >= 0)
				{
					iVar1 = Global_262145.f_7132;
				}
			}
			break;
		
		case joaat("hakuchou"):
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_7133 >= 0)
				{
					iVar1 = Global_262145.f_7133;
				}
			}
			break;
		
		case joaat("furoregt"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_7134 >= 0)
				{
					iVar1 = Global_262145.f_7134;
				}
			}
			break;
		
		case joaat("boxville4"):
			iVar1 = 45000;
			if (bVar0)
			{
				if (Global_262145.f_7364 >= 0)
				{
					iVar1 = Global_262145.f_7364;
				}
			}
			break;
		
		case joaat("casco"):
			iVar1 = 680000;
			if (bVar0)
			{
				if (Global_262145.f_7365 >= 0)
				{
					iVar1 = Global_262145.f_7365;
				}
			}
			break;
		
		case joaat("dinghy3"):
			iVar1 = 125000;
			if (bVar0)
			{
				if (Global_262145.f_7366 >= 0)
				{
					iVar1 = Global_262145.f_7366;
				}
			}
			break;
		
		case joaat("enduro"):
			iVar1 = 48000;
			if (bVar0)
			{
				if (Global_262145.f_7367 >= 0)
				{
					iVar1 = Global_262145.f_7367;
				}
			}
			break;
		
		case joaat("gburrito2"):
			iVar1 = 65000;
			if (bVar0)
			{
				if (Global_262145.f_7368 >= 0)
				{
					iVar1 = Global_262145.f_7368;
				}
			}
			break;
		
		case joaat("guardian"):
			iVar1 = 375000;
			if (bVar0)
			{
				if (Global_262145.f_7369 >= 0)
				{
					iVar1 = Global_262145.f_7369;
				}
			}
			break;
		
		case joaat("hydra"):
			iVar1 = 3000000;
			if (bVar0)
			{
				if (Global_262145.f_7370 >= 0)
				{
					iVar1 = Global_262145.f_7370;
				}
			}
			break;
		
		case joaat("insurgent"):
			iVar1 = 1350000;
			if (bVar0)
			{
				if (Global_262145.f_7371 >= 0)
				{
					iVar1 = Global_262145.f_7371;
				}
			}
			break;
		
		case joaat("insurgent2"):
			iVar1 = 675000;
			if (bVar0)
			{
				if (Global_262145.f_7372 >= 0)
				{
					iVar1 = Global_262145.f_7372;
				}
			}
			break;
		
		case joaat("kuruma"):
			iVar1 = 95000;
			if (bVar0)
			{
				if (Global_262145.f_7373 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7373;
				}
			}
			break;
		
		case joaat("kuruma2"):
			iVar1 = 448000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 525000;
				if (Global_262145.f_7374 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7374;
				}
			}
			break;
		
		case joaat("lectro"):
			iVar1 = 750000;
			if (bVar0)
			{
				if (Global_262145.f_7375 >= 0)
				{
					iVar1 = Global_262145.f_7375;
				}
			}
			break;
		
		case joaat("pbus"):
			iVar1 = 550000;
			if (bVar0)
			{
				if (Global_262145.f_7381 >= 0)
				{
					iVar1 = Global_262145.f_7381;
				}
			}
			break;
		
		case joaat("mule3"):
			iVar1 = 32500;
			if (bVar0)
			{
				if (Global_262145.f_7376 >= 0)
				{
					iVar1 = Global_262145.f_7376;
				}
			}
			break;
		
		case joaat("savage"):
			iVar1 = 1950000;
			if (bVar0)
			{
				if (Global_262145.f_7377 >= 0)
				{
					iVar1 = Global_262145.f_7377;
				}
			}
			break;
		
		case joaat("valkyrie"):
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 2850000;
			}
			break;
		
		case joaat("technical"):
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 950000;
			}
			break;
		
		case joaat("velum2"):
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 995000;
			}
			break;
		
		case joaat("dodo"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_7458 >= 0)
				{
					iVar1 = Global_262145.f_7458;
				}
			}
			break;
		
		case joaat("marshall"):
			iVar1 = 250000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 500000;
				if (Global_262145.f_7460 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7460;
				}
			}
			break;
		
		case joaat("submersible2"):
			iVar1 = 1325000;
			if (bVar0)
			{
				if (Global_262145.f_7462 >= 0)
				{
					iVar1 = Global_262145.f_7462;
				}
			}
			break;
		
		case joaat("blista2"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_7457 >= 0)
				{
					iVar1 = Global_262145.f_7457;
				}
			}
			break;
		
		case joaat("stalion"):
			iVar1 = 71000;
			if (bVar0)
			{
				if (Global_262145.f_7461 >= 0)
				{
					iVar1 = Global_262145.f_7461;
				}
			}
			break;
		
		case joaat("dukes"):
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_7459 >= 0)
				{
					iVar1 = Global_262145.f_7459;
				}
			}
			break;
		
		case joaat("dukes2"):
			iVar1 = 279000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_7459 >= 0)
				{
					iVar1 = Global_262145.f_7459;
				}
			}
			break;
		
		case joaat("stalion2"):
			iVar1 = 277000;
			if (bVar0)
			{
				if (Global_262145.f_14781 >= 0)
				{
					iVar1 = Global_262145.f_14781;
				}
			}
			break;
		
		case joaat("dominator2"):
			iVar1 = 315000;
			if (bVar0)
			{
				if (Global_262145.f_14779 >= 0)
				{
					iVar1 = Global_262145.f_14779;
				}
			}
			break;
		
		case joaat("gauntlet2"):
			iVar1 = 230000;
			if (bVar0)
			{
				if (Global_262145.f_14780 >= 0)
				{
					iVar1 = Global_262145.f_14780;
				}
			}
			break;
		
		case joaat("buffalo3"):
			iVar1 = 535000;
			if (bVar0)
			{
				if (Global_262145.f_14778 >= 0)
				{
					iVar1 = Global_262145.f_14778;
				}
			}
			break;
		
		case joaat("slamvan"):
			iVar1 = 49500;
			if (bVar0)
			{
				if (Global_262145.f_7671 >= 0)
				{
					iVar1 = Global_262145.f_7671;
				}
			}
			break;
		
		case joaat("ratloader2"):
			iVar1 = 37500;
			if (bVar0)
			{
				if (Global_262145.f_7670 >= 0)
				{
					iVar1 = Global_262145.f_7670;
				}
			}
			break;
		
		case joaat("jester2"):
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_7668 >= 0)
				{
					iVar1 = Global_262145.f_7668;
				}
			}
			break;
		
		case joaat("massacro2"):
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_7669 >= 0)
				{
					iVar1 = Global_262145.f_7669;
				}
			}
			break;
		
		case joaat("feltzer3"):
			iVar1 = 975000;
			if (bVar0)
			{
				if (Global_262145.f_9041 >= 0)
				{
					iVar1 = Global_262145.f_9041;
				}
			}
			break;
		
		case joaat("luxor2"):
			iVar1 = 10000000;
			if (bVar0)
			{
				if (Global_262145.f_9042 >= 0)
				{
					iVar1 = Global_262145.f_9042;
				}
			}
			break;
		
		case joaat("osiris"):
			iVar1 = 1950000;
			if (bVar0)
			{
				if (Global_262145.f_9043 >= 0)
				{
					iVar1 = Global_262145.f_9043;
				}
			}
			break;
		
		case joaat("swift2"):
			iVar1 = 5150000;
			if (bVar0)
			{
				if (Global_262145.f_9044 >= 0)
				{
					iVar1 = Global_262145.f_9044;
				}
			}
			break;
		
		case joaat("virgo"):
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_9045 >= 0)
				{
					iVar1 = Global_262145.f_9045;
				}
			}
			break;
		
		case joaat("windsor"):
			iVar1 = 845000;
			if (bVar0)
			{
				if (Global_262145.f_9046 >= 0)
				{
					iVar1 = Global_262145.f_9046;
				}
			}
			break;
		
		case joaat("brawler"):
			iVar1 = 715000;
			if (bVar0)
			{
				if (Global_262145.f_9328 >= 0)
				{
					iVar1 = Global_262145.f_9328;
				}
			}
			break;
		
		case joaat("chino"):
			iVar1 = 225000;
			if (bVar0)
			{
				if (Global_262145.f_9329 >= 0)
				{
					iVar1 = Global_262145.f_9329;
				}
			}
			break;
		
		case joaat("coquette3"):
			iVar1 = 695000;
			if (bVar0)
			{
				if (Global_262145.f_9330 >= 0)
				{
					iVar1 = Global_262145.f_9330;
				}
			}
			break;
		
		case joaat("t20"):
			iVar1 = 2200000;
			if (bVar0)
			{
				if (Global_262145.f_9331 >= 0)
				{
					iVar1 = Global_262145.f_9331;
				}
			}
			break;
		
		case joaat("toro"):
			iVar1 = 1750000;
			if (bVar0)
			{
				if (Global_262145.f_9332 >= 0)
				{
					iVar1 = Global_262145.f_9332;
				}
			}
			break;
		
		case joaat("vindicator"):
			iVar1 = 630000;
			if (bVar0)
			{
				if (Global_262145.f_9333 >= 0)
				{
					iVar1 = Global_262145.f_9333;
				}
			}
			break;
		
		case joaat("chino2"):
			iVar1 = 225000;
			iVar1 = (Global_262145.f_10304 + func_343(iParam1));
			break;
		
		case joaat("primo2"):
			iVar1 = 100000;
			if (bVar0 && Global_262145.f_10303 >= 0)
			{
				iVar1 = (Global_262145.f_10303 + func_343(iParam1));
			}
			break;
		
		case joaat("moonbeam"):
			iVar1 = 32500;
			if (bVar0 && Global_262145.f_10300 >= 0)
			{
				iVar1 = Global_262145.f_10300;
			}
			break;
		
		case joaat("moonbeam2"):
			iVar1 = (Global_262145.f_10300 + func_343(iParam1));
			break;
		
		case joaat("faction"):
			iVar1 = 36000;
			if (bVar0 && Global_262145.f_10299 >= 0)
			{
				iVar1 = Global_262145.f_10299;
			}
			break;
		
		case joaat("faction2"):
			iVar1 = 95000;
			iVar1 = (Global_262145.f_10299 + func_343(iParam1));
			break;
		
		case joaat("buccaneer"):
			iVar1 = 29000;
			if (bVar0 && Global_262145.f_10301 >= 0)
			{
				iVar1 = Global_262145.f_10301;
			}
			break;
		
		case joaat("buccaneer2"):
			iVar1 = 85000;
			iVar1 = (Global_262145.f_10301 + func_343(iParam1));
			break;
		
		case joaat("voodoo2"):
			iVar1 = 5500;
			if (bVar0 && Global_262145.f_10302 >= 0)
			{
				iVar1 = Global_262145.f_10302;
			}
			break;
		
		case joaat("voodoo"):
			iVar1 = 105000;
			iVar1 = (Global_262145.f_10302 + func_343(iParam1));
			break;
		
		case joaat("btype2"):
			iVar1 = 550000;
			if (bVar0 && Global_262145.f_10516 >= 0)
			{
				iVar1 = Global_262145.f_10516;
			}
			break;
		
		case joaat("lurcher"):
			iVar1 = 650000;
			if (bVar0 && Global_262145.f_10517 >= 0)
			{
				iVar1 = Global_262145.f_10517;
			}
			break;
		
		case joaat("baller3"):
			iVar1 = 149000;
			if (bVar0 && Global_262145.f_11213 >= 0)
			{
				iVar1 = Global_262145.f_11213;
			}
			break;
		
		case joaat("baller5"):
			iVar1 = 374000;
			if (bVar0 && Global_262145.f_11214 >= 0)
			{
				iVar1 = Global_262145.f_11214;
			}
			break;
		
		case joaat("baller4"):
			iVar1 = 247000;
			if (bVar0 && Global_262145.f_11215 >= 0)
			{
				iVar1 = Global_262145.f_11215;
			}
			break;
		
		case joaat("baller6"):
			iVar1 = 513000;
			if (bVar0 && Global_262145.f_11216 >= 0)
			{
				iVar1 = Global_262145.f_11216;
			}
			break;
		
		case joaat("cog55"):
			iVar1 = 154000;
			if (bVar0 && Global_262145.f_11217 >= 0)
			{
				iVar1 = Global_262145.f_11217;
			}
			break;
		
		case joaat("cog552"):
			iVar1 = 396000;
			if (bVar0 && Global_262145.f_11218 >= 0)
			{
				iVar1 = Global_262145.f_11218;
			}
			break;
		
		case joaat("cognoscenti"):
			iVar1 = 254000;
			if (bVar0 && Global_262145.f_11219 >= 0)
			{
				iVar1 = Global_262145.f_11219;
			}
			break;
		
		case joaat("cognoscenti2"):
			iVar1 = 558000;
			if (bVar0 && Global_262145.f_11220 >= 0)
			{
				iVar1 = Global_262145.f_11220;
			}
			break;
		
		case joaat("limo2"):
			iVar1 = 1650000;
			if (bVar0 && Global_262145.f_11221 >= 0)
			{
				iVar1 = Global_262145.f_11221;
			}
			break;
		
		case joaat("mamba"):
			iVar1 = 995000;
			if (bVar0 && Global_262145.f_11222 >= 0)
			{
				iVar1 = Global_262145.f_11222;
			}
			break;
		
		case joaat("nightshade"):
			iVar1 = 585000;
			if (bVar0 && Global_262145.f_11223 >= 0)
			{
				iVar1 = Global_262145.f_11223;
			}
			break;
		
		case joaat("schafter3"):
			iVar1 = 116000;
			if (bVar0 && Global_262145.f_11224 >= 0)
			{
				iVar1 = Global_262145.f_11224;
			}
			break;
		
		case joaat("schafter5"):
			iVar1 = 325000;
			if (bVar0 && Global_262145.f_11225 >= 0)
			{
				iVar1 = Global_262145.f_11225;
			}
			break;
		
		case joaat("schafter4"):
			iVar1 = 208000;
			if (bVar0 && Global_262145.f_11226 >= 0)
			{
				iVar1 = Global_262145.f_11226;
			}
			break;
		
		case joaat("schafter6"):
			iVar1 = 438000;
			if (bVar0 && Global_262145.f_11227 >= 0)
			{
				iVar1 = Global_262145.f_11227;
			}
			break;
		
		case joaat("verlierer2"):
			iVar1 = 695000;
			if (bVar0 && Global_262145.f_11228 >= 0)
			{
				iVar1 = Global_262145.f_11228;
			}
			break;
		
		case joaat("supervolito"):
			iVar1 = 2113000;
			if (bVar0 && Global_262145.f_11229 >= 0)
			{
				iVar1 = Global_262145.f_11229;
			}
			break;
		
		case joaat("supervolito2"):
			iVar1 = 3330000;
			if (bVar0 && Global_262145.f_11230 >= 0)
			{
				iVar1 = Global_262145.f_11230;
			}
			break;
		
		case joaat("tampa"):
			iVar1 = 375000;
			if (bVar0 && Global_262145.f_11290 >= 0)
			{
				iVar1 = Global_262145.f_11290;
			}
			break;
		
		case joaat("sultan"):
			if (bVar0 && Global_262145.f_11397 >= 0)
			{
				iVar1 = Global_262145.f_11397;
			}
			break;
		
		case joaat("sultanrs"):
			iVar1 = (Global_262145.f_11397 + func_343(iParam1));
			break;
		
		case joaat("banshee"):
			if (bVar0 && Global_262145.f_11399 >= 0)
			{
				iVar1 = Global_262145.f_11399;
			}
			break;
		
		case joaat("banshee2"):
			iVar1 = (Global_262145.f_11399 + func_343(iParam1));
			break;
		
		case joaat("btype3"):
			iVar1 = 982000;
			if (bVar0 && Global_262145.f_11427 >= 0)
			{
				iVar1 = Global_262145.f_11427;
			}
			break;
		
		case joaat("faction3"):
			iVar1 = (Global_262145.f_10299 + func_343(iParam1));
			break;
		
		case joaat("minivan2"):
			iVar1 = (Global_262145.f_5393 + func_343(iParam1));
			break;
		
		case joaat("sabregt2"):
			iVar1 = (Global_262145.f_12446 + func_343(iParam1));
			break;
		
		case joaat("slamvan3"):
			iVar1 = (Global_262145.f_7671 + func_343(iParam1));
			break;
		
		case joaat("tornado5"):
			iVar1 = (Global_262145.f_12447 + func_343(iParam1));
			break;
		
		case joaat("virgo3"):
			iVar1 = Global_262145.f_12445;
			break;
		
		case joaat("virgo2"):
			iVar1 = (Global_262145.f_12445 + func_343(iParam1));
			break;
	}
	switch (iParam1)
	{
		case joaat("dominator"):
			if (bVar0)
			{
				if (Global_262145.f_5990 >= 0)
				{
					iVar1 = Global_262145.f_5990;
				}
			}
			break;
		
		case joaat("f620"):
			if (bVar0)
			{
				if (Global_262145.f_5991 >= 0)
				{
					iVar1 = Global_262145.f_5991;
				}
			}
			break;
		
		case joaat("fusilade"):
			if (bVar0)
			{
				if (Global_262145.f_5992 >= 0)
				{
					iVar1 = Global_262145.f_5992;
				}
			}
			break;
		
		case joaat("penumbra"):
			if (bVar0)
			{
				if (Global_262145.f_5993 >= 0)
				{
					iVar1 = Global_262145.f_5993;
				}
			}
			break;
		
		case joaat("sentinel"):
			if (bVar0)
			{
				if (Global_262145.f_5994 >= 0)
				{
					iVar1 = Global_262145.f_5994;
				}
			}
			break;
		
		case joaat("sentinel2"):
			if (bVar0)
			{
				if (Global_262145.f_5995 >= 0)
				{
					iVar1 = Global_262145.f_5995;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case joaat("elegy2"):
				if (Global_262145.f_4037 >= 0)
				{
					iVar1 = Global_262145.f_4037;
				}
				break;
			
			case joaat("khamelion"):
				if (Global_262145.f_4053 >= 0)
				{
					iVar1 = Global_262145.f_4053;
				}
				break;
			
			case joaat("hotknife"):
				if (Global_262145.f_4047 >= 0)
				{
					iVar1 = Global_262145.f_4047;
				}
				break;
			
			case joaat("carbonrs"):
				if (Global_262145.f_4023 >= 0)
				{
					iVar1 = Global_262145.f_4023;
				}
				break;
			}
	}
	if (bVar0 || iParam3 == 1)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case joaat("coquette"):
					iVar1 = 138000;
					if (Global_262145.f_5988 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_5988;
					}
					break;
				
				case joaat("banshee"):
					iVar1 = 126000;
					if (Global_262145.f_5987 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_5987;
					}
					break;
				
				case joaat("stinger"):
					iVar1 = 850000;
					if (Global_262145.f_5989 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_5989;
					}
					break;
				
				case joaat("voltic"):
					iVar1 = 150000;
					if (Global_262145.f_4093 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4093;
					}
					break;
				
				case joaat("chino"):
					iVar1 = 225000;
					if (Global_262145.f_10304 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_10304;
					}
					break;
				
				case joaat("kalahari"):
					iVar1 = 40000;
					if (Global_262145.f_7135 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7135;
					}
					break;
				
				case joaat("slamvan"):
					iVar1 = 49500;
					if (Global_262145.f_12449 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_12449;
					}
					break;
				
				case joaat("minivan"):
					iVar1 = 30000;
					if (Global_262145.f_12448 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_12448;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case joaat("voltic"):
					if (Global_262145.f_5986 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_5986;
					}
					break;
				
				case joaat("banshee"):
					if (Global_262145.f_11399 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_11399;
					}
					break;
				}
			}
	}
	if (iVar1 == -1)
	{
		return 0;
	}
	*uParam0 = iVar1;
	uParam0->f_1 = unk_0xF34EE736CF047844((IntToFloat(iVar1) * 0.5f));
	uParam0->f_2 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.25f));
	uParam0->f_3 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.1f));
	uParam0->f_5 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.25f));
	uParam0->f_4 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_2) * 0.1f));
	if (uParam0->f_4 > Global_262145.f_14188 && uParam0->f_4 <= Global_262145.f_14189)
	{
		uParam0->f_4 = Global_262145.f_14188;
	}
	if (bVar0)
	{
		uParam0->f_3 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.2f));
	}
	return 1;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chino2"):
			return Global_262145.f_10306;
			break;
		
		case joaat("primo2"):
			return Global_262145.f_10309;
			break;
		
		case joaat("moonbeam2"):
			return Global_262145.f_10308;
			break;
		
		case joaat("faction2"):
			return Global_262145.f_10307;
			break;
		
		case joaat("buccaneer2"):
			return Global_262145.f_10305;
			break;
		
		case joaat("voodoo"):
			return Global_262145.f_10310;
			break;
		
		case joaat("sultanrs"):
			return Global_262145.f_11398;
			break;
		
		case joaat("banshee2"):
			return Global_262145.f_11400;
			break;
		
		case joaat("faction3"):
			return Global_262145.f_12450;
			break;
		
		case joaat("minivan2"):
			return Global_262145.f_12451;
			break;
		
		case joaat("sabregt2"):
			return Global_262145.f_12452;
			break;
		
		case joaat("slamvan3"):
			return Global_262145.f_12453;
			break;
		
		case joaat("tornado5"):
			return Global_262145.f_12454;
			break;
		
		case joaat("virgo2"):
			return Global_262145.f_12455;
			break;
	}
	return 0;
}

int func_344()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x0C1D3C552325765B();
	iVar1 = 0;
	iVar1 = (iVar1 + Local_239[iVar0 /*30*/].f_26);
	if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 0))
	{
		iVar1++;
	}
	return iVar1;
}

bool func_345(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_1588[func_79(iParam0)], func_78(iParam0));
}

int func_346(int iParam0)
{
	if (((((((((((((((((((((((Global_1588660[iParam0 /*532*/] == 0 || Global_1588660[iParam0 /*532*/] == 1) || Global_1588660[iParam0 /*532*/] == 2) || Global_1588660[iParam0 /*532*/] == 3) || Global_1588660[iParam0 /*532*/] == 5) || Global_1588660[iParam0 /*532*/] == 8) || Global_1588660[iParam0 /*532*/] == 118) || Global_1588660[iParam0 /*532*/] == 11) || Global_1588660[iParam0 /*532*/] == 12) || Global_1588660[iParam0 /*532*/] == 13) || Global_1588660[iParam0 /*532*/] == 14) || Global_1588660[iParam0 /*532*/] == 122) || Global_1588660[iParam0 /*532*/] == 15) || Global_1588660[iParam0 /*532*/] == 23) || Global_1588660[iParam0 /*532*/] == 59) || Global_1588660[iParam0 /*532*/] == 60) || Global_1588660[iParam0 /*532*/] == 27) || func_347(iParam0, 0)) || func_347(iParam0, 7)) || unk_0x08BA6DD398CA197C(Global_1626500.f_15, 25)) || func_221(iParam0) == 148) || func_221(iParam0) == 163) || func_221(iParam0) == 168) || func_221(iParam0) == 185)
	{
		return 1;
	}
	return 0;
}

bool func_347(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

void func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (!unk_0x08BA6DD398CA197C(Local_239[iVar0 /*30*/].f_2[func_79(iParam0)], func_78(iParam0)))
	{
		unk_0x88B0F0DC270164B7(&(Local_239[iVar0 /*30*/].f_2[func_79(iParam0)]), func_78(iParam0));
	}
}

void func_349()
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!unk_0xD9E8CA806A80203D())
		{
			if (Global_2452906 != -1)
			{
				Global_2452906 = -1;
			}
			if (Global_2452907 != -1)
			{
				Global_2452907 = -1;
			}
			if (Global_2452908 != -1)
			{
				Global_2452908 = -1;
			}
			if (Global_2452937 != -1)
			{
				Global_2452937 = -1;
			}
			if (Global_2452938 != -1)
			{
				Global_2452938 = -1;
			}
			if (Global_2452939 != -1)
			{
				Global_2452939 = -1;
			}
		}
	}
}

bool func_350()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

void func_351()
{
	Local_1678.f_28 = -1;
	Local_239[unk_0x0C1D3C552325765B() /*30*/].f_29 = 0;
	Local_239[unk_0x0C1D3C552325765B() /*30*/].f_28 = 0;
	Local_239[unk_0x0C1D3C552325765B() /*30*/].f_27 = -1;
	Local_1678.f_5 = -1;
	Local_1678.f_7 = 0;
}

int func_352(var uParam0)
{
	var uVar0;
	
	if (Local_239[unk_0x0C1D3C552325765B() /*30*/].f_28 == 0)
	{
		if (unk_0xF9F5CAD1EAD2B987(uParam0) || func_353(uParam0))
		{
			uVar0 = unk_0x73CB307FFAD60025(uParam0);
			Local_239[unk_0x0C1D3C552325765B() /*30*/].f_28 = 1;
			Local_239[unk_0x0C1D3C552325765B() /*30*/].f_27 = uVar0;
		}
	}
	if ((Local_105.f_99 == unk_0x0C1D3C552325765B() && Local_105.f_98 >= 0) && Local_105.f_98 < 32)
	{
		if (Local_105.f_101[Local_105.f_98] != -1)
		{
			Local_239[unk_0x0C1D3C552325765B() /*30*/].f_29 = 1;
			Local_239[unk_0x0C1D3C552325765B() /*30*/].f_28 = 0;
			return Local_105.f_98;
		}
	}
	else if (Local_105.f_99 == -1)
	{
	}
	else if (Local_105.f_98 < 0 || Local_105.f_98 >= 32)
	{
	}
	return -1;
}

int func_353(int iParam0)
{
	if (((unk_0x71F81D3603710A43("EnableVehLuxeActs", 3) && unk_0x4184E6D274FCBFF1(uParam0, "EnableVehLuxeActs")) || func_47(unk_0x705BC1BB91F530B5(iParam0))) || (func_53(unk_0x705BC1BB91F530B5(iParam0)) && !unk_0x1504F110F2576375()))
	{
		return 1;
	}
	return 0;
}

void func_354(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_355(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_356(unk_0x0C1D3C552325765B());
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && iVar0 != 2)
	{
		if (unk_0xD3FACCDA4D66AEAD(unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5())) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
		{
			if (iParam1 != 0)
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5())))
				{
					if (unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5()) != iParam1)
					{
						if (iParam0->f_28 == joaat("swift2") || func_47(iParam0->f_28))
						{
							*uParam2 = 1;
						}
						return 0;
					}
				}
			}
			if (iParam1 != 0)
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					if (unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 1) != iParam1)
					{
						if (iParam0->f_28 == joaat("swift2") || func_47(iParam0->f_28))
						{
							*uParam2 = 1;
						}
						return 0;
					}
				}
			}
			if (unk_0xD3FACCDA4D66AEAD(unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5())))
			{
				iParam0->f_9 = unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5());
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
			{
				iParam0->f_9 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 1);
			}
			if ((func_53(iParam0->f_28) || unk_0x705BC1BB91F530B5(iParam0->f_9) == joaat("swift2")) || func_47(unk_0x705BC1BB91F530B5(iParam0->f_9)))
			{
				iParam0->f_28 = unk_0x705BC1BB91F530B5(iParam0->f_9);
				return 1;
			}
			else
			{
				iParam0->f_28 = unk_0x705BC1BB91F530B5(iParam0->f_9);
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_356(int iParam0)
{
	return Global_1588660[iParam0 /*532*/];
}

int func_357()
{
	return Local_105.f_0;
}

int func_358(int iParam0)
{
	return Local_239[iParam0 /*30*/];
}

void func_359()
{
	int iVar0;
	int iVar1;
	
	if (Global_1573842)
	{
		if (!iLocal_1674)
		{
			if (iLocal_1675)
			{
				iLocal_1673 = 1;
				iLocal_1676 = -1;
			}
			iLocal_1674 = 1;
		}
	}
	else if (iLocal_1674)
	{
		if (iLocal_1673)
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iVar1 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if (!iLocal_1676 == iVar1)
				{
					func_65(&iVar1, 0, -1);
					iLocal_1676 = iVar1;
					uLocal_1677 = unk_0x4B50AAB32FBE0483();
				}
				else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), uLocal_1677) > 2000)
				{
					iLocal_1676 = 0;
				}
			}
			else if (unk_0xD3FACCDA4D66AEAD(iLocal_1676))
			{
				func_65(&iLocal_1676, 0, -1);
			}
			else
			{
				iLocal_1674 = 0;
				iLocal_1673 = 0;
				iLocal_1675 = 0;
				if (iLocal_1676 == 0)
				{
					Global_2482149.f_4411 = 1;
				}
			}
		}
	}
	else if (func_8(unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (iLocal_1675)
		{
			if ((unk_0x08BA6DD398CA197C(Global_1573418, 3) || unk_0x08BA6DD398CA197C(Global_1573418, 1)) || unk_0x08BA6DD398CA197C(Global_1573418, 9))
			{
			}
			else if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iLocal_1675 = 0;
				iLocal_1676 = -1;
			}
			else
			{
				iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if (!iLocal_1676 == iVar0)
				{
					if (!func_360(iVar0))
					{
						iLocal_1675 = 0;
					}
					iLocal_1676 = iVar0;
				}
			}
		}
		else if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (!iVar0 == iLocal_1676)
			{
				if (func_360(iVar0))
				{
					iLocal_1675 = 1;
				}
				iLocal_1676 = iVar0;
			}
		}
	}
}

int func_360(int iParam0)
{
	if ((unk_0x71F81D3603710A43("CreatedByPegasus", 2) && unk_0x4184E6D274FCBFF1(iParam0, "CreatedByPegasus")) && unk_0x86DCF0A510F96A88(iParam0, "CreatedByPegasus"))
	{
		if (unk_0x0E091C9F3918F674(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49) && unk_0x3CF373660FCFAFCE(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49))
		{
			if (!unk_0x15F0E6D5AC2852F1(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_49) == iParam0)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_361(var uParam0)
{
	char* sVar0;
	
	if ((!func_8(*uParam0, 0, 1) || !unk_0x0E091C9F3918F674(Global_2421327[*uParam0 /*353*/].f_49)) || (unk_0x0E091C9F3918F674(Global_2421327[*uParam0 /*353*/].f_49) && !unk_0x3CF373660FCFAFCE(Global_2421327[*uParam0 /*353*/].f_49)))
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_2432628.f_588[*uParam0]) && func_364(Global_2432628.f_588[*uParam0]))
		{
			if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_2432628.f_588[*uParam0], 0))
			{
				unk_0x88B0F0DC270164B7(&uLocal_1205, *uParam0);
			}
			if (unk_0x775F8FFC8E29F525(Global_2432628.f_588[*uParam0]))
			{
				Global_2432628.f_621[*uParam0] = Global_2432628.f_588[*uParam0];
				func_65(&(Global_2432628.f_588[*uParam0]), 0, -1);
			}
		}
	}
	else if (unk_0x0E091C9F3918F674(Global_2421327[*uParam0 /*353*/].f_49))
	{
		if (unk_0x3CF373660FCFAFCE(Global_2421327[*uParam0 /*353*/].f_49))
		{
			if (func_364(unk_0x15F0E6D5AC2852F1(Global_2421327[*uParam0 /*353*/].f_49)))
			{
				if (!Global_2432628.f_588[*uParam0] == unk_0x15F0E6D5AC2852F1(Global_2421327[*uParam0 /*353*/].f_49))
				{
					Global_2432628.f_588[*uParam0] = unk_0x15F0E6D5AC2852F1(Global_2421327[*uParam0 /*353*/].f_49);
				}
			}
		}
	}
	if (Global_2482149.f_4411)
	{
		sVar0 = "PEG_RECLAIM";
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 14))
		{
			sVar0 = "GB_RECLAIM";
		}
		func_293(sVar0, 1);
		Global_2482149.f_4411 = 0;
	}
	func_362(&(Global_2432628.f_621[*uParam0]));
	*uParam0++;
	if (*uParam0 >= 32)
	{
		*uParam0 = 0;
	}
}

void func_362(int iParam0)
{
	var uVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if ((!unk_0x912AD5A10E7633F0(*uParam0, 0) && !unk_0x63EC60556AC9F739(*uParam0)) || unk_0x912AD5A10E7633F0(*uParam0, 0))
		{
			if (func_71(*uParam0, 1, 1, 0, 1, 0, 1, 0))
			{
				if (!unk_0x374C36A4A2089997(*uParam0))
				{
					if (func_363(*uParam0, &uVar0))
					{
						unk_0xEFA1F34A28EE763C(uParam0);
					}
				}
			}
		}
	}
}

int func_363(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	if ((unk_0x71F81D3603710A43("CreatedByPegasus", 2) && unk_0x4184E6D274FCBFF1(uParam0, "CreatedByPegasus")) && unk_0x86DCF0A510F96A88(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_366())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_366()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

void func_367()
{
}

bool func_368()
{
	return Global_1573843;
}

int func_369()
{
	if (func_24(unk_0x0C1D3C552325765B(), 0) || func_407())
	{
		return 1;
	}
	if (!(func_395(23) && func_372(23)) && !(func_395(22) && func_372(22)))
	{
		return 1;
	}
	if (!func_371(unk_0x0C1D3C552325765B()) || func_370())
	{
		return 1;
	}
	if (Global_2482149.f_5277)
	{
		if (unk_0x08BA6DD398CA197C(Local_1209.f_0, 3) || unk_0x08BA6DD398CA197C(Local_1209.f_0, 9))
		{
			Global_2482149.f_5277 = 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_370()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 18);
}

bool func_371(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 6);
}

int func_372(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 122)
	{
		return 0;
	}
	iVar0 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	if (iVar0 >= 0 && iVar0 <= 3)
	{
		if (((unk_0x08BA6DD398CA197C(Global_1626500.f_11, 30) && Global_1626500.f_39311[iVar0] != 0) || (unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 10) && Global_1352468 != 0)) && func_394(iVar0))
		{
			return 0;
		}
		if (func_393())
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 10:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 20))
			{
				return 0;
			}
			if (func_368())
			{
				return 1;
			}
			else if (func_392(unk_0x0C1D3C552325765B()) || func_391())
			{
				return 0;
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				if (Global_2508230.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 11:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 21))
			{
				return 0;
			}
			if (func_368())
			{
				return 1;
			}
			else if (func_392(unk_0x0C1D3C552325765B()) || func_391())
			{
				return 0;
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				if (Global_2508230.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else if (func_385(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 8:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 16))
			{
				return 0;
			}
			if (func_391())
			{
				return 0;
			}
			if (func_392(unk_0x0C1D3C552325765B()) || func_368())
			{
				if (func_384() || func_383())
				{
					iVar1 = func_381();
					if ((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_grenadelauncher")) || func_380(iVar1)) || func_379(iVar1))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 29))
			{
				return 0;
			}
			if ((func_392(unk_0x0C1D3C552325765B()) || func_368()) || func_391())
			{
				return 0;
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (Global_1613161 > 0)
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 9:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 30))
			{
				return 0;
			}
			if (((((Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3 || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 32) || func_392(unk_0x0C1D3C552325765B())) || func_368()) || func_391()) || func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_378(unk_0x0C1D3C552325765B()) || func_377(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 13:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 19))
			{
				return 0;
			}
			if (((((func_392(unk_0x0C1D3C552325765B()) || func_368()) || func_391()) || func_390(unk_0x0C1D3C552325765B())) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 32)
			{
				return 0;
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_378(unk_0x0C1D3C552325765B()) || func_377(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 7:
			if ((((func_368() || func_391()) || func_392(unk_0x0C1D3C552325765B())) || func_390(unk_0x0C1D3C552325765B())) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
			{
				return 0;
			}
			if (func_376())
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 22:
			if ((((func_390(unk_0x0C1D3C552325765B()) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3) || func_392(unk_0x0C1D3C552325765B())) || func_368()) || func_391())
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_378(unk_0x0C1D3C552325765B()) || func_377(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 31))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 18))
			{
				return 0;
			}
			if ((((func_390(unk_0x0C1D3C552325765B()) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3) || func_392(unk_0x0C1D3C552325765B())) || func_368()) || func_391())
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_378(unk_0x0C1D3C552325765B()) || func_377(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 12:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 15))
			{
				return 0;
			}
			if (func_392(unk_0x0C1D3C552325765B()))
			{
				if ((func_368() || func_391()) || func_384())
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0 || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 4)
			{
				return 0;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
			{
				return 0;
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_221(unk_0x0C1D3C552325765B()) == 148)
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (((func_390(unk_0x0C1D3C552325765B()) || func_392(unk_0x0C1D3C552325765B())) || func_368()) || func_391())
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			break;
		
		case 1:
			if ((((((Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0 || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 4) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3) || func_392(unk_0x0C1D3C552325765B())) || func_368()) || func_391()) || func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 14:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 17))
			{
				return 0;
			}
			if (func_368() || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 32)
			{
				return 0;
			}
			if (func_392(unk_0x0C1D3C552325765B()))
			{
				if ((Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 5 && !func_391()) && Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 148)
				{
					return 1;
				}
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0 && Global_1626500.f_26 > 1)
			{
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (func_368())
			{
				return 1;
			}
			if (func_392(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0)
			{
				if (Global_1626500.f_26 <= 1)
				{
					return 0;
				}
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 20:
			if (unk_0x1504F110F2576375() && unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 27))
			{
				return 0;
			}
			if (func_368())
			{
				return 1;
			}
			if (func_392(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_390(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) < 1)
			{
				return 0;
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
			if (func_373(unk_0x0C1D3C552325765B(), 1))
			{
				return 0;
			}
			break;
		
		case 35:
			if (func_373(unk_0x0C1D3C552325765B(), 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_373(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_374(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_374(int iParam0)
{
	return func_375(iParam0);
}

bool func_375(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_376()
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 0);
}

bool func_377(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_378(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case joaat("weapon_battleaxe"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
			return 1;
			break;
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("weapon_pipebomb"):
			return 1;
			break;
	}
	return 0;
}

int func_381()
{
	if (func_384() || func_383())
	{
		return func_382(Global_1626500.f_51165);
	}
	return Global_1352432;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_pistol");
			break;
		
		case 1:
			return joaat("weapon_combatpistol");
			break;
		
		case 2:
			return joaat("weapon_appistol");
			break;
		
		case 29:
			return joaat("weapon_snspistol");
			break;
		
		case 30:
			return joaat("weapon_heavypistol");
			break;
		
		case 37:
			return joaat("weapon_vintagepistol");
			break;
		
		case 35:
			return joaat("weapon_pistol50");
			break;
		
		case 3:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 4:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 5:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 40:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 6:
			return joaat("weapon_microsmg");
			break;
		
		case 7:
			return joaat("weapon_smg");
			break;
		
		case 8:
			return joaat("weapon_mg");
			break;
		
		case 9:
			return joaat("weapon_combatmg");
			break;
		
		case 31:
			return joaat("weapon_gusenberg");
			break;
		
		case 10:
			return joaat("weapon_assaultrifle");
			break;
		
		case 11:
			return joaat("weapon_carbinerifle");
			break;
		
		case 12:
			return joaat("weapon_advancedrifle");
			break;
		
		case 32:
			return joaat("weapon_specialcarbine");
			break;
		
		case 33:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 39:
			return joaat("weapon_musket");
			break;
		
		case 13:
			return joaat("weapon_sniperrifle");
			break;
		
		case 14:
			return joaat("weapon_heavysniper");
			break;
		
		case 41:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 15:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 16:
			return joaat("weapon_rpg");
			break;
		
		case 17:
			return joaat("weapon_minigun");
			break;
		
		case 38:
			return joaat("weapon_firework");
			break;
		
		case 43:
			return joaat("weapon_hominglauncher");
			break;
		
		case 55:
			return joaat("weapon_railgun");
			break;
		
		case 18:
			return joaat("weapon_grenade");
			break;
		
		case 19:
			return joaat("weapon_stickybomb");
			break;
		
		case 20:
			return joaat("weapon_smokegrenade");
			break;
		
		case 21:
			return joaat("weapon_molotov");
			break;
		
		case 22:
			return joaat("weapon_petrolcan");
			break;
		
		case 44:
			return joaat("weapon_proxmine");
			break;
		
		case 23:
			return joaat("weapon_knife");
			break;
		
		case 24:
			return joaat("weapon_nightstick");
			break;
		
		case 25:
			return joaat("weapon_bat");
			break;
		
		case 26:
			return joaat("weapon_crowbar");
			break;
		
		case 27:
			return joaat("weapon_golfclub");
			break;
		
		case 34:
			return joaat("weapon_bottle");
			break;
		
		case 36:
			return joaat("weapon_dagger");
			break;
		
		case 28:
			return joaat("weapon_unarmed");
			break;
		
		case 42:
			return joaat("weapon_flaregun");
			break;
		
		case 45:
			return joaat("weapon_knuckle");
			break;
		
		case 46:
			return joaat("weapon_combatpdw");
			break;
		
		case 47:
			return joaat("weapon_marksmanpistol");
			break;
		
		case 53:
			return joaat("weapon_hatchet");
			break;
		
		case 48:
			return joaat("weapon_machete");
			break;
		
		case 51:
			return joaat("weapon_machinepistol");
			break;
		
		case 54:
			return joaat("weapon_assaultsmg");
			break;
		
		case 49:
			return joaat("weapon_dbshotgun");
			break;
		
		case 50:
			return joaat("weapon_compactrifle");
			break;
		
		case 52:
			return joaat("weapon_flashlight");
			break;
		
		case 56:
			return joaat("weapon_revolver");
			break;
		
		case 57:
			return joaat("weapon_switchblade");
			break;
		
		case 58:
			return joaat("weapon_gusenberg");
			break;
		
		case 59:
			return joaat("weapon_autoshotgun");
			break;
		
		case 60:
			return joaat("weapon_minismg");
			break;
		
		case 61:
			return joaat("weapon_compactlauncher");
			break;
		
		case 62:
			return joaat("weapon_pipebomb");
			break;
		
		case 63:
			return joaat("weapon_poolcue");
			break;
		
		case 64:
			return joaat("weapon_battleaxe");
			break;
		
		case 65:
			return joaat("weapon_wrench");
			break;
		
		case 66:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 67:
			return joaat("weapon_hammer");
			break;
	}
	return joaat("weapon_pistol");
}

bool func_383()
{
	return (unk_0x08BA6DD398CA197C(Global_1626500.f_11, 19) && unk_0x1504F110F2576375());
}

bool func_384()
{
	return (unk_0x08BA6DD398CA197C(Global_1626500.f_11, 18) && unk_0x1504F110F2576375());
}

bool func_385(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_386(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 6;
}

bool func_387(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

int func_388(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_389(iParam0))
			{
				if (Global_1588660[iParam0 /*532*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_389(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

int func_390(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_389(iParam0))
			{
				if (Global_1588660[iParam0 /*532*/] == 2 || Global_1588660[iParam0 /*532*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_391()
{
	return Global_1573842;
}

int func_392(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (Global_1588660[iParam0 /*532*/] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_393()
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 7);
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 2) && iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 3) && iParam0 == 1)
	{
		iVar0 = 1;
	}
	else if (unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 4) && iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (unk_0x08BA6DD398CA197C(Global_1626500.f_97332, 5) && iParam0 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	switch (iParam0)
	{
		case 10:
			if (func_406())
			{
				return 0;
			}
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			if (func_404(unk_0x0C1D3C552325765B(), 146))
			{
				return 0;
			}
			if ((func_404(unk_0x0C1D3C552325765B(), 136) || func_403(unk_0x0C1D3C552325765B()) == 136) || (func_347(unk_0x0C1D3C552325765B(), 24) && func_402(unk_0x0C1D3C552325765B())))
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			if (Global_25449)
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 24))
			{
				if (func_402(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 136)
			{
				return 0;
			}
			if (func_401(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_404(unk_0x0C1D3C552325765B(), 138))
			{
				if (func_8(unk_0x0C1D3C552325765B(), 1, 1))
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						uVar2 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
						iVar3 = unk_0x705BC1BB91F530B5(uVar2);
						if ((iVar3 == joaat("tractor") || iVar3 == joaat("tractor2")) || iVar3 == joaat("tractor3"))
						{
							return 0;
						}
					}
				}
			}
			if (func_347(unk_0x0C1D3C552325765B(), 21))
			{
				return 0;
			}
			if (func_400(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			break;
		
		case 8:
			if (func_347(unk_0x0C1D3C552325765B(), 21))
			{
				return 0;
			}
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			if (func_404(unk_0x0C1D3C552325765B(), 146))
			{
				return 0;
			}
			break;
		
		case 9:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			if (func_399(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 22:
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
			break;
		
		case 12:
			if (func_404(unk_0x0C1D3C552325765B(), 136))
			{
				return 0;
			}
			if (func_221(unk_0x0C1D3C552325765B()) == 153)
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_404(unk_0x0C1D3C552325765B(), 129))
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 14:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if ((func_347(unk_0x0C1D3C552325765B(), 7) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1) || Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_8(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
				{
					if (unk_0x81C85E54237F8A2E(iVar0) != unk_0x0C1D3C552325765B())
					{
						if (!func_24(unk_0x81C85E54237F8A2E(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		
		case 6:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_59(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if (Global_2421327[unk_0x1A9CF4D5D4E2F266() /*353*/].f_202 == 1)
			{
				return 0;
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 136)
			{
				return 0;
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 141)
			{
				return 0;
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 139)
			{
				return 0;
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 140 && func_404(unk_0x0C1D3C552325765B(), 140))
			{
				return 0;
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 131 && func_404(unk_0x0C1D3C552325765B(), 131))
			{
				return 0;
			}
			if (func_404(unk_0x0C1D3C552325765B(), 138))
			{
				return 0;
			}
			if (func_404(unk_0x0C1D3C552325765B(), 146))
			{
				return 0;
			}
			if (func_221(unk_0x0C1D3C552325765B()) == 148 || func_221(unk_0x0C1D3C552325765B()) == 197)
			{
				return 0;
			}
			if (func_221(unk_0x0C1D3C552325765B()) == 183)
			{
				if (func_397(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_8(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
				{
					if (unk_0x81C85E54237F8A2E(iVar0) != unk_0x0C1D3C552325765B())
					{
						if (!func_24(unk_0x81C85E54237F8A2E(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		
		case 20:
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) < 1)
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0) || func_347(unk_0x0C1D3C552325765B(), 16))
			{
				return 0;
			}
			if (func_404(unk_0x0C1D3C552325765B(), 146))
			{
				return 0;
			}
			if (func_221(unk_0x0C1D3C552325765B()) == 192)
			{
				iVar1 = Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172;
			}
			if (((((((func_221(unk_0x0C1D3C552325765B()) == 159 || func_221(unk_0x0C1D3C552325765B()) == 157) || func_221(unk_0x0C1D3C552325765B()) == 153) || func_221(unk_0x0C1D3C552325765B()) == 154) || func_221(unk_0x0C1D3C552325765B()) == 155) || func_221(unk_0x0C1D3C552325765B()) == 170) || func_221(unk_0x0C1D3C552325765B()) == 197) || (func_221(unk_0x0C1D3C552325765B()) == 192 && iVar1 == 9))
			{
				return 0;
			}
			if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					uVar5 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
					iVar6 = unk_0x41617C7E7EAFFE34(uVar5);
					if (!unk_0x6315EBE95A97CADF(uVar5, -1, 0))
					{
						iVar6++;
					}
					if (iVar6 == 1)
					{
						bVar4 = true;
					}
					if (!bVar4)
					{
						iVar7 = -1;
						iVar8 = iVar7;
						iVar9 = unk_0x8EF0E5E933BE561D(iVar5) + 1;
						while (iVar6 > 0)
						{
							iVar7 = iVar8;
							if (!unk_0x6315EBE95A97CADF(iVar5, iVar7, 0))
							{
								uVar10 = unk_0x8FD32443A080784B(iVar5, iVar7, 0);
								iVar11 = unk_0xA43666ACD375E339(uVar10);
								if (iVar11 != func_61() && unk_0xCB129F9A01D14082(iVar11))
								{
									if (func_221(iVar11) == 157 || func_221(iVar11) == 153)
									{
										return 0;
									}
								}
								iVar6 = (iVar6 - 1);
							}
							iVar8++;
							if (iVar8 >= iVar9 && iVar6 > 0)
							{
								iVar6 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
			break;
		
		case 35:
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
			{
				return 0;
			}
			if (func_403(unk_0x0C1D3C552325765B()) == 146)
			{
				return 0;
			}
			if ((((func_221(unk_0x0C1D3C552325765B()) == 159 || func_221(unk_0x0C1D3C552325765B()) == 153) || func_221(unk_0x0C1D3C552325765B()) == 157) || func_221(unk_0x0C1D3C552325765B()) == 154) || func_221(unk_0x0C1D3C552325765B()) == 155)
			{
				return 0;
			}
			if (func_221(unk_0x0C1D3C552325765B()) == 183)
			{
				if (func_397(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
			}
			break;
		
		case 39:
			break;
		
		case 43:
			if ((((func_368() || func_391()) || func_392(unk_0x0C1D3C552325765B())) || func_390(unk_0x0C1D3C552325765B())) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
			{
				return 0;
			}
			if (func_376())
			{
				return 0;
			}
			if (func_396(13))
			{
				return 0;
			}
			if (func_388(unk_0x0C1D3C552325765B()))
			{
				if (func_387(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else if (func_386(unk_0x0C1D3C552325765B()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 44:
			if (func_265(unk_0x0C1D3C552325765B(), 1, 0))
			{
				return 0;
			}
			if (func_62(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			if (func_347(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_235 != -1)
			{
				return 0;
			}
			if (Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_236 != -1)
			{
				return 0;
			}
			if (func_399(unk_0x0C1D3C552325765B(), 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_396(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_501.f_1, iParam0);
	}
	return unk_0x08BA6DD398CA197C(Global_2432628.f_501.f_2, (iParam0 - 32));
}

bool func_397(int iParam0)
{
	return func_398(iParam0, 20);
}

bool func_398(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

int func_399(int iParam0, bool bParam1)
{
	if (func_8(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2421327[iParam0 /*353*/].f_260.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2421327[iParam0 /*353*/].f_260.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	int iVar0;
	
	if (func_8(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!Global_2421327[iParam0 /*353*/].f_260.f_17[iVar0] == 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_401(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 5);
	}
	return 0;
}

bool func_402(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_403(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

int func_404(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/] == iParam1)
	{
		return func_405(iParam0);
	}
	return 0;
}

int func_405(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

bool func_406()
{
	return Global_1312412;
}

bool func_407()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_408()
{
	bool bVar0;
	var uVar1;
	
	func_415(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_414())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_413())
	{
		return 1;
	}
	if (func_412(157))
	{
		if (!func_411())
		{
			return 1;
		}
	}
	if (func_412(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_409() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_409()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_409()
{
	switch (func_410())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_410()
{
	return Global_25185;
}

bool func_411()
{
	return Global_2442442.f_576;
}

int func_412(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_413()
{
	return Global_2451777;
}

bool func_414()
{
	return Global_2442442.f_571;
}

void func_415(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_416(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_416(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_8(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_363(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

void func_417()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_418()
{
	func_34();
	func_419();
}

void func_419()
{
	unk_0x78C587487CD40B92();
}

int func_420(struct<20> Param0)
{
	func_424(32, Param0);
	func_422(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_105, 134);
	unk_0xCCA45C9E00D2BC01(&Local_239, 961);
	unk_0x401559486BCA4D9B(0);
	if (!func_421())
	{
		return 0;
	}
	Global_2452906 = -1;
	Global_2452907 = -1;
	Global_2452908 = -1;
	Global_2452937 = -1;
	Global_2452938 = -1;
	Global_2452939 = -1;
	Global_2453160 = 0;
	Local_239[unk_0x1A9CF4D5D4E2F266() /*30*/] = 0;
	return 1;
}

int func_421()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_414())
		{
			return 0;
		}
		if (func_412(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_422(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_419();
			}
			else
			{
				return 0;
			}
		}
		if (!func_423())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_419();
					}
					else
					{
						return 0;
					}
				}
				if (func_414())
				{
					if (!bParam2)
					{
						func_419();
					}
					else
					{
						return 0;
					}
				}
				if (func_412(155))
				{
					if (!bParam2)
					{
						func_419();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_419();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_419();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_419();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_423()
{
	return Global_1315206;
}

void func_424(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_419();
	}
	unk_0x786FDD765D4157F4(iParam0, 0, Param1.f_16);
}

