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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<3> Local_93 = { 0, 0, 0 } ;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	struct<102> Local_98 = { 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
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
	struct<30> Local_232[32];
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	int iLocal_1198 = 0;
	struct<3> Local_1199 = { 0, 0, 0 } ;
	struct<14> Local_1202 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	int iLocal_1219 = 0;
	struct<6> Local_1220[32];
	int iLocal_1413 = 0;
	int iLocal_1414 = 0;
	var uLocal_1415 = 16;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
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
	int iLocal_1580 = 0;
	var uLocal_1581[2] = { 0, 0 };
	int iLocal_1584[5] = { 0, 0, 0, 0, 0 };
	struct<2> Local_1590[5];
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	int iLocal_1603 = 0;
	int iLocal_1604 = 0;
	var uLocal_1605[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1666 = 0;
	int iLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	var uLocal_1670 = 0;
	struct<29> Local_1671 = { 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = -1;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
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
	var uLocal_1729 = 1;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 6;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
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
	int iLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	int iLocal_1985[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2018 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	Local_93 = { 0f, 0f, 0f };
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_358(ScriptParam_0))
		{
			func_356();
		}
		Local_1671.f_0 = 0;
	}
	while (true)
	{
		func_355();
		if ((!unk_0x1C6DF6AD69BE853E() || func_345()) || func_311())
		{
			if (!func_310())
			{
				func_356();
			}
		}
		if (unk_0x1C6DF6AD69BE853E())
		{
			uLocal_1414 = unk_0xD74C7D8D2E5E43D2();
		}
		func_309();
		if (!func_307(unk_0x1329891157A54C63()))
		{
			func_305(&iLocal_1413);
		}
		func_296();
		switch (func_295(unk_0x04EFA8D3BE8500E7()))
		{
			case 0:
				if (func_294() == 1)
				{
					Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 1;
				}
				else if (func_294() == 4)
				{
					Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 3;
				}
				break;
			
			case 1:
				if (func_294() == 1)
				{
					switch (iLocal_97)
					{
						case 0:
							if (func_293(&Local_1671, 0, &uLocal_96) && !Global_2451473.f_738)
							{
								func_292(&iLocal_97, 2);
								Local_232[unk_0x1329891157A54C63() /*30*/].f_27 = -1;
							}
							break;
						
						case 2:
							if (func_293(&Local_1671, 0, &uLocal_96) && !Global_2451473.f_738)
							{
								Local_1671.f_5 = func_290(Local_1671.f_9);
								if (Local_1671.f_5 >= 0)
								{
									func_292(&iLocal_97, 3);
								}
							}
							else
							{
								func_292(&iLocal_97, 5);
							}
							break;
						
						case 3:
							if (!unk_0x253C9FE2EFE18AEC("luxe_veh_activity", Local_1671.f_5, 1, 0))
							{
								unk_0xE0013E74AB6963DC("luxe_veh_activity");
								if (unk_0x236D8AD7EE179F46(Global_25209, Local_1671.f_5))
								{
									unk_0xC69E84EBBD7166E6(&Global_25209, Local_1671.f_5);
								}
								if (unk_0x06D4A1BE3DF77306("luxe_veh_activity"))
								{
									unk_0xB8BA7F44DF1575E1("luxe_veh_activity", &Local_1671, 311, 1424);
									unk_0xD25F9F5A80824C77("luxe_veh_activity");
									iLocal_2018 = 0;
									Global_25208 = Local_1671.f_5;
									func_292(&iLocal_97, 4);
								}
							}
							else
							{
								iLocal_2018 = 1;
								Global_25208 = Local_1671.f_5;
								func_292(&iLocal_97, 4);
							}
							break;
						
						case 4:
							if (iLocal_2018 && !unk_0x253C9FE2EFE18AEC("luxe_veh_activity", Local_1671.f_5, 1, 0))
							{
								func_292(&iLocal_97, 3);
							}
							else if (unk_0x236D8AD7EE179F46(Global_25209, Local_1671.f_5))
							{
								func_292(&iLocal_97, 5);
							}
							break;
						
						case 5:
							if (!func_293(&Local_1671, Local_1671.f_9, &uLocal_96))
							{
								func_289();
								func_292(&iLocal_97, 0);
							}
							else if (Local_1671.f_5 >= 0)
							{
								if (!unk_0x9EEC0E6EB1F79938(unk_0x1329891157A54C63(), "luxe_veh_activity", Local_1671.f_5))
								{
									if (Local_1671.f_7 > 15)
									{
										func_289();
										func_292(&iLocal_97, 0);
									}
									Local_1671.f_7++;
								}
							}
							else
							{
								func_289();
								func_292(&iLocal_97, 0);
							}
							break;
					}
					func_43();
				}
				else if (func_294() == 0)
				{
					func_34();
					Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 0;
				}
				else if (func_294() == 4)
				{
					Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 3;
				}
				break;
			
			case 3:
				func_33(&(Local_98.f_96));
				if (func_32(&(Local_98.f_96)))
				{
					Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 4;
				}
				break;
			
			case 2:
				Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 4;
			
			case 4:
				func_356();
				break;
		}
		if (unk_0x1C6DF6AD69BE853E())
		{
			if (unk_0x1C7D9BFDF15A02B4())
			{
				func_31();
				switch (func_294())
				{
					case 0:
						func_29();
						func_28();
						Local_98.f_0 = 1;
						Local_98.f_99 = -1;
						iVar0 = 0;
						while (iVar0 <= 31)
						{
							Local_98.f_101[iVar0] = -1;
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
				if (func_294() < 4)
				{
					if (func_1())
					{
						Local_98.f_0 = 4;
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
	
	if (!func_6(&uLocal_1983))
	{
		func_5(&uLocal_1983, 0, 0);
	}
	if (func_4(&uLocal_1983, 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_98.f_101[iVar0] != -1)
			{
				if (!unk_0x253C9FE2EFE18AEC("luxe_veh_activity", iVar0, 0, 0))
				{
					iVar1 = 0;
					while (iVar1 <= 2)
					{
						if (!bVar2)
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1985[iVar0], iVar1))
							{
								unk_0xF3148AAF69AF9CBC(&(iLocal_1985[iVar0]), iVar1);
								bVar2 = true;
							}
						}
						iVar1++;
					}
					if (!bVar2)
					{
						Local_98.f_101[iVar0] = -1;
						iVar1 = 0;
						while (iVar1 <= 2)
						{
							unk_0xC69E84EBBD7166E6(&(iLocal_1985[iVar0]), iVar1);
							iVar1++;
						}
					}
					bVar2 = false;
				}
				else
				{
					iLocal_1985[iVar0] = 0;
				}
			}
			iVar0++;
		}
		func_3(&uLocal_1983);
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
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
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
	
	if (Local_98.f_99 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_232[iVar0 /*30*/].f_28 == 1)
			{
				if (Local_232[iVar0 /*30*/].f_27 != -1)
				{
					Local_98.f_99 = unk_0x6528B1497E4313F1(iVar0);
					iVar1 = 0;
					while (iVar1 <= 31)
					{
						if (Local_98.f_101[iVar1] == Local_232[iVar0 /*30*/].f_27)
						{
							Local_98.f_98 = iVar1;
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
							if (Local_98.f_101[iVar1] == -1)
							{
								Local_98.f_101[iVar1] = Local_232[iVar0 /*30*/].f_27;
								Local_98.f_98 = iVar1;
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
	else if (Local_232[Local_98.f_99 /*30*/].f_29 == 1 && Local_232[Local_98.f_99 /*30*/].f_28 == 0)
	{
		Local_98.f_99 = -1;
	}
	else if (Local_232[Local_98.f_99 /*30*/].f_29 == 0 && Local_232[Local_98.f_99 /*30*/].f_28 == 0)
	{
		Local_98.f_99 = -1;
	}
	else if (Local_98.f_99 >= 0)
	{
		if (!func_8(Local_98.f_99, 0, 1))
		{
			Local_98.f_99 = -1;
		}
	}
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
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
	if ((Global_2437751 != -1 || Global_2437753 != -1) || Global_2437752 != -1)
	{
		func_15();
	}
	func_11(iLocal_1604);
	iLocal_1604++;
	if (iLocal_1604 >= 60)
	{
		iLocal_1604 = 0;
	}
}

void func_11(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	if (Local_98.f_2[iParam0] > -1)
	{
		if (!func_8(unk_0x6528B1497E4313F1(Local_98.f_2[iParam0]), 0, 1))
		{
			func_13(iParam0);
		}
		else
		{
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (func_12(Local_98.f_2[iParam0], iVar1) == iParam0)
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
	return Local_1220[iParam0 /*6*/][iParam1];
}

void func_13(int iParam0)
{
	if (Local_98.f_2[iParam0] != -1)
	{
		Local_98.f_2[iParam0] = -1;
		func_14(iParam0);
	}
}

int func_14(int iParam0)
{
	if (unk_0x48E480685981C7D4() < uLocal_1605[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if (Global_2437751 > -1 && Global_2437751 < 32)
	{
		if (Global_2437753 > -1 && Global_2437753 < 60)
		{
			if (Global_2437752 > -1 && Global_2437752 < 5)
			{
				func_16(Global_2437751, Global_2437752);
				func_13(Global_2437753);
			}
		}
	}
	Global_2437751 = -1;
	Global_2437753 = -1;
	Global_2437752 = -1;
}

void func_16(int iParam0, int iParam1)
{
	if (Local_1220[iParam0 /*6*/][iParam1] != -1)
	{
		Local_1220[iParam0 /*6*/][iParam1] = -1;
	}
}

void func_17()
{
	if ((Global_2437725 != -1 || Global_2437727 != -1) || Global_2437726 != -1)
	{
		func_27();
	}
	else
	{
		func_21(iLocal_1603);
	}
	func_18(iLocal_1603);
	iLocal_1603++;
	if (iLocal_1603 >= 32)
	{
		iLocal_1603 = 0;
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
	if (iParam0 > -1 && func_8(unk_0x6528B1497E4313F1(iParam0), 0, 1))
	{
		Local_98.f_2[iParam1] = iParam0;
		Local_98.f_63[iParam0] = uLocal_1414;
	}
}

int func_20(int iParam0)
{
	if (Local_98.f_2[iParam0] > -1)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	
	if (func_8(unk_0x6528B1497E4313F1(iParam0), 0, 1) && !func_24(unk_0x6528B1497E4313F1(iParam0), 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (unk_0x236D8AD7EE179F46(Local_232[iParam0 /*30*/].f_5[iVar0 /*4*/].f_1, 0))
			{
				func_23(iParam0, iVar0, Local_232[iParam0 /*30*/].f_5[iVar0 /*4*/]);
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
		Local_1220[iParam0 /*6*/][iVar0] = -1;
		iVar0++;
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	if (Local_1220[iParam0 /*6*/][iParam1] != iParam2)
	{
		Local_1220[iParam0 /*6*/][iParam1] = iParam2;
	}
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312729;
}

void func_27()
{
	if (Global_2437725 > -1 && Global_2437725 < 32)
	{
		if (Global_2437727 > -1 && Global_2437727 < 60)
		{
			if (Global_2437726 > -1 && Global_2437725 < 5)
			{
				func_23(Global_2437725, Global_2437726, Global_2437727);
				iLocal_1603 = Global_2437725;
			}
		}
	}
	Global_2437725 = -1;
	Global_2437726 = -1;
	Global_2437727 = -1;
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
			Local_1220[iVar0 /*6*/][iVar1] = -1;
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
	Local_98.f_2[iParam0] = -1;
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
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= 1000)
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
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_5(uParam0, 0, 0);
		}
	}
}

void func_34()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			Local_98.f_1 = 0;
		}
		Local_232[unk_0x1329891157A54C63() /*30*/].f_1 = 0;
		func_42();
		func_35(1, 0);
	}
	unk_0xC69E84EBBD7166E6(&(Global_2422670.f_3371), 8);
	unk_0xC69E84EBBD7166E6(&(Global_2422670.f_3371), 10);
}

void func_35(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 11))
		{
			func_41();
		}
	}
	if (bParam0)
	{
		if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 0))
		{
			if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
			{
				if (!func_40(138, -1))
				{
					func_37(138, 1, -1, 1);
				}
			}
		}
	}
	if (unk_0x236D8AD7EE179F46(uLocal_1196, 2))
	{
		unk_0xC69E84EBBD7166E6(&iLocal_1196, 2);
	}
	Global_2437920 = 0;
	if (unk_0xFBACB273AA628CC5(Local_1202.f_4))
	{
		unk_0x0A8175F24237A3D4(&(Local_1202.f_4));
	}
	Local_1202.f_0 = 0;
	Local_1202.f_1 = 0;
	Local_1202.f_2 = -1;
	Local_1202.f_3 = -1;
	func_36(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49));
	if (Local_1202.f_12 != 0)
	{
		unk_0x887F4488DA99FD21(Local_1202.f_12);
	}
	Local_1202.f_12 = 0;
	Local_1202.f_13 = { Local_93 };
}

void func_36(var uParam0)
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0x3C6E68D2D7F41A39(&uVar0);
	}
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_39())
	{
		iVar0 = Global_2478104[iParam0 /*5*/][func_38(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x20026873DF8DB72A(iVar0, iParam1, iParam3);
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
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
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_38(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_41()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 12))
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_1195, 5);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			unk_0xF3148AAF69AF9CBC(&Local_1202, 12);
		}
	}
}

void func_42()
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(uLocal_1218))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(uLocal_1218);
		unk_0x3C6E68D2D7F41A39(&uVar0);
		unk_0xEA89E72C99125D9C(uVar0, 1);
	}
}

void func_43()
{
	if (!func_288())
	{
		func_287();
		func_276();
		func_250();
		func_232();
		func_202();
		func_189();
		func_170();
		func_161();
		func_54();
		func_47();
	}
	func_44();
}

void func_44()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_2422670.f_581[iLocal_1982]))
	{
		iVar0 = unk_0x14B7103DBD149FFE(Global_2422670.f_581[iLocal_1982]);
		if (func_46(iVar0))
		{
			if (unk_0x4D2386673BCED434(Global_2422670.f_581[iLocal_1982]))
			{
				if (unk_0x86CCCD2FAE9D5E65(Global_2422670.f_581[iLocal_1982]) && !unk_0x930F8FBB8E9537CC(Global_2422670.f_581[iLocal_1982]))
				{
					if (unk_0x340D0D5779173223(Global_2422670.f_581[iLocal_1982], 2) || unk_0x340D0D5779173223(Global_2422670.f_581[iLocal_1982], 3))
					{
						if (!func_45(Global_2422670.f_581[iLocal_1982], &bVar1, &bVar2))
						{
							if (!bVar1)
							{
								unk_0x9523562C21915B31(Global_2422670.f_581[iLocal_1982], 2, 0);
							}
							if (!bVar2)
							{
								unk_0x9523562C21915B31(Global_2422670.f_581[iLocal_1982], 3, 0);
							}
						}
					}
				}
			}
		}
	}
	iLocal_1982++;
	if (iLocal_1982 >= 32)
	{
		iLocal_1982 = 0;
	}
}

int func_45(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = 0;
	*uParam2 = 0;
	iVar0 = unk_0xDC6D2DFBCF99CDBA(uParam0, 2);
	iVar1 = unk_0xDC6D2DFBCF99CDBA(uParam0, 3);
	if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x930F8FBB8E9537CC(iVar0))
	{
		*uParam1 = 1;
	}
	if (unk_0x86CCCD2FAE9D5E65(iVar1) && !unk_0x930F8FBB8E9537CC(iVar1))
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
	if (iParam0 == joaat("swift2"))
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iLocal_1584[iVar0])
		{
			if (func_4(&(Local_1590[iVar0 /*2*/]), 5000, 0))
			{
				func_48(iVar0);
				iLocal_1584[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	func_52(func_53(1, 1), iVar0, iParam0, Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/]);
	if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/].f_1, 2))
	{
		unk_0xCD9A6588DBAF710A((unk_0xD2E2B0775C0B702C(false) - 1));
	}
	func_49(Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/]);
	Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/] = -1;
	Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/].f_1 = 0;
	Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/].f_2 = 0;
	if (Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/].f_3 != 0)
	{
		unk_0x887F4488DA99FD21(Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/].f_3);
	}
	Local_232[iVar0 /*30*/].f_5[iParam0 /*4*/].f_3 = 0;
	if (Local_232[iVar0 /*30*/].f_26 > 0)
	{
		Local_232[iVar0 /*30*/].f_26 = (Local_232[iVar0 /*30*/].f_26 - 1);
	}
}

