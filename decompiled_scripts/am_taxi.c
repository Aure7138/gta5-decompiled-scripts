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
	iLocal_98 = unk_0x5354F72E0D8D7E53();
	iLocal_99 = unk_0x526A9A6B1B39C5F0();
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
	sLocal_2621 = unk_0xC9C4B2A22DE54C69(0, 218, 1);
	iLocal_2622 = unk_0xC45D692E0BD4797B();
	Local_2623 = { -0.01f, 0.6f, 0.24f };
	Local_2626 = { -5f, 0f, 0f };
	Local_2629 = { 0f, -0.25f, 0.55f };
	fLocal_2632 = 50f;
	Local_2633 = { -0.3f, 1f, 0.35f };
	fLocal_2638 = 99999f;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_354(ScriptParam_0))
		{
			func_352();
		}
	}
	while (true)
	{
		func_351();
		if (func_341())
		{
			func_352();
		}
		if (unk_0xB01117EF93F91860())
		{
			if (func_340())
			{
				if (unk_0x4362A980E5B3780B() != unk_0x87AE17B26F45CF70(unk_0x9EB17624F44A8DA4()))
				{
					func_352();
				}
			}
			else
			{
				func_352();
			}
		}
		else if (unk_0x4362A980E5B3780B() != -1)
		{
			func_352();
		}
		switch (func_339(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/] = 1;
				if (func_338() == 4)
				{
					Local_295[unk_0x622FF3AE4B1D07C3() /*44*/] = 3;
				}
				break;
			
			case 1:
				if (func_338() == 1)
				{
					func_312();
					func_36();
				}
				else if (func_338() == 4)
				{
					Local_295[unk_0x622FF3AE4B1D07C3() /*44*/] = 3;
				}
				break;
			
			case 3:
				func_34(&(Local_100.f_193));
				if (func_33(&(Local_100.f_193)))
				{
					Local_295[unk_0x622FF3AE4B1D07C3() /*44*/] = 4;
				}
				break;
			
			case 2:
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/] = 4;
			
			case 4:
				func_352();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_338())
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
	if (iLocal_2805 < unk_0xB72D370CB7ABC3EF())
	{
		func_25();
		iLocal_2805++;
	}
	else
	{
		func_5();
		unk_0x872F1C1F8587CCC7(&(Local_100.f_2[iLocal_2806 /*23*/].f_6), 0);
		unk_0x872F1C1F8587CCC7(&(Local_100.f_2[iLocal_2806 /*23*/].f_6), 2);
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
	
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return;
	}
	if (Local_100.f_2[iParam0 /*23*/].f_7 != 11 && !unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 4))
	{
		if (unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (func_15(Local_100.f_2[iParam0 /*23*/].f_1) || !func_13(Local_100.f_2[iParam0 /*23*/]))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (!unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
	}
	if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1) && func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		Var0 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1) };
		switch (Local_100.f_2[iParam0 /*23*/].f_7)
		{
			case 0:
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 0)
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
					else if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)))
					{
						if (func_10(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)), 1, 1))
						{
							if (func_12(Var0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2))), 1), 5f))
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
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 2:
				if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
					{
						if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -272084098, 1))
						{
							if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
							{
								if (unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
								{
									func_17(iParam0, 3);
								}
							}
						}
						else if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)))
						{
							if (func_10(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)), 1, 1))
							{
								if (func_12(Var0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2))), 1), 5f))
								{
									if (unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) || unk_0x6A6267339FA67D12(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
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
				if (unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 3:
				if (unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 4:
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) <= 0)
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
							if (unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) || unk_0x90D5DFB054818BA7(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) < 2f)
							{
								func_17(iParam0, 6);
							}
						}
					}
				}
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			
			case 6:
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else
				{
					func_7(iParam0, 1);
				}
				break;
			
			case 7:
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			
			case 8:
				func_16(iParam0, 0);
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 0)
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iParam0 /*23*/].f_6), 3);
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
					{
						unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
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
	if (!unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]) && !unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
	{
		if ((unk_0xC80D31E4B587871C(Local_100.f_190, iParam0) && !unk_0xC80D31E4B587871C(Local_100.f_190, iParam0 + 8)) && Local_100.f_2[iParam0 /*23*/].f_2 == -1)
		{
			if (Local_100.f_189 > 0)
			{
				Local_100.f_189 = (Local_100.f_189 - 1);
				unk_0x0EE72DB1CD8A3B86(&(Local_100.f_190), iParam0);
				unk_0x872F1C1F8587CCC7(&(Local_100.f_190), iParam0 + 8);
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
		if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 0)
			{
				if (unk_0x317536BCEA8FA6B0(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), -1, 0) == unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1))
				{
					iVar0 = unk_0x95EC8AE7E4F33F6E(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]));
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 != -1)
						{
							iVar2 = unk_0x317536BCEA8FA6B0(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), iVar1, 0);
							if (unk_0x6ADD12BF4D6D2587(iVar2))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iVar2))
								{
									if (!func_9(iVar2, -828834893, 1) && !func_9(iVar2, 451360105, 1))
									{
										if (bParam1)
										{
											unk_0x16416C5B54FDBCBB(iVar2, 0, 0);
										}
										else
										{
											unk_0x16416C5B54FDBCBB(iVar2, 0, 64);
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
		if (unk_0x0C88267282FD588F(unk_0x29AB7D6D0DE18055(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 45f, 45f, 20f, 0, 1, 0) || unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 20))
		{
			unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
			if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 242628503) == 7)
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
	
	iVar0 = unk_0x78F50AA8F955BEFC(iParam0, iParam1);
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
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
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
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_14(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
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
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

void func_16(int iParam0, int iParam1)
{
	if ((Local_100.f_2[iParam0 /*23*/].f_2 != -1 || !func_11(Local_100.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0)) || iParam1)
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_1), 0);
			unk_0x0EE72DB1CD8A3B86(&(Local_100.f_192), Local_100.f_2[iParam0 /*23*/].f_2);
			Local_100.f_2[iParam0 /*23*/].f_2 = -1;
			Local_100.f_187 = (Local_100.f_187 - 1);
		}
		Local_100.f_2[iParam0 /*23*/].f_8 = { 0f, 0f, 0f };
		Local_100.f_2[iParam0 /*23*/].f_11 = 0f;
		Local_100.f_2[iParam0 /*23*/].f_22 = 0;
		Local_100.f_2[iParam0 /*23*/].f_19 = 0;
		unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iParam0 /*23*/].f_6), 3);
		iLocal_1723[iParam0] = 0;
	}
}

void func_17(int iParam0, int iParam1)
{
	Local_100.f_2[iParam0 /*23*/].f_7 = iParam1;
}

void func_18(int iParam0)
{
	if (!unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]))
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 != -1)
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)))
			{
				if (!func_24(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!unk_0x66614717522DA4A5(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, 3f, 3f, 3f, 0))
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
		if (!unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)))
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_100.f_192), Local_100.f_2[iParam0 /*23*/].f_2);
			Local_100.f_2[iParam0 /*23*/].f_2 = -1;
			Local_100.f_187 = (Local_100.f_187 - 1);
		}
	}
	if (Local_100.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (!unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_3)))
		{
			Local_100.f_2[iParam0 /*23*/].f_3 = -1;
		}
	}
}

int func_19(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	if (func_23(Global_2512808.f_779) && func_23(Global_2512808.f_780))
	{
		if (!unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]))
		{
			if (func_22(&(Local_100.f_2[iParam0 /*23*/]), Global_2512808.f_779, Param1, uParam4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				if (bParam5)
				{
					unk_0x48ED7B2293A96722(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), uParam4);
					unk_0xBD8D47FDC6902B2D(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), unk_0x3F90543934DCD7E6(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 2f, 0f, 0f), 1, 0, 0, 1);
				}
				unk_0xACE486395AA1867D(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1084227584);
				unk_0x67E8508973E4CC81(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1);
				unk_0x4C44781F822B0B00(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0, 0);
				unk_0xC7ED915AB706A5D8(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1);
				unk_0xF5A4934300C0568C(Local_100.f_2[iParam0 /*23*/], 1);
			}
		}
		if (!unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (func_21(&(Local_100.f_2[iParam0 /*23*/].f_1), Local_100.f_2[iParam0 /*23*/], 25, Global_2512808.f_780, -1, 1, 1, 1))
			{
				unk_0xFB2E9855F95E3BD3(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 5f);
				unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 1);
				unk_0x14776E43F90DD454(Global_2512808.f_779);
				unk_0x14776E43F90DD454(Global_2512808.f_780);
				unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0);
				unk_0x07224EEE13A1B6AE(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 29, 1);
				unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 251, 1);
				unk_0xC854D7A2E956B946(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 0);
				unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 5, 0);
				unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 17, 1);
				unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 512, 0);
				unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF2DB717A73826179((200f * Global_262145.f_153)), 0);
				func_20(&uLocal_2640, 8, unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "FM_TAXI", 0, 1);
				unk_0xF5A4934300C0568C(Local_100.f_2[iParam0 /*23*/].f_1, 1);
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]) || !unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
	{
		return 0;
	}
	unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iParam0 /*23*/].f_6), 4);
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
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

int func_21(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
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
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
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
		unk_0x9B8406983378711E(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam15)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam10);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam8)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, iParam9);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
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
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
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
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
	{
		iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
		uVar2 = unk_0x25D049AAC4603E65(iVar1);
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
			if (!unk_0xC80D31E4B587871C(Local_100.f_192, iVar0) && unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_1, 0))
			{
				if (func_29())
				{
					func_28(iVar0);
					unk_0x872F1C1F8587CCC7(&(Local_100.f_192), iVar0);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_1), 0);
				}
			}
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_4.f_2, 18))
				{
					if (Local_100.f_2[iVar3 /*23*/].f_2 != -1)
					{
						func_16(iVar3, 0);
					}
					unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 18);
				}
				if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_4.f_3, iVar3))
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
						if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_3, (0 + iVar3)))
						{
							if ((Local_100.f_2[iVar3 /*23*/].f_7 == 8 || Local_100.f_2[iVar3 /*23*/].f_7 == 1) || Local_100.f_2[iVar3 /*23*/].f_7 == 2)
							{
								func_17(iVar3, 3);
							}
						}
						if ((((func_27(iVar1, unk_0xF32FBF2453AC1753(Local_100.f_2[iVar3 /*23*/])) && Local_100.f_2[iVar3 /*23*/].f_7 != 6) && Local_100.f_2[iVar3 /*23*/].f_7 != 9) && Local_100.f_2[iVar3 /*23*/].f_7 != 10) && Local_100.f_2[iVar3 /*23*/].f_7 != 11)
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
							unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							if (Local_100.f_2[iVar3 /*23*/].f_2 != -1)
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_100.f_192), Local_100.f_2[iVar3 /*23*/].f_2);
								Local_100.f_2[iVar3 /*23*/].f_2 = -1;
								Local_100.f_187 = (Local_100.f_187 - 1);
							}
							Local_100.f_2[iVar3 /*23*/].f_3 = iVar0;
						}
						else if (unk_0x21B6FFFD04C9FF3A(uVar2, unk_0xF32FBF2453AC1753(Local_100.f_2[iVar3 /*23*/]), 120f, 120f, 120f, 0, 1, 0))
						{
							if (Local_100.f_2[iVar3 /*23*/].f_2 == -1)
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							}
							else if (Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							}
							unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
						}
						else if (unk_0x21B6FFFD04C9FF3A(uVar2, unk_0xF32FBF2453AC1753(Local_100.f_2[iVar3 /*23*/]), 300f, 300f, 300f, 0, 1, 0))
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
						}
						if (unk_0xF5D0CBECCA41314A(iVar1) > 0)
						{
							if (Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x872F1C1F8587CCC7(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
							}
						}
					}
					else if (Local_100.f_2[iVar3 /*23*/].f_3 == iVar0)
					{
						if (!func_27(iVar1, unk_0xF32FBF2453AC1753(Local_100.f_2[iVar3 /*23*/])))
						{
							func_16(iVar3, 1);
							Local_100.f_2[iVar3 /*23*/].f_3 = -1;
						}
						else
						{
							if (Local_100.f_2[iVar3 /*23*/].f_7 == 5 || Local_100.f_2[iVar3 /*23*/].f_7 == 7)
							{
								if (!unk_0xC80D31E4B587871C(Local_100.f_2[iVar3 /*23*/].f_6, 3) && unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_4.f_2, 3))
								{
									unk_0x872F1C1F8587CCC7(&(Local_100.f_2[iVar3 /*23*/].f_6), 3);
									unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 4);
									unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 5);
									func_17(iVar3, 5);
								}
								else if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_4.f_2, 4))
								{
									unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 4);
									func_17(iVar3, 7);
								}
								else if (Local_100.f_2[iVar3 /*23*/].f_7 == 7)
								{
									if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_4.f_2, 5))
									{
										unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 5);
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
									unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 20);
								}
							}
						}
						unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
						unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
					}
					if (Local_295[iVar0 /*44*/].f_4.f_19 == iVar3 && Local_100.f_2[iVar3 /*23*/].f_22 == 0)
					{
						if (Local_295[iVar0 /*44*/].f_4.f_18 != 0)
						{
							Local_100.f_2[iVar3 /*23*/].f_22 = Local_295[iVar0 /*44*/].f_4.f_18;
							Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_19 = -1;
							Local_295[iVar0 /*44*/].f_4.f_18 = 0;
						}
					}
					else if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_4.f_2, 6))
					{
						Local_100.f_2[iVar3 /*23*/].f_22 = 0;
						Local_295[iVar0 /*44*/].f_4.f_19 = -1;
						unk_0x0EE72DB1CD8A3B86(&(Local_295[iVar0 /*44*/].f_4.f_2), 6);
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_295[iVar0 /*44*/].f_1, 0) || Local_100.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 0);
					unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iVar3 /*23*/].f_6), 2);
				}
				else
				{
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar3 /*23*/].f_1))
					{
						func_26(&(Local_100.f_2[iVar3 /*23*/].f_1));
					}
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar3 /*23*/]))
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
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&uVar0);
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x95EC8AE7E4F33F6E(iParam1) + 1;
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x8EE3A848975DDF21(iParam1, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x317536BCEA8FA6B0(iParam1, (iVar0 - 1), 0);
				if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					if (unk_0x1417A5CC924DE120(iVar2))
					{
						if (unk_0x25D049AAC4603E65(iParam0) == iVar2)
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
		if (Local_100.f_2[iVar0 /*23*/].f_2 == -1 && !unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/]))
		{
			Local_100.f_2[iVar0 /*23*/].f_2 = iParam0;
			Local_100.f_187++;
			Local_100.f_189++;
			unk_0x872F1C1F8587CCC7(&(Local_100.f_190), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(Local_100.f_190), iVar0 + 8);
			unk_0x0EE72DB1CD8A3B86(&(Local_295[iParam0 /*44*/].f_1), 0);
			unk_0x872F1C1F8587CCC7(&(Local_100.f_2[iVar0 /*23*/].f_6), 4);
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
	
	Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_4 = Local_1753[iLocal_1739 /*3*/];
	if (unk_0xA6DECE14FC9A8C51(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_4))
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
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
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
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_35(uParam0, 0, 0);
		}
	}
}

