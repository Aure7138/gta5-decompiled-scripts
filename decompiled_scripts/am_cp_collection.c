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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_233[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367[4] = { 0, 0, 0, 0 };
	var uLocal_372[4] = { 0, 0, 0, 0 };
	int iLocal_377[4] = { 0, 0, 0, 0 };
	int iLocal_382 = 0;
	var uLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	struct<3> Local_392[130];
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_804 = 0;
	var uLocal_805[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	struct<2> Local_818 = { -1, -1 } ;
	struct<730> Local_820 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<528> Local_1570 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_2098 = -1;
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
	var uLocal_2120 = -1082130432;
	var uLocal_2121 = 3;
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
	var uLocal_2144 = -1;
	var uLocal_2145 = -1;
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
	var uLocal_2167 = -1082130432;
	var uLocal_2168 = 3;
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
	var uLocal_2191 = -1;
	var uLocal_2192 = -1;
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
	var uLocal_2214 = -1082130432;
	var uLocal_2215 = 3;
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
	var uLocal_2238 = -1;
	var uLocal_2239 = -1;
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
	var uLocal_2261 = -1082130432;
	var uLocal_2262 = 3;
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
	var uLocal_2285 = -1;
	var uLocal_2286 = -1;
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
	var uLocal_2308 = -1082130432;
	var uLocal_2309 = 3;
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
	var uLocal_2332 = -1;
	var uLocal_2333 = -1;
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
	var uLocal_2355 = -1082130432;
	var uLocal_2356 = 3;
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
	var uLocal_2379 = -1;
	var uLocal_2380 = -1;
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
	var uLocal_2402 = -1082130432;
	var uLocal_2403 = 3;
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
	var uLocal_2426 = -1;
	var uLocal_2427 = -1;
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
	var uLocal_2449 = -1082130432;
	var uLocal_2450 = 3;
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
	var uLocal_2473 = -1;
	var uLocal_2474 = -1;
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
	var uLocal_2496 = -1082130432;
	var uLocal_2497 = 3;
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
	var uLocal_2520 = -1;
	var uLocal_2521 = -1;
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
	var uLocal_2543 = -1082130432;
	var uLocal_2544 = 3;
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
	var uLocal_2567 = -1;
	var uLocal_2568 = -1;
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
	var uLocal_2590 = -1082130432;
	var uLocal_2591 = 3;
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
	var uLocal_2614 = -1;
	var uLocal_2615 = -1;
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
	var uLocal_2637 = -1082130432;
	var uLocal_2638 = 3;
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
	var uLocal_2661 = -1;
	var uLocal_2662 = -1;
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
	var uLocal_2684 = -1082130432;
	var uLocal_2685 = 3;
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
	var uLocal_2708 = -1;
	var uLocal_2709 = -1;
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
	var uLocal_2731 = -1082130432;
	var uLocal_2732 = 3;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = -1;
	var uLocal_2756 = -1;
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
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = -1082130432;
	var uLocal_2779 = 3;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = -1;
	var uLocal_2803 = -1;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = -1082130432;
	var uLocal_2826 = 3;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = -1;
	var uLocal_2850 = -1;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = -1082130432;
	var uLocal_2873 = 3;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = -1;
	var uLocal_2897 = -1;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = -1082130432;
	var uLocal_2920 = 3;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = -1;
	var uLocal_2944 = -1;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = -1082130432;
	var uLocal_2967 = 3;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = -1;
	var uLocal_2991 = -1;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = -1082130432;
	var uLocal_3014 = 3;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = -1;
	var uLocal_3038 = -1;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = -1082130432;
	var uLocal_3061 = 3;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = -1;
	var uLocal_3085 = -1;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = -1082130432;
	var uLocal_3108 = 3;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = -1;
	var uLocal_3132 = -1;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = -1082130432;
	var uLocal_3155 = 3;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = -1;
	var uLocal_3179 = -1;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = -1082130432;
	var uLocal_3202 = 3;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = -1;
	var uLocal_3226 = -1;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = -1082130432;
	var uLocal_3249 = 3;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = -1;
	var uLocal_3273 = -1;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = -1082130432;
	var uLocal_3296 = 3;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = -1;
	var uLocal_3320 = -1;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = -1082130432;
	var uLocal_3343 = 3;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = -1;
	var uLocal_3367 = -1;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = -1082130432;
	var uLocal_3390 = 3;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = -1;
	var uLocal_3414 = -1;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = -1082130432;
	var uLocal_3437 = 3;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = -1;
	var uLocal_3461 = -1;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = -1082130432;
	var uLocal_3484 = 3;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = -1;
	var uLocal_3508 = -1;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = -1082130432;
	var uLocal_3531 = 3;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = -1;
	var uLocal_3555 = -1;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = -1082130432;
	var uLocal_3578 = 3;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = -1;
	struct<12> Local_3602 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_3614[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (!func_570(ScriptParam_0))
		{
			func_544();
		}
	}
	while (true)
	{
		func_543();
		if (func_536() || func_534())
		{
			func_544();
		}
		func_507();
		switch (func_506(unk_0x7A2D98760B359FB8()))
		{
			case 0:
				if (func_505() == 1)
				{
					if (func_504())
					{
						func_503(unk_0x7A2D98760B359FB8(), 1);
					}
				}
				break;
			
			case 1:
				if (func_505() == 1)
				{
					func_105();
					func_95();
				}
				else if (func_505() == 3)
				{
					func_503(unk_0x7A2D98760B359FB8(), 3);
				}
				break;
			
			case 3:
				func_544();
				break;
		}
		if (unk_0xCD91CF0F63010FB2())
		{
			switch (func_505())
			{
				case 0:
					if (func_78())
					{
						func_77(1);
					}
					break;
				
				case 1:
					if (Local_820.f_8 == 6)
					{
						func_77(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_390, 1000, 0))
					{
						func_77(3);
					}
					break;
				
				case 3:
					func_544();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x4C779B19E6DDCDA2() && !bParam2)
	{
		if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0x3EAC9995EC220C5A(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C779B19E6DDCDA2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE23D71F521207E8D();
			}
			else
			{
				*uParam0 = unk_0x0A7450968AC14F54();
			}
		}
		else
		{
			*uParam0 = unk_0x3EAC9995EC220C5A();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_33(2, 0, 0, 0, 0))
	{
		if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
		{
			Local_820.f_1 = unk_0xE23D71F521207E8D();
			unk_0x573691DB812DC8AA(&(Local_820.f_2), 2);
		}
	}
	switch (Local_820.f_8)
	{
		case 0:
			if (func_32())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_820.f_667), Global_262145.f_8964, 0) || unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_820.f_9 = unk_0xE23D71F521207E8D();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_820.f_661), Global_262145.f_8963, 0)) || unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
			{
				if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 1) && func_21())
				{
					func_20(&(Local_820.f_661), 0, 0);
					unk_0x573691DB812DC8AA(&(Local_820.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_820.f_1 = unk_0xE23D71F521207E8D();
				}
			}
			func_8();
			iLocal_98++;
			if (iLocal_98 >= Local_820.f_709)
			{
				iLocal_98 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_820.f_663), 20000, 0) || func_5())
			{
				if (func_32())
				{
					func_20(&(Local_820.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xBE07BFED2D35F867(Local_820.f_729[iVar0 /*2*/].f_1) && !unk_0x0B6E83A9A7ED3EBA(unk_0xB66D3D2DD5A2BA64(Local_820.f_729[iVar0 /*2*/].f_1)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar0)))
		{
			iVar1 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar0));
			if (!func_6(iVar1))
			{
				if ((!unk_0xB56FEBC510E7E9DE(Local_3614[iVar0 /*5*/].f_2, 0) || Local_3614[iVar0 /*5*/].f_3 != 6) || (unk_0xB56FEBC510E7E9DE(Local_820.f_2, 0) && !unk_0xB56FEBC510E7E9DE(Local_3614[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 8);
}

bool func_7(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 2);
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar2)))
		{
			unk_0x573691DB812DC8AA(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0xB56FEBC510E7E9DE(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			unk_0x573691DB812DC8AA(&(Local_820.f_673), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_820.f_727)
	{
		Local_820.f_727 = iVar0;
	}
	else
	{
		Local_820.f_726 = (Local_820.f_727 - iVar0);
	}
	if (iVar1 > Local_820.f_728)
	{
		Local_820.f_728 = iVar1;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_3614[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_820.f_674[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_820.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_820.f_674[iVar1] < 0 || iVar0 > Local_3614[Local_820.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_820.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_820.f_674[iVar1], iParam0, iVar1);
			}
			Local_820.f_674[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_820.f_674[iVar3] == iParam0)
				{
					Local_820.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	struct<14> Var0;
	int iVar14;
	
	iVar14 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = 164;
		Var0.f_10 = iVar14;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x8ACD527A7E574590();
	if (!iParam14 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Param0, 14, iParam14);
	}
}

int func_12(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar1)))
		{
			iVar2 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar1));
			if (func_13(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x8ACD527A7E574590() || iParam0)
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x860CE5C791DC28F5(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x6DF20EAB8093DF19(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iParam0));
	iVar0 = iVar3;
	if (Global_2457713.f_4561.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2457713.f_4561.f_38[iVar0];
		iVar1 = Global_2457713.f_4561.f_5[iVar0];
		if (!unk_0xB56FEBC510E7E9DE(Local_820.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4561[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_388, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_820.f_10[iVar4 /*5*/].f_3 = iParam0;
							Global_2457713.f_4561.f_38[iVar0] = -1;
							unk_0x573691DB812DC8AA(&(Local_820.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_820.f_708 = (Local_820.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_18(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_3614[iParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB56FEBC510E7E9DE(Local_820.f_673, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_820.f_674[iVar0] == iParam0)
			{
				Local_820.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_820.f_709)
		{
			if (Local_820.f_10[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_820.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		unk_0xA5F70A8B83BDFA49(&(Local_820.f_673), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C779B19E6DDCDA2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE23D71F521207E8D();
		}
		else
		{
			*uParam0 = unk_0x0A7450968AC14F54();
		}
	}
	else
	{
		*uParam0 = unk_0x3EAC9995EC220C5A();
	}
	uParam0->f_1 = 1;
}

int func_21()
{
	return 0;
}

int func_22()
{
	if (Local_820.f_708 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_820.f_671), 750, 0))
	{
		unk_0x573691DB812DC8AA(&(Local_820.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	Local_820.f_8 = iParam0;
}

int func_24()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_32())
	{
		Var0 = { Local_820.f_729[iLocal_100 /*2*/] };
		if (func_31(Var0.f_0))
		{
			if (!unk_0x55B325D0BC7EF9C7(Var0.f_1))
			{
				if (func_30(iLocal_100, &Var2, &uVar5))
				{
					Local_820.f_713[iLocal_100] = func_27(iLocal_100);
					if (unk_0xB56FEBC510E7E9DE(Local_3614[Local_820.f_713[iLocal_100] /*5*/].f_1, iLocal_100))
					{
						if (func_26(&(Local_820.f_729[iLocal_100 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0))
						{
							unk_0xF1040A0061DC97E5(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), 1);
							unk_0xDA1D5B5FA3988462(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), 1);
							unk_0xC3D1AB6B32C2D35C(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), 0);
							func_25(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), 1);
							if (unk_0x9BBC2FD086E9AC98("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x3C73EEDDE53D7F5D(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x9BBC2FD086E9AC98("MPBitset", 3))
							{
								if (unk_0xB22BDF5B6DBD298B(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0xA68F5A9BCA4E78E1(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), "MPBitset");
								}
								unk_0x573691DB812DC8AA(&iVar6, 10);
								unk_0x573691DB812DC8AA(&iVar6, 11);
								unk_0x3C73EEDDE53D7F5D(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_100 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_820.f_713[iLocal_100] = -1;
						}
					}
				}
			}
			iLocal_100++;
			if (iLocal_100 >= 10)
			{
				iLocal_100 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x9BBC2FD086E9AC98("MPBitset", 3))
	{
		if (unk_0xB22BDF5B6DBD298B(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xA68F5A9BCA4E78E1(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x573691DB812DC8AA(&uVar0, 13);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&uVar0, 13);
		}
		unk_0x3C73EEDDE53D7F5D(iParam0, "MPBitset", uVar0);
	}
}

int func_26(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x69BF70CE4F471AA2(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3B97B8A2AAD89A9D(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x2EEA15C0C12C8CDE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xAA3A60755EA8F251(uVar0);
	if (unk_0x55B325D0BC7EF9C7(*uParam0))
	{
		unk_0xDA1D5B5FA3988462(uVar0, iParam10);
		if (unk_0x43DF9E154BFEA8DB(iVar0))
		{
			if (bParam8)
			{
				unk_0xB27C4095ABAA3587(*uParam0, 1);
			}
			else
			{
				unk_0xB27C4095ABAA3587(*uParam0, 0);
			}
		}
		unk_0xA809A49D26253646(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	fVar2 = 1000000f;
	if (func_30(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xD92F4D7123D878D4() - 1))
		{
			if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar0)))
			{
				iVar8 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar0));
				if (func_13(iVar8, 1, 1))
				{
					fVar3 = func_28(func_29(iVar8), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_28(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return unk_0x2A488C176D52CCA5(Param0, Param3);
}

Vector3 func_29(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(iParam0), 0);
}

int func_30(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xC60576ADD1AECA45(iParam0);
	return unk_0x4A4B6FD54C499B7D(iParam0);
}

bool func_32()
{
	return Local_820.f_707;
}

int func_33(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x825762A1424CFB65() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	if (func_36(&(Global_1573875.f_18)))
	{
		if (!func_1(&(Global_1573875.f_18), 7500, 0))
		{
			return 0;
		}
		func_35(&(Global_1573875.f_18));
	}
	if (func_34())
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 0);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x1C5505504E67FF8A() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_34()
{
	return unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 0);
}

void func_35(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_36(var uParam0)
{
	return uParam0->f_1;
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x4CB3F0B0113C6DF8(0, iParam1);
			break;
		
		default:
			uVar1 = func_38(iParam1);
			iVar0 = unk_0x824EA95BCC498CB4(uVar1);
			if (unk_0xB56FEBC510E7E9DE(iVar0, iParam0))
			{
				unk_0xA5F70A8B83BDFA49(&iVar0, iParam0);
				unk_0x4CB3F0B0113C6DF8(iVar0, iParam1);
			}
			break;
	}
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
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

int func_39()
{
	return Global_1312746;
}

bool func_40(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	uVar0 = func_38(iParam1);
	uVar1 = unk_0x824EA95BCC498CB4(uVar0);
	return unk_0xB56FEBC510E7E9DE(uVar1, iParam0);
}

void func_41(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 2) && !func_7(unk_0x8ACD527A7E574590())) && !func_6(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x0AAC2160036975D9(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x0AAC2160036975D9(sParam1))
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
		func_42(65, sParam0, sParam1, 1, -1, 2);
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 2);
	}
}

int func_42(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_76(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_43(&Var0);
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426494.f_2420)
		{
			return 0;
		}
	}
	func_49(uParam0, uParam0->f_16);
	func_46(uParam0);
	if (func_45(uParam0->f_1))
	{
		if (Global_2426494.f_2138[0 /*70*/].f_2 == 0)
		{
			Global_2426494.f_2138[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426494.f_2138[0 /*70*/].f_1 == 13 || Global_2426494.f_2138[0 /*70*/].f_1 == 52) || Global_2426494.f_2138[0 /*70*/].f_1 == 53) || Global_2426494.f_2138[0 /*70*/].f_1 == 57)
		{
			Global_2426494.f_2138[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426494.f_2138[iVar0 + 1 /*70*/] = { Global_2426494.f_2138[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426494.f_2138[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_2 == 0)
		{
			Global_2426494.f_2138[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 1);
				Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			}
			if (uParam0->f_1 == 83)
			{
				if (func_44(Global_2426494.f_2138[iVar0 /*70*/].f_1))
				{
					Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
					unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 84:
		case 87:
		case 88:
		case 83:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

int func_45(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_46(var uParam0)
{
	if (func_48(uParam0->f_1))
	{
		uParam0->f_66 = func_47();
	}
}

int func_47()
{
	return 21;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 62:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_49(var uParam0, int iParam1)
{
	if (func_48(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_75())
	{
		return;
	}
	if (func_44(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_50(iParam1, -2, 0, 0);
		}
	}
}

int func_50(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_71(iParam0))
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
	if (func_71(unk_0x8ACD527A7E574590()) || (func_70() && func_69()))
	{
		uVar0 = func_68();
		if (unk_0x1F2158D615BC4B25(uVar0))
		{
			if (unk_0x60F6396843CB51A6(iVar0))
			{
				if (unk_0xAE5AB5A8DE4D19AF(iVar0) != -1)
				{
					if (func_13(unk_0xAE5AB5A8DE4D19AF(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4FE03C08BC095A57()) && iParam1 < 4)
						{
							if (Global_1612768.f_62278[iParam1] != -1)
							{
								return func_67(iParam1, iParam0, 0);
							}
							else
							{
								return func_58(iParam0, unk_0xAE5AB5A8DE4D19AF(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_58(iParam0, unk_0xAE5AB5A8DE4D19AF(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4FE03C08BC095A57()) && iParam1 < 4)
			{
				if (Global_1612768.f_62278[iParam1] != -1)
				{
					return func_67(iParam1, iParam0, 0);
				}
				else
				{
					return func_51(0, -1, 0);
				}
			}
			else
			{
				return func_51(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4FE03C08BC095A57()) && iParam1 < 4)
	{
		if (Global_1612768.f_62278[iParam1] != -1)
		{
			return func_67(iParam1, iParam0, 0);
		}
		else
		{
			return func_58(iParam0, unk_0x8ACD527A7E574590(), iParam1, bParam2, bParam3);
		}
	}
	return func_58(iParam0, unk_0x8ACD527A7E574590(), iParam1, bParam2, bParam3);
}

int func_51(bool bParam0, int iParam1, bool bParam2)
{
	return func_52(unk_0x8ACD527A7E574590(), bParam0, iParam1, bParam2);
}

int func_52(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xE6C94A0E653BD3F1(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_57(iVar0, iParam2, 0) && !unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_56(1);
				}
				else
				{
					return func_56(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_53(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_56(1);
	}
	return func_56(0);
}

int func_53(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, iParam1);
	if (func_54(Global_1612768.f_65866))
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

int func_54(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7302[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
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
			if (!func_57(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_57(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 0);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 1);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 2);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 4);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 5);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 6);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 8);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 9);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 10);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 12);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 13);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 14);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE6C94A0E653BD3F1(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1586488[unk_0x8ACD527A7E574590() /*408*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1586488[iVar2 /*408*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_66(iParam1, iParam0, iVar0, 0) && !unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 18)) || ((func_57(unk_0xE6C94A0E653BD3F1(iParam1), unk_0xE6C94A0E653BD3F1(iParam0), 0) && unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 23)) && !unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 18)))
			{
				return func_56(1);
			}
			else if (unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 26))
			{
				return func_65(1);
			}
			else
			{
				return func_52(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573829 || Global_1573820) || Global_1586488[iParam0 /*408*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573829 == 1 && Global_1573839 == 0))
			{
				return func_56(1);
			}
			else
			{
				return func_52(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573824 && Global_1573404.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_61(iParam0);
	if (!iVar3 == -1)
	{
		return func_59(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
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
		
		default:
	}
	return 12;
}

var func_60(int iParam0)
{
	return Global_2412289.f_1874.f_44[iParam0 /*2*/].f_1;
}

int func_61(int iParam0)
{
	if (!iParam0 == func_75())
	{
		if (func_63(iParam0, 1))
		{
			return Global_2412289.f_1874.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_75())
	{
		return Global_1608060[iParam0 /*106*/].f_8;
	}
	return func_75();
}

bool func_63(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_64(iParam0))
		{
			return 0;
		}
	}
	return Global_1608060[iParam0 /*106*/].f_8 != func_75();
}

int func_64(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (Global_1608060[iParam0 /*106*/].f_8 != func_75())
		{
			return Global_1608060[iParam0 /*106*/].f_8 == iParam0;
		}
	}
	return 0;
}

int func_65(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xE6C94A0E653BD3F1(iParam0) == -1 && unk_0xE6C94A0E653BD3F1(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xE6C94A0E653BD3F1(iParam0) == unk_0xE6C94A0E653BD3F1(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xE6C94A0E653BD3F1(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xE6C94A0E653BD3F1(iParam0) == iParam2;
	}
	return unk_0xE6C94A0E653BD3F1(iParam0) == iParam2;
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1612768.f_62278[iParam0] != -1 && Global_1612768.f_62278[iParam0] <= 4)
	{
		if (Global_1612768.f_62278[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1612768.f_62278[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1612768.f_62278[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1612768.f_62278[iParam0] == 4)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 29))
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
			iVar0 = Global_1612768.f_62278[iParam0];
		}
	}
	else
	{
		iVar0 = func_52(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_68()
{
	return Global_2359301.f_2;
}

bool func_69()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 4);
}

bool func_70()
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_18, 14);
}

int func_71(int iParam0)
{
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	if (func_72())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_72()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_73(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_74(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_74(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_75()
{
	return -1;
}

void func_76(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_75();
	uParam1->f_17 = func_75();
	uParam1->f_18 = func_75();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

void func_77(int iParam0)
{
	Local_820.f_0 = iParam0;
}

int func_78()
{
	int iVar0;
	
	if (func_1(&(Local_820.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_820.f_674[iVar0] = -1;
			iVar0++;
		}
		func_35(&(Local_820.f_661));
		func_81();
		if (func_32())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_820.f_713[iVar0] = func_27(iVar0);
				iVar0++;
			}
			func_79();
		}
		return 1;
	}
	return 0;
}

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_820.f_729[iVar0 /*2*/] = func_80();
		iVar0++;
	}
}

int func_80()
{
	int iVar0;
	
	iVar0 = unk_0xA3746E7F17F47DC2(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_820.f_709 = func_94();
	Local_820.f_708 = Local_820.f_709;
	Local_820.f_712 = func_90();
	Local_820.f_707 = func_87();
	iVar0 = func_86();
	if (Local_820.f_707)
	{
		iVar1 = 1;
	}
	func_83(func_85(132, Local_820.f_712, iVar1, 0));
	if (Local_820.f_712 == 1 && !Local_820.f_707)
	{
		Local_820.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_820.f_709)
	{
		Local_820.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_820.f_10[iVar2 /*5*/] = { func_82(Local_820.f_712, Local_820.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_82(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 36:
								return 1872.035f, -761.149f, 105f;
							
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.085f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.689f, 120f;
							
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.541f, -1883.809f, 50f;
							
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.346f, 52f;
							
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case joaat("mpsv_lp0_31"):
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.02f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.012f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.985f, -2243.761f, 136f;
							
							case 97:
								return 2947.746f, 792.9475f, 45f;
							
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.208f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.579f, -685.6392f, 126f;
							
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case joaat("mpsv_lp0_31"):
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.12f, 1471.532f, 0f;
							
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 5:
								return -2166.629f, 1607.567f, 260f;
							
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.368f, 50f;
							
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							
							case joaat("mpsv_lp0_31"):
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.239f, 50f;
							
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.934f, -1447.037f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case joaat("mpsv_lp0_31"):
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.72f, 53f;
							
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case joaat("mpsv_lp0_31"):
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 102:
								return -2092.081f, 2518.016f, 800f;
							
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case joaat("mpsv_lp0_31"):
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.801f, 4619.894f, 65f;
							
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 14:
								return 3296.121f, 3365.198f, 125f;
							
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.171f, 95f;
							
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.414f, 161f;
							
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.792f, 171f;
							
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 35:
								return 754.4042f, 6466f, 49f;
							
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.115f, 5662.172f, 274f;
							
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 41:
								return 1563.065f, 3572.822f, 41f;
							
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.709f, 63f;
							
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.079f, 30f;
							
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.335f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.62f, 3760.053f, 53f;
							
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 59:
								return 2061.36f, 3941.451f, 200f;
							
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.758f, 55f;
							
							case 67:
								return 1552.003f, 2186.406f, 96f;
							
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.82f, 4308.541f, 140f;
							
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case joaat("mpsv_lp0_31"):
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.466f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.375f, 59f;
							
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							
							case joaat("mpsv_lp0_31"):
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_83(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 391;
	Var0.f_1 = unk_0x8ACD527A7E574590();
	Var0.f_2 = uParam0;
	iVar3 = func_84(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 3, iVar3);
	}
}

var func_84(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0BBA31C395EE0D30(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8ACD527A7E574590() || iParam0)
			{
				if (bParam1)
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
				else if (!func_73(iVar2, 0))
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_86()
{
	return unk_0xA3746E7F17F47DC2(0, 1);
}

bool func_87()
{
	if (func_89(Local_820.f_712))
	{
		return 0;
	}
	else if (func_88(Local_820.f_712))
	{
		return 1;
	}
	return unk_0xA3746E7F17F47DC2(0, 2) == 1;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_8975 || Global_262145.f_8967);
		
		case 1:
			return (Global_262145.f_8974 || Global_262145.f_8967);
		
		case 2:
			return (Global_262145.f_8972 || Global_262145.f_8967);
		
		case 3:
			return (Global_262145.f_8973 || Global_262145.f_8967);
		
		default:
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_8971 || Global_262145.f_8966);
		
		case 1:
			return (Global_262145.f_8970 || Global_262145.f_8966);
		
		case 2:
			return (Global_262145.f_8968 || Global_262145.f_8966);
		
		case 3:
			return (Global_262145.f_8969 || Global_262145.f_8966);
		
		default:
	}
	return 0;
}

int func_90()
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iLocal_384 = 1;
	switch (iLocal_384)
	{
		case 0:
			return unk_0xA3746E7F17F47DC2(0, 4);
			break;
		
		case 1:
			iVar5 = func_91(&uVar0);
			iVar6 = unk_0xA3746E7F17F47DC2(0, iVar5);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (iVar6 >= iVar8 && iVar6 < (uVar0[iVar7] + iVar8))
				{
					return iVar7;
				}
				iVar8 = (iVar8 + uVar0[iVar7]);
				iVar7++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return unk_0xA3746E7F17F47DC2(0, 4);
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	
	bVar8 = true;
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar0)))
		{
			iVar10 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar0));
			if (func_13(iVar10, 1, 1))
			{
				uVar11 = unk_0xF555CE342BA0C333(iVar10);
				if (!unk_0x1E80C02AC16B6622(uVar11))
				{
					iVar9 = 0;
					while (iVar9 < 4)
					{
						if (!func_93(iVar9))
						{
							if (func_92(iVar9, &Var2, &Var5))
							{
								if (unk_0x4D46836937F3E23A(uVar11, Var2, Var5, 0, 0, 0))
								{
									bVar8 = false;
									(*uParam0)[iVar9]++;
									iVar1++;
								}
							}
						}
						iVar9++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		iVar9 = 0;
		while (iVar9 < 4)
		{
			if (!func_93(iVar9))
			{
				(*uParam0)[iVar9] = 1;
			}
			iVar9++;
		}
	}
	return iVar1;
}

int func_92(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_93(int iParam0)
{
	return (func_89(iParam0) && func_88(iParam0));
}

var func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		iVar2 = unk_0x209E209593217021(iVar0);
		if (unk_0x5D14B2034A3E40D3(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_8980)
	{
		return Global_262145.f_8866;
	}
	if (iVar1 >= Global_262145.f_8979)
	{
		return Global_262145.f_8865;
	}
	if (iVar1 >= Global_262145.f_8978)
	{
		return Global_262145.f_8051;
	}
	return Global_262145.f_8051;
}

void func_95()
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_820.f_713[iVar0] == unk_0x8DDF51AF4B711D9F())
			{
				if (func_96(iVar0))
				{
					if (!unk_0xB56FEBC510E7E9DE(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_1, iVar0))
					{
						unk_0x573691DB812DC8AA(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_1), iVar0);
					}
				}
				else if (unk_0xB56FEBC510E7E9DE(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_1, iVar0))
				{
					unk_0xA5F70A8B83BDFA49(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_1), iVar0);
				}
			}
			else if (unk_0xB56FEBC510E7E9DE(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_1, iVar0))
			{
				unk_0xA5F70A8B83BDFA49(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_96(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_30(iParam0, &Var0, &uVar3))
	{
		if (func_97(Var0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8AAE56946AAF51A9(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD57B8BE8C701BB42(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD57B8BE8C701BB42(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3B949E96DB795CB7(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0xBF0CC7B3A5D6AC0C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_100(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_98(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404919++;
	return 1;
}

int func_98(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_13(unk_0x8ACD527A7E574590(), 1, 1))
		{
			if (!unk_0x2CC731F9E664299E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA2490B3CE6382FBB(func_29(unk_0x8ACD527A7E574590()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xDEB29D8C0ACA57B9(Param0, fParam3))
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
		if (func_13(iVar1, 1, 1))
		{
			if (!func_73(iVar1, 0) && unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8ACD527A7E574590()))
				{
					if ((func_99(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xE6C94A0E653BD3F1(iVar1) == -1)
							{
								if (unk_0xE6C94A0E653BD3F1(iVar1) == unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xE6C94A0E653BD3F1(iVar1) != unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()))) || unk_0xE6C94A0E653BD3F1(iVar1) == -1)
							{
								if (unk_0xA2490B3CE6382FBB(func_29(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x22E8CDD1290DA8EA(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE6C94A0E653BD3F1(iVar1) != iParam8 || unk_0xE6C94A0E653BD3F1(iVar1) == -1)
						{
							if (unk_0xA2490B3CE6382FBB(func_29(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x22E8CDD1290DA8EA(iVar1, Param0, fParam3))
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

int func_99(int iParam0)
{
	if (unk_0x50E425EECEBD370B(unk_0xF555CE342BA0C333(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
	{
		return 1;
	}
	return 0;
}

int func_100(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x8ACD527A7E574590() != iVar1) || iParam8 == 0)
		{
			if (func_13(iVar1, bParam4, bParam5))
			{
				if (unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iVar1))
				{
					if (!bParam7 || (!unk_0x1E80C02AC16B6622(unk_0xF555CE342BA0C333(iVar1)) && func_99(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) != unk_0xE6C94A0E653BD3F1(iVar1))) || unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) == -1)
						{
							if (((unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) == -1 && uParam9) && bParam6) && func_101(iVar1))
							{
							}
							else if (unk_0x1F2158D615BC4B25(unk_0xF555CE342BA0C333(iVar1)))
							{
								if (unk_0xA2490B3CE6382FBB(func_29(iVar1), Param0, 1) < fParam3)
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

int func_101(int iParam0)
{
	if (func_104(unk_0x8ACD527A7E574590(), iParam0))
	{
		return 1;
	}
	Global_2456699 = { func_103(iParam0) };
	if (unk_0xB7AE85A639DF6A74(&Global_2456699))
	{
		return 1;
	}
	if (func_102(unk_0x8ACD527A7E574590(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (!iVar0 == func_75())
	{
		if (iVar0 == func_62(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_103(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAEFA54BD5AE42A15(iParam0, &Var0, 13);
	return Var0;
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0x99BD29C80FF8FFC7())
	{
		Global_2456699 = { func_103(iParam0) };
		Global_2456712 = { func_103(iParam1) };
		if (unk_0x149478BD8C953602(&Global_2456699))
		{
			if (unk_0x149478BD8C953602(&Global_2456712))
			{
				unk_0x9B8FA4DF999D2A3A(&Global_2456629, 35, &Global_2456699);
				unk_0x9B8FA4DF999D2A3A(&Global_2456664, 35, &Global_2456712);
				if (Global_2456629 == Global_2456664)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_105()
{
	int iVar0;
	int iVar1;
	
	func_500();
	if (func_498())
	{
		func_395();
	}
	if (func_394(unk_0x8ACD527A7E574590()) || func_393(unk_0x8ACD527A7E574590()))
	{
		func_392();
	}
	if ((!func_6(unk_0x8ACD527A7E574590()) && !func_391(0)) && !func_391(func_390(132)))
	{
		if (func_371())
		{
			if (unk_0xB56FEBC510E7E9DE(iLocal_101, 3))
			{
				unk_0xA5F70A8B83BDFA49(&iLocal_101, 3);
			}
			switch (Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_3)
			{
				case 0:
					if (Local_820.f_8 == 1)
					{
						func_370(1);
						func_369(1);
					}
					else if (Local_820.f_8 >= 2)
					{
						func_369(1);
					}
					break;
				
				case 1:
					func_365(6);
					if (Local_820.f_8 >= 2)
					{
						func_369(2);
					}
					func_365(2);
					func_363(0);
					func_361((Global_262145.f_8964 - func_362(&(Local_820.f_667), 0, 0)));
					func_358(func_360((Global_262145.f_8964 - func_362(&(Local_820.f_667), 0, 0)), 0), func_359(-1));
					func_344();
					break;
				
				case 2:
					if (Local_820.f_8 > 2)
					{
						func_370(0);
						func_327(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(unk_0x8ACD527A7E574590()))
						{
							func_326();
						}
						else
						{
							unk_0x573691DB812DC8AA(&iLocal_101, 5);
						}
						if (Local_820.f_710)
						{
							func_325();
						}
						if (Local_820.f_707)
						{
							Global_2457713.f_4632 = 1;
						}
						else
						{
							Global_2457713.f_4632 = 0;
						}
						func_324();
						if (!func_6(unk_0x8ACD527A7E574590()))
						{
							if (func_32())
							{
								func_310(678f, 794f, 206f, 8f, 0);
								func_310(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_310(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_369(3);
					}
					break;
				
				case 3:
					if (Local_820.f_8 > 3)
					{
						func_369(4);
					}
					else
					{
						if (!iLocal_784)
						{
							if (func_309())
							{
								iLocal_784 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_820.f_709)
						{
							if (uLocal_233[iVar1] || iLocal_784)
							{
								func_269(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_233[iLocal_97] = func_268(iLocal_97);
							uLocal_102[iLocal_97] = func_266(iLocal_97);
							if (!uLocal_102[iLocal_97])
							{
								func_269(iLocal_97);
							}
							iLocal_97++;
							if (iLocal_97 >= Local_820.f_709)
							{
								iLocal_97 = 0;
							}
							iVar0++;
						}
						func_363(0);
						func_365(4);
						func_365(5);
						if (func_264(0) && !func_263(0))
						{
							func_262();
						}
						if ((!func_261(unk_0x8ACD527A7E574590()) && !unk_0x4F297F09162EFB5D()) && !unk_0x3AB285A0F995E847())
						{
							func_260();
						}
						func_259();
					}
					func_256();
					func_255();
					func_326();
					func_237();
					func_344();
					break;
				
				case 4:
					func_154();
					func_144();
					func_143();
					func_363(1);
					func_142();
					func_237();
					if (func_130(&uLocal_786, !unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2)) || unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
					{
						if (func_32())
						{
							func_369(5);
						}
						else
						{
							func_369(6);
						}
					}
					break;
				
				case 5:
					if (Local_820.f_8 > 5)
					{
						func_369(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_125();
		}
	}
	else
	{
		func_392();
		func_125();
	}
	func_112();
	func_107();
	func_106();
}

void func_106()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_32())
	{
		Var0 = { Local_820.f_729[iLocal_385 /*2*/] };
		if (unk_0x55B325D0BC7EF9C7(Var0.f_1))
		{
			iVar2 = unk_0xFDEE91DAC82E201A(Var0.f_1);
			if (unk_0xE8BD4B74271ABDCC(iVar2))
			{
				if (!unk_0x968EA16107097324(iVar2, 0))
				{
					unk_0xB84D4C251623B60C(&iVar2);
				}
			}
		}
		iLocal_385++;
		if (iLocal_385 >= 10)
		{
			iLocal_385 = 0;
			iLocal_817 = iLocal_816;
			iLocal_816 = 0;
		}
	}
}

void func_107()
{
	if (Local_820.f_8 == 5)
	{
		if (func_36(&(Local_820.f_669)))
		{
			if (unk_0x55B325D0BC7EF9C7(Local_820.f_729[iLocal_385 /*2*/].f_1))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_385 /*2*/].f_1)))
				{
					if (!unk_0xB56FEBC510E7E9DE(iLocal_804, iLocal_385))
					{
						unk_0x573691DB812DC8AA(&iLocal_804, iLocal_385);
						uLocal_805[iLocal_385] = unk_0xBE8BBC6340F2B731();
						unk_0x44F52B5BE61F39DD(uLocal_805[iLocal_385], "Explosion_Countdown", unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_385 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0xDB8724F8CA3DA851(uLocal_805[iLocal_385], "Time", 30f);
					}
					if ((30000 - func_362(&(Local_820.f_669), 0, 0)) >= 0)
					{
						if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_385 /*2*/].f_1), 0))
						{
							func_365(3);
							iLocal_816 = 1;
						}
					}
					else if (unk_0x378B5BA8197FAE67(Local_820.f_729[iLocal_385 /*2*/].f_1))
					{
						unk_0x1E7F0537BF0E8998(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_385 /*2*/].f_1));
						unk_0x6ED852BC6DD22530(unk_0xFDEE91DAC82E201A(Local_820.f_729[iLocal_385 /*2*/].f_1), 1, 0, -1);
					}
				}
				else if (unk_0xB56FEBC510E7E9DE(iLocal_804, iLocal_385) && !unk_0x4FB4BC44492DEE8D(uLocal_805[iLocal_385]))
				{
					unk_0xE24358A92698B60D(uLocal_805[iLocal_385]);
				}
			}
			if (iLocal_817)
			{
				if (!func_71(unk_0x8ACD527A7E574590()))
				{
					func_109(func_360((30000 - func_362(&(Local_820.f_669), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
					func_108();
				}
			}
		}
	}
}

void func_108()
{
	Global_1339928.f_941 = 1;
}

void func_109(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_111(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_110(7, iVar0);
		Global_1339928.f_3988[iVar0] = uParam0;
		StringCopy(&(Global_1339928.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3988.f_172[iVar0] = iParam2;
		Global_1339928.f_3988.f_216[iVar0] = iParam3;
		Global_1339928.f_3988.f_183[iVar0] = iParam4;
		Global_1339928.f_3988.f_194[iVar0] = iParam5;
		Global_1339928.f_3988.f_249[iVar0] = iParam6;
		Global_1339928.f_3988.f_260[iVar0] = iParam7;
		Global_1339928.f_3988.f_205[iVar0] = iParam8;
		Global_1339928.f_3988.f_314[iVar0] = iParam9;
		Global_1339928.f_3988.f_325[iVar0] = iParam10;
		Global_1339928.f_3988.f_357[iVar0] = iParam11;
		Global_1339928.f_3988.f_238[iVar0] = iParam12;
		Global_1339928.f_3988.f_271[iVar0] = iParam13;
		Global_1339928.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_110(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_1339928.f_4594[iParam0]), iParam1);
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1339928.f_4594[iParam0], iParam1);
}

void func_112()
{
	char* sVar0;
	
	if (((func_13(unk_0x8ACD527A7E574590(), 1, 1) && !func_6(unk_0x8ACD527A7E574590())) && !func_393(unk_0x8ACD527A7E574590())) && func_371())
	{
		if (Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_3 == 1)
		{
			if (Local_820.f_707)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_32() && !unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
			{
				func_113("CPC_PREPAIR", sVar0, func_124(), 0);
			}
			else
			{
				func_113("CPC_PREP", sVar0, func_124(), 0);
			}
		}
		else
		{
			func_324();
		}
	}
	else
	{
		func_324();
	}
}

void func_113(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return;
	}
	if (unk_0xED3EE687D9336ECE(sParam0) > 23)
	{
		return;
	}
	if (unk_0x0AAC2160036975D9(sParam1))
	{
		return;
	}
	if (unk_0xED3EE687D9336ECE(sParam1) > 23)
	{
		return;
	}
	if (unk_0x0AAC2160036975D9(sParam2))
	{
		return;
	}
	if (unk_0xED3EE687D9336ECE(sParam2) > 23)
	{
		return;
	}
	if (func_123(sParam0, sParam1, sParam2))
	{
		return;
	}
	func_117();
	Global_1312577 = 4;
	StringCopy(&(Global_1312577.f_1), unk_0x664B47C58CE8A0A4(), 24);
	Global_1312577.f_7 = unk_0x39BD4614CF899227(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	func_116();
	func_115(bParam3);
	func_114();
}

void func_114()
{
	unk_0x573691DB812DC8AA(&(Global_1312577.f_56), 1);
}

void func_115(bool bParam0)
{
	if (bParam0)
	{
		unk_0x573691DB812DC8AA(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0xA5F70A8B83BDFA49(&(Global_1312577.f_56), 0);
}

void func_116()
{
	Global_1312577.f_8 = unk_0x3273EF918EE77B03(unk_0xE23D71F521207E8D(), 86400000);
	Global_1312577.f_9 = unk_0xE23D71F521207E8D();
}

void func_117()
{
	func_119();
	func_118(0);
}

void func_118(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4C779B19E6DDCDA2();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xE23D71F521207E8D();
		Global_1312577.f_9 = unk_0xE23D71F521207E8D();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_119()
{
	if (!func_122())
	{
	}
	if (func_121())
	{
		unk_0xBEF89EB43E4852EE(&(Global_1312577.f_10));
		func_120();
		unk_0xB4E213851ED28262();
	}
}

void func_120()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xA50C1D6E503AA51E(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xA50C1D6E503AA51E(Global_1312577.f_50);
			unk_0xA50C1D6E503AA51E(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x0E477F7C472602E8(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x0E477F7C472602E8(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0xFC059569EB1C537B(Global_1312577.f_55);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_30));
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_46));
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_121()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	if (!func_121())
	{
		return 0;
	}
	unk_0x9C55668C318B45CE(&(Global_1312577.f_10));
	func_120();
	return unk_0x911D2DB971FD2DC2();
}

bool func_123(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_121())
	{
		return 0;
	}
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return 0;
	}
	if (unk_0x0AAC2160036975D9(sParam1))
	{
		return 0;
	}
	if (unk_0x0AAC2160036975D9(sParam2))
	{
		return 0;
	}
	if (!unk_0x39BD4614CF899227(sParam0) == unk_0x39BD4614CF899227(&(Global_1312577.f_10)))
	{
		return 0;
	}
	if (!unk_0x39BD4614CF899227(sParam1) == unk_0x39BD4614CF899227(&(Global_1312577.f_14)))
	{
		return 0;
	}
	return unk_0x39BD4614CF899227(sParam2) == unk_0x39BD4614CF899227(&(Global_1312577.f_30));
}

char* func_124()
{
	switch (Local_820.f_712)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_125()
{
	if (!unk_0xB56FEBC510E7E9DE(iLocal_101, 3))
	{
		iLocal_784 = 1;
		func_143();
		unk_0xBD15B9A51130761A();
		func_363(1);
		func_129();
		func_127();
		unk_0x573691DB812DC8AA(&iLocal_101, 3);
		func_126();
	}
}

void func_126()
{
	Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_6 = 0;
}

void func_127()
{
	if (Global_2409241.f_6 == unk_0x8EC1FFF6B789C28E())
	{
		func_128();
	}
}

void func_128()
{
	struct<25> Var0;
	
	if (unk_0x4D1CAE1CFC4C8868(Global_2409241.f_6))
	{
		if (!Global_2409241.f_6 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2409241 = { Var0 };
	Global_2409241.f_6 = -1;
}

void func_129()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x8EC1FFF6B789C28E())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

int func_130(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((*uParam0 > 0 && !func_141()) && !(func_140(unk_0x8ACD527A7E574590(), 0) && (func_139(unk_0x8ACD527A7E574590()) || func_137(unk_0x8ACD527A7E574590()))))
	{
		func_136();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_36(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 25);
				if (bParam1)
				{
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4413), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_135(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_36(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_132();
				func_135(uParam0, 2);
			}
			break;
		
		case 2:
			func_132();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_131("AMEV_LBD_HELP"))
				{
					unk_0x4ACCE973F9C3CA3B(1);
				}
				func_135(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4413), 1);
				func_135(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4413), 1);
			return 1;
	}
	return 0;
}

bool func_131(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_132()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 0))
	{
		if (((((!unk_0xF0F27AB23835252C() && !unk_0xB56FEBC510E7E9DE(Global_2457713.f_741, 2)) && func_13(unk_0x8ACD527A7E574590(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0x2CC731F9E664299E())
		{
			unk_0x573691DB812DC8AA(&(Global_2457713.f_4413), 1);
			func_134("AMEV_LBD_HELP", -1);
			func_133(1);
			unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4413), 0);
		}
	}
}

void func_133(int iParam0)
{
	unk_0x4533116407F5EAF8(3, 21, 200, 0, 0);
	if (iParam0 && !func_141())
	{
		unk_0xBBEB613A917D7EE8(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_134(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 0, iParam1);
}

void func_135(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_136()
{
	Global_2442027 = 1;
}

bool func_137(int iParam0)
{
	return func_138(iParam0, 19);
}

bool func_138(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_8.f_4, iParam1);
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_138(iParam0, 9);
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	if (Global_1608060[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1608060[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_141()
{
	return Global_2426494.f_2138[0 /*70*/].f_1 != 0;
}

void func_142()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 1))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 1);
	}
	if (Global_2457713.f_4550 > 0)
	{
		unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_KILL");
		unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_FIRA");
		unk_0xE0DB271DC0AEA972("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x3D7142FA27466C86(1);
		Global_2457713.f_4550 = 0;
		unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
		unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
		unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 0);
		if (!unk_0x35D1CAD6ADAB6491(unk_0x664B47C58CE8A0A4(), "am_pi_menu"))
		{
			if (Global_2457713.f_4560 > -1)
			{
				unk_0xA92DDFCD9C825944(Global_2457713.f_4560);
				Global_2457713.f_4560 = -1;
			}
		}
	}
}

void func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_820.f_709)
	{
		if (unk_0xC3B073777B46C61A(Local_392[iVar0 /*3*/]))
		{
			unk_0x296CDA10C549A502(&(Local_392[iVar0 /*3*/]));
			unk_0xB21A80E2BBE0ADF5(Local_392[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_377[iVar0] = 0;
		iVar0++;
	}
}

void func_144()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!unk_0xB56FEBC510E7E9DE(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2, 0) && (func_153() || unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2)))
	{
		if (func_48(func_152()))
		{
			func_151();
		}
		if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
		{
			if (func_264(0))
			{
				if (func_263(0))
				{
					if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_150(63, Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					iVar1 = unk_0x209E209593217021(Local_820.f_674[0]);
					if (unk_0x5D14B2034A3E40D3(iVar1))
					{
						iVar2 = unk_0x42145D1DD048146E(iVar1);
						if (func_263(1))
						{
							if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_150(66, Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_263(2))
						{
							if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_150(66, Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							if (unk_0xB56FEBC510E7E9DE(Local_820.f_2, 0) && Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 >= Global_262145.f_9124)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = unk_0x2743F2603B2676CC(iVar2);
							if (func_63(iVar2, 1))
							{
								sVar3 = func_147(iVar2);
							}
							func_146(65, Local_3614[Local_820.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_42(65, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2);
			}
		}
		else
		{
			func_41("", "", 1);
		}
		unk_0x573691DB812DC8AA(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2), 0);
		func_145(132);
	}
}

void func_145(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_146(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_76(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_43(&Var0);
}

char* func_147(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	if ((func_138(iParam0, 28) || func_138(unk_0x8ACD527A7E574590(), 28)) || func_149(iParam0))
	{
		return unk_0x366B33759CCFE37B("GB_REST_ACC");
	}
	iVar0 = func_62(iParam0);
	if (iVar0 != func_75())
	{
		sVar1 = func_148(&(Global_1608060[iVar0 /*106*/].f_8.f_72));
		if (unk_0x0AAC2160036975D9(sVar1))
		{
			return unk_0x366B33759CCFE37B("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_148(var uParam0)
{
	return uParam0;
}

int func_149(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_103(iParam0) };
	if (unk_0xA24A81C5933F1B29() || unk_0x2C063B4379F0C076())
	{
		if (unk_0x0CCE21CD7644969B(0))
		{
			return 0;
		}
	}
	else if (unk_0xBB3DCD23C363D187())
	{
		if (unk_0xC59026760C543939(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_150(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_76(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_43(&Var0);
}

void func_151()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_2 != 0)
		{
			Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_152()
{
	return Global_2426494.f_2138[0 /*70*/].f_1;
}

bool func_153()
{
	return unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 25);
}

void func_154()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xB56FEBC510E7E9DE(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2, 1))
	{
		if (func_6(unk_0x8ACD527A7E574590()))
		{
			unk_0x573691DB812DC8AA(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2), 1);
			return;
		}
		if (func_393(unk_0x8ACD527A7E574590()))
		{
			unk_0x573691DB812DC8AA(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2), 1);
			return;
		}
		if (Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 >= Global_262145.f_9124)
		{
			iVar3 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_820.f_1 - iLocal_99)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_9284)
			{
				iVar3 = Global_262145.f_9284;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_236() * iVar3);
			iVar1 = (func_235() * iVar3);
		}
		else
		{
			func_233(0);
		}
		if (!unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
		{
			if (Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 >= Global_262145.f_9124)
			{
				if (unk_0xB56FEBC510E7E9DE(Local_820.f_2, 0))
				{
					iVar0 = (iVar0 + unk_0xF2DB717A73826179((IntToFloat(func_232()) * Global_262145.f_9295)));
				}
			}
			if (func_263(0))
			{
				Local_3602.f_5 = 1;
				iVar1 = (iVar1 + unk_0xF2DB717A73826179((IntToFloat(func_231()) * Global_262145.f_9296)));
			}
			if ((Local_820.f_674[0] != unk_0x8DDF51AF4B711D9F() && Local_820.f_674[1] != unk_0x8DDF51AF4B711D9F()) && Local_820.f_674[2] != unk_0x8DDF51AF4B711D9F())
			{
				if (Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 >= Global_262145.f_9124)
				{
					func_233(1);
				}
			}
		}
		func_214(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_213())
			{
				func_204(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				unk_0x7D0DD300F4BE97CC(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_3602.f_6 = iVar0;
		if (!Global_262145.f_9348)
		{
			if (Local_3602.f_6 > 0)
			{
				func_203(8, Local_3602.f_6);
			}
		}
		Global_2442856 = iVar0;
		func_202();
		func_155(0, unk_0x77F050A399DB77ED(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
		Local_3602.f_7 = (Local_3602.f_7 + iVar1);
		unk_0x573691DB812DC8AA(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2), 1);
	}
}

int func_155(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_156(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_166(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x1F2158D615BC4B25(iParam1))
		{
			if (unk_0x94195F7CA642F937(iParam1))
			{
				uVar1 = unk_0xCBABEE38E5DAB356(iParam1);
				func_162(unk_0x5C9D7C3DA25581D1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_157(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_157(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_160(iParam0, 1) };
	if (iParam0 == func_159(unk_0x77F050A399DB77ED()))
	{
		func_158(1);
	}
	func_162(Var0, iParam1, 0, sParam2);
}

void func_158(int iParam0)
{
	Global_2426494.f_1322 = iParam0;
}

int func_159(int iParam0)
{
	return iParam0;
}

Vector3 func_160(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_161(unk_0x77F050A399DB77ED()) && unk_0x7DF7F572759C0E1B(unk_0x1B5ACB4894956DC7()) == 4)
	{
		Var0 = { unk_0x03C14E8A9400F2A9(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		fVar3 = unk_0x7578EBD2DA3F8DD2(iParam0);
	}
	unk_0x2C8CA5222767F3E4(unk_0xDF1398076E26B0E4(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xB91BD3EFC17D9612(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_161(int iParam0)
{
	return iParam0;
}

void func_162(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426494.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426494.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426494.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426494.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426494.f_741[iVar1 /*29*/].f_4 = func_165(Global_2426494.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426494.f_741[iVar1 /*29*/].f_7 = unk_0xE23D71F521207E8D();
			Global_2426494.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426494.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426494.f_741[iVar1 /*29*/].f_9 = func_164();
			Global_2426494.f_741[iVar1 /*29*/].f_10 = func_163();
			StringCopy(&(Global_2426494.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_163()
{
	if (Global_2426494.f_1322)
	{
		Global_2426494.f_1322 = 0;
		return 1;
	}
	Global_2426494.f_1322 = 0;
	return 0;
}

var func_164()
{
	var uVar0;
	
	uVar0 = Global_2426494.f_1324;
	Global_2426494.f_1324 = 1;
	return uVar0;
}

float func_165(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xA2490B3CE6382FBB(unk_0x8BA9E59C6E6D644E(), Param0, 1);
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

var func_166(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_167(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_167(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_201(unk_0x8ACD527A7E574590()) || func_200(unk_0x8ACD527A7E574590()))
	{
		if (Global_262145.f_7495 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7495;
		}
	}
	else if (Global_262145.f_5004 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5004;
	}
	if (func_199(uParam2))
	{
	}
	if (func_198())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_196(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_195(&iVar1);
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
					func_191(&iVar1);
					break;
				}
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
			func_188(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_177((func_187(unk_0x8ACD527A7E574590()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC582843DAE0B318C(iVar1, iParam8, iParam9);
				if (Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_2 != -1)
				{
					func_188(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_172(iVar1);
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
				func_168((func_170(unk_0x8ACD527A7E574590()) + iVar1));
			}
			else
			{
				func_168((func_170(unk_0x8ACD527A7E574590()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_168(int iParam0)
{
	if (func_198())
	{
		Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_192.f_5 = iParam0;
		func_169(joaat("mpply_globalxp"), iParam0);
	}
}

void func_169(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, uParam1, 1);
	}
}

int func_170(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x8ACD527A7E574590())
			{
				return func_171(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1586488[iParam0 /*408*/].f_192.f_5;
			}
		}
		else
		{
			return func_171(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_172(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_103(unk_0x8ACD527A7E574590()) };
	if (unk_0x99BD29C80FF8FFC7())
	{
		if (unk_0x149478BD8C953602(&Var0))
		{
			iVar13 = func_175(func_176(&Var0));
			if (iVar13 == 0)
			{
				func_174(&Global_1347494, iParam0);
				func_173(joaat("mpply_crew_local_xp_0"), Global_1347494);
			}
			else if (iVar13 == 1)
			{
				func_174(&Global_1347495, iParam0);
				func_173(joaat("mpply_crew_local_xp_1"), Global_1347495);
			}
			else if (iVar13 == 2)
			{
				func_174(&Global_1347496, iParam0);
				func_173(joaat("mpply_crew_local_xp_2"), Global_1347496);
			}
			else if (iVar13 == 3)
			{
				func_174(&Global_1347497, iParam0);
				func_173(joaat("mpply_crew_local_xp_3"), Global_1347497);
			}
			else if (iVar13 == 4)
			{
				func_174(&Global_1347498, iParam0);
				func_173(joaat("mpply_crew_local_xp_4"), Global_1347498);
			}
		}
	}
}

void func_173(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347489 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347491 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347491 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347492 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347494 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347496 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347497 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347498 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347499 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347500 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347501 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347502 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347503 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347504 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347505 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_175(int iParam0)
{
	if (iParam0 == Global_1347489)
	{
		return 0;
	}
	else if (iParam0 == Global_1347490)
	{
		return 1;
	}
	else if (iParam0 == Global_1347491)
	{
		return 2;
	}
	else if (iParam0 == Global_1347492)
	{
		return 3;
	}
	else if (iParam0 == Global_1347493)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_176(var uParam0)
{
	if (unk_0x99BD29C80FF8FFC7())
	{
		if (unk_0x149478BD8C953602(uParam0))
		{
			return Global_2440905;
		}
	}
	return Global_2440905;
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	if (func_198())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7470 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347609[func_186(-1)])
				{
					unk_0xC582843DAE0B318C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347609[func_186(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7469 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC582843DAE0B318C(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7469 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC582843DAE0B318C(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_185(unk_0x8ACD527A7E574590()))
		{
			Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_192.f_1 = iParam0;
			Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_192.f_6 = func_183(iParam0, 1);
		}
		func_182(629, iParam0, -1, 1);
		func_181(630, func_183(iParam0, 1), -1, 1);
		Global_1347609[func_186(-1)] = iParam0;
		func_178(7, 0);
	}
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179();
		Global_2440882[iVar0] = iParam0;
	}
}

int func_179()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2440882[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_180(int iParam0, var uParam1)
{
	if (Global_1315898)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315910) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_186(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
}

void func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_186(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347555[func_186(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347561[func_186(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347567[func_186(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347573[func_186(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347531[func_186(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347537[func_186(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347543[func_186(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347549[func_186(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347507[func_186(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347513[func_186(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347519[func_186(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347525[func_186(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347579[func_186(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347585[func_186(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347591[func_186(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347597[func_186(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347603[func_186(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347609[func_186(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347615[func_186(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488752[0 /*6*/][func_186(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488752[1 /*6*/][func_186(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2488752[2 /*6*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2488752[3 /*6*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3683:
			Global_2488803[func_186(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347621[func_186(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347627[func_186(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347633[func_186(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347639[func_186(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488777[0 /*5*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488777[1 /*5*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488777[2 /*5*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488777[3 /*5*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2488777[4 /*5*/][func_186(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_184(iParam0, 0);
}

int func_184(int iParam0, int iParam1)
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
		if (Global_273200[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273200[iVar3] < iParam0)
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

int func_185(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_2426494.f_1, iParam0);
	}
	return 1;
}

int func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_187(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x8ACD527A7E574590())
			{
				return Global_1347609[func_186(-1)];
			}
			else if (func_185(iParam0))
			{
				return Global_1586488[iParam0 /*408*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347609[func_186(-1)];
	}
	return 0;
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_190(iParam0, func_186(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_189(iParam0))
	{
		func_181(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_182(iParam0, iVar0, iParam2, 1);
	}
}

int func_189(int iParam0)
{
	if (Global_1347488)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3683:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
				return 1;
				break;
			}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_186(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590());
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		iVar4 = unk_0x209E209593217021(iVar0);
		if (unk_0x5D14B2034A3E40D3(iVar4))
		{
			iVar5 = unk_0x42145D1DD048146E(iVar4);
			if (unk_0xE6C94A0E653BD3F1(iVar5) != -1)
			{
				if (unk_0xE6C94A0E653BD3F1(iVar5) == iVar1 || func_57(unk_0xE6C94A0E653BD3F1(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x8ACD527A7E574590())
					{
						if (func_104(unk_0x8ACD527A7E574590(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_192(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_192(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_192(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
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
		while (iVar0 < unk_0xD92F4D7123D878D4())
		{
			iVar3 = iVar0;
			if (unk_0x5D14B2034A3E40D3(iVar3))
			{
				iVar4 = unk_0x42145D1DD048146E(iVar3);
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x8ACD527A7E574590())
					{
						iVar1++;
						if (func_104(unk_0x8ACD527A7E574590(), iVar4))
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
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x8ACD527A7E574590())
				{
					if (func_194(unk_0x8ACD527A7E574590(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_104(unk_0x8ACD527A7E574590(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_192(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_192(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_194(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_29(iParam0), func_29(iParam1));
	return 0f;
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (unk_0x9C0DFB51F8482CB5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_192(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_196(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x737E62570AEFEFAA(iParam0) > func_187(unk_0x8ACD527A7E574590()))
		{
			iParam0 = -func_187(unk_0x8ACD527A7E574590());
		}
	}
	if (func_197(8000, 0, 0) > 0)
	{
		if (func_197(8000, 0, 0) < (iParam0 + func_187(unk_0x8ACD527A7E574590())))
		{
			iParam0 = (func_197(8000, 0, 0) - func_187(unk_0x8ACD527A7E574590()));
		}
	}
	return iParam0;
}

int func_197(int iParam0, bool bParam1, int iParam2)
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
	return Global_273200[iParam0];
}

int func_198()
{
	return 1;
}

int func_199(char* sParam0)
{
	if (unk_0x9D14A941038EF8A3(uParam0))
	{
		return 1;
	}
	else if (unk_0x35D1CAD6ADAB6491(uParam0, "") || unk_0x35D1CAD6ADAB6491(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_201(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

void func_202()
{
	Global_2442026 = 1;
}

void func_203(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2457713.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4954)
		{
			iParam1 = Global_262145.f_4954;
		}
		Global_2457713.f_270 = iParam1;
		Global_2457713.f_271 = 0;
	}
}

void func_204(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_213())
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
			if (iParam1 > 0)
			{
				func_205(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_205(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_205(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x0539DAE87D010814(func_39()) || unk_0x292CA3F0A08EF671())
		{
			Global_2554355 = 1;
			return 0;
		}
		if (Global_2441709)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2554356 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2553876[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0x01478567A525F96A(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x673718B863EC75DD(iVar3))
		{
			*uParam0 = func_212(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2553876[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2554352 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2554354 = 1;
			Global_2554357 = iParam4;
			Global_2554359 = iParam3;
			Global_2554360 = 1;
			Global_2554358 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2554357 = iParam4;
			Global_2554359 = iParam3;
			Global_2554360 = 1;
			Global_2554358 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_211(1, iParam4);
			Global_2554354 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_206(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_206(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x573691DB812DC8AA(&(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_207(iParam0);
	}
}

void func_207(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_210(iParam0))
		{
			if (!bVar0)
			{
				unk_0x22A86DAAC9EDB234();
			}
		}
		else if (!bVar0)
		{
			unk_0x6A877E329E609E74(Global_2553876[iParam0 /*72*/]);
		}
		func_208(&(Global_2553876[iParam0 /*72*/]));
	}
}

void func_208(var uParam0)
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
	func_209(&(uParam0->f_8.f_3));
	func_209(&(uParam0->f_8.f_16));
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
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_209(var uParam0)
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

int func_210(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553876[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_211(int iParam0, var uParam1)
{
	Global_2442987 = uParam1;
	Global_2442986 = iParam0;
}

int func_212(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2553876[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_213())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2553876[iVar0 /*72*/].f_2 = 1;
			Global_2553876[iVar0 /*72*/].f_1 = uParam5;
			Global_2553876[iVar0 /*72*/].f_3 = uParam1;
			Global_2553876[iVar0 /*72*/].f_4 = uParam2;
			Global_2553876[iVar0 /*72*/].f_7 = uParam3;
			Global_2553876[iVar0 /*72*/].f_5 = 0;
			Global_2553876[iVar0 /*72*/] = iParam0;
			Global_2553876[iVar0 /*72*/].f_6 = iParam4;
			Global_2553876[iVar0 /*72*/].f_68 = uParam8;
			Global_2553876[iVar0 /*72*/].f_67 = uParam7;
			Global_2553876[iVar0 /*72*/].f_71 = 0;
			Global_2554352 = 0;
			if (bParam6)
			{
				Global_2553876[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_213()
{
	if (unk_0x2C063B4379F0C076())
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_230())
		{
			if (func_229(0))
			{
				if (unk_0x860CE5C791DC28F5(func_228()))
				{
					if (func_227() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_227());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_225(&iVar0);
					if (iParam1 == 1)
					{
						func_218("GB_BCUT_TICK1", func_228(), iVar0, 0, 0, 1, 1);
					}
					func_217(20);
					func_215(func_228(), iVar0, 1);
				}
			}
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0.f_0 = 423;
		Var0.f_1 = unk_0x8ACD527A7E574590();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 5, func_216(iParam0));
	}
}

int func_216(int iParam0)
{
	var uVar0;
	
	unk_0x573691DB812DC8AA(&uVar0, iParam0);
	return uVar0;
}

void func_217(int iParam0)
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_4647.f_7), iParam0);
}

int func_218(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x2743F2603B2676CC(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x2743F2603B2676CC(iParam1), 64);
		}
		unk_0x2B8B3581C4E63AD1(sParam0);
		unk_0xFC059569EB1C537B(func_50(iParam1, -2, 1, 0));
		unk_0x82E0649BF28E05D3(func_223(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xFC059569EB1C537B(iParam3);
		}
		unk_0xA50C1D6E503AA51E(iParam2);
		iVar0 = unk_0x70E981B5CF659D8A(0, 1);
		func_219(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_219(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_222() || !unk_0x4FE03C08BC095A57()) || !func_73(unk_0x8ACD527A7E574590(), 0))
	{
		return;
	}
	iVar0 = func_220(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1715089.f_5[iVar0 /*53*/] = iParam0;
		Global_1715089.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1715089.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1715089.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1715089.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1715089.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1715089.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1715089 - 1))
	{
		if (iParam0 > Global_1715089.f_5[iVar0 /*53*/].f_1)
		{
			func_221(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1715089++;
	if (Global_1715089 > 5)
	{
		Global_1715089 = 5;
		return Global_1715089;
	}
	return (Global_1715089 - 1);
}

void func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1715089.f_5[iVar0 /*53*/] = { Global_1715089.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_222()
{
	return unk_0x368F9074322AFD91(-1762644250);
}

var func_223(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_224(&cVar0);
}

var func_224(char[4] cParam0)
{
	return cParam0;
}

void func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_226();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_226()
{
	return Global_262145.f_10228;
}

int func_227()
{
	return Global_262145.f_10227;
}

int func_228()
{
	return Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8;
}

bool func_229(bool bParam0)
{
	return func_63(unk_0x8ACD527A7E574590(), bParam0);
}

bool func_230()
{
	return func_64(unk_0x8ACD527A7E574590());
}

int func_231()
{
	return Global_262145.f_9107;
}

int func_232()
{
	return Global_262145.f_9106;
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		if (func_234(1))
		{
			unk_0x573691DB812DC8AA(&Global_1573899, 1);
		}
	}
	else if (func_234(2))
	{
		unk_0x573691DB812DC8AA(&Global_1573899, 2);
	}
}

int func_234(int iParam0)
{
	var uVar0;
	
	uVar0 = func_190(2507, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xB56FEBC510E7E9DE(uVar0, 0) && unk_0xB56FEBC510E7E9DE(iVar0, 1)) && unk_0xB56FEBC510E7E9DE(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xB56FEBC510E7E9DE(iVar0, 3) && unk_0xB56FEBC510E7E9DE(iVar0, 4)) && unk_0xB56FEBC510E7E9DE(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xB56FEBC510E7E9DE(iVar0, 6) && unk_0xB56FEBC510E7E9DE(iVar0, 7)) && unk_0xB56FEBC510E7E9DE(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xB56FEBC510E7E9DE(iVar0, 9) && unk_0xB56FEBC510E7E9DE(iVar0, 10)) && unk_0xB56FEBC510E7E9DE(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_235()
{
	return Global_262145.f_9126;
}

int func_236()
{
	return Global_262145.f_9125;
}

void func_237()
{
	if (unk_0xB56FEBC510E7E9DE(iLocal_101, 5))
	{
		func_238();
	}
	func_395();
}

void func_238()
{
	int iVar0[3];
	int iVar4;
	var uVar5[3];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar21;
	var uVar22;
	int iVar23;
	int iVar24;
	
	if (Local_820.f_674[0] > -1)
	{
		iVar15 = 0;
		iVar13 = 0;
		while (iVar13 < 3)
		{
			iVar0[iVar13] = func_75();
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < 3)
		{
			if (Local_820.f_674[iVar13] > -1)
			{
				iVar21 = unk_0x209E209593217021(Local_820.f_674[iVar13]);
				if (unk_0x5D14B2034A3E40D3(iVar21))
				{
					iVar4 = unk_0x42145D1DD048146E(iVar21);
					if (func_13(iVar4, 0, 1))
					{
						if (!func_73(iVar4, 0))
						{
							iVar0[iVar13] = iVar4;
							uVar5[iVar13] = Local_3614[Local_820.f_674[iVar13] /*5*/].f_4;
							if (func_229(1))
							{
								if (func_63(iVar4, 1))
								{
									uVar17[iVar13] = func_50(iVar4, -2, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar13++;
		}
		iVar14 = unk_0x8DDF51AF4B711D9F();
		if (func_71(unk_0x8ACD527A7E574590()))
		{
			uVar22 = func_253();
			iVar23 = unk_0xAE5AB5A8DE4D19AF(uVar22);
			if (unk_0x860CE5C791DC28F5(iVar23))
			{
				iVar24 = unk_0x68F357506549EA00(iVar23);
				if (unk_0x5D14B2034A3E40D3(iVar24))
				{
					iVar14 = iVar24;
				}
			}
		}
		iVar9 = func_360(0, Local_820.f_708);
		iVar10 = Local_820.f_709;
		iVar11 = func_360(0, Local_3614[iVar14 /*5*/].f_4);
		iVar12 = func_360(0, (Global_262145.f_8963 - func_362(&(Local_820.f_661), 0, 0)));
		func_252(iVar12);
		if (iVar12 > 30000)
		{
			iVar16 = 1;
		}
		else
		{
			iVar16 = 6;
		}
		func_239(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar9, iVar10, iVar11, iVar12, &iVar15, iVar16, func_249(), uVar17[0], uVar17[1], uVar17[2]);
	}
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_246(0) == 0)
	{
		return;
	}
	func_245();
	iVar1 = 0;
	if (((Global_2441617[0] != iParam0 || Global_2441617[1] != iParam1) || Global_2441617[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2441617[0] = iParam0;
	Global_2441617[1] = iParam1;
	Global_2441617[2] = iParam2;
	Global_2441617[3] = 0;
	Global_2441617[4] = 0;
	if (Global_2441617[0] != func_75())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[0]);
			Global_2441623[0 /*16*/] = { func_244(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_241(iParam3, &(Global_2441623[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13);
		}
	}
	if (Global_2441617[1] != func_75())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[1]);
			Global_2441623[1 /*16*/] = { func_244(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_241(iParam4, &(Global_2441623[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14);
		}
	}
	if (Global_2441617[2] != func_75())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[2]);
			Global_2441623[2 /*16*/] = { func_244(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_241(iParam5, &(Global_2441623[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15);
		}
	}
	func_240(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0);
	if (func_393(unk_0x8ACD527A7E574590()) == 0)
	{
		func_241(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_199(sParam12))
	{
		sVar2 = sParam12;
	}
	func_109(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0);
	*iParam10 = 0;
	func_108();
}

void func_240(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_111(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_110(4, iVar0);
		Global_1339928.f_2786[iVar0] = iParam0;
		Global_1339928.f_2786.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1339928.f_2786.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1339928.f_2786.f_183[iVar0] = iParam3;
		Global_1339928.f_2786.f_216[iVar0] = iParam5;
		Global_1339928.f_2786.f_194[iVar0] = iParam4;
		Global_1339928.f_2786.f_227[iVar0] = iParam6;
		Global_1339928.f_2786.f_270[iVar0] = iParam7;
		Global_1339928.f_2786.f_281[iVar0] = iParam8;
		Global_1339928.f_2786.f_292[iVar0] = iParam9;
		Global_1339928.f_2786.f_303[iVar0] = iParam10;
		Global_1339928.f_2786.f_314[iVar0] = iParam11;
		Global_1339928.f_2786.f_325[iVar0] = iParam13;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x2C063B4379F0C076()) && iParam12)
		{
			Global_1339928.f_941 = 1;
		}
	}
}

void func_241(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_111(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_110(6, iVar0);
		Global_1339928.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3436.f_183[iVar0] = iParam3;
		Global_1339928.f_3436.f_172[iVar0] = iParam2;
		Global_1339928.f_3436.f_260[iVar0] = iParam4;
		Global_1339928.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339928.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339928.f_3436.f_443[iVar0] = iParam7;
		Global_1339928.f_3436.f_454[iVar0] = iParam8;
		Global_1339928.f_3436.f_497[iVar0] = iParam9;
		Global_1339928.f_3436.f_508[iVar0] = iParam10;
		Global_1339928.f_3436.f_205[iVar0] = iParam11;
		Global_1339928.f_3436.f_216[iVar0] = iParam12;
		Global_1339928.f_3436.f_227[iVar0] = iParam13;
		Global_1339928.f_3436.f_238[iVar0] = iParam14;
		Global_1339928.f_3436.f_249[iVar0] = iParam15;
		Global_1339928.f_3436.f_519[iVar0] = iParam16;
		Global_1339928.f_3436.f_530[iVar0] = iParam17;
		Global_1339928.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_243())
		{
			Global_1339928.f_941 = 1;
		}
		if (unk_0x2C063B4379F0C076())
		{
			iVar2 = 0;
			unk_0x87B14B27D777B56E(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339928.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339928.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339928.f_941 = 1;
			}
			if (func_242())
			{
				Global_1339928.f_945 = 1;
			}
		}
	}
}

int func_242()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2C063B4379F0C076())
	{
		unk_0x87B14B27D777B56E(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_243()
{
	if ((unk_0x7B22015BCC2AAAAE() == 8 || unk_0x7B22015BCC2AAAAE() == 9) || unk_0x7B22015BCC2AAAAE() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_244(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_245()
{
	unk_0xCA3D1FCD234B8E0B(8);
	unk_0xCA3D1FCD234B8E0B(9);
	unk_0xCA3D1FCD234B8E0B(6);
	unk_0xCA3D1FCD234B8E0B(7);
	Global_2442030 = 1;
}

int func_246(bool bParam0)
{
	if (func_248())
	{
		return 0;
	}
	if (func_247())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(unk_0x8ACD527A7E574590(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_247()
{
	return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_177 != 0;
}

bool func_248()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 12);
}

char* func_249()
{
	return "HUD_COUNTDOWN";
	switch (func_251(unk_0x8ACD527A7E574590()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_250())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_250()
{
	if (func_251(unk_0x8ACD527A7E574590()) == 133)
	{
		return Global_2457713.f_4634;
	}
	return -1;
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608060[iVar0 /*106*/];
	}
	return -1;
}

void func_252(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x5CB0A4A4240C1B6A())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
		{
			if (!unk_0x0AAC2160036975D9(&(Global_2457713.f_4552)))
			{
				unk_0xE0F8CCEE463E2ACE(&(Global_2457713.f_4552));
			}
			unk_0x3D7142FA27466C86(1);
			unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_FIRA");
			unk_0xE0DB271DC0AEA972("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
			unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
			unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 0);
			if (Global_2457713.f_4560 > -1)
			{
				unk_0xA92DDFCD9C825944(Global_2457713.f_4560);
				Global_2457713.f_4560 = -1;
			}
			Global_2457713.f_4550 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 4))
			{
				if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 2))
				{
					if (unk_0x4D3DD8FCA0E87E12())
					{
						if ((!unk_0x35D1CAD6ADAB6491(unk_0x833ADF2411E6FB02(unk_0x4B2B28DE73831DEB()), "OFF") && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) && !unk_0x0AAC2160036975D9(&(Global_2457713.f_4552)))
						{
							StringCopy(&(Global_2457713.f_4552), "", 32);
							unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_FIRA");
							unk_0xE0DB271DC0AEA972("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
							unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
							unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 0);
							unk_0x3D7142FA27466C86(1);
							unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 2);
						}
					}
				}
				else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 5))
				{
					unk_0xE0F8CCEE463E2ACE("OFF");
				}
			}
			else if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x3345CB85AB9EC035("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x3345CB85AB9EC035("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S");
				}
				unk_0xCAEDD1A8E831AD36("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 1);
			}
			else if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xBF883F3866EF9143() != 0)
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0x84C7091A7C9C1CE2())
						{
							StringCopy(&(Global_2457713.f_4552), unk_0x2ABF947CD85AC605(), 32);
							unk_0xE0F8CCEE463E2ACE("OFF");
						}
						unk_0x3D7142FA27466C86(1);
						unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 3))
				{
					Global_2457713.f_4560 = unk_0xBE8BBC6340F2B731();
					unk_0xBBEB613A917D7EE8(Global_2457713.f_4560, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
			{
				Global_2457713.f_4550 = 0;
				Global_2457713.f_4560 = -1;
				unk_0x374D3B72ED08A312("FM_COUNTDOWN_30S_KILL");
				unk_0x3D7142FA27466C86(0);
				unk_0x3345CB85AB9EC035("FM_PRE_COUNTDOWN_30S");
				unk_0x6BFEA4147919A51C("DisableFlightMusic", 1);
				unk_0x6BFEA4147919A51C("WantedMusicDisabled", 1);
				unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 1);
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 0);
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 2))
				{
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 2);
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 5);
				}
				else
				{
					unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 5);
					unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
		{
			Global_2457713.f_4550 = 0;
			Global_2457713.f_4560 = -1;
			unk_0x374D3B72ED08A312("FM_COUNTDOWN_30S_KILL");
			unk_0x3D7142FA27466C86(0);
			unk_0x3345CB85AB9EC035("FM_PRE_COUNTDOWN_30S");
			unk_0x6BFEA4147919A51C("DisableFlightMusic", 1);
			unk_0x6BFEA4147919A51C("WantedMusicDisabled", 1);
			unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 1);
			unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 0);
			if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 2);
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 5);
			}
			else
			{
				unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 2);
				unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 5);
			}
		}
	}
}

var func_253()
{
	if (unk_0x1F2158D615BC4B25(func_254()))
	{
		return func_254();
	}
	return func_68();
}

var func_254()
{
	return Global_2359301.f_3;
}

void func_255()
{
	int iVar0;
	struct<47> Var1;
	int iVar48;
	int iVar49;
	var uVar50;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_46 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		Local_1570.f_527[iVar0 /*47*/] = { Var1 };
		Local_1570.f_527[iVar0 /*47*/].f_1 = func_75();
		if (Local_820.f_674[iVar0] > -1)
		{
			iVar49 = unk_0x209E209593217021(Local_820.f_674[iVar0]);
			if (unk_0x5D14B2034A3E40D3(iVar49))
			{
				iVar48 = unk_0x42145D1DD048146E(iVar49);
				if (!func_73(iVar48, 0))
				{
					Local_1570.f_527[iVar0 /*47*/] = Local_820.f_674[iVar0];
					Local_1570.f_527[iVar0 /*47*/].f_1 = iVar48;
					uVar50 = Local_3614[Local_820.f_674[iVar0] /*5*/].f_4;
					Local_1570.f_527[iVar0 /*47*/].f_9 = uVar50;
					Local_1570.f_527[iVar0 /*47*/].f_30 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_256()
{
	if (Local_818.f_0 != -1 && Local_818.f_1 != -1)
	{
		if (unk_0xD858B8E54A61877D() != func_258() && unk_0x5D14B2034A3E40D3(unk_0xD858B8E54A61877D()))
		{
			func_257(Local_818.f_1, Local_818.f_0, func_216(unk_0x42145D1DD048146E(unk_0xD858B8E54A61877D())));
			Local_818.f_0 = -1;
			Local_818.f_1 = -1;
		}
	}
}

void func_257(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 392;
	Var0.f_1 = unk_0x8ACD527A7E574590();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 4, iParam2);
	}
}

int func_258()
{
	return -1;
}

void func_259()
{
	if (func_263(0))
	{
		if (!unk_0xB56FEBC510E7E9DE(iLocal_101, 4))
		{
			unk_0xBBEB613A917D7EE8(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0x573691DB812DC8AA(&iLocal_101, 4);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(iLocal_101, 4))
	{
		unk_0xBBEB613A917D7EE8(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0xA5F70A8B83BDFA49(&iLocal_101, 4);
	}
}

void func_260()
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_1634), 26);
}

int func_261(int iParam0)
{
	if ((unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 15) && !(unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 6) && unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 7))) || ((unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 6) && !unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 7)) && !unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 15)))
	{
		return 1;
	}
	return 0;
}

void func_262()
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_1634), 19);
}

int func_263(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_820.f_674[iParam0] == unk_0x8DDF51AF4B711D9F() && Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_820.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_265(Local_3614[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_265(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

bool func_266(int iParam0)
{
	return func_267(unk_0x77F050A399DB77ED(), Local_820.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_267(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Param1, iParam4);
}

bool func_268(int iParam0)
{
	return func_267(unk_0x77F050A399DB77ED(), Local_820.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_269(int iParam0)
{
	func_294(&(Local_392[iParam0 /*3*/]), Local_820.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_102[iParam0])
	{
		func_289(Local_820.f_10[iParam0 /*5*/], iParam0);
		func_270(Local_820.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_270(struct<4> Param0, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == unk_0x8DDF51AF4B711D9F() && !unk_0xB56FEBC510E7E9DE(uLocal_372[func_17(iParam5)], func_16(iParam5)))
	{
		Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4++;
		if (iLocal_99 == 0)
		{
			iLocal_99 = unk_0xE23D71F521207E8D();
		}
		iVar0 = func_287(unk_0x11E019C8F43ACC8A((IntToFloat(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4) / func_288())));
		iVar1 = func_285(unk_0x11E019C8F43ACC8A((IntToFloat(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4) / func_286())));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * Global_262145.f_9295));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * Global_262145.f_9296));
		if (func_32())
		{
			iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * func_284()));
			iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * func_283()));
		}
		if (func_213())
		{
			func_204(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			unk_0x7D0DD300F4BE97CC(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_202();
		func_155(0, unk_0x77F050A399DB77ED(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
		iLocal_382 = (iLocal_382 + iVar0);
		Global_2442856 = iVar0;
		Local_3602.f_7 = (Local_3602.f_7 + iVar1);
		unk_0x573691DB812DC8AA(&(uLocal_372[func_17(iParam5)]), func_16(iParam5));
		if (Local_3602.f_11 == 0)
		{
			Local_3602.f_11 = unk_0xAEB19103FF099B1F();
		}
		func_271();
		unk_0xBBEB613A917D7EE8(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_271()
{
	if (!unk_0xB56FEBC510E7E9DE(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2, 2))
	{
		unk_0x573691DB812DC8AA(&(Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_2), 2);
		func_272(1);
	}
}

void func_272(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_282())
		{
			func_275(0);
			func_274();
		}
		if (func_391(0))
		{
			uVar0 = func_190(2453, -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, 0);
			func_274();
		}
		if (func_391(func_390(func_251(unk_0x8ACD527A7E574590()))))
		{
			uVar0 = func_190(2453, -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, func_390(func_251(unk_0x8ACD527A7E574590())));
			func_274();
		}
		if (func_273())
		{
			func_274();
		}
		if (func_251(unk_0x8ACD527A7E574590()) > -1)
		{
			unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 7);
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 7);
	}
}

int func_273()
{
	if (Global_2426494.f_615.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_274()
{
	if (func_273())
	{
		Global_2426494.f_615.f_16 = 1;
	}
}

void func_275(int iParam0)
{
	if (func_282())
	{
		if (iParam0 == 1)
		{
			if (Global_2457713.f_4246 == -1)
			{
				Global_2457713.f_4246 = 60000;
			}
			func_20(&(Global_2457713.f_4244), 0, 0);
			if (Global_2457713.f_4249 == -1)
			{
				Global_2457713.f_4249 = 10000;
			}
			func_20(&(Global_2457713.f_4247), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_281();
		}
		if ((!unk_0x4FE03C08BC095A57() && !func_280()) && !func_276(unk_0x8ACD527A7E574590()))
		{
			Global_976339 = 0;
		}
		Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_7 = 0;
	}
}

int func_276(int iParam0)
{
	if (func_277(iParam0, 1))
	{
		if (Global_1586488[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_277(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_278(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586488[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_278(int iParam0)
{
	return func_279(iParam0);
}

bool func_279(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_13.f_1, 0);
}

bool func_280()
{
	return Global_2432717.f_712;
}

void func_281()
{
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (!func_282())
		{
			if (func_13(unk_0x8ACD527A7E574590(), 1, 0))
			{
				unk_0x076FCD919E69B97E(unk_0x77F050A399DB77ED(), 1);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 342, 0);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 122, 0);
			}
			unk_0xDA11395BF6459EE6(unk_0x8ACD527A7E574590(), 1f);
			unk_0x52CAB9CF58E98D68(0);
			unk_0x568B517D01D9F933(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xDECBDC43B878B8F0(0);
			}
		}
		else
		{
			if (func_13(unk_0x8ACD527A7E574590(), 1, 1))
			{
				unk_0x076FCD919E69B97E(unk_0x77F050A399DB77ED(), 0);
				unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 342, 1);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 122, 1);
				unk_0xDA11395BF6459EE6(unk_0x8ACD527A7E574590(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xDECBDC43B878B8F0(1);
				}
			}
			unk_0x52CAB9CF58E98D68(1);
			unk_0x568B517D01D9F933(0);
		}
	}
}

bool func_282()
{
	return Global_1312416;
}

float func_283()
{
	return Global_262145.f_9109;
}

float func_284()
{
	return Global_262145.f_9108;
}

var func_285(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_9120;
		
		case 2:
			return Global_262145.f_9121;
		
		case 3:
			return Global_262145.f_9122;
		
		case 4:
			return Global_262145.f_9123;
		
		default:
	}
	return Global_262145.f_9123;
}

float func_286()
{
	return Global_262145.f_8868;
}

var func_287(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_9110;
		
		case 2:
			return Global_262145.f_9111;
		
		case 3:
			return Global_262145.f_9112;
		
		case 4:
			return Global_262145.f_9113;
		
		case 5:
			return Global_262145.f_9114;
		
		case 6:
			return Global_262145.f_9115;
		
		case 7:
			return Global_262145.f_9116;
		
		case 8:
			return Global_262145.f_9117;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_9118;
		
		default:
	}
	return Global_262145.f_9119;
}

float func_288()
{
	return Global_262145.f_8867;
}

void func_289(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xB56FEBC510E7E9DE(Local_820.f_3[func_17(iParam5)], func_16(iParam5)))
	{
		if (!unk_0xB56FEBC510E7E9DE(uLocal_367[func_17(iParam5)], func_16(iParam5)))
		{
			if (func_32())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Param0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
			{
				if (func_290())
				{
					uLocal_366 = unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), Local_820.f_9);
					if (unk_0xD858B8E54A61877D() != func_258() && unk_0x5D14B2034A3E40D3(unk_0xD858B8E54A61877D()))
					{
						func_257(uLocal_366, iParam5, func_216(unk_0x42145D1DD048146E(unk_0xD858B8E54A61877D())));
						Local_818.f_0 = -1;
						Local_818.f_1 = -1;
					}
					else
					{
						Local_818.f_0 = iParam5;
						Local_818.f_1 = uLocal_366;
					}
					unk_0x573691DB812DC8AA(&(uLocal_367[func_17(iParam5)]), func_16(iParam5));
				}
			}
		}
		else if (func_1(&uLocal_386, 250, 0))
		{
			if (unk_0xD858B8E54A61877D() != func_258() && unk_0x5D14B2034A3E40D3(unk_0xD858B8E54A61877D()))
			{
				func_257(uLocal_366, iParam5, func_216(unk_0x42145D1DD048146E(unk_0xD858B8E54A61877D())));
				Local_818.f_1 = -1;
				Local_818.f_0 = -1;
			}
			else
			{
				Local_818.f_0 = iParam5;
				Local_818.f_1 = uLocal_366;
			}
			func_35(&uLocal_386);
		}
	}
}

int func_290()
{
	if (!func_13(unk_0x8ACD527A7E574590(), 1, 1))
	{
		return 0;
	}
	if (func_393(unk_0x8ACD527A7E574590()))
	{
		if ((func_282() && !func_293()) || func_292(unk_0x8ACD527A7E574590(), 21))
		{
			func_365(0);
		}
		else
		{
			func_365(7);
		}
		return 0;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (func_291(unk_0x77F050A399DB77ED(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_73(unk_0x8ACD527A7E574590(), 0))
	{
		return 0;
	}
	if (!func_32())
	{
		if (unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
		{
			func_365(1);
			return 0;
		}
	}
	return 1;
}

int func_291(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0xB42592B9FFEB5EDE(iParam0, iParam1))
		{
			iVar0 = unk_0xF8D66A34AF0C53A5(iParam0, iParam1);
			if (unk_0x1F2158D615BC4B25(iVar0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
				{
					iVar1 = unk_0xFCD89114F33612D0(unk_0xDF1398076E26B0E4(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x9A2BADF8B8CE0E2A(iVar0, iVar3))
						{
							if (unk_0x07A8845F7F106A38(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_292(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_206, iParam1);
}

bool func_293()
{
	return Global_1312416.f_1;
}

void func_294(var uParam0, struct<3> Param1, var uParam4, var uParam5, int iParam6)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { Param1 };
	unk_0xF63BA5AC6A181C40(12, &uVar3, &uVar4, &uVar5, &uVar6);
	if (!unk_0xB56FEBC510E7E9DE(uLocal_367[func_17(iParam6)], func_16(iParam6)) && !unk_0xB56FEBC510E7E9DE(Local_820.f_3[func_17(iParam6)], func_16(iParam6)))
	{
		if (!unk_0xC3B073777B46C61A(*uParam0))
		{
			if (!func_308(Var0, 0f, 0f, 0f, 0) && !func_308(Var0, 0f, 0f, -2000f, 0))
			{
				*uParam0 = unk_0x1802011F6E339FFF(Var0);
				unk_0x06E25D9668199664(*uParam0, 431);
				unk_0x18EA864BF4963320(*uParam0, 9);
				unk_0x45C91EE3FC674072(*uParam0, "CPC_BLIP");
				func_302(*uParam0, 25);
				func_300(uParam0, 12);
				unk_0x9555F96101785581(*uParam0, 1);
			}
		}
		else if (unk_0x4F297F09162EFB5D())
		{
			unk_0xBE97057E01D4909F(*uParam0, 255);
		}
		else
		{
			func_302(*uParam0, 25);
		}
		if (uLocal_233[iParam6])
		{
			if (!unk_0xB56FEBC510E7E9DE(iLocal_377[func_17(iParam6)], func_16(iParam6)))
			{
				iVar7 = 52;
				if (func_32())
				{
					uParam0->f_1 = unk_0x505B81295B6C3CC4(iVar7, Var0 + Vector(4f, 0f, 0f), Var0, 10f, uVar3, uVar4, uVar5, uParam0->f_2, 0);
					unk_0x98A11DA225BD1C63(uParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					uParam0->f_1 = unk_0x505B81295B6C3CC4(iVar7, Var0 + Vector(2.8f, 0f, 0f), Var0, 5f, uVar3, uVar4, uVar5, uParam0->f_2, 0);
					unk_0x98A11DA225BD1C63(uParam0->f_1, 5f, 5f, 100f);
				}
				unk_0x573691DB812DC8AA(&(iLocal_377[func_17(iParam6)]), func_16(iParam6));
			}
			else
			{
				func_299(&(uParam0->f_1), &(uParam0->f_2));
			}
			func_297(&Param1);
		}
		else if (unk_0xB56FEBC510E7E9DE(iLocal_377[func_17(iParam6)], func_16(iParam6)))
		{
			if (func_296(&(uParam0->f_1), &(uParam0->f_2)))
			{
				unk_0xB21A80E2BBE0ADF5(uParam0->f_1);
				unk_0xA5F70A8B83BDFA49(&(iLocal_377[func_17(iParam6)]), func_16(iParam6));
			}
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(iLocal_377[func_17(iParam6)], func_16(iParam6)))
	{
		func_295(&(uParam0->f_1), &(uParam0->f_2), uParam0, iParam6);
	}
	else if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x296CDA10C549A502(uParam0);
	}
}

void func_295(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			unk_0xF63BA5AC6A181C40(1, &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x4024BCF24278714B(*uParam0, uVar0, uVar1, uVar2, *uParam1);
			unk_0x6D4DF637C52AB456(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		}
		else
		{
			if (unk_0xC3B073777B46C61A(*uParam2))
			{
				unk_0x296CDA10C549A502(uParam2);
			}
			unk_0xB21A80E2BBE0ADF5(*uParam0);
			*uParam0 = 0;
			unk_0xA5F70A8B83BDFA49(&(iLocal_377[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_296(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		unk_0xF63BA5AC6A181C40(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x4024BCF24278714B(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0x6D4DF637C52AB456(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_297(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_32())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_298(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		unk_0xA51CAD76F4982671(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_298(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_299(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		unk_0xF63BA5AC6A181C40(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x4024BCF24278714B(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0x6D4DF637C52AB456(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_300(var uParam0, int iParam1)
{
	if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x80553402FCEB9A9C(*uParam0, func_301(iParam1));
	}
}

int func_301(int iParam0)
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
	unk_0xF63BA5AC6A181C40(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	unk_0xBE97057E01D4909F(uParam0, func_303(uParam0, iParam1));
}

int func_303(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_261(Global_2426494))
	{
		fVar0 = func_307(uParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_304();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_304()
{
	if (func_305(Global_2426494, 1))
	{
		return 50;
	}
	return 0;
}

bool func_305(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_306(iParam0) != 0;
	}
	return func_277(iParam0, bParam1);
}

int func_306(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2416794[iParam0 /*303*/].f_1;
	}
	return 0;
}

float func_307(var uParam0, float fParam1, float fParam2)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	uVar0 = Global_2426494;
	Var2 = { unk_0xAF014E234F6ECC62(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(uVar0), 0) };
	Var5.f_2 = 0f;
	fVar1 = unk_0x652D2EEEF1D3E62C(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

bool func_308(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_309()
{
	if (func_261(unk_0x8ACD527A7E574590()))
	{
		if (!unk_0xB56FEBC510E7E9DE(iLocal_101, 2))
		{
			unk_0x573691DB812DC8AA(&iLocal_101, 2);
			return 1;
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(iLocal_101, 2))
	{
		unk_0xA5F70A8B83BDFA49(&iLocal_101, 2);
		return 1;
	}
	return 0;
}

int func_310(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_323() < 10)
	{
		iVar0 = func_322();
		func_311(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_311(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_312(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_312(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_320(unk_0x8ACD527A7E574590()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_319(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_314(Var0))
		{
			Global_2404919.f_39.f_64 = func_306(unk_0x8ACD527A7E574590());
			func_313(Var0, iParam8);
		}
	}
}

void func_313(struct<12> Param0, int iParam12)
{
	Global_2404919.f_347[iParam12 /*12*/] = { Param0 };
	Global_2404919.f_347[iParam12 /*12*/].f_9 = 1;
}

int func_314(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404919.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_315(Global_2404919.f_39[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_315(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_318(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_316(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_318(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_316(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_316(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_317(Param0, Param3, Var0, Var3);
}

int func_317(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_318(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_319(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_320(int iParam0)
{
	if ((func_305(iParam0, 1) || func_321(iParam0)) || func_140(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608060[iVar0 /*106*/] != -1;
	}
	return 0;
}

int func_322()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_323()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_324()
{
	if (!func_121())
	{
		return;
	}
	if (!unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) == Global_1312577.f_7)
	{
		return;
	}
	func_117();
}

void func_325()
{
	Global_1715730 = 1;
	if (!unk_0xB56FEBC510E7E9DE(Global_2464277, 0))
	{
		unk_0x573691DB812DC8AA(&Global_2464277, 0);
		unk_0x573691DB812DC8AA(&Global_1715731, 0);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_2464277, 1))
	{
		unk_0x573691DB812DC8AA(&Global_2464277, 1);
		unk_0x573691DB812DC8AA(&Global_1715731, 1);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_2464277, 5))
	{
		unk_0x573691DB812DC8AA(&Global_2464277, 5);
		unk_0x573691DB812DC8AA(&Global_1715731, 5);
	}
	if (unk_0x456AF8BC83CCA6FF(-355737150))
	{
		unk_0x39FEEC3E8273065D(-355737150, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-580979506))
	{
		unk_0x39FEEC3E8273065D(-580979506, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-1426452475))
	{
		unk_0x39FEEC3E8273065D(-1426452475, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(745417724))
	{
		unk_0x39FEEC3E8273065D(745417724, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-1305304906))
	{
		unk_0x39FEEC3E8273065D(-1305304906, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-1543175077))
	{
		unk_0x39FEEC3E8273065D(-1543175077, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-811770997))
	{
		unk_0x39FEEC3E8273065D(-811770997, 0, 0, 0);
	}
}

void func_326()
{
	char* sVar0;
	
	if (!unk_0xB56FEBC510E7E9DE(iLocal_101, 5) && !unk_0xF0F27AB23835252C())
	{
		if (Local_820.f_707)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_42(62, sVar0, "CPC_START", func_47(), -1, func_47());
		unk_0x358EC418194057C1();
		unk_0x573691DB812DC8AA(&iLocal_101, 5);
	}
}

void func_327(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x6BFEA4147919A51C("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x6BFEA4147919A51C("WantedMusicDisabled", 1);
	}
	Global_2457713.f_4560 = -1;
	bVar0 = (func_140(unk_0x8ACD527A7E574590(), 0) && func_139(unk_0x8ACD527A7E574590()));
	if (bParam6)
	{
		func_343(21, 1);
	}
	else
	{
		func_342(iParam0, -1);
		if (func_7(unk_0x8ACD527A7E574590()))
		{
			Global_1573875.f_3 = iParam0;
		}
		else
		{
			func_341(iParam0);
		}
		Global_1573875.f_4 = -1;
		if (func_7(unk_0x8ACD527A7E574590()))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 5);
		}
		if ((func_282() && !func_293()) || func_292(unk_0x8ACD527A7E574590(), 21))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 4);
		}
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 17);
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 20);
		if (func_340(iParam0))
		{
			func_339();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_336(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x4AAD01BBE039D160(fParam2);
			if (iParam0 == 146)
			{
				unk_0xCBC9707F3BE3D5C2(0);
				unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 0, 0);
				unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
			}
		}
		if (func_334(iParam0))
		{
			unk_0xCBC9707F3BE3D5C2(0);
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 0, 0);
			unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 8);
		}
		if (bParam3)
		{
			func_333(1);
			if (func_234(0))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 9);
			}
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 14);
		}
		if (bParam4)
		{
			func_331(1);
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 12);
		}
		if (bParam5)
		{
			func_330();
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_328(iParam0))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 21);
			}
		}
	}
	Global_2456625 = 1;
}

int func_328(int iParam0)
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
	if (func_329())
	{
		return 1;
	}
	return 0;
}

int func_329()
{
	switch (func_250())
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

void func_330()
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_4551), 0);
}

void func_331(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91158.f_8 = 1;
	}
	else
	{
		Global_91158.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_332(iVar0);
		iVar0++;
	}
}

void func_332(int iParam0)
{
	Global_91158.f_156[iParam0] = 1;
	Global_91158.f_155 = 1;
}

void func_333(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_335(unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_1608060[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

void func_336(float fParam0)
{
	if (unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) == func_337())
	{
		return;
	}
	if (unk_0x4D1CAE1CFC4C8868(Global_2457713.f_4643))
	{
		if (!Global_2457713.f_4643 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	Global_2457713.f_4642 = fParam0;
	Global_2457713.f_4643 = unk_0x8EC1FFF6B789C28E();
}

int func_337()
{
	switch (func_338())
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

int func_338()
{
	return Global_25115;
}

void func_339()
{
	Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_198 = 0;
	unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4412), 1);
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_341(int iParam0)
{
	Global_1608060[unk_0x8ACD527A7E574590() /*106*/] = iParam0;
}

void func_342(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_391(0) || func_391(func_390(iVar0)))
		{
			unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 2);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 2);
		}
	}
}

void func_343(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206, iParam0))
		{
			unk_0x573691DB812DC8AA(&(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206, iParam0))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206), iParam0);
	}
}

void func_344()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	bool bVar11;
	bool bVar12;
	var uVar13;
	struct<3> Var14;
	float fVar17;
	
	if (func_13(unk_0x8ACD527A7E574590(), 1, 1))
	{
		if ((!func_247() && !func_357(unk_0x8ACD527A7E574590(), 0)) && !func_356(unk_0x8ACD527A7E574590()))
		{
			fVar5 = 2.147484E+09f;
			iVar6 = -1;
			Var8 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			bVar11 = unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0);
			bVar12 = func_354();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar13 = Local_820.f_729[iVar4 /*2*/].f_1;
				if (unk_0xBE07BFED2D35F867(uVar13) && unk_0x968EA16107097324(unk_0xFDEE91DAC82E201A(uVar13), 0))
				{
					if (!bVar12)
					{
						if (bVar11 && unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0) == unk_0xFDEE91DAC82E201A(uVar13))
						{
							func_272(1);
						}
					}
					if (func_30(iVar4, &Var0, &uVar3))
					{
						Var14 = { unk_0xAF99169F0F5AE41D(unk_0xFDEE91DAC82E201A(uVar13), 1) };
						if (unk_0x2A488C176D52CCA5(Var14, Var0) <= 10f)
						{
							if (func_353(Var14))
							{
								unk_0x573691DB812DC8AA(&uVar7, iVar4);
							}
							if (func_351(Var14, Var8))
							{
								if (!func_349(Var0, 100f))
								{
									fVar17 = unk_0x2A488C176D52CCA5(Var14, Var8);
									if (fVar17 < fVar5)
									{
										fVar5 = fVar17;
										iVar6 = iVar4;
									}
								}
							}
						}
					}
				}
				iVar4++;
			}
			Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_6 = uVar7;
			if ((unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()) || (unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED()) && !unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))) || Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 > 0)
			{
				if ((fVar5 < 2.147484E+09f && iVar6 >= 0) && iVar6 < 10)
				{
					if (func_30(iVar6, &Var0, &uVar3))
					{
						iLocal_785 = 1;
						func_348(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
						func_347(Var0, 1, 0);
						func_346(10, 0, 0);
					}
				}
			}
			else
			{
				func_345();
			}
		}
		else
		{
			func_345();
		}
	}
}

void func_345()
{
	if (iLocal_785)
	{
		func_129();
		func_127();
		iLocal_785 = 0;
	}
}

void func_346(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409226 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x8EC1FFF6B789C28E();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_347(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

void func_348(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x4D1CAE1CFC4C8868(Global_2409241.f_6))
	{
		if (!Global_2409241.f_6 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	else
	{
		Global_2409241.f_6 = unk_0x8EC1FFF6B789C28E();
	}
	Var0.f_6 = Global_2409241.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_320(unk_0x8ACD527A7E574590()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2409241 = { Var0 };
}

bool func_349(struct<3> Param0, float fParam3)
{
	return func_350(Param0, fParam3, unk_0x8ACD527A7E574590(), 0);
}

int func_350(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_13(iVar1, 0, 1) && func_13(iParam4, 0, 1))
			{
				if (Global_2412289.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_29(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2412289.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_13(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_29(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_351(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (Local_820.f_8 == 3)
	{
		Var0 = { func_352(Local_820.f_712) };
		if (unk_0x2A488C176D52CCA5(Param3, Var0) < 3500f)
		{
			if (unk_0x2A488C176D52CCA5(Param0, Var0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_353(struct<3> Param0)
{
	struct<3> Var0;
	
	if (Local_820.f_8 == 3)
	{
		Var0 = { func_352(Local_820.f_712) };
		if (unk_0x2A488C176D52CCA5(Param0, Var0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_354()
{
	if (((((func_355(unk_0x8ACD527A7E574590()) || func_282()) || func_293()) || func_292(unk_0x8ACD527A7E574590(), 21)) || func_7(unk_0x8ACD527A7E574590())) || func_6(unk_0x8ACD527A7E574590()))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_1608060[iVar0 /*106*/].f_1, 7);
	}
	return 0;
}

int func_356(int iParam0)
{
	if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 14))
	{
		return 1;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0, bool bParam1)
{
	if (Global_1586488[iParam0 /*408*/].f_248.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 0))
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

void func_358(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_246(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_199(sParam1))
	{
		sVar0 = sParam1;
	}
	func_109(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0);
}

char* func_359(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x664B47C58CE8A0A4();
	return "HUD_STARTING";
	if (unk_0x35D1CAD6ADAB6491(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_challenges"))
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
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_360(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_361(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x5CB0A4A4240C1B6A())
	{
		Global_2457713.f_4550 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 1))
		{
			unk_0xBBEB613A917D7EE8(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2457713.f_4550 = 0;
			unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 1);
		}
	}
}

int func_362(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C779B19E6DDCDA2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), *uParam0);
		}
		else
		{
			return unk_0xC552B3A8E47271B7(unk_0x0A7450968AC14F54(), *uParam0);
		}
	}
	return unk_0xC552B3A8E47271B7(unk_0x3EAC9995EC220C5A(), *uParam0);
}

void func_363(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (func_32())
	{
		if (func_13(unk_0x8ACD527A7E574590(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && unk_0xBE07BFED2D35F867(Local_820.f_729[iVar0 /*2*/].f_1)) && unk_0x968EA16107097324(unk_0xFDEE91DAC82E201A(Local_820.f_729[iVar0 /*2*/].f_1), 0)) && unk_0x9A2BADF8B8CE0E2A(unk_0xFDEE91DAC82E201A(Local_820.f_729[iVar0 /*2*/].f_1), -1))
				{
					if (!unk_0xC3B073777B46C61A(uLocal_793[iVar0]))
					{
						uLocal_793[iVar0] = unk_0xBAA49E1DC5584B87(unk_0xB66D3D2DD5A2BA64(Local_820.f_729[iVar0 /*2*/].f_1));
						unk_0x18EA864BF4963320(uLocal_793[iVar0], 9);
						unk_0x45C91EE3FC674072(uLocal_793[iVar0], "AMCH_AC");
						unk_0x06E25D9668199664(uLocal_793[iVar0], func_364(iVar0));
						func_300(&(uLocal_793[iVar0]), 9);
					}
					else
					{
						Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
						if (unk_0x2A488C176D52CCA5(Var1, unk_0xAF99169F0F5AE41D(unk_0xFDEE91DAC82E201A(Local_820.f_729[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x9555F96101785581(uLocal_793[iVar0], 1);
						}
						else
						{
							unk_0x9555F96101785581(uLocal_793[iVar0], 0);
						}
					}
				}
				else if (unk_0xC3B073777B46C61A(uLocal_793[iVar0]))
				{
					unk_0x296CDA10C549A502(&(uLocal_793[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_364(int iParam0)
{
	switch (Local_820.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_365(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!unk_0xF0F27AB23835252C())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D())
					{
						func_368("CPC_PASSIVE", 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D())
					{
						func_368("CPC_NOAIR", 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && func_32())
					{
						func_368("AMCH_AIRAV", 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D())
					{
						func_368("AMCH_BLOW", 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 4:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D() && !func_367(62))
					{
						if (Local_820.f_707)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_368(sVar0, 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 5:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (((!unk_0x4F297F09162EFB5D() && !func_367(62)) && !unk_0x8E9825258F5C145C()) && unk_0xB56FEBC510E7E9DE(iLocal_783, 4))
					{
						if (Local_820.f_707)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_368(sVar1, 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 6:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (((!unk_0x4F297F09162EFB5D() && !func_367(62)) && !unk_0x8E9825258F5C145C()) && unk_0xB56FEBC510E7E9DE(iLocal_783, 5))
					{
						if (Local_820.f_707)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_366(sVar2, func_124(), 30000);
						func_133(1);
						unk_0xBBEB613A917D7EE8(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			
			case 7:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_783, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D())
					{
						func_368("CPC_PASSIV1", 30000);
						func_133(1);
						unk_0x573691DB812DC8AA(&iLocal_783, iParam0);
					}
				}
				break;
			}
	}
}

void func_366(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0x703D2B4B1C7E10B6(sParam1);
	unk_0xF34A1D3B3034CC8A(0, 0, 0, iParam2);
}

bool func_367(int iParam0)
{
	return Global_2426494.f_2138[0 /*70*/].f_1 == iParam0;
}

void func_368(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

void func_369(int iParam0)
{
	Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_3 = iParam0;
}

void func_370(bool bParam0)
{
	if (bParam0)
	{
		unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 4);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 4);
	}
}

int func_371()
{
	if (func_292(unk_0x8ACD527A7E574590(), 21))
	{
		return 0;
	}
	if (unk_0x94B2757D7DE07565())
	{
		return 0;
	}
	if (unk_0xC5B525958FB84246())
	{
		return 0;
	}
	if (func_276(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_389())
	{
		return 0;
	}
	if (func_388(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (func_379(unk_0x8ACD527A7E574590()) == 3)
	{
		return 0;
	}
	if (func_378(func_152()))
	{
		return 0;
	}
	if (func_377())
	{
		return 0;
	}
	if (func_247())
	{
		return 0;
	}
	if (unk_0x4FE03C08BC095A57())
	{
		return 0;
	}
	if (func_278(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!func_375())
	{
		return 0;
	}
	if (func_292(unk_0x8ACD527A7E574590(), 0) || func_292(unk_0x8ACD527A7E574590(), 3))
	{
		return 0;
	}
	if ((func_292(unk_0x8ACD527A7E574590(), 12) || func_292(unk_0x8ACD527A7E574590(), 14)) || func_292(unk_0x8ACD527A7E574590(), 13))
	{
		return 0;
	}
	if (func_357(unk_0x8ACD527A7E574590(), 0))
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (Global_1706258)
	{
		return 0;
	}
	if (func_373(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	return 1;
}

int func_372()
{
	if (Global_2548279.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0)
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1586488[iParam0 /*408*/].f_35;
}

bool func_374()
{
	return Global_91158.f_297 > 0;
}

int func_375()
{
	if (func_376() == 0)
	{
		return 1;
	}
	return 0;
}

int func_376()
{
	return Global_1312466.f_18;
}

bool func_377()
{
	return Global_1315910;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 84:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

int func_379(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_321(iParam0) && !func_7(iParam0)) && !unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 8));
	bVar2 = func_386(iParam0);
	uVar3 = func_282();
	uVar4 = func_380();
	if ((bVar1 && (func_355(iParam0) || func_335(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_139(iParam0)) && !func_137(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2457713.f_4647.f_18 != iVar0)
	{
		Global_2457713.f_4647.f_18 = iVar0;
	}
	return iVar0;
}

int func_380()
{
	if ((func_138(unk_0x8ACD527A7E574590(), 21) || func_138(unk_0x8ACD527A7E574590(), 22)) || func_384())
	{
		return 1;
	}
	if (func_382())
	{
		func_381(22);
		return 1;
	}
	return 0;
}

void func_381(int iParam0)
{
	unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8.f_4), iParam0);
}

int func_382()
{
	if (func_140(unk_0x8ACD527A7E574590(), 0))
	{
		if ((func_282() && !func_293()) || func_292(unk_0x8ACD527A7E574590(), 21))
		{
			if (!func_138(unk_0x8ACD527A7E574590(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_383(27);
		}
	}
	return 0;
}

void func_383(int iParam0)
{
	unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8.f_4), iParam0);
}

int func_384()
{
	return func_385(261, -1);
}

int func_385(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486179[iParam0 /*5*/][func_186(iParam1)];
	if (unk_0x89E37638462C1F4C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_386(int iParam0)
{
	return func_138(iParam0, 20);
}

bool func_387()
{
	return Global_1586488[unk_0x8ACD527A7E574590() /*408*/] == 5;
}

int func_388(int iParam0)
{
	if (Global_2416794[iParam0 /*303*/].f_256.f_4 != 0 || Global_2416794[iParam0 /*303*/].f_256.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_389()
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_18, 0);
}

int func_390(int iParam0)
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
	return 19;
}

bool func_391(int iParam0)
{
	var uVar0;
	
	uVar0 = func_190(2453, -1, 0);
	return unk_0xB56FEBC510E7E9DE(uVar0, iParam0);
}

void func_392()
{
	if (Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 != 0)
	{
		Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4 = 0;
	}
}

bool func_393(int iParam0)
{
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		if ((func_282() && !func_293()) || func_292(unk_0x8ACD527A7E574590(), 21))
		{
			return 1;
		}
		if (func_36(&(Global_1573875.f_13)))
		{
			if (!func_1(&(Global_1573875.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_35(&(Global_1573875.f_13));
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 9);
}

bool func_394(int iParam0)
{
	return func_73(iParam0, 0);
}

void func_395()
{
	func_396(&(Local_1570.f_527), &Local_1570, 23, &(Local_1570.f_1), &(Local_1570.f_110), -1, 0);
}

void func_396(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_497(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_495() || iParam2 == 24)
	{
		if (func_457(uParam1, iParam2, uParam3, Global_1573677, 0, func_498()))
		{
			func_456(1);
			if ((!func_455() && !func_454()) || unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 1))
			{
				if (func_453())
				{
					func_452();
				}
				else
				{
					unk_0x015513B8B0CE59A3(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_451(1);
						Global_1573677 = 0;
						iVar54 = -1;
						if (Global_1573825 != 1)
						{
							func_450(uParam1);
							if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 7))
							{
								unk_0xA5F70A8B83BDFA49(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
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
								if (func_13(unk_0x0BBA31C395EE0D30(iVar52), 0, 1))
								{
									iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
									if (!func_73(iVar35, 0))
									{
										if ((unk_0xBED80336E95ED6FE(iVar35, unk_0x8ACD527A7E574590()) || Global_2416794[iVar35 /*303*/].f_231 != -1) || func_449(iVar35))
										{
											iVar44 = iVar35;
											if (func_64(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_446(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_444(unk_0x8ACD527A7E574590(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_442())
							{
								if (func_13(unk_0x0BBA31C395EE0D30(iVar52), 0, 1))
								{
									iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
								}
								else
								{
									iVar35 = func_75();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_441(iVar35) && func_437(iVar35, iParam2)) && func_13(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								iVar42 = Global_1586488[iVar44 /*408*/].f_192.f_6;
								Var38 = { func_432(iVar35) };
								if (iVar35 == unk_0x8ACD527A7E574590())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x2743F2603B2676CC(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_103(iVar35) };
								iVar37 = func_426(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x1192AA24F7A5B405(iVar37);
								}
								Global_1573677++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_442())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_421(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_420(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_419(iVar35, 0);
								if (bVar34)
								{
									if (func_63(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								if (func_418(iParam5))
								{
									func_417(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_417(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x573691DB812DC8AA(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
							if (func_13(iVar35, 0, 1) && !unk_0xB56FEBC510E7E9DE(iVar49, iVar35))
							{
								iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
							}
							else
							{
								iVar35 = func_75();
							}
							if (func_441(iVar35))
							{
								if (func_13(unk_0x0BBA31C395EE0D30(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									iVar42 = Global_1586488[iVar44 /*408*/].f_192.f_6;
									Var38 = { func_432(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_103(iVar35) };
									iVar37 = func_426(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x1192AA24F7A5B405(iVar37);
									}
									Global_1573677++;
									iVar51 = func_419(iVar35, 1);
									if (bVar34)
									{
										if (func_63(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									func_409(unk_0x2743F2603B2676CC(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 11))
						{
							func_406(uParam3, uParam1);
						}
						func_35(&(uParam3->f_21));
						func_405();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xB56FEBC510E7E9DE(uParam3->f_33, 7))
						{
							func_404(uParam3, uParam1);
							func_403(uParam1, 0, 1);
							unk_0x573691DB812DC8AA(&(uParam3->f_33), 7);
						}
						func_404(uParam3, uParam1);
						if (!unk_0xB56FEBC510E7E9DE(uParam3->f_33, 11))
						{
							unk_0x573691DB812DC8AA(&(uParam3->f_33), 11);
						}
						if (func_399(uParam3))
						{
							Global_1573825 = 1;
						}
						func_397(uParam3);
						if (Global_1573825 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573825 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xEDE19C6ED6E2F478(*uParam1))
					{
						unk_0x227C85DAD96E2942(7);
						unk_0x50137349427F6296(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x227C85DAD96E2942(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_405();
			func_451(0);
			if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 7))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam3->f_33), 7);
			}
			if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 10))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xA514BB978EE93FAD();
}

void func_397(var uParam0)
{
	if (!func_36(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_35(&(uParam0->f_21));
		func_398(0);
	}
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573825 != 2)
		{
			Global_1573825 = 2;
		}
	}
	else
	{
		switch (Global_1573825)
		{
			case 0:
				Global_1573825 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_399(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0BBA31C395EE0D30(uParam0->f_37);
	if (iVar15 != func_75() && func_13(iVar15, 0, 1))
	{
		Var2 = { func_103(iVar15) };
		iVar1 = func_402(uParam0, uParam0->f_37);
		if (func_401(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8DA1FEA39396CBE5(&Var2))
					{
						if (unk_0x06DC10F693195684(&Var2))
						{
							iVar16 = 1;
							func_400(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x0F7AC3501AA23585(&Var2))
					{
						iVar16 = 1;
						func_400(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8DA1FEA39396CBE5(&Var2))
					{
						if (!unk_0x06DC10F693195684(&Var2))
						{
							iVar16 = 1;
							func_400(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_400(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8DA1FEA39396CBE5(&Var2))
					{
						if (!unk_0x0F7AC3501AA23585(&Var2))
						{
							iVar16 = 1;
							func_400(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x0F7AC3501AA23585(&Var2))
					{
						iVar16 = 1;
						func_400(uParam0, iVar0, 0);
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

void func_400(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_401(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xDE70C6265E82B1E0(&uParam0, 13);
}

var func_402(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_403(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x758017413321C628(*uParam0, "COLLAPSE"))
	{
		unk_0x360FCC9A8FE84159(iParam1);
		unk_0x098CA28C04E62E55();
	}
	if (iParam2 == 1)
	{
		if (unk_0x758017413321C628(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x098CA28C04E62E55();
		}
	}
}

void func_404(var uParam0, var uParam1)
{
	if (!unk_0xB56FEBC510E7E9DE(uParam0->f_33, 10))
	{
		unk_0x758017413321C628(*uParam1, "SET_HIGHLIGHT");
		unk_0x4D57F6B69CCB6D95(uParam0->f_35);
		unk_0x098CA28C04E62E55();
		unk_0x573691DB812DC8AA(&(uParam0->f_33), 10);
	}
}

void func_405()
{
	if (Global_1573825 != 0)
	{
		Global_1573825 = 0;
	}
}

void func_406(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0BBA31C395EE0D30(iVar0);
		if (iVar2 != func_75())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_408(uParam0->f_38[iVar0 /*2*/], 0);
					func_407(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1586488[iVar0 /*408*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_407(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		if (unk_0x758017413321C628(*uParam0, "SET_ICON"))
		{
			unk_0x4D57F6B69CCB6D95(iParam1);
			unk_0x4D57F6B69CCB6D95(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4D57F6B69CCB6D95(iParam3);
			}
			unk_0x098CA28C04E62E55();
		}
	}
}

int func_408(int iParam0, bool bParam1)
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

void func_409(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_416() && iParam3 < func_415())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573679)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573825 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x758017413321C628(*uParam1, sVar1))
		{
			unk_0x4D57F6B69CCB6D95(iParam3);
			if (unk_0xB56FEBC510E7E9DE(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_414("");
			}
			else
			{
				unk_0x4D57F6B69CCB6D95(iParam9);
			}
			func_414(sParam0);
			unk_0x4D57F6B69CCB6D95(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_414("");
			}
			else
			{
				unk_0x4D57F6B69CCB6D95(65);
			}
			unk_0x4D57F6B69CCB6D95(-1);
			func_414("");
			if (uParam2->f_108 == 6)
			{
				func_414("");
			}
			else
			{
				func_414(&sParam4);
			}
			unk_0x360FCC9A8FE84159(uParam2->f_36);
			unk_0xECBAA26A5E3A0B96(sParam8);
			unk_0xECBAA26A5E3A0B96(sParam8);
			if (func_413(uParam2))
			{
				func_412("DPAD_FRIEND");
			}
			else if (func_411(uParam2))
			{
				func_412("DPAD_FRIEND");
			}
			else if (func_410(uParam2))
			{
				func_412("DPAD_CREW");
			}
			else
			{
				func_412("");
			}
			unk_0x098CA28C04E62E55();
		}
	}
}

bool func_410(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(uParam0->f_33, 6);
}

bool func_411(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(uParam0->f_33, 5);
}

void func_412(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

int func_413(var uParam0)
{
	if (func_411(uParam0) && func_410(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_414(char* sParam0)
{
	unk_0x2747B3A98BE1082E(sParam0);
}

int func_415()
{
	int iVar0;
	
	if (Global_1573679)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_416()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573679)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_417(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_416() && iParam2 < func_415())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573679)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573825 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEDE19C6ED6E2F478(*uParam0))
		{
			if (unk_0x758017413321C628(*uParam0, sVar1))
			{
				unk_0x4D57F6B69CCB6D95(iParam2);
				if (unk_0xB56FEBC510E7E9DE(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_414("");
				}
				else
				{
					unk_0x4D57F6B69CCB6D95(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x0AAC2160036975D9(sParam15))
				{
					func_412(sParam15);
				}
				else
				{
					func_414(&(uParam1->f_1));
				}
				unk_0x4D57F6B69CCB6D95(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_414("");
				}
				else
				{
					unk_0x4D57F6B69CCB6D95(65);
				}
				if (iParam11 == 1)
				{
					unk_0x4D57F6B69CCB6D95(iVar0);
				}
				else
				{
					unk_0x4D57F6B69CCB6D95(-1);
				}
				if (func_442())
				{
					func_414("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x0AAC2160036975D9(sParam15))
				{
					unk_0xC976485333F81CE8("FM_AE_ONE_INT");
					unk_0x703D2B4B1C7E10B6(sParam15);
					unk_0xA50C1D6E503AA51E(iParam17);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (uParam1->f_108 == 5 && !unk_0x0AAC2160036975D9(sParam15))
				{
					unk_0xC976485333F81CE8("FM_AE_ONE_INT");
					unk_0x703D2B4B1C7E10B6(sParam15);
					unk_0xA50C1D6E503AA51E(iParam17);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x0AAC2160036975D9(sParam15)) && !unk_0x0AAC2160036975D9(sParam16))
				{
					unk_0xC976485333F81CE8("FM_AE_TWO_INT");
					unk_0x703D2B4B1C7E10B6(sParam15);
					unk_0x703D2B4B1C7E10B6(sParam16);
					unk_0xA50C1D6E503AA51E(iParam17);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (uParam1->f_108 == 8 && !unk_0x0AAC2160036975D9(&(uParam1->f_104)))
				{
					unk_0xC976485333F81CE8("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x3C6EADCCA29B8BAB(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0xA50C1D6E503AA51E(iParam9);
					}
					unk_0x703D2B4B1C7E10B6(&(uParam1->f_104));
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0xC976485333F81CE8("FM_AE_CASH");
					unk_0x9214E63FEF74EFBC(iParam9, 1);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x0AAC2160036975D9(&(uParam1->f_104)))
					{
						func_412(&(uParam1->f_104));
					}
					else
					{
						func_414("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0xC976485333F81CE8("STRING");
					unk_0x31E2823F336CCAD6(iParam13, 6);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (fParam12 != -1f)
				{
					unk_0xC976485333F81CE8("NUMBER");
					unk_0x3C6EADCCA29B8BAB(fParam12, 1);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (iParam9 != -1)
				{
					unk_0x4D57F6B69CCB6D95(iParam9);
				}
				else
				{
					func_414("");
				}
				if (uParam1->f_108 == 6)
				{
					func_414("");
				}
				else
				{
					func_414(&sParam3);
				}
				unk_0x360FCC9A8FE84159(uParam1->f_36);
				if (iParam11 == 1 || unk_0x0AAC2160036975D9(sParam7))
				{
					func_414("");
					func_414("");
				}
				else
				{
					unk_0xECBAA26A5E3A0B96(sParam7);
					unk_0xECBAA26A5E3A0B96(sParam7);
				}
				if (func_413(uParam1))
				{
					func_412("DPAD_FRIEND");
				}
				else if (func_411(uParam1))
				{
					func_412("DPAD_FRIEND");
				}
				else if (func_410(uParam1))
				{
					func_412("DPAD_CREW");
				}
				else
				{
					func_412("");
				}
				unk_0x098CA28C04E62E55();
			}
		}
	}
}

int func_418(int iParam0)
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

int func_419(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_321(iParam0)) && !func_386(iParam0))
	{
		iVar0 = func_47();
	}
	iVar1 = func_61(iParam0);
	if (!iVar1 == -1)
	{
		return func_59(iVar1);
	}
	return iVar0;
}

char* func_420(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x4964239DC8B02AF6())
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
			if (unk_0x4964239DC8B02AF6())
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

int func_421(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_425(iParam3))
	{
		*fParam1 = (func_422(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_418(iParam3))
	{
		*fParam1 = (func_422(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_422(int iParam0, int iParam1)
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
			if (unk_0x4964239DC8B02AF6())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_424(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x4964239DC8B02AF6())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_423(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_423(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_424(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_425(int iParam0)
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

int func_426(int iParam0)
{
	int iVar0;
	
	iVar0 = func_429(iParam0);
	if (iVar0 == -1)
	{
		func_427(iParam0, 1);
		return 0;
	}
	Global_1348405[iVar0 /*5*/].f_4 = 1;
	return Global_1348405[iVar0 /*5*/].f_2;
}

void func_427(int iParam0, bool bParam1)
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_429(iParam0) != -1)
	{
		return;
	}
	if (Global_1348568)
	{
		if (iParam0 == Global_1348568.f_1)
		{
			return;
		}
	}
	if (func_428(iParam0))
	{
		return;
	}
	if (Global_1348606 >= 32)
	{
		return;
	}
	Global_1348573[Global_1348606] = iParam0;
	Global_1348606++;
	if (bParam1)
	{
	}
}

int func_428(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348606)
	{
		if (Global_1348573[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_429(int iParam0)
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348566 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348566)
	{
		if (Global_1348405[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xE638EF34CE32C2C6(Global_1348405[iVar0 /*5*/].f_2) && unk_0x12CBAC0E267ACCE3(Global_1348405[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_430(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_430(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348566)
	{
		return;
	}
	if (unk_0xE638EF34CE32C2C6(Global_1348405[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348405[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x1192AA24F7A5B405(Global_1348405[iParam0 /*5*/].f_2), 64);
			unk_0x73E4492DF34D2BC9(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x7EEE720A06796607(Global_1348405[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348566)
	{
		Global_1348405[iVar32 /*5*/] = { Global_1348405[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_431(&(Global_1348405[iVar32 /*5*/]));
	Global_1348566 = (Global_1348566 - 1);
}

void func_431(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_75();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C779B19E6DDCDA2())
	{
		uParam0->f_3 = unk_0xE23D71F521207E8D();
	}
}

struct<4> func_432(int iParam0)
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Global_2456699 = { func_103(iParam0) };
		if (unk_0xBB3DCD23C363D187())
		{
			if (func_401(Global_2456699))
			{
				if (!unk_0xC59026760C543939(&Global_2456699))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x0CCE21CD7644969B(0))
		{
			return Var0;
		}
		if (func_436(&Global_2456699))
		{
			Global_2456629 = { func_434(iParam0) };
			func_433(&Global_2456629, &Var0);
		}
	}
	return Var0;
}

void func_433(var uParam0, var uParam1)
{
	unk_0x1DBE0FEDFBF4E5D6(uParam0, 35, uParam1);
}

struct<35> func_434(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_435(iParam0))
	{
		return Global_1315944[unk_0x8ACD527A7E574590() /*35*/];
	}
	Var0 = { func_103(iParam0) };
	unk_0x9B8FA4DF999D2A3A(&Var13, 35, &Var0);
	return Var13;
}

int func_435(int iParam0)
{
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		return 1;
	}
	return 0;
}

int func_436(var uParam0)
{
	if (unk_0x0783E320AE7A231F())
	{
		if (unk_0x99BD29C80FF8FFC7() && unk_0x149478BD8C953602(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_7(iParam0) || func_440(iParam0)) || func_6(iParam0))
		{
			return 0;
		}
	}
	if (!func_439(iParam0))
	{
		return 0;
	}
	if ((!func_438(iParam0) && Global_2416794[iParam0 /*303*/].f_231 == -1) && !func_449(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_438(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		if (func_13(unk_0x8ACD527A7E574590(), 0, 1))
		{
			if (unk_0xBED80336E95ED6FE(iParam0, unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_439(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_128, 22);
}

int func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 10) || unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 9));
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_73(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1586488[iVar0 /*408*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_442()
{
	switch (func_251(unk_0x8ACD527A7E574590()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_386(unk_0x8ACD527A7E574590()))
	{
		switch (func_443(unk_0x8ACD527A7E574590()))
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

int func_443(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return Global_1608060[iParam0 /*106*/].f_8.f_27;
	}
	return -1;
}

int func_444(int iParam0, int iParam1)
{
	if (Global_1608060[iParam0 /*106*/].f_8.f_27 != -1 && func_445(Global_1608060[iParam0 /*106*/].f_8.f_27))
	{
		return 1;
	}
	if (iParam1 && Global_1608060[iParam0 /*106*/].f_8.f_26 != -1)
	{
		if (func_445(Global_1608060[iParam0 /*106*/].f_8.f_26))
		{
			return 1;
		}
	}
	return 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
			return 1;
		
		default:
	}
	return 0;
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(unk_0x0BBA31C395EE0D30(iVar0), 0, 1))
		{
			iVar1 = unk_0x0BBA31C395EE0D30(iVar0);
			if (!func_73(iVar1, 0))
			{
				if ((unk_0xBED80336E95ED6FE(iVar1, unk_0x8ACD527A7E574590()) || Global_2416794[iVar1 /*303*/].f_231 != -1) || func_449(iVar1))
				{
					if (func_447(iVar1, iParam1, 0))
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

int func_447(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_75())
	{
		if (!bParam2)
		{
			if (func_448(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608060[iParam0 /*106*/].f_8 != func_75())
		{
			return iParam1 == Global_1608060[iParam0 /*106*/].f_8;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1)
{
	if (iParam1 != func_75())
	{
		if (iParam0 != func_75())
		{
			if (Global_1608060[iParam0 /*106*/].f_8 != func_75())
			{
				if (Global_1608060[iParam0 /*106*/].f_8 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_449(int iParam0)
{
	return Global_1586488[iParam0 /*408*/].f_177 != 0;
}

void func_450(var uParam0)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4D57F6B69CCB6D95(0);
		unk_0x098CA28C04E62E55();
	}
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338607.f_2 == 0)
		{
			Global_1338607.f_2 = 1;
		}
	}
	else if (Global_1338607.f_2 == 1)
	{
		Global_1338607.f_2 = 0;
	}
}

void func_452()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 1))
	{
		if (func_141())
		{
			func_151();
		}
	}
}

int func_453()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 0) && func_141())
	{
		return 1;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 1) && func_141())
	{
		return 1;
	}
	return 0;
}

int func_454()
{
	if (func_141())
	{
		if (func_44(Global_2426494.f_2138[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_455()
{
	if (func_141())
	{
		if (func_48(Global_2426494.f_2138[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_456(int iParam0)
{
	Global_1338607.f_1 = Global_1338607;
	Global_1338607 = iParam0;
}

int func_457(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_494(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_493();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_492())
		{
			if (func_491() > 0 && Global_1573679)
			{
				unk_0xED841E2299EBB634();
				unk_0x0B46E54044546374(fVar7);
				unk_0xCA3D1FCD234B8E0B(18);
				if (unk_0x8E9825258F5C145C())
				{
					unk_0xC563FA29651E1515();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_482())
		{
			func_481(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4416, 26))
	{
		func_481(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_36(&(uParam2->f_19)))
	{
		if (func_491() == 1)
		{
			func_480(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_481(uParam0, uParam2, 0);
		}
	}
	if (func_36(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x8E9825258F5C145C())
		{
			unk_0xC563FA29651E1515();
		}
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_491() == 0 && !bParam5))
		{
			func_481(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_479();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0xED841E2299EBB634();
				}
				unk_0xCA3D1FCD234B8E0B(18);
			}
			if (unk_0xB56FEBC510E7E9DE(uParam2->f_33, 0))
			{
				Global_1573677 = uParam3;
				Global_1573676 = 1;
				unk_0x0B46E54044546374(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573678)
					{
						unk_0xA5F70A8B83BDFA49(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_479();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xED841E2299EBB634();
					}
					unk_0xCA3D1FCD234B8E0B(18);
				}
				unk_0x0B46E54044546374(fVar7);
				if (func_480(bVar6, uParam0, 0))
				{
					func_450(uParam0);
					uVar4 = func_477(iParam1, &(Global_1612768.f_65873), bParam4);
					if (bParam4)
					{
						func_474(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_468(uParam0, func_471(uParam2), func_469(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_465(uParam0, func_467(), func_466(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573678;
						func_474(uParam0, uVar4, "", 0, -1, Global_1573678, 1);
					}
					else
					{
						Var0 = { func_463(iParam1) };
						iVar8 = func_458(iParam1);
						func_474(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x573691DB812DC8AA(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_458(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_462())
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
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_461(unk_0x8ACD527A7E574590()))
			{
				iVar0 = 20;
			}
			if (func_460(unk_0x8ACD527A7E574590()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_459(unk_0x8ACD527A7E574590()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_459(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 4;
}

bool func_460(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

bool func_461(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_462()
{
	return Global_1612768.f_1 == 0;
}

struct<4> func_463(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_464(unk_0x8ACD527A7E574590()) || func_459(unk_0x8ACD527A7E574590()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1612768.f_21, 16);
			break;
	}
	return Var0;
}

bool func_464(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 5;
}

void func_465(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_TITLE");
		if (unk_0x0AAC2160036975D9(sParam2))
		{
			func_412(sParam1);
		}
		else
		{
			unk_0xC976485333F81CE8("FM_AE_BRACKT");
			unk_0x703D2B4B1C7E10B6(sParam1);
			unk_0x703D2B4B1C7E10B6(sParam2);
			unk_0xC8C5D5B9E15EB2E2();
		}
		func_412("");
		if (iParam3 != -1)
		{
			unk_0x4D57F6B69CCB6D95(iParam3);
		}
		unk_0x098CA28C04E62E55();
	}
}

char* func_466()
{
	switch (func_443(unk_0x8ACD527A7E574590()))
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

char* func_467()
{
	switch (func_443(unk_0x8ACD527A7E574590()))
	{
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
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
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
	}
	return "";
}

void func_468(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_TITLE");
		if (unk_0x0AAC2160036975D9(uParam2))
		{
			func_412(uParam1);
		}
		else if (func_251(unk_0x8ACD527A7E574590()) == 133)
		{
			unk_0xC976485333F81CE8("FM_AE_BRACKT_C");
			unk_0x703D2B4B1C7E10B6(uParam1);
			unk_0x703D2B4B1C7E10B6(sParam2);
			unk_0xC8C5D5B9E15EB2E2();
		}
		else
		{
			unk_0xC976485333F81CE8("FM_AE_BRACKT");
			unk_0x703D2B4B1C7E10B6(sParam1);
			unk_0x703D2B4B1C7E10B6(sParam2);
			unk_0xC8C5D5B9E15EB2E2();
		}
		func_412("");
		if (iParam3 != -1)
		{
			unk_0x4D57F6B69CCB6D95(iParam3);
		}
		unk_0x098CA28C04E62E55();
	}
}

char* func_469(var uParam0)
{
	int iVar0;
	
	iVar0 = func_251(unk_0x8ACD527A7E574590());
	if (func_470())
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
			switch (func_250())
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

bool func_470()
{
	return Global_1586487;
}

char* func_471(var uParam0)
{
	int iVar0;
	
	iVar0 = func_251(unk_0x8ACD527A7E574590());
	if (func_470())
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
			if (func_473() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_473() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_250())
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
			if (func_472() == 1)
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

int func_472()
{
	return Global_2457713.f_4637;
}

int func_473()
{
	if (func_251(unk_0x8ACD527A7E574590()) == 132)
	{
		return Global_2457713.f_4632;
	}
	return -1;
}

void func_474(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_414(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xC976485333F81CE8(uParam1);
			unk_0xA50C1D6E503AA51E(iParam5);
			unk_0xC8C5D5B9E15EB2E2();
		}
		else
		{
			func_412(sParam1);
		}
		if (func_492() && iParam6)
		{
			if (func_476())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xC976485333F81CE8("LBD_DPD_CNT");
			unk_0xA50C1D6E503AA51E(iVar0);
			unk_0xA50C1D6E503AA51E(iVar1);
			unk_0xC8C5D5B9E15EB2E2();
		}
		else
		{
			func_412(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4D57F6B69CCB6D95(iParam4);
			if (func_475(unk_0x8ACD527A7E574590()))
			{
				unk_0x4D57F6B69CCB6D95(166);
			}
		}
		unk_0x098CA28C04E62E55();
	}
}

int func_475(int iParam0)
{
	if (func_461(iParam0) || func_460(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_476()
{
	return Global_1573679;
}

char* func_477(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_478();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573843 == 0)
		{
			Global_1573843 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x0AAC2160036975D9(uParam1))
	{
		if (Global_1573843 == 1)
		{
			Global_1573843 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573843 == 0)
		{
			Global_1573843 = 1;
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
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_478()
{
	if (unk_0xE555F9996469E4CE())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xEEAA0B700048924E())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xCABF40559052EFC6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x34BE50285BD9E4A1())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_479()
{
	Global_36522 = 1;
}

bool func_480(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x2F14983962462691("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x2F14983962462691("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x2F14983962462691("mp_matchmaking_card");
	}
	return unk_0xEDE19C6ED6E2F478(*uParam1);
}

void func_481(var uParam0, var uParam1, bool bParam2)
{
	unk_0xA5F70A8B83BDFA49(&(uParam1->f_33), 7);
	Global_1573677 = 0;
	func_405();
	Global_1573676 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_36(&(uParam1->f_19)))
		{
			func_35(&(uParam1->f_19));
		}
	}
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0xD2E03CEA477E4E3D(uParam0);
	}
	if (unk_0xB56FEBC510E7E9DE(uParam1->f_33, 0))
	{
		unk_0xA5F70A8B83BDFA49(&(uParam1->f_33), 0);
	}
	unk_0x0B46E54044546374(0f);
}

int func_482()
{
	if (func_490())
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (!func_488())
	{
		return 0;
	}
	if (!func_375())
	{
		return 0;
	}
	if (func_487(8, -1))
	{
		return 0;
	}
	if (func_491() == 2)
	{
		return 0;
	}
	if (Global_2457713.f_4396)
	{
		return 0;
	}
	if (func_247())
	{
		return 0;
	}
	else if (!func_277(unk_0x8ACD527A7E574590(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_486(1) || func_484(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (func_71(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (Global_1706258)
	{
		return 0;
	}
	if (Global_1706261)
	{
		return 0;
	}
	if (func_483(0))
	{
		return 0;
	}
	return 1;
}

bool func_483(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_2457713.f_4647.f_16, iParam0);
}

int func_484(bool bParam0)
{
	if (unk_0xFDB8C0B1E2EEA481())
	{
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (func_485(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xE721293454745300(0, 25) || unk_0xE721293454745300(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0xE721293454745300(0, 19) || (!bParam0 && unk_0xECDBFACBE670BD70(0, 19)))
	{
		return 1;
	}
	if (unk_0x2C063B4379F0C076())
	{
		if (((unk_0xE721293454745300(0, 166) || unk_0xE721293454745300(0, 167)) || unk_0xE721293454745300(0, 168)) || unk_0xE721293454745300(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xECDBFACBE670BD70(0, 166) || unk_0xECDBFACBE670BD70(0, 167)) || unk_0xECDBFACBE670BD70(0, 168)) || unk_0xECDBFACBE670BD70(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_485(int iParam0)
{
	int iVar0;
	
	if (unk_0xFFB998F7CF994F0E())
	{
		if (!unk_0x1E80C02AC16B6622(uParam0))
		{
			unk_0x587BE7B13B3A93BF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_486(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_487(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

int func_488()
{
	if (func_489())
	{
		return 1;
	}
	if (unk_0x2CC731F9E664299E())
	{
		return 0;
	}
	if (unk_0x8DD09BB8ACF9E623() || unk_0x329E4482E654B910())
	{
		return 0;
	}
	if (unk_0x3502F016A4FB24C5())
	{
		return 0;
	}
	return 1;
}

bool func_489()
{
	return Global_1312438;
}

bool func_490()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

int func_491()
{
	return Global_1338610.f_68;
}

int func_492()
{
	if (Global_1573678 > 16)
	{
		return 1;
	}
	return 0;
}

float func_493()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5E94674CEC1591AA()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_495()
{
	if (func_498())
	{
		return 1;
	}
	if (func_6(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_470())
	{
		return 1;
	}
	if (func_321(unk_0x8ACD527A7E574590()))
	{
		switch (func_251(unk_0x8ACD527A7E574590()))
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
				if (!func_496(unk_0x8ACD527A7E574590()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_496(unk_0x8ACD527A7E574590()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_496(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 4);
}

int func_497(int iParam0)
{
	if ((iParam0 == 24 && func_321(unk_0x8ACD527A7E574590())) && !func_386(unk_0x8ACD527A7E574590()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_140(unk_0x8ACD527A7E574590(), 0) && func_386(unk_0x8ACD527A7E574590()))
		{
			return 1;
		}
		if (func_379(unk_0x8ACD527A7E574590()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_498()
{
	if (func_499(unk_0x8ACD527A7E574590()))
	{
		return Global_1318846;
	}
	return 0;
}

int func_499(int iParam0)
{
	if (func_73(iParam0, 0))
	{
		return unk_0x05699AF6D145B1B8(iParam0);
	}
	return 0;
}

void func_500()
{
	int iVar0;
	
	if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iLocal_365)))
	{
		iVar0 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iLocal_365));
		if (unk_0x860CE5C791DC28F5(iVar0))
		{
			func_501(iVar0, 2);
		}
	}
	iLocal_365++;
	if (iLocal_365 >= unk_0xD92F4D7123D878D4())
	{
		iLocal_365 = 0;
	}
}

void func_501(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 0))
	{
		return;
	}
	if (func_36(&(Global_1573875.f_18)))
	{
		return;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_2, iParam0))
	{
		if (Global_1573875 < iParam1 && unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 1))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 0);
			return;
		}
		if (Global_1573875 != 0)
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 1);
		}
		Global_1573875 = 0;
		Global_1573875.f_2 = 0;
	}
	unk_0x573691DB812DC8AA(&(Global_1573875.f_2), iParam0);
	bVar0 = true;
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (func_502(iParam0))
	{
		bVar0 = false;
	}
	if (func_73(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1573875++;
	}
}

bool func_502(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 10);
}

void func_503(int iParam0, int iParam1)
{
	Local_3614[iParam0 /*5*/] = iParam1;
}

int func_504()
{
	struct<71> Var0;
	int iVar71;
	int iVar72;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2457713.f_4561 = { Var0 };
	iVar71 = 0;
	while (iVar71 < 30)
	{
		Global_2457713.f_4561.f_38[iVar71] = -1;
		iVar71++;
	}
	iVar72 = 0;
	while (iVar72 < 32)
	{
		Local_1570.f_527[iVar72 /*47*/].f_1 = func_75();
		iVar72++;
	}
	return 1;
}

int func_505()
{
	return Local_820.f_0;
}

int func_506(int iParam0)
{
	return Local_3614[iParam0 /*5*/];
}

void func_507()
{
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 6))
	{
		func_531();
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 6);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 7))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 4) || unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 16))
		{
			if (((!unk_0xF0F27AB23835252C() && !unk_0x8E9825258F5C145C()) && !func_141()) && func_13(unk_0x8ACD527A7E574590(), 1, 1))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 7);
				func_134("FME_PASINT", 30000);
				func_133(1);
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 17))
		{
			if (func_282() && !func_293())
			{
				unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 17);
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 16);
			}
		}
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 23))
	{
		if (((((!unk_0xF0F27AB23835252C() && !unk_0xB56FEBC510E7E9DE(Global_2457713.f_741, 2)) && func_13(unk_0x8ACD527A7E574590(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0x8E9825258F5C145C())
		{
			if (func_529())
			{
				func_134("AMEV_GA_RP", -1);
				func_133(1);
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 23);
			}
		}
	}
	if (unk_0x4F297F09162EFB5D() && unk_0x8FE63F025578C271() == 15)
	{
		if (func_335(unk_0x8ACD527A7E574590()))
		{
			if (!unk_0x915165A5AB17A987(1344549371))
			{
				unk_0x5705C31EB59B804F(1344549371);
			}
		}
		else if (unk_0x915165A5AB17A987(1344549371))
		{
			unk_0x5CEAA1213640136E(1344549371);
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 9))
	{
		if ((((!unk_0xF0F27AB23835252C() && !unk_0x8E9825258F5C145C()) && !func_141()) && func_13(unk_0x8ACD527A7E574590(), 1, 1)) && !func_292(unk_0x8ACD527A7E574590(), 21))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 9);
			func_528(0);
			func_134("FME_TBL00", -1);
			func_133(1);
		}
	}
	if (func_321(unk_0x8ACD527A7E574590()))
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 18))
		{
			if ((func_292(unk_0x8ACD527A7E574590(), 21) && unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 20)) && !unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 19))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 18);
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 18))
		{
			if (((((!unk_0xF0F27AB23835252C() && !unk_0x8E9825258F5C145C()) && !func_141()) && func_13(unk_0x8ACD527A7E574590(), 1, 1)) && unk_0x398F615441F52A47()) && !Global_2457713.f_4641)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 18);
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 19);
				func_134("AMTT_RPAS", -1);
				func_133(1);
			}
		}
	}
	if (((((func_321(unk_0x8ACD527A7E574590()) && !func_7(unk_0x8ACD527A7E574590())) && func_251(unk_0x8ACD527A7E574590()) != 146) && !func_6(unk_0x8ACD527A7E574590())) && !func_393(unk_0x8ACD527A7E574590())) && !func_518())
	{
		if (func_334(func_251(unk_0x8ACD527A7E574590())))
		{
			unk_0x8657687F89ED656A(unk_0x8ACD527A7E574590());
		}
		if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 22))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 22);
		}
		if (func_355(unk_0x8ACD527A7E574590()) || func_329())
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 10))
			{
				if (func_516(func_251(unk_0x8ACD527A7E574590())))
				{
					if (func_234(0) && !Global_2391042)
					{
						unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 9);
					}
					func_333(1);
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 14);
				}
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 10);
			}
		}
		if (func_335(unk_0x8ACD527A7E574590()))
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 11))
			{
				if (!Global_91158.f_8)
				{
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 12);
					func_331(1);
				}
				if (!func_515())
				{
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 13);
					func_330();
				}
				if (!Global_2391042)
				{
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 14);
					if (func_234(0) && !Global_2391042)
					{
						unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 9);
					}
					func_333(1);
				}
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 11);
			}
		}
		else
		{
			func_513(0);
		}
	}
	else
	{
		func_513(1);
	}
	func_508();
	if (func_328(func_251(unk_0x8ACD527A7E574590())) && !unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 21))
	{
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 21);
	}
	if ((func_282() && !func_293()) || func_292(unk_0x8ACD527A7E574590(), 21))
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 10))
		{
			unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 10);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 10))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 10);
	}
}

void func_508()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_141())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_367(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 62 || iVar0 >= 80)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 26))
				{
					unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 26);
				}
				func_509(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 26))
	{
		func_35(&(Global_1573875.f_21));
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 26);
	}
}

void func_509(int iParam0, int iParam1)
{
	if (!func_36(&(Global_1573875.f_21)))
	{
		func_2(&(Global_1573875.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573875.f_21), iParam1, 0))
	{
		if (func_491() > 0)
		{
			func_512(iParam0);
			if (func_131("AMEV_LBD_HELP"))
			{
				unk_0x4ACCE973F9C3CA3B(1);
			}
			func_35(&(Global_1573875.f_21));
		}
	}
	else
	{
		func_511(0);
		func_510();
	}
}

void func_510()
{
	Global_2457713.f_4383 = 0;
}

void func_511(int iParam0)
{
	Global_1338610.f_68 = iParam0;
}

void func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_513(int iParam0)
{
	if ((unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 11) || (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 10) && iParam0)) || (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 22) && iParam0))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 12))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 12);
			func_331(0);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 13))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 13);
			func_514();
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 14) && !func_140(unk_0x8ACD527A7E574590(), 0))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 14);
			func_333(0);
		}
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 11);
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 10);
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 22);
	}
}

void func_514()
{
	unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4551), 0);
}

bool func_515()
{
	return unk_0xB56FEBC510E7E9DE(Global_2457713.f_4551, 0);
}

int func_516(int iParam0)
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
			return func_335(unk_0x8ACD527A7E574590());
		
		case 133:
			return (func_329() || func_517(func_250()));
		
		default:
	}
	return 0;
}

int func_517(int iParam0)
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

int func_518()
{
	if (((((((((func_527() || func_526()) || func_525()) || func_247()) || (func_524() && !unk_0x4FE03C08BC095A57())) || (func_521() && !func_520())) || Global_2394609) || Global_2394609.f_1 != 0) || Global_2394682 != 0) || (func_519() == 2 && !unk_0x4FE03C08BC095A57()))
	{
		return 1;
	}
	return 0;
}

int func_519()
{
	return Global_976340;
}

bool func_520()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717.f_2, 27);
}

int func_521()
{
	if (func_523() || func_522())
	{
		return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_84 == 8;
	}
	return 0;
}

var func_522()
{
	return Global_2432717.f_609;
}

bool func_523()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717.f_2, 11);
}

bool func_524()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717, 5);
}

bool func_525()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717, 2);
}

bool func_526()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717, 20);
}

bool func_527()
{
	return Global_2432717.f_573;
}

void func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = func_190(2507, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 0))
		{
			unk_0x573691DB812DC8AA(&iVar0, 0);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 1))
		{
			unk_0x573691DB812DC8AA(&iVar0, 1);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 2))
		{
			unk_0x573691DB812DC8AA(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 3))
		{
			unk_0x573691DB812DC8AA(&iVar0, 3);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 4))
		{
			unk_0x573691DB812DC8AA(&iVar0, 4);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 5))
		{
			unk_0x573691DB812DC8AA(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 6))
		{
			unk_0x573691DB812DC8AA(&iVar0, 6);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 7))
		{
			unk_0x573691DB812DC8AA(&iVar0, 7);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 8))
		{
			unk_0x573691DB812DC8AA(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 9))
		{
			unk_0x573691DB812DC8AA(&iVar0, 9);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 10))
		{
			unk_0x573691DB812DC8AA(&iVar0, 10);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 11))
		{
			unk_0x573691DB812DC8AA(&iVar0, 11);
		}
	}
	func_181(2507, iVar0, -1, 1);
}

int func_529()
{
	int iVar0;
	
	if (!func_36(&(Global_1573875.f_15)))
	{
		func_2(&(Global_1573875.f_15), 0, 0);
		Global_1573875.f_17 = 0;
	}
	else if (func_1(&(Global_1573875.f_15), 1000, 0))
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(Global_1573875.f_17)))
		{
			iVar0 = unk_0x42145D1DD048146E(unk_0x209E209593217021(Global_1573875.f_17));
			if (unk_0x860CE5C791DC28F5(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_530(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_29(unk_0x8ACD527A7E574590()), func_29(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573875.f_17++;
		if (Global_1573875.f_17 >= 32)
		{
			Global_1573875.f_17 = 0;
			func_35(&(Global_1573875.f_15));
		}
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_185(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1586488[iVar0 /*408*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_531()
{
	unk_0xCBC9707F3BE3D5C2(5);
	func_533();
	unk_0x4AAD01BBE039D160(1f);
	unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 8);
	func_532();
}

void func_532()
{
	if (Global_1715730)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1715731, 0))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2464277, 0);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1715731, 1))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2464277, 1);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1715731, 5))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2464277, 5);
		}
		if (unk_0x456AF8BC83CCA6FF(-355737150))
		{
			unk_0x39FEEC3E8273065D(-355737150, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-580979506))
		{
			unk_0x39FEEC3E8273065D(-580979506, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-1426452475))
		{
			unk_0x39FEEC3E8273065D(-1426452475, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(745417724))
		{
			unk_0x39FEEC3E8273065D(745417724, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-1305304906))
		{
			unk_0x39FEEC3E8273065D(-1305304906, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-1543175077))
		{
			unk_0x39FEEC3E8273065D(-1543175077, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-811770997))
		{
			unk_0x39FEEC3E8273065D(-811770997, 1, 0, 0);
		}
		Global_1715731 = 0;
	}
	Global_1715730 = 0;
}

void func_533()
{
	if (unk_0x4D1CAE1CFC4C8868(Global_2457713.f_4643))
	{
		if (!Global_2457713.f_4643 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	Global_2457713.f_4643 = -1;
	Global_2457713.f_4642 = 1f;
}

int func_534()
{
	if (func_535())
	{
		return 1;
	}
	return 0;
}

bool func_535()
{
	return Global_1573875.f_23;
}

int func_536()
{
	bool bVar0;
	
	func_540(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315885 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 1;
		}
	}
	if (func_539())
	{
		return 1;
	}
	if (Global_2442895)
	{
		return 1;
	}
	if (func_538())
	{
		return 1;
	}
	if (func_537(157))
	{
		if (!func_527())
		{
			return 1;
		}
	}
	if (func_537(155))
	{
		return 1;
	}
	if (!unk_0x3A691B47D5DE2593())
	{
		return 1;
	}
	if (func_337() != 0)
	{
		if (unk_0xB1A77D5C890711F9(func_337()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0)
{
	if (unk_0xF5F50153667BD068(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_538()
{
	return Global_2440977;
}

bool func_539()
{
	return Global_2432717.f_568;
}

void func_540(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE8F73785A0FB2F57(1))
	{
		iVar1 = unk_0x6688A198308BEB5E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xA961A8FBAD16D683(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 315:
					func_541(iVar0);
					break;
				
				case 2:
					unk_0xA961A8FBAD16D683(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_541(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xA961A8FBAD16D683(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xF555CE342BA0C333(Var0.f_1);
			if (unk_0x1F2158D615BC4B25(uVar3))
			{
				if (unk_0xB42592B9FFEB5EDE(iVar3, 0))
				{
					uVar4 = unk_0xF8D66A34AF0C53A5(iVar3, 0);
					if (unk_0x8F41BA1B6610A17B(uVar4, Var0.f_2) && unk_0xCD9901F3C995D4B9())
					{
						if (func_542(uVar4, &bVar5))
						{
							unk_0x8534CE5144691854(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB84D4C251623B60C(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_542(int iParam0, var uParam1)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x335346A332B62CA2(iParam0))
		{
			if (unk_0xA203F67D4FCA77C8(iParam0))
			{
				unk_0x8D429A827A931AC9(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x95CBA891BCA778AA(iParam0, 0))
		{
			if (unk_0xE8BD4B74271ABDCC(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_543()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_544()
{
	var uVar0[4];
	int iVar5;
	var uVar6;
	
	func_143();
	if (unk_0xB56FEBC510E7E9DE(iLocal_101, 0))
	{
		unk_0xE24358A92698B60D(uLocal_383);
	}
	unk_0xA92DDFCD9C825944(uLocal_383);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		if (unk_0xB56FEBC510E7E9DE(iLocal_804, iVar5) && !unk_0x4FB4BC44492DEE8D(uLocal_805[iVar5]))
		{
			unk_0xE24358A92698B60D(uLocal_805[iVar5]);
			unk_0xA92DDFCD9C825944(uLocal_805[iVar5]);
		}
		iVar5++;
	}
	func_324();
	func_370(0);
	func_547(132, 0, Local_820.f_8 == 6);
	func_343(22, 0);
	Global_2457713.f_4632 = -1;
	uVar0[0] = Local_820.f_3[0];
	uVar0[1] = Local_820.f_3[1];
	uVar0[2] = Local_820.f_3[2];
	uVar0[3] = Local_820.f_3[3];
	func_546(&(uVar0[0]));
	func_546(&(uVar0[1]));
	func_546(&(uVar0[2]));
	func_546(&(uVar0[3]));
	if (func_536())
	{
		Local_3602.f_5 = 5;
	}
	else if (unk_0xB56FEBC510E7E9DE(Local_820.f_2, 2))
	{
		Local_3602.f_5 = 6;
	}
	else if (Local_3602.f_5 != 1)
	{
		Local_3602.f_5 = 2;
	}
	Local_3602.f_0 = Local_820.f_724;
	Local_3602.f_1 = Local_820.f_725;
	Local_3602.f_4 = Local_820.f_726;
	Local_3602.f_3 = Local_820.f_728;
	Local_3602.f_10 = (unk_0xAEB19103FF099B1F() - Local_3602.f_9);
	uVar6 = Local_820.f_712;
	if (Local_820.f_707)
	{
		uVar6 = Local_820.f_712 + 4;
	}
	if (!Global_262145.f_9348)
	{
		if (Local_3602.f_6 > 0)
		{
		}
	}
	Local_3602.f_6 = (Local_3602.f_6 + iLocal_382);
	if (unk_0x8DDF51AF4B711D9F() != -1)
	{
		func_545(Local_3602, uVar6, Local_3614[unk_0x8DDF51AF4B711D9F() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_363(1);
	unk_0x2F798BA2098FDADE();
}

void func_545(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17)
{
	var uVar0;
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
	
	uVar0 = unk_0x664B47C58CE8A0A4();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69317)
	{
		if (unk_0x35D1CAD6ADAB6491(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x87C9FFD02F36010D(&Var1);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xD7BCE57D3E3C6357(&Var14);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = uParam16;
			Var28.f_17 = uParam17;
			unk_0x6039AF128DEF4D92(&Var28);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xD1464D98A78E042B(&Var52);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_penned_in"))
		{
			unk_0xDD873900121D53C8(&Param0);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x83B701077804D55E(&Var66);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x7415E4FE7D84C270(&Var79);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xC0103A0E44DFACFD(&Var93);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0xE3A668C6D43D48C4(&Var107);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xE52D2969162A9974(&Var123);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xAE7D20497F72F04C(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xAE52C7DB2424F011(&Var150);
			}
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x62657C82F090B19F(&Var164);
		}
	}
}

void func_546(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xB56FEBC510E7E9DE(*uParam0, iVar0))
		{
			unk_0xA5F70A8B83BDFA49(uParam0, iVar0);
		}
		else
		{
			unk_0x573691DB812DC8AA(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_547(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x8ACD527A7E574590() != -1)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 13))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 13);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 14))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 14);
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 21))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 21);
	}
	func_566();
	unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
	unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_565(func_251(unk_0x8ACD527A7E574590()));
		func_343(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x8ACD527A7E574590() != -1) && func_564(unk_0x8ACD527A7E574590()) >= 12)
		{
			func_563(2519, -1);
			iVar1 = func_190(2519, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 5);
			}
		}
		func_562();
		func_561();
		func_560();
		if (!func_139(unk_0x8ACD527A7E574590()) && !func_137(unk_0x8ACD527A7E574590()))
		{
			func_553();
		}
		func_552();
		if (!unk_0xB56FEBC510E7E9DE(Global_1718248.f_3, 0) && !unk_0xB56FEBC510E7E9DE(Global_1718248.f_3, 1))
		{
			func_531();
		}
		func_551();
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1637), 2);
		func_142();
		func_126();
	}
	if (unk_0x915165A5AB17A987(1344549371))
	{
		unk_0x5CEAA1213640136E(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x8ACD527A7E574590() != -1 && !func_292(unk_0x8ACD527A7E574590(), 21)) && !func_140(unk_0x8ACD527A7E574590(), 0))
		{
			func_333(0);
			func_331(0);
			func_550();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_40(26, -1))
		{
			Global_2442839 = -1;
			func_37(26, -1);
		}
	}
	if (!func_548())
	{
		Global_2456625 = 1;
	}
}

int func_548()
{
	if (((!func_475(unk_0x8ACD527A7E574590()) && !func_459(unk_0x8ACD527A7E574590())) && func_251(unk_0x8ACD527A7E574590()) != 146) && !func_549())
	{
		return 0;
	}
	return 1;
}

int func_549()
{
	if (Global_1612768 == 0 && ((((((((((((((((unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 15) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 18)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 19)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 28)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 27)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 0)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 1)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 2)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 5)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 7)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 8)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 6)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 3)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 9)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 10)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 11)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 4)))
	{
		return 1;
	}
	return 0;
}

void func_550()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0xA5F70A8B83BDFA49(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_551()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573875 = { Var0 };
}

void func_552()
{
	var uVar0;
	
	Global_1318846 = uVar0;
}

void func_553()
{
	Global_2404919.f_20 = { Global_2406518 };
	Global_2404919.f_22 = { Global_2406520 };
	func_554(1, 1);
}

void func_554(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406537 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406537 };
		Global_2404919.f_39.f_49 = { Global_2406537.f_49 };
		Global_2404919.f_39.f_52 = Global_2406537.f_52;
		Global_2404919.f_39.f_53 = Global_2406537.f_53;
	}
	if (bParam0)
	{
		func_559();
	}
	func_556(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_555(0);
	func_129();
}

void func_555(bool bParam0)
{
	if (bParam0)
	{
		Global_2404919.f_629 = 0;
	}
	else
	{
		Global_2404919.f_629 = 1;
	}
}

void func_556(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		func_557();
		func_346(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1139 = iParam3;
		Global_2404919.f_1140 = iParam4;
		Global_2404919.f_1137 = iParam5;
		Global_2404919.f_1138 = iParam6;
		Global_2404919.f_1141 = iParam7;
		Global_2404919.f_1142 = iParam8;
		Global_2404919.f_1143 = iParam9;
	}
	else
	{
		func_557();
		func_346(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_557()
{
	func_558();
	Global_2404919.f_631 = 0;
}

void func_558()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404919.f_632[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_559()
{
	Global_2404919.f_347 = { Global_2406845 };
}

void func_560()
{
	Global_2457713.f_4551 = 0;
}

void func_561()
{
	if (unk_0x8ACD527A7E574590() != -1)
	{
		Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1 = 0;
	}
}

void func_562()
{
	int iVar0;
	
	iVar0 = unk_0x8ACD527A7E574590();
	if (iVar0 != -1)
	{
		Global_1608060[iVar0 /*106*/] = -1;
	}
}

void func_563(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_190(iParam0, func_186(iParam1), 0);
	iVar0++;
	if (!func_189(iParam0))
	{
		func_181(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_182(iParam0, iVar0, iParam1, 1);
	}
}

int func_564(int iParam0)
{
	return Global_1586488[iParam0 /*408*/].f_192.f_6;
}

int func_565(int iParam0)
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
			if (func_335(unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_566()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 3) || unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 4))
	{
		if (unk_0x2CC731F9E664299E() || unk_0x8DD09BB8ACF9E623())
		{
			unk_0xCA6D671341405469(800);
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 5))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1635), 5);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 3))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1635), 3);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 4))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1635), 4);
	}
	func_569(0);
	func_568(0);
	func_567(0);
}

void func_567(int iParam0)
{
	if (Global_2457713.f_4371 != iParam0)
	{
		Global_2457713.f_4371 = iParam0;
	}
}

void func_568(bool bParam0)
{
	if (Global_2457713.f_4370 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2457713.f_4370 = bParam0;
	}
}

void func_569(int iParam0)
{
	if (Global_2457713.f_4368 != iParam0)
	{
		Global_2457713.f_4368 = iParam0;
	}
}

int func_570(struct<20> Param0)
{
	func_578(func_579(Param0.f_0), Param0);
	unk_0xEF0C9156550D021E(0);
	unk_0x243D22C9CB37ECA3(func_577(8));
	func_574(0, -1, 0);
	func_572(132);
	unk_0x39875B70C130EB4D(&Local_820, 750);
	unk_0x630A256DB3A5FC80(&Local_3614, 161);
	unk_0x2A1F1A3180086B2E(0);
	if (!func_571())
	{
		func_544();
	}
	if (unk_0xCD91CF0F63010FB2())
	{
		unk_0xB3F2BA4ABA5D5497(&(Local_820.f_724), &(Local_820.f_725));
	}
	Local_3602.f_2 = unk_0x825762A1424CFB65();
	Local_3602.f_9 = unk_0xAEB19103FF099B1F();
	Local_3602.f_8 = unk_0xAEB19103FF099B1F();
	func_343(22, 1);
	return 1;
}

int func_571()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 0;
		}
		if (unk_0xCF7D33D72A6A0841())
		{
			return 1;
		}
		if (func_539())
		{
			return 0;
		}
		if (func_537(155))
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

void func_572(int iParam0)
{
	func_551();
	func_573();
	func_560();
	Global_1573875.f_4 = iParam0;
	Global_1573875.f_5 = iParam0;
	func_342(iParam0, -1);
	func_20(&(Global_1573875.f_18), 0, 0);
	Global_2457713.f_4413 = 0;
	Global_2441617[0] = func_75();
	Global_2441617[1] = func_75();
	Global_2441617[2] = func_75();
	Global_2441617[3] = func_75();
	Global_2441617[4] = func_75();
	func_126();
	func_151();
	if (func_282() && !func_293())
	{
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 16);
	}
	else
	{
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 17);
	}
}

void func_573()
{
	var uVar0;
	
	Global_1573899 = uVar0;
}

int func_574(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x61AA115EF3AAF17E();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_576();
			}
			else
			{
				return 0;
			}
		}
		if (!func_575())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C779B19E6DDCDA2())
				{
					if (!bParam2)
					{
						func_576();
					}
					else
					{
						return 0;
					}
				}
				if (func_539())
				{
					if (!bParam2)
					{
						func_576();
					}
					else
					{
						return 0;
					}
				}
				if (func_537(155))
				{
					if (!bParam2)
					{
						func_576();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x511A80B99C8ADD82())
			{
				if (!bParam2)
				{
					func_576();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x61AA115EF3AAF17E();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			if (!bParam2)
			{
				func_576();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x511A80B99C8ADD82())
	{
		if (!bParam2)
		{
			func_576();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_575()
{
	return Global_1315885;
}

void func_576()
{
	unk_0x2F798BA2098FDADE();
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

void func_578(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		func_576();
	}
	unk_0xF38C3C2D73EE34BB(uParam0, 0, Param1.f_16);
}

int func_579(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