void func_49(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (unk_0x236D8AD7EE179F46(uLocal_1581[func_51(iParam0)], func_50(iParam0)))
		{
			unk_0xC69E84EBBD7166E6(&(uLocal_1581[func_51(iParam0)]), func_50(iParam0));
		}
	}
}

int func_50(int iParam0)
{
	return (iParam0 % 32);
}

int func_51(int iParam0)
{
	return unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
}

void func_52(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 303;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	unk_0x8DAD64B00B88FC2D(1, &Var0, 5, iParam0);
}

int func_53(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_8(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_24(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_54()
{
	char* sVar0;
	int iVar4;
	int iVar5;
	
	if (!unk_0x236D8AD7EE179F46(iLocal_1195, 0))
	{
		if (func_40(138, -1))
		{
			if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 1))
			{
				func_37(138, 0, -1, 1);
			}
			else if (func_4(&(Local_1202.f_9), 10000, 0))
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_1195, 0);
			}
		}
		else
		{
			func_3(&(Local_1202.f_9));
		}
	}
	if (iLocal_1195 != 0)
	{
		if (func_160(&sVar0, &iVar4, &iVar5))
		{
			if (func_152())
			{
				if (!func_151(8, -1) && !unk_0xF33755A765033580())
				{
					if (func_55(iVar4, &sVar0, 0, 0))
					{
						if (iVar5 == 0)
						{
							func_37(138, 0, -1, 1);
						}
						unk_0xC69E84EBBD7166E6(&iLocal_1195, iVar5);
					}
				}
			}
		}
		else
		{
			iLocal_1195 = 0;
		}
	}
}

