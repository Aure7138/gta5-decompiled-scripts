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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	struct<194> Local_100 = { 0, 0, 8, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_294 = 0;
	struct<44> Local_295[32];
	var uLocal_1704 = 0;
	var uLocal_1705[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1714[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1723[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	float fLocal_1737 = 0f;
	int iLocal_1738 = 0;
	int iLocal_1739 = 0;
	var uLocal_1740 = 0;
	int iLocal_1741 = 0;
	int iLocal_1742 = 0;
	int iLocal_1743 = 0;
	int iLocal_1744 = 0;
	var uLocal_1745 = 0;
	float fLocal_1746 = 0f;
	float fLocal_1747 = 0f;
	float fLocal_1748 = 0f;
	float fLocal_1749 = 0f;
	float fLocal_1750 = 0f;
	int iLocal_1751 = 0;
	int iLocal_1752 = 0;
	struct<3> Local_1753[50];
	bool bLocal_1904 = 0;
	int iLocal_1905 = 0;
	bool bLocal_1906 = 0;
	int iLocal_1907 = 0;
	int iLocal_1908 = 0;
	int iLocal_1909 = 0;
	int iLocal_1910 = 0;
	int iLocal_1911 = 0;
	int iLocal_1912 = 0;
	float fLocal_1913 = 0f;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	float fLocal_1916 = 0f;
	struct<3> Local_1917 = { 0, 0, 0 } ;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 12;
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
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
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
	var uLocal_2607 = 1065353216;
	struct<9> Local_2608 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2617 = 0;
	int iLocal_2618 = 0;
	var uLocal_2619 = 0;
	int iLocal_2620 = 0;
	char* sLocal_2621 = NULL;
	int iLocal_2622 = 0;
	struct<3> Local_2623 = { 0, 0, 0 } ;
	struct<3> Local_2626 = { 0, 0, 0 } ;
	struct<3> Local_2629 = { 0, 0, 0 } ;
	float fLocal_2632 = 0f;
	struct<3> Local_2633 = { 0, 0, 0 } ;
	int iLocal_2636 = 0;
	int iLocal_2637 = 0;
	float fLocal_2638 = 0f;
	int iLocal_2639 = 0;
	var uLocal_2640 = 16;
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
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
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
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
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
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	int iLocal_2805 = 0;
	int iLocal_2806 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_98 = unk_0x99F9E6870B7B7C2D();
	iLocal_99 = unk_0x09990A2B9C8684F0();
	iLocal_1744 = joaat("prop_taxi_meter_2");
	fLocal_1746 = 1f;
	fLocal_1747 = (0.4f * fLocal_1746);
	fLocal_1748 = (0.6f * fLocal_1746);
	fLocal_1749 = 0.201f;
	fLocal_1750 = 0.351f;
	iLocal_1751 = 1076369579;
	iLocal_1752 = 1076631591;
	iLocal_1909 = 1;
	iLocal_1911 = iLocal_1910;
	fLocal_1913 = 1.2f;
	fLocal_1916 = unk_0xBBDA792448DB5A89(iLocal_1910);
	iLocal_2620 = 1;
	sLocal_2621 = unk_0x7391BCD755BD8577(0, 218, 1);
	iLocal_2622 = unk_0x346268472B5F4E43();
	Local_2623 = { -0.01f, 0.6f, 0.24f };
	Local_2626 = { -5f, 0f, 0f };
	Local_2629 = { 0f, -0.25f, 0.55f };
	fLocal_2632 = 50f;
	Local_2633 = { -0.3f, 1f, 0.35f };
	fLocal_2638 = 99999f;
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_357(ScriptParam_0))
		{
			func_355();
		}
	}
	while (true)
	{
		func_354();
		if (func_344())
		{
			func_355();
		}
		if (unk_0xEB97F9F181CDFD2C())
		{
			if (func_343())
			{
				if (unk_0xB88D86B8D5987AF4() != unk_0x49C71E6CE1366947(unk_0xD4E735F4B6A956AC()))
				{
					func_355();
				}
			}
			else
			{
				func_355();
			}
		}
		else if (unk_0xB88D86B8D5987AF4() != -1)
		{
			func_355();
		}
		switch (func_342(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				Local_295[unk_0xD60943E3BE730BF0() /*44*/] = 1;
				if (func_341() == 4)
				{
					Local_295[unk_0xD60943E3BE730BF0() /*44*/] = 3;
				}
				break;
			
			case 1:
				if (func_341() == 1)
				{
					func_315();
					func_36();
				}
				else if (func_341() == 4)
				{
					Local_295[unk_0xD60943E3BE730BF0() /*44*/] = 3;
				}
				break;
			
			case 3:
				func_34(&(Local_100.f_193));
				if (func_33(&(Local_100.f_193)))
				{
					Local_295[unk_0xD60943E3BE730BF0() /*44*/] = 4;
				}
				break;
			
			case 2:
				Local_295[unk_0xD60943E3BE730BF0() /*44*/] = 4;
			
			case 4:
				func_355();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_341())
			{
				case 0:
					Local_100.f_0 = 1;
					break;
				
				case 1:
					func_4();
					func_3();
					if (func_1())
					{
						Local_100.f_0 = 4;
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
	return 0;
}

void func_3()
{
	switch (Local_100.f_191)
	{
		case 0:
			Local_100.f_191 = 1;
			break;
		
		case 1:
			break;
		
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_4()
{
	if (iLocal_2805 < unk_0x48908CAFF1B58FF8())
	{
		func_25();
		iLocal_2805++;
	}
	else
	{
		func_5();
		unk_0x2BCFB39E86340DAA(&(Local_100.f_2[iLocal_2806 /*23*/].f_6), 0);
		unk_0x2BCFB39E86340DAA(&(Local_100.f_2[iLocal_2806 /*23*/].f_6), 2);
		Local_100.f_188 = 0;
		iLocal_2806++;
		if (iLocal_2806 >= 8)
		{
			iLocal_2805 = 0;
			iLocal_2806 = 0;
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = iLocal_2806;
	func_18(iVar0);
	func_6(iVar0);
}

void func_6(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x45F99485D7E1C29A())
	{
		return;
	}
	if (Local_100.f_2[iParam0 /*23*/].f_7 != 11 && !unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 4))
	{
		if (unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (func_15(Local_100.f_2[iParam0 /*23*/].f_1) || !func_13(Local_100.f_2[iParam0 /*23*/]))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (!unk_0xE0FD180CD24C0B67(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
	}
	if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1) && func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		Var0 = { unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1) };
		switch (Local_100.f_2[iParam0 /*23*/].f_7)
		{
			case 0:
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 1:
				if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (func_12(Var0, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 45f))
					{
						if (!func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							func_17(iParam0, 2);
						}
					}
					else if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)))
					{
						if (func_10(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)), 1, 1))
						{
							if (func_12(Var0, unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2))), 1), 5f))
							{
								func_17(iParam0, 2);
							}
						}
					}
				}
				else
				{
					func_17(iParam0, 8);
				}
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 2:
				if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
					{
						if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -272084098, 1))
						{
							if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
							{
								if (unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
								{
									func_17(iParam0, 3);
								}
							}
						}
						else if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)))
						{
							if (func_10(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)), 1, 1))
							{
								if (func_12(Var0, unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2))), 1), 5f))
								{
									if (unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) || unk_0x96B3FF9DF78D0691(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
									{
										func_17(iParam0, 3);
									}
									else if (!func_12(Var0, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 10f))
									{
										func_17(iParam0, 3);
									}
								}
							}
						}
					}
				}
				else
				{
					func_17(iParam0, 8);
				}
				if (unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 3:
				if (unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 4:
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_100.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0))
					{
						func_17(iParam0, 5);
					}
				}
				break;
			
			case 5:
				if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
					{
						if (func_8(iParam0))
						{
							if (unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) || unk_0xEAA5CEF8875FEEED(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) < 2f)
							{
								func_17(iParam0, 6);
							}
						}
					}
				}
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			
			case 6:
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else
				{
					func_7(iParam0, 1);
				}
				break;
			
			case 7:
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			
			case 8:
				func_16(iParam0, 0);
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					unk_0xFA57C719261AA55D(&(Local_100.f_2[iParam0 /*23*/].f_6), 3);
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
					{
						unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
					}
					func_17(iParam0, 4);
				}
				break;
			
			case 9:
			case 10:
				func_7(iParam0, 0);
				break;
			
			case 11:
				func_16(iParam0, 0);
				break;
			}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]) && !unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
	{
		if ((unk_0x05EFB6A616B6FADE(Local_100.f_190, iParam0) && !unk_0x05EFB6A616B6FADE(Local_100.f_190, iParam0 + 8)) && Local_100.f_2[iParam0 /*23*/].f_2 == -1)
		{
			if (Local_100.f_189 > 0)
			{
				Local_100.f_189 = (Local_100.f_189 - 1);
				unk_0xFA57C719261AA55D(&(Local_100.f_190), iParam0);
				unk_0x2BCFB39E86340DAA(&(Local_100.f_190), iParam0 + 8);
			}
		}
		if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
		{
			Local_100.f_2[iParam0 /*23*/].f_3 = -1;
		}
		if (Local_100.f_2[iParam0 /*23*/].f_4 != -1)
		{
			Local_100.f_2[iParam0 /*23*/].f_4 = -1;
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1) && func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 0)
			{
				if (unk_0xB0D49A1F9F054602(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), -1, 0) == unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1))
				{
					iVar0 = unk_0xD63FAD81FAF5E0CB(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]));
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 != -1)
						{
							iVar2 = unk_0xB0D49A1F9F054602(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), iVar1, 0);
							if (unk_0xDC5D81351D6A4DDB(iVar2))
							{
								if (!unk_0x4915F4759304D5CF(iVar2))
								{
									if (!func_9(iVar2, -828834893, 1) && !func_9(iVar2, 451360105, 1))
									{
										if (bParam1)
										{
											unk_0xCB482EF95FAE4D73(iVar2, 0, 0);
										}
										else
										{
											unk_0xCB482EF95FAE4D73(iVar2, 0, 64);
										}
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
	}
}

int func_8(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (unk_0xA60C975CBAB69F34(unk_0x1C3E3FC5D339FC8C(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 45f, 45f, 20f, 0, 1, 0) || unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 20))
		{
			unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
			if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 242628503) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF9D4EF1338E38AFB(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_11(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_12(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

int func_13(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return !func_14(unk_0xBEA1D935EBAA95F3(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
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

int func_15(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

void func_16(int iParam0, int iParam1)
{
	if ((Local_100.f_2[iParam0 /*23*/].f_2 != -1 || !func_11(Local_100.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0)) || iParam1)
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
		{
			unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_1), 0);
			unk_0xFA57C719261AA55D(&(Local_100.f_192), Local_100.f_2[iParam0 /*23*/].f_2);
			Local_100.f_2[iParam0 /*23*/].f_2 = -1;
			Local_100.f_187 = (Local_100.f_187 - 1);
		}
		Local_100.f_2[iParam0 /*23*/].f_8 = { 0f, 0f, 0f };
		Local_100.f_2[iParam0 /*23*/].f_11 = 0f;
		Local_100.f_2[iParam0 /*23*/].f_22 = 0;
		Local_100.f_2[iParam0 /*23*/].f_19 = 0;
		unk_0xFA57C719261AA55D(&(Local_100.f_2[iParam0 /*23*/].f_6), 3);
		iLocal_1723[iParam0] = 0;
	}
}

void func_17(int iParam0, int iParam1)
{
	Local_100.f_2[iParam0 /*23*/].f_7 = iParam1;
}

void func_18(int iParam0)
{
	if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]))
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
		{
			if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)))
			{
				if (!func_24(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!unk_0xE0D7C57D5AAFC187(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, 3f, 3f, 3f, 0))
					{
						if (func_19(iParam0, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24, 0))
						{
							func_17(iParam0, 1);
						}
					}
				}
			}
		}
	}
	if (func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		Local_100.f_188++;
	}
	if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
	{
		if (!unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)))
		{
			unk_0xFA57C719261AA55D(&(Local_100.f_192), Local_100.f_2[iParam0 /*23*/].f_2);
			Local_100.f_2[iParam0 /*23*/].f_2 = -1;
			Local_100.f_187 = (Local_100.f_187 - 1);
		}
	}
	if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (!unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_3)))
		{
			Local_100.f_2[iParam0 /*23*/].f_3 = -1;
		}
	}
}

int func_19(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	if (func_23(Global_2524719.f_785) && func_23(Global_2524719.f_786))
	{
		if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]))
		{
			if (func_22(&(Local_100.f_2[iParam0 /*23*/]), Global_2524719.f_785, Param1, uParam4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				if (bParam5)
				{
					unk_0x92DDCF53AA47A63D(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), uParam4);
					unk_0x4299736016AECE26(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), unk_0x3201284584C7CD83(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 2f, 0f, 0f), 1, 0, 0, 1);
				}
				unk_0x99F546A9200EA026(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1084227584);
				unk_0xDED567E98204A7F0(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1);
				unk_0x9F3F43B8D4BC7F09(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0, 0);
				unk_0x3FB92963BD0665CB(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1);
				unk_0x938ED824EDC6E866(Local_100.f_2[iParam0 /*23*/], 1);
			}
		}
		if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (func_21(&(Local_100.f_2[iParam0 /*23*/].f_1), Local_100.f_2[iParam0 /*23*/], 25, Global_2524719.f_786, -1, 1, 1, 1))
			{
				unk_0x625FB4B0328423D9(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 5f);
				unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 1);
				unk_0xA5DE74AE39867B03(Global_2524719.f_785);
				unk_0xA5DE74AE39867B03(Global_2524719.f_786);
				unk_0xEAF1F3E17588C851(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0);
				unk_0x6AEE0EBD7CA3D63F(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 1);
				unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 29, 1);
				unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 251, 1);
				unk_0xC35C0EB12F3FFC86(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 0);
				unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 5, 0);
				unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 17, 1);
				unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 512, 0);
				unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF2DB717A73826179((200f * Global_262145.f_153)), 0);
				func_20(&uLocal_2640, 8, unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "FM_TAXI", 0, 1);
				unk_0x938ED824EDC6E866(Local_100.f_2[iParam0 /*23*/].f_1, 1);
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]) || !unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
	{
		return 0;
	}
	unk_0xFA57C719261AA55D(&(Local_100.f_2[iParam0 /*23*/].f_6), 4);
	return 1;
}

void func_20(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

int func_21(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	if (!unk_0x83A1DA4E6C55E952(uParam1))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xADF0D7F44D12DC49(unk_0x91A7C8CA5E332C03(unk_0xBEA1D935EBAA95F3(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(unk_0x8A5B683BACF7B78C(*uParam0), iParam7);
		if (unk_0xCC1BBE3267AB0DC9(unk_0x8A5B683BACF7B78C(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F0E621C9C312804(iParam1))
	{
		return 0;
	}
	if (!unk_0xA495A83E4287FE76(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x01AF8CB960828C2B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x48CFBECB146FD1A1(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xDC5D81351D6A4DDB(iVar1))
	{
		*uParam0 = unk_0xC48DA15CF8CAF4F9(iVar1);
		Global_2524719.f_6178 = iVar1;
		if (unk_0x83A1DA4E6C55E952(*uParam0))
		{
			if (bParam15)
			{
				unk_0x3D126A1799B1C84D(iVar1, 1);
			}
			unk_0xEAF1F3E17588C851(iVar1, iParam10);
			if (unk_0xCC1BBE3267AB0DC9(iVar1))
			{
				if (bParam8)
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 1);
				}
				else
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x9F5CBEB0A0ADA5A7(*uParam0, unk_0xD4E735F4B6A956AC(), 1);
				}
			}
			unk_0x42B5518F103DB03E(iVar1, iParam9);
			unk_0x1E0A3C6D89CE975D(iVar1, 1);
			if (bParam12)
			{
				unk_0xAEE3221D0EC483AD(iVar1);
				unk_0xBA75315E0F357DD3(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

bool func_23(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

int func_24(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_25()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = iLocal_2805;
	if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
	{
		iVar1 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
		uVar2 = unk_0xEE978C39384D834F(iVar1);
		if (!func_10(iVar1, 1, 1))
		{
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					func_16(iVar3, 0);
				}
				if (Local_100.f_2[iVar3 /*23*/].f_3 == iVar0)
				{
					func_32(iVar3);
					Local_100.f_2[iVar3 /*23*/].f_3 = -1;
					if (func_31(&uLocal_1735))
					{
						func_30(&uLocal_1735);
					}
				}
				iVar3++;
			}
		}
		else
		{
			if (!unk_0x05EFB6A616B6FADE(Local_100.f_192, iVar0) && unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_1, 0))
			{
				if (func_29())
				{
					func_28(iVar0);
					unk_0x2BCFB39E86340DAA(&(Local_100.f_192), iVar0);
				}
				else
				{
					unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_1), 0);
				}
			}
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_4.f_2, 18))
				{
					if (Local_100.f_2[iVar3 /*23*/].f_2 != -1)
					{
						func_16(iVar3, 0);
					}
					unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 18);
				}
				if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_4.f_3, iVar3))
				{
					if (Local_100.f_2[iVar3 /*23*/].f_7 != 11)
					{
						if (Local_100.f_2[iVar3 /*23*/].f_7 != 9)
						{
							if (Local_100.f_2[iVar3 /*23*/].f_7 != 10)
							{
								Local_100.f_2[iVar3 /*23*/].f_4 = iVar0;
								func_17(iVar3, 9);
								func_16(iVar3, 1);
							}
						}
					}
				}
				if (!func_15(Local_100.f_2[iVar3 /*23*/].f_1) && func_13(Local_100.f_2[iVar3 /*23*/]))
				{
					if (Local_100.f_2[iVar3 /*23*/].f_3 == -1)
					{
						if (Local_295[iVar0 /*44*/].f_4.f_1 == iVar3 && Local_100.f_2[iVar3 /*23*/].f_7 == 8)
						{
							func_17(iVar3, 3);
							if (Local_100.f_2[iVar3 /*23*/].f_2 == -1)
							{
								Local_100.f_2[iVar3 /*23*/].f_2 = iVar0;
							}
							Local_295[iVar0 /*44*/].f_4.f_1 = -1;
						}
						if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_3, (0 + iVar3)))
						{
							if ((Local_100.f_2[iVar3 /*23*/].f_7 == 8 || Local_100.f_2[iVar3 /*23*/].f_7 == 1) || Local_100.f_2[iVar3 /*23*/].f_7 == 2)
							{
								func_17(iVar3, 3);
							}
						}
						if ((((func_27(iVar1, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iVar3 /*23*/])) && Local_100.f_2[iVar3 /*23*/].f_7 != 6) && Local_100.f_2[iVar3 /*23*/].f_7 != 9) && Local_100.f_2[iVar3 /*23*/].f_7 != 10) && Local_100.f_2[iVar3 /*23*/].f_7 != 11)
						{
							unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
							unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							if (Local_100.f_2[iVar3 /*23*/].f_2 != -1)
							{
								unk_0xFA57C719261AA55D(&(Local_100.f_192), Local_100.f_2[iVar3 /*23*/].f_2);
								Local_100.f_2[iVar3 /*23*/].f_2 = -1;
								Local_100.f_187 = (Local_100.f_187 - 1);
							}
							Local_100.f_2[iVar3 /*23*/].f_3 = iVar0;
						}
						else if (unk_0x10E54C268D1B3FED(uVar2, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iVar3 /*23*/]), 120f, 120f, 120f, 0, 1, 0))
						{
							if (Local_100.f_2[iVar3 /*23*/].f_2 == -1)
							{
								unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							}
							else if (Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							}
							unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
						}
						else if (unk_0x10E54C268D1B3FED(uVar2, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iVar3 /*23*/]), 300f, 300f, 300f, 0, 1, 0))
						{
							unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
						}
						if (unk_0x91347D2A80F38492(iVar1) > 0)
						{
							if (Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x2BCFB39E86340DAA(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							}
						}
					}
					else if (Local_100.f_2[iVar3 /*23*/].f_3 == iVar0)
					{
						if (!func_27(iVar1, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iVar3 /*23*/])))
						{
							func_16(iVar3, 1);
							Local_100.f_2[iVar3 /*23*/].f_3 = -1;
						}
						else
						{
							if (Local_100.f_2[iVar3 /*23*/].f_7 == 5 || Local_100.f_2[iVar3 /*23*/].f_7 == 7)
							{
								if (!unk_0x05EFB6A616B6FADE(Local_100.f_2[iVar3 /*23*/].f_6, 3) && unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_4.f_2, 3))
								{
									unk_0x2BCFB39E86340DAA(&(Local_100.f_2[iVar3 /*23*/].f_6), 3);
									unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 4);
									unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 5);
									func_17(iVar3, 5);
								}
								else if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_4.f_2, 4))
								{
									unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 4);
									func_17(iVar3, 7);
								}
								else if (Local_100.f_2[iVar3 /*23*/].f_7 == 7)
								{
									if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_4.f_2, 5))
									{
										unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 5);
										func_17(iVar3, 5);
									}
								}
							}
							if ((Local_100.f_2[iVar3 /*23*/].f_7 == 5 || Local_100.f_2[iVar3 /*23*/].f_7 == 7) || Local_100.f_2[iVar3 /*23*/].f_7 == 4)
							{
								if (Local_100.f_2[iVar3 /*23*/].f_19 != Local_295[iVar0 /*44*/].f_4.f_15)
								{
									Local_100.f_2[iVar3 /*23*/].f_8 = { Local_295[iVar0 /*44*/].f_4.f_5 };
									Local_100.f_2[iVar3 /*23*/].f_11 = Local_295[iVar0 /*44*/].f_4.f_14;
									Local_100.f_2[iVar3 /*23*/].f_19 = Local_295[iVar0 /*44*/].f_4.f_15;
									func_17(iVar3, 5);
									unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 20);
								}
							}
						}
						unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
						unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
					}
					if (Local_295[iVar0 /*44*/].f_4.f_19 == iVar3 && Local_100.f_2[iVar3 /*23*/].f_22 == 0)
					{
						if (Local_295[iVar0 /*44*/].f_4.f_18 != 0)
						{
							Local_100.f_2[iVar3 /*23*/].f_22 = Local_295[iVar0 /*44*/].f_4.f_18;
							Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_19 = -1;
							Local_295[iVar0 /*44*/].f_4.f_18 = 0;
						}
					}
					else if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_4.f_2, 6))
					{
						Local_100.f_2[iVar3 /*23*/].f_22 = 0;
						Local_295[iVar0 /*44*/].f_4.f_19 = -1;
						unk_0xFA57C719261AA55D(&(Local_295[iVar0 /*44*/].f_4.f_2), 6);
					}
				}
				else if (unk_0x05EFB6A616B6FADE(Local_295[iVar0 /*44*/].f_1, 0) || Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
					unk_0xFA57C719261AA55D(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
				}
				else
				{
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar3 /*23*/].f_1))
					{
						func_26(&(Local_100.f_2[iVar3 /*23*/].f_1));
					}
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar3 /*23*/]))
					{
						func_26(&(Local_100.f_2[iVar3 /*23*/]));
					}
					if (Local_100.f_2[iVar3 /*23*/].f_2 == -1)
					{
						func_16(iVar3, 0);
					}
					if (Local_100.f_2[iVar3 /*23*/].f_3 != -1)
					{
						func_16(iVar3, 1);
						Local_100.f_2[iVar3 /*23*/].f_3 = -1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_26(var uParam0)
{
	var uVar0;
	
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		uVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x69C8D2CAA0701F42(&uVar0);
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xD63FAD81FAF5E0CB(iParam1) + 1;
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x588F5E48C78F1C73(iParam1, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xB0D49A1F9F054602(iParam1, (iVar0 - 1), 0);
				if (!unk_0x4915F4759304D5CF(iVar2))
				{
					if (unk_0xC085874FDE5FE33A(iVar2))
					{
						if (unk_0xEE978C39384D834F(iParam0) == iVar2)
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Local_100.f_2[iVar0 /*23*/].f_2 == -1 && !unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/]))
		{
			Local_100.f_2[iVar0 /*23*/].f_2 = iParam0;
			Local_100.f_187++;
			Local_100.f_189++;
			unk_0x2BCFB39E86340DAA(&(Local_100.f_190), iVar0);
			unk_0xFA57C719261AA55D(&(Local_100.f_190), iVar0 + 8);
			unk_0xFA57C719261AA55D(&(Local_295[iParam0 /*44*/].f_1), 0);
			unk_0x2BCFB39E86340DAA(&(Local_100.f_2[iVar0 /*23*/].f_6), 4);
			return;
		}
		iVar0++;
	}
}

