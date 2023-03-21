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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<199> Local_121 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744705981, -178150202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	struct<8> Local_320[32];
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	var uLocal_585 = 1;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	int iLocal_599 = 0;
	struct<3> Local_600 = { 0, 0, 0 } ;
	struct<3> Local_603 = { 0, 0, 0 } ;
	int iLocal_606 = 0;
	float fLocal_607 = 0f;
	float fLocal_608 = 0f;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	struct<14> Local_614 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	struct<3> Local_632[217];
	float fLocal_1284[217] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1502 = 0;
	float fLocal_1503 = 0f;
	float fLocal_1504 = 0f;
	float fLocal_1505 = 0f;
	var uLocal_1506 = 0;
	struct<105> Local_1507 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0 } ;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = -1;
	var uLocal_1617 = -1;
	var uLocal_1618 = 32;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
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
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
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
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	var uLocal_2040 = 0;
	int iLocal_2041 = 0;
	struct<3> Local_2042 = { 0, 0, 0 } ;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 12;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 1065353216;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	struct<12> Local_2745 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	int iLocal_2767 = 0;
	int iLocal_2768 = 0;
	int iLocal_2769 = 0;
	int iLocal_2770 = 0;
	int iLocal_2771 = 0;
	int iLocal_2772 = 0;
	int iLocal_2773 = 0;
	struct<3> Local_2774 = { 0, 0, 0 } ;
	float fLocal_2777 = 0f;
	float fLocal_2778 = 0f;
	struct<3> Local_2779 = { 0, 0, 0 } ;
	float fLocal_2782 = 0f;
	int iLocal_2783 = 0;
	int iLocal_2784 = 0;
	int iLocal_2785 = 0;
	var uLocal_2786 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	iLocal_2771 = -1;
	iLocal_2772 = -1;
	fLocal_2778 = -1f;
	if (unk_0x591AF4C50B46E014() && func_1083(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_1056(ScriptParam_0);
	}
	else
	{
		func_996();
	}
	while (true)
	{
		func_995();
		if (func_988() || func_985(24))
		{
			func_996();
		}
		if (func_984())
		{
			func_996();
		}
		func_965();
		if (Local_121.f_197 == 2)
		{
			if (func_962(1))
			{
				func_936(0, 5, 0, !unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0), -1, -1, -1, -1);
				func_996();
			}
		}
		switch (func_935(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_934() == 1)
				{
					if (func_933())
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 7))
						{
							if (func_932(11))
							{
								unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 7);
							}
						}
						func_929();
						Local_600 = { Local_632[0 /*3*/] };
						fLocal_607 = func_928();
						fLocal_608 = fLocal_607;
						iLocal_599 = 0;
						uLocal_609 = func_927();
						if (Local_121.f_197 == 2)
						{
							func_925();
						}
						if (!func_893(1))
						{
							func_891(func_892(), 1);
							func_886();
						}
						func_885(Local_121.f_197);
						func_878(136, Local_121.f_167, 0, 0);
						if (Local_121.f_197 == 2)
						{
							func_837(-1, 0, Local_121.f_197 == 2, 200);
							if (func_832())
							{
								unk_0xF6082E2ADA1C795B(&iLocal_579, 1);
							}
						}
						Local_320[unk_0x88641E5BC172153A() /*8*/] = 1;
					}
				}
				else if (func_934() == 4)
				{
					Local_320[unk_0x88641E5BC172153A() /*8*/] = 3;
				}
				break;
			
			case 1:
				if (func_934() == 1)
				{
					func_826();
					func_681();
					func_677();
					func_676();
					func_636();
					func_577();
					func_390();
					func_389();
					func_385();
					func_381();
					func_365();
				}
				else if (func_934() == 4)
				{
					Local_320[unk_0x88641E5BC172153A() /*8*/] = 3;
				}
				break;
			
			case 3:
				func_364(&(Local_121.f_22));
				if (func_363(&(Local_121.f_22)))
				{
					Local_320[unk_0x88641E5BC172153A() /*8*/] = 4;
				}
				break;
			
			case 2:
				Local_320[unk_0x88641E5BC172153A() /*8*/] = 4;
			
			case 4:
				func_996();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			if (Local_121.f_197 == 2)
			{
				if (func_362())
				{
					if (func_934() < 4)
					{
						Local_121.f_0 = 4;
					}
				}
			}
			switch (func_934())
			{
				case 0:
					if (func_349(&(Local_121.f_167)))
					{
						func_347();
						if (func_933())
						{
							func_929();
							Local_121.f_184.f_7 = func_346();
							Local_121.f_8 = func_928();
							Local_121.f_166 = func_927();
							Local_121.f_0 = 1;
							func_345(&(Local_121.f_32), 0, 0);
							func_342(func_344(136, Local_121.f_167, 0, 0));
						}
					}
					break;
				
				case 1:
					func_332();
					func_26();
					func_3();
					if (func_1())
					{
						Local_121.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	bool bVar0;
	int iVar1;
	
	if (Local_121.f_21 >= 2)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
			{
				if (Local_320[iVar1 /*8*/].f_7 < 5)
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (Local_121.f_197 == 2)
	{
		return;
	}
	bVar1 = true;
	if (Local_121.f_21 > 0)
	{
		if (func_25())
		{
			iVar0 = unk_0x1E199569E0295838(Local_121.f_184.f_7);
		}
		else
		{
			func_24();
		}
		if (!func_23(Local_600, Local_121.f_194, 1056964608, 0))
		{
			Local_121.f_194 = { Local_600 };
		}
		uVar2 = Global_262145.f_9819;
		func_4(&(Local_121.f_184), iVar0, Local_121.f_194, bVar1, Global_262145.f_9817, Global_262145.f_9818, uVar2, 4352);
	}
}

void func_4(var uParam0, int iParam1, struct<3> Param2, bool bParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	switch (func_22(uParam0))
	{
		case 0:
			if (unk_0xD7381CA7CDE5E23C(0, 0) == 0)
			{
				unk_0x20DC9856B13C398C(1);
			}
			func_21(uParam0, 1);
			break;
		
		case 1:
			if (!func_20(Param2))
			{
				if (func_16(uParam0, func_19(Param2), func_18()))
				{
					if (func_12(uParam0))
					{
						func_10(uParam0);
						func_21(uParam0, 2);
					}
				}
			}
			break;
		
		case 2:
			if (bParam5)
			{
				if (func_9(uParam0))
				{
					iVar0 = unk_0xC09E9E2B61AD04E7(uParam0->f_3);
					iVar1 = unk_0xECBE9D2902B2B964(uParam0->f_2);
					func_5(uParam0, iVar0, iVar1, iParam1, uParam6, uParam7, uParam8, iParam9);
				}
			}
			break;
		
		default:
			break;
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	
	if (!func_8(&(uParam0->f_8)))
	{
		func_345(&(uParam0->f_8), 0, 0);
	}
	else if (func_7(&(uParam0->f_8), 5000, 0))
	{
		func_6(&(uParam0->f_8));
		iVar0 = 1;
	}
	if ((!unk_0x769F0F6444C1ABE0(iParam1) && !unk_0xA9A04898798AE9E6(iParam2, 0)) && !unk_0x769F0F6444C1ABE0(iParam3))
	{
		if (((unk_0xE897E371352225D5(iParam1, -1273030092) != 1 && unk_0xE897E371352225D5(iParam1, -1273030092) != 0) || iParam3 != uParam0->f_4) || iVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				unk_0x654FFF4D16298AC5(iParam1);
			}
			unk_0xFB01184A39270A01(iParam1, iParam2, iParam3, uParam4, 32, uParam5, uParam6, uParam7);
		}
	}
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_345(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

int func_9(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0->f_2) && unk_0x3756406E4D76B25E(uParam0->f_3))
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x7BAE3A9057619E1F(uParam0->f_2);
	unk_0x9C27A9366AD7DE0B(iVar0, 1, 1, 1, 1, 0, 0, 0, 0);
	unk_0xE77EEA92586CF2E8(iVar0, 0);
	iVar1 = unk_0xECBE9D2902B2B964(uParam0->f_2);
	unk_0x1E8ACA6A3AC5264A(iVar1, 0, 0);
	unk_0x09AA93F3CF68CE52(iVar1, 0);
	iVar2 = unk_0x7BAE3A9057619E1F(uParam0->f_3);
	unk_0xF65C7766FB8D4B2C(iVar2, 1);
	unk_0x2DEA38A68AA89671(iVar1, 1, 1, 0);
	unk_0xAD0AEA18C5EE5ACA(iVar1, 0.3f);
	unk_0x6437B8B0C99971F3(iVar1);
	unk_0x435850511E04A8D1(iVar1);
	func_11(1);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		if (Global_2359296 == 0)
		{
			Global_2359296 = 1;
		}
	}
	else if (Global_2359296 == 1)
	{
		Global_2359296 = 0;
	}
}

int func_12(var uParam0)
{
	int iVar0;
	
	if (unk_0x3756406E4D76B25E(uParam0->f_3))
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(uParam0->f_1);
	if (unk_0xA1FC9D7AEA164881(uParam0->f_1))
	{
		if (func_14(uParam0->f_2))
		{
			iVar0 = unk_0x7BAE3A9057619E1F(uParam0->f_2);
			if (unk_0x1979A7D1D0538188(iVar0))
			{
				if (func_13(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, -1, 1, 1, 1))
				{
					return 1;
				}
			}
			else
			{
				unk_0xC620100105DBAFCF(iVar0);
			}
		}
	}
	return 0;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_15(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_16(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x3756406E4D76B25E(uParam0->f_2))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 1;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 1;
	unk_0x0F39DF6675B2333E(*uParam0);
	if (unk_0xA1FC9D7AEA164881(*uParam0))
	{
		if (!func_20(Param1))
		{
			if (func_17(&(uParam0->f_2), *uParam0, Param1, uParam4, iVar0, iVar1, bVar2, iVar3, iVar4, 1, 0, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE42A511281C9895B(uParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(uVar0);
	Global_2497344.f_5742 = uVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(uVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(uVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(iVar0, iParam9);
		unk_0xE373A18F5FF76D31(iVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(iVar0);
			unk_0x1873102BDC0A9FE0(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

var func_18()
{
	return Global_1638223.f_59834[0 /*160*/].f_3;
}

Vector3 func_19(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	Var0.f_2 = (Var0.f_2 + 100f);
	return Var0;
}

int func_20(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_21(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_22(var uParam0)
{
	return uParam0->f_5;
}

int func_23(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3FEF699D13BCC798((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_346();
	iVar2 = 0;
	while (iVar2 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar2)))
		{
			iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar2));
			if (func_1083(iVar0, 1, 1))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 1))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 11))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (Local_121.f_184.f_7 != iVar1)
	{
		Local_121.f_184.f_7 = iVar1;
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Local_121.f_184.f_7 != func_346())
	{
		if (func_1083(Local_121.f_184.f_7, 1, 1))
		{
			if (unk_0x76BCE6C7B20502DA(Local_121.f_184.f_7))
			{
				iVar0 = unk_0x675E1E93DBDAF30B(Local_121.f_184.f_7);
				if (unk_0x9E8AB4FC19962A90(iVar0))
				{
					iVar1 = iVar0;
					if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar1 /*8*/].f_1, 1))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar1 /*8*/].f_1, 11))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[iVar1 /*8*/].f_1, 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26()
{
	switch (Local_121.f_21)
	{
		case 0:
			func_327();
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 8);
					Local_121.f_21 = 1;
					unk_0xCF5A819ECA466C6C(Local_632[0 /*3*/], (func_928() + 50f), 1);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 13))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 8);
				Local_121.f_21 = 1;
				unk_0xCF5A819ECA466C6C(Local_632[0 /*3*/], (func_928() + 50f), 1);
			}
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
			{
				Local_121.f_21 = 3;
			}
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
			{
				func_35();
				Local_121.f_21 = 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
			{
				Local_121.f_21 = 3;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 9))
			{
				Local_121.f_21 = 2;
			}
			break;
		
		case 2:
			func_31();
			func_27(0);
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
			{
				Local_121.f_21 = 3;
			}
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
			{
				Local_121.f_21 = 3;
			}
			break;
		
		case 3:
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
			{
				func_35();
			}
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
			{
				if (Local_121.f_21 == 3)
				{
					Local_121.f_21 = 5;
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_27(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	struct<3> Var17;
	struct<3> Var20;
	bool bVar23;
	
	if (bParam0)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			return;
		}
	}
	if (Local_121.f_197 == 0 || Local_121.f_197 == 2)
	{
		fLocal_2777 = func_30();
	}
	iVar0 = iLocal_599 + 1;
	if (!func_29(Local_600, 0f, 0f, 0f, 0))
	{
		if (!func_29(Local_2774, Local_600, 0))
		{
			Local_2774 = { Local_600 };
		}
	}
	if (iVar0 < 217)
	{
		Var1 = { Local_632[iVar0 /*3*/] };
		fVar13 = unk_0xB7A628320EFF8E47(Local_600, Var1);
		if (!func_29(Local_632[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_29(Local_632[iLocal_599 /*3*/], 0f, 0f, 0f, 0))
			{
				if (fVar13 < (0.1f * 0.1f))
				{
					Local_600 = { Local_632[iVar0 /*3*/] };
					iLocal_599++;
					bVar15 = true;
				}
				else
				{
					Var4 = { Var1 - Local_600 };
					Var7 = { func_28(Var4) };
					if (!unk_0x62E688B72E3C57B0())
					{
						Var10 = { Local_600 + Var7 * FtoV(unk_0xBCA469D44FBFAC80()) * Vector(Local_121.f_166, Local_121.f_166, Local_121.f_166) * Vector(fLocal_2777, fLocal_2777, fLocal_2777) };
					}
					else
					{
						Var10 = { Local_600 + Var7 * FtoV(unk_0xBCA469D44FBFAC80()) * Vector(Local_121.f_166, Local_121.f_166, Local_121.f_166) };
					}
					fVar14 = unk_0xB7A628320EFF8E47(Local_600, Var10);
					if (fVar14 > fVar13)
					{
						Var17 = { Var1 };
					}
					else
					{
						Var17 = { Var10 };
					}
				}
			}
		}
		else
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 3))
			{
				unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 3);
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
			{
				if (!func_29(Local_632[(iLocal_1502 - 1) /*3*/], 0f, 0f, 0f, 0))
				{
					Var17 = { Local_632[(iLocal_1502 - 1) /*3*/] };
				}
			}
		}
	}
	if (unk_0x62E688B72E3C57B0())
	{
		if (!func_8(&(Local_121.f_172)))
		{
			func_345(&(Local_121.f_172), 0, 0);
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
		{
			if (!func_7(&(Local_121.f_172), 16000, 0))
			{
				if (!bVar15)
				{
					Local_121.f_176 = { Var17 };
					Local_121.f_171 = iLocal_599;
				}
				else
				{
					Local_121.f_176 = { Local_600 };
					Local_121.f_171 = iLocal_599;
				}
			}
			else if (func_7(&(Local_121.f_172), 16500, 0))
			{
				func_6(&(Local_121.f_172));
			}
		}
	}
	if (!func_29(Local_121.f_176, 0f, 0f, 0f, 0))
	{
		if (iLocal_606 != Local_121.f_171 || !func_29(Local_603, Local_121.f_176, 0))
		{
			if (iLocal_606 != Local_121.f_171)
			{
				iLocal_606 = Local_121.f_171;
				Local_603 = { Local_121.f_176 };
				Local_600 = { Local_603 };
				iLocal_599 = iLocal_606;
				bVar15 = true;
			}
			else
			{
				Local_603 = { Local_121.f_176 };
				Var20 = { Local_121.f_176 };
			}
			bVar16 = true;
		}
	}
	if (!bVar15)
	{
		if (bVar16)
		{
			bVar23 = true;
			if (bVar23)
			{
				Local_600 = { Var20 };
			}
		}
		else
		{
			Local_600 = { Var17 };
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
	{
		if (!func_29(Local_600, Local_632[(iLocal_1502 - 1) /*3*/], 0))
		{
			Local_600 = { Local_632[(iLocal_1502 - 1) /*3*/] };
		}
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_597))
	{
		unk_0xF1194645A0CA23EC(uLocal_597, Local_600);
	}
}

Vector3 func_28(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_29(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

float func_30()
{
	return 0.9f;
}

void func_31()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_8(&(Local_121.f_26)))
	{
		func_345(&(Local_121.f_26), 0, 0);
	}
	if (!func_7(&(Local_121.f_26), 10000, 0))
	{
		return;
	}
	else if (!func_7(&(Local_121.f_26), 20000, 0))
	{
		if (!func_8(&uLocal_612))
		{
			func_345(&uLocal_612, 0, 0);
		}
		if (func_7(&uLocal_612, 1000, 0))
		{
			fVar0 = Local_121.f_166;
			if (fVar0 < func_34())
			{
				fVar0 = (fVar0 + 0.5f);
				fVar0 = (fVar0 * func_33());
				if (fVar0 > func_34())
				{
					fVar0 = func_34();
				}
				Local_121.f_166 = fVar0;
			}
			func_6(&uLocal_612);
		}
	}
	else if (fLocal_1504 <= (fLocal_1503 / 2f))
	{
		if (Local_121.f_166 != func_34())
		{
			Local_121.f_166 = func_34();
		}
	}
	else if (!func_8(&uLocal_612))
	{
		func_345(&uLocal_612, 0, 0);
	}
	else if (func_7(&uLocal_612, 1000, 0))
	{
		if (Local_121.f_166 > func_32())
		{
			fVar1 = (func_34() - func_32());
			fVar3 = (fLocal_1503 / 2f);
			fVar2 = ((fLocal_1504 - fVar3) / fVar3);
			fVar4 = (func_34() - (fVar1 * fVar2));
			fVar4 = (fVar4 * 0.8f);
			fVar4 = (fVar4 * func_33());
			if (fVar4 < func_32())
			{
				fVar4 = func_32();
			}
			Local_121.f_166 = fVar4;
			func_6(&uLocal_612);
		}
	}
}

float func_32()
{
	return Global_262145.f_9808;
}

float func_33()
{
	return Global_262145.f_9809;
}

float func_34()
{
	return Global_262145.f_9806;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	char cVar6[32];
	struct<4> Var10;
	struct<4> Var14;
	struct<4> Var18;
	int iVar22;
	int iVar23;
	struct<10> Var24;
	int iVar40;
	int iVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	struct<4> Var45;
	struct<4> Var49;
	var uVar53;
	var uVar54;
	var uVar58;
	var uVar59;
	int iVar63;
	char[] cVar64[8];
	var uVar65;
	var uVar66;
	var uVar67;
	char cVar71[32];
	var uVar75;
	var uVar76;
	struct<4> Var80;
	struct<4> Var84;
	struct<4> Var88;
	
	iVar5 = -1;
	Var18 = { func_326() };
	iVar22 = func_346();
	if (!func_324(unk_0x0FFED3E94261A832(), 0))
	{
		iVar5 = unk_0x88641E5BC172153A();
		iVar22 = unk_0x0FFED3E94261A832();
	}
	else
	{
		iVar23 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
		if (unk_0x885F483F34E47503(iVar23))
		{
			if (unk_0x76BCE6C7B20502DA(iVar23))
			{
				iVar22 = iVar23;
				iVar5 = unk_0x675E1E93DBDAF30B(iVar23);
			}
		}
	}
	Var24.f_2 = 1065353216;
	Var24.f_3 = 1065353216;
	Var24.f_4 = 1;
	Var24.f_9 = -1;
	if (Local_121.f_197 != 2)
	{
		if (func_323(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
			return;
		}
	}
	else if (func_315())
	{
		unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
	{
		unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
		return;
	}
	if (!func_893(1))
	{
		if (iVar5 > -1)
		{
			if (iVar22 != func_346())
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 17))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[iVar5 /*8*/].f_1, 0))
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 17))
								{
									if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
									{
										if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3) && unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
										{
											if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 19))
											{
												if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
												{
													if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
													{
														if (unk_0x1979A7D1D0538188(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
														{
															unk_0xF6082E2ADA1C795B(&iLocal_577, 19);
														}
													}
												}
											}
											if (unk_0xAA4F14DA15DB0B51(Local_121.f_10, iVar5))
											{
												if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar5 /*8*/].f_1, 1))
												{
													bVar44 = true;
												}
											}
											if (func_314(&iVar40, &iVar41, &iVar42))
											{
												if (iVar42 > 2)
												{
													if (func_313(iVar22, iVar40, iVar41))
													{
														bVar2 = true;
													}
													if (!bVar2)
													{
														bVar43 = true;
													}
												}
												else if (iVar42 == 2)
												{
													if (iVar22 == iVar40 || iVar22 == iVar41)
													{
														Var45 = { func_312() };
														if (iVar22 == iVar40)
														{
															func_310(func_311(), &Var45, unk_0x4325D353D7D27B34(iVar41), 1, 15000, &Var18, 2);
														}
														else
														{
															func_310(func_311(), &Var45, unk_0x4325D353D7D27B34(iVar40), 1, 15000, &Var18, 2);
														}
														func_309(1);
													}
													else
													{
														if (func_313(iVar22, iVar40, iVar41))
														{
															bVar2 = true;
														}
														if (!bVar2)
														{
															Var49 = { func_308() };
															func_306(func_307(), func_346(), func_346(), -1, &Var49, &Var18, 1, 15000, 2, unk_0x4325D353D7D27B34(iVar40), unk_0x4325D353D7D27B34(iVar41), 0);
														}
														func_309(0);
													}
												}
												if (!bVar2 || (bVar2 && iVar4))
												{
													if (iVar5 == unk_0x88641E5BC172153A())
													{
														func_294(bVar44, &iVar0, &iVar1, iVar42);
														if (Local_121.f_197 != 2)
														{
															Local_2745.f_6 = iVar0;
															Local_2745.f_7 = iVar1;
															Global_2456893 = iVar0;
															if (iVar0 > 0)
															{
																if (func_293())
																{
																	func_284(968073639, iVar0, &uVar53, 0, 1, 0);
																}
																else
																{
																	unk_0xD227FE677C456569(iVar0, "AM_PENNED_IN", &uVar54);
																}
															}
															if (!func_283())
															{
																if (Local_2745.f_6 > 0)
																{
																	func_282(11, Local_2745.f_6);
																}
															}
															func_281();
															func_280(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
														}
														else
														{
															Var24.f_0 = iVar0;
															Var24.f_1 = iVar1;
															func_125(200, bVar44, &Var24, 0);
														}
													}
													unk_0xF6082E2ADA1C795B(&iLocal_577, 17);
												}
											}
											else if (bVar44)
											{
												if (iVar5 == unk_0x88641E5BC172153A())
												{
													func_294(1, &iVar0, &iVar1, 1);
													if (Local_121.f_197 != 2)
													{
														Local_2745.f_6 = iVar0;
														Local_2745.f_7 = iVar1;
														Global_2456893 = iVar0;
														if (iVar0 > 0)
														{
															if (func_293())
															{
																func_284(968073639, iVar0, &uVar58, 0, 1, 0);
															}
															else
															{
																unk_0xD227FE677C456569(iVar0, "AM_PENNED_IN", &uVar59);
															}
														}
														if (!func_283())
														{
															if (Local_2745.f_6 > 0)
															{
																func_282(11, Local_2745.f_6);
															}
														}
														func_281();
														func_280(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
													}
													else
													{
														Var24.f_0 = iVar0;
														Var24.f_1 = iVar1;
														func_125(200, 1, &Var24, 0);
													}
												}
												Var10 = { func_124() };
												func_122(func_123(), "PEN_WIN", &Var10, 1, 15000, 2);
												unk_0xF6082E2ADA1C795B(&iLocal_577, 17);
												func_309(1);
											}
											else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
											{
												if (func_1083(iVar22, 1, 1))
												{
													iVar40 = func_121();
													if (iVar40 != func_346())
													{
														if (unk_0x885F483F34E47503(iVar40))
														{
															if (!bVar2)
															{
																if (func_119(iVar40, 1))
																{
																	iVar63 = func_118(iVar40);
																	if (iVar63 > -1)
																	{
																		uVar65 = func_116(iVar63);
																		cVar64 = func_106(iVar40);
																		bVar3 = true;
																	}
																}
															}
															if (Local_121.f_197 == 2)
															{
																bVar2 = false;
																bVar3 = false;
															}
															if (!bVar2 && !bVar3)
															{
																Var14 = { func_105() };
																func_310(func_307(), &Var14, unk_0x4325D353D7D27B34(iVar40), 1, 15000, &Var18, 2);
															}
															else if (bVar3)
															{
																Var14 = { func_104() };
																func_66(func_307(), &Var18, &Var14, cVar64, uVar65, 0, -1, -1, -1, 2, -1);
															}
															else if (unk_0x76BCE6C7B20502DA(iVar40))
															{
																Var14 = { func_65() };
																func_310(91, &Var14, unk_0x4325D353D7D27B34(iVar40), 1, 15000, &Var18, 2);
																iVar4 = 1;
															}
															else
															{
																Var14 = { func_105() };
																func_310(func_307(), &Var14, unk_0x4325D353D7D27B34(iVar40), 1, 15000, &Var18, 2);
																iVar4 = 1;
															}
														}
													}
													else
													{
														cVar6 = { func_64() };
														func_122(func_307(), &Var18, &cVar6, 1, 15000, 2);
													}
													if (!bVar2 || (bVar2 && iVar4))
													{
														if (iVar5 == unk_0x88641E5BC172153A())
														{
															func_294(0, &iVar0, &iVar1, 1);
															if (Local_121.f_197 != 2)
															{
																Local_2745.f_6 = iVar0;
																Local_2745.f_7 = iVar1;
																Global_2456893 = iVar0;
																if (iVar0 > 0)
																{
																	if (func_293())
																	{
																		func_284(968073639, iVar0, &uVar66, 0, 1, 0);
																	}
																	else
																	{
																		unk_0xD227FE677C456569(iVar0, "AM_PENNED_IN", &uVar67);
																	}
																}
																if (!func_283())
																{
																	if (Local_2745.f_6 > 0)
																	{
																		func_282(11, Local_2745.f_6);
																	}
																}
																func_281();
																func_280(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
															}
															else
															{
																Var24.f_0 = iVar0;
																Var24.f_1 = iVar1;
																func_125(200, 0, &Var24, 0);
															}
														}
														unk_0xF6082E2ADA1C795B(&iLocal_577, 17);
													}
													func_309(0);
												}
											}
											if (bVar43)
											{
												cVar71 = { func_63() };
												if (bVar44)
												{
													func_122(func_311(), &Var18, &cVar71, 1, -1, 2);
												}
												else
												{
													func_122(func_311(), &Var18, &cVar71, 1, -1, 2);
												}
												func_309(0);
											}
										}
									}
									else
									{
										cVar6 = { func_64() };
										func_122(func_307(), &Var18, &cVar6, 1, 15000, 2);
										if (iVar5 == unk_0x88641E5BC172153A())
										{
											func_294(0, &iVar0, &iVar1, 1);
											if (Local_121.f_197 != 2)
											{
												Local_2745.f_6 = iVar0;
												Local_2745.f_7 = iVar1;
												Global_2456893 = iVar0;
												if (iVar0 > 0)
												{
													if (func_293())
													{
														func_284(968073639, iVar0, &uVar75, 0, 1, 0);
													}
													else
													{
														unk_0xD227FE677C456569(iVar0, "AM_PENNED_IN", &uVar76);
													}
												}
												func_281();
												func_280(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
											}
											else
											{
												Var24.f_0 = iVar0;
												Var24.f_1 = iVar1;
												func_125(200, 0, &Var24, 0);
											}
										}
										unk_0xF6082E2ADA1C795B(&iLocal_577, 17);
									}
								}
								if (unk_0xAA4F14DA15DB0B51(iLocal_577, 17))
								{
									if (unk_0xAA4F14DA15DB0B51(Local_320[iVar5 /*8*/].f_1, 5))
									{
										if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar5 /*8*/].f_1, 1))
										{
											unk_0xDC0343058D861402(iLocal_2041);
											unk_0x15BA16B33BC155D8(iLocal_2041);
										}
									}
									if (unk_0x0B21CC5276C2CE1B())
									{
										unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
									}
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
							{
								if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
								{
									iVar40 = func_121();
									if (iVar40 != func_346())
									{
										if (!func_314(&iVar40, &iVar41, &iVar42))
										{
											Var80 = { func_105() };
											func_60(&Var80, iVar40, 1, 0, 0, 0, 1, 1, 0);
										}
										else if (iVar42 == 2)
										{
											Var84 = { func_59() };
											func_56(&Var84, iVar40, iVar41, 1, 1, 0, 0, 1);
										}
										else
										{
											Var88 = { func_63() };
											func_51(&Var88, 1);
										}
									}
									unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
									if (Local_121.f_197 != 2)
									{
										func_46(0);
									}
									else
									{
										func_309(0);
									}
								}
							}
							else
							{
								unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
								if (Local_121.f_197 != 2)
								{
									func_46(0);
								}
								else
								{
									func_309(0);
								}
							}
						}
						else if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2))
						{
							unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
							if (func_36(unk_0x0FFED3E94261A832()) >= 2)
							{
								func_122(func_307(), &Var18, "CAG_NOP", 1, 15000, 2);
							}
							func_309(0);
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
						if (func_36(unk_0x0FFED3E94261A832()) >= 2)
						{
							func_122(func_307(), &Var18, "CAG_NOP", 1, 15000, 2);
						}
						func_309(0);
					}
				}
				else if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2))
				{
					unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
					if (func_36(unk_0x0FFED3E94261A832()) >= 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_579, 1))
						{
							func_122(func_307(), &Var18, "CAG_PRES", 1, 15000, 2);
						}
					}
					func_309(0);
				}
			}
			else if (func_324(unk_0x0FFED3E94261A832(), 0))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3) && unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
				{
					unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
				{
					unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
				}
			}
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2))
	{
		if ((unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
		{
			unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 2);
		}
	}
}

int func_36(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_45(iParam0) && !func_44(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_43(iParam0);
	uVar3 = func_42();
	uVar4 = func_315();
	if ((bVar1 && (func_41(iParam0) || func_40(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_39(iParam0)) && !func_37(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2497344.f_4828.f_31 != iVar0)
	{
		Global_2497344.f_4828.f_31 = iVar0;
	}
	return iVar0;
}

bool func_37(int iParam0)
{
	return func_38(iParam0, 19);
}

bool func_38(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_38(iParam0, 9);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

bool func_42()
{
	return Global_1312416;
}

bool func_43(int iParam0)
{
	return func_38(iParam0, 20);
}

bool func_44(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_46(bool bParam0)
{
	if (bParam0)
	{
		if (func_47(1))
		{
			unk_0xF6082E2ADA1C795B(&Global_1574404, 1);
		}
	}
	else if (func_47(2))
	{
		unk_0xF6082E2ADA1C795B(&Global_1574404, 2);
	}
}

int func_47(int iParam0)
{
	var uVar0;
	
	uVar0 = func_48(2519, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xAA4F14DA15DB0B51(uVar0, 0) && unk_0xAA4F14DA15DB0B51(iVar0, 1)) && unk_0xAA4F14DA15DB0B51(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xAA4F14DA15DB0B51(iVar0, 3) && unk_0xAA4F14DA15DB0B51(iVar0, 4)) && unk_0xAA4F14DA15DB0B51(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xAA4F14DA15DB0B51(iVar0, 6) && unk_0xAA4F14DA15DB0B51(iVar0, 7)) && unk_0xAA4F14DA15DB0B51(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xAA4F14DA15DB0B51(iVar0, 9) && unk_0xAA4F14DA15DB0B51(iVar0, 10)) && unk_0xAA4F14DA15DB0B51(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_50();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_50()
{
	return Global_1312735;
}

int func_51(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_52(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_52(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_55() || !unk_0x1B154DE2D4606530()) || !func_324(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_53(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_54(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_55()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

int func_56(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var17;
	
	iVar0 = -1;
	if ((unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam2)) || iParam6)
	{
		if (!bParam5)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
			StringCopy(&Var17, unk_0x4325D353D7D27B34(iParam2), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
			StringCopy(&Var17, unk_0x4325D353D7D27B34(iParam2), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		if (unk_0x58478145CAF8429C(&Var17))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(iParam3);
		unk_0xCF6846167A5EFE98(func_57(&Var1));
		unk_0x95CE6D748899618C(iParam4);
		unk_0xCF6846167A5EFE98(func_57(&Var17));
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_52(22, sParam0, 1, &Var1, 0, 0, 0, 0f, 0, &Var17, 0, 0);
	}
	return iVar0;
}

var func_57(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_58(&cVar0);
}

var func_58(char[4] cParam0)
{
	return cParam0;
}

struct<4> func_59()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON2P", 16);
			break;
	}
	return Var0;
}

int func_60(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(iParam2);
		unk_0xCF6846167A5EFE98(func_57(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_62(iParam1) };
			if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
			{
				iVar17 = 0;
				if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2484502.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_61(&Var1) };
					}
					iVar0 = unk_0xCFCC273DCA662841(iVar18, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar17, 0, Global_2484502, &Var1, Global_1314009, Global_1314010, Global_1314011);
				}
				else
				{
					iVar0 = unk_0xA390BEE87F567563(iVar18, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar17, 0, Global_2484502, Global_1314009, Global_1314010, Global_1314011);
				}
			}
			else
			{
				iVar0 = unk_0xEF731ED745A201C5(0, 1);
			}
		}
		func_52(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_61(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

struct<4> func_63()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWD", 16);
			break;
	}
	return Var0;
}

struct<4> func_64()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NWN", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NWN", 16);
			break;
	}
	return Var0;
}

struct<4> func_65()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG", 16);
			break;
	}
	return Var0;
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_346();
	iVar1 = func_346();
	iVar2 = func_346();
	return func_67(uParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_67(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_103(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_69 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_70 = uParam12;
	unk_0xF6082E2ADA1C795B(&(Var0.f_67), 2);
	return func_68(&Var0);
}

int func_68(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_81(uParam0, uParam0->f_16);
	func_78(uParam0);
	if (func_77(uParam0->f_1))
	{
		func_70();
		if (Global_2434604.f_2483[0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434604.f_2483[0 /*76*/].f_1 == 13 || Global_2434604.f_2483[0 /*76*/].f_1 == 53) || Global_2434604.f_2483[0 /*76*/].f_1 == 54) || Global_2434604.f_2483[0 /*76*/].f_1 == 58)
		{
			Global_2434604.f_2483[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434604.f_2483[iVar0 + 1 /*76*/] = { Global_2434604.f_2483[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434604.f_2483[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_70();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 1);
				Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_69(Global_2434604.f_2483[iVar0 /*76*/].f_1))
				{
					Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
					unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_70()
{
	bool bVar0;
	
	if (Global_2434604.f_2790)
	{
		return;
	}
	if (!Global_70068)
	{
		Global_70068 = 1;
		bVar0 = true;
	}
	func_71();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_71()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_75(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_72(&(Global_2434604.f_2791.f_1));
}

void func_72(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x73F5E7B6BB964839(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x5018862FF5D9F844())
		{
			unk_0xD1FCC52F87A98873(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD426F7366505EADF(0);
			unk_0x8123397DC676E794();
		}
		unk_0x73F5E7B6BB964839(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x6F0F1C5EEC77F84A(0);
		uParam0->f_564 = 0;
	}
	if (!Global_70068)
	{
		if (!unk_0x859EE44BE17CBC0F(unk_0x8A41C463063AFC8E()))
		{
			if (!Global_70069)
			{
				if (unk_0xF4EE9D6C8E60AE22() && !func_74(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_73(0);
}

void func_73(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_74(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_75(var uParam0)
{
	func_76(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_76(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_77(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_78(var uParam0)
{
	if (func_80(uParam0->f_1))
	{
		uParam0->f_70 = func_79();
	}
}

int func_79()
{
	return 21;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_81(var uParam0, int iParam1)
{
	if (func_80(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_346())
	{
		return;
	}
	if (func_69(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_82(iParam1, -2, 0, 0);
		}
	}
}

int func_82(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_101(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_101(unk_0x0FFED3E94261A832()) || (func_100() && func_99())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_98();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_1083(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_96(iParam1, iParam0, 0);
							}
							else
							{
								return func_90(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_90(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_96(iParam1, iParam0, 0);
				}
				else
				{
					return func_83(0, -1, 0);
				}
			}
			else
			{
				return func_83(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_96(iParam1, iParam0, 0);
		}
		else
		{
			return func_90(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_90(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_83(bool bParam0, int iParam1, bool bParam2)
{
	return func_84(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_84(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_88(1);
				}
				else
				{
					return func_88(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_85(iVar0, iParam2, 1);
			}
			else
			{
				return func_85(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_88(1);
	}
	return func_88(0);
}

int func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_87(iParam0, iParam1);
	if (func_86(Global_1638223.f_93532))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_89(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_88(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_93())
			{
				iVar3 = func_118(iParam0);
				if (!iVar3 == -1)
				{
					return func_116(iVar3);
				}
			}
			if ((func_92(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_89(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_88(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_91(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_88(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_118(iParam0);
	if (!iVar4 == -1)
	{
		return func_116(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_91(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_93()
{
	if (func_95() || func_94())
	{
		return 1;
	}
	return 0;
}

var func_94()
{
	return Global_2445217.f_13;
}

var func_95()
{
	return Global_2445217.f_12;
}

int func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_93())
	{
		iVar1 = func_118(iParam1);
		if (!iVar1 == -1)
		{
			return func_116(iVar1);
		}
	}
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_84(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_97(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_98()
{
	return Global_2359301.f_2;
}

bool func_99()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_100()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_101(int iParam0)
{
	if (func_324(iParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

void func_103(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_346();
	uParam1->f_17 = func_346();
	uParam1->f_18 = func_346();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

struct<4> func_104()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG2", 16);
			break;
	}
	return Var0;
}

struct<4> func_105()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONP", 16);
			break;
	}
	return Var0;
}

char* func_106(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		sVar0 = func_115(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return sVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		sVar0 = func_110(iParam0, 0);
		return sVar0;
	}
	if (((func_38(iParam0, 28) || func_38(unk_0x0FFED3E94261A832(), 28)) || func_109(iParam0)) && !func_108(iParam0))
	{
		return func_110(iParam0, 0);
	}
	iVar1 = func_107(iParam0);
	if (iVar1 != func_346())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_110(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_346())
	{
		sVar0 = func_115(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(sVar0))
		{
			return func_110(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_107(int iParam0)
{
	if (iParam0 != func_346())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_346();
}

int func_108(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x429A1F8C699BEE23() || unk_0x5018862FF5D9F844())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			return 0;
		}
	}
	else if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_110(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_112(iParam0, 1))
		{
			return func_111();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_111()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

bool func_112(int iParam0, bool bParam1)
{
	return func_113(iParam0, bParam1, 1);
}

int func_113(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_114(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_346() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (iParam0 != func_346())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_346())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_115(var uParam0)
{
	return uParam0;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_117(iParam0);
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

var func_117(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_118(int iParam0)
{
	if (!iParam0 == func_346())
	{
		if (func_119(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_107(iParam0)];
		}
	}
	return -1;
}

bool func_119(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_120(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_346();
}

int func_120(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_346())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_121()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_346();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 == func_346())
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_10, iVar2))
			{
				if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar2)))
				{
					iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar2));
					if (unk_0x76BCE6C7B20502DA(iVar1))
					{
						iVar0 = iVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_122(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_103(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_68(&Var0);
}

int func_123()
{
	if (Local_121.f_197 != 2)
	{
		return 64;
	}
	return 87;
}

struct<4> func_124()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON", 16);
			break;
	}
	return Var0;
}

void func_125(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	func_278(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16829);
		}
		else
		{
			iVar1 = (iVar1 + func_277(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_276(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16828);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_274(iParam0))
	{
		if (bParam1)
		{
			if (func_273(unk_0x0FFED3E94261A832()) > 0)
			{
				func_272();
			}
			else
			{
				func_271();
			}
		}
		else
		{
			func_270();
		}
	}
	func_254(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_251(iParam0, uParam2, &iVar0, &uVar5);
	func_211(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_210();
	if (iVar6 != func_346() && iParam0 != 148)
	{
		if (func_119(unk_0x0FFED3E94261A832(), 0))
		{
			if (!func_208(unk_0x0FFED3E94261A832(), iVar6, 1))
			{
				func_198(&iVar0, 1);
			}
		}
	}
	func_193(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1773254.f_10 = iVar1;
		func_281();
		func_149(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1773254.f_9 = iVar0;
		iVar11 = func_148();
		if (iVar11 != func_346())
		{
			func_147(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_146(1);
		if (iParam0 == 168)
		{
			if (!func_293())
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_144())
			{
				if (!func_293())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_293())
			{
				func_284(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2595364[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_143())
			{
				if (!func_293())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_293())
			{
				func_284(-856006867, iVar0, &iVar14, 0, 1, 0);
				Global_2595364[iVar14 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar14 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar14 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (func_293())
		{
			func_284(-856006867, iVar0, &iVar15, 0, 1, 0);
			Global_2595364[iVar15 /*76*/].f_8.f_54 = uVar9;
			Global_2595364[iVar15 /*76*/].f_8.f_55 = uVar10;
			Global_2595364[iVar15 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xD2924B7B97D1AE97(uVar9, uVar10, iVar0, bVar12);
		}
		func_142(iParam0, iVar0);
		if (func_141(iParam0))
		{
			if (func_140(iParam0) > -1)
			{
				func_282(func_140(iParam0), iVar0);
			}
		}
		Global_2456893 = iVar0;
		func_139(&Global_2455167, 0, 0);
	}
	if (func_39(unk_0x0FFED3E94261A832()) || func_43(unk_0x0FFED3E94261A832()))
	{
		func_129(iParam0);
	}
	if (func_128(iParam0))
	{
		Global_1773272.f_13 = iVar0;
		Global_1773272.f_14 = iVar1;
	}
	if (func_127(iParam0))
	{
		Global_1773325.f_13 = iVar0;
		Global_1773325.f_14 = iVar1;
	}
	if (func_126(iParam0))
	{
		Global_1773387.f_12 = iVar0;
		Global_1773387.f_13 = iVar1;
	}
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148 && func_114(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_129(int iParam0)
{
	if (func_138(unk_0x0FFED3E94261A832()) && func_144())
	{
		if (func_137(iParam0))
		{
			func_133(6303, -1);
		}
		else if (func_132(iParam0))
		{
			func_133(6305, -1);
		}
		else if (func_131(iParam0, 1))
		{
			func_133(6306, -1);
		}
		else if (func_130(iParam0))
		{
			func_133(6307, -1);
		}
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, func_49(iParam1), 0);
	iVar0++;
	if (!func_136(iParam0))
	{
		func_135(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_134(iParam0, iVar0, iParam1, 1);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_49(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_49(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_49(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_49(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_49(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_49(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_49(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_49(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_49(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_49(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_49(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_49(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_49(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_49(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_49(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_49(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_49(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_49(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_49(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_49(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_49(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_49(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_49(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_49(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_49(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_49(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_49(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_49(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_49(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_49(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_49(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_136(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_138(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_97, 14);
}

void func_139(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1)
{
	if (func_138(unk_0x0FFED3E94261A832()) && func_144())
	{
		if (func_137(iParam0) && iParam1 > 0)
		{
			func_135(6304, (func_48(6304, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

bool func_143()
{
	return func_120(unk_0x0FFED3E94261A832());
}

bool func_144()
{
	return func_145(unk_0x0FFED3E94261A832());
}

bool func_145(int iParam0)
{
	return func_114(iParam0, 1);
}

bool func_146(bool bParam0)
{
	return func_119(unk_0x0FFED3E94261A832(), bParam0);
}

void func_147(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1622795[iParam0 /*431*/].f_11.f_7[0];
	*uParam2 = Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_148()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

int func_149(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_150(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_160(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_156(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_151(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_151(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_154(iParam0, 1) };
	if (iParam0 == func_153(unk_0x2A5EB8B0FE590B91()))
	{
		func_152(1);
	}
	func_156(Var0, iParam1, 0, sParam2, iParam3);
}

void func_152(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_153(int iParam0)
{
	return iParam0;
}

Vector3 func_154(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC30ED45C83B62BDA())
	{
		Var3 = { unk_0x7635C19924563670(2) };
	}
	if (iParam0 == func_155(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar6 = unk_0x6DAB28241B34DEED(iParam0);
		if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_155(int iParam0)
{
	return iParam0;
}

void func_156(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434604.f_1065[iVar0 /*30*/].f_6 == 0 || Global_2434604.f_1065[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434604.f_1065[iVar1 /*30*/] = { Param0 };
			Global_2434604.f_1065[iVar1 /*30*/].f_6 = 1;
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_159(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_158();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_157();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_157()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_158()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_159(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(unk_0x616AF251C179EE09(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_160(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_161(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_161(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_192(unk_0x0FFED3E94261A832()) || func_191(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_190(sParam2))
	{
	}
	if (func_189())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_187(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_186(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_183(0, &iVar1);
					break;
				
				case 3:
					func_183(1, &iVar1);
					break;
				
				case 1:
					func_180(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_179(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_171((func_178(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_179(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_166(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_162((func_164(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_162((func_164(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_162(int iParam0)
{
	if (func_189())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_163(joaat("mpply_globalxp"), iParam0);
	}
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
}

int func_164(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1083(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_165(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_165(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_166(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_169(func_170(&Var0));
			if (iVar13 == 0)
			{
				func_168(&Global_1361887, iParam0);
				func_167(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_168(&Global_1361888, iParam0);
				func_167(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_168(&Global_1361889, iParam0);
				func_167(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_168(&Global_1361890, iParam0);
				func_167(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_168(&Global_1361891, iParam0);
				func_167(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_168(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_169(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_170(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	if (func_189())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_49(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_49(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_177(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_175(iParam0, 1);
		}
		func_134(635, iParam0, -1, 1);
		func_135(636, func_175(iParam0, 1), -1, 1, 0);
		Global_1362002[func_49(-1)] = iParam0;
		func_172(7, 0);
	}
}

void func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_174(iParam0, iParam1))
	{
		iVar0 = func_173();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_173()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_174(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_176(iParam0, 0);
}

int func_176(int iParam0, int iParam1)
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
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
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

int func_177(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

int func_178(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_49(-1)];
			}
			else if (func_177(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_49(-1)];
	}
	return 0;
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, func_49(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_136(iParam0))
	{
		func_135(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_134(iParam0, iVar0, iParam2, 1);
	}
}

void func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_89(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_182(unk_0x0FFED3E94261A832(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_181(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_181(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_181(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_182(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_62(iParam0) };
		Global_2484585 = { func_62(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_183(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_1083(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_182(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1083(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_184(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_182(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_181(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_181(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_184(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_185(iParam0), func_185(iParam1));
	return 0f;
}

Vector3 func_185(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_186(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_181(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_187(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_178(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_178(unk_0x0FFED3E94261A832());
		}
	}
	if (func_188(8000, 0, 0) > 0)
	{
		if (func_188(8000, 0, 0) < (iParam0 + func_178(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_188(8000, 0, 0) - func_178(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_188(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_282038[iParam0];
}

int func_189()
{
	return 1;
}

int func_190(char* sParam0)
{
	if (unk_0x47988E04F8E2F0AD(sParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(sParam0, "") || unk_0x35302CD5A5D37EED(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_192(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_193(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_197(7))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_194(iParam0);
	iVar2 = unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(Global_2497344.f_4828.f_80, unk_0x11ABC381A58DD5AB()));
	if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_19497)
		{
			iVar2 = Global_262145.f_19497;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_19477)
		{
			iVar2 = Global_262145.f_19477;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_19489)
		{
			iVar2 = Global_262145.f_19489;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17031)
		{
			iVar2 = Global_262145.f_17031;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17032)
		{
			iVar2 = Global_262145.f_17032;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17030)
		{
			iVar2 = Global_262145.f_17030;
		}
	}
	else if (func_137(iParam0))
	{
		if (iVar2 > Global_262145.f_17033)
		{
			iVar2 = Global_262145.f_17033;
		}
	}
	else if (func_131(iParam0, 0) || func_132(iParam0))
	{
		if (iVar2 > Global_262145.f_17034)
		{
			iVar2 = Global_262145.f_17034;
		}
	}
	else if (iVar2 > Global_262145.f_11047)
	{
		iVar2 = Global_262145.f_11047;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11138;
		
		case 152:
			return Global_262145.f_11173;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11161;
		
		case 157:
			return Global_262145.f_11128;
		
		case 159:
			return Global_262145.f_11111;
		
		case 164:
			return Global_262145.f_11151;
		
		case 160:
			return Global_262145.f_11201;
		
		case 162:
			return Global_262145.f_11221;
		
		case 163:
			return Global_262145.f_11186;
		
		case 154:
			return Global_262145.f_11256;
		
		case 155:
			return Global_262145.f_11246;
		
		case 153:
			return Global_262145.f_11210;
		
		case 170:
			return Global_262145.f_13547;
		
		case 171:
			return Global_262145.f_13606;
		
		case 172:
			return Global_262145.f_13624;
		
		case 173:
			return Global_262145.f_13565;
		
		case 166:
			return Global_262145.f_13580;
		
		case 167:
			return Global_262145.f_13671;
		
		case 169:
			return Global_262145.f_13643;
		
		case 168:
			return Global_262145.f_13636;
		
		case 179:
			return Global_262145.f_16913;
		
		case 180:
			return Global_262145.f_16692;
		
		case 182:
			return Global_262145.f_16692;
		
		case 183:
			return Global_262145.f_16692;
		
		case 185:
			return Global_262145.f_16692;
		
		case 186:
			return Global_262145.f_16692;
		
		case 189:
			return Global_262145.f_16913;
		
		case 190:
			return Global_262145.f_16568;
		
		case 191:
			return Global_262145.f_16659;
		
		case 192:
			return Global_262145.f_16453;
		
		case 193:
			return Global_262145.f_16913;
		
		case 194:
			return Global_262145.f_16913;
		
		case 195:
			return Global_262145.f_16692;
		
		case 197:
			return Global_262145.f_16692;
		
		case 198:
			return Global_262145.f_16692;
		
		case 199:
			return Global_262145.f_16913;
		
		case 200:
			return Global_262145.f_16913;
		
		case 201:
			return Global_262145.f_16913;
		
		case 205:
			return Global_262145.f_16913;
		
		case 207:
			return Global_262145.f_16692;
		
		case 208:
			return Global_262145.f_16692;
		
		case 209:
			return Global_262145.f_16692;
		
		case 210:
			return Global_262145.f_16913;
		
		case 211:
			return Global_262145.f_16913;
		
		case 214:
			return Global_262145.f_17709;
		
		case 215:
			return Global_262145.f_17711;
		
		case 216:
			return Global_262145.f_17713;
		
		case 217:
			return Global_262145.f_17715;
		
		case 218:
			return Global_262145.f_17717;
		
		case 219:
			return Global_262145.f_17719;
		
		case 220:
			return Global_262145.f_17721;
		
		case 221:
			return Global_262145.f_17723;
		
		case 225:
			if (func_146(0) || func_195(0))
			{
				return Global_262145.f_19499;
			}
			break;
		
		case 226:
			if (func_146(0) || func_195(0))
			{
				return Global_262145.f_19479;
			}
			break;
		
		case 227:
			if (func_146(0) || func_195(0))
			{
				return Global_262145.f_19491;
			}
			break;
	}
	return 0;
}

bool func_195(bool bParam0)
{
	return func_112(unk_0x0FFED3E94261A832(), bParam0);
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11137;
		
		case 152:
			return Global_262145.f_11172;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11160;
		
		case 157:
			return Global_262145.f_11127;
		
		case 159:
			return Global_262145.f_11110;
		
		case 164:
			return Global_262145.f_11150;
		
		case 160:
			return Global_262145.f_11200;
		
		case 162:
			return Global_262145.f_11220;
		
		case 163:
			return Global_262145.f_11185;
		
		case 154:
			return Global_262145.f_11255;
		
		case 155:
			return Global_262145.f_11245;
		
		case 153:
			return Global_262145.f_11209;
		
		case 170:
			return Global_262145.f_13546;
		
		case 171:
			return Global_262145.f_13605;
		
		case 172:
			return Global_262145.f_13623;
		
		case 173:
			return Global_262145.f_13564;
		
		case 166:
			return Global_262145.f_13579;
		
		case 179:
			return Global_262145.f_16912;
		
		case 180:
			return Global_262145.f_16691;
		
		case 182:
			return Global_262145.f_16691;
		
		case 183:
			return Global_262145.f_16691;
		
		case 185:
			return Global_262145.f_16691;
		
		case 186:
			return Global_262145.f_16691;
		
		case 189:
			return Global_262145.f_16912;
		
		case 193:
			return Global_262145.f_16912;
		
		case 194:
			return Global_262145.f_16912;
		
		case 195:
			return Global_262145.f_16691;
		
		case 197:
			return Global_262145.f_16691;
		
		case 198:
			return Global_262145.f_16691;
		
		case 199:
			return Global_262145.f_16912;
		
		case 200:
			return Global_262145.f_16912;
		
		case 201:
			return Global_262145.f_16912;
		
		case 205:
			return Global_262145.f_16912;
		
		case 207:
			return Global_262145.f_16691;
		
		case 208:
			return Global_262145.f_16691;
		
		case 209:
			return Global_262145.f_16691;
		
		case 210:
			return Global_262145.f_16912;
		
		case 211:
			return Global_262145.f_16912;
		
		case 190:
			if (!func_143())
			{
				return Global_262145.f_16567;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_143())
			{
				return Global_262145.f_16658;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_143())
			{
				return Global_262145.f_16452;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17708;
		
		case 215:
			return Global_262145.f_17710;
		
		case 216:
			return Global_262145.f_17712;
		
		case 217:
			return Global_262145.f_17714;
		
		case 218:
			return Global_262145.f_17716;
		
		case 219:
			return Global_262145.f_17718;
		
		case 220:
			return Global_262145.f_17720;
		
		case 221:
			return Global_262145.f_17722;
		
		case 225:
			if (func_195(0))
			{
				return Global_262145.f_19498;
			}
			break;
		
		case 226:
			if (func_195(0))
			{
				return Global_262145.f_19478;
			}
			break;
		
		case 227:
			if (func_195(0))
			{
				return Global_262145.f_19490;
			}
			break;
	}
	return 0;
}

bool func_197(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

void func_198(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_143())
		{
			if (func_146(0))
			{
				if (!func_195(0))
				{
					if (unk_0x885F483F34E47503(func_148()))
					{
						if (func_207() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_207());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_205(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_204("GB_BCUT_TICK1", func_148(), iVar0, 0, 0, 1, 1);
						}
						func_203(20);
						func_199(func_148(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1083(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_202(iParam0);
		func_201(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_200(iParam0));
	}
}

int func_200(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_201(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_202(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(func_82(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_57(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_52(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_205(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_206(1);
	}
	else
	{
		iVar1 = func_206(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_206(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_207()
{
	return Global_262145.f_11041;
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_346())
	{
		if (!bParam2)
		{
			if (func_209(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_346())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	if (iParam1 != func_346())
	{
		if (iParam0 != func_346())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_346())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_210()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

void func_211(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_195(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_143())
		{
			iVar15 = unk_0x0FFED3E94261A832();
		}
		else
		{
			iVar15 = func_148();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_250(iVar15);
			iVar0 = (func_249(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_244(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19481));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19480));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x0FFED3E94261A832())
			{
				func_238(iVar16, iVar2);
				if (func_234(iVar16) >= Global_262145.f_19038 || iVar2 >= Global_262145.f_19038)
				{
					func_223(5);
				}
				iVar6 = func_222(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_19483);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_19482));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_203(108);
					}
					else
					{
						func_203(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x244673FE98A43CA3())
						{
							iVar19 = iVar18;
							if (unk_0x9E8AB4FC19962A90(iVar19))
							{
								iVar20 = unk_0x2AFA21CE4322B48D(iVar19);
								if (func_221(iVar20))
								{
									func_212(iVar20, 1, 3, 0);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_19484;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_19485;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1779842 = *iParam2;
					func_203(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_215(iParam0);
	if (bParam3)
	{
		func_214(iParam0, uVar0, iParam1, iParam2);
	}
	else
	{
		func_213(iParam0, uVar0, iParam1, iParam2);
	}
}

void func_213(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_202(iParam0);
	func_201(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_346())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_200(iParam0));
		}
	}
}

void func_214(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = func_202(iParam0);
	func_201(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_346())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_200(iParam0));
		}
	}
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_220();
	iVar0 = func_218(iParam0, iVar0);
	iVar1 = Global_1622795[func_148() /*431*/].f_11.f_316;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13507));
	if (iVar0 < func_217())
	{
		iVar0 = func_217();
	}
	if (iVar0 > func_216())
	{
		iVar0 = func_216();
	}
	return iVar0;
}

int func_216()
{
	return Global_262145.f_13508;
}

int func_217()
{
	return Global_262145.f_14683;
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_273(iParam0) * func_219());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_219()
{
	return Global_262145.f_14682;
}

var func_220()
{
	return Global_262145.f_11033;
}

int func_221(int iParam0)
{
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (iParam0 != unk_0x0FFED3E94261A832())
		{
			if (func_208(iParam0, unk_0x0FFED3E94261A832(), 0))
			{
				if (!func_38(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_222(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			iVar2 = unk_0x7C214DA899F05536(iVar0);
			if (!func_324(iVar2, 0) && !func_208(iVar2, unk_0x0FFED3E94261A832(), 1))
			{
				iVar1++;
			}
			else if (func_324(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19026)
			{
				if (func_226(Global_262145.f_19027))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19028)
			{
				if (func_226(Global_262145.f_19029))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19030)
			{
				if (func_226(Global_262145.f_19031))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19032)
			{
				if (func_226(Global_262145.f_19033))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19034)
			{
				if (func_226(Global_262145.f_19035))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19036)
			{
				if (func_226(Global_262145.f_19037))
				{
					func_224("CLOTHAWDSTRAP3", Global_262145.f_19038, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19039)
			{
				if (func_226(Global_262145.f_19040))
				{
					func_224("CLOTHAWDSTRAP5", Global_262145.f_19168, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19042)
			{
				if (func_226(Global_262145.f_19043))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19044)
			{
				if (func_226(Global_262145.f_19045))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19046)
			{
				if (func_226(Global_262145.f_19047))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19048)
			{
				if (func_226(Global_262145.f_19049))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19050)
			{
				if (func_226(Global_262145.f_19051))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19052)
			{
				if (func_226(Global_262145.f_19053))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19054)
			{
				if (func_226(Global_262145.f_19055))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19056)
			{
				if (func_226(Global_262145.f_19057))
				{
					func_225("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_224(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_52(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_225(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x95CE6D748899618C(iParam3);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
	}
	else
	{
		Global_2484572 = { func_62(unk_0x0FFED3E94261A832()) };
		if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
		{
			iVar1 = 0;
			if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2484502.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xCFCC273DCA662841(iVar2, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar1, 0, Global_2484502, unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), Global_1314009, Global_1314010, Global_1314011);
		}
		else
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
	}
	func_52(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_231(15417, -1, -1))
			{
				func_230(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_231(15418, -1, -1))
			{
				func_230(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_231(15425, -1, -1))
			{
				func_230(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_231(15405, -1, -1))
			{
				func_230(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_231(15393, -1, -1))
			{
				func_230(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_231(15409, -1, -1))
			{
				func_230(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_231(15396, -1, -1))
			{
				func_230(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_231(15412, -1, -1))
			{
				func_230(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_231(15403, -1, -1))
			{
				func_230(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_231(15389, -1, -1))
			{
				func_230(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_231(15398, -1, -1))
			{
				func_230(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_231(15400, -1, -1))
			{
				func_230(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_231(15408, -1, -1))
			{
				func_230(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_231(15411, -1, -1))
			{
				func_230(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_231(15397, -1, -1))
			{
				func_230(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_231(15413, -1, -1))
			{
				func_230(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_231(15391, -1, -1))
			{
				func_230(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_231(15388, -1, -1))
			{
				func_230(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_231(15401, -1, -1))
			{
				func_230(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_231(15394, -1, -1))
			{
				func_230(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_231(15406, -1, -1))
			{
				func_230(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_231(15395, -1, -1))
			{
				func_230(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_231(15410, -1, -1))
			{
				func_230(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_231(15407, -1, -1))
			{
				func_230(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_231(15414, -1, -1))
			{
				func_230(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_231(15415, -1, -1))
			{
				func_230(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_231(15399, -1, -1))
			{
				func_230(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_231(15404, -1, -1))
			{
				func_230(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_231(15392, -1, -1))
			{
				func_230(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_231(15390, -1, -1))
			{
				func_230(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_231(15402, -1, -1))
			{
				func_230(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_231(15416, -1, -1))
			{
				func_230(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_229(209, -1))
			{
				func_227(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_231(15426, -1, -1))
			{
				func_230(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_231(15422, -1, -1))
			{
				func_230(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_231(15423, -1, -1))
			{
				func_230(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_231(15421, -1, -1))
			{
				func_230(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_231(15427, -1, -1))
			{
				func_230(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_231(15419, -1, -1))
			{
				func_230(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_231(15420, -1, -1))
			{
				func_230(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_227(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_228())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_49(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_228()
{
	return 1;
	return 0;
}

int func_229(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar1 = func_233(iParam0, iParam1);
	uVar2 = func_232(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = func_236(iParam0);
	return func_48(func_235(iVar0), -1, 0);
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3926;
		
		case 1:
			return 3927;
		
		case 2:
			return 3928;
		
		case 3:
			return 3929;
		
		case 4:
			return 3930;
		
		case 5:
			return 5431;
		
		default:
	}
	return 3926;
}

int func_236(int iParam0)
{
	int iVar0;
	
	if (func_237(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_237(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_236(iParam0);
	iVar1 = func_235(iVar0);
	iVar2 = (func_48(iVar1, -1, 0) + iParam1);
	func_135(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_241(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
			{
				iVar1 = func_235(iVar0);
				iVar3 = (iVar3 + func_48(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_240(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_239(9357, iVar5, -1, 1);
	}
}

var func_239(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_50();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_241(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	iVar1 = func_243(iParam0, iParam1);
	uVar2 = func_242(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_243(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_244(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_248(iParam1);
	if (func_237(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_245(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_245(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_245(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_245(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_245(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_245(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_245(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_245(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_245(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_245(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_245(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_245(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_237(iParam1) && iParam0 != func_346())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_237(iParam1) && iParam0 != func_346())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (func_237(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	if (iParam0 == func_346())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_251(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_144())
			{
				Var0 = { func_253() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_244(unk_0x0FFED3E94261A832(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17142);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17141);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_222(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17132);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17131));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_203(86);
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (func_195(0))
			{
				Var15 = { func_252(func_148()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_244(func_148(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17142));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17141));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17181;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17182;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_252(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_185;
}

struct<2> func_253()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_185;
}

void func_254(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_120(unk_0x0FFED3E94261A832()))
		{
			if (bParam1)
			{
				func_269();
			}
			func_268();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_120(unk_0x0FFED3E94261A832()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_260(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_259(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_222(&uVar2);
					iVar4 = Global_262145.f_14693;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13902));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_203(44);
					}
				}
				func_257(*iParam3);
				func_256();
				Global_2497344.f_4828.f_192 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x244673FE98A43CA3())
				{
					iVar8 = iVar7;
					if (unk_0x9E8AB4FC19962A90(iVar8))
					{
						iVar9 = unk_0x2AFA21CE4322B48D(iVar8);
						if (func_221(iVar9))
						{
							func_212(iVar9, 1, 0, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_120(unk_0x0FFED3E94261A832()))
		{
			func_255();
		}
	}
}

void func_255()
{
	int iVar0;
	
	iVar0 = Global_2528811[func_50()];
	iVar0++;
	func_134(3652, iVar0, -1, 1);
}

void func_256()
{
	int iVar0;
	
	iVar0 = Global_2528817[func_50()];
	iVar0++;
	func_134(3651, iVar0, -1, 1);
}

void func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2528820[func_50()];
	iVar0 = (iVar0 + iParam0);
	func_134(3653, iVar0, -1, 1);
	if (func_241(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_258(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_239(7666, iVar2, -1, 1);
	}
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14826;
			break;
		
		case 2:
			return Global_262145.f_14827;
			break;
		
		case 3:
			return Global_262145.f_14828;
			break;
		
		case 4:
			return Global_262145.f_14829;
			break;
		
		case 5:
			return Global_262145.f_14830;
			break;
		
		case 6:
			return Global_262145.f_14831;
			break;
		
		case 7:
			return Global_262145.f_14832;
			break;
		
		case 8:
			return Global_262145.f_14833;
			break;
		
		case 9:
			return Global_262145.f_14834;
			break;
		
		case 10:
			return Global_262145.f_14835;
			break;
		
		case 11:
			return Global_262145.f_14836;
			break;
		
		case 12:
			return Global_262145.f_14837;
			break;
		
		case 13:
			return Global_262145.f_14838;
			break;
		
		case 14:
			return Global_262145.f_14839;
			break;
		
		case 15:
			return Global_262145.f_14840;
			break;
		
		case 16:
			return Global_262145.f_14841;
			break;
		
		case 17:
			return Global_262145.f_14842;
			break;
		
		case 18:
			return Global_262145.f_14843;
			break;
		
		case 19:
			return Global_262145.f_14844;
			break;
		
		case 20:
			return Global_262145.f_14845;
			break;
		
		case 21:
			return Global_262145.f_14846;
			break;
		
		case 22:
			return Global_262145.f_14847;
			break;
		
		case 23:
			return Global_262145.f_14848;
			break;
		
		case 24:
			return Global_262145.f_14849;
			break;
	}
	return 0;
}

var func_259(int iParam0)
{
	if (iParam0 >= Global_262145.f_13880)
	{
		return Global_262145.f_13901;
	}
	else if (iParam0 >= Global_262145.f_13879)
	{
		return Global_262145.f_13900;
	}
	else if (iParam0 >= Global_262145.f_13878)
	{
		return Global_262145.f_13899;
	}
	else if (iParam0 >= Global_262145.f_13877)
	{
		return Global_262145.f_13898;
	}
	else if (iParam0 >= Global_262145.f_13876)
	{
		return Global_262145.f_13897;
	}
	else if (iParam0 >= Global_262145.f_13875)
	{
		return Global_262145.f_13896;
	}
	else if (iParam0 >= Global_262145.f_13874)
	{
		return Global_262145.f_13895;
	}
	else if (iParam0 >= Global_262145.f_13873)
	{
		return Global_262145.f_13894;
	}
	else if (iParam0 >= Global_262145.f_13872)
	{
		return Global_262145.f_13893;
	}
	else if (iParam0 >= Global_262145.f_13871)
	{
		return Global_262145.f_13892;
	}
	else if (iParam0 >= Global_262145.f_13870)
	{
		return Global_262145.f_13891;
	}
	else if (iParam0 >= Global_262145.f_13869)
	{
		return Global_262145.f_13890;
	}
	else if (iParam0 >= Global_262145.f_13868)
	{
		return Global_262145.f_13889;
	}
	else if (iParam0 >= Global_262145.f_13867)
	{
		return Global_262145.f_13888;
	}
	else if (iParam0 >= Global_262145.f_13866)
	{
		return Global_262145.f_13887;
	}
	else if (iParam0 >= Global_262145.f_13865)
	{
		return Global_262145.f_13886;
	}
	else if (iParam0 >= Global_262145.f_13864)
	{
		return Global_262145.f_13885;
	}
	else if (iParam0 >= Global_262145.f_13863)
	{
		return Global_262145.f_13884;
	}
	else if (iParam0 >= Global_262145.f_13862)
	{
		return Global_262145.f_13883;
	}
	else if (iParam0 >= Global_262145.f_13861)
	{
		return Global_262145.f_13882;
	}
	return Global_262145.f_13881;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_267(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_266(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_265(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_261(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_261(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_265(unk_0x895FB9FE885E36ED(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (func_264(iParam0))
	{
		iVar0 = func_262(func_263(iParam0));
		return func_48(iVar0, -1, 0);
	}
	return 0;
}

int func_262(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3631;
	}
	else if (iParam0 == 1)
	{
		return 3632;
	}
	else if (iParam0 == 2)
	{
		return 3633;
	}
	else if (iParam0 == 3)
	{
		return 3634;
	}
	else if (iParam0 == 4)
	{
		return 3635;
	}
	return 3631;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (func_264(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_264(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14080;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14078;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14082;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14076;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14074;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14084;
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_264(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1774539[iVar0] == iParam1 && Global_1774546[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (func_264(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_268()
{
	int iVar0;
	
	iVar0 = Global_2528808[func_50()];
	iVar0++;
	Global_2528808[func_50()] = iVar0;
	func_134(3650, iVar0, -1, 1);
}

void func_269()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2528805[func_50()];
	iVar1 = Global_2528814[func_50()];
	iVar0++;
	iVar1++;
	Global_2528805[func_50()] = iVar0;
	Global_2528814[func_50()] = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_102 = iVar1;
	func_134(3648, iVar0, -1, 1);
	func_134(3649, iVar1, -1, 1);
}

void func_270()
{
	if (func_143())
	{
		Global_2445989.f_3066.f_134 = 0;
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
	}
}

void func_271()
{
	if (func_143())
	{
		if (Global_2445989.f_3066.f_134 < 10)
		{
			Global_2445989.f_3066.f_134++;
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

void func_272()
{
	if (func_143())
	{
		if (Global_2445989.f_3066.f_134 > 0)
		{
			Global_2445989.f_3066.f_134 = (Global_2445989.f_3066.f_134 - 1);
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

int func_273(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_27;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
			if (func_146(1) && !func_195(1))
			{
				if (func_275(func_148()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_275(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11158) * Global_262145.f_11163));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11113));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11135) * Global_262145.f_11139));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11148) * Global_262145.f_11152));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11170) * Global_262145.f_11175));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11332) * Global_262145.f_11333));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11338) * Global_262145.f_11339));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11336) * Global_262145.f_11337));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11330) * Global_262145.f_11331));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11334) * Global_262145.f_11335));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11328) * Global_262145.f_11329));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13603;
		
		case 172:
			return Global_262145.f_13619;
		
		case 173:
			return Global_262145.f_13562;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16836;
		
		case 180:
			return Global_262145.f_16712;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16720;
		
		case 185:
			return Global_262145.f_16729;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16924;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16941;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16789;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16972;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16850;
		
		case 205:
			return Global_262145.f_16959;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16817;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16954;
		
		case 211:
			return Global_262145.f_16918;
		
		case 214:
			return Global_262145.f_17458;
		
		case 215:
			return Global_262145.f_17468;
		
		case 216:
			return Global_262145.f_17478;
		
		case 217:
			return Global_262145.f_17487;
		
		case 218:
			return Global_262145.f_17496;
		
		case 219:
			return Global_262145.f_17512;
		
		default:
	}
	return 0;
}

int func_277(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11159) * Global_262145.f_11164));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11109) * Global_262145.f_11114));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11136) * Global_262145.f_11140));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11149) * Global_262145.f_11153));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11171) * Global_262145.f_11176));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11208) * Global_262145.f_11211));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11254) * Global_262145.f_11257));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11244) * Global_262145.f_11247));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11199) * Global_262145.f_11202));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11219) * Global_262145.f_11224));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11184) * Global_262145.f_11187));
		
		case 170:
			return Global_262145.f_13545;
		
		case 171:
			return Global_262145.f_13604;
		
		case 172:
			return Global_262145.f_13620;
		
		case 173:
			return Global_262145.f_13563;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15640;
		
		case 168:
			return Global_262145.f_15639;
		
		case 179:
			return Global_262145.f_16837;
		
		case 180:
			return Global_262145.f_16713;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16721;
		
		case 185:
			return Global_262145.f_16730;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16925;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16942;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16790;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16973;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16851;
		
		case 205:
			return Global_262145.f_16960;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16818;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16955;
		
		case 211:
			return Global_262145.f_16919;
		
		case 214:
			return Global_262145.f_17459;
		
		case 215:
			return Global_262145.f_17469;
		
		case 216:
			return Global_262145.f_17479;
		
		case 217:
			return Global_262145.f_17488;
		
		case 218:
			return Global_262145.f_17497;
		
		case 219:
			return Global_262145.f_17513;
		
		case 178:
			if (func_143())
			{
				return Global_262145.f_17336;
			}
			else if (bParam1)
			{
				return Global_262145.f_17337;
			}
			break;
		
		case 188:
			if (func_143())
			{
				return Global_262145.f_17420;
			}
			else if (bParam1)
			{
				return Global_262145.f_17421;
			}
			break;
		
		case 225:
			if (func_143() && !func_144())
			{
				if (func_275(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19494;
				}
				else
				{
					return Global_262145.f_19495;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_19496;
			}
			break;
		
		case 226:
			if (func_143() && !func_144())
			{
				if (func_275(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19474;
				}
				else
				{
					return Global_262145.f_19475;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_19476;
			}
			break;
		
		case 227:
			if (func_143() && !func_144())
			{
				if (func_275(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19486;
				}
				else
				{
					return Global_262145.f_19487;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_19488;
			}
			break;
	}
	return 0;
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_279(iParam0))
	{
		if (!func_143())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11052;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_128(iParam0))
	{
		*uParam1 = (Global_262145.f_16690 / 100f);
		*uParam2 = (Global_262145.f_16690 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11051;
		*uParam2 = Global_262145.f_11050;
	}
	if (func_128(iParam0))
	{
		if (func_119(unk_0x0FFED3E94261A832(), 1))
		{
			*uParam1 = (Global_262145.f_16689 / 100f);
			*uParam2 = (Global_262145.f_16689 / 100f);
		}
	}
	else if (func_119(unk_0x0FFED3E94261A832(), 1))
	{
		*uParam1 = Global_262145.f_11049;
		*uParam2 = Global_262145.f_11048;
	}
	iVar0 = func_210();
	if (iVar0 != func_346())
	{
		if (func_208(unk_0x0FFED3E94261A832(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

var func_280(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_160(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_281()
{
	Global_2456235 = 1;
}

void func_282(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2497344.f_271 = iParam0;
		if (iParam1 > Global_262145.f_5500)
		{
			iParam1 = Global_262145.f_5500;
		}
		Global_2497344.f_272 = iParam1;
		Global_2497344.f_273 = 0;
	}
}

bool func_283()
{
	return Global_262145.f_10065;
}

void func_284(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_293())
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
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_285(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
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
		case -293060240:
			func_285(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_293())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_50()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_292(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_291(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_286(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_286(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_287(iParam0);
	}
}

void func_287(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_293())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_290(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_288(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_288(var uParam0)
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
	func_289(&(uParam0->f_8.f_3));
	func_289(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_289(var uParam0)
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

int func_290(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_291(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_292(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_293())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_293()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

void func_294(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (Local_121.f_197 == 2)
	{
		func_305(bParam0, iParam1, iParam2, iParam3);
		return;
	}
	if (iLocal_2771 == -1)
	{
		iLocal_2771 = func_304(&uLocal_630, 0, 0);
	}
	if (!bParam0)
	{
		if (Local_121.f_197 != 2)
		{
			func_46(1);
		}
	}
	if (iLocal_2771 < (Global_262145.f_9948 * 60000))
	{
		fVar0 = Global_262145.f_9952;
	}
	else if (iLocal_2771 < (Global_262145.f_9949 * 60000))
	{
		fVar0 = Global_262145.f_9953;
	}
	else if (iLocal_2771 < (Global_262145.f_9950 * 60000))
	{
		fVar0 = Global_262145.f_9954;
	}
	else if (iLocal_2771 < (Global_262145.f_9951 * 60000))
	{
		fVar0 = Global_262145.f_9955;
	}
	else
	{
		fVar0 = Global_262145.f_9956;
	}
	fVar1 = unk_0xBBDA792448DB5A89(func_303());
	fVar2 = unk_0xBBDA792448DB5A89(func_302());
	fVar3 = unk_0xBBDA792448DB5A89(func_301());
	fVar4 = unk_0xBBDA792448DB5A89(func_300());
	fVar5 = func_299();
	iVar6 = func_298();
	if (iLocal_2772 > iVar6)
	{
		iLocal_2772 = iVar6;
	}
	uVar7 = func_297(1);
	uVar8 = func_295(1);
	*iParam1 = uVar7;
	*iParam2 = uVar8;
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 14))
		{
			iVar9 = unk_0xF2DB717A73826179((((fVar1 * fVar0) + (((fVar3 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2772) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_10103));
			*iParam2 = (*iParam2 + unk_0xF2DB717A73826179((((fVar2 * fVar0) + ((fVar4 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2772) * fVar5))) * Global_262145.f_10104)));
			if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_5 == -1)
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_5 = *iParam1;
			}
			func_198(&iVar9, 1);
			*iParam1 = (*iParam1 + iVar9);
		}
	}
}

int func_295(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_9960;
	}
	func_296();
	iVar0 = (Global_262145.f_9960 * iLocal_2767);
	if (Local_121.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

void func_296()
{
	float fVar0;
	
	if (iLocal_2767 != 0)
	{
		return;
	}
	if (func_8(&uLocal_2765))
	{
		iLocal_2767 = func_304(&uLocal_2765, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_2767);
	fVar0 = (fVar0 / 60000f);
	iLocal_2767 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_2767 >= 1)
	{
	}
	else
	{
		iLocal_2767 = 1;
	}
	if (iLocal_2767 > Global_262145.f_10094)
	{
		iLocal_2767 = Global_262145.f_10094;
	}
}

int func_297(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_9959;
	}
	func_296();
	iVar0 = (Global_262145.f_9959 * iLocal_2767);
	if (Local_121.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

var func_298()
{
	if (Local_121.f_197 == 2)
	{
		return Global_262145.f_16901;
	}
	return Global_262145.f_9958;
}

var func_299()
{
	if (Local_121.f_197 == 2)
	{
		return Global_262145.f_16900;
	}
	return Global_262145.f_9957;
}

var func_300()
{
	if (Local_121.f_197 == 2)
	{
		return Global_262145.f_16894;
	}
	return Global_262145.f_9947;
}

var func_301()
{
	if (Local_121.f_197 == 2)
	{
		return Global_262145.f_16892;
	}
	return Global_262145.f_9946;
}

var func_302()
{
	if (Local_121.f_197 == 2)
	{
		return Global_262145.f_16893;
	}
	return Global_262145.f_9945;
}

var func_303()
{
	if (Local_121.f_197 == 2)
	{
		return Global_262145.f_16891;
	}
	return Global_262145.f_9944;
}

int func_304(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0);
		}
		else
		{
			return unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), *uParam0);
		}
	}
	return unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0);
}

void func_305(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (iLocal_2771 == -1)
	{
		iLocal_2771 = func_304(&uLocal_630, 0, 0);
	}
	if (iLocal_2771 < (Global_262145.f_9948 * 60000))
	{
		fVar0 = Global_262145.f_16895;
	}
	else if (iLocal_2771 < (Global_262145.f_9949 * 60000))
	{
		fVar0 = Global_262145.f_16896;
	}
	else if (iLocal_2771 < (Global_262145.f_9950 * 60000))
	{
		fVar0 = Global_262145.f_16897;
	}
	else if (iLocal_2771 < (Global_262145.f_9951 * 60000))
	{
		fVar0 = Global_262145.f_16898;
	}
	else
	{
		fVar0 = Global_262145.f_16899;
	}
	fVar1 = unk_0xBBDA792448DB5A89(func_303());
	fVar2 = unk_0xBBDA792448DB5A89(func_302());
	fVar3 = unk_0xBBDA792448DB5A89(func_301());
	fVar4 = unk_0xBBDA792448DB5A89(func_300());
	fVar5 = func_299();
	iVar6 = func_298();
	if (iLocal_2772 > iVar6)
	{
		iLocal_2772 = iVar6;
	}
	uVar7 = func_297(1);
	uVar8 = func_295(1);
	*uParam1 = uVar7;
	*uParam2 = uVar8;
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 14))
		{
			iVar9 = unk_0xF2DB717A73826179((((fVar1 * fVar0) + (((fVar3 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2772) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_10103));
			*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((((fVar2 * fVar0) + ((fVar4 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2772) * fVar5))) * Global_262145.f_10104)));
			if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_5 == -1)
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_5 = *uParam1;
			}
			func_198(&iVar9, 1);
			*uParam1 = (*uParam1 + iVar9);
		}
	}
}

int func_306(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_103(uParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_69 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_70 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_68(&Var0);
}

int func_307()
{
	if (Local_121.f_197 != 2)
	{
		return 66;
	}
	return 88;
}

struct<4> func_308()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAW2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAW2P", 16);
			break;
	}
	return Var0;
}

void func_309(bool bParam0)
{
	if (Local_121.f_197 == 2)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 31))
		{
			Global_1773254.f_2 = Local_121.f_179;
			Global_1773254.f_3 = Local_121.f_180;
			if (bParam0)
			{
				func_936(1, 1, 0, !unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0), -1, -1, -1, -1);
			}
			else
			{
				func_936(0, 2, 0, !unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0), -1, -1, -1, -1);
			}
		}
	}
}

int func_310(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_103(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam6;
	return func_68(&Var0);
}

int func_311()
{
	if (Local_121.f_197 != 2)
	{
		return 68;
	}
	return 88;
}

struct<4> func_312()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWP", 16);
			break;
	}
	return Var0;
}

int func_313(int iParam0, int iParam1, int iParam2)
{
	return 0;
	if (!func_143())
	{
		return 0;
	}
	if (iParam1 != func_346())
	{
		if (func_208(iParam1, iParam0, 1))
		{
			return 1;
		}
	}
	if (iParam2 != func_346())
	{
		if (func_208(iParam2, iParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_121();
	*iParam1 = func_346();
	if (iVar0 != func_346())
	{
		*iParam2 = 1;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_10, iVar2))
			{
				if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar2)))
				{
					iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar2));
					if (!func_324(iVar1, 0))
					{
						if (iVar1 != iVar0)
						{
							if (unk_0x76BCE6C7B20502DA(iVar1))
							{
								iVar4 = unk_0x675E1E93DBDAF30B(iVar1);
								iVar3 = iVar4;
								if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar3 /*8*/].f_1, 1))
								{
									*iParam2++;
									if (*iParam1 == func_346())
									{
										*iParam0 = iVar0;
										*iParam1 = iVar1;
									}
								}
							}
						}
					}
				}
			}
			iVar2 = (iVar2 + 1);
		}
	}
	if (*iParam2 > 1)
	{
		return 1;
	}
	return 0;
}

int func_315()
{
	if ((func_38(unk_0x0FFED3E94261A832(), 21) || func_38(unk_0x0FFED3E94261A832(), 22)) || func_322())
	{
		return 1;
	}
	if (func_317())
	{
		func_316(22);
		return 1;
	}
	return 0;
}

void func_316(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

int func_317()
{
	if (func_321(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_42() && !func_320()) || func_319(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_318(27);
		}
	}
	return 0;
}

void func_318(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

bool func_319(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

bool func_320()
{
	return Global_1312416.f_1;
}

int func_321(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_322()
{
	return func_229(289, -1);
}

bool func_323(int iParam0)
{
	if (func_44(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

bool func_324(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_325(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_325(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_50();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

struct<4> func_326()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_OVR", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BK_RUN_OVER", 16);
			break;
	}
	return Var0;
}

void func_327()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1);
	if (Local_121.f_197 == 2)
	{
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 7))
		{
			if (func_331() - func_304(&(Local_121.f_24), 0, 0)) >= func_330()
			{
				func_6(&(Local_121.f_24));
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 7);
			}
		}
	}
	iVar1 = func_331();
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 7))
	{
		iVar1 = func_330();
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
	{
		if (bVar0)
		{
			if (func_8(&(Local_121.f_30)))
			{
				func_6(&(Local_121.f_30));
			}
			if (!func_8(&(Local_121.f_24)))
			{
				func_345(&(Local_121.f_24), 0, 0);
				if (Local_121.f_34 > 0)
				{
					uVar2 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), (-1 * Local_121.f_34));
					func_329(&(Local_121.f_24), uVar2);
					Local_121.f_34 = 0;
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
			{
				if ((iVar1 - func_304(&(Local_121.f_24), 0, 0)) <= 0)
				{
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 2);
					}
					else
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
			{
				if (func_8(&(Local_121.f_24)))
				{
					Local_121.f_34 = func_304(&(Local_121.f_24), 0, 0);
				}
			}
			else
			{
				Local_121.f_34 = 0;
			}
			if (func_8(&(Local_121.f_24)))
			{
				func_6(&(Local_121.f_24));
			}
			if (!func_8(&(Local_121.f_30)))
			{
				func_345(&(Local_121.f_30), 0, 0);
			}
			else if (func_7(&(Local_121.f_30), func_328(), 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 12);
			}
		}
	}
}

int func_328()
{
	if (Local_121.f_197 != 2)
	{
		return Global_262145.f_9797;
	}
	return Global_262145.f_16888 * 1000;
}

void func_329(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

int func_330()
{
	return Global_262145.f_9812;
}

int func_331()
{
	if (Local_121.f_197 != 2)
	{
		return Global_262145.f_9796;
	}
	return 300000;
}

void func_332()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	bVar6 = false;
	bVar7 = false;
	if (Local_121.f_0 != 4)
	{
		iLocal_580 = 0;
		while (iLocal_580 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_580)))
			{
				iVar0++;
				iVar11 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_580));
				if (!func_324(iVar11, 0))
				{
					if (Local_121.f_197 == 2)
					{
						if (!bVar10)
						{
							if (func_341() != func_346())
							{
								if (func_341() == iVar11)
								{
									bVar10 = true;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
					}
					if (unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 0))
					{
						iVar1++;
					}
					if (!func_44(iVar11) || (Local_121.f_197 == 2 && func_36(iVar11) > 0))
					{
						iVar4++;
					}
					else if (Local_121.f_21 == 0)
					{
						if (Local_121.f_197 == 2)
						{
							if (func_36(iVar11) == 0)
							{
							}
						}
					}
					if (Local_121.f_21 == 0)
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 0))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 13))
							{
								iVar5 = func_340();
								if (iVar5 < func_339())
								{
									unk_0xF6082E2ADA1C795B(&(Local_121.f_35), iLocal_580);
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_121.f_35, iLocal_580))
							{
								unk_0x507FE690B1271947(&(Local_121.f_35), iLocal_580);
							}
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 9))
					{
						if (Local_121.f_21 == 1)
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 0))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 4))
								{
									bVar7 = true;
								}
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 3))
						{
							bVar8 = true;
						}
					}
					if (unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 0))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 1))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4) || (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4) && !unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 5)))
							{
								if (func_338(bVar8))
								{
									iVar2++;
									if (!unk_0xAA4F14DA15DB0B51(Local_121.f_9, iLocal_580))
									{
										unk_0xF6082E2ADA1C795B(&(Local_121.f_9), iLocal_580);
										unk_0xF6082E2ADA1C795B(&(Local_121.f_10), iVar11);
										if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3) && !unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
										{
										}
									}
									if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
									{
										iVar9 = 1;
									}
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
							{
								if (unk_0xAA4F14DA15DB0B51(Local_121.f_9, iLocal_580))
								{
									unk_0x507FE690B1271947(&(Local_121.f_9), iLocal_580);
									unk_0x507FE690B1271947(&(Local_121.f_10), iVar11);
								}
								if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
								{
									if (unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 5))
									{
										iVar3++;
									}
								}
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(Local_121.f_9, iLocal_580))
						{
							unk_0x507FE690B1271947(&(Local_121.f_9), iLocal_580);
							unk_0x507FE690B1271947(&(Local_121.f_10), iVar11);
						}
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_9, iLocal_580))
						{
							unk_0x507FE690B1271947(&(Local_121.f_9), iLocal_580);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_10, iVar11))
						{
							unk_0x507FE690B1271947(&(Local_121.f_10), iVar11);
						}
					}
					if (func_1083(iVar11, 1, 1))
					{
					}
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_9, iLocal_580))
					{
						unk_0x507FE690B1271947(&(Local_121.f_9), iLocal_580);
					}
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_35, iLocal_580))
					{
						unk_0x507FE690B1271947(&(Local_121.f_35), iLocal_580);
					}
				}
				if (Local_121.f_21 <= 2)
				{
					bVar6 = true;
				}
				else if (!unk_0xAA4F14DA15DB0B51(Local_320[iLocal_580 /*8*/].f_1, 2))
				{
					if (!func_324(iVar11, 0))
					{
					}
					bVar6 = true;
				}
			}
			else
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_9, iLocal_580))
				{
					unk_0x507FE690B1271947(&(Local_121.f_9), iLocal_580);
				}
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_35, iLocal_580))
				{
					unk_0x507FE690B1271947(&(Local_121.f_35), iLocal_580);
				}
			}
			iLocal_580++;
		}
		if (Local_121.f_197 == 2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 17))
			{
				if (!bVar10)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 17);
				}
			}
		}
		if (iVar1 > Local_121.f_183)
		{
			Local_121.f_183 = iVar1;
		}
		if (iVar0 > Local_121.f_182)
		{
			Local_121.f_182 = iVar0;
		}
		else
		{
			Local_121.f_181 = (Local_121.f_182 - iVar0);
		}
		if (Local_121.f_165 != (iVar2 + iVar3))
		{
			Local_121.f_165 = (iVar2 + iVar3);
			func_334();
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 13))
		{
			if (Local_121.f_165 >= func_339() || (iVar4 >= 2 && Local_121.f_165 >= iVar4))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 13);
			}
		}
		if (Local_121.f_21 == 0)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
			{
				if (iVar1 >= 1)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 0);
				}
			}
			else if (iVar1 == 0)
			{
				unk_0x507FE690B1271947(&(Local_121.f_1), 0);
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
			{
				if (iVar1 >= 2)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 1);
				}
			}
			else if (iVar1 < 2)
			{
				unk_0x507FE690B1271947(&(Local_121.f_1), 1);
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
			{
				if (iVar1 >= func_333())
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 6);
				}
			}
			if (Local_121.f_197 == 2)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
				{
					if (func_8(&(Local_121.f_32)))
					{
						if (func_7(&(Local_121.f_32), 10000, 0))
						{
							if (iVar4 < 2)
							{
								unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 18);
							}
						}
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 9))
		{
			if (Local_121.f_21 == 1)
			{
				if (!bVar7)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 9);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
		{
			if (bVar8)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 4);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
				{
					if (!func_8(&(Local_121.f_28)))
					{
						func_345(&(Local_121.f_28), 0, 0);
					}
					else if (func_7(&(Local_121.f_28), 60000, 0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 10);
					}
				}
				if (iVar2 == 0 && iVar3 == 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 10);
					}
				}
			}
		}
		if (Local_121.f_21 == 2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
			{
				if (iVar2 == 1 || iVar9)
				{
					Local_121.f_169 = 1900;
					Local_121.f_168 = 18000;
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 3);
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 11);
					}
					if (iVar1 == 1)
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 14))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 14);
						}
					}
				}
				else if (iVar2 == 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4) || (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4) && iVar3 == 0))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 3);
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
							{
								unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 11);
							}
						}
					}
				}
				else if (iVar4 == 0)
				{
					Local_121.f_21 = 5;
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
				{
				}
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
		{
			if (!func_8(&(Local_121.f_174)))
			{
				func_345(&(Local_121.f_174), 0, 0);
			}
			if (func_7(&(Local_121.f_174), 100, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
				{
					func_334();
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 11);
				}
			}
		}
		if (Local_121.f_21 > 2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
			{
				if (!bVar6)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 5);
				}
			}
		}
	}
}

int func_333()
{
	if (Global_262145.f_10066 < Global_262145.f_10135)
	{
		return Global_262145.f_10066;
	}
	return Global_262145.f_10135;
}

void func_334()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			uVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
			func_337(iVar0);
			bVar2 = unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 0);
			bVar3 = true;
			if (!bVar2)
			{
				bVar3 = false;
			}
			if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 1))
			{
				bVar3 = false;
			}
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 5))
				{
					bVar3 = false;
				}
			}
			func_336(iVar0, uVar1, bVar3, bVar2);
		}
		else if (Local_121.f_36[iVar0 /*4*/].f_2 != -1)
		{
			func_337(iVar0);
		}
		iVar0++;
	}
	func_335();
}

void func_335()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_121.f_36[iVar1 /*4*/].f_2 > Local_121.f_36[(iVar1 - 1) /*4*/].f_2)
				{
					uVar2 = Local_121.f_36[iVar1 /*4*/].f_2;
					uVar3 = Local_121.f_36[iVar1 /*4*/];
					uVar4 = Local_121.f_36[iVar1 /*4*/].f_1;
					uVar5 = Local_121.f_36[iVar1 /*4*/].f_3;
					Local_121.f_36[iVar1 /*4*/].f_2 = Local_121.f_36[(iVar1 - 1) /*4*/].f_2;
					Local_121.f_36[iVar1 /*4*/] = Local_121.f_36[(iVar1 - 1) /*4*/];
					Local_121.f_36[iVar1 /*4*/].f_1 = Local_121.f_36[(iVar1 - 1) /*4*/].f_1;
					Local_121.f_36[iVar1 /*4*/].f_3 = Local_121.f_36[(iVar1 - 1) /*4*/].f_3;
					Local_121.f_36[(iVar1 - 1) /*4*/].f_2 = uVar2;
					Local_121.f_36[(iVar1 - 1) /*4*/].f_3 = uVar5;
					Local_121.f_36[(iVar1 - 1) /*4*/] = uVar3;
					Local_121.f_36[(iVar1 - 1) /*4*/].f_1 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_336(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar0 = 1;
	}
	if (bParam3)
	{
		iVar1 = 1;
	}
	Local_121.f_36[iParam0 /*4*/] = iParam0;
	Local_121.f_36[iParam0 /*4*/].f_1 = uParam1;
	Local_121.f_36[iParam0 /*4*/].f_2 = iVar0;
	Local_121.f_36[iParam0 /*4*/].f_3 = iVar1;
}

void func_337(int iParam0)
{
	Local_121.f_36[iParam0 /*4*/] = -1;
	Local_121.f_36[iParam0 /*4*/].f_1 = -1;
	Local_121.f_36[iParam0 /*4*/].f_2 = -1;
	Local_121.f_36[iParam0 /*4*/].f_3 = -1;
}

int func_338(bool bParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
			{
				return 1;
			}
			if (bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_339()
{
	if (Local_121.f_197 != 2)
	{
		return Global_262145.f_10066;
	}
	return Global_262145.f_16890;
}

int func_340()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_35, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_341()
{
	if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(Local_121.f_198)))
	{
		return unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_121.f_198));
	}
	return func_346();
}

void func_342(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1187610982;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	iVar3 = func_343(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iVar3);
	}
}

var func_343(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_1083(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_324(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_344(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

void func_345(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

int func_346()
{
	return -1;
}

void func_347()
{
	if (Local_121.f_197 != -1)
	{
		return;
	}
	switch (Local_121.f_167)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_121.f_197 = 0;
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Local_121.f_197 = 2;
			func_348();
			break;
	}
}

void func_348()
{
	if (unk_0x62E688B72E3C57B0())
	{
		if (Local_121.f_198 == -1)
		{
			Local_121.f_198 = unk_0x88641E5BC172153A();
		}
	}
}

int func_349(var uParam0)
{
	if (func_359())
	{
		*uParam0 = unk_0x895FB9FE885E36ED(6, 11);
		if (!func_353(*uParam0, 1128792064))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		*uParam0 = unk_0x895FB9FE885E36ED(0, 5);
	}
	if (!func_352(*uParam0))
	{
		if (!func_350(136, *uParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
			return 0;
		
		default:
	}
	iVar1 = func_351(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6995)
		{
			if (Global_2479594.f_148[iVar0 /*2*/] == iVar1 && Global_2479594.f_148[iVar0 /*2*/].f_1 == func_344(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		default:
	}
	return -1;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9799;
			break;
		
		case 1:
			return Global_262145.f_9800;
			break;
		
		case 2:
			return Global_262145.f_9801;
			break;
		
		case 3:
			return Global_262145.f_9802;
			break;
		
		case 4:
			return Global_262145.f_9803;
			break;
		
		case 6:
			return Global_262145.f_16903;
			break;
		
		case 7:
			return Global_262145.f_16904;
			break;
		
		case 8:
			return Global_262145.f_16905;
			break;
		
		case 9:
			return Global_262145.f_16906;
			break;
		
		case 10:
			return Global_262145.f_16907;
			break;
	}
	return 0;
}

bool func_353(int iParam0, float fParam1)
{
	return func_354(func_358(iParam0), fParam1, 1, 1, 0, 0, 0, 0);
}

int func_354(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_1083(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_357(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam9) && bParam6) && func_355(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_185(iVar1), Param0, 1) < fParam3)
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

int func_355(int iParam0)
{
	if (func_182(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_62(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_356(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_107(iParam0);
	if (!iVar0 == func_346())
	{
		if (iVar0 == func_107(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_358(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 6:
			Var0 = { 770.8729f, -232.9857f, 65.1145f };
			break;
		
		case 7:
			Var0 = { 157.237f, -1519.715f, 28.1416f };
			break;
		
		case 8:
			Var0 = { -899.8332f, 5567.762f, 2.7747f };
			break;
		
		case 9:
			Var0 = { -1894.427f, 2010.27f, 140.5029f };
			break;
		
		case 10:
			Var0 = { 1036.689f, -619.3324f, 57.1851f };
			break;
	}
	return Var0;
}

bool func_359()
{
	return func_360(unk_0x0FFED3E94261A832()) == 200;
}

int func_360(int iParam0)
{
	if (func_361(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_361(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_362()
{
	if (Global_2497344.f_4828.f_22)
	{
		Global_2497344.f_4828.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_363(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_364(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_345(uParam0, 0, 0);
		}
	}
}

void func_365()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_324(unk_0x0FFED3E94261A832(), 0))
	{
		switch (iLocal_2785)
		{
			case 0:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 0))
				{
					if (func_380("PEN_BIKE"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 0);
					}
				}
				else if (!func_380("PEN_BIKE"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 0);
				}
				iLocal_2785++;
				break;
			
			case 1:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 1))
				{
					if (func_380("PEN_VEHG"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 1);
					}
				}
				else if (!func_380("PEN_VEHG"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 1);
				}
				iLocal_2785++;
				break;
			
			case 2:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 2))
				{
					if (func_380("PEN_PBIKE"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 2);
					}
				}
				else if (!func_380("PEN_PBIKE"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 2);
				}
				iLocal_2785++;
				break;
			
			case 3:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 3))
				{
					if (func_380("PEN_PVEHG"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 3);
					}
				}
				else if (!func_380("PEN_PVEHG"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 3);
				}
				iLocal_2785++;
				break;
			
			case 4:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 4))
				{
					if (func_380("PEN_AREA"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 4);
					}
				}
				else if (!func_380("PEN_AREA"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 4);
				}
				iLocal_2785++;
				break;
			
			case 5:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 5))
				{
					if (func_380("PEN_BAREA"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 5);
					}
				}
				else if (!func_380("PEN_BAREA"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 5);
				}
				iLocal_2785++;
				break;
			
			case 6:
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 6))
				{
					if (func_380("PEN_EXITV"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 6);
					}
				}
				else if (!func_380("PEN_EXITV"))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 6);
				}
				iLocal_2785++;
				break;
			
			case 7:
				Var0 = { func_379() };
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4, 7))
				{
					if (func_380(&Var0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 7);
					}
				}
				else if (!func_380(&Var0))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_4), 7);
				}
				iLocal_2785++;
				break;
		}
		if (iLocal_2785 > 7)
		{
			iLocal_2785 = 0;
		}
	}
	else
	{
		if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_4 != 0)
		{
			Local_320[unk_0x88641E5BC172153A() /*8*/].f_4 = 0;
		}
		iVar4 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
		if (unk_0x885F483F34E47503(iVar4))
		{
			if (unk_0x76BCE6C7B20502DA(iVar4))
			{
				iVar5 = unk_0x675E1E93DBDAF30B(iVar4);
				iVar6 = iVar5;
				switch (iLocal_2785)
				{
					case 0:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 0))
						{
							if (func_380("PEN_BIKE"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_BIKE"))
						{
							func_366("PEN_BIKE", 0);
						}
						iLocal_2785++;
						break;
					
					case 1:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 1))
						{
							if (func_380("PEN_VEHG"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_VEHG"))
						{
							func_366("PEN_VEHG", 0);
						}
						iLocal_2785++;
						break;
					
					case 2:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 2))
						{
							if (func_380("PEN_PBIKE"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_PBIKE"))
						{
							func_366("PEN_PBIKE", 0);
						}
						iLocal_2785++;
						break;
					
					case 3:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 3))
						{
							if (func_380("PEN_PVEHG"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_PVEHG"))
						{
							func_366("PEN_PVEHG", 0);
						}
						iLocal_2785++;
						break;
					
					case 4:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 4))
						{
							if (func_380("PEN_AREA"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_AREA"))
						{
							func_366("PEN_AREA", 0);
						}
						iLocal_2785++;
						break;
					
					case 5:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 5))
						{
							if (func_380("PEN_BAREA"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_BAREA"))
						{
							func_366("PEN_BAREA", 0);
						}
						iLocal_2785++;
						break;
					
					case 6:
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 6))
						{
							if (func_380("PEN_EXITV"))
							{
								func_378();
							}
						}
						else if (!func_380("PEN_EXITV"))
						{
							func_366("PEN_EXITV", 0);
						}
						iLocal_2785++;
						break;
					
					case 7:
						Var0 = { func_379() };
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar6 /*8*/].f_4, 7))
						{
							if (func_380(&Var0))
							{
								func_378();
							}
						}
						else if (!func_380(&Var0))
						{
							func_366(&Var0, 0);
						}
						iLocal_2785++;
						break;
				}
				if (iLocal_2785 > 7)
				{
					iLocal_2785 = 0;
				}
			}
		}
	}
}

void func_366(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_376(sParam0))
	{
		return;
	}
	func_370();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_369();
	func_368(bParam1);
	func_367();
}

void func_367()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_369()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

void func_370()
{
	func_372();
	func_371(0);
}

void func_371(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_372()
{
	if (!func_375())
	{
	}
	if (func_374())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_373();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_373()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_374()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_375()
{
	if (!func_374())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_373();
	return unk_0x0D3452E263E036CA();
}

bool func_376(char* sParam0)
{
	if (!func_374())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_377(sParam0);
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_377(char* sParam0)
{
	if (!func_374())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_378()
{
	if (!func_374())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_370();
}

struct<4> func_379()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_STARTO", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_STARTO", 16);
			break;
	}
	return Var0;
}

int func_380(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x8A3FBC299F47ED6B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	return func_376(sParam0);
}

void func_381()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
		{
			bVar5 = true;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					iVar1 = unk_0x8F8E5C33266ED978(iVar0, -1, 0);
					if (unk_0x2137828D03306CAF(iVar1))
					{
						if (iVar1 != unk_0x2A5EB8B0FE590B91())
						{
							if (unk_0xDB61DD81432BD145(iVar1))
							{
								iVar2 = unk_0xB0BB7458627D389F(iVar1);
								if (unk_0x76BCE6C7B20502DA(iVar2))
								{
									iVar3 = unk_0x675E1E93DBDAF30B(iVar2);
									iVar4 = iVar3;
									if (unk_0xAA4F14DA15DB0B51(Local_320[iVar4 /*8*/].f_1, 0))
									{
										bVar5 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_384(unk_0x0FFED3E94261A832()))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		func_383();
		func_382();
	}
}

void func_382()
{
	Global_2497344.f_1710.f_56 = 1;
}

void func_383()
{
	Global_2497344.f_1710.f_54 = 1;
}

bool func_384(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

void func_385()
{
	float fVar0;
	
	if (!func_8(&uLocal_2757) || (func_8(&uLocal_2757) && func_7(&uLocal_2757, 5000, 0)))
	{
		fVar0 = func_388(unk_0x2A5EB8B0FE590B91(), Local_600, 1);
		if (!func_387(unk_0x0FFED3E94261A832()))
		{
			if (fVar0 <= 700f)
			{
				func_386(1);
			}
		}
		else if (fVar0 > 700f)
		{
			func_386(0);
		}
		func_6(&uLocal_2757);
		func_345(&uLocal_2757, 0, 0);
	}
}

void func_386(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 5);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 5);
	}
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 5);
	}
	return 0;
}

float func_388(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

void func_389()
{
	if (Local_121.f_197 != 2)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 11))
			{
				if (Local_121.f_21 == 2)
				{
					if (unk_0x988197573BDAD49A("PENNED_IN_START_MUSIC"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_578, 11);
					}
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(iLocal_578, 15))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 12))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 16))
					{
						if (unk_0x988197573BDAD49A("PENNED_IN_70_PERCENT"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_578, 16);
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 12))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_578, 11))
				{
					if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 > 2)
					{
						if (unk_0x988197573BDAD49A("PENNED_IN_STOP_MUSIC"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_578, 12);
						}
					}
				}
			}
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 11))
		{
			if (Local_121.f_21 == 2)
			{
				if (unk_0x988197573BDAD49A("CAGED_IN_START_MUSIC"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_578, 11);
					unk_0x6040865446FA4030(0);
				}
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(iLocal_578, 15))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 12))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 16))
				{
					if (unk_0x988197573BDAD49A("CAGED_IN_70_PERCENT"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_578, 16);
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 12))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_578, 11))
			{
				if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 > 2)
				{
					if (unk_0x988197573BDAD49A("CAGED_IN_STOP_MUSIC"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_578, 12);
						unk_0x6040865446FA4030(1);
					}
				}
			}
		}
	}
}

void func_390()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_324(unk_0x0FFED3E94261A832(), 0))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_578, 22))
		{
			unk_0x507FE690B1271947(&iLocal_578, 22);
		}
		return;
	}
	if (func_575())
	{
		func_454(0);
	}
	iVar0 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 22))
	{
		if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_1 != 0)
		{
			Local_320[unk_0x88641E5BC172153A() /*8*/].f_1 = 0;
		}
		unk_0xF6082E2ADA1C795B(&iLocal_578, 22);
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 13))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_578, 13);
		func_378();
	}
	if (iLocal_2784 == 2)
	{
		func_445();
	}
	if (unk_0x885F483F34E47503(iVar0))
	{
		if (unk_0x76BCE6C7B20502DA(iVar0))
		{
			iVar1 = unk_0x675E1E93DBDAF30B(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_320[iVar2 /*8*/].f_7;
			if (iVar3 > 0)
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_598))
				{
					unk_0x789C84F1B8496AD0(&uLocal_598);
				}
			}
			switch (iVar3)
			{
				case 0:
					func_438(1, 0);
					func_428();
					func_411();
					break;
				
				case 1:
					func_411();
					func_438(!unk_0xAA4F14DA15DB0B51(iLocal_577, 9), 0);
					break;
				
				case 2:
					func_27(1);
					func_405();
					func_438(0, 0);
					func_396();
					if (unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 5))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 1))
						{
							if (!func_8(&uLocal_610))
							{
								func_345(&uLocal_610, 0, 0);
							}
							if (func_8(&uLocal_610))
							{
								if ((func_395() - func_304(&uLocal_610, 0, 0)) >= 0)
								{
									func_392((func_395() - func_304(&uLocal_610, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else if (func_8(&uLocal_610))
					{
						func_6(&uLocal_610);
					}
					func_35();
					break;
				
				case 3:
					if (unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 6))
					{
						func_438(0, 1);
					}
					if (unk_0xBDD3EABACAB97D09(uLocal_597))
					{
						unk_0xEB5D36079067EBA5(uLocal_597, 55);
					}
					func_35();
					break;
				
				default:
					if (unk_0xAA4F14DA15DB0B51(Local_320[iVar2 /*8*/].f_1, 2))
					{
						func_391();
					}
					break;
				}
			}
	}
	if (Local_121.f_21 > 4)
	{
		func_996();
	}
}

void func_391()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_597))
	{
		unk_0x789C84F1B8496AD0(&uLocal_597);
	}
}

void func_392(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_394(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_393(7, iVar0);
		Global_1353013.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = iParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = iParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_393(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_394(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

int func_395()
{
	if (Local_121.f_197 != 2)
	{
		return Global_262145.f_9813;
	}
	return 15000;
}

void func_396()
{
	float fVar0;
	float fVar1;
	
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		return;
	}
	if (iLocal_2772 == -1)
	{
		if (Local_121.f_165 > 0)
		{
			iLocal_2772 = Local_121.f_165;
		}
	}
	else if (Local_121.f_165 > iLocal_2772)
	{
		iLocal_2772 = Local_121.f_165;
	}
	if (func_402(0))
	{
		if (!func_893(1))
		{
			func_399(Local_121.f_165, "PEN_REMP", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
		}
	}
	fVar0 = func_398();
	if (fVar0 >= fLocal_1504)
	{
		fLocal_1504 = fVar0;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 15))
	{
		if (fLocal_1504 >= fLocal_1505)
		{
			unk_0xF6082E2ADA1C795B(&iLocal_578, 15);
		}
	}
	fVar1 = (fLocal_1503 - fLocal_1504);
	if (func_402(0))
	{
		if (!func_893(1))
		{
			func_397(unk_0xF2DB717A73826179(fVar1), unk_0xF2DB717A73826179(fLocal_1503), "PEN_DST", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
		}
	}
}

void func_397(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_394(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_393(0, iVar0);
		Global_1353013.f_1093[iVar0] = iParam0;
		Global_1353013.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1353013.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_1093.f_194[iVar0] = iParam3;
		Global_1353013.f_1093.f_183[iVar0] = iParam4;
		Global_1353013.f_1093.f_216[iVar0] = iParam5;
		Global_1353013.f_1093.f_227[iVar0 /*3*/] = iParam6;
		Global_1353013.f_1093.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1353013.f_1093.f_258[iVar0] = iParam8;
		Global_1353013.f_1093.f_269[iVar0] = iParam9;
		Global_1353013.f_1093.f_312[iVar0] = iParam10;
		Global_1353013.f_1093.f_323[iVar0] = iParam11;
		Global_1353013.f_1093.f_334[iVar0] = iParam12;
		Global_1353013.f_1093.f_345[iVar0] = iParam13;
		Global_1353013.f_1088 = 1;
		Global_1353013.f_1093.f_356[iVar0] = iParam14;
		Global_1353013.f_1093.f_367[iVar0] = iParam15;
		Global_1353013.f_1093.f_378[iVar0] = iParam16;
		Global_1353013.f_1093.f_389[iVar0] = iParam17;
		Global_1353013.f_1093.f_400[iVar0] = iParam18;
		Global_1353013.f_1093.f_411[iVar0] = iParam19;
		Global_1353013.f_1093.f_422[iVar0] = iParam20;
		Global_1353013.f_1093.f_433[iVar0] = iParam21;
		Global_1353013.f_1093.f_444[iVar0] = iParam22;
		Global_1353013.f_1093.f_455[iVar0] = iParam23;
	}
}

float func_398()
{
	float fVar0;
	int iVar1;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(Local_600, Local_632[iLocal_599 /*3*/], 1);
	if (iLocal_599 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_599 - 1))
		{
			fVar0 = (fVar0 + fLocal_1284[iVar1]);
			iVar1++;
		}
	}
	return fVar0;
}

void func_399(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_394(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_393(6, iVar0);
		Global_1353013.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_3770.f_183[iVar0] = iParam3;
		Global_1353013.f_3770.f_172[iVar0] = iParam2;
		Global_1353013.f_3770.f_260[iVar0] = iParam4;
		Global_1353013.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1353013.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1353013.f_3770.f_443[iVar0] = iParam7;
		Global_1353013.f_3770.f_454[iVar0] = iParam8;
		Global_1353013.f_3770.f_497[iVar0] = iParam9;
		Global_1353013.f_3770.f_508[iVar0] = iParam10;
		Global_1353013.f_3770.f_205[iVar0] = iParam11;
		Global_1353013.f_3770.f_216[iVar0] = iParam12;
		Global_1353013.f_3770.f_227[iVar0] = iParam13;
		Global_1353013.f_3770.f_238[iVar0] = iParam14;
		Global_1353013.f_3770.f_249[iVar0] = iParam15;
		Global_1353013.f_3770.f_519[iVar0] = iParam16;
		Global_1353013.f_3770.f_530[iVar0] = iParam17;
		Global_1353013.f_3770.f_541[iVar0] = iParam18;
		Global_1353013.f_3770.f_552[iVar0] = iParam19;
		Global_1353013.f_3770.f_563[iVar0] = iParam20;
		Global_1353013.f_3770.f_574[iVar0] = iParam21;
		Global_1353013.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_401())
		{
			Global_1353013.f_1088 = 1;
		}
		if (unk_0x5018862FF5D9F844())
		{
			iVar2 = 0;
			unk_0xEB51D9D737FD6BC1(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1353013.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1353013.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1353013.f_1088 = 1;
			}
			if (func_400())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_400()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x5018862FF5D9F844())
	{
		unk_0xEB51D9D737FD6BC1(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_401()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

int func_402(bool bParam0)
{
	if (func_404())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1083(unk_0x0FFED3E94261A832(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_403()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_404()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 12);
}

void func_405()
{
	if (iLocal_2773)
	{
		func_391();
		if (func_410(100f, 10f, 5f))
		{
			iLocal_2773 = 1;
		}
	}
	func_406();
	if (unk_0xBDD3EABACAB97D09(uLocal_597))
	{
		unk_0x0B584E556B01101F(uLocal_597, fLocal_607);
	}
}

void func_406()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_409();
	fVar1 = (fVar0 / fLocal_1503);
	fVar2 = ((((func_928() - func_408()) * fVar1) + func_408()) * func_407());
	if (fVar2 < func_408())
	{
		fVar2 = func_408();
	}
	if (fVar2 > func_928())
	{
		fVar2 = func_928();
	}
	fLocal_608 = fLocal_607;
	if (fVar2 > fLocal_608)
	{
		fVar2 = fLocal_608;
	}
	fLocal_607 = fVar2;
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
	{
		if (fLocal_607 != func_408())
		{
			fLocal_607 = func_408();
		}
	}
	if (!func_8(&uLocal_2761) || (func_8(&uLocal_2761) && func_7(&uLocal_2761, 5000, 0)))
	{
		func_6(&uLocal_2761);
		func_345(&uLocal_2761, 0, 0);
		Local_320[unk_0x88641E5BC172153A() /*8*/].f_6 = fLocal_607;
	}
}

float func_407()
{
	return Global_262145.f_9810;
}

float func_408()
{
	if (Local_121.f_197 != 2)
	{
		return Global_262145.f_9805;
	}
	return Global_262145.f_16909;
}

float func_409()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(Local_600, Local_632[iLocal_599 + 1 /*3*/], 1);
	iVar1 = iLocal_599 + 1;
	if (iVar1 < (iLocal_1502 - 1))
	{
		iVar2 = iVar1;
		while (iVar2 <= (iLocal_1502 - 1))
		{
			fVar0 = (fVar0 + fLocal_1284[iVar2]);
			iVar2++;
		}
	}
	return fVar0;
}

int func_410(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = unk_0x3FEF699D13BCC798((fParam0 - fParam1));
	if (fLocal_607 > fParam1)
	{
		fLocal_607 = (fLocal_607 - IntToFloat(unk_0xF34EE736CF047844(((fVar0 / fParam2) * unk_0xBCA469D44FBFAC80()))));
		if (fLocal_607 < fParam1)
		{
			fLocal_607 = fParam1;
		}
	}
	else
	{
		fLocal_607 = fParam1;
		return 1;
	}
	return 0;
}

void func_411()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 7))
	{
		func_427(&uLocal_2739);
		unk_0xF6082E2ADA1C795B(&iLocal_577, 7);
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 4))
	{
		if (func_426(&uLocal_2739))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
			{
				if (func_412(&uLocal_2739, 1, 0, 1))
				{
					unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 4);
				}
			}
		}
	}
}

int func_412(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		if (func_893(1))
		{
			return 1;
		}
	}
	if (func_426(uParam0))
	{
		if (!func_425(&(uParam0->f_3)))
		{
			func_423(&(uParam0->f_3));
		}
		unk_0xFF4C3B41848CE5CD(4);
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			unk_0x792C5262A7BE057A(*uParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = unk_0xF34EE736CF047844(func_420(&(uParam0->f_3)));
		iVar1 = unk_0xEF76CA199A0C9035((iVar0 - 3));
		bVar2 = false;
		if (func_419(uParam0->f_1, 4))
		{
			if (uParam0->f_2 >= 5)
			{
				if (!func_419(uParam0->f_1, 16))
				{
					unk_0x08BE237DBCD9CBD9(-1, "GO", "HUD_MINI_GAME_SOUNDSET", 0);
					func_417(&(uParam0->f_1), 16);
					unk_0x98E9C7B4D1FBF49A();
				}
			}
			else
			{
				uParam0->f_2++;
			}
		}
		if (!func_419(uParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_419(uParam0->f_1, 1))
			{
				func_417(&(uParam0->f_1), 1);
				unk_0x08BE237DBCD9CBD9(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_416(uParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_419(uParam0->f_1, 2))
			{
				func_417(&(uParam0->f_1), 2);
				unk_0x08BE237DBCD9CBD9(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_416(uParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_419(uParam0->f_1, 4))
			{
				func_417(&(uParam0->f_1), 4);
				unk_0x08BE237DBCD9CBD9(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_416(uParam0, iVar1);
				if (!func_324(unk_0x0FFED3E94261A832(), 0))
				{
					func_366("PEN_AREA", 0);
				}
			}
			else if (iVar1 == 0 && !func_419(uParam0->f_1, 8))
			{
				func_417(&(uParam0->f_1), 8);
				unk_0xF9C830438D0097FD(18, &uVar3, &uVar4, &uVar5, &uVar6);
				unk_0xD1FCC52F87A98873(*uParam0, "SET_MESSAGE");
				func_415("CNTDWN_GO");
				unk_0x4CECF13AF144A8F6(uVar3);
				unk_0x4CECF13AF144A8F6(uVar4);
				unk_0x4CECF13AF144A8F6(uVar5);
				unk_0xD426F7366505EADF(1);
				unk_0x8123397DC676E794();
				func_391();
				func_891(func_892(), 0);
				unk_0xF6082E2ADA1C795B(&iLocal_577, 9);
				if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
				{
					unk_0x18A0B296F4932A7B("pennedIn", 0, 1);
					unk_0xF6082E2ADA1C795B(&iLocal_577, 6);
					if (unk_0x8BEECCAAE312A5BA("MP_Player_Outside_Bubble_Scene"))
					{
						unk_0x40F160C3038ECAF5("MP_Player_Outside_Bubble_Scene");
					}
					unk_0xB0D390F8FEB78903("MP_Player_Inside_Bubble_Scene");
				}
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_414()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				uParam0->f_1 = 0;
				func_413(&(uParam0->f_3));
			}
			unk_0x40F160C3038ECAF5("RACES_RADIO_MUTE_scene");
			unk_0xB0D390F8FEB78903("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0x244673FE98A43CA3())
			{
				if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar7)))
				{
					iVar8 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar7));
					if (iVar8 != unk_0x0FFED3E94261A832())
					{
						iVar9 = unk_0x1E199569E0295838(iVar8);
						if (unk_0xC4A39E4229BD3ABE(iVar9, 0))
						{
							iVar10 = unk_0x0C20E539D876C5B3(iVar9, 0);
							unk_0x35A5A8139089E07B(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_413(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_414()
{
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (unk_0x83F6A1E4E653AD75(0, 18) || unk_0x83F6A1E4E653AD75(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_415(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_416(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xF9C830438D0097FD(12, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xD1FCC52F87A98873(*uParam0, "SET_MESSAGE");
	unk_0xADBDBA2DF8443753("NUMBER");
	unk_0xEA97619D8B89D387(unk_0xEF76CA199A0C9035(iParam1));
	unk_0xF7D95CCE1364B5CE();
	unk_0x4CECF13AF144A8F6(uVar0);
	unk_0x4CECF13AF144A8F6(uVar1);
	unk_0x4CECF13AF144A8F6(uVar2);
	unk_0xD426F7366505EADF(1);
	unk_0x8123397DC676E794();
}

void func_417(var uParam0, int iParam1)
{
	func_418(uParam0, iParam1);
}

void func_418(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_419(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_420(var uParam0)
{
	if (func_425(uParam0))
	{
		if (func_422(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_421(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_421(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x591AF4C50B46E014())
	{
		iVar2 = unk_0x11ABC381A58DD5AB();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4()) / 1000f);
}

bool func_422(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 2);
}

void func_423(var uParam0)
{
	func_424(uParam0, 0f);
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_421(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - fParam1);
	unk_0xF6082E2ADA1C795B(uParam0, 1);
	unk_0x507FE690B1271947(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_425(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 1);
}

int func_426(var uParam0)
{
	if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_427(var uParam0)
{
	*uParam0 = unk_0x4D6D22510A2467D9("COUNTDOWN");
}

void func_428()
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	bVar0 = unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1);
	if (!func_437())
	{
		return;
	}
	iVar1 = func_331();
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 7))
	{
		iVar1 = func_330();
	}
	if (Local_121.f_197 == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar6 = func_339();
		if (iVar6 > iLocal_2768)
		{
			iVar6 = iLocal_2768;
		}
		if (iVar7 != Local_121.f_165)
		{
			iVar7 = Local_121.f_165;
		}
		if (!func_324(unk_0x0FFED3E94261A832(), 0))
		{
			Var2 = { func_379() };
			if (Local_121.f_197 != 2)
			{
				if (!func_380(&Var2))
				{
					func_366(&Var2, 0);
				}
			}
			else if (!func_380(&Var2))
			{
				func_434(&Var2, "CAG_BLIP", iLocal_2770, 0);
			}
		}
		if (Local_121.f_197 != 2)
		{
			if ((iVar1 - func_304(&(Local_121.f_24), 0, 0)) >= 0)
			{
				func_433((iVar1 - func_304(&(Local_121.f_24), 0, 0)));
				func_429(iVar7, iVar6, (iVar1 - func_304(&(Local_121.f_24), 0, 0)), 1, func_432(-1));
			}
			else
			{
				func_429(iVar7, iVar6, 0, 1, func_432(-1));
			}
		}
		else if ((iVar1 - func_304(&(Local_121.f_24), 0, 0)) >= 0)
		{
			func_433((iVar1 - func_304(&(Local_121.f_24), 0, 0)));
			func_429(iVar7, iVar6, (iVar1 - func_304(&(Local_121.f_24), 0, 0)), 1, "SYG_GOTOTIMER");
		}
		else
		{
			func_429(iVar7, iVar6, 0, 1, "SYG_GOTOTIMER");
		}
	}
	else if (!func_324(unk_0x0FFED3E94261A832(), 0))
	{
		Var2 = { func_379() };
		if (func_380(&Var2))
		{
			func_378();
		}
	}
}

void func_429(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_402(0) == 0)
	{
		return;
	}
	func_431();
	func_430(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_190(sParam4))
	{
		sVar0 = sParam4;
	}
	func_392(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_430(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_394(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_393(4, iVar0);
		Global_1353013.f_3098[iVar0] = iParam0;
		Global_1353013.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1353013.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_3098.f_183[iVar0] = iParam3;
		Global_1353013.f_3098.f_216[iVar0] = iParam5;
		Global_1353013.f_3098.f_194[iVar0] = iParam4;
		Global_1353013.f_3098.f_227[iVar0] = iParam6;
		Global_1353013.f_3098.f_270[iVar0] = iParam7;
		Global_1353013.f_3098.f_281[iVar0] = iParam8;
		Global_1353013.f_3098.f_292[iVar0] = iParam9;
		Global_1353013.f_3098.f_303[iVar0] = iParam10;
		Global_1353013.f_3098.f_314[iVar0] = iParam11;
		Global_1353013.f_3098.f_325[iVar0] = iParam13;
		Global_1353013.f_3098.f_336[iVar0] = iParam14;
		Global_1353013.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x5018862FF5D9F844()) && iParam12)
		{
			Global_1353013.f_1088 = 1;
		}
	}
}

void func_431()
{
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	Global_2456239 = 1;
}

char* func_432(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFABF5258A318B1DC();
	return "HUD_STARTING";
	if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_433(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xBCA469D44FBFAC80())
	{
		Global_2497344.f_4666 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 1))
		{
			unk_0x08BE237DBCD9CBD9(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2497344.f_4666 = 0;
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 1);
		}
	}
}

void func_434(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_435(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 19;
		Global_1312575.f_56 = iParam2;
	}
}

int func_435(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (func_436(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_370();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_369();
	func_368(bParam2);
	func_367();
	return 1;
}

bool func_436(char* sParam0, char* sParam1)
{
	if (!func_374())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_437()
{
	if (Local_121.f_197 != 2)
	{
		return 1;
	}
	else if (func_832())
	{
		return 1;
	}
	else if (func_36(unk_0x0FFED3E94261A832()) == 3)
	{
		return 1;
	}
	if (func_380("CAG_STARTO"))
	{
		func_378();
	}
	return 0;
}

void func_438(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	
	if (Local_121.f_197 == 2)
	{
		if (func_36(unk_0x0FFED3E94261A832()) < 2)
		{
			return;
		}
	}
	if (!bParam0)
	{
		if (!bParam1 || func_444())
		{
			unk_0xF9C830438D0097FD(12, &uVar0, &uVar1, &uVar2, &uVar3);
		}
		else
		{
			unk_0xF9C830438D0097FD(3, &uVar0, &uVar1, &uVar2, &uVar3);
		}
	}
	else if (Local_121.f_197 == 2)
	{
		unk_0xF9C830438D0097FD(iLocal_2770, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xF9C830438D0097FD(29, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	fVar4 = 0.5f;
	Var5 = { Local_600 };
	fVar8 = (fLocal_607 * 2f);
	switch (Local_121.f_167)
	{
		case 0:
			fVar9 = 36.9f;
			fVar10 = 7.875f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 1:
			fVar9 = 26.25f;
			fVar10 = 4.375f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 2:
			fVar9 = 49.875f;
			fVar10 = 12f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 3:
			fVar9 = 9.5f;
			fVar10 = 0f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 4:
			fVar9 = 38.75f;
			fVar10 = 10.25f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 6:
			fVar9 = 5.25f;
			fVar10 = 0f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 7:
			fVar9 = 5.25f;
			fVar10 = 0.875f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 8:
			fVar9 = 15.375f;
			fVar10 = 4.75f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
		
		case 9:
			fVar9 = 13.625f;
			fVar10 = 4.5f;
			fVar8 = 38.875f;
			Var5 = { func_442() };
			break;
		
		case 10:
			fVar9 = 7.75f;
			fVar10 = 2f;
			fVar8 = func_443();
			Var5 = { func_442() };
			break;
	}
	Var5.f_2 = (Var5.f_2 - fVar10);
	if (func_444())
	{
		fVar4 = (fVar4 / 2f);
	}
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		if (func_893(1))
		{
			bVar11 = true;
		}
	}
	if (!func_441())
	{
		if (func_440(unk_0x0FFED3E94261A832()) == 0)
		{
			if (!func_439())
			{
				if (!bParam0)
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
					{
						if (!bVar11)
						{
							unk_0x902E0E631D34F3D6(Local_600, fLocal_607, uVar0, uVar1, uVar2, fVar4);
						}
					}
				}
				else
				{
					unk_0x47C0431D5D179992(1, Var5, 0f, 0f, 0f, 0f, 0f, 0f, fVar8, fVar8, fVar9, uVar0, uVar1, uVar2, uVar3, 0, 0, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

bool func_439()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

int func_440(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189;
}

bool func_441()
{
	return (unk_0xAA4F14DA15DB0B51(iLocal_578, 5) || unk_0xAA4F14DA15DB0B51(iLocal_578, 8));
}

Vector3 func_442()
{
	struct<3> Var0;
	
	switch (Local_121.f_167)
	{
		case 0:
			Var0 = { Local_600 };
			Var0.f_0 = 1457.639f;
			Var0.f_1 = -2371.45f;
			break;
		
		case 1:
			Var0 = { Local_600 };
			Var0.f_0 = -1903.733f;
			Var0.f_1 = 2042.75f;
			break;
		
		case 2:
			Var0 = { Local_600 };
			Var0.f_0 = 2237.85f;
			Var0.f_1 = 1469f;
			break;
		
		case 3:
			Var0 = { Local_600 };
			Var0.f_0 = -1210.197f;
			Var0.f_1 = -2437.739f;
			break;
		
		case 4:
			Var0 = { Local_600 };
			Var0.f_0 = 106.968f;
			Var0.f_1 = 7003.605f;
			break;
		
		case 6:
			Var0 = { Local_600 };
			break;
		
		case 7:
			Var0 = { Local_600 };
			break;
		
		case 8:
			Var0 = { Local_600 };
			Var0.f_0 = -2653.049f;
			Var0.f_1 = 1505.637f;
			break;
		
		case 9:
			Var0 = { Local_600 };
			Var0.f_0 = -1464.237f;
			Var0.f_1 = 2789.826f;
			break;
		
		case 10:
			Var0 = { Local_600 };
			Var0.f_0 = 999.892f;
			Var0.f_1 = -677.42f;
			break;
	}
	return Var0;
}

float func_443()
{
	float fVar0;
	
	switch (Local_121.f_167)
	{
		case 0:
			fVar0 = 155.375f;
			break;
		
		case 1:
			fVar0 = 94.75f;
			break;
		
		case 2:
			fVar0 = 198.75f;
			break;
		
		case 3:
			fVar0 = 250f;
			break;
		
		case 4:
			fVar0 = 196.375f;
			break;
		
		case 7:
			fVar0 = 36f;
			break;
		
		case 6:
		case 8:
		case 9:
		case 10:
			fVar0 = 42.5f;
			break;
	}
	return fVar0;
}

int func_444()
{
	if (unk_0x88641E5BC172153A() != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 11);
	}
	return 0;
}

void func_445()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 19))
	{
		func_453();
		unk_0x0738182217C3B962(0);
		if (func_452("SCTV_HELI_HLP"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		func_447(&(Local_121.f_184), 1, unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5), 0);
		if (!func_324(unk_0x0FFED3E94261A832(), 0))
		{
			unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 11);
			unk_0x507FE690B1271947(&(Global_2422215[unk_0x87B7000A6C80CCEF() /*387*/].f_204), 2);
			func_446(unk_0x0FFED3E94261A832(), 0);
		}
		unk_0xF6082E2ADA1C795B(&iLocal_578, 19);
	}
}

void func_446(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30BD96CB13063EC9(unk_0x96CB654BBCDD4063(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x01307FD0B54F50D3(unk_0x96CB654BBCDD4063(iParam0), "MPBitset");
	}
	unk_0x507FE690B1271947(&iVar0, iParam1);
	unk_0xE7B1DEED5908F19B(unk_0x96CB654BBCDD4063(iParam0), "MPBitset", iVar0);
}

void func_447(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	
	if (bParam1)
	{
		unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
	}
	if (bParam2)
	{
		if (unk_0x3756406E4D76B25E(uParam0->f_2) && unk_0x434105A1C45F1BED(uParam0->f_2))
		{
			uVar0 = unk_0x7BAE3A9057619E1F(uParam0->f_2);
			if (bParam3)
			{
				func_451(&(uParam0->f_2));
			}
			else
			{
				unk_0xC76AD47E2B4CE25C(&uVar0);
			}
		}
		if (unk_0x3756406E4D76B25E(uParam0->f_3) && unk_0x434105A1C45F1BED(uParam0->f_3))
		{
			uVar1 = unk_0x7BAE3A9057619E1F(uParam0->f_3);
			if (bParam3)
			{
				func_451(&(uParam0->f_3));
			}
			else
			{
				unk_0xC76AD47E2B4CE25C(&uVar1);
			}
		}
	}
	func_448(1, -1);
	func_11(0);
}

void func_448(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_450(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0x58553FD5FAFD566B(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x11CA0D8AE0C37B1C(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0xEF7A86AB02E46379(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x2FCDEAA8BCC22D85("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x2FCDEAA8BCC22D85("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_449(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_449(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			unk_0x73F5E7B6BB964839(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_450(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x591AF4C50B46E014() && unk_0xBCE21F0E265FBBAE())
		{
			iParam2 = unk_0xA6F0FC98755348DF();
		}
	}
	StringCopy(&cVar0, unk_0xFABF5258A318B1DC(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xCAEDBF30E3EA14FC(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_451(var uParam0)
{
	var uVar0;
	
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (!unk_0x434105A1C45F1BED(*uParam0))
		{
		}
	}
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
}

bool func_452(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_453()
{
	Global_2434604.f_933.f_10 = 0;
}

void func_454(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		Global_1343425[iVar0 /*49*/] = -1;
		Global_1343425[iVar0 /*49*/].f_1 = func_346();
		Global_1343425[iVar0 /*49*/].f_9 = -1;
		Global_1343425[iVar0 /*49*/].f_31 = -1;
		StringCopy(&(Local_1507.f_104), "FM_AE_SORT_12", 16);
		if (Local_121.f_36[iVar0 /*4*/] > -1)
		{
			if (Local_121.f_36[iVar0 /*4*/].f_3 > 0)
			{
				Global_1343425[iVar0 /*49*/] = Local_121.f_36[iVar0 /*4*/];
				Global_1343425[iVar0 /*49*/].f_1 = Local_121.f_36[iVar0 /*4*/].f_1;
				Global_1343425[iVar0 /*49*/].f_9 = -1;
				Global_1343425[iVar0 /*49*/].f_48 = Local_121.f_36[iVar0 /*4*/].f_2;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!func_574())
		{
			if (Local_1507.f_103 != 136)
			{
				Local_1507.f_103 = 136;
			}
			else
			{
				func_572(1, 136);
			}
		}
	}
	iVar1 = 25;
	if (Local_121.f_197 == 2)
	{
		iVar1 = 26;
	}
	func_455(&Global_1343425, &uLocal_1506, iVar1, &Local_1507, &uLocal_1618, -1, 0);
}

void func_455(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_571(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_570() || iParam2 == 26)
	{
		if (func_524(uParam1, iParam2, uParam3, Global_1574108, 0, func_575()))
		{
			func_523(1);
			if ((!func_522() && !func_521()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_520())
				{
					func_517();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_516(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_515(uParam1);
							if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
							{
								unk_0x507FE690B1271947(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 26)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1083(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_324(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_514(iVar35))
										{
											iVar44 = iVar35;
											if (func_120(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_513(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_511(unk_0x0FFED3E94261A832(), 0) && func_510(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_508())
							{
								if (func_1083(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_346();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_507(iVar35) && func_503(iVar35, iParam2)) && func_1083(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_498(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_492(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
								}
								Global_1574108++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_508())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_487(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_486(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_485(iVar35, 0);
								if (bVar34)
								{
									if (func_119(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_484(iParam5))
								{
									func_483(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_483(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xF6082E2ADA1C795B(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7C214DA899F05536(iVar52);
							if (func_1083(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_346();
							}
							if (func_507(iVar35))
							{
								if (func_1083(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_498(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_492(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_485(iVar35, 1);
									if (bVar34)
									{
										if (func_119(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_468(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_465(uParam3, uParam1);
						}
						func_6(&(uParam3->f_21));
						func_464();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_463(uParam3, uParam1);
							func_462(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_463(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_458(uParam3))
						{
							Global_1574291 = 1;
						}
						func_456(uParam3);
						if (Global_1574291 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574291 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA8AF99BD8D81CFB7(*uParam1))
					{
						unk_0xFF4C3B41848CE5CD(7);
						unk_0xED8A6509C85CF7A1(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFF4C3B41848CE5CD(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_464();
			func_516(0);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 7);
			}
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 10))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xE98F6B2EFC674042();
}

void func_456(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_345(&(uParam0->f_21), 0, 0);
	}
	else if (func_7(&(uParam0->f_21), 250, 0))
	{
		func_6(&(uParam0->f_21));
		func_457(0);
	}
}

void func_457(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574291 != 2)
		{
			Global_1574291 = 2;
		}
	}
	else
	{
		switch (Global_1574291)
		{
			case 0:
				Global_1574291 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_458(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_346() && func_1083(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_461(uParam0, uParam0->f_37);
		if (func_460(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_459(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_459(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_459(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_459(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_459(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_459(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_459(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_460(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_461(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_462(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xD1FCC52F87A98873(*uParam0, "COLLAPSE"))
	{
		unk_0xD426F7366505EADF(iParam1);
		unk_0x8123397DC676E794();
	}
	if (iParam2 == 1)
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x8123397DC676E794();
		}
	}
}

void func_463(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_464()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_465(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_346())
		{
			if (func_1083(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_467(uParam0->f_38[iVar0 /*2*/], 0);
					func_466(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_466(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "SET_ICON"))
		{
			unk_0x4CECF13AF144A8F6(iParam1);
			unk_0x4CECF13AF144A8F6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4CECF13AF144A8F6(iParam3);
			}
			unk_0x8123397DC676E794();
		}
	}
}

int func_467(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_468(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_482() && iParam4 < func_481())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xD1FCC52F87A98873(*uParam2, sVar1))
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_480("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_480(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_480("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_480("");
			if (uParam3->f_108 == 6)
			{
				func_480("");
			}
			else
			{
				func_480(&sParam5);
			}
			func_472(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_471(uParam3))
			{
				func_415("DPAD_FRIEND");
			}
			else if (func_470(uParam3))
			{
				func_415("DPAD_FRIEND");
			}
			else if (func_469(uParam3))
			{
				func_415("DPAD_CREW");
			}
			else
			{
				func_415("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_469(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_470(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

int func_471(var uParam0)
{
	if (func_470(uParam0) && func_469(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_472(var uParam0, int iParam1)
{
	if (func_479(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_476(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_473())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_473()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_474() || func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_474()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_95();
	}
	return func_475(Global_1638223.f_93532);
}

int func_475(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_476(int iParam0)
{
	if ((func_1083(iParam0, 0, 1) && func_477()) && func_112(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_477()
{
	if (func_45(unk_0x0FFED3E94261A832()) || func_478())
	{
		return 0;
	}
	return 1;
}

int func_478()
{
	switch (func_510(unk_0x0FFED3E94261A832()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_479(int iParam0)
{
	if (func_473())
	{
		if (func_1083(iParam0, 0, 1))
		{
			return func_120(iParam0);
		}
	}
	if ((func_1083(iParam0, 0, 1) && func_477()) && func_114(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_480(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_481()
{
	int iVar0;
	
	if (Global_1574110)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_482()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_483(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_482() && iParam3 < func_481())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA8AF99BD8D81CFB7(*uParam1))
		{
			if (unk_0xD1FCC52F87A98873(*uParam1, sVar1))
			{
				unk_0x4CECF13AF144A8F6(iParam3);
				if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_480("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_415(sParam16);
				}
				else
				{
					func_480(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_480("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4CECF13AF144A8F6(iVar0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(-1);
				}
				if (func_508())
				{
					func_480("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 5 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x58478145CAF8429C(sParam16)) && !unk_0x58478145CAF8429C(sParam17))
				{
					unk_0xADBDBA2DF8443753("FM_AE_TWO_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xD5DA3EC5EEC78358(sParam17);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 8 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
				{
					unk_0xADBDBA2DF8443753("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x31A1C6406BB66808(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xEA97619D8B89D387(iParam10);
					}
					unk_0xD5DA3EC5EEC78358(&(uParam2->f_104));
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xADBDBA2DF8443753("FM_AE_CASH");
					unk_0xF671F12DFCDA7746(iParam10, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xADBDBA2DF8443753("FM_AE_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						unk_0xADBDBA2DF8443753("FM_NG_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
					{
						func_415(&(uParam2->f_104));
					}
					else
					{
						func_480("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xADBDBA2DF8443753("STRING");
					unk_0x365072D1FE8AEADE(iParam14, 6);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (fParam13 != -1f)
				{
					unk_0xADBDBA2DF8443753("NUMBER");
					unk_0x31A1C6406BB66808(fParam13, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (iParam10 != -1)
				{
					unk_0x4CECF13AF144A8F6(iParam10);
				}
				else
				{
					func_480("");
				}
				if (uParam2->f_108 == 6)
				{
					func_480("");
				}
				else
				{
					func_480(&sParam4);
				}
				func_472(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_480("");
					func_480("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_471(uParam2))
				{
					func_415("DPAD_FRIEND");
				}
				else if (func_470(uParam2))
				{
					func_415("DPAD_FRIEND");
				}
				else if (func_469(uParam2))
				{
					func_415("DPAD_CREW");
				}
				else
				{
					func_415("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_484(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_485(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_45(iParam0)) && !func_43(iParam0))
	{
		iVar0 = func_79();
	}
	iVar1 = func_118(iParam0);
	if (!iVar1 == -1)
	{
		return func_116(iVar1);
	}
	return iVar0;
}

char* func_486(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_487(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_491(iParam3))
	{
		*fParam1 = (func_488(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_484(iParam3))
	{
		*fParam1 = (func_488(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_488(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_490(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_489(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_489(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_490(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_492(int iParam0)
{
	int iVar0;
	
	iVar0 = func_495(iParam0);
	if (iVar0 == -1)
	{
		func_493(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_493(int iParam0, bool bParam1)
{
	if (!func_1083(iParam0, 0, 1))
	{
		return;
	}
	if (func_495(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_494(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_494(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_495(int iParam0)
{
	int iVar0;
	
	if (!func_1083(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_496(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_496(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_497(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_497(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_346();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_498(int iParam0)
{
	struct<4> Var0;
	
	if (func_1083(iParam0, 0, 1))
	{
		Global_2484572 = { func_62(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_460(Global_2484572))
			{
				if (!unk_0xE1BD9BCF6A9D6793(&Global_2484572))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE061CABF3B012AFB(0))
		{
			return Var0;
		}
		if (func_502(&Global_2484572))
		{
			Global_2484502 = { func_500(iParam0) };
			func_499(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_499(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_500(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_501(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_501(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_502(var uParam0)
{
	if (unk_0x72BFFF26648DA18C())
	{
		if (unk_0x591BB87E287F24DC() && unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_503(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_44(iParam0) || func_506(iParam0)) || func_323(iParam0))
		{
			return 0;
		}
	}
	if (!func_505(iParam0))
	{
		return 0;
	}
	if ((!func_504(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_514(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_504(int iParam0)
{
	if (func_1083(iParam0, 0, 1))
	{
		if (func_1083(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_505(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_507(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (func_324(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_508()
{
	switch (func_510(unk_0x0FFED3E94261A832()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_509(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_43(unk_0x0FFED3E94261A832()))
	{
		switch (func_510(unk_0x0FFED3E94261A832()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_509(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

int func_510(int iParam0)
{
	if (func_321(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_511(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_512(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_512(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_131(iParam0, 0);
	return 0;
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1083(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_324(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_514(iVar1))
				{
					if (func_208(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_514(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

void func_515(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_516(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1351505.f_2 == 0)
		{
			Global_1351505.f_2 = 1;
		}
	}
	else if (Global_1351505.f_2 == 1)
	{
		Global_1351505.f_2 = 0;
	}
}

void func_517()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_519())
		{
			func_518();
		}
	}
}

void func_518()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_519()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

int func_520()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_519())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_519())
	{
		return 1;
	}
	return 0;
}

int func_521()
{
	if (func_519())
	{
		if (func_69(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_522()
{
	if (func_519())
	{
		if (func_80(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_523(int iParam0)
{
	if (Global_1351505.f_1 != Global_1351505)
	{
		Global_1351505.f_1 = Global_1351505;
	}
	if (Global_1351505 != iParam0)
	{
		Global_1351505 = iParam0;
	}
}

int func_524(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_569(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_568();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_567())
		{
			if (func_566() > 0 && Global_1574110)
			{
				unk_0x891A3238A7E50954();
				unk_0x11CA0D8AE0C37B1C(fVar7);
				unk_0x47BFFB0507046AE3(18);
				if (unk_0x6235C49EA2DBA22D())
				{
					unk_0x8816A672BCF9F877();
				}
				unk_0x47BFFB0507046AE3(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_552())
		{
			func_551(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_551(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_566() == 1)
		{
			func_550(bVar6, uParam0, 0);
			func_345(&(uParam2->f_19), 0, 0);
			func_551(uParam0, uParam2, 0);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_7(&(uParam2->f_19), 10000, 0) || (func_566() == 0 && !bParam5))
		{
			func_551(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_549();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0x891A3238A7E50954();
				}
				unk_0x47BFFB0507046AE3(18);
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_549();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_550(bVar6, uParam0, 0))
				{
					func_515(uParam0);
					sVar4 = func_547(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_545(iParam1) };
					if (bParam4)
					{
						func_542(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_536(uParam0, func_539(uParam2), func_537(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_530(uParam0, func_532(uParam2), func_531(), -1);
					}
					else if (func_473())
					{
						uParam2->f_34 = Global_1574109;
						func_542(uParam0, sVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_542(uParam0, sVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_525(iParam1);
						func_542(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xF6082E2ADA1C795B(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				Global_1574108 = uParam3;
				Global_1574107 = 1;
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574109)
					{
						unk_0x507FE690B1271947(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_525(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_529())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 24:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 11:
		case 12:
		case 13:
		case 16:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 17;
			break;
		
		case 15:
			iVar0 = 18;
			break;
		
		case 17:
			if (func_528(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_527(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_526(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_526(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_527(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_528(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_529()
{
	return Global_1638223.f_1 == 0;
}

void func_530(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_415(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_415("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_531()
{
	switch (func_510(unk_0x0FFED3E94261A832()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_532(var uParam0)
{
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_510(unk_0x0FFED3E94261A832()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_534())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_195(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_195(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_533(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_534()
{
	return (func_535() && func_145(func_210()));
}

bool func_535()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_536(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_415(sParam1);
		}
		else if (func_509(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_415("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_537(var uParam0)
{
	int iVar0;
	
	iVar0 = func_509(unk_0x0FFED3E94261A832());
	if (func_574())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_538())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_538()
{
	if (func_509(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

char* func_539(var uParam0)
{
	int iVar0;
	
	iVar0 = func_509(unk_0x0FFED3E94261A832());
	if (func_574())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_541() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_541() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_538())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_540() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_540()
{
	return Global_2497344.f_4753;
}

int func_541()
{
	if (func_509(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_542(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_480(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(sParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_415(sParam1);
		}
		if (func_567() && iParam6)
		{
			if (func_544())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xADBDBA2DF8443753("LBD_DPD_CNT");
			unk_0xEA97619D8B89D387(iVar0);
			unk_0xEA97619D8B89D387(iVar1);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_415(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_543(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_543(int iParam0)
{
	if (func_528(iParam0) || func_527(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_544()
{
	return Global_1574110;
}

struct<4> func_545(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_546(unk_0x0FFED3E94261A832()) || func_526(unk_0x0FFED3E94261A832()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 16:
		case 14:
		case 15:
		case 17:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1638223.f_30, 16);
			break;
	}
	if (func_473() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_546(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_547(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_473() || unk_0x58478145CAF8429C(sParam1)))
	{
		uVar0 = func_548();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x58478145CAF8429C(sParam1))
	{
		if (Global_1574309 == 1)
		{
			Global_1574309 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 24:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 17:
			case 13:
			case 16:
			case 14:
			case 12:
			case 11:
			case 15:
			case 18:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 20:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_548()
{
	if (unk_0xAB1E825659B8A5D6())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xD2843F73FBE0F430())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9149FCDCB650712D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x7A1C6EE905C175E6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_549()
{
	Global_36716 = 1;
}

bool func_550(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_matchmaking_card");
	}
	return unk_0xA8AF99BD8D81CFB7(*uParam1);
}

void func_551(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_464();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_6(&(uParam1->f_19));
		}
	}
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0x73F5E7B6BB964839(uParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(uParam1->f_33, 0))
	{
		unk_0x507FE690B1271947(&(uParam1->f_33), 0);
	}
	unk_0x11CA0D8AE0C37B1C(0f);
}

int func_552()
{
	if (func_565())
	{
		return 0;
	}
	if (func_564())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	if (!func_560())
	{
		return 0;
	}
	if (func_559(8, -1))
	{
		return 0;
	}
	if (func_566() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	else if (!func_556(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_555(1) || func_553(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_101(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (Global_1761104)
	{
		return 0;
	}
	if (func_197(0))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (Global_1345093)
	{
		return 0;
	}
	return 1;
}

int func_553(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_554(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x83F6A1E4E653AD75(0, 25) || unk_0x83F6A1E4E653AD75(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x83F6A1E4E653AD75(0, 19) || (!bParam0 && unk_0xC20E8B2E17B46871(0, 19)))
	{
		return 1;
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (((unk_0x83F6A1E4E653AD75(0, 166) || unk_0x83F6A1E4E653AD75(0, 167)) || unk_0x83F6A1E4E653AD75(0, 168)) || unk_0x83F6A1E4E653AD75(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xC20E8B2E17B46871(0, 166) || unk_0xC20E8B2E17B46871(0, 167)) || unk_0xC20E8B2E17B46871(0, 168)) || unk_0xC20E8B2E17B46871(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_554(int iParam0)
{
	int iVar0;
	
	if (unk_0xE71026F240213063())
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			unk_0xE3B6C923999B844E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_555(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_556(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_557(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_557(int iParam0)
{
	return func_558(iParam0);
}

bool func_558(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

int func_560()
{
	if (func_561() == 0)
	{
		return 1;
	}
	return 0;
}

int func_561()
{
	return Global_1312466.f_18;
}

int func_562()
{
	if (func_563())
	{
		return 1;
	}
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 0;
	}
	if (unk_0xEF08C8E0C4679477() || unk_0x9AF3AC4F52023B45())
	{
		return 0;
	}
	if (unk_0x8F70BD179415A092())
	{
		return 0;
	}
	return 1;
}

bool func_563()
{
	return Global_1312438;
}

bool func_564()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

bool func_565()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_566()
{
	return Global_1351508.f_68;
}

int func_567()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_568()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 25:
		case 26:
			return 1;
			break;
	}
	return 0;
}

int func_570()
{
	if (func_575())
	{
		return 1;
	}
	if (func_323(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_574())
	{
		return 1;
	}
	if (func_45(unk_0x0FFED3E94261A832()))
	{
		switch (func_509(unk_0x0FFED3E94261A832()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_384(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_384(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_384(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

int func_571(int iParam0)
{
	if ((iParam0 == 26 && func_45(unk_0x0FFED3E94261A832())) && !func_43(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_321(unk_0x0FFED3E94261A832(), 0) && func_43(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_36(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_572(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1592329)
		{
			if (!func_932(0) && !func_932(func_573(iParam1)))
			{
				Global_1592329 = 1;
			}
		}
	}
	else if (Global_1592329)
	{
		Global_1592329 = 0;
	}
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 12;
}

bool func_574()
{
	return Global_1592329;
}

int func_575()
{
	if (func_576(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_576(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_324(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

void func_577()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	bool bVar5;
	
	bVar4 = true;
	bVar5 = true;
	if (iLocal_2784 == 1 && !func_403())
	{
		func_632(&Local_2042);
	}
	switch (iLocal_2784)
	{
		case 0:
			if (func_631())
			{
				iLocal_2784++;
			}
			break;
		
		case 1:
			iVar0 = unk_0x1E199569E0295838(Local_121.f_184.f_7);
			if (unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(iVar0, 1) };
				Local_2042.f_2 = { Var1 };
			}
			else if (!func_20(Local_2042.f_2))
			{
				Var1 = { Local_2042.f_2 };
			}
			Local_2042.f_1 = unk_0x7BAE3A9057619E1F(Local_121.f_184.f_2);
			if (unk_0x2137828D03306CAF(Local_2042.f_1))
			{
				if (!unk_0xA9A04898798AE9E6(Local_2042.f_1, 0))
				{
					if (!func_623())
					{
						if (func_20(Local_2779))
						{
							if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
								{
									Local_2779 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
									fLocal_2782 = unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91());
								}
							}
						}
					}
					unk_0xC22AC451A2631087(Local_2042.f_1);
					if (Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_231 == 99)
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 11))
						{
							unk_0x26C811741B892675(0);
							if (!unk_0x41A99D392865F7DB())
							{
								unk_0x0738182217C3B962(1);
							}
							unk_0x88DEA0C7B923CD04(Local_2042.f_1, 1);
							unk_0x5DAB197A499B8499(unk_0x2A5EB8B0FE590B91(), Local_2042.f_1, unk_0x6EB9FFF630189D64(Local_2042.f_1, "chassis"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 11);
							unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_204), 2);
							unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 14);
							func_622(unk_0x0FFED3E94261A832(), 0);
							func_618();
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 12))
						{
							func_613(unk_0x0FFED3E94261A832(), 0, 8192);
							unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
							unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 12);
						}
						func_606();
						func_604();
						if (func_623())
						{
							func_613(unk_0x0FFED3E94261A832(), 1, 0);
							iLocal_2784++;
						}
						else
						{
							func_587(&(Local_121.f_184), &Local_2042, Local_2042.f_1, Var1, bVar5, bVar4);
							if (bVar4)
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 18) && func_580(0, 1, 1, 0))
								{
									func_579("SCTV_HELI_HLP", 30000);
									if (Local_121.f_197 != 2)
									{
										func_578(1);
									}
									unk_0xF6082E2ADA1C795B(&iLocal_578, 18);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_578(int iParam0)
{
	unk_0xE068B121D78064B6(3, 21, 200, 0, 0);
	if (iParam0 && !func_519())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_579(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_580(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_586())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_565())
	{
		return 0;
	}
	if (func_585())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_556(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_584(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_583())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_582())
	{
		return 0;
	}
	if (func_581())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_581()
{
	return Global_2445217.f_571;
}

bool func_582()
{
	return Global_2445217.f_723;
}

bool func_583()
{
	return Global_2434604.f_2791.f_578;
}

int func_584(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_585()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_586()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_587(var uParam0, var uParam1, var uParam2, struct<3> Param3, bool bParam6, bool bParam7)
{
	switch (func_603(uParam1))
	{
		case 0:
			if (func_602() || bParam6)
			{
				func_601(uParam1, 1);
			}
			break;
		
		case 1:
			if (!unk_0x9FA769EB6C3BCCE4(*uParam1))
			{
				*uParam1 = unk_0x1FF428E592B6F928("default_scripted_camera", 0);
			}
			else
			{
				unk_0x4174E372FA440D1D();
				unk_0xFF739A843B6BF64D(*uParam1, uParam2, 0f, 2.75f, -1.25f, 1);
				unk_0xD429163073BD3A47(*uParam1, 1);
				unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
				func_11(1);
				func_601(uParam1, 2);
			}
			break;
		
		case 2:
			if (unk_0x9FA769EB6C3BCCE4(*uParam1))
			{
				if (!unk_0xF0A915CB71B8E167(*uParam1))
				{
					unk_0xFF739A843B6BF64D(*uParam1, uParam2, 0f, 2.75f, -1.25f, 1);
					unk_0xD429163073BD3A47(*uParam1, 1);
					unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xBAE20D15CEA4D5E7(*uParam1, Param3);
				}
				if (bParam7)
				{
					func_588(uParam1);
				}
				if (func_602() && !bParam6)
				{
					func_447(uParam0, 1, 1, 1);
					func_601(uParam1, 0);
				}
			}
			else
			{
				func_601(uParam1, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_588(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_600() };
	if (func_598(0, -1, 0))
	{
		switch (uParam0->f_694)
		{
			case 0:
				func_596(&(uParam0->f_7));
				func_595(2, 202, "HUD_QUIT", &(uParam0->f_7), 1, 354);
				uParam0->f_694++;
				break;
			
			case 1:
				func_589(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
			}
	}
}

void func_589(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x94CC8BB8EDADFF62(2))
	{
		*uParam2 = 0;
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			if (unk_0x5018862FF5D9F844())
			{
				unk_0xD1FCC52F87A98873(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xD426F7366505EADF(0);
				unk_0x8123397DC676E794();
			}
			unk_0xD1FCC52F87A98873(*uParam0, "CLEAR_ALL");
			unk_0x8123397DC676E794();
		}
		func_594(uParam2);
	}
	if (Global_1315690 < 2)
	{
		func_593(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			*uParam0 = unk_0x4D6D22510A2467D9("instructional_buttons");
		}
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			unk_0xE7B0632DAF0CEE71(*uParam0, "CLEAR_ALL");
			if (unk_0x5018862FF5D9F844())
			{
				unk_0xD1FCC52F87A98873(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xD426F7366505EADF(1);
				unk_0x8123397DC676E794();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xAA4F14DA15DB0B51(uParam2->f_676, iVar0))
				{
					unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(iVar0);
					if (!unk_0xAA4F14DA15DB0B51(uParam2->f_677, iVar0))
					{
						uVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_592(unk_0xD1DCA39DE7949204(uVar1, uVar2, 1));
						if (iVar3 < 354)
						{
							func_592(unk_0xD1DCA39DE7949204(uVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_592(unk_0x1A850B9F74B34C7A(uVar4, uVar5, 1));
					}
					if (unk_0xAA4F14DA15DB0B51(uParam2->f_674, iVar0))
					{
						unk_0xADBDBA2DF8443753(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x365072D1FE8AEADE(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xEA97619D8B89D387(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xF7D95CCE1364B5CE();
					}
					else if (unk_0xAA4F14DA15DB0B51(uParam2->f_675, iVar0))
					{
						unk_0xADBDBA2DF8443753(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xCF6846167A5EFE98(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						func_415(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x5018862FF5D9F844())
					{
						if (unk_0xAA4F14DA15DB0B51(uParam2->f_678, iVar0))
						{
							unk_0xD426F7366505EADF(1);
							unk_0x4CECF13AF144A8F6(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0xD426F7366505EADF(0);
							unk_0x4CECF13AF144A8F6(354);
						}
					}
					unk_0x8123397DC676E794();
				}
				else
				{
					unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(iVar0);
					func_592(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x58478145CAF8429C(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_592(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xAA4F14DA15DB0B51(uParam2->f_674, iVar0))
					{
						unk_0xADBDBA2DF8443753(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x365072D1FE8AEADE(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xEA97619D8B89D387(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xF7D95CCE1364B5CE();
					}
					else if (unk_0xAA4F14DA15DB0B51(uParam2->f_675, iVar0))
					{
						unk_0xADBDBA2DF8443753(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xCF6846167A5EFE98(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						func_415(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x5018862FF5D9F844())
					{
						unk_0xD426F7366505EADF(0);
						unk_0x4CECF13AF144A8F6(354);
					}
					unk_0x8123397DC676E794();
				}
				iVar0++;
			}
			unk_0xD1FCC52F87A98873(*uParam0, "SET_MAX_WIDTH");
			unk_0xD3A4A11E4FDC9D63(uParam2->f_686);
			unk_0x8123397DC676E794();
			unk_0xD1FCC52F87A98873(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x4CECF13AF144A8F6(0);
			unk_0x8123397DC676E794();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_591(*uParam0, uParam1);
	}
	func_590();
}

void func_590()
{
	unk_0x47BFFB0507046AE3(7);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
}

void func_591(var uParam0, var uParam1)
{
	unk_0x792C5262A7BE057A(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_592(char* sParam0)
{
	unk_0x7B7BB0114231AF09(uParam0);
}

void func_593(int iParam0)
{
	Global_1315690 = iParam0;
}

void func_594(var uParam0)
{
	uParam0->f_679 = 0;
}

void func_595(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	unk_0xF6082E2ADA1C795B(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		unk_0xF6082E2ADA1C795B(&(uParam3->f_678), iVar0);
		if (iParam5 < 354)
		{
		}
	}
	uParam3->f_680++;
}

void func_596(var uParam0)
{
	func_597(uParam0);
	uParam0->f_679 = 1;
}

void func_597(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 354;
		uParam0->f_1[iVar0 /*56*/].f_55 = 354;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

bool func_598(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_450(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x58478145CAF8429C(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0xC9173FA08E7D8227(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0xED267C415C550FF0(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x91A9530585A5AF03("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB5ABADF6417115F2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x91A9530585A5AF03("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB5ABADF6417115F2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_599(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_599(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
			{
				*uParam0 = unk_0x4D6D22510A2467D9(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA8AF99BD8D81CFB7(*uParam0))
					{
						uParam0->f_8 = unk_0x3732B96D7A1859B4();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x3732B96D7A1859B4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA8AF99BD8D81CFB7(*uParam0))
			{
				uParam0->f_8 = unk_0x3732B96D7A1859B4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

struct<9> func_600()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_601(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_602()
{
	if ((!unk_0x3A473E888D0CF9FD(2) && unk_0xBA36AFDE947F5C56(2, 231)) || (unk_0x3A473E888D0CF9FD(2) && unk_0xBA36AFDE947F5C56(2, 44)))
	{
		return 1;
	}
	return 0;
}

int func_603(var uParam0)
{
	return uParam0->f_5;
}

void func_604()
{
	unk_0x117BBA4FCB43C905();
	func_605();
}

void func_605()
{
	Global_17151.f_134 = 1;
}

void func_606()
{
	func_612();
	func_607(0);
	unk_0x9BF32B79391A5A8E();
	unk_0x27E1B77F5BF686B0(19);
}

void func_607(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_611(0))
		{
			func_608(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_608(int iParam0)
{
	if (Global_14604)
	{
		func_610(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_609())
	{
		Global_14443.f_1 = 3;
	}
}

int func_609()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_610(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_611(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_611(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_612()
{
	Global_2434604.f_933.f_10 = 1;
}

void func_613(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x7B399FFF3AC5B678())
		{
			unk_0x6F0F1C5EEC77F84A(0);
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		uVar0 = iParam2;
		unk_0x73EC54DB6766EF37(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_560())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x885F483F34E47503(iParam0) && unk_0xB8B285A272E7A79E(iParam0))
		{
			uVar25 = unk_0x1E199569E0295838(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x591AF4C50B46E014())
				{
					unk_0xA64CA7CB069DDFFA(1);
				}
				else
				{
					unk_0x4C1FCB3943DAF647(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x591AF4C50B46E014() && !bVar18)
					{
						unk_0xA64CA7CB069DDFFA(0);
					}
					Global_2422215[iParam0 /*387*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_617(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(iVar25, true, 0);
					}
				}
				if (!unk_0xED01C551E3A161C0(iVar25))
				{
					if (!bVar20)
					{
						unk_0xA32D9C84C1A93920(iVar25, false);
					}
					unk_0xE77EEA92586CF2E8(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA32D9C84C1A93920(iVar25, false);
				}
				unk_0x2725C3746060DA66(iVar25, true);
				unk_0x1EF72C87138AD63D(iParam0, 0);
				unk_0x81CEA1F6278C00AA(iVar25);
				unk_0xDC7A31134115BFF0(iVar25, 1);
				func_616();
				func_615();
				if (unk_0x57A397BDF5F38342())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xFD918707B1B07874())
				{
				}
				Global_2422215[iParam0 /*387*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_617(iVar25) && !unk_0x1CF549F1B0277DA6(iVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(iVar25, !bVar14, 0);
					}
					if (!unk_0xED01C551E3A161C0(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA32D9C84C1A93920(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE77EEA92586CF2E8(iVar25, 1);
						}
					}
					if (func_614(Global_1638223.f_112772))
					{
						unk_0xA32D9C84C1A93920(iVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0x1EF72C87138AD63D(iParam0, 0);
				}
				else
				{
					unk_0x1EF72C87138AD63D(iParam0, 1);
				}
				unk_0x2725C3746060DA66(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1F938E1A529D851(iVar25) && !unk_0xC4A39E4229BD3ABE(iVar25, 0))
					{
						unk_0x5DE3EC94E90BB96F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x73EC54DB6766EF37(iParam0, bParam1, iVar26);
		}
	}
}

bool func_614(int iParam0)
{
	return iParam0 == 17;
}

void func_615()
{
	struct<2> Var0;
	
	Global_2434604.f_1010 = 0;
	Global_2434604.f_1011 = 0;
	Global_2434604.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434604.f_1017 = -1;
	Global_2404996.f_2472 = { Var0 };
}

void func_616()
{
	Global_2404996.f_664 = 0;
	Global_2404996.f_2513 = 0;
	Global_2404996.f_502 = 0;
	Global_2404996.f_578 = 0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_216 = 0;
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE897E371352225D5(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_618()
{
	if (func_621() || func_620())
	{
		func_619();
	}
}

void func_619()
{
	Global_2445217.f_635 = 1;
}

var func_620()
{
	return Global_2445217.f_614;
}

bool func_621()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30BD96CB13063EC9(unk_0x96CB654BBCDD4063(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x01307FD0B54F50D3(unk_0x96CB654BBCDD4063(iParam0), "MPBitset");
	}
	unk_0xF6082E2ADA1C795B(&iVar0, iParam1);
	unk_0xE7B1DEED5908F19B(unk_0x96CB654BBCDD4063(iParam0), "MPBitset", iVar0);
}

int func_623()
{
	if (func_630(&Local_2042))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
	{
		return 1;
	}
	if (func_624())
	{
		return 1;
	}
	if (func_893(0))
	{
		return 1;
	}
	if (func_324(unk_0x0FFED3E94261A832(), 0))
	{
		return 1;
	}
	if (Local_121.f_184.f_7 == func_346())
	{
		return 1;
	}
	return 0;
}

int func_624()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_370.f_5, 0))
	{
		return 1;
	}
	if (func_626() && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 != 3)
	{
		return 1;
	}
	if (func_625() && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 != 3)
	{
		return 1;
	}
	if (Global_2394717)
	{
		return 1;
	}
	if (Global_1574379.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_625()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 5);
}

int func_626()
{
	if (((func_629() || func_439()) || func_628()) || func_627())
	{
		return 1;
	}
	return 0;
}

bool func_627()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 1);
}

bool func_628()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

bool func_629()
{
	return Global_2445217.f_578;
}

bool func_630(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_696, 2);
}

int func_631()
{
	if (!func_9(&(Local_121.f_184)))
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
	{
		return 0;
	}
	if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 < 3)
	{
		return 0;
	}
	if (!func_1083(unk_0x0FFED3E94261A832(), 1, 1))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
	{
		return 0;
	}
	if (Local_121.f_184.f_7 == func_346())
	{
		return 0;
	}
	if (!func_1083(Local_121.f_184.f_7, 1, 1))
	{
		return 0;
	}
	if (Local_121.f_184.f_7 == unk_0x0FFED3E94261A832())
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 21))
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (unk_0x1CF549F1B0277DA6(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (Local_121.f_165 < 2)
	{
		return 0;
	}
	return 1;
}

void func_632(var uParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_696, 2))
	{
		switch (uParam0->f_695)
		{
			case 0:
				if (!unk_0x9E5289F5D782437C())
				{
					if (func_635(uParam0))
					{
						func_634(uParam0);
						unk_0xDC38CC1E35B6A5D7("SPEC_LEAVE", "SPEC_SURE", 36, 0, 0, -1, 0, 0, 1);
						if (unk_0xBA36AFDE947F5C56(2, 201))
						{
							unk_0x08BE237DBCD9CBD9(-1, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							uParam0->f_695++;
						}
					}
					else
					{
						func_633(uParam0);
					}
				}
				break;
			
			case 1:
				unk_0xF6082E2ADA1C795B(&(uParam0->f_696), 2);
				break;
			}
	}
}

void func_633(var uParam0)
{
	if (unk_0x2593BD27F8406EC2())
	{
		return;
	}
	if (unk_0xBA36AFDE947F5C56(2, 202))
	{
		if (!unk_0xAA4F14DA15DB0B51(uParam0->f_696, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_696), 0);
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam0->f_696, 1))
		{
			unk_0x08BE237DBCD9CBD9(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_696), 1);
		}
	}
}

void func_634(var uParam0)
{
	if (unk_0x2593BD27F8406EC2())
	{
		return;
	}
	if (unk_0xBA36AFDE947F5C56(2, 202))
	{
		if (unk_0xAA4F14DA15DB0B51(uParam0->f_696, 0))
		{
			unk_0x08BE237DBCD9CBD9(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0x507FE690B1271947(&(uParam0->f_696), 0);
		}
	}
}

bool func_635(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_696, 0);
}

void func_636()
{
	struct<3> Var0;
	
	if (Local_121.f_197 != 2)
	{
		return;
	}
	if (Local_121.f_21 > 0)
	{
		return;
	}
	Var0 = { Local_632[0 /*3*/] };
	if (!func_29(Var0, 0f, 0f, 0f, 0))
	{
		func_637(200, Var0, &uLocal_2786, 1140457472, 1144750080, 0);
	}
}

void func_637(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_45(unk_0x0FFED3E94261A832()) && !func_44(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8)) && (func_41(unk_0x0FFED3E94261A832()) || func_40(unk_0x0FFED3E94261A832())))
	{
		return;
	}
	Global_1773245 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Param1);
	func_672(iParam0, fVar0);
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_39(unk_0x0FFED3E94261A832()) || func_671(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x440E77FA46936F83(1344549371))
			{
				unk_0x23949161B04DFF2C(1344549371);
			}
		}
		else if (unk_0x440E77FA46936F83(1344549371))
		{
			unk_0x74B42EAFF204A87F(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_319(unk_0x0FFED3E94261A832(), 21))
		{
			func_670(Param1, 1, 0);
		}
		if (!*uParam4 && func_1083(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 1;
			if (func_669(iParam0))
			{
				unk_0xFBC4596E19752537(func_668(iParam0));
				if (func_667(iParam0, -1))
				{
					unk_0xE0125DCD8DB3EFC3(0);
					if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
					{
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 1);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 1);
					}
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
				}
			}
			if (func_666(iParam0))
			{
				fVar1 = func_665(iParam0);
				if (fVar1 != 1f)
				{
					func_662(fVar1);
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_661(iParam0) && func_39(unk_0x0FFED3E94261A832()))
				{
					func_659(1);
					func_658(2);
				}
			}
			func_316(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_38(unk_0x0FFED3E94261A832(), 19))
			{
				func_318(19);
			}
		}
		if (*uParam4 && func_1083(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 0;
			if (func_669(iParam0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
				{
					unk_0xFBC4596E19752537(1f);
					unk_0xE0125DCD8DB3EFC3(5);
					unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
				}
			}
			if (func_666(iParam0))
			{
				func_657();
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
			}
			if (iParam7 && !func_45(unk_0x0FFED3E94261A832()))
			{
				if (func_510(unk_0x0FFED3E94261A832()) != 152)
				{
					func_639();
				}
			}
			if (func_197(2))
			{
				func_659(0);
				func_638(2);
			}
		}
	}
}

void func_638(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_639()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_655();
	func_642(1, 1);
	func_640();
}

void func_640()
{
	func_641(0, 0);
}

void func_641(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_642(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_43), &Global_2408866, 314);
	}
	else
	{
		Global_2404996.f_43 = { Global_2408866 };
		Global_2404996.f_43.f_49 = { Global_2408866.f_49 };
		Global_2404996.f_43.f_52 = Global_2408866.f_52;
		Global_2404996.f_43.f_53 = Global_2408866.f_53;
	}
	if (bParam0)
	{
		func_654();
	}
	func_645(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_644(0);
	func_643();
}

void func_643()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_644(bool bParam0)
{
	if (bParam0)
	{
		Global_2404996.f_675 = 0;
	}
	else
	{
		Global_2404996.f_675 = 1;
	}
}

void func_645(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_653())
		{
			func_652();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_650();
		func_649(8, 0, 0, 0, 0);
		Global_2404996.f_676.f_507 = iParam11;
		Global_2404996.f_676.f_510 = iParam3;
		Global_2404996.f_676.f_511 = iParam4;
		Global_2404996.f_676.f_508 = iParam5;
		Global_2404996.f_676.f_509 = iParam6;
		Global_2404996.f_676.f_512 = iParam7;
		Global_2404996.f_676.f_513 = iParam8;
		Global_2404996.f_676.f_514 = iParam9;
		Global_2404996.f_1709 = 1;
	}
	else
	{
		func_646();
	}
}

void func_646()
{
	if (func_653() && !func_648())
	{
		func_652();
	}
	if (func_648())
	{
		func_647();
	}
	else
	{
		func_650();
		func_649(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_647()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_648()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_649(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411638 = 0;
	}
	Global_2404996.f_479 = iParam0;
	Global_2404996.f_479.f_1 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_479.f_2 = iParam1;
	Global_2404996.f_479.f_3 = iParam2;
	Global_2404996.f_479.f_4 = iParam3;
	Global_2404996.f_479.f_5 = iParam4;
}

void func_650()
{
	if (func_653() && !func_648())
	{
		func_652();
	}
	func_651();
	Global_2404996.f_676 = 0;
}

void func_651()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404996.f_676.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_652()
{
	if (func_648())
	{
		if (Global_2404996.f_676.f_515 == Global_2404996.f_1192.f_515)
		{
			return;
		}
	}
	if (!unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_1192), &(Global_2404996.f_676), 516);
		Global_2404996.f_485 = { Global_2404996.f_479 };
		Global_2404996.f_1708 = 1;
	}
}

int func_653()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_654()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_655()
{
	func_656();
	Global_2404996.f_2053 = 0;
}

void func_656()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404996.f_2054[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_657()
{
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && Global_2497344.f_4823 < 1f)
		{
			return;
		}
	}
	Global_2497344.f_4824 = -1;
	Global_2497344.f_4823 = 1f;
}

void func_658(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_659(int iParam0)
{
	if (func_660() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_660()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_662(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_663())
	{
		return;
	}
	fVar0 = (Global_2497344.f_4823 - fParam0);
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && unk_0x3FEF699D13BCC798(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2497344.f_4823 = fParam0;
	Global_2497344.f_4824 = unk_0xFF09208EC90C94CB();
}

int func_663()
{
	switch (func_664())
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

int func_664()
{
	return Global_25222;
}

float func_665(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_667(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_668(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_670(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404996.f_43.f_49 = { Param0 };
	Global_2404996.f_43.f_52 = iParam3;
	Global_2404996.f_43.f_53 = iParam4;
}

int func_671(int iParam0)
{
	if (func_120(iParam0))
	{
		if (func_39(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_672(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_675(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_673();
	}
}

void func_673()
{
	if (!func_674(unk_0x0FFED3E94261A832()))
	{
		func_316(25);
	}
}

bool func_674(int iParam0)
{
	return func_38(iParam0, 25);
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11174;
		
		case 142:
			return Global_262145.f_11162;
		
		case 157:
			return Global_262145.f_11129;
		
		case 159:
			return Global_262145.f_11112;
		
		case 162:
			return Global_262145.f_11223;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_676()
{
	int iVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		if (Local_121.f_197 == 2)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
			{
				if (Local_121.f_21 >= 2)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_579, 3))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
							{
								iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
								iLocal_2039 = iVar0;
								unk_0x9C27A9366AD7DE0B(iVar0, 0, 1, 1, 0, 0, 0, 0, 0);
								unk_0xF6082E2ADA1C795B(&iLocal_579, 3);
							}
						}
					}
					else if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0x2137828D03306CAF(iLocal_2039))
						{
							if (unk_0x7FAC45D56235AB39(iLocal_2039, 0))
							{
								unk_0x9C27A9366AD7DE0B(iLocal_2039, 0, 0, 0, 0, 0, 0, 0, 0);
								unk_0x507FE690B1271947(&iLocal_579, 3);
							}
						}
					}
					else if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
					{
						iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (iVar0 != iLocal_2039)
						{
							if (unk_0x2137828D03306CAF(iLocal_2039))
							{
								if (unk_0x7FAC45D56235AB39(iLocal_2039, 0))
								{
									unk_0x9C27A9366AD7DE0B(iLocal_2039, 0, 0, 0, 0, 0, 0, 0, 0);
									unk_0x507FE690B1271947(&iLocal_579, 3);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_579, 3))
	{
		if (unk_0x2137828D03306CAF(iLocal_2039))
		{
			if (unk_0x7FAC45D56235AB39(iLocal_2039, 0))
			{
				unk_0x9C27A9366AD7DE0B(iLocal_2039, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x507FE690B1271947(&iLocal_579, 3);
			}
		}
	}
}

void func_677()
{
	if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 0 || Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 2)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
		{
			if (!func_680())
			{
				func_679();
			}
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		if (func_680())
		{
			func_678();
		}
	}
}

void func_678()
{
	unk_0x507FE690B1271947(&(Global_1773245.f_3), 5);
}

void func_679()
{
	unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 5);
}

bool func_680()
{
	return unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 5);
}

void func_681()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	struct<4> Var10;
	struct<4> Var14;
	struct<4> Var18;
	struct<4> Var22;
	struct<4> Var26;
	
	if (func_324(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	switch (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7)
	{
		case 0:
			if (Local_121.f_197 == 2)
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 29))
				{
					if (func_832())
					{
						func_812(200, 1, -1, 1);
					}
					else
					{
						func_812(200, 0, -1, 1);
					}
					unk_0xF6082E2ADA1C795B(&iLocal_578, 29);
				}
			}
			if (!func_893(1))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_577, 31))
				{
					func_891(func_892(), 1);
					func_886();
					unk_0x507FE690B1271947(&iLocal_577, 31);
				}
				if (Local_121.f_21 == 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 0))
					{
						if (func_580(0, 1, 1, 1))
						{
							if (func_811())
							{
								sVar4 = func_810();
								if (Local_121.f_197 == 2)
								{
									if (func_811())
									{
										func_809(sVar4, "CAG_BLIPS", iLocal_2770, 30000);
									}
								}
								else
								{
									func_579(sVar4, 30000);
									func_578(0);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_577, 0);
								unk_0x08BE237DBCD9CBD9(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
							}
						}
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
				{
					if (func_808(1))
					{
						if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 8))
						{
							func_807();
						}
						if (unk_0xAA4F14DA15DB0B51(iLocal_578, 3))
						{
							Var0 = { func_806() };
							if (func_452(&Var0))
							{
								if (func_7(&uLocal_2763, 3000, 0))
								{
									unk_0x507FE690B1271947(&iLocal_578, 3);
									func_6(&uLocal_2763);
									unk_0x7D53B6FFAEDA810A(1);
								}
							}
						}
						if (iLocal_2036 < func_339())
						{
							if (!func_384(unk_0x0FFED3E94261A832()))
							{
								func_805(1);
							}
							if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
							{
								unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 0);
								if (!func_42())
								{
									if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
									{
										unk_0x337229861BC52CD5(0);
										unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
										unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
										unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 1);
									}
									else if (func_803(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0))))
									{
										if (func_802(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
										{
											unk_0x337229861BC52CD5(0);
											unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
											unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
											unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 1);
										}
									}
								}
							}
							else if (func_42())
							{
								unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
							}
							if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 18))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_577, 18);
							}
							if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
							{
								if (!func_42())
								{
									if (func_803(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0))))
									{
										if (unk_0xAA4F14DA15DB0B51(iLocal_577, 24))
										{
											unk_0x507FE690B1271947(&iLocal_577, 24);
										}
										if (unk_0xAA4F14DA15DB0B51(iLocal_577, 23))
										{
											unk_0x507FE690B1271947(&iLocal_577, 23);
										}
										iVar5 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
										if (unk_0x7FAC45D56235AB39(iVar5, 0))
										{
											unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 1);
											if (unk_0x8F8E5C33266ED978(iVar5, -1, 0) == unk_0x2A5EB8B0FE590B91())
											{
												if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
												{
													if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
													{
														if (unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
														{
															unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 1);
														}
													}
													else if (!unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
													{
														unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
													}
												}
												if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 13))
												{
													unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 13);
												}
												if (unk_0xAA4F14DA15DB0B51(Local_121.f_35, unk_0x88641E5BC172153A()))
												{
													if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
													{
														unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 6);
													}
													unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
													iLocal_2038 = iVar5;
													if (Local_2745.f_11 == 0)
													{
														Local_2745.f_11 = unk_0xDA84A1E29323722E();
													}
													sVar4 = func_801();
													if (func_452(sVar4))
													{
														unk_0x7D53B6FFAEDA810A(1);
													}
												}
											}
											else
											{
												if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 11))
												{
													if (func_580(0, 1, 1, 1))
													{
														if (func_811())
														{
															Var6 = { func_800() };
															if (func_811())
															{
																func_579(&Var6, 30000);
															}
															if (Local_121.f_197 != 2)
															{
																func_578(1);
															}
															unk_0xF6082E2ADA1C795B(&iLocal_577, 11);
														}
													}
												}
												if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
												{
													unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 6);
												}
											}
										}
									}
									else
									{
										if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 24))
										{
											if (func_580(0, 1, 1, 1))
											{
												if (func_811())
												{
													sVar4 = func_799();
													if (func_811())
													{
														func_579(sVar4, 30000);
													}
													if (Local_121.f_197 != 2)
													{
														func_578(1);
													}
													unk_0xF6082E2ADA1C795B(&iLocal_577, 24);
												}
											}
										}
										if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
										{
											func_798(1);
											unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
											unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
										}
									}
								}
								else if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 23))
								{
									if (func_580(0, 1, 1, 1))
									{
										unk_0xF6082E2ADA1C795B(&iLocal_577, 23);
										if (func_811())
										{
											func_579("PEN_PASSMD", 30000);
										}
										if (Local_121.f_197 != 2)
										{
											func_578(1);
										}
									}
								}
							}
							else
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 1))
								{
									if (unk_0xAA4F14DA15DB0B51(iLocal_577, 0))
									{
										if (func_580(0, 1, 1, 1))
										{
											if (func_811())
											{
												sVar4 = func_801();
												if (func_811())
												{
													func_579(sVar4, 30000);
												}
												if (Local_121.f_197 != 2)
												{
													func_578(1);
												}
												unk_0xF6082E2ADA1C795B(&iLocal_577, 1);
											}
										}
									}
								}
								if (unk_0x7FAC45D56235AB39(iLocal_2038, 0))
								{
								}
								if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
								{
									unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 6);
								}
							}
							func_797();
						}
					}
					else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 8))
						{
							func_795();
						}
						if (unk_0xAA4F14DA15DB0B51(iLocal_577, 24))
						{
							unk_0x507FE690B1271947(&iLocal_577, 24);
						}
						if (unk_0xAA4F14DA15DB0B51(iLocal_577, 18))
						{
							unk_0x507FE690B1271947(&iLocal_577, 18);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
						{
							func_798(1);
							unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
						{
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 6);
						}
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
						}
						if (unk_0xAA4F14DA15DB0B51(iLocal_578, 4))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 3))
							{
								if (func_580(0, 1, 1, 1))
								{
									if (func_811())
									{
										unk_0x507FE690B1271947(&iLocal_578, 4);
										unk_0xF6082E2ADA1C795B(&iLocal_578, 3);
										func_6(&uLocal_2763);
										func_345(&uLocal_2763, 0, 0);
										Var0 = { func_806() };
										if (func_811())
										{
											func_579(&Var0, 30000);
										}
										if (Local_121.f_197 != 2)
										{
											func_578(1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!func_808(1))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
							{
								func_798(1);
								unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
								unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
								unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
							}
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 13);
							func_886();
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
							{
								unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
							}
							if (unk_0xAA4F14DA15DB0B51(iLocal_577, 18))
							{
								unk_0x507FE690B1271947(&iLocal_577, 18);
							}
							if (unk_0x7FAC45D56235AB39(iLocal_2038, 0))
							{
							}
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
							if (func_384(unk_0x0FFED3E94261A832()))
							{
								func_805(0);
							}
							unk_0xF6082E2ADA1C795B(&iLocal_578, 4);
						}
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(iLocal_578, 3))
						{
							Var0 = { func_806() };
							if (func_452(&Var0))
							{
								if (func_7(&uLocal_2763, 3000, 0))
								{
									unk_0x507FE690B1271947(&iLocal_578, 3);
									func_6(&uLocal_2763);
									unk_0x7D53B6FFAEDA810A(1);
								}
							}
						}
						if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
						{
						}
						if (func_42())
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
							{
								unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
							}
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 13);
						}
						else if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 25))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 7))
							{
								if (func_580(0, 1, 1, 1))
								{
									if (func_811())
									{
										Var10 = { func_794() };
										if (func_811())
										{
											func_579(&Var10, 30000);
										}
										if (Local_121.f_197 != 2)
										{
											func_578(1);
										}
										unk_0xF6082E2ADA1C795B(&iLocal_577, 25);
									}
								}
							}
						}
						func_797();
					}
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if ((!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()) || (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()) && !unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))) || !func_803(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0))))
						{
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 13);
							if (unk_0x7FAC45D56235AB39(iLocal_2038, 0))
							{
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
						{
							Var0 = { func_793() };
							if (func_452(&Var0))
							{
								unk_0x7D53B6FFAEDA810A(1);
							}
						}
						else if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 3))
						{
							if (func_580(0, 1, 1, 1))
							{
								if (func_811())
								{
									Var0 = { func_793() };
									if (func_811())
									{
										func_579(&Var0, 30000);
									}
									if (Local_121.f_197 != 2)
									{
										func_578(1);
									}
									unk_0xF6082E2ADA1C795B(&iLocal_577, 3);
								}
							}
						}
					}
					if (unk_0xAA4F14DA15DB0B51(iLocal_577, 0))
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 2))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
							{
								if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
								{
									if (func_580(0, 1, 1, 1))
									{
										if (func_811())
										{
											Var0 = { func_792() };
											if (func_811())
											{
												func_579(&Var0, 30000);
											}
											if (Local_121.f_197 != 2)
											{
												func_578(1);
											}
											unk_0xF6082E2ADA1C795B(&iLocal_577, 2);
										}
									}
								}
							}
						}
					}
				}
				func_438(1, 0);
				func_428();
				func_411();
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 31))
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_598))
				{
					unk_0x789C84F1B8496AD0(&uLocal_598);
				}
				func_391();
				func_378();
				unk_0xF6082E2ADA1C795B(&iLocal_577, 31);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
				if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
				}
			}
			if (Local_121.f_21 >= 1)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
					{
						if (Local_121.f_197 == 2)
						{
							if (!func_832())
							{
								func_659(1);
							}
							func_791(0);
							func_673();
							func_790(1);
						}
						else
						{
							func_781(136, 0f, 0f, 1, 1, 1, 0);
							func_757(1);
							func_805(0);
						}
						func_805(0);
						if (unk_0xBDD3EABACAB97D09(uLocal_598))
						{
							unk_0x789C84F1B8496AD0(&uLocal_598);
						}
						func_378();
						func_756(1);
						func_753();
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
						}
						iLocal_596 = unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91());
						if (Local_121.f_197 != 2)
						{
							unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_594);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 1);
						}
						else
						{
							func_798(0);
							unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 1, 1, 0, 0, 0, 0, 0);
							unk_0xF6082E2ADA1C795B(&iLocal_579, 2);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
						}
						func_750(0);
						unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
						func_345(&uLocal_2765, 0, 0);
						Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 1;
					}
					else if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
					{
						if (Local_121.f_197 == 2)
						{
						}
						else
						{
							func_781(136, 0f, 0f, 1, 1, 0, 0);
						}
						func_378();
						if (unk_0xBDD3EABACAB97D09(uLocal_598))
						{
							unk_0x789C84F1B8496AD0(&uLocal_598);
						}
						func_756(1);
						unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
						func_805(0);
						Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 1;
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
						{
							func_798(1);
							unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
							unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
						}
						if (unk_0xBDD3EABACAB97D09(uLocal_598))
						{
							unk_0x789C84F1B8496AD0(&uLocal_598);
						}
						func_805(0);
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
						func_378();
						func_749(&uLocal_2739);
						Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
					}
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
					{
						func_798(1);
						unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
						unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
					}
					func_391();
					if (unk_0xBDD3EABACAB97D09(uLocal_598))
					{
						unk_0x789C84F1B8496AD0(&uLocal_598);
					}
					func_378();
					func_749(&uLocal_2739);
					func_805(0);
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
					Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
				}
			}
			else if (Local_121.f_197 != 2 && func_746(2, 0, 1, 0, 0))
			{
				func_805(0);
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 5;
			}
			func_745();
			break;
		
		case 1:
			func_411();
			func_745();
			func_438(!unk_0xAA4F14DA15DB0B51(iLocal_577, 9), 0);
			func_797();
			func_744();
			if (Local_121.f_21 >= 2)
			{
				func_345(&uLocal_630, 0, 0);
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 2;
			}
			break;
		
		case 2:
			if (Local_2745.f_9 == 0)
			{
				Local_2745.f_9 = unk_0xDA84A1E29323722E();
			}
			if (Local_121.f_197 == 2)
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_579, 0))
				{
					unk_0xE0125DCD8DB3EFC3(0);
					unk_0xF6082E2ADA1C795B(&iLocal_579, 0);
				}
				else if (unk_0xA0F7964BC7FD74A9() > 0)
				{
					unk_0xE0125DCD8DB3EFC3(0);
				}
			}
			func_27(1);
			func_405();
			func_438(0, 0);
			func_735();
			func_396();
			func_454(0);
			func_730();
			func_745();
			func_728();
			sVar4 = func_801();
			if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 13))
			{
				Var26 = { func_727() };
				if (!func_893(1))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
					{
						if (func_580(0, 0, 1, 1))
						{
							if (!func_726(55))
							{
								func_579(&Var26, 30000);
								if (Local_121.f_197 != 2)
								{
									func_578(1);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_577, 13);
							}
						}
					}
				}
				else
				{
					Var14 = { func_800() };
					Var18 = { func_794() };
					Var22 = { func_806() };
					if ((((((func_452(&Var26) || func_452(&Var22)) || func_452(&Var14)) || func_452(sVar4)) || func_452(&Var18)) || func_452("PEN_MPLAY")) || func_452("PEN_START2"))
					{
						unk_0x7D53B6FFAEDA810A(1);
					}
				}
			}
			else if (iLocal_581 != 0)
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 5))
				{
					if (func_580(0, 0, 1, 1))
					{
						if (!func_726(55))
						{
							func_579("PEN_STILLP", 30000);
							if (Local_121.f_197 != 2)
							{
								func_578(1);
							}
							unk_0xF6082E2ADA1C795B(&iLocal_577, 5);
						}
					}
				}
			}
			if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
				func_378();
				if (unk_0xBDD3EABACAB97D09(uLocal_2040))
				{
					unk_0x789C84F1B8496AD0(&uLocal_2040);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_577, 12))
				{
					Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
					func_378();
				}
			}
			if (Local_121.f_21 == 3)
			{
				func_391();
				func_378();
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
			}
			if (func_403())
			{
				if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
				}
				if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
				{
					unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 6);
				}
				if (func_725())
				{
					func_724(0);
				}
				unk_0xF6082E2ADA1C795B(&iLocal_578, 20);
				func_391();
				func_378();
				func_798(1);
				unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
			}
			else if (Local_121.f_21 == 4)
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 4;
			}
			else if (Local_121.f_21 > 4)
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 5;
			}
			else if (Local_121.f_197 != 2 && func_746(2, 0, 1, 0, 0))
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 5;
			}
			else if (func_441())
			{
				func_391();
				func_378();
				func_798(1);
				unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 3;
			}
			break;
		
		case 3:
			if (!func_893(1))
			{
				if ((!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 17) && !unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16)) && !unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
				{
					func_719();
					func_717();
				}
				func_745();
				if ((!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1)) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
				{
					if (Local_121.f_21 > 1 && Local_121.f_21 < 3)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 17))
						{
							if (unk_0xBDD3EABACAB97D09(uLocal_597))
							{
								unk_0xEB5D36079067EBA5(uLocal_597, 55);
								unk_0xF6082E2ADA1C795B(&iLocal_578, 17);
							}
						}
						func_27(1);
						func_405();
					}
					if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
					{
						func_438(0, 1);
					}
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(iLocal_578, 17))
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_597))
				{
					unk_0x789C84F1B8496AD0(&uLocal_597);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(iLocal_579, 0))
			{
				unk_0xE0125DCD8DB3EFC3(5);
				unk_0x507FE690B1271947(&iLocal_579, 0);
			}
			if (func_725())
			{
				if (func_403())
				{
					func_724(0);
				}
			}
			func_35();
			if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2))
				{
					func_454(1);
				}
			}
			else
			{
				func_716();
			}
			if (unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
			{
				if (unk_0x8BEECCAAE312A5BA("MP_Player_Inside_Bubble_Scene"))
				{
					unk_0x40F160C3038ECAF5("MP_Player_Inside_Bubble_Scene");
				}
				if (unk_0x8BEECCAAE312A5BA("MP_Player_Outside_Bubble_Scene"))
				{
					unk_0x40F160C3038ECAF5("MP_Player_Outside_Bubble_Scene");
				}
				unk_0xDCE08B9AA97FFEB4("pennedIn");
				unk_0x18A0B296F4932A7B("PennedInOut", 0, 0);
				unk_0x507FE690B1271947(&iLocal_577, 6);
			}
			if (Local_121.f_197 != 2)
			{
				if (func_45(unk_0x0FFED3E94261A832()))
				{
					func_757(0);
					func_756(0);
					unk_0xF6082E2ADA1C795B(&iLocal_578, 24);
					func_692(136, 0, 1);
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 24))
			{
				func_756(0);
				unk_0xF6082E2ADA1C795B(&iLocal_578, 24);
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 21))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_578, 14) || unk_0xAA4F14DA15DB0B51(iLocal_577, 20))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_578, 21);
				}
			}
			if (func_623())
			{
				if (func_682())
				{
					if (Local_121.f_21 == 4)
					{
						Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 4;
					}
					else if (Local_121.f_21 > 4)
					{
						Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 5;
					}
					else
					{
						func_445();
					}
				}
			}
			break;
		
		case 4:
			if (Local_121.f_21 > 4)
			{
				Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 = 5;
			}
			break;
		
		case 5:
			func_996();
			break;
	}
}

int func_682()
{
	if ((func_444() && !func_20(Local_2779)) || unk_0xAA4F14DA15DB0B51(iLocal_578, 23))
	{
		switch (iLocal_2783)
		{
			case 0:
				if (!unk_0xF4EE9D6C8E60AE22() && !unk_0xEF08C8E0C4679477())
				{
					unk_0x5BFE0E837BA0AF60(500);
				}
				else
				{
					iLocal_2783++;
				}
				break;
			
			case 1:
				if (unk_0xF4EE9D6C8E60AE22())
				{
					unk_0xF6082E2ADA1C795B(&iLocal_578, 23);
					func_691();
					func_445();
					iLocal_2783++;
				}
				break;
			
			case 2:
				if (func_683(Local_2779, fLocal_2782, 0, 1, 0, 0, 1, 0, 1, 0))
				{
					iLocal_2783++;
				}
				break;
			
			case 3:
				if (!unk_0x9AF3AC4F52023B45() && !unk_0xEF08C8E0C4679477())
				{
					unk_0x9B0467159FAB9F56(500);
					iLocal_2783++;
				}
				break;
			
			case 4:
				if (unk_0x0B21CC5276C2CE1B())
				{
					iLocal_2783++;
				}
				break;
			
			case 5:
				return 1;
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_683(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_17151.f_6 = 1;
	if (unk_0x0AFBA1AD6DC1C540() && !bParam9)
	{
		if (Global_2434604.f_1010)
		{
			func_689(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xFD918707B1B07874() && !bParam9) && !unk_0x57A397BDF5F38342())
	{
		return 0;
	}
	if (!func_688())
	{
		if (func_687(unk_0x0FFED3E94261A832(), 1, 0))
		{
			if (((bParam9 && func_1083(unk_0x0FFED3E94261A832(), 1, 0)) && unk_0x0AFBA1AD6DC1C540()) && Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_231 == 1)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2434604.f_1010 && !bParam11)
	{
		Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
		if ((unk_0x3FEF699D13BCC798((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x3FEF699D13BCC798((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x3FEF699D13BCC798((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x3FEF699D13BCC798(fVar4) < 1f)
			{
				Global_2434604.f_1010 = 0;
				Global_2434604.f_1011 = 0;
				if (unk_0x57A397BDF5F38342())
				{
					unk_0xEB531A0D22CEB461();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2434604.f_1012 || !Param0.f_1 == Global_2434604.f_1012.f_1) || !Param0.f_2 == Global_2434604.f_1012.f_2) || !fParam3 == Global_2434604.f_1015)
	{
		if (Global_2434604.f_1010 == 1)
		{
			if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2434604.f_1016) < func_686(0))
			{
				return 0;
			}
			unk_0xEB531A0D22CEB461();
			Global_2434604.f_1011 = 1;
		}
		else
		{
			Global_2434604.f_1011 = 0;
		}
		Global_2434604.f_1012 = { Param0 };
		Global_2434604.f_1015 = fParam3;
		Global_2434604.f_1010 = 0;
	}
	if (!Global_2434604.f_1010 && !unk_0x57A397BDF5F38342())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[44], 16))
			{
				func_685();
			}
			if (!unk_0x7C16D570B776CD97(unk_0x2A5EB8B0FE590B91(), &(Global_2404996.f_491)))
			{
				Global_2404996.f_491 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
				if (unk_0xE8592B93875DBF28(uVar0))
				{
					Global_2434604.f_1017 = 0;
				}
			}
		}
		if (Global_2434604.f_1017 > -1)
		{
			Global_2434604.f_1016 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1010 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						uVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
						unk_0x8E979F037EACE55A(uVar0, Param0, 0, 1, 1, 1);
						unk_0x2681BA3707AF6DA7(iVar0, fParam3);
					}
					else
					{
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Param0, 0, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), fParam3);
					}
				}
				else
				{
					unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Param0, 0, 0, 0, 1);
					unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), fParam3);
				}
				func_689(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0xD36F38C63C0345CF();
				unk_0x7981ED41B043B8BE(unk_0x0FFED3E94261A832(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2434604.f_1016 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1010 = 1;
		}
	}
	if (Global_2434604.f_1010)
	{
		Global_17151.f_6 = 1;
		Global_2434604.f_1016 = unk_0x11ABC381A58DD5AB();
		if (Global_2434604.f_1017 > -1)
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
			}
			if (func_684(&(Global_2434604.f_1017), Param0, fParam3, iVar0))
			{
				func_689(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Global_2434604.f_1012) < 2f)
				{
					if (unk_0x57A397BDF5F38342())
					{
						unk_0xEB531A0D22CEB461();
					}
					func_689(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x57A397BDF5F38342())
			{
				func_689(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_684(var uParam0, struct<3> Param1, float fParam4, var uParam5)
{
	if (unk_0x2137828D03306CAF(Global_2434604.f_1018) && !unk_0xA9A04898798AE9E6(Global_2434604.f_1018, 0))
	{
		unk_0xC620100105DBAFCF(Global_2434604.f_1018);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2434604.f_1018 = uParam5;
			unk_0xC620100105DBAFCF(Global_2434604.f_1018);
			if (unk_0x1979A7D1D0538188(Global_2434604.f_1018))
			{
				if (!unk_0xA9A04898798AE9E6(Global_2434604.f_1018, 0))
				{
					unk_0x2681BA3707AF6DA7(Global_2434604.f_1018, fParam4);
					unk_0x8E979F037EACE55A(Global_2434604.f_1018, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_685()
{
	int iVar0;
	
	iVar0 = unk_0x511EB800EFE78B52();
	if (unk_0x06E94A65666E496C() && Global_2404996.f_2471 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404996.f_2470)
	{
		if (!unk_0xF250EAC6F54E6FD5())
		{
			Global_2404996.f_2470 = iVar0;
		}
	}
}

int func_686(bool bParam0)
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_687(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2422215[iParam0 /*387*/].f_231 == 99)
	{
		if ((iParam2 && Global_2422215[iParam0 /*387*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2422215[iParam0 /*387*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_688()
{
	return Global_1312829;
}

void func_689(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
		unk_0x164CA344DBD7B6F3(0f);
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x8591E81E75799D08(unk_0x2A5EB8B0FE590B91());
	}
	if (!bParam1)
	{
		unk_0xD36F38C63C0345CF();
	}
	if (unk_0x57A397BDF5F38342())
	{
		unk_0xEB531A0D22CEB461();
	}
	func_615();
	if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14))
	{
		func_690();
	}
}

void func_690()
{
	Global_2505234.f_80 = 1;
}

void func_691()
{
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xED01C551E3A161C0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0xA806066ECDF61E23(unk_0x2A5EB8B0FE590B91(), 1, 1);
			}
		}
	}
}

void func_692(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x0FFED3E94261A832() != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 13))
		{
			unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 13);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 14))
		{
			unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 14);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 21))
	{
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 21);
	}
	func_712();
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
	unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_711(func_509(unk_0x0FFED3E94261A832()));
		func_710(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x0FFED3E94261A832() != -1) && func_709(unk_0x0FFED3E94261A832()) >= 12)
		{
			func_133(2531, -1);
			iVar1 = func_48(2531, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF6082E2ADA1C795B(&Global_1574405, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF6082E2ADA1C795B(&Global_1574405, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF6082E2ADA1C795B(&Global_1574405, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF6082E2ADA1C795B(&Global_1574405, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF6082E2ADA1C795B(&Global_1574405, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF6082E2ADA1C795B(&Global_1574405, 5);
			}
		}
		func_708();
		func_707();
		func_706();
		if ((!func_39(unk_0x0FFED3E94261A832()) && !func_37(unk_0x0FFED3E94261A832())) && !func_705())
		{
			func_639();
		}
		func_704();
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0) && !unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 1))
		{
			func_795();
		}
		func_703();
		unk_0x507FE690B1271947(&(Global_2497344.f_1703), 2);
		func_702();
		func_701();
	}
	if (unk_0x440E77FA46936F83(1344549371))
	{
		unk_0x74B42EAFF204A87F(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x0FFED3E94261A832() != -1 && !func_319(unk_0x0FFED3E94261A832(), 21)) && !func_321(unk_0x0FFED3E94261A832(), 0))
		{
			func_659(0);
			func_699(0);
			func_698();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_697(26, -1))
		{
			Global_2456868 = -1;
			func_695(26, -1);
		}
	}
	if (!func_693())
	{
		Global_2484463 = 1;
	}
}

int func_693()
{
	if (((!func_543(unk_0x0FFED3E94261A832()) && !func_526(unk_0x0FFED3E94261A832())) && func_509(unk_0x0FFED3E94261A832()) != 146) && !func_694())
	{
		return 0;
	}
	return 1;
}

int func_694()
{
	if ((Global_1638223 == 0 && unk_0x1B154DE2D4606530()) && (((((((Global_1638223.f_5 != 0 || Global_1638223.f_112772 > 0) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 15)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 18)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 19)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 29)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 28)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_695(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xB8D595DDD2159686(0, iParam1);
			break;
		
		default:
			uVar1 = func_696(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0x507FE690B1271947(&iVar0, iParam0);
				unk_0xB8D595DDD2159686(iVar0, iParam1);
			}
			break;
	}
}

int func_696(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_697(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	uVar0 = func_696(iParam1);
	uVar1 = unk_0x29B06605BA5CF280(uVar0);
	return unk_0xAA4F14DA15DB0B51(uVar1, iParam0);
}

void func_698()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar0 /*26*/].f_13, 26))
			{
				unk_0x507FE690B1271947(&(Global_2359719[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_699(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91829.f_8 = 1;
	}
	else
	{
		Global_91829.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_700(iVar0);
		iVar0++;
	}
}

void func_700(int iParam0)
{
	Global_91829.f_163[iParam0] = 1;
	Global_91829.f_162 = 1;
}

void func_701()
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_7 = 0;
}

void func_702()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 1))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4666), 1);
	}
	if (Global_2497344.f_4666 > 0)
	{
		unk_0x988197573BDAD49A("FM_COUNTDOWN_30S_KILL");
		unk_0x988197573BDAD49A("FM_COUNTDOWN_30S_FIRA");
		unk_0x40F160C3038ECAF5("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x6040865446FA4030(1);
		Global_2497344.f_4666 = 0;
		unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
		unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
		unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
		if (!unk_0x35302CD5A5D37EED(unk_0xFABF5258A318B1DC(), "am_pi_menu"))
		{
			if (Global_2497344.f_4676 > -1)
			{
				unk_0x15BA16B33BC155D8(Global_2497344.f_4676);
				Global_2497344.f_4676 = -1;
			}
		}
	}
}

void func_703()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574379 = { Var0 };
}

void func_704()
{
	var uVar0;
	
	Global_1316425 = uVar0;
}

bool func_705()
{
	return Global_1574290;
}

void func_706()
{
	Global_2497344.f_4667 = 0;
}

void func_707()
{
	if (unk_0x0FFED3E94261A832() != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1 = 0;
	}
}

void func_708()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (iVar0 != -1)
	{
		Global_1622795[iVar0 /*431*/] = -1;
	}
}

int func_709(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_204.f_6;
}

void func_710(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217, iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217), iParam0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217, iParam0))
	{
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217), iParam0);
	}
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_40(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_712()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1698, 3) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_1698, 4))
	{
		if (unk_0xF4EE9D6C8E60AE22() || unk_0xEF08C8E0C4679477())
		{
			unk_0x9B0467159FAB9F56(800);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1698, 5))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_1698), 5);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1698, 3))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_1698), 3);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1698, 4))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_1698), 4);
	}
	func_715(0);
	func_714(0);
	func_713(0);
}

void func_713(int iParam0)
{
	if (Global_2497344.f_4439 != iParam0)
	{
		Global_2497344.f_4439 = iParam0;
	}
}

void func_714(bool bParam0)
{
	if (Global_2497344.f_4438 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2497344.f_4438 = bParam0;
	}
}

void func_715(int iParam0)
{
	if (Global_2497344.f_4436 != iParam0)
	{
		Global_2497344.f_4436 = iParam0;
	}
}

void func_716()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			iVar1 = unk_0x8F8E5C33266ED978(iVar0, -1, 0);
			if (iVar1 != 0)
			{
				if (iVar1 != unk_0x2A5EB8B0FE590B91())
				{
					if (unk_0xDB61DD81432BD145(iVar1))
					{
						iVar2 = unk_0xB0BB7458627D389F(iVar1);
						if (unk_0x76BCE6C7B20502DA(iVar2))
						{
							iVar3 = unk_0x675E1E93DBDAF30B(iVar2);
							iVar4 = iVar3;
							if (unk_0xAA4F14DA15DB0B51(Local_320[iVar4 /*8*/].f_1, 0))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar4 /*8*/].f_1, 1))
								{
									bVar5 = true;
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar5)
	{
		func_797();
	}
}

void func_717()
{
	struct<4> Var0;
	
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 10))
		{
			if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 3)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 20))
							{
								if (!func_441())
								{
									if (func_580(0, 1, 1, 1))
									{
										Var0 = { func_718() };
										func_579(&Var0, 30000);
										if (Local_121.f_197 != 2)
										{
											func_578(1);
										}
										unk_0xF6082E2ADA1C795B(&iLocal_577, 10);
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

struct<4> func_718()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL", 16);
			break;
	}
	return Var0;
}

void func_719()
{
	struct<4> Var0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 4))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
			{
				if (func_580(0, 1, 1, 1))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
					{
						if (unk_0xAA4F14DA15DB0B51(iLocal_578, 5))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 6))
							{
								Var0 = { func_723() };
								func_579(&Var0, -1);
								if (Local_121.f_197 != 2)
								{
									func_578(1);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_578, 6);
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(iLocal_578, 8))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 6))
							{
								Var0 = { func_722() };
								func_579(&Var0, -1);
								if (Local_121.f_197 != 2)
								{
									func_578(1);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_578, 6);
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 6))
							{
								Var0 = { func_722() };
								func_579(&Var0, -1);
								if (Local_121.f_197 != 2)
								{
									func_578(1);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_578, 6);
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
					{
						Var0 = { func_721() };
						func_579(&Var0, 30000);
						if (Local_121.f_197 != 2)
						{
							func_578(1);
						}
					}
					unk_0xF6082E2ADA1C795B(&iLocal_577, 4);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
			{
				if (func_580(0, 1, 1, 1))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 20))
					{
						Var0 = { func_721() };
						func_579(&Var0, 30000);
						if (Local_121.f_197 != 2)
						{
							func_578(1);
						}
						unk_0xF6082E2ADA1C795B(&iLocal_577, 4);
					}
				}
			}
		}
		else
		{
			Var0 = { func_720() };
			func_51(&Var0, 1);
			unk_0xF6082E2ADA1C795B(&iLocal_577, 4);
		}
	}
}

struct<4> func_720()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXPD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXPD", 16);
			break;
	}
	return Var0;
}

struct<4> func_721()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL2", 16);
			break;
	}
	return Var0;
}

struct<4> func_722()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITD", 16);
			break;
	}
	return Var0;
}

struct<4> func_723()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITP", 16);
			break;
	}
	return Var0;
}

void func_724(int iParam0)
{
	Global_2497344.f_4752 = iParam0;
}

bool func_725()
{
	return Global_2497344.f_4752;
}

bool func_726(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

struct<4> func_727()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV2", 16);
			break;
	}
	return Var0;
}

void func_728()
{
	if (Local_121.f_197 == 2)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 30))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 2))
					{
						if (!func_8(&uLocal_628))
						{
							func_345(&uLocal_628, 0, 0);
						}
						else if (func_7(&uLocal_628, 10000, 0))
						{
							if (!unk_0x6235C49EA2DBA22D())
							{
								func_729("BRS_BM_EXP1", -1);
								unk_0xF6082E2ADA1C795B(&iLocal_578, 30);
							}
						}
					}
				}
			}
		}
	}
}

void func_729(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_730()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 16))
	{
		if (Local_121.f_21 > 1)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
					{
						iLocal_2037 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (unk_0x8F8E5C33266ED978(iLocal_2037, -1, 0) == unk_0x2A5EB8B0FE590B91())
						{
							if (unk_0x1979A7D1D0538188(iLocal_2037))
							{
								if (((!func_734(iLocal_2037, 1) && !func_733(iLocal_2037)) && !func_732(iLocal_2037)) && !func_731(iLocal_2037))
								{
									if (func_803(unk_0xD3B21CE53AA7BE51(iLocal_2037)))
									{
										unk_0x216B434C1A609F5B(iLocal_2037, 0, 1);
										unk_0xF6082E2ADA1C795B(&iLocal_577, 16);
										iVar2 = 0;
										while (iVar2 < 32)
										{
											unk_0xB082361505D98AC8(iLocal_2037, 0, Global_1574695[iVar2]);
											iVar2++;
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
	if (unk_0x2137828D03306CAF(iLocal_2037))
	{
		if (!func_734(iLocal_2037, 1) && !func_731(iLocal_2037))
		{
			if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iLocal_2037)))
			{
				sVar1 = "PEN_BIKE";
			}
			else
			{
				sVar1 = "PEN_VEHG";
			}
			bVar3 = true;
		}
		else
		{
			if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iLocal_2037)))
			{
				sVar1 = "PEN_PBIKE";
			}
			else
			{
				sVar1 = "PEN_PVEHG";
			}
			bVar3 = true;
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_2037))
	{
		if (func_734(iLocal_2037, 1) || func_731(iLocal_2037))
		{
			if (Local_121.f_21 == 2)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
				{
					if (unk_0x7FAC45D56235AB39(iLocal_2037, 0))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 5))
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iLocal_2037))
								{
									if (!func_380(sVar1))
									{
										func_366(sVar1, 0);
									}
								}
								else if (func_380(sVar1))
								{
									func_378();
								}
							}
						}
						else if (func_380(sVar1))
						{
							func_378();
						}
					}
					else if (bVar3)
					{
						if (func_380(sVar1))
						{
							func_378();
						}
					}
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_577, 16))
	{
		if (Local_121.f_21 == 2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
			{
				if (unk_0x7FAC45D56235AB39(iLocal_2037, 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 5))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (!unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iLocal_2037))
							{
								if (!unk_0xBDD3EABACAB97D09(uLocal_2040))
								{
									uLocal_2040 = unk_0x9E3A324AB806771E(iLocal_2037);
									unk_0xE1DA6FCEE4F2BEEC(uLocal_2040, 1);
								}
								if (!func_380(sVar1))
								{
									func_366(sVar1, 0);
								}
							}
							else if (func_803(unk_0xD3B21CE53AA7BE51(iLocal_2037)))
							{
								if (unk_0xBDD3EABACAB97D09(uLocal_2040))
								{
									unk_0x789C84F1B8496AD0(&uLocal_2040);
								}
								if (bVar3)
								{
									if (func_380(sVar1))
									{
										func_378();
									}
								}
							}
						}
					}
					else if (bVar3)
					{
						if (func_380(sVar1))
						{
							func_378();
						}
					}
				}
				else
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_2040))
					{
						unk_0x789C84F1B8496AD0(&uLocal_2040);
					}
					if (bVar3)
					{
						if (func_380(sVar1))
						{
							func_378();
						}
					}
				}
			}
		}
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_2040) || !unk_0x7FAC45D56235AB39(iLocal_2037, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (func_803(unk_0xD3B21CE53AA7BE51(iVar0)))
				{
					if (iVar0 != iLocal_2037)
					{
						if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
						{
							if (unk_0x1979A7D1D0538188(iVar0))
							{
								iLocal_2037 = iVar0;
								if (bVar3)
								{
									if (func_380(sVar1))
									{
										func_378();
									}
								}
								unk_0x789C84F1B8496AD0(&uLocal_2040);
								if (!func_734(iLocal_2037, 1))
								{
									unk_0x216B434C1A609F5B(iLocal_2037, 0, 1);
								}
							}
						}
						else if (bVar3)
						{
							if (func_380(sVar1))
							{
								func_378();
							}
						}
					}
				}
			}
			else if (unk_0x7FAC45D56235AB39(iLocal_2037, 0))
			{
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 1))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_578, 1);
				unk_0x507FE690B1271947(&iLocal_578, 2);
			}
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 2))
			{
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (func_803(unk_0xD3B21CE53AA7BE51(iVar0)))
				{
					unk_0x507FE690B1271947(&iLocal_578, 1);
					unk_0x507FE690B1271947(&iLocal_578, 2);
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&iLocal_578, 2);
				}
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(iLocal_578, 2))
		{
			unk_0x507FE690B1271947(&iLocal_578, 2);
		}
	}
	if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 2)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 5))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						iVar4 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (unk_0x8F8E5C33266ED978(iVar4, -1, 0) == unk_0x2A5EB8B0FE590B91())
						{
							unk_0xF6082E2ADA1C795B(&iLocal_578, 5);
							func_378();
						}
					}
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 8))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					iVar4 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					if (unk_0x8F8E5C33266ED978(iVar4, -1, 0) != unk_0x2A5EB8B0FE590B91() && unk_0x8F8E5C33266ED978(iVar4, -1, 0) != 0)
					{
						unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 0);
						unk_0xF6082E2ADA1C795B(&iLocal_578, 8);
					}
				}
			}
		}
	}
}

int func_731(int iParam0)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0x4D1A8278BAE26361("MPBitset", 3) && unk_0x30BD96CB13063EC9(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x01307FD0B54F50D3(iParam0, "MPBitset");
			if (unk_0xAA4F14DA15DB0B51(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_732(int iParam0)
{
	if (Global_2497344.f_286[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_733(int iParam0)
{
	if (Global_2497344.f_285 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_734(int iParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(iParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(iParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_735()
{
	char* sVar0;
	
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 10))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
		{
			if (unk_0x8BEECCAAE312A5BA("MP_Player_Inside_Bubble_Scene"))
			{
				unk_0x40F160C3038ECAF5("MP_Player_Inside_Bubble_Scene");
			}
			if (unk_0x8BEECCAAE312A5BA("MP_Player_Outside_Bubble_Scene"))
			{
				unk_0x40F160C3038ECAF5("MP_Player_Outside_Bubble_Scene");
			}
			unk_0xDCE08B9AA97FFEB4("pennedIn");
			unk_0x18A0B296F4932A7B("PennedInOut", 0, 0);
			unk_0x507FE690B1271947(&iLocal_577, 6);
		}
		if (func_380("PEN_BAREA"))
		{
			func_378();
		}
		if (func_380("PEN_BAREA"))
		{
			func_378();
		}
		if (func_380("PEN_AREA"))
		{
			func_378();
		}
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		if (func_893(1))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
			{
				if (unk_0x8BEECCAAE312A5BA("MP_Player_Inside_Bubble_Scene"))
				{
					unk_0x40F160C3038ECAF5("MP_Player_Inside_Bubble_Scene");
				}
				if (unk_0x8BEECCAAE312A5BA("MP_Player_Outside_Bubble_Scene"))
				{
					unk_0x40F160C3038ECAF5("MP_Player_Outside_Bubble_Scene");
				}
				unk_0xDCE08B9AA97FFEB4("pennedIn");
				unk_0x18A0B296F4932A7B("PennedInOut", 0, 0);
				unk_0x507FE690B1271947(&iLocal_577, 6);
			}
			if (func_380("PEN_BAREA"))
			{
				func_378();
			}
			if (func_380("PEN_BAREA"))
			{
				func_378();
			}
			if (func_380("PEN_AREA"))
			{
				func_378();
			}
			func_391();
			return;
		}
	}
	if ((func_808(0) && !unk_0xAA4F14DA15DB0B51(iLocal_578, 2)) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 9))
		{
			unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 9);
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 10))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
			{
				unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 10);
			}
			else if (unk_0xAA4F14DA15DB0B51(iLocal_578, 9))
			{
				unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 10);
			}
		}
		if (func_8(&uLocal_610))
		{
			func_6(&uLocal_610);
			unk_0x5B0C4150F5FC5C02(0, 255, 255, 255);
		}
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 5))
		{
			unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 5);
			unk_0x08BE237DBCD9CBD9(-1, "OOB_Cancel", "GTAO_FM_Events_Soundset", 0);
			unk_0xDC0343058D861402(iLocal_2041);
			unk_0x15BA16B33BC155D8(iLocal_2041);
			unk_0x507FE690B1271947(&iLocal_578, 7);
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
		{
			if (!func_726(55))
			{
				if ((unk_0x2137828D03306CAF(iLocal_2037) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && unk_0x7FAC45D56235AB39(iLocal_2037, 0))
				{
					if (func_380("PEN_AREA"))
					{
						func_378();
					}
				}
				else if (!unk_0xBDD3EABACAB97D09(uLocal_2040))
				{
					if (!func_380("PEN_AREA"))
					{
						func_366("PEN_AREA", 0);
					}
				}
			}
		}
		else if (!func_380("PEN_AREA"))
		{
			func_366("PEN_AREA", 0);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
		{
			if (unk_0x8BEECCAAE312A5BA("MP_Player_Outside_Bubble_Scene"))
			{
				unk_0x40F160C3038ECAF5("MP_Player_Outside_Bubble_Scene");
			}
			unk_0xB0D390F8FEB78903("MP_Player_Inside_Bubble_Scene");
			unk_0x18A0B296F4932A7B("pennedIn", 0, 1);
			unk_0xF6082E2ADA1C795B(&iLocal_577, 6);
		}
	}
	else
	{
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 9))
		{
			unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 9);
		}
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			func_742();
			if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 2))
			{
				if (!func_380("PEN_BAREA"))
				{
					func_366("PEN_BAREA", 0);
				}
			}
			else
			{
				if (!func_380("PEN_EXITV"))
				{
					func_366("PEN_EXITV", 0);
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 24))
				{
					if (func_580(0, 1, 1, 1))
					{
						sVar0 = func_799();
						func_579(sVar0, 30000);
						if (Local_121.f_197 != 2)
						{
							func_578(1);
						}
						unk_0xF6082E2ADA1C795B(&iLocal_577, 24);
					}
				}
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
		{
			if (unk_0x8BEECCAAE312A5BA("MP_Player_Inside_Bubble_Scene"))
			{
				unk_0x40F160C3038ECAF5("MP_Player_Inside_Bubble_Scene");
			}
			unk_0xB0D390F8FEB78903("MP_Player_Outside_Bubble_Scene");
			unk_0xDCE08B9AA97FFEB4("pennedIn");
			unk_0x18A0B296F4932A7B("PennedInOut", 0, 0);
			unk_0x507FE690B1271947(&iLocal_577, 6);
		}
		if (!func_8(&uLocal_610))
		{
			func_345(&uLocal_610, 0, 0);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 7))
		{
			unk_0xF6082E2ADA1C795B(&iLocal_578, 7);
			unk_0x08BE237DBCD9CBD9(-1, "OOB_Start", "GTAO_FM_Events_Soundset", 0);
			iLocal_2041 = unk_0x9FF6FFD9EB30D086();
			unk_0x08BE237DBCD9CBD9(iLocal_2041, "OOB_Timer_Dynamic", "GTAO_FM_Events_Soundset", 0);
			unk_0x634090A93BBC4EEE(iLocal_2041, "Time", (unk_0xBBDA792448DB5A89(func_395()) / 1000f));
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 5))
		{
			unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 5);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 12))
		{
			if (func_8(&uLocal_610))
			{
				if ((func_395() - func_304(&uLocal_610, 0, 0)) >= 0)
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						func_392((func_395() - func_304(&uLocal_610, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					}
					else
					{
						func_739();
					}
				}
				else
				{
					func_739();
				}
			}
		}
	}
	func_736();
	func_797();
}

void func_736()
{
	int iVar0;
	
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		return;
	}
	iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
	if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
			{
				return;
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_578, 2))
	{
		return;
	}
	func_737();
	func_744();
}

void func_737()
{
	struct<4> Var0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 21))
	{
		if ((unk_0x92BC4A8239BDDACC(0, 75) || unk_0x83F6A1E4E653AD75(0, 75)) || unk_0xC20E8B2E17B46871(0, 75))
		{
			unk_0xF6082E2ADA1C795B(&iLocal_577, 21);
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 22))
	{
		if (!unk_0x6235C49EA2DBA22D())
		{
			Var0 = { func_738() };
			func_579(&Var0, 30000);
			if (Local_121.f_197 != 2)
			{
				func_578(1);
			}
			unk_0xF6082E2ADA1C795B(&iLocal_577, 22);
		}
	}
}

struct<4> func_738()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXV", 16);
			break;
	}
	return Var0;
}

void func_739()
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 1))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_577, 18))
	{
		unk_0x507FE690B1271947(&iLocal_577, 18);
	}
	unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
	unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 8);
	unk_0x0AB301FF3F443E28(0);
	if (!unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
	{
		func_296();
		unk_0xF6082E2ADA1C795B(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 1);
		Local_614.f_2 = 378528139;
		Local_614.f_10 = unk_0x0FFED3E94261A832();
		func_740(Local_614, func_741(1));
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
		}
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0x1979A7D1D0538188(iVar0))
				{
				}
				if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(iVar0)))
				{
					iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					unk_0x869E3FDF7FDABA6A(unk_0x2A5EB8B0FE590B91());
					unk_0x869E3FDF7FDABA6A(iVar0);
					if (Local_121.f_197 == 2)
					{
						unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
						unk_0x9C27A9366AD7DE0B(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
						unk_0x507FE690B1271947(&iLocal_579, 2);
						unk_0x337229861BC52CD5(0);
					}
					else
					{
						func_798(1);
					}
					if (!unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(iVar0)))
					{
						unk_0x5E747C0F628B78E8(iVar0, 1, 0, -1);
					}
					else
					{
						unk_0x7DDF1C6CBE6C21B0(iVar0, 1, 0, 0);
					}
					func_724(1);
					unk_0xF6082E2ADA1C795B(&iLocal_577, 20);
				}
			}
			else
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_579, 2))
				{
					unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x507FE690B1271947(&iLocal_579, 2);
				}
				unk_0x869E3FDF7FDABA6A(unk_0x2A5EB8B0FE590B91());
				unk_0x67E5DE1657F60AC6(unk_0x2A5EB8B0FE590B91(), 0);
				func_724(1);
				unk_0xF6082E2ADA1C795B(&iLocal_577, 20);
			}
		}
		else
		{
			func_724(1);
			unk_0xF6082E2ADA1C795B(&iLocal_578, 14);
		}
		iLocal_2771 = func_304(&uLocal_630, 0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 5))
	{
		unk_0x507FE690B1271947(&(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1), 5);
		unk_0xDC0343058D861402(iLocal_2041);
		unk_0x15BA16B33BC155D8(iLocal_2041);
		unk_0x507FE690B1271947(&iLocal_578, 7);
	}
	unk_0xF6082E2ADA1C795B(&iLocal_577, 12);
}

void func_740(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_741(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
			if (func_1083(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_742()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar1 = 80f;
	fVar2 = 0f;
	iVar3 = 130;
	iVar4 = 130;
	fVar0 = ((fVar1 + fVar2) + IntToFloat(unk_0x895FB9FE885E36ED(0, 3)));
	if (unk_0x11ABC381A58DD5AB() - iLocal_2035) >= unk_0xF2DB717A73826179((60000f / fVar0))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 15))
		{
			unk_0xF6082E2ADA1C795B(&iLocal_577, 15);
		}
		iLocal_2035 = unk_0x11ABC381A58DD5AB();
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_577, 15))
	{
		unk_0x507FE690B1271947(&iLocal_577, 15);
	}
	if (func_743())
	{
		unk_0xCE2F5764A6CFB9EF(0, 0, 0);
		unk_0xCE2F5764A6CFB9EF(0, iVar3, iVar4);
		unk_0x5B0C4150F5FC5C02(0, 255, 0, 0);
	}
	else
	{
		unk_0x5B0C4150F5FC5C02(0, 255, 255, 255);
	}
}

bool func_743()
{
	return unk_0xAA4F14DA15DB0B51(iLocal_577, 15);
}

void func_744()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
}

void func_745()
{
	var uVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 14))
	{
		if ((Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 1 || Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 2) || (((func_384(unk_0x0FFED3E94261A832()) && func_808(0)) && unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0)) && !func_893(1)))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					if (unk_0x1979A7D1D0538188(uVar0))
					{
						unk_0xD3E5E6DE4F3CED03(iVar0, 0, 0);
						unk_0xF6082E2ADA1C795B(&iLocal_577, 14);
					}
				}
			}
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 >= 3 || unk_0xAA4F14DA15DB0B51(iLocal_577, 31))
			{
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					if (unk_0x1979A7D1D0538188(iVar0))
					{
						unk_0xD3E5E6DE4F3CED03(iVar0, 1, 0);
						unk_0x507FE690B1271947(&iLocal_577, 14);
					}
				}
			}
		}
		else
		{
			unk_0x507FE690B1271947(&iLocal_577, 14);
		}
	}
}

int func_746(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_321(unk_0x0FFED3E94261A832(), 0) || func_511(unk_0x0FFED3E94261A832(), 0))
	{
		if (func_39(unk_0x0FFED3E94261A832()) || func_43(unk_0x0FFED3E94261A832()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xE66A798F07C5EFC7() < iParam0)
	{
		if (bParam2)
		{
			func_748(sParam3, sParam4, 1);
		}
		if (func_697(26, -1))
		{
			func_695(26, -1);
		}
		return 1;
	}
	if (func_8(&(Global_1574379.f_18)))
	{
		if (!func_7(&(Global_1574379.f_18), 7500, 0))
		{
			return 0;
		}
		func_6(&(Global_1574379.f_18));
	}
	if (func_747())
	{
		if (bParam2)
		{
			func_748(sParam3, sParam4, 0);
		}
		if (func_697(26, -1))
		{
			func_695(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD7577082A8533202() < iParam0)
	{
		if (bParam2)
		{
			func_748(sParam3, sParam4, 1);
		}
		if (func_697(26, -1))
		{
			func_695(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_747()
{
	return unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 0);
}

void func_748(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 2) && !func_44(unk_0x0FFED3E94261A832())) && !func_323(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x58478145CAF8429C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x58478145CAF8429C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_122(66, sParam0, sParam1, 1, -1, 2);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 2);
	}
}

void func_749(var uParam0)
{
	unk_0x73F5E7B6BB964839(uParam0);
	unk_0xC7B777B06F98C301("HUD_MINI_GAME_SOUNDSET");
}

void func_750(int iParam0)
{
	if (func_42())
	{
		if (iParam0 == 1)
		{
			if (Global_2497344.f_4314 == -1)
			{
				Global_2497344.f_4314 = 60000;
			}
			func_139(&(Global_2497344.f_4312), 0, 0);
			if (Global_2497344.f_4317 == -1)
			{
				Global_2497344.f_4317 = 10000;
			}
			func_139(&(Global_2497344.f_4315), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_798(1);
		}
		if ((!unk_0x1B154DE2D4606530() && !func_752()) && !func_751(unk_0x0FFED3E94261A832()))
		{
			Global_979817 = 0;
		}
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_8 = 0;
	}
}

int func_751(int iParam0)
{
	if (func_556(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_752()
{
	return Global_2445217.f_719;
}

void func_753()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (func_755(&uVar0) && unk_0x30BD96CB13063EC9(uVar0, "Veh_Modded_By_Player"))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = unk_0x7C214DA899F05536(iVar1);
			if (func_1083(iVar2, 0, 1))
			{
				if (unk_0x01307FD0B54F50D3(iVar0, "Veh_Modded_By_Player") == unk_0xA417460779EE0AF0(iVar2))
				{
					func_754(func_200(iVar2));
				}
			}
			iVar1++;
		}
	}
}

void func_754(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 84438510;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 2, iParam0);
	}
}

int func_755(var uParam0)
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		*uParam0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (unk_0x4D1A8278BAE26361("bombdec1", 3))
		{
			if (unk_0x30BD96CB13063EC9(*uParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x4D1A8278BAE26361("bombdec", 3))
		{
			if (unk_0x30BD96CB13063EC9(*uParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x4D1A8278BAE26361("bombowner", 3))
		{
			if (unk_0x30BD96CB13063EC9(*uParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_756(bool bParam0)
{
	if (bParam0)
	{
		Global_1312450 = 1;
	}
	else
	{
		Global_1312450 = 0;
	}
}

void func_757(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2456868 = func_509(unk_0x0FFED3E94261A832());
		if (Global_2456868 == -1)
		{
			Global_2456868 = Global_1574379.f_4;
		}
		if (func_780(Global_2456868) == 0)
		{
			if (func_779(1) > 0)
			{
				func_778(26, -1);
			}
		}
		if (func_42())
		{
			func_750(0);
			func_777();
		}
		if (func_932(0))
		{
			iVar1 = func_48(2465, -1, 0);
			unk_0x507FE690B1271947(&iVar1, 0);
			func_777();
		}
		if (func_932(func_573(func_509(unk_0x0FFED3E94261A832()))))
		{
			iVar1 = func_48(2465, -1, 0);
			unk_0x507FE690B1271947(&iVar1, func_573(func_509(unk_0x0FFED3E94261A832())));
			func_777();
		}
		if (func_776())
		{
			func_777();
		}
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 0);
	}
	else
	{
		if ((!func_775() && !func_774()) && !func_773())
		{
			Global_2456868 = -1;
			func_695(26, -1);
		}
		else if (func_780(Global_2456868) == 0)
		{
			iVar0 = func_760(1);
			if (iVar0 > 0)
			{
				func_758(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_179(1927, 1, -1);
				func_758(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_697(26, -1))
		{
			Global_2456868 = -1;
			func_695(26, -1);
		}
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 0);
	}
}

void func_758(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_165(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_759(iParam0))
	{
		func_163(iParam0, iVar0);
	}
	else
	{
		func_167(iParam0, iVar0);
	}
}

int func_759(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_760(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2455759 == 0)
	{
		return 0;
	}
	if (func_773())
	{
		if (unk_0x1B154DE2D4606530() || (func_772() || func_770()))
		{
			Global_2454713 = 1;
		}
	}
	Global_2455759 = 0;
	if (Global_1315678)
	{
		iVar0 = 1;
	}
	if (Global_2454713)
	{
		iVar0 = 1;
	}
	if (Global_2454712)
	{
		iVar0 = 1;
	}
	if (func_419(Global_102264.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2454637)
	{
		iVar0 = 1;
	}
	if (func_769(512))
	{
		iVar0 = 1;
	}
	if (func_768(128))
	{
		iVar0 = 1;
	}
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_688())
	{
		iVar0 = 0;
	}
	if (Global_2455198)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_766())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_324(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_765())
	{
		iVar0 = 0;
	}
	if ((Global_2454713 || Global_2454712) || Global_1315678)
	{
		if (func_770())
		{
			iVar0 = 0;
		}
	}
	Global_2455198 = 0;
	Global_2454712 = 0;
	Global_2454713 = 0;
	Global_1315678 = 0;
	Global_2454637 = 0;
	func_763(&(Global_102264.f_1), 32);
	func_762(512);
	func_761(128);
	return iVar0;
}

void func_761(int iParam0)
{
	Global_102321 = (Global_102321 - (Global_102321 && iParam0));
}

void func_762(int iParam0)
{
	Global_102322 = (Global_102322 - (Global_102322 && iParam0));
}

void func_763(var uParam0, int iParam1)
{
	func_764(uParam0, iParam1);
}

void func_764(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_765()
{
	if (((Global_1574312 || Global_1574283) || func_324(unk_0x0FFED3E94261A832(), 0)) || func_100())
	{
		return 1;
	}
	return 0;
}

int func_766()
{
	switch (func_767())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_767()
{
	return Global_2445989.f_1.f_2819;
}

bool func_768(int iParam0)
{
	return (Global_102321 && iParam0) != 0;
}

bool func_769(int iParam0)
{
	return (Global_102322 && iParam0) != 0;
}

int func_770()
{
	if (func_780(Global_2456868))
	{
		return 0;
	}
	if (func_771(unk_0x0FFED3E94261A832(), 146))
	{
		return 1;
	}
	return 0;
}

int func_771(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_772()
{
	if (func_780(Global_2456868))
	{
		return 0;
	}
	if (func_40(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

bool func_773()
{
	return unk_0xAA4F14DA15DB0B51(Global_1312423, 0);
}

bool func_774()
{
	return Global_1312821;
}

bool func_775()
{
	return Global_1312852;
}

int func_776()
{
	if (Global_2434604.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_777()
{
	if (func_776())
	{
		Global_2434604.f_933.f_16 = 1;
	}
}

void func_778(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xB8D595DDD2159686(0, iParam1);
			break;
		
		default:
			uVar1 = func_696(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (!unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0xF6082E2ADA1C795B(&iVar0, iParam0);
				unk_0xB8D595DDD2159686(iVar0, iParam1);
			}
			break;
	}
}

int func_779(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_688())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_766())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_324(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_765())
	{
		iVar0 = 0;
	}
	Global_2455759 = 1;
	return iVar0;
}

int func_780(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_10048)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_10050)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_10047)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_10051)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_10052)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_10053)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_10049)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_10054)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_10055)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_10056)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_10057)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_781(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
	}
	Global_2497344.f_4676 = -1;
	bVar0 = (func_321(unk_0x0FFED3E94261A832(), 0) && func_39(unk_0x0FFED3E94261A832()));
	if (bParam6)
	{
		func_710(21, 1);
	}
	else
	{
		func_789(iParam0, -1);
		if (func_44(unk_0x0FFED3E94261A832()))
		{
			Global_1574379.f_3 = iParam0;
		}
		else
		{
			func_788(iParam0);
		}
		Global_1574379.f_4 = -1;
		if (func_44(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 5);
		}
		if ((func_42() && !func_320()) || func_319(unk_0x0FFED3E94261A832(), 21))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 4);
		}
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 17);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 20);
		if (func_787(iParam0))
		{
			func_786();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_662(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xFBC4596E19752537(fParam2);
			if (iParam0 == 146)
			{
				unk_0xE0125DCD8DB3EFC3(0);
				unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
			}
		}
		if (func_785(iParam0))
		{
			unk_0xE0125DCD8DB3EFC3(0);
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
			unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391043)
			{
				func_659(1);
				if (func_47(0))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_699(1);
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
		}
		if (bParam5)
		{
			func_784();
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_782(iParam0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 21);
			}
		}
	}
	Global_2484463 = 1;
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_783())
	{
		return 1;
	}
	return 0;
}

int func_783()
{
	switch (func_538())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_784()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4667), 0);
}

int func_785(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_40(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_786()
{
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_209 = 0;
	unk_0x507FE690B1271947(&(Global_2497344.f_4482), 1);
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_788(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/] = iParam0;
}

void func_789(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_932(0) || func_932(func_573(iVar0)))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 2);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 2);
		}
	}
}

void func_790(bool bParam0)
{
	if (bParam0)
	{
		if (!func_38(unk_0x0FFED3E94261A832(), 9))
		{
			if (func_36(unk_0x0FFED3E94261A832()) != 0)
			{
				func_316(9);
			}
		}
	}
	else if (func_38(unk_0x0FFED3E94261A832(), 9))
	{
		func_318(9);
	}
}

void func_791(int iParam0)
{
	if (!func_43(unk_0x0FFED3E94261A832()))
	{
		if (iParam0 || func_36(unk_0x0FFED3E94261A832()) != 0)
		{
			func_316(20);
			if (func_45(unk_0x0FFED3E94261A832()))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
				}
			}
		}
	}
}

struct<4> func_792()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_START2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_START2", 16);
			break;
	}
	return Var0;
}

struct<4> func_793()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_MPLAY", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_MPLAY", 16);
			break;
	}
	return Var0;
}

struct<4> func_794()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_QSTART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_QSTART", 16);
			break;
	}
	return Var0;
}

void func_795()
{
	unk_0xE0125DCD8DB3EFC3(5);
	func_657();
	unk_0xFBC4596E19752537(1f);
	unk_0x507FE690B1271947(&(Global_1574379.f_1), 8);
	func_796();
}

void func_796()
{
	if (Global_1770670)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 0))
		{
			unk_0x507FE690B1271947(&Global_2505107, 0);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 1))
		{
			unk_0x507FE690B1271947(&Global_2505107, 1);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 5))
		{
			unk_0x507FE690B1271947(&Global_2505107, 5);
		}
		if (unk_0x5D03CCED0E46E032(-355737150))
		{
			unk_0x6ADA8071E27ECAB6(-355737150, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-580979506))
		{
			unk_0x6ADA8071E27ECAB6(-580979506, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1426452475))
		{
			unk_0x6ADA8071E27ECAB6(-1426452475, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(745417724))
		{
			unk_0x6ADA8071E27ECAB6(745417724, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1305304906))
		{
			unk_0x6ADA8071E27ECAB6(-1305304906, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1543175077))
		{
			unk_0x6ADA8071E27ECAB6(-1543175077, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-811770997))
		{
			unk_0x6ADA8071E27ECAB6(-811770997, 1, 0, 0);
		}
		Global_1770671 = 0;
	}
	Global_1770670 = 0;
}

void func_797()
{
	unk_0x4E6996123FABDB93(0, 69, 1);
	unk_0x4E6996123FABDB93(0, 70, 1);
	unk_0x4E6996123FABDB93(0, 68, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 91, 1);
	unk_0x4E6996123FABDB93(0, 92, 1);
	unk_0x4E6996123FABDB93(0, 24, 1);
	unk_0x4E6996123FABDB93(0, 257, 1);
	unk_0x4E6996123FABDB93(0, 37, 1);
	if (Local_121.f_197 != 2)
	{
		unk_0x4E6996123FABDB93(0, 99, 1);
		unk_0x4E6996123FABDB93(0, 100, 1);
	}
}

void func_798(bool bParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (!func_42())
		{
			if (func_1083(unk_0x0FFED3E94261A832(), 1, 0))
			{
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 342, 0);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 122, 0);
			}
			unk_0x6D56F76C9BA92337(unk_0x0FFED3E94261A832(), 1f);
			unk_0xDC79B631D35E6B71(0);
			unk_0x337229861BC52CD5(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0x0E76FE9D6BA1007D(0, 0);
				}
			}
		}
		else
		{
			if (func_1083(unk_0x0FFED3E94261A832(), 1, 1))
			{
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 342, 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 122, 1);
				unk_0x6D56F76C9BA92337(unk_0x0FFED3E94261A832(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x0E76FE9D6BA1007D(1, 0);
				}
			}
			unk_0xDC79B631D35E6B71(1);
			unk_0x337229861BC52CD5(0);
		}
	}
}

char* func_799()
{
	char* sVar0;
	
	switch (Local_121.f_197)
	{
		case 0:
			sVar0 = "PEN_VALVEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

struct<4> func_800()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV", 16);
			break;
	}
	return Var0;
}

char* func_801()
{
	char* sVar0;
	
	switch (Local_121.f_197)
	{
		case 0:
			sVar0 = "PEN_VEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

int func_802(int iParam0)
{
	int iVar0;
	
	if (unk_0x4D1A8278BAE26361("MPBitset", 3))
	{
		if (unk_0x30BD96CB13063EC9(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x01307FD0B54F50D3(iParam0, "MPBitset");
		}
		if (unk_0xAA4F14DA15DB0B51(iVar0, 10))
		{
			return 0;
		}
	}
	return 1;
}

int func_803(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if ((iParam0 == joaat("rhino") || iParam0 == joaat("dump")) || iParam0 == joaat("limo2"))
	{
		iVar0 = 0;
	}
	switch (Local_121.f_197)
	{
		case 0:
			break;
		
		case 2:
			if (((!unk_0x4BD9974FDDE2D1EC(iParam0) && !unk_0xD043D4D784E459B0(iParam0)) && !func_804(iParam0)) || unk_0xB8B97965F826E07D(iParam0))
			{
				iVar0 = 0;
			}
			break;
	}
	if (Global_1574379.f_12 != 0 && iParam0 == Global_1574379.f_12)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_804(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chimera"):
			return 1;
		
		default:
	}
	return 0;
}

void func_805(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 4);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 4);
	}
}

struct<4> func_806()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_REGS", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_REGS", 16);
			break;
	}
	return Var0;
}

void func_807()
{
	if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
	{
		unk_0xFBC4596E19752537(0f);
		unk_0xE0125DCD8DB3EFC3(0);
		unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
		unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 8);
	}
}

int func_808(bool bParam0)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (Local_121.f_197 == 2)
	{
		if (func_36(unk_0x0FFED3E94261A832()) < 2)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			Var4 = { func_442() };
			fVar0 = unk_0x4A2E6F541CD8C36E(Var1, Var4, 0);
			fVar7 = (func_443() / 2f);
			if (fVar0 <= fVar7)
			{
				if (unk_0x3FEF699D13BCC798((Var4.f_2 - Var1.f_2)) <= fVar7)
				{
					return 1;
				}
			}
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (fLocal_607 < 10f)
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			fVar0 = unk_0x4A2E6F541CD8C36E(Var1, Local_600, 0);
			if (fVar0 <= fLocal_607)
			{
				if (unk_0x3FEF699D13BCC798((Local_600.f_2 - Var1.f_2)) <= 10f)
				{
					return 1;
				}
			}
		}
		else
		{
			fVar0 = func_388(unk_0x2A5EB8B0FE590B91(), Local_600, 1);
			if (fVar0 <= fLocal_607)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_809(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(uParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam3);
}

char* func_810()
{
	char* sVar0;
	
	switch (Local_121.f_197)
	{
		case 0:
			sVar0 = "PEN_START";
			break;
		
		case 2:
			sVar0 = "CAG_STARC";
			break;
	}
	return sVar0;
}

int func_811()
{
	if (Local_121.f_197 != 2)
	{
		return 1;
	}
	else if (func_832())
	{
		return 1;
	}
	else if (func_36(unk_0x0FFED3E94261A832()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_812(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != iParam0)
	{
		func_825(-1);
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = iParam0;
		if (func_824() != -1)
		{
			func_823(-1);
		}
		if (func_822() != -1)
		{
			func_821(-1);
		}
		func_885(iParam2);
		func_819(iParam0);
		if (!func_666(iParam0))
		{
			fVar0 = func_665(iParam0);
			if (fVar0 != 1f)
			{
				func_662(fVar0);
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
			}
		}
		if (!func_669(iParam0) || iParam3)
		{
			if (func_667(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xE0125DCD8DB3EFC3(0);
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
			}
			else if (unk_0xA0F7964BC7FD74A9() < 5)
			{
				unk_0xFBC4596E19752537(1f);
				unk_0xE0125DCD8DB3EFC3(5);
			}
		}
		if (func_42())
		{
			func_316(27);
		}
		if (bParam1)
		{
			if (!func_315())
			{
				func_659(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 0))
			{
				func_203(6);
			}
			func_818();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
		}
		if (func_45(unk_0x0FFED3E94261A832()) && func_39(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
		}
		func_814();
		if (func_813(iParam0))
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 6);
		}
	}
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_814()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_817();
	iVar2 = func_107(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (func_208(iVar1, iVar2, 1) || func_815(iVar1, unk_0x0FFED3E94261A832()))
			{
				unk_0x8D82B526E9E8D0BD(unk_0x0FFED3E94261A832(), iVar1, uVar3);
				unk_0x8D82B526E9E8D0BD(iVar1, unk_0x0FFED3E94261A832(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_815(int iParam0, int iParam1)
{
	if (func_119(iParam0, 1) && func_119(iParam1, 1))
	{
		return (func_816(iParam0) == func_107(iParam1) || func_816(iParam1) == func_107(iParam0));
	}
	return 0;
}

int func_816(int iParam0)
{
	if (func_119(iParam0, 1))
	{
		return Global_1622795[func_107(iParam0) /*431*/].f_11.f_351;
	}
	return func_346();
}

int func_817()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148();
	if (iVar0 != func_346())
	{
		if (func_1083(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar1 /*431*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_818()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 4);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 6))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 6);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 0);
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 2);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_544 = 0;
	if (Global_2497344.f_4478 > 0)
	{
		unk_0xE0125DCD8DB3EFC3(Global_2497344.f_4478);
	}
	Global_2497344.f_4477 = 0;
}

void func_819(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_48(3766, -1, 0);
	iVar1 = func_820(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		func_135(3766, iVar0, -1, 1, 0);
	}
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_821(int iParam0)
{
	if (Global_2497344.f_4828.f_151 != iParam0)
	{
		Global_2497344.f_4828.f_151 = iParam0;
	}
}

int func_822()
{
	return Global_2497344.f_4828.f_151;
}

void func_823(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

int func_824()
{
	return Global_2497344.f_4828.f_150;
}

void func_825(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = iParam0;
}

void func_826()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 9))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
		{
			unk_0xF6082E2ADA1C795B(&iLocal_578, 9);
		}
	}
	if (Local_121.f_0 != 4)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
				iVar5 = unk_0x1E199569E0295838(iVar4);
				if (!func_324(iVar4, 0))
				{
					if (Local_320[iVar0 /*8*/].f_7 == 0)
					{
						if (iVar0 != unk_0x88641E5BC172153A())
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 0))
							{
								iVar1++;
							}
						}
						if (!func_44(iVar4))
						{
							iVar2++;
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 10))
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 9))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 3))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_578, 9);
							}
						}
					}
					if (iVar0 != unk_0x88641E5BC172153A())
					{
						if (Local_121.f_197 == 0 || Local_121.f_197 == 2)
						{
							if (!unk_0xAA4F14DA15DB0B51(uLocal_2769, iVar0))
							{
								unk_0x0D718959E866D008(iVar4, 0);
								unk_0xF6082E2ADA1C795B(&iLocal_2769, iVar0);
							}
						}
						if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 == 2)
						{
							if (Local_320[iVar0 /*8*/].f_7 == 2)
							{
								if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
								{
									if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 6) && !func_831(unk_0x2A5EB8B0FE590B91(), iVar5))
									{
										if (!unk_0xAA4F14DA15DB0B51(iLocal_581, iVar0))
										{
											if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 1))
											{
												unk_0xF6082E2ADA1C795B(&iLocal_581, iVar0);
												func_829(iVar4, 441, 1);
												if (Local_121.f_197 == 2)
												{
													func_827(iVar4, 1, 1);
												}
											}
										}
										else if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 1))
										{
											unk_0x507FE690B1271947(&iLocal_581, iVar0);
											func_829(iVar4, 441, 0);
											if (Local_121.f_197 == 2)
											{
												func_827(iVar4, 1, 0);
											}
										}
									}
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(iLocal_581, iVar0))
							{
								unk_0x507FE690B1271947(&iLocal_581, iVar0);
								func_829(iVar4, 441, 0);
								if (Local_121.f_197 == 2)
								{
									func_827(iVar4, 1, 0);
								}
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(iLocal_581, iVar0))
						{
							unk_0x507FE690B1271947(&iLocal_581, iVar0);
							func_829(iVar4, 441, 0);
							if (Local_121.f_197 == 2)
							{
								func_827(iVar4, 1, 0);
							}
						}
						if (Local_320[unk_0x88641E5BC172153A() /*8*/].f_7 > 0)
						{
							if (!unk_0xAA4F14DA15DB0B51(uLocal_582, iVar0) && !unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
							{
								if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 9))
								{
									unk_0x35A5A8139089E07B(iVar5, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									unk_0xF6082E2ADA1C795B(&iLocal_582, iVar0);
									if (unk_0xC4A39E4229BD3ABE(iVar5, 0))
									{
										iVar3 = unk_0x0C20E539D876C5B3(iVar5, 0);
										unk_0x35A5A8139089E07B(iVar3, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									}
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 9) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
							{
								unk_0xBE531C3DDFF49F33(iVar5, 0f);
								unk_0x507FE690B1271947(&iLocal_582, iVar0);
								if (unk_0xC4A39E4229BD3ABE(iVar5, 0))
								{
									iVar3 = unk_0x0C20E539D876C5B3(iVar5, 0);
									unk_0xBE531C3DDFF49F33(iVar3, 0f);
								}
							}
						}
						if (Local_121.f_197 == 0 || Local_121.f_197 == 2)
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0x769F0F6444C1ABE0(iVar5))
								{
									if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 8))
									{
										if (!unk_0xAA4F14DA15DB0B51(uLocal_583, iVar0))
										{
											if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 8))
											{
												if (!func_831(unk_0x2A5EB8B0FE590B91(), iVar5))
												{
													if (!unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 11))
													{
														unk_0xF6082E2ADA1C795B(&iLocal_583, iVar0);
														unk_0xF6082E2ADA1C795B(&uLocal_584, iVar4);
														unk_0x0D718959E866D008(iVar4, 1);
													}
												}
											}
										}
										else if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 8))
										{
											unk_0x507FE690B1271947(&iLocal_583, iVar0);
											unk_0x507FE690B1271947(&uLocal_584, iVar4);
											unk_0x0D718959E866D008(iVar4, 0);
										}
										else if (unk_0xAA4F14DA15DB0B51(Local_320[iVar0 /*8*/].f_1, 11))
										{
											unk_0x507FE690B1271947(&iLocal_583, iVar0);
											unk_0x507FE690B1271947(&uLocal_584, iVar4);
											unk_0x0D718959E866D008(iVar4, 0);
										}
										else if (func_831(unk_0x2A5EB8B0FE590B91(), iVar5))
										{
											unk_0x507FE690B1271947(&iLocal_583, iVar0);
											unk_0x507FE690B1271947(&uLocal_584, iVar4);
											unk_0x0D718959E866D008(iVar4, 0);
										}
									}
									else if (unk_0xAA4F14DA15DB0B51(iLocal_583, iVar0))
									{
										unk_0x0D718959E866D008(iVar4, 0);
										unk_0x507FE690B1271947(&iLocal_583, iVar0);
										unk_0x507FE690B1271947(&uLocal_584, iVar4);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_2036 != iVar1)
		{
			iLocal_2036 = iVar1;
		}
		if (iLocal_2768 != iVar2)
		{
			iLocal_2768 = iVar2;
		}
	}
}

void func_827(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_663())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_828(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = iParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_828(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_346())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_663())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_574[iParam0]) || Global_2415029.f_574[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_830();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_830();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_830()
{
	Global_2415029.f_1002 = 1;
}

bool func_831(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0xC4A39E4229BD3ABE(iParam0, 0) || !unk_0xC4A39E4229BD3ABE(iParam1, 0))
	{
		return 0;
	}
	return unk_0x0C20E539D876C5B3(iParam0, 0) == unk_0x0C20E539D876C5B3(iParam1, 0);
}

int func_832()
{
	if (func_119(unk_0x0FFED3E94261A832(), 1))
	{
		if (unk_0x0FFED3E94261A832() == func_341())
		{
			return 1;
		}
		else if (func_833(unk_0x0FFED3E94261A832(), func_341(), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_833(int iParam0, int iParam1, bool bParam2)
{
	return func_834(iParam0, iParam1, bParam2, 1);
}

int func_834(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_346() && iParam0 != func_346())
	{
		if (!bParam2)
		{
			if (func_836(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_346())
		{
			if (iParam1 == Global_1622795[iParam0 /*431*/].f_11)
			{
				return func_835(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_835(int iParam0, int iParam1)
{
	if (func_120(iParam0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1;
	}
	return 0;
}

int func_836(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_346())
	{
		if (iParam0 != func_346())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_346())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					if (Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_837(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_510(unk_0x0FFED3E94261A832());
	if (bParam2 || func_128(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1773272 = iVar0;
		if (func_137(iVar0))
		{
			Global_1773272.f_1 = 4;
		}
		else if (func_877(iVar0))
		{
			Global_1773272.f_1 = 5;
		}
		else if (func_131(iVar0, 0))
		{
			Global_1773272.f_1 = 2;
			if (func_130(iVar0))
			{
				Global_1773272.f_1 = 3;
			}
		}
		else
		{
			Global_1773272.f_1 = 1;
		}
		if (func_148() != func_346())
		{
			Global_1773272.f_4 = func_876(func_148());
			Global_1773272.f_5 = func_875(func_148());
		}
		if (func_210() != func_346())
		{
			func_147(func_210(), &(Global_1773272.f_6), &(Global_1773272.f_7));
		}
		Global_1773272.f_9 = unk_0xDA84A1E29323722E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1773272.f_27 = 1;
			Global_1773272.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1773272.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1773272.f_40 = func_248(iParam1);
			Global_1773272.f_41 = func_874();
			Global_1773272.f_42 = func_249(unk_0x0FFED3E94261A832(), iParam1);
			Global_1773272.f_44 = func_873(unk_0x0FFED3E94261A832(), iParam1);
		}
	}
	else if (func_126(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1773387 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1773387 = iParam0 + 1;
		}
		else
		{
			Global_1773387 = func_872(unk_0x0FFED3E94261A832());
		}
		switch (iVar0)
		{
			case 225:
				if (func_871(unk_0x0FFED3E94261A832()) == 0)
				{
					Global_1773387.f_1 = 0;
				}
				else
				{
					Global_1773387.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1773387.f_1 = 2;
				break;
			
			case 227:
				Global_1773387.f_1 = 3;
				break;
		}
		Global_1773387.f_21 = 1;
		Global_1773387.f_22 = 1;
		if (func_148() != func_346())
		{
			Global_1773387.f_4 = func_876(func_148());
			Global_1773387.f_5 = func_875(func_148());
		}
		if (func_210() != func_346())
		{
			func_147(func_210(), &(Global_1773387.f_4), &(Global_1773387.f_5));
		}
		Global_1773387.f_8 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773387.f_20 = iParam0;
		}
	}
	else if (func_127(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1773325 = iVar0;
		Global_1773272.f_1 = 1;
		if (func_148() != func_346())
		{
			Global_1773325.f_4 = func_876(func_148());
			Global_1773325.f_5 = func_875(func_148());
		}
		if (func_210() != func_346())
		{
			func_147(func_210(), &(Global_1773325.f_6), &(Global_1773325.f_7));
		}
		Global_1773325.f_9 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773325.f_21 = iParam0;
		}
	}
	else
	{
		if (func_148() != func_346())
		{
			Global_1773254 = func_876(func_148());
			Global_1773254.f_1 = func_875(func_148());
		}
		Global_1773254.f_5 = unk_0xDA84A1E29323722E();
		Global_1773254.f_13 = func_870();
		Global_1773254.f_15 = 0;
		if (func_146(1))
		{
			if (func_210() == func_148())
			{
				Global_1773254.f_15 = 1;
			}
		}
		if (func_869())
		{
			Global_1773387.f_28 = 1;
		}
		if ((func_868() || func_867()) || func_866())
		{
			Global_1773387.f_30 = 1;
		}
		if (func_864(func_865(joaat("trailersmall2"))))
		{
			Global_1773387.f_32 = 1;
		}
		if (func_846(func_863(joaat("caddy"))))
		{
			Global_1773387.f_31 = 1;
		}
		if (func_845(unk_0x0FFED3E94261A832()) || func_844(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_29 = 1;
		}
		if (func_843(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_33 = 1;
			Global_1773387.f_34 = 1;
		}
		if (func_842(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_36 = 1;
		}
		if (func_841(0, unk_0x0FFED3E94261A832()) == 1)
		{
			Global_1773387.f_35 = 1;
		}
		if (func_840(unk_0x0FFED3E94261A832(), 3, &uVar1))
		{
			Global_1773387.f_37 = 1;
		}
		if (func_840(unk_0x0FFED3E94261A832(), 7, &uVar1))
		{
			Global_1773387.f_38 = 1;
		}
		if (func_839(unk_0x0FFED3E94261A832()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_838(unk_0x0FFED3E94261A832(), iVar2);
				if (func_245(unk_0x0FFED3E94261A832(), iVar3, 0))
				{
					Global_1773387.f_39 = 1;
				}
				if (func_245(unk_0x0FFED3E94261A832(), iVar3, 2))
				{
					Global_1773387.f_40 = 1;
				}
				if (func_245(unk_0x0FFED3E94261A832(), iVar3, 1))
				{
					Global_1773387.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_838(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_237(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

int func_839(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_840(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_346())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_841(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_841(int iParam0, int iParam1)
{
	if (iParam1 == func_346())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 0))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 3))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 6))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 9))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 12))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 15))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 18))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 21))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 1))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 4))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 7))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 10))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 13))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 16))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 19))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 22))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 2))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 5))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 8))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 11))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 14))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 17))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 20))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 23))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_842(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 7);
}

bool func_843(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 8);
}

bool func_844(int iParam0)
{
	if (iParam0 == func_346())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 11);
}

bool func_845(int iParam0)
{
	if (iParam0 == func_346())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 10);
}

int func_846(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_862(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_860(11));
		func_859(iVar1, &iVar0, 1);
		iVar2 = func_862(func_848(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_48(func_847(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_847(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2813;
				
				case 40:
					return 2820;
				
				case 41:
					return 2827;
				
				case 42:
					return 2834;
				
				case 43:
					return 2841;
				
				case 44:
					return 2848;
				
				case 45:
					return 2855;
				
				case 46:
					return 2862;
				
				case 47:
					return 2869;
				
				case 48:
					return 2876;
				
				case 49:
					return 2883;
				
				case 50:
					return 2889;
				
				case 51:
					return 2895;
				
				case 52:
					return 2937;
				
				case 53:
					return 2944;
				
				case 54:
					return 2951;
				
				case 55:
					return 2958;
				
				case 56:
					return 2965;
				
				case 57:
					return 2972;
				
				case 58:
					return 2979;
				
				case 59:
					return 2986;
				
				case 60:
					return 2993;
				
				case 61:
					return 3000;
				
				case 62:
					return 3007;
				
				case 63:
					return 3013;
				
				case 64:
					return 3019;
				
				case 65:
					return 3220;
				
				case 66:
					return 3228;
				
				case 67:
					return 3236;
				
				case 68:
					return 3244;
				
				case 69:
					return 3252;
				
				case 70:
					return 3260;
				
				case 71:
					return 3268;
				
				case 72:
					return 3276;
				
				case 73:
					return 3284;
				
				case 74:
					return 3292;
				
				case 75:
					return 3300;
				
				case 76:
					return 3308;
				
				case 77:
					return 3316;
				
				case 78:
					return 3324;
				
				case joaat("mpsv_lp0_31"):
					return 3332;
				
				case 80:
					return 3340;
				
				case 81:
					return 3348;
				
				case 82:
					return 3356;
				
				case 83:
					return 3364;
				
				case 84:
					return 3372;
				
				case 85:
					return 3380;
				
				case 86:
					return 3387;
				
				case 87:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4006;
				
				case 89:
					return 4014;
				
				case 90:
					return 4022;
				
				case 91:
					return 4030;
				
				case 92:
					return 4038;
				
				case 93:
					return 4046;
				
				case 94:
					return 4054;
				
				case 95:
					return 4062;
				
				case 96:
					return 4070;
				
				case 97:
					return 4078;
				
				case 98:
					return 4086;
				
				case 99:
					return 4094;
				
				case 100:
					return 4102;
				
				case 101:
					return 4110;
				
				case 102:
					return 4118;
				
				case 103:
					return 4126;
				
				case 104:
					return 4134;
				
				case 105:
					return 4142;
				
				case 106:
					return 4150;
				
				case 107:
					return 4158;
				
				case 108:
					return 4166;
				
				case 109:
					return 4174;
				
				case 110:
					return 4182;
				
				case 111:
					return 4190;
				
				case 112:
					return 4198;
				
				case 113:
					return 4206;
				
				case 114:
					return 4214;
				
				case 115:
					return 4222;
				
				case 116:
					return 4230;
				
				case 117:
					return 4238;
				
				case 118:
					return 4246;
				
				case 119:
					return 4254;
				
				case 120:
					return 4262;
				
				case 121:
					return 4270;
				
				case 122:
					return 4278;
				
				case 123:
					return 4286;
				
				case 124:
					return 4294;
				
				case 125:
					return 4302;
				
				case 126:
					return 4310;
				
				case 127:
					return 4318;
				
				case 128:
					return 4326;
				
				case 129:
					return 4334;
				
				case 130:
					return 4342;
				
				case 131:
					return 4350;
				
				case 132:
					return 4358;
				
				case 133:
					return 4366;
				
				case 134:
					return 4374;
				
				case 135:
					return 4382;
				
				case 136:
					return 4390;
				
				case 137:
					return 4398;
				
				case 138:
					return 4406;
				
				case 139:
					return 4414;
				
				case 140:
					return 4422;
				
				case 141:
					return 4430;
				
				case 142:
					return 4438;
				
				case 143:
					return 4446;
				
				case 144:
					return 4454;
				
				case 145:
					return 4462;
				
				case 146:
					return 4470;
				
				case 147:
					return 4478;
				
				case 148:
					return 4486;
				
				case 149:
					return 4494;
				
				case 150:
					return 4502;
				
				case 151:
					return 4510;
				
				case 152:
					return 4518;
				
				case 153:
					return 4526;
				
				case 154:
					return 4534;
				
				case 155:
					return 4542;
				
				case 156:
					return 4550;
				
				case 157:
					return 4558;
				
				case 158:
					return 5451;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2814;
				
				case 40:
					return 2821;
				
				case 41:
					return 2828;
				
				case 42:
					return 2835;
				
				case 43:
					return 2842;
				
				case 44:
					return 2849;
				
				case 45:
					return 2856;
				
				case 46:
					return 2863;
				
				case 47:
					return 2870;
				
				case 48:
					return 2877;
				
				case 49:
					return 2884;
				
				case 50:
					return 2890;
				
				case 51:
					return 2896;
				
				case 52:
					return 2938;
				
				case 53:
					return 2945;
				
				case 54:
					return 2952;
				
				case 55:
					return 2959;
				
				case 56:
					return 2966;
				
				case 57:
					return 2973;
				
				case 58:
					return 2980;
				
				case 59:
					return 2987;
				
				case 60:
					return 2994;
				
				case 61:
					return 3001;
				
				case 62:
					return 3008;
				
				case 63:
					return 3014;
				
				case 64:
					return 3020;
				
				case 65:
					return 3221;
				
				case 66:
					return 3229;
				
				case 67:
					return 3237;
				
				case 68:
					return 3245;
				
				case 69:
					return 3253;
				
				case 70:
					return 3261;
				
				case 71:
					return 3269;
				
				case 72:
					return 3277;
				
				case 73:
					return 3285;
				
				case 74:
					return 3293;
				
				case 75:
					return 3301;
				
				case 76:
					return 3309;
				
				case 77:
					return 3317;
				
				case 78:
					return 3325;
				
				case joaat("mpsv_lp0_31"):
					return 3333;
				
				case 80:
					return 3341;
				
				case 81:
					return 3349;
				
				case 82:
					return 3357;
				
				case 83:
					return 3365;
				
				case 84:
					return 3373;
				
				case 85:
					return 3381;
				
				case 86:
					return 3388;
				
				case 87:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4007;
				
				case 89:
					return 4015;
				
				case 90:
					return 4023;
				
				case 91:
					return 4031;
				
				case 92:
					return 4039;
				
				case 93:
					return 4047;
				
				case 94:
					return 4055;
				
				case 95:
					return 4063;
				
				case 96:
					return 4071;
				
				case 97:
					return 4079;
				
				case 98:
					return 4087;
				
				case 99:
					return 4095;
				
				case 100:
					return 4103;
				
				case 101:
					return 4111;
				
				case 102:
					return 4119;
				
				case 103:
					return 4127;
				
				case 104:
					return 4135;
				
				case 105:
					return 4143;
				
				case 106:
					return 4151;
				
				case 107:
					return 4159;
				
				case 108:
					return 4167;
				
				case 109:
					return 4175;
				
				case 110:
					return 4183;
				
				case 111:
					return 4191;
				
				case 112:
					return 4199;
				
				case 113:
					return 4207;
				
				case 114:
					return 4215;
				
				case 115:
					return 4223;
				
				case 116:
					return 4231;
				
				case 117:
					return 4239;
				
				case 118:
					return 4247;
				
				case 119:
					return 4255;
				
				case 120:
					return 4263;
				
				case 121:
					return 4271;
				
				case 122:
					return 4279;
				
				case 123:
					return 4287;
				
				case 124:
					return 4295;
				
				case 125:
					return 4303;
				
				case 126:
					return 4311;
				
				case 127:
					return 4319;
				
				case 128:
					return 4327;
				
				case 129:
					return 4335;
				
				case 130:
					return 4343;
				
				case 131:
					return 4351;
				
				case 132:
					return 4359;
				
				case 133:
					return 4367;
				
				case 134:
					return 4375;
				
				case 135:
					return 4383;
				
				case 136:
					return 4391;
				
				case 137:
					return 4399;
				
				case 138:
					return 4407;
				
				case 139:
					return 4415;
				
				case 140:
					return 4423;
				
				case 141:
					return 4431;
				
				case 142:
					return 4439;
				
				case 143:
					return 4447;
				
				case 144:
					return 4455;
				
				case 145:
					return 4463;
				
				case 146:
					return 4471;
				
				case 147:
					return 4479;
				
				case 148:
					return 4487;
				
				case 149:
					return 4495;
				
				case 150:
					return 4503;
				
				case 151:
					return 4511;
				
				case 152:
					return 4519;
				
				case 153:
					return 4527;
				
				case 154:
					return 4535;
				
				case 155:
					return 4543;
				
				case 156:
					return 4551;
				
				case 157:
					return 4559;
				
				case 158:
					return 5452;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4008;
				
				case 89:
					return 4016;
				
				case 90:
					return 4024;
				
				case 91:
					return 4032;
				
				case 92:
					return 4040;
				
				case 93:
					return 4048;
				
				case 94:
					return 4056;
				
				case 95:
					return 4064;
				
				case 96:
					return 4072;
				
				case 97:
					return 4080;
				
				case 98:
					return 4088;
				
				case 99:
					return 4096;
				
				case 100:
					return 4104;
				
				case 101:
					return 4112;
				
				case 102:
					return 4120;
				
				case 103:
					return 4128;
				
				case 104:
					return 4136;
				
				case 105:
					return 4144;
				
				case 106:
					return 4152;
				
				case 107:
					return 4160;
				
				case 108:
					return 4168;
				
				case 109:
					return 4176;
				
				case 110:
					return 4184;
				
				case 111:
					return 4192;
				
				case 112:
					return 4200;
				
				case 113:
					return 4208;
				
				case 114:
					return 4216;
				
				case 115:
					return 4224;
				
				case 116:
					return 4232;
				
				case 117:
					return 4240;
				
				case 118:
					return 4248;
				
				case 119:
					return 4256;
				
				case 120:
					return 4264;
				
				case 121:
					return 4272;
				
				case 122:
					return 4280;
				
				case 123:
					return 4288;
				
				case 124:
					return 4296;
				
				case 125:
					return 4304;
				
				case 126:
					return 4312;
				
				case 127:
					return 4320;
				
				case 128:
					return 4328;
				
				case 129:
					return 4336;
				
				case 130:
					return 4344;
				
				case 131:
					return 4352;
				
				case 132:
					return 4360;
				
				case 133:
					return 4368;
				
				case 134:
					return 4376;
				
				case 135:
					return 4384;
				
				case 136:
					return 4392;
				
				case 137:
					return 4400;
				
				case 138:
					return 4408;
				
				case 139:
					return 4416;
				
				case 140:
					return 4424;
				
				case 141:
					return 4432;
				
				case 142:
					return 4440;
				
				case 143:
					return 4448;
				
				case 144:
					return 4456;
				
				case 145:
					return 4464;
				
				case 146:
					return 4472;
				
				case 147:
					return 4480;
				
				case 148:
					return 4488;
				
				case 149:
					return 4496;
				
				case 150:
					return 4504;
				
				case 151:
					return 4512;
				
				case 152:
					return 4520;
				
				case 153:
					return 4528;
				
				case 154:
					return 4536;
				
				case 155:
					return 4544;
				
				case 156:
					return 4552;
				
				case 157:
					return 4560;
				
				case 158:
					return 5453;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4009;
				
				case 89:
					return 4017;
				
				case 90:
					return 4025;
				
				case 91:
					return 4033;
				
				case 92:
					return 4041;
				
				case 93:
					return 4049;
				
				case 94:
					return 4057;
				
				case 95:
					return 4065;
				
				case 96:
					return 4073;
				
				case 97:
					return 4081;
				
				case 98:
					return 4089;
				
				case 99:
					return 4097;
				
				case 100:
					return 4105;
				
				case 101:
					return 4113;
				
				case 102:
					return 4121;
				
				case 103:
					return 4129;
				
				case 104:
					return 4137;
				
				case 105:
					return 4145;
				
				case 106:
					return 4153;
				
				case 107:
					return 4161;
				
				case 108:
					return 4169;
				
				case 109:
					return 4177;
				
				case 110:
					return 4185;
				
				case 111:
					return 4193;
				
				case 112:
					return 4201;
				
				case 113:
					return 4209;
				
				case 114:
					return 4217;
				
				case 115:
					return 4225;
				
				case 116:
					return 4233;
				
				case 117:
					return 4241;
				
				case 118:
					return 4249;
				
				case 119:
					return 4257;
				
				case 120:
					return 4265;
				
				case 121:
					return 4273;
				
				case 122:
					return 4281;
				
				case 123:
					return 4289;
				
				case 124:
					return 4297;
				
				case 125:
					return 4305;
				
				case 126:
					return 4313;
				
				case 127:
					return 4321;
				
				case 128:
					return 4329;
				
				case 129:
					return 4337;
				
				case 130:
					return 4345;
				
				case 131:
					return 4353;
				
				case 132:
					return 4361;
				
				case 133:
					return 4369;
				
				case 134:
					return 4377;
				
				case 135:
					return 4385;
				
				case 136:
					return 4393;
				
				case 137:
					return 4401;
				
				case 138:
					return 4409;
				
				case 139:
					return 4417;
				
				case 140:
					return 4425;
				
				case 141:
					return 4433;
				
				case 142:
					return 4441;
				
				case 143:
					return 4449;
				
				case 144:
					return 4457;
				
				case 145:
					return 4465;
				
				case 146:
					return 4473;
				
				case 147:
					return 4481;
				
				case 148:
					return 4489;
				
				case 149:
					return 4497;
				
				case 150:
					return 4505;
				
				case 151:
					return 4513;
				
				case 152:
					return 4521;
				
				case 153:
					return 4529;
				
				case 154:
					return 4537;
				
				case 155:
					return 4545;
				
				case 156:
					return 4553;
				
				case 157:
					return 4561;
				
				case 158:
					return 5454;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 13:
					return 1719;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6019;
				
				case 1:
					return 6020;
				
				case 2:
					return 6021;
				
				case 3:
					return 6022;
				
				case 4:
					return 6023;
				
				case 5:
					return 6024;
				
				case 6:
					return 6025;
				
				case 7:
					return 6026;
				
				case 8:
					return 6027;
				
				case 9:
					return 6028;
				
				case 10:
					return 6029;
				
				case 11:
					return 6030;
				
				case 12:
					return 6031;
				
				case 13:
					return 6032;
				
				case 14:
					return 6033;
				
				case 15:
					return 6034;
				
				case 16:
					return 6035;
				
				case 17:
					return 6036;
				
				case 18:
					return 6037;
				
				case 19:
					return 6038;
				
				case 20:
					return 6039;
				
				case 21:
					return 6040;
				
				case 22:
					return 6041;
				
				case 23:
					return 6042;
				
				case 24:
					return 6043;
				
				case 25:
					return 6044;
				
				case 26:
					return 2249;
				
				case 27:
					return 2250;
				
				case 28:
					return 2251;
				
				case 29:
					return 2252;
				
				case 30:
					return 2253;
				
				case 31:
					return 2254;
				
				case 32:
					return 2255;
				
				case 33:
					return 2256;
				
				case 34:
					return 2257;
				
				case 35:
					return 2258;
				
				case 36:
					return 2259;
				
				case 37:
					return 2260;
				
				case 38:
					return 2261;
				
				case 39:
					return 2901;
				
				case 40:
					return 2902;
				
				case 41:
					return 2903;
				
				case 42:
					return 2904;
				
				case 43:
					return 2905;
				
				case 44:
					return 2906;
				
				case 45:
					return 2907;
				
				case 46:
					return 2908;
				
				case 47:
					return 2909;
				
				case 48:
					return 2910;
				
				case 49:
					return 2911;
				
				case 50:
					return 2912;
				
				case 51:
					return 2913;
				
				case 52:
					return 3025;
				
				case 53:
					return 3026;
				
				case 54:
					return 3027;
				
				case 55:
					return 3028;
				
				case 56:
					return 3029;
				
				case 57:
					return 3030;
				
				case 58:
					return 3031;
				
				case 59:
					return 3032;
				
				case 60:
					return 3033;
				
				case 61:
					return 3034;
				
				case 62:
					return 3035;
				
				case 63:
					return 3036;
				
				case 64:
					return 3037;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			break;
	}
	return 1625;
}

int func_848(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 159)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iParam0 >= func_860(iVar0) && iParam0 < func_849(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_849(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_858(iParam0);
		return func_857(iVar0);
	}
	return (func_850(iParam0, -1) * iParam0 + 1);
}

int func_850(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_853(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_852(iParam1))
			{
				return 0;
			}
			else if (func_851(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049460[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_851(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_852(int iParam0)
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

int func_853(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_854(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_854(unk_0x0FFED3E94261A832(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_854(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_346())
	{
		if (!func_856(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_855(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_855(int iParam0)
{
	if (iParam0 != func_346())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_856(int iParam0)
{
	if (iParam0 != func_346())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_858(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_859(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_8827)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1770284[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_860(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_858(iParam0);
		return func_861(iVar0);
	}
	return (func_850(iParam0, -1) * iParam0);
}

int func_861(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_862(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_50();
	}
	if (iParam0 == 7 && !Global_262145.f_15534)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_858(iParam0);
		if (iVar1 == 0 && func_48(5368, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1362008[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2528770[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2528699[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_863(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_864(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_859(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_48(func_847(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_866()
{
	return func_48(5355, -1, 0) != 0;
}

bool func_867()
{
	return func_48(3803, -1, 0) != 0;
}

bool func_868()
{
	return func_48(3208, -1, 0) != 0;
}

bool func_869()
{
	return func_48(5354, -1, 0) != 0;
}

int func_870()
{
	int iVar0;
	
	iVar0 = func_148();
	if (iVar0 != func_346())
	{
		return Global_1622795[iVar0 /*431*/].f_11.f_92;
	}
	return 0;
}

int func_871(int iParam0)
{
	if (func_321(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

int func_872(int iParam0)
{
	if (func_510(iParam0) == 225 || func_510(iParam0) == 226)
	{
		return func_871(iParam0);
	}
	return -1;
}

int func_873(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (func_237(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_874()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_247(unk_0x0FFED3E94261A832(), iVar0))
		{
			unk_0xF6082E2ADA1C795B(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_875(int iParam0)
{
	if (iParam0 == func_346())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_876(int iParam0)
{
	if (iParam0 == func_346())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

void func_878(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_879("kwUfKUus6EuQyNSL8KpY-w");
					func_879("yMTOFLfO2UKwzKrmgPP7kg");
					func_879("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_879("tP5HSeCA0UiHnkRzakdO2Q");
					func_879("uEkrqoerQEmQ0uZRtp4rkw");
					func_879("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_879("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_879("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_879("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_879("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_879("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_879("uEkrqoerQEmQ0uZRtp4rkw");
					func_879("92t91kL3Wkqvl2Kc82cNSA");
					func_879("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_879("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_879("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_879("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_879("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_879("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_879("fOfm7nzMLkav0ldcSCNAzA");
					func_879("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_879("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_879("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_879("Ma78E44OMkGfYPmCPZXUNA");
					func_879("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_879("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_879("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_879("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_879("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_879("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_879("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_879("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_879("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_879("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_879("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_879("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_879("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_879("fOfm7nzMLkav0ldcSCNAzA");
							func_879("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_879("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_879("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_879("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_879("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_879("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_879("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_879("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_879("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_879("fOfm7nzMLkav0ldcSCNAzA");
							func_879("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_879("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_879("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_879("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_879("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_879("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_879("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_879("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_879("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_879("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_879("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_879("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_879("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_879("aGBjo2rKi0yMDLl3a2ATGA");
									func_879("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_879("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_879("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_879("f2lnL6wZPkGWUowu0yLm1Q");
									func_879("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_879("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_879("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_879("W-OJzHlM-0ym9PsIASYZtw");
									func_879("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_879("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_879("TjGz31AMYE6bGCjAIitu6w");
									func_879("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_879("QmlvLMLCwkOvoZlkAstYxw");
									func_879("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_879("BktATxH9R0Wp2x0kWSbqjw");
									func_879("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_879("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_879("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_879("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_879("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_879("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_879("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_879("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_879("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_879("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_879("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_879(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_880(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0xF6082E2ADA1C795B(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_880(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_882(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_881(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_881(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_882(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794643.f_98389[iVar13 /*13*/];
		
		case 62:
			return Global_907640.f_18805[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_882(var uParam0)
{
	int iVar0;
	
	if (unk_0x58478145CAF8429C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_884(uParam0->f_1))
	{
		if (func_883(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_794643.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x35302CD5A5D37EED(&(Global_794643.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_907640.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x35302CD5A5D37EED(&(Global_907640.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x0FFED3E94261A832())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_950886.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_950886.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_883(var uParam0)
{
	if (Global_2398052)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_2398052.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_884(int iParam0)
{
	return iParam0 == 9999;
}

void func_885(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (Global_1622795[iVar0 /*431*/].f_11.f_173 != iParam0)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_173 = iParam0;
	}
}

void func_886()
{
	struct<4> Var0;
	
	if (!unk_0xBDD3EABACAB97D09(uLocal_598))
	{
		if (func_890())
		{
			uLocal_598 = unk_0x9EDB165CAADCAB2C(func_442());
			if (Local_121.f_197 == 2)
			{
				unk_0x9FD1808EF916E312(uLocal_598, 493);
			}
			else
			{
				unk_0x9FD1808EF916E312(uLocal_598, 441);
			}
			unk_0xA4F6216A8431C2E8(uLocal_598, 1);
			unk_0x43FC07DB1C2FA4B3(uLocal_598, 7000);
			unk_0x697F84823ACFF84C(uLocal_598, 9);
			Var0 = { func_889() };
			unk_0xA6B842B66643C116(uLocal_598, &Var0);
			if (Local_121.f_197 == 2)
			{
				func_887(&uLocal_598, iLocal_2770);
			}
			else
			{
				func_887(&uLocal_598, 29);
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_577, 30))
			{
				unk_0x847E5C2DF89423C1();
				unk_0xF6082E2ADA1C795B(&iLocal_577, 30);
			}
		}
	}
}

void func_887(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		iVar0 = func_888(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, iVar0);
	}
}

int func_888(int iParam0)
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
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

struct<4> func_889()
{
	struct<4> Var0;
	
	switch (Local_121.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_BLIP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_BLIP", 16);
			break;
	}
	return Var0;
}

int func_890()
{
	if (Local_121.f_197 != 2)
	{
		return 1;
	}
	else if (func_832())
	{
		return 1;
	}
	else if (func_36(unk_0x0FFED3E94261A832()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_891(struct<3> Param0, bool bParam3)
{
	if (!unk_0xBDD3EABACAB97D09(uLocal_597))
	{
		if (func_890())
		{
			if (!bParam3)
			{
				uLocal_597 = unk_0x8CD099A04D5CA896(Param0, fLocal_607);
				if (Local_121.f_197 != 2)
				{
					unk_0xEB5D36079067EBA5(uLocal_597, 5);
				}
				else
				{
					unk_0xEB5D36079067EBA5(uLocal_597, 5);
				}
			}
			else
			{
				uLocal_597 = unk_0x8CD099A04D5CA896(func_442(), (func_443() / 2f));
				if (Local_121.f_197 != 2)
				{
					func_887(&uLocal_597, 29);
				}
				else
				{
					func_887(&uLocal_597, iLocal_2770);
				}
			}
			unk_0x7FF3A84437112BB2(uLocal_597, 100);
			unk_0xE1E81CBB89115254(uLocal_597, 0);
		}
	}
}

Vector3 func_892()
{
	return Local_632[0 /*3*/];
}

int func_893(bool bParam0)
{
	int iVar0;
	
	if (Local_121.f_197 != 2)
	{
		if (func_323(unk_0x0FFED3E94261A832()))
		{
			iVar0 = 1;
		}
		if (func_932(0))
		{
			iVar0 = 1;
		}
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
		{
			if (func_323(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (func_315())
		{
			iVar0 = 1;
		}
		if (func_924())
		{
			iVar0 = 1;
		}
		if (!func_919(1))
		{
			iVar0 = 1;
		}
		if (func_918(200))
		{
			iVar0 = 1;
		}
	}
	if (bParam0)
	{
		if (Local_121.f_197 == 2)
		{
			if (!func_919(1))
			{
				iVar0 = 1;
			}
		}
		else if (!func_903())
		{
			iVar0 = 1;
		}
	}
	if (!func_895(136, 0, 0))
	{
		iVar0 = 1;
	}
	if (Global_1761100)
	{
		iVar0 = 1;
	}
	if (func_894(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_894(int iParam0)
{
	if (!func_1083(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_895(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6600 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_899(unk_0x0FFED3E94261A832(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4882 == 1)
		{
			return 1;
		}
	}
	if (func_898() || func_897())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_896())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1574366[iVar1], iVar0);
}

int func_896()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 23))
	{
		return 1;
	}
	if (func_898())
	{
		return 1;
	}
	if (func_897())
	{
		return 1;
	}
	uVar0 = Global_1361996[func_49(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 7))
	{
		unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1694), 23);
		return 1;
	}
	return 0;
}

bool func_897()
{
	return Global_1312840;
}

bool func_898()
{
	return Global_1312842;
}

bool func_899(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_902())
	{
		return 0;
	}
	if (func_901())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_900(iParam1);
	iVar1 = uVar0;
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_524, iVar1);
}

int func_900(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_901()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144, 3);
}

int func_902()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_898())
	{
		return 1;
	}
	if (func_897())
	{
		return 1;
	}
	return func_229(120, -1);
}

int func_903()
{
	if (func_319(unk_0x0FFED3E94261A832(), 21))
	{
		return 0;
	}
	if (unk_0x1CF28DE85743D98B())
	{
		return 0;
	}
	if (unk_0x45A42C7863C1A2B9())
	{
		return 0;
	}
	if (func_751(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_585())
	{
		return 0;
	}
	if (func_917(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_564())
	{
		return 0;
	}
	if (func_36(unk_0x0FFED3E94261A832()) == 3)
	{
		return 0;
	}
	if (func_915(func_916()))
	{
		return 0;
	}
	if (func_775())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_557(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_560())
	{
		return 0;
	}
	if (func_319(unk_0x0FFED3E94261A832(), 0) || func_319(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_319(unk_0x0FFED3E94261A832(), 12) || func_319(unk_0x0FFED3E94261A832(), 14)) || func_319(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_911(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_910(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_909())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_894(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_908())
	{
		return 0;
	}
	if (func_907(unk_0x0FFED3E94261A832()) && Global_1592110.f_170)
	{
		return 0;
	}
	if (func_906(unk_0x0FFED3E94261A832()) || func_904(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_904(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (func_1083(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1 && Global_2422215[iParam0 /*387*/].f_318.f_4 != func_346())
			{
				return func_905(Global_2422215[iParam0 /*387*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_905(int iParam0)
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
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
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
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

int func_906(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (func_1083(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_905(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_907(int iParam0)
{
	if (func_852(Global_1592456[iParam0 /*635*/].f_259.f_15))
	{
		return 1;
	}
	return 0;
}

int func_908()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_909()
{
	return Global_91829.f_310 > 0;
}

bool func_910(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11);
}

int func_911(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
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
		if (func_914(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_913(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_912(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_906(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_912(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (func_1083(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_905(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_913(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (func_1083(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_905(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_914(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (func_1083(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_905(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_915(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_916()
{
	return Global_2434604.f_2483[0 /*76*/].f_1;
}

int func_917(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_918(int iParam0)
{
	if (!func_143() && !func_119(unk_0x0FFED3E94261A832(), 1))
	{
		if (!func_39(unk_0x0FFED3E94261A832()))
		{
			if (func_315())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_919(bool bParam0)
{
	if (func_319(unk_0x0FFED3E94261A832(), 21))
	{
		return 0;
	}
	if (unk_0x1CF28DE85743D98B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			return 0;
		}
	}
	if (func_751(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_585())
	{
		return 0;
	}
	if (func_564())
	{
		return 0;
	}
	if (func_775())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_557(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_560())
	{
		return 0;
	}
	if (func_319(unk_0x0FFED3E94261A832(), 0) || func_319(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_319(unk_0x0FFED3E94261A832(), 12) || func_319(unk_0x0FFED3E94261A832(), 14)) || func_319(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_911(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (!func_921())
		{
			return 0;
		}
	}
	if (func_909())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_894(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_908())
	{
		return 0;
	}
	if (func_920(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (func_917(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_920(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_921()
{
	int iVar0;
	
	iVar0 = func_510(unk_0x0FFED3E94261A832());
	if (((func_852(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15) || func_914(unk_0x0FFED3E94261A832())) || func_912(unk_0x0FFED3E94261A832())) || func_923(unk_0x0FFED3E94261A832()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_922(unk_0x0FFED3E94261A832()))
	{
		if (func_137(iVar0) || func_877(iVar0))
		{
			return 1;
		}
	}
	if (func_913(unk_0x0FFED3E94261A832()))
	{
		if (func_877(iVar0))
		{
			return 1;
		}
	}
	if (func_906(unk_0x0FFED3E94261A832()))
	{
		if (func_126(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_922(int iParam0)
{
	if (func_851(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_923(int iParam0)
{
	if (func_853(Global_1592456[iParam0 /*635*/].f_259.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_924()
{
	return 0;
}

void func_925()
{
	int iVar0;
	
	if (iLocal_2770 == 0)
	{
		iVar0 = func_341();
		if (iVar0 != func_346())
		{
			iLocal_2770 = func_926(iVar0);
		}
	}
}

int func_926(int iParam0)
{
	int iVar0;
	
	iVar0 = func_118(iParam0);
	if (iVar0 != -1)
	{
		return func_116(iVar0);
	}
	return 1;
}

var func_927()
{
	return Global_262145.f_9807;
}

float func_928()
{
	if (Local_121.f_197 != 2)
	{
		return Global_262145.f_9804;
	}
	return Global_262145.f_16908;
}

void func_929()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_29(Local_632[0 /*3*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	switch (Local_121.f_167)
	{
		case 0:
			Local_632[0 /*3*/] = { 1476.637f, -2436.075f, 65.2401f };
			Local_632[1 /*3*/] = { 1591.158f, -1980.835f, 93.9884f };
			Local_632[2 /*3*/] = { 1105.58f, -1734.014f, 34.7122f };
			Local_632[3 /*3*/] = { 674.1869f, -1733.183f, 28.3527f };
			Local_632[4 /*3*/] = { 276.4475f, -1857.687f, 25.8607f };
			Local_632[5 /*3*/] = { 241.6554f, -1713.72f, 28.1339f };
			Local_632[6 /*3*/] = { 276.8612f, -1670.451f, 28.3137f };
			Local_632[7 /*3*/] = { 158.5084f, -1512.412f, 28.1416f };
			Local_632[8 /*3*/] = { 154.052f, -1394.604f, 28.3049f };
			Local_632[9 /*3*/] = { 297.3363f, -1202.901f, 28.1848f };
			Local_632[10 /*3*/] = { 216.0453f, -1130.863f, 28.3051f };
			Local_632[11 /*3*/] = { 303.6096f, -1124.259f, 28.4586f };
			Local_632[12 /*3*/] = { 349.6563f, -953.8064f, 28.4776f };
			Local_632[13 /*3*/] = { 228.3761f, -955.8815f, 28.3232f };
			iLocal_1502 = 14;
			break;
		
		case 1:
			Local_632[0 /*3*/] = { -1900.185f, 2050.775f, 139.7211f };
			Local_632[1 /*3*/] = { -1797.919f, 1886.775f, 147.74f };
			Local_632[2 /*3*/] = { -1710.175f, 1885.316f, 160.217f };
			Local_632[3 /*3*/] = { -1610.52f, 2033.944f, 101.5237f };
			Local_632[4 /*3*/] = { -1517.004f, 2141.703f, 55.0511f };
			Local_632[5 /*3*/] = { -1337.505f, 2178.097f, 51.2807f };
			Local_632[6 /*3*/] = { -1147.637f, 2341.332f, 98.8094f };
			Local_632[7 /*3*/] = { -934.5955f, 2262.843f, 140.7183f };
			Local_632[8 /*3*/] = { -730.47f, 2344.86f, 68.405f };
			Local_632[9 /*3*/] = { -708.701f, 2426.99f, 61.1469f };
			Local_632[10 /*3*/] = { -573.3401f, 2500.494f, 50.3152f };
			Local_632[11 /*3*/] = { -545.0461f, 2672.93f, 44.4979f };
			Local_632[12 /*3*/] = { -436.4757f, 2756.389f, 44.6457f };
			Local_632[13 /*3*/] = { -322.5151f, 2775.025f, 61.0514f };
			Local_632[14 /*3*/] = { -149.1279f, 2737.515f, 54.9277f };
			Local_632[15 /*3*/] = { 222.302f, 2489.443f, 53.8394f };
			Local_632[16 /*3*/] = { 569.7415f, 2454.868f, 58.4488f };
			Local_632[17 /*3*/] = { 753.546f, 2518.788f, 72.1194f };
			Local_632[18 /*3*/] = { 924.3738f, 2593.375f, 60.2089f };
			Local_632[19 /*3*/] = { 965.1749f, 2621.371f, 45.0674f };
			Local_632[20 /*3*/] = { 1039.363f, 2671.289f, 38.5509f };
			iLocal_1502 = 21;
			break;
		
		case 2:
			Local_632[0 /*3*/] = { 2304f, 1469f, 66f };
			Local_632[1 /*3*/] = { 2131f, 2031f, 96f };
			Local_632[2 /*3*/] = { 2059f, 2868f, 52f };
			Local_632[3 /*3*/] = { 2707f, 3485f, 64f };
			Local_632[4 /*3*/] = { 2855f, 3729f, 47f };
			Local_632[5 /*3*/] = { 2506f, 4153f, 41f };
			Local_632[6 /*3*/] = { 2885f, 4472f, 51f };
			Local_632[7 /*3*/] = { 2786.236f, 4941.378f, 32.6857f };
			Local_632[8 /*3*/] = { 2890.608f, 5034.026f, 30.7725f };
			Local_632[9 /*3*/] = { 3058.765f, 5052.091f, 24.441f };
			Local_632[10 /*3*/] = { 3063.052f, 5094.116f, 23.0524f };
			Local_632[11 /*3*/] = { 3131.718f, 5101.371f, 20.6628f };
			Local_632[12 /*3*/] = { 3175.018f, 5118.771f, 16.61f };
			Local_632[13 /*3*/] = { 3228.467f, 5133.4f, 18.321f };
			Local_632[14 /*3*/] = { 3283.499f, 5150.864f, 17.6323f };
			Local_632[15 /*3*/] = { 3297.67f, 5150.701f, 17.3023f };
			Local_632[16 /*3*/] = { 3320.565f, 5151.295f, 17.3289f };
			Local_632[17 /*3*/] = { 3337.017f, 5151.827f, 17.4344f };
			Local_632[18 /*3*/] = { 3348.801f, 5152.016f, 18.4475f };
			iLocal_1502 = 19;
			break;
		
		case 3:
			func_931();
			Local_632[0 /*3*/] = { -1210.197f, -2437.739f, 12.9452f };
			Local_632[1 /*3*/] = { -1342.587f, -2667.462f, 12.9449f };
			Local_632[2 /*3*/] = { -1220.798f, -2861.65f, 12.9455f };
			Local_632[3 /*3*/] = { -1126.435f, -2699.413f, 22.00294f };
			Local_632[4 /*3*/] = { -1017.039f, -2713.215f, 34.56547f };
			Local_632[5 /*3*/] = { -936.5955f, -2585.454f, 21.38621f };
			Local_632[6 /*3*/] = { -841.7922f, -2569.529f, 16.83603f };
			Local_632[7 /*3*/] = { -723.1095f, -2396.833f, 17.03123f };
			Local_632[8 /*3*/] = { -616.2985f, -2279.408f, 13.04065f };
			Local_632[9 /*3*/] = { -677.7834f, -2181.811f, 14.21462f };
			Local_632[10 /*3*/] = { -613.1539f, -2109.985f, 21.81665f };
			Local_632[11 /*3*/] = { -475.038f, -2148f, 17.4868f };
			Local_632[12 /*3*/] = { -336.4597f, -2143.653f, 13.9572f };
			Local_632[13 /*3*/] = { -256.3312f, -2131.896f, 22.1408f };
			Local_632[14 /*3*/] = { -162.249f, -2084.908f, 26.85073f };
			Local_632[15 /*3*/] = { -161.8921f, -2043.37f, 21.8606f };
			Local_632[16 /*3*/] = { -154.6475f, -2009.529f, 21.8819f };
			Local_632[17 /*3*/] = { -186.8038f, -2005.34f, 26.6204f };
			Local_632[18 /*3*/] = { -216.7214f, -1999.232f, 26.7554f };
			iLocal_1502 = 19;
			break;
		
		case 4:
			Local_632[0 /*3*/] = { 105.443f, 7028.38f, 10.2844f };
			Local_632[1 /*3*/] = { 157.7284f, 6525.143f, 30.6533f };
			Local_632[2 /*3*/] = { -59.2422f, 6653.804f, 28.721f };
			Local_632[3 /*3*/] = { -168.4514f, 6476.554f, 29.0678f };
			Local_632[4 /*3*/] = { -111.8802f, 6419.246f, 30.4455f };
			Local_632[5 /*3*/] = { -154.2424f, 6339.732f, 30.6176f };
			Local_632[6 /*3*/] = { -93.9484f, 6279.499f, 30.3124f };
			Local_632[7 /*3*/] = { -182.7545f, 6195.686f, 30.1968f };
			Local_632[8 /*3*/] = { -260.1141f, 6185.812f, 30.4429f };
			Local_632[9 /*3*/] = { -304.2122f, 6227.968f, 30.4542f };
			Local_632[10 /*3*/] = { -473.7666f, 6066.529f, 29.34f };
			Local_632[11 /*3*/] = { -715.7206f, 6049.093f, -0.0726f };
			Local_632[12 /*3*/] = { -811.3691f, 5957.282f, 19.4103f };
			Local_632[13 /*3*/] = { -897.6384f, 6050.558f, 43.1834f };
			iLocal_1502 = 14;
			break;
		
		case 6:
			Local_632[0 /*3*/] = { 770.8729f, -232.9857f, 65.1145f };
			Local_632[1 /*3*/] = { 838.7502f, -256.9497f, 64.6297f };
			Local_632[2 /*3*/] = { 903.3063f, -221.7793f, 68.666f };
			Local_632[3 /*3*/] = { 935.5661f, -166.9423f, 73.4974f };
			Local_632[4 /*3*/] = { 935.502f, -150.7537f, 73.7236f };
			Local_632[5 /*3*/] = { 903.4067f, -123.2328f, 76.2099f };
			Local_632[6 /*3*/] = { 881.9219f, -103.4221f, 78.4213f };
			Local_632[7 /*3*/] = { 880.8146f, -80.6718f, 77.7643f };
			Local_632[8 /*3*/] = { 924.9553f, -20.0444f, 77.7643f };
			Local_632[9 /*3*/] = { 953.8312f, -19.9404f, 77.764f };
			Local_632[10 /*3*/] = { 968.3574f, -3.2091f, 79.9909f };
			Local_632[11 /*3*/] = { 1009.373f, 64.5172f, 79.9909f };
			Local_632[12 /*3*/] = { 1004.334f, 70.7857f, 79.9909f };
			Local_632[13 /*3*/] = { 961.9669f, 97.0632f, 79.9909f };
			Local_632[14 /*3*/] = { 974.4698f, 116.5434f, 79.9909f };
			Local_632[15 /*3*/] = { 1023.872f, 169.1899f, 79.9905f };
			Local_632[16 /*3*/] = { 1023.795f, 181.0932f, 79.8559f };
			Local_632[17 /*3*/] = { 1003.224f, 191.8311f, 79.9087f };
			Local_632[18 /*3*/] = { 945.6973f, 122.5348f, 79.7235f };
			Local_632[19 /*3*/] = { 931.2999f, 104.402f, 78.3884f };
			Local_632[20 /*3*/] = { 884.1791f, 48.7134f, 77.631f };
			Local_632[21 /*3*/] = { 820.7046f, -20.0586f, 79.7007f };
			Local_632[22 /*3*/] = { 824.5161f, -65.76f, 79.6442f };
			Local_632[23 /*3*/] = { 854.3058f, -113.1723f, 78.3323f };
			Local_632[24 /*3*/] = { 847.928f, -140.3758f, 77.3008f };
			Local_632[25 /*3*/] = { 825.0543f, -176.4968f, 71.886f };
			Local_632[26 /*3*/] = { 803.1815f, -203.4303f, 71.9304f };
			Local_632[27 /*3*/] = { 772.341f, -248.5203f, 65.1143f };
			Local_632[28 /*3*/] = { 766.5759f, -268.8026f, 65.4267f };
			Local_632[29 /*3*/] = { 751.6126f, -300.7643f, 58.892f };
			Local_632[30 /*3*/] = { 723.4518f, -321.204f, 51.9976f };
			Local_632[31 /*3*/] = { 691.1819f, -341.8955f, 39.0741f };
			Local_632[32 /*3*/] = { 644.3198f, -353.9926f, 29.0699f };
			Local_632[33 /*3*/] = { 628.4379f, -365.0165f, 23.5751f };
			Local_632[34 /*3*/] = { 607.2872f, -399.7075f, 23.7997f };
			Local_632[35 /*3*/] = { 599.2954f, -478.0787f, 23.7562f };
			Local_632[36 /*3*/] = { 566.7018f, -553.8478f, 23.7368f };
			Local_632[37 /*3*/] = { 538.7103f, -643.3187f, 23.7397f };
			Local_632[38 /*3*/] = { 508.0503f, -682.8132f, 24.2827f };
			Local_632[39 /*3*/] = { 456.5249f, -685.2498f, 26.8735f };
			Local_632[40 /*3*/] = { 456.4284f, -821.7599f, 26.5584f };
			Local_632[41 /*3*/] = { 406.9605f, -830.3608f, 28.3306f };
			Local_632[42 /*3*/] = { 406.1039f, -876.7354f, 28.3905f };
			Local_632[43 /*3*/] = { 402.9865f, -938.0498f, 28.4551f };
			Local_632[44 /*3*/] = { 404.8474f, -950.4066f, 28.4433f };
			Local_632[45 /*3*/] = { 416.964f, -954.1458f, 28.4324f };
			Local_632[46 /*3*/] = { 485.1107f, -954.6018f, 26.3922f };
			Local_632[47 /*3*/] = { 496.7718f, -957.6362f, 26.1527f };
			Local_632[48 /*3*/] = { 500.8447f, -966.6793f, 26.4009f };
			Local_632[49 /*3*/] = { 499.6066f, -1038.969f, 27.357f };
			Local_632[50 /*3*/] = { 482.2613f, -1070.182f, 28.2113f };
			Local_632[51 /*3*/] = { 462.5394f, -1125.002f, 28.3189f };
			Local_632[52 /*3*/] = { 452.1105f, -1131.479f, 28.4588f };
			Local_632[53 /*3*/] = { 411.7074f, -1132.298f, 28.4582f };
			Local_632[54 /*3*/] = { 401.2792f, -1126.838f, 28.4871f };
			Local_632[55 /*3*/] = { 398.4309f, -1108.895f, 28.4618f };
			Local_632[56 /*3*/] = { 398.5521f, -1011.637f, 28.4602f };
			Local_632[57 /*3*/] = { 391.9118f, -1000.936f, 28.4172f };
			Local_632[58 /*3*/] = { 384.0373f, -999.108f, 28.4212f };
			Local_632[59 /*3*/] = { 280.6655f, -998.2255f, 28.2999f };
			Local_632[60 /*3*/] = { 274.747f, -997.3961f, 28.3239f };
			Local_632[61 /*3*/] = { 254.8134f, -990.8824f, 28.2714f };
			Local_632[62 /*3*/] = { 244.1949f, -980.8467f, 28.3573f };
			Local_632[63 /*3*/] = { 244.9183f, -958.1761f, 28.3041f };
			Local_632[64 /*3*/] = { 265.0497f, -896.29f, 27.9801f };
			Local_632[65 /*3*/] = { 259.8165f, -869.8301f, 28.273f };
			Local_632[66 /*3*/] = { 226.9681f, -839.9088f, 29.2632f };
			Local_632[67 /*3*/] = { 224.8172f, -815.2034f, 29.5278f };
			Local_632[68 /*3*/] = { 223.5029f, -758.9518f, 29.8235f };
			Local_632[69 /*3*/] = { 234.023f, -729.6653f, 29.8196f };
			Local_632[70 /*3*/] = { 268.7956f, -743.4052f, 33.64f };
			Local_632[71 /*3*/] = { 224.9066f, -736.6704f, 33.2013f };
			Local_632[72 /*3*/] = { 172.0603f, -721.1422f, 32.1324f };
			Local_632[73 /*3*/] = { 75.1364f, -688.8935f, 30.6218f };
			Local_632[74 /*3*/] = { 112.1867f, -577.6705f, 30.47f };
			Local_632[75 /*3*/] = { 58.5058f, -554.6415f, 32.7843f };
			Local_632[76 /*3*/] = { -35.6377f, -545.9135f, 38.9156f };
			Local_632[77 /*3*/] = { -77.4362f, -537.5404f, 39.1736f };
			iLocal_1502 = 78;
			break;
		
		case 7:
			Local_632[0 /*3*/] = { 174.5999f, -2079.691f, 16.7487f };
			Local_632[1 /*3*/] = { 152.0048f, -2053.034f, 17.3217f };
			Local_632[2 /*3*/] = { 150.1924f, -2031.796f, 17.3217f };
			Local_632[3 /*3*/] = { 152.2747f, -2013.484f, 17.1417f };
			Local_632[4 /*3*/] = { 156.9549f, -2002.106f, 17.2518f };
			Local_632[5 /*3*/] = { 164.4116f, -1991.569f, 17.2641f };
			Local_632[6 /*3*/] = { 205.3133f, -1942.91f, 20.535f };
			Local_632[7 /*3*/] = { 211.3832f, -1932.955f, 21.5803f };
			Local_632[8 /*3*/] = { 208.533f, -1920.367f, 22.2848f };
			Local_632[9 /*3*/] = { 196.7893f, -1907.76f, 22.6872f };
			Local_632[10 /*3*/] = { 182.3722f, -1898.424f, 22.5606f };
			Local_632[11 /*3*/] = { 108.5148f, -1864.741f, 23.4672f };
			Local_632[12 /*3*/] = { 86.2217f, -1841.194f, 24.2874f };
			Local_632[13 /*3*/] = { 43.7092f, -1805.996f, 24.4549f };
			Local_632[14 /*3*/] = { 17.8062f, -1777.351f, 28.2925f };
			Local_632[15 /*3*/] = { 21.8941f, -1750.064f, 28.3031f };
			Local_632[16 /*3*/] = { 44.7469f, -1721.505f, 28.3031f };
			Local_632[17 /*3*/] = { 63.9396f, -1707.914f, 28.2608f };
			Local_632[18 /*3*/] = { 76.1903f, -1681.886f, 28.3242f };
			Local_632[19 /*3*/] = { 86.0975f, -1653.219f, 28.3469f };
			Local_632[20 /*3*/] = { 116.5378f, -1632.756f, 28.3471f };
			Local_632[21 /*3*/] = { 152.7263f, -1602.194f, 28.3415f };
			Local_632[22 /*3*/] = { 143.9074f, -1564.712f, 28.2093f };
			Local_632[23 /*3*/] = { 145.1265f, -1550.904f, 28.1529f };
			Local_632[24 /*3*/] = { 153.1621f, -1536.478f, 28.3099f };
			Local_632[25 /*3*/] = { 156.3295f, -1515.14f, 28.1416f };
			Local_632[26 /*3*/] = { 148.7433f, -1498.556f, 28.1416f };
			Local_632[27 /*3*/] = { 128.6626f, -1476.814f, 28.1416f };
			Local_632[28 /*3*/] = { 104.1582f, -1414.095f, 28.1921f };
			Local_632[29 /*3*/] = { 83.6966f, -1380.602f, 28.2915f };
			Local_632[30 /*3*/] = { 50.458f, -1383.531f, 28.2943f };
			Local_632[31 /*3*/] = { -1.9688f, -1383.943f, 28.3059f };
			Local_632[32 /*3*/] = { -24.7047f, -1377.866f, 28.1996f };
			Local_632[33 /*3*/] = { -92.3499f, -1377.083f, 28.3276f };
			Local_632[34 /*3*/] = { -130.9038f, -1387.612f, 28.4695f };
			Local_632[35 /*3*/] = { -148.5784f, -1398.707f, 29.0652f };
			Local_632[36 /*3*/] = { -148.0146f, -1415.724f, 29.7007f };
			Local_632[37 /*3*/] = { -140.9057f, -1431.51f, 29.8724f };
			Local_632[38 /*3*/] = { -172.1216f, -1469.894f, 31.0887f };
			Local_632[39 /*3*/] = { -200.9877f, -1510.344f, 30.632f };
			Local_632[40 /*3*/] = { -228.8574f, -1535.488f, 30.6189f };
			Local_632[41 /*3*/] = { -242.2845f, -1539.538f, 30.5592f };
			Local_632[42 /*3*/] = { -256.5187f, -1570.94f, 30.9427f };
			Local_632[43 /*3*/] = { -268.7609f, -1629.413f, 30.8488f };
			Local_632[44 /*3*/] = { -255.8852f, -1689.953f, 30.8488f };
			Local_632[45 /*3*/] = { -224.6088f, -1727.568f, 31.5576f };
			Local_632[46 /*3*/] = { -182.6528f, -1758.622f, 28.8952f };
			Local_632[47 /*3*/] = { -148.3479f, -1787.901f, 28.7988f };
			Local_632[48 /*3*/] = { -122.57f, -1807.999f, 27.3089f };
			Local_632[49 /*3*/] = { -73.0749f, -1876.611f, 7.596f };
			Local_632[50 /*3*/] = { -39.416f, -1901.59f, 9.9099f };
			Local_632[51 /*3*/] = { 7.5512f, -1955.098f, 4.4117f };
			Local_632[52 /*3*/] = { 55.3094f, -2021.311f, 0.4589f };
			Local_632[53 /*3*/] = { 69.4583f, -2095.662f, 0.2051f };
			Local_632[54 /*3*/] = { 49.8936f, -2146.708f, 1.5683f };
			Local_632[55 /*3*/] = { 41.0185f, -2157.943f, 4.4323f };
			Local_632[56 /*3*/] = { 24.7718f, -2164.335f, 8.1637f };
			Local_632[57 /*3*/] = { -2.2288f, -2158.396f, 9.2835f };
			Local_632[58 /*3*/] = { -22.7019f, -2158.668f, 9.3111f };
			Local_632[59 /*3*/] = { -38.4647f, -2199.598f, 6.8117f };
			Local_632[60 /*3*/] = { -45.3264f, -2212.231f, 6.8117f };
			Local_632[61 /*3*/] = { -55.3598f, -2222.49f, 6.8117f };
			Local_632[62 /*3*/] = { -82.3358f, -2223.918f, 6.8117f };
			Local_632[63 /*3*/] = { -131.381f, -2223.081f, 6.8117f };
			Local_632[64 /*3*/] = { -150.9629f, -2233.896f, 6.8117f };
			Local_632[65 /*3*/] = { -158.0284f, -2244.346f, 6.8117f };
			Local_632[66 /*3*/] = { -181.3241f, -2250.348f, 6.8117f };
			Local_632[67 /*3*/] = { -262.8565f, -2253.175f, 6.9858f };
			Local_632[68 /*3*/] = { -294.0698f, -2233.267f, 7.2625f };
			Local_632[69 /*3*/] = { -297.9966f, -2218.1f, 8.5029f };
			Local_632[70 /*3*/] = { -313.9771f, -2206.949f, 8.4925f };
			Local_632[71 /*3*/] = { -327.7408f, -2209.155f, 7.2109f };
			Local_632[72 /*3*/] = { -364.1004f, -2262.198f, 6.6082f };
			Local_632[73 /*3*/] = { -374.4983f, -2272.426f, 6.6082f };
			Local_632[74 /*3*/] = { -375.8295f, -2282.563f, 6.6082f };
			iLocal_1502 = 75;
			break;
		
		case 8:
			Local_632[0 /*3*/] = { -2653.049f, 1505.637f, 116.9031f };
			Local_632[1 /*3*/] = { -2663.594f, 1470.743f, 122.7177f };
			Local_632[2 /*3*/] = { -2681.781f, 1433.767f, 120.1581f };
			Local_632[3 /*3*/] = { -2701.294f, 1403.518f, 112.9536f };
			Local_632[4 /*3*/] = { -2717.157f, 1376.807f, 105.1303f };
			Local_632[5 /*3*/] = { -2748.094f, 1336.441f, 89.7583f };
			Local_632[6 /*3*/] = { -2772.662f, 1306.338f, 82.0139f };
			Local_632[7 /*3*/] = { -2807.116f, 1282.497f, 71.1255f };
			Local_632[8 /*3*/] = { -2860.727f, 1279.025f, 58.2654f };
			Local_632[9 /*3*/] = { -2904.519f, 1259.097f, 40.7003f };
			Local_632[10 /*3*/] = { -2921.85f, 1257.993f, 37.2144f };
			Local_632[11 /*3*/] = { -2945.241f, 1243.167f, 31.8372f };
			Local_632[12 /*3*/] = { -2971.91f, 1212.205f, 23.1993f };
			Local_632[13 /*3*/] = { -2993.662f, 1208.524f, 18.0748f };
			Local_632[14 /*3*/] = { -3038.551f, 1209.651f, 14.0096f };
			Local_632[15 /*3*/] = { -3107.971f, 1226.064f, 9.658f };
			Local_632[16 /*3*/] = { -3199.303f, 1252.489f, 4.3497f };
			Local_632[17 /*3*/] = { -3218.386f, 1252.134f, 2.8398f };
			Local_632[18 /*3*/] = { -3236.587f, 1234.213f, 2.2581f };
			Local_632[19 /*3*/] = { -3257.229f, 1188.7f, 1.6827f };
			Local_632[20 /*3*/] = { -3268.847f, 1110.996f, 1.1708f };
			Local_632[21 /*3*/] = { -3286.199f, 1046.93f, 2.2738f };
			Local_632[22 /*3*/] = { -3291.467f, 984.0225f, 2.3848f };
			Local_632[23 /*3*/] = { -3291.941f, 951.162f, 1.1346f };
			Local_632[24 /*3*/] = { -3284.428f, 937.3236f, 1.0801f };
			Local_632[25 /*3*/] = { -3266.242f, 925.3865f, 1.6379f };
			Local_632[26 /*3*/] = { -3234.646f, 874.3011f, 1.695f };
			Local_632[27 /*3*/] = { -3219.083f, 829.6504f, 1.2816f };
			Local_632[28 /*3*/] = { -3198.246f, 813.9434f, 2.7979f };
			Local_632[29 /*3*/] = { -3165.079f, 798.1581f, 6.5002f };
			Local_632[30 /*3*/] = { -3143.296f, 790.5193f, 7.0137f };
			Local_632[31 /*3*/] = { -3124.516f, 789.1387f, 16.9934f };
			Local_632[32 /*3*/] = { -3094.212f, 777.5895f, 18.5135f };
			Local_632[33 /*3*/] = { -3086.898f, 756.6077f, 19.5227f };
			Local_632[34 /*3*/] = { -3093.979f, 726.5751f, 20.3224f };
			Local_632[35 /*3*/] = { -3082.263f, 693.1727f, 15.8985f };
			Local_632[36 /*3*/] = { -3056.846f, 661.2524f, 9.0803f };
			Local_632[37 /*3*/] = { -3043.558f, 636.358f, 6.5869f };
			Local_632[38 /*3*/] = { -3024.625f, 583.9476f, 6.8377f };
			Local_632[39 /*3*/] = { -3019.437f, 554.1682f, 6.6729f };
			Local_632[40 /*3*/] = { -3021.381f, 512.9918f, 6.234f };
			Local_632[41 /*3*/] = { -3031.198f, 466.6764f, 5.5596f };
			Local_632[42 /*3*/] = { -3049.935f, 424.7576f, 5.5665f };
			Local_632[43 /*3*/] = { -3066.961f, 377.4491f, 6.0668f };
			Local_632[44 /*3*/] = { -3057.431f, 345.7499f, 8.5701f };
			Local_632[45 /*3*/] = { -3046.631f, 292.6304f, 18.9137f };
			Local_632[46 /*3*/] = { -3041.826f, 279.6342f, 16.9957f };
			Local_632[47 /*3*/] = { -3035.306f, 269.0156f, 14.7234f };
			Local_632[48 /*3*/] = { -3012.362f, 233.9675f, 15.2325f };
			Local_632[49 /*3*/] = { -3013.188f, 213.9026f, 15.268f };
			Local_632[50 /*3*/] = { -3011.671f, 196.2197f, 15.146f };
			Local_632[51 /*3*/] = { -3006.454f, 177.695f, 14.8855f };
			Local_632[52 /*3*/] = { -2994.663f, 154.9807f, 14.3746f };
			Local_632[53 /*3*/] = { -2979.672f, 136.2853f, 13.7377f };
			Local_632[54 /*3*/] = { -2950.832f, 112.3324f, 12.904f };
			Local_632[55 /*3*/] = { -2921.329f, 97.7186f, 12.7178f };
			Local_632[56 /*3*/] = { -2851.489f, 75.2672f, 13.5427f };
			Local_632[57 /*3*/] = { -2836.61f, 32.9254f, 12.8794f };
			Local_632[58 /*3*/] = { -2831.988f, 18.7339f, 10.4085f };
			Local_632[59 /*3*/] = { -2824.56f, -8.0105f, 6.1181f };
			Local_632[60 /*3*/] = { -2803.649f, -81.9439f, -0.221f };
			Local_632[61 /*3*/] = { -2780.207f, -96.5313f, 0.3584f };
			Local_632[62 /*3*/] = { -2736.673f, -109.0135f, 0.5296f };
			Local_632[63 /*3*/] = { -2700.451f, -141.5591f, 0.9655f };
			Local_632[64 /*3*/] = { -2671.83f, -175.5449f, 1.0133f };
			Local_632[65 /*3*/] = { -2630.613f, -198.3817f, 2.1479f };
			Local_632[66 /*3*/] = { -2547.985f, -249.0516f, 2.2801f };
			Local_632[67 /*3*/] = { -2473.847f, -295.0556f, 2.7219f };
			Local_632[68 /*3*/] = { -2434.094f, -326.3175f, 3.0194f };
			Local_632[69 /*3*/] = { -2410.113f, -331.2293f, 2.6013f };
			Local_632[70 /*3*/] = { -2376.031f, -335.9692f, 2.5363f };
			Local_632[71 /*3*/] = { -2356.186f, -344.7604f, 2.6766f };
			Local_632[72 /*3*/] = { -2327.246f, -365.7754f, 2.3142f };
			Local_632[73 /*3*/] = { -2276.542f, -398.5323f, 1.8233f };
			Local_632[74 /*3*/] = { -2230.823f, -415.3987f, 3.087f };
			Local_632[75 /*3*/] = { -2213.564f, -418.7813f, 5.5765f };
			Local_632[76 /*3*/] = { -2199.396f, -420.4765f, 11.8061f };
			Local_632[77 /*3*/] = { -2176.137f, -416.0254f, 12.2345f };
			Local_632[78 /*3*/] = { -2126.029f, -402.4269f, 11.7143f };
			Local_632[79 /*3*/] = { -2102.225f, -366.2369f, 11.8076f };
			Local_632[80 /*3*/] = { -2095.268f, -318.8827f, 12.0248f };
			Local_632[81 /*3*/] = { -2093.999f, -264.2969f, 18.7933f };
			Local_632[82 /*3*/] = { -2089.104f, -214.1321f, 19.5783f };
			Local_632[83 /*3*/] = { -2071.153f, -210.7178f, 21.0689f };
			Local_632[84 /*3*/] = { -2050.075f, -223.6322f, 25.6497f };
			Local_632[85 /*3*/] = { -2030.981f, -224.0641f, 27.9967f };
			Local_632[86 /*3*/] = { -1998.867f, -224.0556f, 31.1763f };
			Local_632[87 /*3*/] = { -1987.922f, -232.1616f, 32.9357f };
			Local_632[88 /*3*/] = { -1986.724f, -241.0943f, 33.9168f };
			Local_632[89 /*3*/] = { -1980.237f, -257.3627f, 33.6684f };
			Local_632[90 /*3*/] = { -1966.573f, -261.1625f, 34.9521f };
			Local_632[91 /*3*/] = { -1948.827f, -242.7568f, 34.8759f };
			Local_632[92 /*3*/] = { -1938.963f, -233.8106f, 35.8376f };
			Local_632[93 /*3*/] = { -1911.051f, -214.8513f, 35.2168f };
			Local_632[94 /*3*/] = { -1874.86f, -185.5185f, 37.115f };
			Local_632[95 /*3*/] = { -1864.559f, -180.1412f, 43.2547f };
			Local_632[96 /*3*/] = { -1850.851f, -185.8726f, 45.6611f };
			Local_632[97 /*3*/] = { -1834.413f, -189.1538f, 48.8693f };
			Local_632[98 /*3*/] = { -1815.983f, -200.1424f, 50.7411f };
			Local_632[99 /*3*/] = { -1805.788f, -203.853f, 51.7412f };
			Local_632[100 /*3*/] = { -1792.717f, -217.502f, 50.9357f };
			Local_632[101 /*3*/] = { -1774.695f, -229.8553f, 51.7138f };
			Local_632[102 /*3*/] = { -1756.903f, -238.1252f, 52.0989f };
			Local_632[103 /*3*/] = { -1736.251f, -241.4447f, 52.672f };
			Local_632[104 /*3*/] = { -1712.573f, -240.3414f, 53.0528f };
			Local_632[105 /*3*/] = { -1699.116f, -234.5364f, 54.4754f };
			Local_632[106 /*3*/] = { -1689.302f, -217.4817f, 56.5364f };
			Local_632[107 /*3*/] = { -1682.485f, -202.5944f, 56.595f };
			Local_632[108 /*3*/] = { -1680.894f, -188.3022f, 56.5344f };
			Local_632[109 /*3*/] = { -1682.963f, -173.7911f, 56.5401f };
			Local_632[110 /*3*/] = { -1689.333f, -162.1221f, 56.5802f };
			Local_632[111 /*3*/] = { -1702.223f, -155.7313f, 56.3958f };
			Local_632[112 /*3*/] = { -1709.647f, -161.5643f, 56.4539f };
			Local_632[113 /*3*/] = { -1715.474f, -168.1092f, 56.503f };
			Local_632[114 /*3*/] = { -1725.536f, -168.0596f, 56.7325f };
			Local_632[115 /*3*/] = { -1733.644f, -169.4988f, 57.5363f };
			Local_632[116 /*3*/] = { -1733.434f, -177.1803f, 58.3052f };
			Local_632[117 /*3*/] = { -1731.431f, -182.4709f, 57.4901f };
			Local_632[118 /*3*/] = { -1730.025f, -191.5667f, 57.3605f };
			iLocal_1502 = 119;
			break;
		
		case 9:
			Local_632[0 /*3*/] = { -1463.912f, 2789.826f, 20.0877f };
			Local_632[1 /*3*/] = { -1477.148f, 2845.476f, 25.45f };
			Local_632[2 /*3*/] = { -1506.965f, 2872.34f, 30.2234f };
			Local_632[3 /*3*/] = { -1577.26f, 2932.705f, 31.917f };
			Local_632[4 /*3*/] = { -1591.626f, 2997.577f, 32.261f };
			Local_632[5 /*3*/] = { -1639.98f, 3059.17f, 29.948f };
			Local_632[6 /*3*/] = { -1645.001f, 3178.496f, 29.4591f };
			Local_632[7 /*3*/] = { -1655.642f, 3226.443f, 33.7777f };
			Local_632[8 /*3*/] = { -1694.704f, 3249.402f, 32.0673f };
			Local_632[9 /*3*/] = { -1725.478f, 3262.473f, 31.5433f };
			Local_632[10 /*3*/] = { -1951.812f, 3391.708f, 31.1172f };
			Local_632[11 /*3*/] = { -1984.661f, 3398.118f, 31.1172f };
			Local_632[12 /*3*/] = { -2011.397f, 3398.739f, 30.4796f };
			Local_632[13 /*3*/] = { -2034.775f, 3383.387f, 30.2602f };
			Local_632[14 /*3*/] = { -2065.773f, 3384.615f, 30.3096f };
			Local_632[15 /*3*/] = { -2109.027f, 3382.438f, 30.9568f };
			Local_632[16 /*3*/] = { -2137.183f, 3393.041f, 31.1325f };
			Local_632[17 /*3*/] = { -2143.365f, 3397.595f, 32.7541f };
			Local_632[18 /*3*/] = { -2161.112f, 3410.701f, 31.6593f };
			Local_632[19 /*3*/] = { -2187.906f, 3415.621f, 31.7261f };
			Local_632[20 /*3*/] = { -2199.671f, 3426.611f, 31.6199f };
			Local_632[21 /*3*/] = { -2217.014f, 3434.519f, 31.6187f };
			Local_632[22 /*3*/] = { -2237.547f, 3433.59f, 31.6194f };
			Local_632[23 /*3*/] = { -2251.789f, 3432.903f, 32.4218f };
			Local_632[24 /*3*/] = { -2256.215f, 3432.564f, 31.059f };
			Local_632[25 /*3*/] = { -2276.618f, 3439.096f, 31.0393f };
			Local_632[26 /*3*/] = { -2292.811f, 3446.875f, 30.8394f };
			Local_632[27 /*3*/] = { -2315.683f, 3443.764f, 30.3699f };
			Local_632[28 /*3*/] = { -2341.133f, 3432.404f, 28.5928f };
			Local_632[29 /*3*/] = { -2365.814f, 3428.073f, 26.8742f };
			Local_632[30 /*3*/] = { -2381.983f, 3423.883f, 30.3016f };
			Local_632[31 /*3*/] = { -2394.041f, 3416.595f, 30.5506f };
			Local_632[32 /*3*/] = { -2530.589f, 3337.515f, 30.4319f };
			Local_632[33 /*3*/] = { -2548.137f, 3339.134f, 28.6846f };
			Local_632[34 /*3*/] = { -2562.008f, 3341.58f, 28.0224f };
			Local_632[35 /*3*/] = { -2588.223f, 3351.021f, 24.6836f };
			Local_632[36 /*3*/] = { -2594.071f, 3356.079f, 22.1251f };
			Local_632[37 /*3*/] = { -2595.745f, 3365.915f, 17.9894f };
			Local_632[38 /*3*/] = { -2595.793f, 3377.574f, 12.8038f };
			Local_632[39 /*3*/] = { -2608.662f, 3392.612f, 13.1174f };
			Local_632[40 /*3*/] = { -2623.495f, 3407.143f, 13.6065f };
			Local_632[41 /*3*/] = { -2653.212f, 3424.437f, 13.7192f };
			Local_632[42 /*3*/] = { -2699.876f, 3437.248f, 12.9223f };
			Local_632[43 /*3*/] = { -2721.948f, 3443.959f, 11.9598f };
			Local_632[44 /*3*/] = { -2779.478f, 3456.656f, 10.6559f };
			Local_632[45 /*3*/] = { -2804.644f, 3470.18f, 9.7878f };
			Local_632[46 /*3*/] = { -2825.771f, 3501.169f, 7.9953f };
			Local_632[47 /*3*/] = { -2837.044f, 3518.584f, 7.4085f };
			Local_632[48 /*3*/] = { -2864.506f, 3523.516f, 7.1469f };
			Local_632[49 /*3*/] = { -2913.54f, 3523.989f, 7.2342f };
			Local_632[50 /*3*/] = { -2944.496f, 3519.349f, 7.215f };
			Local_632[51 /*3*/] = { -2957.936f, 3509.118f, 7.5977f };
			Local_632[52 /*3*/] = { -2968.712f, 3494.814f, 8.0967f };
			Local_632[53 /*3*/] = { -2982.313f, 3472.155f, 8.5156f };
			Local_632[54 /*3*/] = { -2997.359f, 3440.916f, 8.5745f };
			Local_632[55 /*3*/] = { -3006.354f, 3441.868f, 8.3125f };
			Local_632[56 /*3*/] = { -3010.171f, 3442.161f, 7.8361f };
			Local_632[57 /*3*/] = { -3016.127f, 3442.632f, 6.1649f };
			Local_632[58 /*3*/] = { -3044.019f, 3439.902f, 2.6837f };
			Local_632[59 /*3*/] = { -3083.78f, 3434.43f, 0.6736f };
			Local_632[60 /*3*/] = { -3108.864f, 3426.914f, 0.5969f };
			Local_632[61 /*3*/] = { -3121.052f, 3417.526f, 0.8856f };
			Local_632[62 /*3*/] = { -3128.933f, 3401.378f, 0.723f };
			Local_632[63 /*3*/] = { -3127.117f, 3385.608f, -0.0289f };
			Local_632[64 /*3*/] = { -3120.614f, 3370.245f, -0.3007f };
			Local_632[65 /*3*/] = { -3120.843f, 3355.337f, -0.3184f };
			Local_632[66 /*3*/] = { -3131.457f, 3337.666f, -0.4124f };
			Local_632[67 /*3*/] = { -3130.055f, 3331.133f, 0.453f };
			Local_632[68 /*3*/] = { -3126.044f, 3311.187f, 1.9264f };
			Local_632[69 /*3*/] = { -3121.625f, 3297.583f, 4.969f };
			Local_632[70 /*3*/] = { -3114.625f, 3288.416f, 5.7302f };
			Local_632[71 /*3*/] = { -3109.753f, 3286.727f, 5.3114f };
			Local_632[72 /*3*/] = { -3094.209f, 3285.138f, 3.4169f };
			Local_632[73 /*3*/] = { -3078.461f, 3294.387f, 3.5013f };
			Local_632[74 /*3*/] = { -3064.696f, 3299.328f, 4.393f };
			Local_632[75 /*3*/] = { -3042.485f, 3298.661f, 4.2975f };
			Local_632[76 /*3*/] = { -3012.822f, 3298.938f, 8.3148f };
			Local_632[77 /*3*/] = { -3005.919f, 3298.79f, 8.8372f };
			Local_632[78 /*3*/] = { -2979.524f, 3296.409f, 9.4458f };
			Local_632[79 /*3*/] = { -2965.909f, 3290.236f, 10.2551f };
			Local_632[80 /*3*/] = { -2956.04f, 3279.582f, 10.3873f };
			Local_632[81 /*3*/] = { -2941.26f, 3267.032f, 10.8597f };
			Local_632[82 /*3*/] = { -2928.623f, 3259.063f, 10.4515f };
			Local_632[83 /*3*/] = { -2922.033f, 3248.532f, 9.6349f };
			Local_632[84 /*3*/] = { -2917.52f, 3233.934f, 9.5718f };
			Local_632[85 /*3*/] = { -2907.681f, 3215.423f, 9.8787f };
			Local_632[86 /*3*/] = { -2879.219f, 3175.582f, 9.9335f };
			Local_632[87 /*3*/] = { -2837.914f, 3137.461f, 9.104f };
			Local_632[88 /*3*/] = { -2778.595f, 3095.414f, 7.9147f };
			Local_632[89 /*3*/] = { -2755.339f, 3093.435f, 7.9238f };
			Local_632[90 /*3*/] = { -2732.754f, 3091.263f, 11.8101f };
			Local_632[91 /*3*/] = { -2715.51f, 3088.629f, 18.9392f };
			Local_632[92 /*3*/] = { -2704.912f, 3088.065f, 22.5439f };
			Local_632[93 /*3*/] = { -2698.571f, 3088.829f, 24.5249f };
			Local_632[94 /*3*/] = { -2688.089f, 3088.755f, 26.9138f };
			Local_632[95 /*3*/] = { -2668.202f, 3087.626f, 31.0204f };
			Local_632[96 /*3*/] = { -2663.953f, 3087.523f, 31.2972f };
			Local_632[97 /*3*/] = { -2649.556f, 3076.861f, 31.3129f };
			Local_632[98 /*3*/] = { -2625.872f, 3048.057f, 31.3104f };
			Local_632[99 /*3*/] = { -2598.408f, 3019.676f, 31.4648f };
			Local_632[100 /*3*/] = { -2586.226f, 3015.642f, 31.7198f };
			Local_632[101 /*3*/] = { -2560.566f, 2996.848f, 37.5706f };
			Local_632[102 /*3*/] = { -2552.737f, 2986.765f, 36.5308f };
			Local_632[103 /*3*/] = { -2545.417f, 2969.709f, 35.8487f };
			Local_632[104 /*3*/] = { -2540.366f, 2955.316f, 35.0142f };
			Local_632[105 /*3*/] = { -2532.989f, 2947.141f, 34.4408f };
			Local_632[106 /*3*/] = { -2527.326f, 2945.037f, 33.7632f };
			Local_632[107 /*3*/] = { -2510.012f, 2935.014f, 31.8324f };
			Local_632[108 /*3*/] = { -2506.855f, 2927.783f, 31.8324f };
			Local_632[109 /*3*/] = { -2502f, 2923.38f, 31.8656f };
			Local_632[110 /*3*/] = { -2453.283f, 2895.443f, 31.827f };
			Local_632[111 /*3*/] = { -2448.633f, 2893.234f, 31.8105f };
			Local_632[112 /*3*/] = { -2441.97f, 2894.076f, 31.8161f };
			Local_632[113 /*3*/] = { -2435.053f, 2899.211f, 31.8101f };
			Local_632[114 /*3*/] = { -2419.494f, 2912.728f, 31.8101f };
			Local_632[115 /*3*/] = { -2410.999f, 2920.665f, 31.8101f };
			Local_632[116 /*3*/] = { -2402.981f, 2926.109f, 31.8101f };
			Local_632[117 /*3*/] = { -2388.711f, 2931.548f, 31.8101f };
			Local_632[118 /*3*/] = { -2376.195f, 2935.068f, 31.8101f };
			Local_632[119 /*3*/] = { -2362.174f, 2937.172f, 31.8101f };
			Local_632[120 /*3*/] = { -2349.693f, 2937.485f, 31.8097f };
			Local_632[121 /*3*/] = { -2335.747f, 2935.854f, 31.8095f };
			Local_632[122 /*3*/] = { -2318.942f, 2929.66f, 31.7445f };
			Local_632[123 /*3*/] = { -2297.421f, 2923.055f, 31.402f };
			Local_632[124 /*3*/] = { -2273.065f, 2913.495f, 31.1485f };
			Local_632[125 /*3*/] = { -2255.359f, 2902.834f, 31.3591f };
			Local_632[126 /*3*/] = { -2229.69f, 2883.807f, 31.236f };
			Local_632[127 /*3*/] = { -2202.925f, 2869.314f, 31.1578f };
			Local_632[128 /*3*/] = { -2183.306f, 2857.042f, 31.1936f };
			Local_632[129 /*3*/] = { -2163.49f, 2841.464f, 31.3816f };
			Local_632[130 /*3*/] = { -2149.862f, 2823.891f, 31.4544f };
			Local_632[131 /*3*/] = { -2144.587f, 2808.735f, 31.4497f };
			Local_632[132 /*3*/] = { -2132.177f, 2795.02f, 31.7241f };
			Local_632[133 /*3*/] = { -2108.141f, 2785.463f, 31.7808f };
			Local_632[134 /*3*/] = { -2068.579f, 2784.021f, 31.4615f };
			Local_632[135 /*3*/] = { -2051.136f, 2791.31f, 31.825f };
			Local_632[136 /*3*/] = { -2042.002f, 2795.728f, 31.2093f };
			Local_632[137 /*3*/] = { -2024.121f, 2799.866f, 31.5836f };
			Local_632[138 /*3*/] = { -2004.372f, 2797.404f, 31.7003f };
			Local_632[139 /*3*/] = { -1976.047f, 2791.383f, 31.5104f };
			Local_632[140 /*3*/] = { -1947.483f, 2778.565f, 31.1414f };
			Local_632[141 /*3*/] = { -1936.379f, 2768.897f, 31.1447f };
			Local_632[142 /*3*/] = { -1929.758f, 2758.106f, 30.6489f };
			Local_632[143 /*3*/] = { -1925.991f, 2751.949f, 25.9925f };
			Local_632[144 /*3*/] = { -1921.41f, 2746.268f, 24.8392f };
			Local_632[145 /*3*/] = { -1915.137f, 2739.659f, 23.8019f };
			Local_632[146 /*3*/] = { -1900.307f, 2727.201f, 21.1878f };
			Local_632[147 /*3*/] = { -1883.745f, 2715.262f, 19.6892f };
			Local_632[148 /*3*/] = { -1875.748f, 2711.08f, 12.552f };
			Local_632[149 /*3*/] = { -1867.896f, 2703.139f, 3.0778f };
			Local_632[150 /*3*/] = { -1861.963f, 2692.423f, 3.1018f };
			Local_632[151 /*3*/] = { -1857.476f, 2683.575f, 3.2905f };
			Local_632[152 /*3*/] = { -1848.774f, 2668.988f, 2.0379f };
			Local_632[153 /*3*/] = { -1842.34f, 2663.985f, 1.5316f };
			Local_632[154 /*3*/] = { -1838.295f, 2661.605f, 0.5979f };
			Local_632[155 /*3*/] = { -1815.526f, 2665.483f, 0.7053f };
			Local_632[156 /*3*/] = { -1805.632f, 2669.156f, 2.2314f };
			Local_632[157 /*3*/] = { -1786.138f, 2670.602f, 2.2725f };
			Local_632[158 /*3*/] = { -1771.023f, 2668.491f, 2.1361f };
			Local_632[159 /*3*/] = { -1760.869f, 2665.975f, 1.8861f };
			Local_632[160 /*3*/] = { -1755.284f, 2664.367f, 1.7509f };
			Local_632[161 /*3*/] = { -1748.707f, 2663.003f, 1.9587f };
			Local_632[162 /*3*/] = { -1736.189f, 2659.886f, 1.9917f };
			Local_632[163 /*3*/] = { -1728.476f, 2658.183f, 1.9464f };
			Local_632[164 /*3*/] = { -1722.725f, 2657.996f, 2.0025f };
			Local_632[165 /*3*/] = { -1719.555f, 2657.884f, 1.4411f };
			Local_632[166 /*3*/] = { -1715.606f, 2657.734f, 0.7234f };
			Local_632[167 /*3*/] = { -1710.382f, 2658.301f, 0.4668f };
			Local_632[168 /*3*/] = { -1707.359f, 2659.483f, 0.282f };
			Local_632[169 /*3*/] = { -1703.736f, 2660.578f, 0.5126f };
			Local_632[170 /*3*/] = { -1697.277f, 2662.122f, 0.7382f };
			Local_632[171 /*3*/] = { -1694.411f, 2662.705f, 1.5014f };
			Local_632[172 /*3*/] = { -1690.597f, 2663.54f, 1.8258f };
			Local_632[173 /*3*/] = { -1683.022f, 2665.116f, 1.8626f };
			Local_632[174 /*3*/] = { -1677.613f, 2664.286f, 1.8642f };
			Local_632[175 /*3*/] = { -1675.041f, 2662.993f, 1.525f };
			Local_632[176 /*3*/] = { -1669.615f, 2661.57f, 1.3865f };
			Local_632[177 /*3*/] = { -1660.996f, 2660.514f, 1.5346f };
			Local_632[178 /*3*/] = { -1654.274f, 2660.621f, 1.3163f };
			Local_632[179 /*3*/] = { -1652.602f, 2661.721f, 0.846f };
			Local_632[180 /*3*/] = { -1650.772f, 2663.604f, 0.3205f };
			Local_632[181 /*3*/] = { -1648.723f, 2666.767f, -0.3498f };
			Local_632[182 /*3*/] = { -1646.614f, 2670.389f, -0.2246f };
			Local_632[183 /*3*/] = { -1645.298f, 2672.659f, 0.4074f };
			Local_632[184 /*3*/] = { -1643.886f, 2675.479f, 1.3415f };
			Local_632[185 /*3*/] = { -1643.052f, 2678.978f, 1.7816f };
			Local_632[186 /*3*/] = { -1643.81f, 2684.713f, 1.9387f };
			Local_632[187 /*3*/] = { -1644.436f, 2692.437f, 2.6905f };
			Local_632[188 /*3*/] = { -1643.396f, 2700.886f, 4.7337f };
			Local_632[189 /*3*/] = { -1642.371f, 2702.699f, 4.6934f };
			Local_632[190 /*3*/] = { -1634.92f, 2708.292f, 4.7769f };
			Local_632[191 /*3*/] = { -1622.842f, 2712.665f, 4.7364f };
			Local_632[192 /*3*/] = { -1616.741f, 2718.592f, 4.7278f };
			Local_632[193 /*3*/] = { -1615.26f, 2726.292f, 4.782f };
			Local_632[194 /*3*/] = { -1615.372f, 2740.197f, 5.415f };
			Local_632[195 /*3*/] = { -1615.563f, 2747.673f, 7.4045f };
			Local_632[196 /*3*/] = { -1615.097f, 2751.565f, 8.8844f };
			Local_632[197 /*3*/] = { -1611.762f, 2755.532f, 10.7072f };
			Local_632[198 /*3*/] = { -1608.429f, 2757.899f, 11.9354f };
			Local_632[199 /*3*/] = { -1603.668f, 2759.287f, 13.1858f };
			Local_632[200 /*3*/] = { -1595.852f, 2761.264f, 15.6171f };
			Local_632[201 /*3*/] = { -1591.107f, 2762.998f, 17.0786f };
			Local_632[202 /*3*/] = { -1588.631f, 2765.09f, 17.4527f };
			Local_632[203 /*3*/] = { -1583.653f, 2766.244f, 17.432f };
			Local_632[204 /*3*/] = { -1575.535f, 2763.518f, 17.2576f };
			Local_632[205 /*3*/] = { -1568.713f, 2759.889f, 17.0294f };
			Local_632[206 /*3*/] = { -1560.931f, 2756.537f, 16.5327f };
			Local_632[207 /*3*/] = { -1550.389f, 2752.672f, 16.8426f };
			Local_632[208 /*3*/] = { -1539.915f, 2745.988f, 16.6513f };
			Local_632[209 /*3*/] = { -1329.159f, 2560.402f, 16.6908f };
			Local_632[210 /*3*/] = { -1312.168f, 2545.424f, 17.302f };
			Local_632[211 /*3*/] = { -1299.685f, 2536.006f, 17.8598f };
			Local_632[212 /*3*/] = { -1294.188f, 2532.739f, 18.3548f };
			Local_632[213 /*3*/] = { -1288.149f, 2528.114f, 18.6202f };
			iLocal_1502 = 214;
			break;
		
		case 10:
			Local_632[0 /*3*/] = { 1007.392f, -677.4196f, 55.6986f };
			Local_632[1 /*3*/] = { 1015.88f, -640.8702f, 57.6189f };
			Local_632[2 /*3*/] = { 1028.693f, -521.0793f, 60.0037f };
			Local_632[3 /*3*/] = { 1001.013f, -469.0658f, 62.3685f };
			Local_632[4 /*3*/] = { 1024.273f, -438.0688f, 64.0854f };
			Local_632[5 /*3*/] = { 1099.331f, -371.6267f, 66.0863f };
			Local_632[6 /*3*/] = { 1154.278f, -350.7854f, 66.0453f };
			Local_632[7 /*3*/] = { 1196.453f, -317.2407f, 68.006f };
			Local_632[8 /*3*/] = { 1228.658f, -285.5526f, 69.5564f };
			Local_632[9 /*3*/] = { 1269.14f, -280.8539f, 78.9299f };
			Local_632[10 /*3*/] = { 1303.481f, -279.4128f, 89.277f };
			Local_632[11 /*3*/] = { 1307.264f, -261.738f, 93.4534f };
			Local_632[12 /*3*/] = { 1275.53f, -228.7392f, 97.2897f };
			Local_632[13 /*3*/] = { 1280.287f, -201.123f, 100.2999f };
			Local_632[14 /*3*/] = { 1316.522f, -182.0543f, 106.8589f };
			Local_632[15 /*3*/] = { 1328.355f, -161.1792f, 109.7738f };
			Local_632[16 /*3*/] = { 1330.984f, -124.4583f, 116.3178f };
			Local_632[17 /*3*/] = { 1349.718f, -112.3109f, 120.3794f };
			Local_632[18 /*3*/] = { 1440.839f, -126.4933f, 136.0253f };
			Local_632[19 /*3*/] = { 1547.464f, -88.492f, 155.8418f };
			Local_632[20 /*3*/] = { 1572.396f, -73.2005f, 158.7627f };
			Local_632[21 /*3*/] = { 1617.536f, -76.5607f, 164.2157f };
			Local_632[22 /*3*/] = { 1634.688f, -86.0398f, 166.32f };
			Local_632[23 /*3*/] = { 1652.054f, -86.2994f, 169.5492f };
			Local_632[24 /*3*/] = { 1677.106f, -69.6387f, 172.8701f };
			Local_632[25 /*3*/] = { 1708.012f, -81.5238f, 176.1925f };
			Local_632[26 /*3*/] = { 1727.578f, -106.2123f, 177.8113f };
			Local_632[27 /*3*/] = { 1743.88f, -104.5237f, 180.5338f };
			Local_632[28 /*3*/] = { 1787.022f, -75.6841f, 189.1488f };
			Local_632[29 /*3*/] = { 1830.548f, -88.8782f, 185.5151f };
			Local_632[30 /*3*/] = { 1869.148f, -84.2897f, 188.3576f };
			Local_632[31 /*3*/] = { 1908.125f, -94.0947f, 189.7598f };
			Local_632[32 /*3*/] = { 1935.856f, -70.0841f, 194.3318f };
			Local_632[33 /*3*/] = { 1965.012f, -81.9638f, 206.0977f };
			Local_632[34 /*3*/] = { 1994.382f, -81.4886f, 210.8208f };
			Local_632[35 /*3*/] = { 2015.317f, -15.1936f, 200.4373f };
			Local_632[36 /*3*/] = { 2045.597f, -7.7503f, 209.3502f };
			Local_632[37 /*3*/] = { 2097.736f, 3.6562f, 214.3764f };
			Local_632[38 /*3*/] = { 2170.912f, -23.0015f, 227.7495f };
			Local_632[39 /*3*/] = { 2216.6f, -39.4283f, 202.1804f };
			Local_632[40 /*3*/] = { 2265.253f, -42.4669f, 176.595f };
			Local_632[41 /*3*/] = { 2317.634f, -62.7793f, 143.5891f };
			Local_632[42 /*3*/] = { 2361.621f, -88.1377f, 114.5316f };
			Local_632[43 /*3*/] = { 2415.541f, -127.203f, 88.2837f };
			Local_632[44 /*3*/] = { 2442.605f, -132.4298f, 88.5436f };
			Local_632[45 /*3*/] = { 2467.73f, -87.5151f, 90.4025f };
			Local_632[46 /*3*/] = { 2478.927f, -49.3336f, 91.7194f };
			Local_632[47 /*3*/] = { 2514.862f, -54.7729f, 90.5497f };
			Local_632[48 /*3*/] = { 2535.467f, -44.4498f, 95.4292f };
			Local_632[49 /*3*/] = { 2551.987f, -14.4109f, 96.8787f };
			Local_632[50 /*3*/] = { 2564.848f, 7.4979f, 95.322f };
			Local_632[51 /*3*/] = { 2574.244f, 28.346f, 94.1519f };
			Local_632[52 /*3*/] = { 2583.104f, 64.6646f, 97.2344f };
			Local_632[53 /*3*/] = { 2590.313f, 90.8608f, 96.7709f };
			Local_632[54 /*3*/] = { 2605.615f, 146.4206f, 97.0373f };
			Local_632[55 /*3*/] = { 2608.438f, 159.9902f, 97.7789f };
			Local_632[56 /*3*/] = { 2616.801f, 193.4394f, 97.8768f };
			Local_632[57 /*3*/] = { 2620.917f, 208.1355f, 99.8613f };
			Local_632[58 /*3*/] = { 2622.716f, 214.0569f, 100.3944f };
			Local_632[59 /*3*/] = { 2625.155f, 223.4091f, 100.4454f };
			Local_632[60 /*3*/] = { 2628.51f, 238.1807f, 98.0427f };
			Local_632[61 /*3*/] = { 2631.146f, 251.6104f, 99.134f };
			Local_632[62 /*3*/] = { 2644.033f, 286.1281f, 96.6342f };
			Local_632[63 /*3*/] = { 2668.01f, 344.2533f, 93.6781f };
			Local_632[64 /*3*/] = { 2674.79f, 475.0252f, 93.3655f };
			Local_632[65 /*3*/] = { 2677.321f, 563.7356f, 92.1778f };
			Local_632[66 /*3*/] = { 2676.736f, 657.8879f, 88.5073f };
			Local_632[67 /*3*/] = { 2689.552f, 707.0382f, 83.2467f };
			Local_632[68 /*3*/] = { 2694.685f, 719.9797f, 79.118f };
			Local_632[69 /*3*/] = { 2705.136f, 742.6617f, 63.8294f };
			Local_632[70 /*3*/] = { 2732.751f, 770.7942f, 48.8289f };
			Local_632[71 /*3*/] = { 2754.752f, 779.1329f, 37.7362f };
			Local_632[72 /*3*/] = { 2795.073f, 775.9935f, 19.6025f };
			Local_632[73 /*3*/] = { 2815.378f, 772.0298f, 18.5162f };
			Local_632[74 /*3*/] = { 2823.101f, 760.8618f, 18.5399f };
			Local_632[75 /*3*/] = { 2829.417f, 747.6486f, 18.4988f };
			Local_632[76 /*3*/] = { 2838.551f, 742.6433f, 18.5283f };
			Local_632[77 /*3*/] = { 2852.99f, 747.0413f, 18.3301f };
			Local_632[78 /*3*/] = { 2866.382f, 755.1819f, 18.1503f };
			Local_632[79 /*3*/] = { 2876.903f, 759.4967f, 16.8825f };
			Local_632[80 /*3*/] = { 2883.941f, 767.9843f, 17.9021f };
			Local_632[81 /*3*/] = { 2890.169f, 774.4565f, 18.7225f };
			Local_632[82 /*3*/] = { 2898.975f, 775.8782f, 19.8196f };
			Local_632[83 /*3*/] = { 2908.946f, 777.8163f, 22.677f };
			Local_632[84 /*3*/] = { 2911.956f, 780.126f, 23.7715f };
			Local_632[85 /*3*/] = { 2917.168f, 783.8945f, 24.2316f };
			Local_632[86 /*3*/] = { 2924.857f, 790.0166f, 24.7335f };
			Local_632[87 /*3*/] = { 2934.356f, 798.6711f, 23.9277f };
			Local_632[88 /*3*/] = { 2940.85f, 803.635f, 23.7534f };
			Local_632[89 /*3*/] = { 2944.641f, 806.6476f, 23.5292f };
			Local_632[90 /*3*/] = { 2951.772f, 813.8921f, 22.0205f };
			iLocal_1502 = 91;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1502)
	{
		Var1 = { Local_632[iVar0 /*3*/] };
		Var4 = { Local_632[iVar0 + 1 /*3*/] };
		if (!func_29(Var4, 0f, 0f, 0f, 0))
		{
			fLocal_1284[iVar0] = unk_0x4A2E6F541CD8C36E(Var1, Var4, 1);
			fLocal_1503 = (fLocal_1503 + fLocal_1284[iVar0]);
		}
		iVar0++;
	}
	fLocal_1505 = ((fLocal_1503 * 70f) / 100f);
	func_930(Local_632[0 /*3*/]);
}

void func_930(struct<3> Param0)
{
	Global_1574379.f_6 = { Param0 };
}

void func_931()
{
	Global_1770670 = 1;
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 0))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 0);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 0);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 1))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 1);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 1);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 5))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 5);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 5);
	}
	if (unk_0x5D03CCED0E46E032(-355737150))
	{
		unk_0x6ADA8071E27ECAB6(-355737150, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-580979506))
	{
		unk_0x6ADA8071E27ECAB6(-580979506, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1426452475))
	{
		unk_0x6ADA8071E27ECAB6(-1426452475, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(745417724))
	{
		unk_0x6ADA8071E27ECAB6(745417724, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1305304906))
	{
		unk_0x6ADA8071E27ECAB6(-1305304906, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1543175077))
	{
		unk_0x6ADA8071E27ECAB6(-1543175077, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-811770997))
	{
		unk_0x6ADA8071E27ECAB6(-811770997, 0, 0, 0);
	}
}

bool func_932(int iParam0)
{
	var uVar0;
	
	uVar0 = func_48(2465, -1, 0);
	return unk_0xAA4F14DA15DB0B51(uVar0, iParam0);
}

int func_933()
{
	return 1;
}

int func_934()
{
	return Local_121.f_0;
}

int func_935(int iParam0)
{
	return Local_320[iParam0 /*8*/];
}

void func_936(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_510(unk_0x0FFED3E94261A832());
	if (func_128(iVar0))
	{
		Global_1773272.f_2 = func_961();
		Global_1773272.f_3 = func_960();
		Global_1773272.f_50 = iParam4;
		Global_1773272.f_51 = iParam5;
		Global_1773272.f_10 = unk_0xDA84A1E29323722E();
		Global_1773272.f_20 = (Global_1773272.f_10 - Global_1773272.f_9);
		Global_1773272.f_12 = iParam1;
		Global_1773272.f_19 = func_956(iVar0, bParam0, func_959(bParam3));
		if (bParam0)
		{
			Global_1773272.f_11 = 1;
		}
		else
		{
			Global_1773272.f_11 = 0;
		}
		if ((func_39(unk_0x0FFED3E94261A832()) || func_37(unk_0x0FFED3E94261A832())) || func_43(unk_0x0FFED3E94261A832()))
		{
			Global_1773272.f_8 = 1;
		}
		else
		{
			Global_1773272.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1773272.f_43 = 0;
			Global_1773272.f_45 = func_873(func_148(), iParam2);
			Global_1773272.f_47 = iParam7;
			Global_1773272.f_46 = iParam6;
			Global_1773272.f_52 = func_955(func_148(), iParam2);
		}
		func_953(iVar0);
	}
	else if (func_127(iVar0))
	{
		Global_1773325.f_2 = func_961();
		Global_1773325.f_3 = func_960();
		Global_1773325.f_10 = unk_0xDA84A1E29323722E();
		Global_1773325.f_19 = (Global_1773325.f_10 - Global_1773325.f_9);
		Global_1773325.f_12 = iParam1;
		if (bParam0)
		{
			Global_1773325.f_11 = 1;
		}
		else
		{
			Global_1773325.f_11 = 0;
		}
		if ((func_39(unk_0x0FFED3E94261A832()) || func_37(unk_0x0FFED3E94261A832())) || func_43(unk_0x0FFED3E94261A832()))
		{
			Global_1773325.f_8 = 1;
		}
		else
		{
			Global_1773325.f_8 = 0;
		}
		func_951(iVar0);
	}
	else if (func_126(iVar0))
	{
		Global_1773387.f_2 = func_961();
		Global_1773387.f_3 = func_960();
		Global_1773387.f_9 = unk_0xDA84A1E29323722E();
		Global_1773387.f_18 = (Global_1773387.f_9 - Global_1773387.f_8);
		Global_1773387.f_11 = iParam1;
		Global_1773387.f_7 = func_949();
		Global_1773387.f_42 = func_947(func_50(), 5);
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = func_250(iVar1);
		Global_1773387.f_28 = iVar2;
		Global_1773387.f_29 = func_946((func_845(iVar1) || func_844(iVar1)));
		Global_1773387.f_30 = func_946(func_945(iVar1));
		Global_1773387.f_32 = func_946(func_842(iVar1));
		Global_1773387.f_33 = func_946(func_843(iVar1));
		Global_1773387.f_34 = func_946(func_944(iVar1));
		Global_1773387.f_35 = func_946(func_841(0, iVar1) == 1);
		Global_1773387.f_36 = func_946(func_943(iVar1));
		Global_1773387.f_37 = func_946(func_942(iVar1));
		Global_1773387.f_38 = func_946(func_941(iVar1));
		Global_1773387.f_39 = func_946(func_245(iVar1, iVar2, 0));
		Global_1773387.f_40 = func_946(func_245(iVar1, iVar2, 2));
		Global_1773387.f_41 = func_946(func_245(iVar1, iVar2, 1));
		if (func_940(iVar1))
		{
			Global_1773387.f_31 = 2;
		}
		else if (func_939(iVar1))
		{
			Global_1773387.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1773387.f_10 = 1;
		}
		else
		{
			Global_1773387.f_10 = 0;
		}
		if ((func_39(unk_0x0FFED3E94261A832()) || func_37(unk_0x0FFED3E94261A832())) || func_43(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_6 = 1;
		}
		else
		{
			Global_1773387.f_6 = 0;
		}
		Global_1773387.f_21 = -2;
		Global_1773387.f_22 = -2;
		func_937(iVar0);
	}
	else
	{
		Global_1773254.f_6 = unk_0xDA84A1E29323722E();
		if (bParam0)
		{
			Global_1773254.f_7 = 1;
		}
		else
		{
			Global_1773254.f_7 = 0;
		}
		Global_1773254.f_8 = iParam1;
		if (Global_1773254.f_4 == 0)
		{
			if ((func_39(unk_0x0FFED3E94261A832()) || func_37(unk_0x0FFED3E94261A832())) || func_43(unk_0x0FFED3E94261A832()))
			{
				Global_1773254.f_4 = 1;
			}
		}
	}
}

void func_937(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1773387);
	func_938();
}

void func_938()
{
	struct<43> Var0;
	
	Global_1773387 = { Var0 };
	Global_1773387.f_23 = 0;
	Global_1773387.f_24 = 0;
	Global_1773387.f_16 = 0;
}

bool func_939(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 12);
}

bool func_940(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 13);
}

int func_941(int iParam0)
{
	if (iParam0 != func_346())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_942(int iParam0)
{
	if (iParam0 != func_346())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_943(int iParam0)
{
	if (iParam0 != func_346())
	{
		if (((((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_944(int iParam0)
{
	if (iParam0 != func_346())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 6) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 7)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_945(int iParam0)
{
	if (iParam0 == func_346())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 9);
}

int func_946(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_947(int iParam0, int iParam1)
{
	return func_48(func_948(iParam1), iParam0, 0);
}

int func_948(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_949()
{
	int iVar0;
	
	if (func_144())
	{
		return 4;
	}
	else if (func_143())
	{
		if (func_275(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		return 6;
	}
	if (func_195(1))
	{
		iVar0 = func_950(unk_0x0FFED3E94261A832());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_146(1))
	{
		if (func_275(func_148()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_950(int iParam0)
{
	if (func_119(iParam0, 1))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_318;
	}
	return -1;
}

void func_951(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x76C73F892FF4A48A(&Global_1773325);
	func_952();
}

void func_952()
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1773325 = { Var0 };
	Global_1773325.f_24 = 0;
	Global_1773325.f_25 = 0;
	Global_1773325.f_17 = 0;
}

void func_953(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xEA5062924BF2F0F6(&Global_1773272);
	func_954();
}

void func_954()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1773272 = { Var0 };
	Global_1773272.f_29 = 0;
	Global_1773272.f_30 = 0;
	Global_1773272.f_17 = 0;
}

int func_955(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_245(iParam0, iParam1, 2);
	bVar1 = func_245(iParam0, iParam1, 1);
	bVar2 = func_245(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_956(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_137(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 19;
	}
	else if (func_877(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_131(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16227;
			iVar1 = 20;
		}
	}
	else if (func_128(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xEE4C451D799A4C78(func_876(func_148()), func_875(func_148()), func_961(), func_960(), iVar1, iVar0);
	}
	func_958(iVar0);
	func_957(iVar0);
	return iVar0;
}

void func_957(int iParam0)
{
	int iVar0;
	
	iVar0 = func_48(3943, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_357 = iVar0;
	func_135(3943, iVar0, -1, 1, 0);
}

void func_958(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	Global_1622795[iVar0 /*431*/].f_11.f_356 = (Global_1622795[iVar0 /*431*/].f_11.f_356 + iParam0);
	if (Global_1622795[iVar0 /*431*/].f_11.f_356 < -9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
	else if (Global_1622795[iVar0 /*431*/].f_11.f_356 > 9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
}

int func_959(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_39(unk_0x0FFED3E94261A832()) || func_43(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_960()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_961()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

int func_962(bool bParam0)
{
	if (func_963(1))
	{
		return 1;
	}
	if (Global_2497344.f_4828.f_23)
	{
		Global_2497344.f_4828.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_210() == func_346() || !func_1083(func_210(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_963(bool bParam0)
{
	bool bVar0;
	
	if (!func_146(1))
	{
		bVar0 = false;
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 != func_346())
		{
			if (func_1083(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, 0, 1))
			{
				if ((Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 4 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 8) || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_964(func_510(unk_0x0FFED3E94261A832())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_203(31);
				if (func_128(func_510(unk_0x0FFED3E94261A832())))
				{
					func_203(81);
				}
				if (unk_0x885F483F34E47503(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
				{
					Global_1621379 = func_82(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, -2, 0, 0);
					if (!func_145(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
					{
						func_203(88);
					}
				}
				else
				{
					Global_1621379 = 1;
				}
				Global_1621363 = { Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_964(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_965()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 6))
	{
		func_795();
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 6);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 7))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 4) || unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 16))
		{
			if (((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_519()) && func_1083(unk_0x0FFED3E94261A832(), 1, 1))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 7);
				func_579("FME_PASINT", 30000);
				func_578(1);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 17))
		{
			if (func_42() && !func_320())
			{
				unk_0x507FE690B1271947(&(Global_1574379.f_1), 17);
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 16);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 23))
	{
		if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_1083(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x6235C49EA2DBA22D())
		{
			if (func_982())
			{
				func_579("AMEV_GA_RP", -1);
				if (func_510(unk_0x0FFED3E94261A832()) != 200)
				{
					func_578(1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 23);
			}
		}
	}
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_40(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x440E77FA46936F83(1344549371))
			{
				unk_0x23949161B04DFF2C(1344549371);
			}
		}
		else if (unk_0x440E77FA46936F83(1344549371))
		{
			unk_0x74B42EAFF204A87F(1344549371);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 9))
	{
		if ((((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_519()) && func_1083(unk_0x0FFED3E94261A832(), 1, 1)) && !func_319(unk_0x0FFED3E94261A832(), 21))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 9);
			func_981(0);
			func_579("FME_TBL00", -1);
			func_578(1);
		}
	}
	if (func_45(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 18))
		{
			if ((func_319(unk_0x0FFED3E94261A832(), 21) && unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 20)) && !unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 19))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 18);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 18))
		{
			if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_519()) && func_1083(unk_0x0FFED3E94261A832(), 1, 1)) && unk_0x0B21CC5276C2CE1B()) && !Global_2497344.f_4762)
			{
				unk_0x507FE690B1271947(&(Global_1574379.f_1), 18);
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 19);
				func_579("AMTT_RPAS", -1);
				func_578(1);
			}
		}
	}
	if (((((func_45(unk_0x0FFED3E94261A832()) && !func_44(unk_0x0FFED3E94261A832())) && func_509(unk_0x0FFED3E94261A832()) != 146) && !func_323(unk_0x0FFED3E94261A832())) && !func_980(unk_0x0FFED3E94261A832())) && !func_976())
	{
		if (func_785(func_509(unk_0x0FFED3E94261A832())))
		{
			unk_0xAA5F36A70B643256(unk_0x0FFED3E94261A832());
		}
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 22))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 22);
		}
		if (func_41(unk_0x0FFED3E94261A832()) || func_783())
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 10))
			{
				if (func_974(func_509(unk_0x0FFED3E94261A832())))
				{
					if (func_47(0) && !Global_2391043)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_659(1);
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
					}
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 10);
			}
		}
		if (func_40(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 11))
			{
				if (!Global_91829.f_8)
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
					func_699(1);
				}
				if (!func_973())
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 13);
					func_784();
				}
				if (!Global_2391043)
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
					if (func_47(0) && !Global_2391043)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
					}
					func_659(1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 11);
			}
		}
		else
		{
			func_971(0);
		}
	}
	else
	{
		func_971(1);
	}
	func_966();
	if (func_782(func_509(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 21))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 21);
	}
	if ((func_42() && !func_320()) || func_319(unk_0x0FFED3E94261A832(), 21))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 10))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 10);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 10))
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 10);
	}
}

void func_966()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_519())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_726(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 26))
				{
					unk_0x507FE690B1271947(&(Global_1574379.f_1), 26);
				}
				func_967(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 26))
	{
		func_6(&(Global_1574379.f_22));
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 26);
	}
}

void func_967(int iParam0, int iParam1)
{
	if (!func_8(&(Global_1574379.f_22)))
	{
		func_345(&(Global_1574379.f_22), 0, 0);
	}
	else if (func_7(&(Global_1574379.f_22), iParam1, 0))
	{
		if (func_566() > 0)
		{
			func_970(iParam0);
			if (func_452("AMEV_LBD_HELP"))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
			func_6(&(Global_1574379.f_22));
		}
	}
	else
	{
		func_969(0);
		func_968();
	}
}

void func_968()
{
	Global_2497344.f_4451 = 0;
}

void func_969(int iParam0)
{
	Global_1351508.f_68 = iParam0;
}

void func_970(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_1 == iParam0)
		{
			Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

void func_971(int iParam0)
{
	if ((unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 11) || (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 10) && iParam0)) || (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 22) && iParam0))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 12))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 12);
			func_699(0);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 13))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 13);
			func_972();
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_321(unk_0x0FFED3E94261A832(), 0))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 14);
			func_659(0);
		}
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 11);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 10);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 22);
	}
}

void func_972()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4667), 0);
}

bool func_973()
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4667, 0);
}

int func_974(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_40(unk_0x0FFED3E94261A832());
		
		case 133:
			return (func_783() || func_975(func_538()));
		
		default:
	}
	return 0;
}

int func_975(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_976()
{
	if (((((((((func_629() || func_439()) || func_628()) || func_403()) || (func_625() && !unk_0x1B154DE2D4606530())) || (func_979() && !func_978())) || Global_2394683) || Global_2394683.f_1 != 0) || Global_2394756 != 0) || (func_977() == 2 && !unk_0x1B154DE2D4606530()))
	{
		return 1;
	}
	return 0;
}

int func_977()
{
	return Global_979818;
}

bool func_978()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 27);
}

int func_979()
{
	if (func_621() || func_620())
	{
		return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 == 8;
	}
	return 0;
}

bool func_980(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		if ((func_42() && !func_320()) || func_319(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		if (func_8(&(Global_1574379.f_13)))
		{
			if (!func_7(&(Global_1574379.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_6(&(Global_1574379.f_13));
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9);
}

void func_981(int iParam0)
{
	int iVar0;
	
	iVar0 = func_48(2519, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar0, 0))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 0);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 1))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 1);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 2))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar0, 3))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 3);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 4))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 4);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 5))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar0, 6))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 6);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 7))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 7);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 8))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar0, 9))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 9);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 10))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 10);
		}
		else if (!unk_0xAA4F14DA15DB0B51(iVar0, 11))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, 11);
		}
	}
	func_135(2519, iVar0, -1, 1, 0);
}

int func_982()
{
	int iVar0;
	
	if (!func_8(&(Global_1574379.f_15)))
	{
		func_345(&(Global_1574379.f_15), 0, 0);
		Global_1574379.f_17 = 0;
	}
	else if (func_7(&(Global_1574379.f_15), 1000, 0))
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(Global_1574379.f_17)))
		{
			iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Global_1574379.f_17));
			if (unk_0x885F483F34E47503(iVar0))
			{
				if (func_1083(iVar0, 1, 1) && func_983(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_185(unk_0x0FFED3E94261A832()), func_185(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574379.f_17++;
		if (Global_1574379.f_17 >= 32)
		{
			Global_1574379.f_17 = 0;
			func_6(&(Global_1574379.f_15));
		}
	}
	return 0;
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_177(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1592456[iVar0 /*635*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_984()
{
	return Global_1574379.f_24;
}

bool func_985(int iParam0)
{
	return !func_986(iParam0);
}

int func_986(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5576)
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5577)
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5578)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5579)
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_987(4))
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_987(4))
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_987(4))
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_987(4))
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_987(4))
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_987(4))
			{
				return 0;
			}
			if (func_319(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_987(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1083(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[iVar0 /*387*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_988()
{
	var uVar0;
	
	func_992(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_991())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_990())
	{
		return 1;
	}
	if (func_989(157))
	{
		if (!func_629())
		{
			return 1;
		}
	}
	if (func_989(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_663() != 0)
	{
		if (unk_0x09952BA662A7629B(func_663()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_989(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_990()
{
	return Global_2454709;
}

bool func_991()
{
	return Global_2445217.f_573;
}

void func_992(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_993(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_993(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_1083(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_994(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_994(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_995()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_996()
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(iLocal_579, 0))
	{
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&iLocal_579, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_184.f_3))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3)))
			{
				if (unk_0x1979A7D1D0538188(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3)))
				{
					if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_184.f_2), 0))
					{
						unk_0x654FFF4D16298AC5(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3));
						if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(Local_121.f_184.f_7)) && !unk_0xA9A04898798AE9E6(unk_0x1E199569E0295838(Local_121.f_184.f_7), 0))
						{
							unk_0x9CD13E23F5D54507(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3), unk_0xECBE9D2902B2B964(Local_121.f_184.f_2), 0, unk_0x1E199569E0295838(Local_121.f_184.f_7), 0f, 0f, 0f, 8, 20f, 1000f, -1f, 60, 50, -1082130432, 0);
						}
						else
						{
							unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3), 2048, 1);
							unk_0x07A44999F605B530(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3), unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3), 1), 10000f, 999999, 0, 0);
						}
						unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_121.f_184.f_3), 1);
					}
				}
			}
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0) || unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 6))
		{
			if (func_680())
			{
				func_678();
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_579, 3))
	{
		if (unk_0x2137828D03306CAF(iLocal_2039))
		{
			if (unk_0x7FAC45D56235AB39(iLocal_2039, 0))
			{
				unk_0x9C27A9366AD7DE0B(iLocal_2039, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x507FE690B1271947(&iLocal_579, 3);
			}
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (func_444())
		{
			func_613(unk_0x0FFED3E94261A832(), 1, 0);
			func_445();
		}
	}
	func_710(24, 0);
	func_1055(0);
	if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 24))
	{
		if (Local_121.f_197 == 2)
		{
			func_1004(1, 0);
		}
		else if (unk_0x591AF4C50B46E014())
		{
			func_692(136, 0, unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 2));
		}
		else
		{
			func_692(136, 0, 0);
		}
	}
	else if (Local_121.f_197 == 2)
	{
		func_1004(1, 0);
	}
	if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == iLocal_594)
	{
		unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_596);
	}
	if (Local_121.f_197 == 2)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 8))
		{
			func_795();
		}
	}
	if (unk_0x0FFED3E94261A832() != -1)
	{
		if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 136)
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/] = -1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_577, 6))
	{
		unk_0xDCE08B9AA97FFEB4("pennedIn");
		unk_0x18A0B296F4932A7B("PennedInOut", 0, 0);
		unk_0x507FE690B1271947(&iLocal_577, 6);
	}
	if (unk_0x8BEECCAAE312A5BA("MP_Player_Inside_Bubble_Scene"))
	{
		unk_0x40F160C3038ECAF5("MP_Player_Inside_Bubble_Scene");
	}
	if (unk_0x8BEECCAAE312A5BA("MP_Player_Outside_Bubble_Scene"))
	{
		unk_0x40F160C3038ECAF5("MP_Player_Outside_Bubble_Scene");
	}
	func_749(&uLocal_2739);
	func_1003();
	if (unk_0x591AF4C50B46E014())
	{
		func_745();
	}
	func_756(0);
	func_572(0, 136);
	unk_0x0AB301FF3F443E28(0);
	if (unk_0xAA4F14DA15DB0B51(iLocal_578, 11))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 12))
		{
			unk_0x6040865446FA4030(1);
			unk_0x988197573BDAD49A("MP_MC_STOP");
		}
	}
	if (Local_121.f_197 != 2)
	{
		if (func_988())
		{
			Local_2745.f_5 = 5;
		}
		else if (func_746(2, 0, 1, 0, 0))
		{
			Local_2745.f_5 = 6;
		}
		else if (func_121() == unk_0x0FFED3E94261A832())
		{
			Local_2745.f_5 = 1;
		}
		else
		{
			Local_2745.f_5 = 2;
		}
		Local_2745.f_0 = Local_121.f_179;
		Local_2745.f_1 = Local_121.f_180;
		Local_2745.f_4 = Local_121.f_181;
		Local_2745.f_3 = Local_121.f_183;
		Local_2745.f_10 = (unk_0xDA84A1E29323722E() - Local_2745.f_9);
		func_1002(Local_2745, -1, -1, -1, -1, -1, -1);
	}
	else
	{
		Global_1773272.f_25 = Local_121.f_181;
		Global_1773254.f_2 = Local_121.f_179;
		Global_1773254.f_3 = Local_121.f_180;
		func_1000(Global_1773254, -1, -1, -1, -1);
		if (!unk_0xAA4F14DA15DB0B51(iLocal_578, 31))
		{
			if (unk_0x88641E5BC172153A() > -1)
			{
				func_936(0, 4, 0, !unk_0xAA4F14DA15DB0B51(Local_320[unk_0x88641E5BC172153A() /*8*/].f_1, 0), -1, -1, -1, -1);
			}
		}
	}
	if (!func_283())
	{
		if (Local_2745.f_6 > 0)
		{
			if (Local_2745.f_5 == 1)
			{
				if (Local_121.f_197 != 2)
				{
					func_999();
				}
			}
		}
	}
	func_796();
	func_724(0);
	func_386(0);
	if (func_384(unk_0x0FFED3E94261A832()))
	{
		func_805(0);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x6D29FCC24A47BA3D(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
		}
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
	}
	func_998(0);
	unk_0x507FE690B1271947(&iLocal_577, 18);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xAA4F14DA15DB0B51(uLocal_584, iVar0))
		{
			if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
			{
				unk_0x0D718959E866D008(unk_0x7C214DA899F05536(iVar0), 0);
			}
		}
		iVar0++;
	}
	func_798(1);
	unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 422, 0);
	if (unk_0xAA4F14DA15DB0B51(iLocal_579, 2))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&iLocal_579, 2);
		}
	}
	func_997();
}

void func_997()
{
	unk_0xA232817B0B36F2E5();
}

void func_998(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 6);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 6);
	}
}

void func_999()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1697), 18);
}

void func_1000(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var16;
	struct<19> Var35;
	struct<16> Var54;
	struct<17> Var70;
	struct<15> Var87;
	struct<17> Var102;
	struct<17> Var119;
	
	sVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x35302CD5A5D37EED(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			unk_0x68DA16ED4A85EC0C(&Var1);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1773254.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			unk_0x288282AB79D7963A(&Var16);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1773254.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			unk_0x49FE32435D5D31AC(&Var35);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1773254.f_14;
			Var54.f_15 = iParam14;
			unk_0x3A83B9A28696FB1A(&Var54);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1773254.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			unk_0x173FAFD79DE99046(&Var70);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1773254.f_14;
			unk_0x8CDCA6199359A8D8(&Var87);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (unk_0xBBDA792448DB5A89(iParam14) / unk_0xBBDA792448DB5A89(iParam15));
			Var102.f_16 = iParam16;
			unk_0xE692681C736B95D3(&Var102);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1773254.f_14;
			unk_0x3155A2D90F6106B6(&Var119);
		}
	}
	func_1001();
}

void func_1001()
{
	struct<18> Var0;
	
	Global_1773254 = { Var0 };
}

void func_1002(struct<12> Param0, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	sVar0 = unk_0xFABF5258A318B1DC();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69800)
	{
		if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = iParam12;
			unk_0xB1BF705571EE36BB(&Var1);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = iParam12;
			Var14.f_13 = iParam13;
			unk_0x1BFD81725890FE16(&Var14);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = iParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xF3E387DE7804E755(&Var28);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = iParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xBD6F94216F555AD7(&Var52);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_penned_in"))
		{
			unk_0xDB781DB9C232EAD6(&Param0);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = iParam12;
			unk_0x9E58BCF1884E0E01(&Var66);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = iParam12;
			Var79.f_13 = iParam13;
			unk_0xA5019E62FE9FEDA7(&Var79);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = iParam12;
			Var93.f_13 = iParam13;
			unk_0x01876C8ABC66C46F(&Var93);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = iParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x713A4A8D7D95D21D(&Var107);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = iParam12;
			unk_0xBEFCFE9DF0E86F20(&Var123);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = iParam12;
				Var136.f_13 = iParam13;
				unk_0xCE72A6974512A170(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = iParam12;
				Var150.f_13 = iParam13;
				unk_0xC6E4B4B0B05C5346(&Var150);
			}
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = iParam12;
			unk_0xCD7D4855D6DCE0F3(&Var164);
		}
	}
}

void func_1003()
{
	unk_0x28BD561DA3E207B1(iLocal_595);
	unk_0x28BD561DA3E207B1(iLocal_594);
}

void func_1004(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1341327.f_1.f_108 != 0)
	{
		Global_1341327.f_1.f_108 = 0;
	}
	Global_1341327.f_1.f_109 = -1;
	Global_1341327.f_1.f_110 = -1;
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 167 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 168)
	{
		func_1053();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 4);
	}
	if ((func_144() && iParam1 != 0) && Global_262145.f_15531)
	{
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 190 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192)
		{
			func_1037(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 0);
			if (func_1036(iParam1))
			{
				func_1037(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 164 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 208)
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = -1;
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_45(unk_0x0FFED3E94261A832()))
		{
			func_659(0);
		}
	}
	else if (func_360(unk_0x0FFED3E94261A832()) != -1)
	{
		func_825(-1);
	}
	func_1035(func_346());
	if (func_197(16))
	{
		func_638(16);
	}
	func_1031(0);
	func_885(-1);
	func_1030();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1029(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1027(iVar1);
		iVar1++;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
	{
		unk_0xFBC4596E19752537(1f);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 5))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 5);
	}
	iVar2 = func_1026();
	if ((func_512(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1025(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_137(iVar2))
	{
		func_1021(-1, 1);
	}
	else if (((func_1020(iVar2) || func_1019(iVar2)) || func_1018(iVar2)) || func_126(iVar2))
	{
	}
	else
	{
		func_1021(-1, 1);
	}
	func_318(19);
	func_318(20);
	func_318(21);
	func_318(22);
	func_318(27);
	func_638(3);
	func_638(4);
	func_638(7);
	func_1017();
	if (func_39(unk_0x0FFED3E94261A832()))
	{
		func_790(0);
	}
	func_318(29);
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_346();
	if (Global_2497344.f_4828.f_23 != 0)
	{
		Global_2497344.f_4828.f_23 = 0;
	}
	if (bParam0)
	{
		func_639();
	}
	if (!func_45(unk_0x0FFED3E94261A832()))
	{
		func_657();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 6))
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 6);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 7))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 7);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 8))
	{
		func_1016("IMPEXP_SELFDES", 0);
		func_1007("IMPEXP_SELFDES");
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 8);
	}
	func_1005(iVar2, 0);
}

void func_1005(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
		{
			unk_0xB0D390F8FEB78903(func_1006(iParam0));
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
	{
		unk_0x40F160C3038ECAF5(func_1006(iParam0));
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 9);
	}
}

char* func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1007(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_1009();
					Global_103236.f_13922[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_1008(iVar0))
					{
					}
					else
					{
						Global_103236.f_13922[iVar0 /*104*/].f_24 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_28 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xA216C26603EB04E7(Global_103236.f_13922[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1008(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1009()
{
	if (func_1015(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_1010();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_1010()
{
	func_1011();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_1011()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_1014(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_1013(unk_0x2A5EB8B0FE590B91());
			if (func_1012(iVar0) && (!func_1015(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_1012(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_1012(int iParam0)
{
	return iParam0 < 3;
}

int func_1013(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1014(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1014(int iParam0)
{
	if (func_1012(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_1015(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_1016(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_103236.f_13922[iVar0 /*104*/].f_24 = 1;
				if (Global_103236.f_13922[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_103236.f_13832[0 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_103236.f_13832[1 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_103236.f_13832[2 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_103236.f_13832[3 /*20*/].f_17 = 0;
					}
					Global_103236.f_13922[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_103236.f_13922[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1017()
{
	if (func_674(unk_0x0FFED3E94261A832()))
	{
		func_318(25);
	}
}

int func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1019(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_1021(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1026();
	}
	if (iParam0 > 0)
	{
		if (func_148() != func_346())
		{
			if (func_1024(unk_0x0FFED3E94261A832()) == unk_0x0FFED3E94261A832())
			{
				Global_2484845.f_93[func_1023(iParam0)] = 1;
			}
		}
		iVar0 = func_1023(159);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(157);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(148);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(164);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(142);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(152);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(166);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(170);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(173);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(179);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(200);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(201);
		if (func_1022(iVar0, Global_262145.f_11258, bParam1))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(182);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(183);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(185);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(186);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(180);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(195);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(197);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(198);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(207);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(208);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(209);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(214);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(215);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(216);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(217);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(218);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(219);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(220);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(221);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1022(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_38(unk_0x0FFED3E94261A832(), 19) && !func_38(unk_0x0FFED3E94261A832(), 20)) && !func_38(unk_0x0FFED3E94261A832(), 9))
		{
			return 0;
		}
	}
	if (Global_2484845.f_93[iParam0] == 1 && func_8(&(Global_2484845[iParam0 /*2*/])))
	{
		if (func_304(&(Global_2484845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2484845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_1024(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_34;
}

void func_1025(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1026();
	}
	if (iParam0 > 0)
	{
		if (func_148() != func_346())
		{
			Global_2484845.f_93[func_1023(iParam0)] = 1;
		}
		iVar0 = func_1023(155);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(163);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(160);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(153);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(162);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(154);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(171);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(172);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(199);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(194);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(193);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(210);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(205);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(189);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1023(211);
		if (func_1022(iVar0, Global_262145.f_11259, 0))
		{
			func_6(&(Global_2484845[iVar0 /*2*/]));
			func_345(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1026()
{
	char* sVar0;
	
	sVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x35302CD5A5D37EED(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	return 0;
}

void func_1027(int iParam0)
{
	if (!func_29(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/], func_1028(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/] = { func_1028() };
	}
	if (!func_29(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/], func_1028(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/] = { func_1028() };
	}
}

Vector3 func_1028()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1029(int iParam0)
{
	if (!func_29(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/], func_1028(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/] = { func_1028() };
	}
	if (!func_29(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/], func_1028(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/] = { func_1028() };
	}
}

void func_1030()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573830 = { Var0 };
	Global_1573830.f_13 = func_346();
	if (unk_0xAA4F14DA15DB0B51(Global_1573334, 3))
	{
		unk_0x507FE690B1271947(&Global_1573334, 3);
	}
}

void func_1031(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1034(unk_0x0FFED3E94261A832(), 14))
		{
			func_1033(14);
		}
	}
	else if (func_1034(unk_0x0FFED3E94261A832(), 14))
	{
		func_1032(14);
	}
}

void func_1032(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

void func_1033(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

bool func_1034(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

void func_1035(int iParam0)
{
	if (func_120(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != iParam0)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 != iParam0)
			{
				Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 = iParam0;
				if (iParam0 != func_346())
				{
				}
			}
		}
	}
}

bool func_1036(int iParam0)
{
	return func_248(iParam0) == 5;
}

void func_1037(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_247(iParam0, iParam1) && func_1052(iParam0, iParam1))
	{
		iVar0 = func_246(iParam0, iParam1);
		func_1040(iVar0, bParam2, bParam3);
		func_1038(iVar0, 1);
	}
}

void func_1038(int iParam0, int iParam1)
{
	func_230(func_1039(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_1040(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_838(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_1051(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_1050(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_1049(iParam0, 0, bParam2);
	}
	else if (func_1047(iParam0, bParam2))
	{
		iVar0 = func_1046(iVar2, 0);
		iVar3 = func_873(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_1045(iVar2, bParam2);
		iVar5 = func_1046(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1036(iVar2) && func_1044(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1051(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1043(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_1042(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_1045(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1046(iVar2, bParam2) / func_1043(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1036(iVar2) && func_1044(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1041(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_1041(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return;
	}
	if (func_237(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_226 = iParam2;
				}
				else
				{
					Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1042(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1043(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (func_237(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1044(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_346())
	{
		return 0;
	}
	if (func_237(iParam1) && func_1036(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1045(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_248(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_1046(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_248(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15494);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_19517;
			}
			else
			{
				iVar0 = Global_262145.f_19501;
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19518);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19502);
				}
			}
			if (func_245(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19519);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19503);
				}
			}
			if (func_1044(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1047(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_231(15384, -1, -1);
	}
	return func_231(func_1048(iParam0), -1, -1);
}

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1049(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_230(15384, iParam1, -1, 1);
		return;
	}
	func_230(func_1048(iParam0), iParam1, -1, 1);
}

int func_1050(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_838(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_1036(iVar1))
	{
		if (func_1044(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1051(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_1052(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1053()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 28);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 29);
	func_1054(24);
}

void func_1054(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

void func_1055(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1697, 9))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1697), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1697, 9))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_1697), 9);
	}
}

void func_1056(struct<21> Param0)
{
	int iVar0;
	
	func_1082();
	func_1080(func_1081(Param0.f_0), Param0);
	unk_0x7E04478E16257BA0(1);
	func_1079(0, -1, 0);
	if (func_359())
	{
		func_1063(0, 0);
	}
	else
	{
		func_1061(136);
	}
	unk_0x2D179B3FFCF1AADA(&Local_121, 199);
	unk_0xA5929B03CD847BE8(&Local_320, 257);
	if (!func_1060())
	{
		func_996();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		if (unk_0x62E688B72E3C57B0())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_121.f_3[iVar0] = func_346();
				iVar0++;
			}
			unk_0xABE13CB17EB2BE02(&(Local_121.f_179), &(Local_121.f_180));
		}
		Local_2745.f_2 = unk_0xE66A798F07C5EFC7();
		Local_2745.f_8 = unk_0xDA84A1E29323722E();
		func_710(24, 1);
		func_1057();
		if (func_893(1))
		{
		}
		Local_320[unk_0x88641E5BC172153A() /*8*/] = 0;
	}
	else
	{
		func_996();
	}
}

void func_1057()
{
	int iVar0;
	
	unk_0xEE8231F61ED038B0("relPennedInPlayer", &iLocal_594);
	unk_0xEE8231F61ED038B0("relUWAi", &iLocal_595);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], iLocal_594);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_594, Global_1574695[iVar0]);
		iVar0++;
	}
	unk_0x3A8EFBE4AB457FE2(5, iLocal_594, iLocal_595);
	unk_0x3A8EFBE4AB457FE2(5, iLocal_595, iLocal_594);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, iLocal_595);
	unk_0x3A8EFBE4AB457FE2(5, 2017343592, iLocal_594);
	func_1059(1, &iLocal_595);
	func_1058(&iLocal_595);
	func_1058(&iLocal_594);
}

void func_1058(int iParam0)
{
	unk_0x3A8EFBE4AB457FE2(1, -1865950624, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1865950624);
	unk_0x3A8EFBE4AB457FE2(1, 296331235, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 296331235);
	unk_0x3A8EFBE4AB457FE2(1, 1166638144, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1166638144);
	unk_0x3A8EFBE4AB457FE2(1, 2037579709, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2037579709);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2017343592);
	unk_0x3A8EFBE4AB457FE2(1, -1821475077, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1821475077);
	unk_0x3A8EFBE4AB457FE2(1, 1782292358, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1782292358);
	unk_0x3A8EFBE4AB457FE2(1, -1033021910, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1033021910);
	unk_0x3A8EFBE4AB457FE2(1, -1285976420, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1285976420);
}

void func_1059(int iParam0, int iParam1)
{
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("COP"), *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, joaat("COP"));
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("army"), *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, joaat("army"));
	unk_0x3A8EFBE4AB457FE2(iParam0, -183807561, *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, -183807561);
}

int func_1060()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_991())
		{
			return 0;
		}
		if (func_989(155))
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

void func_1061(int iParam0)
{
	func_703();
	func_1062();
	func_706();
	Global_1574379.f_4 = iParam0;
	Global_1574379.f_5 = iParam0;
	func_789(iParam0, -1);
	func_139(&(Global_1574379.f_18), 0, 0);
	Global_2497344.f_4504 = 0;
	Global_2455769[0] = func_346();
	Global_2455769[1] = func_346();
	Global_2455769[2] = func_346();
	Global_2455769[3] = func_346();
	Global_2455769[4] = func_346();
	func_701();
	func_518();
	if (func_42() && !func_320())
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 16);
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 17);
	}
}

void func_1062()
{
	var uVar0;
	
	Global_1574404 = uVar0;
}

void func_1063(int iParam0, int iParam1)
{
	func_1078();
	func_1066(1);
	if ((iParam0 != 0 && unk_0x885F483F34E47503(iParam1)) && func_1065(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF6082E2ADA1C795B(&Global_1773240, 0);
				break;
			}
	}
	if (!func_143() && !func_119(unk_0x0FFED3E94261A832(), 1))
	{
		if (func_322())
		{
			func_658(3);
		}
	}
	func_658(4);
	if (func_146(0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_148();
	}
	if (func_128(iParam0))
	{
		func_954();
		Global_1773272.f_18 = func_950(func_210());
	}
	else if (func_127(func_360(unk_0x0FFED3E94261A832())))
	{
		func_952();
		Global_1773325.f_18 = func_950(func_210());
	}
	func_1064();
}

void func_1064()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1341327.f_529[iVar0 /*49*/].f_1 = func_346();
		Global_1341327.f_529[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_1065(int iParam0, bool bParam1)
{
	return func_208(unk_0x0FFED3E94261A832(), iParam0, bParam1);
}

void func_1066(bool bParam0)
{
	int iVar0;
	
	func_1054(33);
	func_1054(34);
	func_1054(35);
	func_1054(36);
	func_1054(37);
	func_1054(38);
	func_1054(39);
	func_1054(40);
	func_1054(43);
	func_1054(41);
	func_1054(54);
	func_1054(42);
	func_1054(47);
	func_1077(23);
	func_1077(24);
	func_1054(92);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 2);
	func_1076();
	func_1068();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1067(3))
	{
		func_1077(3);
	}
	else if (func_1067(4))
	{
		func_1077(4);
	}
	else if (func_1067(5))
	{
		func_1077(5);
	}
	else if (func_1067(6))
	{
		func_1077(6);
	}
	else if (func_1067(7))
	{
		func_1077(7);
	}
	else if (((((((((((((((((func_1067(0) || func_1067(1)) || func_1067(2)) || func_1067(8)) || func_1067(9)) || func_1067(10)) || func_1067(11)) || func_1067(12)) || func_1067(13)) || func_1067(14)) || func_1067(15)) || func_1067(16)) || func_1067(17)) || func_1067(18)) || func_1067(19)) || func_1067(20)) || func_1067(21)) || func_1067(22))
	{
		func_1077(8);
		func_1077(0);
		func_1077(1);
		func_1077(2);
		func_1077(9);
		func_1077(10);
		func_1077(11);
		func_1077(12);
		func_1077(13);
		func_1077(14);
		func_1077(15);
		func_1077(16);
		func_1077(17);
		func_1077(18);
		func_1077(19);
		func_1077(20);
		func_1077(21);
		func_1077(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1067(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_12[iVar0], iVar1);
}

void func_1068()
{
	if (func_1075())
	{
		func_1074(0);
		func_1074(1);
		func_1074(2);
		func_1074(3);
		func_1074(4);
		func_1074(5);
		func_1074(6);
		func_1074(7);
		func_1074(8);
		func_1074(9);
		func_1074(10);
		func_1074(11);
		func_1074(12);
		if (func_1073(13))
		{
			if (func_1070(func_1071(), 3))
			{
				func_1069(func_1071(), 3);
			}
			func_1074(13);
		}
	}
}

void func_1069(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1070(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_1071()
{
	if (func_1072())
	{
		Global_103236.f_27831[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

int func_1072()
{
	int iVar0;
	
	iVar0 = func_107(unk_0x0FFED3E94261A832());
	if (((iVar0 != unk_0x0FFED3E94261A832() && iVar0 != func_346()) && unk_0x885F483F34E47503(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_1073(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_17[iVar0], iVar1);
}

void func_1074(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_1075()
{
	if ((((((((((((func_1073(0) || func_1073(1)) || func_1073(2)) || func_1073(3)) || func_1073(4)) || func_1073(5)) || func_1073(6)) || func_1073(7)) || func_1073(8)) || func_1073(9)) || func_1073(10)) || func_1073(11)) || func_1073(12))
	{
		return 1;
	}
	return 0;
}

void func_1076()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2497344.f_4828.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_1077(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_12[iVar0]), iVar1);
}

void func_1078()
{
	struct<14> Var0;
	
	Global_1773254 = { Var0 };
	Global_1773254.f_14 = 0;
	Global_1773254.f_15 = 0;
}

int func_1079(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_997();
			}
			else
			{
				return 0;
			}
		}
		if (!func_688())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_997();
					}
					else
					{
						return 0;
					}
				}
				if (func_991())
				{
					if (!bParam2)
					{
						func_997();
					}
					else
					{
						return 0;
					}
				}
				if (func_989(155))
				{
					if (!bParam2)
					{
						func_997();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_997();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_997();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_997();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1080(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_997();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_1081(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 109:
			return 32;
		
		case 110:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

void func_1082()
{
	struct<49> Var0;
	int iVar49;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_48 = -1;
	iVar49 = 0;
	while (iVar49 < 32)
	{
		Global_1343425[iVar49 /*49*/] = { Var0 };
		iVar49++;
	}
}

int func_1083(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