bool func_55(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_56(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_56(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_57(&uVar0, iParam0, func_150(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_57(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB318FDA0D1ABDB20(sParam2))
	{
		return 0;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam3))
	{
		return 0;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424());
	iVar1 = func_149(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xB318FDA0D1ABDB20(iParam7))
	{
		iVar2 = unk_0x8DAF7A748E41AD46(iParam7);
	}
	if (func_148(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_142(iParam6))
	{
		return 0;
	}
	if (func_139(iVar0, iVar1, iVar2))
	{
		if (func_138())
		{
			return 0;
		}
		func_137();
		return func_64(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_63(iParam4))
	{
		return 0;
	}
	func_58(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1328429.f_40.f_1 = iParam0;
	Global_1328429.f_40.f_2 = iParam1;
	Global_1328429.f_40.f_3 = iParam2;
	StringCopy(&(Global_1328429.f_40.f_4), sParam3, 16);
	Global_1328429.f_40.f_8 = iParam4;
	Global_1328429.f_40.f_9 = iParam5;
	Global_1328429.f_40.f_14 = iParam6;
	func_59(iParam4);
	func_137();
	Global_1328429.f_40.f_13 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 7000);
}

void func_59(int iParam0)
{
	if (func_62(iParam0))
	{
		func_61();
		return;
	}
	func_60();
}

void func_60()
{
	Global_1328429.f_40.f_10 = 0;
}

void func_61()
{
	Global_1328429.f_40.f_10 = 1;
}

int func_62(int iParam0)
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

bool func_63(int iParam0)
{
	return iParam0 > Global_1328429.f_40.f_8;
}

int func_64(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_136();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_133(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_130(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_133(uParam0, sParam3, sParam4);
		}
		return func_114(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_113(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_103(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_102(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_65(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_65(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_101();
	bVar0 = true;
	if (func_67(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_66(120000);
		return 1;
	}
	return 0;
}

void func_66(int iParam0)
{
	Global_1328429.f_40.f_11 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), iParam0);
	Global_1328429.f_40.f_12 = 1;
}

int func_67(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_100();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xB67DF8F35744CF60(iVar0);
		iVar1 = func_94(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1328429.f_40.f_13))
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
	sVar4 = func_93(uParam5, bParam6, &iVar3);
	uVar5 = func_91(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		iVar6++;
		if (!unk_0xB318FDA0D1ABDB20(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xD994929E13CC1ED5(sVar4, " "))
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
		if (unk_0x236D8AD7EE179F46(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xB318FDA0D1ABDB20(sVar2))
	{
		bVar12 = func_90(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_71(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 0))
	{
		func_70();
	}
	func_101();
	func_69();
	func_68();
	return 1;
}

void func_68()
{
	Global_1328429.f_57 = 0;
	Global_1328429.f_57.f_1 = 0;
}

void func_69()
{
	Global_1328429.f_40 = 3;
}

void func_70()
{
	unk_0xF3148AAF69AF9CBC(&Global_2264, 8);
}

int func_71(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_72(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 0);
		}
		return 1;
	}
	return 0;
}

int func_72(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_84();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_2550362 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_83() == 0)
	{
		func_81();
		return 0;
	}
	func_80(Global_2550361);
	StringCopy(&(Global_2549112[Global_2550361 /*104*/]), sParam1, 64);
	Global_2549112[Global_2550361 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2549112[Global_2550361 /*104*/].f_24 = iParam2;
	}
	Global_2549112[Global_2550361 /*104*/].f_25 = iParam7;
	Global_2549112[Global_2550361 /*104*/].f_26 = uParam8;
	Global_2549112[Global_2550361 /*104*/].f_29 = uParam9;
	Global_2549112[Global_2550361 /*104*/].f_30 = uParam12;
	Global_2549112[Global_2550361 /*104*/].f_31 = uParam11;
	Global_2549112[Global_2550361 /*104*/].f_28 = 0;
	Global_2549112[Global_2550361 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_33), sParam4, 64);
	Global_2549112[Global_2550361 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_50), sParam5, 64);
	Global_2549112[Global_2550361 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_83), sParam15, 64);
	func_84();
	switch (iParam16)
	{
		case 3:
			Global_2549112[Global_2550361 /*104*/].f_99[Global_14394] = 1;
			break;
		
		case 0:
			Global_2549112[Global_2550361 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2549112[Global_2550361 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2549112[Global_2550361 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14394)
		{
			case 0:
				func_79(0);
				break;
			
			case 1:
				func_79(1);
				break;
			
			case 2:
				func_79(2);
				break;
			
			case 3:
				func_79(3);
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
				Global_2550362 = 1;
				break;
			
			case 0:
				Global_2550362 = 1;
				break;
			
			case 2:
				Global_2550362 = 1;
				break;
			
			case 1:
				Global_2550362 = 1;
				break;
			}
	}
	Global_16762[Global_2550361] = 0;
	if (bParam10)
	{
		func_84();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_78())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_77(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_73(1);
			func_77(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_76(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_75(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
							{
								if (iVar1 == 14)
								{
									func_74(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_98931.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_98931.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_98931.f_12755[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_74(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_74(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar5 = Global_36498;
											break;
										
										case 1:
											iVar5 = Global_36499;
											break;
										
										case 2:
											iVar5 = Global_36500;
											break;
										
										default:
											break;
									}
									func_74(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_74(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_75(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(Global_2270);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_75(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar6);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar7 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_75(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar7);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 8)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_75(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else if ((iVar1 == 23 && unk_0xD994929E13CC1ED5(&(Global_2271[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x236D8AD7EE179F46(Global_2265, 6))
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_75(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_74(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_74(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_75(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		func_75(sParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam9))
	{
		func_75(sParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam10))
	{
		func_75(sParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam11))
	{
		func_75(sParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_75(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

bool func_76(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_77(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

bool func_78()
{
	return Global_1315892;
}

void func_79(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_98931.f_12665[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_80(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_2549112[iParam0 /*104*/].f_18 = uVar0;
	Global_2549112[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2549112[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2549112[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2549112[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2549112[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2550361 = 11;
	Global_2549112[Global_2550361 /*104*/].f_18 = -1;
	Global_2549112[Global_2550361 /*104*/].f_18.f_1 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_2 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_3 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_82(Global_2549112[iVar2 /*104*/].f_18, Global_2549112[Global_2550361 /*104*/].f_18))
		{
			Global_2550361 = iVar2;
		}
		iVar2++;
	}
	Global_2549112[Global_2550361 /*104*/].f_24 = 1;
}

int func_82(struct<6> Param0, struct<6> Param6)
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

int func_83()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2549112[iVar2 /*104*/].f_24 == 0)
		{
			Global_2550361 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2550361 = 11;
	Global_2549112[Global_2550361 /*104*/].f_18 = -1;
	Global_2549112[Global_2550361 /*104*/].f_18.f_1 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_2 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_3 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2549112[iVar2 /*104*/].f_24 == 0 || Global_2549112[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_82(Global_2549112[iVar2 /*104*/].f_18, Global_2549112[Global_2550361 /*104*/].f_18))
			{
				Global_2550361 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2550361 == 11)
	{
		return 0;
	}
	Global_2549112[Global_2550361 /*104*/].f_99[0] = 0;
	Global_2549112[Global_2550361 /*104*/].f_99[1] = 0;
	Global_2549112[Global_2550361 /*104*/].f_99[2] = 0;
	return 1;
}

void func_84()
{
	if (func_76(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_85();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_85()
{
	func_86();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_86()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_89(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_88(unk_0x81873881071CD9FE());
			if (func_87(iVar0) && (!func_76(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_87(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_87(int iParam0)
{
	return iParam0 < 3;
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_89(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_89(int iParam0)
{
	if (func_87(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_90(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_72(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 0);
		}
		return 1;
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_92(2, iParam1);
	return iParam0;
}

void func_92(int iParam0, var uParam1)
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

var func_93(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xB318FDA0D1ABDB20(uParam0))
	{
		return sLocal_17;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_92(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x46E7F5908F815DDC(sParam0);
}

int func_94(int iParam0)
{
	int iVar0;
	
	iVar0 = func_97(iParam0);
	if (iVar0 == -1)
	{
		func_95(iParam0, 1);
		return 0;
	}
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
}

void func_95(int iParam0, bool bParam1)
{
	if (!func_8(iParam0, 0, 1))
	{
		return;
	}
	if (func_97(iParam0) != -1)
	{
		return;
	}
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_96(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	if (!func_8(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_98(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_98(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_99(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_99(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_100();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

int func_100()
{
	return -1;
}

void func_101()
{
	Global_1328429.f_40.f_9 = 4;
}

int func_102(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_101();
	bVar0 = false;
	return func_67(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_103(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_104(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_104(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_100();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xB67DF8F35744CF60(iVar0);
		iVar1 = func_94(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1328429.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16754 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_93(uParam5, bParam6, &iVar3);
	uVar5 = func_91(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		iVar6++;
		if (!unk_0xB318FDA0D1ABDB20(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xD994929E13CC1ED5(sVar4, " "))
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
		if (unk_0x236D8AD7EE179F46(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xB318FDA0D1ABDB20(sVar2))
	{
		bVar12 = func_112(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_106(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 0))
	{
		func_70();
	}
	func_105();
	func_69();
	func_68();
	return 1;
}

void func_105()
{
	Global_1328429.f_40.f_9 = 3;
}

int func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_107(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_107(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_84();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_98931.f_12665[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_111() == 0)
	{
		func_109();
		return 0;
	}
	func_108(Global_16760);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/]), sParam1, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_25 = iParam7;
	Global_98931.f_12755[Global_16760 /*104*/].f_26 = uParam8;
	Global_98931.f_12755[Global_16760 /*104*/].f_29 = uParam9;
	Global_98931.f_12755[Global_16760 /*104*/].f_30 = uParam12;
	Global_98931.f_12755[Global_16760 /*104*/].f_31 = uParam11;
	Global_98931.f_12755[Global_16760 /*104*/].f_28 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x236D8AD7EE179F46(Global_2264, 10))
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
		Global_2970 = 4;
		func_79(0);
		func_79(2);
		func_79(1);
	}
	else
	{
		func_84();
		switch (iParam16)
		{
			case 3:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14394)
			{
				case 0:
					func_79(0);
					Global_2970 = 0;
					break;
				
				case 1:
					func_79(1);
					Global_2970 = 1;
					break;
				
				case 2:
					func_79(2);
					Global_2970 = 2;
					break;
				
				case 3:
					func_79(3);
					Global_2970 = 3;
					break;
				
				default:
					Global_2970 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 10))
		{
			Global_98931.f_12665[0 /*20*/].f_17 = 1;
			Global_98931.f_12665[1 /*20*/].f_17 = 1;
			Global_98931.f_12665[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_98931.f_12665[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_98931.f_12665[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_98931.f_12665[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_98931.f_12665[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16762[Global_16760] = 0;
	if (bParam10)
	{
		func_84();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_78())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_77(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_73(1);
			func_77(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_98931.f_12755[iParam0 /*104*/].f_18 = uVar0;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_109()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
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
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_110(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_24 = 1;
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
	
	if (Global_69020)
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
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0 || Global_98931.f_12755[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_110(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
			{
				Global_16760 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16760 == 34)
	{
		return 0;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 0;
	return 1;
}

int func_112(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
	iVar0 = 3;
	if (func_107(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			StringCopy(&Global_2952, sParam5, 64);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_113(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	func_105();
	bVar0 = true;
	if (func_104(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_66(120000);
		return 1;
	}
	return 0;
}

int func_114(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x236D8AD7EE179F46(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 4))
	{
		bVar0 = func_129(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_120(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x236D8AD7EE179F46(iParam4, 3))
		{
			func_119(1);
		}
		if (unk_0x236D8AD7EE179F46(iParam4, 5))
		{
			func_118(1);
		}
		func_117();
		func_69();
		func_116();
		func_115();
		return 1;
	}
	return 0;
}

void func_115()
{
	Global_2457949 = 0;
}

void func_116()
{
	Global_1328429.f_57 = 1;
	Global_1328429.f_57.f_1 = 0;
}

void func_117()
{
	Global_1328429.f_40.f_9 = 1;
}

void func_118(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2266, 0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2266, 0);
	}
}

void func_119(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 20);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 20);
	}
}

int func_120(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_128(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_121(sParam3, iParam4, bParam7);
}

int func_121(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_127();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_151(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_126();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_84();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_125())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_124())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_123();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_122();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_127();
	}
	return 0;
}

void func_122()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_123()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_124()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_126()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

void func_127()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_129(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_128(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_121(sParam3, iParam4, bParam7);
}

int func_130(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (func_132(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_131();
		func_117();
		func_69();
		func_116();
		func_115();
		return 1;
	}
	return 0;
}

void func_131()
{
	Global_16711 = 0;
}

bool func_132(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_128(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 1;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 1;
	Global_15747 = 0;
	StringCopy(&Global_15841, sParam5, 24);
	Global_2621441 = 0;
	return func_121(sParam3, iParam4, bParam8);
}

int func_133(var uParam0, char* sParam1, char* sParam2)
{
	if (func_135(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_134();
		func_69();
		func_116();
		return 1;
	}
	return 0;
}

void func_134()
{
	Global_1328429.f_40.f_9 = 2;
}

bool func_135(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_128(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_121(sParam2, iParam3, 0);
}

void func_136()
{
	Global_1328429.f_55 = Global_1328429.f_40.f_1;
	Global_1328429.f_55.f_1 = Global_1328429.f_40.f_10;
}

void func_137()
{
	Global_1328429.f_40 = 1;
}

bool func_138()
{
	return Global_1328429.f_40 == 1;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	if (!func_140(iParam0))
	{
		return 0;
	}
	if (Global_1328429.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1328429.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_140(int iParam0)
{
	if (!func_141())
	{
		return 0;
	}
	if (!Global_1328429.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_141()
{
	if (Global_1328429.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0)
{
	if (func_147())
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	if (func_145(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1698742 || func_144())
	{
		return 0;
	}
	if (!unk_0x236D8AD7EE179F46(iParam0, 6))
	{
		if (func_143())
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()
{
	return unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1343296);
}

int func_144()
{
	if (Global_2539917.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_146()
{
	return Global_1328429.f_40 == 3;
}

bool func_147()
{
	return func_124();
}

int func_148(int iParam0, int iParam1, int iParam2)
{
	if (!func_146())
	{
		return 0;
	}
	return func_139(iParam0, iParam1, iParam2);
}

int func_149(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x8DAF7A748E41AD46(&cVar0);
}

char* func_150()
{
	return "TXTMSG";
}

bool func_151(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

int func_152()
{
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (unk_0x29AFA2493D7C23D0())
	{
		return 0;
	}
	if (func_159())
	{
		return 0;
	}
	if (func_158())
	{
		return 0;
	}
	if (func_157())
	{
		return 0;
	}
	if (func_156())
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (func_155())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (func_154())
	{
		return 0;
	}
	if (func_153())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	return 1;
}

bool func_153()
{
	return Global_2428865.f_566;
}

bool func_154()
{
	return Global_2428865.f_716;
}

bool func_155()
{
	return Global_2429626.f_2842.f_41;
}

bool func_156()
{
	return Global_2422670.f_2420.f_585;
}

bool func_157()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_158()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	if (Global_14394.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_160(char* sParam0, var uParam1, var uParam2)
{
	*uParam1 = 41;
	if (unk_0x236D8AD7EE179F46(iLocal_1195, 0))
	{
		StringCopy(sParam0, "TXT_CAR_PEGCOLL", 16);
		*uParam2 = 0;
		return 1;
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1195, 1))
	{
		StringCopy(sParam0, "PEG_TXT_1", 16);
		*uParam2 = 1;
		return 1;
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1195, 2))
	{
		StringCopy(sParam0, "PEG_TXT_2", 16);
		*uParam2 = 2;
		return 1;
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1195, 3))
	{
		StringCopy(sParam0, "PEG_TXT_3", 16);
		*uParam2 = 3;
		return 1;
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1195, 4))
	{
		StringCopy(sParam0, "PEG_TXT_4", 16);
		*uParam1 = 12;
		*uParam2 = 4;
		return 1;
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1195, 5))
	{
		StringCopy(sParam0, "PEG_TXT_5", 16);
		*uParam1 = 12;
		*uParam2 = 5;
		return 1;
	}
	return 0;
}

void func_161()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	
	if (iLocal_1194 != 0)
	{
		sVar0 = func_167();
		if (!unk_0xD994929E13CC1ED5(sVar0, "NULL"))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_1193, 0))
			{
				sVar1 = "PEGASUS";
				sVar2 = "CT_AUD";
				iVar3 = 41;
				func_166(&uLocal_1415, 3, 0, sVar1, 0, 1);
				if (func_162(&uLocal_1415, iVar3, sVar2, sVar0, 0, 0))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_1193, 0);
				}
			}
			else if (!unk_0x236D8AD7EE179F46(iLocal_1193, 1))
			{
				if (func_145(0))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_1193, 1);
				}
			}
			else if (!func_145(0))
			{
				iLocal_1194 = 0;
				iLocal_1193 = 0;
			}
		}
	}
}

int func_162(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_164())
	{
		return 0;
	}
	if (func_163())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_57(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_163()
{
	return Global_2456109.f_1;
}

int func_164()
{
	if (Global_1328617.f_2)
	{
		return 1;
	}
	return func_165();
}

bool func_165()
{
	return func_147();
}

void func_166(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

char* func_167()
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(iLocal_1194, 0))
	{
		if (func_168())
		{
			return "MPCT_19";
		}
		else
		{
			return "MPCT_20";
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1194, 1))
	{
		iVar0 = Local_1202.f_12;
		if (iVar0 != 0)
		{
			if ((unk_0x9F59BCFFFEAAD4B1(iVar0) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
			{
				if (func_168())
				{
					return "MPCT_13";
				}
				else
				{
					return "MPCT_14";
				}
			}
			else if (unk_0x1699D7B95446F15C(iVar0) || unk_0xE083914AB72DD7CE(iVar0))
			{
				if (func_168())
				{
					return "MPCT_15";
				}
				else
				{
					return "MPCT_16";
				}
			}
			else if (func_168())
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

bool func_168()
{
	return func_169(unk_0x1329891157A54C63());
}

int func_169(int iParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_170()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 1))
		{
			if (unk_0x250A8F68F67CA19A(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49))
			{
				Local_1202.f_5 = uLocal_1414;
				unk_0xF3148AAF69AF9CBC(&Local_1202, 1);
				unk_0xC69E84EBBD7166E6(&Local_1202, 9);
			}
			else
			{
				if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 2))
				{
					if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 3))
					{
						if (unk_0xFBACB273AA628CC5(Local_1202.f_4))
						{
							unk_0x0A8175F24237A3D4(&(Local_1202.f_4));
						}
						if (!unk_0xFBACB273AA628CC5(Local_1202.f_4))
						{
							Local_1202.f_4 = func_187(func_188(Local_1202.f_3), 0);
						}
						if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
						{
							func_183();
							unk_0x2AB7C42FF2AF476D(Local_1202.f_4, unk_0x60793BDBCF1CD039(Local_1202.f_12));
						}
						else
						{
							unk_0x1B86E7A8766EA6B4(Local_1202.f_4, 3);
							if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 5) && Local_1202.f_2 != -1)
							{
								unk_0x2AB7C42FF2AF476D(Local_1202.f_4, unk_0x60793BDBCF1CD039(Local_1202.f_12));
							}
							else
							{
								unk_0x2AB7C42FF2AF476D(Local_1202.f_4, "VED_BLIPN");
							}
						}
						if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 8))
						{
							unk_0x20F5C387A2DC0C80(Local_1202.f_4, 1);
							unk_0x4D2AF8274EB774A2(Local_1202.f_4, 10000);
							unk_0xF3148AAF69AF9CBC(&Local_1202, 8);
						}
						unk_0xF3148AAF69AF9CBC(&Local_1202, 3);
					}
				}
				if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 9))
				{
					unk_0xF3148AAF69AF9CBC(&Local_1202, 9);
					Local_1202.f_5 = uLocal_1414;
				}
				else if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
				{
					if (unk_0x996F735E5C03B101(uLocal_1414, Local_1202.f_5) > 14400000)
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_1195, 3);
						bVar0 = true;
					}
				}
			}
		}
		else if (unk_0x250A8F68F67CA19A(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49))
		{
			iVar2 = unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49);
			if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 2))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar2, 1) && !func_182(iVar2))
				{
					if (unk_0xFBACB273AA628CC5(Local_1202.f_4))
					{
						unk_0x0A8175F24237A3D4(&(Local_1202.f_4));
					}
					if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 3))
					{
						unk_0xC69E84EBBD7166E6(&Local_1202, 3);
					}
					if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
					{
						Local_1202.f_4 = unk_0xE122DDAE9E94767B(iVar2);
						func_183();
						unk_0x2AB7C42FF2AF476D(Local_1202.f_4, unk_0x60793BDBCF1CD039(Local_1202.f_12));
					}
					else
					{
						Local_1202.f_4 = func_179(iVar2, 0, 0);
						unk_0x2AB7C42FF2AF476D(Local_1202.f_4, unk_0x60793BDBCF1CD039(Local_1202.f_12));
					}
					if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 8))
					{
						unk_0x20F5C387A2DC0C80(Local_1202.f_4, 1);
						unk_0x4D2AF8274EB774A2(Local_1202.f_4, 10000);
						unk_0xF3148AAF69AF9CBC(&Local_1202, 8);
					}
					unk_0xF3148AAF69AF9CBC(&Local_1202, 2);
				}
			}
			else if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar2, 1))
			{
				if (unk_0xFBACB273AA628CC5(Local_1202.f_4))
				{
					unk_0x0A8175F24237A3D4(&(Local_1202.f_4));
				}
				unk_0xC69E84EBBD7166E6(&Local_1202, 2);
			}
			if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 4))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), unk_0xB6AE0DAE06D56288(iVar2, 0)) < 40000f)
				{
					unk_0xF3148AAF69AF9CBC(&Local_1202, 4);
					if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 9))
					{
						unk_0xC69E84EBBD7166E6(&Local_1202, 9);
					}
				}
				else if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), unk_0xB6AE0DAE06D56288(iVar2, 0)) > 62500f)
				{
					if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 9))
					{
						if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
						{
							if (unk_0x996F735E5C03B101(iLocal_1414, Local_1202.f_5) > 120000)
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_1195, 3);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), unk_0xB6AE0DAE06D56288(iVar2, 0)) > 62500f)
			{
				unk_0xC69E84EBBD7166E6(&Local_1202, 4);
				if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
				{
					bVar0 = true;
				}
				else if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 9))
				{
					unk_0xF3148AAF69AF9CBC(&Local_1202, 9);
					Local_1202.f_5 = iLocal_1414;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
			{
				if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 10))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar2, 1))
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_1195, 4);
						Local_1202.f_6 = iLocal_1414;
						unk_0xF3148AAF69AF9CBC(&Local_1202, 10);
					}
				}
				else if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iVar2, 0), Local_1202.f_13) > 2500f)
				{
					if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 11))
					{
						unk_0xF3148AAF69AF9CBC(&Local_1202, 11);
					}
					if (unk_0x996F735E5C03B101(iLocal_1414, Local_1202.f_6) > 1440000)
					{
						func_41();
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 11))
				{
					unk_0xC69E84EBBD7166E6(&Local_1202, 11);
				}
			}
			if (!unk_0x236D8AD7EE179F46(iLocal_1196, 2))
			{
				func_178();
			}
			else
			{
				bVar0 = true;
			}
			if (!unk_0x930F8FBB8E9537CC(iVar2))
			{
				if (!unk_0xBEB00EB4ADDC2A33(iVar2, -1))
				{
					if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) != unk_0x81873881071CD9FE())
					{
						bVar1 = false;
						if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iVar2, 0), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 40000f)
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
							if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
							{
								if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 13))
								{
									unk_0xF3148AAF69AF9CBC(&iLocal_1195, 1);
									unk_0xF3148AAF69AF9CBC(&Local_1202, 13);
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
			if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
			{
				if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 4))
				{
					if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 7))
					{
						Local_1202.f_5 = iLocal_1414;
						unk_0xC69E84EBBD7166E6(&Local_1202, 7);
					}
					if (unk_0x996F735E5C03B101(iLocal_1414, Local_1202.f_5) > 300000)
					{
						bVar0 = true;
					}
				}
				else if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 7))
				{
					unk_0xF3148AAF69AF9CBC(&Local_1202, 7);
				}
			}
			if (!unk_0x7404950238A154C2(iVar2, 0))
			{
				if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
				{
					func_177(&(Global_2429626.f_4006.f_119[22 /*2*/]), 1, 0);
					func_172(22, -1, -1);
					unk_0xF3148AAF69AF9CBC(&iLocal_1195, 2);
				}
				bVar0 = true;
			}
		}
		else if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
		{
			unk_0xC69E84EBBD7166E6(&Local_1202, 1);
			unk_0xC69E84EBBD7166E6(&Local_1202, 2);
			unk_0xC69E84EBBD7166E6(&Local_1202, 3);
			unk_0xC69E84EBBD7166E6(&Local_1202, 4);
			unk_0xC69E84EBBD7166E6(&Local_1202, 5);
		}
		else
		{
			bVar0 = true;
		}
		if (!Global_2437920)
		{
			if (func_171(Local_1202.f_3))
			{
				Global_2437920 = 1;
			}
		}
		if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
		{
			if (!unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 8))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3371), 8);
			}
		}
		if (!unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 10))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3371), 10);
		}
	}
	else
	{
		if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 8))
		{
			unk_0xC69E84EBBD7166E6(&(Global_2422670.f_3371), 8);
		}
		if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 10))
		{
			unk_0xC69E84EBBD7166E6(&(Global_2422670.f_3371), 10);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 8) && unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 9))
	{
		if (unk_0xFBACB273AA628CC5(Local_1202.f_4))
		{
			Var3 = { unk_0x3BB744083EDD3FF5(Local_1202.f_4) };
			if (!unk_0x236D8AD7EE179F46(iLocal_1196, 0))
			{
				unk_0xF6737867C8637D69(Var3.f_0, Var3.f_1);
				Local_1199 = { Var3 };
				unk_0xF3148AAF69AF9CBC(&iLocal_1196, 0);
			}
			else if (Local_1199.f_0 != Var3.f_0 || Local_1199.f_1 != Var3.f_1)
			{
				unk_0xF6737867C8637D69(Var3.f_0, Var3.f_1);
				Local_1199 = { Var3 };
			}
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1196, 0))
	{
		Local_1199 = { Local_93 };
		unk_0xC69E84EBBD7166E6(&iLocal_1196, 0);
	}
	if (bVar0)
	{
		func_35(0, 1);
	}
}

int func_171(int iParam0)
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

void func_172(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		Global_2429626.f_4006.f_198[iParam0] = (Global_2429626.f_4006.f_198[iParam0] + iParam2);
	}
	else if (iParam1 != -1)
	{
		Global_2429626.f_4006.f_198[iParam0] = iParam1;
	}
	else
	{
		Global_2429626.f_4006.f_198[iParam0] = func_173(iParam0);
	}
}

int func_173(int iParam0)
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
			return func_176();
			break;
		
		case 23:
			return func_174();
			break;
		
		case 24:
			return func_174();
			break;
		
		case 25:
			return func_174();
			break;
		
		case 26:
			return func_174();
			break;
		
		case 35:
			return 480000;
			break;
		
		case 36:
			return 180000;
			break;
	}
	return 0;
}

int func_174()
{
	if (unk_0x253C9FE2EFE18AEC(func_175(46), -1, 0, 0))
	{
		return Global_262145.f_9245;
	}
	return 0;
}

char* func_175(int iParam0)
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
		
		case 48:
			return "AM_BOAT_TAXI";
		
		case 49:
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
		
		case 62:
			return "am_rollercoaster";
		
		case 63:
			return "am_ferriswheel";
		
		case 64:
			return "AM_LAUNCHER";
		
		case 65:
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
		
		case 50:
			return "fm_hold_up_tut";
		
		case 51:
			return "AM_CAR_MOD_TUT";
		
		case 52:
			return "AM_CONTACT_REQUESTS";
		
		case 53:
			return "am_mission_launch";
		
		case 54:
			return "am_npc_invites";
		
		case 55:
			return "am_lester_cut";
		
		case 58:
			return "AM_VEHICLE_SPAWN";
		
		case 59:
			return "am_ronTrevor_Cut";
		
		case 60:
			return "AM_ARMYBASE";
		
		case 61:
			return "AM_PRISON";
		
		case 66:
			return "AM_ArmWrestling";
		
		case 73:
			return "fm_Bj_race_controler";
		
		case 67:
			return "AM_Darts";
		
		case 74:
			return "fm_deathmatch_controler";
		
		case 72:
			return "FM_Impromptu_DM_Controler";
		
		case 75:
			return "fm_hideout_controler";
		
		case 68:
			return "golf_mp";
		
		case 71:
			return "Pilot_School_MP";
		
		case 76:
			return "FM_Mission_Controller";
		
		case 77:
			return "FM_Race_Controler";
		
		case 69:
			return "Range_Modern_MP";
		
		case 78:
			return "FM_Horde_Controler";
		
		case 70:
			return "tennis_network_mp";
		
		case 56:
			return "am_heist_int";
		
		case 57:
			return "am_lowrider_int";
		
		case joaat("mpsv_lp0_31"):
			return "SCTV";
		
		case 0:
			return "";
		
		default:
	}
	return "";
}

int func_176()
{
	if (unk_0x253C9FE2EFE18AEC(func_175(46), -1, 0, 0))
	{
		return Global_262145.f_9006;
	}
	return 0;
}

void func_177(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD74C7D8D2E5E43D2();
		}
		else
		{
			*uParam0 = unk_0xE36DF6414E5CCBBF();
		}
	}
	else
	{
		*uParam0 = unk_0x48E480685981C7D4();
	}
	uParam0->f_1 = 1;
}

void func_178()
{
	int iVar0;
	
	if (unk_0x253C9FE2EFE18AEC(func_175(46), -1, 0, 0))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x250A8F68F67CA19A(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49))
			{
				if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 0) && !unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
				{
					iVar0 = unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49);
					if (!unk_0x7404950238A154C2(iVar0, 0))
					{
						func_177(&(Global_2429626.f_4006.f_119[25 /*2*/]), 1, 0);
						func_172(25, -1, -1);
						unk_0xF3148AAF69AF9CBC(&iLocal_1196, 2);
					}
				}
			}
		}
	}
}

int func_179(int iParam0, bool bParam1, bool bParam2)
{
	return func_180(iParam0, !bParam1, bParam2);
}

int func_180(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_181(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_181(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_181(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_181(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_182(int iParam0)
{
	if (unk_0x9C1418C53B05D47B("UsingForTimeTrial", 2))
	{
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "UsingForTimeTrial"))
		{
			return unk_0x53ABC9BE848EA65A(iParam0, "UsingForTimeTrial");
		}
	}
	return 0;
}

void func_183()
{
	if (unk_0xC5ABD699DDC9D5A0(Local_1202.f_12))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 226);
	}
	else if (unk_0xE083914AB72DD7CE(Local_1202.f_12))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 64);
	}
	else if (unk_0x9F59BCFFFEAAD4B1(Local_1202.f_12))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 410);
	}
	else if (func_186(Local_1202.f_12))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 424);
	}
	else if (unk_0x1699D7B95446F15C(Local_1202.f_12))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 423);
	}
	else if (Local_1202.f_12 == joaat("rhino"))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 421);
	}
	else if (Local_1202.f_12 == joaat("submersible") || Local_1202.f_12 == joaat("submersible2"))
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 308);
	}
	else
	{
		unk_0x8F827BB0F6ED7AA8(Local_1202.f_4, 225);
	}
	func_184(&(Local_1202.f_4), 13);
}