int func_29()
{
	if (Local_100.f_187 >= 8 || Local_100.f_188 >= 8)
	{
		return 0;
	}
	return 1;
}

void func_30(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_31(var uParam0)
{
	return uParam0->f_1;
}

void func_32(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_4 = Local_1753[iLocal_1739 /*3*/];
	if (unk_0xCE3CB618AFE55EFB(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_4))
	{
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_1753[iVar0 /*3*/] = { Var1 };
		iVar0++;
	}
	iLocal_1738 = 0;
}

int func_33(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_34(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_35(uParam0, 0, 0);
		}
	}
}

void func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

void func_36()
{
	int iVar0;
	
	unk_0xFA57C719261AA55D(&(Global_2524719.f_784), 1);
	func_314();
	func_313();
	func_292(iLocal_2639);
	func_212();
	func_187(iLocal_2639);
	func_186(iLocal_2639);
	func_184(iLocal_2639);
	if (iLocal_2636 != iLocal_2639)
	{
		func_187(iLocal_2636);
		func_186(iLocal_2636);
		func_184(iLocal_2636);
	}
	iLocal_2639++;
	if (iLocal_2639 == 8)
	{
		fLocal_2638 = 99999f;
		iLocal_2636 = iLocal_2637;
		iLocal_2639 = 0;
	}
	func_43(iLocal_2636);
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
				{
					func_37(1, 1, 1);
				}
				iVar0++;
			}
			func_37(0, 0, 0);
		}
	}
	else
	{
		if (unk_0xA08F374047C715E8(unk_0xA0A7426498D312A1()))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
				{
					func_37(1, 1, 1);
				}
				iVar0++;
			}
		}
		func_37(1, 1, 0);
	}
}

void func_37(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<3> Var1;
	
	if (((((((Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 != -1 || !func_11(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5, 0f, 0f, 0f, 0)) || iLocal_1911 != iLocal_1910) || Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_18 != 0) || Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_19 != -1) || unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 10)) || unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 17)) || iParam2)
	{
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 2);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 3);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 4);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 5);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 7);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 10);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 11);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 12);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 13);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 14);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 20);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 21);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 22);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 23);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 24);
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 25);
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_14 = 0f;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15 = 0;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 = -1;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_1 = -1;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_34 = -1;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_29 = 0f;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_33 = 0f;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_35 = -1;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_36 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Local_1753[iVar0 /*3*/] = { Var1 };
			iVar0++;
		}
		iLocal_1739 = 0;
		iLocal_1741 = 0;
		iLocal_1742 = 0;
		bLocal_1906 = false;
		Global_105123 = 0;
		fLocal_1916 = unk_0xBBDA792448DB5A89(iLocal_1910);
		iLocal_1911 = iLocal_1910;
		iLocal_1912 = iLocal_1910;
		func_30(&uLocal_1914);
		fLocal_1913 = fLocal_1913;
		Local_1917 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_18 = 0;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_19 = -1;
		func_40(1, -1);
		unk_0xB9514DB95C310944(1);
		unk_0x4DC885EA8D6AF7FC("ODDJOBS@TAXI@DRIVER");
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_4 = 0;
		func_30(&uLocal_1733);
	}
	if (iParam0 == 1)
	{
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_24 = 0f;
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_29 = 0f;
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 2))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_784), 2);
	}
	if (unk_0xA41DC7627220D3D5("taxi"))
	{
		unk_0x9625FCE863F284BD("taxi");
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_1743))
	{
		unk_0xC0AC848E56940C34(&iLocal_1743);
		unk_0xA5DE74AE39867B03(iLocal_1744);
	}
	if (unk_0x37B568B777BC65F9(uLocal_2619))
	{
		unk_0x930701157A4B9374(uLocal_2619, 0);
		unk_0x77F0486CE0E598D5(uLocal_2619, 0);
		unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
		func_38();
	}
	if (iLocal_2618 == 0)
	{
		iLocal_2618 = 1;
	}
	if (iParam1 == 1 && Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1 != 0)
	{
		Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1 = 0;
	}
}

void func_38()
{
	func_39(4, 0, -1);
	unk_0x7DB63355DA38F64E();
	unk_0x32EC0D046A39CAA9();
	unk_0x8AD2A838D0635CFC(0);
	unk_0x559BDFBB7312C0FB(iLocal_2620);
	unk_0x6791B0852A0B022D(0);
}

void func_39(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1368245.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_1368245.f_1046), iParam0);
			}
			else
			{
				unk_0xFA57C719261AA55D(&(Global_1368245.f_1046), iParam0);
			}
			break;
	}
}

void func_40(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_42(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17367.f_8091)
	{
		unk_0xE355C64541455AE8(15);
		Global_17367.f_8091 = 0;
	}
	unk_0x332297B49C4256C3(0f);
	if (Global_17367.f_5626[iVar0])
	{
		unk_0x93DA13E8C75A3B00(9, 0);
		Global_17367.f_5626[iVar0] = 0;
	}
	if (Global_17367.f_5612[iVar0])
	{
		unk_0x91DE928AD81C6F57("CommonMenu");
		Global_17367.f_5612[iVar0] = 0;
	}
	if (Global_17367.f_5619[iVar0])
	{
		unk_0x91DE928AD81C6F57("MPShopSale");
		Global_17367.f_5619[iVar0] = 0;
	}
	if (bParam0)
	{
		func_41(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_41(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			unk_0x86795B44CE5FE021(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_42(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x4C9BACA8D249CB13() && unk_0xB592B7A61F21E7A5())
		{
			iParam2 = unk_0xB88D86B8D5987AF4();
		}
	}
	StringCopy(&cVar0, unk_0x61D2332983ACC05C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xFEB6EEC0545AF7AA(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17367.f_5719[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17367.f_5719[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17367.f_5719[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1) && func_13(Local_100.f_2[iParam0 /*23*/]))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0))
			{
				func_176(iParam0);
				func_169(iParam0);
				func_49(iParam0);
			}
			else
			{
				func_44(iParam0);
			}
		}
		else
		{
			func_44(iParam0);
		}
	}
	else
	{
		func_44(iParam0);
	}
}

void func_44(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(uLocal_1704, (0 + iParam0)))
	{
		unk_0xFA57C719261AA55D(&uLocal_1704, (0 + iParam0));
		if (func_31(&uLocal_1735))
		{
			func_30(&uLocal_1735);
		}
		if (func_48("TXM_H02"))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3, (0 + iParam0)))
	{
		if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			iLocal_1907 = 0;
		}
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3), (0 + iParam0));
	}
	func_46(&(uLocal_1714[iParam0]));
	if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 == iParam0)
	{
		func_37(1, 1, 0);
	}
	func_45(iParam0);
}

void func_45(int iParam0)
{
	if (unk_0xCE3CB618AFE55EFB(uLocal_1705[iParam0]))
	{
		unk_0xE1623437A3194332(&(uLocal_1705[iParam0]));
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 12);
	}
}

void func_46(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_47(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_48(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_49(int iParam0)
{
	if (((unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0) && !unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715())) && !unk_0x97B2B0016AD3C7C6(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1))) && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3, iParam0))
	{
		unk_0x6D68030C791111E0("ODDJOBS@TAXI@DRIVER");
		if (func_168(iParam0) && unk_0x39C2D9AB77873F84("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_100.f_2[iParam0 /*23*/].f_7 == 6)
			{
				if (unk_0x37B568B777BC65F9(uLocal_2619))
				{
					unk_0x930701157A4B9374(uLocal_2619, 0);
					unk_0x77F0486CE0E598D5(uLocal_2619, 0);
					unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
					func_38();
				}
				if (unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
				{
					func_146(iParam0);
				}
			}
			else
			{
				if ((unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0 || Local_100.f_2[iParam0 /*23*/].f_7 == 9) || Local_100.f_2[iParam0 /*23*/].f_7 == 10)
				{
					func_7(iParam0, 0);
				}
				func_86(iParam0);
			}
			if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 != iParam0)
			{
				Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 = iParam0;
				unk_0x2BCFB39E86340DAA(&(Global_2524719.f_784), 2);
			}
			func_80(iParam0);
			func_79(iParam0);
		}
		func_55(iParam0);
		unk_0xDB3170D9CA83AF72(0);
		unk_0xDB3170D9CA83AF72(1);
		unk_0xDB3170D9CA83AF72(2);
		func_54();
		func_53();
		unk_0x3B7A32E04BBE59A5(unk_0xA19140A5C42D8715(), 2, 0);
		unk_0xD481A812073CCF02(0, 99, 1);
		unk_0xD481A812073CCF02(0, 100, 1);
		unk_0xD481A812073CCF02(0, 25, 1);
		unk_0xD481A812073CCF02(0, 73, 1);
		unk_0xD481A812073CCF02(0, 200, 1);
		func_52();
		if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
		{
			unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 376, 1);
		}
		if (func_51() || func_50(0))
		{
			unk_0xD481A812073CCF02(0, 75, 1);
		}
	}
	else if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 == iParam0)
	{
		if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
			{
				if ((Local_100.f_2[iParam0 /*23*/].f_7 != 9 && Local_100.f_2[iParam0 /*23*/].f_7 != 10) && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3, iParam0))
				{
					func_146(iParam0);
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3), iParam0);
			}
		}
		func_37(1, 1, 0);
		func_32(iParam0);
		if (func_31(&uLocal_1735))
		{
			func_30(&uLocal_1735);
		}
	}
}

int func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return Global_68494;
}

void func_52()
{
	Global_2535232.f_258 = 1;
}

void func_53()
{
	Global_2524719.f_4519 = 0;
}

void func_54()
{
	unk_0x2BCFB39E86340DAA(&Global_2384, 4);
}

void func_55(int iParam0)
{
	char* sVar0;
	
	if (func_69())
	{
		if (unk_0x0FA486DE15EB3004(uLocal_1920))
		{
			if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
			{
				sVar0 = unk_0x7391BCD755BD8577(2, 218, 1);
				if (!unk_0x3CAC2741CC1A631F(sLocal_2621, sVar0))
				{
					sLocal_2621 = sVar0;
					iLocal_2617 = 1;
				}
			}
			if (iLocal_2617 == 1)
			{
				Local_2608 = { func_68() };
				func_66(&uLocal_1921);
				func_65(0, 75, "TXM_EXIT", &uLocal_1921, 0, 358);
				if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
				{
					if (Local_100.f_2[iParam0 /*23*/].f_7 != 6)
					{
						if (Global_105123 == 1 || bLocal_1906 == 1)
						{
							if (iLocal_1738 > 1)
							{
								func_65(2, 218, "TXM_CDES", &uLocal_1921, 0, 358);
							}
						}
						if (!bLocal_1906)
						{
							if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15 != Local_1753[iLocal_1739 /*3*/])
							{
								func_65(0, 176, "TXM_SLCT", &uLocal_1921, 0, 358);
							}
						}
						else if (Local_100.f_2[iParam0 /*23*/].f_7 == 5)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 4))
							{
								func_65(0, 177, "TXM_STOP", &uLocal_1921, 0, 358);
							}
							if (bLocal_1904)
							{
								func_65(0, 176, "TXM_SLCT", &uLocal_1921, 0, 358);
							}
							if (!unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 3) && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 3))
							{
								if (Local_100.f_2[iParam0 /*23*/].f_7 == 5)
								{
									func_65(0, 179, "TXM_HURY", &uLocal_1921, 0, 358);
								}
							}
						}
						else if (Local_100.f_2[iParam0 /*23*/].f_7 == 7)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 5))
							{
								func_65(0, 177, "TXM_STRT", &uLocal_1921, 0, 358);
							}
							if (bLocal_1904)
							{
								func_65(0, 176, "TXM_SLCT", &uLocal_1921, 0, 358);
							}
						}
						if (unk_0x0B9F814BC8D14042(2))
						{
							func_65(2, 199, "SPEC_PAUSE", &uLocal_1921, 0, 358);
						}
					}
				}
				iLocal_2617 = 0;
			}
			unk_0x7AF4A31FB51D0A4D(unk_0x351670D4BE8B10E6());
			unk_0xF997724AC8A71261(0);
			func_64(1);
			func_63(1);
			func_56(&uLocal_1920, &Local_2608, &uLocal_1921, func_62(&uLocal_1921));
		}
		else
		{
			uLocal_1920 = unk_0xB00CD6895BDB01A0("instructional_buttons");
		}
	}
	else
	{
		unk_0x86795B44CE5FE021(&uLocal_1920);
		iLocal_2617 = 1;
	}
}