void func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

void func_36()
{
	int iVar0;
	
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_778), 1);
	func_311();
	func_310();
	func_289(iLocal_2639);
	func_209();
	func_184(iLocal_2639);
	func_183(iLocal_2639);
	func_181(iLocal_2639);
	if (iLocal_2636 != iLocal_2639)
	{
		func_184(iLocal_2636);
		func_183(iLocal_2636);
		func_181(iLocal_2636);
	}
	iLocal_2639++;
	if (iLocal_2639 == 8)
	{
		fLocal_2638 = 99999f;
		iLocal_2636 = iLocal_2637;
		iLocal_2639 = 0;
	}
	func_43(iLocal_2636);
	if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
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
		if (unk_0x012BC3F18B8C7807(unk_0x6293B5D9388BE496()))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
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
	
	if (((((((Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 != -1 || !func_11(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5, 0f, 0f, 0f, 0)) || iLocal_1911 != iLocal_1910) || Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_18 != 0) || Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_19 != -1) || unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 10)) || unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 17)) || iParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 2);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 3);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 4);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 5);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 7);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 10);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 11);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 12);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 13);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 14);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 20);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 21);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 22);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 23);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 24);
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 25);
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_14 = 0f;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15 = 0;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 = -1;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_1 = -1;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_34 = -1;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_29 = 0f;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_33 = 0f;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_35 = -1;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_36 = { 0f, 0f, 0f };
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
		Global_103608 = 0;
		fLocal_1916 = unk_0xBBDA792448DB5A89(iLocal_1910);
		iLocal_1911 = iLocal_1910;
		iLocal_1912 = iLocal_1910;
		func_30(&uLocal_1914);
		fLocal_1913 = fLocal_1913;
		Local_1917 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_18 = 0;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_19 = -1;
		func_40(1, -1);
		unk_0xBC3B7443617858A0(1);
		unk_0xFCCDDE0E48CF9588("ODDJOBS@TAXI@DRIVER");
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_4 = 0;
		func_30(&uLocal_1733);
	}
	if (iParam0 == 1)
	{
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_24 = 0f;
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_29 = 0f;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_778, 2))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_778), 2);
	}
	if (unk_0x7118556A56307B25("taxi"))
	{
		unk_0xEE203D16F93269FA("taxi");
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1743))
	{
		unk_0x452336926718D62A(&iLocal_1743);
		unk_0x14776E43F90DD454(iLocal_1744);
	}
	if (unk_0x8EA3C8E091EA5BA4(uLocal_2619))
	{
		unk_0x7849794435F39D49(uLocal_2619, 0);
		unk_0x02934BABFD4CD384(uLocal_2619, 0);
		unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
		func_38();
	}
	if (iLocal_2618 == 0)
	{
		iLocal_2618 = 1;
	}
	if (iParam1 == 1 && Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1 != 0)
	{
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1 = 0;
	}
}

void func_38()
{
	func_39(4, 0, -1);
	unk_0xAB16218C4AA166BA();
	unk_0xB51C090E561B758E();
	unk_0xFD9E9247C92C97EC(0);
	unk_0xB8287AF2D8EF46CA(iLocal_2620);
	unk_0xABD857B52595E752(0);
}

void func_39(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1357530.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1046), iParam0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1357530.f_1046), iParam0);
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
	if (Global_17301.f_7931)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_17301.f_7931 = 0;
	}
	unk_0xA3E8E2D0F73E92C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0xF40900F61CC88931(9, 0);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_41(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_41(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0xA68F7B004463AB6F(uParam0);
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
		if (unk_0x3A711520F83BAE98() && unk_0x8C504A60C2F379BD())
		{
			iParam2 = unk_0x4362A980E5B3780B();
		}
	}
	StringCopy(&cVar0, unk_0x436287B7DB306165(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x8B948C59217A295D(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17301.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17301.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17301.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1) && func_13(Local_100.f_2[iParam0 /*23*/]))
		{
			if (unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0))
			{
				func_173(iParam0);
				func_166(iParam0);
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
	if (unk_0xC80D31E4B587871C(uLocal_1704, (0 + iParam0)))
	{
		unk_0x0EE72DB1CD8A3B86(&uLocal_1704, (0 + iParam0));
		if (func_31(&uLocal_1735))
		{
			func_30(&uLocal_1735);
		}
		if (func_48("TXM_H02"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3, (0 + iParam0)))
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			iLocal_1907 = 0;
		}
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3), (0 + iParam0));
	}
	func_46(&(uLocal_1714[iParam0]));
	if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 == iParam0)
	{
		func_37(1, 1, 0);
	}
	func_45(iParam0);
}

void func_45(int iParam0)
{
	if (unk_0xA6DECE14FC9A8C51(uLocal_1705[iParam0]))
	{
		unk_0xE30CF11C0EE14316(&(uLocal_1705[iParam0]));
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 12);
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
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
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
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_48(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_49(int iParam0)
{
	if ((unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0) && !unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502())) && !unk_0x27C8A4034A05DC21(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1)))
	{
		unk_0x6450931B826B49D9("ODDJOBS@TAXI@DRIVER");
		if (func_165(iParam0) && unk_0x3A801AA34DD821BE("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_100.f_2[iParam0 /*23*/].f_7 == 6)
			{
				if (unk_0x8EA3C8E091EA5BA4(uLocal_2619))
				{
					unk_0x7849794435F39D49(uLocal_2619, 0);
					unk_0x02934BABFD4CD384(uLocal_2619, 0);
					unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
					func_38();
				}
				if (unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
				{
					func_146(iParam0);
				}
			}
			else
			{
				if ((unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0 || Local_100.f_2[iParam0 /*23*/].f_7 == 9) || Local_100.f_2[iParam0 /*23*/].f_7 == 10)
				{
					func_7(iParam0, 0);
				}
				func_86(iParam0);
			}
			if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 != iParam0)
			{
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 = iParam0;
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_778), 2);
			}
			func_80(iParam0);
			func_79(iParam0);
		}
		func_55(iParam0);
		unk_0xD67F08F0EFD84A54(0);
		unk_0xD67F08F0EFD84A54(1);
		unk_0xD67F08F0EFD84A54(2);
		func_54();
		func_53();
		unk_0xAE6EBBBBD8B9FB30(unk_0xFC1458A37D98B502(), 2, 0);
		unk_0x4FB260623DD93924(0, 99, 1);
		unk_0x4FB260623DD93924(0, 100, 1);
		unk_0x4FB260623DD93924(0, 25, 1);
		unk_0x4FB260623DD93924(0, 73, 1);
		unk_0x4FB260623DD93924(0, 200, 1);
		func_52();
		if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
		{
			unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 376, 1);
		}
		if (func_51() || func_50(0))
		{
			unk_0x4FB260623DD93924(0, 75, 1);
		}
	}
	else if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 == iParam0)
	{
		if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				if ((Local_100.f_2[iParam0 /*23*/].f_7 != 9 && Local_100.f_2[iParam0 /*23*/].f_7 != 10) && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3, iParam0))
				{
					func_146(iParam0);
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3), iParam0);
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
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return Global_68215;
}

void func_52()
{
	Global_2522773.f_258 = 1;
}

void func_53()
{
	Global_2512808.f_4500 = 0;
}