void func_184(var uParam0, int iParam1)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, func_185(iParam1));
	}
}

int func_185(int iParam0)
{
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
	return 0;
}

int func_186(int iParam0)
{
	if ((iParam0 == joaat("lazer") || iParam0 == joaat("besra")) || iParam0 == joaat("hydra"))
	{
		return 1;
	}
	return 0;
}

var func_187(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_181(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

Vector3 func_188(int iParam0)
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

void func_189()
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(Global_2429626.f_5585, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Global_2429626.f_5585, 1) && !unk_0x236D8AD7EE179F46(Global_2429626.f_5585, 2))
		{
			if (func_4(&(Local_1202.f_7), 10000, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2429626.f_5585), 2);
			}
			else if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 1))
			{
				if (!unk_0x236D8AD7EE179F46(Local_1202.f_0, 0))
				{
					iVar0 = Global_2429626.f_3093.f_66;
					if (iVar0 != 0)
					{
						unk_0x32A12757CBF48A33(iVar0);
						if (unk_0x33ACB874CECA2D4B(iVar0))
						{
							if (!unk_0x236D8AD7EE179F46(Local_1202.f_1, 0))
							{
								if (func_196(unk_0xD2E2B0775C0B702C(false) + 1, 0, 1))
								{
									unk_0xCD9A6588DBAF710A(unk_0xD2E2B0775C0B702C(false) + 1);
									unk_0xF3148AAF69AF9CBC(&(Local_1202.f_1), 0);
								}
							}
							else if (unk_0x63A7F7D75B0E5FA9(1))
							{
								unk_0xF3148AAF69AF9CBC(&Local_1202, 0);
								unk_0xF3148AAF69AF9CBC(&Local_1202, 6);
								if (func_191(iVar0, Global_2429626.f_3531, Global_2429626.f_3534, 0))
								{
									Local_1202.f_5 = iLocal_1414;
									Local_1202.f_11 = func_190(iVar0);
									Local_1202.f_12 = iVar0;
									Local_1202.f_1 = 0;
									unk_0xCD9A6588DBAF710A((unk_0xD2E2B0775C0B702C(false) - 1));
									unk_0x887F4488DA99FD21(iVar0);
									unk_0xF3148AAF69AF9CBC(&(Global_2429626.f_5585), 1);
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
		func_3(&(Local_1202.f_7));
	}
}

int func_190(int iParam0)
{
	if ((unk_0x9F59BCFFFEAAD4B1(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"))
	{
		return 0;
	}
	if (unk_0xE083914AB72DD7CE(iParam0))
	{
		return 1;
	}
	if (unk_0x61A26017817C6AED(iParam0) || unk_0x8923BC9F314B991D(iParam0))
	{
		return 2;
	}
	if (unk_0x1699D7B95446F15C(iParam0))
	{
		return 3;
	}
	return 2;
}

int func_191(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x250A8F68F67CA19A(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49))
	{
		if (func_195(iParam0))
		{
			if (func_194(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), iParam0, Param1, uParam4, 0, 1, 0, 0, 1, 1))
			{
				Global_2451473.f_280 = unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49);
				if (iParam0 == joaat("luxor2"))
				{
					Local_1671.f_27 = Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49;
				}
				if (unk_0x9C1418C53B05D47B("MPBitset", 3))
				{
					if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), "MPBitset"))
					{
						uVar0 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), "MPBitset");
					}
					if (iParam0 == joaat("luxor2") || iParam0 == joaat("swift2"))
					{
						unk_0xF3148AAF69AF9CBC(&uVar0, 10);
					}
					unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), "MPBitset", uVar0);
				}
				unk_0x59E017D2DE90066E(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49, unk_0x1329891157A54C63(), 1);
				if (bParam5)
				{
					unk_0x4B9126AEF0E84DA7(unk_0x262EBD0AA0ED1D6D(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 1);
				}
				unk_0x5CC9D6711FE01F0D(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49));
				if ((unk_0x9F59BCFFFEAAD4B1(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"))
				{
					if (unk_0x90CBCA0418056042(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49)))
					{
						unk_0xC3D55C17F4AFE6C8(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 1);
					}
				}
				if (iParam0 == joaat("monster"))
				{
					unk_0xCAFB5A22098B8EA4(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0, 0, 0);
				}
				if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
				{
					unk_0xF196EBA065B17452(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0);
					unk_0x323720FEE81B53C0(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 16, (unk_0x728464249800975B(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 16) - 1), 0);
					unk_0xDD213338390D43E1(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0);
				}
				if (iParam0 == joaat("technical"))
				{
					unk_0xDD213338390D43E1(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0);
				}
				iVar1 = func_193(iParam0);
				if (func_192(iVar1))
				{
					if (unk_0xBE23E5C609DF6E79(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49)) > 0)
					{
						unk_0xF196EBA065B17452(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0);
					}
					unk_0x24F85A008ECA63FB(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), Global_2414506[unk_0x1329891157A54C63() /*255*/].f_50);
					if (Global_2414506[unk_0x1329891157A54C63() /*255*/].f_51 != -1)
					{
						unk_0xFD021BAF9614D437(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), Global_2414506[unk_0x1329891157A54C63() /*255*/].f_51, Global_2414506[unk_0x1329891157A54C63() /*255*/].f_52);
					}
				}
				unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0);
				Local_1202.f_13 = { Param1 };
				if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
				{
					unk_0xDD6B145BC3BFD188(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), "CreatedByPegasus", 1);
					unk_0x04CA137FB87EF9B9(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 1);
				}
				else
				{
					unk_0x04CA137FB87EF9B9(unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49), 0);
				}
				unk_0x887F4488DA99FD21(iParam0);
				return 1;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232)
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0)
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
	return -1;
}

int func_194(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(iVar0, iParam9);
		return 1;
	}
	return 0;
}

bool func_195(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

bool func_196(int iParam0, bool bParam1, bool bParam2)
{
	return func_197(1, iParam0, 1, bParam1, bParam2);
}

int func_197(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x236D8AD7EE179F46(Global_1344683, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_201(iParam0) - func_200(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_200(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_201(iParam0) - func_199(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_200(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_201(iParam0) - func_200(iParam0, 1));
		}
		if (!bParam4 && Global_1585045[unk_0x1329891157A54C63() /*400*/] != 3)
		{
			iVar1 = (iVar1 - func_198(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0)
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

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1344683.f_1;
			break;
		
		case 1:
			return Global_1344683.f_2;
			break;
		
		case 2:
			return Global_1344683.f_3;
			break;
	}
	return 0;
}

int func_200(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_206;
			}
			else
			{
				return unk_0xE2146C98F90922C2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_207;
			}
			else
			{
				return unk_0xD2E2B0775C0B702C(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_208;
			}
			else
			{
				return unk_0xAE49493A61A9139F(!bParam1);
			}
			break;
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1344691;
			break;
		
		case 1:
			return Global_1344692;
			break;
		
		case 2:
			return Global_1344693;
			break;
	}
	return 0;
}

void func_202()
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
	if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 7))
	{
		iVar0 = func_190(Global_2422670.f_3372);
		bVar2 = true;
		bVar1 = true;
	}
	else if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 3))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 4))
	{
		iVar0 = 1;
		bVar1 = true;
	}
	else if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 5))
	{
		iVar0 = 2;
		bVar1 = true;
	}
	else if (unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 6))
	{
		iVar0 = 3;
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar8 = unk_0x1329891157A54C63();
		if (bVar1)
		{
			iVar6 = 0;
			while (iVar6 < 5)
			{
				if (bVar1)
				{
					if (!unk_0x236D8AD7EE179F46(Local_232[iVar8 /*30*/].f_5[iVar6 /*4*/].f_1, 1))
					{
						if (unk_0x236D8AD7EE179F46(Local_232[iVar8 /*30*/].f_5[iVar6 /*4*/].f_1, 0))
						{
							func_48(iVar6);
						}
						func_35(0, 1);
						Local_1202.f_2 = iVar6;
						bVar1 = false;
					}
				}
				iVar6++;
			}
		}
		iVar9 = 0;
		if (Local_1202.f_2 != -1)
		{
			iVar10 = -1;
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < 60)
			{
				if (!func_231(iVar7))
				{
					bVar12 = Global_2422670.f_3372 == joaat("hydra");
					if (func_230(iVar7, iVar0) || (bVar12 && func_230(iVar7, 1)))
					{
						if (func_229(unk_0x1329891157A54C63(), iVar7) || bVar2)
						{
							if (func_228(iVar7) || !bVar2)
							{
								iVar11 = 0;
								if (bVar2)
								{
									iVar11 = Global_2422670.f_3372;
								}
								else
								{
									iVar11 = func_218(unk_0x1329891157A54C63(), iVar7);
								}
								if (iVar11 != 0)
								{
									if (!unk_0x236D8AD7EE179F46(Global_2422670.f_3371, 5) || func_217(iVar11))
									{
										if (!func_216(iVar11) || func_215(iVar7))
										{
											if (!func_214(iVar11) || func_211(iVar7))
											{
												if (func_210(iVar7, iVar11))
												{
													if (iVar10 == -1)
													{
														iVar10 = iVar7;
														iVar9 = iVar11;
													}
													else
													{
														if (func_209(unk_0x1329891157A54C63(), 1) && Global_1585045[iVar8 /*400*/].f_248.f_7 > -1)
														{
															Var3 = { Global_1049033[Global_1585045[iVar8 /*400*/].f_248.f_7 /*1485*/].f_3[0 /*3*/] };
														}
														else
														{
															Var3 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
														}
														if (unk_0xB7A628320EFF8E47(Var3, func_188(iVar7)) < unk_0xB7A628320EFF8E47(Var3, func_188(iVar10)))
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
				iVar7++;
			}
			if (iVar10 != -1)
			{
				Local_1202.f_3 = iVar10;
				Local_1202.f_5 = iLocal_1414;
				unk_0xF3148AAF69AF9CBC(&Local_1202, 0);
				Local_1202.f_11 = iVar0;
				Local_1202.f_12 = iVar9;
				if (bVar2)
				{
					unk_0xF3148AAF69AF9CBC(&Local_1202, 6);
				}
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
		}
		if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3371), 1);
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3371), 2);
		}
		else
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3371), 1);
			if (!bVar1)
			{
				if (iVar9 != 0)
				{
					Global_2422670.f_3372 = iVar9;
					unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3371), 2);
					func_203(func_208(iVar0, 1), 1);
				}
			}
		}
	}
}