void func_56(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x1BFD4084A40BF7E1(2))
	{
		*uParam2 = 0;
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			if (unk_0x47C01C0E6F4C1D06())
			{
				unk_0x31A9E530D137684F(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x233A5B4A35140C6B(0);
				unk_0x271C1332F482646C();
			}
			unk_0x31A9E530D137684F(*uParam0, "CLEAR_ALL");
			unk_0x271C1332F482646C();
		}
		func_61(uParam2);
	}
	if (Global_1315696 < 2)
	{
		func_63(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x0FA486DE15EB3004(*uParam0))
		{
			*uParam0 = unk_0xB00CD6895BDB01A0("instructional_buttons");
		}
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			unk_0xEEBD65BF77C64926(*uParam0, "CLEAR_ALL");
			if (unk_0x47C01C0E6F4C1D06())
			{
				unk_0x31A9E530D137684F(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x233A5B4A35140C6B(1);
				unk_0x271C1332F482646C();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x05EFB6A616B6FADE(uParam2->f_676, iVar0))
				{
					unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(iVar0);
					if (!unk_0x05EFB6A616B6FADE(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_60(unk_0x7391BCD755BD8577(iVar1, iVar2, 1));
						if (iVar3 < 358)
						{
							func_60(unk_0x7391BCD755BD8577(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_60(unk_0xDD4AF94EF709B596(uVar4, uVar5, 1));
					}
					if (unk_0x05EFB6A616B6FADE(uParam2->f_674, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x90182C5171067861(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xCDA87E1DA52C8C9D(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD481829E3E36543B();
					}
					else if (unk_0x05EFB6A616B6FADE(uParam2->f_675, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xC327C023FDA37F2E(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD481829E3E36543B();
					}
					else
					{
						func_59(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (unk_0x05EFB6A616B6FADE(uParam2->f_678, iVar0))
						{
							unk_0x233A5B4A35140C6B(1);
							unk_0x380580A1A1667F69(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x233A5B4A35140C6B(0);
							unk_0x380580A1A1667F69(358);
						}
					}
					unk_0x271C1332F482646C();
				}
				else
				{
					unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(iVar0);
					func_60(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x429D45A6C6520026(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_60(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x05EFB6A616B6FADE(uParam2->f_674, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x90182C5171067861(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xCDA87E1DA52C8C9D(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD481829E3E36543B();
					}
					else if (unk_0x05EFB6A616B6FADE(uParam2->f_675, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xC327C023FDA37F2E(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD481829E3E36543B();
					}
					else
					{
						func_59(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						unk_0x233A5B4A35140C6B(0);
						unk_0x380580A1A1667F69(358);
					}
					unk_0x271C1332F482646C();
				}
				iVar0++;
			}
			unk_0x31A9E530D137684F(*uParam0, "SET_MAX_WIDTH");
			unk_0xD8B5988E85F72BE5(uParam2->f_686);
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x380580A1A1667F69(0);
			unk_0x271C1332F482646C();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_58(*uParam0, uParam1);
	}
	func_57();
}

void func_57()
{
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
}

void func_58(var uParam0, var uParam1)
{
	unk_0xE9F9BA9108F437C7(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_59(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_60(var uParam0)
{
	unk_0x0BAAED7962F122D5(uParam0);
}

void func_61(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_62(var uParam0)
{
	return uParam0->f_679;
}

void func_63(int iParam0)
{
	Global_1315696 = iParam0;
}

void func_64(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_65(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	unk_0x2BCFB39E86340DAA(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		unk_0x2BCFB39E86340DAA(&(uParam3->f_678), iVar0);
		if (iParam5 < 358)
		{
		}
	}
	uParam3->f_680++;
}

void func_66(var uParam0)
{
	func_67(uParam0);
	uParam0->f_679 = 1;
}

void func_67(var uParam0)
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
		uParam0->f_1[iVar0 /*56*/].f_54 = 358;
		uParam0->f_1[iVar0 /*56*/].f_55 = 358;
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

struct<9> func_68()
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

int func_69()
{
	if (!func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		return 0;
	}
	if (!func_74(1, 1))
	{
		return 0;
	}
	if (func_73())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
	{
		return 0;
	}
	if (func_72(0))
	{
		return 0;
	}
	if (!func_70())
	{
		return 0;
	}
	return 1;
}

int func_70()
{
	if (func_71() == 0)
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	return Global_1312466.f_18;
}

bool func_72(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_73()
{
	return Global_93284.f_328 > 0;
}

int func_74(int iParam0, int iParam1)
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_78())
		{
			return 0;
		}
	}
	if (func_77())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_50(0))
		{
			return 0;
		}
	}
	if (func_76(8, -1))
	{
		return 0;
	}
	if (unk_0x2F161E7C6520CC0A())
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (unk_0x4EAEDDFEDE3BEE19())
	{
		return 0;
	}
	if (Global_1312782)
	{
		return 0;
	}
	if (Global_1574174)
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_1312857;
}

bool func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

bool func_77()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

bool func_78()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

void func_79(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 11))
	{
		if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_18 == 0)
		{
			if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_18 = 26;
				Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_19 = iParam0;
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 11);
			}
		}
	}
}

void func_80(int iParam0)
{
	if (bLocal_1906)
	{
		if (func_85(&uLocal_1914, 10000, 0))
		{
			if (unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 3) || unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 3))
			{
				fLocal_1916 = (fLocal_1916 + (fLocal_1913 * 1.5f));
			}
			else
			{
				fLocal_1916 = (fLocal_1916 + fLocal_1913);
			}
			func_30(&uLocal_1914);
		}
		if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Local_1917, 0) > 50f)
		{
			if (unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 3) || unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 3))
			{
				fLocal_1916 = (fLocal_1916 + (fLocal_1913 * 1.5f));
			}
			else
			{
				fLocal_1916 = (fLocal_1916 + fLocal_1913);
			}
			func_30(&uLocal_1914);
			Local_1917 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
		}
		iLocal_1911 = unk_0x11E019C8F43ACC8A(fLocal_1916);
		if (iLocal_1911 > 5000)
		{
			iLocal_1911 = 5000;
		}
		if (iLocal_1911 != iLocal_1912)
		{
			unk_0x31A9E530D137684F(uLocal_1745, "SET_TAXI_PRICE");
			unk_0x380580A1A1667F69(iLocal_1911);
			unk_0x271C1332F482646C();
			iLocal_1912 = iLocal_1911;
			func_83("\ntaxiService currentJourneyPrice = ");
			func_81(iLocal_1911);
			func_83("\n");
		}
	}
}

void func_81(int iParam0)
{
	func_82(iParam0);
}

void func_82(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_83(char* sParam0)
{
	func_84(sParam0);
}

void func_84(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, sParam0))
	{
	}
}

int func_85(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_35(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_86(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
	{
		if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]) && unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/]) && unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/].f_1))
			{
				unk_0x938ED824EDC6E866(Local_100.f_2[iParam0 /*23*/], 0);
				unk_0x938ED824EDC6E866(Local_100.f_2[iParam0 /*23*/].f_1, 0);
				if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 10))
				{
					func_138(iParam0);
					func_111(iParam0);
				}
				if (func_110(iParam0))
				{
					func_87(iParam0);
					iLocal_2617 = 1;
				}
			}
			else
			{
				if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/]))
				{
					unk_0x938ED824EDC6E866(Local_100.f_2[iParam0 /*23*/], 0);
				}
				else if (unk_0xEDB53D3BCBFC886E(Local_100.f_2[iParam0 /*23*/]))
				{
				}
				if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/].f_1))
				{
					unk_0x938ED824EDC6E866(Local_100.f_2[iParam0 /*23*/].f_1, 0);
				}
			}
		}
	}
	else
	{
		unk_0xB9514DB95C310944(1);
		if (unk_0x37B568B777BC65F9(uLocal_2619))
		{
			unk_0x930701157A4B9374(uLocal_2619, 0);
			unk_0x77F0486CE0E598D5(uLocal_2619, 0);
			unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
			func_38();
		}
	}
}