void func_54()
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_55(int iParam0)
{
	char* sVar0;
	
	if (func_69())
	{
		if (unk_0x34D11AB5BA7922C2(uLocal_1920))
		{
			if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
			{
				sVar0 = unk_0xC9C4B2A22DE54C69(2, 218, 1);
				if (!unk_0x74C475EB8E73D398(sLocal_2621, sVar0))
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
				if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
				{
					if (Local_100.f_2[iParam0 /*23*/].f_7 != 6)
					{
						if (Global_103608 == 1 || bLocal_1906 == 1)
						{
							if (iLocal_1738 > 1)
							{
								func_65(2, 218, "TXM_CDES", &uLocal_1921, 0, 358);
							}
						}
						if (!bLocal_1906)
						{
							if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15 != Local_1753[iLocal_1739 /*3*/])
							{
								func_65(0, 176, "TXM_SLCT", &uLocal_1921, 0, 358);
							}
						}
						else if (Local_100.f_2[iParam0 /*23*/].f_7 == 5)
						{
							if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 4))
							{
								func_65(0, 177, "TXM_STOP", &uLocal_1921, 0, 358);
							}
							if (bLocal_1904)
							{
								func_65(0, 176, "TXM_SLCT", &uLocal_1921, 0, 358);
							}
							if (!unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 3) && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 3))
							{
								if (Local_100.f_2[iParam0 /*23*/].f_7 == 5)
								{
									func_65(0, 179, "TXM_HURY", &uLocal_1921, 0, 358);
								}
							}
						}
						else if (Local_100.f_2[iParam0 /*23*/].f_7 == 7)
						{
							if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 5))
							{
								func_65(0, 177, "TXM_STRT", &uLocal_1921, 0, 358);
							}
							if (bLocal_1904)
							{
								func_65(0, 176, "TXM_SLCT", &uLocal_1921, 0, 358);
							}
						}
						if (unk_0x4C4813CAAD70E814(2))
						{
							func_65(2, 199, "SPEC_PAUSE", &uLocal_1921, 0, 358);
						}
					}
				}
				iLocal_2617 = 0;
			}
			unk_0x7913685BF7335C7B(unk_0x01AB8D4D92922004());
			unk_0xAE8C92295C8F2D18(0);
			func_64(1);
			func_63(1);
			func_56(&uLocal_1920, &Local_2608, &uLocal_1921, func_62(&uLocal_1921));
		}
		else
		{
			uLocal_1920 = unk_0xD704C81492296A37("instructional_buttons");
		}
	}
	else
	{
		unk_0xA68F7B004463AB6F(&uLocal_1920);
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
	
	if (iParam3 == 1 || unk_0x8CFF76532FEF34D4(2))
	{
		*uParam2 = 0;
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(0);
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
		}
		func_61(uParam2);
	}
	if (Global_1315692 < 2)
	{
		func_63(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x34D11AB5BA7922C2(*uParam0))
		{
			*uParam0 = unk_0xD704C81492296A37("instructional_buttons");
		}
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0x050CFBB64D7E937F(*uParam0, "CLEAR_ALL");
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(1);
				unk_0x271AA5469AF471B3();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xC80D31E4B587871C(uParam2->f_676, iVar0))
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					if (!unk_0xC80D31E4B587871C(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_60(unk_0xC9C4B2A22DE54C69(iVar1, iVar2, 1));
						if (iVar3 < 358)
						{
							func_60(unk_0xC9C4B2A22DE54C69(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_60(unk_0x715308393E136EA8(uVar4, uVar5, 1));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_59(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (unk_0xC80D31E4B587871C(uParam2->f_678, iVar0))
						{
							unk_0x1869584A8A72FEDD(1);
							unk_0xD07D5CD276368D36(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x1869584A8A72FEDD(0);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					func_60(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xAB019B170BF1309C(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_60(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_59(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						unk_0x1869584A8A72FEDD(0);
						unk_0xD07D5CD276368D36(358);
					}
					unk_0x271AA5469AF471B3();
				}
				iVar0++;
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2(uParam2->f_686);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xD07D5CD276368D36(0);
			unk_0x271AA5469AF471B3();
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
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
}

void func_58(var uParam0, var uParam1)
{
	unk_0x28E092B1E386EB67(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_59(char* sParam0)
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_60(var uParam0)
{
	unk_0x8686005F83E832AE(uParam0);
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
	Global_1315692 = iParam0;
}

void func_64(int iParam0)
{
	Global_1359035.f_1079 = iParam0;
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
	unk_0x872F1C1F8587CCC7(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		unk_0x872F1C1F8587CCC7(&(uParam3->f_678), iVar0);
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
	if (!func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
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
	if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
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
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_73()
{
	return Global_92885.f_316 > 0;
}

int func_74(int iParam0, int iParam1)
{
	if (unk_0x0F30C1F1717A6437())
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
	if (unk_0x04D7390E1D7464B7())
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (Global_1312782)
	{
		return 0;
	}
	if (Global_1574129)
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_1312854;
}

bool func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

bool func_77()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_78()
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_79(int iParam0)
{
	if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 11))
	{
		if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_18 == 0)
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_18 = 26;
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_19 = iParam0;
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 11);
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
			if (unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 3) || unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 3))
			{
				fLocal_1916 = (fLocal_1916 + (fLocal_1913 * 1.5f));
			}
			else
			{
				fLocal_1916 = (fLocal_1916 + fLocal_1913);
			}
			func_30(&uLocal_1914);
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Local_1917, 0) > 50f)
		{
			if (unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 3) || unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 3))
			{
				fLocal_1916 = (fLocal_1916 + (fLocal_1913 * 1.5f));
			}
			else
			{
				fLocal_1916 = (fLocal_1916 + fLocal_1913);
			}
			func_30(&uLocal_1914);
			Local_1917 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
		}
		iLocal_1911 = unk_0x11E019C8F43ACC8A(fLocal_1916);
		if (iLocal_1911 > 5000)
		{
			iLocal_1911 = 5000;
		}
		if (iLocal_1911 != iLocal_1912)
		{
			unk_0x008F3E3CC076EA0E(uLocal_1745, "SET_TAXI_PRICE");
			unk_0xD07D5CD276368D36(iLocal_1911);
			unk_0x271AA5469AF471B3();
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
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
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
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_86(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
	{
		if (unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]) && unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/]) && unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/].f_1))
			{
				unk_0xF5A4934300C0568C(Local_100.f_2[iParam0 /*23*/], 0);
				unk_0xF5A4934300C0568C(Local_100.f_2[iParam0 /*23*/].f_1, 0);
				if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 10))
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
				if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/]))
				{
					unk_0xF5A4934300C0568C(Local_100.f_2[iParam0 /*23*/], 0);
				}
				else if (unk_0x04092215B40E1262(Local_100.f_2[iParam0 /*23*/]))
				{
				}
				if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/].f_1))
				{
					unk_0xF5A4934300C0568C(Local_100.f_2[iParam0 /*23*/].f_1, 0);
				}
			}
		}
	}
	else
	{
		unk_0xBC3B7443617858A0(1);
		if (unk_0x8EA3C8E091EA5BA4(uLocal_2619))
		{
			unk_0x7849794435F39D49(uLocal_2619, 0);
			unk_0x02934BABFD4CD384(uLocal_2619, 0);
			unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
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
		unk_0x008F3E3CC076EA0E(uLocal_1745, "CLEAR_TAXI_DISPLAY");
		unk_0x271AA5469AF471B3();
		iVar1 = 0;
		while (iVar1 < iLocal_1738)
		{
			if (!unk_0xA6DECE14FC9A8C51(Local_1753[iVar1 /*3*/]))
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
			if (func_93(unk_0x67247AA13B7486A3(Local_1753[iVar1 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
			{
				iLocal_2618 = 1;
				iLocal_1723[iParam0] = 0;
				return;
			}
			unk_0x008F3E3CC076EA0E(uLocal_1745, "ADD_TAXI_DESTINATION");
			unk_0xD07D5CD276368D36(iVar1);
			unk_0xD07D5CD276368D36(unk_0xD946FA1B9E94071E(Local_1753[iVar1 /*3*/]));
			if ((func_94(Local_1753[iVar1 /*3*/]) == 492 || func_94(Local_1753[iVar1 /*3*/]) == 475) && unk_0x8D01A69F4DC93CE6(Local_1753[iVar1 /*3*/]) == 0)
			{
				func_92(unk_0x054F3EDDF5178FA5(Local_1753[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0xD07D5CD276368D36(iVar2);
				unk_0xD07D5CD276368D36(iVar3);
				unk_0xD07D5CD276368D36(iVar4);
			}
			else
			{
				unk_0x31758B9A51671C43(unk_0x8D01A69F4DC93CE6(Local_1753[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0xD07D5CD276368D36(iVar2);
				unk_0xD07D5CD276368D36(iVar3);
				unk_0xD07D5CD276368D36(iVar4);
			}
			iVar9 = func_90(Local_1753[iVar1 /*3*/]);
			if (iVar9 == -1)
			{
				unk_0x7E099EB35339C80D("STRING");
				unk_0xA9347ABF9B242A1B(Local_1753[iVar1 /*3*/]);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("STRING");
				unk_0xA6D2B267C377D7B2(func_88(iVar9));
				unk_0x9748595E4799A2CF();
			}
			if (unk_0x5B4379CB58F97327(Local_1753[iVar1 /*3*/]) == 2)
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(unk_0x867AF4B85B2F563E(Local_1753[iVar1 /*3*/]))))
				{
					Var6 = { unk_0xB3328BA8976B416C(unk_0x07F64790D10D1DB5(unk_0x867AF4B85B2F563E(Local_1753[iVar1 /*3*/])), 1) };
				}
			}
			else if (unk_0x5B4379CB58F97327(Local_1753[iVar1 /*3*/]) == 1)
			{
				if (unk_0xB8DE76287EDC4957(unk_0x867AF4B85B2F563E(Local_1753[iVar1 /*3*/]), 0))
				{
					Var6 = { unk_0xB3328BA8976B416C(unk_0x867AF4B85B2F563E(Local_1753[iVar1 /*3*/]), 1) };
				}
			}
			else
			{
				Var6 = { unk_0x67247AA13B7486A3(Local_1753[iVar1 /*3*/]) };
			}
			func_59(unk_0x70B029F10FA5ED23(Var6));
			if ((((((func_94(Local_1753[iVar1 /*3*/]) == 40 || func_94(Local_1753[iVar1 /*3*/]) == 357) || func_94(Local_1753[iVar1 /*3*/]) == 475) || func_94(Local_1753[iVar1 /*3*/]) == 492) || func_94(Local_1753[iVar1 /*3*/]) == 557) || func_94(Local_1753[iVar1 /*3*/]) == 590) || func_94(Local_1753[iVar1 /*3*/]) == 591)
			{
				iVar10 = 0;
				while (iVar10 < 117)
				{
					iVar11 = iVar10;
					if (func_11(Var6, Global_1049531[iVar11 /*1951*/].f_3[0 /*3*/], 0))
					{
						iVar10 = 117;
						unk_0x7E099EB35339C80D("STRTNM1");
						unk_0xA6D2B267C377D7B2(&(Global_1049531[iVar11 /*1951*/].f_16));
						unk_0x9748595E4799A2CF();
						func_59("");
					}
					iVar10++;
				}
			}
			else if (Local_1753[iVar1 /*3*/].f_2 == 0)
			{
				if (Local_1753[iVar1 /*3*/].f_1 != 0)
				{
					unk_0x7E099EB35339C80D("STRTNM1");
					unk_0x5EF43AA3DC12491A(Local_1753[iVar1 /*3*/].f_1);
					unk_0x9748595E4799A2CF();
					func_59("");
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("STRTNM2");
				unk_0x5EF43AA3DC12491A(Local_1753[iVar1 /*3*/].f_1);
				unk_0x5EF43AA3DC12491A(Local_1753[iVar1 /*3*/].f_2);
				unk_0x9748595E4799A2CF();
			}
			if (((iLocal_2622 == 8 || iLocal_2622 == 9) || iLocal_2622 == 10) || iLocal_2622 == 12)
			{
				unk_0x1869584A8A72FEDD(1);
			}
			else
			{
				unk_0x1869584A8A72FEDD(0);
			}
			unk_0x271AA5469AF471B3();
			if (bLocal_1906)
			{
				if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15 == Local_1753[iVar1 /*3*/])
				{
					iLocal_1739 = iVar1;
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_4))
			{
				if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_4 == Local_1753[iVar1 /*3*/])
				{
					iLocal_1739 = iVar1;
				}
			}
			iVar1++;
		}
		if (bLocal_1906)
		{
			unk_0x008F3E3CC076EA0E(uLocal_1745, "SHOW_TAXI_DESTINATION");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uLocal_1745, "HIGHLIGHT_DESTINATION");
			unk_0xD07D5CD276368D36(iLocal_1739);
			unk_0x271AA5469AF471B3();
		}
		else
		{
			unk_0x008F3E3CC076EA0E(uLocal_1745, "SET_TAXI_PRICE");
			unk_0xD07D5CD276368D36(iLocal_1911);
			if (((iLocal_2622 == 8 || iLocal_2622 == 9) || iLocal_2622 == 10) || iLocal_2622 == 12)
			{
				unk_0x1869584A8A72FEDD(1);
			}
			else
			{
				unk_0x1869584A8A72FEDD(0);
			}
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uLocal_1745, "SHOW_TAXI_DESTINATION");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uLocal_1745, "HIGHLIGHT_DESTINATION");
			unk_0xD07D5CD276368D36(iLocal_1739);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xA6DECE14FC9A8C51(Local_1753[iLocal_1739 /*3*/]))
		{
			Var12 = { unk_0x67247AA13B7486A3(Local_1753[iLocal_1739 /*3*/]) };
			if ((!func_24(Var12) && unk_0x8EA3C8E091EA5BA4(uLocal_2619)) && unk_0xD85097DDDA5447BE(uLocal_2619))
			{
				unk_0x2013100217DAB86B(Var12.f_0, Var12.f_1);
			}
		}
		iLocal_2618 = 0;
		unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 10);
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
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
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
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = func_91(iVar1);
		if (Global_25578[iVar2 /*23*/].f_19 == iParam0)
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
		
		default:
			break;
	}
	return 263;
}

void func_92(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x53E140A02F0B3D1A(iParam0, 24, 31);
	*uParam2 = unk_0x53E140A02F0B3D1A(iParam0, 16, 23);
	*uParam3 = unk_0x53E140A02F0B3D1A(iParam0, 8, 15);
	*uParam4 = unk_0x53E140A02F0B3D1A(iParam0, 0, 7);
}

int func_93(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE97272C977DEADD3((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(var uParam0)
{
	var uVar0;
	
	if (unk_0xA6DECE14FC9A8C51(uParam0))
	{
		uVar0 = unk_0xD946FA1B9E94071E(uParam0);
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
			if (unk_0xA6DECE14FC9A8C51(Local_1753[iLocal_1739 /*3*/]))
			{
				iVar0 = 0;
				while (iVar0 < 50)
				{
					if (unk_0xA6DECE14FC9A8C51(Local_1753[iVar0 /*3*/]))
					{
						if (Local_1753[iLocal_1739 /*3*/] == Local_1753[iVar0 /*3*/])
						{
							if (func_11(unk_0x67247AA13B7486A3(Local_1753[iLocal_1739 /*3*/]), unk_0x67247AA13B7486A3(Local_1753[iVar0 /*3*/]), 0))
							{
								Var2 = { unk_0x67247AA13B7486A3(Local_1753[iVar0 /*3*/]) };
								if ((!func_24(Var2) && unk_0x8EA3C8E091EA5BA4(uLocal_2619)) && unk_0xD85097DDDA5447BE(uLocal_2619))
								{
									unk_0x2013100217DAB86B(Var2.f_0, Var2.f_1);
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
	
	uVar4 = unk_0x8B85A9204085F2E4(iParam1);
	while (unk_0xA6DECE14FC9A8C51(uVar4))
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
							case default:
						}
						bVar3 = true;
						Var5 = { unk_0x67247AA13B7486A3(uVar4) };
						if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 16)
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
						else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Var5, 250f, 250f, 250f, 0, 1, 0))
						{
							bVar3 = false;
						}
						else if (iParam1 != iLocal_99)
						{
							iVar8 = 0;
							while (iVar8 < 1)
							{
								if (func_105(Var5, Global_2512808.f_236[iVar8 /*3*/], 200f, 1) && !func_11(Global_2512808.f_236[iVar8 /*3*/], 0f, 0f, 0f, 0))
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
								if ((((unk_0x5B4379CB58F97327(uVar4) == 4 || unk_0x5B4379CB58F97327(uVar4) == 5) || unk_0x5B4379CB58F97327(uVar4) == 1) || unk_0x5B4379CB58F97327(uVar4) == 6) || unk_0x5B4379CB58F97327(uVar4) == 3)
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
		uVar4 = unk_0xAE4957CFA732BC41(iParam1);
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
	if (func_94(Local_1753[iParam3 /*3*/]) == unk_0x526A9A6B1B39C5F0())
	{
		if (Local_100.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0x67247AA13B7486A3(Local_1753[iParam3 /*3*/]) };
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
	if (func_94(Local_1753[iParam3 /*3*/]) == unk_0x526A9A6B1B39C5F0())
	{
		if (Local_100.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_295[Local_100.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0x67247AA13B7486A3(Local_1753[iParam3 /*3*/]) };
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
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xA6DECE14FC9A8C51(uParam0))
		{
			Var0 = { func_103(uParam0) - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
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
	iVar7 = unk_0x5B4379CB58F97327(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0x867AF4B85B2F563E(uParam0);
		if (unk_0xB8DE76287EDC4957(iVar3, 0))
		{
			Var0 = { unk_0xB3328BA8976B416C(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0x07F64790D10D1DB5(unk_0x867AF4B85B2F563E(uParam0));
		if (!unk_0x3AB6A1A9084FB0A4(iVar4))
		{
			Var0 = { unk_0xB3328BA8976B416C(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0xE5D69D5333979D8B(unk_0x867AF4B85B2F563E(uParam0));
		if (unk_0x6ADD12BF4D6D2587(iVar5))
		{
			Var0 = { unk_0xB3328BA8976B416C(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0x67247AA13B7486A3(uParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0xA6B5DBBF05BD3798(uParam0);
		if (unk_0xB8B3E5529EDB87D4(uVar6))
		{
			Var0 = { unk_0x20752E4B9ABBF6F5(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0x67247AA13B7486A3(uParam0) };
	}
	return Var0;
}

void func_104(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = *uParam1;
	if (!*uParam2 == Global_103591)
	{
		unk_0x2A3DF9EC613AA1CD(func_103(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		unk_0x2A3DF9EC613AA1CD(Local_100.f_2[iParam0 /*23*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_105(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0xBE3C4023003180FC(Param0, Param3, iParam7) <= fParam6;
}

int func_106(var uParam0)
{
	if (!unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		return 1;
	}
	if (Global_103588 == *uParam0)
	{
		return 1;
	}
	if (unk_0x054F3EDDF5178FA5(*uParam0) == 39)
	{
		return 1;
	}
	if (func_11(unk_0x67247AA13B7486A3(*uParam0), 0f, 0f, 0f, 0))
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
	
	if (unk_0xA6DECE14FC9A8C51(uParam0))
	{
		iVar0 = unk_0x66ADF337938784D4(uParam0);
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
	
	iVar0 = unk_0xA5F715018AF9A441();
	if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 12))
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
		iVar4 = unk_0xC45D692E0BD4797B();
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
					uVar3 = unk_0x8B85A9204085F2E4(unk_0x526A9A6B1B39C5F0());
					if (unk_0xA6DECE14FC9A8C51(uVar3))
					{
						Var0 = { unk_0x67247AA13B7486A3(uVar3) };
						if (unk_0x2A488C176D52CCA5(Var0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 250f)
						{
							iLocal_2618 = 1;
							iLocal_1723[iParam0] = 0;
							Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(Local_1753[Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]))
				{
					if (func_94(Local_1753[Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) == unk_0x526A9A6B1B39C5F0())
					{
						Var0 = { unk_0x67247AA13B7486A3(Local_1753[Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) };
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
			if (unk_0x4C4813CAAD70E814(2))
			{
				unk_0x01B48CB2F72AE113(2, 241);
				unk_0x01B48CB2F72AE113(2, 242);
				unk_0x01B48CB2F72AE113(2, 180);
				unk_0x01B48CB2F72AE113(2, 181);
			}
			if (iVar0 > 28 || unk_0x4CD14B4B1E8BD8BA(2, 180))
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
			if (iVar0 < -28 || unk_0xE8C126B7ADBB9D63(2, 181))
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
				unk_0xBC3B7443617858A0(1);
				if (iLocal_2618 == 0)
				{
					if (unk_0xE8C126B7ADBB9D63(0, 176))
					{
						if (unk_0xA6DECE14FC9A8C51(Local_1753[iLocal_1739 /*3*/]))
						{
							if (func_132(unk_0x67247AA13B7486A3(Local_1753[iLocal_1739 /*3*/])))
							{
								iLocal_1909 = 0;
								Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15 = { Local_1753[iLocal_1739 /*3*/] };
								Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5 = { unk_0x67247AA13B7486A3(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15) };
								Local_1917 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
								func_30(&uLocal_1914);
								func_80(iParam0);
								bLocal_1906 = true;
								if (iLocal_2620 != 5)
								{
									unk_0xB8287AF2D8EF46CA(iLocal_2620);
								}
								iLocal_1909 = 0;
								bLocal_1904 = false;
								iLocal_1905 = 1;
								iLocal_2617 = 1;
								func_114(2, iParam0);
								unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 4);
								unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 20);
								unk_0x0EE72DB1CD8A3B86(&(Local_100.f_2[iParam0 /*23*/].f_6), 3);
							}
							else
							{
								func_114(27, iParam0);
							}
						}
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 7) && bLocal_1906 == 0)
			{
				iLocal_2617 = 1;
				func_114(1, iParam0);
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 7);
			}
		}
		else
		{
			unk_0xBC3B7443617858A0(0);
			if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 4) && Local_100.f_2[iParam0 /*23*/].f_7 == 5)
			{
				if (unk_0xE8C126B7ADBB9D63(0, 177))
				{
					unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 4);
					unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 5);
					iLocal_2617 = 1;
					func_114(24, iParam0);
				}
			}
			else if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 5) && Local_100.f_2[iParam0 /*23*/].f_7 == 7)
			{
				if (unk_0xE8C126B7ADBB9D63(0, 177))
				{
					unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 5);
					unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 4);
					iLocal_2617 = 1;
					func_114(25, iParam0);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 3) && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 3))
			{
				if (Local_100.f_2[iParam0 /*23*/].f_7 == 5 && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 4))
				{
					unk_0x4FB260623DD93924(0, 99, 1);
					unk_0x4FB260623DD93924(0, 100, 1);
					if (unk_0xE8C126B7ADBB9D63(0, 179))
					{
						func_114(20, iParam0);
						func_113(iParam0, 0, 0);
						iLocal_2617 = 1;
						unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 3);
					}
				}
			}
			if (bLocal_1904)
			{
				if (func_112())
				{
					if (iLocal_2618 == 0)
					{
						if (unk_0xE8C126B7ADBB9D63(0, 176))
						{
							if (unk_0xA6DECE14FC9A8C51(Local_1753[iLocal_1739 /*3*/]))
							{
								if (func_132(unk_0x67247AA13B7486A3(Local_1753[iLocal_1739 /*3*/])))
								{
									func_114(9, iParam0);
									if (iLocal_2620 != 5)
									{
										unk_0xB8287AF2D8EF46CA(iLocal_2620);
									}
									iLocal_1909 = 0;
									bLocal_1904 = false;
									iLocal_1905 = 1;
									Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15 = { Local_1753[iLocal_1739 /*3*/] };
									Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5 = { unk_0x67247AA13B7486A3(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_15) };
									Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
									Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_33 = 0f;
									Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_34 = -1;
									unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 4);
									unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 20);
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
						unk_0xB8287AF2D8EF46CA(iLocal_2620);
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
						unk_0xB8287AF2D8EF46CA(iLocal_2620);
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
		unk_0xBC3B7443617858A0(1);
	}
	unk_0x7913685BF7335C7B(uLocal_1740);
	unk_0x5A66A86A47AC3B57(4);
	unk_0xAE8C92295C8F2D18(1);
	if (unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0))
	{
		unk_0x0EB9853DF8BC0D87(uLocal_1745, fLocal_1749, fLocal_1750, fLocal_1747, fLocal_1748, 0, 0, 0, 255, 0);
	}
}

int func_112()
{
	if (unk_0x8EA3C8E091EA5BA4(uLocal_2619))
	{
		if (unk_0xD85097DDDA5447BE(uLocal_2619))
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
	if (unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
	{
		if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1)))
			{
				if (bParam2)
				{
					unk_0xCB3D88C918AA637C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
				}
				if (bParam1)
				{
					unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
				}
				else if (!unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
				{
					if (!unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						if (!unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
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
		if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam1 /*23*/].f_1))
		{
			if (!func_131())
			{
				if (iParam0 != 0)
				{
					func_20(&uLocal_2640, 8, unk_0x47BA76CE3C825A08(Local_100.f_2[iParam1 /*23*/].f_1), "FM_TAXI", 0, 1);
					if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
					{
						unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam1 /*23*/].f_1), unk_0xFC1458A37D98B502(), 4000, 0, 2);
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 1;
	return func_116(sParam2, iParam3, 0);
}

int func_116(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_76(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_128();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_121();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_120())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_118();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_117();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_118()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_119()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_122();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_122()
{
	func_123();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_123()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_126(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_125(unk_0xFC1458A37D98B502());
			if (func_124(iVar0) && (!func_127(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_124(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_124(int iParam0)
{
	return iParam0 < 3;
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
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
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_127(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

void func_129()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_131()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
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
		if (!func_24(Global_2512808.f_236[iVar0 /*3*/]))
		{
			if (func_105(Param0, Global_2512808.f_236[iVar0 /*3*/], 200f, 1))
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
		else if (!unk_0xD85097DDDA5447BE(uLocal_2619))
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
	
	unk_0x008F3E3CC076EA0E(uLocal_1745, "SET_INPUT_EVENT");
	unk_0xD07D5CD276368D36(9);
	unk_0x271AA5469AF471B3();
	iLocal_1739++;
	if (iLocal_1739 > (iLocal_1738 - 1))
	{
		iLocal_1739 = 0;
	}
	if (unk_0xA6DECE14FC9A8C51(Local_1753[iLocal_1739 /*3*/]))
	{
		Var0 = { unk_0x67247AA13B7486A3(Local_1753[iLocal_1739 /*3*/]) };
		if (!func_24(Var0))
		{
			unk_0x2013100217DAB86B(Var0.f_0, Var0.f_1);
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
		else if (!unk_0xD85097DDDA5447BE(uLocal_2619))
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
	
	unk_0x008F3E3CC076EA0E(uLocal_1745, "SET_INPUT_EVENT");
	unk_0xD07D5CD276368D36(8);
	unk_0x271AA5469AF471B3();
	iLocal_1739 = (iLocal_1739 - 1);
	if (iLocal_1739 < 0)
	{
		iLocal_1739 = (iLocal_1738 - 1);
		if (iLocal_1739 < 0)
		{
			iLocal_1739 = 0;
		}
	}
	if (unk_0xA6DECE14FC9A8C51(Local_1753[iLocal_1739 /*3*/]))
	{
		Var0 = { unk_0x67247AA13B7486A3(Local_1753[iLocal_1739 /*3*/]) };
		if (!func_24(Var0))
		{
			unk_0x2013100217DAB86B(Var0.f_0, Var0.f_1);
		}
	}
}

void func_137(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_138(int iParam0)
{
	if (func_13(Local_100.f_2[iParam0 /*23*/]))
	{
		if (!unk_0x8EA3C8E091EA5BA4(uLocal_2619))
		{
			if ((!func_145() && !func_76(8, -1)) && Local_100.f_2[iParam0 /*23*/].f_7 != 6)
			{
				uLocal_2619 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", 1);
				unk_0x1F2D9CBE337F9DB2(uLocal_2619, unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_2629, 1);
				func_141(iParam0);
				unk_0x341777386ED38E28(uLocal_2619, 1);
				unk_0x3458550DF8E9B453(1, 0, 3000, 1, 0, 0);
				unk_0xABD857B52595E752(1);
				iLocal_2617 = 1;
				Global_103608 = 1;
			}
		}
		else if (bLocal_1906)
		{
			if (!Global_103608)
			{
				if (iLocal_1909)
				{
					if (!unk_0xD85097DDDA5447BE(uLocal_2619))
					{
						iLocal_2620 = unk_0xA6A635F2EC8D54C7();
						if (iLocal_2620 != 5)
						{
							if (unk_0xA6A635F2EC8D54C7() != 4)
							{
								unk_0xB8287AF2D8EF46CA(4);
							}
						}
						func_39(4, 1, -1);
						func_140();
						Global_103608 = 1;
						unk_0x7849794435F39D49(uLocal_2619, 1);
						unk_0x3458550DF8E9B453(1, 0, 3000, 1, 0, 0);
						unk_0xABD857B52595E752(1);
						func_141(iParam0);
						iLocal_2617 = 1;
						iLocal_1909 = 0;
						Global_103608 = 1;
					}
				}
			}
			if ((((unk_0xA6A635F2EC8D54C7() == 4 && !unk_0xE8C126B7ADBB9D63(2, 23)) && !func_145()) && !func_76(8, -1)) && Local_100.f_2[iParam0 /*23*/].f_7 != 6)
			{
				if (unk_0xD85097DDDA5447BE(uLocal_2619))
				{
					func_141(iParam0);
				}
			}
			else if ((unk_0xD85097DDDA5447BE(uLocal_2619) && !func_145()) && !func_76(8, -1))
			{
				unk_0x7849794435F39D49(uLocal_2619, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				if (iLocal_2620 != 5)
				{
					unk_0xB8287AF2D8EF46CA(iLocal_2620);
				}
				iLocal_1909 = 0;
				bLocal_1904 = false;
				iLocal_1905 = 1;
				unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
				unk_0xABD857B52595E752(0);
				Global_103608 = 0;
				unk_0xAB16218C4AA166BA();
				unk_0xB51C090E561B758E();
				unk_0xFD9E9247C92C97EC(0);
				iLocal_2617 = 1;
				func_139();
			}
		}
		else if (unk_0xD85097DDDA5447BE(uLocal_2619))
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
	unk_0x008F3E3CC076EA0E(uLocal_1745, "HIGHLIGHT_DESTINATION");
	unk_0xD07D5CD276368D36(iLocal_1739);
	unk_0x271AA5469AF471B3();
}

void func_140()
{
	if (!func_24(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5))
	{
		if (unk_0x8EA3C8E091EA5BA4(uLocal_2619) && unk_0xD85097DDDA5447BE(uLocal_2619))
		{
			unk_0x2013100217DAB86B(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5, Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_5.f_1);
			unk_0xE7CF36BE055ECD7A(0);
			unk_0xFD9E9247C92C97EC(1400);
		}
	}
}

void func_141(int iParam0)
{
	if (unk_0x8EA3C8E091EA5BA4(uLocal_2619))
	{
		func_142(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), &uLocal_2619, Local_2633);
		unk_0xE43C573FE3C5D758(uLocal_2619, fLocal_2632);
		unk_0x7A5CBE84E165CD64(uLocal_2619, 0.01f);
	}
	if (unk_0x0F30C1F1717A6437())
	{
		if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 13))
		{
			unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 13);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 13))
	{
		func_140();
		unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 13);
	}
	unk_0x68961B3FF6557B98();
	unk_0x6EA62DF7919D40F6();
}

void func_142(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x8EA3C8E091EA5BA4(*uParam1))
		{
			Var0 = { unk_0xDB824D597B53CC40(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_144(unk_0x3F90543934DCD7E6(iParam0, Param2) - unk_0x3F90543934DCD7E6(iParam0, Local_2629)) };
			func_143(Var6, &uVar3, &uVar4, 1);
			unk_0xBEBD5CAE3510CD2A(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_143(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0xF5596B3A7E5F3C68(Param0.f_0, Param0.f_1);
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
		*uParam3 = unk_0xF5596B3A7E5F3C68(Param0.f_2, fVar0);
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
	return Global_17160;
}

void func_146(int iParam0)
{
	var uVar0;
	
	if ((((Local_100.f_2[iParam0 /*23*/].f_7 == 2 || Local_100.f_2[iParam0 /*23*/].f_7 == 4) || Local_100.f_2[iParam0 /*23*/].f_7 == 5) || Local_100.f_2[iParam0 /*23*/].f_7 == 6) || Local_100.f_2[iParam0 /*23*/].f_7 == 7)
	{
		if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 2))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
			{
				if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_3)))
				{
					if (Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
					{
						if (unk_0x90D5DFB054818BA7(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) > 5f)
						{
							func_114(12, iParam0);
							if (iLocal_1911 > iLocal_1910)
							{
								if (!unk_0x27C8A4034A05DC21(unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3), iParam0);
									unk_0x0849193C1EA73C64(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_3)), 37, unk_0xAF22430031BD1E97(2));
									if (!unk_0xF491DD47B88AA84E())
									{
										func_164("TXI_HWRUN", -1);
									}
								}
							}
						}
						else if (iLocal_1911 > iLocal_1910)
						{
							if (func_161(unk_0x9EB17624F44A8DA4()) >= iLocal_1911 && unk_0x2C94498F5F172591(iLocal_1911, 0, 0, 1, -1))
							{
								if (Local_100.f_2[iParam0 /*23*/].f_7 == 6)
								{
									func_114(5, iParam0);
								}
								else
								{
									func_114(13, iParam0);
								}
								if (func_160())
								{
									func_150(-1834046564, iLocal_1911, &uVar0, 0, 1, 0);
								}
								else
								{
									func_147(-iLocal_1911, 0);
									unk_0x2BDF64D337150D0E(iLocal_1911, 0, 1);
								}
							}
							else
							{
								func_114(7, iParam0);
								if (!unk_0x27C8A4034A05DC21(unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3), iParam0);
									unk_0x0849193C1EA73C64(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_3)), 37, unk_0xAF22430031BD1E97(2));
									if (!unk_0xF491DD47B88AA84E())
									{
										func_164("TXI_HNMON", -1);
									}
								}
							}
						}
						else
						{
							func_114(13, iParam0);
						}
						unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 2);
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
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_4 = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 = (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_148(iVar1, 0);
	}
}

void func_150(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_160())
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
	if (!func_160())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_159()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_158(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_157(1, iParam4);
			Global_4262414 = 0;
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
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
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
	if (!func_160())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_156(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_154(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_154(var uParam0)
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
	func_155(&(uParam0->f_8.f_3));
	func_155(&(uParam0->f_8.f_16));
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
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_157(int iParam0, var uParam1)
{
	Global_2459156 = uParam1;
	Global_2459155 = iParam0;
}

int func_158(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_160())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_159()
{
	return Global_1312736;
}

int func_160()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_161(int iParam0)
{
	var uVar0;
	
	uVar0 = func_162(iParam0);
	return uVar0;
}

int func_162(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return unk_0x3C5A2E3D125A1FB1(-1);
		}
		else if (func_163(iParam0))
		{
			return Global_1595693[iParam0 /*680*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

void func_164(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_165(int iParam0)
{
	char* sVar0;
	
	sVar0 = "taxi_display";
	if (unk_0x6ADD12BF4D6D2587(iLocal_1743))
	{
		return 1;
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_1744);
		uLocal_1745 = unk_0xD704C81492296A37(sVar0);
		if (unk_0x9A0B2ED5055D3F0B(iLocal_1744) && unk_0x34D11AB5BA7922C2(uLocal_1745))
		{
			if (func_13(Local_100.f_2[iParam0 /*23*/]))
			{
				iLocal_1743 = unk_0x5E35CF35E65D69B9(iLocal_1744, unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1), 0, 0, 0);
				unk_0xA9D382E7BA095148(iLocal_1743, unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), unk_0xD323488FDDE4A80F(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), "Chassis"), Local_2623, Local_2626, 0, 0, 0, 0, 2, 1);
				if (!unk_0x7118556A56307B25("taxi"))
				{
					unk_0xD6C700D60B3E88BC("taxi", 0);
					if (!unk_0xB3A480393C690E8F(unk_0x82FF3DFBC3965CC0(iLocal_1743)))
					{
						unk_0xC4ED0C74AE77D371(unk_0x82FF3DFBC3965CC0(iLocal_1743));
					}
				}
				uLocal_1740 = unk_0x3B46B5E6947B1597("taxi");
				return 1;
			}
		}
	}
	return 0;
}

void func_166(int iParam0)
{
	var uVar0;
	
	if (func_169())
	{
		if (Local_100.f_2[iParam0 /*23*/].f_7 == 8 && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 20f, 20f, 3f, 0, 1, 1))
		{
			unk_0x6450931B826B49D9("TAXI_HAIL");
			if (unk_0x3A801AA34DD821BE("TAXI_HAIL"))
			{
				if (uLocal_1714[iParam0] == -1)
				{
					func_168(&(uLocal_1714[iParam0]), 0, "TXM_H01", 1, 0, 0, 0);
				}
				if (func_167(uLocal_1714[iParam0], 1))
				{
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7))
					{
						unk_0x6931076730A4AC5D(&uVar0);
						unk_0xF1794430C256DBC0(0, 0);
						unk_0x12C9D41D52A560D6(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x1B16DD5C115FE009(uVar0);
						unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), uVar0);
						unk_0xFAA3EF7FF92E1F9E(&uVar0);
					}
					else
					{
						unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
					}
					if (func_48("TXM_H01"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_1 = iParam0;
					unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 23);
					unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 22);
					func_46(&(uLocal_1714[iParam0]));
				}
			}
		}
		else
		{
			unk_0xFCCDDE0E48CF9588("TAXI_HAIL");
			func_46(&(uLocal_1714[iParam0]));
		}
	}
	else
	{
		unk_0xFCCDDE0E48CF9588("TAXI_HAIL");
		func_46(&(uLocal_1714[iParam0]));
	}
}

int func_167(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1 && Global_36565[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36565[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36565[iVar0 /*32*/].f_5 = 1;
			Global_36565[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36565[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36565[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_168(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
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
		if (!Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/] = 1;
			Global_36565[iVar0 /*32*/].f_1 = Global_36766;
			Global_36766++;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_29 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36565[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36565[iVar0 /*32*/].f_6 = iParam3;
			Global_36565[iVar0 /*32*/].f_31 = unk_0xBBA15366508D1BDE();
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB019B170BF1309C(sParam4))
			{
				Global_36565[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36565[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36565[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36565[iVar0 /*32*/].f_12 = 0;
				Global_36565[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_169()
{
	if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_1 != -1)
		{
			return 0;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			return 0;
		}
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
		{
			return 0;
		}
		if (func_170(unk_0x9EB17624F44A8DA4(), 1))
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
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_171(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_171(int iParam0)
{
	return func_172(iParam0);
}

bool func_172(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	if (((((((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 10f, 10f, 2f, 0, 1, 0) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && unk_0x90D5DFB054818BA7(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) < 3f) && !func_180(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) <= 0) && Local_100.f_2[iParam0 /*23*/].f_7 != 9) && Local_100.f_2[iParam0 /*23*/].f_7 != 10) && Local_100.f_2[iParam0 /*23*/].f_7 != 11)
	{
		if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3, (0 + iParam0)))
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
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3), (0 + iParam0));
						iLocal_1907 = 0;
					}
				}
			}
		}
		else
		{
			if (!unk_0xC80D31E4B587871C(uLocal_1704, (0 + iParam0)))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					uVar5 = func_179(1187, -1, 0);
					if ((!unk_0xC80D31E4B587871C(uVar5, 7) || !unk_0xC80D31E4B587871C(uVar5, 8)) || !unk_0xC80D31E4B587871C(uVar5, 9))
					{
						if (func_85(&uLocal_1735, 20000, 0))
						{
							if ((((unk_0x1ACD6691B9C9AA46(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) == unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) && unk_0x3B9B1F02BCD69306(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1119092736)) && !unk_0x0BA31FF7931F3DD3(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]))) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) && !func_177(unk_0x9EB17624F44A8DA4()))
							{
								func_164("TXM_H02", -1);
								if (!unk_0xC80D31E4B587871C(uVar5, 7))
								{
									unk_0x872F1C1F8587CCC7(&uVar5, 7);
								}
								else if (!unk_0xC80D31E4B587871C(uVar5, 8))
								{
									unk_0x872F1C1F8587CCC7(&uVar5, 8);
								}
								else
								{
									unk_0x872F1C1F8587CCC7(&uVar5, 9);
								}
								func_175(1187, uVar5, -1, 1, 0);
								func_30(&uLocal_1735);
								unk_0x872F1C1F8587CCC7(&uLocal_1704, (0 + iParam0));
							}
						}
					}
				}
			}
			if (unk_0xF2B58F79D29425B4(0, 23))
			{
				if (unk_0xC9D9444186B5A374() > 275)
				{
					if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3, (0 + iParam0)))
					{
						if (func_174(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) == 1)
						{
							if (unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1, 0))
							{
								iVar4 = 1;
							}
							else if (unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 2, 0))
							{
								iVar4 = 2;
							}
							else
							{
								iVar4 = 0;
							}
						}
						else if (unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 2, 0))
						{
							iVar4 = 2;
						}
						else if (unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0, 0))
						{
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						unk_0x6F8C8278B7C06889(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), -1, iVar4, 1f, 8388608, 0);
						unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3), (0 + iParam0));
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
		if (unk_0xC80D31E4B587871C(uLocal_1704, (0 + iParam0)))
		{
			unk_0x0EE72DB1CD8A3B86(&uLocal_1704, (0 + iParam0));
			if (func_48("TXM_H02"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
		if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3, (0 + iParam0)))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				iLocal_1907 = 0;
			}
			unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_3), (0 + iParam0));
		}
	}
}

int func_174(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			Var0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0x3F90543934DCD7E6(iParam0, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0x3F90543934DCD7E6(iParam0, -1f, -0.5f, 0f) };
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

void func_175(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_176(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, uParam1, iParam3);
	}
}

int func_176(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_159();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

bool func_177(int iParam0)
{
	return func_178(iParam0) == joaat("weapon_minigun");
}

int func_178(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_522;
}

int func_179(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_176(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x8EE3A848975DDF21(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0x317536BCEA8FA6B0(iParam0, (iVar0 - 1), 0);
				if (unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_181(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
	{
		if (Local_100.f_2[iParam0 /*23*/].f_3 == -1)
		{
			if (Local_100.f_2[iParam0 /*23*/].f_7 == 3)
			{
				if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1))
					{
						if (func_13(Local_100.f_2[iParam0 /*23*/]))
						{
							if (unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0))
							{
								func_182(iParam0);
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

void func_182(int iParam0)
{
	if (!unk_0xA6DECE14FC9A8C51(uLocal_1705[iParam0]))
	{
		uLocal_1705[iParam0] = unk_0xCA43F0FC44D9B846(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]));
		unk_0x4B4040A0EC7DBA81(uLocal_1705[iParam0], 198);
		unk_0x62BD54E491535B76(uLocal_1705[iParam0], "TXM_BLIP");
		unk_0x0A8FD2D5529E1737(uLocal_1705[iParam0], 1);
		unk_0xAA75C45BC4449A40(uLocal_1705[iParam0], 7000);
		unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 12);
	}
}

void func_183(int iParam0)
{
	if (!unk_0xC80D31E4B587871C(Global_2512808.f_778, 1))
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_1705[iParam0]))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_778), 1);
		}
	}
	if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1, 0))
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1), 0);
		}
	}
}

void func_184(int iParam0)
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
		if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/].f_1) && unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/]))
		{
			iVar3 = 3;
			Var4 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0) };
			if (Local_100.f_2[iParam0 /*23*/].f_7 != 11)
			{
				if (Local_100.f_2[iParam0 /*23*/].f_7 != 9)
				{
					if (Local_100.f_2[iParam0 /*23*/].f_7 != 10)
					{
						unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 251, 1);
						if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3, iParam0))
						{
							if (func_207(iParam0))
							{
								func_37(1, 1, 1);
								unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3), iParam0);
							}
						}
						if (Local_100.f_2[iParam0 /*23*/].f_7 != 8)
						{
							unk_0x8DAC4E7A3269A2CE(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1);
						}
					}
				}
			}
			func_206(iParam0);
			switch (Local_100.f_2[iParam0 /*23*/].f_7)
			{
				case 0:
					break;
				
				case 1:
					if (Local_100.f_2[iParam0 /*23*/].f_2 != -1 && Local_100.f_2[iParam0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
					{
						if (func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							if (func_202(iParam0, func_205(unk_0x9EB17624F44A8DA4()), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), 250))
							{
								Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
								unk_0x87A3E70B0AB01608(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
						{
							iVar1 = iLocal_1751;
							unk_0x87A3E70B0AB01608(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
						}
						unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
					}
					break;
				
				case 2:
					if (Local_100.f_2[iParam0 /*23*/].f_2 != -1 && Local_100.f_2[iParam0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
					{
						if (!unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
						{
							if (func_199(Var4, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29)))
							{
								unk_0x0F07FAE596C56D61(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 0.5f);
								if (unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 14))
								{
									unk_0x9E8EE202E802AC5B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 0, 60f, 0);
								}
								else
								{
									unk_0x9E8EE202E802AC5B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 3, 60f, 0);
								}
								iLocal_2617 = 1;
								unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
							}
						}
						unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
					}
					break;
				
				case 3:
					if (Local_100.f_2[iParam0 /*23*/].f_2 != -1 && Local_100.f_2[iParam0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
					{
						if (!unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 23))
						{
							unk_0x2883644E7F3F1871(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 2500, unk_0x8B948C59217A295D("NORMAL"), 0);
							unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
						}
						if (!unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 22))
						{
							unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
							iLocal_2617 = 1;
							unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						}
						else if (!unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
						{
							if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x84801DF26E514929(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) != 5)
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
							}
						}
					}
					break;
				
				case 4:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
					{
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33 = 0f;
						Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = -1;
					}
					if (func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						func_113(iParam0, 0, 0);
					}
					unk_0x6450931B826B49D9("ODDJOBS@TAXI@DRIVER");
					if (unk_0x3A801AA34DD821BE("ODDJOBS@TAXI@DRIVER"))
					{
						if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0x0F89A4E8C59BFAAF(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0xCB3D88C918AA637C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
								unk_0x12C9D41D52A560D6(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
							}
						}
						else if (!unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
								{
									unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Var4, 5, 5f, 1076627627, -1f, 1f, 1);
								}
							}
							else if (unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0, 0))
							{
								unk_0xCB3D88C918AA637C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
								unk_0x12C9D41D52A560D6(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 5:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
					{
						if (func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0) && func_11(Local_100.f_2[iParam0 /*23*/].f_8, Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_5, 0))
						{
							if (Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 == -1)
							{
								if (func_198(Local_100.f_2[iParam0 /*23*/].f_8, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0) || func_188(Local_100.f_2[iParam0 /*23*/].f_8, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0))
								{
									unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									func_113(iParam0, 0, 0);
									iLocal_2617 = 1;
								}
								Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
							}
							else
							{
								iVar8 = unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]);
								if (func_185(&iVar8, Local_100.f_2[iParam0 /*23*/].f_8, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), &(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34), 1000))
								{
									unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
									func_113(iParam0, 0, 0);
									iLocal_2617 = 1;
								}
							}
						}
						if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							unk_0x6450931B826B49D9("ODDJOBS@TAXI@DRIVER");
							if (unk_0x3A801AA34DD821BE("ODDJOBS@TAXI@DRIVER"))
							{
								unk_0xCB3D88C918AA637C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
								unk_0x12C9D41D52A560D6(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
						}
						else if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0xCA854FCB18A4FD22(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
						{
							if (!func_8(iParam0))
							{
								if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 242628503, 1))
								{
									fVar2 = 15f;
									iVar1 = iLocal_1751;
									iVar3 = 3;
									if (unk_0xC80D31E4B587871C(Local_100.f_2[iParam0 /*23*/].f_6, 3) || unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 3))
									{
										fVar2 = 20f;
										iVar1 = iLocal_1752;
									}
									if (unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 14))
									{
										iVar3 = 0;
									}
									func_113(iParam0, 1, 1);
									unk_0x0F07FAE596C56D61(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 0.5f);
									unk_0x6931076730A4AC5D(&uVar0);
									unk_0x94B94B1663C8D232(0, unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, fVar2, iVar1, 45f);
									unk_0x9E8EE202E802AC5B(0, unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33, iVar3, 60f, 1);
									unk_0x1B16DD5C115FE009(uVar0);
									unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), uVar0);
									unk_0xFAA3EF7FF92E1F9E(&uVar0);
									iLocal_2617 = 1;
								}
							}
						}
						unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
						unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
					}
					break;
				
				case 6:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
					{
						if (!unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 24))
						{
							if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 242628503, 1))
							{
								unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
								iLocal_2617 = 1;
								unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!unk_0x9EC5112BB1C4047A(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x84801DF26E514929(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) != 5)
								{
									unk_0x0EE72DB1CD8A3B86(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
								}
							}
							func_7(iParam0, 1);
						}
					}
					break;
				
				case 7:
					if (Local_100.f_2[iParam0 /*23*/].f_3 != -1 && Local_100.f_2[iParam0 /*23*/].f_3 == unk_0x622FF3AE4B1D07C3())
					{
						iLocal_2617 = 1;
						if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0x0F89A4E8C59BFAAF(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0x6450931B826B49D9("ODDJOBS@TAXI@DRIVER");
								if (unk_0x3A801AA34DD821BE("ODDJOBS@TAXI@DRIVER"))
								{
									unk_0xCB3D88C918AA637C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
									unk_0x12C9D41D52A560D6(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
								}
							}
						}
						else if (!unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!unk_0xC80D31E4B587871C(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 25))
							{
								if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x84801DF26E514929(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) != 5)
								{
									func_113(iParam0, 1, 1);
									unk_0x9E8EE202E802AC5B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 1), unk_0xF0371FE6E2BF9599(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1)), 3, 60f, 0);
								}
								unk_0x872F1C1F8587CCC7(&(Local_295[Local_100.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
							}
						}
					}
					break;
				
				case 8:
					unk_0x8DAC4E7A3269A2CE(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0);
					if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x6450931B826B49D9("ODDJOBS@TAXI@DRIVER");
						if (unk_0x3A801AA34DD821BE("ODDJOBS@TAXI@DRIVER"))
						{
							unk_0xCB3D88C918AA637C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1));
							unk_0x12C9D41D52A560D6(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					else if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0xCA854FCB18A4FD22(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1), 8, 12f, 786599, 400f, -1f, 0);
					}
					break;
				
				case 9:
				case 10:
					func_7(iParam0, 0);
					if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					{
						unk_0x9C16A63EBDA5A08E(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x9C16A63EBDA5A08E(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xA5F6598E13F98E08(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0x9C16A63EBDA5A08E(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 251, 0);
					unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 0);
					unk_0x8DAC4E7A3269A2CE(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0);
					if (((!unk_0xA6FA9E5D08F067AD(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1)) && !func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 1805844857, 1)) && !func_9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), -251125078, 1)) && unk_0x84801DF26E514929(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/])) != 8)
					{
						if (Local_100.f_2[iParam0 /*23*/].f_7 == 10)
						{
							bVar7 = true;
						}
						if (unk_0x317536BCEA8FA6B0(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), -1, 0) != unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1))
						{
							bVar7 = true;
						}
						if (Local_100.f_2[iParam0 /*23*/].f_4 != -1)
						{
							if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_4)))
							{
								iVar9 = unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_4)));
							}
						}
						if (!unk_0x6ADD12BF4D6D2587(iVar9))
						{
							iVar9 = 0;
						}
						if (bVar7)
						{
							unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 2, 0);
							unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 65536, 1);
							if (unk_0x6ADD12BF4D6D2587(iVar9))
							{
								unk_0xD68E88A8E0BE8697(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), iVar9, 500f, -1, 0, 0);
							}
							else
							{
								unk_0xFC5999E8B820470E(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), Var4, 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 65536, 0);
							unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 2, 1);
							if (unk_0x6ADD12BF4D6D2587(iVar9))
							{
								unk_0xD2C269DBF147B406(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), iVar9, 8, 25f, 790564, 200f, 15f, 1);
							}
							else
							{
								unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), Var4, 8, 25f, 790564, 200f, 15f, 1);
							}
						}
					}
					unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 1);
					break;
				
				case 11:
					if (unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]))
					{
						unk_0x8DAC4E7A3269A2CE(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0);
						func_26(&(Local_100.f_2[iParam0 /*23*/]));
					}
					if (unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
					{
						unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 251, 0);
						unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 0);
						func_26(&(Local_100.f_2[iParam0 /*23*/].f_1));
					}
					return;
					break;
				}
		}
		if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			fVar10 = unk_0xBE3C4023003180FC(func_205(unk_0x9EB17624F44A8DA4()), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 1), 1);
			if (fVar10 < fLocal_2638)
			{
				fLocal_2638 = fVar10;
				iLocal_2637 = iParam0;
			}
		}
	}
	if (Local_100.f_2[iParam0 /*23*/].f_7 == 11)
	{
		if (unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/]))
			{
				unk_0x8DAC4E7A3269A2CE(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0);
				func_26(&(Local_100.f_2[iParam0 /*23*/]));
			}
		}
		if (unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iParam0 /*23*/].f_1))
			{
				if (!func_15(Local_100.f_2[iParam0 /*23*/].f_1))
				{
					unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 251, 0);
					unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1), 0);
				}
				func_26(&(Local_100.f_2[iParam0 /*23*/].f_1));
			}
		}
	}
}

