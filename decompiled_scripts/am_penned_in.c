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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<199> Local_122 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744705981, -178150202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	struct<8> Local_321[32];
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	var uLocal_586 = 1;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	struct<3> Local_601 = { 0, 0, 0 } ;
	struct<3> Local_604 = { 0, 0, 0 } ;
	int iLocal_607 = 0;
	float fLocal_608 = 0f;
	float fLocal_609 = 0f;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	struct<14> Local_615 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	struct<3> Local_633[217];
	float fLocal_1285[217] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1503 = 0;
	float fLocal_1504 = 0f;
	float fLocal_1505 = 0f;
	float fLocal_1506 = 0f;
	var uLocal_1507 = 0;
	struct<105> Local_1508 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0 } ;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = -1;
	var uLocal_1618 = -1;
	var uLocal_1619 = -1;
	var uLocal_1620 = -1;
	var uLocal_1621 = 32;
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
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041 = 0;
	int iLocal_2042 = 0;
	var uLocal_2043 = 0;
	int iLocal_2044 = 0;
	struct<3> Local_2045 = { 0, 0, 0 } ;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 12;
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
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 1065353216;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	struct<12> Local_2748 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	int iLocal_2770 = 0;
	int iLocal_2771 = 0;
	int iLocal_2772 = 0;
	int iLocal_2773 = 0;
	int iLocal_2774 = 0;
	int iLocal_2775 = 0;
	int iLocal_2776 = 0;
	struct<3> Local_2777 = { 0, 0, 0 } ;
	float fLocal_2780 = 0f;
	float fLocal_2781 = 0f;
	struct<3> Local_2782 = { 0, 0, 0 } ;
	float fLocal_2785 = 0f;
	int iLocal_2786 = 0;
	int iLocal_2787 = 0;
	int iLocal_2788 = 0;
	var uLocal_2789 = 0;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_97 = -0.05f;
	fLocal_98 = 0.92f;
	fLocal_99 = 1.94f;
	fLocal_100 = 2.99f;
	fLocal_101 = 3.7f;
	Local_103 = { -0.4f, 0.96f, 0.85f };
	fLocal_106 = 0.95f;
	Local_107 = { 0f, 2f, 2.5f };
	fLocal_110 = 1.75f;
	Local_111 = { 0f, 0f, 120f };
	fLocal_114 = 35.5f;
	iLocal_2774 = -1;
	iLocal_2775 = -1;
	fLocal_2781 = -1f;
	if (unk_0x27CA09C6DFAB1E79() && func_1124(unk_0x3D35F9864E4640B1(), 0, 1))
	{
		func_1092(ScriptParam_0);
	}
	else
	{
		func_1033();
	}
	while (true)
	{
		func_1032();
		if (func_1025() || func_1022(24))
		{
			func_1033();
		}
		if (func_1021())
		{
			func_1033();
		}
		func_1002();
		if (Local_122.f_197 == 2)
		{
			if (func_999(1))
			{
				func_962(0, 5, 0, !unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0), -1, -1, -1, -1, -1);
				func_1033();
			}
		}
		switch (func_961(unk_0x43B24C247F35B6BC()))
		{
			case 0:
				if (func_960() == 1)
				{
					if (func_959())
					{
						if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 7))
						{
							if (func_958(11))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 7);
							}
						}
						func_955();
						Local_601 = { Local_633[0 /*3*/] };
						fLocal_608 = func_954();
						fLocal_609 = fLocal_608;
						iLocal_600 = 0;
						uLocal_610 = func_953();
						if (Local_122.f_197 == 2)
						{
							func_951();
						}
						if (!func_917(1))
						{
							func_915(func_916(), 1);
							func_910();
						}
						func_909(Local_122.f_197);
						func_902(136, Local_122.f_167, 0, 0);
						if (Local_122.f_197 == 2)
						{
							func_856(-1, 0, Local_122.f_197 == 2, 200, 0);
							if (func_851())
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_580, 1);
							}
						}
						Local_321[unk_0x43B24C247F35B6BC() /*8*/] = 1;
					}
				}
				else if (func_960() == 4)
				{
					Local_321[unk_0x43B24C247F35B6BC() /*8*/] = 3;
				}
				break;
			
			case 1:
				if (func_960() == 1)
				{
					func_845();
					func_699();
					func_695();
					func_694();
					func_654();
					func_595();
					func_408();
					func_407();
					func_403();
					func_399();
					func_383();
				}
				else if (func_960() == 4)
				{
					Local_321[unk_0x43B24C247F35B6BC() /*8*/] = 3;
				}
				break;
			
			case 3:
				func_382(&(Local_122.f_22));
				if (func_381(&(Local_122.f_22)))
				{
					Local_321[unk_0x43B24C247F35B6BC() /*8*/] = 4;
				}
				break;
			
			case 2:
				Local_321[unk_0x43B24C247F35B6BC() /*8*/] = 4;
			
			case 4:
				func_1033();
				break;
		}
		if (unk_0xEF0CB8FF125B9F9C())
		{
			if (Local_122.f_197 == 2)
			{
				if (func_380())
				{
					if (func_960() < 4)
					{
						Local_122.f_0 = 4;
					}
				}
			}
			switch (func_960())
			{
				case 0:
					if (func_367(&(Local_122.f_167)))
					{
						func_365();
						if (func_959())
						{
							func_955();
							Local_122.f_184.f_7 = func_364();
							Local_122.f_8 = func_954();
							Local_122.f_166 = func_953();
							Local_122.f_0 = 1;
							func_363(&(Local_122.f_32), 0, 0);
							func_360(func_362(136, Local_122.f_167, 0, 0));
						}
					}
					break;
				
				case 1:
					func_350();
					func_26();
					func_3();
					if (func_1())
					{
						Local_122.f_0 = 4;
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
	
	if (Local_122.f_21 >= 2)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
			{
				if (Local_321[iVar1 /*8*/].f_7 < 5)
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
	
	if (Local_122.f_197 == 2)
	{
		return;
	}
	bVar1 = true;
	if (Local_122.f_21 > 0)
	{
		if (func_25())
		{
			iVar0 = unk_0xD33F4BC17EB987E5(Local_122.f_184.f_7);
		}
		else
		{
			func_24();
		}
		if (!func_23(Local_601, Local_122.f_194, 1056964608, 0))
		{
			Local_122.f_194 = { Local_601 };
		}
		uVar2 = Global_262145.f_10356;
		func_4(&(Local_122.f_184), iVar0, Local_122.f_194, bVar1, Global_262145.f_10354, Global_262145.f_10355, uVar2, 4352);
	}
}

void func_4(var uParam0, int iParam1, struct<3> Param2, bool bParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	switch (func_22(uParam0))
	{
		case 0:
			if (unk_0x9609F3F56138CB88(0, 0) == 0)
			{
				unk_0x8A4541F891BF3B2B(1);
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
					iVar0 = unk_0xECB7D3275586261E(uParam0->f_3);
					iVar1 = unk_0xD7E2A160FD5DEEE1(uParam0->f_2);
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
		func_363(&(uParam0->f_8), 0, 0);
	}
	else if (func_7(&(uParam0->f_8), 5000, 0))
	{
		func_6(&(uParam0->f_8));
		iVar0 = 1;
	}
	if ((!unk_0x8682D8A6269E52C9(iParam1) && !unk_0x7A6C051038031EFA(iParam2, 0)) && !unk_0x8682D8A6269E52C9(iParam3))
	{
		if (((unk_0xF57D21B49780A7A8(iParam1, -1273030092) != 1 && unk_0xF57D21B49780A7A8(iParam1, -1273030092) != 0) || iParam3 != uParam0->f_4) || iVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				unk_0xD706D9D85701BFBD(iParam1);
			}
			unk_0x63D5C7EECA0AC0EF(iParam1, iParam2, iParam3, uParam4, 32, uParam5, uParam6, uParam7);
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
	func_363(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
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
	if (unk_0x69DA17666D6E3F5A(uParam0->f_2) && unk_0x69DA17666D6E3F5A(uParam0->f_3))
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
	
	iVar0 = unk_0xC42CA935BE72299D(uParam0->f_2);
	unk_0x31EFA4297B872C86(iVar0, 1, 1, 1, 1, 0, 0, 0, 0);
	unk_0x583AB626B1CF33F0(iVar0, 0);
	iVar1 = unk_0xD7E2A160FD5DEEE1(uParam0->f_2);
	unk_0x14E84B29590C740E(iVar1, 0, 0);
	unk_0xF1A44028B9C0583A(iVar1, 0);
	iVar2 = unk_0xC42CA935BE72299D(uParam0->f_3);
	unk_0xC20B73867395D06D(iVar2, 1);
	unk_0x56B418F469976565(iVar1, 1, 1, 0);
	unk_0x298850131D9B4AFD(iVar1, 0.3f);
	unk_0x6CDFA9B556069FD7(iVar1);
	unk_0xA516DB03BDB6B4EB(iVar1);
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
	
	if (unk_0x69DA17666D6E3F5A(uParam0->f_3))
	{
		return 1;
	}
	unk_0xBE91026C1FC72180(uParam0->f_1);
	if (unk_0x772F801619C83779(uParam0->f_1))
	{
		if (func_14(uParam0->f_2))
		{
			iVar0 = unk_0xC42CA935BE72299D(uParam0->f_2);
			if (unk_0x3B077EBCBD1ABF1F(iVar0))
			{
				if (func_13(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, -1, 1, 1, 1))
				{
					return 1;
				}
			}
			else
			{
				unk_0xDE78E0A451F0CC44(iVar0);
			}
		}
	}
	return 0;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	if (!unk_0x69DA17666D6E3F5A(uParam1))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xC191BE4D610C22BA(unk_0x4E2448BB7576232A(unk_0xD7E2A160FD5DEEE1(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(unk_0xECB7D3275586261E(*uParam0), iParam7);
		if (unk_0xAB304D33A5075BCC(unk_0xECB7D3275586261E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return !func_15(unk_0xD7E2A160FD5DEEE1(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x432757A9E7AAFA96(iParam0, 0))
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
	
	if (unk_0x69DA17666D6E3F5A(uParam0->f_2))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 1;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 1;
	unk_0xBE91026C1FC72180(*uParam0);
	if (unk_0x772F801619C83779(*uParam0))
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

int func_17(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x9447D7F8254F01B6(1))
	{
		return 0;
	}
	fVar1 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar1 = 20f;
	}
	if (bParam11)
	{
		unk_0xE882E0C18562237F(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x5129A9193468FF77(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x23812D401DEBDCBC(uVar0);
	Global_2501777.f_5805 = uVar0;
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (bParam15)
		{
			unk_0x39F4D36D9852AC7E(uVar0, 1);
		}
		unk_0x583AB626B1CF33F0(uVar0, iParam10);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam8)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
			else
			{
				unk_0x84143EEA447C3060(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB416BAE05AA22BA6(*uParam0, unk_0x3D35F9864E4640B1(), 1);
			}
		}
		unk_0x5028E664ECBD1407(iVar0, iParam9);
		unk_0xD19E428259B86D65(iVar0, 1);
		if (bParam12)
		{
			unk_0x1F9198D3132F6E4C(iVar0);
			unk_0x4E546CD1861E7F46(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

var func_18()
{
	return Global_1641087.f_62386[0 /*182*/].f_3;
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
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	
	iVar1 = func_364();
	iVar2 = 0;
	while (iVar2 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar2)))
		{
			iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar2));
			if (func_1124(iVar0, 1, 1))
			{
				if (unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 0))
				{
					if (!unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 1))
					{
						if (!unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 11))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (Local_122.f_184.f_7 != iVar1)
	{
		Local_122.f_184.f_7 = iVar1;
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Local_122.f_184.f_7 != func_364())
	{
		if (func_1124(Local_122.f_184.f_7, 1, 1))
		{
			if (unk_0x532CFF8D6B65E42F(Local_122.f_184.f_7))
			{
				iVar0 = unk_0x3DAB36F6FA9328A6(Local_122.f_184.f_7);
				if (unk_0xA3C5F17FDDF2701D(iVar0))
				{
					iVar1 = iVar0;
					if (!unk_0x2A3398C6222EB190(Local_321[iVar1 /*8*/].f_1, 1))
					{
						if (!unk_0x2A3398C6222EB190(Local_321[iVar1 /*8*/].f_1, 11))
						{
							if (unk_0x2A3398C6222EB190(Local_321[iVar1 /*8*/].f_1, 0))
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
	switch (Local_122.f_21)
	{
		case 0:
			func_345();
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 2))
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_1, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 8);
					Local_122.f_21 = 1;
					unk_0xEC025B0914244C52(Local_633[0 /*3*/], (func_954() + 50f), 1);
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_122.f_1, 13))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 8);
				Local_122.f_21 = 1;
				unk_0xEC025B0914244C52(Local_633[0 /*3*/], (func_954() + 50f), 1);
			}
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 12))
			{
				Local_122.f_21 = 3;
			}
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 16))
			{
				func_35();
				Local_122.f_21 = 3;
			}
			else if (unk_0x2A3398C6222EB190(Local_122.f_1, 18))
			{
				Local_122.f_21 = 3;
			}
			break;
		
		case 1:
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 9))
			{
				Local_122.f_21 = 2;
			}
			break;
		
		case 2:
			func_31();
			func_27(0);
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
			{
				Local_122.f_21 = 3;
			}
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 10))
			{
				Local_122.f_21 = 3;
			}
			break;
		
		case 3:
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 16))
			{
				func_35();
			}
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 5))
			{
				if (Local_122.f_21 == 3)
				{
					Local_122.f_21 = 5;
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
		if (unk_0xEF0CB8FF125B9F9C())
		{
			return;
		}
	}
	if (Local_122.f_197 == 0 || Local_122.f_197 == 2)
	{
		fLocal_2780 = func_30();
	}
	iVar0 = iLocal_600 + 1;
	if (!func_29(Local_601, 0f, 0f, 0f, 0))
	{
		if (!func_29(Local_2777, Local_601, 0))
		{
			Local_2777 = { Local_601 };
		}
	}
	if (iVar0 < 217)
	{
		Var1 = { Local_633[iVar0 /*3*/] };
		fVar13 = unk_0xB7A628320EFF8E47(Local_601, Var1);
		if (!func_29(Local_633[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_29(Local_633[iLocal_600 /*3*/], 0f, 0f, 0f, 0))
			{
				if (fVar13 < (0.1f * 0.1f))
				{
					Local_601 = { Local_633[iVar0 /*3*/] };
					iLocal_600++;
					bVar15 = true;
				}
				else
				{
					Var4 = { Var1 - Local_601 };
					Var7 = { func_28(Var4) };
					if (!unk_0xEF0CB8FF125B9F9C())
					{
						Var10 = { Local_601 + Var7 * FtoV(unk_0xCD70DA50CCD55658()) * Vector(Local_122.f_166, Local_122.f_166, Local_122.f_166) * Vector(fLocal_2780, fLocal_2780, fLocal_2780) };
					}
					else
					{
						Var10 = { Local_601 + Var7 * FtoV(unk_0xCD70DA50CCD55658()) * Vector(Local_122.f_166, Local_122.f_166, Local_122.f_166) };
					}
					fVar14 = unk_0xB7A628320EFF8E47(Local_601, Var10);
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
			if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 3))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 3);
			}
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4))
			{
				if (!func_29(Local_633[(iLocal_1503 - 1) /*3*/], 0f, 0f, 0f, 0))
				{
					Var17 = { Local_633[(iLocal_1503 - 1) /*3*/] };
				}
			}
		}
	}
	if (unk_0xEF0CB8FF125B9F9C())
	{
		if (!func_8(&(Local_122.f_172)))
		{
			func_363(&(Local_122.f_172), 0, 0);
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4))
		{
			if (!func_7(&(Local_122.f_172), 16000, 0))
			{
				if (!bVar15)
				{
					Local_122.f_176 = { Var17 };
					Local_122.f_171 = iLocal_600;
				}
				else
				{
					Local_122.f_176 = { Local_601 };
					Local_122.f_171 = iLocal_600;
				}
			}
			else if (func_7(&(Local_122.f_172), 16500, 0))
			{
				func_6(&(Local_122.f_172));
			}
		}
	}
	if (!func_29(Local_122.f_176, 0f, 0f, 0f, 0))
	{
		if (iLocal_607 != Local_122.f_171 || !func_29(Local_604, Local_122.f_176, 0))
		{
			if (iLocal_607 != Local_122.f_171)
			{
				iLocal_607 = Local_122.f_171;
				Local_604 = { Local_122.f_176 };
				Local_601 = { Local_604 };
				iLocal_600 = iLocal_607;
				bVar15 = true;
			}
			else
			{
				Local_604 = { Local_122.f_176 };
				Var20 = { Local_122.f_176 };
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
				Local_601 = { Var20 };
			}
		}
		else
		{
			Local_601 = { Var17 };
		}
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
	{
		if (!func_29(Local_601, Local_633[(iLocal_1503 - 1) /*3*/], 0))
		{
			Local_601 = { Local_633[(iLocal_1503 - 1) /*3*/] };
		}
	}
	if (unk_0xA761A0B6072010C8(uLocal_598))
	{
		unk_0xAD390762A82890FB(uLocal_598, Local_601);
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
	
	if (!func_8(&(Local_122.f_26)))
	{
		func_363(&(Local_122.f_26), 0, 0);
	}
	if (!func_7(&(Local_122.f_26), 10000, 0))
	{
		return;
	}
	else if (!func_7(&(Local_122.f_26), 20000, 0))
	{
		if (!func_8(&uLocal_613))
		{
			func_363(&uLocal_613, 0, 0);
		}
		if (func_7(&uLocal_613, 1000, 0))
		{
			fVar0 = Local_122.f_166;
			if (fVar0 < func_34())
			{
				fVar0 = (fVar0 + 0.5f);
				fVar0 = (fVar0 * func_33());
				if (fVar0 > func_34())
				{
					fVar0 = func_34();
				}
				Local_122.f_166 = fVar0;
			}
			func_6(&uLocal_613);
		}
	}
	else if (fLocal_1505 <= (fLocal_1504 / 2f))
	{
		if (Local_122.f_166 != func_34())
		{
			Local_122.f_166 = func_34();
		}
	}
	else if (!func_8(&uLocal_613))
	{
		func_363(&uLocal_613, 0, 0);
	}
	else if (func_7(&uLocal_613, 1000, 0))
	{
		if (Local_122.f_166 > func_32())
		{
			fVar1 = (func_34() - func_32());
			fVar3 = (fLocal_1504 / 2f);
			fVar2 = ((fLocal_1505 - fVar3) / fVar3);
			fVar4 = (func_34() - (fVar1 * fVar2));
			fVar4 = (fVar4 * 0.8f);
			fVar4 = (fVar4 * func_33());
			if (fVar4 < func_32())
			{
				fVar4 = func_32();
			}
			Local_122.f_166 = fVar4;
			func_6(&uLocal_613);
		}
	}
}

float func_32()
{
	return Global_262145.f_10345;
}

float func_33()
{
	return Global_262145.f_10346;
}

float func_34()
{
	return Global_262145.f_10343;
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
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	struct<4> Var46;
	struct<4> Var50;
	var uVar54;
	var uVar55;
	var uVar59;
	var uVar60;
	int iVar64;
	char[] cVar65[8];
	var uVar66;
	var uVar67;
	var uVar68;
	char cVar72[32];
	var uVar76;
	var uVar77;
	struct<4> Var81;
	struct<4> Var85;
	struct<4> Var89;
	
	iVar5 = -1;
	Var18 = { func_344() };
	iVar22 = func_364();
	if (!func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar5 = unk_0x43B24C247F35B6BC();
		iVar22 = unk_0x3D35F9864E4640B1();
	}
	else
	{
		iVar23 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
		if (unk_0x80BA8E3CC61A8625(iVar23))
		{
			if (unk_0x532CFF8D6B65E42F(iVar23))
			{
				iVar22 = iVar23;
				iVar5 = unk_0x3DAB36F6FA9328A6(iVar23);
			}
		}
	}
	Var24.f_2 = 1065353216;
	Var24.f_3 = 1065353216;
	Var24.f_4 = 1;
	Var24.f_9 = -1;
	if (Local_122.f_197 != 2)
	{
		if (func_341(unk_0x3D35F9864E4640B1()))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
			return;
		}
	}
	else if (func_333())
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2))
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 12))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
		return;
	}
	if (!func_917(1))
	{
		if (iVar5 > -1)
		{
			if (iVar22 != func_364())
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_1, 17))
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 16))
					{
						if (!unk_0x2A3398C6222EB190(Local_122.f_1, 18))
						{
							if (unk_0x2A3398C6222EB190(Local_321[iVar5 /*8*/].f_1, 0))
							{
								if (!unk_0x2A3398C6222EB190(iLocal_578, 17))
								{
									if (!unk_0x2A3398C6222EB190(Local_122.f_1, 10))
									{
										if (unk_0x2A3398C6222EB190(Local_122.f_1, 3) && unk_0x2A3398C6222EB190(Local_122.f_1, 11))
										{
											if (!unk_0x2A3398C6222EB190(iLocal_578, 19))
											{
												if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
												{
													if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
													{
														if (unk_0x3B077EBCBD1ABF1F(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
														{
															unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 19);
														}
													}
												}
											}
											if (unk_0x2A3398C6222EB190(Local_122.f_10, iVar5))
											{
												if (!unk_0x2A3398C6222EB190(Local_321[iVar5 /*8*/].f_1, 1))
												{
													bVar45 = true;
												}
											}
											if (func_332(&iVar41, &iVar42, &iVar43))
											{
												if (iVar43 > 2)
												{
													if (func_331(iVar22, iVar41, iVar42))
													{
														bVar2 = true;
													}
													if (!bVar2)
													{
														bVar44 = true;
													}
												}
												else if (iVar43 == 2)
												{
													if (iVar22 == iVar41 || iVar22 == iVar42)
													{
														Var46 = { func_330() };
														if (iVar22 == iVar41)
														{
															func_328(func_329(), &Var46, unk_0x06D7899D9C1F422F(iVar42), 1, 15000, &Var18, 2);
														}
														else
														{
															func_328(func_329(), &Var46, unk_0x06D7899D9C1F422F(iVar41), 1, 15000, &Var18, 2);
														}
														func_327(1);
													}
													else
													{
														if (func_331(iVar22, iVar41, iVar42))
														{
															bVar2 = true;
														}
														if (!bVar2)
														{
															Var50 = { func_326() };
															func_324(func_325(), func_364(), func_364(), -1, &Var50, &Var18, 1, 15000, 2, unk_0x06D7899D9C1F422F(iVar41), unk_0x06D7899D9C1F422F(iVar42), 0);
														}
														func_327(0);
													}
												}
												if (!bVar2 || (bVar2 && iVar4))
												{
													if (iVar5 == unk_0x43B24C247F35B6BC())
													{
														func_312(bVar45, &iVar0, &iVar1, iVar43);
														if (Local_122.f_197 != 2)
														{
															Local_2748.f_6 = iVar0;
															Local_2748.f_7 = iVar1;
															Global_2457299 = iVar0;
															if (iVar0 > 0)
															{
																if (func_311())
																{
																	func_302(968073639, iVar0, &uVar54, 0, 1, 0);
																}
																else
																{
																	unk_0xED431D10152559DB(iVar0, "AM_PENNED_IN", &uVar55);
																}
															}
															if (!func_301())
															{
																if (Local_2748.f_6 > 0)
																{
																	func_300(11, Local_2748.f_6);
																}
															}
															func_299();
															func_298(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
														}
														else
														{
															Var24.f_0 = iVar0;
															Var24.f_1 = iVar1;
															func_126(200, bVar45, &Var24, 0);
														}
													}
													unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 17);
												}
											}
											else if (bVar45)
											{
												if (iVar5 == unk_0x43B24C247F35B6BC())
												{
													func_312(1, &iVar0, &iVar1, 1);
													if (Local_122.f_197 != 2)
													{
														Local_2748.f_6 = iVar0;
														Local_2748.f_7 = iVar1;
														Global_2457299 = iVar0;
														if (iVar0 > 0)
														{
															if (func_311())
															{
																func_302(968073639, iVar0, &uVar59, 0, 1, 0);
															}
															else
															{
																unk_0xED431D10152559DB(iVar0, "AM_PENNED_IN", &uVar60);
															}
														}
														if (!func_301())
														{
															if (Local_2748.f_6 > 0)
															{
																func_300(11, Local_2748.f_6);
															}
														}
														func_299();
														func_298(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
													}
													else
													{
														Var24.f_0 = iVar0;
														Var24.f_1 = iVar1;
														func_126(200, 1, &Var24, 0);
													}
												}
												Var10 = { func_125() };
												func_123(func_124(), "PEN_WIN", &Var10, 1, 15000, 2);
												unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 17);
												func_327(1);
											}
											else if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
											{
												if (func_1124(iVar22, 1, 1))
												{
													iVar41 = func_122();
													if (iVar41 != func_364())
													{
														if (unk_0x80BA8E3CC61A8625(iVar41))
														{
															if (!bVar2)
															{
																if (func_120(iVar41, 1))
																{
																	iVar64 = func_119(iVar41);
																	if (iVar64 > -1)
																	{
																		uVar66 = func_117(iVar64);
																		cVar65 = func_107(iVar41);
																		bVar3 = true;
																	}
																}
															}
															if (Local_122.f_197 == 2)
															{
																bVar2 = false;
																bVar3 = false;
															}
															if (!bVar2 && !bVar3)
															{
																Var14 = { func_106() };
																func_328(func_325(), &Var14, unk_0x06D7899D9C1F422F(iVar41), 1, 15000, &Var18, 2);
															}
															else if (bVar3)
															{
																Var14 = { func_105() };
																func_66(func_325(), &Var18, &Var14, cVar65, uVar66, 0, -1, -1, -1, 2, -1);
															}
															else if (unk_0x532CFF8D6B65E42F(iVar41))
															{
																Var14 = { func_65() };
																func_328(91, &Var14, unk_0x06D7899D9C1F422F(iVar41), 1, 15000, &Var18, 2);
																iVar4 = 1;
															}
															else
															{
																Var14 = { func_106() };
																func_328(func_325(), &Var14, unk_0x06D7899D9C1F422F(iVar41), 1, 15000, &Var18, 2);
																iVar4 = 1;
															}
														}
													}
													else
													{
														cVar6 = { func_64() };
														func_123(func_325(), &Var18, &cVar6, 1, 15000, 2);
													}
													if (!bVar2 || (bVar2 && iVar4))
													{
														if (iVar5 == unk_0x43B24C247F35B6BC())
														{
															func_312(0, &iVar0, &iVar1, 1);
															if (Local_122.f_197 != 2)
															{
																Local_2748.f_6 = iVar0;
																Local_2748.f_7 = iVar1;
																Global_2457299 = iVar0;
																if (iVar0 > 0)
																{
																	if (func_311())
																	{
																		func_302(968073639, iVar0, &uVar67, 0, 1, 0);
																	}
																	else
																	{
																		unk_0xED431D10152559DB(iVar0, "AM_PENNED_IN", &uVar68);
																	}
																}
																if (!func_301())
																{
																	if (Local_2748.f_6 > 0)
																	{
																		func_300(11, Local_2748.f_6);
																	}
																}
																func_299();
																func_298(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
															}
															else
															{
																Var24.f_0 = iVar0;
																Var24.f_1 = iVar1;
																func_126(200, 0, &Var24, 0);
															}
														}
														unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 17);
													}
													func_327(0);
												}
											}
											if (bVar44)
											{
												cVar72 = { func_63() };
												if (bVar45)
												{
													func_123(func_329(), &Var18, &cVar72, 1, -1, 2);
												}
												else
												{
													func_123(func_329(), &Var18, &cVar72, 1, -1, 2);
												}
												func_327(0);
											}
										}
									}
									else
									{
										cVar6 = { func_64() };
										func_123(func_325(), &Var18, &cVar6, 1, 15000, 2);
										if (iVar5 == unk_0x43B24C247F35B6BC())
										{
											func_312(0, &iVar0, &iVar1, 1);
											if (Local_122.f_197 != 2)
											{
												Local_2748.f_6 = iVar0;
												Local_2748.f_7 = iVar1;
												Global_2457299 = iVar0;
												if (iVar0 > 0)
												{
													if (func_311())
													{
														func_302(968073639, iVar0, &uVar76, 0, 1, 0);
													}
													else
													{
														unk_0xED431D10152559DB(iVar0, "AM_PENNED_IN", &uVar77);
													}
												}
												func_299();
												func_298(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
											}
											else
											{
												Var24.f_0 = iVar0;
												Var24.f_1 = iVar1;
												func_126(200, 0, &Var24, 0);
											}
										}
										unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 17);
									}
								}
								if (unk_0x2A3398C6222EB190(iLocal_578, 17))
								{
									if (unk_0x2A3398C6222EB190(Local_321[iVar5 /*8*/].f_1, 5))
									{
										if (!unk_0x2A3398C6222EB190(Local_321[iVar5 /*8*/].f_1, 1))
										{
											unk_0x03C4BA9F5A120DFE(iLocal_2044);
											unk_0xF2565A150D1CA964(iLocal_2044);
										}
									}
									if (unk_0xF9FC07CC13402AEF())
									{
										unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
									}
								}
							}
							else if (!unk_0x2A3398C6222EB190(Local_122.f_1, 10))
							{
								if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
								{
									iVar41 = func_122();
									if (iVar41 != func_364())
									{
										if (!func_332(&iVar41, &iVar42, &iVar43))
										{
											Var81 = { func_106() };
											func_60(&Var81, iVar41, 1, 0, 0, 0, 1, 1, 0);
										}
										else if (iVar43 == 2)
										{
											Var85 = { func_59() };
											func_56(&Var85, iVar41, iVar42, 1, 1, 0, 0, 1);
										}
										else
										{
											Var89 = { func_63() };
											func_51(&Var89, 1);
										}
									}
									unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
									if (Local_122.f_197 != 2)
									{
										func_46(0);
									}
									else
									{
										func_327(0);
									}
								}
							}
							else
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
								if (Local_122.f_197 != 2)
								{
									func_46(0);
								}
								else
								{
									func_327(0);
								}
							}
						}
						else if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
							if (func_36(unk_0x3D35F9864E4640B1()) >= 2)
							{
								func_123(func_325(), &Var18, "CAG_NOP", 1, 15000, 2);
							}
							func_327(0);
						}
					}
					else if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
						if (func_36(unk_0x3D35F9864E4640B1()) >= 2)
						{
							func_123(func_325(), &Var18, "CAG_NOP", 1, 15000, 2);
						}
						func_327(0);
					}
				}
				else if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
					if (func_36(unk_0x3D35F9864E4640B1()) >= 2)
					{
						if (!unk_0x2A3398C6222EB190(iLocal_580, 1))
						{
							func_123(func_325(), &Var18, "CAG_PRES", 1, 15000, 2);
						}
					}
					func_327(0);
				}
			}
			else if (func_342(unk_0x3D35F9864E4640B1(), 0))
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_1, 3) && unk_0x2A3398C6222EB190(Local_122.f_1, 11))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_1, 10))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
				}
			}
		}
	}
	else if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2))
	{
		if ((unk_0x2A3398C6222EB190(Local_122.f_1, 3) || unk_0x2A3398C6222EB190(Local_122.f_1, 10)) || unk_0x2A3398C6222EB190(Local_122.f_1, 16))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 2);
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
	bVar1 = ((func_45(iParam0) && !func_44(iParam0)) && !unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8));
	bVar2 = func_43(iParam0);
	uVar3 = func_42();
	uVar4 = func_333();
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
	if (Global_2501777.f_4867.f_33 != iVar0)
	{
		Global_2501777.f_4867.f_33 = iVar0;
	}
	return iVar0;
}

bool func_37(int iParam0)
{
	return func_38(iParam0, 19);
}

bool func_38(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
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
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 7);
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
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 2);
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/] != -1;
	}
	return 0;
}

void func_46(bool bParam0)
{
	if (bParam0)
	{
		if (func_47(1))
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_1574410, 1);
		}
	}
	else if (func_47(2))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_1574410, 2);
	}
}

int func_47(int iParam0)
{
	var uVar0;
	
	uVar0 = func_48(2521, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x2A3398C6222EB190(uVar0, 0) && unk_0x2A3398C6222EB190(iVar0, 1)) && unk_0x2A3398C6222EB190(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x2A3398C6222EB190(iVar0, 3) && unk_0x2A3398C6222EB190(iVar0, 4)) && unk_0x2A3398C6222EB190(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x2A3398C6222EB190(iVar0, 6) && unk_0x2A3398C6222EB190(iVar0, 7)) && unk_0x2A3398C6222EB190(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x2A3398C6222EB190(iVar0, 9) && unk_0x2A3398C6222EB190(iVar0, 10)) && unk_0x2A3398C6222EB190(iVar0, 11))
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
	uVar0 = Global_2511967[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
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
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
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
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_52(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_52(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_55() || !unk_0xF4F91CD09D59F42E()) || !func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_53(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1775874.f_5[iVar0 /*53*/] = iParam0;
		Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1775874.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_54(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1775874++;
	if (Global_1775874 > 5)
	{
		Global_1775874 = 5;
		return Global_1775874;
	}
	return (Global_1775874 - 1);
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_55()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

int func_56(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var17;
	
	iVar0 = -1;
	if ((unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam2)) || iParam6)
	{
		if (!bParam5)
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
			StringCopy(&Var17, unk_0x06D7899D9C1F422F(iParam2), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
			StringCopy(&Var17, unk_0x06D7899D9C1F422F(iParam2), 64);
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var1))
		{
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var17))
		{
		}
		unk_0xC8EBA5D7FC75C1C0(sParam0);
		unk_0xDBB8FCB00B701798(iParam3);
		unk_0x50B3C23D0902259F(func_57(&Var1));
		unk_0xDBB8FCB00B701798(iParam4);
		unk_0x50B3C23D0902259F(func_57(&Var17));
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
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
	
	switch (Local_122.f_197)
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
	if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var1))
		{
		}
		unk_0xC8EBA5D7FC75C1C0(sParam0);
		unk_0xDBB8FCB00B701798(iParam2);
		unk_0x50B3C23D0902259F(func_57(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		}
		else
		{
			Global_2488575 = { func_62(iParam1) };
			if (unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575))
			{
				iVar17 = 0;
				if (unk_0xB3404E397FF56B3B(&(Global_2488505.f_22), "Leader") && Global_2488505.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2488505.f_21 > 0)
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
					iVar0 = unk_0xAC2E222FB9C25D52(iVar18, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar17, 0, Global_2488505, &Var1, Global_1314010, Global_1314011, Global_1314012);
				}
				else
				{
					iVar0 = unk_0xA9762168447BC8F6(iVar18, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar17, 0, Global_2488505, Global_1314010, Global_1314011, Global_1314012);
				}
			}
			else
			{
				iVar0 = unk_0xC59BF654690FB5DC(0, 1);
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
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

struct<4> func_63()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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
	
	switch (Local_122.f_197)
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
	
	switch (Local_122.f_197)
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
	
	iVar0 = func_364();
	iVar1 = func_364();
	iVar2 = func_364();
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
	func_104(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xCD7E92DE2BFA0B0D(&(Var0.f_67), 2);
	return func_68(&Var0);
}

int func_68(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434915.f_2790)
		{
			return 0;
		}
	}
	func_81(uParam0, uParam0->f_16);
	func_78(uParam0);
	if (func_77(uParam0->f_1))
	{
		func_70();
		if (Global_2434915.f_2484[0 /*76*/].f_2 == 0)
		{
			Global_2434915.f_2484[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434915.f_2484[0 /*76*/].f_1 == 13 || Global_2434915.f_2484[0 /*76*/].f_1 == 53) || Global_2434915.f_2484[0 /*76*/].f_1 == 54) || Global_2434915.f_2484[0 /*76*/].f_1 == 58)
		{
			Global_2434915.f_2484[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434915.f_2484[iVar0 + 1 /*76*/] = { Global_2434915.f_2484[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434915.f_2484[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434915.f_2484[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434915.f_2484[iVar0 /*76*/] = { *uParam0 };
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 1);
				Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_69(Global_2434915.f_2484[iVar0 /*76*/].f_1))
				{
					Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
					unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
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
	
	if (Global_2434915.f_2791)
	{
		return;
	}
	if (!Global_71053)
	{
		Global_71053 = 1;
		bVar0 = true;
	}
	func_71();
	if (bVar0)
	{
		Global_71053 = 0;
	}
}

void func_71()
{
	Global_2434915.f_2792 = 0;
	Global_2434915.f_2792.f_578 = 0;
	func_75(&(Global_2434915.f_2792.f_1));
	Global_2434915.f_2792.f_1.f_1 = 0;
	func_72(&(Global_2434915.f_2792.f_1));
}

void func_72(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x7F165E259CFAC8B8(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(0);
			unk_0x1C703A54AB4B12F6();
		}
		unk_0x7F165E259CFAC8B8(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xCF304E352457AD63(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71053)
	{
		if (!unk_0xE33BF8B30BC14A7C(unk_0xED1168B8D2D313FA()))
		{
			if (!Global_71054)
			{
				if (unk_0x5114FCEE2A997B95() && !func_74(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_73(0);
}

void func_73(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

bool func_74(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
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
	if (iParam1 == func_364())
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
	
	if (func_102(iParam0))
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
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1641087.f_92322[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_102(unk_0x3D35F9864E4640B1()) || (func_101() && func_100())) && !unk_0x2A3398C6222EB190(Global_2501777.f_4545, 31))
	{
		uVar1 = func_99();
		if (unk_0x76B3C79DE564AFC6(uVar1))
		{
			if (unk_0x972B5786EA49FE1A(iVar1))
			{
				if (unk_0x46E9A8D99AF6D7BC(iVar1) != -1)
				{
					if (func_1124(unk_0x46E9A8D99AF6D7BC(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
						{
							if (Global_1641087.f_92322[iParam1] != -1)
							{
								return func_97(iParam1, iParam0, 0);
							}
							else
							{
								return func_90(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_90(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
			{
				if (Global_1641087.f_92322[iParam1] != -1)
				{
					return func_97(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
	{
		if (Global_1641087.f_92322[iParam1] != -1)
		{
			return func_97(iParam1, iParam0, 0);
		}
		else
		{
			return func_90(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
		}
	}
	return func_90(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
}

int func_83(bool bParam0, int iParam1, bool bParam2)
{
	return func_84(unk_0x3D35F9864E4640B1(), bParam0, iParam1, bParam2);
}

int func_84(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x80BA8E3CC61A8625(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18))
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
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_4, 20))
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
	if (func_86(Global_1641087.f_96810))
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
		if (iParam0 == Global_262145.f_8333[iVar0])
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
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
				
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
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1593076[iVar2 /*647*/] == 148)
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
				iVar3 = func_119(iParam0);
				if (!iVar3 == -1)
				{
					return func_117(iVar3);
				}
			}
			if ((func_92(iParam1, iParam0, iVar0, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)) || ((func_89(unk_0xB5E2A107E006EC7A(iParam1), unk_0xB5E2A107E006EC7A(iParam0), 0) && unk_0x2A3398C6222EB190(Global_1641087.f_15, 23)) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)))
			{
				return func_88(1);
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 26))
			{
				return func_91(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574297 || Global_1574288) || Global_1593076[iParam0 /*647*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574297 == 1 && Global_1574307 == 0))
			{
				return func_88(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574292 && Global_1573831.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_119(iParam0);
	if (!iVar4 == -1)
	{
		return func_117(iVar4);
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
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
	}
	return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
}

int func_93()
{
	if ((func_96() || func_95()) || func_94())
	{
		return 1;
	}
	return 0;
}

var func_94()
{
	return Global_2445582.f_14;
}

var func_95()
{
	return Global_2445582.f_13;
}

var func_96()
{
	return Global_2445582.f_12;
}

int func_97(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_93())
	{
		iVar1 = func_119(iParam1);
		if (!iVar1 == -1)
		{
			return func_117(iVar1);
		}
	}
	if (Global_1641087.f_92322[iParam0] != -1 && Global_1641087.f_92322[iParam0] <= 4)
	{
		if (Global_1641087.f_92322[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1641087.f_92322[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1641087.f_92322[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1641087.f_92322[iParam0] == 4)
		{
			if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 29))
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
			iVar0 = Global_1641087.f_92322[iParam0];
		}
	}
	else
	{
		iVar0 = func_84(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_21, 13))
	{
		iVar0 = func_98(iParam0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_98(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1641087.f_116131;
			break;
		
		case 1:
			iVar0 = Global_1641087.f_116132;
			break;
		
		case 2:
			iVar0 = Global_1641087.f_116133;
			break;
		
		case 3:
			iVar0 = Global_1641087.f_116134;
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

var func_99()
{
	return Global_2359302.f_2;
}

bool func_100()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 4);
}

bool func_101()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

int func_102(int iParam0)
{
	if (func_342(iParam0, 0))
	{
		return 1;
	}
	if (func_103())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

void func_104(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_364();
	uParam1->f_17 = func_364();
	uParam1->f_18 = func_364();
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

struct<4> func_105()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

struct<4> func_106()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

char* func_107(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		sVar0 = func_116(&(Global_1623799[iParam0 /*488*/].f_11.f_98));
		return sVar0;
	}
	if (Global_1623799[iParam0 /*488*/].f_11.f_114 != Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_114)
	{
		sVar0 = func_111(iParam0, 0);
		return sVar0;
	}
	if (((func_38(iParam0, 28) || func_38(unk_0x3D35F9864E4640B1(), 28)) || func_110(iParam0)) && !func_109(iParam0))
	{
		return func_111(iParam0, 0);
	}
	iVar1 = func_108(iParam0);
	if (iVar1 != func_364())
	{
		if (iVar1 != unk_0x3D35F9864E4640B1())
		{
			if (!unk_0x9D3EA2635512FD6B() && !unk_0x2792DE3D57C3435A(0, -1, 1))
			{
				return func_111(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_364())
	{
		sVar0 = func_116(&(Global_1623799[iVar1 /*488*/].f_11.f_98));
		if (unk_0x0BD3CCFB6C6CFA91(sVar0))
		{
			return func_111(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_108(int iParam0)
{
	if (iParam0 != func_364())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_364();
}

int func_109(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x43F4A6D2081CC5ED() || unk_0x20551D6D924ED04B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			return 0;
		}
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_111(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_113(iParam0, 1))
		{
			return func_112();
		}
	}
	return unk_0xC0D54565FC1032F4("GB_REST_ACC");
}

var func_112()
{
	return unk_0xC0D54565FC1032F4("GB_REST_ACCM");
}

bool func_113(int iParam0, bool bParam1)
{
	return func_114(iParam0, bParam1, 1);
}

int func_114(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_115(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_364() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	if (iParam0 != func_364())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_364())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_116(var uParam0)
{
	return uParam0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_118(iParam0);
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

var func_118(int iParam0)
{
	return Global_2416331.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_119(int iParam0)
{
	if (!iParam0 == func_364())
	{
		if (func_120(iParam0, 1))
		{
			return Global_2416331.f_1947.f_11[func_108(iParam0)];
		}
	}
	return -1;
}

bool func_120(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_121(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_364();
}

int func_121(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_364())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_364();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 == func_364())
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_10, iVar2))
			{
				if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar2)))
				{
					iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar2));
					if (unk_0x532CFF8D6B65E42F(iVar1))
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

int func_123(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_104(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_68(&Var0);
}

int func_124()
{
	if (Local_122.f_197 != 2)
	{
		return 64;
	}
	return 87;
}

struct<4> func_125()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_126(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	struct<2> Var14;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	func_296(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17397);
		}
		else
		{
			iVar1 = (iVar1 + func_295(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_294(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17396);
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
	if (func_292(iParam0))
	{
		if (bParam1)
		{
			if (func_291(unk_0x3D35F9864E4640B1()) > 0)
			{
				func_290();
			}
			else
			{
				func_289();
			}
		}
		else
		{
			func_288();
		}
	}
	func_272(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_270(iParam0, uParam2, &iVar0, &iVar5);
	func_247(iParam0, uParam2, &iVar0, &iVar5);
	func_221(iParam0, uParam2, &iVar0, &iVar5, &iVar6);
	if (iParam0 == 168)
	{
		Global_2501777.f_4867.f_195 = uVar4;
	}
	else
	{
		Global_2501777.f_4867.f_195 = iVar5;
	}
	iVar7 = func_220();
	if (iVar7 != func_364() && iParam0 != 148)
	{
		if (func_120(unk_0x3D35F9864E4640B1(), 0))
		{
			if (!func_218(unk_0x3D35F9864E4640B1(), iVar7, 1))
			{
				func_208(&iVar0, 1);
			}
		}
	}
	func_203(iParam0, &iVar8, &iVar9);
	iVar1 = (iVar1 + iVar8);
	iVar0 = (iVar0 + iVar9);
	if (iVar1 > 0)
	{
		Global_1779220.f_10 = iVar1;
		func_299();
		func_159(0, unk_0x0031992CA618A445(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1779220.f_9 = iVar0;
		iVar12 = func_158();
		if (iVar12 != func_364())
		{
			func_157(iVar12, &iVar10, &iVar11);
		}
		bVar13 = !func_156(1);
		if (iParam0 == 168)
		{
			if (!func_311())
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_154())
			{
				if (!func_311())
				{
					Var14 = { func_153() };
					unk_0xC6D2E2BF7D2C5624(iVar0, unk_0x50B7853132D8438E(func_152(Var14.f_0)), func_151(Var14.f_0), iVar5);
				}
			}
			else if (func_311())
			{
				func_302(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_2602788[iVar16 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar16 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar16 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_150())
			{
				if (!func_311())
				{
					unk_0xC6D2E2BF7D2C5624(iVar0, unk_0x50B7853132D8438E(func_152(func_149(unk_0x3D35F9864E4640B1()))), 5, iVar5);
				}
			}
			else if (func_311())
			{
				func_302(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_2602788[iVar17 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar17 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar17 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_150())
			{
				if (!func_311())
				{
					iVar18 = func_145(uParam2->f_16, iVar5);
					unk_0x6B7E4FB50D5F3D65(iVar0, iVar5, iVar6, iVar18, uParam2->f_16);
				}
			}
			else if (func_311())
			{
				func_302(463142405, iVar0, &iVar19, 0, 1, 0);
				Global_2602788[iVar19 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar19 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar19 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0xDEE612F2D71B0308(iVar10, iVar11, iVar0, bVar13);
			}
		}
		else if (func_311())
		{
			func_302(-856006867, iVar0, &iVar20, 0, 1, 0);
			Global_2602788[iVar20 /*80*/].f_8.f_54 = iVar10;
			Global_2602788[iVar20 /*80*/].f_8.f_55 = iVar11;
			Global_2602788[iVar20 /*80*/].f_8.f_56 = bVar13;
		}
		else
		{
			unk_0x0BF2AFDC28BCEDE4(iVar10, iVar11, iVar0, bVar13);
		}
		func_144(iParam0, iVar0);
		if (func_143(iParam0))
		{
			if (func_142(iParam0) > -1)
			{
				func_300(func_142(iParam0), iVar0);
			}
		}
		Global_2457299 = iVar0;
		func_141(&Global_2455573, 0, 0);
	}
	if (func_39(unk_0x3D35F9864E4640B1()) || func_43(unk_0x3D35F9864E4640B1()))
	{
		func_131(iParam0);
	}
	if (func_130(iParam0))
	{
		Global_1779238.f_13 = iVar0;
		Global_1779238.f_14 = iVar1;
	}
	if (func_129(iParam0))
	{
		Global_1779291.f_13 = iVar0;
		Global_1779291.f_14 = iVar1;
	}
	if (func_128(iParam0))
	{
		Global_1779353.f_12 = iVar0;
		Global_1779353.f_13 = iVar1;
	}
	if (func_127(iParam0))
	{
		Global_1779396.f_12 = iVar0;
		Global_1779396.f_13 = iVar1;
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
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

int func_129(int iParam0)
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

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148 && func_115(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34, 1))
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

void func_131(int iParam0)
{
	if (func_140(unk_0x3D35F9864E4640B1()) && func_154())
	{
		if (func_139(iParam0))
		{
			func_135(6801, -1);
		}
		else if (func_134(iParam0))
		{
			func_135(6803, -1);
		}
		else if (func_133(iParam0, 1))
		{
			func_135(6804, -1);
		}
		else if (func_132(iParam0))
		{
			func_135(6805, -1);
		}
	}
}

int func_132(int iParam0)
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

int func_133(int iParam0, int iParam1)
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

int func_134(int iParam0)
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

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, func_49(iParam1), 0);
	iVar0++;
	if (!func_138(iParam0))
	{
		func_137(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_136(iParam0, iVar0, iParam1, 1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_49(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_49(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_49(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_49(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_49(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_49(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_49(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_49(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_49(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_49(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_49(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_49(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_49(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_49(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_49(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_49(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_49(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_49(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_49(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_49(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_49(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_49(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_49(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_49(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_49(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_49(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_49(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_49(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_49(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_49(iParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_49(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_49(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_138(int iParam0)
{
	if (Global_1364938)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2916:
			case 3045:
			case 6671:
			case 3040:
			case 3041:
			case 3042:
			case 3043:
			case 3044:
			case 3219:
			case 3221:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3214:
			case 3208:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3676:
			case 3217:
			case 3216:
			case 3999:
			case 3998:
			case 4002:
			case 4001:
			case 4005:
			case 4004:
			case 4008:
			case 4007:
			case 6089:
			case 6088:
				return 1;
				break;
			}
	}
	return 0;
}

int func_139(int iParam0)
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

bool func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_99, 14);
}

void func_141(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

int func_142(int iParam0)
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

int func_143(int iParam0)
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

void func_144(int iParam0, int iParam1)
{
	if (func_140(unk_0x3D35F9864E4640B1()) && func_154())
	{
		if (func_139(iParam0) && iParam1 > 0)
		{
			func_137(6802, (func_48(6802, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_145(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_148(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_146(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_146(int iParam0, int iParam1)
{
	return (func_147(iParam0) * iParam1);
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21320;
		
		case 0:
			return Global_262145.f_21321;
		
		case 1:
			return Global_262145.f_21322;
		
		case 2:
			return Global_262145.f_21323;
		
		case 3:
			return Global_262145.f_21324;
		
		case 4:
			return Global_262145.f_21325;
		
		case 5:
			return Global_262145.f_21326;
		
		case 6:
			return Global_262145.f_21327;
		
		case 7:
			return Global_262145.f_21328;
		
		default:
	}
	return 0;
}

float func_148(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21330);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_149(int iParam0)
{
	if (iParam0 == func_364())
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_259.f_154[5 /*12*/];
}

bool func_150()
{
	return func_121(unk_0x3D35F9864E4640B1());
}

int func_151(int iParam0)
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

char* func_152(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_153()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_185;
}

bool func_154()
{
	return func_155(unk_0x3D35F9864E4640B1());
}

bool func_155(int iParam0)
{
	return func_115(iParam0, 1);
}

bool func_156(bool bParam0)
{
	return func_120(unk_0x3D35F9864E4640B1(), bParam0);
}

void func_157(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1623799[iParam0 /*488*/].f_11.f_7[0];
	*uParam2 = Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_158()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

int func_159(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_160(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_160(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_170(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x76B3C79DE564AFC6(iParam1))
		{
			if (unk_0x269F274F1955DE87(iParam1))
			{
				uVar1 = unk_0x4849801147A2BA1E(iParam1);
				func_166(unk_0x616B55A822407A37(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_161(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_161(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_164(iParam0, 1) };
	if (iParam0 == func_163(unk_0x0031992CA618A445()))
	{
		func_162(1);
	}
	func_166(Var0, iParam1, 0, sParam2, iParam3);
}

void func_162(int iParam0)
{
	Global_2434915.f_1667 = iParam0;
}

int func_163(int iParam0)
{
	return iParam0;
}

Vector3 func_164(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x5B7BE6094290038A())
	{
		Var3 = { unk_0x74C3D05EEC4C701E(2) };
	}
	if (iParam0 == func_165(unk_0x0031992CA618A445()) && unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
	{
		Var0 = { unk_0xCD59EF1D7098A4B4(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		fVar6 = unk_0x69F9721375CE60CF(iParam0);
		if (unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x261E7847B591A8DC(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_165(int iParam0)
{
	return iParam0;
}

void func_166(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434915.f_1066[iVar0 /*30*/].f_6 == 0 || Global_2434915.f_1066[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434915.f_1066[iVar1 /*30*/] = { Param0 };
			Global_2434915.f_1066[iVar1 /*30*/].f_6 = 1;
			Global_2434915.f_1066[iVar1 /*30*/].f_4 = func_169(Global_2434915.f_1066[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434915.f_1066[iVar1 /*30*/].f_7 = unk_0x898811EA80D35DE2();
			Global_2434915.f_1066[iVar1 /*30*/].f_3 = iParam3;
			Global_2434915.f_1066[iVar1 /*30*/].f_8 = iParam4;
			Global_2434915.f_1066[iVar1 /*30*/].f_9 = func_168();
			Global_2434915.f_1066[iVar1 /*30*/].f_10 = func_167();
			StringCopy(&(Global_2434915.f_1066[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434915.f_1066[iVar1 /*30*/].f_26 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam6);
		}
	}
}

int func_167()
{
	if (Global_2434915.f_1667)
	{
		Global_2434915.f_1667 = 0;
		return 1;
	}
	Global_2434915.f_1667 = 0;
	return 0;
}

var func_168()
{
	var uVar0;
	
	uVar0 = Global_2434915.f_1669;
	Global_2434915.f_1669 = 1;
	return uVar0;
}

float func_169(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x1410333E912D4EC6(unk_0x98FACB31378E99D1(), Param0, 1);
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

var func_170(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_171(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_171(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_202(unk_0x3D35F9864E4640B1()) || func_201(unk_0x3D35F9864E4640B1()))
	{
		if (Global_262145.f_8836 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8836;
		}
	}
	else if (Global_262145.f_6030 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6030;
	}
	if (func_200(sParam2))
	{
	}
	if (func_199())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_197(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_196(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_193(0, &iVar1);
					break;
				
				case 3:
					func_193(1, &iVar1);
					break;
				
				case 1:
					func_190(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1788555)
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
			func_189(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_181((func_188(unk_0x3D35F9864E4640B1()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0EC11F1BDB694AB(iVar1, iParam8, iParam9);
				if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_2 != -1)
				{
					func_189(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_176(iVar1);
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
				func_172((func_174(unk_0x3D35F9864E4640B1()) + iVar1));
			}
			else
			{
				func_172((func_174(unk_0x3D35F9864E4640B1()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_172(int iParam0)
{
	if (func_199())
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_5 = iParam0;
		func_173(joaat("mpply_globalxp"), iParam0);
	}
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
	}
}

int func_174(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1124(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return func_175(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_5;
			}
		}
		else
		{
			return func_175(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_176(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0x3D35F9864E4640B1()) };
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(&Var0))
		{
			iVar13 = func_179(func_180(&Var0));
			if (iVar13 == 0)
			{
				func_178(&Global_1364944, iParam0);
				func_177(joaat("mpply_crew_local_xp_0"), Global_1364944);
			}
			else if (iVar13 == 1)
			{
				func_178(&Global_1364945, iParam0);
				func_177(joaat("mpply_crew_local_xp_1"), Global_1364945);
			}
			else if (iVar13 == 2)
			{
				func_178(&Global_1364946, iParam0);
				func_177(joaat("mpply_crew_local_xp_2"), Global_1364946);
			}
			else if (iVar13 == 3)
			{
				func_178(&Global_1364947, iParam0);
				func_177(joaat("mpply_crew_local_xp_3"), Global_1364947);
			}
			else if (iVar13 == 4)
			{
				func_178(&Global_1364948, iParam0);
				func_177(joaat("mpply_crew_local_xp_4"), Global_1364948);
			}
		}
	}
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1364939 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1364942 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1364943 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1364944 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1364945 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1364946 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1364947 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1364948 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1364949 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1364950 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1364951 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1364952 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1364953 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1364954 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1364955 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_179(int iParam0)
{
	if (iParam0 == Global_1364939)
	{
		return 0;
	}
	else if (iParam0 == Global_1364940)
	{
		return 1;
	}
	else if (iParam0 == Global_1364941)
	{
		return 2;
	}
	else if (iParam0 == Global_1364942)
	{
		return 3;
	}
	else if (iParam0 == Global_1364943)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_180(var uParam0)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(uParam0))
		{
			return Global_2455041;
		}
	}
	return Global_2455041;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	if (func_199())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8806 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1365059[func_49(-1)])
				{
					unk_0xC0EC11F1BDB694AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1365059[func_49(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_187(unk_0x3D35F9864E4640B1()))
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_1 = iParam0;
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_6 = func_185(iParam0, 1);
		}
		func_136(636, iParam0, -1, 1);
		func_137(637, func_185(iParam0, 1), -1, 1, 0);
		Global_1365059[func_49(-1)] = iParam0;
		func_182(7, 0);
	}
}

void func_182(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_184(iParam0, iParam1))
	{
		iVar0 = func_183();
		Global_2455018[iVar0] = iParam0;
	}
}

int func_183()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2455018[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_184(int iParam0, var uParam1)
{
	if (Global_1312841)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_186(iParam0, 0);
}

int func_186(int iParam0, int iParam1)
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
		if (Global_283571[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_283571[iVar3] < iParam0)
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

int func_187(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_2434915.f_1, iParam0);
	}
	return 1;
}

int func_188(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return Global_1365059[func_49(-1)];
			}
			else if (func_187(iParam0))
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1365059[func_49(-1)];
	}
	return 0;
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, func_49(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_138(iParam0))
	{
		func_137(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_136(iParam0, iVar0, iParam2, 1);
	}
}

void func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		iVar4 = unk_0xDF6AF3C6DAF25A51(iVar0);
		if (unk_0xA3C5F17FDDF2701D(iVar4))
		{
			iVar5 = unk_0x3F3ED1FF7CF1C641(iVar4);
			if (unk_0xB5E2A107E006EC7A(iVar5) != -1)
			{
				if (unk_0xB5E2A107E006EC7A(iVar5) == iVar1 || func_89(unk_0xB5E2A107E006EC7A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3D35F9864E4640B1())
					{
						if (func_192(unk_0x3D35F9864E4640B1(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_191(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_191(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_191(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_192(int iParam0, int iParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_62(iParam0) };
		Global_2488588 = { func_62(iParam1) };
		if (unk_0xF3F1AD16A136B115(&Global_2488575))
		{
			if (unk_0xF3F1AD16A136B115(&Global_2488588))
			{
				unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
				unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
				if (Global_2488505 == Global_2488540)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_193(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x32C41AA379415932())
		{
			iVar3 = iVar0;
			if (unk_0xA3C5F17FDDF2701D(iVar3))
			{
				iVar4 = unk_0x3F3ED1FF7CF1C641(iVar3);
				if (func_1124(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3D35F9864E4640B1())
					{
						iVar1++;
						if (func_192(unk_0x3D35F9864E4640B1(), iVar4))
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
			if (func_1124(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3D35F9864E4640B1())
				{
					if (func_194(unk_0x3D35F9864E4640B1(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_192(unk_0x3D35F9864E4640B1(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_191(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_191(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_194(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_195(iParam0), func_195(iParam1));
	return 0f;
}

Vector3 func_195(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0x1DB8DA6E03DC888B() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_191(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_197(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x0C58CE21DE9AD283(iParam0) > func_188(unk_0x3D35F9864E4640B1()))
		{
			iParam0 = -func_188(unk_0x3D35F9864E4640B1());
		}
	}
	if (func_198(8000, 0, 0) > 0)
	{
		if (func_198(8000, 0, 0) < (iParam0 + func_188(unk_0x3D35F9864E4640B1())))
		{
			iParam0 = (func_198(8000, 0, 0) - func_188(unk_0x3D35F9864E4640B1()));
		}
	}
	return iParam0;
}

int func_198(int iParam0, bool bParam1, int iParam2)
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
	return Global_283571[iParam0];
}

int func_199()
{
	return 1;
}

int func_200(char* sParam0)
{
	if (unk_0x996B09F758C57FBE(sParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(sParam0, "") || unk_0xB3404E397FF56B3B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_202(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

void func_203(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_207(7))
	{
		return;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_204(iParam0);
	iVar2 = unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(Global_2501777.f_4867.f_82, unk_0x898811EA80D35DE2()));
	if (iParam0 == 229)
	{
		if (iVar2 > Global_262145.f_21221)
		{
			iVar2 = Global_262145.f_21221;
		}
	}
	else if (iParam0 == 230)
	{
		if (iVar2 > Global_262145.f_21317)
		{
			iVar2 = Global_262145.f_21317;
		}
	}
	else if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_20071)
		{
			iVar2 = Global_262145.f_20071;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_20051)
		{
			iVar2 = Global_262145.f_20051;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_20063)
		{
			iVar2 = Global_262145.f_20063;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17599)
		{
			iVar2 = Global_262145.f_17599;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17600)
		{
			iVar2 = Global_262145.f_17600;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17598)
		{
			iVar2 = Global_262145.f_17598;
		}
	}
	else if (func_139(iParam0))
	{
		if (iVar2 > Global_262145.f_17601)
		{
			iVar2 = Global_262145.f_17601;
		}
	}
	else if (func_133(iParam0, 0) || func_134(iParam0))
	{
		if (iVar2 > Global_262145.f_17602)
		{
			iVar2 = Global_262145.f_17602;
		}
	}
	else if (iVar2 > Global_262145.f_11584)
	{
		iVar2 = Global_262145.f_11584;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11675;
		
		case 152:
			return Global_262145.f_11710;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11698;
		
		case 157:
			return Global_262145.f_11665;
		
		case 159:
			return Global_262145.f_11648;
		
		case 164:
			return Global_262145.f_11688;
		
		case 160:
			return Global_262145.f_11738;
		
		case 162:
			return Global_262145.f_11758;
		
		case 163:
			return Global_262145.f_11723;
		
		case 154:
			return Global_262145.f_11793;
		
		case 155:
			return Global_262145.f_11783;
		
		case 153:
			return Global_262145.f_11747;
		
		case 170:
			return Global_262145.f_14115;
		
		case 171:
			return Global_262145.f_14174;
		
		case 172:
			return Global_262145.f_14192;
		
		case 173:
			return Global_262145.f_14133;
		
		case 166:
			return Global_262145.f_14148;
		
		case 167:
			return Global_262145.f_14239;
		
		case 169:
			return Global_262145.f_14211;
		
		case 168:
			return Global_262145.f_14204;
		
		case 179:
			return Global_262145.f_17481;
		
		case 180:
			return Global_262145.f_17260;
		
		case 182:
			return Global_262145.f_17260;
		
		case 183:
			return Global_262145.f_17260;
		
		case 185:
			return Global_262145.f_17260;
		
		case 186:
			return Global_262145.f_17260;
		
		case 189:
			return Global_262145.f_17481;
		
		case 190:
			return Global_262145.f_17136;
		
		case 191:
			return Global_262145.f_17227;
		
		case 192:
			return Global_262145.f_17021;
		
		case 193:
			return Global_262145.f_17481;
		
		case 194:
			return Global_262145.f_17481;
		
		case 195:
			return Global_262145.f_17260;
		
		case 197:
			return Global_262145.f_17260;
		
		case 198:
			return Global_262145.f_17260;
		
		case 199:
			return Global_262145.f_17481;
		
		case 200:
			return Global_262145.f_17481;
		
		case 201:
			return Global_262145.f_17481;
		
		case 205:
			return Global_262145.f_17481;
		
		case 207:
			return Global_262145.f_17260;
		
		case 208:
			return Global_262145.f_17260;
		
		case 209:
			return Global_262145.f_17260;
		
		case 210:
			return Global_262145.f_17481;
		
		case 211:
			return Global_262145.f_17481;
		
		case 214:
			return Global_262145.f_18277;
		
		case 215:
			return Global_262145.f_18279;
		
		case 216:
			return Global_262145.f_18281;
		
		case 217:
			return Global_262145.f_18283;
		
		case 218:
			return Global_262145.f_18285;
		
		case 219:
			return Global_262145.f_18287;
		
		case 220:
			return Global_262145.f_18289;
		
		case 221:
			return Global_262145.f_18291;
		
		case 225:
			if (func_156(0) || func_205(0))
			{
				return Global_262145.f_20073;
			}
			break;
		
		case 226:
			if (func_156(0) || func_205(0))
			{
				return Global_262145.f_20053;
			}
			break;
		
		case 227:
			if (func_156(0) || func_205(0))
			{
				return Global_262145.f_20065;
			}
			break;
		
		case 229:
			if (func_156(0) || func_205(0))
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 230:
			if (func_156(0) || func_205(0))
			{
				return Global_262145.f_21319;
			}
			break;
	}
	return 0;
}

bool func_205(bool bParam0)
{
	return func_113(unk_0x3D35F9864E4640B1(), bParam0);
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11674;
		
		case 152:
			return Global_262145.f_11709;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11697;
		
		case 157:
			return Global_262145.f_11664;
		
		case 159:
			return Global_262145.f_11647;
		
		case 164:
			return Global_262145.f_11687;
		
		case 160:
			return Global_262145.f_11737;
		
		case 162:
			return Global_262145.f_11757;
		
		case 163:
			return Global_262145.f_11722;
		
		case 154:
			return Global_262145.f_11792;
		
		case 155:
			return Global_262145.f_11782;
		
		case 153:
			return Global_262145.f_11746;
		
		case 170:
			return Global_262145.f_14114;
		
		case 171:
			return Global_262145.f_14173;
		
		case 172:
			return Global_262145.f_14191;
		
		case 173:
			return Global_262145.f_14132;
		
		case 166:
			return Global_262145.f_14147;
		
		case 179:
			return Global_262145.f_17480;
		
		case 180:
			return Global_262145.f_17259;
		
		case 182:
			return Global_262145.f_17259;
		
		case 183:
			return Global_262145.f_17259;
		
		case 185:
			return Global_262145.f_17259;
		
		case 186:
			return Global_262145.f_17259;
		
		case 189:
			return Global_262145.f_17480;
		
		case 193:
			return Global_262145.f_17480;
		
		case 194:
			return Global_262145.f_17480;
		
		case 195:
			return Global_262145.f_17259;
		
		case 197:
			return Global_262145.f_17259;
		
		case 198:
			return Global_262145.f_17259;
		
		case 199:
			return Global_262145.f_17480;
		
		case 200:
			return Global_262145.f_17480;
		
		case 201:
			return Global_262145.f_17480;
		
		case 205:
			return Global_262145.f_17480;
		
		case 207:
			return Global_262145.f_17259;
		
		case 208:
			return Global_262145.f_17259;
		
		case 209:
			return Global_262145.f_17259;
		
		case 210:
			return Global_262145.f_17480;
		
		case 211:
			return Global_262145.f_17480;
		
		case 190:
			if (!func_150())
			{
				return Global_262145.f_17135;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_150())
			{
				return Global_262145.f_17226;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_150())
			{
				return Global_262145.f_17020;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18276;
		
		case 215:
			return Global_262145.f_18278;
		
		case 216:
			return Global_262145.f_18280;
		
		case 217:
			return Global_262145.f_18282;
		
		case 218:
			return Global_262145.f_18284;
		
		case 219:
			return Global_262145.f_18286;
		
		case 220:
			return Global_262145.f_18288;
		
		case 221:
			return Global_262145.f_18290;
		
		case 225:
			if (func_205(0))
			{
				return Global_262145.f_20072;
			}
			break;
		
		case 226:
			if (func_205(0))
			{
				return Global_262145.f_20052;
			}
			break;
		
		case 227:
			if (func_205(0))
			{
				return Global_262145.f_20064;
			}
			break;
		
		case 229:
			if (func_205(0))
			{
				return Global_262145.f_21222;
			}
			break;
		
		case 230:
			if (func_205(0))
			{
				return Global_262145.f_21318;
			}
			break;
	}
	return 0;
}

bool func_207(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_29, iParam0);
}

void func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_150())
		{
			if (func_156(0))
			{
				if (!func_205(0))
				{
					if (unk_0x80BA8E3CC61A8625(func_158()))
					{
						if (func_217() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_217());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_215(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_214("GB_BCUT_TICK1", func_158(), iVar0, 0, 0, 1, 1);
						}
						func_213(20);
						func_209(func_158(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1124(iParam0, 0, 1))
	{
		Var0.f_0 = -1983770473;
		Var0.f_1 = unk_0x3D35F9864E4640B1();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_212(iParam0);
		func_211(&(Var0.f_6), &(Var0.f_7));
		unk_0xBD257D33BCFA529A(1, &Var0, 8, func_210(iParam0));
	}
}

int func_210(int iParam0)
{
	var uVar0;
	
	unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam0);
	return uVar0;
}

void func_211(var uParam0, var uParam1)
{
	*uParam0 = Global_1639417.f_9;
	*uParam1 = Global_1639417.f_10;
}

var func_212(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_430;
}

void func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

int func_214(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var1))
		{
		}
		unk_0xC8EBA5D7FC75C1C0(sParam0);
		unk_0xDBB8FCB00B701798(func_82(iParam1, -2, 1, 0));
		unk_0x50B3C23D0902259F(func_57(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xDBB8FCB00B701798(iParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam2);
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		func_52(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_215(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_216(1);
	}
	else
	{
		iVar1 = func_216(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_216(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11579;
}

int func_217()
{
	return Global_262145.f_11578;
}

int func_218(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_364())
	{
		if (!bParam2)
		{
			if (func_219(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1623799[iParam0 /*488*/].f_11 != func_364())
		{
			return iParam1 == Global_1623799[iParam0 /*488*/].f_11;
		}
	}
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	if (iParam1 != func_364())
	{
		if (iParam0 != func_364())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 != func_364())
			{
				if (Global_1623799[iParam0 /*488*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_220()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34;
}

void func_221(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_205(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_150())
		{
			iVar15 = unk_0x3D35F9864E4640B1();
		}
		else
		{
			iVar15 = func_158();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_245(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_236(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
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
			iVar2 = func_146(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_145(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_235(*iParam2) > 0)
			{
				if (iVar15 == unk_0x3D35F9864E4640B1())
				{
					func_234("SMTICK_RONCUT", func_235(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_235(*iParam2));
			}
			if (iVar15 == unk_0x3D35F9864E4640B1())
			{
				func_232(iVar2, iVar9);
				iVar6 = func_231(&uVar5);
				iVar7 = Global_262145.f_21336;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21335));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_213(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x32C41AA379415932())
						{
							iVar19 = iVar18;
							if (unk_0xA3C5F17FDDF2701D(iVar19))
							{
								iVar20 = unk_0x3F3ED1FF7CF1C641(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21269;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21270;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1788563 = *iParam2;
					func_213(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_224(iParam0);
	func_223(iParam0, uVar0, iParam1, iParam2);
}

void func_223(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1095396841;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_212(iParam0);
	func_211(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_364())
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			unk_0xBD257D33BCFA529A(1, &Var0, 8, func_210(iParam0));
		}
	}
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_229();
	iVar0 = func_227(iParam0, iVar0);
	iVar1 = Global_1623799[func_158() /*488*/].f_11.f_369;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14075));
	if (iVar0 < func_226())
	{
		iVar0 = func_226();
	}
	if (iVar0 > func_225())
	{
		iVar0 = func_225();
	}
	return iVar0;
}

int func_225()
{
	return Global_262145.f_14076;
}

int func_226()
{
	return Global_262145.f_15251;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_291(iParam0) * func_228());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_228()
{
	return Global_262145.f_15250;
}

var func_229()
{
	return Global_262145.f_11570;
}

int func_230(int iParam0)
{
	if (unk_0x80BA8E3CC61A8625(iParam0))
	{
		if (iParam0 != unk_0x3D35F9864E4640B1())
		{
			if (func_218(iParam0, unk_0x3D35F9864E4640B1(), 0))
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

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(iVar0)))
		{
			iVar2 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_342(iVar2, 0) && !func_218(iVar2, unk_0x3D35F9864E4640B1(), 1))
			{
				iVar1++;
			}
			else if (func_342(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_232(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_233(iParam0, 6095);
	}
	if (iParam1 > 0)
	{
		func_233(iParam0, 6095);
	}
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_48(iParam1, -1, 0);
	func_137(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_234(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x96577CAA1D1E72DB(iParam1);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_52(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_235(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21303);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21304))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21304);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_243())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_245(unk_0x3D35F9864E4640B1());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_238(func_239(func_242(iVar0), -1, -1));
		if (func_237(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_239(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	iVar1 = func_241(iParam0, iParam1);
	uVar2 = func_240(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_241(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_243()
{
	return func_244() != 0;
}

int func_244()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235;
}

int func_245(int iParam0)
{
	if (iParam0 != func_364() && func_246(iParam0))
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235.f_3;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (iParam0 != func_364())
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235 != 0;
	}
	return 0;
}

void func_247(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_205(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_150())
		{
			iVar15 = unk_0x3D35F9864E4640B1();
		}
		else
		{
			iVar15 = func_158();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_149(iVar15);
			iVar0 = (func_269(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_265(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20055));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20054));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x3D35F9864E4640B1())
			{
				func_262(iVar16, iVar2);
				if (func_258(iVar16) >= Global_262145.f_19608 || iVar2 >= Global_262145.f_19608)
				{
					func_248(5);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20057);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20056));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_213(108);
					}
					else
					{
						func_213(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x32C41AA379415932())
						{
							iVar19 = iVar18;
							if (unk_0xA3C5F17FDDF2701D(iVar19))
							{
								iVar20 = unk_0x3F3ED1FF7CF1C641(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20058;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20059;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1788563 = *iParam2;
					func_213(112);
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

void func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19596)
			{
				if (func_250(Global_262145.f_19597))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19598)
			{
				if (func_250(Global_262145.f_19599))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19600)
			{
				if (func_250(Global_262145.f_19601))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19602)
			{
				if (func_250(Global_262145.f_19603))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19604)
			{
				if (func_250(Global_262145.f_19605))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19606)
			{
				if (func_250(Global_262145.f_19607))
				{
					func_234("CLOTHAWDSTRAP3", Global_262145.f_19608, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19609)
			{
				if (func_250(Global_262145.f_19610))
				{
					func_234("CLOTHAWDSTRAP5", Global_262145.f_19739, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19612)
			{
				if (func_250(Global_262145.f_19613))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19614)
			{
				if (func_250(Global_262145.f_19615))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19616)
			{
				if (func_250(Global_262145.f_19617))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19618)
			{
				if (func_250(Global_262145.f_19619))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19620)
			{
				if (func_250(Global_262145.f_19621))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19622)
			{
				if (func_250(Global_262145.f_19623))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19624)
			{
				if (func_250(Global_262145.f_19625))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19626)
			{
				if (func_250(Global_262145.f_19627))
				{
					func_249("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_249(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam3);
	}
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	else
	{
		Global_2488575 = { func_62(unk_0x3D35F9864E4640B1()) };
		if (unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575))
		{
			iVar1 = 0;
			if (unk_0xB3404E397FF56B3B(&(Global_2488505.f_22), "Leader") && Global_2488505.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2488505.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xAC2E222FB9C25D52(iVar2, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar1, 0, Global_2488505, unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), Global_1314010, Global_1314011, Global_1314012);
		}
		else
		{
			iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		}
	}
	func_52(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_255(15417, -1, -1))
			{
				func_254(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_255(15418, -1, -1))
			{
				func_254(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_255(15425, -1, -1))
			{
				func_254(15425, 1, -1, 1);
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
			if (!func_255(15405, -1, -1))
			{
				func_254(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_255(15393, -1, -1))
			{
				func_254(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_255(15409, -1, -1))
			{
				func_254(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_255(15396, -1, -1))
			{
				func_254(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_255(15412, -1, -1))
			{
				func_254(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_255(15403, -1, -1))
			{
				func_254(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_255(15389, -1, -1))
			{
				func_254(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_255(15398, -1, -1))
			{
				func_254(15398, 1, -1, 1);
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
			if (!func_255(15400, -1, -1))
			{
				func_254(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_255(15408, -1, -1))
			{
				func_254(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_255(15411, -1, -1))
			{
				func_254(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_255(15397, -1, -1))
			{
				func_254(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_255(15413, -1, -1))
			{
				func_254(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_255(15391, -1, -1))
			{
				func_254(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_255(15388, -1, -1))
			{
				func_254(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_255(15401, -1, -1))
			{
				func_254(15401, 1, -1, 1);
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
			if (!func_255(15394, -1, -1))
			{
				func_254(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_255(15406, -1, -1))
			{
				func_254(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_255(15395, -1, -1))
			{
				func_254(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_255(15410, -1, -1))
			{
				func_254(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_255(15407, -1, -1))
			{
				func_254(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_255(15414, -1, -1))
			{
				func_254(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_255(15415, -1, -1))
			{
				func_254(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_255(15399, -1, -1))
			{
				func_254(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_255(15404, -1, -1))
			{
				func_254(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_255(15392, -1, -1))
			{
				func_254(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_255(15390, -1, -1))
			{
				func_254(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_255(15402, -1, -1))
			{
				func_254(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_255(15416, -1, -1))
			{
				func_254(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_253(209, -1))
			{
				func_251(209, 1, -1, 1);
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
			if (!func_255(15426, -1, -1))
			{
				func_254(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_255(15422, -1, -1))
			{
				func_254(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_255(15423, -1, -1))
			{
				func_254(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_255(15421, -1, -1))
			{
				func_254(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_255(15427, -1, -1))
			{
				func_254(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_255(15419, -1, -1))
			{
				func_254(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_255(15420, -1, -1))
			{
				func_254(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_251(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_252())
	{
		iVar0 = Global_2534367[iParam0 /*3*/][func_49(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x356621BE3FFD87C4(iVar0, iParam1, iParam3);
		}
	}
}

int func_252()
{
	return 1;
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_255(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar1 = func_257(iParam0, iParam1);
	uVar2 = func_256(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_257(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = func_260(iParam0);
	return func_48(func_259(iVar0), -1, 0);
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3930;
		
		case 1:
			return 3931;
		
		case 2:
			return 3932;
		
		case 3:
			return 3933;
		
		case 4:
			return 3934;
		
		case 5:
			return 5435;
		
		default:
	}
	return 3930;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (func_261(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_261(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_260(iParam0);
	iVar1 = func_259(iVar0);
	iVar2 = (func_48(iVar1, -1, 0) + iParam1);
	func_137(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_239(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iVar0 /*12*/] != 0)
			{
				iVar1 = func_259(iVar0);
				iVar3 = (iVar3 + func_48(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_264(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_263(9357, iVar5, -1, 1);
	}
}

var func_263(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_264(int iParam0)
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

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_151(iParam1);
	if (func_261(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16080;
				if (func_266(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16085);
				}
				if (func_266(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16090);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16079;
				if (func_266(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16084);
				}
				if (func_266(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16089);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16078;
				if (func_266(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16083);
				}
				if (func_266(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16088);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16076;
				if (func_266(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16081);
				}
				if (func_266(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16086);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16077;
				if (func_266(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16082);
				}
				if (func_266(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16087);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20080;
				if (func_266(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20082);
				}
				if (func_266(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20081);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_268(iParam0, iParam1))
	{
		iVar0 = func_267(iParam0, iParam1);
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_261(iParam1) && iParam0 != func_364())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_261(iParam1) && iParam0 != func_364())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_269(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (func_261(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_270(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_154())
			{
				Var0 = { func_153() };
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
				iVar7 = func_265(unk_0x3D35F9864E4640B1(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17710);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17709);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_231(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17700);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17699));
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
					func_213(86);
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (func_205(0))
			{
				Var15 = { func_271(func_158()) };
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
				iVar22 = func_265(func_158(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17710));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17709));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17749;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17750;
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

struct<2> func_271(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_185;
}

void func_272(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_121(unk_0x3D35F9864E4640B1()))
		{
			if (bParam1)
			{
				func_287();
			}
			func_286();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_121(unk_0x3D35F9864E4640B1()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_278(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_277(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_231(&uVar2);
					iVar4 = Global_262145.f_15261;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14470));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_213(44);
					}
				}
				func_275(*iParam3);
				func_274();
				Global_2501777.f_4867.f_194 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x32C41AA379415932())
				{
					iVar8 = iVar7;
					if (unk_0xA3C5F17FDDF2701D(iVar8))
					{
						iVar9 = unk_0x3F3ED1FF7CF1C641(iVar8);
						if (func_230(iVar9))
						{
							func_222(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_121(unk_0x3D35F9864E4640B1()))
		{
			func_273();
		}
	}
}

void func_273()
{
	int iVar0;
	
	iVar0 = Global_2536235[func_50()];
	iVar0++;
	func_136(3654, iVar0, -1, 1);
}

void func_274()
{
	int iVar0;
	
	iVar0 = Global_2536241[func_50()];
	iVar0++;
	func_136(3653, iVar0, -1, 1);
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2536244[func_50()];
	iVar0 = (iVar0 + iParam0);
	func_136(3655, iVar0, -1, 1);
	if (func_239(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_276(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_263(7666, iVar2, -1, 1);
	}
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15394;
			break;
		
		case 2:
			return Global_262145.f_15395;
			break;
		
		case 3:
			return Global_262145.f_15396;
			break;
		
		case 4:
			return Global_262145.f_15397;
			break;
		
		case 5:
			return Global_262145.f_15398;
			break;
		
		case 6:
			return Global_262145.f_15399;
			break;
		
		case 7:
			return Global_262145.f_15400;
			break;
		
		case 8:
			return Global_262145.f_15401;
			break;
		
		case 9:
			return Global_262145.f_15402;
			break;
		
		case 10:
			return Global_262145.f_15403;
			break;
		
		case 11:
			return Global_262145.f_15404;
			break;
		
		case 12:
			return Global_262145.f_15405;
			break;
		
		case 13:
			return Global_262145.f_15406;
			break;
		
		case 14:
			return Global_262145.f_15407;
			break;
		
		case 15:
			return Global_262145.f_15408;
			break;
		
		case 16:
			return Global_262145.f_15409;
			break;
		
		case 17:
			return Global_262145.f_15410;
			break;
		
		case 18:
			return Global_262145.f_15411;
			break;
		
		case 19:
			return Global_262145.f_15412;
			break;
		
		case 20:
			return Global_262145.f_15413;
			break;
		
		case 21:
			return Global_262145.f_15414;
			break;
		
		case 22:
			return Global_262145.f_15415;
			break;
		
		case 23:
			return Global_262145.f_15416;
			break;
		
		case 24:
			return Global_262145.f_15417;
			break;
	}
	return 0;
}

var func_277(int iParam0)
{
	if (iParam0 >= Global_262145.f_14448)
	{
		return Global_262145.f_14469;
	}
	else if (iParam0 >= Global_262145.f_14447)
	{
		return Global_262145.f_14468;
	}
	else if (iParam0 >= Global_262145.f_14446)
	{
		return Global_262145.f_14467;
	}
	else if (iParam0 >= Global_262145.f_14445)
	{
		return Global_262145.f_14466;
	}
	else if (iParam0 >= Global_262145.f_14444)
	{
		return Global_262145.f_14465;
	}
	else if (iParam0 >= Global_262145.f_14443)
	{
		return Global_262145.f_14464;
	}
	else if (iParam0 >= Global_262145.f_14442)
	{
		return Global_262145.f_14463;
	}
	else if (iParam0 >= Global_262145.f_14441)
	{
		return Global_262145.f_14462;
	}
	else if (iParam0 >= Global_262145.f_14440)
	{
		return Global_262145.f_14461;
	}
	else if (iParam0 >= Global_262145.f_14439)
	{
		return Global_262145.f_14460;
	}
	else if (iParam0 >= Global_262145.f_14438)
	{
		return Global_262145.f_14459;
	}
	else if (iParam0 >= Global_262145.f_14437)
	{
		return Global_262145.f_14458;
	}
	else if (iParam0 >= Global_262145.f_14436)
	{
		return Global_262145.f_14457;
	}
	else if (iParam0 >= Global_262145.f_14435)
	{
		return Global_262145.f_14456;
	}
	else if (iParam0 >= Global_262145.f_14434)
	{
		return Global_262145.f_14455;
	}
	else if (iParam0 >= Global_262145.f_14433)
	{
		return Global_262145.f_14454;
	}
	else if (iParam0 >= Global_262145.f_14432)
	{
		return Global_262145.f_14453;
	}
	else if (iParam0 >= Global_262145.f_14431)
	{
		return Global_262145.f_14452;
	}
	else if (iParam0 >= Global_262145.f_14430)
	{
		return Global_262145.f_14451;
	}
	else if (iParam0 >= Global_262145.f_14429)
	{
		return Global_262145.f_14450;
	}
	return Global_262145.f_14449;
}

int func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_285(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_284(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_283(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_279(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_279(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_283(unk_0x3AF262D7332EEDF5(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_279(int iParam0)
{
	int iVar0;
	
	if (func_282(iParam0))
	{
		iVar0 = func_280(func_281(iParam0));
		return func_48(iVar0, -1, 0);
	}
	return 0;
}

int func_280(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3633;
	}
	else if (iParam0 == 1)
	{
		return 3634;
	}
	else if (iParam0 == 2)
	{
		return 3635;
	}
	else if (iParam0 == 3)
	{
		return 3636;
	}
	else if (iParam0 == 4)
	{
		return 3637;
	}
	return 3633;
}

int func_281(int iParam0)
{
	int iVar0;
	
	if (func_282(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_282(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_283(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14648;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14646;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14650;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14644;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14642;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14652;
	}
	return 0;
}

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_282(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1780558[iVar0] == iParam1 && Global_1780565[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (func_282(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_286()
{
	int iVar0;
	
	iVar0 = Global_2536232[func_50()];
	iVar0++;
	Global_2536232[func_50()] = iVar0;
	func_136(3652, iVar0, -1, 1);
}

void func_287()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2536229[func_50()];
	iVar1 = Global_2536238[func_50()];
	iVar0++;
	iVar1++;
	Global_2536229[func_50()] = iVar0;
	Global_2536238[func_50()] = iVar1;
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_104 = iVar1;
	func_136(3650, iVar0, -1, 1);
	func_136(3651, iVar1, -1, 1);
}

void func_288()
{
	if (func_150())
	{
		Global_2446355.f_3066.f_134 = 0;
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
	}
}

void func_289()
{
	if (func_150())
	{
		if (Global_2446355.f_3066.f_134 < 10)
		{
			Global_2446355.f_3066.f_134++;
			Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
		}
	}
}

void func_290()
{
	if (func_150())
	{
		if (Global_2446355.f_3066.f_134 > 0)
		{
			Global_2446355.f_3066.f_134 = (Global_2446355.f_3066.f_134 - 1);
			Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
		}
	}
}

int func_291(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_27;
}

int func_292(int iParam0)
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
		case 229:
		case 230:
			if (func_156(1) && !func_205(1))
			{
				if (func_293(func_158()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_293(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 26);
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11695) * Global_262145.f_11700));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11645) * Global_262145.f_11650));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11672) * Global_262145.f_11676));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11685) * Global_262145.f_11689));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11707) * Global_262145.f_11712));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11869) * Global_262145.f_11870));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11875) * Global_262145.f_11876));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11873) * Global_262145.f_11874));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11867) * Global_262145.f_11868));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11871) * Global_262145.f_11872));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11865) * Global_262145.f_11866));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14171;
		
		case 172:
			return Global_262145.f_14187;
		
		case 173:
			return Global_262145.f_14130;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17404;
		
		case 180:
			return Global_262145.f_17280;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17288;
		
		case 185:
			return Global_262145.f_17297;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17492;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17509;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17357;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17540;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17418;
		
		case 205:
			return Global_262145.f_17527;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17385;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17522;
		
		case 211:
			return Global_262145.f_17486;
		
		case 214:
			return Global_262145.f_18026;
		
		case 215:
			return Global_262145.f_18036;
		
		case 216:
			return Global_262145.f_18046;
		
		case 217:
			return Global_262145.f_18055;
		
		case 218:
			return Global_262145.f_18064;
		
		case 219:
			return Global_262145.f_18080;
		
		default:
	}
	return 0;
}

int func_295(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11696) * Global_262145.f_11701));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11646) * Global_262145.f_11651));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11673) * Global_262145.f_11677));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11686) * Global_262145.f_11690));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11708) * Global_262145.f_11713));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11745) * Global_262145.f_11748));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11791) * Global_262145.f_11794));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11781) * Global_262145.f_11784));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11736) * Global_262145.f_11739));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11756) * Global_262145.f_11761));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11721) * Global_262145.f_11724));
		
		case 170:
			return Global_262145.f_14113;
		
		case 171:
			return Global_262145.f_14172;
		
		case 172:
			return Global_262145.f_14188;
		
		case 173:
			return Global_262145.f_14131;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16208;
		
		case 168:
			return Global_262145.f_16207;
		
		case 179:
			return Global_262145.f_17405;
		
		case 180:
			return Global_262145.f_17281;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17289;
		
		case 185:
			return Global_262145.f_17298;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17493;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17510;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17358;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17541;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17419;
		
		case 205:
			return Global_262145.f_17528;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17386;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17523;
		
		case 211:
			return Global_262145.f_17487;
		
		case 214:
			return Global_262145.f_18027;
		
		case 215:
			return Global_262145.f_18037;
		
		case 216:
			return Global_262145.f_18047;
		
		case 217:
			return Global_262145.f_18056;
		
		case 218:
			return Global_262145.f_18065;
		
		case 219:
			return Global_262145.f_18081;
		
		case 178:
			if (func_150())
			{
				return Global_262145.f_17904;
			}
			else if (bParam1)
			{
				return Global_262145.f_17905;
			}
			break;
		
		case 188:
			if (func_150())
			{
				return Global_262145.f_17988;
			}
			else if (bParam1)
			{
				return Global_262145.f_17989;
			}
			break;
		
		case 225:
			if (func_150() && !func_154())
			{
				if (func_293(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20068;
				}
				else
				{
					return Global_262145.f_20069;
				}
			}
			else if (func_154())
			{
				return Global_262145.f_20070;
			}
			break;
		
		case 226:
			if (func_150() && !func_154())
			{
				if (func_293(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20048;
				}
				else
				{
					return Global_262145.f_20049;
				}
			}
			else if (func_154())
			{
				return Global_262145.f_20050;
			}
			break;
		
		case 227:
			if (func_150() && !func_154())
			{
				if (func_293(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20060;
				}
				else
				{
					return Global_262145.f_20061;
				}
			}
			else if (func_154())
			{
				return Global_262145.f_20062;
			}
			break;
		
		case 229:
			if (func_150() && !func_154())
			{
				if (func_293(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_21218;
				}
				else
				{
					return Global_262145.f_21219;
				}
			}
			else if (func_154())
			{
				return Global_262145.f_21220;
			}
			break;
		
		case 230:
			if (func_150() && !func_154())
			{
				if (func_293(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_21314;
				}
				else
				{
					return Global_262145.f_21315;
				}
			}
			else if (func_154())
			{
				return Global_262145.f_21316;
			}
			break;
	}
	return 0;
}

void func_296(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_297(iParam0))
	{
		if (!func_150())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11589;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_130(iParam0))
	{
		*uParam1 = (Global_262145.f_17258 / 100f);
		*uParam2 = (Global_262145.f_17258 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11588;
		*uParam2 = Global_262145.f_11587;
	}
	if (func_130(iParam0))
	{
		if (func_120(unk_0x3D35F9864E4640B1(), 1))
		{
			*uParam1 = (Global_262145.f_17257 / 100f);
			*uParam2 = (Global_262145.f_17257 / 100f);
		}
	}
	else if (func_120(unk_0x3D35F9864E4640B1(), 1))
	{
		*uParam1 = Global_262145.f_11586;
		*uParam2 = Global_262145.f_11585;
	}
	iVar0 = func_220();
	if (iVar0 != func_364())
	{
		if (func_218(unk_0x3D35F9864E4640B1(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_297(int iParam0)
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

var func_298(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_170(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_299()
{
	Global_2456641 = 1;
}

void func_300(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2501777.f_272 = iParam0;
		if (iParam1 > Global_262145.f_5979)
		{
			iParam1 = Global_262145.f_5979;
		}
		Global_2501777.f_273 = iParam1;
		Global_2501777.f_274 = 0;
	}
}

bool func_301()
{
	return Global_262145.f_10602;
}

void func_302(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_311())
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
				func_303(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
			func_303(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_303(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_311())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_50()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_2602788[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xF4CA95098478E685(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x0808743DD170F94B(iVar4))
		{
			*uParam0 = func_310(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2602788[*uParam0 /*80*/].f_69 = 1;
					Global_2602788[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_2603312 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2603324 = 1;
			Global_2603327 = iParam4;
			Global_2603329 = iParam3;
			Global_2603330 = 1;
			Global_2603328 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2603327 = iParam4;
			Global_2603329 = iParam3;
			Global_2603330 = 1;
			Global_2603328 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_309(1, iParam4);
			Global_2603324 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_304(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_304(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_305(iParam0);
	}
}

void func_305(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_311())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_308(iParam0))
		{
			if (!bVar0)
			{
				unk_0x25AE737F7DFF42F9();
			}
		}
		else if (!bVar0)
		{
			unk_0xC03328D5D07806F1(Global_2602788[iParam0 /*80*/]);
		}
		func_306(&(Global_2602788[iParam0 /*80*/]));
	}
}

void func_306(var uParam0)
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
	func_307(&(uParam0->f_8.f_3));
	func_307(&(uParam0->f_8.f_16));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_307(var uParam0)
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

int func_308(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_309(int iParam0, var uParam1)
{
	Global_2457433 = uParam1;
	Global_2457432 = iParam0;
}

int func_310(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2602788[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_311())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2602788[iVar0 /*80*/].f_2 = 1;
			Global_2602788[iVar0 /*80*/].f_1 = uParam5;
			Global_2602788[iVar0 /*80*/].f_3 = uParam1;
			Global_2602788[iVar0 /*80*/].f_4 = uParam2;
			Global_2602788[iVar0 /*80*/].f_7 = uParam3;
			Global_2602788[iVar0 /*80*/].f_5 = 0;
			Global_2602788[iVar0 /*80*/] = iParam0;
			Global_2602788[iVar0 /*80*/].f_6 = iParam4;
			Global_2602788[iVar0 /*80*/].f_72 = uParam8;
			Global_2602788[iVar0 /*80*/].f_71 = uParam7;
			Global_2602788[iVar0 /*80*/].f_74 = iParam9;
			Global_2602788[iVar0 /*80*/].f_73 = 0;
			Global_2602788[iVar0 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
			Global_2602788[iVar0 /*80*/].f_79 = 0;
			Global_2603312 = 0;
			if (bParam6)
			{
				Global_2602788[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_311()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

void func_312(bool bParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (Local_122.f_197 == 2)
	{
		func_323(bParam0, iParam1, iParam2, iParam3);
		return;
	}
	if (iLocal_2774 == -1)
	{
		iLocal_2774 = func_322(&uLocal_631, 0, 0);
	}
	if (!bParam0)
	{
		if (Local_122.f_197 != 2)
		{
			func_46(1);
		}
	}
	if (iLocal_2774 < (Global_262145.f_10485 * 60000))
	{
		fVar0 = Global_262145.f_10489;
	}
	else if (iLocal_2774 < (Global_262145.f_10486 * 60000))
	{
		fVar0 = Global_262145.f_10490;
	}
	else if (iLocal_2774 < (Global_262145.f_10487 * 60000))
	{
		fVar0 = Global_262145.f_10491;
	}
	else if (iLocal_2774 < (Global_262145.f_10488 * 60000))
	{
		fVar0 = Global_262145.f_10492;
	}
	else
	{
		fVar0 = Global_262145.f_10493;
	}
	fVar1 = unk_0xBBDA792448DB5A89(func_321());
	fVar2 = unk_0xBBDA792448DB5A89(func_320());
	fVar3 = unk_0xBBDA792448DB5A89(func_319());
	fVar4 = unk_0xBBDA792448DB5A89(func_318());
	fVar5 = func_317();
	iVar6 = func_316();
	if (iLocal_2775 > iVar6)
	{
		iLocal_2775 = iVar6;
	}
	uVar7 = func_315(1);
	uVar8 = func_313(1);
	*iParam1 = uVar7;
	*iParam2 = uVar8;
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 14))
		{
			iVar9 = unk_0xF2DB717A73826179((((fVar1 * fVar0) + (((fVar3 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2775) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_10640));
			*iParam2 = (*iParam2 + unk_0xF2DB717A73826179((((fVar2 * fVar0) + ((fVar4 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2775) * fVar5))) * Global_262145.f_10641)));
			if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_5 == -1)
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_5 = *iParam1;
			}
			func_208(&iVar9, 1);
			*iParam1 = (*iParam1 + iVar9);
		}
	}
}

int func_313(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_10497;
	}
	func_314();
	iVar0 = (Global_262145.f_10497 * iLocal_2770);
	if (Local_122.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

void func_314()
{
	float fVar0;
	
	if (iLocal_2770 != 0)
	{
		return;
	}
	if (func_8(&uLocal_2768))
	{
		iLocal_2770 = func_322(&uLocal_2768, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_2770);
	fVar0 = (fVar0 / 60000f);
	iLocal_2770 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_2770 >= 1)
	{
	}
	else
	{
		iLocal_2770 = 1;
	}
	if (iLocal_2770 > Global_262145.f_10631)
	{
		iLocal_2770 = Global_262145.f_10631;
	}
}

int func_315(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_10496;
	}
	func_314();
	iVar0 = (Global_262145.f_10496 * iLocal_2770);
	if (Local_122.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

var func_316()
{
	if (Local_122.f_197 == 2)
	{
		return Global_262145.f_17469;
	}
	return Global_262145.f_10495;
}

var func_317()
{
	if (Local_122.f_197 == 2)
	{
		return Global_262145.f_17468;
	}
	return Global_262145.f_10494;
}

var func_318()
{
	if (Local_122.f_197 == 2)
	{
		return Global_262145.f_17462;
	}
	return Global_262145.f_10484;
}

var func_319()
{
	if (Local_122.f_197 == 2)
	{
		return Global_262145.f_17460;
	}
	return Global_262145.f_10483;
}

var func_320()
{
	if (Local_122.f_197 == 2)
	{
		return Global_262145.f_17461;
	}
	return Global_262145.f_10482;
}

var func_321()
{
	if (Local_122.f_197 == 2)
	{
		return Global_262145.f_17459;
	}
	return Global_262145.f_10481;
}

int func_322(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0);
		}
		else
		{
			return unk_0xBC0BAC39A2995602(unk_0x51A193745FDE917D(), *uParam0);
		}
	}
	return unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0);
}

void func_323(bool bParam0, var uParam1, var uParam2, int iParam3)
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
	
	if (iLocal_2774 == -1)
	{
		iLocal_2774 = func_322(&uLocal_631, 0, 0);
	}
	if (iLocal_2774 < (Global_262145.f_10485 * 60000))
	{
		fVar0 = Global_262145.f_17463;
	}
	else if (iLocal_2774 < (Global_262145.f_10486 * 60000))
	{
		fVar0 = Global_262145.f_17464;
	}
	else if (iLocal_2774 < (Global_262145.f_10487 * 60000))
	{
		fVar0 = Global_262145.f_17465;
	}
	else if (iLocal_2774 < (Global_262145.f_10488 * 60000))
	{
		fVar0 = Global_262145.f_17466;
	}
	else
	{
		fVar0 = Global_262145.f_17467;
	}
	fVar1 = unk_0xBBDA792448DB5A89(func_321());
	fVar2 = unk_0xBBDA792448DB5A89(func_320());
	fVar3 = unk_0xBBDA792448DB5A89(func_319());
	fVar4 = unk_0xBBDA792448DB5A89(func_318());
	fVar5 = func_317();
	iVar6 = func_316();
	if (iLocal_2775 > iVar6)
	{
		iLocal_2775 = iVar6;
	}
	uVar7 = func_315(1);
	uVar8 = func_313(1);
	*uParam1 = uVar7;
	*uParam2 = uVar8;
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 14))
		{
			iVar9 = unk_0xF2DB717A73826179((((fVar1 * fVar0) + (((fVar3 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2775) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_10640));
			*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((((fVar2 * fVar0) + ((fVar4 * fVar0) * (unk_0xBBDA792448DB5A89(iLocal_2775) * fVar5))) * Global_262145.f_10641)));
			if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_5 == -1)
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_5 = *uParam1;
			}
			func_208(&iVar9, 1);
			*uParam1 = (*uParam1 + iVar9);
		}
	}
}

int func_324(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_104(uParam0, &Var0, iParam3, sParam4, sParam5);
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

int func_325()
{
	if (Local_122.f_197 != 2)
	{
		return 66;
	}
	return 88;
}

struct<4> func_326()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_327(bool bParam0)
{
	if (Local_122.f_197 == 2)
	{
		if (!unk_0x2A3398C6222EB190(iLocal_579, 31))
		{
			Global_1779220.f_2 = Local_122.f_179;
			Global_1779220.f_3 = Local_122.f_180;
			if (bParam0)
			{
				func_962(1, 1, 0, !unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0), -1, -1, -1, -1, -1);
			}
			else
			{
				func_962(0, 2, 0, !unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0), -1, -1, -1, -1, -1);
			}
		}
	}
}

int func_328(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_104(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam6;
	return func_68(&Var0);
}

int func_329()
{
	if (Local_122.f_197 != 2)
	{
		return 68;
	}
	return 88;
}

struct<4> func_330()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

int func_331(int iParam0, int iParam1, int iParam2)
{
	return 0;
	if (!func_150())
	{
		return 0;
	}
	if (iParam1 != func_364())
	{
		if (func_218(iParam1, iParam0, 1))
		{
			return 1;
		}
	}
	if (iParam2 != func_364())
	{
		if (func_218(iParam2, iParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_122();
	*iParam1 = func_364();
	if (iVar0 != func_364())
	{
		*iParam2 = 1;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_10, iVar2))
			{
				if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar2)))
				{
					iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar2));
					if (!func_342(iVar1, 0))
					{
						if (iVar1 != iVar0)
						{
							if (unk_0x532CFF8D6B65E42F(iVar1))
							{
								iVar4 = unk_0x3DAB36F6FA9328A6(iVar1);
								iVar3 = iVar4;
								if (!unk_0x2A3398C6222EB190(Local_321[iVar3 /*8*/].f_1, 1))
								{
									*iParam2++;
									if (*iParam1 == func_364())
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
			iVar2++;
		}
	}
	if (*iParam2 > 1)
	{
		return 1;
	}
	return 0;
}

int func_333()
{
	if ((func_38(unk_0x3D35F9864E4640B1(), 21) || func_38(unk_0x3D35F9864E4640B1(), 22)) || func_340())
	{
		return 1;
	}
	if (func_335())
	{
		func_334(22);
		return 1;
	}
	return 0;
}

void func_334(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

int func_335()
{
	if (func_339(unk_0x3D35F9864E4640B1(), 0))
	{
		if ((func_42() && !func_338()) || func_337(unk_0x3D35F9864E4640B1(), 21))
		{
			return 1;
		}
		else
		{
			func_336(27);
		}
	}
	return 0;
}

void func_336(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

bool func_337(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

bool func_338()
{
	return Global_1312416.f_1;
}

int func_339(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_340()
{
	return func_253(292, -1);
}

bool func_341(int iParam0)
{
	if (func_44(iParam0))
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8);
}

bool func_342(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_343(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_343(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_50();
	}
	if (Global_1312833[iVar1] == 1)
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

struct<4> func_344()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_345()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = unk_0x2A3398C6222EB190(Local_122.f_1, 1);
	if (Local_122.f_197 == 2)
	{
		bVar0 = true;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 6))
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 7))
		{
			if (func_349() - func_322(&(Local_122.f_24), 0, 0)) >= func_348()
			{
				func_6(&(Local_122.f_24));
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 7);
			}
		}
	}
	iVar1 = func_349();
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 7))
	{
		iVar1 = func_348();
	}
	if (!unk_0x2A3398C6222EB190(Local_122.f_1, 12))
	{
		if (bVar0)
		{
			if (func_8(&(Local_122.f_30)))
			{
				func_6(&(Local_122.f_30));
			}
			if (!func_8(&(Local_122.f_24)))
			{
				func_363(&(Local_122.f_24), 0, 0);
				if (Local_122.f_34 > 0)
				{
					uVar2 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), (-1 * Local_122.f_34));
					func_347(&(Local_122.f_24), uVar2);
					Local_122.f_34 = 0;
				}
			}
			else if (!unk_0x2A3398C6222EB190(Local_122.f_1, 2))
			{
				if ((iVar1 - func_322(&(Local_122.f_24), 0, 0)) <= 0)
				{
					if (unk_0x2A3398C6222EB190(Local_122.f_1, 1))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 2);
					}
					else
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 0))
			{
				if (func_8(&(Local_122.f_24)))
				{
					Local_122.f_34 = func_322(&(Local_122.f_24), 0, 0);
				}
			}
			else
			{
				Local_122.f_34 = 0;
			}
			if (func_8(&(Local_122.f_24)))
			{
				func_6(&(Local_122.f_24));
			}
			if (!func_8(&(Local_122.f_30)))
			{
				func_363(&(Local_122.f_30), 0, 0);
			}
			else if (func_7(&(Local_122.f_30), func_346(), 0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 12);
			}
		}
	}
}

int func_346()
{
	if (Local_122.f_197 != 2)
	{
		return Global_262145.f_10334;
	}
	return Global_262145.f_17456 * 1000;
}

void func_347(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

int func_348()
{
	return Global_262145.f_10349;
}

int func_349()
{
	if (Local_122.f_197 != 2)
	{
		return Global_262145.f_10333;
	}
	return 300000;
}

void func_350()
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
	if (Local_122.f_0 != 4)
	{
		iLocal_581 = 0;
		while (iLocal_581 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iLocal_581)))
			{
				iVar0++;
				iVar11 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iLocal_581));
				if (!func_342(iVar11, 0))
				{
					if (Local_122.f_197 == 2)
					{
						if (!bVar10)
						{
							if (func_359() != func_364())
							{
								if (func_359() == iVar11)
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
					if (unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 0))
					{
						iVar1++;
					}
					if (!func_44(iVar11) || (Local_122.f_197 == 2 && func_36(iVar11) > 0))
					{
						iVar4++;
					}
					else if (Local_122.f_21 == 0)
					{
						if (Local_122.f_197 == 2)
						{
							if (func_36(iVar11) == 0)
							{
							}
						}
					}
					if (Local_122.f_21 == 0)
					{
						if (!unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 0))
						{
							if (unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 13))
							{
								iVar5 = func_358();
								if (iVar5 < func_357())
								{
									unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_35), iLocal_581);
								}
							}
							else if (unk_0x2A3398C6222EB190(Local_122.f_35, iLocal_581))
							{
								unk_0xD804ACF2A7171150(&(Local_122.f_35), iLocal_581);
							}
						}
					}
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 9))
					{
						if (Local_122.f_21 == 1)
						{
							if (unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 0))
							{
								if (!unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 4))
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
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4))
					{
						if (unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 3))
						{
							bVar8 = true;
						}
					}
					if (unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 0))
					{
						if (!unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 1))
						{
							if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4) || (unk_0x2A3398C6222EB190(Local_122.f_1, 4) && !unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 5)))
							{
								if (func_356(bVar8))
								{
									iVar2++;
									if (!unk_0x2A3398C6222EB190(Local_122.f_9, iLocal_581))
									{
										unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_9), iLocal_581);
										unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_10), iVar11);
										if (unk_0x2A3398C6222EB190(Local_122.f_1, 3) && !unk_0x2A3398C6222EB190(Local_122.f_1, 11))
										{
										}
									}
									if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
									{
										iVar9 = 1;
									}
								}
							}
							else if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
							{
								if (unk_0x2A3398C6222EB190(Local_122.f_9, iLocal_581))
								{
									unk_0xD804ACF2A7171150(&(Local_122.f_9), iLocal_581);
									unk_0xD804ACF2A7171150(&(Local_122.f_10), iVar11);
								}
								if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
								{
									if (unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 5))
									{
										iVar3++;
									}
								}
							}
						}
						else if (unk_0x2A3398C6222EB190(Local_122.f_9, iLocal_581))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_9), iLocal_581);
							unk_0xD804ACF2A7171150(&(Local_122.f_10), iVar11);
						}
					}
					else
					{
						if (unk_0x2A3398C6222EB190(Local_122.f_9, iLocal_581))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_9), iLocal_581);
						}
						if (unk_0x2A3398C6222EB190(Local_122.f_10, iVar11))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_10), iVar11);
						}
					}
					if (func_1124(iVar11, 1, 1))
					{
					}
				}
				else
				{
					if (unk_0x2A3398C6222EB190(Local_122.f_9, iLocal_581))
					{
						unk_0xD804ACF2A7171150(&(Local_122.f_9), iLocal_581);
					}
					if (unk_0x2A3398C6222EB190(Local_122.f_35, iLocal_581))
					{
						unk_0xD804ACF2A7171150(&(Local_122.f_35), iLocal_581);
					}
				}
				if (Local_122.f_21 <= 2)
				{
					bVar6 = true;
				}
				else if (!unk_0x2A3398C6222EB190(Local_321[iLocal_581 /*8*/].f_1, 2))
				{
					if (!func_342(iVar11, 0))
					{
					}
					bVar6 = true;
				}
			}
			else
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_9, iLocal_581))
				{
					unk_0xD804ACF2A7171150(&(Local_122.f_9), iLocal_581);
				}
				if (unk_0x2A3398C6222EB190(Local_122.f_35, iLocal_581))
				{
					unk_0xD804ACF2A7171150(&(Local_122.f_35), iLocal_581);
				}
			}
			iLocal_581++;
		}
		if (Local_122.f_197 == 2)
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 17))
			{
				if (!bVar10)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 17);
				}
			}
		}
		if (iVar1 > Local_122.f_183)
		{
			Local_122.f_183 = iVar1;
		}
		if (iVar0 > Local_122.f_182)
		{
			Local_122.f_182 = iVar0;
		}
		else
		{
			Local_122.f_181 = (Local_122.f_182 - iVar0);
		}
		if (Local_122.f_165 != (iVar2 + iVar3))
		{
			Local_122.f_165 = (iVar2 + iVar3);
			func_352();
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 13))
		{
			if (Local_122.f_165 >= func_357() || (iVar4 >= 2 && Local_122.f_165 >= iVar4))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 13);
			}
		}
		if (Local_122.f_21 == 0)
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 0))
			{
				if (iVar1 >= 1)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 0);
				}
			}
			else if (iVar1 == 0)
			{
				unk_0xD804ACF2A7171150(&(Local_122.f_1), 0);
			}
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 1))
			{
				if (iVar1 >= 2)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 1);
				}
			}
			else if (iVar1 < 2)
			{
				unk_0xD804ACF2A7171150(&(Local_122.f_1), 1);
			}
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 6))
			{
				if (iVar1 >= func_351())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 6);
				}
			}
			if (Local_122.f_197 == 2)
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_1, 18))
				{
					if (func_8(&(Local_122.f_32)))
					{
						if (func_7(&(Local_122.f_32), 10000, 0))
						{
							if (iVar4 < 2)
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 18);
							}
						}
					}
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 9))
		{
			if (Local_122.f_21 == 1)
			{
				if (!bVar7)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 9);
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4))
		{
			if (bVar8)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 4);
			}
		}
		if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_1, 10))
				{
					if (!func_8(&(Local_122.f_28)))
					{
						func_363(&(Local_122.f_28), 0, 0);
					}
					else if (func_7(&(Local_122.f_28), 60000, 0))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 10);
					}
				}
				if (iVar2 == 0 && iVar3 == 0)
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 10))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 10);
					}
				}
			}
		}
		if (Local_122.f_21 == 2)
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
			{
				if (iVar2 == 1 || iVar9)
				{
					Local_122.f_169 = 1900;
					Local_122.f_168 = 18000;
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 3);
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 11);
					}
					if (iVar1 == 1)
					{
						if (!unk_0x2A3398C6222EB190(Local_122.f_1, 14))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 14);
						}
					}
				}
				else if (iVar2 == 0)
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
					{
						if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4) || (unk_0x2A3398C6222EB190(Local_122.f_1, 4) && iVar3 == 0))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 3);
							if (!unk_0x2A3398C6222EB190(Local_122.f_1, 4))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 11);
							}
						}
					}
				}
				else if (iVar4 == 0)
				{
					Local_122.f_21 = 5;
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
				{
				}
			}
		}
		if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
		{
			if (!func_8(&(Local_122.f_174)))
			{
				func_363(&(Local_122.f_174), 0, 0);
			}
			if (func_7(&(Local_122.f_174), 100, 0))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_1, 11))
				{
					func_352();
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 11);
				}
			}
		}
		if (Local_122.f_21 > 2)
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_1, 5))
			{
				if (!bVar6)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 5);
				}
			}
		}
	}
}

int func_351()
{
	if (Global_262145.f_10603 < Global_262145.f_10672)
	{
		return Global_262145.f_10603;
	}
	return Global_262145.f_10672;
}

void func_352()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			uVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
			func_355(iVar0);
			bVar2 = unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 0);
			bVar3 = true;
			if (!bVar2)
			{
				bVar3 = false;
			}
			if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 1))
			{
				bVar3 = false;
			}
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
			{
				if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 5))
				{
					bVar3 = false;
				}
			}
			func_354(iVar0, uVar1, bVar3, bVar2);
		}
		else if (Local_122.f_36[iVar0 /*4*/].f_2 != -1)
		{
			func_355(iVar0);
		}
		iVar0++;
	}
	func_353();
}

void func_353()
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
				if (Local_122.f_36[iVar1 /*4*/].f_2 > Local_122.f_36[(iVar1 - 1) /*4*/].f_2)
				{
					uVar2 = Local_122.f_36[iVar1 /*4*/].f_2;
					uVar3 = Local_122.f_36[iVar1 /*4*/];
					uVar4 = Local_122.f_36[iVar1 /*4*/].f_1;
					uVar5 = Local_122.f_36[iVar1 /*4*/].f_3;
					Local_122.f_36[iVar1 /*4*/].f_2 = Local_122.f_36[(iVar1 - 1) /*4*/].f_2;
					Local_122.f_36[iVar1 /*4*/] = Local_122.f_36[(iVar1 - 1) /*4*/];
					Local_122.f_36[iVar1 /*4*/].f_1 = Local_122.f_36[(iVar1 - 1) /*4*/].f_1;
					Local_122.f_36[iVar1 /*4*/].f_3 = Local_122.f_36[(iVar1 - 1) /*4*/].f_3;
					Local_122.f_36[(iVar1 - 1) /*4*/].f_2 = uVar2;
					Local_122.f_36[(iVar1 - 1) /*4*/].f_3 = uVar5;
					Local_122.f_36[(iVar1 - 1) /*4*/] = uVar3;
					Local_122.f_36[(iVar1 - 1) /*4*/].f_1 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_354(int iParam0, var uParam1, bool bParam2, bool bParam3)
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
	Local_122.f_36[iParam0 /*4*/] = iParam0;
	Local_122.f_36[iParam0 /*4*/].f_1 = uParam1;
	Local_122.f_36[iParam0 /*4*/].f_2 = iVar0;
	Local_122.f_36[iParam0 /*4*/].f_3 = iVar1;
}

void func_355(int iParam0)
{
	Local_122.f_36[iParam0 /*4*/] = -1;
	Local_122.f_36[iParam0 /*4*/].f_1 = -1;
	Local_122.f_36[iParam0 /*4*/].f_2 = -1;
	Local_122.f_36[iParam0 /*4*/].f_3 = -1;
}

int func_356(bool bParam0)
{
	if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 11))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
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

int func_357()
{
	if (Local_122.f_197 != 2)
	{
		return Global_262145.f_10603;
	}
	return Global_262145.f_17458;
}

int func_358()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0x2A3398C6222EB190(Local_122.f_35, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_359()
{
	if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(Local_122.f_198)))
	{
		return unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_122.f_198));
	}
	return func_364();
}

void func_360(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1260112073;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam0;
	iVar3 = func_361(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iVar3);
	}
}

var func_361(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_1124(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
				else if (!func_342(iVar2, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_362(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_363(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

int func_364()
{
	return -1;
}

void func_365()
{
	if (Local_122.f_197 != -1)
	{
		return;
	}
	switch (Local_122.f_167)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_122.f_197 = 0;
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Local_122.f_197 = 2;
			func_366();
			break;
	}
}

void func_366()
{
	if (unk_0xEF0CB8FF125B9F9C())
	{
		if (Local_122.f_198 == -1)
		{
			Local_122.f_198 = unk_0x43B24C247F35B6BC();
		}
	}
}

int func_367(var uParam0)
{
	if (func_377())
	{
		*uParam0 = unk_0x3AF262D7332EEDF5(6, 11);
		if (!func_371(*uParam0, 1128792064))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		*uParam0 = unk_0x3AF262D7332EEDF5(0, 5);
	}
	if (!func_370(*uParam0))
	{
		if (!func_368(136, *uParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_368(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_369(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_7474)
		{
			if (Global_2483501.f_148[iVar0 /*2*/] == iVar1 && Global_2483501.f_148[iVar0 /*2*/].f_1 == func_362(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_369(int iParam0)
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

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10336;
			break;
		
		case 1:
			return Global_262145.f_10337;
			break;
		
		case 2:
			return Global_262145.f_10338;
			break;
		
		case 3:
			return Global_262145.f_10339;
			break;
		
		case 4:
			return Global_262145.f_10340;
			break;
		
		case 6:
			return Global_262145.f_17471;
			break;
		
		case 7:
			return Global_262145.f_17472;
			break;
		
		case 8:
			return Global_262145.f_17473;
			break;
		
		case 9:
			return Global_262145.f_17474;
			break;
		
		case 10:
			return Global_262145.f_17475;
			break;
	}
	return 0;
}

bool func_371(int iParam0, float fParam1)
{
	return func_372(func_376(iParam0), fParam1, 1, 1, 0, 0, 0, 0);
}

int func_372(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam8 == 0)
		{
			if (func_1124(iVar1, bParam4, bParam5))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam7 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_375(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && iParam9) && bParam6) && func_373(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (unk_0x1410333E912D4EC6(func_195(iVar1), Param0, 1) < fParam3)
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

int func_373(int iParam0)
{
	if (func_192(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	Global_2488575 = { func_62(iParam0) };
	if (unk_0x9EC1A7C50E0AB3CF(&Global_2488575))
	{
		return 1;
	}
	if (func_374(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_108(iParam0);
	if (!iVar0 == func_364())
	{
		if (iVar0 == func_108(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_375(int iParam0)
{
	if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_376(int iParam0)
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

bool func_377()
{
	return func_378(unk_0x3D35F9864E4640B1()) == 200;
}

int func_378(int iParam0)
{
	if (func_379(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_31;
	}
	return -1;
}

int func_379(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_31 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_380()
{
	if (Global_2501777.f_4867.f_24)
	{
		Global_2501777.f_4867.f_24 = 0;
		return 1;
	}
	return 0;
}

int func_381(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_382(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			func_363(uParam0, 0, 0);
		}
	}
}

void func_383()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		switch (iLocal_2788)
		{
			case 0:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 0))
				{
					if (func_398("PEN_BIKE"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 0);
					}
				}
				else if (!func_398("PEN_BIKE"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 0);
				}
				iLocal_2788++;
				break;
			
			case 1:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 1))
				{
					if (func_398("PEN_VEHG"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 1);
					}
				}
				else if (!func_398("PEN_VEHG"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 1);
				}
				iLocal_2788++;
				break;
			
			case 2:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 2))
				{
					if (func_398("PEN_PBIKE"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 2);
					}
				}
				else if (!func_398("PEN_PBIKE"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 2);
				}
				iLocal_2788++;
				break;
			
			case 3:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 3))
				{
					if (func_398("PEN_PVEHG"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 3);
					}
				}
				else if (!func_398("PEN_PVEHG"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 3);
				}
				iLocal_2788++;
				break;
			
			case 4:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 4))
				{
					if (func_398("PEN_AREA"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 4);
					}
				}
				else if (!func_398("PEN_AREA"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 4);
				}
				iLocal_2788++;
				break;
			
			case 5:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 5))
				{
					if (func_398("PEN_BAREA"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 5);
					}
				}
				else if (!func_398("PEN_BAREA"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 5);
				}
				iLocal_2788++;
				break;
			
			case 6:
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 6))
				{
					if (func_398("PEN_EXITV"))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 6);
					}
				}
				else if (!func_398("PEN_EXITV"))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 6);
				}
				iLocal_2788++;
				break;
			
			case 7:
				Var0 = { func_397() };
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4, 7))
				{
					if (func_398(&Var0))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 7);
					}
				}
				else if (!func_398(&Var0))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4), 7);
				}
				iLocal_2788++;
				break;
		}
		if (iLocal_2788 > 7)
		{
			iLocal_2788 = 0;
		}
	}
	else
	{
		if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4 != 0)
		{
			Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_4 = 0;
		}
		iVar4 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
		if (unk_0x80BA8E3CC61A8625(iVar4))
		{
			if (unk_0x532CFF8D6B65E42F(iVar4))
			{
				iVar5 = unk_0x3DAB36F6FA9328A6(iVar4);
				iVar6 = iVar5;
				switch (iLocal_2788)
				{
					case 0:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 0))
						{
							if (func_398("PEN_BIKE"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_BIKE"))
						{
							func_384("PEN_BIKE", 0);
						}
						iLocal_2788++;
						break;
					
					case 1:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 1))
						{
							if (func_398("PEN_VEHG"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_VEHG"))
						{
							func_384("PEN_VEHG", 0);
						}
						iLocal_2788++;
						break;
					
					case 2:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 2))
						{
							if (func_398("PEN_PBIKE"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_PBIKE"))
						{
							func_384("PEN_PBIKE", 0);
						}
						iLocal_2788++;
						break;
					
					case 3:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 3))
						{
							if (func_398("PEN_PVEHG"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_PVEHG"))
						{
							func_384("PEN_PVEHG", 0);
						}
						iLocal_2788++;
						break;
					
					case 4:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 4))
						{
							if (func_398("PEN_AREA"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_AREA"))
						{
							func_384("PEN_AREA", 0);
						}
						iLocal_2788++;
						break;
					
					case 5:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 5))
						{
							if (func_398("PEN_BAREA"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_BAREA"))
						{
							func_384("PEN_BAREA", 0);
						}
						iLocal_2788++;
						break;
					
					case 6:
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 6))
						{
							if (func_398("PEN_EXITV"))
							{
								func_396();
							}
						}
						else if (!func_398("PEN_EXITV"))
						{
							func_384("PEN_EXITV", 0);
						}
						iLocal_2788++;
						break;
					
					case 7:
						Var0 = { func_397() };
						if (!unk_0x2A3398C6222EB190(Local_321[iVar6 /*8*/].f_4, 7))
						{
							if (func_398(&Var0))
							{
								func_396();
							}
						}
						else if (!func_398(&Var0))
						{
							func_384(&Var0, 0);
						}
						iLocal_2788++;
						break;
				}
				if (iLocal_2788 > 7)
				{
					iLocal_2788 = 0;
				}
			}
		}
	}
}

void func_384(char* sParam0, bool bParam1)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return;
	}
	if (func_394(sParam0))
	{
		return;
	}
	func_388();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_387();
	func_386(bParam1);
	func_385();
}

void func_385()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 1);
}

void func_386(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_1312575.f_59), 0);
}

void func_387()
{
	Global_1312575.f_10 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 86400000);
	Global_1312575.f_11 = unk_0x898811EA80D35DE2();
}

void func_388()
{
	func_390();
	func_389(0);
}

void func_389(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x27CA09C6DFAB1E79();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x898811EA80D35DE2();
		Global_1312575.f_11 = unk_0x898811EA80D35DE2();
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

void func_390()
{
	if (!func_393())
	{
	}
	if (func_392())
	{
		unk_0x256FC007473C96F4(&(Global_1312575.f_12));
		func_391();
		unk_0xDAB2310BAD5B9F5B();
	}
}

void func_391()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
			unk_0x96577CAA1D1E72DB(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0xA9895403BC230880(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_57);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0xA9895403BC230880(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_57);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_392()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_393()
{
	if (!func_392())
	{
		return 0;
	}
	unk_0xDDF591880CC70341(&(Global_1312575.f_12));
	func_391();
	return unk_0xD140B300704DB2C2();
}

bool func_394(char* sParam0)
{
	if (!func_392())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_395(sParam0);
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12));
}

bool func_395(char* sParam0)
{
	if (!func_392())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

void func_396()
{
	if (!func_392())
	{
		return;
	}
	if (!unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == Global_1312575.f_9)
	{
		return;
	}
	func_388();
}

struct<4> func_397()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

int func_398(char* sParam0)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!func_392())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x3222F8FFDC06381F(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return 0;
	}
	return func_394(sParam0);
}

void func_399()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
	{
		if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
		{
			bVar5 = true;
		}
	}
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
				{
					iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					iVar1 = unk_0x3251C2B06497863C(iVar0, -1, 0);
					if (unk_0x76B3C79DE564AFC6(iVar1))
					{
						if (iVar1 != unk_0x0031992CA618A445())
						{
							if (unk_0x972B5786EA49FE1A(iVar1))
							{
								iVar2 = unk_0x46E9A8D99AF6D7BC(iVar1);
								if (unk_0x532CFF8D6B65E42F(iVar2))
								{
									iVar3 = unk_0x3DAB36F6FA9328A6(iVar2);
									iVar4 = iVar3;
									if (unk_0x2A3398C6222EB190(Local_321[iVar4 /*8*/].f_1, 0))
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
	if (func_402(unk_0x3D35F9864E4640B1()))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		func_401();
		func_400();
	}
}

void func_400()
{
	Global_2501777.f_1748.f_56 = 1;
}

void func_401()
{
	Global_2501777.f_1748.f_54 = 1;
}

bool func_402(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 4);
}

void func_403()
{
	float fVar0;
	
	if (!func_8(&uLocal_2760) || (func_8(&uLocal_2760) && func_7(&uLocal_2760, 5000, 0)))
	{
		fVar0 = func_406(unk_0x0031992CA618A445(), Local_601, 1);
		if (!func_405(unk_0x3D35F9864E4640B1()))
		{
			if (fVar0 <= 700f)
			{
				func_404(1);
			}
		}
		else if (fVar0 > 700f)
		{
			func_404(0);
		}
		func_6(&uLocal_2760);
		func_363(&uLocal_2760, 0, 0);
	}
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 5);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 5);
	}
}

int func_405(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 5);
	}
	return 0;
}

float func_406(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

void func_407()
{
	if (Local_122.f_197 != 2)
	{
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_579, 11))
			{
				if (Local_122.f_21 == 2)
				{
					if (unk_0x1E420F926A7BC4D2("PENNED_IN_START_MUSIC"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 11);
					}
				}
			}
			else if (unk_0x2A3398C6222EB190(iLocal_579, 15))
			{
				if (!unk_0x2A3398C6222EB190(iLocal_579, 12))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_579, 16))
					{
						if (unk_0x1E420F926A7BC4D2("PENNED_IN_70_PERCENT"))
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 16);
						}
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(iLocal_579, 12))
			{
				if (unk_0x2A3398C6222EB190(iLocal_579, 11))
				{
					if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 > 2)
					{
						if (unk_0x1E420F926A7BC4D2("PENNED_IN_STOP_MUSIC"))
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 12);
						}
					}
				}
			}
		}
	}
	else if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_579, 11))
		{
			if (Local_122.f_21 == 2)
			{
				if (unk_0x1E420F926A7BC4D2("CAGED_IN_START_MUSIC"))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 11);
					unk_0x62316D43A8F729C6(0);
				}
			}
		}
		else if (unk_0x2A3398C6222EB190(iLocal_579, 15))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_579, 12))
			{
				if (!unk_0x2A3398C6222EB190(iLocal_579, 16))
				{
					if (unk_0x1E420F926A7BC4D2("CAGED_IN_70_PERCENT"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 16);
					}
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(iLocal_579, 12))
		{
			if (unk_0x2A3398C6222EB190(iLocal_579, 11))
			{
				if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 > 2)
				{
					if (unk_0x1E420F926A7BC4D2("CAGED_IN_STOP_MUSIC"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 12);
						unk_0x62316D43A8F729C6(1);
					}
				}
			}
		}
	}
}

void func_408()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		if (unk_0x2A3398C6222EB190(iLocal_579, 22))
		{
			unk_0xD804ACF2A7171150(&iLocal_579, 22);
		}
		return;
	}
	if (func_593())
	{
		func_472(0);
	}
	iVar0 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	if (!unk_0x2A3398C6222EB190(iLocal_579, 22))
	{
		if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1 != 0)
		{
			Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1 = 0;
		}
		unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 22);
	}
	if (!unk_0x2A3398C6222EB190(iLocal_579, 13))
	{
		unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 13);
		func_396();
	}
	if (iLocal_2787 == 2)
	{
		func_463();
	}
	if (unk_0x80BA8E3CC61A8625(iVar0))
	{
		if (unk_0x532CFF8D6B65E42F(iVar0))
		{
			iVar1 = unk_0x3DAB36F6FA9328A6(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_321[iVar2 /*8*/].f_7;
			if (iVar3 > 0)
			{
				if (unk_0xA761A0B6072010C8(uLocal_599))
				{
					unk_0x0C4BDC77192798AE(&uLocal_599);
				}
			}
			switch (iVar3)
			{
				case 0:
					func_456(1, 0);
					func_446();
					func_429();
					break;
				
				case 1:
					func_429();
					func_456(!unk_0x2A3398C6222EB190(iLocal_578, 9), 0);
					break;
				
				case 2:
					func_27(1);
					func_423();
					func_456(0, 0);
					func_414();
					if (unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 5))
					{
						if (!unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 1))
						{
							if (!func_8(&uLocal_611))
							{
								func_363(&uLocal_611, 0, 0);
							}
							if (func_8(&uLocal_611))
							{
								if ((func_413() - func_322(&uLocal_611, 0, 0)) >= 0)
								{
									func_410((func_413() - func_322(&uLocal_611, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else if (func_8(&uLocal_611))
					{
						func_6(&uLocal_611);
					}
					func_35();
					break;
				
				case 3:
					if (unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 6))
					{
						func_456(0, 1);
					}
					if (unk_0xA761A0B6072010C8(uLocal_598))
					{
						unk_0xEB934A06DDA5027D(uLocal_598, 55);
					}
					func_35();
					break;
				
				default:
					if (unk_0x2A3398C6222EB190(Local_321[iVar2 /*8*/].f_1, 2))
					{
						func_409();
					}
					break;
				}
			}
	}
	if (Local_122.f_21 > 4)
	{
		func_1033();
	}
}

void func_409()
{
	if (unk_0xA761A0B6072010C8(uLocal_598))
	{
		unk_0x0C4BDC77192798AE(&uLocal_598);
	}
}

void func_410(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_412(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_411(7, iVar0);
		Global_1356070.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_4366.f_172[iVar0] = iParam2;
		Global_1356070.f_4366.f_216[iVar0] = iParam3;
		Global_1356070.f_4366.f_183[iVar0] = iParam4;
		Global_1356070.f_4366.f_194[iVar0] = iParam5;
		Global_1356070.f_4366.f_249[iVar0] = iParam6;
		Global_1356070.f_4366.f_260[iVar0] = iParam7;
		Global_1356070.f_4366.f_205[iVar0] = iParam8;
		Global_1356070.f_4366.f_314[iVar0] = iParam9;
		Global_1356070.f_4366.f_325[iVar0] = iParam10;
		Global_1356070.f_4366.f_357[iVar0] = iParam11;
		Global_1356070.f_4366.f_238[iVar0] = iParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_411(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_412(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

int func_413()
{
	if (Local_122.f_197 != 2)
	{
		return Global_262145.f_10350;
	}
	return 15000;
}

void func_414()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
	{
		return;
	}
	if (iLocal_2775 == -1)
	{
		if (Local_122.f_165 > 0)
		{
			iLocal_2775 = Local_122.f_165;
		}
	}
	else if (Local_122.f_165 > iLocal_2775)
	{
		iLocal_2775 = Local_122.f_165;
	}
	if (func_420(0))
	{
		if (!func_917(1))
		{
			func_417(Local_122.f_165, "PEN_REMP", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
		}
	}
	fVar0 = func_416();
	if (fVar0 >= fLocal_1505)
	{
		fLocal_1505 = fVar0;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_579, 15))
	{
		if (fLocal_1505 >= fLocal_1506)
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 15);
		}
	}
	fVar1 = (fLocal_1504 - fLocal_1505);
	if (func_420(0))
	{
		if (!func_917(1))
		{
			func_415(unk_0xF2DB717A73826179(fVar1), unk_0xF2DB717A73826179(fLocal_1504), "PEN_DST", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
		}
	}
}

void func_415(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_412(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_411(0, iVar0);
		Global_1356070.f_1093[iVar0] = iParam0;
		Global_1356070.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1356070.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_1093.f_194[iVar0] = iParam3;
		Global_1356070.f_1093.f_183[iVar0] = iParam4;
		Global_1356070.f_1093.f_216[iVar0] = iParam5;
		Global_1356070.f_1093.f_227[iVar0 /*3*/] = iParam6;
		Global_1356070.f_1093.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1356070.f_1093.f_258[iVar0] = iParam8;
		Global_1356070.f_1093.f_269[iVar0] = iParam9;
		Global_1356070.f_1093.f_312[iVar0] = iParam10;
		Global_1356070.f_1093.f_323[iVar0] = iParam11;
		Global_1356070.f_1093.f_334[iVar0] = iParam12;
		Global_1356070.f_1093.f_345[iVar0] = iParam13;
		Global_1356070.f_1088 = 1;
		Global_1356070.f_1093.f_356[iVar0] = iParam14;
		Global_1356070.f_1093.f_367[iVar0] = iParam15;
		Global_1356070.f_1093.f_378[iVar0] = iParam16;
		Global_1356070.f_1093.f_389[iVar0] = iParam17;
		Global_1356070.f_1093.f_400[iVar0] = iParam18;
		Global_1356070.f_1093.f_411[iVar0] = iParam19;
		Global_1356070.f_1093.f_422[iVar0] = iParam20;
		Global_1356070.f_1093.f_433[iVar0] = iParam21;
		Global_1356070.f_1093.f_444[iVar0] = iParam22;
		Global_1356070.f_1093.f_455[iVar0] = iParam23;
	}
}

float func_416()
{
	float fVar0;
	int iVar1;
	
	fVar0 = unk_0x1410333E912D4EC6(Local_601, Local_633[iLocal_600 /*3*/], 1);
	if (iLocal_600 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_600 - 1))
		{
			fVar0 = (fVar0 + fLocal_1285[iVar1]);
			iVar1++;
		}
	}
	return fVar0;
}

void func_417(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_412(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_411(6, iVar0);
		Global_1356070.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_3770.f_183[iVar0] = iParam3;
		Global_1356070.f_3770.f_172[iVar0] = iParam2;
		Global_1356070.f_3770.f_260[iVar0] = iParam4;
		Global_1356070.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_3770.f_443[iVar0] = iParam7;
		Global_1356070.f_3770.f_454[iVar0] = iParam8;
		Global_1356070.f_3770.f_497[iVar0] = iParam9;
		Global_1356070.f_3770.f_508[iVar0] = iParam10;
		Global_1356070.f_3770.f_205[iVar0] = iParam11;
		Global_1356070.f_3770.f_216[iVar0] = iParam12;
		Global_1356070.f_3770.f_227[iVar0] = iParam13;
		Global_1356070.f_3770.f_238[iVar0] = iParam14;
		Global_1356070.f_3770.f_249[iVar0] = iParam15;
		Global_1356070.f_3770.f_519[iVar0] = iParam16;
		Global_1356070.f_3770.f_530[iVar0] = iParam17;
		Global_1356070.f_3770.f_541[iVar0] = iParam18;
		Global_1356070.f_3770.f_552[iVar0] = iParam19;
		Global_1356070.f_3770.f_563[iVar0] = iParam20;
		Global_1356070.f_3770.f_574[iVar0] = iParam21;
		Global_1356070.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_419())
		{
			Global_1356070.f_1088 = 1;
		}
		if (unk_0x20551D6D924ED04B())
		{
			iVar2 = 0;
			unk_0xD9151D5BCEE2689C(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1356070.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1356070.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1356070.f_1088 = 1;
			}
			if (func_418())
			{
				Global_1356070.f_1092 = 1;
			}
		}
	}
}

int func_418()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xD9151D5BCEE2689C(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_419()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

int func_420(bool bParam0)
{
	if (func_422())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1124(unk_0x3D35F9864E4640B1(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_421()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189 != 0;
}

bool func_422()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 12);
}

void func_423()
{
	if (iLocal_2776)
	{
		func_409();
		if (func_428(100f, 10f, 5f))
		{
			iLocal_2776 = 1;
		}
	}
	func_424();
	if (unk_0xA761A0B6072010C8(uLocal_598))
	{
		unk_0x067D86058370B7EB(uLocal_598, fLocal_608);
	}
}

void func_424()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_427();
	fVar1 = (fVar0 / fLocal_1504);
	fVar2 = ((((func_954() - func_426()) * fVar1) + func_426()) * func_425());
	if (fVar2 < func_426())
	{
		fVar2 = func_426();
	}
	if (fVar2 > func_954())
	{
		fVar2 = func_954();
	}
	fLocal_609 = fLocal_608;
	if (fVar2 > fLocal_609)
	{
		fVar2 = fLocal_609;
	}
	fLocal_608 = fVar2;
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
	{
		if (fLocal_608 != func_426())
		{
			fLocal_608 = func_426();
		}
	}
	if (!func_8(&uLocal_2764) || (func_8(&uLocal_2764) && func_7(&uLocal_2764, 5000, 0)))
	{
		func_6(&uLocal_2764);
		func_363(&uLocal_2764, 0, 0);
		Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_6 = fLocal_608;
	}
}

float func_425()
{
	return Global_262145.f_10347;
}

float func_426()
{
	if (Local_122.f_197 != 2)
	{
		return Global_262145.f_10342;
	}
	return Global_262145.f_17477;
}

float func_427()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = unk_0x1410333E912D4EC6(Local_601, Local_633[iLocal_600 + 1 /*3*/], 1);
	iVar1 = iLocal_600 + 1;
	if (iVar1 < (iLocal_1503 - 1))
	{
		iVar2 = iVar1;
		while (iVar2 <= (iLocal_1503 - 1))
		{
			fVar0 = (fVar0 + fLocal_1285[iVar2]);
			iVar2++;
		}
	}
	return fVar0;
}

int func_428(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = unk_0x229F35E7CDDBF757((fParam0 - fParam1));
	if (fLocal_608 > fParam1)
	{
		fLocal_608 = (fLocal_608 - IntToFloat(unk_0xF34EE736CF047844(((fVar0 / fParam2) * unk_0xCD70DA50CCD55658()))));
		if (fLocal_608 < fParam1)
		{
			fLocal_608 = fParam1;
		}
	}
	else
	{
		fLocal_608 = fParam1;
		return 1;
	}
	return 0;
}

void func_429()
{
	if (!unk_0x2A3398C6222EB190(iLocal_578, 7))
	{
		func_445(&uLocal_2742);
		unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 7);
	}
	if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 4))
	{
		if (func_444(&uLocal_2742))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 8))
			{
				if (func_430(&uLocal_2742, 1, 0, 1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 4);
				}
			}
		}
	}
}

int func_430(var uParam0, bool bParam1, int iParam2, bool bParam3)
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
	
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		if (func_917(1))
		{
			return 1;
		}
	}
	if (func_444(uParam0))
	{
		if (!func_443(&(uParam0->f_3)))
		{
			func_441(&(uParam0->f_3));
		}
		unk_0x38C75B31337B3454(4);
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = unk_0xF34EE736CF047844(func_438(&(uParam0->f_3)));
		iVar1 = unk_0x0C58CE21DE9AD283((iVar0 - 3));
		bVar2 = false;
		if (func_437(uParam0->f_1, 4))
		{
			if (uParam0->f_2 >= 5)
			{
				if (!func_437(uParam0->f_1, 16))
				{
					unk_0x18F1BFAF88AC511B(-1, "GO", "HUD_MINI_GAME_SOUNDSET", 0);
					func_435(&(uParam0->f_1), 16);
					unk_0xE1BF8DD763F714D0();
				}
			}
			else
			{
				uParam0->f_2++;
			}
		}
		if (!func_437(uParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_437(uParam0->f_1, 1))
			{
				func_435(&(uParam0->f_1), 1);
				unk_0x18F1BFAF88AC511B(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_434(uParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_437(uParam0->f_1, 2))
			{
				func_435(&(uParam0->f_1), 2);
				unk_0x18F1BFAF88AC511B(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_434(uParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_437(uParam0->f_1, 4))
			{
				func_435(&(uParam0->f_1), 4);
				unk_0x18F1BFAF88AC511B(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_434(uParam0, iVar1);
				if (!func_342(unk_0x3D35F9864E4640B1(), 0))
				{
					func_384("PEN_AREA", 0);
				}
			}
			else if (iVar1 == 0 && !func_437(uParam0->f_1, 8))
			{
				func_435(&(uParam0->f_1), 8);
				unk_0xB922891BFD232C45(18, &uVar3, &uVar4, &uVar5, &uVar6);
				unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
				func_433("CNTDWN_GO");
				unk_0x32F9127910F63DFA(uVar3);
				unk_0x32F9127910F63DFA(uVar4);
				unk_0x32F9127910F63DFA(uVar5);
				unk_0xE8240315678FDE8E(1);
				unk_0x1C703A54AB4B12F6();
				func_409();
				func_915(func_916(), 0);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 9);
				if (!unk_0x2A3398C6222EB190(iLocal_578, 6))
				{
					unk_0xF177BD202464664F("pennedIn", 0, 1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 6);
					if (unk_0x3A7B47D96E536F61("MP_Player_Outside_Bubble_Scene"))
					{
						unk_0xB3E27A9E412BBDF8("MP_Player_Outside_Bubble_Scene");
					}
					unk_0xFD69BDF108B32E5B("MP_Player_Inside_Bubble_Scene");
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
		if ((iParam2 && func_432()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				uParam0->f_1 = 0;
				func_431(&(uParam0->f_3));
			}
			unk_0xB3E27A9E412BBDF8("RACES_RADIO_MUTE_scene");
			unk_0xFD69BDF108B32E5B("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0x32C41AA379415932())
			{
				if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar7)))
				{
					iVar8 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar7));
					if (iVar8 != unk_0x3D35F9864E4640B1())
					{
						iVar9 = unk_0xD33F4BC17EB987E5(iVar8);
						if (unk_0x90219307C9D2728D(iVar9, 0))
						{
							iVar10 = unk_0xCFA31F1E461A6BB5(iVar9, 0);
							unk_0x56AE5027D2067D0B(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
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

void func_431(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_432()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0x9148803485DEDF45(0, 18) || unk_0x9148803485DEDF45(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_433(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_434(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(12, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
	unk_0x9BC6C9E77AAC792E("NUMBER");
	unk_0x96577CAA1D1E72DB(unk_0x0C58CE21DE9AD283(iParam1));
	unk_0xCC5EB3A492FB7D4B();
	unk_0x32F9127910F63DFA(uVar0);
	unk_0x32F9127910F63DFA(uVar1);
	unk_0x32F9127910F63DFA(uVar2);
	unk_0xE8240315678FDE8E(1);
	unk_0x1C703A54AB4B12F6();
}

void func_435(var uParam0, int iParam1)
{
	func_436(uParam0, iParam1);
}

void func_436(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_437(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_438(var uParam0)
{
	if (func_443(uParam0))
	{
		if (func_440(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_439(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_439(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_440(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

void func_441(var uParam0)
{
	func_442(uParam0, 0f);
}

void func_442(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_439(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_443(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

int func_444(var uParam0)
{
	if (!unk_0x77FA56883245AD26(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_445(var uParam0)
{
	*uParam0 = unk_0xB1E69EFAB6CB45A3("COUNTDOWN");
}

void func_446()
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	bVar0 = unk_0x2A3398C6222EB190(Local_122.f_1, 1);
	if (!func_455())
	{
		return;
	}
	iVar1 = func_349();
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 7))
	{
		iVar1 = func_348();
	}
	if (Local_122.f_197 == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar6 = func_357();
		if (iVar6 > iLocal_2771)
		{
			iVar6 = iLocal_2771;
		}
		if (iVar7 != Local_122.f_165)
		{
			iVar7 = Local_122.f_165;
		}
		if (!func_342(unk_0x3D35F9864E4640B1(), 0))
		{
			Var2 = { func_397() };
			if (Local_122.f_197 != 2)
			{
				if (!func_398(&Var2))
				{
					func_384(&Var2, 0);
				}
			}
			else if (!func_398(&Var2))
			{
				func_452(&Var2, "CAG_BLIP", iLocal_2773, 0);
			}
		}
		if (Local_122.f_197 != 2)
		{
			if ((iVar1 - func_322(&(Local_122.f_24), 0, 0)) >= 0)
			{
				func_451((iVar1 - func_322(&(Local_122.f_24), 0, 0)));
				func_447(iVar7, iVar6, (iVar1 - func_322(&(Local_122.f_24), 0, 0)), 1, func_450(-1));
			}
			else
			{
				func_447(iVar7, iVar6, 0, 1, func_450(-1));
			}
		}
		else if ((iVar1 - func_322(&(Local_122.f_24), 0, 0)) >= 0)
		{
			func_451((iVar1 - func_322(&(Local_122.f_24), 0, 0)));
			func_447(iVar7, iVar6, (iVar1 - func_322(&(Local_122.f_24), 0, 0)), 1, "SYG_GOTOTIMER");
		}
		else
		{
			func_447(iVar7, iVar6, 0, 1, "SYG_GOTOTIMER");
		}
	}
	else if (!func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		Var2 = { func_397() };
		if (func_398(&Var2))
		{
			func_396();
		}
	}
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_420(0) == 0)
	{
		return;
	}
	func_449();
	func_448(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_200(sParam4))
	{
		sVar0 = sParam4;
	}
	func_410(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_448(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_412(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_411(4, iVar0);
		Global_1356070.f_3098[iVar0] = iParam0;
		Global_1356070.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1356070.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_3098.f_183[iVar0] = iParam3;
		Global_1356070.f_3098.f_216[iVar0] = iParam5;
		Global_1356070.f_3098.f_194[iVar0] = iParam4;
		Global_1356070.f_3098.f_227[iVar0] = iParam6;
		Global_1356070.f_3098.f_270[iVar0] = iParam7;
		Global_1356070.f_3098.f_281[iVar0] = iParam8;
		Global_1356070.f_3098.f_292[iVar0] = iParam9;
		Global_1356070.f_3098.f_303[iVar0] = iParam10;
		Global_1356070.f_3098.f_314[iVar0] = iParam11;
		Global_1356070.f_3098.f_325[iVar0] = iParam13;
		Global_1356070.f_3098.f_336[iVar0] = iParam14;
		Global_1356070.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x20551D6D924ED04B()) && iParam12)
		{
			Global_1356070.f_1088 = 1;
		}
	}
}

void func_449()
{
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(7);
	Global_2456645 = 1;
}

char* func_450(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x49CAADAD1ABAB70A();
	return "HUD_STARTING";
	if (unk_0xB3404E397FF56B3B(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_challenges"))
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
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_451(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xCD70DA50CCD55658())
	{
		Global_2501777.f_4704 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 1))
		{
			unk_0x18F1BFAF88AC511B(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2501777.f_4704 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 1);
		}
	}
}

void func_452(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_453(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 19;
		Global_1312575.f_56 = iParam2;
	}
}

int func_453(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		return 0;
	}
	if (func_454(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_388();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_387();
	func_386(bParam2);
	func_385();
	return 1;
}

bool func_454(char* sParam0, char* sParam1)
{
	if (!func_392())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		return 0;
	}
	if (!unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam1) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

int func_455()
{
	if (Local_122.f_197 != 2)
	{
		return 1;
	}
	else if (func_851())
	{
		return 1;
	}
	else if (func_36(unk_0x3D35F9864E4640B1()) == 3)
	{
		return 1;
	}
	if (func_398("CAG_STARTO"))
	{
		func_396();
	}
	return 0;
}

void func_456(bool bParam0, bool bParam1)
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
	
	if (Local_122.f_197 == 2)
	{
		if (func_36(unk_0x3D35F9864E4640B1()) < 2)
		{
			return;
		}
	}
	if (!bParam0)
	{
		if (!bParam1 || func_462())
		{
			unk_0xB922891BFD232C45(12, &uVar0, &uVar1, &uVar2, &uVar3);
		}
		else
		{
			unk_0xB922891BFD232C45(3, &uVar0, &uVar1, &uVar2, &uVar3);
		}
	}
	else if (Local_122.f_197 == 2)
	{
		unk_0xB922891BFD232C45(iLocal_2773, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xB922891BFD232C45(29, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	fVar4 = 0.5f;
	Var5 = { Local_601 };
	fVar8 = (fLocal_608 * 2f);
	switch (Local_122.f_167)
	{
		case 0:
			fVar9 = 36.9f;
			fVar10 = 7.875f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 1:
			fVar9 = 26.25f;
			fVar10 = 4.375f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 2:
			fVar9 = 49.875f;
			fVar10 = 12f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 3:
			fVar9 = 9.5f;
			fVar10 = 0f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 4:
			fVar9 = 38.75f;
			fVar10 = 10.25f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 6:
			fVar9 = 5.25f;
			fVar10 = 0f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 7:
			fVar9 = 5.25f;
			fVar10 = 0.875f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 8:
			fVar9 = 15.375f;
			fVar10 = 4.75f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
		
		case 9:
			fVar9 = 13.625f;
			fVar10 = 4.5f;
			fVar8 = 38.875f;
			Var5 = { func_460() };
			break;
		
		case 10:
			fVar9 = 7.75f;
			fVar10 = 2f;
			fVar8 = func_461();
			Var5 = { func_460() };
			break;
	}
	Var5.f_2 = (Var5.f_2 - fVar10);
	if (func_462())
	{
		fVar4 = (fVar4 / 2f);
	}
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		if (func_917(1))
		{
			bVar11 = true;
		}
	}
	if (!func_459())
	{
		if (func_458(unk_0x3D35F9864E4640B1()) == 0)
		{
			if (!func_457())
			{
				if (!bParam0)
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
					{
						if (!bVar11)
						{
							unk_0x430E688EB08060DD(Local_601, fLocal_608, uVar0, uVar1, uVar2, fVar4);
						}
					}
				}
				else
				{
					unk_0xB207C99FFC6234D4(1, Var5, 0f, 0f, 0f, 0f, 0f, 0f, fVar8, fVar8, fVar9, uVar0, uVar1, uVar2, uVar3, 0, 0, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

bool func_457()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 20);
}

int func_458(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189;
}

bool func_459()
{
	return (unk_0x2A3398C6222EB190(iLocal_579, 5) || unk_0x2A3398C6222EB190(iLocal_579, 8));
}

Vector3 func_460()
{
	struct<3> Var0;
	
	switch (Local_122.f_167)
	{
		case 0:
			Var0 = { Local_601 };
			Var0.f_0 = 1457.639f;
			Var0.f_1 = -2371.45f;
			break;
		
		case 1:
			Var0 = { Local_601 };
			Var0.f_0 = -1903.733f;
			Var0.f_1 = 2042.75f;
			break;
		
		case 2:
			Var0 = { Local_601 };
			Var0.f_0 = 2237.85f;
			Var0.f_1 = 1469f;
			break;
		
		case 3:
			Var0 = { Local_601 };
			Var0.f_0 = -1210.197f;
			Var0.f_1 = -2437.739f;
			break;
		
		case 4:
			Var0 = { Local_601 };
			Var0.f_0 = 106.968f;
			Var0.f_1 = 7003.605f;
			break;
		
		case 6:
			Var0 = { Local_601 };
			break;
		
		case 7:
			Var0 = { Local_601 };
			break;
		
		case 8:
			Var0 = { Local_601 };
			Var0.f_0 = -2653.049f;
			Var0.f_1 = 1505.637f;
			break;
		
		case 9:
			Var0 = { Local_601 };
			Var0.f_0 = -1464.237f;
			Var0.f_1 = 2789.826f;
			break;
		
		case 10:
			Var0 = { Local_601 };
			Var0.f_0 = 999.892f;
			Var0.f_1 = -677.42f;
			break;
	}
	return Var0;
}

float func_461()
{
	float fVar0;
	
	switch (Local_122.f_167)
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

int func_462()
{
	if (unk_0x43B24C247F35B6BC() != -1)
	{
		return unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 11);
	}
	return 0;
}

void func_463()
{
	if (!unk_0x2A3398C6222EB190(iLocal_579, 19))
	{
		func_471();
		unk_0x930629AC757873EC(0);
		if (func_470("SCTV_HELI_HLP"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		func_465(&(Local_122.f_184), 1, unk_0x2A3398C6222EB190(Local_122.f_1, 5), 0);
		if (!func_342(unk_0x3D35F9864E4640B1(), 0))
		{
			unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 11);
			unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x000EF2FD722A78C4() /*399*/].f_204), 2);
			func_464(unk_0x3D35F9864E4640B1(), 0);
		}
		unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 19);
	}
}

void func_464(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8B0523D9EF9595C2(unk_0x6DE94B55A39542C6(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x9E69E04AC6AD5C49(unk_0x6DE94B55A39542C6(iParam0), "MPBitset");
	}
	unk_0xD804ACF2A7171150(&iVar0, iParam1);
	unk_0x2EDC8603BB24D464(unk_0x6DE94B55A39542C6(iParam0), "MPBitset", iVar0);
}

void func_465(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	
	if (bParam1)
	{
		unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
	}
	if (bParam2)
	{
		if (unk_0x69DA17666D6E3F5A(uParam0->f_2) && unk_0xA02DD6B5C8C02298(uParam0->f_2))
		{
			uVar0 = unk_0xC42CA935BE72299D(uParam0->f_2);
			if (bParam3)
			{
				func_469(&(uParam0->f_2));
			}
			else
			{
				unk_0x3D93C0CB2ED2E7DC(&uVar0);
			}
		}
		if (unk_0x69DA17666D6E3F5A(uParam0->f_3) && unk_0xA02DD6B5C8C02298(uParam0->f_3))
		{
			uVar1 = unk_0xC42CA935BE72299D(uParam0->f_3);
			if (bParam3)
			{
				func_469(&(uParam0->f_3));
			}
			else
			{
				unk_0x3D93C0CB2ED2E7DC(&uVar1);
			}
		}
	}
	func_466(1, -1);
	func_11(0);
}

void func_466(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_468(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0xC030DF4B187326D7(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x4288569892059474(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x84D19A34E1A97ABC(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x40C8D24AE8508DEC("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x40C8D24AE8508DEC("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_467(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_467(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			unk_0x7F165E259CFAC8B8(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_468(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x27CA09C6DFAB1E79() && unk_0x93BDC21B9F2C5E43())
		{
			iParam2 = unk_0xFBECB0811993DE21();
		}
	}
	StringCopy(&cVar0, unk_0x49CAADAD1ABAB70A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x50B7853132D8438E(&cVar0);
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

void func_469(var uParam0)
{
	var uVar0;
	
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (!unk_0xA02DD6B5C8C02298(*uParam0))
		{
		}
	}
	if (unk_0xAA55DF0CB38F413B(*uParam0))
	{
		uVar0 = unk_0xC42CA935BE72299D(*uParam0);
		unk_0x237D39B9E9EE9ADC(&uVar0);
	}
}

bool func_470(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_471()
{
	Global_2434915.f_933.f_10 = 0;
}

void func_472(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		Global_1346706[iVar0 /*42*/] = -1;
		Global_1346706[iVar0 /*42*/].f_1 = func_364();
		Global_1346706[iVar0 /*42*/].f_9 = -1;
		Global_1346706[iVar0 /*42*/].f_31 = -1;
		StringCopy(&(Local_1508.f_104), "FM_AE_SORT_12", 16);
		if (Local_122.f_36[iVar0 /*4*/] > -1)
		{
			if (Local_122.f_36[iVar0 /*4*/].f_3 > 0)
			{
				Global_1346706[iVar0 /*42*/] = Local_122.f_36[iVar0 /*4*/];
				Global_1346706[iVar0 /*42*/].f_1 = Local_122.f_36[iVar0 /*4*/].f_1;
				Global_1346706[iVar0 /*42*/].f_9 = -1;
				Global_1346706[iVar0 /*42*/].f_41 = Local_122.f_36[iVar0 /*4*/].f_2;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!func_592())
		{
			if (Local_1508.f_103 != 136)
			{
				Local_1508.f_103 = 136;
			}
			else
			{
				func_590(1, 136);
			}
		}
	}
	iVar1 = 25;
	if (Local_122.f_197 == 2)
	{
		iVar1 = 26;
	}
	func_473(&Global_1346706, &uLocal_1507, iVar1, &Local_1508, &uLocal_1621, -1, 0);
}

void func_473(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	struct<2> Var57;
	
	if (func_589(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_588() || iParam2 == 26)
	{
		if (func_542(uParam1, iParam2, uParam3, Global_1574110, 0, func_593()))
		{
			func_541(1);
			if ((!func_540() && !func_539()) || unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
			{
				if (func_538())
				{
					func_535();
				}
				else
				{
					unk_0x661705F074A804D1(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_534(1);
						Global_1574110 = 0;
						iVar54 = -1;
						if (Global_1574293 != 1)
						{
							func_533(uParam1);
							if (unk_0x2A3398C6222EB190(uParam3->f_33, 7))
							{
								unk_0xD804ACF2A7171150(&(uParam3->f_33), 7);
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
								if (func_1124(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
									if (!func_342(iVar35, 0))
									{
										if ((unk_0x09C68D317F1B5143(iVar35, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar35 /*399*/].f_245 != -1) || func_532(iVar35))
										{
											iVar44 = iVar35;
											if (func_121(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_531(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_529(unk_0x3D35F9864E4640B1(), 0) && func_528(unk_0x3D35F9864E4640B1()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_526())
							{
								if (func_1124(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
								}
								else
								{
									iVar35 = func_364();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_525(iVar35) && func_521(iVar35, iParam2)) && func_1124(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
								Var38 = { func_516(iVar35) };
								if (iVar35 == unk_0x3D35F9864E4640B1())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x06D7899D9C1F422F(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_510(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x7EBBB7725601519D(iVar37);
								}
								Global_1574110++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_526())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_505(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_504(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_503(iVar35, 0);
								if (bVar34)
								{
									if (func_120(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_502(iParam5))
								{
									func_501(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_501(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xCD7E92DE2BFA0B0D(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0xA7871E29B06DA901(iVar52);
							if (func_1124(iVar35, 0, 1) && !unk_0x2A3398C6222EB190(iVar49, iVar35))
							{
								iVar35 = unk_0xA7871E29B06DA901(iVar52);
							}
							else
							{
								iVar35 = func_364();
							}
							if (func_525(iVar35))
							{
								if (func_1124(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
									Var38 = { func_516(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_510(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x7EBBB7725601519D(iVar37);
									}
									Global_1574110++;
									iVar51 = func_503(iVar35, 1);
									if (bVar34)
									{
										if (func_120(iVar35, 1))
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
									func_486(iVar35, unk_0x06D7899D9C1F422F(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							func_483(uParam3, uParam1);
						}
						func_6(&(uParam3->f_21));
						func_482();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 7))
						{
							func_481(uParam3, uParam1);
							func_480(uParam1, 0, 1);
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 7);
						}
						func_481(uParam3, uParam1);
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 11);
						}
						if (func_476(uParam3))
						{
							Global_1574293 = 1;
						}
						func_474(uParam3);
						if (Global_1574293 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574293 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x77FA56883245AD26(*uParam1))
					{
						unk_0x38C75B31337B3454(7);
						unk_0x45822700F324A838(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x38C75B31337B3454(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_482();
			func_534(0);
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 7))
			{
				unk_0xD804ACF2A7171150(&(uParam3->f_33), 7);
			}
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 10))
			{
				unk_0xD804ACF2A7171150(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x26742F01C78031C2();
}

void func_474(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_363(&(uParam0->f_21), 0, 0);
	}
	else if (func_7(&(uParam0->f_21), 250, 0))
	{
		func_6(&(uParam0->f_21));
		func_475(0);
	}
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574293 != 2)
		{
			Global_1574293 = 2;
		}
	}
	else
	{
		switch (Global_1574293)
		{
			case 0:
				Global_1574293 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_476(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0xA7871E29B06DA901(uParam0->f_37);
	if (iVar15 != func_364() && func_1124(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_479(uParam0, uParam0->f_37);
		if (func_478(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_477(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_477(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_477(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_477(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0x07D2F212D68B29BB(&Var2))
						{
							iVar16 = 1;
							func_477(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_477(uParam0, iVar0, 0);
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

void func_477(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_478(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

var func_479(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_480(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEBD23F68B1A617FC(*uParam0, "COLLAPSE"))
	{
		unk_0xE8240315678FDE8E(iParam1);
		unk_0x1C703A54AB4B12F6();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEBD23F68B1A617FC(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x1C703A54AB4B12F6();
		}
	}
}

void func_481(var uParam0, var uParam1)
{
	if (!unk_0x2A3398C6222EB190(uParam0->f_33, 10))
	{
		unk_0xEBD23F68B1A617FC(*uParam1, "SET_HIGHLIGHT");
		unk_0x32F9127910F63DFA(uParam0->f_35);
		unk_0x1C703A54AB4B12F6();
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_33), 10);
	}
}

void func_482()
{
	if (Global_1574293 != 0)
	{
		Global_1574293 = 0;
	}
}

void func_483(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (iVar2 != func_364())
		{
			if (func_1124(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_485(uParam0->f_38[iVar0 /*2*/], 0);
					func_484(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1593076[iVar0 /*647*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_484(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		if (unk_0xEBD23F68B1A617FC(*uParam0, "SET_ICON"))
		{
			unk_0x32F9127910F63DFA(iParam1);
			unk_0x32F9127910F63DFA(iParam2);
			if (iParam2 == 65)
			{
				unk_0x32F9127910F63DFA(iParam3);
			}
			unk_0x1C703A54AB4B12F6();
		}
	}
}

int func_485(int iParam0, bool bParam1)
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

void func_486(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_500() && iParam4 < func_499())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574112)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574293 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEBD23F68B1A617FC(*uParam2, sVar1))
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_498("");
			}
			else
			{
				unk_0x32F9127910F63DFA(iParam10);
			}
			func_498(sParam1);
			unk_0x32F9127910F63DFA(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_498("");
			}
			else
			{
				unk_0x32F9127910F63DFA(65);
			}
			unk_0x32F9127910F63DFA(-1);
			func_498("");
			if (uParam3->f_108 == 6)
			{
				func_498("");
			}
			else
			{
				func_498(&sParam5);
			}
			func_490(uParam3, iParam0);
			unk_0x58F4B3BE2B4DE520(sParam9);
			unk_0x58F4B3BE2B4DE520(sParam9);
			if (func_489(uParam3))
			{
				func_433("DPAD_FRIEND");
			}
			else if (func_488(uParam3))
			{
				func_433("DPAD_FRIEND");
			}
			else if (func_487(uParam3))
			{
				func_433("DPAD_CREW");
			}
			else
			{
				func_433("");
			}
			unk_0x1C703A54AB4B12F6();
		}
	}
}

bool func_487(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 6);
}

bool func_488(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 5);
}

int func_489(var uParam0)
{
	if (func_488(uParam0) && func_487(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_490(var uParam0, int iParam1)
{
	if (func_497(iParam1))
	{
		unk_0x32F9127910F63DFA(121);
	}
	else if (func_494(iParam1))
	{
		unk_0x32F9127910F63DFA(122);
	}
	else
	{
		if (func_491())
		{
			uParam0->f_36 = 0;
		}
		unk_0xE8240315678FDE8E(uParam0->f_36);
	}
}

int func_491()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		if (func_492() || func_96())
		{
			return 1;
		}
	}
	return 0;
}

int func_492()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		return func_96();
	}
	return func_493(Global_1641087.f_96810);
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5143[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_494(int iParam0)
{
	if ((func_1124(iParam0, 0, 1) && func_495()) && func_113(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_495()
{
	if (func_45(unk_0x3D35F9864E4640B1()) || func_496())
	{
		return 0;
	}
	return 1;
}

int func_496()
{
	switch (func_528(unk_0x3D35F9864E4640B1()))
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

int func_497(int iParam0)
{
	if (func_491())
	{
		if (func_1124(iParam0, 0, 1))
		{
			return func_121(iParam0);
		}
	}
	if ((func_1124(iParam0, 0, 1) && func_495()) && func_115(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_498(char* sParam0)
{
	unk_0x8E394933209D820A(sParam0);
}

int func_499()
{
	int iVar0;
	
	if (Global_1574112)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_500()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574112)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_501(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_500() && iParam3 < func_499())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574112)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574293 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x77FA56883245AD26(*uParam1))
		{
			if (unk_0xEBD23F68B1A617FC(*uParam1, sVar1))
			{
				unk_0x32F9127910F63DFA(iParam3);
				if (unk_0x2A3398C6222EB190(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_498("");
				}
				else
				{
					unk_0x32F9127910F63DFA(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					func_433(sParam16);
				}
				else
				{
					func_498(&(uParam2->f_1));
				}
				unk_0x32F9127910F63DFA(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_498("");
				}
				else
				{
					unk_0x32F9127910F63DFA(65);
				}
				if (iParam12 == 1)
				{
					unk_0x32F9127910F63DFA(iVar0);
				}
				else
				{
					unk_0x32F9127910F63DFA(-1);
				}
				if (func_526())
				{
					func_498("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_ONE_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 5 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_ONE_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 7 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_TWO_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 8 && !unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_104)))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5E66471E79E6D3ED(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x96577CAA1D1E72DB(iParam10);
					}
					unk_0x7C8A7ECFBAD2C8C4(&(uParam2->f_104));
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_CASH");
					unk_0xCA44A68ABB26D497(iParam10, 1);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x9BC6C9E77AAC792E("FM_AE_CASH");
						unk_0xCA44A68ABB26D497(iParam10, 1);
						unk_0xCC5EB3A492FB7D4B();
					}
					else
					{
						unk_0x9BC6C9E77AAC792E("FM_NG_CASH");
						unk_0xCA44A68ABB26D497(iParam10, 1);
						unk_0xCC5EB3A492FB7D4B();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_104)))
					{
						func_433(&(uParam2->f_104));
					}
					else
					{
						func_498("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam14, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (fParam13 != -1f)
				{
					unk_0x9BC6C9E77AAC792E("NUMBER");
					unk_0x5E66471E79E6D3ED(fParam13, 1);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (iParam10 != -1)
				{
					unk_0x32F9127910F63DFA(iParam10);
				}
				else
				{
					func_498("");
				}
				if (uParam2->f_108 == 6)
				{
					func_498("");
				}
				else
				{
					func_498(&sParam4);
				}
				func_490(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x0BD3CCFB6C6CFA91(sParam8))
				{
					func_498("");
					func_498("");
				}
				else
				{
					unk_0x58F4B3BE2B4DE520(sParam8);
					unk_0x58F4B3BE2B4DE520(sParam8);
				}
				if (func_489(uParam2))
				{
					func_433("DPAD_FRIEND");
				}
				else if (func_488(uParam2))
				{
					func_433("DPAD_FRIEND");
				}
				else if (func_487(uParam2))
				{
					func_433("DPAD_CREW");
				}
				else
				{
					func_433("");
				}
				unk_0x1C703A54AB4B12F6();
			}
		}
	}
}

int func_502(int iParam0)
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

int func_503(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_45(iParam0)) && !func_43(iParam0))
	{
		iVar0 = func_79();
	}
	iVar1 = func_119(iParam0);
	if (!iVar1 == -1)
	{
		return func_117(iVar1);
	}
	return iVar0;
}

char* func_504(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xE42DE35DC4399ED5())
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
			if (unk_0xE42DE35DC4399ED5())
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

int func_505(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_509(iParam3))
	{
		*fParam1 = (func_506(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_502(iParam3))
	{
		*fParam1 = (func_506(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_506(int iParam0, int iParam1)
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
			if (unk_0xE42DE35DC4399ED5())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_508(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xE42DE35DC4399ED5())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_507(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_507(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_508(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_509(int iParam0)
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

int func_510(int iParam0)
{
	int iVar0;
	
	iVar0 = func_513(iParam0);
	if (iVar0 == -1)
	{
		func_511(iParam0, 1);
		return 0;
	}
	Global_1365860[iVar0 /*5*/].f_4 = 1;
	return Global_1365860[iVar0 /*5*/].f_2;
}

void func_511(int iParam0, bool bParam1)
{
	if (!func_1124(iParam0, 0, 1))
	{
		return;
	}
	if (func_513(iParam0) != -1)
	{
		return;
	}
	if (Global_1366023)
	{
		if (iParam0 == Global_1366023.f_1)
		{
			return;
		}
	}
	if (func_512(iParam0))
	{
		return;
	}
	if (Global_1366061 >= 32)
	{
		return;
	}
	Global_1366028[Global_1366061] = iParam0;
	Global_1366061++;
	if (bParam1)
	{
	}
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366061)
	{
		if (Global_1366028[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (!func_1124(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1366021 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366021)
	{
		if (Global_1365860[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x1F20678A3517FA33(Global_1365860[iVar0 /*5*/].f_2) && unk_0x484948706DA7FDE0(Global_1365860[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_514(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_514(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1366021)
	{
		return;
	}
	if (unk_0x1F20678A3517FA33(Global_1365860[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1365860[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7EBBB7725601519D(Global_1365860[iParam0 /*5*/].f_2), 64);
			unk_0x24EBBC5B25484B08(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3597EC3F7CA70174(Global_1365860[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1366021)
	{
		Global_1365860[iVar32 /*5*/] = { Global_1365860[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_515(&(Global_1365860[iVar32 /*5*/]));
	Global_1366021 = (Global_1366021 - 1);
}

void func_515(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_364();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		uParam0->f_3 = unk_0x898811EA80D35DE2();
	}
}

struct<4> func_516(int iParam0)
{
	struct<4> Var0;
	
	if (func_1124(iParam0, 0, 1))
	{
		Global_2488575 = { func_62(iParam0) };
		if (unk_0x9D3EA2635512FD6B())
		{
			if (func_478(Global_2488575))
			{
				if (!unk_0xEFDB3CCA382D116E(&Global_2488575))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4C69E6D9E2ED0169(0))
		{
			return Var0;
		}
		if (func_520(&Global_2488575))
		{
			Global_2488505 = { func_518(iParam0) };
			func_517(&Global_2488505, &Var0);
		}
	}
	return Var0;
}

void func_517(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

struct<35> func_518(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_519(iParam0))
	{
		return Global_1312885[unk_0x3D35F9864E4640B1() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x7838EB8661A32D68(&Var13, 35, &Var0);
	return Var13;
}

int func_519(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		return 1;
	}
	return 0;
}

int func_520(var uParam0)
{
	if (unk_0xED5FFF2E0422067E())
	{
		if (unk_0x1AE803DF5F9B30C9() && unk_0xF3F1AD16A136B115(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_521(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_44(iParam0) || func_524(iParam0)) || func_341(iParam0))
		{
			return 0;
		}
	}
	if (!func_523(iParam0))
	{
		return 0;
	}
	if ((!func_522(iParam0) && Global_2422142[iParam0 /*399*/].f_245 == -1) && !func_532(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_522(int iParam0)
{
	if (func_1124(iParam0, 0, 1))
	{
		if (func_1124(unk_0x3D35F9864E4640B1(), 0, 1))
		{
			if (unk_0x09C68D317F1B5143(iParam0, unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_523(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_140, 22);
}

int func_524(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 10) || unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 9));
	}
	return 0;
}

int func_525(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (func_342(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x2A3398C6222EB190(Global_1593076[iVar0 /*647*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_526()
{
	switch (func_528(unk_0x3D35F9864E4640B1()))
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
	switch (func_527(unk_0x3D35F9864E4640B1()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_43(unk_0x3D35F9864E4640B1()))
	{
		switch (func_528(unk_0x3D35F9864E4640B1()))
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

int func_527(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/];
	}
	return -1;
}

int func_528(int iParam0)
{
	if (func_339(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

int func_529(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 && func_530(Global_1623799[iParam0 /*488*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1)
	{
		if (func_530(Global_1623799[iParam0 /*488*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_530(int iParam0)
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
	return func_133(iParam0, 0);
	return 0;
}

void func_531(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1124(unk_0xA7871E29B06DA901(iVar0), 0, 1))
		{
			iVar1 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_342(iVar1, 0))
			{
				if ((unk_0x09C68D317F1B5143(iVar1, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar1 /*399*/].f_245 != -1) || func_532(iVar1))
				{
					if (func_218(iVar1, iParam1, 0))
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

bool func_532(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189 != 0;
}

void func_533(var uParam0)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x32F9127910F63DFA(0);
		unk_0x1C703A54AB4B12F6();
	}
}

void func_534(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1354562.f_2 == 0)
		{
			Global_1354562.f_2 = 1;
		}
	}
	else if (Global_1354562.f_2 == 1)
	{
		Global_1354562.f_2 = 0;
	}
}

void func_535()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
	{
		if (func_537())
		{
			func_536();
		}
	}
}

void func_536()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434915.f_2484[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_537()
{
	return Global_2434915.f_2484[0 /*76*/].f_1 != 0;
}

int func_538()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0) && func_537())
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1) && func_537())
	{
		return 1;
	}
	return 0;
}

int func_539()
{
	if (func_537())
	{
		if (func_69(Global_2434915.f_2484[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_540()
{
	if (func_537())
	{
		if (func_80(Global_2434915.f_2484[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_541(int iParam0)
{
	if (Global_1354562.f_1 != Global_1354562)
	{
		Global_1354562.f_1 = Global_1354562;
	}
	if (Global_1354562 != iParam0)
	{
		Global_1354562 = iParam0;
	}
}

int func_542(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_587(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_586();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_585())
		{
			if (func_584() > 0 && Global_1574112)
			{
				unk_0xC8E49AC936A8E11E();
				unk_0x4288569892059474(fVar7);
				unk_0xBD1C47D856010F09(18);
				if (unk_0x068C69D0643C4B95())
				{
					unk_0x390920286F8D4571();
				}
				unk_0xBD1C47D856010F09(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_570())
		{
			func_569(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
	{
		func_569(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_584() == 1)
		{
			func_568(bVar6, uParam0, 0);
			func_363(&(uParam2->f_19), 0, 0);
			func_569(uParam0, uParam2, 0);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x068C69D0643C4B95())
		{
			unk_0x390920286F8D4571();
		}
		unk_0xBD1C47D856010F09(10);
		if (func_7(&(uParam2->f_19), 10000, 0) || (func_584() == 0 && !bParam5))
		{
			func_569(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_567();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0xC8E49AC936A8E11E();
				}
				unk_0xBD1C47D856010F09(18);
			}
			if (!unk_0x2A3398C6222EB190(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_567();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xC8E49AC936A8E11E();
					}
					unk_0xBD1C47D856010F09(18);
				}
				unk_0x4288569892059474(fVar7);
				if (func_568(bVar6, uParam0, 0))
				{
					func_533(uParam0);
					sVar4 = func_565(iParam1, &(Global_1641087.f_96817), bParam4);
					Var0 = { func_563(iParam1) };
					if (bParam4)
					{
						func_560(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_554(uParam0, func_557(uParam2), func_555(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_548(uParam0, func_550(uParam2), func_549(), -1);
					}
					else if (func_491())
					{
						uParam2->f_34 = Global_1574111;
						func_560(uParam0, sVar4, &Var0, 1, -1, Global_1574111, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574111;
						func_560(uParam0, sVar4, "", 0, -1, Global_1574111, 1);
					}
					else
					{
						iVar8 = func_543(iParam1);
						func_560(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x2A3398C6222EB190(uParam2->f_33, 0))
			{
				Global_1574110 = uParam3;
				Global_1574109 = 1;
				unk_0x4288569892059474(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574111)
					{
						unk_0xD804ACF2A7171150(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_543(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_547())
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
			if (func_546(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 20;
			}
			if (func_545(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_544(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_544(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 4;
}

bool func_545(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

bool func_546(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_547()
{
	return Global_1641087.f_1 == 0;
}

void func_548(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(sParam2))
		{
			func_433(sParam1);
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_433("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_549()
{
	switch (func_528(unk_0x3D35F9864E4640B1()))
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

char* func_550(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
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
	switch (func_528(unk_0x3D35F9864E4640B1()))
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
			if (func_552())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_205(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_205(1))
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
			if (func_551(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_551(int iParam0)
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

bool func_552()
{
	return (func_553() && func_155(func_220()));
}

bool func_553()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148;
}

void func_554(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(sParam2))
		{
			func_433(sParam1);
		}
		else if (func_527(unk_0x3D35F9864E4640B1()) == 133)
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT_C");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_433("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_555(var uParam0)
{
	int iVar0;
	
	iVar0 = func_527(unk_0x3D35F9864E4640B1());
	if (func_592())
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
			switch (func_556())
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

int func_556()
{
	if (func_527(unk_0x3D35F9864E4640B1()) == 133)
	{
		return Global_2501777.f_4788;
	}
	return -1;
}

char* func_557(var uParam0)
{
	int iVar0;
	
	iVar0 = func_527(unk_0x3D35F9864E4640B1());
	if (func_592())
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
			if (func_559() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_559() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_556())
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
			if (func_558() == 1)
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

int func_558()
{
	return Global_2501777.f_4791;
}

int func_559()
{
	if (func_527(unk_0x3D35F9864E4640B1()) == 132)
	{
		return Global_2501777.f_4786;
	}
	return -1;
}

void func_560(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_498(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x9BC6C9E77AAC792E(sParam1);
			unk_0x96577CAA1D1E72DB(iParam5);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			func_433(sParam1);
		}
		if (func_585() && iParam6)
		{
			if (func_562())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x9BC6C9E77AAC792E("LBD_DPD_CNT");
			unk_0x96577CAA1D1E72DB(iVar0);
			unk_0x96577CAA1D1E72DB(iVar1);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			func_433(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (func_561(unk_0x3D35F9864E4640B1()))
			{
				unk_0x32F9127910F63DFA(166);
			}
		}
		unk_0x1C703A54AB4B12F6();
	}
}

int func_561(int iParam0)
{
	if (func_546(iParam0) || func_545(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_562()
{
	return Global_1574112;
}

struct<4> func_563(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_564(unk_0x3D35F9864E4640B1()) || func_544(unk_0x3D35F9864E4640B1()))
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
			StringIntConCat(&Var0, Global_1641087.f_32, 16);
			break;
	}
	if (func_491() && unk_0xF4F91CD09D59F42E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1641087.f_32, 16);
	}
	return Var0;
}

bool func_564(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 5;
}

char* func_565(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_491() || unk_0x0BD3CCFB6C6CFA91(sParam1)))
	{
		uVar0 = func_566();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574311 == 0)
		{
			Global_1574311 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		if (Global_1574311 == 1)
		{
			Global_1574311 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574311 == 0)
		{
			Global_1574311 = 1;
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

char* func_566()
{
	if (unk_0x1C44989578E5E069())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x942DDEDA3276C878())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE11EF9B6E7CA5736())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xFCD198727E4728B4())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_567()
{
	Global_36716 = 1;
}

bool func_568(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("mp_matchmaking_card");
	}
	return unk_0x77FA56883245AD26(*uParam1);
}

void func_569(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD804ACF2A7171150(&(uParam1->f_33), 7);
	Global_1574110 = 0;
	func_482();
	Global_1574109 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_6(&(uParam1->f_19));
		}
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0x7F165E259CFAC8B8(uParam0);
	}
	if (unk_0x2A3398C6222EB190(uParam1->f_33, 0))
	{
		unk_0xD804ACF2A7171150(&(uParam1->f_33), 0);
	}
	unk_0x4288569892059474(0f);
}

int func_570()
{
	if (func_583())
	{
		return 0;
	}
	if (func_582())
	{
		return 0;
	}
	if (!func_580())
	{
		return 0;
	}
	if (!func_578())
	{
		return 0;
	}
	if (func_577(8, -1))
	{
		return 0;
	}
	if (func_584() == 2)
	{
		return 0;
	}
	if (Global_2501777.f_4500)
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	else if (!func_574(unk_0x3D35F9864E4640B1(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_573(1) || func_571(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (func_102(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (Global_1767043)
	{
		return 0;
	}
	if (func_207(0))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
	{
		return 0;
	}
	if (Global_1348150)
	{
		return 0;
	}
	return 1;
}

int func_571(bool bParam0)
{
	if (unk_0x220490B94EE0AB33())
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (func_572(unk_0x0031992CA618A445()))
			{
				if (unk_0x9148803485DEDF45(0, 25) || unk_0x9148803485DEDF45(0, 68))
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
	if (unk_0x9148803485DEDF45(0, 19) || (!bParam0 && unk_0x59ABF4F2C485FC38(0, 19)))
	{
		return 1;
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (((unk_0x9148803485DEDF45(0, 166) || unk_0x9148803485DEDF45(0, 167)) || unk_0x9148803485DEDF45(0, 168)) || unk_0x9148803485DEDF45(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x59ABF4F2C485FC38(0, 166) || unk_0x59ABF4F2C485FC38(0, 167)) || unk_0x59ABF4F2C485FC38(0, 168)) || unk_0x59ABF4F2C485FC38(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_572(int iParam0)
{
	int iVar0;
	
	if (unk_0x7C3C875B4842517A())
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			unk_0x1306828A757A10AC(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_573(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_574(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_575(iParam0))
		{
			return 1;
		}
	}
	if (Global_1593076[iParam0 /*647*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_575(int iParam0)
{
	return func_576(iParam0);
}

bool func_576(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

bool func_577(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

int func_578()
{
	if (func_579() == 0)
	{
		return 1;
	}
	return 0;
}

int func_579()
{
	return Global_1312466.f_18;
}

int func_580()
{
	if (func_581())
	{
		return 1;
	}
	if (unk_0x5114FCEE2A997B95())
	{
		return 0;
	}
	if (unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146())
	{
		return 0;
	}
	if (unk_0xC19E9068E7E4F6B0())
	{
		return 0;
	}
	return 1;
}

bool func_581()
{
	return Global_1312438;
}

bool func_582()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 5;
}

bool func_583()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_584()
{
	return Global_1354565.f_68;
}

int func_585()
{
	if (Global_1574111 > 16)
	{
		return 1;
	}
	return 0;
}

float func_586()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFBBE93DE05521B5C()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_587(int iParam0)
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

int func_588()
{
	if (func_593())
	{
		return 1;
	}
	if (func_341(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_592())
	{
		return 1;
	}
	if (func_45(unk_0x3D35F9864E4640B1()))
	{
		switch (func_527(unk_0x3D35F9864E4640B1()))
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
				if (!func_402(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_402(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_402(unk_0x3D35F9864E4640B1()))
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

int func_589(int iParam0)
{
	if ((iParam0 == 26 && func_45(unk_0x3D35F9864E4640B1())) && !func_43(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_339(unk_0x3D35F9864E4640B1(), 0) && func_43(unk_0x3D35F9864E4640B1()))
		{
			return 1;
		}
		if (func_36(unk_0x3D35F9864E4640B1()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_590(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1592949)
		{
			if (!func_958(0) && !func_958(func_591(iParam1)))
			{
				Global_1592949 = 1;
			}
		}
	}
	else if (Global_1592949)
	{
		Global_1592949 = 0;
	}
}

int func_591(int iParam0)
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

bool func_592()
{
	return Global_1592949;
}

int func_593()
{
	if (func_594(unk_0x3D35F9864E4640B1()))
	{
		return Global_1316427;
	}
	return 0;
}

int func_594(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_342(iParam0, 0))
		{
			return unk_0xD629F5D6E3CE15E2(iParam0);
		}
	}
	return 0;
}

void func_595()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	bool bVar5;
	
	bVar4 = true;
	bVar5 = true;
	if (iLocal_2787 == 1 && !func_421())
	{
		func_650(&Local_2045);
	}
	switch (iLocal_2787)
	{
		case 0:
			if (func_649())
			{
				iLocal_2787++;
			}
			break;
		
		case 1:
			iVar0 = unk_0xD33F4BC17EB987E5(Local_122.f_184.f_7);
			if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iVar0, 0))
			{
				Var1 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
				Local_2045.f_2 = { Var1 };
			}
			else if (!func_20(Local_2045.f_2))
			{
				Var1 = { Local_2045.f_2 };
			}
			Local_2045.f_1 = unk_0xC42CA935BE72299D(Local_122.f_184.f_2);
			if (unk_0x76B3C79DE564AFC6(Local_2045.f_1))
			{
				if (!unk_0x7A6C051038031EFA(Local_2045.f_1, 0))
				{
					if (!func_641())
					{
						if (func_20(Local_2782))
						{
							if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
							{
								if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
								{
									Local_2782 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
									fLocal_2785 = unk_0x69F9721375CE60CF(unk_0x0031992CA618A445());
								}
							}
						}
					}
					unk_0xB046EC8A92709078(Local_2045.f_1);
					if (Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_231 == 99)
					{
						if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 11))
						{
							unk_0xC97CB25E6028BC11(0);
							if (!unk_0xCECAA9B350DD53DA())
							{
								unk_0x930629AC757873EC(1);
							}
							unk_0xD23B050F503E0003(Local_2045.f_1, 1);
							unk_0x251439A7DA10B1A9(unk_0x0031992CA618A445(), Local_2045.f_1, unk_0x074C5D79DFD8396C(Local_2045.f_1, "chassis"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 11);
							unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_204), 2);
							unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 14);
							func_640(unk_0x3D35F9864E4640B1(), 0);
							func_636();
						}
						if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 12))
						{
							func_631(unk_0x3D35F9864E4640B1(), 0, 8192);
							unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 1);
							unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 12);
						}
						func_624();
						func_622();
						if (func_641())
						{
							func_631(unk_0x3D35F9864E4640B1(), 1, 0);
							iLocal_2787++;
						}
						else
						{
							func_605(&(Local_122.f_184), &Local_2045, Local_2045.f_1, Var1, bVar5, bVar4);
							if (bVar4)
							{
								if (!unk_0x2A3398C6222EB190(iLocal_579, 18) && func_598(0, 1, 1, 0))
								{
									func_597("SCTV_HELI_HLP", 30000);
									if (Local_122.f_197 != 2)
									{
										func_596(1);
									}
									unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 18);
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

void func_596(int iParam0)
{
	unk_0x55281B6E993CE19E(3, 21, 200, 0, 0);
	if (iParam0 && !func_537())
	{
		unk_0x18F1BFAF88AC511B(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_597(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam1);
}

int func_598(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x068C69D0643C4B95())
	{
		return 0;
	}
	if (func_604())
	{
		return 0;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	if (func_583())
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_574(unk_0x3D35F9864E4640B1(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_602(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (func_601())
	{
		return 0;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (Global_1574109)
	{
		return 0;
	}
	if (func_600())
	{
		return 0;
	}
	if (func_599())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2510592)
	{
		return 0;
	}
	return 1;
}

bool func_599()
{
	return Global_2445582.f_572;
}

bool func_600()
{
	return Global_2445582.f_724;
}

bool func_601()
{
	return Global_2434915.f_2792.f_578;
}

int func_602(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_603()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

int func_604()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_605(var uParam0, var uParam1, var uParam2, struct<3> Param3, bool bParam6, bool bParam7)
{
	switch (func_621(uParam1))
	{
		case 0:
			if (func_620() || bParam6)
			{
				func_619(uParam1, 1);
			}
			break;
		
		case 1:
			if (!unk_0x2A3EA4C0BCED85F2(*uParam1))
			{
				*uParam1 = unk_0xAC08B32D1D8EFE97("default_scripted_camera", 0);
			}
			else
			{
				unk_0x422FA1077491EE8E();
				unk_0xED7F7C0DD93C1D8E(*uParam1, uParam2, 0f, 2.75f, -1.25f, 1);
				unk_0x55CC07D5416539C8(*uParam1, 1);
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				func_11(1);
				func_619(uParam1, 2);
			}
			break;
		
		case 2:
			if (unk_0x2A3EA4C0BCED85F2(*uParam1))
			{
				if (!unk_0x63D9209D70E2F5D5(*uParam1))
				{
					unk_0xED7F7C0DD93C1D8E(*uParam1, uParam2, 0f, 2.75f, -1.25f, 1);
					unk_0x55CC07D5416539C8(*uParam1, 1);
					unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x52BA2DC698AEF919(*uParam1, Param3);
				}
				if (bParam7)
				{
					func_606(uParam1);
				}
				if (func_620() && !bParam6)
				{
					func_465(uParam0, 1, 1, 1);
					func_619(uParam1, 0);
				}
			}
			else
			{
				func_619(uParam1, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_606(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_618() };
	if (func_616(0, -1, 0))
	{
		switch (uParam0->f_694)
		{
			case 0:
				func_614(&(uParam0->f_7));
				func_613(2, 202, "HUD_QUIT", &(uParam0->f_7), 1, 355);
				uParam0->f_694++;
				break;
			
			case 1:
				func_607(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
			}
	}
}

void func_607(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0xDE25F26B6B16CF7A(2))
	{
		*uParam2 = 0;
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			if (unk_0x20551D6D924ED04B())
			{
				unk_0xEBD23F68B1A617FC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xE8240315678FDE8E(0);
				unk_0x1C703A54AB4B12F6();
			}
			unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
		}
		func_612(uParam2);
	}
	if (Global_1315691 < 2)
	{
		func_611(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x77FA56883245AD26(*uParam0))
		{
			*uParam0 = unk_0xB1E69EFAB6CB45A3("instructional_buttons");
		}
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			unk_0x081B4395F75CCEEA(*uParam0, "CLEAR_ALL");
			if (unk_0x20551D6D924ED04B())
			{
				unk_0xEBD23F68B1A617FC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xE8240315678FDE8E(1);
				unk_0x1C703A54AB4B12F6();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x2A3398C6222EB190(uParam2->f_676, iVar0))
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(iVar0);
					if (!unk_0x2A3398C6222EB190(uParam2->f_677, iVar0))
					{
						uVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_610(unk_0xE344F89A3A395F9C(uVar1, uVar2, 1));
						if (iVar3 < 355)
						{
							func_610(unk_0xE344F89A3A395F9C(uVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_610(unk_0x295E4023D39A7295(uVar4, uVar5, 1));
					}
					if (unk_0x2A3398C6222EB190(uParam2->f_674, iVar0))
					{
						unk_0x9BC6C9E77AAC792E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xC2D818A5754306C0(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x96577CAA1D1E72DB(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xCC5EB3A492FB7D4B();
					}
					else if (unk_0x2A3398C6222EB190(uParam2->f_675, iVar0))
					{
						unk_0x9BC6C9E77AAC792E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x50B3C23D0902259F(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xCC5EB3A492FB7D4B();
					}
					else
					{
						func_433(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (unk_0x2A3398C6222EB190(uParam2->f_678, iVar0))
						{
							unk_0xE8240315678FDE8E(1);
							unk_0x32F9127910F63DFA(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0xE8240315678FDE8E(0);
							unk_0x32F9127910F63DFA(355);
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
				else
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(iVar0);
					func_610(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_610(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x2A3398C6222EB190(uParam2->f_674, iVar0))
					{
						unk_0x9BC6C9E77AAC792E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xC2D818A5754306C0(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x96577CAA1D1E72DB(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xCC5EB3A492FB7D4B();
					}
					else if (unk_0x2A3398C6222EB190(uParam2->f_675, iVar0))
					{
						unk_0x9BC6C9E77AAC792E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x50B3C23D0902259F(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xCC5EB3A492FB7D4B();
					}
					else
					{
						func_433(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x20551D6D924ED04B())
					{
						unk_0xE8240315678FDE8E(0);
						unk_0x32F9127910F63DFA(355);
					}
					unk_0x1C703A54AB4B12F6();
				}
				iVar0++;
			}
			unk_0xEBD23F68B1A617FC(*uParam0, "SET_MAX_WIDTH");
			unk_0x90495002CD46BD88(uParam2->f_686);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x32F9127910F63DFA(0);
			unk_0x1C703A54AB4B12F6();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_609(*uParam0, uParam1);
	}
	func_608();
}

void func_608()
{
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
}

void func_609(var uParam0, var uParam1)
{
	unk_0x4237E72FB80FD332(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_610(char* sParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

void func_611(int iParam0)
{
	Global_1315691 = iParam0;
}

void func_612(var uParam0)
{
	uParam0->f_679 = 0;
}

void func_613(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_678), iVar0);
		if (iParam5 < 355)
		{
		}
	}
	uParam3->f_680++;
}

void func_614(var uParam0)
{
	func_615(uParam0);
	uParam0->f_679 = 1;
}

void func_615(var uParam0)
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
		uParam0->f_1[iVar0 /*56*/].f_54 = 355;
		uParam0->f_1[iVar0 /*56*/].f_55 = 355;
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

bool func_616(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_468(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x1D69C39ECF71C85C(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x880B947519D91525(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x59B2F61C9D01132B("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB56F0E1C89B9E069("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x59B2F61C9D01132B("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB56F0E1C89B9E069("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_617(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_617(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				*uParam0 = unk_0xB1E69EFAB6CB45A3(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x77FA56883245AD26(*uParam0))
					{
						uParam0->f_8 = unk_0x31CD6E9F83C10233();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

struct<9> func_618()
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

void func_619(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_620()
{
	if ((!unk_0xFF512A008EA368FF(2) && unk_0x42F812C5F1AA300A(2, 231)) || (unk_0xFF512A008EA368FF(2) && unk_0x42F812C5F1AA300A(2, 44)))
	{
		return 1;
	}
	return 0;
}

int func_621(var uParam0)
{
	return uParam0->f_5;
}

void func_622()
{
	unk_0x5535802AD071DF09();
	func_623();
}

void func_623()
{
	Global_17151.f_134 = 1;
}

void func_624()
{
	func_630();
	func_625(0);
	unk_0x7CDDB154852DA508();
	unk_0x8BDE85C7DFA6BD6E(19);
}

void func_625(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_629(0))
		{
			func_626(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_626(int iParam0)
{
	if (Global_14604)
	{
		func_628(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_627())
	{
		Global_14443.f_1 = 3;
	}
}

int func_627()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_628(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_629(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_629(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_630()
{
	Global_2434915.f_933.f_10 = 1;
}

void func_631(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0xA253C0846CB05565())
		{
			unk_0xCF304E352457AD63(0);
		}
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		uVar0 = iParam2;
		unk_0xB568492AC80B8832(iParam0, bParam1, uVar0);
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
		if (!func_578())
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
		if (unk_0x80BA8E3CC61A8625(iParam0) && unk_0x4B0365EB2D59E6FA(iParam0))
		{
			uVar25 = unk_0xD33F4BC17EB987E5(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x27CA09C6DFAB1E79())
				{
					unk_0xE5C165A30D0F0E71(1);
				}
				else
				{
					unk_0x477513BFF4F0CEC1(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x27CA09C6DFAB1E79() && !bVar18)
					{
						unk_0xE5C165A30D0F0E71(0);
					}
					Global_2422142[iParam0 /*399*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_635(uVar25) && !unk_0x362938436B006A86(uVar25))
				{
					if (!bVar21)
					{
						unk_0x33808CAFB62A256D(iVar25, true, 0);
					}
				}
				if (!unk_0x6781178AD73D2128(iVar25))
				{
					if (!bVar20)
					{
						unk_0x1F18D3C78C8C1A11(iVar25, false);
					}
					unk_0x583AB626B1CF33F0(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x1F18D3C78C8C1A11(iVar25, false);
				}
				unk_0x0EB00C68DDFABE19(iVar25, true);
				unk_0x94EB0EFC2C10DAF6(iParam0, 0);
				unk_0xE755BEBFEFA61027(iVar25);
				unk_0x825129266C8D3F32(iVar25, 1);
				func_634();
				func_633();
				if (unk_0xDF68FB003CB64BF7())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x391103C96DB7B6E4())
				{
				}
				Global_2422142[iParam0 /*399*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_635(iVar25) && !unk_0x362938436B006A86(iVar25))
				{
					if (!bVar21)
					{
						unk_0x33808CAFB62A256D(iVar25, !bVar14, 0);
					}
					if (!unk_0x6781178AD73D2128(iVar25))
					{
						if (!bVar20)
						{
							unk_0x1F18D3C78C8C1A11(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x583AB626B1CF33F0(iVar25, 1);
						}
					}
					if (func_632(Global_1641087.f_116067))
					{
						unk_0x1F18D3C78C8C1A11(iVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0x94EB0EFC2C10DAF6(iParam0, 0);
				}
				else
				{
					unk_0x94EB0EFC2C10DAF6(iParam0, 1);
				}
				unk_0x0EB00C68DDFABE19(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5370C33577D50923(iVar25) && !unk_0x90219307C9D2728D(iVar25, 0))
					{
						unk_0x3000ECF14A659126(iVar25);
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
			unk_0xB568492AC80B8832(iParam0, bParam1, iVar26);
		}
	}
}

bool func_632(int iParam0)
{
	return iParam0 == 17;
}

void func_633()
{
	struct<2> Var0;
	
	Global_2434915.f_1010 = 0;
	Global_2434915.f_1011 = 0;
	Global_2434915.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434915.f_1017 = -1;
	Global_2434915.f_1018 = 0;
	Global_2404997.f_2592 = { Var0 };
}

void func_634()
{
	Global_2404997.f_668 = 0;
	Global_2404997.f_2633 = 0;
	Global_2404997.f_503 = 0;
	Global_2404997.f_582 = 0;
	Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_216 = 0;
}

int func_635(int iParam0)
{
	int iVar0;
	
	if (unk_0x90219307C9D2728D(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF57D21B49780A7A8(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_636()
{
	if (func_639() || func_638())
	{
		func_637();
	}
}

void func_637()
{
	Global_2445582.f_636 = 1;
}

var func_638()
{
	return Global_2445582.f_615;
}

bool func_639()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 11);
}

void func_640(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8B0523D9EF9595C2(unk_0x6DE94B55A39542C6(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x9E69E04AC6AD5C49(unk_0x6DE94B55A39542C6(iParam0), "MPBitset");
	}
	unk_0xCD7E92DE2BFA0B0D(&iVar0, iParam1);
	unk_0x2EDC8603BB24D464(unk_0x6DE94B55A39542C6(iParam0), "MPBitset", iVar0);
}

int func_641()
{
	if (func_648(&Local_2045))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 5))
	{
		return 1;
	}
	if (func_642())
	{
		return 1;
	}
	if (func_917(0))
	{
		return 1;
	}
	if (func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		return 1;
	}
	if (Local_122.f_184.f_7 == func_364())
	{
		return 1;
	}
	return 0;
}

int func_642()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_371.f_5, 0))
	{
		return 1;
	}
	if (func_644() && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 != 3)
	{
		return 1;
	}
	if (func_643() && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 != 3)
	{
		return 1;
	}
	if (Global_2394718)
	{
		return 1;
	}
	if (Global_1574385.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_643()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 5);
}

int func_644()
{
	if (((func_647() || func_457()) || func_646()) || func_645())
	{
		return 1;
	}
	return 0;
}

bool func_645()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 1);
}

bool func_646()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 2);
}

bool func_647()
{
	return Global_2445582.f_579;
}

bool func_648(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_696, 2);
}

int func_649()
{
	if (!func_9(&(Local_122.f_184)))
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
	{
		return 0;
	}
	if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 < 3)
	{
		return 0;
	}
	if (!func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 5))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 12))
	{
		return 0;
	}
	if (Local_122.f_184.f_7 == func_364())
	{
		return 0;
	}
	if (!func_1124(Local_122.f_184.f_7, 1, 1))
	{
		return 0;
	}
	if (Local_122.f_184.f_7 == unk_0x3D35F9864E4640B1())
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_579, 21))
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (unk_0x362938436B006A86(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (Local_122.f_165 < 2)
	{
		return 0;
	}
	return 1;
}

void func_650(var uParam0)
{
	if (!unk_0x2A3398C6222EB190(uParam0->f_696, 2))
	{
		switch (uParam0->f_695)
		{
			case 0:
				if (!unk_0x957E53BB191CB24D())
				{
					if (func_653(uParam0))
					{
						func_652(uParam0);
						unk_0xDC38CC1E35B6A5D7("SPEC_LEAVE", "SPEC_SURE", 36, 0, 0, -1, 0, 0, 1);
						if (unk_0x42F812C5F1AA300A(2, 201))
						{
							unk_0x18F1BFAF88AC511B(-1, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							uParam0->f_695++;
						}
					}
					else
					{
						func_651(uParam0);
					}
				}
				break;
			
			case 1:
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_696), 2);
				break;
			}
	}
}

void func_651(var uParam0)
{
	if (unk_0xFCFC2645B6CF6425())
	{
		return;
	}
	if (unk_0x42F812C5F1AA300A(2, 202))
	{
		if (!unk_0x2A3398C6222EB190(uParam0->f_696, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_696), 0);
		}
		if (!unk_0x2A3398C6222EB190(uParam0->f_696, 1))
		{
			unk_0x18F1BFAF88AC511B(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_696), 1);
		}
	}
}

void func_652(var uParam0)
{
	if (unk_0xFCFC2645B6CF6425())
	{
		return;
	}
	if (unk_0x42F812C5F1AA300A(2, 202))
	{
		if (unk_0x2A3398C6222EB190(uParam0->f_696, 0))
		{
			unk_0x18F1BFAF88AC511B(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0xD804ACF2A7171150(&(uParam0->f_696), 0);
		}
	}
}

bool func_653(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_696, 0);
}

void func_654()
{
	struct<3> Var0;
	
	if (Local_122.f_197 != 2)
	{
		return;
	}
	if (Local_122.f_21 > 0)
	{
		return;
	}
	Var0 = { Local_633[0 /*3*/] };
	if (!func_29(Var0, 0f, 0f, 0f, 0))
	{
		func_655(200, Var0, &uLocal_2789, 1140457472, 1144750080, 0);
	}
}

void func_655(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_45(unk_0x3D35F9864E4640B1()) && !func_44(unk_0x3D35F9864E4640B1())) && !unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 8)) && (func_41(unk_0x3D35F9864E4640B1()) || func_40(unk_0x3D35F9864E4640B1())))
	{
		return;
	}
	Global_1779211 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Param1);
	func_690(iParam0, fVar0);
	if (unk_0x957E53BB191CB24D() && unk_0xA095EFC51C188A82() == 15)
	{
		if (func_39(unk_0x3D35F9864E4640B1()) || func_689(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0xA7D65AEDCF363C6A(1344549371))
			{
				unk_0x72FE4F9355DA095B(1344549371);
			}
		}
		else if (unk_0xA7D65AEDCF363C6A(1344549371))
		{
			unk_0x812DD153A22D0357(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_337(unk_0x3D35F9864E4640B1(), 21))
		{
			func_688(Param1, 1, 0);
		}
		if (!*uParam4 && func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			*uParam4 = 1;
			if (func_687(iParam0))
			{
				unk_0x15007EAE63C7ECCF(func_686(iParam0));
				if (func_685(iParam0, -1))
				{
					unk_0x438B2E6B2BAD6A0D(0);
					if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
					{
						unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 1);
						unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 1);
					}
					unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 0);
				}
			}
			if (func_684(iParam0))
			{
				fVar1 = func_683(iParam0);
				if (fVar1 != 1f)
				{
					func_680(fVar1);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 1);
				}
			}
			if (!Global_2391044)
			{
				if (func_679(iParam0) && func_39(unk_0x3D35F9864E4640B1()))
				{
					func_677(1);
					func_676(2);
				}
			}
			func_334(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_38(unk_0x3D35F9864E4640B1(), 19))
			{
				func_336(19);
			}
		}
		if (*uParam4 && func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			*uParam4 = 0;
			if (func_687(iParam0))
			{
				if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 0))
				{
					unk_0x15007EAE63C7ECCF(1f);
					unk_0x438B2E6B2BAD6A0D(5);
					unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 0);
				}
			}
			if (func_684(iParam0))
			{
				func_675();
				unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 1);
			}
			if (iParam7 && !func_45(unk_0x3D35F9864E4640B1()))
			{
				if (func_528(unk_0x3D35F9864E4640B1()) != 152)
				{
					func_657();
				}
			}
			if (func_207(2))
			{
				func_677(0);
				func_656(2);
			}
		}
	}
}

void func_656(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_29), iParam0);
}

void func_657()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_24), &Global_2408969, 2);
	unk_0x44666CF18D6E211C(&(Global_2404997.f_26), &Global_2408971, 17);
	func_673();
	func_660(1, 1);
	func_658();
}

void func_658()
{
	func_659(0, 0);
}

void func_659(int iParam0, int iParam1)
{
	Global_2404997.f_22 = iParam0;
	Global_2404997.f_23 = iParam1;
}

void func_660(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x44666CF18D6E211C(&(Global_2404997.f_43), &Global_2408988, 315);
	}
	else
	{
		Global_2404997.f_43 = { Global_2408988 };
		Global_2404997.f_43.f_49 = { Global_2408988.f_49 };
		Global_2404997.f_43.f_52 = Global_2408988.f_52;
		Global_2404997.f_43.f_53 = Global_2408988.f_53;
	}
	if (bParam0)
	{
		func_672();
	}
	func_663(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_662(0);
	func_661();
}

void func_661()
{
	struct<6> Var0;
	
	if (Global_2404997.f_480.f_1 == unk_0xFFDE6A3A0108B7CB())
	{
		Global_2404997.f_480 = { Var0 };
	}
}

void func_662(bool bParam0)
{
	if (bParam0)
	{
		Global_2404997.f_679 = 0;
	}
	else
	{
		Global_2404997.f_679 = 1;
	}
}

void func_663(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_671())
		{
			func_670();
		}
		Global_2404997.f_680.f_515 = unk_0xFFDE6A3A0108B7CB();
		Global_2404997.f_680.f_504 = iParam1;
		Global_2404997.f_680.f_505 = iParam2;
		Global_2404997.f_680.f_506 = iParam10;
		func_668();
		func_667(8, 0, 0, 0, 0);
		Global_2404997.f_680.f_507 = iParam11;
		Global_2404997.f_680.f_510 = iParam3;
		Global_2404997.f_680.f_511 = iParam4;
		Global_2404997.f_680.f_508 = iParam5;
		Global_2404997.f_680.f_509 = iParam6;
		Global_2404997.f_680.f_512 = iParam7;
		Global_2404997.f_680.f_513 = iParam8;
		Global_2404997.f_680.f_514 = iParam9;
		Global_2404997.f_1713 = 1;
	}
	else
	{
		func_664();
	}
}

void func_664()
{
	if (func_671() && !func_666())
	{
		func_670();
	}
	if (func_666())
	{
		func_665();
	}
	else
	{
		func_668();
		func_667(0, 0, 0, 0, 0);
		Global_2404997.f_1713 = 0;
		Global_2404997.f_1712 = 0;
	}
}

void func_665()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_680), &(Global_2404997.f_1196), 516);
	Global_2404997.f_480 = { Global_2404997.f_486 };
	if (unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		Global_2404997.f_1712 = 0;
	}
}

int func_666()
{
	if ((Global_2404997.f_1712 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_1196.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_1196.f_515))
	{
		return 1;
	}
	return 0;
}

void func_667(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411761 = 0;
	}
	Global_2404997.f_480 = iParam0;
	Global_2404997.f_480.f_1 = unk_0xFFDE6A3A0108B7CB();
	Global_2404997.f_480.f_2 = iParam1;
	Global_2404997.f_480.f_3 = iParam2;
	Global_2404997.f_480.f_4 = iParam3;
	Global_2404997.f_480.f_5 = iParam4;
}

void func_668()
{
	if (func_671() && !func_666())
	{
		func_670();
	}
	func_669();
	Global_2404997.f_680 = 0;
}

void func_669()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404997.f_680.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_670()
{
	if (func_666())
	{
		if (Global_2404997.f_680.f_515 == Global_2404997.f_1196.f_515)
		{
			return;
		}
	}
	if (!unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		unk_0x44666CF18D6E211C(&(Global_2404997.f_1196), &(Global_2404997.f_680), 516);
		Global_2404997.f_486 = { Global_2404997.f_480 };
		Global_2404997.f_1712 = 1;
	}
}

int func_671()
{
	if ((Global_2404997.f_1713 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_680.f_515))
	{
		return 1;
	}
	return 0;
}

void func_672()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_358), &Global_2409303, 121);
}

void func_673()
{
	func_674();
	Global_2404997.f_2172 = 0;
}

void func_674()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404997.f_2173[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_675()
{
	if (unk_0xE2F358F9F113BDF1(Global_2501777.f_4863))
	{
		if (!Global_2501777.f_4863 == unk_0xFFDE6A3A0108B7CB() && Global_2501777.f_4862 < 1f)
		{
			return;
		}
	}
	Global_2501777.f_4863 = -1;
	Global_2501777.f_4862 = 1f;
}

void func_676(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_29), iParam0);
}

void func_677(int iParam0)
{
	if (func_678() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391044)
	{
		return;
	}
	Global_2391044 = iParam0;
	Global_2391046 = 0;
	Global_2391047 = 0;
}

int func_678()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_679(int iParam0)
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

void func_680(float fParam0)
{
	float fVar0;
	
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_681())
	{
		return;
	}
	fVar0 = (Global_2501777.f_4862 - fParam0);
	if (unk_0xE2F358F9F113BDF1(Global_2501777.f_4863))
	{
		if (!Global_2501777.f_4863 == unk_0xFFDE6A3A0108B7CB() && unk_0x229F35E7CDDBF757(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2501777.f_4862 = fParam0;
	Global_2501777.f_4863 = unk_0xFFDE6A3A0108B7CB();
}

int func_681()
{
	switch (func_682())
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

int func_682()
{
	return Global_25222;
}

float func_683(int iParam0)
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
		case 229:
		case 230:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_684(int iParam0)
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

int func_685(int iParam0, int iParam1)
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

float func_686(int iParam0)
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

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
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

void func_688(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404997.f_43.f_49 = { Param0 };
	Global_2404997.f_43.f_52 = iParam3;
	Global_2404997.f_43.f_53 = iParam4;
}

int func_689(int iParam0)
{
	if (func_121(iParam0))
	{
		if (func_39(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_690(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_693(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_691();
	}
}

void func_691()
{
	if (!func_692(unk_0x3D35F9864E4640B1()))
	{
		func_334(25);
	}
}

bool func_692(int iParam0)
{
	return func_38(iParam0, 25);
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11711;
		
		case 142:
			return Global_262145.f_11699;
		
		case 157:
			return Global_262145.f_11666;
		
		case 159:
			return Global_262145.f_11649;
		
		case 162:
			return Global_262145.f_11760;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_694()
{
	int iVar0;
	
	if (!unk_0x2A3398C6222EB190(Local_122.f_1, 3))
	{
		if (Local_122.f_197 == 2)
		{
			if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
			{
				if (Local_122.f_21 >= 2)
				{
					if (!unk_0x2A3398C6222EB190(iLocal_580, 3))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
							{
								iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
								iLocal_2042 = iVar0;
								unk_0x31EFA4297B872C86(iVar0, 0, 1, 1, 0, 0, 0, 0, 0);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_580, 3);
							}
						}
					}
					else if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (unk_0x76B3C79DE564AFC6(iLocal_2042))
						{
							if (unk_0x432757A9E7AAFA96(iLocal_2042, 0))
							{
								unk_0x31EFA4297B872C86(iLocal_2042, 0, 0, 0, 0, 0, 0, 0, 0);
								unk_0xD804ACF2A7171150(&iLocal_580, 3);
							}
						}
					}
					else if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (iVar0 != iLocal_2042)
						{
							if (unk_0x76B3C79DE564AFC6(iLocal_2042))
							{
								if (unk_0x432757A9E7AAFA96(iLocal_2042, 0))
								{
									unk_0x31EFA4297B872C86(iLocal_2042, 0, 0, 0, 0, 0, 0, 0, 0);
									unk_0xD804ACF2A7171150(&iLocal_580, 3);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0x2A3398C6222EB190(iLocal_580, 3))
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_2042))
		{
			if (unk_0x432757A9E7AAFA96(iLocal_2042, 0))
			{
				unk_0x31EFA4297B872C86(iLocal_2042, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xD804ACF2A7171150(&iLocal_580, 3);
			}
		}
	}
}

void func_695()
{
	if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 0 || Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 2)
	{
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
		{
			if (!func_698())
			{
				func_697();
			}
		}
	}
	else if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		if (func_698())
		{
			func_696();
		}
	}
}

void func_696()
{
	unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 5);
}

void func_697()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 5);
}

bool func_698()
{
	return unk_0x2A3398C6222EB190(Global_1779211.f_3, 5);
}

void func_699()
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
	
	if (func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	switch (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7)
	{
		case 0:
			if (Local_122.f_197 == 2)
			{
				if (!unk_0x2A3398C6222EB190(iLocal_579, 29))
				{
					if (func_851())
					{
						func_831(200, 1, -1, 0);
					}
					else
					{
						func_831(200, 0, -1, 0);
					}
					unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 29);
				}
			}
			if (!func_917(1))
			{
				if (unk_0x2A3398C6222EB190(iLocal_578, 31))
				{
					func_915(func_916(), 1);
					func_910();
					unk_0xD804ACF2A7171150(&iLocal_578, 31);
				}
				if (Local_122.f_21 == 0)
				{
					if (!unk_0x2A3398C6222EB190(iLocal_578, 0))
					{
						if (func_598(0, 1, 1, 1))
						{
							if (func_830())
							{
								sVar4 = func_829();
								if (Local_122.f_197 == 2)
								{
									if (func_830())
									{
										func_828(sVar4, "CAG_BLIPS", iLocal_2773, 30000);
									}
								}
								else
								{
									func_597(sVar4, 30000);
									func_596(0);
								}
								unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 0);
								unk_0x18F1BFAF88AC511B(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
							}
						}
					}
				}
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
				{
					if (func_827(1))
					{
						if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 8))
						{
							func_826();
						}
						if (unk_0x2A3398C6222EB190(iLocal_579, 3))
						{
							Var0 = { func_825() };
							if (func_470(&Var0))
							{
								if (func_7(&uLocal_2766, 3000, 0))
								{
									unk_0xD804ACF2A7171150(&iLocal_579, 3);
									func_6(&uLocal_2766);
									unk_0x8C361F37C04084F4(1);
								}
							}
						}
						if (iLocal_2039 < func_357())
						{
							if (!func_402(unk_0x3D35F9864E4640B1()))
							{
								func_824(1);
							}
							if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
							{
								unk_0x64517F908482FA52(unk_0x0031992CA618A445(), joaat("weapon_unarmed"), 0);
								if (!func_42())
								{
									if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
									{
										unk_0xE8AFE63721D00A2E(0);
										unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
										unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 0);
										unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 1);
									}
									else if (func_822(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))))
									{
										if (func_821(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
										{
											unk_0xE8AFE63721D00A2E(0);
											unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 0);
											unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
											unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 1);
										}
									}
								}
							}
							else if (func_42())
							{
								unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
							}
							if (!unk_0x2A3398C6222EB190(iLocal_578, 18))
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 18);
							}
							if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
							{
								if (!func_42())
								{
									if (func_822(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))))
									{
										if (unk_0x2A3398C6222EB190(iLocal_578, 24))
										{
											unk_0xD804ACF2A7171150(&iLocal_578, 24);
										}
										if (unk_0x2A3398C6222EB190(iLocal_578, 23))
										{
											unk_0xD804ACF2A7171150(&iLocal_578, 23);
										}
										iVar5 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
										if (unk_0x432757A9E7AAFA96(iVar5, 0))
										{
											unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 1);
											if (unk_0x3251C2B06497863C(iVar5, -1, 0) == unk_0x0031992CA618A445())
											{
												if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
												{
													if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
													{
														if (unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
														{
															unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 1);
														}
													}
													else if (!unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
													{
														unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
													}
												}
												if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 13))
												{
													unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 13);
												}
												if (unk_0x2A3398C6222EB190(Local_122.f_35, unk_0x43B24C247F35B6BC()))
												{
													if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
													{
														unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 6);
													}
													unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
													iLocal_2041 = iVar5;
													if (Local_2748.f_11 == 0)
													{
														Local_2748.f_11 = unk_0x6239D1A379D387A4();
													}
													sVar4 = func_820();
													if (func_470(sVar4))
													{
														unk_0x8C361F37C04084F4(1);
													}
												}
											}
											else
											{
												if (!unk_0x2A3398C6222EB190(iLocal_578, 11))
												{
													if (func_598(0, 1, 1, 1))
													{
														if (func_830())
														{
															Var6 = { func_819() };
															if (func_830())
															{
																func_597(&Var6, 30000);
															}
															if (Local_122.f_197 != 2)
															{
																func_596(1);
															}
															unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 11);
														}
													}
												}
												if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
												{
													unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 6);
												}
											}
										}
									}
									else
									{
										if (!unk_0x2A3398C6222EB190(iLocal_578, 24))
										{
											if (func_598(0, 1, 1, 1))
											{
												if (func_830())
												{
													sVar4 = func_818();
													if (func_830())
													{
														func_597(sVar4, 30000);
													}
													if (Local_122.f_197 != 2)
													{
														func_596(1);
													}
													unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 24);
												}
											}
										}
										if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
										{
											func_817(1);
											unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
											unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
										}
									}
								}
								else if (!unk_0x2A3398C6222EB190(iLocal_578, 23))
								{
									if (func_598(0, 1, 1, 1))
									{
										unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 23);
										if (func_830())
										{
											func_597("PEN_PASSMD", 30000);
										}
										if (Local_122.f_197 != 2)
										{
											func_596(1);
										}
									}
								}
							}
							else
							{
								if (!unk_0x2A3398C6222EB190(iLocal_578, 1))
								{
									if (unk_0x2A3398C6222EB190(iLocal_578, 0))
									{
										if (func_598(0, 1, 1, 1))
										{
											if (func_830())
											{
												sVar4 = func_820();
												if (func_830())
												{
													func_597(sVar4, 30000);
												}
												if (Local_122.f_197 != 2)
												{
													func_596(1);
												}
												unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 1);
											}
										}
									}
								}
								if (unk_0x432757A9E7AAFA96(iLocal_2041, 0))
								{
								}
								if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
								{
									unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 6);
								}
							}
							func_816();
						}
					}
					else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 8))
						{
							func_814();
						}
						if (unk_0x2A3398C6222EB190(iLocal_578, 24))
						{
							unk_0xD804ACF2A7171150(&iLocal_578, 24);
						}
						if (unk_0x2A3398C6222EB190(iLocal_578, 18))
						{
							unk_0xD804ACF2A7171150(&iLocal_578, 18);
						}
						if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
						{
							func_817(1);
							unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
							unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
						}
						if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
						{
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 6);
						}
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
						{
							unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
						}
						if (unk_0x2A3398C6222EB190(iLocal_579, 4))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_579, 3))
							{
								if (func_598(0, 1, 1, 1))
								{
									if (func_830())
									{
										unk_0xD804ACF2A7171150(&iLocal_579, 4);
										unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 3);
										func_6(&uLocal_2766);
										func_363(&uLocal_2766, 0, 0);
										Var0 = { func_825() };
										if (func_830())
										{
											func_597(&Var0, 30000);
										}
										if (Local_122.f_197 != 2)
										{
											func_596(1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!func_827(1))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
							{
								func_817(1);
								unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
								unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
								unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
							}
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 13);
							func_910();
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
							{
								unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
							}
							if (unk_0x2A3398C6222EB190(iLocal_578, 18))
							{
								unk_0xD804ACF2A7171150(&iLocal_578, 18);
							}
							if (unk_0x432757A9E7AAFA96(iLocal_2041, 0))
							{
							}
							unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
							if (func_402(unk_0x3D35F9864E4640B1()))
							{
								func_824(0);
							}
							unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 4);
						}
					}
					else
					{
						if (unk_0x2A3398C6222EB190(iLocal_579, 3))
						{
							Var0 = { func_825() };
							if (func_470(&Var0))
							{
								if (func_7(&uLocal_2766, 3000, 0))
								{
									unk_0xD804ACF2A7171150(&iLocal_579, 3);
									func_6(&uLocal_2766);
									unk_0x8C361F37C04084F4(1);
								}
							}
						}
						if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
						{
						}
						if (func_42())
						{
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
							{
								unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
							}
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 13);
						}
						else if (!unk_0x2A3398C6222EB190(iLocal_578, 25))
						{
							if (unk_0x2A3398C6222EB190(Local_122.f_1, 7))
							{
								if (func_598(0, 1, 1, 1))
								{
									if (func_830())
									{
										Var10 = { func_813() };
										if (func_830())
										{
											func_597(&Var10, 30000);
										}
										if (Local_122.f_197 != 2)
										{
											func_596(1);
										}
										unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 25);
									}
								}
							}
						}
						func_816();
					}
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if ((!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()) || (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()) && !unk_0x432757A9E7AAFA96(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))) || !func_822(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))))
						{
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 13);
							if (unk_0x432757A9E7AAFA96(iLocal_2041, 0))
							{
							}
						}
						else if (unk_0x2A3398C6222EB190(Local_122.f_1, 1))
						{
							Var0 = { func_812() };
							if (func_470(&Var0))
							{
								unk_0x8C361F37C04084F4(1);
							}
						}
						else if (!unk_0x2A3398C6222EB190(iLocal_578, 3))
						{
							if (func_598(0, 1, 1, 1))
							{
								if (func_830())
								{
									Var0 = { func_812() };
									if (func_830())
									{
										func_597(&Var0, 30000);
									}
									if (Local_122.f_197 != 2)
									{
										func_596(1);
									}
									unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 3);
								}
							}
						}
					}
					if (unk_0x2A3398C6222EB190(iLocal_578, 0))
					{
						if (!unk_0x2A3398C6222EB190(iLocal_578, 2))
						{
							if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
							{
								if (unk_0x2A3398C6222EB190(Local_122.f_1, 1))
								{
									if (func_598(0, 1, 1, 1))
									{
										if (func_830())
										{
											Var0 = { func_811() };
											if (func_830())
											{
												func_597(&Var0, 30000);
											}
											if (Local_122.f_197 != 2)
											{
												func_596(1);
											}
											unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 2);
										}
									}
								}
							}
						}
					}
				}
				func_456(1, 0);
				func_446();
				func_429();
			}
			else if (!unk_0x2A3398C6222EB190(iLocal_578, 31))
			{
				if (unk_0xA761A0B6072010C8(uLocal_599))
				{
					unk_0x0C4BDC77192798AE(&uLocal_599);
				}
				func_409();
				func_396();
				unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 31);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
				if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
				}
			}
			if (Local_122.f_21 >= 1)
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_1, 12))
				{
					if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
					{
						if (Local_122.f_197 == 2)
						{
							if (!func_851())
							{
								func_677(1);
							}
							func_810(0);
							func_691();
							func_809(1);
						}
						else
						{
							func_800(136, 0f, 0f, 1, 1, 1, 0);
							func_776(1);
							func_824(0);
						}
						func_824(0);
						if (unk_0xA761A0B6072010C8(uLocal_599))
						{
							unk_0x0C4BDC77192798AE(&uLocal_599);
						}
						func_396();
						func_775(1);
						func_772();
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
						{
							unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
						}
						iLocal_597 = unk_0x834C6A3950A9090B(unk_0x0031992CA618A445());
						if (Local_122.f_197 != 2)
						{
							unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_595);
							unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 1);
						}
						else
						{
							func_817(0);
							unk_0x31EFA4297B872C86(unk_0x0031992CA618A445(), 0, 1, 1, 0, 0, 0, 0, 0);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_580, 2);
							unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
						}
						func_769(0);
						unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
						func_363(&uLocal_2768, 0, 0);
						Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 1;
					}
					else if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
					{
						if (Local_122.f_197 == 2)
						{
						}
						else
						{
							func_800(136, 0f, 0f, 1, 1, 0, 0);
						}
						func_396();
						if (unk_0xA761A0B6072010C8(uLocal_599))
						{
							unk_0x0C4BDC77192798AE(&uLocal_599);
						}
						func_775(1);
						unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
						func_824(0);
						Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 1;
					}
					else
					{
						if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
						{
							func_817(1);
							unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
							unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
							unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
						}
						if (unk_0xA761A0B6072010C8(uLocal_599))
						{
							unk_0x0C4BDC77192798AE(&uLocal_599);
						}
						func_824(0);
						unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
						func_396();
						func_768(&uLocal_2742);
						Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
					}
				}
				else
				{
					if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
					{
						func_817(1);
						unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
						unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
						unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
					}
					func_409();
					if (unk_0xA761A0B6072010C8(uLocal_599))
					{
						unk_0x0C4BDC77192798AE(&uLocal_599);
					}
					func_396();
					func_768(&uLocal_2742);
					func_824(0);
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
					Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
				}
			}
			else if (Local_122.f_197 != 2 && func_765(2, 0, 1, 0, 0))
			{
				func_824(0);
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 5;
			}
			func_764();
			break;
		
		case 1:
			func_429();
			func_764();
			func_456(!unk_0x2A3398C6222EB190(iLocal_578, 9), 0);
			func_816();
			func_763();
			if (Local_122.f_21 >= 2)
			{
				func_363(&uLocal_631, 0, 0);
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 2;
			}
			break;
		
		case 2:
			if (Local_2748.f_9 == 0)
			{
				Local_2748.f_9 = unk_0x6239D1A379D387A4();
			}
			if (Local_122.f_197 == 2)
			{
				if (!unk_0x2A3398C6222EB190(iLocal_580, 0))
				{
					unk_0x438B2E6B2BAD6A0D(0);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_580, 0);
				}
				else if (unk_0x58288C08A90CC7D0() > 0)
				{
					unk_0x438B2E6B2BAD6A0D(0);
				}
			}
			func_27(1);
			func_423();
			func_456(0, 0);
			func_754();
			func_414();
			func_472(0);
			func_749();
			func_764();
			func_747();
			sVar4 = func_820();
			if (!unk_0x2A3398C6222EB190(iLocal_578, 13))
			{
				Var26 = { func_746() };
				if (!func_917(1))
				{
					if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
					{
						if (func_598(0, 0, 1, 1))
						{
							if (!func_745(55))
							{
								func_597(&Var26, 30000);
								if (Local_122.f_197 != 2)
								{
									func_596(1);
								}
								unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 13);
							}
						}
					}
				}
				else
				{
					Var14 = { func_819() };
					Var18 = { func_813() };
					Var22 = { func_825() };
					if ((((((func_470(&Var26) || func_470(&Var22)) || func_470(&Var14)) || func_470(sVar4)) || func_470(&Var18)) || func_470("PEN_MPLAY")) || func_470("PEN_START2"))
					{
						unk_0x8C361F37C04084F4(1);
					}
				}
			}
			else if (iLocal_582 != 0)
			{
				if (!unk_0x2A3398C6222EB190(iLocal_578, 5))
				{
					if (func_598(0, 0, 1, 1))
					{
						if (!func_745(55))
						{
							func_597("PEN_STILLP", 30000);
							if (Local_122.f_197 != 2)
							{
								func_596(1);
							}
							unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 5);
						}
					}
				}
			}
			if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
				func_396();
				if (unk_0xA761A0B6072010C8(uLocal_2043))
				{
					unk_0x0C4BDC77192798AE(&uLocal_2043);
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
			{
				if (unk_0x2A3398C6222EB190(iLocal_578, 12))
				{
					Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
					func_396();
				}
			}
			if (Local_122.f_21 == 3)
			{
				func_409();
				func_396();
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
			}
			if (func_421())
			{
				if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
				}
				if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
				{
					unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 6);
				}
				if (func_744())
				{
					func_743(0);
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 20);
				func_409();
				func_396();
				func_817(1);
				unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
			}
			else if (Local_122.f_21 == 4)
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 4;
			}
			else if (Local_122.f_21 > 4)
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 5;
			}
			else if (Local_122.f_197 != 2 && func_765(2, 0, 1, 0, 0))
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 5;
			}
			else if (func_459())
			{
				func_409();
				func_396();
				func_817(1);
				unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 3;
			}
			break;
		
		case 3:
			if (!func_917(1))
			{
				if ((!unk_0x2A3398C6222EB190(Local_122.f_1, 17) && !unk_0x2A3398C6222EB190(Local_122.f_1, 16)) && !unk_0x2A3398C6222EB190(Local_122.f_1, 18))
				{
					func_738();
					func_736();
				}
				func_764();
				if ((!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1)) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
				{
					if (Local_122.f_21 > 1 && Local_122.f_21 < 3)
					{
						if (!unk_0x2A3398C6222EB190(iLocal_579, 17))
						{
							if (unk_0xA761A0B6072010C8(uLocal_598))
							{
								unk_0xEB934A06DDA5027D(uLocal_598, 55);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 17);
							}
						}
						func_27(1);
						func_423();
					}
					if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
					{
						func_456(0, 1);
					}
				}
			}
			else if (unk_0x2A3398C6222EB190(iLocal_579, 17))
			{
				if (unk_0xA761A0B6072010C8(uLocal_598))
				{
					unk_0x0C4BDC77192798AE(&uLocal_598);
				}
			}
			if (unk_0x2A3398C6222EB190(iLocal_580, 0))
			{
				unk_0x438B2E6B2BAD6A0D(5);
				unk_0xD804ACF2A7171150(&iLocal_580, 0);
			}
			if (func_744())
			{
				if (func_421())
				{
					func_743(0);
				}
			}
			func_35();
			if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
			{
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2))
				{
					func_472(1);
				}
			}
			else
			{
				func_735();
			}
			if (unk_0x2A3398C6222EB190(iLocal_578, 6))
			{
				if (unk_0x3A7B47D96E536F61("MP_Player_Inside_Bubble_Scene"))
				{
					unk_0xB3E27A9E412BBDF8("MP_Player_Inside_Bubble_Scene");
				}
				if (unk_0x3A7B47D96E536F61("MP_Player_Outside_Bubble_Scene"))
				{
					unk_0xB3E27A9E412BBDF8("MP_Player_Outside_Bubble_Scene");
				}
				unk_0xC84CB7879942C3BA("pennedIn");
				unk_0xF177BD202464664F("PennedInOut", 0, 0);
				unk_0xD804ACF2A7171150(&iLocal_578, 6);
			}
			if (Local_122.f_197 != 2)
			{
				if (func_45(unk_0x3D35F9864E4640B1()))
				{
					func_776(0);
					func_775(0);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 24);
					func_710(136, 0, 1);
				}
			}
			else if (!unk_0x2A3398C6222EB190(iLocal_579, 24))
			{
				func_775(0);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 24);
			}
			if (!unk_0x2A3398C6222EB190(iLocal_579, 21))
			{
				if (unk_0x2A3398C6222EB190(iLocal_579, 14) || unk_0x2A3398C6222EB190(iLocal_578, 20))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 21);
				}
			}
			if (func_641())
			{
				if (func_700())
				{
					if (Local_122.f_21 == 4)
					{
						Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 4;
					}
					else if (Local_122.f_21 > 4)
					{
						Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 5;
					}
					else
					{
						func_463();
					}
				}
			}
			break;
		
		case 4:
			if (Local_122.f_21 > 4)
			{
				Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 = 5;
			}
			break;
		
		case 5:
			func_1033();
			break;
	}
}

int func_700()
{
	if ((func_462() && !func_20(Local_2782)) || unk_0x2A3398C6222EB190(iLocal_579, 23))
	{
		switch (iLocal_2786)
		{
			case 0:
				if (!unk_0x5114FCEE2A997B95() && !unk_0x229840854A80E0D9())
				{
					unk_0x8351F65655759E0C(500);
				}
				else
				{
					iLocal_2786++;
				}
				break;
			
			case 1:
				if (unk_0x5114FCEE2A997B95())
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 23);
					func_709();
					func_463();
					iLocal_2786++;
				}
				break;
			
			case 2:
				if (func_701(Local_2782, fLocal_2785, 0, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					iLocal_2786++;
				}
				break;
			
			case 3:
				if (!unk_0x4413A34F0AAF1146() && !unk_0x229840854A80E0D9())
				{
					unk_0x18D7C8000EDEAAB4(500);
					iLocal_2786++;
				}
				break;
			
			case 4:
				if (unk_0xF9FC07CC13402AEF())
				{
					iLocal_2786++;
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

int func_701(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_17151.f_6 = 1;
	if (Global_2434915.f_1010 && Global_2434915.f_1018)
	{
		func_707(0, bParam9);
		return 1;
	}
	if (unk_0x003E46CBEF6CE07A() && !bParam9)
	{
		if (Global_2434915.f_1010)
		{
			func_707(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x391103C96DB7B6E4() && !bParam9) && !unk_0xDF68FB003CB64BF7())
	{
		return 0;
	}
	if (!func_706())
	{
		if (func_705(unk_0x3D35F9864E4640B1(), 1, 0))
		{
			if (((bParam9 && func_1124(unk_0x3D35F9864E4640B1(), 1, 0)) && unk_0x003E46CBEF6CE07A()) && Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_231 == 1)
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
	if (!Global_2434915.f_1010 && !bParam11)
	{
		Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
		if ((unk_0x229F35E7CDDBF757((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x229F35E7CDDBF757((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x229F35E7CDDBF757((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x229F35E7CDDBF757(fVar4) < 1f)
			{
				Global_2434915.f_1010 = 0;
				Global_2434915.f_1011 = 0;
				if (unk_0xDF68FB003CB64BF7())
				{
					unk_0x0BE15AEF2AE97900();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2434915.f_1012 || !Param0.f_1 == Global_2434915.f_1012.f_1) || !Param0.f_2 == Global_2434915.f_1012.f_2) || !fParam3 == Global_2434915.f_1015)
	{
		if (Global_2434915.f_1010 == 1)
		{
			if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2434915.f_1016) < func_704(0))
			{
				return 0;
			}
			unk_0x0BE15AEF2AE97900();
			Global_2434915.f_1011 = 1;
		}
		else
		{
			Global_2434915.f_1011 = 0;
		}
		Global_2434915.f_1012 = { Param0 };
		Global_2434915.f_1015 = fParam3;
		Global_2434915.f_1010 = 0;
	}
	if (!Global_2434915.f_1010 && !unk_0xDF68FB003CB64BF7())
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
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0x2A3398C6222EB190(Global_92814.f_1315[44], 16))
			{
				func_703();
			}
			if (!unk_0xD03F922EA5A52712(unk_0x0031992CA618A445(), &(Global_2404997.f_492)))
			{
				Global_2404997.f_492 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				uVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
				if (unk_0xFD5643D04AF8A14E(uVar0))
				{
					Global_2434915.f_1017 = 0;
				}
			}
		}
		if (Global_2434915.f_1017 > -1)
		{
			Global_2434915.f_1016 = unk_0x898811EA80D35DE2();
			Global_2434915.f_1010 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						uVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
						unk_0x0A69FBBF51E1A08F(uVar0, Param0, 0, 1, 1, 1);
						unk_0x5082D1A6D078DB20(iVar0, fParam3);
						if (fParam12 != 0f)
						{
							unk_0xB7E3C36A3BE003B5(iVar0, fParam12, 0f, fParam3, 2, 1);
						}
					}
					else
					{
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Param0, 0, 0, 0, 1);
						unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), fParam3);
					}
				}
				else
				{
					unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Param0, 0, 0, 0, 1);
					unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), fParam3);
				}
				func_707(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0xEB3E8FA824A0DE93();
				unk_0x9865AA44AEC8024D(unk_0x3D35F9864E4640B1(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2434915.f_1016 = unk_0x898811EA80D35DE2();
			Global_2434915.f_1010 = 1;
		}
	}
	if (Global_2434915.f_1010)
	{
		Global_17151.f_6 = 1;
		Global_2434915.f_1016 = unk_0x898811EA80D35DE2();
		if (Global_2434915.f_1017 > -1)
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
			}
			if (func_702(&(Global_2434915.f_1017), Param0, fParam3, iVar0))
			{
				func_707(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Global_2434915.f_1012) < 2f)
				{
					if (unk_0xDF68FB003CB64BF7())
					{
						unk_0x0BE15AEF2AE97900();
					}
					func_707(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0xDF68FB003CB64BF7())
			{
				if (fParam12 != 0f)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
						unk_0xB7E3C36A3BE003B5(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2434915.f_1018 = 1;
						return 0;
					}
				}
				func_707(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_702(var uParam0, struct<3> Param1, float fParam4, var uParam5)
{
	if (unk_0x76B3C79DE564AFC6(Global_2434915.f_1019) && !unk_0x7A6C051038031EFA(Global_2434915.f_1019, 0))
	{
		unk_0xDE78E0A451F0CC44(Global_2434915.f_1019);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2434915.f_1019 = uParam5;
			unk_0xDE78E0A451F0CC44(Global_2434915.f_1019);
			if (unk_0x3B077EBCBD1ABF1F(Global_2434915.f_1019))
			{
				if (!unk_0x7A6C051038031EFA(Global_2434915.f_1019, 0))
				{
					unk_0x5082D1A6D078DB20(Global_2434915.f_1019, fParam4);
					unk_0x0A69FBBF51E1A08F(Global_2434915.f_1019, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_703()
{
	int iVar0;
	
	iVar0 = unk_0x885DE9EE2AE89A2A();
	if (unk_0x01576B15D69CCB0B() && Global_2404997.f_2591 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404997.f_2590)
	{
		if (!unk_0x2CD3BB84FDB768C9())
		{
			Global_2404997.f_2590 = iVar0;
		}
	}
}

int func_704(bool bParam0)
{
	if (unk_0x5114FCEE2A997B95())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_705(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2422142[iParam0 /*399*/].f_231 == 99)
	{
		if ((iParam2 && Global_2422142[iParam0 /*399*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2422142[iParam0 /*399*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_706()
{
	return Global_1312830;
}

void func_707(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xADE985F6BA90AED5(0f, 1065353216);
		unk_0x31F42B23A853582E(0f);
	}
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x6086ABE329F045A1(unk_0x0031992CA618A445());
	}
	if (!bParam1)
	{
		unk_0xEB3E8FA824A0DE93();
	}
	if (unk_0xDF68FB003CB64BF7())
	{
		unk_0x0BE15AEF2AE97900();
	}
	func_633();
	if (!unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 14))
	{
		func_708();
	}
}

void func_708()
{
	Global_2509819.f_80 = 1;
}

void func_709()
{
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x6781178AD73D2128(unk_0x0031992CA618A445()))
			{
				unk_0x2C49E28C76DBD67B(unk_0x0031992CA618A445(), 1, 1);
			}
		}
	}
}

void func_710(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x3D35F9864E4640B1() != -1)
	{
		if (unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 13))
		{
			unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 13);
		}
		if (unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 14))
		{
			unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 14);
		}
	}
	if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 21))
	{
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 21);
	}
	func_731();
	unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
	unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_730(func_527(unk_0x3D35F9864E4640B1()));
		func_729(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x3D35F9864E4640B1() != -1) && func_728(unk_0x3D35F9864E4640B1()) >= 12)
		{
			func_135(2533, -1);
			iVar1 = func_48(2533, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_1574411, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_1574411, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_1574411, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_1574411, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_1574411, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_1574411, 5);
			}
		}
		func_727();
		func_726();
		func_725();
		if ((!func_39(unk_0x3D35F9864E4640B1()) && !func_37(unk_0x3D35F9864E4640B1())) && !func_724())
		{
			func_657();
		}
		func_723();
		if (!unk_0x2A3398C6222EB190(Global_1779211.f_3, 0) && !unk_0x2A3398C6222EB190(Global_1779211.f_3, 1))
		{
			func_814();
		}
		func_722();
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1706), 2);
		func_721();
		func_720();
	}
	if (unk_0xA7D65AEDCF363C6A(1344549371))
	{
		unk_0x812DD153A22D0357(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x3D35F9864E4640B1() != -1 && !func_337(unk_0x3D35F9864E4640B1(), 21)) && !func_339(unk_0x3D35F9864E4640B1(), 0))
		{
			func_677(0);
			func_718(0);
			func_717();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_716(26, -1))
		{
			Global_2457274 = -1;
			func_714(26, -1);
		}
	}
	if (!func_711())
	{
		Global_2488466 = 1;
	}
}

int func_711()
{
	if ((((!func_561(unk_0x3D35F9864E4640B1()) && !func_544(unk_0x3D35F9864E4640B1())) && func_527(unk_0x3D35F9864E4640B1()) != 146) && !func_713()) && !func_712())
	{
		return 0;
	}
	return 1;
}

int func_712()
{
	if (Global_1641087.f_96810 == Global_262145.f_8799)
	{
		return 1;
	}
	return 0;
}

int func_713()
{
	if ((Global_1641087 == 0 && unk_0xF4F91CD09D59F42E()) && (((((((Global_1641087.f_5 != 0 || Global_1641087.f_116067 > 0) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 15)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 18)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 19)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 29)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 28)) || unk_0x2A3398C6222EB190(Global_1641087.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_714(int iParam0, int iParam1)
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
			unk_0x6B75D9DC60122244(0, iParam1);
			break;
		
		default:
			uVar1 = func_715(iParam1);
			iVar0 = unk_0x03CCEFDDDC599303(uVar1);
			if (unk_0x2A3398C6222EB190(iVar0, iParam0))
			{
				unk_0xD804ACF2A7171150(&iVar0, iParam0);
				unk_0x6B75D9DC60122244(iVar0, iParam1);
			}
			break;
	}
}

int func_715(int iParam0)
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

bool func_716(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	uVar0 = func_715(iParam1);
	uVar1 = unk_0x03CCEFDDDC599303(uVar0);
	return unk_0x2A3398C6222EB190(uVar1, iParam0);
}

void func_717()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x2A3398C6222EB190(Global_2359720[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x2A3398C6222EB190(Global_2359720[iVar0 /*26*/].f_13, 26))
			{
				unk_0xD804ACF2A7171150(&(Global_2359720[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_718(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92814.f_8 = 1;
	}
	else
	{
		Global_92814.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_719(iVar0);
		iVar0++;
	}
}

void func_719(int iParam0)
{
	Global_92814.f_163[iParam0] = 1;
	Global_92814.f_162 = 1;
}

void func_720()
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_7 = 0;
}

void func_721()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4704, 1))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4704), 1);
	}
	if (Global_2501777.f_4704 > 0)
	{
		unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_30S_KILL");
		unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_30S_FIRA");
		unk_0xB3E27A9E412BBDF8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x62316D43A8F729C6(1);
		Global_2501777.f_4704 = 0;
		unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
		unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
		unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 0);
		if (!unk_0xB3404E397FF56B3B(unk_0x49CAADAD1ABAB70A(), "am_pi_menu"))
		{
			if (Global_2501777.f_4714 > -1)
			{
				unk_0xF2565A150D1CA964(Global_2501777.f_4714);
				Global_2501777.f_4714 = -1;
			}
		}
	}
}

void func_722()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574385 = { Var0 };
}

void func_723()
{
	var uVar0;
	
	Global_1316427 = uVar0;
}

bool func_724()
{
	return Global_1574292;
}

void func_725()
{
	Global_2501777.f_4705 = 0;
}

void func_726()
{
	if (unk_0x3D35F9864E4640B1() != -1)
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1 = 0;
	}
}

void func_727()
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	if (iVar0 != -1)
	{
		Global_1623799[iVar0 /*488*/] = -1;
	}
}

int func_728(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_204.f_6;
}

void func_729(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217, iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217, iParam0))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217), iParam0);
	}
}

int func_730(int iParam0)
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
			if (func_40(unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_731()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_1701, 3) || unk_0x2A3398C6222EB190(Global_2501777.f_1701, 4))
	{
		if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
		{
			unk_0x18D7C8000EDEAAB4(800);
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_1701, 5))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1701), 5);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_1701, 3))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1701), 3);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_1701, 4))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1701), 4);
	}
	func_734(0);
	func_733(0);
	func_732(0);
}

void func_732(int iParam0)
{
	if (Global_2501777.f_4477 != iParam0)
	{
		Global_2501777.f_4477 = iParam0;
	}
}

void func_733(bool bParam0)
{
	if (Global_2501777.f_4476 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2501777.f_4476 = bParam0;
	}
}

void func_734(int iParam0)
{
	if (Global_2501777.f_4474 != iParam0)
	{
		Global_2501777.f_4474 = iParam0;
	}
}

void func_735()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			iVar1 = unk_0x3251C2B06497863C(iVar0, -1, 0);
			if (iVar1 != 0)
			{
				if (iVar1 != unk_0x0031992CA618A445())
				{
					if (unk_0x972B5786EA49FE1A(iVar1))
					{
						iVar2 = unk_0x46E9A8D99AF6D7BC(iVar1);
						if (unk_0x532CFF8D6B65E42F(iVar2))
						{
							iVar3 = unk_0x3DAB36F6FA9328A6(iVar2);
							iVar4 = iVar3;
							if (unk_0x2A3398C6222EB190(Local_321[iVar4 /*8*/].f_1, 0))
							{
								if (!unk_0x2A3398C6222EB190(Local_321[iVar4 /*8*/].f_1, 1))
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
		func_816();
	}
}

void func_736()
{
	struct<4> Var0;
	
	if (!unk_0x2A3398C6222EB190(Local_122.f_1, 12))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_578, 10))
		{
			if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 3)
			{
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
				{
					if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
					{
						if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_579, 20))
							{
								if (!func_459())
								{
									if (func_598(0, 1, 1, 1))
									{
										Var0 = { func_737() };
										func_597(&Var0, 30000);
										if (Local_122.f_197 != 2)
										{
											func_596(1);
										}
										unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 10);
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

struct<4> func_737()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_738()
{
	struct<4> Var0;
	
	if (!unk_0x2A3398C6222EB190(iLocal_578, 4))
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 12))
		{
			if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
			{
				if (func_598(0, 1, 1, 1))
				{
					if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
					{
						if (unk_0x2A3398C6222EB190(iLocal_579, 5))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_579, 6))
							{
								Var0 = { func_742() };
								func_597(&Var0, -1);
								if (Local_122.f_197 != 2)
								{
									func_596(1);
								}
								unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 6);
							}
						}
						else if (unk_0x2A3398C6222EB190(iLocal_579, 8))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_579, 6))
							{
								Var0 = { func_741() };
								func_597(&Var0, -1);
								if (Local_122.f_197 != 2)
								{
									func_596(1);
								}
								unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 6);
							}
						}
						else if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_579, 6))
							{
								Var0 = { func_741() };
								func_597(&Var0, -1);
								if (Local_122.f_197 != 2)
								{
									func_596(1);
								}
								unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 6);
							}
						}
					}
					else if (!unk_0x2A3398C6222EB190(Local_122.f_1, 5))
					{
						Var0 = { func_740() };
						func_597(&Var0, 30000);
						if (Local_122.f_197 != 2)
						{
							func_596(1);
						}
					}
					unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 4);
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
			{
				if (func_598(0, 1, 1, 1))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_578, 20))
					{
						Var0 = { func_740() };
						func_597(&Var0, 30000);
						if (Local_122.f_197 != 2)
						{
							func_596(1);
						}
						unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 4);
					}
				}
			}
		}
		else
		{
			Var0 = { func_739() };
			func_51(&Var0, 1);
			unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 4);
		}
	}
}

struct<4> func_739()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

struct<4> func_740()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

struct<4> func_741()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

struct<4> func_742()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_743(int iParam0)
{
	Global_2501777.f_4790 = iParam0;
}

bool func_744()
{
	return Global_2501777.f_4790;
}

bool func_745(int iParam0)
{
	return Global_2434915.f_2484[0 /*76*/].f_1 == iParam0;
}

struct<4> func_746()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_747()
{
	if (Local_122.f_197 == 2)
	{
		if (!unk_0x2A3398C6222EB190(iLocal_579, 30))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_579, 2))
					{
						if (!func_8(&uLocal_629))
						{
							func_363(&uLocal_629, 0, 0);
						}
						else if (func_7(&uLocal_629, 10000, 0))
						{
							if (!unk_0x068C69D0643C4B95())
							{
								func_748("BRS_BM_EXP1", -1);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 30);
							}
						}
					}
				}
			}
		}
	}
}

void func_748(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

void func_749()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (!unk_0x2A3398C6222EB190(iLocal_578, 16))
	{
		if (Local_122.f_21 > 1)
		{
			if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						iLocal_2040 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (unk_0x3251C2B06497863C(iLocal_2040, -1, 0) == unk_0x0031992CA618A445())
						{
							if (unk_0x3B077EBCBD1ABF1F(iLocal_2040))
							{
								if (((!func_753(iLocal_2040, 1) && !func_752(iLocal_2040)) && !func_751(iLocal_2040)) && !func_750(iLocal_2040))
								{
									if (func_822(unk_0xE9559A12052415BE(iLocal_2040)))
									{
										unk_0x1581691D748490F3(iLocal_2040, 0, 1);
										unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 16);
										iVar2 = 0;
										while (iVar2 < 32)
										{
											unk_0x3529025CFB8BE3AA(iLocal_2040, 0, Global_1574701[iVar2]);
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
	if (unk_0x76B3C79DE564AFC6(iLocal_2040))
	{
		if (!func_753(iLocal_2040, 1) && !func_750(iLocal_2040))
		{
			if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iLocal_2040)))
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
			if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iLocal_2040)))
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
	if (unk_0x76B3C79DE564AFC6(iLocal_2040))
	{
		if (func_753(iLocal_2040, 1) || func_750(iLocal_2040))
		{
			if (Local_122.f_21 == 2)
			{
				if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
				{
					if (unk_0x432757A9E7AAFA96(iLocal_2040, 0))
					{
						if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 5))
						{
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
							{
								if (!unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iLocal_2040))
								{
									if (!func_398(sVar1))
									{
										func_384(sVar1, 0);
									}
								}
								else if (func_398(sVar1))
								{
									func_396();
								}
							}
						}
						else if (func_398(sVar1))
						{
							func_396();
						}
					}
					else if (bVar3)
					{
						if (func_398(sVar1))
						{
							func_396();
						}
					}
				}
			}
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_578, 16))
	{
		if (Local_122.f_21 == 2)
		{
			if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
			{
				if (unk_0x432757A9E7AAFA96(iLocal_2040, 0))
				{
					if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 5))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (!unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iLocal_2040))
							{
								if (!unk_0xA761A0B6072010C8(uLocal_2043))
								{
									uLocal_2043 = unk_0xE80C2D6BF636C6C4(iLocal_2040);
									unk_0x8D60956768933D7C(uLocal_2043, 1);
								}
								if (!func_398(sVar1))
								{
									func_384(sVar1, 0);
								}
							}
							else if (func_822(unk_0xE9559A12052415BE(iLocal_2040)))
							{
								if (unk_0xA761A0B6072010C8(uLocal_2043))
								{
									unk_0x0C4BDC77192798AE(&uLocal_2043);
								}
								if (bVar3)
								{
									if (func_398(sVar1))
									{
										func_396();
									}
								}
							}
						}
					}
					else if (bVar3)
					{
						if (func_398(sVar1))
						{
							func_396();
						}
					}
				}
				else
				{
					if (unk_0xA761A0B6072010C8(uLocal_2043))
					{
						unk_0x0C4BDC77192798AE(&uLocal_2043);
					}
					if (bVar3)
					{
						if (func_398(sVar1))
						{
							func_396();
						}
					}
				}
			}
		}
	}
	if (unk_0xA761A0B6072010C8(uLocal_2043) || !unk_0x432757A9E7AAFA96(iLocal_2040, 0))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (func_822(unk_0xE9559A12052415BE(iVar0)))
				{
					if (iVar0 != iLocal_2040)
					{
						if (unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445())
						{
							if (unk_0x3B077EBCBD1ABF1F(iVar0))
							{
								iLocal_2040 = iVar0;
								if (bVar3)
								{
									if (func_398(sVar1))
									{
										func_396();
									}
								}
								unk_0x0C4BDC77192798AE(&uLocal_2043);
								if (!func_753(iLocal_2040, 1))
								{
									unk_0x1581691D748490F3(iLocal_2040, 0, 1);
								}
							}
						}
						else if (bVar3)
						{
							if (func_398(sVar1))
							{
								func_396();
							}
						}
					}
				}
			}
			else if (unk_0x432757A9E7AAFA96(iLocal_2040, 0))
			{
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(iLocal_579, 1))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 1);
				unk_0xD804ACF2A7171150(&iLocal_579, 2);
			}
		}
	}
	else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_579, 2))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (func_822(unk_0xE9559A12052415BE(iVar0)))
				{
					unk_0xD804ACF2A7171150(&iLocal_579, 1);
					unk_0xD804ACF2A7171150(&iLocal_579, 2);
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 2);
				}
			}
		}
		else if (unk_0x2A3398C6222EB190(iLocal_579, 2))
		{
			unk_0xD804ACF2A7171150(&iLocal_579, 2);
		}
	}
	if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 2)
	{
		if (!unk_0x2A3398C6222EB190(iLocal_579, 5))
		{
			if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						iVar4 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (unk_0x3251C2B06497863C(iVar4, -1, 0) == unk_0x0031992CA618A445())
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 5);
							func_396();
						}
					}
				}
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(iLocal_579, 8))
	{
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					iVar4 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x3251C2B06497863C(iVar4, -1, 0) != unk_0x0031992CA618A445() && unk_0x3251C2B06497863C(iVar4, -1, 0) != 0)
					{
						unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 0);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 8);
					}
				}
			}
		}
	}
}

int func_750(int iParam0)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0x496D18970B708258("MPBitset", 3) && unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
			if (unk_0x2A3398C6222EB190(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_751(int iParam0)
{
	if (Global_2501777.f_287[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_752(int iParam0)
{
	if (Global_2501777.f_286 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_753(int iParam0, bool bParam1)
{
	if (Global_70785)
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && (!bParam1 || unk_0x432757A9E7AAFA96(iParam0, 0)))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_754()
{
	char* sVar0;
	
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 3) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 10))
	{
		if (unk_0x2A3398C6222EB190(iLocal_578, 6))
		{
			if (unk_0x3A7B47D96E536F61("MP_Player_Inside_Bubble_Scene"))
			{
				unk_0xB3E27A9E412BBDF8("MP_Player_Inside_Bubble_Scene");
			}
			if (unk_0x3A7B47D96E536F61("MP_Player_Outside_Bubble_Scene"))
			{
				unk_0xB3E27A9E412BBDF8("MP_Player_Outside_Bubble_Scene");
			}
			unk_0xC84CB7879942C3BA("pennedIn");
			unk_0xF177BD202464664F("PennedInOut", 0, 0);
			unk_0xD804ACF2A7171150(&iLocal_578, 6);
		}
		if (func_398("PEN_BAREA"))
		{
			func_396();
		}
		if (func_398("PEN_BAREA"))
		{
			func_396();
		}
		if (func_398("PEN_AREA"))
		{
			func_396();
		}
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		if (func_917(1))
		{
			if (unk_0x2A3398C6222EB190(iLocal_578, 6))
			{
				if (unk_0x3A7B47D96E536F61("MP_Player_Inside_Bubble_Scene"))
				{
					unk_0xB3E27A9E412BBDF8("MP_Player_Inside_Bubble_Scene");
				}
				if (unk_0x3A7B47D96E536F61("MP_Player_Outside_Bubble_Scene"))
				{
					unk_0xB3E27A9E412BBDF8("MP_Player_Outside_Bubble_Scene");
				}
				unk_0xC84CB7879942C3BA("pennedIn");
				unk_0xF177BD202464664F("PennedInOut", 0, 0);
				unk_0xD804ACF2A7171150(&iLocal_578, 6);
			}
			if (func_398("PEN_BAREA"))
			{
				func_396();
			}
			if (func_398("PEN_BAREA"))
			{
				func_396();
			}
			if (func_398("PEN_AREA"))
			{
				func_396();
			}
			func_409();
			return;
		}
	}
	if ((func_827(0) && !unk_0x2A3398C6222EB190(iLocal_579, 2)) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 9))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 9);
		}
		if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 10))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 10);
			}
			else if (unk_0x2A3398C6222EB190(iLocal_579, 9))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 10);
			}
		}
		if (func_8(&uLocal_611))
		{
			func_6(&uLocal_611);
			unk_0x71B09CD4E0DCABBB(0, 255, 255, 255);
		}
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 5))
		{
			unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 5);
			unk_0x18F1BFAF88AC511B(-1, "OOB_Cancel", "GTAO_FM_Events_Soundset", 0);
			unk_0x03C4BA9F5A120DFE(iLocal_2044);
			unk_0xF2565A150D1CA964(iLocal_2044);
			unk_0xD804ACF2A7171150(&iLocal_579, 7);
		}
		if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
		{
			if (!func_745(55))
			{
				if ((unk_0x76B3C79DE564AFC6(iLocal_2040) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)) && unk_0x432757A9E7AAFA96(iLocal_2040, 0))
				{
					if (func_398("PEN_AREA"))
					{
						func_396();
					}
				}
				else if (!unk_0xA761A0B6072010C8(uLocal_2043))
				{
					if (!func_398("PEN_AREA"))
					{
						func_384("PEN_AREA", 0);
					}
				}
			}
		}
		else if (!func_398("PEN_AREA"))
		{
			func_384("PEN_AREA", 0);
		}
		if (!unk_0x2A3398C6222EB190(iLocal_578, 6))
		{
			if (unk_0x3A7B47D96E536F61("MP_Player_Outside_Bubble_Scene"))
			{
				unk_0xB3E27A9E412BBDF8("MP_Player_Outside_Bubble_Scene");
			}
			unk_0xFD69BDF108B32E5B("MP_Player_Inside_Bubble_Scene");
			unk_0xF177BD202464664F("pennedIn", 0, 1);
			unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 6);
		}
	}
	else
	{
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 9))
		{
			unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 9);
		}
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			func_761();
			if (!unk_0x2A3398C6222EB190(iLocal_579, 2))
			{
				if (!func_398("PEN_BAREA"))
				{
					func_384("PEN_BAREA", 0);
				}
			}
			else
			{
				if (!func_398("PEN_EXITV"))
				{
					func_384("PEN_EXITV", 0);
				}
				if (!unk_0x2A3398C6222EB190(iLocal_578, 24))
				{
					if (func_598(0, 1, 1, 1))
					{
						sVar0 = func_818();
						func_597(sVar0, 30000);
						if (Local_122.f_197 != 2)
						{
							func_596(1);
						}
						unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 24);
					}
				}
			}
		}
		if (unk_0x2A3398C6222EB190(iLocal_578, 6))
		{
			if (unk_0x3A7B47D96E536F61("MP_Player_Inside_Bubble_Scene"))
			{
				unk_0xB3E27A9E412BBDF8("MP_Player_Inside_Bubble_Scene");
			}
			unk_0xFD69BDF108B32E5B("MP_Player_Outside_Bubble_Scene");
			unk_0xC84CB7879942C3BA("pennedIn");
			unk_0xF177BD202464664F("PennedInOut", 0, 0);
			unk_0xD804ACF2A7171150(&iLocal_578, 6);
		}
		if (!func_8(&uLocal_611))
		{
			func_363(&uLocal_611, 0, 0);
		}
		if (!unk_0x2A3398C6222EB190(iLocal_579, 7))
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 7);
			unk_0x18F1BFAF88AC511B(-1, "OOB_Start", "GTAO_FM_Events_Soundset", 0);
			iLocal_2044 = unk_0x6307C3D1D866114A();
			unk_0x18F1BFAF88AC511B(iLocal_2044, "OOB_Timer_Dynamic", "GTAO_FM_Events_Soundset", 0);
			unk_0x52FE0F2031364132(iLocal_2044, "Time", (unk_0xBBDA792448DB5A89(func_413()) / 1000f));
		}
		if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 5))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 5);
		}
		if (!unk_0x2A3398C6222EB190(iLocal_578, 12))
		{
			if (func_8(&uLocal_611))
			{
				if ((func_413() - func_322(&uLocal_611, 0, 0)) >= 0)
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						func_410((func_413() - func_322(&uLocal_611, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					}
					else
					{
						func_758();
					}
				}
				else
				{
					func_758();
				}
			}
		}
	}
	func_755();
	func_816();
}

void func_755()
{
	int iVar0;
	
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		return;
	}
	iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
	if (unk_0x3251C2B06497863C(iVar0, -1, 0) != unk_0x0031992CA618A445())
	{
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0))
		{
			if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
			{
				return;
			}
		}
	}
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(iLocal_579, 2))
	{
		return;
	}
	func_756();
	func_763();
}

void func_756()
{
	struct<4> Var0;
	
	if (!unk_0x2A3398C6222EB190(iLocal_578, 21))
	{
		if ((unk_0xD887E21676314450(0, 75) || unk_0x9148803485DEDF45(0, 75)) || unk_0x59ABF4F2C485FC38(0, 75))
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 21);
		}
	}
	else if (!unk_0x2A3398C6222EB190(iLocal_578, 22))
	{
		if (!unk_0x068C69D0643C4B95())
		{
			Var0 = { func_757() };
			func_597(&Var0, 30000);
			if (Local_122.f_197 != 2)
			{
				func_596(1);
			}
			unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 22);
		}
	}
}

struct<4> func_757()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_758()
{
	int iVar0;
	
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 1))
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(iLocal_578, 18))
	{
		unk_0xD804ACF2A7171150(&iLocal_578, 18);
	}
	unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
	unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 8);
	unk_0x936CA0C0DD22F11B(0);
	if (!unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
	{
		func_314();
		unk_0xCD7E92DE2BFA0B0D(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 1);
		Local_615.f_2 = 1119005524;
		Local_615.f_10 = unk_0x3D35F9864E4640B1();
		func_759(Local_615, func_760(1));
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
		}
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (unk_0x3B077EBCBD1ABF1F(iVar0))
				{
				}
				if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(iVar0)))
				{
					iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					unk_0xEA607D64503E7F21(unk_0x0031992CA618A445());
					unk_0xEA607D64503E7F21(iVar0);
					if (Local_122.f_197 == 2)
					{
						unk_0x31EFA4297B872C86(unk_0x0031992CA618A445(), 0, 0, 0, 0, 0, 0, 0, 0);
						unk_0x31EFA4297B872C86(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
						unk_0xD804ACF2A7171150(&iLocal_580, 2);
						unk_0xE8AFE63721D00A2E(0);
					}
					else
					{
						func_817(1);
					}
					if (!unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iVar0)))
					{
						unk_0x21E37FAB6C42ACCF(iVar0, 1, 0, -1);
					}
					else
					{
						unk_0x4FDBE36FF1E5DB69(iVar0, 1, 0, 0);
					}
					func_743(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 20);
				}
			}
			else
			{
				if (unk_0x2A3398C6222EB190(iLocal_580, 2))
				{
					unk_0x31EFA4297B872C86(unk_0x0031992CA618A445(), 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0xD804ACF2A7171150(&iLocal_580, 2);
				}
				unk_0xEA607D64503E7F21(unk_0x0031992CA618A445());
				unk_0x990879ED64ED4138(unk_0x0031992CA618A445(), 0);
				func_743(1);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 20);
			}
		}
		else
		{
			func_743(1);
			unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 14);
		}
		iLocal_2774 = func_322(&uLocal_631, 0, 0);
	}
	if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 5))
	{
		unk_0xD804ACF2A7171150(&(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1), 5);
		unk_0x03C4BA9F5A120DFE(iLocal_2044);
		unk_0xF2565A150D1CA964(iLocal_2044);
		unk_0xD804ACF2A7171150(&iLocal_579, 7);
	}
	unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 12);
}

void func_759(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1021925946;
	Param0.f_1 = unk_0x3D35F9864E4640B1();
	if (!iParam14 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Param0, 14, iParam14);
	}
}

int func_760(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
			if (func_1124(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_761()
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
	fVar0 = ((fVar1 + fVar2) + IntToFloat(unk_0x3AF262D7332EEDF5(0, 3)));
	if (unk_0x898811EA80D35DE2() - iLocal_2038) >= unk_0xF2DB717A73826179((60000f / fVar0))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_578, 15))
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 15);
		}
		iLocal_2038 = unk_0x898811EA80D35DE2();
	}
	else if (unk_0x2A3398C6222EB190(iLocal_578, 15))
	{
		unk_0xD804ACF2A7171150(&iLocal_578, 15);
	}
	if (func_762())
	{
		unk_0x3E2FA6F5B6CD4D51(0, 0, 0);
		unk_0x3E2FA6F5B6CD4D51(0, iVar3, iVar4);
		unk_0x71B09CD4E0DCABBB(0, 255, 0, 0);
	}
	else
	{
		unk_0x71B09CD4E0DCABBB(0, 255, 255, 255);
	}
}

bool func_762()
{
	return unk_0x2A3398C6222EB190(iLocal_578, 15);
}

void func_763()
{
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
}

void func_764()
{
	var uVar0;
	
	if (!unk_0x2A3398C6222EB190(iLocal_578, 14))
	{
		if ((Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 1 || Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 2) || (((func_402(unk_0x3D35F9864E4640B1()) && func_827(0)) && unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0)) && !func_917(1)))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
				{
					uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x3B077EBCBD1ABF1F(uVar0))
					{
						unk_0x5CBEDEFFD7D137BD(iVar0, 0, 0);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 14);
					}
				}
			}
		}
	}
	else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 >= 3 || unk_0x2A3398C6222EB190(iLocal_578, 31))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (unk_0x432757A9E7AAFA96(iVar0, 0))
				{
					if (unk_0x3B077EBCBD1ABF1F(iVar0))
					{
						unk_0x5CBEDEFFD7D137BD(iVar0, 1, 0);
						unk_0xD804ACF2A7171150(&iLocal_578, 14);
					}
				}
			}
		}
		else
		{
			unk_0xD804ACF2A7171150(&iLocal_578, 14);
		}
	}
}

int func_765(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_339(unk_0x3D35F9864E4640B1(), 0) || func_529(unk_0x3D35F9864E4640B1(), 0))
	{
		if (func_39(unk_0x3D35F9864E4640B1()) || func_43(unk_0x3D35F9864E4640B1()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x5D59DC9563118DFD() < iParam0)
	{
		if (bParam2)
		{
			func_767(sParam3, sParam4, 1);
		}
		if (func_716(26, -1))
		{
			func_714(26, -1);
		}
		return 1;
	}
	if (func_8(&(Global_1574385.f_18)))
	{
		if (!func_7(&(Global_1574385.f_18), 7500, 0))
		{
			return 0;
		}
		func_6(&(Global_1574385.f_18));
	}
	if (func_766())
	{
		if (bParam2)
		{
			func_767(sParam3, sParam4, 0);
		}
		if (func_716(26, -1))
		{
			func_714(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xEAFA0E77286423E5() < iParam0)
	{
		if (bParam2)
		{
			func_767(sParam3, sParam4, 1);
		}
		if (func_716(26, -1))
		{
			func_714(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_766()
{
	return unk_0x2A3398C6222EB190(Global_1574385.f_1, 0);
}

void func_767(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x2A3398C6222EB190(Global_1574385.f_1, 2) && !func_44(unk_0x3D35F9864E4640B1())) && !func_341(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x0BD3CCFB6C6CFA91(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x0BD3CCFB6C6CFA91(sParam1))
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
		func_123(66, sParam0, sParam1, 1, -1, 2);
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 2);
	}
}

void func_768(var uParam0)
{
	unk_0x7F165E259CFAC8B8(uParam0);
	unk_0x0596A24631CF28DB("HUD_MINI_GAME_SOUNDSET");
}

void func_769(int iParam0)
{
	if (func_42())
	{
		if (iParam0 == 1)
		{
			if (Global_2501777.f_4352 == -1)
			{
				Global_2501777.f_4352 = 60000;
			}
			func_141(&(Global_2501777.f_4350), 0, 0);
			if (Global_2501777.f_4355 == -1)
			{
				Global_2501777.f_4355 = 10000;
			}
			func_141(&(Global_2501777.f_4353), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_817(1);
		}
		if ((!unk_0xF4F91CD09D59F42E() && !func_771()) && !func_770(unk_0x3D35F9864E4640B1()))
		{
			Global_979817 = 0;
		}
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_8 = 0;
	}
}

int func_770(int iParam0)
{
	if (func_574(iParam0, 1))
	{
		if (Global_1593076[iParam0 /*647*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_771()
{
	return Global_2445582.f_720;
}

void func_772()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (func_774(&uVar0) && unk_0x8B0523D9EF9595C2(uVar0, "Veh_Modded_By_Player"))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = unk_0xA7871E29B06DA901(iVar1);
			if (func_1124(iVar2, 0, 1))
			{
				if (unk_0x9E69E04AC6AD5C49(iVar0, "Veh_Modded_By_Player") == unk_0x09A791318A38B63D(iVar2))
				{
					func_773(func_210(iVar2));
				}
			}
			iVar1++;
		}
	}
}

void func_773(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 1087503274;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	if (!iParam0 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 2, iParam0);
	}
}

int func_774(var uParam0)
{
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		*uParam0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (unk_0x496D18970B708258("bombdec1", 3))
		{
			if (unk_0x8B0523D9EF9595C2(*uParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x496D18970B708258("bombdec", 3))
		{
			if (unk_0x8B0523D9EF9595C2(*uParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x496D18970B708258("bombowner", 3))
		{
			if (unk_0x8B0523D9EF9595C2(*uParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_775(bool bParam0)
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

void func_776(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2457274 = func_527(unk_0x3D35F9864E4640B1());
		if (Global_2457274 == -1)
		{
			Global_2457274 = Global_1574385.f_4;
		}
		if (func_799(Global_2457274) == 0)
		{
			if (func_798(1) > 0)
			{
				func_797(26, -1);
			}
		}
		if (func_42())
		{
			func_769(0);
			func_796();
		}
		if (func_958(0))
		{
			iVar1 = func_48(2467, -1, 0);
			unk_0xD804ACF2A7171150(&iVar1, 0);
			func_796();
		}
		if (func_958(func_591(func_527(unk_0x3D35F9864E4640B1()))))
		{
			iVar1 = func_48(2467, -1, 0);
			unk_0xD804ACF2A7171150(&iVar1, func_591(func_527(unk_0x3D35F9864E4640B1())));
			func_796();
		}
		if (func_795())
		{
			func_796();
		}
		unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 0);
	}
	else
	{
		if ((!func_794() && !func_793()) && !func_792())
		{
			Global_2457274 = -1;
			func_714(26, -1);
		}
		else if (func_799(Global_2457274) == 0)
		{
			iVar0 = func_779(1);
			if (iVar0 > 0)
			{
				func_777(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_189(1929, 1, -1);
				func_777(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_716(26, -1))
		{
			Global_2457274 = -1;
			func_714(26, -1);
		}
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 0);
	}
}

void func_777(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_778(iParam0))
	{
		func_173(iParam0, iVar0);
	}
	else
	{
		func_177(iParam0, iVar0);
	}
}

int func_778(int iParam0)
{
	if (Global_1364938)
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

int func_779(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2456165 == 0)
	{
		return 0;
	}
	if (func_792())
	{
		if (unk_0xF4F91CD09D59F42E() || (func_791() || func_789()))
		{
			Global_2455118 = 1;
		}
	}
	Global_2456165 = 0;
	if (Global_1315679)
	{
		iVar0 = 1;
	}
	if (Global_2455118)
	{
		iVar0 = 1;
	}
	if (Global_2455117)
	{
		iVar0 = 1;
	}
	if (func_437(Global_103467.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2455042)
	{
		iVar0 = 1;
	}
	if (func_788(512))
	{
		iVar0 = 1;
	}
	if (func_787(128))
	{
		iVar0 = 1;
	}
	if (Global_1315703 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_706())
	{
		iVar0 = 0;
	}
	if (Global_2455604)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_785())
		{
			if (Global_1641087.f_97449 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = 0;
	}
	if (func_784())
	{
		iVar0 = 0;
	}
	if ((Global_2455118 || Global_2455117) || Global_1315679)
	{
		if (func_789())
		{
			iVar0 = 0;
		}
	}
	Global_2455604 = 0;
	Global_2455117 = 0;
	Global_2455118 = 0;
	Global_1315679 = 0;
	Global_2455042 = 0;
	func_782(&(Global_103467.f_1), 32);
	func_781(512);
	func_780(128);
	return iVar0;
}

void func_780(int iParam0)
{
	Global_103524 = (Global_103524 - (Global_103524 && iParam0));
}

void func_781(int iParam0)
{
	Global_103525 = (Global_103525 - (Global_103525 && iParam0));
}

void func_782(var uParam0, int iParam1)
{
	func_783(uParam0, iParam1);
}

void func_783(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_784()
{
	if (((Global_1574314 || Global_1574285) || func_342(unk_0x3D35F9864E4640B1(), 0)) || func_101())
	{
		return 1;
	}
	return 0;
}

int func_785()
{
	switch (func_786())
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

int func_786()
{
	return Global_2446355.f_1.f_2819;
}

bool func_787(int iParam0)
{
	return (Global_103524 && iParam0) != 0;
}

bool func_788(int iParam0)
{
	return (Global_103525 && iParam0) != 0;
}

int func_789()
{
	if (func_799(Global_2457274))
	{
		return 0;
	}
	if (func_790(unk_0x3D35F9864E4640B1(), 146))
	{
		return 1;
	}
	return 0;
}

int func_790(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_791()
{
	if (func_799(Global_2457274))
	{
		return 0;
	}
	if (func_40(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

bool func_792()
{
	return unk_0x2A3398C6222EB190(Global_1312423, 0);
}

bool func_793()
{
	return Global_1312822;
}

bool func_794()
{
	return Global_1312853;
}

int func_795()
{
	if (Global_2434915.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_796()
{
	if (func_795())
	{
		Global_2434915.f_933.f_16 = 1;
	}
}

void func_797(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x6B75D9DC60122244(0, iParam1);
			break;
		
		default:
			iVar1 = func_715(iParam1);
			iVar0 = unk_0x03CCEFDDDC599303(iVar1);
			if (!unk_0x2A3398C6222EB190(iVar0, iParam0))
			{
				unk_0xCD7E92DE2BFA0B0D(&iVar0, iParam0);
				unk_0x6B75D9DC60122244(iVar0, iParam1);
			}
			break;
	}
}

int func_798(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315703 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_706())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_785())
		{
			if (Global_1641087.f_97449 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_342(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = 0;
	}
	if (func_784())
	{
		iVar0 = 0;
	}
	Global_2456165 = 1;
	return iVar0;
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_10585)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_10587)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_10584)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_10588)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_10589)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_10590)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_10586)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_10591)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_10592)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_10593)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_10594)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_800(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 1);
	}
	Global_2501777.f_4714 = -1;
	bVar0 = (func_339(unk_0x3D35F9864E4640B1(), 0) && func_39(unk_0x3D35F9864E4640B1()));
	if (bParam6)
	{
		func_729(21, 1);
	}
	else
	{
		func_808(iParam0, -1);
		if (func_44(unk_0x3D35F9864E4640B1()))
		{
			Global_1574385.f_3 = iParam0;
		}
		else
		{
			func_807(iParam0);
		}
		Global_1574385.f_4 = -1;
		if (func_44(unk_0x3D35F9864E4640B1()))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 5);
		}
		if ((func_42() && !func_338()) || func_337(unk_0x3D35F9864E4640B1(), 21))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 4);
		}
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 17);
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 20);
		if (func_806(iParam0))
		{
			func_805();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_680(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x15007EAE63C7ECCF(fParam2);
			if (iParam0 == 146)
			{
				unk_0x438B2E6B2BAD6A0D(0);
				unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
				unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
			}
		}
		if (func_804(iParam0))
		{
			unk_0x438B2E6B2BAD6A0D(0);
			unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
			unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391044)
			{
				func_677(1);
				if (func_47(0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 9);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_718(1);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 12);
		}
		if (bParam5)
		{
			func_803();
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_801(iParam0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 21);
			}
		}
	}
	Global_2488466 = 1;
}

int func_801(int iParam0)
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
	if (func_802())
	{
		return 1;
	}
	return 0;
}

int func_802()
{
	switch (func_556())
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

void func_803()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4705), 0);
}

int func_804(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_40(unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_805()
{
	Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_209 = 0;
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4518), 1);
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_807(int iParam0)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/] = iParam0;
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_958(0) || func_958(func_591(iVar0)))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 2);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 2);
		}
	}
}

void func_809(bool bParam0)
{
	if (bParam0)
	{
		if (!func_38(unk_0x3D35F9864E4640B1(), 9))
		{
			if (func_36(unk_0x3D35F9864E4640B1()) != 0)
			{
				func_334(9);
			}
		}
	}
	else if (func_38(unk_0x3D35F9864E4640B1(), 9))
	{
		func_336(9);
	}
}

void func_810(int iParam0)
{
	if (!func_43(unk_0x3D35F9864E4640B1()))
	{
		if (iParam0 || func_36(unk_0x3D35F9864E4640B1()) != 0)
		{
			func_334(20);
			if (func_45(unk_0x3D35F9864E4640B1()))
			{
				if (!unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 8))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 8);
				}
			}
		}
	}
}

struct<4> func_811()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

struct<4> func_812()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

struct<4> func_813()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_814()
{
	unk_0x438B2E6B2BAD6A0D(5);
	func_675();
	unk_0x15007EAE63C7ECCF(1f);
	unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 8);
	func_815();
}

void func_815()
{
	if (Global_1776636)
	{
		if (unk_0x2A3398C6222EB190(Global_1776637, 0))
		{
			unk_0xD804ACF2A7171150(&Global_2509692, 0);
		}
		if (unk_0x2A3398C6222EB190(Global_1776637, 1))
		{
			unk_0xD804ACF2A7171150(&Global_2509692, 1);
		}
		if (unk_0x2A3398C6222EB190(Global_1776637, 5))
		{
			unk_0xD804ACF2A7171150(&Global_2509692, 5);
		}
		if (unk_0xD7D749DFCCD114B8(-355737150))
		{
			unk_0x84436CFB65E8F6EA(-355737150, 1, 0, 0);
		}
		if (unk_0xD7D749DFCCD114B8(-580979506))
		{
			unk_0x84436CFB65E8F6EA(-580979506, 1, 0, 0);
		}
		if (unk_0xD7D749DFCCD114B8(-1426452475))
		{
			unk_0x84436CFB65E8F6EA(-1426452475, 1, 0, 0);
		}
		if (unk_0xD7D749DFCCD114B8(745417724))
		{
			unk_0x84436CFB65E8F6EA(745417724, 1, 0, 0);
		}
		if (unk_0xD7D749DFCCD114B8(-1305304906))
		{
			unk_0x84436CFB65E8F6EA(-1305304906, 1, 0, 0);
		}
		if (unk_0xD7D749DFCCD114B8(-1543175077))
		{
			unk_0x84436CFB65E8F6EA(-1543175077, 1, 0, 0);
		}
		if (unk_0xD7D749DFCCD114B8(-811770997))
		{
			unk_0x84436CFB65E8F6EA(-811770997, 1, 0, 0);
		}
		Global_1776637 = 0;
	}
	Global_1776636 = 0;
}

void func_816()
{
	unk_0xC9621A9AD282CC14(0, 69, 1);
	unk_0xC9621A9AD282CC14(0, 70, 1);
	unk_0xC9621A9AD282CC14(0, 68, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 91, 1);
	unk_0xC9621A9AD282CC14(0, 92, 1);
	unk_0xC9621A9AD282CC14(0, 24, 1);
	unk_0xC9621A9AD282CC14(0, 257, 1);
	unk_0xC9621A9AD282CC14(0, 37, 1);
	if (Local_122.f_197 != 2)
	{
		unk_0xC9621A9AD282CC14(0, 99, 1);
		unk_0xC9621A9AD282CC14(0, 100, 1);
	}
}

void func_817(bool bParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (!func_42())
		{
			if (func_1124(unk_0x3D35F9864E4640B1(), 1, 0))
			{
				unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 342, 0);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 122, 0);
			}
			unk_0xBE81A0FD72EB3284(unk_0x3D35F9864E4640B1(), 1f);
			unk_0x62503A82AC79FF89(0);
			unk_0xE8AFE63721D00A2E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0x5C72983073515174(0, 0);
				}
			}
		}
		else
		{
			if (func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
			{
				unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 0);
				unk_0x64517F908482FA52(unk_0x0031992CA618A445(), joaat("weapon_unarmed"), 1);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 342, 1);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 122, 1);
				unk_0xBE81A0FD72EB3284(unk_0x3D35F9864E4640B1(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x5C72983073515174(1, 0);
				}
			}
			unk_0x62503A82AC79FF89(1);
			unk_0xE8AFE63721D00A2E(0);
		}
	}
}

char* func_818()
{
	char* sVar0;
	
	switch (Local_122.f_197)
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

struct<4> func_819()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

char* func_820()
{
	char* sVar0;
	
	switch (Local_122.f_197)
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

int func_821(int iParam0)
{
	int iVar0;
	
	if (unk_0x496D18970B708258("MPBitset", 3))
	{
		if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
		}
		if (unk_0x2A3398C6222EB190(iVar0, 10))
		{
			return 0;
		}
	}
	return 1;
}

int func_822(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if ((iParam0 == joaat("rhino") || iParam0 == joaat("dump")) || iParam0 == joaat("limo2"))
	{
		iVar0 = 0;
	}
	switch (Local_122.f_197)
	{
		case 0:
			break;
		
		case 2:
			if (((!unk_0x34C854420D02F57B(iParam0) && !unk_0x01301B632ADFA6CA(iParam0)) && !func_823(iParam0)) || unk_0x1B9B48622A4D3FC0(iParam0))
			{
				iVar0 = 0;
			}
			break;
	}
	if (Global_1574385.f_12 != 0 && iParam0 == Global_1574385.f_12)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chimera"):
			return 1;
		
		default:
	}
	return 0;
}

void func_824(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 4);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 4);
	}
}

struct<4> func_825()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

void func_826()
{
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0)
	{
		unk_0x15007EAE63C7ECCF(0f);
		unk_0x438B2E6B2BAD6A0D(0);
		unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
		unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 8);
	}
}

int func_827(bool bParam0)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (Local_122.f_197 == 2)
	{
		if (func_36(unk_0x3D35F9864E4640B1()) < 2)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			Var4 = { func_460() };
			fVar0 = unk_0x1410333E912D4EC6(Var1, Var4, 0);
			fVar7 = (func_461() / 2f);
			if (fVar0 <= fVar7)
			{
				if (unk_0x229F35E7CDDBF757((Var4.f_2 - Var1.f_2)) <= fVar7)
				{
					return 1;
				}
			}
		}
	}
	else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (fLocal_608 < 10f)
		{
			Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			fVar0 = unk_0x1410333E912D4EC6(Var1, Local_601, 0);
			if (fVar0 <= fLocal_608)
			{
				if (unk_0x229F35E7CDDBF757((Local_601.f_2 - Var1.f_2)) <= 10f)
				{
					return 1;
				}
			}
		}
		else
		{
			fVar0 = func_406(unk_0x0031992CA618A445(), Local_601, 1);
			if (fVar0 <= fLocal_608)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_828(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x5FFD0DFFE53FB210(uParam0);
	if (!iParam2 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam2);
	}
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam3);
}

char* func_829()
{
	char* sVar0;
	
	switch (Local_122.f_197)
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

int func_830()
{
	if (Local_122.f_197 != 2)
	{
		return 1;
	}
	else if (func_851())
	{
		return 1;
	}
	else if (func_36(unk_0x3D35F9864E4640B1()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_831(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 != iParam0)
	{
		func_844(-1);
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 = iParam0;
		if (func_843() != -1)
		{
			func_842(-1);
		}
		if (func_841() != -1)
		{
			func_840(-1);
		}
		func_909(iParam2);
		func_838(iParam0);
		if (!func_684(iParam0))
		{
			fVar0 = func_683(iParam0);
			if (fVar0 != 1f)
			{
				func_680(fVar0);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 1);
			}
		}
		if (!func_687(iParam0) || iParam3)
		{
			if (func_685(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x438B2E6B2BAD6A0D(0);
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
					unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 0);
			}
			else if (unk_0x58288C08A90CC7D0() < 5)
			{
				unk_0x15007EAE63C7ECCF(1f);
				unk_0x438B2E6B2BAD6A0D(5);
			}
		}
		if (func_42())
		{
			func_334(27);
		}
		if (bParam1)
		{
			if (!func_333())
			{
				func_677(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x2A3398C6222EB190(Global_2501777.f_4512, 1) || unk_0x2A3398C6222EB190(Global_2501777.f_4512, 4)) || unk_0x2A3398C6222EB190(Global_2501777.f_4512, 0))
			{
				func_213(6);
			}
			func_837();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x326E498BE1EE12A8(3, 0);
			unk_0x326E498BE1EE12A8(5, 0);
		}
		if (func_45(unk_0x3D35F9864E4640B1()) && func_39(unk_0x3D35F9864E4640B1()))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 8);
		}
		func_833();
		if (func_832(iParam0))
		{
			unk_0x326E498BE1EE12A8(3, 0);
			unk_0x326E498BE1EE12A8(5, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 6);
		}
	}
}

int func_832(int iParam0)
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

void func_833()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_836();
	iVar2 = func_108(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if (func_218(iVar1, iVar2, 1) || func_834(iVar1, unk_0x3D35F9864E4640B1()))
			{
				unk_0xEC03B416811242C7(unk_0x3D35F9864E4640B1(), iVar1, uVar3);
				unk_0xEC03B416811242C7(iVar1, unk_0x3D35F9864E4640B1(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_834(int iParam0, int iParam1)
{
	if (func_120(iParam0, 1) && func_120(iParam1, 1))
	{
		return (func_835(iParam0) == func_108(iParam1) || func_835(iParam1) == func_108(iParam0));
	}
	return 0;
}

int func_835(int iParam0)
{
	if (func_120(iParam0, 1))
	{
		return Global_1623799[func_108(iParam0) /*488*/].f_11.f_404;
	}
	return func_364();
}

int func_836()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_158();
	if (iVar0 != func_364())
	{
		if (func_1124(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x2A3398C6222EB190(Global_1623799[iVar1 /*488*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_837()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 1))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 4))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 4);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 6))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 6);
	}
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 0);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 2);
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_553 = 0;
	if (Global_2501777.f_4514 > 0)
	{
		unk_0x438B2E6B2BAD6A0D(Global_2501777.f_4514);
	}
	Global_2501777.f_4513 = 0;
}

void func_838(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_48(3770, -1, 0);
	iVar1 = func_839(iParam0);
	if (iVar1 != -1)
	{
		unk_0xCD7E92DE2BFA0B0D(&iVar0, iVar1);
		func_137(3770, iVar0, -1, 1, 0);
	}
}

int func_839(int iParam0)
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

void func_840(int iParam0)
{
	if (Global_2501777.f_4867.f_153 != iParam0)
	{
		Global_2501777.f_4867.f_153 = iParam0;
	}
}

int func_841()
{
	return Global_2501777.f_4867.f_153;
}

void func_842(int iParam0)
{
	if (Global_2501777.f_4867.f_152 != iParam0)
	{
		Global_2501777.f_4867.f_152 = iParam0;
	}
}

int func_843()
{
	return Global_2501777.f_4867.f_152;
}

void func_844(int iParam0)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_31 = iParam0;
}

void func_845()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0x2A3398C6222EB190(iLocal_579, 9))
	{
		if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 9);
		}
	}
	if (Local_122.f_0 != 4)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
			{
				iVar4 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
				iVar5 = unk_0xD33F4BC17EB987E5(iVar4);
				if (!func_342(iVar4, 0))
				{
					if (Local_321[iVar0 /*8*/].f_7 == 0)
					{
						if (iVar0 != unk_0x43B24C247F35B6BC())
						{
							if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 0))
							{
								iVar1++;
							}
						}
						if (!func_44(iVar4))
						{
							iVar2++;
						}
					}
					if (!unk_0x2A3398C6222EB190(iLocal_579, 10))
					{
						if (!unk_0x2A3398C6222EB190(iLocal_579, 9))
						{
							if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 3))
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_579, 9);
							}
						}
					}
					if (iVar0 != unk_0x43B24C247F35B6BC())
					{
						if (Local_122.f_197 == 0 || Local_122.f_197 == 2)
						{
							if (!unk_0x2A3398C6222EB190(uLocal_2772, iVar0))
							{
								unk_0x294ACF7B5F4EB4B4(iVar4, 0);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_2772, iVar0);
							}
						}
						if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 == 2)
						{
							if (Local_321[iVar0 /*8*/].f_7 == 2)
							{
								if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
								{
									if (!unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 6) && !func_850(unk_0x0031992CA618A445(), iVar5))
									{
										if (!unk_0x2A3398C6222EB190(iLocal_582, iVar0))
										{
											if (!unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 1))
											{
												unk_0xCD7E92DE2BFA0B0D(&iLocal_582, iVar0);
												func_848(iVar4, 441, 1);
												if (Local_122.f_197 == 2)
												{
													func_846(iVar4, 1, 1);
												}
											}
										}
										else if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 1))
										{
											unk_0xD804ACF2A7171150(&iLocal_582, iVar0);
											func_848(iVar4, 441, 0);
											if (Local_122.f_197 == 2)
											{
												func_846(iVar4, 1, 0);
											}
										}
									}
								}
							}
							else if (unk_0x2A3398C6222EB190(iLocal_582, iVar0))
							{
								unk_0xD804ACF2A7171150(&iLocal_582, iVar0);
								func_848(iVar4, 441, 0);
								if (Local_122.f_197 == 2)
								{
									func_846(iVar4, 1, 0);
								}
							}
						}
						else if (unk_0x2A3398C6222EB190(iLocal_582, iVar0))
						{
							unk_0xD804ACF2A7171150(&iLocal_582, iVar0);
							func_848(iVar4, 441, 0);
							if (Local_122.f_197 == 2)
							{
								func_846(iVar4, 1, 0);
							}
						}
						if (Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_7 > 0)
						{
							if (!unk_0x2A3398C6222EB190(uLocal_583, iVar0) && !unk_0x2A3398C6222EB190(Local_122.f_1, 3))
							{
								if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 9))
								{
									unk_0x56AE5027D2067D0B(iVar5, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_583, iVar0);
									if (unk_0x90219307C9D2728D(iVar5, 0))
									{
										iVar3 = unk_0xCFA31F1E461A6BB5(iVar5, 0);
										unk_0x56AE5027D2067D0B(iVar3, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									}
								}
							}
							else if (!unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 9) || unk_0x2A3398C6222EB190(Local_122.f_1, 3))
							{
								unk_0x8974265328B0DA68(iVar5, 0f);
								unk_0xD804ACF2A7171150(&iLocal_583, iVar0);
								if (unk_0x90219307C9D2728D(iVar5, 0))
								{
									iVar3 = unk_0xCFA31F1E461A6BB5(iVar5, 0);
									unk_0x8974265328B0DA68(iVar3, 0f);
								}
							}
						}
						if (Local_122.f_197 == 0 || Local_122.f_197 == 2)
						{
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
							{
								if (!unk_0x8682D8A6269E52C9(iVar5))
								{
									if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 8))
									{
										if (!unk_0x2A3398C6222EB190(uLocal_584, iVar0))
										{
											if (!unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 8))
											{
												if (!func_850(unk_0x0031992CA618A445(), iVar5))
												{
													if (!unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 11))
													{
														unk_0xCD7E92DE2BFA0B0D(&iLocal_584, iVar0);
														unk_0xCD7E92DE2BFA0B0D(&uLocal_585, iVar4);
														unk_0x294ACF7B5F4EB4B4(iVar4, 1);
													}
												}
											}
										}
										else if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 8))
										{
											unk_0xD804ACF2A7171150(&iLocal_584, iVar0);
											unk_0xD804ACF2A7171150(&uLocal_585, iVar4);
											unk_0x294ACF7B5F4EB4B4(iVar4, 0);
										}
										else if (unk_0x2A3398C6222EB190(Local_321[iVar0 /*8*/].f_1, 11))
										{
											unk_0xD804ACF2A7171150(&iLocal_584, iVar0);
											unk_0xD804ACF2A7171150(&uLocal_585, iVar4);
											unk_0x294ACF7B5F4EB4B4(iVar4, 0);
										}
										else if (func_850(unk_0x0031992CA618A445(), iVar5))
										{
											unk_0xD804ACF2A7171150(&iLocal_584, iVar0);
											unk_0xD804ACF2A7171150(&uLocal_585, iVar4);
											unk_0x294ACF7B5F4EB4B4(iVar4, 0);
										}
									}
									else if (unk_0x2A3398C6222EB190(iLocal_584, iVar0))
									{
										unk_0x294ACF7B5F4EB4B4(iVar4, 0);
										unk_0xD804ACF2A7171150(&iLocal_584, iVar0);
										unk_0xD804ACF2A7171150(&uLocal_585, iVar4);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_2039 != iVar1)
		{
			iLocal_2039 = iVar1;
		}
		if (iLocal_2771 != iVar2)
		{
			iLocal_2771 = iVar2;
		}
	}
}

void func_846(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_681())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_847(iParam0))
	{
		if (bParam2)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = unk_0xFFDE6A3A0108B7CB();
			Global_2415153.f_444[iVar0] = iParam1;
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = -1;
		}
	}
}

int func_847(int iParam0)
{
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_609[iParam0]) || Global_2415153.f_609[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		return 1;
	}
	return 0;
}

void func_848(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_364())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_681())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_576[iParam0]) || Global_2415153.f_576[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam2)
		{
			if (!unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_849();
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_411[iVar0] = uVar1;
			Global_2415153.f_576[iParam0] = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_849();
			}
			unk_0xD804ACF2A7171150(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_576[iParam0] = -1;
		}
	}
}

void func_849()
{
	Global_2415153.f_1004 = 1;
}

bool func_850(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x90219307C9D2728D(iParam0, 0) || !unk_0x90219307C9D2728D(iParam1, 0))
	{
		return 0;
	}
	return unk_0xCFA31F1E461A6BB5(iParam0, 0) == unk_0xCFA31F1E461A6BB5(iParam1, 0);
}

int func_851()
{
	if (func_120(unk_0x3D35F9864E4640B1(), 1))
	{
		if (unk_0x3D35F9864E4640B1() == func_359())
		{
			return 1;
		}
		else if (func_852(unk_0x3D35F9864E4640B1(), func_359(), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_852(int iParam0, int iParam1, bool bParam2)
{
	return func_853(iParam0, iParam1, bParam2, 1);
}

int func_853(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_364() && iParam0 != func_364())
	{
		if (!bParam2)
		{
			if (func_855(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1623799[iParam0 /*488*/].f_11 != func_364())
		{
			if (iParam1 == Global_1623799[iParam0 /*488*/].f_11)
			{
				return func_854(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_854(int iParam0, int iParam1)
{
	if (func_121(iParam0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1;
	}
	return 0;
}

int func_855(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_364())
	{
		if (iParam0 != func_364())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 != func_364())
			{
				if (Global_1623799[iParam0 /*488*/].f_11 == iParam0)
				{
					if (Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_856(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_528(unk_0x3D35F9864E4640B1());
	if (bParam2 || func_130(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1779238 = iVar0;
		if (func_139(iVar0))
		{
			Global_1779238.f_1 = 4;
		}
		else if (func_901(iVar0))
		{
			Global_1779238.f_1 = 5;
		}
		else if (func_133(iVar0, 0))
		{
			Global_1779238.f_1 = 2;
			if (func_132(iVar0))
			{
				Global_1779238.f_1 = 3;
			}
		}
		else
		{
			Global_1779238.f_1 = 1;
		}
		if (func_158() != func_364())
		{
			Global_1779238.f_4 = func_900(func_158());
			Global_1779238.f_5 = func_899(func_158());
		}
		if (func_220() != func_364())
		{
			func_157(func_220(), &(Global_1779238.f_6), &(Global_1779238.f_7));
		}
		Global_1779238.f_9 = unk_0x6239D1A379D387A4();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1779238.f_27 = 1;
			Global_1779238.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1779238.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1779238.f_40 = func_151(iParam1);
			Global_1779238.f_41 = func_898();
			Global_1779238.f_42 = func_269(unk_0x3D35F9864E4640B1(), iParam1);
			Global_1779238.f_44 = func_897(unk_0x3D35F9864E4640B1(), iParam1);
		}
	}
	else if (func_128(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1779353 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1779353 = iParam0 + 1;
		}
		else
		{
			Global_1779353 = func_896(unk_0x3D35F9864E4640B1());
		}
		switch (iVar0)
		{
			case 225:
				if (func_895(unk_0x3D35F9864E4640B1()) == 0)
				{
					Global_1779353.f_1 = 0;
				}
				else
				{
					Global_1779353.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1779353.f_1 = 2;
				break;
			
			case 227:
				Global_1779353.f_1 = 3;
				break;
		}
		Global_1779353.f_21 = 1;
		Global_1779353.f_22 = 1;
		if (func_158() != func_364())
		{
			Global_1779353.f_4 = func_900(func_158());
			Global_1779353.f_5 = func_899(func_158());
		}
		if (func_220() != func_364())
		{
			func_157(func_220(), &(Global_1779353.f_4), &(Global_1779353.f_5));
		}
		Global_1779353.f_8 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779353.f_20 = iParam0;
		}
	}
	else if (func_129(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1779291 = iVar0;
		Global_1779238.f_1 = 1;
		if (func_158() != func_364())
		{
			Global_1779291.f_4 = func_900(func_158());
			Global_1779291.f_5 = func_899(func_158());
		}
		if (func_220() != func_364())
		{
			func_157(func_220(), &(Global_1779291.f_6), &(Global_1779291.f_7));
		}
		Global_1779291.f_9 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779291.f_21 = iParam0;
		}
	}
	else if (func_127(iVar0))
	{
		Global_1779396 = iVar0;
		Global_1779396.f_1 = iParam0;
		Global_1779396.f_21 = 1;
		Global_1779396.f_22 = 1;
		if (func_158() != func_364())
		{
			Global_1779396.f_4 = func_900(func_158());
			Global_1779396.f_5 = func_899(func_158());
		}
		if (func_220() != func_364())
		{
			func_157(func_220(), &(Global_1779396.f_4), &(Global_1779396.f_5));
		}
		Global_1779396.f_8 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779396.f_20 = iParam0;
		}
		Global_1779396.f_27 = func_893(func_50(), 5);
		Global_1779396.f_28 = func_892(func_246(unk_0x3D35F9864E4640B1()));
		Global_1779396.f_29 = func_48(6086, -1, 0);
		Global_1779396.f_30 = func_48(6082, -1, 0);
		Global_1779396.f_31 = func_48(6083, -1, 0);
		Global_1779396.f_32 = func_48(6085, -1, 0);
		Global_1779396.f_33 = func_48(6084, -1, 0);
		Global_1779396.f_34 = func_48(6087, -1, 0);
		Global_1779396.f_7 = func_890();
		Global_1779396.f_51 = func_892(bParam4);
	}
	else
	{
		if (func_158() != func_364())
		{
			Global_1779220 = func_900(func_158());
			Global_1779220.f_1 = func_899(func_158());
		}
		Global_1779220.f_5 = unk_0x6239D1A379D387A4();
		Global_1779220.f_13 = func_889();
		Global_1779220.f_15 = 0;
		if (func_156(1))
		{
			if (func_220() == func_158())
			{
				Global_1779220.f_15 = 1;
			}
		}
		if (func_888())
		{
			Global_1779353.f_28 = 1;
		}
		if ((func_887() || func_886()) || func_885())
		{
			Global_1779353.f_30 = 1;
		}
		if (func_883(func_884(joaat("trailersmall2"))))
		{
			Global_1779353.f_32 = 1;
		}
		if (func_865(func_882(joaat("caddy"))))
		{
			Global_1779353.f_31 = 1;
		}
		if (func_864(unk_0x3D35F9864E4640B1()) || func_863(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_29 = 1;
		}
		if (func_862(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_33 = 1;
			Global_1779353.f_34 = 1;
		}
		if (func_861(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_36 = 1;
		}
		if (func_860(0, unk_0x3D35F9864E4640B1()) == 1)
		{
			Global_1779353.f_35 = 1;
		}
		if (func_859(unk_0x3D35F9864E4640B1(), 3, &uVar1))
		{
			Global_1779353.f_37 = 1;
		}
		if (func_859(unk_0x3D35F9864E4640B1(), 7, &uVar1))
		{
			Global_1779353.f_38 = 1;
		}
		if (func_858(unk_0x3D35F9864E4640B1()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_857(unk_0x3D35F9864E4640B1(), iVar2);
				if (func_266(unk_0x3D35F9864E4640B1(), iVar3, 0))
				{
					Global_1779353.f_39 = 1;
				}
				if (func_266(unk_0x3D35F9864E4640B1(), iVar3, 2))
				{
					Global_1779353.f_40 = 1;
				}
				if (func_266(unk_0x3D35F9864E4640B1(), iVar3, 1))
				{
					Global_1779353.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_857(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_261(Global_1593076[iParam0 /*647*/].f_259.f_154[iParam1 /*12*/]))
	{
		uVar0 = Global_1593076[iParam0 /*647*/].f_259.f_154[iParam1 /*12*/];
	}
	return uVar0;
}

int func_858(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_859(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_364())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_860(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_860(int iParam0, int iParam1)
{
	if (iParam1 == func_364())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 0))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 3))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 6))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 9))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 12))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 15))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 18))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 21))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 1))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 4))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 7))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 10))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 13))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 16))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 19))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 22))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 2))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 5))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 8))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 11))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 14))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 17))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 20))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 23))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_861(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 7);
}

bool func_862(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 8);
}

bool func_863(int iParam0)
{
	if (iParam0 == func_364())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 11);
}

bool func_864(int iParam0)
{
	if (iParam0 == func_364())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 10);
}

int func_865(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_881(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_879(11));
		func_878(iVar1, &iVar0, 1);
		iVar2 = func_881(func_867(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_48(func_866(4, iVar0), -1, 0);
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

int func_866(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
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
			switch (iParam1)
			{
				case 159:
					return 5904;
				
				case 160:
					return 5911;
				
				case 161:
					return 5918;
				
				case 162:
					return 5925;
				
				case 163:
					return 5932;
				
				case 164:
					return 5939;
				
				case 165:
					return 5946;
				
				case 166:
					return 5953;
				
				case 167:
					return 5960;
				
				case 168:
					return 5967;
				
				case 169:
					return 5974;
				
				case 170:
					return 5981;
				
				case 171:
					return 5988;
				
				case 172:
					return 5995;
				
				case 173:
					return 6002;
				
				case 174:
					return 6009;
				
				case 175:
					return 6016;
				
				case 176:
					return 6023;
				
				case 177:
					return 6030;
				
				case 178:
					return 6037;
				
				case 179:
					return 6044;
				
				case 180:
					return 6051;
				
				case 181:
					return 6058;
				
				case 182:
					return 6065;
				
				case 183:
					return 6072;
				
				default:
			}
			break;
		
		case 2:
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
					return 4107;
				
				case 101:
					return 4115;
				
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
					return 4267;
				
				case 121:
					return 4275;
				
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
					return 4427;
				
				case 141:
					return 4435;
				
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
			switch (iParam1)
			{
				case 159:
					return 5905;
				
				case 160:
					return 5912;
				
				case 161:
					return 5919;
				
				case 162:
					return 5926;
				
				case 163:
					return 5933;
				
				case 164:
					return 5940;
				
				case 165:
					return 5947;
				
				case 166:
					return 5954;
				
				case 167:
					return 5961;
				
				case 168:
					return 5968;
				
				case 169:
					return 5975;
				
				case 170:
					return 5982;
				
				case 171:
					return 5989;
				
				case 172:
					return 5996;
				
				case 173:
					return 6003;
				
				case 174:
					return 6010;
				
				case 175:
					return 6017;
				
				case 176:
					return 6024;
				
				case 177:
					return 6031;
				
				case 178:
					return 6038;
				
				case 179:
					return 6045;
				
				case 180:
					return 6052;
				
				case 181:
					return 6059;
				
				case 182:
					return 6066;
				
				case 183:
					return 6073;
				
				default:
			}
			break;
		
		case 3:
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
					return 4108;
				
				case 101:
					return 4116;
				
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
					return 4268;
				
				case 121:
					return 4276;
				
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
					return 4428;
				
				case 141:
					return 4436;
				
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
			switch (iParam1)
			{
				case 159:
					return 5906;
				
				case 160:
					return 5913;
				
				case 161:
					return 5920;
				
				case 162:
					return 5927;
				
				case 163:
					return 5934;
				
				case 164:
					return 5941;
				
				case 165:
					return 5948;
				
				case 166:
					return 5955;
				
				case 167:
					return 5962;
				
				case 168:
					return 5969;
				
				case 169:
					return 5976;
				
				case 170:
					return 5983;
				
				case 171:
					return 5990;
				
				case 172:
					return 5997;
				
				case 173:
					return 6004;
				
				case 174:
					return 6011;
				
				case 175:
					return 6018;
				
				case 176:
					return 6025;
				
				case 177:
					return 6032;
				
				case 178:
					return 6039;
				
				case 179:
					return 6046;
				
				case 180:
					return 6053;
				
				case 181:
					return 6060;
				
				case 182:
					return 6067;
				
				case 183:
					return 6074;
				
				default:
			}
			break;
		
		case 4:
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
					return 3321;
				
				case 78:
					return 3329;
				
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
			switch (iParam1)
			{
				case 159:
					return 5907;
				
				case 160:
					return 5914;
				
				case 161:
					return 5921;
				
				case 162:
					return 5928;
				
				case 163:
					return 5935;
				
				case 164:
					return 5942;
				
				case 165:
					return 5949;
				
				case 166:
					return 5956;
				
				case 167:
					return 5963;
				
				case 168:
					return 5970;
				
				case 169:
					return 5977;
				
				case 170:
					return 5984;
				
				case 171:
					return 5991;
				
				case 172:
					return 5998;
				
				case 173:
					return 6005;
				
				case 174:
					return 6012;
				
				case 175:
					return 6019;
				
				case 176:
					return 6026;
				
				case 177:
					return 6033;
				
				case 178:
					return 6040;
				
				case 179:
					return 6047;
				
				case 180:
					return 6054;
				
				case 181:
					return 6061;
				
				case 182:
					return 6068;
				
				case 183:
					return 6075;
				
				default:
			}
			break;
		
		case 5:
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
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
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
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
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
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
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
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
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
					return 3322;
				
				case 78:
					return 3330;
				
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
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3325;
				
				case 78:
					return 3333;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			break;
		
		case 7:
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
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
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
					return 3324;
				
				case 78:
					return 3332;
				
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
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_867(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 184)
	{
		iVar0 = 0;
		while (iVar0 < 13)
		{
			if (iParam0 >= func_879(iVar0) && iParam0 < func_868(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_868(int iParam0)
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
		
		case 12:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_877(iParam0);
		return func_876(iVar0);
	}
	return (func_869(iParam0, -1) * iParam0 + 1);
}

int func_869(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_872(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_871(iParam1))
			{
				return 0;
			}
			else if (func_870(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 <= 116 && iParam1 > 0)
			{
				if (Global_1049495[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 10)
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
		
		case 12:
			return 20;
			break;
	}
	return 0;
}

int func_870(int iParam0, int iParam1)
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

int func_871(int iParam0)
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

int func_872(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_873(unk_0x3D35F9864E4640B1(), 0);
	}
	if (bParam1)
	{
		if (func_873(unk_0x3D35F9864E4640B1(), 0))
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

bool func_873(int iParam0, bool bParam1)
{
	if (Global_1592922 != func_364())
	{
		if (!func_875(Global_1592922))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x3D35F9864E4640B1() != Global_1592922)
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[Global_1592922 /*399*/].f_204, 24) || func_874(Global_1592922))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 24);
}

int func_874(int iParam0)
{
	if (iParam0 != func_364())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 9);
	}
	return 0;
}

int func_875(int iParam0)
{
	if (iParam0 != func_364())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 2);
	}
	return 0;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_877(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_878(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9364)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1776225[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_879(int iParam0)
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
		
		case 12:
			return 159;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_877(iParam0);
		return func_880(iVar0);
	}
	return (func_869(iParam0, -1) * iParam0);
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_881(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_50();
	}
	if (iParam0 == 7 && !Global_262145.f_16102)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_877(iParam0);
		if (iVar1 == 0 && func_48(5372, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1365065[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2536194[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 13)
		{
			return 0;
		}
		return Global_2536117[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_882(int iParam0)
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

int func_883(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_878(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_48(func_866(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_885()
{
	return func_48(5359, -1, 0) != 0;
}

bool func_886()
{
	return func_48(3807, -1, 0) != 0;
}

bool func_887()
{
	return func_48(3210, -1, 0) != 0;
}

bool func_888()
{
	return func_48(5358, -1, 0) != 0;
}

int func_889()
{
	int iVar0;
	
	iVar0 = func_158();
	if (iVar0 != func_364())
	{
		return Global_1623799[iVar0 /*488*/].f_11.f_92;
	}
	return 0;
}

int func_890()
{
	int iVar0;
	
	if (func_154())
	{
		return 4;
	}
	else if (func_150())
	{
		if (func_293(unk_0x3D35F9864E4640B1()))
		{
			return 8;
		}
		return 6;
	}
	if (func_205(1))
	{
		iVar0 = func_891(unk_0x3D35F9864E4640B1());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_156(1))
	{
		if (func_293(func_158()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_891(int iParam0)
{
	if (func_120(iParam0, 1))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_371;
	}
	return -1;
}

int func_892(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_893(int iParam0, int iParam1)
{
	return func_48(func_894(iParam1), iParam0, 0);
}

int func_894(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3877;
		
		case 1:
			return 3906;
		
		case 2:
			return 3910;
		
		case 3:
			return 3914;
		
		case 4:
			return 3918;
		
		case 5:
			return 5429;
		
		default:
	}
	return 3877;
}

int func_895(int iParam0)
{
	if (func_339(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_173;
	}
	return -1;
}

int func_896(int iParam0)
{
	if (func_528(iParam0) == 225 || func_528(iParam0) == 226)
	{
		return func_895(iParam0);
	}
	return -1;
}

int func_897(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (func_261(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_898()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_268(unk_0x3D35F9864E4640B1(), iVar0))
		{
			unk_0xCD7E92DE2BFA0B0D(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_899(int iParam0)
{
	if (iParam0 == func_364())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_900(int iParam0)
{
	if (iParam0 == func_364())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[0];
}

int func_901(int iParam0)
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

void func_902(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_903("kwUfKUus6EuQyNSL8KpY-w");
					func_903("yMTOFLfO2UKwzKrmgPP7kg");
					func_903("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_903("tP5HSeCA0UiHnkRzakdO2Q");
					func_903("uEkrqoerQEmQ0uZRtp4rkw");
					func_903("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_903("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_903("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_903("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_903("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_903("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_903("uEkrqoerQEmQ0uZRtp4rkw");
					func_903("92t91kL3Wkqvl2Kc82cNSA");
					func_903("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_903("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_903("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_903("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_903("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_903("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_903("fOfm7nzMLkav0ldcSCNAzA");
					func_903("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_903("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_903("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_903("Ma78E44OMkGfYPmCPZXUNA");
					func_903("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_903("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_903("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_903("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_903("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_903("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_903("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_903("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_903("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_903("3AAj-muvN0iHI5IMyGlboA");
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
							func_903("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_903("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_903("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_903("fOfm7nzMLkav0ldcSCNAzA");
							func_903("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_903("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_903("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_903("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_903("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_903("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_903("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_903("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_903("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_903("fOfm7nzMLkav0ldcSCNAzA");
							func_903("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_903("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_903("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_903("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_903("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_903("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_903("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_903("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_903("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_903("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_903("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_903("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_903("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_903("aGBjo2rKi0yMDLl3a2ATGA");
									func_903("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_903("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_903("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_903("f2lnL6wZPkGWUowu0yLm1Q");
									func_903("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_903("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_903("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_903("W-OJzHlM-0ym9PsIASYZtw");
									func_903("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_903("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_903("TjGz31AMYE6bGCjAIitu6w");
									func_903("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_903("QmlvLMLCwkOvoZlkAstYxw");
									func_903("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_903("BktATxH9R0Wp2x0kWSbqjw");
									func_903("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_903("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_903("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_903("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_903("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_903("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_903("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_903("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_903("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_903("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_903("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_903(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x2A3398C6222EB190(Global_2359720[iVar1 /*26*/].f_12, 11))
		{
			if (func_904(&(Global_2359720[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x2A3398C6222EB190(Global_2359720[iVar1 /*26*/].f_13, 26))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2359720[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_904(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_906(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_905(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_905(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_906(uParam0);
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

int func_906(var uParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_908(uParam0->f_1))
	{
		if (func_907(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x2A3398C6222EB190(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xB3404E397FF56B3B(&(Global_794643.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x2A3398C6222EB190(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x2A3398C6222EB190(Global_794643.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xB3404E397FF56B3B(&(Global_794643.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x2A3398C6222EB190(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xB3404E397FF56B3B(&(Global_907640.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x2A3398C6222EB190(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x2A3398C6222EB190(Global_907640.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xB3404E397FF56B3B(&(Global_907640.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x3D35F9864E4640B1())
	{
		if (unk_0x2A3398C6222EB190(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_950886.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x2A3398C6222EB190(Global_950886.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xB3404E397FF56B3B(&(Global_950886.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_907(var uParam0)
{
	if (Global_2398053)
	{
		if (unk_0xB3404E397FF56B3B(&(Global_2398053.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_908(int iParam0)
{
	return iParam0 == 9999;
}

void func_909(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	if (Global_1623799[iVar0 /*488*/].f_11.f_173 != iParam0)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_173 = iParam0;
	}
}

void func_910()
{
	struct<4> Var0;
	
	if (!unk_0xA761A0B6072010C8(uLocal_599))
	{
		if (func_914())
		{
			uLocal_599 = unk_0x97AC4FC1EEAC7A8B(func_460());
			if (Local_122.f_197 == 2)
			{
				unk_0x3B815A6E8530D3A5(uLocal_599, 493);
			}
			else
			{
				unk_0x3B815A6E8530D3A5(uLocal_599, 441);
			}
			unk_0xB989C497205DF6E8(uLocal_599, 1);
			unk_0x82F6662608C79359(uLocal_599, 7000);
			unk_0xC5B4383DA70A2C1A(uLocal_599, 9);
			Var0 = { func_913() };
			unk_0x50B5259DFC71B8EC(uLocal_599, &Var0);
			if (Local_122.f_197 == 2)
			{
				func_911(&uLocal_599, iLocal_2773);
			}
			else
			{
				func_911(&uLocal_599, 29);
			}
			if (!unk_0x2A3398C6222EB190(iLocal_578, 30))
			{
				unk_0x292298DDE6D3EE2A();
				unk_0xCD7E92DE2BFA0B0D(&iLocal_578, 30);
			}
		}
	}
}

void func_911(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		iVar0 = func_912(iParam1);
		unk_0xEB934A06DDA5027D(*uParam0, iVar0);
	}
}

int func_912(int iParam0)
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
	unk_0xB922891BFD232C45(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

struct<4> func_913()
{
	struct<4> Var0;
	
	switch (Local_122.f_197)
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

int func_914()
{
	if (Local_122.f_197 != 2)
	{
		return 1;
	}
	else if (func_851())
	{
		return 1;
	}
	else if (func_36(unk_0x3D35F9864E4640B1()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_915(struct<3> Param0, bool bParam3)
{
	if (!unk_0xA761A0B6072010C8(uLocal_598))
	{
		if (func_914())
		{
			if (!bParam3)
			{
				uLocal_598 = unk_0x7F2FBF81198F9C20(Param0, fLocal_608);
				if (Local_122.f_197 != 2)
				{
					unk_0xEB934A06DDA5027D(uLocal_598, 5);
				}
				else
				{
					unk_0xEB934A06DDA5027D(uLocal_598, 5);
				}
			}
			else
			{
				uLocal_598 = unk_0x7F2FBF81198F9C20(func_460(), (func_461() / 2f));
				if (Local_122.f_197 != 2)
				{
					func_911(&uLocal_598, 29);
				}
				else
				{
					func_911(&uLocal_598, iLocal_2773);
				}
			}
			unk_0x18EC814D577B92CE(uLocal_598, 100);
			unk_0x02C0454478A70EFA(uLocal_598, 0);
		}
	}
}

Vector3 func_916()
{
	return Local_633[0 /*3*/];
}

int func_917(bool bParam0)
{
	int iVar0;
	
	if (Local_122.f_197 != 2)
	{
		if (func_341(unk_0x3D35F9864E4640B1()))
		{
			iVar0 = 1;
		}
		if (func_958(0))
		{
			iVar0 = 1;
		}
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
		{
			if (func_341(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (func_333())
		{
			iVar0 = 1;
		}
		if (func_950())
		{
			iVar0 = 1;
		}
		if (!func_945(1, 1))
		{
			iVar0 = 1;
		}
		if (func_944(200))
		{
			iVar0 = 1;
		}
	}
	if (bParam0)
	{
		if (Local_122.f_197 == 2)
		{
			if (!func_945(1, 1))
			{
				iVar0 = 1;
			}
		}
		else if (!func_927())
		{
			iVar0 = 1;
		}
	}
	if (!func_919(136, 0, 0))
	{
		iVar0 = 1;
	}
	if (Global_1767039)
	{
		iVar0 = 1;
	}
	if (func_918(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_918(int iParam0)
{
	if (!func_1124(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_35;
}

bool func_919(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7079 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_923(unk_0x3D35F9864E4640B1(), 85))
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
	if (func_922() || func_921())
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
			if (func_920())
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
	return unk_0x2A3398C6222EB190(Global_1574372[iVar1], iVar0);
}

int func_920()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_1697, 23))
	{
		return 1;
	}
	if (func_922())
	{
		return 1;
	}
	if (func_921())
	{
		return 1;
	}
	uVar0 = Global_1365053[func_49(-1)];
	if (unk_0x2A3398C6222EB190(uVar0, 7))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1697), 23);
		return 1;
	}
	return 0;
}

bool func_921()
{
	return Global_1312841;
}

bool func_922()
{
	return Global_1312843;
}

bool func_923(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_926())
	{
		return 0;
	}
	if (func_925())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_924(iParam1);
	iVar1 = uVar0;
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_533, iVar1);
}

int func_924(int iParam0)
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

bool func_925()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_144, 3);
}

int func_926()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_922())
	{
		return 1;
	}
	if (func_921())
	{
		return 1;
	}
	return func_253(120, -1);
}

int func_927()
{
	if (func_943(unk_0x3D35F9864E4640B1(), 29))
	{
		return 0;
	}
	if (func_337(unk_0x3D35F9864E4640B1(), 21))
	{
		return 0;
	}
	if (unk_0x12F270E0E3ED8AA1())
	{
		return 0;
	}
	if (unk_0x30758DD2AA5FF762())
	{
		return 0;
	}
	if (func_770(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (func_942(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_582())
	{
		return 0;
	}
	if (func_36(unk_0x3D35F9864E4640B1()) == 3)
	{
		return 0;
	}
	if (func_940(func_941()))
	{
		return 0;
	}
	if (func_794())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (unk_0xF4F91CD09D59F42E())
	{
		return 0;
	}
	if (func_575(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!func_578())
	{
		return 0;
	}
	if (func_337(unk_0x3D35F9864E4640B1(), 0) || func_337(unk_0x3D35F9864E4640B1(), 3))
	{
		return 0;
	}
	if ((func_337(unk_0x3D35F9864E4640B1(), 12) || func_337(unk_0x3D35F9864E4640B1(), 14)) || func_337(unk_0x3D35F9864E4640B1(), 13))
	{
		return 0;
	}
	if (func_936(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_935(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_934())
	{
		return 0;
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (func_918(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_933())
	{
		return 0;
	}
	if (func_932(unk_0x3D35F9864E4640B1()) && Global_1592729.f_170)
	{
		return 0;
	}
	if ((func_931(unk_0x3D35F9864E4640B1()) || func_930(unk_0x3D35F9864E4640B1())) || func_928(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_928(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_929(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_929(int iParam0)
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
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
	}
	return -1;
}

int func_930(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1 && Global_2422142[iParam0 /*399*/].f_318.f_4 != func_364())
			{
				return func_929(Global_2422142[iParam0 /*399*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_931(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_929(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_932(int iParam0)
{
	if (func_871(Global_1593076[iParam0 /*647*/].f_259.f_16))
	{
		return 1;
	}
	return 0;
}

int func_933()
{
	if (Global_2595735.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_934()
{
	return Global_92814.f_310 > 0;
}

bool func_935(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11);
}

int func_936(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (Global_1593076[iParam0 /*647*/].f_259.f_16 > 0)
	{
		if (bParam1)
		{
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 0))
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
		if (func_939(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_938(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_937(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_931(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_928(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_937(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_929(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_938(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_929(Global_2422142[iParam0 /*399*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_939(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_929(Global_2422142[iParam0 /*399*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_940(int iParam0)
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

int func_941()
{
	return Global_2434915.f_2484[0 /*76*/].f_1;
}

int func_942(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_270.f_4 != 0 || Global_2422142[iParam0 /*399*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_943(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_5, iParam1);
}

int func_944(int iParam0)
{
	if (!func_150() && !func_120(unk_0x3D35F9864E4640B1(), 1))
	{
		if (!func_39(unk_0x3D35F9864E4640B1()))
		{
			if (func_333())
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

int func_945(bool bParam0, bool bParam1)
{
	if (func_943(unk_0x3D35F9864E4640B1(), 29))
	{
		return 0;
	}
	if (func_337(unk_0x3D35F9864E4640B1(), 21))
	{
		return 0;
	}
	if (unk_0x12F270E0E3ED8AA1())
	{
		return 0;
	}
	if (!func_523(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x30758DD2AA5FF762())
		{
			return 0;
		}
	}
	if (func_770(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (func_582())
	{
		return 0;
	}
	if (func_794())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (unk_0xF4F91CD09D59F42E())
	{
		return 0;
	}
	if (func_575(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!func_578())
	{
		return 0;
	}
	if (func_337(unk_0x3D35F9864E4640B1(), 0) || func_337(unk_0x3D35F9864E4640B1(), 3))
	{
		return 0;
	}
	if ((func_337(unk_0x3D35F9864E4640B1(), 12) || func_337(unk_0x3D35F9864E4640B1(), 14)) || func_337(unk_0x3D35F9864E4640B1(), 13))
	{
		return 0;
	}
	if (func_936(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
	{
		if (!func_947())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_934())
		{
			return 0;
		}
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (func_918(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_933())
	{
		return 0;
	}
	if (func_946(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
	{
		return 0;
	}
	if (func_942(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_946(int iParam0)
{
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 14))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11))
	{
		return 1;
	}
	return 0;
}

int func_947()
{
	int iVar0;
	
	iVar0 = func_528(unk_0x3D35F9864E4640B1());
	if (((func_871(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16) || func_939(unk_0x3D35F9864E4640B1())) || func_937(unk_0x3D35F9864E4640B1())) || func_949(unk_0x3D35F9864E4640B1()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_948(unk_0x3D35F9864E4640B1()))
	{
		if (func_139(iVar0) || func_901(iVar0))
		{
			return 1;
		}
	}
	if (func_938(unk_0x3D35F9864E4640B1()))
	{
		if (func_901(iVar0))
		{
			return 1;
		}
	}
	if (func_931(unk_0x3D35F9864E4640B1()))
	{
		if (func_128(iVar0))
		{
			return 1;
		}
	}
	if (func_928(unk_0x3D35F9864E4640B1()))
	{
		if (func_127(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_948(int iParam0)
{
	if (func_870(Global_1593076[iParam0 /*647*/].f_259.f_16, -1))
	{
		return 1;
	}
	return 0;
}

int func_949(int iParam0)
{
	if (func_872(Global_1593076[iParam0 /*647*/].f_259.f_16, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_950()
{
	return 0;
}

void func_951()
{
	int iVar0;
	
	if (iLocal_2773 == 0)
	{
		iVar0 = func_359();
		if (iVar0 != func_364())
		{
			iLocal_2773 = func_952(iVar0);
		}
	}
}

int func_952(int iParam0)
{
	int iVar0;
	
	iVar0 = func_119(iParam0);
	if (iVar0 != -1)
	{
		return func_117(iVar0);
	}
	return 1;
}

var func_953()
{
	return Global_262145.f_10344;
}

float func_954()
{
	if (Local_122.f_197 != 2)
	{
		return Global_262145.f_10341;
	}
	return Global_262145.f_17476;
}

void func_955()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_29(Local_633[0 /*3*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	switch (Local_122.f_167)
	{
		case 0:
			Local_633[0 /*3*/] = { 1476.637f, -2436.075f, 65.2401f };
			Local_633[1 /*3*/] = { 1591.158f, -1980.835f, 93.9884f };
			Local_633[2 /*3*/] = { 1105.58f, -1734.014f, 34.7122f };
			Local_633[3 /*3*/] = { 674.1869f, -1733.183f, 28.3527f };
			Local_633[4 /*3*/] = { 276.4475f, -1857.687f, 25.8607f };
			Local_633[5 /*3*/] = { 241.6554f, -1713.72f, 28.1339f };
			Local_633[6 /*3*/] = { 276.8612f, -1670.451f, 28.3137f };
			Local_633[7 /*3*/] = { 158.5084f, -1512.412f, 28.1416f };
			Local_633[8 /*3*/] = { 154.052f, -1394.604f, 28.3049f };
			Local_633[9 /*3*/] = { 297.3363f, -1202.901f, 28.1848f };
			Local_633[10 /*3*/] = { 216.0453f, -1130.863f, 28.3051f };
			Local_633[11 /*3*/] = { 303.6096f, -1124.259f, 28.4586f };
			Local_633[12 /*3*/] = { 349.6563f, -953.8064f, 28.4776f };
			Local_633[13 /*3*/] = { 228.3761f, -955.8815f, 28.3232f };
			iLocal_1503 = 14;
			break;
		
		case 1:
			Local_633[0 /*3*/] = { -1900.185f, 2050.775f, 139.7211f };
			Local_633[1 /*3*/] = { -1797.919f, 1886.775f, 147.74f };
			Local_633[2 /*3*/] = { -1710.175f, 1885.316f, 160.217f };
			Local_633[3 /*3*/] = { -1610.52f, 2033.944f, 101.5237f };
			Local_633[4 /*3*/] = { -1517.004f, 2141.703f, 55.0511f };
			Local_633[5 /*3*/] = { -1337.505f, 2178.097f, 51.2807f };
			Local_633[6 /*3*/] = { -1147.637f, 2341.332f, 98.8094f };
			Local_633[7 /*3*/] = { -934.5955f, 2262.843f, 140.7183f };
			Local_633[8 /*3*/] = { -730.47f, 2344.86f, 68.405f };
			Local_633[9 /*3*/] = { -708.701f, 2426.99f, 61.1469f };
			Local_633[10 /*3*/] = { -573.3401f, 2500.494f, 50.3152f };
			Local_633[11 /*3*/] = { -545.0461f, 2672.93f, 44.4979f };
			Local_633[12 /*3*/] = { -436.4757f, 2756.389f, 44.6457f };
			Local_633[13 /*3*/] = { -322.5151f, 2775.025f, 61.0514f };
			Local_633[14 /*3*/] = { -149.1279f, 2737.515f, 54.9277f };
			Local_633[15 /*3*/] = { 222.302f, 2489.443f, 53.8394f };
			Local_633[16 /*3*/] = { 569.7415f, 2454.868f, 58.4488f };
			Local_633[17 /*3*/] = { 753.546f, 2518.788f, 72.1194f };
			Local_633[18 /*3*/] = { 924.3738f, 2593.375f, 60.2089f };
			Local_633[19 /*3*/] = { 965.1749f, 2621.371f, 45.0674f };
			Local_633[20 /*3*/] = { 1039.363f, 2671.289f, 38.5509f };
			iLocal_1503 = 21;
			break;
		
		case 2:
			Local_633[0 /*3*/] = { 2304f, 1469f, 66f };
			Local_633[1 /*3*/] = { 2131f, 2031f, 96f };
			Local_633[2 /*3*/] = { 2059f, 2868f, 52f };
			Local_633[3 /*3*/] = { 2707f, 3485f, 64f };
			Local_633[4 /*3*/] = { 2855f, 3729f, 47f };
			Local_633[5 /*3*/] = { 2506f, 4153f, 41f };
			Local_633[6 /*3*/] = { 2885f, 4472f, 51f };
			Local_633[7 /*3*/] = { 2786.236f, 4941.378f, 32.6857f };
			Local_633[8 /*3*/] = { 2890.608f, 5034.026f, 30.7725f };
			Local_633[9 /*3*/] = { 3058.765f, 5052.091f, 24.441f };
			Local_633[10 /*3*/] = { 3063.052f, 5094.116f, 23.0524f };
			Local_633[11 /*3*/] = { 3131.718f, 5101.371f, 20.6628f };
			Local_633[12 /*3*/] = { 3175.018f, 5118.771f, 16.61f };
			Local_633[13 /*3*/] = { 3228.467f, 5133.4f, 18.321f };
			Local_633[14 /*3*/] = { 3283.499f, 5150.864f, 17.6323f };
			Local_633[15 /*3*/] = { 3297.67f, 5150.701f, 17.3023f };
			Local_633[16 /*3*/] = { 3320.565f, 5151.295f, 17.3289f };
			Local_633[17 /*3*/] = { 3337.017f, 5151.827f, 17.4344f };
			Local_633[18 /*3*/] = { 3348.801f, 5152.016f, 18.4475f };
			iLocal_1503 = 19;
			break;
		
		case 3:
			func_957();
			Local_633[0 /*3*/] = { -1210.197f, -2437.739f, 12.9452f };
			Local_633[1 /*3*/] = { -1342.587f, -2667.462f, 12.9449f };
			Local_633[2 /*3*/] = { -1220.798f, -2861.65f, 12.9455f };
			Local_633[3 /*3*/] = { -1126.435f, -2699.413f, 22.00294f };
			Local_633[4 /*3*/] = { -1017.039f, -2713.215f, 34.56547f };
			Local_633[5 /*3*/] = { -936.5955f, -2585.454f, 21.38621f };
			Local_633[6 /*3*/] = { -841.7922f, -2569.529f, 16.83603f };
			Local_633[7 /*3*/] = { -723.1095f, -2396.833f, 17.03123f };
			Local_633[8 /*3*/] = { -616.2985f, -2279.408f, 13.04065f };
			Local_633[9 /*3*/] = { -677.7834f, -2181.811f, 14.21462f };
			Local_633[10 /*3*/] = { -613.1539f, -2109.985f, 21.81665f };
			Local_633[11 /*3*/] = { -475.038f, -2148f, 17.4868f };
			Local_633[12 /*3*/] = { -336.4597f, -2143.653f, 13.9572f };
			Local_633[13 /*3*/] = { -256.3312f, -2131.896f, 22.1408f };
			Local_633[14 /*3*/] = { -162.249f, -2084.908f, 26.85073f };
			Local_633[15 /*3*/] = { -161.8921f, -2043.37f, 21.8606f };
			Local_633[16 /*3*/] = { -154.6475f, -2009.529f, 21.8819f };
			Local_633[17 /*3*/] = { -186.8038f, -2005.34f, 26.6204f };
			Local_633[18 /*3*/] = { -216.7214f, -1999.232f, 26.7554f };
			iLocal_1503 = 19;
			break;
		
		case 4:
			Local_633[0 /*3*/] = { 105.443f, 7028.38f, 10.2844f };
			Local_633[1 /*3*/] = { 157.7284f, 6525.143f, 30.6533f };
			Local_633[2 /*3*/] = { -59.2422f, 6653.804f, 28.721f };
			Local_633[3 /*3*/] = { -168.4514f, 6476.554f, 29.0678f };
			Local_633[4 /*3*/] = { -111.8802f, 6419.246f, 30.4455f };
			Local_633[5 /*3*/] = { -154.2424f, 6339.732f, 30.6176f };
			Local_633[6 /*3*/] = { -93.9484f, 6279.499f, 30.3124f };
			Local_633[7 /*3*/] = { -182.7545f, 6195.686f, 30.1968f };
			Local_633[8 /*3*/] = { -260.1141f, 6185.812f, 30.4429f };
			Local_633[9 /*3*/] = { -304.2122f, 6227.968f, 30.4542f };
			Local_633[10 /*3*/] = { -473.7666f, 6066.529f, 29.34f };
			Local_633[11 /*3*/] = { -715.7206f, 6049.093f, -0.0726f };
			Local_633[12 /*3*/] = { -811.3691f, 5957.282f, 19.4103f };
			Local_633[13 /*3*/] = { -897.6384f, 6050.558f, 43.1834f };
			iLocal_1503 = 14;
			break;
		
		case 6:
			Local_633[0 /*3*/] = { 770.8729f, -232.9857f, 65.1145f };
			Local_633[1 /*3*/] = { 838.7502f, -256.9497f, 64.6297f };
			Local_633[2 /*3*/] = { 903.3063f, -221.7793f, 68.666f };
			Local_633[3 /*3*/] = { 935.5661f, -166.9423f, 73.4974f };
			Local_633[4 /*3*/] = { 935.502f, -150.7537f, 73.7236f };
			Local_633[5 /*3*/] = { 903.4067f, -123.2328f, 76.2099f };
			Local_633[6 /*3*/] = { 881.9219f, -103.4221f, 78.4213f };
			Local_633[7 /*3*/] = { 880.8146f, -80.6718f, 77.7643f };
			Local_633[8 /*3*/] = { 924.9553f, -20.0444f, 77.7643f };
			Local_633[9 /*3*/] = { 953.8312f, -19.9404f, 77.764f };
			Local_633[10 /*3*/] = { 968.3574f, -3.2091f, 79.9909f };
			Local_633[11 /*3*/] = { 1009.373f, 64.5172f, 79.9909f };
			Local_633[12 /*3*/] = { 1004.334f, 70.7857f, 79.9909f };
			Local_633[13 /*3*/] = { 961.9669f, 97.0632f, 79.9909f };
			Local_633[14 /*3*/] = { 974.4698f, 116.5434f, 79.9909f };
			Local_633[15 /*3*/] = { 1023.872f, 169.1899f, 79.9905f };
			Local_633[16 /*3*/] = { 1023.795f, 181.0932f, 79.8559f };
			Local_633[17 /*3*/] = { 1003.224f, 191.8311f, 79.9087f };
			Local_633[18 /*3*/] = { 945.6973f, 122.5348f, 79.7235f };
			Local_633[19 /*3*/] = { 931.2999f, 104.402f, 78.3884f };
			Local_633[20 /*3*/] = { 884.1791f, 48.7134f, 77.631f };
			Local_633[21 /*3*/] = { 820.7046f, -20.0586f, 79.7007f };
			Local_633[22 /*3*/] = { 824.5161f, -65.76f, 79.6442f };
			Local_633[23 /*3*/] = { 854.3058f, -113.1723f, 78.3323f };
			Local_633[24 /*3*/] = { 847.928f, -140.3758f, 77.3008f };
			Local_633[25 /*3*/] = { 825.0543f, -176.4968f, 71.886f };
			Local_633[26 /*3*/] = { 803.1815f, -203.4303f, 71.9304f };
			Local_633[27 /*3*/] = { 772.341f, -248.5203f, 65.1143f };
			Local_633[28 /*3*/] = { 766.5759f, -268.8026f, 65.4267f };
			Local_633[29 /*3*/] = { 751.6126f, -300.7643f, 58.892f };
			Local_633[30 /*3*/] = { 723.4518f, -321.204f, 51.9976f };
			Local_633[31 /*3*/] = { 691.1819f, -341.8955f, 39.0741f };
			Local_633[32 /*3*/] = { 644.3198f, -353.9926f, 29.0699f };
			Local_633[33 /*3*/] = { 628.4379f, -365.0165f, 23.5751f };
			Local_633[34 /*3*/] = { 607.2872f, -399.7075f, 23.7997f };
			Local_633[35 /*3*/] = { 599.2954f, -478.0787f, 23.7562f };
			Local_633[36 /*3*/] = { 566.7018f, -553.8478f, 23.7368f };
			Local_633[37 /*3*/] = { 538.7103f, -643.3187f, 23.7397f };
			Local_633[38 /*3*/] = { 508.0503f, -682.8132f, 24.2827f };
			Local_633[39 /*3*/] = { 456.5249f, -685.2498f, 26.8735f };
			Local_633[40 /*3*/] = { 456.4284f, -821.7599f, 26.5584f };
			Local_633[41 /*3*/] = { 406.9605f, -830.3608f, 28.3306f };
			Local_633[42 /*3*/] = { 406.1039f, -876.7354f, 28.3905f };
			Local_633[43 /*3*/] = { 402.9865f, -938.0498f, 28.4551f };
			Local_633[44 /*3*/] = { 404.8474f, -950.4066f, 28.4433f };
			Local_633[45 /*3*/] = { 416.964f, -954.1458f, 28.4324f };
			Local_633[46 /*3*/] = { 485.1107f, -954.6018f, 26.3922f };
			Local_633[47 /*3*/] = { 496.7718f, -957.6362f, 26.1527f };
			Local_633[48 /*3*/] = { 500.8447f, -966.6793f, 26.4009f };
			Local_633[49 /*3*/] = { 499.6066f, -1038.969f, 27.357f };
			Local_633[50 /*3*/] = { 482.2613f, -1070.182f, 28.2113f };
			Local_633[51 /*3*/] = { 462.5394f, -1125.002f, 28.3189f };
			Local_633[52 /*3*/] = { 452.1105f, -1131.479f, 28.4588f };
			Local_633[53 /*3*/] = { 411.7074f, -1132.298f, 28.4582f };
			Local_633[54 /*3*/] = { 401.2792f, -1126.838f, 28.4871f };
			Local_633[55 /*3*/] = { 398.4309f, -1108.895f, 28.4618f };
			Local_633[56 /*3*/] = { 398.5521f, -1011.637f, 28.4602f };
			Local_633[57 /*3*/] = { 391.9118f, -1000.936f, 28.4172f };
			Local_633[58 /*3*/] = { 384.0373f, -999.108f, 28.4212f };
			Local_633[59 /*3*/] = { 280.6655f, -998.2255f, 28.2999f };
			Local_633[60 /*3*/] = { 274.747f, -997.3961f, 28.3239f };
			Local_633[61 /*3*/] = { 254.8134f, -990.8824f, 28.2714f };
			Local_633[62 /*3*/] = { 244.1949f, -980.8467f, 28.3573f };
			Local_633[63 /*3*/] = { 244.9183f, -958.1761f, 28.3041f };
			Local_633[64 /*3*/] = { 265.0497f, -896.29f, 27.9801f };
			Local_633[65 /*3*/] = { 259.8165f, -869.8301f, 28.273f };
			Local_633[66 /*3*/] = { 226.9681f, -839.9088f, 29.2632f };
			Local_633[67 /*3*/] = { 224.8172f, -815.2034f, 29.5278f };
			Local_633[68 /*3*/] = { 223.5029f, -758.9518f, 29.8235f };
			Local_633[69 /*3*/] = { 234.023f, -729.6653f, 29.8196f };
			Local_633[70 /*3*/] = { 268.7956f, -743.4052f, 33.64f };
			Local_633[71 /*3*/] = { 224.9066f, -736.6704f, 33.2013f };
			Local_633[72 /*3*/] = { 172.0603f, -721.1422f, 32.1324f };
			Local_633[73 /*3*/] = { 75.1364f, -688.8935f, 30.6218f };
			Local_633[74 /*3*/] = { 112.1867f, -577.6705f, 30.47f };
			Local_633[75 /*3*/] = { 58.5058f, -554.6415f, 32.7843f };
			Local_633[76 /*3*/] = { -35.6377f, -545.9135f, 38.9156f };
			Local_633[77 /*3*/] = { -77.4362f, -537.5404f, 39.1736f };
			iLocal_1503 = 78;
			break;
		
		case 7:
			Local_633[0 /*3*/] = { 174.5999f, -2079.691f, 16.7487f };
			Local_633[1 /*3*/] = { 152.0048f, -2053.034f, 17.3217f };
			Local_633[2 /*3*/] = { 150.1924f, -2031.796f, 17.3217f };
			Local_633[3 /*3*/] = { 152.2747f, -2013.484f, 17.1417f };
			Local_633[4 /*3*/] = { 156.9549f, -2002.106f, 17.2518f };
			Local_633[5 /*3*/] = { 164.4116f, -1991.569f, 17.2641f };
			Local_633[6 /*3*/] = { 205.3133f, -1942.91f, 20.535f };
			Local_633[7 /*3*/] = { 211.3832f, -1932.955f, 21.5803f };
			Local_633[8 /*3*/] = { 208.533f, -1920.367f, 22.2848f };
			Local_633[9 /*3*/] = { 196.7893f, -1907.76f, 22.6872f };
			Local_633[10 /*3*/] = { 182.3722f, -1898.424f, 22.5606f };
			Local_633[11 /*3*/] = { 108.5148f, -1864.741f, 23.4672f };
			Local_633[12 /*3*/] = { 86.2217f, -1841.194f, 24.2874f };
			Local_633[13 /*3*/] = { 43.7092f, -1805.996f, 24.4549f };
			Local_633[14 /*3*/] = { 17.8062f, -1777.351f, 28.2925f };
			Local_633[15 /*3*/] = { 21.8941f, -1750.064f, 28.3031f };
			Local_633[16 /*3*/] = { 44.7469f, -1721.505f, 28.3031f };
			Local_633[17 /*3*/] = { 63.9396f, -1707.914f, 28.2608f };
			Local_633[18 /*3*/] = { 76.1903f, -1681.886f, 28.3242f };
			Local_633[19 /*3*/] = { 86.0975f, -1653.219f, 28.3469f };
			Local_633[20 /*3*/] = { 116.5378f, -1632.756f, 28.3471f };
			Local_633[21 /*3*/] = { 152.7263f, -1602.194f, 28.3415f };
			Local_633[22 /*3*/] = { 143.9074f, -1564.712f, 28.2093f };
			Local_633[23 /*3*/] = { 145.1265f, -1550.904f, 28.1529f };
			Local_633[24 /*3*/] = { 153.1621f, -1536.478f, 28.3099f };
			Local_633[25 /*3*/] = { 156.3295f, -1515.14f, 28.1416f };
			Local_633[26 /*3*/] = { 148.7433f, -1498.556f, 28.1416f };
			Local_633[27 /*3*/] = { 128.6626f, -1476.814f, 28.1416f };
			Local_633[28 /*3*/] = { 104.1582f, -1414.095f, 28.1921f };
			Local_633[29 /*3*/] = { 83.6966f, -1380.602f, 28.2915f };
			Local_633[30 /*3*/] = { 50.458f, -1383.531f, 28.2943f };
			Local_633[31 /*3*/] = { -1.9688f, -1383.943f, 28.3059f };
			Local_633[32 /*3*/] = { -24.7047f, -1377.866f, 28.1996f };
			Local_633[33 /*3*/] = { -92.3499f, -1377.083f, 28.3276f };
			Local_633[34 /*3*/] = { -130.9038f, -1387.612f, 28.4695f };
			Local_633[35 /*3*/] = { -148.5784f, -1398.707f, 29.0652f };
			Local_633[36 /*3*/] = { -148.0146f, -1415.724f, 29.7007f };
			Local_633[37 /*3*/] = { -140.9057f, -1431.51f, 29.8724f };
			Local_633[38 /*3*/] = { -172.1216f, -1469.894f, 31.0887f };
			Local_633[39 /*3*/] = { -200.9877f, -1510.344f, 30.632f };
			Local_633[40 /*3*/] = { -228.8574f, -1535.488f, 30.6189f };
			Local_633[41 /*3*/] = { -242.2845f, -1539.538f, 30.5592f };
			Local_633[42 /*3*/] = { -256.5187f, -1570.94f, 30.9427f };
			Local_633[43 /*3*/] = { -268.7609f, -1629.413f, 30.8488f };
			Local_633[44 /*3*/] = { -255.8852f, -1689.953f, 30.8488f };
			Local_633[45 /*3*/] = { -224.6088f, -1727.568f, 31.5576f };
			Local_633[46 /*3*/] = { -182.6528f, -1758.622f, 28.8952f };
			Local_633[47 /*3*/] = { -148.3479f, -1787.901f, 28.7988f };
			Local_633[48 /*3*/] = { -122.57f, -1807.999f, 27.3089f };
			Local_633[49 /*3*/] = { -73.0749f, -1876.611f, 7.596f };
			Local_633[50 /*3*/] = { -39.416f, -1901.59f, 9.9099f };
			Local_633[51 /*3*/] = { 7.5512f, -1955.098f, 4.4117f };
			Local_633[52 /*3*/] = { 55.3094f, -2021.311f, 0.4589f };
			Local_633[53 /*3*/] = { 69.4583f, -2095.662f, 0.2051f };
			Local_633[54 /*3*/] = { 49.8936f, -2146.708f, 1.5683f };
			Local_633[55 /*3*/] = { 41.0185f, -2157.943f, 4.4323f };
			Local_633[56 /*3*/] = { 24.7718f, -2164.335f, 8.1637f };
			Local_633[57 /*3*/] = { -2.2288f, -2158.396f, 9.2835f };
			Local_633[58 /*3*/] = { -22.7019f, -2158.668f, 9.3111f };
			Local_633[59 /*3*/] = { -38.4647f, -2199.598f, 6.8117f };
			Local_633[60 /*3*/] = { -45.3264f, -2212.231f, 6.8117f };
			Local_633[61 /*3*/] = { -55.3598f, -2222.49f, 6.8117f };
			Local_633[62 /*3*/] = { -82.3358f, -2223.918f, 6.8117f };
			Local_633[63 /*3*/] = { -131.381f, -2223.081f, 6.8117f };
			Local_633[64 /*3*/] = { -150.9629f, -2233.896f, 6.8117f };
			Local_633[65 /*3*/] = { -158.0284f, -2244.346f, 6.8117f };
			Local_633[66 /*3*/] = { -181.3241f, -2250.348f, 6.8117f };
			Local_633[67 /*3*/] = { -262.8565f, -2253.175f, 6.9858f };
			Local_633[68 /*3*/] = { -294.0698f, -2233.267f, 7.2625f };
			Local_633[69 /*3*/] = { -297.9966f, -2218.1f, 8.5029f };
			Local_633[70 /*3*/] = { -313.9771f, -2206.949f, 8.4925f };
			Local_633[71 /*3*/] = { -327.7408f, -2209.155f, 7.2109f };
			Local_633[72 /*3*/] = { -364.1004f, -2262.198f, 6.6082f };
			Local_633[73 /*3*/] = { -374.4983f, -2272.426f, 6.6082f };
			Local_633[74 /*3*/] = { -375.8295f, -2282.563f, 6.6082f };
			iLocal_1503 = 75;
			break;
		
		case 8:
			Local_633[0 /*3*/] = { -2653.049f, 1505.637f, 116.9031f };
			Local_633[1 /*3*/] = { -2663.594f, 1470.743f, 122.7177f };
			Local_633[2 /*3*/] = { -2681.781f, 1433.767f, 120.1581f };
			Local_633[3 /*3*/] = { -2701.294f, 1403.518f, 112.9536f };
			Local_633[4 /*3*/] = { -2717.157f, 1376.807f, 105.1303f };
			Local_633[5 /*3*/] = { -2748.094f, 1336.441f, 89.7583f };
			Local_633[6 /*3*/] = { -2772.662f, 1306.338f, 82.0139f };
			Local_633[7 /*3*/] = { -2807.116f, 1282.497f, 71.1255f };
			Local_633[8 /*3*/] = { -2860.727f, 1279.025f, 58.2654f };
			Local_633[9 /*3*/] = { -2904.519f, 1259.097f, 40.7003f };
			Local_633[10 /*3*/] = { -2921.85f, 1257.993f, 37.2144f };
			Local_633[11 /*3*/] = { -2945.241f, 1243.167f, 31.8372f };
			Local_633[12 /*3*/] = { -2971.91f, 1212.205f, 23.1993f };
			Local_633[13 /*3*/] = { -2993.662f, 1208.524f, 18.0748f };
			Local_633[14 /*3*/] = { -3038.551f, 1209.651f, 14.0096f };
			Local_633[15 /*3*/] = { -3107.971f, 1226.064f, 9.658f };
			Local_633[16 /*3*/] = { -3199.303f, 1252.489f, 4.3497f };
			Local_633[17 /*3*/] = { -3218.386f, 1252.134f, 2.8398f };
			Local_633[18 /*3*/] = { -3236.587f, 1234.213f, 2.2581f };
			Local_633[19 /*3*/] = { -3257.229f, 1188.7f, 1.6827f };
			Local_633[20 /*3*/] = { -3268.847f, 1110.996f, 1.1708f };
			Local_633[21 /*3*/] = { -3286.199f, 1046.93f, 2.2738f };
			Local_633[22 /*3*/] = { -3291.467f, 984.0225f, 2.3848f };
			Local_633[23 /*3*/] = { -3291.941f, 951.162f, 1.1346f };
			Local_633[24 /*3*/] = { -3284.428f, 937.3236f, 1.0801f };
			Local_633[25 /*3*/] = { -3266.242f, 925.3865f, 1.6379f };
			Local_633[26 /*3*/] = { -3234.646f, 874.3011f, 1.695f };
			Local_633[27 /*3*/] = { -3219.083f, 829.6504f, 1.2816f };
			Local_633[28 /*3*/] = { -3198.246f, 813.9434f, 2.7979f };
			Local_633[29 /*3*/] = { -3165.079f, 798.1581f, 6.5002f };
			Local_633[30 /*3*/] = { -3143.296f, 790.5193f, 7.0137f };
			Local_633[31 /*3*/] = { -3124.516f, 789.1387f, 16.9934f };
			Local_633[32 /*3*/] = { -3094.212f, 777.5895f, 18.5135f };
			Local_633[33 /*3*/] = { -3086.898f, 756.6077f, 19.5227f };
			Local_633[34 /*3*/] = { -3093.979f, 726.5751f, 20.3224f };
			Local_633[35 /*3*/] = { -3082.263f, 693.1727f, 15.8985f };
			Local_633[36 /*3*/] = { -3056.846f, 661.2524f, 9.0803f };
			Local_633[37 /*3*/] = { -3043.558f, 636.358f, 6.5869f };
			Local_633[38 /*3*/] = { -3024.625f, 583.9476f, 6.8377f };
			Local_633[39 /*3*/] = { -3019.437f, 554.1682f, 6.6729f };
			Local_633[40 /*3*/] = { -3021.381f, 512.9918f, 6.234f };
			Local_633[41 /*3*/] = { -3031.198f, 466.6764f, 5.5596f };
			Local_633[42 /*3*/] = { -3049.935f, 424.7576f, 5.5665f };
			Local_633[43 /*3*/] = { -3066.961f, 377.4491f, 6.0668f };
			Local_633[44 /*3*/] = { -3057.431f, 345.7499f, 8.5701f };
			Local_633[45 /*3*/] = { -3046.631f, 292.6304f, 18.9137f };
			Local_633[46 /*3*/] = { -3041.826f, 279.6342f, 16.9957f };
			Local_633[47 /*3*/] = { -3035.306f, 269.0156f, 14.7234f };
			Local_633[48 /*3*/] = { -3012.362f, 233.9675f, 15.2325f };
			Local_633[49 /*3*/] = { -3013.188f, 213.9026f, 15.268f };
			Local_633[50 /*3*/] = { -3011.671f, 196.2197f, 15.146f };
			Local_633[51 /*3*/] = { -3006.454f, 177.695f, 14.8855f };
			Local_633[52 /*3*/] = { -2994.663f, 154.9807f, 14.3746f };
			Local_633[53 /*3*/] = { -2979.672f, 136.2853f, 13.7377f };
			Local_633[54 /*3*/] = { -2950.832f, 112.3324f, 12.904f };
			Local_633[55 /*3*/] = { -2921.329f, 97.7186f, 12.7178f };
			Local_633[56 /*3*/] = { -2851.489f, 75.2672f, 13.5427f };
			Local_633[57 /*3*/] = { -2836.61f, 32.9254f, 12.8794f };
			Local_633[58 /*3*/] = { -2831.988f, 18.7339f, 10.4085f };
			Local_633[59 /*3*/] = { -2824.56f, -8.0105f, 6.1181f };
			Local_633[60 /*3*/] = { -2803.649f, -81.9439f, -0.221f };
			Local_633[61 /*3*/] = { -2780.207f, -96.5313f, 0.3584f };
			Local_633[62 /*3*/] = { -2736.673f, -109.0135f, 0.5296f };
			Local_633[63 /*3*/] = { -2700.451f, -141.5591f, 0.9655f };
			Local_633[64 /*3*/] = { -2671.83f, -175.5449f, 1.0133f };
			Local_633[65 /*3*/] = { -2630.613f, -198.3817f, 2.1479f };
			Local_633[66 /*3*/] = { -2547.985f, -249.0516f, 2.2801f };
			Local_633[67 /*3*/] = { -2473.847f, -295.0556f, 2.7219f };
			Local_633[68 /*3*/] = { -2434.094f, -326.3175f, 3.0194f };
			Local_633[69 /*3*/] = { -2410.113f, -331.2293f, 2.6013f };
			Local_633[70 /*3*/] = { -2376.031f, -335.9692f, 2.5363f };
			Local_633[71 /*3*/] = { -2356.186f, -344.7604f, 2.6766f };
			Local_633[72 /*3*/] = { -2327.246f, -365.7754f, 2.3142f };
			Local_633[73 /*3*/] = { -2276.542f, -398.5323f, 1.8233f };
			Local_633[74 /*3*/] = { -2230.823f, -415.3987f, 3.087f };
			Local_633[75 /*3*/] = { -2213.564f, -418.7813f, 5.5765f };
			Local_633[76 /*3*/] = { -2199.396f, -420.4765f, 11.8061f };
			Local_633[77 /*3*/] = { -2176.137f, -416.0254f, 12.2345f };
			Local_633[78 /*3*/] = { -2126.029f, -402.4269f, 11.7143f };
			Local_633[79 /*3*/] = { -2102.225f, -366.2369f, 11.8076f };
			Local_633[80 /*3*/] = { -2095.268f, -318.8827f, 12.0248f };
			Local_633[81 /*3*/] = { -2093.999f, -264.2969f, 18.7933f };
			Local_633[82 /*3*/] = { -2089.104f, -214.1321f, 19.5783f };
			Local_633[83 /*3*/] = { -2071.153f, -210.7178f, 21.0689f };
			Local_633[84 /*3*/] = { -2050.075f, -223.6322f, 25.6497f };
			Local_633[85 /*3*/] = { -2030.981f, -224.0641f, 27.9967f };
			Local_633[86 /*3*/] = { -1998.867f, -224.0556f, 31.1763f };
			Local_633[87 /*3*/] = { -1987.922f, -232.1616f, 32.9357f };
			Local_633[88 /*3*/] = { -1986.724f, -241.0943f, 33.9168f };
			Local_633[89 /*3*/] = { -1980.237f, -257.3627f, 33.6684f };
			Local_633[90 /*3*/] = { -1966.573f, -261.1625f, 34.9521f };
			Local_633[91 /*3*/] = { -1948.827f, -242.7568f, 34.8759f };
			Local_633[92 /*3*/] = { -1938.963f, -233.8106f, 35.8376f };
			Local_633[93 /*3*/] = { -1911.051f, -214.8513f, 35.2168f };
			Local_633[94 /*3*/] = { -1874.86f, -185.5185f, 37.115f };
			Local_633[95 /*3*/] = { -1864.559f, -180.1412f, 43.2547f };
			Local_633[96 /*3*/] = { -1850.851f, -185.8726f, 45.6611f };
			Local_633[97 /*3*/] = { -1834.413f, -189.1538f, 48.8693f };
			Local_633[98 /*3*/] = { -1815.983f, -200.1424f, 50.7411f };
			Local_633[99 /*3*/] = { -1805.788f, -203.853f, 51.7412f };
			Local_633[100 /*3*/] = { -1792.717f, -217.502f, 50.9357f };
			Local_633[101 /*3*/] = { -1774.695f, -229.8553f, 51.7138f };
			Local_633[102 /*3*/] = { -1756.903f, -238.1252f, 52.0989f };
			Local_633[103 /*3*/] = { -1736.251f, -241.4447f, 52.672f };
			Local_633[104 /*3*/] = { -1712.573f, -240.3414f, 53.0528f };
			Local_633[105 /*3*/] = { -1699.116f, -234.5364f, 54.4754f };
			Local_633[106 /*3*/] = { -1689.302f, -217.4817f, 56.5364f };
			Local_633[107 /*3*/] = { -1682.485f, -202.5944f, 56.595f };
			Local_633[108 /*3*/] = { -1680.894f, -188.3022f, 56.5344f };
			Local_633[109 /*3*/] = { -1682.963f, -173.7911f, 56.5401f };
			Local_633[110 /*3*/] = { -1689.333f, -162.1221f, 56.5802f };
			Local_633[111 /*3*/] = { -1702.223f, -155.7313f, 56.3958f };
			Local_633[112 /*3*/] = { -1709.647f, -161.5643f, 56.4539f };
			Local_633[113 /*3*/] = { -1715.474f, -168.1092f, 56.503f };
			Local_633[114 /*3*/] = { -1725.536f, -168.0596f, 56.7325f };
			Local_633[115 /*3*/] = { -1733.644f, -169.4988f, 57.5363f };
			Local_633[116 /*3*/] = { -1733.434f, -177.1803f, 58.3052f };
			Local_633[117 /*3*/] = { -1731.431f, -182.4709f, 57.4901f };
			Local_633[118 /*3*/] = { -1730.025f, -191.5667f, 57.3605f };
			iLocal_1503 = 119;
			break;
		
		case 9:
			Local_633[0 /*3*/] = { -1463.912f, 2789.826f, 20.0877f };
			Local_633[1 /*3*/] = { -1477.148f, 2845.476f, 25.45f };
			Local_633[2 /*3*/] = { -1506.965f, 2872.34f, 30.2234f };
			Local_633[3 /*3*/] = { -1577.26f, 2932.705f, 31.917f };
			Local_633[4 /*3*/] = { -1591.626f, 2997.577f, 32.261f };
			Local_633[5 /*3*/] = { -1639.98f, 3059.17f, 29.948f };
			Local_633[6 /*3*/] = { -1645.001f, 3178.496f, 29.4591f };
			Local_633[7 /*3*/] = { -1655.642f, 3226.443f, 33.7777f };
			Local_633[8 /*3*/] = { -1694.704f, 3249.402f, 32.0673f };
			Local_633[9 /*3*/] = { -1725.478f, 3262.473f, 31.5433f };
			Local_633[10 /*3*/] = { -1951.812f, 3391.708f, 31.1172f };
			Local_633[11 /*3*/] = { -1984.661f, 3398.118f, 31.1172f };
			Local_633[12 /*3*/] = { -2011.397f, 3398.739f, 30.4796f };
			Local_633[13 /*3*/] = { -2034.775f, 3383.387f, 30.2602f };
			Local_633[14 /*3*/] = { -2065.773f, 3384.615f, 30.3096f };
			Local_633[15 /*3*/] = { -2109.027f, 3382.438f, 30.9568f };
			Local_633[16 /*3*/] = { -2137.183f, 3393.041f, 31.1325f };
			Local_633[17 /*3*/] = { -2143.365f, 3397.595f, 32.7541f };
			Local_633[18 /*3*/] = { -2161.112f, 3410.701f, 31.6593f };
			Local_633[19 /*3*/] = { -2187.906f, 3415.621f, 31.7261f };
			Local_633[20 /*3*/] = { -2199.671f, 3426.611f, 31.6199f };
			Local_633[21 /*3*/] = { -2217.014f, 3434.519f, 31.6187f };
			Local_633[22 /*3*/] = { -2237.547f, 3433.59f, 31.6194f };
			Local_633[23 /*3*/] = { -2251.789f, 3432.903f, 32.4218f };
			Local_633[24 /*3*/] = { -2256.215f, 3432.564f, 31.059f };
			Local_633[25 /*3*/] = { -2276.618f, 3439.096f, 31.0393f };
			Local_633[26 /*3*/] = { -2292.811f, 3446.875f, 30.8394f };
			Local_633[27 /*3*/] = { -2315.683f, 3443.764f, 30.3699f };
			Local_633[28 /*3*/] = { -2341.133f, 3432.404f, 28.5928f };
			Local_633[29 /*3*/] = { -2365.814f, 3428.073f, 26.8742f };
			Local_633[30 /*3*/] = { -2381.983f, 3423.883f, 30.3016f };
			Local_633[31 /*3*/] = { -2394.041f, 3416.595f, 30.5506f };
			Local_633[32 /*3*/] = { -2530.589f, 3337.515f, 30.4319f };
			Local_633[33 /*3*/] = { -2548.137f, 3339.134f, 28.6846f };
			Local_633[34 /*3*/] = { -2562.008f, 3341.58f, 28.0224f };
			Local_633[35 /*3*/] = { -2588.223f, 3351.021f, 24.6836f };
			Local_633[36 /*3*/] = { -2594.071f, 3356.079f, 22.1251f };
			Local_633[37 /*3*/] = { -2595.745f, 3365.915f, 17.9894f };
			Local_633[38 /*3*/] = { -2595.793f, 3377.574f, 12.8038f };
			Local_633[39 /*3*/] = { -2608.662f, 3392.612f, 13.1174f };
			Local_633[40 /*3*/] = { -2623.495f, 3407.143f, 13.6065f };
			Local_633[41 /*3*/] = { -2653.212f, 3424.437f, 13.7192f };
			Local_633[42 /*3*/] = { -2699.876f, 3437.248f, 12.9223f };
			Local_633[43 /*3*/] = { -2721.948f, 3443.959f, 11.9598f };
			Local_633[44 /*3*/] = { -2779.478f, 3456.656f, 10.6559f };
			Local_633[45 /*3*/] = { -2804.644f, 3470.18f, 9.7878f };
			Local_633[46 /*3*/] = { -2825.771f, 3501.169f, 7.9953f };
			Local_633[47 /*3*/] = { -2837.044f, 3518.584f, 7.4085f };
			Local_633[48 /*3*/] = { -2864.506f, 3523.516f, 7.1469f };
			Local_633[49 /*3*/] = { -2913.54f, 3523.989f, 7.2342f };
			Local_633[50 /*3*/] = { -2944.496f, 3519.349f, 7.215f };
			Local_633[51 /*3*/] = { -2957.936f, 3509.118f, 7.5977f };
			Local_633[52 /*3*/] = { -2968.712f, 3494.814f, 8.0967f };
			Local_633[53 /*3*/] = { -2982.313f, 3472.155f, 8.5156f };
			Local_633[54 /*3*/] = { -2997.359f, 3440.916f, 8.5745f };
			Local_633[55 /*3*/] = { -3006.354f, 3441.868f, 8.3125f };
			Local_633[56 /*3*/] = { -3010.171f, 3442.161f, 7.8361f };
			Local_633[57 /*3*/] = { -3016.127f, 3442.632f, 6.1649f };
			Local_633[58 /*3*/] = { -3044.019f, 3439.902f, 2.6837f };
			Local_633[59 /*3*/] = { -3083.78f, 3434.43f, 0.6736f };
			Local_633[60 /*3*/] = { -3108.864f, 3426.914f, 0.5969f };
			Local_633[61 /*3*/] = { -3121.052f, 3417.526f, 0.8856f };
			Local_633[62 /*3*/] = { -3128.933f, 3401.378f, 0.723f };
			Local_633[63 /*3*/] = { -3127.117f, 3385.608f, -0.0289f };
			Local_633[64 /*3*/] = { -3120.614f, 3370.245f, -0.3007f };
			Local_633[65 /*3*/] = { -3120.843f, 3355.337f, -0.3184f };
			Local_633[66 /*3*/] = { -3131.457f, 3337.666f, -0.4124f };
			Local_633[67 /*3*/] = { -3130.055f, 3331.133f, 0.453f };
			Local_633[68 /*3*/] = { -3126.044f, 3311.187f, 1.9264f };
			Local_633[69 /*3*/] = { -3121.625f, 3297.583f, 4.969f };
			Local_633[70 /*3*/] = { -3114.625f, 3288.416f, 5.7302f };
			Local_633[71 /*3*/] = { -3109.753f, 3286.727f, 5.3114f };
			Local_633[72 /*3*/] = { -3094.209f, 3285.138f, 3.4169f };
			Local_633[73 /*3*/] = { -3078.461f, 3294.387f, 3.5013f };
			Local_633[74 /*3*/] = { -3064.696f, 3299.328f, 4.393f };
			Local_633[75 /*3*/] = { -3042.485f, 3298.661f, 4.2975f };
			Local_633[76 /*3*/] = { -3012.822f, 3298.938f, 8.3148f };
			Local_633[77 /*3*/] = { -3005.919f, 3298.79f, 8.8372f };
			Local_633[78 /*3*/] = { -2979.524f, 3296.409f, 9.4458f };
			Local_633[79 /*3*/] = { -2965.909f, 3290.236f, 10.2551f };
			Local_633[80 /*3*/] = { -2956.04f, 3279.582f, 10.3873f };
			Local_633[81 /*3*/] = { -2941.26f, 3267.032f, 10.8597f };
			Local_633[82 /*3*/] = { -2928.623f, 3259.063f, 10.4515f };
			Local_633[83 /*3*/] = { -2922.033f, 3248.532f, 9.6349f };
			Local_633[84 /*3*/] = { -2917.52f, 3233.934f, 9.5718f };
			Local_633[85 /*3*/] = { -2907.681f, 3215.423f, 9.8787f };
			Local_633[86 /*3*/] = { -2879.219f, 3175.582f, 9.9335f };
			Local_633[87 /*3*/] = { -2837.914f, 3137.461f, 9.104f };
			Local_633[88 /*3*/] = { -2778.595f, 3095.414f, 7.9147f };
			Local_633[89 /*3*/] = { -2755.339f, 3093.435f, 7.9238f };
			Local_633[90 /*3*/] = { -2732.754f, 3091.263f, 11.8101f };
			Local_633[91 /*3*/] = { -2715.51f, 3088.629f, 18.9392f };
			Local_633[92 /*3*/] = { -2704.912f, 3088.065f, 22.5439f };
			Local_633[93 /*3*/] = { -2698.571f, 3088.829f, 24.5249f };
			Local_633[94 /*3*/] = { -2688.089f, 3088.755f, 26.9138f };
			Local_633[95 /*3*/] = { -2668.202f, 3087.626f, 31.0204f };
			Local_633[96 /*3*/] = { -2663.953f, 3087.523f, 31.2972f };
			Local_633[97 /*3*/] = { -2649.556f, 3076.861f, 31.3129f };
			Local_633[98 /*3*/] = { -2625.872f, 3048.057f, 31.3104f };
			Local_633[99 /*3*/] = { -2598.408f, 3019.676f, 31.4648f };
			Local_633[100 /*3*/] = { -2586.226f, 3015.642f, 31.7198f };
			Local_633[101 /*3*/] = { -2560.566f, 2996.848f, 37.5706f };
			Local_633[102 /*3*/] = { -2552.737f, 2986.765f, 36.5308f };
			Local_633[103 /*3*/] = { -2545.417f, 2969.709f, 35.8487f };
			Local_633[104 /*3*/] = { -2540.366f, 2955.316f, 35.0142f };
			Local_633[105 /*3*/] = { -2532.989f, 2947.141f, 34.4408f };
			Local_633[106 /*3*/] = { -2527.326f, 2945.037f, 33.7632f };
			Local_633[107 /*3*/] = { -2510.012f, 2935.014f, 31.8324f };
			Local_633[108 /*3*/] = { -2506.855f, 2927.783f, 31.8324f };
			Local_633[109 /*3*/] = { -2502f, 2923.38f, 31.8656f };
			Local_633[110 /*3*/] = { -2453.283f, 2895.443f, 31.827f };
			Local_633[111 /*3*/] = { -2448.633f, 2893.234f, 31.8105f };
			Local_633[112 /*3*/] = { -2441.97f, 2894.076f, 31.8161f };
			Local_633[113 /*3*/] = { -2435.053f, 2899.211f, 31.8101f };
			Local_633[114 /*3*/] = { -2419.494f, 2912.728f, 31.8101f };
			Local_633[115 /*3*/] = { -2410.999f, 2920.665f, 31.8101f };
			Local_633[116 /*3*/] = { -2402.981f, 2926.109f, 31.8101f };
			Local_633[117 /*3*/] = { -2388.711f, 2931.548f, 31.8101f };
			Local_633[118 /*3*/] = { -2376.195f, 2935.068f, 31.8101f };
			Local_633[119 /*3*/] = { -2362.174f, 2937.172f, 31.8101f };
			Local_633[120 /*3*/] = { -2349.693f, 2937.485f, 31.8097f };
			Local_633[121 /*3*/] = { -2335.747f, 2935.854f, 31.8095f };
			Local_633[122 /*3*/] = { -2318.942f, 2929.66f, 31.7445f };
			Local_633[123 /*3*/] = { -2297.421f, 2923.055f, 31.402f };
			Local_633[124 /*3*/] = { -2273.065f, 2913.495f, 31.1485f };
			Local_633[125 /*3*/] = { -2255.359f, 2902.834f, 31.3591f };
			Local_633[126 /*3*/] = { -2229.69f, 2883.807f, 31.236f };
			Local_633[127 /*3*/] = { -2202.925f, 2869.314f, 31.1578f };
			Local_633[128 /*3*/] = { -2183.306f, 2857.042f, 31.1936f };
			Local_633[129 /*3*/] = { -2163.49f, 2841.464f, 31.3816f };
			Local_633[130 /*3*/] = { -2149.862f, 2823.891f, 31.4544f };
			Local_633[131 /*3*/] = { -2144.587f, 2808.735f, 31.4497f };
			Local_633[132 /*3*/] = { -2132.177f, 2795.02f, 31.7241f };
			Local_633[133 /*3*/] = { -2108.141f, 2785.463f, 31.7808f };
			Local_633[134 /*3*/] = { -2068.579f, 2784.021f, 31.4615f };
			Local_633[135 /*3*/] = { -2051.136f, 2791.31f, 31.825f };
			Local_633[136 /*3*/] = { -2042.002f, 2795.728f, 31.2093f };
			Local_633[137 /*3*/] = { -2024.121f, 2799.866f, 31.5836f };
			Local_633[138 /*3*/] = { -2004.372f, 2797.404f, 31.7003f };
			Local_633[139 /*3*/] = { -1976.047f, 2791.383f, 31.5104f };
			Local_633[140 /*3*/] = { -1947.483f, 2778.565f, 31.1414f };
			Local_633[141 /*3*/] = { -1936.379f, 2768.897f, 31.1447f };
			Local_633[142 /*3*/] = { -1929.758f, 2758.106f, 30.6489f };
			Local_633[143 /*3*/] = { -1925.991f, 2751.949f, 25.9925f };
			Local_633[144 /*3*/] = { -1921.41f, 2746.268f, 24.8392f };
			Local_633[145 /*3*/] = { -1915.137f, 2739.659f, 23.8019f };
			Local_633[146 /*3*/] = { -1900.307f, 2727.201f, 21.1878f };
			Local_633[147 /*3*/] = { -1883.745f, 2715.262f, 19.6892f };
			Local_633[148 /*3*/] = { -1875.748f, 2711.08f, 12.552f };
			Local_633[149 /*3*/] = { -1867.896f, 2703.139f, 3.0778f };
			Local_633[150 /*3*/] = { -1861.963f, 2692.423f, 3.1018f };
			Local_633[151 /*3*/] = { -1857.476f, 2683.575f, 3.2905f };
			Local_633[152 /*3*/] = { -1848.774f, 2668.988f, 2.0379f };
			Local_633[153 /*3*/] = { -1842.34f, 2663.985f, 1.5316f };
			Local_633[154 /*3*/] = { -1838.295f, 2661.605f, 0.5979f };
			Local_633[155 /*3*/] = { -1815.526f, 2665.483f, 0.7053f };
			Local_633[156 /*3*/] = { -1805.632f, 2669.156f, 2.2314f };
			Local_633[157 /*3*/] = { -1786.138f, 2670.602f, 2.2725f };
			Local_633[158 /*3*/] = { -1771.023f, 2668.491f, 2.1361f };
			Local_633[159 /*3*/] = { -1760.869f, 2665.975f, 1.8861f };
			Local_633[160 /*3*/] = { -1755.284f, 2664.367f, 1.7509f };
			Local_633[161 /*3*/] = { -1748.707f, 2663.003f, 1.9587f };
			Local_633[162 /*3*/] = { -1736.189f, 2659.886f, 1.9917f };
			Local_633[163 /*3*/] = { -1728.476f, 2658.183f, 1.9464f };
			Local_633[164 /*3*/] = { -1722.725f, 2657.996f, 2.0025f };
			Local_633[165 /*3*/] = { -1719.555f, 2657.884f, 1.4411f };
			Local_633[166 /*3*/] = { -1715.606f, 2657.734f, 0.7234f };
			Local_633[167 /*3*/] = { -1710.382f, 2658.301f, 0.4668f };
			Local_633[168 /*3*/] = { -1707.359f, 2659.483f, 0.282f };
			Local_633[169 /*3*/] = { -1703.736f, 2660.578f, 0.5126f };
			Local_633[170 /*3*/] = { -1697.277f, 2662.122f, 0.7382f };
			Local_633[171 /*3*/] = { -1694.411f, 2662.705f, 1.5014f };
			Local_633[172 /*3*/] = { -1690.597f, 2663.54f, 1.8258f };
			Local_633[173 /*3*/] = { -1683.022f, 2665.116f, 1.8626f };
			Local_633[174 /*3*/] = { -1677.613f, 2664.286f, 1.8642f };
			Local_633[175 /*3*/] = { -1675.041f, 2662.993f, 1.525f };
			Local_633[176 /*3*/] = { -1669.615f, 2661.57f, 1.3865f };
			Local_633[177 /*3*/] = { -1660.996f, 2660.514f, 1.5346f };
			Local_633[178 /*3*/] = { -1654.274f, 2660.621f, 1.3163f };
			Local_633[179 /*3*/] = { -1652.602f, 2661.721f, 0.846f };
			Local_633[180 /*3*/] = { -1650.772f, 2663.604f, 0.3205f };
			Local_633[181 /*3*/] = { -1648.723f, 2666.767f, -0.3498f };
			Local_633[182 /*3*/] = { -1646.614f, 2670.389f, -0.2246f };
			Local_633[183 /*3*/] = { -1645.298f, 2672.659f, 0.4074f };
			Local_633[184 /*3*/] = { -1643.886f, 2675.479f, 1.3415f };
			Local_633[185 /*3*/] = { -1643.052f, 2678.978f, 1.7816f };
			Local_633[186 /*3*/] = { -1643.81f, 2684.713f, 1.9387f };
			Local_633[187 /*3*/] = { -1644.436f, 2692.437f, 2.6905f };
			Local_633[188 /*3*/] = { -1643.396f, 2700.886f, 4.7337f };
			Local_633[189 /*3*/] = { -1642.371f, 2702.699f, 4.6934f };
			Local_633[190 /*3*/] = { -1634.92f, 2708.292f, 4.7769f };
			Local_633[191 /*3*/] = { -1622.842f, 2712.665f, 4.7364f };
			Local_633[192 /*3*/] = { -1616.741f, 2718.592f, 4.7278f };
			Local_633[193 /*3*/] = { -1615.26f, 2726.292f, 4.782f };
			Local_633[194 /*3*/] = { -1615.372f, 2740.197f, 5.415f };
			Local_633[195 /*3*/] = { -1615.563f, 2747.673f, 7.4045f };
			Local_633[196 /*3*/] = { -1615.097f, 2751.565f, 8.8844f };
			Local_633[197 /*3*/] = { -1611.762f, 2755.532f, 10.7072f };
			Local_633[198 /*3*/] = { -1608.429f, 2757.899f, 11.9354f };
			Local_633[199 /*3*/] = { -1603.668f, 2759.287f, 13.1858f };
			Local_633[200 /*3*/] = { -1595.852f, 2761.264f, 15.6171f };
			Local_633[201 /*3*/] = { -1591.107f, 2762.998f, 17.0786f };
			Local_633[202 /*3*/] = { -1588.631f, 2765.09f, 17.4527f };
			Local_633[203 /*3*/] = { -1583.653f, 2766.244f, 17.432f };
			Local_633[204 /*3*/] = { -1575.535f, 2763.518f, 17.2576f };
			Local_633[205 /*3*/] = { -1568.713f, 2759.889f, 17.0294f };
			Local_633[206 /*3*/] = { -1560.931f, 2756.537f, 16.5327f };
			Local_633[207 /*3*/] = { -1550.389f, 2752.672f, 16.8426f };
			Local_633[208 /*3*/] = { -1539.915f, 2745.988f, 16.6513f };
			Local_633[209 /*3*/] = { -1329.159f, 2560.402f, 16.6908f };
			Local_633[210 /*3*/] = { -1312.168f, 2545.424f, 17.302f };
			Local_633[211 /*3*/] = { -1299.685f, 2536.006f, 17.8598f };
			Local_633[212 /*3*/] = { -1294.188f, 2532.739f, 18.3548f };
			Local_633[213 /*3*/] = { -1288.149f, 2528.114f, 18.6202f };
			iLocal_1503 = 214;
			break;
		
		case 10:
			Local_633[0 /*3*/] = { 1007.392f, -677.4196f, 55.6986f };
			Local_633[1 /*3*/] = { 1015.88f, -640.8702f, 57.6189f };
			Local_633[2 /*3*/] = { 1028.693f, -521.0793f, 60.0037f };
			Local_633[3 /*3*/] = { 1001.013f, -469.0658f, 62.3685f };
			Local_633[4 /*3*/] = { 1024.273f, -438.0688f, 64.0854f };
			Local_633[5 /*3*/] = { 1099.331f, -371.6267f, 66.0863f };
			Local_633[6 /*3*/] = { 1154.278f, -350.7854f, 66.0453f };
			Local_633[7 /*3*/] = { 1196.453f, -317.2407f, 68.006f };
			Local_633[8 /*3*/] = { 1228.658f, -285.5526f, 69.5564f };
			Local_633[9 /*3*/] = { 1269.14f, -280.8539f, 78.9299f };
			Local_633[10 /*3*/] = { 1303.481f, -279.4128f, 89.277f };
			Local_633[11 /*3*/] = { 1307.264f, -261.738f, 93.4534f };
			Local_633[12 /*3*/] = { 1275.53f, -228.7392f, 97.2897f };
			Local_633[13 /*3*/] = { 1280.287f, -201.123f, 100.2999f };
			Local_633[14 /*3*/] = { 1316.522f, -182.0543f, 106.8589f };
			Local_633[15 /*3*/] = { 1328.355f, -161.1792f, 109.7738f };
			Local_633[16 /*3*/] = { 1330.984f, -124.4583f, 116.3178f };
			Local_633[17 /*3*/] = { 1349.718f, -112.3109f, 120.3794f };
			Local_633[18 /*3*/] = { 1440.839f, -126.4933f, 136.0253f };
			Local_633[19 /*3*/] = { 1547.464f, -88.492f, 155.8418f };
			Local_633[20 /*3*/] = { 1572.396f, -73.2005f, 158.7627f };
			Local_633[21 /*3*/] = { 1617.536f, -76.5607f, 164.2157f };
			Local_633[22 /*3*/] = { 1634.688f, -86.0398f, 166.32f };
			Local_633[23 /*3*/] = { 1652.054f, -86.2994f, 169.5492f };
			Local_633[24 /*3*/] = { 1677.106f, -69.6387f, 172.8701f };
			Local_633[25 /*3*/] = { 1708.012f, -81.5238f, 176.1925f };
			Local_633[26 /*3*/] = { 1727.578f, -106.2123f, 177.8113f };
			Local_633[27 /*3*/] = { 1743.88f, -104.5237f, 180.5338f };
			Local_633[28 /*3*/] = { 1787.022f, -75.6841f, 189.1488f };
			Local_633[29 /*3*/] = { 1830.548f, -88.8782f, 185.5151f };
			Local_633[30 /*3*/] = { 1869.148f, -84.2897f, 188.3576f };
			Local_633[31 /*3*/] = { 1908.125f, -94.0947f, 189.7598f };
			Local_633[32 /*3*/] = { 1935.856f, -70.0841f, 194.3318f };
			Local_633[33 /*3*/] = { 1965.012f, -81.9638f, 206.0977f };
			Local_633[34 /*3*/] = { 1994.382f, -81.4886f, 210.8208f };
			Local_633[35 /*3*/] = { 2015.317f, -15.1936f, 200.4373f };
			Local_633[36 /*3*/] = { 2045.597f, -7.7503f, 209.3502f };
			Local_633[37 /*3*/] = { 2097.736f, 3.6562f, 214.3764f };
			Local_633[38 /*3*/] = { 2170.912f, -23.0015f, 227.7495f };
			Local_633[39 /*3*/] = { 2216.6f, -39.4283f, 202.1804f };
			Local_633[40 /*3*/] = { 2265.253f, -42.4669f, 176.595f };
			Local_633[41 /*3*/] = { 2317.634f, -62.7793f, 143.5891f };
			Local_633[42 /*3*/] = { 2361.621f, -88.1377f, 114.5316f };
			Local_633[43 /*3*/] = { 2415.541f, -127.203f, 88.2837f };
			Local_633[44 /*3*/] = { 2442.605f, -132.4298f, 88.5436f };
			Local_633[45 /*3*/] = { 2467.73f, -87.5151f, 90.4025f };
			Local_633[46 /*3*/] = { 2478.927f, -49.3336f, 91.7194f };
			Local_633[47 /*3*/] = { 2514.862f, -54.7729f, 90.5497f };
			Local_633[48 /*3*/] = { 2535.467f, -44.4498f, 95.4292f };
			Local_633[49 /*3*/] = { 2551.987f, -14.4109f, 96.8787f };
			Local_633[50 /*3*/] = { 2564.848f, 7.4979f, 95.322f };
			Local_633[51 /*3*/] = { 2574.244f, 28.346f, 94.1519f };
			Local_633[52 /*3*/] = { 2583.104f, 64.6646f, 97.2344f };
			Local_633[53 /*3*/] = { 2590.313f, 90.8608f, 96.7709f };
			Local_633[54 /*3*/] = { 2605.615f, 146.4206f, 97.0373f };
			Local_633[55 /*3*/] = { 2608.438f, 159.9902f, 97.7789f };
			Local_633[56 /*3*/] = { 2616.801f, 193.4394f, 97.8768f };
			Local_633[57 /*3*/] = { 2620.917f, 208.1355f, 99.8613f };
			Local_633[58 /*3*/] = { 2622.716f, 214.0569f, 100.3944f };
			Local_633[59 /*3*/] = { 2625.155f, 223.4091f, 100.4454f };
			Local_633[60 /*3*/] = { 2628.51f, 238.1807f, 98.0427f };
			Local_633[61 /*3*/] = { 2631.146f, 251.6104f, 99.134f };
			Local_633[62 /*3*/] = { 2644.033f, 286.1281f, 96.6342f };
			Local_633[63 /*3*/] = { 2668.01f, 344.2533f, 93.6781f };
			Local_633[64 /*3*/] = { 2674.79f, 475.0252f, 93.3655f };
			Local_633[65 /*3*/] = { 2677.321f, 563.7356f, 92.1778f };
			Local_633[66 /*3*/] = { 2676.736f, 657.8879f, 88.5073f };
			Local_633[67 /*3*/] = { 2689.552f, 707.0382f, 83.2467f };
			Local_633[68 /*3*/] = { 2694.685f, 719.9797f, 79.118f };
			Local_633[69 /*3*/] = { 2705.136f, 742.6617f, 63.8294f };
			Local_633[70 /*3*/] = { 2732.751f, 770.7942f, 48.8289f };
			Local_633[71 /*3*/] = { 2754.752f, 779.1329f, 37.7362f };
			Local_633[72 /*3*/] = { 2795.073f, 775.9935f, 19.6025f };
			Local_633[73 /*3*/] = { 2815.378f, 772.0298f, 18.5162f };
			Local_633[74 /*3*/] = { 2823.101f, 760.8618f, 18.5399f };
			Local_633[75 /*3*/] = { 2829.417f, 747.6486f, 18.4988f };
			Local_633[76 /*3*/] = { 2838.551f, 742.6433f, 18.5283f };
			Local_633[77 /*3*/] = { 2852.99f, 747.0413f, 18.3301f };
			Local_633[78 /*3*/] = { 2866.382f, 755.1819f, 18.1503f };
			Local_633[79 /*3*/] = { 2876.903f, 759.4967f, 16.8825f };
			Local_633[80 /*3*/] = { 2883.941f, 767.9843f, 17.9021f };
			Local_633[81 /*3*/] = { 2890.169f, 774.4565f, 18.7225f };
			Local_633[82 /*3*/] = { 2898.975f, 775.8782f, 19.8196f };
			Local_633[83 /*3*/] = { 2908.946f, 777.8163f, 22.677f };
			Local_633[84 /*3*/] = { 2911.956f, 780.126f, 23.7715f };
			Local_633[85 /*3*/] = { 2917.168f, 783.8945f, 24.2316f };
			Local_633[86 /*3*/] = { 2924.857f, 790.0166f, 24.7335f };
			Local_633[87 /*3*/] = { 2934.356f, 798.6711f, 23.9277f };
			Local_633[88 /*3*/] = { 2940.85f, 803.635f, 23.7534f };
			Local_633[89 /*3*/] = { 2944.641f, 806.6476f, 23.5292f };
			Local_633[90 /*3*/] = { 2951.772f, 813.8921f, 22.0205f };
			iLocal_1503 = 91;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1503)
	{
		Var1 = { Local_633[iVar0 /*3*/] };
		Var4 = { Local_633[iVar0 + 1 /*3*/] };
		if (!func_29(Var4, 0f, 0f, 0f, 0))
		{
			fLocal_1285[iVar0] = unk_0x1410333E912D4EC6(Var1, Var4, 1);
			fLocal_1504 = (fLocal_1504 + fLocal_1285[iVar0]);
		}
		iVar0++;
	}
	fLocal_1506 = ((fLocal_1504 * 70f) / 100f);
	func_956(Local_633[0 /*3*/]);
}

void func_956(struct<3> Param0)
{
	Global_1574385.f_6 = { Param0 };
}

void func_957()
{
	Global_1776636 = 1;
	if (!unk_0x2A3398C6222EB190(Global_2509692, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2509692, 0);
		unk_0xCD7E92DE2BFA0B0D(&Global_1776637, 0);
	}
	if (!unk_0x2A3398C6222EB190(Global_2509692, 1))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2509692, 1);
		unk_0xCD7E92DE2BFA0B0D(&Global_1776637, 1);
	}
	if (!unk_0x2A3398C6222EB190(Global_2509692, 5))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2509692, 5);
		unk_0xCD7E92DE2BFA0B0D(&Global_1776637, 5);
	}
	if (unk_0xD7D749DFCCD114B8(-355737150))
	{
		unk_0x84436CFB65E8F6EA(-355737150, 0, 0, 0);
	}
	if (unk_0xD7D749DFCCD114B8(-580979506))
	{
		unk_0x84436CFB65E8F6EA(-580979506, 0, 0, 0);
	}
	if (unk_0xD7D749DFCCD114B8(-1426452475))
	{
		unk_0x84436CFB65E8F6EA(-1426452475, 0, 0, 0);
	}
	if (unk_0xD7D749DFCCD114B8(745417724))
	{
		unk_0x84436CFB65E8F6EA(745417724, 0, 0, 0);
	}
	if (unk_0xD7D749DFCCD114B8(-1305304906))
	{
		unk_0x84436CFB65E8F6EA(-1305304906, 0, 0, 0);
	}
	if (unk_0xD7D749DFCCD114B8(-1543175077))
	{
		unk_0x84436CFB65E8F6EA(-1543175077, 0, 0, 0);
	}
	if (unk_0xD7D749DFCCD114B8(-811770997))
	{
		unk_0x84436CFB65E8F6EA(-811770997, 0, 0, 0);
	}
}

bool func_958(int iParam0)
{
	var uVar0;
	
	uVar0 = func_48(2467, -1, 0);
	return unk_0x2A3398C6222EB190(uVar0, iParam0);
}

int func_959()
{
	return 1;
}

int func_960()
{
	return Local_122.f_0;
}

int func_961(int iParam0)
{
	return Local_321[iParam0 /*8*/];
}

void func_962(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_528(unk_0x3D35F9864E4640B1());
	if (func_130(iVar0))
	{
		Global_1779238.f_2 = func_998();
		Global_1779238.f_3 = func_997();
		Global_1779238.f_50 = iParam4;
		Global_1779238.f_51 = iParam5;
		Global_1779238.f_10 = unk_0x6239D1A379D387A4();
		Global_1779238.f_20 = (Global_1779238.f_10 - Global_1779238.f_9);
		Global_1779238.f_12 = iParam1;
		Global_1779238.f_19 = func_993(iVar0, bParam0, func_996(bParam3));
		if (bParam0)
		{
			Global_1779238.f_11 = 1;
		}
		else
		{
			Global_1779238.f_11 = 0;
		}
		if ((func_39(unk_0x3D35F9864E4640B1()) || func_37(unk_0x3D35F9864E4640B1())) || func_43(unk_0x3D35F9864E4640B1()))
		{
			Global_1779238.f_8 = 1;
		}
		else
		{
			Global_1779238.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1779238.f_43 = 0;
			Global_1779238.f_45 = func_897(func_158(), iParam2);
			Global_1779238.f_47 = iParam7;
			Global_1779238.f_46 = iParam6;
			Global_1779238.f_52 = func_992(func_158(), iParam2);
		}
		func_990(iVar0);
	}
	else if (func_129(iVar0))
	{
		Global_1779291.f_2 = func_998();
		Global_1779291.f_3 = func_997();
		Global_1779291.f_10 = unk_0x6239D1A379D387A4();
		Global_1779291.f_19 = (Global_1779291.f_10 - Global_1779291.f_9);
		Global_1779291.f_12 = iParam1;
		if (bParam0)
		{
			Global_1779291.f_11 = 1;
		}
		else
		{
			Global_1779291.f_11 = 0;
		}
		if ((func_39(unk_0x3D35F9864E4640B1()) || func_37(unk_0x3D35F9864E4640B1())) || func_43(unk_0x3D35F9864E4640B1()))
		{
			Global_1779291.f_8 = 1;
		}
		else
		{
			Global_1779291.f_8 = 0;
		}
		func_988(iVar0);
	}
	else if (func_128(iVar0))
	{
		Global_1779353.f_2 = func_998();
		Global_1779353.f_3 = func_997();
		Global_1779353.f_9 = unk_0x6239D1A379D387A4();
		Global_1779353.f_18 = (Global_1779353.f_9 - Global_1779353.f_8);
		Global_1779353.f_11 = iParam1;
		Global_1779353.f_7 = func_890();
		Global_1779353.f_42 = func_893(func_50(), 5);
		iVar1 = unk_0x3D35F9864E4640B1();
		iVar2 = func_149(iVar1);
		Global_1779353.f_28 = iVar2;
		Global_1779353.f_29 = func_892((func_864(iVar1) || func_863(iVar1)));
		Global_1779353.f_30 = func_892(func_987(iVar1));
		Global_1779353.f_32 = func_892(func_861(iVar1));
		Global_1779353.f_33 = func_892(func_862(iVar1));
		Global_1779353.f_34 = func_892(func_986(iVar1));
		Global_1779353.f_35 = func_892(func_860(0, iVar1) == 1);
		Global_1779353.f_36 = func_892(func_985(iVar1));
		Global_1779353.f_37 = func_892(func_984(iVar1));
		Global_1779353.f_38 = func_892(func_983(iVar1));
		Global_1779353.f_39 = func_892(func_266(iVar1, iVar2, 0));
		Global_1779353.f_40 = func_892(func_266(iVar1, iVar2, 2));
		Global_1779353.f_41 = func_892(func_266(iVar1, iVar2, 1));
		if (func_982(iVar1))
		{
			Global_1779353.f_31 = 2;
		}
		else if (func_981(iVar1))
		{
			Global_1779353.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1779353.f_10 = 1;
		}
		else
		{
			Global_1779353.f_10 = 0;
		}
		if ((func_39(unk_0x3D35F9864E4640B1()) || func_37(unk_0x3D35F9864E4640B1())) || func_43(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_6 = 1;
		}
		else
		{
			Global_1779353.f_6 = 0;
		}
		Global_1779353.f_21 = -2;
		Global_1779353.f_22 = -2;
		func_979(iVar0);
	}
	else if (func_127(iVar0))
	{
		Global_1779396.f_2 = func_998();
		Global_1779396.f_3 = func_997();
		if ((func_39(unk_0x3D35F9864E4640B1()) || func_37(unk_0x3D35F9864E4640B1())) || func_43(unk_0x3D35F9864E4640B1()))
		{
			Global_1779396.f_6 = 1;
		}
		else
		{
			Global_1779396.f_6 = 0;
		}
		Global_1779396.f_9 = unk_0x6239D1A379D387A4();
		Global_1779396.f_10 = func_892(bParam0);
		Global_1779396.f_11 = iParam1;
		Global_1779396.f_17 = func_891(func_220());
		Global_1779396.f_18 = (Global_1779396.f_9 - Global_1779396.f_8);
		Global_1779396.f_20 = iParam8;
		Global_1779396.f_21 = -2;
		Global_1779396.f_22 = -2;
		Global_1779396.f_27 = func_978();
		Global_1779396.f_29 = func_48(6086, -1, 0);
		Global_1779396.f_30 = func_48(6082, -1, 0);
		Global_1779396.f_31 = func_48(6083, -1, 0);
		Global_1779396.f_32 = func_48(6085, -1, 0);
		Global_1779396.f_33 = func_48(6084, -1, 0);
		Global_1779396.f_34 = func_48(6087, -1, 0);
		Global_1779396.f_36 = func_892(func_205(1));
		Global_1779396.f_37 = func_975();
		func_965();
		func_963(iVar0);
	}
	else
	{
		Global_1779220.f_6 = unk_0x6239D1A379D387A4();
		if (bParam0)
		{
			Global_1779220.f_7 = 1;
		}
		else
		{
			Global_1779220.f_7 = 0;
		}
		Global_1779220.f_8 = iParam1;
		if (Global_1779220.f_4 == 0)
		{
			if ((func_39(unk_0x3D35F9864E4640B1()) || func_37(unk_0x3D35F9864E4640B1())) || func_43(unk_0x3D35F9864E4640B1()))
			{
				Global_1779220.f_4 = 1;
			}
		}
	}
}

void func_963(int iParam0)
{
	switch (iParam0)
	{
		case 230:
		case default:
	}
	unk_0x320C35147D5B5DDD(&Global_1779396);
	func_964();
}

void func_964()
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1779396 = { Var0 };
	Global_1779396.f_23 = 0;
	Global_1779396.f_24 = 0;
	Global_1779396.f_16 = 0;
}

void func_965()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_879(12));
		func_878(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1319069[iVar1 /*140*/].f_66 != 0 && func_967(Global_1319069[iVar1 /*140*/].f_66, 1))
			{
				if (Global_2501777.f_863 != iVar1)
				{
					if (func_966(Global_1319069[iVar1 /*140*/].f_66))
					{
						if (Global_1319069[iVar1 /*140*/].f_66 != 0)
						{
							iVar3 = Global_1319069[iVar1 /*140*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1779396.f_38 = iVar3;
								break;
							
							case 1:
								Global_1779396.f_39 = iVar3;
								break;
							
							case 2:
								Global_1779396.f_40 = iVar3;
								break;
							
							case 3:
								Global_1779396.f_41 = iVar3;
								break;
							
							case 4:
								Global_1779396.f_42 = iVar3;
								break;
							
							case 5:
								Global_1779396.f_43 = iVar3;
								break;
							
							case 6:
								Global_1779396.f_44 = iVar3;
								break;
							
							case 7:
								Global_1779396.f_45 = iVar3;
								break;
							
							case 8:
								Global_1779396.f_46 = iVar3;
								break;
							
							case 9:
								Global_1779396.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_966(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
			return 1;
		
		default:
	}
	return 0;
}

int func_967(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x27CA09C6DFAB1E79()) || (iParam0 == joaat("buffalo3") && !unk_0x27CA09C6DFAB1E79())) || (iParam0 == joaat("gauntlet2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blista3"))
	{
		if (!func_974())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9F1747E93F8C8B1E())
		{
			if (unk_0xF87BC0F22BCEB035(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x03CF889BDA5553A9(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_973() && !func_972()) && !func_971()) && !func_970()) && !func_974())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_971())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_969(iParam0))
		{
			return 0;
		}
	}
	if (!func_968(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_968(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_311())
	{
		return 1;
	}
	unk_0xE2A314A6903DD12E(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x09E7CE4C231F1F83(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2488615)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x6239D1A379D387A4();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5994 && !Global_262145.f_12099) && iVar1 < Global_262145.f_12100)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13342 && iVar1 < Global_262145.f_13354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13338 && iVar1 < Global_262145.f_13350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13339 && iVar1 < Global_262145.f_13351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13340 && iVar1 < Global_262145.f_13352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13341 && iVar1 < Global_262145.f_13353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13343 && iVar1 < Global_262145.f_13355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13344 && iVar1 < Global_262145.f_13347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13345 && iVar1 < Global_262145.f_13348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13346 && iVar1 < Global_262145.f_13349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15973 && iVar1 < Global_262145.f_15938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15968 && iVar1 < Global_262145.f_15933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15972 && iVar1 < Global_262145.f_15937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15971 && iVar1 < Global_262145.f_15936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15965 && iVar1 < Global_262145.f_15930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15966 && iVar1 < Global_262145.f_15931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15969 && iVar1 < Global_262145.f_15934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15970 && iVar1 < Global_262145.f_15935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15967 && iVar1 < Global_262145.f_15932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15975 && iVar1 < Global_262145.f_15940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15976 && iVar1 < Global_262145.f_15941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15964 && iVar1 < Global_262145.f_15929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15963 && iVar1 < Global_262145.f_15928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15962 && iVar1 < Global_262145.f_15927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15974 && iVar1 < Global_262145.f_15939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15977 && iVar1 < Global_262145.f_15942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15978 && iVar1 < Global_262145.f_15943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15979 && iVar1 < Global_262145.f_15944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15980 && iVar1 < Global_262145.f_15945)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16125 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16126 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16127 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16128 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16129 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16130 && iVar1 < Global_262145.f_16152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16132 && iVar1 < Global_262145.f_16153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16133 && iVar1 < Global_262145.f_16154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16134 && iVar1 < Global_262145.f_16155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16135 && iVar1 < Global_262145.f_16156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16136 && iVar1 < Global_262145.f_16157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16137 && iVar1 < Global_262145.f_16158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16138 && iVar1 < Global_262145.f_16159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16144 && iVar1 < Global_262145.f_16166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16141 && iVar1 < Global_262145.f_16162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16142 && iVar1 < Global_262145.f_16163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16143 && iVar1 < Global_262145.f_16164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16131 && iVar1 < Global_262145.f_16165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16145 && iVar1 < Global_262145.f_16167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16139 && iVar1 < Global_262145.f_16160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16140 && iVar1 < Global_262145.f_16161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16146 && iVar1 < Global_262145.f_16168)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17774 && iVar1 < Global_262145.f_17815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17775 && iVar1 < Global_262145.f_17816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17776 && iVar1 < Global_262145.f_17817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17777 && iVar1 < Global_262145.f_17818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17778 && iVar1 < Global_262145.f_17819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17779 && iVar1 < Global_262145.f_17820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17780 && iVar1 < Global_262145.f_17821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17781 && iVar1 < Global_262145.f_17822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17782 && iVar1 < Global_262145.f_17823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17783 && iVar1 < Global_262145.f_17824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17784 && iVar1 < Global_262145.f_17825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17785 && iVar1 < Global_262145.f_17826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17786 && iVar1 < Global_262145.f_17827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17787 && iVar1 < Global_262145.f_17828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17788 && iVar1 < Global_262145.f_17829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17789 && iVar1 < Global_262145.f_17830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17790 && iVar1 < Global_262145.f_17831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17791 && iVar1 < Global_262145.f_17832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17792 && iVar1 < Global_262145.f_17833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17793 && iVar1 < Global_262145.f_17834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17794 && iVar1 < Global_262145.f_17835)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17795 && iVar1 < Global_262145.f_17836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17796 && iVar1 < Global_262145.f_17837)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17839)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18801 && iVar1 < Global_262145.f_18797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18802 && iVar1 < Global_262145.f_18798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18803 && iVar1 < Global_262145.f_18799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18804 && iVar1 < Global_262145.f_18800)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19643 && iVar1 < Global_262145.f_19651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19644 && iVar1 < Global_262145.f_19652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19645 && iVar1 < Global_262145.f_19653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19646 && iVar1 < Global_262145.f_19654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19647 && iVar1 < Global_262145.f_19655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19648 && iVar1 < Global_262145.f_19656)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20411 && iVar1 < Global_262145.f_20431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20423 && iVar1 < Global_262145.f_20443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20414 && iVar1 < Global_262145.f_20434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20424 && iVar1 < Global_262145.f_20444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20412 && iVar1 < Global_262145.f_20432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20428 && iVar1 < Global_262145.f_20448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20426 && iVar1 < Global_262145.f_20446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20427 && iVar1 < Global_262145.f_20447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20422 && iVar1 < Global_262145.f_20442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20429 && iVar1 < Global_262145.f_20449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20425 && iVar1 < Global_262145.f_20445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20421 && iVar1 < Global_262145.f_20441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20413 && iVar1 < Global_262145.f_20433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20415 && iVar1 < Global_262145.f_20435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20416 && iVar1 < Global_262145.f_20436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20417 && iVar1 < Global_262145.f_20437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20418 && iVar1 < Global_262145.f_20438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20419 && iVar1 < Global_262145.f_20439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20420 && iVar1 < Global_262145.f_20440)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_970()
{
	return 0;
}

int func_971()
{
	return 1;
}

int func_972()
{
	return 1;
}

int func_973()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_974()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_975()
{
	var uVar0;
	
	uVar0 = func_977();
	if (!func_150())
	{
		if (func_158() != func_364())
		{
			uVar0 = func_976(func_158()) + 1;
		}
	}
	return uVar0;
}

int func_976(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_18;
}

int func_977()
{
	return func_976(unk_0x3D35F9864E4640B1()) + 1;
}

int func_978()
{
	return func_48(6092, -1, 0);
}

void func_979(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x868A7E5D770758C3(&Global_1779353);
	func_980();
}

void func_980()
{
	struct<43> Var0;
	
	Global_1779353 = { Var0 };
	Global_1779353.f_23 = 0;
	Global_1779353.f_24 = 0;
	Global_1779353.f_16 = 0;
}

bool func_981(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 12);
}

bool func_982(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 13);
}

int func_983(int iParam0)
{
	if (iParam0 != func_364())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 12) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 13)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_984(int iParam0)
{
	if (iParam0 != func_364())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_985(int iParam0)
{
	if (iParam0 != func_364())
	{
		if (((((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 3) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 4)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 5)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_986(int iParam0)
{
	if (iParam0 != func_364())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 6) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 7)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_987(int iParam0)
{
	if (iParam0 == func_364())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 9);
}

void func_988(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA8F7390A60969E48(&Global_1779291);
	func_989();
}

void func_989()
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
	Global_1779291 = { Var0 };
	Global_1779291.f_24 = 0;
	Global_1779291.f_25 = 0;
	Global_1779291.f_17 = 0;
}

void func_990(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA46325BE4A9EEE31(&Global_1779238);
	func_991();
}

void func_991()
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
	Global_1779238 = { Var0 };
	Global_1779238.f_29 = 0;
	Global_1779238.f_30 = 0;
	Global_1779238.f_17 = 0;
}

int func_992(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_266(iParam0, iParam1, 2);
	bVar1 = func_266(iParam0, iParam1, 1);
	bVar2 = func_266(iParam0, iParam1, 0);
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

int func_993(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_139(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16815;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16814;
		}
		else
		{
			iVar0 = Global_262145.f_16796;
		}
		iVar1 = 19;
	}
	else if (func_901(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_133(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16795;
			iVar1 = 20;
		}
	}
	else if (func_130(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16815;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16814;
		}
		else
		{
			iVar0 = Global_262145.f_16796;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x83FF67474F030301(func_900(func_158()), func_899(func_158()), func_998(), func_997(), iVar1, iVar0);
	}
	func_995(iVar0);
	func_994(iVar0);
	return iVar0;
}

void func_994(int iParam0)
{
	int iVar0;
	
	iVar0 = func_48(3947, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_410 = iVar0;
	func_137(3947, iVar0, -1, 1, 0);
}

void func_995(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	Global_1623799[iVar0 /*488*/].f_11.f_409 = (Global_1623799[iVar0 /*488*/].f_11.f_409 + iParam0);
	if (Global_1623799[iVar0 /*488*/].f_11.f_409 < -9999)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_409 = 9999;
	}
	else if (Global_1623799[iVar0 /*488*/].f_11.f_409 > 9999)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_409 = 9999;
	}
}

int func_996(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_39(unk_0x3D35F9864E4640B1()) || func_43(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

int func_997()
{
	if (Global_1779220.f_3 != 0)
	{
		return Global_1779220.f_3;
	}
	return -1;
}

int func_998()
{
	if (Global_1779220.f_2 != 0)
	{
		return Global_1779220.f_2;
	}
	return -1;
}

int func_999(bool bParam0)
{
	if (func_1000(1))
	{
		return 1;
	}
	if (Global_2501777.f_4867.f_25)
	{
		Global_2501777.f_4867.f_25 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_220() == func_364() || !func_1124(func_220(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1000(bool bParam0)
{
	bool bVar0;
	
	if (!func_156(1))
	{
		bVar0 = false;
		if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 != func_364())
		{
			if (func_1124(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56, 0, 1))
			{
				if ((Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 4 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 8) || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_1001(func_528(unk_0x3D35F9864E4640B1())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_213(31);
				if (func_130(func_528(unk_0x3D35F9864E4640B1())))
				{
					func_213(81);
				}
				if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 != func_364() && unk_0x80BA8E3CC61A8625(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56))
				{
					Global_1622383 = func_82(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56, -2, 0, 0);
					if (!func_155(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56))
					{
						func_213(88);
					}
				}
				else
				{
					Global_1622383 = 1;
				}
				Global_1622367 = { Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1001(int iParam0)
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
		case 229:
		case 230:
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

void func_1002()
{
	if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 6))
	{
		func_814();
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 6);
	}
	if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 7))
	{
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 4) || unk_0x2A3398C6222EB190(Global_1574385.f_1, 16))
		{
			if (((!unk_0x90EEDEFFBABEF36F() && !unk_0x068C69D0643C4B95()) && !func_537()) && func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 7);
				func_597("FME_PASINT", 30000);
				func_596(1);
			}
		}
		else if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 17))
		{
			if (func_42() && !func_338())
			{
				unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 17);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 16);
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 23))
	{
		if (((((!unk_0x90EEDEFFBABEF36F() && !unk_0x2A3398C6222EB190(Global_2501777.f_773, 2)) && func_1124(unk_0x3D35F9864E4640B1(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x068C69D0643C4B95())
		{
			if (func_1019())
			{
				func_597("AMEV_GA_RP", -1);
				if (func_528(unk_0x3D35F9864E4640B1()) != 200)
				{
					func_596(1);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 23);
			}
		}
	}
	if (unk_0x957E53BB191CB24D() && unk_0xA095EFC51C188A82() == 15)
	{
		if (func_40(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0xA7D65AEDCF363C6A(1344549371))
			{
				unk_0x72FE4F9355DA095B(1344549371);
			}
		}
		else if (unk_0xA7D65AEDCF363C6A(1344549371))
		{
			unk_0x812DD153A22D0357(1344549371);
		}
	}
	if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 9))
	{
		if ((((!unk_0x90EEDEFFBABEF36F() && !unk_0x068C69D0643C4B95()) && !func_537()) && func_1124(unk_0x3D35F9864E4640B1(), 1, 1)) && !func_337(unk_0x3D35F9864E4640B1(), 21))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 9);
			func_1018(0);
			func_597("FME_TBL00", -1);
			func_596(1);
		}
	}
	if (func_45(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 18))
		{
			if ((func_337(unk_0x3D35F9864E4640B1(), 21) && unk_0x2A3398C6222EB190(Global_1574385.f_1, 20)) && !unk_0x2A3398C6222EB190(Global_1574385.f_1, 19))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 18);
			}
		}
		else if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 18))
		{
			if (((((!unk_0x90EEDEFFBABEF36F() && !unk_0x068C69D0643C4B95()) && !func_537()) && func_1124(unk_0x3D35F9864E4640B1(), 1, 1)) && unk_0xF9FC07CC13402AEF()) && !Global_2501777.f_4800)
			{
				unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 18);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 19);
				func_597("AMTT_RPAS", -1);
				func_596(1);
			}
		}
	}
	if (((((func_45(unk_0x3D35F9864E4640B1()) && !func_44(unk_0x3D35F9864E4640B1())) && func_527(unk_0x3D35F9864E4640B1()) != 146) && !func_341(unk_0x3D35F9864E4640B1())) && !func_1017(unk_0x3D35F9864E4640B1())) && !func_1013())
	{
		if (func_804(func_527(unk_0x3D35F9864E4640B1())))
		{
			unk_0x22DFDF650A525398(unk_0x3D35F9864E4640B1());
		}
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 22))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 22);
		}
		if (func_41(unk_0x3D35F9864E4640B1()) || func_802())
		{
			if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 10))
			{
				if (func_1011(func_527(unk_0x3D35F9864E4640B1())))
				{
					if (func_47(0) && !Global_2391044)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 9);
					}
					if (!Global_2391044)
					{
						func_677(1);
						unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 14);
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 10);
			}
		}
		if (func_40(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 11))
			{
				if (!Global_92814.f_8)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 12);
					func_718(1);
				}
				if (!func_1010())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 13);
					func_803();
				}
				if (!Global_2391044)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 14);
					if (func_47(0) && !Global_2391044)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 9);
					}
					func_677(1);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 11);
			}
		}
		else
		{
			func_1008(0);
		}
	}
	else
	{
		func_1008(1);
	}
	func_1003();
	if (func_801(func_527(unk_0x3D35F9864E4640B1())) && !unk_0x2A3398C6222EB190(Global_1574385.f_1, 21))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 21);
	}
	if ((func_42() && !func_338()) || func_337(unk_0x3D35F9864E4640B1(), 21))
	{
		if (!unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 10))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 10);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 10))
	{
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 10);
	}
}

void func_1003()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_537())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_745(iVar2))
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
				if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 26))
				{
					unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 26);
				}
				func_1004(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 26))
	{
		func_6(&(Global_1574385.f_22));
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 26);
	}
}

void func_1004(int iParam0, int iParam1)
{
	if (!func_8(&(Global_1574385.f_22)))
	{
		func_363(&(Global_1574385.f_22), 0, 0);
	}
	else if (func_7(&(Global_1574385.f_22), iParam1, 0))
	{
		if (func_584() > 0)
		{
			func_1007(iParam0);
			if (func_470("AMEV_LBD_HELP"))
			{
				unk_0x8C361F37C04084F4(1);
			}
			func_6(&(Global_1574385.f_22));
		}
	}
	else
	{
		func_1006(0);
		func_1005();
	}
}

void func_1005()
{
	Global_2501777.f_4489 = 0;
}

void func_1006(int iParam0)
{
	Global_1354565.f_68 = iParam0;
}

void func_1007(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434915.f_2484[iVar0 /*76*/].f_1 == iParam0)
		{
			Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

void func_1008(int iParam0)
{
	if ((unk_0x2A3398C6222EB190(Global_1574385.f_1, 11) || (unk_0x2A3398C6222EB190(Global_1574385.f_1, 10) && iParam0)) || (unk_0x2A3398C6222EB190(Global_1574385.f_1, 22) && iParam0))
	{
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 12))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 12);
			func_718(0);
		}
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 13))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 13);
			func_1009();
		}
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 14) && !func_339(unk_0x3D35F9864E4640B1(), 0))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 14);
			func_677(0);
		}
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 11);
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 10);
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 22);
	}
}

void func_1009()
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4705), 0);
}

bool func_1010()
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_4705, 0);
}

int func_1011(int iParam0)
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
			return func_40(unk_0x3D35F9864E4640B1());
		
		case 133:
			return (func_802() || func_1012(func_556()));
		
		default:
	}
	return 0;
}

int func_1012(int iParam0)
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

int func_1013()
{
	if (((((((((func_647() || func_457()) || func_646()) || func_421()) || (func_643() && !unk_0xF4F91CD09D59F42E())) || (func_1016() && !func_1015())) || Global_2394684) || Global_2394684.f_1 != 0) || Global_2394757 != 0) || (func_1014() == 2 && !unk_0xF4F91CD09D59F42E()))
	{
		return 1;
	}
	return 0;
}

int func_1014()
{
	return Global_979818;
}

bool func_1015()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 27);
}

int func_1016()
{
	if (func_639() || func_638())
	{
		return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 == 8;
	}
	return 0;
}

bool func_1017(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		if ((func_42() && !func_338()) || func_337(unk_0x3D35F9864E4640B1(), 21))
		{
			return 1;
		}
		if (func_8(&(Global_1574385.f_13)))
		{
			if (!func_7(&(Global_1574385.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_6(&(Global_1574385.f_13));
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 9);
}

void func_1018(int iParam0)
{
	int iVar0;
	
	iVar0 = func_48(2521, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x2A3398C6222EB190(iVar0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 1);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x2A3398C6222EB190(iVar0, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 3);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 4))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 4);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 5))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x2A3398C6222EB190(iVar0, 6))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 6);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 7))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 7);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 8))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x2A3398C6222EB190(iVar0, 9))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 9);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 10))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 10);
		}
		else if (!unk_0x2A3398C6222EB190(iVar0, 11))
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 11);
		}
	}
	func_137(2521, iVar0, -1, 1, 0);
}

int func_1019()
{
	int iVar0;
	
	if (!func_8(&(Global_1574385.f_15)))
	{
		func_363(&(Global_1574385.f_15), 0, 0);
		Global_1574385.f_17 = 0;
	}
	else if (func_7(&(Global_1574385.f_15), 1000, 0))
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(Global_1574385.f_17)))
		{
			iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Global_1574385.f_17));
			if (unk_0x80BA8E3CC61A8625(iVar0))
			{
				if (func_1124(iVar0, 1, 1) && func_1020(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_195(unk_0x3D35F9864E4640B1()), func_195(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574385.f_17++;
		if (Global_1574385.f_17 >= 32)
		{
			Global_1574385.f_17 = 0;
			func_6(&(Global_1574385.f_15));
		}
	}
	return 0;
}

int func_1020(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_187(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1593076[iVar0 /*647*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1021()
{
	return Global_1574385.f_24;
}

bool func_1022(int iParam0)
{
	return !func_1023(iParam0);
}

int func_1023(int iParam0)
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
			if (Global_262145.f_6055)
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6056)
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6057)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6058)
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_1024(4))
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_1024(4))
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_1024(4))
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_1024(4))
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_1024(4))
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_1024(4))
			{
				return 0;
			}
			if (func_337(unk_0x3D35F9864E4640B1(), 7))
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

int func_1024(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1124(unk_0xA7871E29B06DA901(iVar0), 0, 1))
		{
			if (unk_0x2A3398C6222EB190(Global_2422142[iVar0 /*399*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1025()
{
	var uVar0;
	
	func_1029(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_1028())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_1027())
	{
		return 1;
	}
	if (func_1026(157))
	{
		if (!func_647())
		{
			return 1;
		}
	}
	if (func_1026(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_681() != 0)
	{
		if (unk_0x7832F791572D5809(func_681()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1026(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1027()
{
	return Global_2455114;
}

bool func_1028()
{
	return Global_2445582.f_574;
}

void func_1029(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_1030(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1030(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_1124(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(iVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(iVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_1031(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_1031(int iParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(iParam0))
		{
			if (unk_0x8D0F418585E0886B(iParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam0)))
				{
					unk_0x1581691D748490F3(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(iParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1032()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_1033()
{
	int iVar0;
	
	if (unk_0x2A3398C6222EB190(iLocal_580, 0))
	{
		unk_0x438B2E6B2BAD6A0D(5);
		unk_0xD804ACF2A7171150(&iLocal_580, 0);
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 5) || unk_0x2A3398C6222EB190(Local_122.f_1, 12))
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_184.f_3))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0xECB7D3275586261E(Local_122.f_184.f_3)))
			{
				if (unk_0x3B077EBCBD1ABF1F(unk_0xECB7D3275586261E(Local_122.f_184.f_3)))
				{
					if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_184.f_2), 0))
					{
						unk_0xD706D9D85701BFBD(unk_0xECB7D3275586261E(Local_122.f_184.f_3));
						if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(Local_122.f_184.f_7)) && !unk_0x7A6C051038031EFA(unk_0xD33F4BC17EB987E5(Local_122.f_184.f_7), 0))
						{
							unk_0x3A7639BDA0C847F6(unk_0xECB7D3275586261E(Local_122.f_184.f_3), unk_0xD7E2A160FD5DEEE1(Local_122.f_184.f_2), 0, unk_0xD33F4BC17EB987E5(Local_122.f_184.f_7), 0f, 0f, 0f, 8, 20f, 1000f, -1f, 60, 50, -1082130432, 0);
						}
						else
						{
							unk_0x67ABC034CBFBD349(unk_0xECB7D3275586261E(Local_122.f_184.f_3), 2048, 1);
							unk_0x109515D259FB313E(unk_0xECB7D3275586261E(Local_122.f_184.f_3), unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_184.f_3), 1), 10000f, 999999, 0, 0);
						}
						unk_0x390D16BCBFB23E1A(unk_0xECB7D3275586261E(Local_122.f_184.f_3), 1);
					}
				}
			}
		}
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0) || unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 6))
		{
			if (func_698())
			{
				func_696();
			}
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_580, 3))
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_2042))
		{
			if (unk_0x432757A9E7AAFA96(iLocal_2042, 0))
			{
				unk_0x31EFA4297B872C86(iLocal_2042, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xD804ACF2A7171150(&iLocal_580, 3);
			}
		}
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_462())
		{
			func_631(unk_0x3D35F9864E4640B1(), 1, 0);
			func_463();
		}
	}
	func_729(24, 0);
	func_1091(0);
	if (!unk_0x2A3398C6222EB190(iLocal_579, 24))
	{
		if (Local_122.f_197 == 2)
		{
			func_1041(1, 0);
		}
		else if (unk_0x27CA09C6DFAB1E79())
		{
			func_710(136, 0, unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 2));
		}
		else
		{
			func_710(136, 0, 0);
		}
	}
	else if (Local_122.f_197 == 2)
	{
		func_1041(1, 0);
	}
	if (unk_0x834C6A3950A9090B(unk_0x0031992CA618A445()) == iLocal_595)
	{
		unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_597);
	}
	if (Local_122.f_197 == 2)
	{
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 8))
		{
			func_814();
		}
	}
	if (unk_0x3D35F9864E4640B1() != -1)
	{
		if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 136)
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] = -1;
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_578, 6))
	{
		unk_0xC84CB7879942C3BA("pennedIn");
		unk_0xF177BD202464664F("PennedInOut", 0, 0);
		unk_0xD804ACF2A7171150(&iLocal_578, 6);
	}
	if (unk_0x3A7B47D96E536F61("MP_Player_Inside_Bubble_Scene"))
	{
		unk_0xB3E27A9E412BBDF8("MP_Player_Inside_Bubble_Scene");
	}
	if (unk_0x3A7B47D96E536F61("MP_Player_Outside_Bubble_Scene"))
	{
		unk_0xB3E27A9E412BBDF8("MP_Player_Outside_Bubble_Scene");
	}
	func_768(&uLocal_2742);
	func_1040();
	if (unk_0x27CA09C6DFAB1E79())
	{
		func_764();
	}
	func_775(0);
	func_590(0, 136);
	unk_0x936CA0C0DD22F11B(0);
	if (unk_0x2A3398C6222EB190(iLocal_579, 11))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_579, 12))
		{
			unk_0x62316D43A8F729C6(1);
			unk_0x1E420F926A7BC4D2("MP_MC_STOP");
		}
	}
	if (Local_122.f_197 != 2)
	{
		if (func_1025())
		{
			Local_2748.f_5 = 5;
		}
		else if (func_765(2, 0, 1, 0, 0))
		{
			Local_2748.f_5 = 6;
		}
		else if (func_122() == unk_0x3D35F9864E4640B1())
		{
			Local_2748.f_5 = 1;
		}
		else
		{
			Local_2748.f_5 = 2;
		}
		Local_2748.f_0 = Local_122.f_179;
		Local_2748.f_1 = Local_122.f_180;
		Local_2748.f_4 = Local_122.f_181;
		Local_2748.f_3 = Local_122.f_183;
		Local_2748.f_10 = (unk_0x6239D1A379D387A4() - Local_2748.f_9);
		func_1039(Local_2748, -1, -1, -1, -1, -1, -1);
	}
	else
	{
		Global_1779238.f_25 = Local_122.f_181;
		Global_1779220.f_2 = Local_122.f_179;
		Global_1779220.f_3 = Local_122.f_180;
		func_1037(Global_1779220, -1, -1, -1, -1);
		if (!unk_0x2A3398C6222EB190(iLocal_579, 31))
		{
			if (unk_0x43B24C247F35B6BC() > -1)
			{
				func_962(0, 4, 0, !unk_0x2A3398C6222EB190(Local_321[unk_0x43B24C247F35B6BC() /*8*/].f_1, 0), -1, -1, -1, -1, -1);
			}
		}
	}
	if (!func_301())
	{
		if (Local_2748.f_6 > 0)
		{
			if (Local_2748.f_5 == 1)
			{
				if (Local_122.f_197 != 2)
				{
					func_1036();
				}
			}
		}
	}
	func_815();
	func_743(0);
	func_404(0);
	if (func_402(unk_0x3D35F9864E4640B1()))
	{
		func_824(0);
	}
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0xA87C74ED0BD27A79(unk_0x0031992CA618A445()))
	{
		unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
	}
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
		}
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
	}
	func_1035(0);
	unk_0xD804ACF2A7171150(&iLocal_578, 18);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x2A3398C6222EB190(uLocal_585, iVar0))
		{
			if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(iVar0)))
			{
				unk_0x294ACF7B5F4EB4B4(unk_0xA7871E29B06DA901(iVar0), 0);
			}
		}
		iVar0++;
	}
	func_817(1);
	unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 422, 0);
	if (unk_0x2A3398C6222EB190(iLocal_580, 2))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			unk_0x31EFA4297B872C86(unk_0x0031992CA618A445(), 0, 0, 0, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&iLocal_580, 2);
		}
	}
	func_1034();
}

void func_1034()
{
	unk_0xBEE2834559A8897A();
}

void func_1035(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 6);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 6);
	}
}

void func_1036()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1700), 18);
}

void func_1037(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	sVar0 = unk_0x49CAADAD1ABAB70A();
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xB3404E397FF56B3B(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			unk_0xFCB21B10550C4385(&Var1);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1779220.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			unk_0xE626A1EA95FE5584(&Var16);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1779220.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			unk_0x5061375DA6D874CA(&Var35);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1779220.f_14;
			Var54.f_15 = iParam14;
			unk_0xD359A794CA7725CB(&Var54);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1779220.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			unk_0xD832DFD403274EFB(&Var70);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1779220.f_14;
			unk_0x02A35DBEC9E1F8FA(&Var87);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (unk_0xBBDA792448DB5A89(iParam14) / unk_0xBBDA792448DB5A89(iParam15));
			Var102.f_16 = iParam16;
			unk_0x347BFDFD95136495(&Var102);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1779220.f_14;
			unk_0xD31925A7EE039CBA(&Var119);
		}
	}
	func_1038();
}

void func_1038()
{
	struct<18> Var0;
	
	Global_1779220 = { Var0 };
}

void func_1039(struct<12> Param0, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	sVar0 = unk_0x49CAADAD1ABAB70A();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_70785)
	{
		if (unk_0xB3404E397FF56B3B(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = iParam12;
			unk_0x961467AE077EC8CA(&Var1);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = iParam12;
			Var14.f_13 = iParam13;
			unk_0x8DA40E956FD51C24(&Var14);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = iParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x0DB16CEA7E73097D(&Var28);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = iParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x6AA7B4685F7F94A8(&Var52);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_penned_in"))
		{
			unk_0xF19B487C64D59647(&Param0);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = iParam12;
			unk_0x03F536C7BCBEA1B0(&Var66);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = iParam12;
			Var79.f_13 = iParam13;
			unk_0x3AE25A7FC6625C45(&Var79);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = iParam12;
			Var93.f_13 = iParam13;
			unk_0x8952CE44914039E1(&Var93);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = iParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x02E2D3529F5B1631(&Var107);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = iParam12;
			unk_0x4B76FBB660A02D46(&Var123);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = iParam12;
				Var136.f_13 = iParam13;
				unk_0x4EC33530CC427351(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = iParam12;
				Var150.f_13 = iParam13;
				unk_0xAA72309DE122AE0C(&Var150);
			}
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = iParam12;
			unk_0xD9281F0282F9F44A(&Var164);
		}
	}
}

void func_1040()
{
	unk_0x15C7C9DD9A0BD58C(iLocal_596);
	unk_0x15C7C9DD9A0BD58C(iLocal_595);
}

void func_1041(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1344830.f_1.f_108 != 0)
	{
		Global_1344830.f_1.f_108 = 0;
	}
	Global_1344830.f_1.f_109 = -1;
	Global_1344830.f_1.f_110 = -1;
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 167 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 168)
	{
		func_1089();
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 4);
	}
	if ((func_154() && iParam1 != 0) && Global_262145.f_16099)
	{
		if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 190 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192)
		{
			func_1073(unk_0x3D35F9864E4640B1(), iParam1, Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192, 0);
			if (func_1072(iParam1))
			{
				func_1073(unk_0x3D35F9864E4640B1(), iParam1, Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 164 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 208)
	{
		unk_0x326E498BE1EE12A8(3, 1);
		unk_0x326E498BE1EE12A8(5, 1);
	}
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 != -1)
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 = -1;
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 14) && !func_45(unk_0x3D35F9864E4640B1()))
		{
			func_677(0);
		}
	}
	else if (func_378(unk_0x3D35F9864E4640B1()) != -1)
	{
		func_844(-1);
	}
	func_1071(func_364());
	if (func_207(16))
	{
		func_656(16);
	}
	func_1068(0);
	func_909(-1);
	func_1067();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1066(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1064(iVar1);
		iVar1++;
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 0))
	{
		unk_0x15007EAE63C7ECCF(1f);
		unk_0x438B2E6B2BAD6A0D(5);
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 5))
	{
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 5);
	}
	iVar2 = func_1063();
	if ((func_530(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1062(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_139(iVar2))
	{
		func_1058(-1, 1);
	}
	else if ((((func_1057(iVar2) || func_1056(iVar2)) || func_1055(iVar2)) || func_128(iVar2)) || func_127(iVar2))
	{
	}
	else
	{
		func_1058(-1, 1);
	}
	func_336(19);
	func_336(20);
	func_336(21);
	func_336(22);
	func_336(27);
	func_656(3);
	func_656(4);
	func_656(7);
	func_1054();
	if (func_39(unk_0x3D35F9864E4640B1()))
	{
		func_809(0);
	}
	func_336(29);
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 = func_364();
	if (Global_2501777.f_4867.f_25 != 0)
	{
		Global_2501777.f_4867.f_25 = 0;
	}
	if (bParam0)
	{
		func_657();
	}
	if (!func_45(unk_0x3D35F9864E4640B1()))
	{
		func_675();
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 6))
	{
		unk_0x326E498BE1EE12A8(3, 1);
		unk_0x326E498BE1EE12A8(5, 1);
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 6);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 7))
	{
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 7);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 8))
	{
		func_1053("IMPEXP_SELFDES", 0);
		func_1044("IMPEXP_SELFDES");
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 8);
	}
	func_1042(iVar2, 0);
}

void func_1042(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x2A3398C6222EB190(Global_1779211.f_3, 9))
		{
			unk_0xFD69BDF108B32E5B(func_1043(iParam0));
			unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 9);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 9))
	{
		unk_0xB3E27A9E412BBDF8(func_1043(iParam0));
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 9);
	}
}

char* func_1043(int iParam0)
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

void func_1044(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x996B09F758C57FBE(&(Global_104439.f_14002[iVar0 /*104*/])))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_104439.f_14002[iVar0 /*104*/]), sParam0))
			{
				if (Global_104439.f_14002[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_1046();
					Global_104439.f_14002[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_1045(iVar0))
					{
					}
					else
					{
						Global_104439.f_14002[iVar0 /*104*/].f_24 = 0;
						Global_104439.f_14002[iVar0 /*104*/].f_28 = 0;
						Global_104439.f_14002[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x184D9974941265BF(Global_104439.f_14002[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1045(int iParam0)
{
	if ((Global_104439.f_14002[iParam0 /*104*/].f_99[0] == 1 || Global_104439.f_14002[iParam0 /*104*/].f_99[1] == 1) || Global_104439.f_14002[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1046()
{
	if (func_1052(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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
		Global_14443 = func_1047();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_1047()
{
	func_1048();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_1048()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_1051(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_1050(unk_0x0031992CA618A445());
			if (func_1049(iVar0) && (!func_1052(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_1049(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_1049(int iParam0)
{
	return iParam0 < 3;
}

int func_1050(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1051(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1051(int iParam0)
{
	if (func_1049(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_1052(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_1053(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x996B09F758C57FBE(&(Global_104439.f_14002[iVar0 /*104*/])))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_104439.f_14002[iVar0 /*104*/]), sParam0))
			{
				if (Global_104439.f_14002[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104439.f_14002[iVar0 /*104*/].f_24 = 1;
				if (Global_104439.f_14002[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104439.f_13912[0 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104439.f_13912[1 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104439.f_13912[2 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104439.f_13912[3 /*20*/].f_17 = 0;
					}
					Global_104439.f_14002[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104439.f_14002[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1054()
{
	if (func_692(unk_0x3D35F9864E4640B1()))
	{
		func_336(25);
	}
}

int func_1055(int iParam0)
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

int func_1056(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_1057(int iParam0)
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

void func_1058(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1063();
	}
	if (iParam0 > 0)
	{
		if (func_158() != func_364())
		{
			if (func_1061(unk_0x3D35F9864E4640B1()) == unk_0x3D35F9864E4640B1())
			{
				Global_2488853.f_93[func_1060(iParam0)] = 1;
			}
		}
		iVar0 = func_1060(159);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(157);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(148);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(164);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(142);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(152);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(166);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(170);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(173);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(179);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(200);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(201);
		if (func_1059(iVar0, Global_262145.f_11795, bParam1))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(182);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(183);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(185);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(186);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(180);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(195);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(197);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(198);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(207);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(208);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(209);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(214);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(215);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(216);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(217);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(218);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(219);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(220);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(221);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1059(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_38(unk_0x3D35F9864E4640B1(), 19) && !func_38(unk_0x3D35F9864E4640B1(), 20)) && !func_38(unk_0x3D35F9864E4640B1(), 9))
		{
			return 0;
		}
	}
	if (Global_2488853.f_93[iParam0] == 1 && func_8(&(Global_2488853[iParam0 /*2*/])))
	{
		if (func_322(&(Global_2488853[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2488853.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1060(int iParam0)
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

int func_1061(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_34;
}

void func_1062(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1063();
	}
	if (iParam0 > 0)
	{
		if (func_158() != func_364())
		{
			Global_2488853.f_93[func_1060(iParam0)] = 1;
		}
		iVar0 = func_1060(155);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(163);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(160);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(153);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(162);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(154);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(171);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(172);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(199);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(194);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(193);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(210);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(205);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(189);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1060(211);
		if (func_1059(iVar0, Global_262145.f_11796, 0))
		{
			func_6(&(Global_2488853[iVar0 /*2*/]));
			func_363(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1063()
{
	char* sVar0;
	
	sVar0 = unk_0x49CAADAD1ABAB70A();
	if (unk_0xB3404E397FF56B3B(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xB3404E397FF56B3B(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	return 0;
}

void func_1064(int iParam0)
{
	if (!func_29(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_275[iParam0 /*3*/], func_1065(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_275[iParam0 /*3*/] = { func_1065() };
	}
	if (!func_29(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_262[iParam0 /*3*/], func_1065(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_262[iParam0 /*3*/] = { func_1065() };
	}
}

Vector3 func_1065()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1066(int iParam0)
{
	if (!func_29(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_144[iParam0 /*3*/], func_1065(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_144[iParam0 /*3*/] = { func_1065() };
	}
	if (!func_29(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_119[iParam0 /*3*/], func_1065(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_119[iParam0 /*3*/] = { func_1065() };
	}
}

void func_1067()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573831 = { Var0 };
	Global_1573831.f_13 = func_364();
	if (unk_0x2A3398C6222EB190(Global_1573334, 3))
	{
		unk_0xD804ACF2A7171150(&Global_1573334, 3);
	}
}

void func_1068(bool bParam0)
{
	if (bParam0)
	{
		if (!func_943(unk_0x3D35F9864E4640B1(), 14))
		{
			func_1070(14);
		}
	}
	else if (func_943(unk_0x3D35F9864E4640B1(), 14))
	{
		func_1069(14);
	}
}

void func_1069(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_5), iParam0);
}

void func_1070(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_5), iParam0);
}

void func_1071(int iParam0)
{
	if (func_121(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x3D35F9864E4640B1() != iParam0)
		{
			if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_404 != iParam0)
			{
				Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_404 = iParam0;
				if (iParam0 != func_364())
				{
				}
			}
		}
	}
}

bool func_1072(int iParam0)
{
	return func_151(iParam0) == 5;
}

void func_1073(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_268(iParam0, iParam1) && func_1088(iParam0, iParam1))
	{
		iVar0 = func_267(iParam0, iParam1);
		func_1076(iVar0, bParam2, bParam3);
		func_1074(iVar0, 1);
	}
}

void func_1074(int iParam0, int iParam1)
{
	func_254(func_1075(iParam0), iParam1, -1, 1);
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_6 = iParam1;
}

int func_1075(int iParam0)
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

void func_1076(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_857(unk_0x3D35F9864E4640B1(), iParam0);
	if (!bParam1)
	{
		func_1087(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2488772[iParam0];
		iVar0 = func_1086(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1780703 = -1;
		}
		func_1085(iParam0, 0, bParam2);
	}
	else if (func_1083(iParam0, bParam2))
	{
		iVar0 = func_1082(iVar2, 0);
		iVar3 = func_897(unk_0x3D35F9864E4640B1(), iVar2);
		iVar4 = func_1081(iVar2, bParam2);
		iVar5 = func_1082(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1072(iVar2) && func_1080(unk_0x3D35F9864E4640B1(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1087(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1079(unk_0x3D35F9864E4640B1(), iVar2) > 0)
		{
			func_1078(iParam0, (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2 - (func_1081(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1082(iVar2, bParam2) / func_1079(unk_0x3D35F9864E4640B1(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1072(iVar2) && func_1080(unk_0x3D35F9864E4640B1(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1077(unk_0x3D35F9864E4640B1(), iVar2, iVar0, bParam2);
}

void func_1077(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return;
	}
	if (func_261(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1593076[iParam0 /*647*/].f_259.f_228 = iParam2;
				}
				else
				{
					Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1078(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2)
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1079(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (func_261(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1080(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_364())
	{
		return 0;
	}
	if (func_261(iParam1) && func_1072(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1081(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_151(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16070;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16075;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16069;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16074;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16068;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16073;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16066;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16071;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16067;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16072;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20094;
				if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20095;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20078;
				if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20079;
				}
			}
			break;
	}
	return uVar0;
}

int func_1082(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_151(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16051;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16060);
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16065);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16052;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16059);
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16064);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16053;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16058);
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16063);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16054;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16056);
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16061);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16055;
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16057);
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16062);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20091;
			}
			else
			{
				iVar0 = Global_262145.f_20075;
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20092);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20076);
				}
			}
			if (func_266(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20093);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20077);
				}
			}
			if (func_1080(unk_0x3D35F9864E4640B1(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1083(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_255(15384, -1, -1);
	}
	return func_255(func_1084(iParam0), -1, -1);
}

int func_1084(int iParam0)
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

void func_1085(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_254(15384, iParam1, -1, 1);
		return;
	}
	func_254(func_1084(iParam0), iParam1, -1, 1);
}

int func_1086(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2488772[iParam0];
	iVar1 = func_857(unk_0x3D35F9864E4640B1(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2488779;
	}
	if (func_1072(iVar1))
	{
		if (func_1080(unk_0x3D35F9864E4640B1(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1087(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2488779 = iParam1;
		return;
	}
	Global_2488772[iParam0] = iParam1;
}

int func_1088(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_268(iParam0, iParam1))
	{
		iVar0 = func_267(iParam0, iParam1);
		if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_4 > 0 && Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1089()
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 28);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 29);
	func_1090(24);
}

void func_1090(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

void func_1091(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2501777.f_1700, 9))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1700), 9);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2501777.f_1700, 9))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1700), 9);
	}
}

void func_1092(struct<21> Param0)
{
	int iVar0;
	
	func_1123();
	func_1121(func_1122(Param0.f_0), Param0);
	unk_0x79C80114C0FC1BE7(1);
	func_1120(0, -1, 0);
	if (func_377())
	{
		func_1099(0, 0);
	}
	else
	{
		func_1097(136);
	}
	unk_0x158D750851ECBBF8(&Local_122, 199);
	unk_0xC0AFA7500AD40377(&Local_321, 257);
	if (!func_1096())
	{
		func_1033();
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x0BDEAF4CD9510F40(0);
		if (unk_0xEF0CB8FF125B9F9C())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_122.f_3[iVar0] = func_364();
				iVar0++;
			}
			unk_0x2462B56C1A432B47(&(Local_122.f_179), &(Local_122.f_180));
		}
		Local_2748.f_2 = unk_0x5D59DC9563118DFD();
		Local_2748.f_8 = unk_0x6239D1A379D387A4();
		func_729(24, 1);
		func_1093();
		if (func_917(1))
		{
		}
		Local_321[unk_0x43B24C247F35B6BC() /*8*/] = 0;
	}
	else
	{
		func_1033();
	}
}

void func_1093()
{
	int iVar0;
	
	unk_0x659E5E147E8E6635("relPennedInPlayer", &iLocal_595);
	unk_0x659E5E147E8E6635("relUWAi", &iLocal_596);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x85F49C37BE784CD7(1, Global_1574701[iVar0], iLocal_595);
		unk_0x85F49C37BE784CD7(1, iLocal_595, Global_1574701[iVar0]);
		iVar0++;
	}
	unk_0x85F49C37BE784CD7(5, iLocal_595, iLocal_596);
	unk_0x85F49C37BE784CD7(5, iLocal_596, iLocal_595);
	unk_0x85F49C37BE784CD7(1, 2017343592, iLocal_596);
	unk_0x85F49C37BE784CD7(5, 2017343592, iLocal_595);
	func_1095(1, &iLocal_596);
	func_1094(&iLocal_596);
	func_1094(&iLocal_595);
}

void func_1094(int iParam0)
{
	unk_0x85F49C37BE784CD7(1, -1865950624, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1865950624);
	unk_0x85F49C37BE784CD7(1, 296331235, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 296331235);
	unk_0x85F49C37BE784CD7(1, 1166638144, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 1166638144);
	unk_0x85F49C37BE784CD7(1, 2037579709, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 2037579709);
	unk_0x85F49C37BE784CD7(1, 2017343592, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 2017343592);
	unk_0x85F49C37BE784CD7(1, -1821475077, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1821475077);
	unk_0x85F49C37BE784CD7(1, 1782292358, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 1782292358);
	unk_0x85F49C37BE784CD7(1, -1033021910, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1033021910);
	unk_0x85F49C37BE784CD7(1, -1285976420, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1285976420);
}

void func_1095(int iParam0, int iParam1)
{
	unk_0x85F49C37BE784CD7(iParam0, joaat("COP"), *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, joaat("COP"));
	unk_0x85F49C37BE784CD7(iParam0, joaat("army"), *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, joaat("army"));
	unk_0x85F49C37BE784CD7(iParam0, -183807561, *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, -183807561);
}

int func_1096()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
		{
			return 1;
		}
		if (func_1028())
		{
			return 0;
		}
		if (func_1026(155))
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

void func_1097(int iParam0)
{
	func_722();
	func_1098();
	func_725();
	Global_1574385.f_4 = iParam0;
	Global_1574385.f_5 = iParam0;
	func_808(iParam0, -1);
	func_141(&(Global_1574385.f_18), 0, 0);
	Global_2501777.f_4542 = 0;
	Global_2456175[0] = func_364();
	Global_2456175[1] = func_364();
	Global_2456175[2] = func_364();
	Global_2456175[3] = func_364();
	Global_2456175[4] = func_364();
	func_720();
	if (!func_940(func_941()))
	{
		func_536();
	}
	if (func_42() && !func_338())
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 16);
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 17);
	}
}

void func_1098()
{
	var uVar0;
	
	Global_1574410 = uVar0;
}

void func_1099(int iParam0, int iParam1)
{
	func_1119();
	func_1102(1);
	if ((iParam0 != 0 && unk_0x80BA8E3CC61A8625(iParam1)) && func_1101(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xCD7E92DE2BFA0B0D(&Global_1779206, 0);
				break;
			}
	}
	if (!func_150() && !func_120(unk_0x3D35F9864E4640B1(), 1))
	{
		if (func_340())
		{
			func_676(3);
		}
	}
	func_676(4);
	if (func_156(0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 = func_158();
	}
	if (func_130(iParam0))
	{
		func_991();
		Global_1779238.f_18 = func_891(func_220());
	}
	else if (func_129(func_378(unk_0x3D35F9864E4640B1())))
	{
		func_989();
		Global_1779291.f_18 = func_891(func_220());
	}
	func_1100();
}

void func_1100()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1344830.f_531[iVar0 /*42*/].f_1 = func_364();
		Global_1344830.f_531[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1101(int iParam0, bool bParam1)
{
	return func_218(unk_0x3D35F9864E4640B1(), iParam0, bParam1);
}

void func_1102(bool bParam0)
{
	int iVar0;
	
	func_1090(33);
	func_1090(34);
	func_1090(35);
	func_1090(36);
	func_1090(37);
	func_1090(38);
	func_1090(39);
	func_1090(40);
	func_1090(43);
	func_1090(41);
	func_1090(54);
	func_1090(42);
	func_1090(47);
	func_1118(23);
	func_1118(24);
	func_1090(92);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 2);
	func_1117();
	func_1112();
	func_1104();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2501777.f_4867.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1103(3))
	{
		func_1118(3);
	}
	else if (func_1103(4))
	{
		func_1118(4);
	}
	else if (func_1103(5))
	{
		func_1118(5);
	}
	else if (func_1103(6))
	{
		func_1118(6);
	}
	else if (func_1103(7))
	{
		func_1118(7);
	}
	else if (((((((((((((((((func_1103(0) || func_1103(1)) || func_1103(2)) || func_1103(8)) || func_1103(9)) || func_1103(10)) || func_1103(11)) || func_1103(12)) || func_1103(13)) || func_1103(14)) || func_1103(15)) || func_1103(16)) || func_1103(17)) || func_1103(18)) || func_1103(19)) || func_1103(20)) || func_1103(21)) || func_1103(22))
	{
		func_1118(8);
		func_1118(0);
		func_1118(1);
		func_1118(2);
		func_1118(9);
		func_1118(10);
		func_1118(11);
		func_1118(12);
		func_1118(13);
		func_1118(14);
		func_1118(15);
		func_1118(16);
		func_1118(17);
		func_1118(18);
		func_1118(19);
		func_1118(20);
		func_1118(21);
		func_1118(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2501777.f_4867.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1103(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_12[iVar0], iVar1);
}

void func_1104()
{
	if (func_1111())
	{
		func_1110(0);
		func_1110(1);
		func_1110(2);
		func_1110(3);
		func_1110(4);
		func_1110(5);
		func_1110(6);
		func_1110(7);
		if (func_1109(8))
		{
			func_1110(8);
		}
		if (func_1109(15))
		{
			if (func_1106(func_1107(), 3))
			{
				func_1105(func_1107(), 3);
			}
			func_1110(15);
		}
	}
}

void func_1105(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104439.f_27911[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1106(int iParam0, int iParam1)
{
	if (Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_1107()
{
	if (func_1108())
	{
		Global_104439.f_27911[20 /*29*/].f_24[Global_14443] = 1;
	}
	return 20;
}

int func_1108()
{
	int iVar0;
	
	iVar0 = func_108(unk_0x3D35F9864E4640B1());
	if (((iVar0 != unk_0x3D35F9864E4640B1() && iVar0 != func_364()) && unk_0x80BA8E3CC61A8625(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_1109(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_19[iVar0], iVar1);
}

void func_1110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_19[iVar0]), iVar1);
}

int func_1111()
{
	if ((((((((func_1109(0) || func_1109(1)) || func_1109(2)) || func_1109(3)) || func_1109(4)) || func_1109(5)) || func_1109(6)) || func_1109(7)) || func_1109(8))
	{
		return 1;
	}
	return 0;
}

void func_1112()
{
	if (func_1116())
	{
		func_1115(0);
		func_1115(1);
		func_1115(2);
		func_1115(3);
		func_1115(4);
		func_1115(5);
		func_1115(6);
		func_1115(7);
		func_1115(8);
		func_1115(9);
		func_1115(10);
		func_1115(11);
		func_1115(12);
		if (func_1114(13))
		{
			if (func_1106(func_1113(), 3))
			{
				func_1105(func_1113(), 3);
			}
			func_1115(13);
		}
	}
}

int func_1113()
{
	if (func_1108())
	{
		Global_104439.f_27911[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

bool func_1114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_17[iVar0], iVar1);
}

void func_1115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_17[iVar0]), iVar1);
}

int func_1116()
{
	if ((((((((((((func_1114(0) || func_1114(1)) || func_1114(2)) || func_1114(3)) || func_1114(4)) || func_1114(5)) || func_1114(6)) || func_1114(7)) || func_1114(8)) || func_1114(9)) || func_1114(10)) || func_1114(11)) || func_1114(12))
	{
		return 1;
	}
	return 0;
}

void func_1117()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2501777.f_4867.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_1118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_12[iVar0]), iVar1);
}

void func_1119()
{
	struct<14> Var0;
	
	Global_1779220 = { Var0 };
	Global_1779220.f_14 = 0;
	Global_1779220.f_15 = 0;
}

int func_1120(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5343104BDF6779F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1034();
			}
			else
			{
				return 0;
			}
		}
		if (!func_706())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					if (!bParam2)
					{
						func_1034();
					}
					else
					{
						return 0;
					}
				}
				if (func_1028())
				{
					if (!bParam2)
					{
						func_1034();
					}
					else
					{
						return 0;
					}
				}
				if (func_1026(155))
				{
					if (!bParam2)
					{
						func_1034();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8B05DA934032590D())
			{
				if (!bParam2)
				{
					func_1034();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (!bParam2)
			{
				func_1034();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8B05DA934032590D())
	{
		if (!bParam2)
		{
			func_1034();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1121(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_1034();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
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
		
		case 112:
			return 32;
		
		case 113:
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
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 2;
		
		case 135:
			return 1;
		
		case 131:
			return 2;
		
		case 132:
			return 4;
		
		case 133:
			return 2;
		
		case 134:
			return 2;
		
		case 116:
			return 1;
		
		case 136:
			return 2;
		
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 0;
		
		case 146:
			return 1;
		
		case 143:
			return 4;
		
		case 144:
			return 16;
		
		case 145:
			return 32;
		
		default:
	}
	return 0;
}

void func_1123()
{
	struct<42> Var0;
	int iVar42;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	iVar42 = 0;
	while (iVar42 < 32)
	{
		Global_1346706[iVar42 /*42*/] = { Var0 };
		iVar42++;
	}
}

int func_1124(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