void func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	
	if (!iLocal_1742)
	{
		iVar0 = func_109();
		iLocal_1741 = iVar0;
		iLocal_1723[iParam0] = 0;
		iLocal_1742 = 1;
	}
	if (func_95(iParam0))
	{
		iVar1 = 0;
		unk_0x31A9E530D137684F(uLocal_1745, "CLEAR_TAXI_DISPLAY");
		unk_0x271C1332F482646C();
		iVar1 = 0;
		while (iVar1 < iLocal_1738)
		{
			if (!unk_0xCE3CB618AFE55EFB(Local_1753[iVar1 /*3*/]))
			{
				iLocal_2618 = 1;
				iLocal_1723[iParam0] = 0;
				return;
			}
			if (func_94(Local_1753[iVar1 /*3*/]) == -1)
			{
				iLocal_2618 = 1;
				iLocal_1723[iParam0] = 0;
				return;
			}
			if (func_93(unk_0x1C8DAFF0573242F7(Local_1753[iVar1 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
			{
				iLocal_2618 = 1;
				iLocal_1723[iParam0] = 0;
				return;
			}
			unk_0x31A9E530D137684F(uLocal_1745, "ADD_TAXI_DESTINATION");
			unk_0x380580A1A1667F69(iVar1);
			unk_0x380580A1A1667F69(unk_0x2A3262E0744CC26E(Local_1753[iVar1 /*3*/]));
			if ((func_94(Local_1753[iVar1 /*3*/]) == 492 || func_94(Local_1753[iVar1 /*3*/]) == 475) && unk_0xF4EBF186645FC104(Local_1753[iVar1 /*3*/]) == 0)
			{
				func_92(unk_0xECFB9F03690741B8(Local_1753[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x380580A1A1667F69(iVar2);
				unk_0x380580A1A1667F69(iVar3);
				unk_0x380580A1A1667F69(iVar4);
			}
			else
			{
				unk_0x1C828C4226A9FADF(unk_0xF4EBF186645FC104(Local_1753[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x380580A1A1667F69(iVar2);
				unk_0x380580A1A1667F69(iVar3);
				unk_0x380580A1A1667F69(iVar4);
			}
			iVar9 = func_90(Local_1753[iVar1 /*3*/]);
			if (iVar9 == -1)
			{
				unk_0x390B339C943A8A54("STRING");
				unk_0x3290014981450EEA(Local_1753[iVar1 /*3*/]);
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("STRING");
				unk_0x4FDA9E6EF359F8A9(func_88(iVar9));
				unk_0xD481829E3E36543B();
			}
			if (unk_0x7E568B4236F45F53(Local_1753[iVar1 /*3*/]) == 2)
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA2EA4BA455370F3C(unk_0x3E6A9ABACA8E5C3B(Local_1753[iVar1 /*3*/]))))
				{
					Var6 = { unk_0xE2BBD32891C18569(unk_0xA2EA4BA455370F3C(unk_0x3E6A9ABACA8E5C3B(Local_1753[iVar1 /*3*/])), 1) };
				}
			}
			else if (unk_0x7E568B4236F45F53(Local_1753[iVar1 /*3*/]) == 1)
			{
				if (unk_0x1095F403F52B42E1(unk_0x3E6A9ABACA8E5C3B(Local_1753[iVar1 /*3*/]), 0))
				{
					Var6 = { unk_0xE2BBD32891C18569(unk_0x3E6A9ABACA8E5C3B(Local_1753[iVar1 /*3*/]), 1) };
				}
			}
			else
			{
				Var6 = { unk_0x1C8DAFF0573242F7(Local_1753[iVar1 /*3*/]) };
			}
			func_59(unk_0x86701529BD460750(Var6));
			if (((((((func_94(Local_1753[iVar1 /*3*/]) == 40 || func_94(Local_1753[iVar1 /*3*/]) == 357) || func_94(Local_1753[iVar1 /*3*/]) == 475) || func_94(Local_1753[iVar1 /*3*/]) == 492) || func_94(Local_1753[iVar1 /*3*/]) == 557) || func_94(Local_1753[iVar1 /*3*/]) == 590) || func_94(Local_1753[iVar1 /*3*/]) == 591) || func_94(Local_1753[iVar1 /*3*/]) == 614)
			{
				iVar10 = 0;
				while (iVar10 < 124)
				{
					iVar11 = iVar10;
					if (func_11(Var6, Global_1049778[iVar11 /*1951*/].f_3[0 /*3*/], 0))
					{
						iVar10 = 124;
						unk_0x390B339C943A8A54("STRTNM1");
						unk_0x4FDA9E6EF359F8A9(&(Global_1049778[iVar11 /*1951*/].f_16));
						unk_0xD481829E3E36543B();
						func_59("");
					}
					iVar10++;
				}
			}
			else if (Local_1753[iVar1 /*3*/].f_2 == 0)
			{
				if (Local_1753[iVar1 /*3*/].f_1 != 0)
				{
					unk_0x390B339C943A8A54("STRTNM1");
					unk_0xBFE4763B290E86E9(Local_1753[iVar1 /*3*/].f_1);
					unk_0xD481829E3E36543B();
					func_59("");
				}
			}
			else
			{
				unk_0x390B339C943A8A54("STRTNM2");
				unk_0xBFE4763B290E86E9(Local_1753[iVar1 /*3*/].f_1);
				unk_0xBFE4763B290E86E9(Local_1753[iVar1 /*3*/].f_2);
				unk_0xD481829E3E36543B();
			}
			if (((iLocal_2622 == 8 || iLocal_2622 == 9) || iLocal_2622 == 10) || iLocal_2622 == 12)
			{
				unk_0x233A5B4A35140C6B(1);
			}
			else
			{
				unk_0x233A5B4A35140C6B(0);
			}
			unk_0x271C1332F482646C();
			if (bLocal_1906)
			{
				if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15 == Local_1753[iVar1 /*3*/])
				{
					iLocal_1739 = iVar1;
				}
			}
			else if (unk_0xCE3CB618AFE55EFB(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_4))
			{
				if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_4 == Local_1753[iVar1 /*3*/])
				{
					iLocal_1739 = iVar1;
				}
			}
			iVar1++;
		}
		if (bLocal_1906)
		{
			unk_0x31A9E530D137684F(uLocal_1745, "SHOW_TAXI_DESTINATION");
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(uLocal_1745, "HIGHLIGHT_DESTINATION");
			unk_0x380580A1A1667F69(iLocal_1739);
			unk_0x271C1332F482646C();
		}
		else
		{
			unk_0x31A9E530D137684F(uLocal_1745, "SET_TAXI_PRICE");
			unk_0x380580A1A1667F69(iLocal_1911);
			if (((iLocal_2622 == 8 || iLocal_2622 == 9) || iLocal_2622 == 10) || iLocal_2622 == 12)
			{
				unk_0x233A5B4A35140C6B(1);
			}
			else
			{
				unk_0x233A5B4A35140C6B(0);
			}
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(uLocal_1745, "SHOW_TAXI_DESTINATION");
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(uLocal_1745, "HIGHLIGHT_DESTINATION");
			unk_0x380580A1A1667F69(iLocal_1739);
			unk_0x271C1332F482646C();
		}
		if (unk_0xCE3CB618AFE55EFB(Local_1753[iLocal_1739 /*3*/]))
		{
			Var12 = { unk_0x1C8DAFF0573242F7(Local_1753[iLocal_1739 /*3*/]) };
			if ((!func_24(Var12) && unk_0x37B568B777BC65F9(uLocal_2619)) && unk_0xC3553172354FFB69(uLocal_2619))
			{
				unk_0x274643B565204371(Var12.f_0, Var12.f_1);
			}
		}
		iLocal_2618 = 0;
		unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 10);
	}
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_89(iParam0, 0);
			break;
		
		case 8:
			return func_89(iParam0, 0);
			break;
		
		case 9:
			return func_89(iParam0, 0);
			break;
		
		case 10:
			return func_89(iParam0, 0);
			break;
		
		case 11:
			return func_89(iParam0, 0);
			break;
		
		case 12:
			return func_89(iParam0, 0);
			break;
		
		case 13:
			return func_89(iParam0, 0);
			break;
		
		case 14:
			return func_89(iParam0, 0);
			break;
		
		case 15:
			return func_89(iParam0, 0);
			break;
		
		case 16:
			return func_89(iParam0, 0);
			break;
		
		case 17:
			return func_89(iParam0, 0);
			break;
		
		case 18:
			return func_89(iParam0, 0);
			break;
		
		case 19:
			return func_89(iParam0, 0);
			break;
		
		case 20:
			return func_89(iParam0, 0);
			break;
		
		case 21:
			return func_89(iParam0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_89(iParam0, 0);
			break;
		
		case 40:
			return func_89(iParam0, 0);
			break;
		
		case 41:
			return func_89(iParam0, 0);
			break;
		
		case 42:
			return func_89(iParam0, 0);
			break;
		
		case 43:
			return func_89(iParam0, 0);
			break;
		
		case 44:
			return func_89(iParam0, 0);
			break;
		
		case 45:
			return func_89(iParam0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar1 = iVar0;
		iVar2 = func_91(iVar1);
		if (Global_25834[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_92(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x493DDADBC14A1274(iParam0, 24, 31);
	*uParam2 = unk_0x493DDADBC14A1274(iParam0, 16, 23);
	*uParam3 = unk_0x493DDADBC14A1274(iParam0, 8, 15);
	*uParam4 = unk_0x493DDADBC14A1274(iParam0, 0, 7);
}

int func_93(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x69C0BB7D03EE045D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(var uParam0)
{
	var uVar0;
	
	if (unk_0xCE3CB618AFE55EFB(uParam0))
	{
		uVar0 = unk_0x2A3262E0744CC26E(uParam0);
	}
	return uVar0;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	switch (iLocal_1723[iParam0])
	{
		case 0:
			func_32(iParam0);
			break;
		
		case 1:
			func_96(iParam0, iLocal_98, 0);
			func_96(iParam0, 77, 0);
			func_96(iParam0, 79, 0);
			func_96(iParam0, 293, 0);
			func_96(iParam0, iLocal_99, 0);
			func_96(iParam0, 225, 0);
			func_96(iParam0, 348, 0);
			break;
		
		case 2:
			func_96(iParam0, 110, 1);
			break;
		
		case 3:
			func_96(iParam0, 119, 1);
			func_96(iParam0, 103, 1);
			break;
		
		case 4:
			func_96(iParam0, 122, 1);
			func_96(iParam0, 109, 1);
			break;
		
		case 5:
			func_96(iParam0, 311, 1);
			func_96(iParam0, 90, 1);
			break;
		
		case 6:
			func_96(iParam0, 304, 1);
			break;
		
		case 7:
			func_96(iParam0, 310, 1);
			break;
		
		case 8:
			func_96(iParam0, 309, 1);
			break;
		
		case 9:
			func_96(iParam0, 176, 1);
			break;
		
		case 10:
			func_96(iParam0, 305, 1);
			break;
		
		case 11:
			func_96(iParam0, 84, 1);
			break;
		
		case 12:
			func_96(iParam0, 94, 1);
			break;
		
		case 13:
			func_96(iParam0, 52, 1);
			break;
		
		case 14:
			func_96(iParam0, 135, 1);
			break;
		
		case 15:
			func_96(iParam0, 40, 0);
			func_96(iParam0, 357, 0);
			func_96(iParam0, 475, 0);
			func_96(iParam0, 492, 0);
			func_96(iParam0, 473, 0);
			func_96(iParam0, 496, 0);
			func_96(iParam0, 497, 0);
			func_96(iParam0, 498, 0);
			func_96(iParam0, 499, 0);
			func_96(iParam0, 557, 0);
			func_96(iParam0, 590, 0);
			func_96(iParam0, 591, 0);
			func_96(iParam0, 500, 0);
			func_96(iParam0, 614, 0);
			break;
		
		case 16:
			func_96(iParam0, 121, 1);
			break;
		
		case 17:
			func_96(iParam0, 71, 1);
			break;
		
		case 18:
			func_96(iParam0, 72, 1);
			break;
		
		case 19:
			func_96(iParam0, 446, 1);
			break;
		
		case 20:
			func_96(iParam0, 73, 1);
			break;
		
		case 21:
			func_96(iParam0, 75, 1);
			break;
		
		case 22:
			iLocal_1741 = func_109();
			if (unk_0xCE3CB618AFE55EFB(Local_1753[iLocal_1739 /*3*/]))
			{
				iVar0 = 0;
				while (iVar0 < 50)
				{
					if (unk_0xCE3CB618AFE55EFB(Local_1753[iVar0 /*3*/]))
					{
						if (Local_1753[iLocal_1739 /*3*/] == Local_1753[iVar0 /*3*/])
						{
							if (func_11(unk_0x1C8DAFF0573242F7(Local_1753[iLocal_1739 /*3*/]), unk_0x1C8DAFF0573242F7(Local_1753[iVar0 /*3*/]), 0))
							{
								Var2 = { unk_0x1C8DAFF0573242F7(Local_1753[iVar0 /*3*/]) };
								if ((!func_24(Var2) && unk_0x37B568B777BC65F9(uLocal_2619)) && unk_0xC3553172354FFB69(uLocal_2619))
								{
									unk_0x274643B565204371(Var2.f_0, Var2.f_1);
								}
								iLocal_1739 = iVar0;
								iVar0 = 50;
								iVar1 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 == 0)
				{
					iLocal_1739 = 0;
				}
			}
			else
			{
				iLocal_1739 = 0;
			}
			break;
	}
	if (iLocal_1723[iParam0] >= 22)
	{
		return 1;
	}
	else
	{
		iLocal_1723[iParam0]++;
	}
	return 0;
}

void func_96(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	bool bVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	uVar4 = unk_0x5DA399C64755FB10(iParam1);
	while (unk_0xCE3CB618AFE55EFB(uVar4))
	{
		if (iLocal_1738 < 50)
		{
			if (func_108(uVar4))
			{
				if (func_107(Var0))
				{
					if (!func_106(&uVar4))
					{
						bVar3 = false;
						switch (iParam1)
						{
							case 77:
							case joaat("mpsv_lp0_31"):
							case 293:
							case 225:
							case 348:
							case 90:
							case 109:
							case 122:
							case 119:
							case 311:
							case 103:
							case 279:
							case 304:
							case 310:
							case 309:
							case 38:
							case 176:
							case 305:
							case 84:
							case 94:
							case 126:
							case 52:
							case 99:
							case 102:
							case 135:
							case 136:
							case 40:
							case 357:
							case 110:
							case 121:
							case 71:
							case 72:
							case 446:
							case 73:
							case 111:
							case 75:
							case 475:
							case 473:
							case 492:
							case 496:
							case 497:
							case 498:
							case 499:
							case 500:
							case 557:
							case 590:
							case 591:
							case 614:
							case default:
						}
						bVar3 = true;
						Var5 = { unk_0x1C8DAFF0573242F7(uVar4) };
						if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 16)
						{
							if (iParam1 == 110)
							{
								if (Var5.f_1 < 200f)
								{
									bVar3 = true;
								}
								else
								{
									bVar3 = false;
								}
							}
						}
						if (iParam1 == iLocal_99)
						{
							bVar3 = true;
						}
						if (func_11(Var5, 0f, 0f, 0f, 0))
						{
							bVar3 = false;
						}
						else if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Var5, 250f, 250f, 250f, 0, 1, 0))
						{
							bVar3 = false;
						}
						else if (iParam1 != iLocal_99)
						{
							iVar8 = 0;
							while (iVar8 < 1)
							{
								if (func_105(Var5, Global_2524719.f_236[iVar8 /*3*/], 200f, 1) && !func_11(Global_2524719.f_236[iVar8 /*3*/], 0f, 0f, 0f, 0))
								{
									bVar3 = false;
								}
								iVar8++;
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_108(uVar4))
							{
								if ((((unk_0x7E568B4236F45F53(uVar4) == 4 || unk_0x7E568B4236F45F53(uVar4) == 5) || unk_0x7E568B4236F45F53(uVar4) == 1) || unk_0x7E568B4236F45F53(uVar4) == 6) || unk_0x7E568B4236F45F53(uVar4) == 3)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								if (func_108(uVar4))
								{
									func_104(iParam0, &uVar4, &Var0);
									func_97(Var0, bParam2, iParam0);
								}
							}
						}
					}
				}
			}
		}
		uVar4 = unk_0x9FDB378E1AE6ADB4(iParam1);
	}
}

void func_97(struct<3> Param0, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_94(Local_1753[iVar0 /*3*/]) == func_94(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		else if (iVar0 == iLocal_1738)
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_1738)
		{
			if (func_94(Local_1753[iVar0 /*3*/]) == func_94(Param0.f_0))
			{
				if (func_101(Param0, Local_1753[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_100(Param0, iVar0, iParam4);
						iVar0 = 50;
						return;
					}
					else
					{
						func_98(Param0, iVar0, iParam4);
						iLocal_1738++;
						iVar0 = 50;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 50;
					return;
				}
				else
				{
					func_98(Param0, iVar0, iParam4);
					iLocal_1738++;
					iVar0 = 50;
					return;
				}
			}
			else
			{
				func_98(Param0, iVar0, iParam4);
				iLocal_1738++;
				iVar0 = 50;
				return;
			}
		}
		else
		{
			func_98(Param0, iVar0, iParam4);
			iLocal_1738++;
			iVar0 = 50;
			return;
		}
		iVar0++;
	}
}

void func_98(struct<3> Param0, int iParam3, int iParam4)
{
	func_83("INSERT_NEW_DESTINATION_TO_LIST - start \n");
	func_99(iParam3);
	Local_1753[iParam3 /*3*/] = { Param0 };
	if (func_94(Local_1753[iParam3 /*3*/]) == unk_0x09990A2B9C8684F0())
	{
		if (Local_100.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0x1C8DAFF0573242F7(Local_1753[iParam3 /*3*/]) };
		}
	}
}

void func_99(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	func_83("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_81(iParam0);
	func_83("\n");
	iVar0 = 49;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_1753[(iVar0 - 1) /*3*/] };
		Local_1753[iVar0 /*3*/] = { Var1 };
		iVar0 = (iVar0 - 1);
	}
}

void func_100(struct<3> Param0, int iParam3, int iParam4)
{
	func_83("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \n");
	Local_1753[iParam3 /*3*/] = { Param0 };
	if (func_94(Local_1753[iParam3 /*3*/]) == unk_0x09990A2B9C8684F0())
	{
		if (Local_100.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0x1C8DAFF0573242F7(Local_1753[iParam3 /*3*/]) };
		}
	}
}

int func_101(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_102(uParam0) < func_102(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_102(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xCE3CB618AFE55EFB(uParam0))
		{
			Var0 = { func_103(uParam0) - unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		}
	}
	return unk_0x652D2EEEF1D3E62C(Var0);
}

Vector3 func_103(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = unk_0x7E568B4236F45F53(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0x3E6A9ABACA8E5C3B(uParam0);
		if (unk_0x1095F403F52B42E1(iVar3, 0))
		{
			Var0 = { unk_0xE2BBD32891C18569(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0xA2EA4BA455370F3C(unk_0x3E6A9ABACA8E5C3B(uParam0));
		if (!unk_0x4915F4759304D5CF(iVar4))
		{
			Var0 = { unk_0xE2BBD32891C18569(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0x63F4756F241D86B8(unk_0x3E6A9ABACA8E5C3B(uParam0));
		if (unk_0xDC5D81351D6A4DDB(iVar5))
		{
			Var0 = { unk_0xE2BBD32891C18569(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0x1C8DAFF0573242F7(uParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0xDCDC5A624E09D6F2(uParam0);
		if (unk_0xF93654E07E20E3CF(uVar6))
		{
			Var0 = { unk_0x40C0A7A7BE434951(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0x1C8DAFF0573242F7(uParam0) };
	}
	return Var0;
}

void func_104(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = *uParam1;
	if (!*uParam2 == Global_105106)
	{
		unk_0x962E14F78102F9C7(func_103(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		unk_0x962E14F78102F9C7(Local_100.f_2[iParam0 /*23*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_105(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x499324B3EF19C288(Param0, Param3, iParam7) <= fParam6;
}

int func_106(var uParam0)
{
	if (!unk_0xCE3CB618AFE55EFB(*uParam0))
	{
		return 1;
	}
	if (Global_105103 == *uParam0)
	{
		return 1;
	}
	if (unk_0xECFB9F03690741B8(*uParam0) == 39)
	{
		return 1;
	}
	if (func_11(unk_0x1C8DAFF0573242F7(*uParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_94(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_107(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (!func_94(uParam0) == iLocal_98)
	{
		fVar0 = func_102(uParam0);
		if (fVar0 > 40f)
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

int func_108(var uParam0)
{
	int iVar0;
	
	if (unk_0xCE3CB618AFE55EFB(uParam0))
	{
		iVar0 = unk_0xFF5DE658073C371E(uParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_109()
{
	int iVar0;
	
	iVar0 = unk_0xD56096C1FAFB1971();
	if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 12))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xC9D9444186B5A374() > 500)
	{
		iVar4 = unk_0x346268472B5F4E43();
		if (iLocal_2622 != iVar4)
		{
			if (((iLocal_2622 == 8 || iLocal_2622 == 9) || iLocal_2622 == 10) || iLocal_2622 == 12)
			{
				if (((iVar4 != 8 && iVar4 != 9) && iVar4 != 10) && iVar4 != 12)
				{
					iLocal_2622 = iVar4;
					iLocal_2618 = 1;
					iLocal_1723[iParam0] = 0;
					unk_0x5AE11BC36633DE4E(0);
				}
			}
			else if (((iVar4 == 8 || iVar4 == 9) || iVar4 == 10) || iVar4 == 12)
			{
				iLocal_2622 = iVar4;
				iLocal_2618 = 1;
				iLocal_1723[iParam0] = 0;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (!iLocal_2618)
		{
			iVar5 = func_109();
			if (iLocal_1741 != iVar5)
			{
				iLocal_2618 = 1;
				iLocal_1723[iParam0] = 0;
				iLocal_1741 = iVar5;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (!iLocal_2618)
		{
			if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
			{
				if (Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 == -1)
				{
					uVar3 = unk_0x5DA399C64755FB10(unk_0x09990A2B9C8684F0());
					if (unk_0xCE3CB618AFE55EFB(uVar3))
					{
						Var0 = { unk_0x1C8DAFF0573242F7(uVar3) };
						if (unk_0x2A488C176D52CCA5(Var0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1)) > 250f)
						{
							iLocal_2618 = 1;
							iLocal_1723[iParam0] = 0;
							Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				else if (unk_0xCE3CB618AFE55EFB(Local_1753[Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]))
				{
					if (func_94(Local_1753[Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) == unk_0x09990A2B9C8684F0())
					{
						Var0 = { unk_0x1C8DAFF0573242F7(Local_1753[Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) };
						if (!func_11(Var0, Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36, 0))
						{
							iLocal_2618 = 1;
							iLocal_1723[iParam0] = 0;
							Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
					else
					{
						iLocal_2618 = 1;
						iLocal_1723[iParam0] = 0;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
						unk_0x5AE11BC36633DE4E(0);
					}
				}
				else
				{
					iLocal_2618 = 1;
					iLocal_1723[iParam0] = 0;
					Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
					Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
					unk_0x5AE11BC36633DE4E(0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
	}
	return iLocal_2618;
}

void func_111(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_69())
	{
		if (iLocal_2618 == 0)
		{
			func_137(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0x0B9F814BC8D14042(2))
			{
				unk_0x9EA8CBEA7355649E(2, 241);
				unk_0x9EA8CBEA7355649E(2, 242);
				unk_0x9EA8CBEA7355649E(2, 180);
				unk_0x9EA8CBEA7355649E(2, 181);
			}
			if (iVar0 > 28 || unk_0x53E955948D35BDB5(2, 180))
			{
				if (!iLocal_1907)
				{
					func_135();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1907 = 1;
				}
			}
			else
			{
				iLocal_1907 = 0;
			}
			if (iVar0 < -28 || unk_0xDF0ADAD7E584090D(2, 181))
			{
				if (!iLocal_1908)
				{
					func_133();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1908 = 1;
				}
			}
			else
			{
				iLocal_1908 = 0;
			}
		}
		if (!bLocal_1906)
		{
			if (iLocal_1738 > 0)
			{
				unk_0xB9514DB95C310944(1);
				if (iLocal_2618 == 0)
				{
					if (unk_0xDF0ADAD7E584090D(0, 176))
					{
						if (unk_0xCE3CB618AFE55EFB(Local_1753[iLocal_1739 /*3*/]))
						{
							if (func_132(unk_0x1C8DAFF0573242F7(Local_1753[iLocal_1739 /*3*/])))
							{
								iLocal_1909 = 0;
								Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15 = { Local_1753[iLocal_1739 /*3*/] };
								Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5 = { unk_0x1C8DAFF0573242F7(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15) };
								Local_1917 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
								func_30(&uLocal_1914);
								func_80(iParam0);
								bLocal_1906 = true;
								if (iLocal_2620 != 5)
								{
									unk_0x559BDFBB7312C0FB(iLocal_2620);
								}
								iLocal_1909 = 0;
								bLocal_1904 = false;
								iLocal_1905 = 1;
								iLocal_2617 = 1;
								func_114(2, iParam0);
								unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 4);
								unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 20);
								unk_0xFA57C719261AA55D(&(Local_100.f_2[iParam0 /*23*/].f_6), 3);
							}
							else
							{
								func_114(27, iParam0);
							}
						}
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 7) && bLocal_1906 == 0)
			{
				iLocal_2617 = 1;
				func_114(1, iParam0);
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 7);
			}
		}
		else
		{
			unk_0xB9514DB95C310944(0);
			if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 4) && Local_100.f_2[iParam0 /*23*/].f_7 == 5)
			{
				if (unk_0xDF0ADAD7E584090D(0, 177))
				{
					unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 4);
					unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 5);
					iLocal_2617 = 1;
					func_114(24, iParam0);
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 5) && Local_100.f_2[iParam0 /*23*/].f_7 == 7)
			{
				if (unk_0xDF0ADAD7E584090D(0, 177))
				{
					unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 5);
					unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 4);
					iLocal_2617 = 1;
					func_114(25, iParam0);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 3) && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 3))
			{
				if (Local_100.f_2[iParam0 /*23*/].f_7 == 5 && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 4))
				{
					unk_0xD481A812073CCF02(0, 99, 1);
					unk_0xD481A812073CCF02(0, 100, 1);
					if (unk_0xDF0ADAD7E584090D(0, 179))
					{
						func_114(20, iParam0);
						func_113(iParam0, 0, 0);
						iLocal_2617 = 1;
						unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 3);
					}
				}
			}
			if (bLocal_1904)
			{
				if (func_112())
				{
					if (iLocal_2618 == 0)
					{
						if (unk_0xDF0ADAD7E584090D(0, 176))
						{
							if (unk_0xCE3CB618AFE55EFB(Local_1753[iLocal_1739 /*3*/]))
							{
								if (func_132(unk_0x1C8DAFF0573242F7(Local_1753[iLocal_1739 /*3*/])))
								{
									func_114(9, iParam0);
									if (iLocal_2620 != 5)
									{
										unk_0x559BDFBB7312C0FB(iLocal_2620);
									}
									iLocal_1909 = 0;
									bLocal_1904 = false;
									iLocal_1905 = 1;
									Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15 = { Local_1753[iLocal_1739 /*3*/] };
									Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5 = { unk_0x1C8DAFF0573242F7(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_15) };
									Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
									Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_33 = 0f;
									Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_34 = -1;
									unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 4);
									unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 20);
									func_113(iParam0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_2617 = 1;
								}
								else
								{
									func_114(27, iParam0);
								}
							}
						}
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (iLocal_2620 != 5)
					{
						unk_0x559BDFBB7312C0FB(iLocal_2620);
					}
					iLocal_1909 = 0;
					bLocal_1904 = false;
					iLocal_1905 = 1;
				}
			}
			else if (!iLocal_1905)
			{
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					if (iLocal_2620 != 5)
					{
						unk_0x559BDFBB7312C0FB(iLocal_2620);
					}
					bLocal_1904 = false;
					iLocal_1909 = 0;
					iLocal_1905 = 1;
				}
			}
		}
	}
	else
	{
		unk_0xB9514DB95C310944(1);
	}
	unk_0x7AF4A31FB51D0A4D(uLocal_1740);
	unk_0x0A74F1E9CF777638(4);
	unk_0xF997724AC8A71261(1);
	if (unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0))
	{
		unk_0x84829313FB8AC81C(uLocal_1745, fLocal_1749, fLocal_1750, fLocal_1747, fLocal_1748, 0, 0, 0, 255, 0);
	}
}

int func_112()
{
	if (unk_0x37B568B777BC65F9(uLocal_2619))
	{
		if (unk_0xC3553172354FFB69(uLocal_2619))
		{
			return 1;
		}
	}
	if (bLocal_1904 || !iLocal_1905)
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0, bool bParam1, bool bParam2)
{
	if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
	{
		if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (!unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1)))
			{
				if (bParam2)
				{
					unk_0x53FF9BDD8529ACD2(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
				}
				if (bParam1)
				{
					unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
				}
				else if (!unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
				{
					if (!unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						if (!unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
						}
					}
				}
			}
		}
	}
}

void func_114(int iParam0, int iParam1)
{
	if (!func_15(Local_100.f_2[iParam1 /*23*/].f_1))
	{
		if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam1 /*23*/].f_1))
		{
			if (!func_131())
			{
				if (iParam0 != 0)
				{
					func_20(&uLocal_2640, 8, unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam1 /*23*/].f_1), "FM_TAXI", 0, 1);
					if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
					{
						unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam1 /*23*/].f_1), unk_0xA19140A5C42D8715(), 4000, 0, 2);
					}
					switch (iParam0)
					{
						case 1:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 2:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 5:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 7:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 9:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 12:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 13:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 24:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 25:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 26:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 27:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 20:
							func_115(&uLocal_2640, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						}
				}
			}
			else
			{
				iParam0 = 0;
			}
		}
	}
}

int func_115(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 1;
	return func_116(sParam2, iParam3, 0);
}

int func_116(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_129();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_76(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_128();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_121();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_120())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
				}
			}
			if (func_119())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
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
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_118();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_117();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_129();
	}
	return 0;
}

void func_117()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(0);
	Global_15822 = 1;
}

void func_118()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_119()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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