int func_203(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x02A6B267064771B1(sParam0);
	iVar0 = unk_0x267D6EB296008122(0, 1);
	func_204(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_204(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_207() || !unk_0x726DA50057167075()) || !func_24(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_205(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1707570.f_5[iVar0 /*53*/] = iParam0;
		Global_1707570.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1707570.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1707570.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1707570.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1707570.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1707570.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_206(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1707570++;
	if (Global_1707570 > 5)
	{
		Global_1707570 = 5;
		return Global_1707570;
	}
	return (Global_1707570 - 1);
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_207()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

char* func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "VS_TCK_10";
				break;
			
			case 1:
				return "VS_TCK_11";
				break;
			
			case 2:
				return "VS_TCK_12";
				break;
			
			case 3:
				return "VS_TCK_13";
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

int func_209(int iParam0, bool bParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1)
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

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_213(iParam0))
	{
		if (func_212(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
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

int func_213(int iParam0)
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

int func_214(int iParam0)
{
	if ((((((((((((((((((iParam0 == joaat("stunt") || iParam0 == joaat("cuban800")) || iParam0 == joaat("duster")) || iParam0 == joaat("frogger")) || iParam0 == joaat("maverick")) || iParam0 == joaat("marquis")) || iParam0 == joaat("jetmax")) || iParam0 == joaat("squalo")) || iParam0 == joaat("tropic")) || iParam0 == joaat("seashark")) || iParam0 == joaat("submersible")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("suntrap")) || iParam0 == joaat("crusader")) || iParam0 == joaat("annihilator")) || iParam0 == joaat("mammatus")) || iParam0 == joaat("stretch")) || iParam0 == joaat("barracks")) || iParam0 == joaat("besra"))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
			break;
	}
	return 1;
}

int func_216(int iParam0)
{
	if (iParam0 == joaat("submersible") || iParam0 == joaat("submersible2"))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	if ((iParam0 == joaat("riot") || iParam0 == joaat("bulldozer")) || iParam0 == joaat("blazer"))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)
{
	unk_0x3F098E06DD67BEEC(unk_0x48E480685981C7D4());
	return func_219(iParam1, unk_0x2E0A9E3291F398E3(0, func_220(func_224(iParam0), iParam1)));
}

int func_219(int iParam0, int iParam1)
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

int func_220(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < func_223(iParam1))
	{
		if (iParam0 >= func_221(func_219(iParam1, iVar1)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8000)
	{
		if (func_222(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_222(int iParam0)
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

int func_223(int iParam0)
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

int func_224(int iParam0)
{
	int iVar0;
	
	iVar0 = func_226(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_225(iVar0, 0);
}

int func_225(int iParam0, int iParam1)
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
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
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

int func_226(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_38(-1)];
			}
			else if (func_227(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_38(-1)];
	}
	return 0;
}

int func_227(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
	}
	return 1;
}

int func_228(int iParam0)
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

int func_229(int iParam0, int iParam1)
{
	if (func_224(iParam0) >= func_221(func_219(iParam1, 0)))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0, int iParam1)
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

bool func_231(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	return unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_2[func_51(iParam0)], func_50(iParam0));
}

void func_232()
{
	int iVar0;
	int iVar1;
	
	if (Global_2422670.f_3370 != 0)
	{
		iVar1 = unk_0x1329891157A54C63();
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (unk_0x236D8AD7EE179F46(Global_2422670.f_3370, iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Local_232[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1, 0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_232[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1, 3))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_232[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1), 3);
					}
					Local_232[iVar1 /*30*/].f_5[iVar0 /*4*/].f_2++;
					if (Local_232[iVar1 /*30*/].f_5[iVar0 /*4*/].f_2 >= 2)
					{
						if (unk_0x236D8AD7EE179F46(Local_232[iVar1 /*30*/].f_5[iVar0 /*4*/].f_1, 1))
						{
							if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 6))
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_1194, 0);
								func_245(func_247(22), 1, 0, 0f);
								func_234(func_247(22), 5, 2, 1);
							}
							else
							{
								func_203(func_208(Local_1202.f_11, 0), 1);
								func_234(func_233(Local_1202.f_11), 5, 2, 1);
							}
							func_35(0, 1);
						}
						func_48(iVar0);
					}
				}
				unk_0xC69E84EBBD7166E6(&(Global_2422670.f_3370), iVar0);
			}
			iVar0++;
		}
	}
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_247(23);
			break;
		
		case 1:
			return func_247(24);
			break;
		
		case 2:
			return func_247(25);
			break;
		
		case 3:
			return func_247(26);
			break;
	}
	return 0;
}

void func_234(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	
	StringCopy(&Var0, func_244(iParam1), 16);
	StringCopy(&Var4, func_243(iParam2), 16);
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
	if (func_242())
	{
		func_235(iVar8, iParam0, &iVar9, bParam3, bParam3);
		Global_2545514[iVar9 /*69*/].f_8.f_43 = { Var0 };
		Global_2545514[iVar9 /*69*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0xA324018042E51B77(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_242())
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
			if (iParam1 > 0)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_242())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_26()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_241(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_240(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_242())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_239(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_239(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_240(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_241(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_242())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_242()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

char* func_243(int iParam0)
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

char* func_244(int iParam0)
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

void func_245(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_4 = iVar1;
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_3 = (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_246(iVar1, 0);
	}
}

void func_246(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_249(iParam0) >= 0)
	{
		iVar0 = func_249(iParam0);
	}
	else
	{
		iVar0 = func_248(iParam0);
	}
	return iVar0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 5000;
			break;
		
		case 11:
			return 12500;
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
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 1)
			{
				return Global_262145.f_5018;
			}
			else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 2)
			{
				return Global_262145.f_5019;
			}
			else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 3)
			{
				return Global_262145.f_5020;
			}
			else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 4)
			{
				return Global_262145.f_5021;
			}
			else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 5)
			{
				return Global_262145.f_5022;
			}
			else
			{
				return 200;
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
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return Global_262145.f_4108;
			break;
		
		case 11:
			return Global_262145.f_4109;
			break;
		
		case 8:
			return Global_262145.f_4106;
			break;
		
		case 0:
			return Global_262145.f_4092;
			break;
		
		case 9:
			return Global_262145.f_4107;
			break;
		
		case 13:
			return Global_262145.f_4111;
			break;
		
		case 12:
			return Global_262145.f_4110;
			break;
		
		case 2:
			return Global_262145.f_4102;
			break;
		
		case 14:
			return Global_262145.f_4112;
			break;
		
		case 20:
			return Global_262145.f_4117;
			break;
		
		case 6:
			return Global_262145.f_4105;
			break;
		
		case 22:
			return Global_262145.f_4118;
			break;
		
		case 23:
			return Global_262145.f_4119;
			break;
		
		case 24:
			return Global_262145.f_4120;
			break;
		
		case 25:
			return Global_262145.f_4121;
			break;
		
		case 26:
			return Global_262145.f_4122;
			break;
		
		case 35:
			return Global_262145.f_5586;
			break;
		
		case 15:
			return Global_262145.f_5012;
			break;
		
		case 17:
			return Global_262145.f_5012;
			break;
		
		case 18:
			return Global_262145.f_5012;
			break;
		
		case 19:
			return Global_262145.f_5012;
			break;
		
		case 21:
			return Global_262145.f_5012;
			break;
		
		case 36:
			return Global_262145.f_6051;
			break;
	}
	return 0;
}

void func_250()
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
	
	iVar0 = unk_0x519AAFF77CC141DF();
	bVar3 = false;
	bVar11 = false;
	bVar12 = false;
	bVar13 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 0))
		{
			if (!iLocal_1584[iVar1])
			{
				iVar14 = 0;
				if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 1))
				{
					iVar14 = Local_1202.f_12;
				}
				else
				{
					iVar14 = Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_3;
				}
				if (iVar14 != 0)
				{
					unk_0x32A12757CBF48A33(iVar14);
					if (func_275(iVar0, Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/]))
					{
						if (unk_0x33ACB874CECA2D4B(iVar14))
						{
							if (!unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 2))
							{
								if (func_196(unk_0xD2E2B0775C0B702C(false) + 1, 0, 1))
								{
									unk_0xCD9A6588DBAF710A(unk_0xD2E2B0775C0B702C(false) + 1);
									unk_0xF3148AAF69AF9CBC(&(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1), 2);
								}
							}
							else if (unk_0x63A7F7D75B0E5FA9(1))
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_1219, 0))
								{
									iLocal_1219 = func_274(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/]);
									unk_0xF3148AAF69AF9CBC(&iLocal_1219, 0);
								}
								if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 3))
								{
									bVar11 = false;
								}
								else
								{
									bVar11 = true;
								}
								if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 1))
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
								while (iVar2 < func_213(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/]))
								{
									if (unk_0x236D8AD7EE179F46(iLocal_1219, iVar2))
									{
										if (func_273(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2, iVar14))
										{
											if (!func_214(iVar14) || func_212(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2))
											{
												Var7 = { func_272(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2) };
												if (func_271(Var7, 1752.63f, 3241.048f, 40.8582f, 50f, 1))
												{
													fVar6 = 90000f;
												}
												else
												{
													fVar6 = 22500f;
												}
												if (!bVar12 || unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var7) < fVar6)
												{
													if (!bVar13 || func_268(func_272(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2)))
													{
														fVar15 = 8.5f;
														if (iVar14 == joaat("luxor2"))
														{
															fVar15 = 13f;
														}
														if (func_261(Var7, fVar15, 1f, 1f, 5f, bVar11, bVar11, bVar11, 1123024896, 0, -1, 1, 0, 0, 0, 0))
														{
															if (!func_253(Var7, 5f, unk_0x1329891157A54C63(), 1, 1))
															{
																if (iVar10 == -1)
																{
																	iVar10 = iVar2;
																}
																else
																{
																	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
																	{
																	}
																	fVar5 = unk_0xB7A628320EFF8E47(func_272(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar2), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
																	fVar4 = unk_0xB7A628320EFF8E47(func_272(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
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
									iVar2++;
								}
								bVar3 = false;
								if (iVar10 != -1)
								{
									if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/].f_1, 1))
									{
										if (func_191(iVar14, func_272(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), func_252(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), !bVar11))
										{
											bVar3 = true;
										}
									}
									else if (func_251(iVar14, func_272(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), func_252(Local_232[iVar0 /*30*/].f_5[iVar1 /*4*/], iVar10), !bVar11))
									{
										bVar3 = true;
									}
									if (bVar3)
									{
										iLocal_1584[iVar1] = 1;
										func_3(&(Local_1590[iVar1 /*2*/]));
									}
								}
								if (!bVar3)
								{
									unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3370), iVar1);
								}
								iLocal_1219 = 0;
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
}