int func_185(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
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
	if (!func_187(Param1))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *uParam6 + 2;
	iVar25 = 50;
	unk_0x590D9654A4367AA1((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7)));
	if (unk_0x9C0571C926F68BED((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7))))
	{
		while (!bVar19 && *uParam6 < iVar24)
		{
			if (Param1.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x5C41B0B656C02102(Param1, *uParam6, &Var28, &fVar31, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0x5B253C8E41C51E8E(Var28, 1, iVar20, 1077936128, 0);
				if (unk_0x415CDAC83972AD02(uVar18))
				{
					if (unk_0xA72AB170F6ACDE36(Var28, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
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
						else if (unk_0x81B7CF786E5C8681(uVar18) || !unk_0xAEB36CE218651907(uVar18))
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
							if (unk_0x77EC37553A5DBA63(Var28, &uVar27, &uVar26))
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
						if (func_186(Param1, Var28) || fVar17 < 0.5f)
						{
							Var28 = { unk_0x9EA50C5EC175E58E(Var28, fVar31, fVar15, 0f, 0f) };
							if (unk_0xB8DE76287EDC4957(*iParam0, 0))
							{
								iVar11 = *iParam0;
							}
							if (!unk_0x66614717522DA4A5(Var28, 3f, 3f, 3f, iVar11))
							{
								if (func_198(Var28, &Var28, &fVar31, 1) || func_188(Var28, &Var28, &fVar31, 1))
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

int func_186(struct<3> Param0, struct<3> Param3)
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

int func_187(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x70B029F10FA5ED23(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x74C475EB8E73D398("SanAnd", uVar0) || unk_0x74C475EB8E73D398("Alamo", sVar0)) || unk_0x74C475EB8E73D398("ArmyB", sVar0)) || unk_0x74C475EB8E73D398("BhamCa", sVar0)) || unk_0x74C475EB8E73D398("Baytre", sVar0)) || unk_0x74C475EB8E73D398("BradT", sVar0)) || unk_0x74C475EB8E73D398("BradP", sVar0)) || unk_0x74C475EB8E73D398("CANNY", sVar0)) || unk_0x74C475EB8E73D398("CCreak", sVar0)) || unk_0x74C475EB8E73D398("ChamH", sVar0)) || unk_0x74C475EB8E73D398("CHU", sVar0)) || unk_0x74C475EB8E73D398("COSI", sVar0)) || unk_0x74C475EB8E73D398("CMSW", sVar0)) || unk_0x74C475EB8E73D398("Cypre", sVar0)) || unk_0x74C475EB8E73D398("Desrt", sVar0)) || unk_0x74C475EB8E73D398("ELGorl", sVar0)) || unk_0x74C475EB8E73D398("Galli", sVar0)) || unk_0x74C475EB8E73D398("Galfish", sVar0)) || unk_0x74C475EB8E73D398("Harmo", sVar0)) || unk_0x74C475EB8E73D398("HumLab", sVar0)) || unk_0x74C475EB8E73D398("Jail", sVar0)) || unk_0x74C475EB8E73D398("LAct", sVar0)) || unk_0x74C475EB8E73D398("LDam", sVar0)) || unk_0x74C475EB8E73D398("Lago", sVar0)) || unk_0x74C475EB8E73D398("MTChil", sVar0)) || unk_0x74C475EB8E73D398("MTJose", sVar0)) || unk_0x74C475EB8E73D398("MTGordo", sVar0)) || unk_0x74C475EB8E73D398("NCHU", sVar0)) || unk_0x74C475EB8E73D398("Oceana", sVar0)) || unk_0x74C475EB8E73D398("Palmpow", sVar0)) || unk_0x74C475EB8E73D398("PBluff", sVar0)) || unk_0x74C475EB8E73D398("Paleto", sVar0)) || unk_0x74C475EB8E73D398("PalCov", sVar0)) || unk_0x74C475EB8E73D398("PalFor", sVar0)) || unk_0x74C475EB8E73D398("PalHigh", sVar0)) || unk_0x74C475EB8E73D398("RTRAK", sVar0)) || unk_0x74C475EB8E73D398("Rancho", sVar0)) || unk_0x74C475EB8E73D398("SANDY", sVar0)) || unk_0x74C475EB8E73D398("TongvaH", sVar0)) || unk_0x74C475EB8E73D398("TongvaV", sVar0)) || unk_0x74C475EB8E73D398("Zenora", sVar0)) || unk_0x74C475EB8E73D398("Slab", sVar0)) || unk_0x74C475EB8E73D398("WindF", sVar0)) || unk_0x74C475EB8E73D398("Zancudo", sVar0)) || unk_0x74C475EB8E73D398("SanChia", sVar0)) || unk_0x74C475EB8E73D398("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_188(struct<3> Param0, var uParam3, float fParam4, int iParam5)
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
	
	if (func_197(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_197(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_197(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_197(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_197(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0x3A711520F83BAE98())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0x3A711520F83BAE98())
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (unk_0x8AE9E5E8F6DC40C9(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
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
	else if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x8AE9E5E8F6DC40C9(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
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
		else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
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
		else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
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
		else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
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
		else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
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
	if (func_194(3, Var1))
	{
		if (func_193(Var1, 3, 0, 0))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_192(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_192(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_192(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_192(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
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
	if (func_192(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x8AE9E5E8F6DC40C9(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0x63A6486593EC7EC3(0, iVar0))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
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
	if (!func_190())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_194(7, Var1))
		{
			if (func_193(Var1, 7, 0, 0))
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
	if (func_194(2, Var1))
	{
		if (func_193(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x3A711520F83BAE98())
			{
				switch (unk_0x63A6486593EC7EC3(0, iVar0))
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
	fVar31 = func_189(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_189(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
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
		if ((((unk_0x8AE9E5E8F6DC40C9(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0x63A6486593EC7EC3(0, iVar0) == 0)
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*fParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*fParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*fParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*fParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*fParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0x63A6486593EC7EC3(0, iVar0) == 0)
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
	if (unk_0x8AE9E5E8F6DC40C9(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*fParam4 = -20f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*fParam4 = 160f;
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_189(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xB7A628320EFF8E47(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_190()
{
	int iVar0;
	
	iVar0 = func_122();
	if (iVar0 == 0)
	{
		if (func_191(65))
		{
			return 1;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_191(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_191(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

bool func_192(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_193(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
		if (unk_0x8AE9E5E8F6DC40C9(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_194(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_196(iParam0)) < func_195(iParam0);
}

float func_195(int iParam0)
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

Vector3 func_196(int iParam0)
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

int func_197(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_198(struct<3> Param0, var uParam3, float fParam4, int iParam5)
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Var0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, 0, 1))
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
	if (unk_0x8AE9E5E8F6DC40C9(Var0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
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

int func_199(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
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
	if (!func_187(Param3))
	{
		iVar10 = 9;
	}
	uVar9 = unk_0x5B253C8E41C51E8E(Param3, 1, iVar10, 1077936128, 0);
	if (unk_0x415CDAC83972AD02(uVar9))
	{
		unk_0x52854081FE5E271E(uVar9, &Var0);
		if (unk_0x38C202C726A922A8(Var0, 0, &Var3) && unk_0x38C202C726A922A8(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.f_0, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_201(Var14, Var17);
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
				*uParam8 = func_200(*uParam8, 0f, 360f);
				return 1;
			}
		}
		else if (unk_0x38C202C726A922A8(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_200(float fParam0, float fParam1, float fParam2)
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

float func_201(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_202(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
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
	if (!func_187(Param1))
	{
		iVar9 = 9;
	}
	func_204(Param1, Param1, &(Local_100.f_2[iParam0 /*23*/].f_12), &(Local_100.f_2[iParam0 /*23*/].f_15), iParam7);
	if (func_203(Local_100.f_2[iParam0 /*23*/].f_12, Local_100.f_2[iParam0 /*23*/].f_15))
	{
		if (!func_198(Param1, uParam4, uParam5, 1) && !func_188(Param1, uParam4, uParam5, 1))
		{
			while (!bVar8 && *uParam6 < iVar6)
			{
				if (Param1.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0x5C41B0B656C02102(Param1, *uParam6, uParam4, uParam5, &uVar4, iVar9, fVar0, fVar1))
				{
					uVar5 = unk_0x5B253C8E41C51E8E(*uParam4, 1, iVar9, 1077936128, 0);
					if (unk_0x415CDAC83972AD02(uVar5))
					{
						fVar2 = (Param1.f_2 - uParam4->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_186(Param1, *uParam4) || fVar2 < 0.5f)
						{
							if (unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0))
							{
								iVar3 = unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]);
							}
							if (!unk_0x66614717522DA4A5(*uParam4, 3f, 3f, 3f, iVar3))
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

int func_203(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0x9C0571C926F68BED(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_204(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
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
	unk_0x590D9654A4367AA1(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

Vector3 func_205(int iParam0)
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_206(int iParam0)
{
	if (Local_100.f_2[iParam0 /*23*/].f_22 != 0 && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 6))
	{
		func_114(Local_100.f_2[iParam0 /*23*/].f_22, iParam0);
		unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 6);
	}
}

int func_207(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	uVar0 = unk_0x47BA76CE3C825A08(Local_100.f_2[iParam0 /*23*/].f_1);
	uVar1 = unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]);
	Var3 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_100.f_2[iParam0 /*23*/]), 0) };
	if (unk_0xA6FA9E5D08F067AD(uVar0))
	{
		return 1;
	}
	if (unk_0x7ED4D0E480A6EC43(iVar0, 0))
	{
		return 1;
	}
	if (((unk_0xB6579D6FEB63269C(uVar1, 2, 30000) || unk_0xB6579D6FEB63269C(uVar1, 3, 30000)) || unk_0xB6579D6FEB63269C(uVar1, 0, 7000)) || unk_0xB6579D6FEB63269C(uVar1, 1, 7000))
	{
		return 1;
	}
	else if (unk_0x5679106BC7ED79EE(Var3, 7f, 0))
	{
		if (unk_0x5679106BC7ED79EE(Var3, 7f, 1))
		{
			func_208(unk_0x622FF3AE4B1D07C3(), 1, 37);
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
		if (unk_0xF1DE6FAA2EFAA34F(Var7, Var10, 0))
		{
			if (unk_0xF1DE6FAA2EFAA34F(Var7, Var10, 1))
			{
				func_208(unk_0x622FF3AE4B1D07C3(), 1, 37);
			}
			return 1;
		}
	}
	if (unk_0x012BC3F18B8C7807(unk_0x6293B5D9388BE496()))
	{
		uVar2 = unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x6293B5D9388BE496()));
		if (!unk_0x3AB6A1A9084FB0A4(uVar2))
		{
			if (unk_0x6ADD12BF4D6D2587(uVar1))
			{
				if (unk_0xEBE499597C718EB8(iVar1, iVar2, 1))
				{
					func_208(unk_0x622FF3AE4B1D07C3(), 1, 37);
					return 1;
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (unk_0xEBE499597C718EB8(iVar0, iVar2, 1))
				{
					func_208(unk_0x622FF3AE4B1D07C3(), 1, 37);
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

void func_208(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != -1 && unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iParam0)))
	{
		if (func_10(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iParam0)), 1, 1))
		{
			unk_0x0849193C1EA73C64(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iParam0)), iParam2, unk_0xAF22430031BD1E97(iParam1));
		}
	}
}

void func_209()
{
	if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 19))
	{
		if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 16) && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 17))
		{
			if (!func_50(0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 17);
				func_37(1, 0, 0);
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 18);
			}
		}
		if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 15) && !unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 16))
		{
			if (func_50(0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 16);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 15))
		{
			func_20(&uLocal_2640, 7, 0, "TaxiDispatch", 0, 1);
			if (func_210(&uLocal_2640, 131, "MPTXIAU", "MPTXI_E1", 0, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 15);
			}
		}
	}
}

int func_210(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_287())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_211(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_211(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam3))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
	iVar1 = func_285(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		iVar2 = unk_0x8B948C59217A295D(sParam7);
	}
	if (func_284(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_279(uParam6))
	{
		return 0;
	}
	if (func_276(iVar0, iVar1, iVar2))
	{
		if (func_275())
		{
			return 0;
		}
		func_274();
		return func_218(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_217(iParam4))
	{
		return 0;
	}
	func_212(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_212(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1351013.f_40.f_1 = iParam0;
	Global_1351013.f_40.f_2 = iParam1;
	Global_1351013.f_40.f_3 = iParam2;
	StringCopy(&(Global_1351013.f_40.f_4), sParam3, 16);
	Global_1351013.f_40.f_8 = iParam4;
	Global_1351013.f_40.f_9 = iParam5;
	Global_1351013.f_40.f_14 = uParam6;
	func_213(iParam4);
	func_274();
	Global_1351013.f_40.f_13 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 7000);
}

void func_213(int iParam0)
{
	if (func_216(iParam0))
	{
		func_215();
		return;
	}
	func_214();
}

void func_214()
{
	Global_1351013.f_40.f_10 = 0;
}

void func_215()
{
	Global_1351013.f_40.f_10 = 1;
}

int func_216(int iParam0)
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

bool func_217(int iParam0)
{
	return iParam0 > Global_1351013.f_40.f_8;
}

int func_218(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_273();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_270(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_267(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_270(uParam0, sParam3, sParam4);
		}
		return func_259(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_258(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_248(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_247(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_219(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_219(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_246();
	bVar0 = true;
	if (func_221(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_220(120000);
		return 1;
	}
	return 0;
}

void func_220(int iParam0)
{
	Global_1351013.f_40.f_11 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam0);
	Global_1351013.f_40.f_12 = 1;
}

int func_221(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_245();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xDE2D3B9654C31EB3(iVar0);
		iVar1 = func_239(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1351013.f_40.f_13))
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
	sVar4 = func_238(sParam5, bParam6, &iVar3);
	uVar5 = func_236(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		iVar6++;
		if (!unk_0xAB019B170BF1309C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x74C475EB8E73D398(sVar4, " "))
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
		if (unk_0xC80D31E4B587871C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xC80D31E4B587871C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB019B170BF1309C(sVar2))
	{
		bVar12 = func_235(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_225(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(uParam4, 0))
	{
		func_224();
	}
	func_246();
	func_223();
	func_222();
	return 1;
}

void func_222()
{
	Global_1351013.f_57 = 0;
	Global_1351013.f_57.f_1 = 0;
}

void func_223()
{
	Global_1351013.f_40 = 3;
}

void func_224()
{
	unk_0x872F1C1F8587CCC7(&Global_2323, 8);
}

int func_225(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_226(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			unk_0x872F1C1F8587CCC7(&Global_4267143, 0);
		}
		return 1;
	}
	return 0;
}

int func_226(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_121();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_4267128 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_234() == 0)
	{
		func_232();
		return 0;
	}
	func_231(Global_4267127);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/]), sParam1, 64);
	Global_4265878[Global_4267127 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4265878[Global_4267127 /*104*/].f_24 = iParam2;
	}
	Global_4265878[Global_4267127 /*104*/].f_25 = iParam7;
	Global_4265878[Global_4267127 /*104*/].f_26 = uParam8;
	Global_4265878[Global_4267127 /*104*/].f_29 = uParam9;
	Global_4265878[Global_4267127 /*104*/].f_30 = uParam12;
	Global_4265878[Global_4267127 /*104*/].f_31 = uParam11;
	Global_4265878[Global_4267127 /*104*/].f_28 = 0;
	Global_4265878[Global_4267127 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_33), sParam4, 64);
	Global_4265878[Global_4267127 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_50), sParam5, 64);
	Global_4265878[Global_4267127 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_83), sParam15, 64);
	func_121();
	switch (iParam16)
	{
		case 3:
			Global_4265878[Global_4267127 /*104*/].f_99[Global_14453] = 1;
			break;
		
		case 0:
			Global_4265878[Global_4267127 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4265878[Global_4267127 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4265878[Global_4267127 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14453)
		{
			case 0:
				func_230(0);
				break;
			
			case 1:
				func_230(1);
				break;
			
			case 2:
				func_230(2);
				break;
			
			case 3:
				func_230(3);
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
				Global_4267128 = 1;
				break;
			
			case 0:
				Global_4267128 = 1;
				break;
			
			case 2:
				Global_4267128 = 1;
				break;
			
			case 1:
				Global_4267128 = 1;
				break;
			}
	}
	Global_16825[Global_4267127] = 0;
	if (bParam10)
	{
		func_121();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_75())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_229(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_227(1);
			func_229(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_227(int iParam0)
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_59(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_59(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_59(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_59(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_59(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_59(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_228(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_228(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_59(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_59(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_59(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_59(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_59(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_229(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

void func_230(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_231(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2F31FD7674CB6CD3();
	uVar1 = unk_0x95327550F0F2BE7C();
	uVar2 = unk_0x674C9438180770FE();
	uVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	uVar5 = unk_0x93F322D6E98835CC();
	Global_4265878[iParam0 /*104*/].f_18 = uVar0;
	Global_4265878[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4265878[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4265878[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4265878[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4265878[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_232()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_233(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
		{
			Global_4267127 = iVar2;
		}
		iVar2++;
	}
	Global_4265878[Global_4267127 /*104*/].f_24 = 1;
}

int func_233(struct<6> Param0, struct<6> Param6)
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

int func_234()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0)
		{
			Global_4267127 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0 || Global_4265878[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_233(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
			{
				Global_4267127 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4267127 == 11)
	{
		return 0;
	}
	Global_4265878[Global_4267127 /*104*/].f_99[0] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[1] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[2] = 0;
	return 1;
}

int func_235(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_226(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			unk_0x872F1C1F8587CCC7(&Global_4267143, 0);
		}
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_237(2, iParam1);
	return iParam0;
}

void func_237(int iParam0, var uParam1)
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

char* func_238(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x74C475EB8E73D398(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_237(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xB2E1B414DD88808E(sParam0);
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = func_242(iParam0);
	if (iVar0 == -1)
	{
		func_240(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_240(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_242(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_241(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_243(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_243(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1369337)
	{
		Global_1369176[iVar32 /*5*/] = { Global_1369176[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_244(&(Global_1369176[iVar32 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_244(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_245();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

int func_245()
{
	return -1;
}

void func_246()
{
	Global_1351013.f_40.f_9 = 4;
}

int func_247(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_246();
	bVar0 = false;
	return func_221(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_248(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_249(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_249(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_245();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xDE2D3B9654C31EB3(iVar0);
		iVar1 = func_239(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1351013.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16817 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_238(sParam5, bParam6, &iVar3);
	uVar5 = func_236(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		iVar6++;
		if (!unk_0xAB019B170BF1309C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x74C475EB8E73D398(sVar4, " "))
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
		if (unk_0xC80D31E4B587871C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xC80D31E4B587871C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB019B170BF1309C(sVar2))
	{
		bVar12 = func_257(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_251(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(uParam4, 0))
	{
		func_224();
	}
	func_250();
	func_223();
	func_222();
	return 1;
}

void func_250()
{
	Global_1351013.f_40.f_9 = 3;
}

int func_251(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_252(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_252(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_121();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_256() == 0)
	{
		func_254();
		return 0;
	}
	func_253(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_230(0);
		func_230(2);
		func_230(1);
	}
	else
	{
		func_121();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_230(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_230(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_230(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_230(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_121();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_75())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_229(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_227(1);
			func_229(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_253(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2F31FD7674CB6CD3();
	uVar1 = unk_0x95327550F0F2BE7C();
	uVar2 = unk_0x674C9438180770FE();
	uVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	uVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
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
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_255(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_255(struct<6> Param0, struct<6> Param6)
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

int func_256()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
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
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_255(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

int func_257(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 3;
	if (func_252(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			StringCopy(&Global_3011, sParam5, 64);
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_258(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	func_250();
	bVar0 = true;
	if (func_249(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_220(120000);
		return 1;
	}
	return 0;
}

int func_259(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xC80D31E4B587871C(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xC80D31E4B587871C(uParam4, 4))
	{
		bVar0 = func_266(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_265(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xC80D31E4B587871C(uParam4, 3))
		{
			func_264(1);
		}
		if (unk_0xC80D31E4B587871C(uParam4, 5))
		{
			func_263(1);
		}
		func_262();
		func_223();
		func_261();
		func_260();
		return 1;
	}
	return 0;
}

void func_260()
{
	Global_2521200 = 0;
}

void func_261()
{
	Global_1351013.f_57 = 1;
	Global_1351013.f_57.f_1 = 0;
}

void func_262()
{
	Global_1351013.f_40.f_9 = 1;
}

void func_263(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2325, 0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
	}
}

void func_264(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 20);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
	}
}

int func_265(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_130(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_116(sParam3, iParam4, bParam7);
}

int func_266(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_130(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 1;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_116(sParam3, iParam4, bParam7);
}

int func_267(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_268();
		func_262();
		func_223();
		func_261();
		func_260();
		return 1;
	}
	return 0;
}

void func_268()
{
	Global_16774 = 0;
}

bool func_269(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_130(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 1;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 1;
	Global_15810 = 0;
	StringCopy(&Global_15904, sParam5, 24);
	Global_2621441 = 0;
	return func_116(sParam3, iParam4, bParam8);
}

int func_270(var uParam0, char* sParam1, char* sParam2)
{
	if (func_272(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_271();
		func_223();
		func_261();
		return 1;
	}
	return 0;
}

void func_271()
{
	Global_1351013.f_40.f_9 = 2;
}

bool func_272(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_116(sParam2, iParam3, 0);
}

void func_273()
{
	Global_1351013.f_55 = Global_1351013.f_40.f_1;
	Global_1351013.f_55.f_1 = Global_1351013.f_40.f_10;
}

void func_274()
{
	Global_1351013.f_40 = 1;
}

bool func_275()
{
	return Global_1351013.f_40 == 1;
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	if (!func_277(iParam0))
	{
		return 0;
	}
	if (Global_1351013.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1351013.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_277(int iParam0)
{
	if (!func_278())
	{
		return 0;
	}
	if (!Global_1351013.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_278()
{
	if (Global_1351013.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_279(var uParam0)
{
	if (func_283())
	{
		return 0;
	}
	if (func_282())
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
	if (Global_1655673 || func_281())
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(uParam0, 6))
	{
		if (func_280())
		{
			return 0;
		}
	}
	return 1;
}

bool func_280()
{
	return unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1367897);
}

int func_281()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_282()
{
	return Global_1351013.f_40 == 3;
}

bool func_283()
{
	return func_119();
}

int func_284(int iParam0, int iParam1, int iParam2)
{
	if (!func_282())
	{
		return 0;
	}
	return func_276(iParam0, iParam1, iParam2);
}

int func_285(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x8B948C59217A295D(&cVar0);
}

bool func_286()
{
	return Global_2518688.f_1;
}

int func_287()
{
	if (Global_1351201.f_2)
	{
		return 1;
	}
	return func_288();
}

bool func_288()
{
	return func_283();
}

void func_289(int iParam0)
{
	if (!unk_0x93C304998B457C45(Local_100.f_2[iParam0 /*23*/]))
	{
		if (Local_100.f_2[iParam0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
		{
			if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 18))
			{
				if (func_24(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!func_85(&uLocal_1733, 30000, 0))
					{
						if (func_290(iParam0, 1109393408))
						{
							Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
							Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_29 = 0f;
							func_30(&uLocal_1733);
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2, 19))
					{
						unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_2), 19);
					}
				}
			}
		}
	}
}

int func_290(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	if (func_10(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2)), 1, 1))
	{
		unk_0x6FF834D85E2DD4C6(Global_2512808.f_779);
		unk_0x6FF834D85E2DD4C6(Global_2512808.f_780);
		if (unk_0x9A0B2ED5055D3F0B(Global_2512808.f_779))
		{
			if (unk_0x9A0B2ED5055D3F0B(Global_2512808.f_780))
			{
				Var3 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_100.f_2[iParam0 /*23*/].f_2))), 1) };
				if (!func_309(Var3))
				{
					if (func_187(Var3))
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
					if (func_305(Var3, &Var0, &uVar6, &(Local_295[Local_100.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), iVar7, fParam1))
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
				else if (func_291(Var3, &Var0, &uVar6))
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

int func_291(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x8AE9E5E8F6DC40C9(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
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
			if (func_292(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
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
			if (func_292(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
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
			if (func_292(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
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
			if (func_292(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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

int func_292(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x0D3330EAF6340496(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x0D3330EAF6340496(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xAA0BDFF32B6BC02A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_299(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_293(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_293(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xBE3C4023003180FC(func_297(unk_0x9EB17624F44A8DA4()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9E06F0EE20F58CED(Param0, fParam3))
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
			if (!func_295(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_294(iVar1) || !bParam10) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_297(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam8 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_297(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
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

int func_294(int iParam0)
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_295(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_296(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_296(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_159();
	}
	if (Global_1312834[iVar1] == 1)
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

Vector3 func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_298() && Global_1595693[iVar0 /*680*/].f_673) && !func_24(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_205(iParam0);
}

var func_298()
{
	return Global_2447174.f_16;
}

int func_299(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam8 == 0)
		{
			if (func_10(iVar1, bParam4, bParam5))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam7 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_294(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam9) && bParam6) && func_300(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_205(iVar1), Param0, 1) < fParam3)
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

int func_300(int iParam0)
{
	if (func_304(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_303(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_301(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_302(iParam0);
	if (!iVar0 == func_245())
	{
		if (iVar0 == func_302(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_302(int iParam0)
{
	if (iParam0 != func_245())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_245();
}

struct<13> func_303(var uParam0)
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(uParam0, &Var0, 13);
	return Var0;
}

int func_304(int iParam0, var uParam1)
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_303(iParam0) };
		Global_2492170 = { func_303(uParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_305(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, float fParam7)
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
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x5C41B0B656C02102(Param0, *uParam5, &Var0, &fVar9, &uVar10, iParam6, fVar14, fVar15))
		{
			if (unk_0xB7A628320EFF8E47(Param0, Var0) <= (50f * 50f))
			{
				while (!bVar12 && iVar13 < 5)
				{
					if (unk_0x07D358D46AA46CB3(&Var0, &Var3, &Var6, 0f, 180f, fParam7, iVar11, 1, 0))
					{
						fVar9 = func_308(0f, 0f, 0f, Var6, 1);
						if (func_306(Param0, Var3, 120f, fParam7))
						{
							if (func_292(*uParam3, 5f, 2f, 1f, 6f, 1, 1, 1, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
							{
								bVar12 = true;
								Var16 = { unk_0x9EA50C5EC175E58E(Var3, fVar9, 0f, 1f, 0f) };
								Var19 = { Var16 - Var3 };
								Var22 = { Var0 - Var3 };
								if (unk_0xAF3D7D969F2C195C(Var19.f_0, Var19.f_1, Var22.f_0, Var22.f_1) > 60f)
								{
									fVar9 = (fVar9 + 180f);
									fVar9 = func_200(fVar9, 0f, 360f);
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

int func_306(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
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
	if (unk_0x9E06F0EE20F58CED(Param3, 2.5f))
	{
		return 0;
	}
	if (unk_0x66614717522DA4A5(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_307(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_307(struct<3> Param0, bool bParam3)
{
	if (func_12(Param0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_193(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_194(2, Param0))
	{
		if (func_193(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_194(3, Param0))
	{
		if (func_193(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_194(4, Param0))
	{
		if (func_193(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_194(5, Param0))
	{
		if (func_193(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_194(6, Param0))
	{
		if (func_193(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_190())
	{
		if (func_194(7, Param0))
		{
			if (func_193(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_194(8, Param0))
	{
		if (func_193(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (unk_0x8AE9E5E8F6DC40C9(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Param0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((unk_0x8AE9E5E8F6DC40C9(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (func_12(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x8AE9E5E8F6DC40C9(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x8AE9E5E8F6DC40C9(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (unk_0x8AE9E5E8F6DC40C9(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, 1))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(Param0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Param0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

float func_308(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xF5596B3A7E5F3C68(fVar1, fVar2);
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

int func_309(struct<3> Param0)
{
	if (unk_0x8AE9E5E8F6DC40C9(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x8AE9E5E8F6DC40C9(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_310()
{
	int iVar0;
	
	if (unk_0x012BC3F18B8C7807(unk_0x6293B5D9388BE496()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3, iVar0))
			{
				if ((Local_100.f_2[iVar0 /*23*/].f_7 == 11 || Local_100.f_2[iVar0 /*23*/].f_7 == 9) || Local_100.f_2[iVar0 /*23*/].f_7 == 10)
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3), iVar0);
				}
				else if (!unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/].f_1))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_3), iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_311()
{
	int iVar0;
	
	if (unk_0x012BC3F18B8C7807(unk_0x6293B5D9388BE496()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_100.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_3 != unk_0x622FF3AE4B1D07C3())
				{
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/]))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/]))
						{
							unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/], 1);
						}
					}
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/].f_1))
						{
							unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/].f_1, 1);
						}
					}
				}
			}
			else if (Local_100.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_100.f_2[iVar0 /*23*/].f_2 == unk_0x622FF3AE4B1D07C3())
				{
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/]))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/]))
						{
							unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/], 0);
						}
						else if (unk_0x04092215B40E1262(Local_100.f_2[iVar0 /*23*/]))
						{
						}
					}
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/].f_1))
						{
							unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/].f_1, 0);
						}
					}
				}
				else
				{
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/]))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/]))
						{
							unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/], 1);
						}
					}
					if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/].f_1))
						{
							unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/].f_1, 1);
						}
					}
				}
			}
			else
			{
				if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/]))
				{
					if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/]))
					{
						unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/], 1);
					}
				}
				if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/].f_1))
					{
						unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/].f_1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_312()
{
	switch (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_43)
	{
		case 0:
			if (Local_100.f_191 > 0)
			{
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_43 = 1;
			}
			break;
		
		case 1:
			func_323();
			func_313();
			if (Local_100.f_191 >= 4)
			{
				Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_43 = 4;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			func_352();
			break;
	}
}

void func_313()
{
	int iVar0;
	
	iVar0 = unk_0x9E883378D9B4735D(false, 0);
	if (Local_100.f_189 != iVar0)
	{
		if (Local_100.f_189 < iVar0 || func_314(Local_100.f_189, Local_100.f_189, Local_100.f_189, 0, 1))
		{
			unk_0x7BC094E5B24A760D(Local_100.f_189);
			unk_0xBC60D873F181A18E(Local_100.f_189);
			unk_0xB66EA47EE710E67F(Local_100.f_189);
		}
	}
}

int func_314(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_322(iParam0, bParam3, bParam4) && func_321(iParam1, bParam3, bParam4)) && func_315(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(2, iParam0, 1, bParam1, bParam2);
}

int func_316(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_320(iParam0) - func_319(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_319(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_320(iParam0) - func_318(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_319(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_320(iParam0) - func_319(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_317(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_317(int iParam0)
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

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1369394.f_1;
			break;
		
		case 1:
			return Global_1369394.f_2;
			break;
		
		case 2:
			return Global_1369394.f_3;
			break;
	}
	return 0;
}

int func_319(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0x3930B0AA9F6A0C8C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0x9E883378D9B4735D(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x5A9A3A92F1F0B182(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1369402;
			break;
		
		case 1:
			return Global_1369403;
			break;
		
		case 2:
			return Global_1369404;
			break;
	}
	return 0;
}

int func_321(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(1, iParam0, 1, bParam1, bParam2);
}

int func_322(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(0, iParam0, 1, bParam1, bParam2);
}

void func_323()
{
	int iVar0;
	struct<2> Var1;
	
	switch (iLocal_1732)
	{
		case 0:
			if (func_337(131))
			{
				iVar0 = func_327();
				if (iVar0 == 0)
				{
					func_20(&uLocal_2640, 7, 0, "TaxiDispatch", 0, 1);
					if (func_326(&uLocal_2640, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, 0))
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
					if (func_326(&uLocal_2640, 131, "MPTXIAU", &Var1, 12, 1, 0, 0, 0))
					{
					}
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_2512808.f_778, 0))
			{
				if (func_327() == 0)
				{
					if (!func_24(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_21))
					{
						Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_24 = 0f;
					}
					unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1), 0);
					iLocal_1732 = 2;
				}
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_778), 0);
			}
			break;
		
		case 1:
			if (func_325())
			{
				if (!func_324())
				{
					if (!func_24(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_21))
					{
						Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4.f_24 = 0f;
					}
					unk_0x872F1C1F8587CCC7(&(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1), 0);
					iLocal_1732 = 2;
				}
				else
				{
					iLocal_1732 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1, 0))
			{
				iLocal_1732 = 0;
			}
			break;
	}
}

int func_324()
{
	if (Global_15805 == 1 || Global_16772 == 1)
	{
		return 1;
	}
	return 0;
}

int func_325()
{
	if (Global_15756 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_326(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_130(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	if (iParam5 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	Global_2621441 = 1;
	return func_116(sParam3, iParam4, bParam8);
}

int func_327()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!unk_0xC80D31E4B587871C(Global_2512808.f_778, 0))
	{
		if (IntToFloat(func_161(unk_0x9EB17624F44A8DA4())) <= (IntToFloat(iLocal_1910) * 1.5f))
		{
			if (!unk_0xF491DD47B88AA84E())
			{
				func_164("TXM_H03", -1);
			}
			return 9;
		}
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			return 2;
		}
	}
	if (!func_29())
	{
		return 1;
	}
	if (func_336(unk_0x622FF3AE4B1D07C3()))
	{
		return 9;
	}
	uVar0 = unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x6293B5D9388BE496()));
	if (!unk_0x3AB6A1A9084FB0A4(uVar0))
	{
		if (unk_0x88DDBE9908752BF0(iVar0, 0))
		{
			uVar1 = unk_0xDFD115BB10FE46A9(iVar0, 0);
			if (unk_0xB8DE76287EDC4957(uVar1, 0))
			{
				if (unk_0xB0DA749C8A7CCBBF(iVar1, joaat("taxi")))
				{
					return 9;
				}
			}
		}
	}
	if (func_335(unk_0x622FF3AE4B1D07C3()))
	{
		return 4;
	}
	if (Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_4 != -1)
	{
		return 4;
	}
	if (unk_0xC80D31E4B587871C(Local_295[unk_0x622FF3AE4B1D07C3() /*44*/].f_1, 0))
	{
		return 4;
	}
	if (func_170(unk_0x9EB17624F44A8DA4(), 1) && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 16)
	{
		return 1;
	}
	if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) >= 6f)
	{
		return 9;
	}
	if (func_334(unk_0x9EB17624F44A8DA4(), 1, 0))
	{
		return 9;
	}
	if (func_333(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 9;
	}
	if (func_332())
	{
		return 3;
	}
	if (!func_328(1, 1, 1, 1, 0))
	{
		return 1;
	}
	Var2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	fVar8 = 50f;
	iVar9 = 1;
	if (!func_187(Var2))
	{
		iVar9 = 9;
	}
	if (!unk_0xC036F7DE6A42457A(Var2, &Var5, iVar9, 100f, 2.5f))
	{
		return 3;
	}
	if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Var5, fVar8, fVar8, 20f, 0, 1, 0))
	{
		return 3;
	}
	if (func_307(Var2, 1))
	{
		return 3;
	}
	return 0;
}

int func_328(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_331(iParam0, bParam3, bParam4) || func_330(iParam1, bParam3, bParam4)) || func_329(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(2, iParam0, 0, bParam1, bParam2);
}

int func_330(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(1, iParam0, 0, bParam1, bParam2);
}

int func_331(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(0, iParam0, 0, bParam1, bParam2);
}

int func_332()
{
	if (func_10(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (unk_0xA6A13EE8139C2BD4(unk_0xFC1458A37D98B502(), -64f, -850f, 200f, -84f, -795f, 340f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_333(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_245())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_335(int iParam0)
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

int func_336(int iParam0)
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

int func_337(int iParam0)
{
	if ((Global_16870 || Global_16869) || Global_16871)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14453.f_1 == 10)
		{
			if (Global_1638 == iParam0)
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

int func_338()
{
	return Local_100.f_0;
}

int func_339(int iParam0)
{
	return Local_295[iParam0 /*44*/];
}

bool func_340()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142, 18);
}

int func_341()
{
	var uVar0;
	
	func_348(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_347())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_346())
	{
		return 1;
	}
	if (func_345(157))
	{
		if (!func_344())
		{
			return 1;
		}
	}
	if (func_345(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_342() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_342()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_342()
{
	switch (func_343())
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

int func_343()
{
	return Global_25233;
}

bool func_344()
{
	return Global_2447174.f_586;
}

int func_345(int iParam0)
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_346()
{
	return Global_2456830;
}

bool func_347()
{
	return Global_2447174.f_581;
}

void func_348(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_349(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_349(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 3))
	{
		if (func_10(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x25D049AAC4603E65(Var0.f_1);
			if (unk_0x6ADD12BF4D6D2587(uVar3))
			{
				if (unk_0x88DDBE9908752BF0(iVar3, 0))
				{
					uVar4 = unk_0xDFD115BB10FE46A9(iVar3, 0);
					if (unk_0x1FE6625767FB8CBF(uVar4, Var0.f_2) && unk_0x8C504A60C2F379BD())
					{
						if (func_350(uVar4, &bVar5))
						{
							unk_0x38CCEC620E3BB265(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x5380482A432E314E(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_350(int iParam0, var uParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_351()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_352()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/]))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/]))
			{
				unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/], 1);
			}
		}
		if (unk_0x93C304998B457C45(Local_100.f_2[iVar0 /*23*/].f_1))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_100.f_2[iVar0 /*23*/].f_1))
			{
				unk_0xF5A4934300C0568C(Local_100.f_2[iVar0 /*23*/].f_1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x8EA3C8E091EA5BA4(uLocal_2619))
	{
		if (unk_0xD85097DDDA5447BE(uLocal_2619))
		{
			func_38();
		}
	}
	if (bLocal_1906)
	{
		unk_0xBC3B7443617858A0(1);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1743))
	{
		unk_0x452336926718D62A(&iLocal_1743);
		unk_0x14776E43F90DD454(iLocal_1744);
	}
	if (unk_0x7118556A56307B25("taxi"))
	{
		unk_0xEE203D16F93269FA("taxi");
	}
	func_353();
}

void func_353()
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_354(struct<21> Param0)
{
	func_360(32, Param0);
	func_358(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_100, 195);
	unk_0xE7BC983D1386C9EE(&Local_295, 1409);
	unk_0x941BE77305BB5695(0);
	if (!func_357())
	{
		return 0;
	}
	if (unk_0x3A711520F83BAE98())
	{
		func_355(131, 3, unk_0xC80D31E4B587871C(Global_2512808.f_778, 4));
		func_35(&uLocal_1735, 0, 0);
		Local_295[unk_0x622FF3AE4B1D07C3() /*44*/] = 0;
	}
	return 1;
}

void func_355(int iParam0, int iParam1, bool bParam2)
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_121();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_356();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_356();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_356();
			}
		}
	}
}

void func_356()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		unk_0xE3C33644878DCCFD("");
		StringCopy(&cVar16, unk_0xB2E1B414DD88808E(&(Global_2933[1 /*6*/])), 64);
		sVar32 = unk_0xB2E1B414DD88808E("CELL_253");
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xE3C33644878DCCFD("CELL_255");
		unk_0xA6D2B267C377D7B2(&(Global_2933[1 /*6*/]));
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 0);
}

int func_357()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_347())
		{
			return 0;
		}
		if (func_345(155))
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

int func_358(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_353();
			}
			else
			{
				return 0;
			}
		}
		if (!func_359())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_353();
					}
					else
					{
						return 0;
					}
				}
				if (func_347())
				{
					if (!bParam2)
					{
						func_353();
					}
					else
					{
						return 0;
					}
				}
				if (func_345(155))
				{
					if (!bParam2)
					{
						func_353();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_353();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_353();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_353();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_359()
{
	return Global_1312831;
}

void func_360(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_353();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