void func_121()
{
	if (func_127(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_122();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

var func_122()
{
	func_123();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_123()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_126(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_125(unk_0xA19140A5C42D8715());
			if (func_124(iVar0) && (!func_127(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_124(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_124(int iParam0)
{
	return iParam0 < 3;
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_126(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_126(int iParam0)
{
	if (func_124(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_127(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

void func_129()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_131()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_132(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_24(Global_2524719.f_236[iVar0 /*3*/]))
		{
			if (func_105(Param0, Global_2524719.f_236[iVar0 /*3*/], 200f, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_133()
{
	if (bLocal_1906)
	{
		if (bLocal_1904)
		{
			func_134();
		}
		else if (!unk_0xC3553172354FFB69(uLocal_2619))
		{
			iLocal_1909 = 1;
			iLocal_2617 = 1;
		}
		else
		{
			func_134();
		}
		bLocal_1904 = true;
		iLocal_1905 = 1;
	}
	else
	{
		func_134();
	}
}

void func_134()
{
	struct<3> Var0;
	
	unk_0x31A9E530D137684F(uLocal_1745, "SET_INPUT_EVENT");
	unk_0x380580A1A1667F69(9);
	unk_0x271C1332F482646C();
	iLocal_1739++;
	if (iLocal_1739 > (iLocal_1738 - 1))
	{
		iLocal_1739 = 0;
	}
	if (unk_0xCE3CB618AFE55EFB(Local_1753[iLocal_1739 /*3*/]))
	{
		Var0 = { unk_0x1C8DAFF0573242F7(Local_1753[iLocal_1739 /*3*/]) };
		if (!func_24(Var0))
		{
			unk_0x274643B565204371(Var0.f_0, Var0.f_1);
		}
	}
}

void func_135()
{
	if (bLocal_1906)
	{
		if (bLocal_1904)
		{
			func_136();
		}
		else if (!unk_0xC3553172354FFB69(uLocal_2619))
		{
			iLocal_1909 = 1;
			iLocal_2617 = 1;
		}
		else
		{
			func_136();
		}
		bLocal_1904 = true;
		iLocal_1905 = 1;
	}
	else
	{
		func_136();
	}
}

void func_136()
{
	struct<3> Var0;
	
	unk_0x31A9E530D137684F(uLocal_1745, "SET_INPUT_EVENT");
	unk_0x380580A1A1667F69(8);
	unk_0x271C1332F482646C();
	iLocal_1739 = (iLocal_1739 - 1);
	if (iLocal_1739 < 0)
	{
		iLocal_1739 = (iLocal_1738 - 1);
		if (iLocal_1739 < 0)
		{
			iLocal_1739 = 0;
		}
	}
	if (unk_0xCE3CB618AFE55EFB(Local_1753[iLocal_1739 /*3*/]))
	{
		Var0 = { unk_0x1C8DAFF0573242F7(Local_1753[iLocal_1739 /*3*/]) };
		if (!func_24(Var0))
		{
			unk_0x274643B565204371(Var0.f_0, Var0.f_1);
		}
	}
}

void func_137(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x418992ECF9808661(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x418992ECF9808661(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x418992ECF9808661(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x418992ECF9808661(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x8CBB8AEBE6D8962B(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x8CBB8AEBE6D8962B(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x8CBB8AEBE6D8962B(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x8CBB8AEBE6D8962B(2, 221) * 127f));
		}
	}
}

void func_138(int iParam0)
{
	if (func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		if (!unk_0x37B568B777BC65F9(uLocal_2619))
		{
			if ((!func_145() && !func_76(8, -1)) && Local_100.f_2[iParam0 /*23*/].f_7 != 6)
			{
				uLocal_2619 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", 1);
				unk_0xABE3EC0FA16227B5(uLocal_2619, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_2629, 1);
				func_141(iParam0);
				unk_0x1456805A8A37DDD6(uLocal_2619, 1);
				unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
				unk_0x6791B0852A0B022D(1);
				iLocal_2617 = 1;
				Global_105123 = 1;
			}
		}
		else if (bLocal_1906)
		{
			if (!Global_105123)
			{
				if (iLocal_1909)
				{
					if (!unk_0xC3553172354FFB69(uLocal_2619))
					{
						iLocal_2620 = unk_0x0FBCD55C0F213948();
						if (iLocal_2620 != 5)
						{
							if (unk_0x0FBCD55C0F213948() != 4)
							{
								unk_0x559BDFBB7312C0FB(4);
							}
						}
						func_39(4, 1, -1);
						func_140();
						Global_105123 = 1;
						unk_0x930701157A4B9374(uLocal_2619, 1);
						unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
						unk_0x6791B0852A0B022D(1);
						func_141(iParam0);
						iLocal_2617 = 1;
						iLocal_1909 = 0;
						Global_105123 = 1;
					}
				}
			}
			if ((((unk_0x0FBCD55C0F213948() == 4 && !unk_0xDF0ADAD7E584090D(2, 23)) && !func_145()) && !func_76(8, -1)) && Local_100.f_2[iParam0 /*23*/].f_7 != 6)
			{
				if (unk_0xC3553172354FFB69(uLocal_2619))
				{
					func_141(iParam0);
				}
			}
			else if ((unk_0xC3553172354FFB69(uLocal_2619) && !func_145()) && !func_76(8, -1))
			{
				unk_0x930701157A4B9374(uLocal_2619, 0);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				if (iLocal_2620 != 5)
				{
					unk_0x559BDFBB7312C0FB(iLocal_2620);
				}
				iLocal_1909 = 0;
				bLocal_1904 = false;
				iLocal_1905 = 1;
				unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
				unk_0x6791B0852A0B022D(0);
				Global_105123 = 0;
				unk_0x7DB63355DA38F64E();
				unk_0x32EC0D046A39CAA9();
				unk_0x8AD2A838D0635CFC(0);
				iLocal_2617 = 1;
				func_139();
			}
		}
		else if (unk_0xC3553172354FFB69(uLocal_2619))
		{
			func_141(iParam0);
		}
	}
}

void func_139()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1738)
	{
		if (bLocal_1906)
		{
			if (iLocal_95 == Local_1753[iVar0 /*3*/])
			{
				iLocal_1739 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x31A9E530D137684F(uLocal_1745, "HIGHLIGHT_DESTINATION");
	unk_0x380580A1A1667F69(iLocal_1739);
	unk_0x271C1332F482646C();
}

void func_140()
{
	if (!func_24(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5))
	{
		if (unk_0x37B568B777BC65F9(uLocal_2619) && unk_0xC3553172354FFB69(uLocal_2619))
		{
			unk_0x274643B565204371(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5, Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_5.f_1);
			unk_0x9743219F54B6FCD1(0);
			unk_0x8AD2A838D0635CFC(1400);
		}
	}
}

void func_141(int iParam0)
{
	if (unk_0x37B568B777BC65F9(uLocal_2619))
	{
		func_142(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), &uLocal_2619, Local_2633);
		unk_0xF62A5A3CB8DB2402(uLocal_2619, fLocal_2632);
		unk_0x6F05C2B0A1DB4CAA(uLocal_2619, 0.01f);
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 13))
		{
			unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 13);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 13))
	{
		func_140();
		unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 13);
	}
	unk_0x3EC315DCEDBFDB25();
	unk_0x79117E5CC1A90AF9();
}

void func_142(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x37B568B777BC65F9(*uParam1))
		{
			Var0 = { unk_0x288B716F47E9BBBC(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_144(unk_0x3201284584C7CD83(iParam0, Param2) - unk_0x3201284584C7CD83(iParam0, Local_2629)) };
			func_143(Var6, &uVar3, &uVar4, 1);
			unk_0xC831502E35848BE4(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_143(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0xA0844D842FD4B009(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0xA0844D842FD4B009(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

Vector3 func_144(struct<3> Param0)
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

bool func_145()
{
	return Global_17226;
}

void func_146(int iParam0)
{
	var uVar0;
	
	if ((((Local_100.f_2[iParam0 /*23*/].f_7 == 2 || Local_100.f_2[iParam0 /*23*/].f_7 == 4) || Local_100.f_2[iParam0 /*23*/].f_7 == 5) || Local_100.f_2[iParam0 /*23*/].f_7 == 6) || Local_100.f_2[iParam0 /*23*/].f_7 == 7)
	{
		if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 2))
		{
			if (unk_0xB10F7FE89663CB5B(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
			{
				if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_3)))
				{
					if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
					{
						if (unk_0xEAA5CEF8875FEEED(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) > 5f)
						{
							func_114(12, iParam0);
							if (iLocal_1911 > iLocal_1910)
							{
								if (!unk_0x97B2B0016AD3C7C6(unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3), iParam0);
									unk_0x920EAF82B3E570B4(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_3)), 37, unk_0x1105C926E38D2066(2));
									if (!unk_0xE06AA0996C4E4E03())
									{
										func_167("TXI_HWRUN", -1);
									}
								}
							}
						}
						else if (iLocal_1911 > iLocal_1910)
						{
							if (func_164(unk_0xD4E735F4B6A956AC()) >= iLocal_1911 && unk_0x2FDEE33A82318C24(iLocal_1911, 0, 0, 1, -1))
							{
								if (Local_100.f_2[iParam0 /*23*/].f_7 == 6)
								{
									func_114(5, iParam0);
								}
								else
								{
									func_114(13, iParam0);
								}
								if (func_163())
								{
									func_150(-1834046564, iLocal_1911, &uVar0, 0, 1, 0);
								}
								else
								{
									func_147(-iLocal_1911, 0);
									unk_0xFC663E06162EC2D8(iLocal_1911, 0, 1);
								}
							}
							else
							{
								func_114(7, iParam0);
								if (!unk_0x97B2B0016AD3C7C6(unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3), iParam0);
									unk_0x920EAF82B3E570B4(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_3)), 37, unk_0x1105C926E38D2066(2));
									if (!unk_0xE06AA0996C4E4E03())
									{
										func_167("TXI_HNMON", -1);
									}
								}
							}
						}
						else
						{
							func_114(13, iParam0);
						}
						unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 2);
						func_30(&uLocal_1735);
					}
				}
			}
		}
	}
}

void func_147(int iParam0, int iParam1)
{
	func_149(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_148(iParam0, 0);
	}
}

void func_148(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_149(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_4 = iVar1;
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 = (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_148(iVar1, 0);
	}
}

void func_150(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_163())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_151(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_151(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_151(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_151(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_163())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_162()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_158(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_157(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_152(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_152(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_153(iParam0);
	}
}

void func_153(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_163())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_156(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_154(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_154(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_155(&(uParam0->f_13));
	func_155(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_155(var uParam0)
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

int func_156(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_157(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_158(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_163())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = uParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = uParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = uParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = uParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_159(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_159(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam80 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -313275313;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = { Param0.f_61 };
	Var0.f_2.f_32 = iParam80;
	iVar35 = func_161(Var0.f_1);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_160();
		unk_0x04F37AFC39D93909(1, &Var0, 35, iVar35);
	}
}

void func_160()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_161(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_162()
{
	return Global_1312736;
}

int func_163()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_164(int iParam0)
{
	var uVar0;
	
	uVar0 = func_165(iParam0);
	return uVar0;
}

int func_165(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return unk_0xCCADB536D2A7894D(-1);
		}
		else if (func_166(iParam0))
		{
			return Global_1589747[iParam0 /*790*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

void func_167(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

int func_168(int iParam0)
{
	char* sVar0;
	
	sVar0 = "taxi_display";
	if (unk_0xDC5D81351D6A4DDB(iLocal_1743))
	{
		return 1;
	}
	else
	{
		unk_0xCACEBBBEAD8F262E(iLocal_1744);
		uLocal_1745 = unk_0xB00CD6895BDB01A0(sVar0);
		if (unk_0x7FC99CCC73354033(iLocal_1744) && unk_0x0FA486DE15EB3004(uLocal_1745))
		{
			if (func_13(Local_100.f_2[iParam0 /*23*/]))
			{
				iLocal_1743 = unk_0xFCFC8CC5FF74580D(iLocal_1744, unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1), 0, 0, 0);
				unk_0x96B71B23D409A3DB(iLocal_1743, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), unk_0x4F9AEAB2CC029A5C(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), "Chassis"), Local_2623, Local_2626, 0, 0, 0, 0, 2, 1);
				if (!unk_0xA41DC7627220D3D5("taxi"))
				{
					unk_0xA998025A612085C5("taxi", 0);
					if (!unk_0x60A2E576E6A5E399(unk_0x8F474E419F56E48D(iLocal_1743)))
					{
						unk_0xDD449E57001A6C13(unk_0x8F474E419F56E48D(iLocal_1743));
					}
				}
				uLocal_1740 = unk_0x88A337F7A8A721B3("taxi");
				return 1;
			}
		}
	}
	return 0;
}

void func_169(int iParam0)
{
	var uVar0;
	
	if (func_172())
	{
		if (Local_100.f_2[iParam0 /*23*/].f_7 == 8 && unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 20f, 20f, 3f, 0, 1, 1))
		{
			unk_0x6D68030C791111E0("TAXI_HAIL");
			if (unk_0x39C2D9AB77873F84("TAXI_HAIL"))
			{
				if (uLocal_1714[iParam0] == -1)
				{
					func_171(&(uLocal_1714[iParam0]), 0, "TXM_H01", 1, 0, 0, 0);
				}
				if (func_170(uLocal_1714[iParam0], 1))
				{
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 7))
					{
						unk_0x2F89329397A277BC(&uVar0);
						unk_0x60EE6BD0F9B51FFC(0, 0);
						unk_0x3F01127ECD227890(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x301F42EEE3C40328(uVar0);
						unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), uVar0);
						unk_0x3A95A0A3221D4208(&uVar0);
					}
					else
					{
						unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
					}
					if (func_48("TXM_H01"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_1 = iParam0;
					unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 23);
					unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 22);
					func_46(&(uLocal_1714[iParam0]));
				}
			}
		}
		else
		{
			unk_0x4DC885EA8D6AF7FC("TAXI_HAIL");
			func_46(&(uLocal_1714[iParam0]));
		}
	}
	else
	{
		unk_0x4DC885EA8D6AF7FC("TAXI_HAIL");
		func_46(&(uLocal_1714[iParam0]));
	}
}

int func_170(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (unk_0x5CA3186381FC012C())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] == 1 && Global_36827[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36827[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36827[iVar0 /*32*/].f_5 = 1;
			Global_36827[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36827[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36827[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x47C3DC461C758C29())
	{
		if (!*uParam0 == -1)
		{
			func_46(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/] = 1;
			Global_36827[iVar0 /*32*/].f_1 = Global_37028;
			Global_37028++;
			Global_36827[iVar0 /*32*/].f_4 = 0;
			Global_36827[iVar0 /*32*/].f_29 = 0;
			Global_36827[iVar0 /*32*/].f_5 = 0;
			Global_36827[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36827[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36827[iVar0 /*32*/].f_6 = iParam3;
			Global_36827[iVar0 /*32*/].f_31 = unk_0xFCB3E4B16B4A9EC1();
			Global_36827[iVar0 /*32*/].f_7 = 0;
			Global_36827[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x429D45A6C6520026(sParam4))
			{
				Global_36827[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36827[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36827[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36827[iVar0 /*32*/].f_12 = 0;
				Global_36827[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36827[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_172()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_1 != -1)
		{
			return 0;
		}
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
		{
			return 0;
		}
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
		{
			return 0;
		}
		if (func_173(unk_0xD4E735F4B6A956AC(), 1))
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_73())
		{
			return 0;
		}
		if (func_78())
		{
			return 0;
		}
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_174(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_174(int iParam0)
{
	return func_175(iParam0);
}

bool func_175(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	if (((((((unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 10f, 10f, 2f, 0, 1, 0) && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) && unk_0xEAA5CEF8875FEEED(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) < 3f) && !func_183(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0)) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) <= 0) && Local_100.f_2[iParam0 /*23*/].f_7 != 9) && Local_100.f_2[iParam0 /*23*/].f_7 != 10) && Local_100.f_2[iParam0 /*23*/].f_7 != 11)
	{
		if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3, (0 + iParam0)))
		{
			func_137(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_1907 == 0)
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1907 = 1;
				}
			}
			else
			{
				iLocal_1907 = 0;
			}
			if (iLocal_1907 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 275)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
						unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3), (0 + iParam0));
						iLocal_1907 = 0;
					}
				}
			}
		}
		else
		{
			if (!unk_0x05EFB6A616B6FADE(uLocal_1704, (0 + iParam0)))
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					uVar5 = func_182(1190, -1, 0);
					if ((!unk_0x05EFB6A616B6FADE(uVar5, 7) || !unk_0x05EFB6A616B6FADE(uVar5, 8)) || !unk_0x05EFB6A616B6FADE(uVar5, 9))
					{
						if (func_85(&uLocal_1735, 20000, 0))
						{
							if ((((unk_0xDA3A4E46D189F555(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) == unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) && unk_0xE0DEA0A8127CF965(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1119092736)) && !unk_0x4374EED90C523366(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]))) && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) && !func_180(unk_0xD4E735F4B6A956AC()))
							{
								func_167("TXM_H02", -1);
								if (!unk_0x05EFB6A616B6FADE(uVar5, 7))
								{
									unk_0x2BCFB39E86340DAA(&uVar5, 7);
								}
								else if (!unk_0x05EFB6A616B6FADE(uVar5, 8))
								{
									unk_0x2BCFB39E86340DAA(&uVar5, 8);
								}
								else
								{
									unk_0x2BCFB39E86340DAA(&uVar5, 9);
								}
								func_178(1190, uVar5, -1, 1, 0);
								func_30(&uLocal_1735);
								unk_0x2BCFB39E86340DAA(&uLocal_1704, (0 + iParam0));
							}
						}
					}
				}
			}
			if (unk_0xD73B1037F6BD4B90(0, 23))
			{
				if (unk_0xC9D9444186B5A374() > 275)
				{
					if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3, (0 + iParam0)))
					{
						if (func_177(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) == 1)
						{
							if (unk_0x588F5E48C78F1C73(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1, 0))
							{
								iVar4 = 1;
							}
							else if (unk_0x588F5E48C78F1C73(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 2, 0))
							{
								iVar4 = 2;
							}
							else
							{
								iVar4 = 0;
							}
						}
						else if (unk_0x588F5E48C78F1C73(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 2, 0))
						{
							iVar4 = 2;
						}
						else if (unk_0x588F5E48C78F1C73(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0, 0))
						{
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
						unk_0xA2EBCD9385E56019(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), -1, iVar4, 1f, 8388608, 0);
						unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3), (0 + iParam0));
						iLocal_2617 = 1;
					}
				}
			}
			else
			{
				unk_0x5AE11BC36633DE4E(0);
			}
		}
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(uLocal_1704, (0 + iParam0)))
		{
			unk_0xFA57C719261AA55D(&uLocal_1704, (0 + iParam0));
			if (func_48("TXM_H02"))
			{
				unk_0x135C61E339DABBAC(1);
			}
		}
		if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3, (0 + iParam0)))
		{
			if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
				iLocal_1907 = 0;
			}
			unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_3), (0 + iParam0));
		}
	}
}

int func_177(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			Var0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0x3201284584C7CD83(iParam0, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0x3201284584C7CD83(iParam0, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (unk_0x652D2EEEF1D3E62C(Var9) < unk_0x652D2EEEF1D3E62C(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_178(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_179(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, uParam1, iParam3);
	}
}

int func_179(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_162();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

bool func_180(int iParam0)
{
	return func_181(iParam0) == joaat("weapon_minigun");
}

int func_181(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_544;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_179(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_183(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		iVar1 = unk_0xD63FAD81FAF5E0CB(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x588F5E48C78F1C73(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xB0D49A1F9F054602(iParam0, (iVar0 - 1), 0);
				if (unk_0x4915F4759304D5CF(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_184(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
	{
		if (Local_100.f_2[iParam0 /*23*/].f_3 == -1)
		{
			if (Local_100.f_2[iParam0 /*23*/].f_7 == 3)
			{
				if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
				{
					if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1))
					{
						if (func_13(Local_100.f_2[iParam0 /*23*/]))
						{
							if (unk_0xE0FD180CD24C0B67(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0))
							{
								func_185(iParam0);
								return;
							}
						}
					}
				}
			}
		}
	}
	func_45(iParam0);
}

void func_185(int iParam0)
{
	if (!unk_0xCE3CB618AFE55EFB(uLocal_1705[iParam0]))
	{
		uLocal_1705[iParam0] = unk_0x6A15DD6A863D5E27(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]));
		unk_0x7DB79A42AADE120F(uLocal_1705[iParam0], 198);
		unk_0xC4F12E446CCE89F5(uLocal_1705[iParam0], "TXM_BLIP");
		unk_0x0798CD089167D3C1(uLocal_1705[iParam0], 1);
		unk_0xE14767EA16F946A4(uLocal_1705[iParam0], 7000);
		unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 12);
	}
}

void func_186(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 1))
	{
		if (unk_0xCE3CB618AFE55EFB(uLocal_1705[iParam0]))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_784), 1);
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1, 0))
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
		{
			unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1), 0);
		}
	}
}

void func_187(int iParam0)
{
	var uVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	bool bVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1) && func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/].f_1) && unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/]))
		{
			iVar3 = 3;
			Var4 = { unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0) };
			if (Local_100.f_2[iParam0 /*23*/].f_7 != 11)
			{
				if (Local_100.f_2[iParam0 /*23*/].f_7 != 9)
				{
					if (Local_100.f_2[iParam0 /*23*/].f_7 != 10)
					{
						unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 251, 1);
						if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3, iParam0))
						{
							if (func_210(iParam0))
							{
								func_37(1, 1, 1);
								unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3), iParam0);
							}
						}
						if (Local_100.f_2[iParam0 /*23*/].f_7 != 8)
						{
							unk_0xF6B71D006EE5D90F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1);
						}
					}
				}
			}
			func_209(iParam0);
			switch (Local_100.f_2[iParam0 /*23*/].f_7)
			{
				case 0:
					break;
				
				case 1:
					if (Local_100.f_2[iParam0 /*23*/].f_2 != -1 && Local_100.f_2[iParam0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
					{
						if (func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							if (func_205(iParam0, func_208(unk_0xD4E735F4B6A956AC()), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), 250))
							{
								Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
								unk_0xE49301B2B6F420DE(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x8F474E419F56E48D(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
						{
							iVar1 = iLocal_1751;
							unk_0xE49301B2B6F420DE(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x8F474E419F56E48D(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
						}
						unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
					}
					break;
				
				case 2:
					if (Local_100.f_2[iParam0 /*23*/].f_2 != -1 && Local_100.f_2[iParam0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
					{
						if (!unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
						{
							if (func_202(Var4, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29)))
							{
								unk_0x7B19AF4B9DCA6BAB(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 0.5f);
								if (unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 14))
								{
									unk_0xACD687595DC10DD1(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 0, 60f, 0);
								}
								else
								{
									unk_0xACD687595DC10DD1(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 3, 60f, 0);
								}
								iLocal_2617 = 1;
								unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
							}
						}
						unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
					}
					break;
				
				case 3:
					if (Local_100.f_2[iParam0 /*23*/].f_2 != -1 && Local_100.f_2[iParam0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
					{
						if (!unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 23))
						{
							unk_0x5ED0FDD822BD1865(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 2500, unk_0xFEB6EEC0545AF7AA("NORMAL"), 0);
							unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
						}
						if (!unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 22))
						{
							unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
							iLocal_2617 = 1;
							unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						}
						else if (!unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
						{
							if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x885DF2160199F9B8(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) != 5)
							{
								unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
							}
						}
					}
					break;
				
				case 4:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
					{
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33 = 0f;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = -1;
					}
					if (func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						func_113(iParam0, 0, 0);
					}
					unk_0x6D68030C791111E0("ODDJOBS@TAXI@DRIVER");
					if (unk_0x39C2D9AB77873F84("ODDJOBS@TAXI@DRIVER"))
					{
						if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0x5F21CBE9EE983D4F(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0x53FF9BDD8529ACD2(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
								unk_0x3F01127ECD227890(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
							}
						}
						else if (!unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
								{
									unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Var4, 5, 5f, 1076627627, -1f, 1f, 1);
								}
							}
							else if (unk_0x588F5E48C78F1C73(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0, 0))
							{
								unk_0x53FF9BDD8529ACD2(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
								unk_0x3F01127ECD227890(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 5:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
					{
						if (func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0) && func_11(Local_100.f_2[iParam0 /*23*/].f_8, Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_5, 0))
						{
							if (Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 == -1)
							{
								if (func_201(Local_100.f_2[iParam0 /*23*/].f_8, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0) || func_191(Local_100.f_2[iParam0 /*23*/].f_8, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0))
								{
									unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									func_113(iParam0, 0, 0);
									iLocal_2617 = 1;
								}
								Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
							}
							else
							{
								iVar8 = unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]);
								if (func_188(&iVar8, Local_100.f_2[iParam0 /*23*/].f_8, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34), 1000))
								{
									unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
									func_113(iParam0, 0, 0);
									iLocal_2617 = 1;
								}
							}
						}
						if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							unk_0x6D68030C791111E0("ODDJOBS@TAXI@DRIVER");
							if (unk_0x39C2D9AB77873F84("ODDJOBS@TAXI@DRIVER"))
							{
								unk_0x53FF9BDD8529ACD2(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
								unk_0x3F01127ECD227890(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
						}
						else if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0x39AA033597761444(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
						{
							if (!func_8(iParam0))
							{
								if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 242628503, 1))
								{
									fVar2 = 15f;
									iVar1 = iLocal_1751;
									iVar3 = 3;
									if (unk_0x05EFB6A616B6FADE(Local_100.f_2[iParam0 /*23*/].f_6, 3) || unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 3))
									{
										fVar2 = 20f;
										iVar1 = iLocal_1752;
									}
									if (unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 14))
									{
										iVar3 = 0;
									}
									func_113(iParam0, 1, 1);
									unk_0x7B19AF4B9DCA6BAB(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 0.5f);
									unk_0x2F89329397A277BC(&uVar0);
									unk_0x990EEDE7014A4F2F(0, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, fVar2, iVar1, 45f);
									unk_0xACD687595DC10DD1(0, unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33, iVar3, 60f, 1);
									unk_0x301F42EEE3C40328(uVar0);
									unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), uVar0);
									unk_0x3A95A0A3221D4208(&uVar0);
									iLocal_2617 = 1;
								}
							}
						}
						unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
						unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
					}
					break;
				
				case 6:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
					{
						if (!unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 24))
						{
							if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 242628503, 1))
							{
								unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
								iLocal_2617 = 1;
								unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!unk_0x097275D546C9735F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x885DF2160199F9B8(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) != 5)
								{
									unk_0xFA57C719261AA55D(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
								}
							}
							func_7(iParam0, 1);
						}
					}
					break;
				
				case 7:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0xD60943E3BE730BF0())
					{
						iLocal_2617 = 1;
						if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0x5F21CBE9EE983D4F(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0x6D68030C791111E0("ODDJOBS@TAXI@DRIVER");
								if (unk_0x39C2D9AB77873F84("ODDJOBS@TAXI@DRIVER"))
								{
									unk_0x53FF9BDD8529ACD2(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
									unk_0x3F01127ECD227890(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
								}
							}
						}
						else if (!unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 25))
							{
								if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x885DF2160199F9B8(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) != 5)
								{
									func_113(iParam0, 1, 1);
									unk_0xACD687595DC10DD1(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), unk_0xE2BBD32891C18569(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 1), unk_0x552C823E1D2A019C(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1)), 3, 60f, 0);
								}
								unk_0x2BCFB39E86340DAA(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
							}
						}
					}
					break;
				
				case 8:
					unk_0xF6B71D006EE5D90F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0);
					if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x6D68030C791111E0("ODDJOBS@TAXI@DRIVER");
						if (unk_0x39C2D9AB77873F84("ODDJOBS@TAXI@DRIVER"))
						{
							unk_0x53FF9BDD8529ACD2(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1));
							unk_0x3F01127ECD227890(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					else if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0x39AA033597761444(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1), 8, 12f, 786599, 400f, -1f, 0);
					}
					break;
				
				case 9:
				case 10:
					func_7(iParam0, 0);
					if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					{
						unk_0x9D03A5503D1FF614(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x9D03A5503D1FF614(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0x411C28019DEA5CEF(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0x9D03A5503D1FF614(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 251, 0);
					unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 0);
					unk_0xF6B71D006EE5D90F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0);
					if (((!unk_0x8B9D3A1A7C2D3C6B(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1)) && !func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 1805844857, 1)) && !func_9(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), -251125078, 1)) && unk_0x885DF2160199F9B8(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/])) != 8)
					{
						if (Local_100.f_2[iParam0 /*23*/].f_7 == 10)
						{
							bVar7 = true;
						}
						if (unk_0xB0D49A1F9F054602(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), -1, 0) != unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1))
						{
							bVar7 = true;
						}
						if (Local_100.f_2[iParam0 /*23*/].f_4 != -1)
						{
							if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_4)))
							{
								iVar9 = unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_4)));
							}
						}
						if (!unk_0xDC5D81351D6A4DDB(iVar9))
						{
							iVar9 = 0;
						}
						if (bVar7)
						{
							unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 2, 0);
							unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 65536, 1);
							if (unk_0xDC5D81351D6A4DDB(iVar9))
							{
								unk_0x33B5487515BD13D5(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), iVar9, 500f, -1, 0, 0);
							}
							else
							{
								unk_0x1659AF2827EC9D40(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), Var4, 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 65536, 0);
							unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 2, 1);
							if (unk_0xDC5D81351D6A4DDB(iVar9))
							{
								unk_0x5175E271E03B40D8(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), iVar9, 8, 25f, 790564, 200f, 15f, 1);
							}
							else
							{
								unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), Var4, 8, 25f, 790564, 200f, 15f, 1);
							}
						}
					}
					unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 1);
					break;
				
				case 11:
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]))
					{
						unk_0xF6B71D006EE5D90F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0);
						func_26(&(Local_100.f_2[iParam0 /*23*/]));
					}
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
					{
						unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 251, 0);
						unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 0);
						func_26(&(Local_100.f_2[iParam0 /*23*/].f_1));
					}
					return;
					break;
				}
		}
		if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			fVar10 = unk_0x499324B3EF19C288(func_208(unk_0xD4E735F4B6A956AC()), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 1), 1);
			if (fVar10 < fLocal_2638)
			{
				fLocal_2638 = fVar10;
				iLocal_2637 = iParam0;
			}
		}
	}
	if (Local_100.f_2[iParam0 /*23*/].f_7 == 11)
	{
		if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]))
		{
			if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/]))
			{
				unk_0xF6B71D006EE5D90F(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0);
				func_26(&(Local_100.f_2[iParam0 /*23*/]));
			}
		}
		if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0xABF0452BE64AD290(Local_100.f_2[iParam0 /*23*/].f_1))
			{
				if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1))
				{
					unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 251, 0);
					unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1), 0);
				}
				func_26(&(Local_100.f_2[iParam0 /*23*/].f_1));
			}
		}
	}
}