int func_251(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	var uVar0;
	
	if (!unk_0x335F574AD77E59CE(uLocal_1218))
	{
		if (unk_0x63A7F7D75B0E5FA9(1))
		{
			if (func_195(iParam0))
			{
				if (func_194(&uLocal_1218, iParam0, Param1, uParam4, 0, 1, 1, 0, 1, 1))
				{
					if (bParam5)
					{
						unk_0x4B9126AEF0E84DA7(unk_0x262EBD0AA0ED1D6D(uLocal_1218), 1);
					}
					unk_0x5CC9D6711FE01F0D(unk_0x1D1DAF7F94D5FE77(uLocal_1218));
					if ((unk_0x9F59BCFFFEAAD4B1(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"))
					{
						if (unk_0x90CBCA0418056042(unk_0x1D1DAF7F94D5FE77(uLocal_1218)))
						{
							unk_0xC3D55C17F4AFE6C8(unk_0x1D1DAF7F94D5FE77(uLocal_1218), 1);
						}
					}
					if (iParam0 == joaat("riot"))
					{
						unk_0xF239D177F4EB07F9(unk_0x1D1DAF7F94D5FE77(uLocal_1218), 1);
					}
					unk_0x04CA137FB87EF9B9(unk_0x1D1DAF7F94D5FE77(uLocal_1218), 0);
					unk_0x887F4488DA99FD21(iParam0);
					uVar0 = unk_0x262EBD0AA0ED1D6D(uLocal_1218);
					unk_0x3C6E68D2D7F41A39(&uVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_252(int iParam0, int iParam1)
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

int func_253(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_259(Param0, fParam3, iParam4, iParam5) || func_254(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_254(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_255(Param0, Global_2411434.f_293[iVar0 /*3*/], Global_2411434.f_390[iVar0], Global_2411434.f_423[iVar0], 1036831949))
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
		iVar0++;
	}
	return 0;
}

int func_255(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_258(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_257(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_256(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xB9AA84B14E04BC20((Var6.f_1 - Var3.f_1));
		uVar10 = unk_0xB9AA84B14E04BC20((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xB9AA84B14E04BC20((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xE15A3D0C3294EAF3(Param0, Var12, Var15, uVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_256(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	unk_0x01C5E7A27762AF21(iParam0, uParam1, uParam2);
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

void func_257(var uParam0, struct<3> Param1)
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

float func_258(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_256(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_259(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_8(iVar1, 0, 1) && func_8(iParam4, 0, 1))
			{
				if (Global_2411434.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2411434.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_260(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2411434.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2411434.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_8(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_260(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_260(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_261(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_264(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_262(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_262(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_8(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_260(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
			if (!func_24(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_263(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_260(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_260(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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

int func_263(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_264(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_8(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_263(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_265(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_260(iVar1), Param0, 1) < fParam3)
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

int func_265(int iParam0)
{
	if (func_267(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_266(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_266(var uParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(uParam0, &Var0, 13);
	return Var0;
}

int func_267(int iParam0, var uParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_266(iParam0) };
		Global_2450514 = { func_266(uParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_268(struct<2> Param0, var uParam2)
{
	int iVar0;
	
	if (func_270(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1607808.f_63729 - 1))
		{
			if (!func_269(Global_1607808.f_63752[iVar0 /*26*/][0 /*3*/]))
			{
				if (Global_1607808.f_63752[iVar0 /*26*/].f_9 == 2 || Global_1607808.f_63752[iVar0 /*26*/].f_9 == 0)
				{
					if (Param0.f_0 >= Global_1607808.f_63752[iVar0 /*26*/][0 /*3*/] && Param0.f_0 <= Global_1607808.f_63752[iVar0 /*26*/][1 /*3*/])
					{
						if (Param0.f_1 >= Global_1607808.f_63752[iVar0 /*26*/][0 /*3*/].f_1 && Param0.f_1 <= Global_1607808.f_63752[iVar0 /*26*/][1 /*3*/].f_1)
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

int func_269(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_227(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1585045[iVar0 /*400*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_271(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x0D6E79537424BACE(Param0, Param3, iParam7) <= fParam6;
}

Vector3 func_272(int iParam0, int iParam1)
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

int func_273(int iParam0, int iParam1, int iParam2)
{
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
	return 1;
}

int func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < func_213(iParam0))
	{
		bVar3 = false;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (!bVar3)
			{
				if (func_8(unk_0x6528B1497E4313F1(iVar1), 0, 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0x6528B1497E4313F1(iVar1)), 0), func_272(iParam0, iVar0)) < 36f)
					{
						bVar3 = true;
					}
				}
			}
			iVar1++;
		}
		if (!bVar3)
		{
			unk_0xF3148AAF69AF9CBC(&iVar2, iVar0);
		}
		iVar0++;
	}
	return iVar2;
}

int func_275(int iParam0, int iParam1)
{
	if (Local_98.f_2[iParam1] == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_276()
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	struct<4> Var7;
	
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
	}
	iVar2 = unk_0x1329891157A54C63();
	if (func_271(func_188(iLocal_1580), 1752.63f, 3241.048f, 40.8582f, 50f, 1))
	{
		fVar0 = 90000f;
	}
	else
	{
		fVar0 = 22500f;
	}
	if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), func_188(iLocal_1580)) < fVar0)
	{
		bVar3 = false;
		bVar4 = false;
		if (!func_231(iLocal_1580))
		{
			func_286(iLocal_1580);
			if (!bVar3)
			{
				if ((((!func_284(unk_0x1329891157A54C63()) && func_229(unk_0x1329891157A54C63(), iLocal_1580)) && !func_283(iLocal_1580)) && func_282() < 5) && !func_218(unk_0x1329891157A54C63(), iLocal_1580) == 0)
				{
					bVar3 = true;
				}
			}
		}
		if (((unk_0x236D8AD7EE179F46(Local_1202.f_0, 0) && !unk_0x236D8AD7EE179F46(Local_1202.f_0, 5)) && !unk_0x236D8AD7EE179F46(Local_1202.f_0, 1)) && Local_1202.f_3 == iLocal_1580)
		{
			bVar3 = true;
			bVar4 = true;
		}
		if (bVar3)
		{
			iVar6 = -1;
			if (bVar4)
			{
				iVar6 = Local_1202.f_2;
			}
			else
			{
				iVar5 = 0;
				while (iVar5 < 5)
				{
					if (iVar6 == -1)
					{
						if (!unk_0x236D8AD7EE179F46(Local_232[iVar2 /*30*/].f_5[iVar5 /*4*/].f_1, 0) && iVar5 != Local_1202.f_2)
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
				Var7.f_0 = iLocal_1580;
				Var7.f_1 = 0;
				unk_0xF3148AAF69AF9CBC(&(Var7.f_1), 0);
				if (bVar4)
				{
					unk_0xF3148AAF69AF9CBC(&(Var7.f_1), 1);
					unk_0xF3148AAF69AF9CBC(&Local_1202, 5);
					if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 3))
					{
						unk_0xC69E84EBBD7166E6(&Local_1202, 3);
					}
					Var7.f_3 = Local_1202.f_12;
				}
				else
				{
					Var7.f_3 = func_218(unk_0x1329891157A54C63(), iLocal_1580);
					if (unk_0x253C9FE2EFE18AEC(func_175(46), -1, 0, 0) && !func_280(Var7.f_3))
					{
						iVar6 = -1;
						Var7.f_0 = -1;
						Var7.f_1 = 0;
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					Local_232[iVar2 /*30*/].f_5[iVar6 /*4*/] = { Var7 };
					func_279(func_53(1, 1), iVar2, iVar6, iLocal_1580);
					Local_232[iVar2 /*30*/].f_26++;
					func_278(iLocal_1580);
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), func_188(iLocal_1580)) > 40000f)
	{
		if (func_231(iLocal_1580))
		{
			func_49(iLocal_1580);
			func_277(iLocal_1580);
		}
	}
	iLocal_1580++;
	if (iLocal_1580 >= 60)
	{
		iLocal_1580 = 0;
	}
}

void func_277(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_2[func_51(iParam0)], func_50(iParam0)))
	{
		unk_0xC69E84EBBD7166E6(&(Local_232[iVar0 /*30*/].f_2[func_51(iParam0)]), func_50(iParam0));
	}
}

void func_278(int iParam0)
{
	if (!unk_0x236D8AD7EE179F46(uLocal_1581[func_51(iParam0)], func_50(iParam0)))
	{
		unk_0xF3148AAF69AF9CBC(&(uLocal_1581[func_51(iParam0)]), func_50(iParam0));
	}
}

void func_279(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 302;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	unk_0x8DAD64B00B88FC2D(1, &Var0, 5, iParam0);
}

int func_280(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_281(&uVar1, iParam0, 0))
	{
		iVar0 = uVar1;
	}
	if (iVar0 <= 0)
	{
		iVar0 = unk_0x14F5D817453D2B91(iParam0);
	}
	if (iVar0 > 400000)
	{
		return 0;
	}
	return 1;
}

int func_281(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	if (!unk_0xA84E120D1B16B142(iParam1))
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
			break;
		
		case joaat("tornado2"):
			iVar1 = 30000;
			break;
		
		case joaat("tornado3"):
			iVar1 = 30000;
			break;
		
		case joaat("tornado4"):
			iVar1 = 30000;
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
	if (bVar0)
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
			
			case joaat("cavalcade"):
				iVar1 = 60000;
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
			
			case joaat("rhino"):
				iVar1 = 1500000;
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
				iVar1 = 172000;
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
			
			case joaat("dune"):
				iVar1 = 20000;
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
					if (Global_262145.f_4844 >= 0)
					{
						iVar1 = Global_262145.f_4844;
					}
				}
				break;
			
			case joaat("dune"):
				iVar1 = 20000;
				if (bVar0)
				{
					if (Global_262145.f_4845 >= 0)
					{
						iVar1 = Global_262145.f_4845;
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
					if (Global_262145.f_4938 >= 0)
					{
						iVar1 = Global_262145.f_4938;
					}
				}
				break;
			
			case joaat("bobcatxl"):
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_4939 >= 0)
					{
						iVar1 = Global_262145.f_4939;
					}
				}
				break;
			
			case joaat("cavalcade2"):
				iVar1 = 60000;
				if (bVar0)
				{
					if (Global_262145.f_4940 >= 0)
					{
						iVar1 = Global_262145.f_4940;
					}
				}
				break;
			
			case joaat("granger"):
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_4941 >= 0)
					{
						iVar1 = Global_262145.f_4941;
					}
				}
				break;
			
			case joaat("ingot"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_4942 >= 0)
					{
						iVar1 = Global_262145.f_4942;
					}
				}
				break;
			
			case joaat("intruder"):
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_4943 >= 0)
					{
						iVar1 = Global_262145.f_4943;
					}
				}
				break;
			
			case joaat("minivan"):
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_4944 >= 0)
					{
						iVar1 = Global_262145.f_4944;
					}
				}
				break;
			
			case joaat("premier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4945 >= 0)
					{
						iVar1 = Global_262145.f_4945;
					}
				}
				break;
			
			case joaat("radi"):
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_4946 >= 0)
					{
						iVar1 = Global_262145.f_4946;
					}
				}
				break;
			
			case joaat("rancherxl"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_4947 >= 0)
					{
						iVar1 = Global_262145.f_4947;
					}
				}
				break;
			
			case joaat("ratloader"):
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_4967 >= 0)
					{
						iVar1 = Global_262145.f_4967;
					}
				}
				break;
			
			case joaat("stanier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4948 >= 0)
					{
						iVar1 = Global_262145.f_4948;
					}
				}
				break;
			
			case joaat("stratum"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4949 >= 0)
					{
						iVar1 = Global_262145.f_4949;
					}
				}
				break;
			
			case joaat("washington"):
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_4950 >= 0)
					{
						iVar1 = Global_262145.f_4950;
					}
				}
				break;
			}
	}
	switch (iParam1)
	{
		case joaat("paradise"):
			iVar1 = 50000;
			if (bVar0)
			{
				iVar1 = 25000;
				if (Global_262145.f_5532 >= 0)
				{
					iVar1 = Global_262145.f_5532;
				}
			}
			break;
		
		case joaat("bifta"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5530 >= 0)
				{
					iVar1 = Global_262145.f_5530;
				}
			}
			break;
		
		case joaat("kalahari"):
			if (bParam2)
			{
				iVar1 = 40000;
				if (bVar0)
				{
					if (Global_262145.f_5531 >= 0)
					{
						iVar1 = Global_262145.f_5531;
					}
				}
			}
			else
			{
				iVar1 = 51000;
				if (bVar0)
				{
					if (Global_262145.f_6683 >= 0)
					{
						iVar1 = Global_262145.f_6683;
					}
				}
			}
			break;
		
		case joaat("speeder"):
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_5533 >= 0)
				{
					iVar1 = Global_262145.f_5533;
				}
			}
			break;
		
		case joaat("btype"):
			iVar1 = 1150000;
			if (bVar0)
			{
				iVar1 = 750000;
				if (Global_262145.f_4962 >= 0)
				{
					iVar1 = Global_262145.f_4962;
				}
			}
			break;
		
		case joaat("jester"):
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_4934 >= 0)
				{
					iVar1 = Global_262145.f_4934;
				}
			}
			break;
		
		case joaat("turismor"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_4936 >= 0)
				{
					iVar1 = Global_262145.f_4936;
				}
			}
			break;
		
		case joaat("alpha"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_4932 >= 0)
				{
					iVar1 = Global_262145.f_4932;
				}
			}
			break;
		
		case joaat("vestra"):
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_4987 >= 0)
				{
					iVar1 = Global_262145.f_4987;
				}
			}
			break;
		
		case joaat("massacro"):
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_4935 >= 0)
				{
					iVar1 = Global_262145.f_4935;
				}
			}
			break;
		
		case joaat("zentorno"):
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_4937 >= 0)
				{
					iVar1 = Global_262145.f_4937;
				}
			}
			break;
		
		case joaat("huntley"):
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_4933 >= 0)
				{
					iVar1 = Global_262145.f_4933;
				}
			}
			break;
		
		case joaat("thrust"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5534 >= 0)
				{
					iVar1 = Global_262145.f_5534;
				}
			}
			break;
		
		case joaat("blade"):
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_6008 >= 0)
				{
					iVar1 = Global_262145.f_6008;
				}
			}
			break;
		
		case joaat("warrener"):
			iVar1 = 125000;
			if (bVar0)
			{
				iVar1 = 120000;
				if (Global_262145.f_6011 >= 0)
				{
					iVar1 = Global_262145.f_6011;
				}
			}
			break;
		
		case joaat("glendale"):
			iVar1 = 200000;
			if (bVar0)
			{
				if (Global_262145.f_6009 >= 0)
				{
					iVar1 = Global_262145.f_6009;
				}
			}
			break;
		
		case joaat("rhapsody"):
			iVar1 = 100000;
			if (bVar0)
			{
				iVar1 = 140000;
				if (Global_262145.f_6010 >= 0)
				{
					iVar1 = Global_262145.f_6010;
				}
			}
			break;
		
		case joaat("panto"):
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_6012 >= 0)
				{
					iVar1 = Global_262145.f_6012;
				}
			}
			break;
		
		case joaat("dubsta3"):
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_6013 >= 0)
				{
					iVar1 = Global_262145.f_6013;
				}
			}
			break;
		
		case joaat("pigalle"):
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_6007 >= 0)
				{
					iVar1 = Global_262145.f_6007;
				}
			}
			break;
		
		case joaat("besra"):
			iVar1 = 658000;
			if (bVar0)
			{
				iVar1 = 1150000;
				if (Global_262145.f_6402 >= 0)
				{
					iVar1 = Global_262145.f_6402;
				}
			}
			break;
		
		case joaat("miljet"):
			iVar1 = 1750000;
			if (bVar0)
			{
				iVar1 = 1700000;
				if (Global_262145.f_6403 >= 0)
				{
					iVar1 = Global_262145.f_6403;
				}
			}
			break;
		
		case joaat("swift"):
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_6404 >= 0)
					{
						iVar1 = Global_262145.f_6404;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_6405 >= 0)
					{
						iVar1 = Global_262145.f_6405;
					}
				}
			}
			break;
		
		case joaat("coquette2"):
			if (bParam2)
			{
				iVar1 = 350000;
				if (bVar0)
				{
					iVar1 = 665000;
					if (Global_262145.f_6400 >= 0)
					{
						iVar1 = Global_262145.f_6400;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0)
				{
					iVar1 = 695000;
					if (Global_262145.f_6401 >= 0)
					{
						iVar1 = Global_262145.f_6401;
					}
				}
			}
			break;
		
		case joaat("sovereign"):
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_6165 >= 0)
				{
					iVar1 = Global_262145.f_6165;
				}
			}
			break;
		
		case joaat("monster"):
			iVar1 = 742000;
			if (bVar0)
			{
				iVar1 = 742014;
				if (Global_262145.f_6164 >= 0)
				{
					iVar1 = Global_262145.f_6164;
				}
			}
			break;
		
		case joaat("innovation"):
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_6680 >= 0)
				{
					iVar1 = Global_262145.f_6680;
				}
			}
			break;
		
		case joaat("hakuchou"):
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_6681 >= 0)
				{
					iVar1 = Global_262145.f_6681;
				}
			}
			break;
		
		case joaat("furoregt"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6682 >= 0)
				{
					iVar1 = Global_262145.f_6682;
				}
			}
			break;
		
		case joaat("boxville4"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6912 >= 0)
				{
					iVar1 = Global_262145.f_6912;
				}
			}
			break;
		
		case joaat("casco"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6913 >= 0)
				{
					iVar1 = Global_262145.f_6913;
				}
			}
			break;
		
		case joaat("dinghy3"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6914 >= 0)
				{
					iVar1 = Global_262145.f_6914;
				}
			}
			break;
		
		case joaat("enduro"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6915 >= 0)
				{
					iVar1 = Global_262145.f_6915;
				}
			}
			break;
		
		case joaat("gburrito2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6916 >= 0)
				{
					iVar1 = Global_262145.f_6916;
				}
			}
			break;
		
		case joaat("guardian"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6917 >= 0)
				{
					iVar1 = Global_262145.f_6917;
				}
			}
			break;
		
		case joaat("hydra"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6918 >= 0)
				{
					iVar1 = Global_262145.f_6918;
				}
			}
			break;
		
		case joaat("insurgent"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6920 >= 0)
				{
					iVar1 = Global_262145.f_6920;
				}
			}
			break;
		
		case joaat("insurgent2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6919 >= 0)
				{
					iVar1 = Global_262145.f_6919;
				}
			}
			break;
		
		case joaat("kuruma"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6921 >= 0)
				{
					iVar1 = Global_262145.f_6921;
				}
			}
			break;
		
		case joaat("kuruma2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6922 >= 0)
				{
					iVar1 = Global_262145.f_6922;
				}
			}
			break;
		
		case joaat("lectro"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6923 >= 0)
				{
					iVar1 = Global_262145.f_6923;
				}
			}
			break;
		
		case joaat("pbus"):
			iVar1 = 550000;
			if (bVar0)
			{
				if (Global_262145.f_6929 >= 0)
				{
					iVar1 = Global_262145.f_6929;
				}
			}
			break;
		
		case joaat("mule3"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6924 >= 0)
				{
					iVar1 = Global_262145.f_6924;
				}
			}
			break;
		
		case joaat("savage"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6925 >= 0)
				{
					iVar1 = Global_262145.f_6925;
				}
			}
			break;
		
		case joaat("dodo"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_7003 >= 0)
				{
					iVar1 = Global_262145.f_7003;
				}
			}
			break;
		
		case joaat("marshall"):
			iVar1 = 250000;
			if (bVar0)
			{
				iVar1 = 500000;
				if (Global_262145.f_7005 >= 0)
				{
					iVar1 = Global_262145.f_7005;
				}
			}
			break;
		
		case joaat("submersible2"):
			iVar1 = 1325000;
			if (bVar0)
			{
				if (Global_262145.f_7007 >= 0)
				{
					iVar1 = Global_262145.f_7007;
				}
			}
			break;
		
		case joaat("blista2"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_7002 >= 0)
				{
					iVar1 = Global_262145.f_7002;
				}
			}
			break;
		
		case joaat("stalion"):
			iVar1 = 71000;
			if (bVar0)
			{
				if (Global_262145.f_7006 >= 0)
				{
					iVar1 = Global_262145.f_7006;
				}
			}
			break;
		
		case joaat("dukes"):
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_7004 >= 0)
				{
					iVar1 = Global_262145.f_7004;
				}
			}
			break;
		
		case joaat("dukes2"):
			iVar1 = 279000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_7004 >= 0)
				{
					iVar1 = Global_262145.f_7004;
				}
			}
			break;
		
		case joaat("stalion2"):
			iVar1 = 138500;
			if (bVar0)
			{
				if (Global_262145.f_7220 >= 0)
				{
					iVar1 = Global_262145.f_7220;
				}
			}
			break;
		
		case joaat("dominator2"):
			iVar1 = 127000;
			if (bVar0)
			{
				if (Global_262145.f_7218 >= 0)
				{
					iVar1 = Global_262145.f_7218;
				}
			}
			break;
		
		case joaat("gauntlet2"):
			iVar1 = 115000;
			if (bVar0)
			{
				if (Global_262145.f_7219 >= 0)
				{
					iVar1 = Global_262145.f_7219;
				}
			}
			break;
		
		case joaat("buffalo3"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_7217 >= 0)
				{
					iVar1 = Global_262145.f_7217;
				}
			}
			break;
		
		case joaat("slamvan"):
			iVar1 = 49500;
			if (bVar0)
			{
				if (Global_262145.f_7216 >= 0)
				{
					iVar1 = Global_262145.f_7216;
				}
			}
			break;
		
		case joaat("ratloader2"):
			iVar1 = 37500;
			if (bVar0)
			{
				if (Global_262145.f_7215 >= 0)
				{
					iVar1 = Global_262145.f_7215;
				}
			}
			break;
		
		case joaat("jester2"):
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_7213 >= 0)
				{
					iVar1 = Global_262145.f_7213;
				}
			}
			break;
		
		case joaat("massacro2"):
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_7214 >= 0)
				{
					iVar1 = Global_262145.f_7214;
				}
			}
			break;
		
		case joaat("feltzer3"):
			iVar1 = 975000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8372 >= 0)
				{
					iVar1 = Global_262145.f_8372;
				}
			}
			break;
		
		case joaat("luxor2"):
			iVar1 = 10000000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8373 >= 0)
				{
					iVar1 = Global_262145.f_8373;
				}
			}
			break;
		
		case joaat("osiris"):
			iVar1 = 1950000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8374 >= 0)
				{
					iVar1 = Global_262145.f_8374;
				}
			}
			break;
		
		case joaat("swift2"):
			iVar1 = 5150000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8375 >= 0)
				{
					iVar1 = Global_262145.f_8375;
				}
			}
			break;
		
		case joaat("virgo"):
			iVar1 = 195000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8376 >= 0)
				{
					iVar1 = Global_262145.f_8376;
				}
			}
			break;
		
		case joaat("windsor"):
			iVar1 = 845000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8377 >= 0)
				{
					iVar1 = Global_262145.f_8377;
				}
			}
			break;
		
		case joaat("brawler"):
			iVar1 = 715000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8659 >= 0)
				{
					iVar1 = Global_262145.f_8659;
				}
			}
			break;
		
		case joaat("chino"):
			iVar1 = 225000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8660 >= 0)
				{
					iVar1 = Global_262145.f_8660;
				}
			}
			break;
		
		case joaat("coquette3"):
			iVar1 = 695000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8661 >= 0)
				{
					iVar1 = Global_262145.f_8661;
				}
			}
			break;
		
		case joaat("t20"):
			iVar1 = 2200000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8662 >= 0)
				{
					iVar1 = Global_262145.f_8662;
				}
			}
			break;
		
		case joaat("toro"):
			iVar1 = 1750000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8663 >= 0)
				{
					iVar1 = Global_262145.f_8663;
				}
			}
			break;
		
		case joaat("vindicator"):
			iVar1 = 630000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8664 >= 0)
				{
					iVar1 = Global_262145.f_8664;
				}
			}
			break;
		
		case joaat("chino2"):
			iVar1 = 225000;
			iVar1 = (Global_262145.f_9610 + Global_262145.f_9612);
			break;
		
		case joaat("primo2"):
			iVar1 = 100000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9609 >= 0)
			{
				iVar1 = (Global_262145.f_9609 + Global_262145.f_9615);
			}
			break;
		
		case joaat("moonbeam"):
			iVar1 = 32500;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9606 >= 0)
			{
				iVar1 = Global_262145.f_9606;
			}
			break;
		
		case joaat("moonbeam2"):
			iVar1 = (Global_262145.f_9606 + Global_262145.f_9614);
			break;
		
		case joaat("faction"):
			iVar1 = 36000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9605 >= 0)
			{
				iVar1 = Global_262145.f_9605;
			}
			break;
		
		case joaat("faction2"):
			iVar1 = 95000;
			iVar1 = (Global_262145.f_9605 + Global_262145.f_9613);
			break;
		
		case joaat("buccaneer"):
			iVar1 = 29000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9607 >= 0)
			{
				iVar1 = Global_262145.f_9607;
			}
			break;
		
		case joaat("buccaneer2"):
			iVar1 = 85000;
			iVar1 = (Global_262145.f_9607 + Global_262145.f_9611);
			break;
		
		case joaat("voodoo2"):
			iVar1 = 5500;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9608 >= 0)
			{
				iVar1 = Global_262145.f_9608;
			}
			break;
		
		case joaat("voodoo"):
			iVar1 = 105000;
			iVar1 = (Global_262145.f_9608 + Global_262145.f_9616);
			break;
		
		case joaat("btype2"):
			iVar1 = 540000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9822 >= 0)
			{
				iVar1 = Global_262145.f_9822;
			}
			break;
		
		case joaat("lurcher"):
			iVar1 = 666666;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9823 >= 0)
			{
				iVar1 = Global_262145.f_9823;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("dominator"):
			if (bVar0)
			{
				if (Global_262145.f_5539 >= 0)
				{
					iVar1 = Global_262145.f_5539;
				}
			}
			break;
		
		case joaat("f620"):
			if (bVar0)
			{
				if (Global_262145.f_5540 >= 0)
				{
					iVar1 = Global_262145.f_5540;
				}
			}
			break;
		
		case joaat("fusilade"):
			if (bVar0)
			{
				if (Global_262145.f_5541 >= 0)
				{
					iVar1 = Global_262145.f_5541;
				}
			}
			break;
		
		case joaat("penumbra"):
			if (bVar0)
			{
				if (Global_262145.f_5542 >= 0)
				{
					iVar1 = Global_262145.f_5542;
				}
			}
			break;
		
		case joaat("sentinel"):
			if (bVar0)
			{
				if (Global_262145.f_5543 >= 0)
				{
					iVar1 = Global_262145.f_5543;
				}
			}
			break;
		
		case joaat("sentinel2"):
			if (bVar0)
			{
				if (Global_262145.f_5544 >= 0)
				{
					iVar1 = Global_262145.f_5544;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case joaat("elegy2"):
				if (Global_262145.f_4030 >= 0)
				{
					iVar1 = Global_262145.f_4030;
				}
				break;
			
			case joaat("khamelion"):
				if (Global_262145.f_4046 >= 0)
				{
					iVar1 = Global_262145.f_4046;
				}
				break;
			
			case joaat("hotknife"):
				if (Global_262145.f_4040 >= 0)
				{
					iVar1 = Global_262145.f_4040;
				}
				break;
			
			case joaat("carbonrs"):
				if (Global_262145.f_4016 >= 0)
				{
					iVar1 = Global_262145.f_4016;
				}
				break;
			}
	}
	if (bVar0)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case joaat("coquette"):
					iVar1 = 159000;
					if (Global_262145.f_5537 >= 0)
					{
						iVar1 = Global_262145.f_5537;
					}
					break;
				
				case joaat("banshee"):
					iVar1 = 126000;
					if (Global_262145.f_5536 >= 0)
					{
						iVar1 = Global_262145.f_5536;
					}
					break;
				
				case joaat("stinger"):
					iVar1 = 871000;
					if (Global_262145.f_5538 >= 0)
					{
						iVar1 = Global_262145.f_5538;
					}
					break;
				
				case joaat("voltic"):
					iVar1 = 150000;
					if (Global_262145.f_4086 >= 0)
					{
						iVar1 = Global_262145.f_4086;
					}
					break;
				
				case joaat("chino"):
					iVar1 = 225000;
					if (Global_262145.f_9610 >= 0)
					{
						iVar1 = Global_262145.f_9610;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case joaat("voltic"):
					if (Global_262145.f_5535 >= 0)
					{
						iVar1 = Global_262145.f_5535;
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
	if (bVar0)
	{
		uParam0->f_3 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.2f));
	}
	return 1;
}

int func_282()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1329891157A54C63();
	iVar1 = 0;
	iVar1 = (iVar1 + Local_232[iVar0 /*30*/].f_26);
	if (unk_0x236D8AD7EE179F46(Local_1202.f_0, 0))
	{
		iVar1++;
	}
	return iVar1;
}

bool func_283(int iParam0)
{
	return unk_0x236D8AD7EE179F46(uLocal_1581[func_51(iParam0)], func_50(iParam0));
}

int func_284(int iParam0)
{
	if ((((((((((((((((((Global_1585045[iParam0 /*400*/] == 0 || Global_1585045[iParam0 /*400*/] == 1) || Global_1585045[iParam0 /*400*/] == 2) || Global_1585045[iParam0 /*400*/] == 3) || Global_1585045[iParam0 /*400*/] == 5) || Global_1585045[iParam0 /*400*/] == 8) || Global_1585045[iParam0 /*400*/] == 118) || Global_1585045[iParam0 /*400*/] == 11) || Global_1585045[iParam0 /*400*/] == 12) || Global_1585045[iParam0 /*400*/] == 13) || Global_1585045[iParam0 /*400*/] == 14) || Global_1585045[iParam0 /*400*/] == 122) || Global_1585045[iParam0 /*400*/] == 15) || Global_1585045[iParam0 /*400*/] == 23) || Global_1585045[iParam0 /*400*/] == 59) || Global_1585045[iParam0 /*400*/] == 60) || Global_1585045[iParam0 /*400*/] == 27) || func_285(iParam0, 0)) || func_285(iParam0, 7))
	{
		return 1;
	}
	return 0;
}

bool func_285(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

void func_286(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (!unk_0x236D8AD7EE179F46(Local_232[iVar0 /*30*/].f_2[func_51(iParam0)], func_50(iParam0)))
	{
		unk_0xF3148AAF69AF9CBC(&(Local_232[iVar0 /*30*/].f_2[func_51(iParam0)]), func_50(iParam0));
	}
}

void func_287()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!unk_0x1C7D9BFDF15A02B4())
		{
			if (Global_2437725 != -1)
			{
				Global_2437725 = -1;
			}
			if (Global_2437726 != -1)
			{
				Global_2437726 = -1;
			}
			if (Global_2437727 != -1)
			{
				Global_2437727 = -1;
			}
			if (Global_2437751 != -1)
			{
				Global_2437751 = -1;
			}
			if (Global_2437752 != -1)
			{
				Global_2437752 = -1;
			}
			if (Global_2437753 != -1)
			{
				Global_2437753 = -1;
			}
		}
	}
}

bool func_288()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

void func_289()
{
	Local_1671.f_28 = -1;
	Local_232[unk_0x1329891157A54C63() /*30*/].f_29 = 0;
	Local_232[unk_0x1329891157A54C63() /*30*/].f_28 = 0;
	Local_232[unk_0x1329891157A54C63() /*30*/].f_27 = -1;
	Local_1671.f_5 = -1;
	Local_1671.f_7 = 0;
}

int func_290(var uParam0)
{
	var uVar0;
	
	if (Local_232[unk_0x1329891157A54C63() /*30*/].f_28 == 0)
	{
		if (unk_0x7EC6C5E01692325B(uParam0) || func_291(uParam0))
		{
			uVar0 = unk_0xA987F4EAD0A9DD6D(uParam0);
			Local_232[unk_0x1329891157A54C63() /*30*/].f_28 = 1;
			Local_232[unk_0x1329891157A54C63() /*30*/].f_27 = uVar0;
		}
	}
	if ((Local_98.f_99 == unk_0x1329891157A54C63() && Local_98.f_98 >= 0) && Local_98.f_98 < 32)
	{
		if (Local_98.f_101[Local_98.f_98] != -1)
		{
			Local_232[unk_0x1329891157A54C63() /*30*/].f_29 = 1;
			Local_232[unk_0x1329891157A54C63() /*30*/].f_28 = 0;
			return Local_98.f_98;
		}
	}
	else if (Local_98.f_99 == -1)
	{
	}
	else if (Local_98.f_98 < 0 || Local_98.f_98 >= 32)
	{
	}
	return -1;
}

int func_291(int iParam0)
{
	if (unk_0x9C1418C53B05D47B("EnableVehLuxeActs", 3) && unk_0xCEC9D74C9FF51C8C(uParam0, "EnableVehLuxeActs"))
	{
		return 1;
	}
	return 0;
}

void func_292(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_293(int iParam0, int iParam1, var uParam2)
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (iParam1 != 0)
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))
				{
					if (unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()) != iParam1)
					{
						if (iParam0->f_28 == joaat("swift2"))
						{
							*uParam2 = 1;
						}
						return 0;
					}
				}
			}
			if (iParam1 != 0)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1) != iParam1)
					{
						if (iParam0->f_28 == joaat("swift2"))
						{
							*uParam2 = 1;
						}
						return 0;
					}
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))
			{
				iParam0->f_9 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				iParam0->f_9 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1);
			}
			if (unk_0x14B7103DBD149FFE(iParam0->f_9) == joaat("luxor2") || unk_0x14B7103DBD149FFE(iParam0->f_9) == joaat("swift2"))
			{
				iParam0->f_28 = unk_0x14B7103DBD149FFE(iParam0->f_9);
				return 1;
			}
			else
			{
				iParam0->f_28 = unk_0x14B7103DBD149FFE(iParam0->f_9);
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

int func_294()
{
	return Local_98.f_0;
}

int func_295(int iParam0)
{
	return Local_232[iParam0 /*30*/];
}

void func_296()
{
	int iVar0;
	int iVar1;
	
	if (Global_1573816)
	{
		if (!iLocal_1667)
		{
			if (iLocal_1668)
			{
				iLocal_1666 = 1;
				iLocal_1669 = -1;
			}
			iLocal_1667 = 1;
		}
	}
	else if (iLocal_1667)
	{
		if (iLocal_1666)
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iVar1 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!iLocal_1669 == iVar1)
				{
					func_298(&iVar1);
					iLocal_1669 = iVar1;
					uLocal_1670 = unk_0xD74C7D8D2E5E43D2();
				}
				else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), uLocal_1670) > 2000)
				{
					iLocal_1669 = 0;
				}
			}
			else if (unk_0x86CCCD2FAE9D5E65(iLocal_1669))
			{
				func_298(&iLocal_1669);
			}
			else
			{
				iLocal_1667 = 0;
				iLocal_1666 = 0;
				iLocal_1668 = 0;
				if (iLocal_1669 == 0)
				{
					Global_2451473.f_4393 = 1;
				}
			}
		}
	}
	else if (func_8(unk_0x1329891157A54C63(), 1, 1))
	{
		if (iLocal_1668)
		{
			if (unk_0x236D8AD7EE179F46(Global_1573399, 3) || unk_0x236D8AD7EE179F46(Global_1573399, 1))
			{
			}
			else if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_1668 = 0;
				iLocal_1669 = -1;
			}
			else
			{
				iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!iLocal_1669 == iVar0)
				{
					if (!func_297(iVar0))
					{
						iLocal_1668 = 0;
					}
					iLocal_1669 = iVar0;
				}
			}
		}
		else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (!iVar0 == iLocal_1669)
			{
				if (func_297(iVar0))
				{
					iLocal_1668 = 1;
				}
				iLocal_1669 = iVar0;
			}
		}
	}
}

int func_297(int iParam0)
{
	if ((unk_0x9C1418C53B05D47B("CreatedByPegasus", 2) && unk_0xCEC9D74C9FF51C8C(iParam0, "CreatedByPegasus")) && unk_0x53ABC9BE848EA65A(iParam0, "CreatedByPegasus"))
	{
		if (unk_0x250A8F68F67CA19A(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49) && unk_0x335F574AD77E59CE(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49))
		{
			if (!unk_0x1D1DAF7F94D5FE77(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_49) == iParam0)
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

void func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_8(unk_0x1329891157A54C63(), 1, 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(*iParam0) && unk_0x7404950238A154C2(*iParam0, 0))
		{
			if (func_304(*iParam0))
			{
				return;
			}
		}
		if (!func_303(*iParam0, 1, 1, 0))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x6528B1497E4313F1(iVar0);
				if (func_8(iVar1, 0, 1))
				{
					if (unk_0x04C377C10639B842(unk_0xE495E987CB2BE7EF(iVar1), *iParam0, 0))
					{
						if (func_4(&uLocal_1601, 10000, 0))
						{
							func_301(func_302(iVar1), 0, 0f, 0, 0, 0);
						}
						else if (unk_0x04EFA8D3BE8500E7() == iVar0)
						{
							if (!unk_0x236D8AD7EE179F46(uLocal_1197, iLocal_1413))
							{
								sVar2 = "PEG_RECLAIM";
								func_300("TWOSTRINGS", sVar2, "EPS_DROP_EXIT", -1);
								unk_0xF3148AAF69AF9CBC(&iLocal_1197, iLocal_1413);
							}
						}
					}
				}
				iVar0++;
			}
		}
		else if (!unk_0x4D2386673BCED434(*iParam0))
		{
			unk_0x826845FCE0515A8B(*iParam0);
			func_3(&uLocal_1601);
			unk_0xC69E84EBBD7166E6(&iLocal_1197, iLocal_1413);
		}
		else
		{
			unk_0xE3BCD90B2718CCF7(*iParam0, 1);
			unk_0xD768713E73165208(*iParam0, 0, 1);
			unk_0x523887EEAA7C9CAD(*iParam0);
			unk_0xEA89E72C99125D9C(*iParam0, 1);
			if (func_299(*iParam0))
			{
				unk_0x5D00E836B6BE8693(iParam0);
			}
			else
			{
				unk_0xE0913C01F5C0CC3D(iParam0);
			}
			iLocal_1669 = 0;
			func_3(&uLocal_1601);
			unk_0xC69E84EBBD7166E6(&iLocal_1197, iLocal_1413);
			unk_0xC69E84EBBD7166E6(&uLocal_1198, iLocal_1413);
		}
	}
}