int func_188(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	float fVar31;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_190(Param1))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *uParam6 + 2;
	iVar25 = 50;
	unk_0x7E393C5E27D0ACA8((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7)));
	if (unk_0x789CFCFF551BAB0A((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7))))
	{
		while (!bVar19 && *uParam6 < iVar24)
		{
			if (Param1.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0xE23D832FD873880A(Param1, *uParam6, &Var28, &fVar31, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0xD48AF06A1B183940(Var28, 1, iVar20, 1077936128, 0);
				if (unk_0x462BCCFC27C23896(uVar18))
				{
					if (unk_0x7085BC35C02B7DAF(Var28, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
					{
						if (fVar31 < 90f || fVar31 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (unk_0xE8509487D07FBBAB(uVar18) || !unk_0x09586DC2AC6A64B7(uVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (unk_0xBBDA792448DB5A89(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * unk_0xBBDA792448DB5A89(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (unk_0xBBDA792448DB5A89(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * unk_0xBBDA792448DB5A89(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (unk_0xB5645494B7AC0437(Var28, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param1.f_2 - Var28.f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_189(Param1, Var28) || fVar17 < 0.5f)
						{
							Var28 = { unk_0x2F230B37E9FFF23F(Var28, fVar31, fVar15, 0f, 0f) };
							if (unk_0x1095F403F52B42E1(*iParam0, 0))
							{
								iVar11 = *iParam0;
							}
							if (!unk_0xE0D7C57D5AAFC187(Var28, 3f, 3f, 3f, iVar11))
							{
								if (func_201(Var28, &Var28, &fVar31, 1) || func_191(Var28, &Var28, &fVar31, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*uParam6++;
			if (*uParam6 >= iVar25)
			{
				Var28 = { Param1 };
				bVar19 = true;
			}
		}
	}
	if (bVar19)
	{
		*uParam4 = { Var28 };
		*uParam5 = fVar31;
		Var2 = { Param1 - *uParam4 };
		Var2.f_2 = 0f;
		fLocal_1737 = unk_0x652D2EEEF1D3E62C(Var2);
		if (fLocal_1737 != 0f)
		{
		}
		return 1;
	}
	return 0;
}

int func_189(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_83("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = unk_0x2A488C176D52CCA5(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_83("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_190(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x86701529BD460750(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x3CAC2741CC1A631F("SanAnd", uVar0) || unk_0x3CAC2741CC1A631F("Alamo", sVar0)) || unk_0x3CAC2741CC1A631F("ArmyB", sVar0)) || unk_0x3CAC2741CC1A631F("BhamCa", sVar0)) || unk_0x3CAC2741CC1A631F("Baytre", sVar0)) || unk_0x3CAC2741CC1A631F("BradT", sVar0)) || unk_0x3CAC2741CC1A631F("BradP", sVar0)) || unk_0x3CAC2741CC1A631F("CANNY", sVar0)) || unk_0x3CAC2741CC1A631F("CCreak", sVar0)) || unk_0x3CAC2741CC1A631F("ChamH", sVar0)) || unk_0x3CAC2741CC1A631F("CHU", sVar0)) || unk_0x3CAC2741CC1A631F("COSI", sVar0)) || unk_0x3CAC2741CC1A631F("CMSW", sVar0)) || unk_0x3CAC2741CC1A631F("Cypre", sVar0)) || unk_0x3CAC2741CC1A631F("Desrt", sVar0)) || unk_0x3CAC2741CC1A631F("ELGorl", sVar0)) || unk_0x3CAC2741CC1A631F("Galli", sVar0)) || unk_0x3CAC2741CC1A631F("Galfish", sVar0)) || unk_0x3CAC2741CC1A631F("Harmo", sVar0)) || unk_0x3CAC2741CC1A631F("HumLab", sVar0)) || unk_0x3CAC2741CC1A631F("Jail", sVar0)) || unk_0x3CAC2741CC1A631F("LAct", sVar0)) || unk_0x3CAC2741CC1A631F("LDam", sVar0)) || unk_0x3CAC2741CC1A631F("Lago", sVar0)) || unk_0x3CAC2741CC1A631F("MTChil", sVar0)) || unk_0x3CAC2741CC1A631F("MTJose", sVar0)) || unk_0x3CAC2741CC1A631F("MTGordo", sVar0)) || unk_0x3CAC2741CC1A631F("NCHU", sVar0)) || unk_0x3CAC2741CC1A631F("Oceana", sVar0)) || unk_0x3CAC2741CC1A631F("Palmpow", sVar0)) || unk_0x3CAC2741CC1A631F("PBluff", sVar0)) || unk_0x3CAC2741CC1A631F("Paleto", sVar0)) || unk_0x3CAC2741CC1A631F("PalCov", sVar0)) || unk_0x3CAC2741CC1A631F("PalFor", sVar0)) || unk_0x3CAC2741CC1A631F("PalHigh", sVar0)) || unk_0x3CAC2741CC1A631F("RTRAK", sVar0)) || unk_0x3CAC2741CC1A631F("Rancho", sVar0)) || unk_0x3CAC2741CC1A631F("SANDY", sVar0)) || unk_0x3CAC2741CC1A631F("TongvaH", sVar0)) || unk_0x3CAC2741CC1A631F("TongvaV", sVar0)) || unk_0x3CAC2741CC1A631F("Zenora", sVar0)) || unk_0x3CAC2741CC1A631F("Slab", sVar0)) || unk_0x3CAC2741CC1A631F("WindF", sVar0)) || unk_0x3CAC2741CC1A631F("Zancudo", sVar0)) || unk_0x3CAC2741CC1A631F("SanChia", sVar0)) || unk_0x3CAC2741CC1A631F("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_191(struct<3> Param0, var uParam3, float fParam4, int iParam5)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_200(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_200(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_200(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_200(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_200(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0x4C9BACA8D249CB13())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0x4C9BACA8D249CB13())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*fParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*fParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*fParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*fParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (unk_0x0C4DF083566CCC1C(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = unk_0x2A488C176D52CCA5(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*fParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*fParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*fParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*fParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*fParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*fParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*fParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*fParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*fParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*fParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*fParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*fParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*fParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*fParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*fParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x0C4DF083566CCC1C(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*fParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*fParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*fParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*fParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*fParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*fParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*fParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x0C4DF083566CCC1C(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*fParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*fParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*fParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*fParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*fParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*fParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*fParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*fParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x0C4DF083566CCC1C(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*fParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*fParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*fParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*fParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*fParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*fParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*fParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*fParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x0C4DF083566CCC1C(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*fParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*fParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*fParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*fParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*fParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*fParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*fParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*fParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x0C4DF083566CCC1C(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*fParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*fParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*fParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*fParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*fParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*fParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*fParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*fParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*fParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*fParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*fParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*fParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*fParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*fParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*fParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*fParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*fParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*fParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*fParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_197(3, Var1))
	{
		if (func_196(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*fParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*fParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_195(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_195(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_195(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_195(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*fParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*fParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_195(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x0C4DF083566CCC1C(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0x0C4DF083566CCC1C(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0x0C4DF083566CCC1C(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*fParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*fParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0x22C775856F4633CA(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*fParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*fParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*fParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*fParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*fParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (unk_0xB7A628320EFF8E47(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*fParam4 = 71.6555f;
		return 1;
	}
	if (!func_193())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_197(7, Var1))
		{
			if (func_196(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*fParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_197(2, Var1))
	{
		if (func_196(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x4C9BACA8D249CB13())
			{
				switch (unk_0x22C775856F4633CA(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*fParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*fParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*fParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*fParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*fParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*fParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*fParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*fParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*fParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*fParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*fParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*fParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_192(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_192(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*fParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*fParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*fParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*fParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_12(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0C4DF083566CCC1C(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x0C4DF083566CCC1C(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x0C4DF083566CCC1C(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x0C4DF083566CCC1C(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x0C4DF083566CCC1C(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0x22C775856F4633CA(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*fParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*fParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*fParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*fParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*fParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*fParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0x22C775856F4633CA(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (unk_0x0C4DF083566CCC1C(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0x0C4DF083566CCC1C(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*fParam4 = -20f;
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*fParam4 = 160f;
		return 1;
	}
	if (unk_0x0C4DF083566CCC1C(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_192(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xB7A628320EFF8E47(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_193()
{
	int iVar0;
	
	iVar0 = func_122();
	if (iVar0 == 0)
	{
		if (func_194(65))
		{
			return 1;
		}
		if (unk_0x8B1574454E8C2421(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_194(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_194(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

bool func_195(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_196(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x0C4DF083566CCC1C(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_197(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_199(iParam0)) < func_198(iParam0);
}

float func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_200(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_201(struct<3> Param0, var uParam3, float fParam4, int iParam5)
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (unk_0x0C4DF083566CCC1C(Var0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, 0, 1))
	{
		if (iParam5 < 4)
		{
			*uParam3 = { 413.7399f, -1608.911f, 28.161f };
			*fParam4 = 238.2568f;
		}
		else
		{
			*uParam3 = { 416.8107f, -1666.514f, 28.1758f };
			*fParam4 = 144.8478f;
		}
		return 1;
	}
	if (unk_0x0C4DF083566CCC1C(Var0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		if (iParam5 < 4)
		{
			*uParam3 = { -1094.492f, -2662.27f, 12.6066f };
			*fParam4 = 196.0365f;
		}
		else
		{
			*uParam3 = { -1076.736f, -2684.039f, 12.807f };
			*fParam4 = 211.7278f;
		}
		return 1;
	}
	return 0;
}

int func_202(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	
	iVar10 = 1;
	if (!func_190(Param3))
	{
		iVar10 = 9;
	}
	uVar9 = unk_0xD48AF06A1B183940(Param3, 1, iVar10, 1077936128, 0);
	if (unk_0x462BCCFC27C23896(uVar9))
	{
		unk_0x71C5C1FE45545D92(uVar9, &Var0);
		if (unk_0xF3DFF37E04D42116(Var0, 0, &Var3) && unk_0xF3DFF37E04D42116(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.f_0, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_204(Var14, Var17);
			if (fVar20 < 0f)
			{
				*uParam7 = { Var3 };
				*uParam8 = uParam6;
				return 1;
			}
			else
			{
				*uParam7 = { Var6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_203(*uParam8, 0f, 360f);
				return 1;
			}
		}
		else if (unk_0xF3DFF37E04D42116(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_203(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

float func_204(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_205(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam6 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_190(Param1))
	{
		iVar9 = 9;
	}
	func_207(Param1, Param1, &(Local_100.f_2[iParam0 /*23*/].f_12), &(Local_100.f_2[iParam0 /*23*/].f_15), iParam7);
	if (func_206(Local_100.f_2[iParam0 /*23*/].f_12, Local_100.f_2[iParam0 /*23*/].f_15))
	{
		if (!func_201(Param1, uParam4, uParam5, 1) && !func_191(Param1, uParam4, uParam5, 1))
		{
			while (!bVar8 && *uParam6 < iVar6)
			{
				if (Param1.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0xE23D832FD873880A(Param1, *uParam6, uParam4, uParam5, &uVar4, iVar9, fVar0, fVar1))
				{
					uVar5 = unk_0xD48AF06A1B183940(*uParam4, 1, iVar9, 1077936128, 0);
					if (unk_0x462BCCFC27C23896(uVar5))
					{
						fVar2 = (Param1.f_2 - uParam4->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_189(Param1, *uParam4) || fVar2 < 0.5f)
						{
							if (unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0))
							{
								iVar3 = unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]);
							}
							if (!unk_0xE0D7C57D5AAFC187(*uParam4, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam6++;
				if (*uParam6 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			return 1;
		}
	}
	return 0;
}

int func_206(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0x789CFCFF551BAB0A(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_207(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_93(Var0, *uParam6, 1056964608, 0) || !func_93(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	unk_0x7E393C5E27D0ACA8(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

Vector3 func_208(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

void func_209(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_22 != 0 && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 6))
	{
		func_114(Local_100.f_2[iParam0 /*23*/].f_22, iParam0);
		unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 6);
	}
}

int func_210(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	uVar0 = unk_0x8A5B683BACF7B78C(Local_100.f_2[iParam0 /*23*/].f_1);
	uVar1 = unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]);
	Var3 = { unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_100.f_2[iParam0 /*23*/]), 0) };
	if (unk_0x8B9D3A1A7C2D3C6B(uVar0))
	{
		return 1;
	}
	if (unk_0x967743032563101F(iVar0, 0))
	{
		return 1;
	}
	if (((unk_0xEB9F2352179A557A(uVar1, 2, 30000) || unk_0xEB9F2352179A557A(uVar1, 3, 30000)) || unk_0xEB9F2352179A557A(uVar1, 0, 7000)) || unk_0xEB9F2352179A557A(uVar1, 1, 7000))
	{
		return 1;
	}
	else if (unk_0x9809FE4B550B1EFE(Var3, 7f, 0))
	{
		if (unk_0x9809FE4B550B1EFE(Var3, 7f, 1))
		{
			func_211(unk_0xD60943E3BE730BF0(), 1, 37);
		}
		return 1;
	}
	else
	{
		fVar6 = 15f;
		Var7 = { Var3 };
		Var10 = { Var7 };
		Var7.f_0 = (Var7.f_0 - fVar6);
		Var7.f_1 = (Var7.f_1 - fVar6);
		Var7.f_2 = (Var7.f_2 - fVar6);
		Var10.f_0 = (Var10.f_0 + fVar6);
		Var10.f_1 = (Var10.f_1 + fVar6);
		Var10.f_2 = (Var10.f_2 + fVar6);
		if (unk_0x0AF5F990243ADDFB(Var7, Var10, 0))
		{
			if (unk_0x0AF5F990243ADDFB(Var7, Var10, 1))
			{
				func_211(unk_0xD60943E3BE730BF0(), 1, 37);
			}
			return 1;
		}
	}
	if (unk_0xA08F374047C715E8(unk_0xA0A7426498D312A1()))
	{
		uVar2 = unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xA0A7426498D312A1()));
		if (!unk_0x4915F4759304D5CF(uVar2))
		{
			if (unk_0xDC5D81351D6A4DDB(uVar1))
			{
				if (unk_0xDEAEC99031DCB92A(iVar1, iVar2, 1))
				{
					func_211(unk_0xD60943E3BE730BF0(), 1, 37);
					return 1;
				}
			}
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				if (unk_0xDEAEC99031DCB92A(iVar0, iVar2, 1))
				{
					func_211(unk_0xD60943E3BE730BF0(), 1, 37);
					return 1;
				}
			}
		}
	}
	if (Local_100.f_2[iParam0 /*23*/].f_3 == -1 && Local_100.f_2[iParam0 /*23*/].f_7 == 3)
	{
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != -1 && unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iParam0)))
	{
		if (func_10(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iParam0)), 1, 1))
		{
			unk_0x920EAF82B3E570B4(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iParam0)), iParam2, unk_0x1105C926E38D2066(iParam1));
		}
	}
}

void func_212()
{
	if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 19))
	{
		if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 16) && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 17))
		{
			if (!func_50(0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 17);
				func_37(1, 0, 0);
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 18);
			}
		}
		if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 15) && !unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 16))
		{
			if (func_50(0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 16);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 15))
		{
			func_20(&uLocal_2640, 7, 0, "TaxiDispatch", 0, 1);
			if (func_213(&uLocal_2640, 131, "MPTXIAU", "MPTXI_E1", 0, 0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 15);
			}
		}
	}
}

int func_213(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_290())
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_214(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_214(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x429D45A6C6520026(sParam2))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam3))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
	iVar1 = func_288(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		iVar2 = unk_0xFEB6EEC0545AF7AA(sParam7);
	}
	if (func_287(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_282(uParam6))
	{
		return 0;
	}
	if (func_279(iVar0, iVar1, iVar2))
	{
		if (func_278())
		{
			return 0;
		}
		func_277();
		return func_221(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_220(iParam4))
	{
		return 0;
	}
	func_215(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1361724.f_40.f_1 = iParam0;
	Global_1361724.f_40.f_2 = iParam1;
	Global_1361724.f_40.f_3 = iParam2;
	StringCopy(&(Global_1361724.f_40.f_4), sParam3, 16);
	Global_1361724.f_40.f_8 = iParam4;
	Global_1361724.f_40.f_9 = iParam5;
	Global_1361724.f_40.f_14 = uParam6;
	func_216(iParam4);
	func_277();
	Global_1361724.f_40.f_13 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 7000);
}

void func_216(int iParam0)
{
	if (func_219(iParam0))
	{
		func_218();
		return;
	}
	func_217();
}

void func_217()
{
	Global_1361724.f_40.f_10 = 0;
}

void func_218()
{
	Global_1361724.f_40.f_10 = 1;
}

int func_219(int iParam0)
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

bool func_220(int iParam0)
{
	return iParam0 > Global_1361724.f_40.f_8;
}

int func_221(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_276();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_273(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_270(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_273(uParam0, sParam3, sParam4);
		}
		return func_262(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_261(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_251(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_250(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_222(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_222(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_249();
	bVar0 = true;
	if (func_224(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_223(120000);
		return 1;
	}
	return 0;
}

void func_223(int iParam0)
{
	Global_1361724.f_40.f_11 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam0);
	Global_1361724.f_40.f_12 = 1;
}

int func_224(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_248();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xB330C43B9B7B1724(iVar0);
		iVar1 = func_242(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1361724.f_40.f_13))
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
	sVar4 = func_241(sParam5, bParam6, &iVar3);
	uVar5 = func_239(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		iVar6++;
		if (!unk_0x429D45A6C6520026(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3CAC2741CC1A631F(sVar4, " "))
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
		if (unk_0x05EFB6A616B6FADE(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x429D45A6C6520026(sVar2))
	{
		bVar12 = func_238(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_228(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(uParam4, 0))
	{
		func_227();
	}
	func_249();
	func_226();
	func_225();
	return 1;
}

void func_225()
{
	Global_1361724.f_57 = 0;
	Global_1361724.f_57.f_1 = 0;
}

void func_226()
{
	Global_1361724.f_40 = 3;
}

void func_227()
{
	unk_0x2BCFB39E86340DAA(&Global_2383, 8);
}

int func_228(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_229(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			unk_0x2BCFB39E86340DAA(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_229(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_121();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
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
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_4268315 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_237() == 0)
	{
		func_235();
		return 0;
	}
	func_234(Global_4268314);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/]), sParam1, 64);
	Global_4267065[Global_4268314 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4267065[Global_4268314 /*104*/].f_24 = iParam2;
	}
	Global_4267065[Global_4268314 /*104*/].f_25 = iParam7;
	Global_4267065[Global_4268314 /*104*/].f_26 = uParam8;
	Global_4267065[Global_4268314 /*104*/].f_29 = uParam9;
	Global_4267065[Global_4268314 /*104*/].f_30 = uParam12;
	Global_4267065[Global_4268314 /*104*/].f_31 = uParam11;
	Global_4267065[Global_4268314 /*104*/].f_28 = 0;
	Global_4267065[Global_4268314 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_33), sParam4, 64);
	Global_4267065[Global_4268314 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_50), sParam5, 64);
	Global_4267065[Global_4268314 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_83), sParam15, 64);
	func_121();
	switch (iParam16)
	{
		case 3:
			Global_4267065[Global_4268314 /*104*/].f_99[Global_14513] = 1;
			break;
		
		case 0:
			Global_4267065[Global_4268314 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4267065[Global_4268314 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4267065[Global_4268314 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14513)
		{
			case 0:
				func_233(0);
				break;
			
			case 1:
				func_233(1);
				break;
			
			case 2:
				func_233(2);
				break;
			
			case 3:
				func_233(3);
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
				Global_4268315 = 1;
				break;
			
			case 0:
				Global_4268315 = 1;
				break;
			
			case 2:
				Global_4268315 = 1;
				break;
			
			case 1:
				Global_4268315 = 1;
				break;
			}
	}
	Global_16891[Global_4268314] = 0;
	if (bParam10)
	{
		func_121();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_75())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_232(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_230(1);
			func_232(Global_14494, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_230(int iParam0)
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
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_127(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
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
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											iVar6 = Global_37276;
											break;
										
										case 1:
											iVar6 = Global_37277;
											break;
										
										case 2:
											iVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(Global_2389);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar7);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar8);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 8)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if ((iVar1 == 23 && unk_0x3CAC2741CC1A631F(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x05EFB6A616B6FADE(Global_2384, 6))
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_231(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2390[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_231(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		func_59(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_59(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_59(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_59(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_59(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_232(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271C1332F482646C();
}

void func_233(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_234(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xC5B07C33AC7BB174();
	uVar1 = unk_0x65DA628D62901275();
	uVar2 = unk_0x34CEB9721AC6A0A9();
	uVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	uVar5 = unk_0x56EBDF0E39D83471();
	Global_4267065[iParam0 /*104*/].f_18 = uVar0;
	Global_4267065[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4267065[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4267065[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4267065[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4267065[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_235()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_236(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
		{
			Global_4268314 = iVar2;
		}
		iVar2++;
	}
	Global_4267065[Global_4268314 /*104*/].f_24 = 1;
}

int func_236(struct<6> Param0, struct<6> Param6)
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

int func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0)
		{
			Global_4268314 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0 || Global_4267065[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_236(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
			{
				Global_4268314 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4268314 == 11)
	{
		return 0;
	}
	Global_4267065[Global_4268314 /*104*/].f_99[0] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[1] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[2] = 0;
	return 1;
}

int func_238(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_229(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			unk_0x2BCFB39E86340DAA(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_239(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_240(2, iParam1);
	return iParam0;
}

void func_240(int iParam0, var uParam1)
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

char* func_241(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_240(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x08791BD93D5986C6(sParam0);
}

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = func_245(iParam0);
	if (iVar0 == -1)
	{
		func_243(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_243(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_245(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_244(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_245(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x07D08EE9B44B4EE9(Global_1379953[iVar0 /*5*/].f_2) && unk_0x2C58CFA8E806E25E(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_246(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_246(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (unk_0x07D08EE9B44B4EE9(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18167C9C4C1E9195(Global_1379953[iParam0 /*5*/].f_2), 64);
			unk_0x422B7FAC2AC425AD(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xAAA14DE52F34B110(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1380114)
	{
		Global_1379953[iVar32 /*5*/] = { Global_1379953[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_247(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_247(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_248();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		uParam0->f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

int func_248()
{
	return -1;
}

void func_249()
{
	Global_1361724.f_40.f_9 = 4;
}

int func_250(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_249();
	bVar0 = false;
	return func_224(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_251(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_252(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_252(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_248();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xB330C43B9B7B1724(iVar0);
		iVar1 = func_242(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16883 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_241(sParam5, bParam6, &iVar3);
	uVar5 = func_239(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		iVar6++;
		if (!unk_0x429D45A6C6520026(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3CAC2741CC1A631F(sVar4, " "))
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
		if (unk_0x05EFB6A616B6FADE(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x429D45A6C6520026(sVar2))
	{
		bVar12 = func_260(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_254(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(uParam4, 0))
	{
		func_227();
	}
	func_253();
	func_226();
	func_225();
	return 1;
}

void func_253()
{
	Global_1361724.f_40.f_9 = 3;
}

int func_254(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_255(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_255(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_121();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
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
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_259() == 0)
	{
		func_257();
		return 0;
	}
	func_256(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_233(0);
		func_233(2);
		func_233(1);
	}
	else
	{
		func_121();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_233(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_233(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_233(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_233(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_121();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_75())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_232(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_230(1);
			func_232(Global_14494, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_256(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xC5B07C33AC7BB174();
	uVar1 = unk_0x65DA628D62901275();
	uVar2 = unk_0x34CEB9721AC6A0A9();
	uVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	uVar5 = unk_0x56EBDF0E39D83471();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = uVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
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
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_258(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_258(struct<6> Param0, struct<6> Param6)
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

int func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
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
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_258(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

int func_260(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 3;
	if (func_255(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			StringCopy(&Global_3071, sParam5, 64);
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_261(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
	}
	if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	func_253();
	bVar0 = true;
	if (func_252(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_223(120000);
		return 1;
	}
	return 0;
}

int func_262(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x05EFB6A616B6FADE(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x05EFB6A616B6FADE(uParam4, 4))
	{
		bVar0 = func_269(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_268(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x05EFB6A616B6FADE(uParam4, 3))
		{
			func_267(1);
		}
		if (unk_0x05EFB6A616B6FADE(uParam4, 5))
		{
			func_266(1);
		}
		func_265();
		func_226();
		func_264();
		func_263();
		return 1;
	}
	return 0;
}

void func_263()
{
	Global_2533659 = 0;
}

void func_264()
{
	Global_1361724.f_57 = 1;
	Global_1361724.f_57.f_1 = 0;
}

void func_265()
{
	Global_1361724.f_40.f_9 = 1;
}

void func_266(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2385, 0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2385, 0);
	}
}

void func_267(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 20);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 20);
	}
}

int func_268(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_130(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_116(sParam3, iParam4, bParam7);
}

int func_269(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_130(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 1;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_116(sParam3, iParam4, bParam7);
}

int func_270(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
	}
	if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (func_272(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_271();
		func_265();
		func_226();
		func_264();
		func_263();
		return 1;
	}
	return 0;
}

void func_271()
{
	Global_16840 = 0;
}

bool func_272(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_130(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 1;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 1;
	Global_15876 = 0;
	StringCopy(&Global_15970, sParam5, 24);
	Global_2621441 = 0;
	return func_116(sParam3, iParam4, bParam8);
}

int func_273(var uParam0, char* sParam1, char* sParam2)
{
	if (func_275(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_274();
		func_226();
		func_264();
		return 1;
	}
	return 0;
}

void func_274()
{
	Global_1361724.f_40.f_9 = 2;
}

bool func_275(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_116(sParam2, iParam3, 0);
}

void func_276()
{
	Global_1361724.f_55 = Global_1361724.f_40.f_1;
	Global_1361724.f_55.f_1 = Global_1361724.f_40.f_10;
}

void func_277()
{
	Global_1361724.f_40 = 1;
}

bool func_278()
{
	return Global_1361724.f_40 == 1;
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (Global_1361724.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1361724.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_280(int iParam0)
{
	if (!func_281())
	{
		return 0;
	}
	if (!Global_1361724.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_281()
{
	if (Global_1361724.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_282(var uParam0)
{
	if (func_286())
	{
		return 0;
	}
	if (func_285())
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1654543 || func_284())
	{
		return 0;
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0, 6))
	{
		if (func_283())
		{
			return 0;
		}
	}
	return 1;
}

bool func_283()
{
	return unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1378623);
}

int func_284()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_285()
{
	return Global_1361724.f_40 == 3;
}

bool func_286()
{
	return func_119();
}

int func_287(int iParam0, int iParam1, int iParam2)
{
	if (!func_285())
	{
		return 0;
	}
	return func_279(iParam0, iParam1, iParam2);
}

int func_288(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xFEB6EEC0545AF7AA(&cVar0);
}

bool func_289()
{
	return Global_2530962.f_1;
}

int func_290()
{
	if (Global_1361912.f_2)
	{
		return 1;
	}
	return func_291();
}

bool func_291()
{
	return func_286();
}

void func_292(int iParam0)
{
	if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iParam0 /*23*/]))
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
		{
			if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 18))
			{
				if (func_24(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!func_85(&uLocal_1733, 30000, 0))
					{
						if (func_293(iParam0, 1109393408))
						{
							Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
							Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_29 = 0f;
							func_30(&uLocal_1733);
						}
					}
					else if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2, 19))
					{
						unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_2), 19);
					}
				}
			}
		}
	}
}

int func_293(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	if (func_10(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2)), 1, 1))
	{
		unk_0xCACEBBBEAD8F262E(Global_2524719.f_785);
		unk_0xCACEBBBEAD8F262E(Global_2524719.f_786);
		if (unk_0x7FC99CCC73354033(Global_2524719.f_785))
		{
			if (unk_0x7FC99CCC73354033(Global_2524719.f_786))
			{
				Var3 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_100.f_2[iParam0 /*23*/].f_2))), 1) };
				if (!func_312(Var3))
				{
					if (func_190(Var3))
					{
						if (Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 2)
						{
							iVar7 = 0;
						}
						else if (Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
						{
							iVar7 = 9;
						}
						else
						{
							iVar7 = 1;
						}
					}
					else if (Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = 9;
					}
					if (Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 == -1)
					{
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
					if (func_308(Var3, &Var0, &uVar6, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), iVar7, fParam1))
					{
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { Var0 };
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
						return 1;
					}
					else if (Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 >= 5)
					{
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25++;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
				}
				else if (func_294(Var3, &Var0, &uVar6))
				{
					Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { Var0 };
					Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
					Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
					Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_294(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x0C4DF083566CCC1C(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -988.9172f, -2428.579f, 19.0608f };
					fVar5 = 148.3473f;
					break;
				
				case 1:
					Var2 = { -968.0948f, -2392.327f, 19.056f };
					fVar5 = 150.0203f;
					break;
				
				case 2:
					Var2 = { -946.4792f, -2419.659f, 19.0562f };
					fVar5 = 91.6004f;
					break;
				
				case 3:
					Var2 = { -899.0128f, -2432.842f, 19.0847f };
					fVar5 = 58.9819f;
					break;
				
				case 4:
					Var2 = { -890.7079f, -2272.402f, 18.2077f };
					fVar5 = 135.9921f;
					break;
			}
			if (func_295(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -996.2861f, -2449.917f, 12.6953f };
					fVar5 = 148.5654f;
					break;
				
				case 1:
					Var2 = { -1006.094f, -2421.448f, 12.9447f };
					fVar5 = 237.9966f;
					break;
				
				case 2:
					Var2 = { -948.7274f, -2403.462f, 12.7341f };
					fVar5 = 111.3975f;
					break;
				
				case 3:
					Var2 = { -895.4352f, -2364.867f, 13.4802f };
					fVar5 = 142.0129f;
					break;
				
				case 4:
					Var2 = { -906.6598f, -2419.59f, 12.6381f };
					fVar5 = 78.0133f;
					break;
			}
			if (func_295(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -1084.003f, -2690.473f, 19.0585f };
					fVar5 = 213.4924f;
					break;
				
				case 1:
					Var2 = { -1087.542f, -2660.057f, 19.0615f };
					fVar5 = 191.5389f;
					break;
				
				case 2:
					Var2 = { -1083.4f, -2612.184f, 19.0622f };
					fVar5 = 153.7453f;
					break;
				
				case 3:
					Var2 = { -1059.893f, -2570.656f, 19.061f };
					fVar5 = 150.5092f;
					break;
				
				case 4:
					Var2 = { -1038.387f, -2533.845f, 19.0498f };
					fVar5 = 150.637f;
					break;
			}
			if (func_295(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x0C4DF083566CCC1C(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -1076.408f, -2693.846f, 12.6509f };
					fVar5 = 221.0395f;
					break;
				
				case 1:
					Var2 = { -1121.422f, -2703.146f, 12.9444f };
					fVar5 = 326.1454f;
					break;
				
				case 2:
					Var2 = { -1095.97f, -2644.177f, 12.6382f };
					fVar5 = 182.0544f;
					break;
				
				case 3:
					Var2 = { -1084.046f, -2601.412f, 12.6823f };
					fVar5 = 153.5335f;
					break;
				
				case 4:
					Var2 = { -1049.575f, -2589.945f, 12.6066f };
					fVar5 = 135.7366f;
					break;
			}
			if (func_295(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_295(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405070.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x85A65397E2224648(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x5ACD8081B0AC1F22(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x5ACD8081B0AC1F22(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC980951B35C111AE(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (unk_0x06D718FC71673E5A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_302(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_296(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_296(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x499324B3EF19C288(func_300(unk_0xD4E735F4B6A956AC()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x317672E799676CA5(Param0, fParam3))
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
		if (func_10(iVar1, 1, 1))
		{
			if (!func_298(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_297(iVar1) || !bParam10) && !Global_2423801[iVar1 /*413*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0xE46ECB9FD23D3264(iVar1) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xE46ECB9FD23D3264(iVar1) != unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))) || unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0x499324B3EF19C288(func_300(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xAB4CCE25F269AC90(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE46ECB9FD23D3264(iVar1) != iParam8 || unk_0xE46ECB9FD23D3264(iVar1) == -1)
						{
							if (unk_0x499324B3EF19C288(func_300(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xAB4CCE25F269AC90(iVar1, Param0, fParam3))
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

int func_297(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_298(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_299(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_299(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_162();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_301() && Global_1589747[iVar0 /*790*/].f_761) && !func_24(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_208(iParam0);
}

var func_301()
{
	return Global_2448386.f_16;
}

int func_302(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam8 == 0)
		{
			if (func_10(iVar1, bParam4, bParam5))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam7 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_297(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && uParam9) && bParam6) && func_303(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_208(iVar1), Param0, 1) < fParam3)
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

int func_303(int iParam0)
{
	if (func_307(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_306(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_304(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_305(iParam0);
	if (!iVar0 == func_248())
	{
		if (iVar0 == func_305(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 != func_248())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_248();
}

struct<13> func_306(var uParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(uParam0, &Var0, 13);
	return Var0;
}

int func_307(int iParam0, var uParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_306(iParam0) };
		Global_2503662 = { func_306(uParam1) };
		if (unk_0xE0B3F7A8017F6425(&Global_2503649))
		{
			if (unk_0xE0B3F7A8017F6425(&Global_2503662))
			{
				unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649);
				unk_0xE087FDE0E2FA8ADF(&Global_2503614, 35, &Global_2503662);
				if (Global_2503579 == Global_2503614)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_308(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	
	fVar9 = 0f;
	iVar11 = 1;
	if (iParam6 == 0)
	{
		iVar11 = 0;
	}
	bVar12 = false;
	iVar13 = 0;
	fVar14 = 100f;
	fVar15 = 2.5f;
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xE23D832FD873880A(Param0, *uParam5, &Var0, &fVar9, &uVar10, iParam6, fVar14, fVar15))
		{
			if (unk_0xB7A628320EFF8E47(Param0, Var0) <= (50f * 50f))
			{
				while (!bVar12 && iVar13 < 5)
				{
					if (unk_0xD76E6AC477D93A67(&Var0, &Var3, &Var6, 0f, 180f, fParam7, iVar11, 1, 0))
					{
						fVar9 = func_311(0f, 0f, 0f, Var6, 1);
						if (func_309(Param0, Var3, 120f, fParam7))
						{
							if (func_295(*uParam3, 5f, 2f, 1f, 6f, 1, 1, 1, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
							{
								bVar12 = true;
								Var16 = { unk_0x2F230B37E9FFF23F(Var3, fVar9, 0f, 1f, 0f) };
								Var19 = { Var16 - Var3 };
								Var22 = { Var0 - Var3 };
								if (unk_0x772D91F28C9D2EDC(Var19.f_0, Var19.f_1, Var22.f_0, Var22.f_1) > 60f)
								{
									fVar9 = (fVar9 + 180f);
									fVar9 = func_203(fVar9, 0f, 360f);
								}
								*uParam3 = { Var3 };
								*uParam4 = fVar9;
								return 1;
							}
							else
							{
								iVar13++;
							}
						}
						else
						{
							iVar13++;
						}
					}
					else
					{
						iVar13++;
					}
				}
			}
			*uParam5++;
		}
		else
		{
			*uParam5++;
		}
	}
	return 0;
}

int func_309(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, Param3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return 0;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return 0;
	}
	if (unk_0x317672E799676CA5(Param3, 2.5f))
	{
		return 0;
	}
	if (unk_0xE0D7C57D5AAFC187(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_310(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_310(struct<3> Param0, bool bParam3)
{
	if (func_12(Param0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_196(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_197(2, Param0))
	{
		if (func_196(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_197(3, Param0))
	{
		if (func_196(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_197(4, Param0))
	{
		if (func_196(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_197(5, Param0))
	{
		if (func_196(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_197(6, Param0))
	{
		if (func_196(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_193())
	{
		if (func_197(7, Param0))
		{
			if (func_196(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_197(8, Param0))
	{
		if (func_196(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (unk_0x0C4DF083566CCC1C(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (unk_0x0C4DF083566CCC1C(Param0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		return 1;
	}
	if (unk_0x0C4DF083566CCC1C(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (unk_0x0C4DF083566CCC1C(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1) || unk_0x0C4DF083566CCC1C(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((unk_0x0C4DF083566CCC1C(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1) || unk_0x0C4DF083566CCC1C(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)) || unk_0x0C4DF083566CCC1C(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)) || unk_0x0C4DF083566CCC1C(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (func_12(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0C4DF083566CCC1C(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x0C4DF083566CCC1C(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x0C4DF083566CCC1C(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x0C4DF083566CCC1C(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x0C4DF083566CCC1C(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (unk_0x0C4DF083566CCC1C(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0C4DF083566CCC1C(Param0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1) || unk_0x0C4DF083566CCC1C(Param0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

float func_311(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xA0844D842FD4B009(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_312(struct<3> Param0)
{
	if (unk_0x0C4DF083566CCC1C(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x0C4DF083566CCC1C(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x0C4DF083566CCC1C(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_313()
{
	int iVar0;
	
	if (unk_0xA08F374047C715E8(unk_0xA0A7426498D312A1()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3, iVar0))
			{
				if ((Local_100.f_2[iVar0 /*23*/].f_7 == 11 || Local_100.f_2[iVar0 /*23*/].f_7 == 9) || Local_100.f_2[iVar0 /*23*/].f_7 == 10)
				{
					unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3), iVar0);
				}
				else if (!unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/].f_1))
				{
					unk_0xFA57C719261AA55D(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_3), iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_314()
{
	int iVar0;
	
	if (unk_0xA08F374047C715E8(unk_0xA0A7426498D312A1()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_100.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 != unk_0xD60943E3BE730BF0())
				{
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/]))
					{
						if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/]))
						{
							unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/], 1);
						}
					}
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/].f_1, 1);
						}
					}
				}
			}
			else if (Local_100.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_2 == unk_0xD60943E3BE730BF0())
				{
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/]))
					{
						if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/]))
						{
							unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/], 0);
						}
						else if (unk_0xEDB53D3BCBFC886E(Local_100.f_2[iVar0 /*23*/]))
						{
						}
					}
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/].f_1, 0);
						}
					}
				}
				else
				{
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/]))
					{
						if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/]))
						{
							unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/], 1);
						}
					}
					if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/].f_1, 1);
						}
					}
				}
			}
			else
			{
				if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/]))
				{
					if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/]))
					{
						unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/], 1);
					}
				}
				if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/].f_1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_315()
{
	switch (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_43)
	{
		case 0:
			if (Local_100.f_191 > 0)
			{
				Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_43 = 1;
			}
			break;
		
		case 1:
			func_326();
			func_316();
			if (Local_100.f_191 >= 4)
			{
				Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_43 = 4;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			func_355();
			break;
	}
}

void func_316()
{
	int iVar0;
	
	iVar0 = unk_0xA373CB83DA86BA00(false, 0);
	if (Local_100.f_189 != iVar0)
	{
		if (Local_100.f_189 < iVar0 || func_317(Local_100.f_189, Local_100.f_189, Local_100.f_189, 0, 1))
		{
			unk_0xA721D9ED3827732A(Local_100.f_189);
			unk_0x7F2854D39965C275(Local_100.f_189);
			unk_0xC0E0EC37CC7BA185(Local_100.f_189);
		}
	}
}

int func_317(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_325(iParam0, bParam3, bParam4) && func_324(iParam1, bParam3, bParam4)) && func_318(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0, bool bParam1, bool bParam2)
{
	return func_319(2, iParam0, 1, bParam1, bParam2);
}

int func_319(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_323(iParam0) - func_322(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_322(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_323(iParam0) - func_321(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_322(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_323(iParam0) - func_322(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_320(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0)
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

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380171.f_1;
			break;
		
		case 1:
			return Global_1380171.f_2;
			break;
		
		case 2:
			return Global_1380171.f_3;
			break;
	}
	return 0;
}

int func_322(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_209;
			}
			else
			{
				return unk_0xBCC2AC37F56D2149(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_210;
			}
			else
			{
				return unk_0xA373CB83DA86BA00(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_211;
			}
			else
			{
				return unk_0x2FC83B1E3A760AA3(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380179;
			break;
		
		case 1:
			return Global_1380180;
			break;
		
		case 2:
			return Global_1380181;
			break;
	}
	return 0;
}

int func_324(int iParam0, bool bParam1, bool bParam2)
{
	return func_319(1, iParam0, 1, bParam1, bParam2);
}

int func_325(int iParam0, bool bParam1, bool bParam2)
{
	return func_319(0, iParam0, 1, bParam1, bParam2);
}

void func_326()
{
	int iVar0;
	struct<2> Var1;
	
	switch (iLocal_1732)
	{
		case 0:
			if (func_340(131))
			{
				iVar0 = func_330();
				if (iVar0 == 0)
				{
					func_20(&uLocal_2640, 7, 0, "TaxiDispatch", 0, 1);
					if (func_329(&uLocal_2640, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, 0))
					{
						iLocal_1732 = 1;
					}
				}
				else if (iVar0 == 9)
				{
				}
				else
				{
					StringCopy(&Var1, "MPTXI_N", 16);
					StringIntConCat(&Var1, iVar0, 16);
					func_20(&uLocal_2640, 7, 0, "TaxiDispatch", 0, 1);
					if (func_329(&uLocal_2640, 131, "MPTXIAU", &Var1, 12, 1, 0, 0, 0))
					{
					}
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 0))
			{
				if (func_330() == 0)
				{
					if (!func_24(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_21))
					{
						Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_24 = 0f;
					}
					unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1), 0);
					iLocal_1732 = 2;
				}
				unk_0xFA57C719261AA55D(&(Global_2524719.f_784), 0);
			}
			break;
		
		case 1:
			if (func_328())
			{
				if (!func_327())
				{
					if (!func_24(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_21))
					{
						Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4.f_24 = 0f;
					}
					unk_0x2BCFB39E86340DAA(&(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1), 0);
					iLocal_1732 = 2;
				}
				else
				{
					iLocal_1732 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1, 0))
			{
				iLocal_1732 = 0;
			}
			break;
	}
}

int func_327()
{
	if (Global_15871 == 1 || Global_16838 == 1)
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	if (Global_15822 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_130(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	if (iParam5 == 1)
	{
		Global_15834 = 1;
	}
	else
	{
		Global_15834 = 0;
	}
	Global_2621441 = 1;
	return func_116(sParam3, iParam4, bParam8);
}

int func_330()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 0))
	{
		if (IntToFloat(func_164(unk_0xD4E735F4B6A956AC())) <= (IntToFloat(iLocal_1910) * 1.5f))
		{
			if (!unk_0xE06AA0996C4E4E03())
			{
				func_167("TXM_H03", -1);
			}
			return 9;
		}
		if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
		{
			return 2;
		}
	}
	if (!func_29())
	{
		return 1;
	}
	if (func_339(unk_0xD60943E3BE730BF0()))
	{
		return 9;
	}
	uVar0 = unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xA0A7426498D312A1()));
	if (!unk_0x4915F4759304D5CF(uVar0))
	{
		if (unk_0x5D7DFE2058701942(iVar0, 0))
		{
			uVar1 = unk_0xCAEB6CE71A2C7212(iVar0, 0);
			if (unk_0x1095F403F52B42E1(uVar1, 0))
			{
				if (unk_0xD3C4AB5E628133C1(iVar1, joaat("taxi")))
				{
					return 9;
				}
			}
		}
	}
	if (func_338(unk_0xD60943E3BE730BF0()))
	{
		return 4;
	}
	if (Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_4 != -1)
	{
		return 4;
	}
	if (unk_0x05EFB6A616B6FADE(Local_295[unk_0xD60943E3BE730BF0() /*44*/].f_1, 0))
	{
		return 4;
	}
	if (func_173(unk_0xD4E735F4B6A956AC(), 1) && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 16)
	{
		return 1;
	}
	if (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) >= 6f)
	{
		return 9;
	}
	if (func_337(unk_0xD4E735F4B6A956AC(), 1, 0))
	{
		return 9;
	}
	if (func_336(unk_0xD4E735F4B6A956AC(), 0))
	{
		return 9;
	}
	if (func_335())
	{
		return 3;
	}
	if (!func_331(1, 1, 1, 1, 0))
	{
		return 1;
	}
	Var2 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
	fVar8 = 50f;
	iVar9 = 1;
	if (!func_190(Var2))
	{
		iVar9 = 9;
	}
	if (!unk_0xA177613398FB538B(Var2, &Var5, iVar9, 100f, 2.5f))
	{
		return 3;
	}
	if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Var5, fVar8, fVar8, 20f, 0, 1, 0))
	{
		return 3;
	}
	if (func_310(Var2, 1))
	{
		return 3;
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_334(iParam0, bParam3, bParam4) || func_333(iParam1, bParam3, bParam4)) || func_332(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0, bool bParam1, bool bParam2)
{
	return func_319(2, iParam0, 0, bParam1, bParam2);
}

int func_333(int iParam0, bool bParam1, bool bParam2)
{
	return func_319(1, iParam0, 0, bParam1, bParam2);
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	return func_319(0, iParam0, 0, bParam1, bParam2);
}

int func_335()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (unk_0xC10AB2F83514403D(unk_0xA19140A5C42D8715(), -64f, -850f, 200f, -84f, -795f, 340f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_336(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_337(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_248())
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_100.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_2 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_339(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_100.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if ((Global_16936 || Global_16935) || Global_16937)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_14513.f_1 == 10)
		{
			if (Global_1698 == iParam0)
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
	return 0;
}

int func_341()
{
	return Local_100.f_0;
}

int func_342(int iParam0)
{
	return Local_295[iParam0 /*44*/];
}

bool func_343()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_142, 18);
}

int func_344()
{
	var uVar0;
	
	func_351(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_350())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_349())
	{
		return 1;
	}
	if (func_348(157))
	{
		if (!func_347())
		{
			return 1;
		}
	}
	if (func_348(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_345() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_345()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_345()
{
	switch (func_346())
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

int func_346()
{
	return Global_25459;
}

bool func_347()
{
	return Global_2448386.f_587;
}

int func_348(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_349()
{
	return Global_2458191;
}

bool func_350()
{
	return Global_2448386.f_582;
}

void func_351(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_352(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_352(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &Var0, 3))
	{
		if (func_10(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xEE978C39384D834F(Var0.f_1);
			if (unk_0xDC5D81351D6A4DDB(uVar3))
			{
				if (unk_0x5D7DFE2058701942(iVar3, 0))
				{
					uVar4 = unk_0xCAEB6CE71A2C7212(iVar3, 0);
					if (unk_0xEB1A41F6F719807C(uVar4, Var0.f_2) && unk_0xB592B7A61F21E7A5())
					{
						if (func_353(uVar4, &bVar5))
						{
							unk_0x3D2495030621765B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x792676988A48387F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_353(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(iParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_354()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_355()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/]))
		{
			if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/]))
			{
				unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/], 1);
			}
		}
		if (unk_0x83A1DA4E6C55E952(Local_100.f_2[iVar0 /*23*/].f_1))
		{
			if (unk_0xABF0452BE64AD290(Local_100.f_2[iVar0 /*23*/].f_1))
			{
				unk_0x938ED824EDC6E866(Local_100.f_2[iVar0 /*23*/].f_1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x37B568B777BC65F9(uLocal_2619))
	{
		if (unk_0xC3553172354FFB69(uLocal_2619))
		{
			func_38();
		}
	}
	if (bLocal_1906)
	{
		unk_0xB9514DB95C310944(1);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_1743))
	{
		unk_0xC0AC848E56940C34(&iLocal_1743);
		unk_0xA5DE74AE39867B03(iLocal_1744);
	}
	if (unk_0xA41DC7627220D3D5("taxi"))
	{
		unk_0x9625FCE863F284BD("taxi");
	}
	func_356();
}

void func_356()
{
	unk_0x8F1A9FE6D91AAFEB();
}

int func_357(struct<21> Param0)
{
	func_363(32, Param0);
	func_361(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_100, 195);
	unk_0x8BFA7A7AB1D02137(&Local_295, 1409);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_360())
	{
		return 0;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		func_358(131, 3, unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 4));
		func_35(&uLocal_1735, 0, 0);
		Local_295[unk_0xD60943E3BE730BF0() /*44*/] = 0;
	}
	return 1;
}

void func_358(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_121();
		if (iParam1 == 4)
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[2] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71205)
			{
				if (iParam1 != 4)
				{
					if (Global_14513 != iParam1)
					{
						Global_3042[iParam1 /*4*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_3059[iParam1] = 1;
						Global_3064[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14513)
					{
					}
					else
					{
						Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_2993[1 /*6*/].f_5 = iParam1;
						func_359();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_359();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_359();
			}
		}
	}
}

void func_359()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_3069 /*29*/].f_7)), 64);
	if (Global_3088 == 0)
	{
		unk_0x59FF6261546DDD52("");
		StringCopy(&cVar16, unk_0x08791BD93D5986C6(&(Global_2993[1 /*6*/])), 64);
		sVar32 = unk_0x08791BD93D5986C6("CELL_253");
		unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x59FF6261546DDD52("CELL_255");
		unk_0x4FDA9E6EF359F8A9(&(Global_2993[1 /*6*/]));
		unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xFA57C719261AA55D(&Global_2383, 0);
}

int func_360()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 0;
		}
		if (unk_0x9657A511FBAA9216())
		{
			return 1;
		}
		if (func_350())
		{
			return 0;
		}
		if (func_348(155))
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

int func_361(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_356();
			}
			else
			{
				return 0;
			}
		}
		if (!func_362())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_356();
					}
					else
					{
						return 0;
					}
				}
				if (func_350())
				{
					if (!bParam2)
					{
						func_356();
					}
					else
					{
						return 0;
					}
				}
				if (func_348(155))
				{
					if (!bParam2)
					{
						func_356();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_356();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_356();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_356();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_362()
{
	return Global_1312834;
}

void func_363(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_356();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