int func_299(var uParam0)
{
	if ((unk_0xD1FFD959917D4ED8(uParam0, 358.9707f, -1597.852f, 20.00015f, 412.8247f, -1640.907f, 40.54209f, 33.25f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(uParam0, 406.6252f, -1644.242f, 20.04219f, 417.1268f, -1652.937f, 41.951f, 20.25f, 0, 1, 0)) || unk_0xD1FFD959917D4ED8(uParam0, 414.6758f, -1635.666f, 20.09278f, 423.5415f, -1635.645f, 41.04316f, 15.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_300(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x072D7B028D6C7A05(sParam1);
	unk_0x072D7B028D6C7A05(sParam2);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam3);
}

void func_301(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 55;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 7, iParam0);
	}
}

int func_302(int iParam0)
{
	var uVar0;
	
	unk_0xF3148AAF69AF9CBC(&uVar0, iParam0);
	return uVar0;
}

int func_303(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x59D35AC211D17FAB(uParam0) + 1;
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBEB00EB4ADDC2A33(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x81873881071CD9FE())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x5FEB513A4402FD59(iVar2))
					{
						if (unk_0x0452D5BF20AD945A(iVar2))
						{
							return 0;
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
				else
				{
					iVar3 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
					if (!unk_0x5FEB513A4402FD59(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_304(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 1) };
	if (unk_0x0D6E79537424BACE(Var0, Global_1049033[1 /*1485*/].f_1322.f_114, 1) < 30f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, Global_1049033[1 /*1485*/].f_1322.f_117, Global_1049033[1 /*1485*/].f_1322.f_117.f_3, Global_1049033[1 /*1485*/].f_1322.f_117.f_6, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x0D6E79537424BACE(Var0, Global_1049033[8 /*1485*/].f_1322.f_114, 1) < 30f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, Global_1049033[8 /*1485*/].f_1322.f_117, Global_1049033[8 /*1485*/].f_1322.f_117.f_3, Global_1049033[8 /*1485*/].f_1322.f_117.f_6, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x0D6E79537424BACE(Var0, Global_1049033[17 /*1485*/].f_1322.f_114, 1) < 30f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, Global_1049033[17 /*1485*/].f_1322.f_117, Global_1049033[17 /*1485*/].f_1322.f_117.f_3, Global_1049033[17 /*1485*/].f_1322.f_117.f_6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_305(var uParam0)
{
	char* sVar0;
	
	if ((!func_8(*uParam0, 0, 1) || !unk_0x250A8F68F67CA19A(Global_2414506[*uParam0 /*255*/].f_49)) || (unk_0x250A8F68F67CA19A(Global_2414506[*uParam0 /*255*/].f_49) && !unk_0x335F574AD77E59CE(Global_2414506[*uParam0 /*255*/].f_49)))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_2422670.f_581[*uParam0]) && func_306(Global_2422670.f_581[*uParam0]))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_2422670.f_581[*uParam0], 0))
			{
				unk_0xF3148AAF69AF9CBC(&uLocal_1198, *uParam0);
			}
			if (unk_0x236D8AD7EE179F46(uLocal_1198, *uParam0))
			{
				func_298(&(Global_2422670.f_581[*uParam0]));
			}
		}
	}
	else if (unk_0x250A8F68F67CA19A(Global_2414506[*uParam0 /*255*/].f_49))
	{
		if (unk_0x335F574AD77E59CE(Global_2414506[*uParam0 /*255*/].f_49))
		{
			if (func_306(unk_0x1D1DAF7F94D5FE77(Global_2414506[*uParam0 /*255*/].f_49)))
			{
				Global_2422670.f_581[*uParam0] = unk_0x1D1DAF7F94D5FE77(Global_2414506[*uParam0 /*255*/].f_49);
			}
		}
	}
	if (Global_2451473.f_4393)
	{
		sVar0 = "PEG_RECLAIM";
		func_203(sVar0, 1);
		Global_2451473.f_4393 = 0;
	}
	*uParam0++;
	if (*uParam0 >= 32)
	{
		*uParam0 = 0;
	}
}

int func_306(int iParam0)
{
	if ((unk_0x9C1418C53B05D47B("CreatedByPegasus", 2) && unk_0xCEC9D74C9FF51C8C(uParam0, "CreatedByPegasus")) && unk_0x53ABC9BE848EA65A(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_308())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_308()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

void func_309()
{
}

bool func_310()
{
	return Global_1573817;
}

int func_311()
{
	if (func_24(unk_0x1329891157A54C63(), 0) || func_344())
	{
		return 1;
	}
	if (!(func_337(23) && func_314(23)) && !(func_337(22) && func_314(22)))
	{
		return 1;
	}
	if (!func_313(unk_0x1329891157A54C63()) || func_312())
	{
		return 1;
	}
	return 0;
}

bool func_312()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 18);
}

bool func_313(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 6);
}

int func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 122)
	{
		return 0;
	}
	iVar0 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	if (iVar0 >= 0 && iVar0 <= 3)
	{
		if (((unk_0x236D8AD7EE179F46(Global_1607808.f_11, 30) && Global_1607808.f_29239[iVar0] != 0) || (unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 10) && Global_1343801 != 0)) && func_336(iVar0))
		{
			return 0;
		}
		if (func_335())
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 10:
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 20))
			{
				return 0;
			}
			if (func_310())
			{
				return 1;
			}
			else if (func_334(unk_0x1329891157A54C63()) || func_333())
			{
				return 0;
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				if (Global_2480867.f_33 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 21))
			{
				return 0;
			}
			if (func_310())
			{
				return 1;
			}
			else if (func_334(unk_0x1329891157A54C63()) || func_333())
			{
				return 0;
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				if (Global_2480867.f_33 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				else if (func_327(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 16))
			{
				return 0;
			}
			if (func_333())
			{
				return 0;
			}
			if (func_334(unk_0x1329891157A54C63()) || func_310())
			{
				if (func_326() || func_325())
				{
					iVar1 = func_323();
					if ((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_grenadelauncher")) || func_322(iVar1)) || func_321(iVar1))
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
			if (func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 29))
			{
				return 0;
			}
			if ((func_334(unk_0x1329891157A54C63()) || func_310()) || func_333())
			{
				return 0;
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 30))
			{
				return 0;
			}
			if (((((Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3 || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 32) || func_334(unk_0x1329891157A54C63())) || func_310()) || func_333()) || func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_320(unk_0x1329891157A54C63()) || func_319(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 19))
			{
				return 0;
			}
			if (((((func_334(unk_0x1329891157A54C63()) || func_310()) || func_333()) || func_332(unk_0x1329891157A54C63())) || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3) || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 32)
			{
				return 0;
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_320(unk_0x1329891157A54C63()) || func_319(unk_0x1329891157A54C63()))
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
			if ((((func_310() || func_333()) || func_334(unk_0x1329891157A54C63())) || func_332(unk_0x1329891157A54C63())) || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3)
			{
				return 0;
			}
			if (func_318())
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if ((((func_332(unk_0x1329891157A54C63()) || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3) || func_334(unk_0x1329891157A54C63())) || func_310()) || func_333())
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_320(unk_0x1329891157A54C63()) || func_319(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 31))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 18))
			{
				return 0;
			}
			if ((((func_332(unk_0x1329891157A54C63()) || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3) || func_334(unk_0x1329891157A54C63())) || func_310()) || func_333())
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_320(unk_0x1329891157A54C63()) || func_319(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 15))
			{
				return 0;
			}
			if (func_334(unk_0x1329891157A54C63()))
			{
				if ((func_310() || func_333()) || func_326())
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0 || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 4)
			{
				return 0;
			}
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3)
			{
				return 0;
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if (((func_332(unk_0x1329891157A54C63()) || func_334(unk_0x1329891157A54C63())) || func_310()) || func_333())
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			break;
		
		case 1:
			if ((((((Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0 || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 4) || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3) || func_334(unk_0x1329891157A54C63())) || func_310()) || func_333()) || func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 17))
			{
				return 0;
			}
			if (func_310() || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 32)
			{
				return 0;
			}
			if (func_334(unk_0x1329891157A54C63()))
			{
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/] != 5 && !func_333())
				{
					return 1;
				}
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0 && Global_1607808.f_21 > 1)
			{
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (func_310())
			{
				return 1;
			}
			if (func_334(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0)
			{
				if (Global_1607808.f_21 <= 1)
				{
					return 0;
				}
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3)
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				else if (func_328(unk_0x1329891157A54C63()))
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
			if (unk_0x726DA50057167075() && unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 27))
			{
				return 0;
			}
			if (func_310())
			{
				return 1;
			}
			if (func_334(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_332(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 3)
			{
				return 0;
			}
			if (func_330(unk_0x1329891157A54C63()))
			{
				if (func_329(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else if (func_328(unk_0x1329891157A54C63()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 1)
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
			if (func_315(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			break;
		
		case 35:
			if (func_315(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_315(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_316(int iParam0)
{
	return func_317(iParam0);
}

bool func_317(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_318()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 0);
}

bool func_319(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_320(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

int func_321(int iParam0)
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
			return 1;
			break;
	}
	return 0;
}

int func_322(int iParam0)
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
	}
	return 0;
}

int func_323()
{
	if (func_326() || func_325())
	{
		return func_324(Global_1607808.f_35720);
	}
	return Global_1343767;
}

int func_324(int iParam0)
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
		
		case 52:
			return joaat("weapon_flashlight");
			break;
	}
	return joaat("weapon_pistol");
}

bool func_325()
{
	return unk_0x236D8AD7EE179F46(Global_1607808.f_11, 19);
}

bool func_326()
{
	return unk_0x236D8AD7EE179F46(Global_1607808.f_11, 18);
}

bool func_327(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 4;
}

bool func_328(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 6;
}

bool func_329(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 5;
}

int func_330(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_331(iParam0))
			{
				if (Global_1585045[iParam0 /*400*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_331(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

int func_332(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_331(iParam0))
			{
				if (Global_1585045[iParam0 /*400*/] == 2 || Global_1585045[iParam0 /*400*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_333()
{
	return Global_1573816;
}

int func_334(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (Global_1585045[iParam0 /*400*/] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_335()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 7);
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 2) && iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 3) && iParam0 == 1)
	{
		iVar0 = 1;
	}
	else if (unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 4) && iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (unk_0x236D8AD7EE179F46(Global_1607808.f_76882, 5) && iParam0 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_337(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 10:
			if (func_343())
			{
				return 0;
			}
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
			{
				return 0;
			}
			if (func_341(unk_0x1329891157A54C63(), 146))
			{
				return 0;
			}
			if ((func_341(unk_0x1329891157A54C63(), 136) || func_340(unk_0x1329891157A54C63()) == 136) || (func_285(unk_0x1329891157A54C63(), 24) && func_339(unk_0x1329891157A54C63())))
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
			{
				return 0;
			}
			if (Global_25210)
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 24))
			{
				if (func_339(unk_0x1329891157A54C63()))
				{
					return 0;
				}
			}
			if (func_340(unk_0x1329891157A54C63()) == 136)
			{
				return 0;
			}
			if (func_338(unk_0x1329891157A54C63()))
			{
				return 0;
			}
			if (func_341(unk_0x1329891157A54C63(), 138))
			{
				if (func_8(unk_0x1329891157A54C63(), 1, 1))
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						uVar1 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						iVar2 = unk_0x14B7103DBD149FFE(uVar1);
						if ((iVar2 == joaat("tractor") || iVar2 == joaat("tractor2")) || iVar2 == joaat("tractor3"))
						{
							return 0;
						}
					}
				}
			}
			if (func_285(unk_0x1329891157A54C63(), 21))
			{
				return 0;
			}
			break;
		
		case 8:
			if (func_285(unk_0x1329891157A54C63(), 21))
			{
				return 0;
			}
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
			{
				return 0;
			}
			if (func_341(unk_0x1329891157A54C63(), 146))
			{
				return 0;
			}
			break;
		
		case 9:
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
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
			if (func_341(unk_0x1329891157A54C63(), 136))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_341(unk_0x1329891157A54C63(), 129))
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 14:
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if ((func_285(unk_0x1329891157A54C63(), 7) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_230 != -1) || Global_2414506[unk_0x1329891157A54C63() /*255*/].f_231 != -1)
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_8(unk_0x6528B1497E4313F1(iVar0), 0, 1))
				{
					if (unk_0x6528B1497E4313F1(iVar0) != unk_0x1329891157A54C63())
					{
						if (!func_24(unk_0x6528B1497E4313F1(iVar0), 0))
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
			if (func_209(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0))
			{
				return 0;
			}
			if (func_340(unk_0x1329891157A54C63()) == 136)
			{
				return 0;
			}
			if (func_340(unk_0x1329891157A54C63()) == 141)
			{
				return 0;
			}
			if (func_340(unk_0x1329891157A54C63()) == 139)
			{
				return 0;
			}
			if (func_340(unk_0x1329891157A54C63()) == 140 && func_341(unk_0x1329891157A54C63(), 140))
			{
				return 0;
			}
			if (func_340(unk_0x1329891157A54C63()) == 131 && func_341(unk_0x1329891157A54C63(), 131))
			{
				return 0;
			}
			if (func_341(unk_0x1329891157A54C63(), 138))
			{
				return 0;
			}
			if (func_341(unk_0x1329891157A54C63(), 146))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_8(unk_0x6528B1497E4313F1(iVar0), 0, 1))
				{
					if (unk_0x6528B1497E4313F1(iVar0) != unk_0x1329891157A54C63())
					{
						if (!func_24(unk_0x6528B1497E4313F1(iVar0), 0))
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
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 1)
			{
				return 0;
			}
			if (func_285(unk_0x1329891157A54C63(), 0) || func_285(unk_0x1329891157A54C63(), 16))
			{
				return 0;
			}
			if (func_341(unk_0x1329891157A54C63(), 146))
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
			break;
		
		case 35:
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
			{
				return 0;
			}
			if (func_340(unk_0x1329891157A54C63()) == 146)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 5);
	}
	return 0;
}

bool func_339(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 4);
}

int func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/];
	}
	return -1;
}

int func_341(int iParam0, int iParam1)
{
	if (Global_1606167[iParam0 /*12*/] == iParam1)
	{
		return func_342(iParam0);
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

bool func_343()
{
	return Global_1312416;
}

bool func_344()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_345()
{
	bool bVar0;
	
	func_352(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_351())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_350())
	{
		return 1;
	}
	if (func_349(157))
	{
		if (!func_348())
		{
			return 1;
		}
	}
	if (func_349(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_346() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_346()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_346()
{
	switch (func_347())
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

int func_347()
{
	return Global_24946;
}

bool func_348()
{
	return Global_2428865.f_573;
}

int func_349(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_350()
{
	return Global_2436988;
}

bool func_351()
{
	return Global_2428865.f_568;
}

void func_352(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_353(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_353(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_8(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_354(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_354(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_355()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_356()
{
	func_34();
	func_357();
}

void func_357()
{
	unk_0xC23A229F78DAD92A();
}

int func_358(struct<20> Param0)
{
	func_362(32, Param0);
	func_360(0, -1, 0);
	unk_0x19F630B59442E836(&Local_98, 134);
	unk_0xCBCBE0D8DD0EF168(&Local_232, 961);
	unk_0xE6E19E3BBABCBC24(0);
	if (!func_359())
	{
		return 0;
	}
	Global_2437725 = -1;
	Global_2437726 = -1;
	Global_2437727 = -1;
	Global_2437751 = -1;
	Global_2437752 = -1;
	Global_2437753 = -1;
	Global_2437920 = 0;
	Local_232[unk_0x04EFA8D3BE8500E7() /*30*/] = 0;
	return 1;
}

int func_359()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_351())
		{
			return 0;
		}
		if (func_349(155))
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

int func_360(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_357();
			}
			else
			{
				return 0;
			}
		}
		if (!func_361())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_357();
					}
					else
					{
						return 0;
					}
				}
				if (func_351())
				{
					if (!bParam2)
					{
						func_357();
					}
					else
					{
						return 0;
					}
				}
				if (func_349(155))
				{
					if (!bParam2)
					{
						func_357();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_357();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_357();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_357();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_361()
{
	return Global_1315867;
}

void func_362(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_357();
	}
	unk_0xBA029707F4D8FFB0(iParam0, 0, Param1.f_16);
}

