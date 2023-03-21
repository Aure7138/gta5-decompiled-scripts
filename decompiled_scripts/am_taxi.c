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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<194> Local_68 = { 0, 0, 8, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_262 = 0;
	struct<44> Local_263[32];
	var uLocal_1672 = 0;
	var uLocal_1673[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1682[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1691[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	float fLocal_1705 = 0f;
	int iLocal_1706 = 0;
	int iLocal_1707 = 0;
	var uLocal_1708 = 0;
	int iLocal_1709 = 0;
	int iLocal_1710 = 0;
	int iLocal_1711 = 0;
	int iLocal_1712 = 0;
	var uLocal_1713 = 0;
	float fLocal_1714 = 0f;
	float fLocal_1715 = 0f;
	float fLocal_1716 = 0f;
	float fLocal_1717 = 0f;
	float fLocal_1718 = 0f;
	int iLocal_1719 = 0;
	int iLocal_1720 = 0;
	struct<3> Local_1721[50];
	bool bLocal_1872 = 0;
	int iLocal_1873 = 0;
	bool bLocal_1874 = 0;
	int iLocal_1875 = 0;
	int iLocal_1876 = 0;
	int iLocal_1877 = 0;
	int iLocal_1878 = 0;
	int iLocal_1879 = 0;
	int iLocal_1880 = 0;
	float fLocal_1881 = 0f;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	float fLocal_1884 = 0f;
	struct<3> Local_1885 = { 0, 0, 0 } ;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 12;
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
	var uLocal_2588 = 1065353216;
	struct<9> Local_2589 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	var uLocal_2600 = 0;
	int iLocal_2601 = 0;
	char* sLocal_2602 = NULL;
	int iLocal_2603 = 0;
	struct<3> Local_2604 = { 0, 0, 0 } ;
	struct<3> Local_2607 = { 0, 0, 0 } ;
	struct<3> Local_2610 = { 0, 0, 0 } ;
	float fLocal_2613 = 0f;
	struct<3> Local_2614 = { 0, 0, 0 } ;
	int iLocal_2617 = 0;
	int iLocal_2618 = 0;
	float fLocal_2619 = 0f;
	int iLocal_2620 = 0;
	var uLocal_2621 = 16;
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
	int iLocal_2786 = 0;
	int iLocal_2787 = 0;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_66 = unk_0xAD1355DD1E5D2D9B();
	iLocal_67 = unk_0x817B3657F78A517A();
	iLocal_1712 = joaat("prop_taxi_meter_2");
	fLocal_1714 = 1f;
	fLocal_1715 = (0.4f * fLocal_1714);
	fLocal_1716 = (0.6f * fLocal_1714);
	fLocal_1717 = 0.201f;
	fLocal_1718 = 0.351f;
	iLocal_1719 = 1076369579;
	iLocal_1720 = 1076631591;
	iLocal_1877 = 1;
	iLocal_1879 = iLocal_1878;
	fLocal_1881 = 1.2f;
	fLocal_1884 = unk_0xBBDA792448DB5A89(iLocal_1878);
	iLocal_2601 = 1;
	sLocal_2602 = unk_0xF59058FCB716F903(0, 218, 1);
	iLocal_2603 = unk_0xB3260A60545D3F11();
	Local_2604 = { -0.01f, 0.6f, 0.24f };
	Local_2607 = { -5f, 0f, 0f };
	Local_2610 = { 0f, -0.25f, 0.55f };
	fLocal_2613 = 50f;
	Local_2614 = { -0.3f, 1f, 0.35f };
	fLocal_2619 = 99999f;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_368(ScriptParam_0))
		{
			func_366();
		}
	}
	while (true)
	{
		func_365();
		if (func_354())
		{
			func_366();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			if (func_353())
			{
				if (unk_0xF35A91B88CC1915F() != unk_0x919B85DC2734A661(unk_0xD803B885F5E47A62()))
				{
					func_366();
				}
			}
			else
			{
				func_366();
			}
		}
		else if (unk_0xF35A91B88CC1915F() != -1)
		{
			func_366();
		}
		switch (func_352(unk_0x57270EE11514DC67()))
		{
			case 0:
				Local_263[unk_0x57270EE11514DC67() /*44*/] = 1;
				if (func_351() == 4)
				{
					Local_263[unk_0x57270EE11514DC67() /*44*/] = 3;
				}
				break;
			
			case 1:
				if (func_351() == 1)
				{
					func_325();
					func_38();
				}
				else if (func_351() == 4)
				{
					Local_263[unk_0x57270EE11514DC67() /*44*/] = 3;
				}
				break;
			
			case 3:
				func_36(&(Local_68.f_193));
				if (func_35(&(Local_68.f_193)))
				{
					Local_263[unk_0x57270EE11514DC67() /*44*/] = 4;
				}
				break;
			
			case 2:
				Local_263[unk_0x57270EE11514DC67() /*44*/] = 4;
			
			case 4:
				func_366();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_351())
			{
				case 0:
					Local_68.f_0 = 1;
					break;
				
				case 1:
					func_4();
					func_3();
					if (func_1())
					{
						Local_68.f_0 = 4;
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
	switch (Local_68.f_191)
	{
		case 0:
			Local_68.f_191 = 1;
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
	if (iLocal_2786 < unk_0x54EABC0DD106045B())
	{
		func_27();
		iLocal_2786++;
	}
	else
	{
		func_5();
		unk_0x5D96D8530B3D0904(&(Local_68.f_2[iLocal_2787 /*23*/].f_6), 0);
		unk_0x5D96D8530B3D0904(&(Local_68.f_2[iLocal_2787 /*23*/].f_6), 2);
		Local_68.f_188 = 0;
		iLocal_2787++;
		if (iLocal_2787 >= 8)
		{
			iLocal_2786 = 0;
			iLocal_2787 = 0;
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = iLocal_2787;
	func_18(iVar0);
	func_6(iVar0);
}

void func_6(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_68.f_2[iParam0 /*23*/].f_7 != 11 && !unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 4))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (func_15(Local_68.f_2[iParam0 /*23*/].f_1) || !func_13(Local_68.f_2[iParam0 /*23*/]))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
	}
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		Var0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1) };
		switch (Local_68.f_2[iParam0 /*23*/].f_7)
		{
			case 0:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 1:
				if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (func_12(Var0, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 45f))
					{
						if (!func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							func_17(iParam0, 2);
						}
					}
					else if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
					{
						if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
						{
							if (func_12(Var0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2))), 1), 5f))
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
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 2:
				if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
					{
						if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -272084098, 1))
						{
							if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
							{
								if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
								{
									func_17(iParam0, 3);
								}
							}
						}
						else if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
						{
							if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
							{
								if (func_12(Var0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2))), 1), 5f))
								{
									if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) || unk_0xBBB54639BF9AAB8A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
									{
										func_17(iParam0, 3);
									}
									else if (!func_12(Var0, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 10f))
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
				if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 3:
				if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			
			case 4:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_68.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0))
					{
						func_17(iParam0, 5);
					}
				}
				break;
			
			case 5:
				if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
					{
						if (func_8(iParam0))
						{
							if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) || unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) < 2f)
							{
								func_17(iParam0, 6);
							}
						}
					}
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			
			case 6:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else
				{
					func_7(iParam0, 1);
				}
				break;
			
			case 7:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			
			case 8:
				func_16(iParam0, 0);
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 3);
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
					{
						unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
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
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]) && !unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_68.f_190, iParam0) && !unk_0xEAE0D21A50E6C7F4(Local_68.f_190, iParam0 + 8)) && Local_68.f_2[iParam0 /*23*/].f_2 == -1)
		{
			if (Local_68.f_189 > 0)
			{
				Local_68.f_189 = (Local_68.f_189 - 1);
				unk_0x0674E58A79778E99(&(Local_68.f_190), iParam0);
				unk_0x5D96D8530B3D0904(&(Local_68.f_190), iParam0 + 8);
			}
		}
		if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
		{
			Local_68.f_2[iParam0 /*23*/].f_3 = -1;
		}
		if (Local_68.f_2[iParam0 /*23*/].f_4 != -1)
		{
			Local_68.f_2[iParam0 /*23*/].f_4 = -1;
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0)
			{
				if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), -1, 0) == unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					iVar0 = unk_0xD6DF381716822EFE(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]));
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 != -1)
						{
							iVar2 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), iVar1, 0);
							if (unk_0xC844350D5D58C99A(iVar2))
							{
								if (!unk_0xEB6A8945D1AC98A1(iVar2))
								{
									if (!func_9(iVar2, -828834893, 1) && !func_9(iVar2, 451360105, 1))
									{
										if (bParam1)
										{
											unk_0x75CDA8644CD3B5F5(iVar2, 0, 0);
										}
										else
										{
											unk_0x75CDA8644CD3B5F5(iVar2, 0, 64);
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
	if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (unk_0x5A91F08DF773C39D(unk_0xA5FBBC2F619A4DE2(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 45f, 45f, 20f, 0, 1, 0) || unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 20))
		{
			unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 242628503) == 7)
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
	
	iVar0 = unk_0xD1960163A3042274(iParam0, iParam1);
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
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
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
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_14(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
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
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

void func_16(int iParam0, int iParam1)
{
	if ((Local_68.f_2[iParam0 /*23*/].f_2 != -1 || !func_11(Local_68.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0)) || iParam1)
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
		{
			unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_1), 0);
			unk_0x0674E58A79778E99(&(Local_68.f_192), Local_68.f_2[iParam0 /*23*/].f_2);
			Local_68.f_2[iParam0 /*23*/].f_2 = -1;
			Local_68.f_187 = (Local_68.f_187 - 1);
		}
		Local_68.f_2[iParam0 /*23*/].f_8 = { 0f, 0f, 0f };
		Local_68.f_2[iParam0 /*23*/].f_11 = 0f;
		Local_68.f_2[iParam0 /*23*/].f_22 = 0;
		Local_68.f_2[iParam0 /*23*/].f_19 = 0;
		unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 3);
		iLocal_1691[iParam0] = 0;
	}
}

void func_17(int iParam0, int iParam1)
{
	Local_68.f_2[iParam0 /*23*/].f_7 = iParam1;
}

void func_18(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
			{
				if (!func_26(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!unk_0x9868643FAC294133(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, 3f, 3f, 3f, 0))
					{
						if (func_19(iParam0, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24, 0))
						{
							func_17(iParam0, 1);
						}
					}
				}
			}
		}
	}
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		Local_68.f_188++;
	}
	if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
	{
		if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
		{
			unk_0x0674E58A79778E99(&(Local_68.f_192), Local_68.f_2[iParam0 /*23*/].f_2);
			Local_68.f_2[iParam0 /*23*/].f_2 = -1;
			Local_68.f_187 = (Local_68.f_187 - 1);
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))
		{
			Local_68.f_2[iParam0 /*23*/].f_3 = -1;
		}
	}
}

int func_19(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	if (func_25(Global_2537071.f_796) && func_25(Global_2537071.f_797))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
		{
			if (func_22(&(Local_68.f_2[iParam0 /*23*/]), Global_2537071.f_796, Param1, uParam4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				if (bParam5)
				{
					unk_0xD8F6A53F4799FAFE(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), uParam4);
					unk_0xA47B46945FF6DE74(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68E4ADDDDCD7BDDE(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 2f, 0f, 0f), 1, 0, 0, 1);
				}
				unk_0xB9FD7450C0DAB575(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1084227584);
				unk_0x4551D324905984CB(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1);
				unk_0x9A8BCD43DBDDCDCA(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0, 0);
				unk_0xDC2C59BD0989562B(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1);
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/], 1);
			}
		}
		if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (func_21(&(Local_68.f_2[iParam0 /*23*/].f_1), Local_68.f_2[iParam0 /*23*/], 25, Global_2537071.f_797, -1, 1, 1, 1))
			{
				unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 5f);
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 1);
				unk_0x71199B01895C6202(Global_2537071.f_796);
				unk_0x71199B01895C6202(Global_2537071.f_797);
				unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0);
				unk_0x579B0182884711E5(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 1);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 29, 1);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 251, 1);
				unk_0x5507FCD92D15E617(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0);
				unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 5, 0);
				unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 17, 1);
				unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 512, 0);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xF2DB717A73826179((200f * Global_262145.f_154)), 0);
				func_20(&uLocal_2621, 8, unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "FM_TAXI", 0, 1);
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/].f_1, 1);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]) || !unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		return 0;
	}
	unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 4);
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
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

int func_21(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
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
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
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
		unk_0x28F5E4DA506AC0CA(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 1);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam10);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam8)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, iParam9);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam12)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_23(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_24(unk_0xD803B885F5E47A62(), Param0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam5 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405072.f_2912[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { Param0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = uParam3;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam4;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam5;
	}
}

int func_24(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_25(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_26(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = iLocal_2786;
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
	{
		iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
		uVar2 = unk_0x9539D44F3E4492F6(iVar1);
		if (!func_10(iVar1, 1, 1))
		{
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					func_16(iVar3, 0);
				}
				if (Local_68.f_2[iVar3 /*23*/].f_3 == iVar0)
				{
					func_34(iVar3);
					Local_68.f_2[iVar3 /*23*/].f_3 = -1;
					if (func_33(&uLocal_1703))
					{
						func_32(&uLocal_1703);
					}
				}
				iVar3++;
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_192, iVar0) && unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_1, 0))
			{
				if (func_31())
				{
					func_30(iVar0);
					unk_0x5D96D8530B3D0904(&(Local_68.f_192), iVar0);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_1), 0);
				}
			}
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_4.f_2, 18))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_2 != -1)
					{
						func_16(iVar3, 0);
					}
					unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 18);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_4.f_3, iVar3))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_7 != 11)
					{
						if (Local_68.f_2[iVar3 /*23*/].f_7 != 9)
						{
							if (Local_68.f_2[iVar3 /*23*/].f_7 != 10)
							{
								Local_68.f_2[iVar3 /*23*/].f_4 = iVar0;
								func_17(iVar3, 9);
								func_16(iVar3, 1);
							}
						}
					}
				}
				if (!func_15(Local_68.f_2[iVar3 /*23*/].f_1) && func_13(Local_68.f_2[iVar3 /*23*/]))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_3 == -1)
					{
						if (Local_263[iVar0 /*44*/].f_4.f_1 == iVar3 && Local_68.f_2[iVar3 /*23*/].f_7 == 8)
						{
							func_17(iVar3, 3);
							if (Local_68.f_2[iVar3 /*23*/].f_2 == -1)
							{
								Local_68.f_2[iVar3 /*23*/].f_2 = iVar0;
							}
							Local_263[iVar0 /*44*/].f_4.f_1 = -1;
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_3, (0 + iVar3)))
						{
							if ((Local_68.f_2[iVar3 /*23*/].f_7 == 8 || Local_68.f_2[iVar3 /*23*/].f_7 == 1) || Local_68.f_2[iVar3 /*23*/].f_7 == 2)
							{
								func_17(iVar3, 3);
							}
						}
						if ((((func_29(iVar1, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/])) && Local_68.f_2[iVar3 /*23*/].f_7 != 6) && Local_68.f_2[iVar3 /*23*/].f_7 != 9) && Local_68.f_2[iVar3 /*23*/].f_7 != 10) && Local_68.f_2[iVar3 /*23*/].f_7 != 11)
						{
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							if (Local_68.f_2[iVar3 /*23*/].f_2 != -1)
							{
								unk_0x0674E58A79778E99(&(Local_68.f_192), Local_68.f_2[iVar3 /*23*/].f_2);
								Local_68.f_2[iVar3 /*23*/].f_2 = -1;
								Local_68.f_187 = (Local_68.f_187 - 1);
							}
							Local_68.f_2[iVar3 /*23*/].f_3 = iVar0;
						}
						else if (unk_0x12DE711B1C681E9E(uVar2, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/]), 120f, 120f, 120f, 0, 1, 0))
						{
							if (Local_68.f_2[iVar3 /*23*/].f_2 == -1)
							{
								unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							}
							else if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							}
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
						}
						else if (unk_0x12DE711B1C681E9E(uVar2, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/]), 300f, 300f, 300f, 0, 1, 0))
						{
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
						}
						if (unk_0x179932739160BA96(iVar1) > 0)
						{
							if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x5D96D8530B3D0904(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							}
						}
					}
					else if (Local_68.f_2[iVar3 /*23*/].f_3 == iVar0)
					{
						if (!func_29(iVar1, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/])))
						{
							func_16(iVar3, 1);
							Local_68.f_2[iVar3 /*23*/].f_3 = -1;
						}
						else
						{
							if (Local_68.f_2[iVar3 /*23*/].f_7 == 5 || Local_68.f_2[iVar3 /*23*/].f_7 == 7)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iVar3 /*23*/].f_6, 3) && unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_4.f_2, 3))
								{
									unk_0x5D96D8530B3D0904(&(Local_68.f_2[iVar3 /*23*/].f_6), 3);
									unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 4);
									unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 5);
									func_17(iVar3, 5);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_4.f_2, 4))
								{
									unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 4);
									func_17(iVar3, 7);
								}
								else if (Local_68.f_2[iVar3 /*23*/].f_7 == 7)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_4.f_2, 5))
									{
										unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 5);
										func_17(iVar3, 5);
									}
								}
							}
							if ((Local_68.f_2[iVar3 /*23*/].f_7 == 5 || Local_68.f_2[iVar3 /*23*/].f_7 == 7) || Local_68.f_2[iVar3 /*23*/].f_7 == 4)
							{
								if (Local_68.f_2[iVar3 /*23*/].f_19 != Local_263[iVar0 /*44*/].f_4.f_15)
								{
									Local_68.f_2[iVar3 /*23*/].f_8 = { Local_263[iVar0 /*44*/].f_4.f_5 };
									Local_68.f_2[iVar3 /*23*/].f_11 = Local_263[iVar0 /*44*/].f_4.f_14;
									Local_68.f_2[iVar3 /*23*/].f_19 = Local_263[iVar0 /*44*/].f_4.f_15;
									func_17(iVar3, 5);
									unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 20);
								}
							}
						}
						unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
						unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
					}
					if (Local_263[iVar0 /*44*/].f_4.f_19 == iVar3 && Local_68.f_2[iVar3 /*23*/].f_22 == 0)
					{
						if (Local_263[iVar0 /*44*/].f_4.f_18 != 0)
						{
							Local_68.f_2[iVar3 /*23*/].f_22 = Local_263[iVar0 /*44*/].f_4.f_18;
							Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_19 = -1;
							Local_263[iVar0 /*44*/].f_4.f_18 = 0;
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_4.f_2, 6))
					{
						Local_68.f_2[iVar3 /*23*/].f_22 = 0;
						Local_263[iVar0 /*44*/].f_4.f_19 = -1;
						unk_0x0674E58A79778E99(&(Local_263[iVar0 /*44*/].f_4.f_2), 6);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_263[iVar0 /*44*/].f_1, 0) || Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
					unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
				}
				else
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar3 /*23*/].f_1))
					{
						func_28(&(Local_68.f_2[iVar3 /*23*/].f_1));
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar3 /*23*/]))
					{
						func_28(&(Local_68.f_2[iVar3 /*23*/]));
					}
					if (Local_68.f_2[iVar3 /*23*/].f_2 == -1)
					{
						func_16(iVar3, 0);
					}
					if (Local_68.f_2[iVar3 /*23*/].f_3 != -1)
					{
						func_16(iVar3, 1);
						Local_68.f_2[iVar3 /*23*/].f_3 = -1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_28(var uParam0)
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&uVar0);
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xD6DF381716822EFE(iParam1) + 1;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBBA8A868118C90ED(iParam1, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xA30B8362589C124A(iParam1, (iVar0 - 1), 0);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						if (unk_0x9539D44F3E4492F6(iParam0) == iVar2)
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

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Local_68.f_2[iVar0 /*23*/].f_2 == -1 && !unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
		{
			Local_68.f_2[iVar0 /*23*/].f_2 = iParam0;
			Local_68.f_187++;
			Local_68.f_189++;
			unk_0x5D96D8530B3D0904(&(Local_68.f_190), iVar0);
			unk_0x0674E58A79778E99(&(Local_68.f_190), iVar0 + 8);
			unk_0x0674E58A79778E99(&(Local_263[iParam0 /*44*/].f_1), 0);
			unk_0x5D96D8530B3D0904(&(Local_68.f_2[iVar0 /*23*/].f_6), 4);
			return;
		}
		iVar0++;
	}
}

int func_31()
{
	if (Local_68.f_187 >= 8 || Local_68.f_188 >= 8)
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

void func_34(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_4 = Local_1721[iLocal_1707 /*3*/];
	if (unk_0xE4EDC4B0E92C078B(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_4))
	{
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_1721[iVar0 /*3*/] = { Var1 };
		iVar0++;
	}
	iLocal_1706 = 0;
}

int func_35(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_37(uParam0, 0, 0);
		}
	}
}

void func_37(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_38()
{
	int iVar0;
	
	unk_0x0674E58A79778E99(&(Global_2537071.f_795), 1);
	func_324();
	func_323();
	func_302(iLocal_2620);
	func_220();
	func_195(iLocal_2620);
	func_194(iLocal_2620);
	func_192(iLocal_2620);
	if (iLocal_2617 != iLocal_2620)
	{
		func_195(iLocal_2617);
		func_194(iLocal_2617);
		func_192(iLocal_2617);
	}
	iLocal_2620++;
	if (iLocal_2620 == 8)
	{
		fLocal_2619 = 99999f;
		iLocal_2617 = iLocal_2618;
		iLocal_2620 = 0;
	}
	func_45(iLocal_2617);
	if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == unk_0x57270EE11514DC67())
				{
					func_39(1, 1, 1);
				}
				iVar0++;
			}
			func_39(0, 0, 0);
		}
	}
	else
	{
		if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == unk_0x57270EE11514DC67())
				{
					func_39(1, 1, 1);
				}
				iVar0++;
			}
		}
		func_39(1, 1, 0);
	}
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<3> Var1;
	
	if (((((((Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 != -1 || !func_11(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5, 0f, 0f, 0f, 0)) || iLocal_1879 != iLocal_1878) || Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 != 0) || Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_19 != -1) || unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 10)) || unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 17)) || iParam2)
	{
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 2);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 3);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 4);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 5);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 7);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 10);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 11);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 12);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 13);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 14);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 20);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 21);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 22);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 23);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 24);
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 25);
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_14 = 0f;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 = 0;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 = -1;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_1 = -1;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_34 = -1;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_29 = 0f;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_33 = 0f;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_35 = -1;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_36 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Local_1721[iVar0 /*3*/] = { Var1 };
			iVar0++;
		}
		iLocal_1707 = 0;
		iLocal_1709 = 0;
		iLocal_1710 = 0;
		bLocal_1874 = false;
		Global_110691 = 0;
		fLocal_1884 = unk_0xBBDA792448DB5A89(iLocal_1878);
		iLocal_1879 = iLocal_1878;
		iLocal_1880 = iLocal_1878;
		func_32(&uLocal_1882);
		fLocal_1881 = fLocal_1881;
		Local_1885 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 = 0;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_19 = -1;
		func_42(1, -1);
		unk_0xF3039DE1FDB4F6FD(1);
		unk_0x8D17794CE3273D70("ODDJOBS@TAXI@DRIVER");
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_4 = 0;
		func_32(&uLocal_1701);
	}
	if (iParam0 == 1)
	{
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_24 = 0f;
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_29 = 0f;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_795), 2);
	}
	if (unk_0xE6CD5C6925050049("taxi"))
	{
		unk_0x683413D9B7010687("taxi");
	}
	if (unk_0xC844350D5D58C99A(iLocal_1711))
	{
		unk_0xF690C84DADBB3551(&iLocal_1711);
		unk_0x71199B01895C6202(iLocal_1712);
	}
	if (unk_0x9F4FE516EAACCFC5(uLocal_2600))
	{
		unk_0xE3BB8E05FCEB3FBE(uLocal_2600, 0);
		unk_0x9A8DDC7C522F5BF5(uLocal_2600, 0);
		unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, 0, 0);
		func_40();
	}
	if (iLocal_2599 == 0)
	{
		iLocal_2599 = 1;
	}
	if (iParam1 == 1 && Local_263[unk_0x57270EE11514DC67() /*44*/].f_1 != 0)
	{
		Local_263[unk_0x57270EE11514DC67() /*44*/].f_1 = 0;
	}
}

void func_40()
{
	func_41(4, 0, -1);
	unk_0xFB452C6B9BE826C7();
	unk_0xF737A3AD8873CE16();
	unk_0xF91D0B1DCE756AFB(0);
	unk_0x0D4F19AA64A65336(iLocal_2601);
	unk_0x4DC7B72197441408(0);
}

void func_41(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_42(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_44(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_43(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_43(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0xE17FDF9E3068281B(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_44(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_45(int iParam0)
{
	if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0))
			{
				func_184(iParam0);
				func_177(iParam0);
				func_51(iParam0);
			}
			else
			{
				func_46(iParam0);
			}
		}
		else
		{
			func_46(iParam0);
		}
	}
	else
	{
		func_46(iParam0);
	}
}

void func_46(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uLocal_1672, (0 + iParam0)))
	{
		unk_0x0674E58A79778E99(&uLocal_1672, (0 + iParam0));
		if (func_33(&uLocal_1703))
		{
			func_32(&uLocal_1703);
		}
		if (func_50("TXM_H02"))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3, (0 + iParam0)))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			iLocal_1875 = 0;
		}
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3), (0 + iParam0));
	}
	func_48(&(uLocal_1682[iParam0]));
	if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 == iParam0)
	{
		func_39(1, 1, 0);
	}
	func_47(iParam0);
}

void func_47(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uLocal_1673[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(uLocal_1673[iParam0]));
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 12);
	}
}

void func_48(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
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
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_50(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_51(int iParam0)
{
	if (((unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0) && !unk_0xE64AC821059A938D(unk_0x16F2683693E537C9())) && !unk_0x36646919F20EAFFC(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1))) && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iParam0))
	{
		unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
		if (func_176(iParam0) && unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_68.f_2[iParam0 /*23*/].f_7 == 6)
			{
				if (unk_0x9F4FE516EAACCFC5(uLocal_2600))
				{
					unk_0xE3BB8E05FCEB3FBE(uLocal_2600, 0);
					unk_0x9A8DDC7C522F5BF5(uLocal_2600, 0);
					unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, 0, 0);
					func_40();
				}
				if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
				{
					func_154(iParam0);
				}
			}
			else
			{
				if ((unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0 || Local_68.f_2[iParam0 /*23*/].f_7 == 9) || Local_68.f_2[iParam0 /*23*/].f_7 == 10)
				{
					func_7(iParam0, 0);
				}
				func_88(iParam0);
			}
			if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 != iParam0)
			{
				Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 = iParam0;
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_795), 2);
			}
			func_82(iParam0);
			func_81(iParam0);
		}
		func_57(iParam0);
		unk_0xA2E3EDD0E119882F(0);
		unk_0xA2E3EDD0E119882F(1);
		unk_0xA2E3EDD0E119882F(2);
		func_56();
		func_55();
		unk_0xAFF39FB306F8E232(unk_0x16F2683693E537C9(), 2, 0);
		unk_0x38C3A68D7861DCFD(0, 99, 1);
		unk_0x38C3A68D7861DCFD(0, 100, 1);
		unk_0x38C3A68D7861DCFD(0, 25, 1);
		unk_0x38C3A68D7861DCFD(0, 73, 1);
		unk_0x38C3A68D7861DCFD(0, 200, 1);
		func_54();
		if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 376, 1);
		}
		if (func_53() || func_52(0))
		{
			unk_0x38C3A68D7861DCFD(0, 75, 1);
		}
	}
	else if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 == iParam0)
	{
		if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if ((Local_68.f_2[iParam0 /*23*/].f_7 != 9 && Local_68.f_2[iParam0 /*23*/].f_7 != 10) && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iParam0))
				{
					func_154(iParam0);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
			}
		}
		func_39(1, 1, 0);
		func_34(iParam0);
		if (func_33(&uLocal_1703))
		{
			func_32(&uLocal_1703);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 14))
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
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_53()
{
	return Global_73825;
}

void func_54()
{
	Global_2548146.f_258 = 1;
}

void func_55()
{
	Global_2537071.f_4532 = 0;
}

void func_56()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_57(int iParam0)
{
	char* sVar0;
	
	if (func_71())
	{
		if (unk_0x83D8570832F172A7(uLocal_1888))
		{
			if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
			{
				sVar0 = unk_0xF59058FCB716F903(2, 218, 1);
				if (!unk_0x7F8A39872A07D2CE(sLocal_2602, sVar0))
				{
					sLocal_2602 = sVar0;
					iLocal_2598 = 1;
				}
			}
			if (iLocal_2598 == 1)
			{
				Local_2589 = { func_70() };
				func_68(&uLocal_1889);
				func_67(0, 75, "TXM_EXIT", &uLocal_1889, 0, 361);
				if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
				{
					if (Local_68.f_2[iParam0 /*23*/].f_7 != 6)
					{
						if (Global_110691 == 1 || bLocal_1874 == 1)
						{
							if (iLocal_1706 > 1)
							{
								func_67(2, 218, "TXM_CDES", &uLocal_1889, 0, 361);
							}
						}
						if (!bLocal_1874)
						{
							if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 != Local_1721[iLocal_1707 /*3*/])
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1889, 0, 361);
							}
						}
						else if (Local_68.f_2[iParam0 /*23*/].f_7 == 5)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 4))
							{
								func_67(0, 177, "TXM_STOP", &uLocal_1889, 0, 361);
							}
							if (bLocal_1872)
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1889, 0, 361);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 3) && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 3))
							{
								if (Local_68.f_2[iParam0 /*23*/].f_7 == 5)
								{
									func_67(0, 179, "TXM_HURY", &uLocal_1889, 0, 361);
								}
							}
						}
						else if (Local_68.f_2[iParam0 /*23*/].f_7 == 7)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 5))
							{
								func_67(0, 177, "TXM_STRT", &uLocal_1889, 0, 361);
							}
							if (bLocal_1872)
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1889, 0, 361);
							}
						}
						if (unk_0x91E3F625EF57450D(2))
						{
							func_67(2, 199, "SPEC_PAUSE", &uLocal_1889, 0, 361);
						}
					}
				}
				iLocal_2598 = 0;
			}
			unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
			unk_0x5DD950F92F816F03(0);
			func_66(1);
			func_65(1);
			func_58(&uLocal_1888, &Local_2589, &uLocal_1889, func_64(&uLocal_1889));
		}
		else
		{
			uLocal_1888 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
	}
	else
	{
		unk_0xE17FDF9E3068281B(&uLocal_1888);
		iLocal_2598 = 1;
	}
}

void func_58(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_63(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_65(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(1);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_689, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_62(unk_0xF59058FCB716F903(iVar1, iVar2, 1));
						if (iVar3 < 361)
						{
							func_62(unk_0xF59058FCB716F903(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_62(unk_0xE32F7AC5E6DF304A(uVar4, uVar5, 1));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_61(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_691, iVar0))
						{
							unk_0x1200CC973A2399C8(1);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x1200CC973A2399C8(0);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_62(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_62(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_61(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(0);
						unk_0x3CAEA85DA607305E(361);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_699);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_60(*uParam0, uParam1);
	}
	func_59();
}

void func_59()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_60(var uParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_61(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_62(var uParam0)
{
	unk_0x045A0775396CC970(uParam0);
}

void func_63(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_64(var uParam0)
{
	return uParam0->f_692;
}

void func_65(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_66(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&(uParam3->f_691), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

void func_68(var uParam0)
{
	func_69(uParam0);
	uParam0->f_692 = 1;
}

void func_69(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_70()
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

int func_71()
{
	if (!func_10(unk_0xD803B885F5E47A62(), 1, 1))
	{
		return 0;
	}
	if (!func_76(1, 1))
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		return 0;
	}
	if (func_74(0))
	{
		return 0;
	}
	if (!func_72())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_73() == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	return Global_1312467.f_18;
}

bool func_74(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_75()
{
	return Global_98796.f_346 > 0;
}

int func_76(int iParam0, int iParam1)
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_80())
		{
			return 0;
		}
	}
	if (func_79())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_52(0))
		{
			return 0;
		}
	}
	if (func_78(8, -1))
	{
		return 0;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0;
	}
	if (func_77())
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (Global_1312791)
	{
		return 0;
	}
	if (Global_1574191)
	{
		return 0;
	}
	return 1;
}

bool func_77()
{
	return Global_1312877;
}

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, iParam0);
}

bool func_79()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_80()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_81(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 11))
	{
		if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 == 0)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 = 26;
				Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_19 = iParam0;
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 11);
			}
		}
	}
}

void func_82(int iParam0)
{
	if (bLocal_1874)
	{
		if (func_87(&uLocal_1882, 10000, 0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 3) || unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 3))
			{
				fLocal_1884 = (fLocal_1884 + (fLocal_1881 * 1.5f));
			}
			else
			{
				fLocal_1884 = (fLocal_1884 + fLocal_1881);
			}
			func_32(&uLocal_1882);
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), Local_1885, 0) > 50f)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 3) || unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 3))
			{
				fLocal_1884 = (fLocal_1884 + (fLocal_1881 * 1.5f));
			}
			else
			{
				fLocal_1884 = (fLocal_1884 + fLocal_1881);
			}
			func_32(&uLocal_1882);
			Local_1885 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		}
		iLocal_1879 = unk_0x11E019C8F43ACC8A(fLocal_1884);
		if (iLocal_1879 > 5000)
		{
			iLocal_1879 = 5000;
		}
		if (iLocal_1879 != iLocal_1880)
		{
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "SET_TAXI_PRICE");
			unk_0x3CAEA85DA607305E(iLocal_1879);
			unk_0x7E60D21B163E9D56();
			iLocal_1880 = iLocal_1879;
			func_85("\ntaxiService currentJourneyPrice = ");
			func_83(iLocal_1879);
			func_85("\n");
		}
	}
}

void func_83(int iParam0)
{
	func_84(iParam0);
}

void func_84(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_85(char* sParam0)
{
	func_86(sParam0);
}

void func_86(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

int func_87(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_37(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_88(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
	{
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]) && unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]) && unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
			{
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/], 0);
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/].f_1, 0);
				if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 10))
				{
					func_146(iParam0);
					func_113(iParam0);
				}
				if (func_112(iParam0))
				{
					func_89(iParam0);
					iLocal_2598 = 1;
				}
			}
			else
			{
				if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]))
				{
					unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/], 0);
				}
				else if (unk_0x8D30F6387EE75385(Local_68.f_2[iParam0 /*23*/]))
				{
				}
				if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/].f_1, 0);
				}
			}
		}
	}
	else
	{
		unk_0xF3039DE1FDB4F6FD(1);
		if (unk_0x9F4FE516EAACCFC5(uLocal_2600))
		{
			unk_0xE3BB8E05FCEB3FBE(uLocal_2600, 0);
			unk_0x9A8DDC7C522F5BF5(uLocal_2600, 0);
			unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, 0, 0);
			func_40();
		}
	}
}

void func_89(int iParam0)
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
	
	if (!iLocal_1710)
	{
		iVar0 = func_111();
		iLocal_1709 = iVar0;
		iLocal_1691[iParam0] = 0;
		iLocal_1710 = 1;
	}
	if (func_97(iParam0))
	{
		iVar1 = 0;
		unk_0x7E60C62A7CE58FC8(uLocal_1713, "CLEAR_TAXI_DISPLAY");
		unk_0x7E60D21B163E9D56();
		iVar1 = 0;
		while (iVar1 < iLocal_1706)
		{
			if (!unk_0xE4EDC4B0E92C078B(Local_1721[iVar1 /*3*/]))
			{
				iLocal_2599 = 1;
				iLocal_1691[iParam0] = 0;
				return;
			}
			if (func_96(Local_1721[iVar1 /*3*/]) == -1)
			{
				iLocal_2599 = 1;
				iLocal_1691[iParam0] = 0;
				return;
			}
			if (func_95(unk_0xAC14F6E4B17D7835(Local_1721[iVar1 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
			{
				iLocal_2599 = 1;
				iLocal_1691[iParam0] = 0;
				return;
			}
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "ADD_TAXI_DESTINATION");
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(unk_0x301901B13DC3365B(Local_1721[iVar1 /*3*/]));
			if ((func_96(Local_1721[iVar1 /*3*/]) == 492 || func_96(Local_1721[iVar1 /*3*/]) == 475) && unk_0x76137156E5D43335(Local_1721[iVar1 /*3*/]) == 0)
			{
				func_94(unk_0x8FBD6436A27198B4(Local_1721[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x3CAEA85DA607305E(iVar2);
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar4);
			}
			else
			{
				unk_0xA402F6C87C08815C(unk_0x76137156E5D43335(Local_1721[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x3CAEA85DA607305E(iVar2);
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar4);
			}
			iVar9 = func_92(Local_1721[iVar1 /*3*/]);
			if (iVar9 == -1)
			{
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0xC5561E751FF4B1E4(Local_1721[iVar1 /*3*/]);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0x6B012227B3921E18(func_90(iVar9));
				unk_0x779B34565F4D71B1();
			}
			if (unk_0xDC7D2B8A563DB482(Local_1721[iVar1 /*3*/]) == 2)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(Local_1721[iVar1 /*3*/]))))
				{
					Var6 = { unk_0x68F4C0EC296D3901(unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(Local_1721[iVar1 /*3*/])), 1) };
				}
			}
			else if (unk_0xDC7D2B8A563DB482(Local_1721[iVar1 /*3*/]) == 1)
			{
				if (unk_0xDF1306B443CD3D15(unk_0x63EC65B0F6B7C26F(Local_1721[iVar1 /*3*/]), 0))
				{
					Var6 = { unk_0x68F4C0EC296D3901(unk_0x63EC65B0F6B7C26F(Local_1721[iVar1 /*3*/]), 1) };
				}
			}
			else
			{
				Var6 = { unk_0xAC14F6E4B17D7835(Local_1721[iVar1 /*3*/]) };
			}
			func_61(unk_0xA5A6BB5EBAD59A21(Var6));
			if (((((((func_96(Local_1721[iVar1 /*3*/]) == 40 || func_96(Local_1721[iVar1 /*3*/]) == 357) || func_96(Local_1721[iVar1 /*3*/]) == 475) || func_96(Local_1721[iVar1 /*3*/]) == 492) || func_96(Local_1721[iVar1 /*3*/]) == 557) || func_96(Local_1721[iVar1 /*3*/]) == 590) || func_96(Local_1721[iVar1 /*3*/]) == 591) || func_96(Local_1721[iVar1 /*3*/]) == 614)
			{
				iVar10 = 0;
				while (iVar10 < 126)
				{
					iVar11 = iVar10;
					if (func_11(Var6, Global_1049922[iVar11 /*1951*/].f_3[0 /*3*/], 0))
					{
						iVar10 = 126;
						unk_0x7ACC3006A87F8B39("STRTNM1");
						unk_0x6B012227B3921E18(&(Global_1049922[iVar11 /*1951*/].f_16));
						unk_0x779B34565F4D71B1();
						func_61("");
					}
					iVar10++;
				}
			}
			else if (Local_1721[iVar1 /*3*/].f_2 == 0)
			{
				if (Local_1721[iVar1 /*3*/].f_1 != 0)
				{
					unk_0x7ACC3006A87F8B39("STRTNM1");
					unk_0xAE3C6C08E5688EDF(Local_1721[iVar1 /*3*/].f_1);
					unk_0x779B34565F4D71B1();
					func_61("");
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("STRTNM2");
				unk_0xAE3C6C08E5688EDF(Local_1721[iVar1 /*3*/].f_1);
				unk_0xAE3C6C08E5688EDF(Local_1721[iVar1 /*3*/].f_2);
				unk_0x779B34565F4D71B1();
			}
			if (((iLocal_2603 == 8 || iLocal_2603 == 9) || iLocal_2603 == 10) || iLocal_2603 == 12)
			{
				unk_0x1200CC973A2399C8(1);
			}
			else
			{
				unk_0x1200CC973A2399C8(0);
			}
			unk_0x7E60D21B163E9D56();
			if (bLocal_1874)
			{
				if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 == Local_1721[iVar1 /*3*/])
				{
					iLocal_1707 = iVar1;
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_4))
			{
				if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_4 == Local_1721[iVar1 /*3*/])
				{
					iLocal_1707 = iVar1;
				}
			}
			iVar1++;
		}
		if (bLocal_1874)
		{
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "SHOW_TAXI_DESTINATION");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "HIGHLIGHT_DESTINATION");
			unk_0x3CAEA85DA607305E(iLocal_1707);
			unk_0x7E60D21B163E9D56();
		}
		else
		{
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "SET_TAXI_PRICE");
			unk_0x3CAEA85DA607305E(iLocal_1879);
			if (((iLocal_2603 == 8 || iLocal_2603 == 9) || iLocal_2603 == 10) || iLocal_2603 == 12)
			{
				unk_0x1200CC973A2399C8(1);
			}
			else
			{
				unk_0x1200CC973A2399C8(0);
			}
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "SHOW_TAXI_DESTINATION");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uLocal_1713, "HIGHLIGHT_DESTINATION");
			unk_0x3CAEA85DA607305E(iLocal_1707);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xE4EDC4B0E92C078B(Local_1721[iLocal_1707 /*3*/]))
		{
			Var12 = { unk_0xAC14F6E4B17D7835(Local_1721[iLocal_1707 /*3*/]) };
			if ((!func_26(Var12) && unk_0x9F4FE516EAACCFC5(uLocal_2600)) && unk_0xFBB4F23D534EB790(uLocal_2600))
			{
				unk_0xDB111A9E05F41582(Var12.f_0, Var12.f_1);
			}
		}
		iLocal_2599 = 0;
		unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 10);
	}
}

char* func_90(int iParam0)
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
			return func_91(iParam0, 0);
			break;
		
		case 8:
			return func_91(iParam0, 0);
			break;
		
		case 9:
			return func_91(iParam0, 0);
			break;
		
		case 10:
			return func_91(iParam0, 0);
			break;
		
		case 11:
			return func_91(iParam0, 0);
			break;
		
		case 12:
			return func_91(iParam0, 0);
			break;
		
		case 13:
			return func_91(iParam0, 0);
			break;
		
		case 14:
			return func_91(iParam0, 0);
			break;
		
		case 15:
			return func_91(iParam0, 0);
			break;
		
		case 16:
			return func_91(iParam0, 0);
			break;
		
		case 17:
			return func_91(iParam0, 0);
			break;
		
		case 18:
			return func_91(iParam0, 0);
			break;
		
		case 19:
			return func_91(iParam0, 0);
			break;
		
		case 20:
			return func_91(iParam0, 0);
			break;
		
		case 21:
			return func_91(iParam0, 0);
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
			return func_91(iParam0, 0);
			break;
		
		case 40:
			return func_91(iParam0, 0);
			break;
		
		case 41:
			return func_91(iParam0, 0);
			break;
		
		case 42:
			return func_91(iParam0, 0);
			break;
		
		case 43:
			return func_91(iParam0, 0);
			break;
		
		case 44:
			return func_91(iParam0, 0);
			break;
		
		case 45:
			return func_91(iParam0, 0);
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
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_91(int iParam0, int iParam1)
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
		
		case 52:
			return "S_G_16";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		iVar1 = iVar0;
		iVar2 = func_93(iVar1);
		if (Global_31146[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_93(int iParam0)
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
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0xDC4DD3980107166C(iParam0, 24, 31);
	*uParam2 = unk_0xDC4DD3980107166C(iParam0, 16, 23);
	*uParam3 = unk_0xDC4DD3980107166C(iParam0, 8, 15);
	*uParam4 = unk_0xDC4DD3980107166C(iParam0, 0, 7);
}

int func_95(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_96(var uParam0)
{
	var uVar0;
	
	if (unk_0xE4EDC4B0E92C078B(uParam0))
	{
		uVar0 = unk_0x301901B13DC3365B(uParam0);
	}
	return uVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	switch (iLocal_1691[iParam0])
	{
		case 0:
			func_34(iParam0);
			break;
		
		case 1:
			func_98(iParam0, iLocal_66, 0);
			func_98(iParam0, 77, 0);
			func_98(iParam0, 79, 0);
			func_98(iParam0, 293, 0);
			func_98(iParam0, iLocal_67, 0);
			func_98(iParam0, 225, 0);
			func_98(iParam0, 348, 0);
			break;
		
		case 2:
			func_98(iParam0, 110, 1);
			break;
		
		case 3:
			func_98(iParam0, 119, 1);
			func_98(iParam0, 103, 1);
			break;
		
		case 4:
			func_98(iParam0, 122, 1);
			func_98(iParam0, 109, 1);
			break;
		
		case 5:
			func_98(iParam0, 311, 1);
			func_98(iParam0, 90, 1);
			break;
		
		case 6:
			func_98(iParam0, 304, 1);
			break;
		
		case 7:
			func_98(iParam0, 310, 1);
			break;
		
		case 8:
			func_98(iParam0, 309, 1);
			break;
		
		case 9:
			func_98(iParam0, 176, 1);
			break;
		
		case 10:
			func_98(iParam0, 305, 1);
			break;
		
		case 11:
			func_98(iParam0, 84, 1);
			break;
		
		case 12:
			func_98(iParam0, 94, 1);
			break;
		
		case 13:
			func_98(iParam0, 52, 1);
			break;
		
		case 14:
			func_98(iParam0, 135, 1);
			break;
		
		case 15:
			func_98(iParam0, 40, 0);
			func_98(iParam0, 357, 0);
			func_98(iParam0, 475, 0);
			func_98(iParam0, 492, 0);
			func_98(iParam0, 473, 0);
			func_98(iParam0, 496, 0);
			func_98(iParam0, 497, 0);
			func_98(iParam0, 498, 0);
			func_98(iParam0, 499, 0);
			func_98(iParam0, 557, 0);
			func_98(iParam0, 590, 0);
			func_98(iParam0, 591, 0);
			func_98(iParam0, 500, 0);
			func_98(iParam0, 614, 0);
			break;
		
		case 16:
			func_98(iParam0, 121, 1);
			break;
		
		case 17:
			func_98(iParam0, 71, 1);
			break;
		
		case 18:
			func_98(iParam0, 72, 1);
			break;
		
		case 19:
			func_98(iParam0, 446, 1);
			break;
		
		case 20:
			func_98(iParam0, 73, 1);
			break;
		
		case 21:
			func_98(iParam0, 75, 1);
			break;
		
		case 22:
			iLocal_1709 = func_111();
			if (unk_0xE4EDC4B0E92C078B(Local_1721[iLocal_1707 /*3*/]))
			{
				iVar0 = 0;
				while (iVar0 < 50)
				{
					if (unk_0xE4EDC4B0E92C078B(Local_1721[iVar0 /*3*/]))
					{
						if (Local_1721[iLocal_1707 /*3*/] == Local_1721[iVar0 /*3*/])
						{
							if (func_11(unk_0xAC14F6E4B17D7835(Local_1721[iLocal_1707 /*3*/]), unk_0xAC14F6E4B17D7835(Local_1721[iVar0 /*3*/]), 0))
							{
								Var2 = { unk_0xAC14F6E4B17D7835(Local_1721[iVar0 /*3*/]) };
								if ((!func_26(Var2) && unk_0x9F4FE516EAACCFC5(uLocal_2600)) && unk_0xFBB4F23D534EB790(uLocal_2600))
								{
									unk_0xDB111A9E05F41582(Var2.f_0, Var2.f_1);
								}
								iLocal_1707 = iVar0;
								iVar0 = 50;
								iVar1 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 == 0)
				{
					iLocal_1707 = 0;
				}
			}
			else
			{
				iLocal_1707 = 0;
			}
			break;
	}
	if (iLocal_1691[iParam0] >= 22)
	{
		return 1;
	}
	else
	{
		iLocal_1691[iParam0]++;
	}
	return 0;
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	bool bVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	uVar4 = unk_0xCDB86175B3C461EB(iParam1);
	while (unk_0xE4EDC4B0E92C078B(uVar4))
	{
		if (iLocal_1706 < 50)
		{
			if (func_110(uVar4))
			{
				if (func_109(Var0))
				{
					if (!func_108(&uVar4))
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
						Var5 = { unk_0xAC14F6E4B17D7835(uVar4) };
						if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == 16)
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
						if (iParam1 == iLocal_67)
						{
							bVar3 = true;
						}
						if (func_11(Var5, 0f, 0f, 0f, 0))
						{
							bVar3 = false;
						}
						else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Var5, 250f, 250f, 250f, 0, 1, 0))
						{
							bVar3 = false;
						}
						else if (iParam1 != iLocal_67)
						{
							iVar8 = 0;
							while (iVar8 < 1)
							{
								if (func_107(Var5, Global_2537071.f_238[iVar8 /*3*/], 200f, 1) && !func_11(Global_2537071.f_238[iVar8 /*3*/], 0f, 0f, 0f, 0))
								{
									bVar3 = false;
								}
								iVar8++;
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_110(uVar4))
							{
								if ((((unk_0xDC7D2B8A563DB482(uVar4) == 4 || unk_0xDC7D2B8A563DB482(uVar4) == 5) || unk_0xDC7D2B8A563DB482(uVar4) == 1) || unk_0xDC7D2B8A563DB482(uVar4) == 6) || unk_0xDC7D2B8A563DB482(uVar4) == 3)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								if (func_110(uVar4))
								{
									func_106(iParam0, &uVar4, &Var0);
									func_99(Var0, bParam2, iParam0);
								}
							}
						}
					}
				}
			}
		}
		uVar4 = unk_0x92BE25195E14900E(iParam1);
	}
}

void func_99(struct<3> Param0, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_96(Local_1721[iVar0 /*3*/]) == func_96(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		else if (iVar0 == iLocal_1706)
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
		if (iVar0 < iLocal_1706)
		{
			if (func_96(Local_1721[iVar0 /*3*/]) == func_96(Param0.f_0))
			{
				if (func_103(Param0, Local_1721[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_102(Param0, iVar0, iParam4);
						iVar0 = 50;
						return;
					}
					else
					{
						func_100(Param0, iVar0, iParam4);
						iLocal_1706++;
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
					func_100(Param0, iVar0, iParam4);
					iLocal_1706++;
					iVar0 = 50;
					return;
				}
			}
			else
			{
				func_100(Param0, iVar0, iParam4);
				iLocal_1706++;
				iVar0 = 50;
				return;
			}
		}
		else
		{
			func_100(Param0, iVar0, iParam4);
			iLocal_1706++;
			iVar0 = 50;
			return;
		}
		iVar0++;
	}
}

void func_100(struct<3> Param0, int iParam3, int iParam4)
{
	func_85("INSERT_NEW_DESTINATION_TO_LIST - start \n");
	func_101(iParam3);
	Local_1721[iParam3 /*3*/] = { Param0 };
	if (func_96(Local_1721[iParam3 /*3*/]) == unk_0x817B3657F78A517A())
	{
		if (Local_68.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0xAC14F6E4B17D7835(Local_1721[iParam3 /*3*/]) };
		}
	}
}

void func_101(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	func_85("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_83(iParam0);
	func_85("\n");
	iVar0 = 49;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_1721[(iVar0 - 1) /*3*/] };
		Local_1721[iVar0 /*3*/] = { Var1 };
		iVar0 = (iVar0 - 1);
	}
}

void func_102(struct<3> Param0, int iParam3, int iParam4)
{
	func_85("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \n");
	Local_1721[iParam3 /*3*/] = { Param0 };
	if (func_96(Local_1721[iParam3 /*3*/]) == unk_0x817B3657F78A517A())
	{
		if (Local_68.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0xAC14F6E4B17D7835(Local_1721[iParam3 /*3*/]) };
		}
	}
}

int func_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_104(uParam0) < func_104(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_104(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0))
		{
			Var0 = { func_105(uParam0) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		}
	}
	return unk_0x652D2EEEF1D3E62C(Var0);
}

Vector3 func_105(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = unk_0xDC7D2B8A563DB482(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0x63EC65B0F6B7C26F(uParam0);
		if (unk_0xDF1306B443CD3D15(iVar3, 0))
		{
			Var0 = { unk_0x68F4C0EC296D3901(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(uParam0));
		if (!unk_0xEB6A8945D1AC98A1(iVar4))
		{
			Var0 = { unk_0x68F4C0EC296D3901(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0x486F67509A82DB2D(unk_0x63EC65B0F6B7C26F(uParam0));
		if (unk_0xC844350D5D58C99A(iVar5))
		{
			Var0 = { unk_0x68F4C0EC296D3901(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0xAC14F6E4B17D7835(uParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0x17B771ED3F30E3D5(uParam0);
		if (unk_0x762119754C50557A(uVar6))
		{
			Var0 = { unk_0xE925E52ACABA4CE7(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0xAC14F6E4B17D7835(uParam0) };
	}
	return Var0;
}

void func_106(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = *uParam1;
	if (!*uParam2 == Global_110674)
	{
		unk_0xA53EC9C7DB1E3684(func_105(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		unk_0xA53EC9C7DB1E3684(Local_68.f_2[iParam0 /*23*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_107(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x0EB28750412C3A5A(Param0, Param3, iParam7) <= fParam6;
}

int func_108(var uParam0)
{
	if (!unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		return 1;
	}
	if (Global_110671 == *uParam0)
	{
		return 1;
	}
	if (unk_0x8FBD6436A27198B4(*uParam0) == 39)
	{
		return 1;
	}
	if (func_11(unk_0xAC14F6E4B17D7835(*uParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_96(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_109(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (!func_96(uParam0) == iLocal_66)
	{
		fVar0 = func_104(uParam0);
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

int func_110(var uParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(uParam0))
	{
		iVar0 = unk_0x67FE5316ADC6D059(uParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	int iVar0;
	
	iVar0 = unk_0xB7B9B7C245ECD0D7();
	if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 12))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_112(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xC9D9444186B5A374() > 500)
	{
		iVar4 = unk_0xB3260A60545D3F11();
		if (iLocal_2603 != iVar4)
		{
			if (((iLocal_2603 == 8 || iLocal_2603 == 9) || iLocal_2603 == 10) || iLocal_2603 == 12)
			{
				if (((iVar4 != 8 && iVar4 != 9) && iVar4 != 10) && iVar4 != 12)
				{
					iLocal_2603 = iVar4;
					iLocal_2599 = 1;
					iLocal_1691[iParam0] = 0;
					unk_0x5AE11BC36633DE4E(0);
				}
			}
			else if (((iVar4 == 8 || iVar4 == 9) || iVar4 == 10) || iVar4 == 12)
			{
				iLocal_2603 = iVar4;
				iLocal_2599 = 1;
				iLocal_1691[iParam0] = 0;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (!iLocal_2599)
		{
			iVar5 = func_111();
			if (iLocal_1709 != iVar5)
			{
				iLocal_2599 = 1;
				iLocal_1691[iParam0] = 0;
				iLocal_1709 = iVar5;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (!iLocal_2599)
		{
			if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
			{
				if (Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 == -1)
				{
					uVar3 = unk_0xCDB86175B3C461EB(unk_0x817B3657F78A517A());
					if (unk_0xE4EDC4B0E92C078B(uVar3))
					{
						Var0 = { unk_0xAC14F6E4B17D7835(uVar3) };
						if (unk_0x2A488C176D52CCA5(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) > 250f)
						{
							iLocal_2599 = 1;
							iLocal_1691[iParam0] = 0;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(Local_1721[Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]))
				{
					if (func_96(Local_1721[Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) == unk_0x817B3657F78A517A())
					{
						Var0 = { unk_0xAC14F6E4B17D7835(Local_1721[Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) };
						if (!func_11(Var0, Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36, 0))
						{
							iLocal_2599 = 1;
							iLocal_1691[iParam0] = 0;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
					else
					{
						iLocal_2599 = 1;
						iLocal_1691[iParam0] = 0;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
						unk_0x5AE11BC36633DE4E(0);
					}
				}
				else
				{
					iLocal_2599 = 1;
					iLocal_1691[iParam0] = 0;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
					unk_0x5AE11BC36633DE4E(0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
	}
	return iLocal_2599;
}

void func_113(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_71())
	{
		if (iLocal_2599 == 0)
		{
			func_145(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0x91E3F625EF57450D(2))
			{
				unk_0x558EC149EB2BC0A2(2, 241);
				unk_0x558EC149EB2BC0A2(2, 242);
				unk_0x558EC149EB2BC0A2(2, 180);
				unk_0x558EC149EB2BC0A2(2, 181);
			}
			if (iVar0 > 28 || unk_0xD245978525608929(2, 180))
			{
				if (!iLocal_1875)
				{
					func_143();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1875 = 1;
				}
			}
			else
			{
				iLocal_1875 = 0;
			}
			if (iVar0 < -28 || unk_0xBFC0798A6E3417F9(2, 181))
			{
				if (!iLocal_1876)
				{
					func_141();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1876 = 1;
				}
			}
			else
			{
				iLocal_1876 = 0;
			}
		}
		if (!bLocal_1874)
		{
			if (iLocal_1706 > 0)
			{
				unk_0xF3039DE1FDB4F6FD(1);
				if (iLocal_2599 == 0)
				{
					if (unk_0xBFC0798A6E3417F9(0, 176))
					{
						if (unk_0xE4EDC4B0E92C078B(Local_1721[iLocal_1707 /*3*/]))
						{
							if (func_140(unk_0xAC14F6E4B17D7835(Local_1721[iLocal_1707 /*3*/])))
							{
								iLocal_1877 = 0;
								Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 = { Local_1721[iLocal_1707 /*3*/] };
								Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5 = { unk_0xAC14F6E4B17D7835(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15) };
								Local_1885 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
								func_32(&uLocal_1882);
								func_82(iParam0);
								bLocal_1874 = true;
								if (iLocal_2601 != 5)
								{
									unk_0x0D4F19AA64A65336(iLocal_2601);
								}
								iLocal_1877 = 0;
								bLocal_1872 = false;
								iLocal_1873 = 1;
								iLocal_2598 = 1;
								func_116(2, iParam0);
								unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 4);
								unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 20);
								unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 3);
							}
							else
							{
								func_116(27, iParam0);
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 7) && bLocal_1874 == 0)
			{
				iLocal_2598 = 1;
				func_116(1, iParam0);
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 7);
			}
		}
		else
		{
			unk_0xF3039DE1FDB4F6FD(0);
			if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 4) && Local_68.f_2[iParam0 /*23*/].f_7 == 5)
			{
				if (unk_0xBFC0798A6E3417F9(0, 177))
				{
					unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 4);
					unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 5);
					iLocal_2598 = 1;
					func_116(24, iParam0);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 5) && Local_68.f_2[iParam0 /*23*/].f_7 == 7)
			{
				if (unk_0xBFC0798A6E3417F9(0, 177))
				{
					unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 5);
					unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 4);
					iLocal_2598 = 1;
					func_116(25, iParam0);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 3) && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 3))
			{
				if (Local_68.f_2[iParam0 /*23*/].f_7 == 5 && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 4))
				{
					unk_0x38C3A68D7861DCFD(0, 99, 1);
					unk_0x38C3A68D7861DCFD(0, 100, 1);
					if (unk_0xBFC0798A6E3417F9(0, 179))
					{
						func_116(20, iParam0);
						func_115(iParam0, 0, 0);
						iLocal_2598 = 1;
						unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 3);
					}
				}
			}
			if (bLocal_1872)
			{
				if (func_114())
				{
					if (iLocal_2599 == 0)
					{
						if (unk_0xBFC0798A6E3417F9(0, 176))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_1721[iLocal_1707 /*3*/]))
							{
								if (func_140(unk_0xAC14F6E4B17D7835(Local_1721[iLocal_1707 /*3*/])))
								{
									func_116(9, iParam0);
									if (iLocal_2601 != 5)
									{
										unk_0x0D4F19AA64A65336(iLocal_2601);
									}
									iLocal_1877 = 0;
									bLocal_1872 = false;
									iLocal_1873 = 1;
									Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 = { Local_1721[iLocal_1707 /*3*/] };
									Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5 = { unk_0xAC14F6E4B17D7835(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_15) };
									Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
									Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_33 = 0f;
									Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_34 = -1;
									unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 4);
									unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 20);
									func_115(iParam0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_2598 = 1;
								}
								else
								{
									func_116(27, iParam0);
								}
							}
						}
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (iLocal_2601 != 5)
					{
						unk_0x0D4F19AA64A65336(iLocal_2601);
					}
					iLocal_1877 = 0;
					bLocal_1872 = false;
					iLocal_1873 = 1;
				}
			}
			else if (!iLocal_1873)
			{
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					if (iLocal_2601 != 5)
					{
						unk_0x0D4F19AA64A65336(iLocal_2601);
					}
					bLocal_1872 = false;
					iLocal_1877 = 0;
					iLocal_1873 = 1;
				}
			}
		}
	}
	else
	{
		unk_0xF3039DE1FDB4F6FD(1);
	}
	unk_0x3039591AD3E735CE(uLocal_1708);
	unk_0xD9ACBBA59FD5A09E(4);
	unk_0x5DD950F92F816F03(1);
	if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0))
	{
		unk_0xEF45C43067063F18(uLocal_1713, fLocal_1717, fLocal_1718, fLocal_1715, fLocal_1716, 0, 0, 0, 255, 0);
	}
}

int func_114()
{
	if (unk_0x9F4FE516EAACCFC5(uLocal_2600))
	{
		if (unk_0xFBB4F23D534EB790(uLocal_2600))
		{
			return 1;
		}
	}
	if (bLocal_1872 || !iLocal_1873)
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1)))
			{
				if (bParam2)
				{
					unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
				}
				if (bParam1)
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
				}
				else if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
						}
					}
				}
			}
		}
	}
}

void func_116(int iParam0, int iParam1)
{
	if (!func_15(Local_68.f_2[iParam1 /*23*/].f_1))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam1 /*23*/].f_1))
		{
			if (!func_139())
			{
				if (iParam0 != 0)
				{
					func_20(&uLocal_2621, 8, unk_0x1B50683925F00106(Local_68.f_2[iParam1 /*23*/].f_1), "FM_TAXI", 0, 1);
					if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
					{
						unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_68.f_2[iParam1 /*23*/].f_1), unk_0x16F2683693E537C9(), 4000, 0, 2);
					}
					switch (iParam0)
					{
						case 1:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 2:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 5:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 7:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 9:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 12:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 13:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 24:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 25:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 26:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 27:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 20:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
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

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 1;
	return func_118(sParam2, iParam3, 0);
}

int func_118(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x5CEB4DB888A62073(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_137();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_136();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam2)
			{
				func_128();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_127())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_126())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_125();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_124();
		func_119();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_137();
	}
	return 0;
}

void func_119()
{
	if (!func_120())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_120()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_123())
	{
		return 0;
	}
	if (func_121(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_121(int iParam0)
{
	return func_122(iParam0, 20);
}

bool func_122(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_123()
{
	return -1;
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0);
	Global_20805 = 1;
}

void func_125()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x0674E58A79778E99(&Global_7357, 16);
}

int func_126()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	int iVar0;
	int iVar1;
	
	if (Global_76622)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
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

void func_128()
{
	if (func_135(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_129();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_129()
{
	func_130();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_130()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_133(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_132(unk_0x16F2683693E537C9());
			if (func_131(iVar0) && (!func_135(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_131(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_131(int iParam0)
{
	return iParam0 < 3;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(uParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_133(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_133(int iParam0)
{
	if (func_131(iParam0))
	{
		return func_134(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_134(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_135(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_136()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

void func_137()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(1);
		Global_20805 = 6;
		return;
	}
}

void func_138(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_139()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_26(Global_2537071.f_238[iVar0 /*3*/]))
		{
			if (func_107(Param0, Global_2537071.f_238[iVar0 /*3*/], 200f, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_141()
{
	if (bLocal_1874)
	{
		if (bLocal_1872)
		{
			func_142();
		}
		else if (!unk_0xFBB4F23D534EB790(uLocal_2600))
		{
			iLocal_1877 = 1;
			iLocal_2598 = 1;
		}
		else
		{
			func_142();
		}
		bLocal_1872 = true;
		iLocal_1873 = 1;
	}
	else
	{
		func_142();
	}
}

void func_142()
{
	struct<3> Var0;
	
	unk_0x7E60C62A7CE58FC8(uLocal_1713, "SET_INPUT_EVENT");
	unk_0x3CAEA85DA607305E(9);
	unk_0x7E60D21B163E9D56();
	iLocal_1707++;
	if (iLocal_1707 > (iLocal_1706 - 1))
	{
		iLocal_1707 = 0;
	}
	if (unk_0xE4EDC4B0E92C078B(Local_1721[iLocal_1707 /*3*/]))
	{
		Var0 = { unk_0xAC14F6E4B17D7835(Local_1721[iLocal_1707 /*3*/]) };
		if (!func_26(Var0))
		{
			unk_0xDB111A9E05F41582(Var0.f_0, Var0.f_1);
		}
	}
}

void func_143()
{
	if (bLocal_1874)
	{
		if (bLocal_1872)
		{
			func_144();
		}
		else if (!unk_0xFBB4F23D534EB790(uLocal_2600))
		{
			iLocal_1877 = 1;
			iLocal_2598 = 1;
		}
		else
		{
			func_144();
		}
		bLocal_1872 = true;
		iLocal_1873 = 1;
	}
	else
	{
		func_144();
	}
}

void func_144()
{
	struct<3> Var0;
	
	unk_0x7E60C62A7CE58FC8(uLocal_1713, "SET_INPUT_EVENT");
	unk_0x3CAEA85DA607305E(8);
	unk_0x7E60D21B163E9D56();
	iLocal_1707 = (iLocal_1707 - 1);
	if (iLocal_1707 < 0)
	{
		iLocal_1707 = (iLocal_1706 - 1);
		if (iLocal_1707 < 0)
		{
			iLocal_1707 = 0;
		}
	}
	if (unk_0xE4EDC4B0E92C078B(Local_1721[iLocal_1707 /*3*/]))
	{
		Var0 = { unk_0xAC14F6E4B17D7835(Local_1721[iLocal_1707 /*3*/]) };
		if (!func_26(Var0))
		{
			unk_0xDB111A9E05F41582(Var0.f_0, Var0.f_1);
		}
	}
}

void func_145(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_146(int iParam0)
{
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (!unk_0x9F4FE516EAACCFC5(uLocal_2600))
		{
			if ((!func_153() && !func_78(8, -1)) && Local_68.f_2[iParam0 /*23*/].f_7 != 6)
			{
				uLocal_2600 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 1);
				unk_0xC5940439E4EB9A33(uLocal_2600, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_2610, 1);
				func_149(iParam0);
				unk_0xA2071E69C1AE8451(uLocal_2600, 1);
				unk_0xB3A1B75CB59FEB56(1, 0, 3000, 1, 0, 0);
				unk_0x4DC7B72197441408(1);
				iLocal_2598 = 1;
				Global_110691 = 1;
			}
		}
		else if (bLocal_1874)
		{
			if (!Global_110691)
			{
				if (iLocal_1877)
				{
					if (!unk_0xFBB4F23D534EB790(uLocal_2600))
					{
						iLocal_2601 = unk_0x6137B42401E1313B();
						if (iLocal_2601 != 5)
						{
							if (unk_0x6137B42401E1313B() != 4)
							{
								unk_0x0D4F19AA64A65336(4);
							}
						}
						func_41(4, 1, -1);
						func_148();
						Global_110691 = 1;
						unk_0xE3BB8E05FCEB3FBE(uLocal_2600, 1);
						unk_0xB3A1B75CB59FEB56(1, 0, 3000, 1, 0, 0);
						unk_0x4DC7B72197441408(1);
						func_149(iParam0);
						iLocal_2598 = 1;
						iLocal_1877 = 0;
						Global_110691 = 1;
					}
				}
			}
			if ((((unk_0x6137B42401E1313B() == 4 && !unk_0xBFC0798A6E3417F9(2, 23)) && !func_153()) && !func_78(8, -1)) && Local_68.f_2[iParam0 /*23*/].f_7 != 6)
			{
				if (unk_0xFBB4F23D534EB790(uLocal_2600))
				{
					func_149(iParam0);
				}
			}
			else if ((unk_0xFBB4F23D534EB790(uLocal_2600) && !func_153()) && !func_78(8, -1))
			{
				unk_0xE3BB8E05FCEB3FBE(uLocal_2600, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				if (iLocal_2601 != 5)
				{
					unk_0x0D4F19AA64A65336(iLocal_2601);
				}
				iLocal_1877 = 0;
				bLocal_1872 = false;
				iLocal_1873 = 1;
				unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, 0, 0);
				unk_0x4DC7B72197441408(0);
				Global_110691 = 0;
				unk_0xFB452C6B9BE826C7();
				unk_0xF737A3AD8873CE16();
				unk_0xF91D0B1DCE756AFB(0);
				iLocal_2598 = 1;
				func_147();
			}
		}
		else if (unk_0xFBB4F23D534EB790(uLocal_2600))
		{
			func_149(iParam0);
		}
	}
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1706)
	{
		if (bLocal_1874)
		{
			if (iLocal_63 == Local_1721[iVar0 /*3*/])
			{
				iLocal_1707 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x7E60C62A7CE58FC8(uLocal_1713, "HIGHLIGHT_DESTINATION");
	unk_0x3CAEA85DA607305E(iLocal_1707);
	unk_0x7E60D21B163E9D56();
}

void func_148()
{
	if (!func_26(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5))
	{
		if (unk_0x9F4FE516EAACCFC5(uLocal_2600) && unk_0xFBB4F23D534EB790(uLocal_2600))
		{
			unk_0xDB111A9E05F41582(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5, Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_5.f_1);
			unk_0x3B05E4399DC8490C(0);
			unk_0xF91D0B1DCE756AFB(1400);
		}
	}
}

void func_149(int iParam0)
{
	if (unk_0x9F4FE516EAACCFC5(uLocal_2600))
	{
		func_150(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), &uLocal_2600, Local_2614);
		unk_0x5818C8D5303DCCF8(uLocal_2600, fLocal_2613);
		unk_0xDC3CC6D1845B0567(uLocal_2600, 0.01f);
	}
	if (unk_0x798A3F1296751F46())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 13))
		{
			unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 13);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 13))
	{
		func_148();
		unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 13);
	}
	unk_0x2BDA118EC94F4D04();
	unk_0xDC355804A9511111();
}

void func_150(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x9F4FE516EAACCFC5(*uParam1))
		{
			Var0 = { unk_0x835730A2D89F6093(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_152(unk_0x68E4ADDDDCD7BDDE(iParam0, Param2) - unk_0x68E4ADDDDCD7BDDE(iParam0, Local_2610)) };
			func_151(Var6, &uVar3, &uVar4, 1);
			unk_0x5F3CBA6EB9341C90(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_151(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0x5D8ABF6396A76564(Param0.f_0, Param0.f_1);
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
		*uParam3 = unk_0x5D8ABF6396A76564(Param0.f_2, fVar0);
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

Vector3 func_152(struct<3> Param0)
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

bool func_153()
{
	return Global_22209;
}

void func_154(int iParam0)
{
	var uVar0;
	
	if ((((Local_68.f_2[iParam0 /*23*/].f_7 == 2 || Local_68.f_2[iParam0 /*23*/].f_7 == 4) || Local_68.f_2[iParam0 /*23*/].f_7 == 5) || Local_68.f_2[iParam0 /*23*/].f_7 == 6) || Local_68.f_2[iParam0 /*23*/].f_7 == 7)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 2))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
			{
				if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))
				{
					if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						if (unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 5f)
						{
							func_116(12, iParam0);
							if (iLocal_1879 > iLocal_1878)
							{
								if (!unk_0x36646919F20EAFFC(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
									unk_0x2956AF9855DAF065(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)), 37, unk_0xBC64C2447446D57B(2));
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_175("TXI_HWRUN", -1);
									}
								}
							}
						}
						else if (iLocal_1879 > iLocal_1878)
						{
							if (func_172(unk_0xD803B885F5E47A62()) >= iLocal_1879 && unk_0x7A7BDE279347E517(iLocal_1879, 0, 0, 1, -1, 0))
							{
								if (Local_68.f_2[iParam0 /*23*/].f_7 == 6)
								{
									func_116(5, iParam0);
								}
								else
								{
									func_116(13, iParam0);
								}
								if (func_171())
								{
									func_158(-1834046564, iLocal_1879, &uVar0, 0, 1, 0);
								}
								else
								{
									func_155(-iLocal_1879, 0);
									unk_0xD6F9EF2CBF17C39A(iLocal_1879, 0, 1);
								}
							}
							else
							{
								func_116(7, iParam0);
								if (!unk_0x36646919F20EAFFC(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
									unk_0x2956AF9855DAF065(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)), 37, unk_0xBC64C2447446D57B(2));
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_175("TXI_HNMON", -1);
									}
								}
							}
						}
						else
						{
							func_116(13, iParam0);
						}
						unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 2);
						func_32(&uLocal_1703);
					}
				}
			}
		}
	}
}

void func_155(int iParam0, int iParam1)
{
	func_157(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_156(iParam0, 0);
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_157(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_4 = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_3 = (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_156(iVar1, 0);
	}
}

void func_158(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_171())
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
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_159(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_159(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_159(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_159(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_171())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_170()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_166(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_165(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_160(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_171())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_164(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_162(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_162(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_163(&(uParam0->f_14));
	func_163(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_163(var uParam0)
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

int func_164(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_165(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_166(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_171())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_167(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 285918879;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_169(Var0.f_1);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_168();
		unk_0xFB061A86A7AC749F(1, &Var0, 36, iVar36);
	}
}

void func_168()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_169(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_170()
{
	return Global_1312745;
}

int func_171()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_172(int iParam0)
{
	var uVar0;
	
	uVar0 = func_173(iParam0);
	return uVar0;
}

int func_173(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_174(iParam0))
		{
			return Global_1590535[iParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

void func_175(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

int func_176(int iParam0)
{
	char* sVar0;
	
	sVar0 = "taxi_display";
	if (unk_0xC844350D5D58C99A(iLocal_1711))
	{
		return 1;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_1712);
		uLocal_1713 = unk_0xB01F55A0FD1CFD49(sVar0);
		if (unk_0xB87F6CF6E5628C67(iLocal_1712) && unk_0x83D8570832F172A7(uLocal_1713))
		{
			if (func_13(Local_68.f_2[iParam0 /*23*/]))
			{
				iLocal_1711 = unk_0x7707E48765093646(iLocal_1712, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1), 0, 0, 0);
				unk_0x9F528B1B53FBC5D9(iLocal_1711, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0xF653B9B22DA806A9(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), "Chassis"), Local_2604, Local_2607, 0, 0, 0, 0, 2, 1);
				if (!unk_0xE6CD5C6925050049("taxi"))
				{
					unk_0x268029E44B2B3E36("taxi", 0);
					if (!unk_0x55CB69E8157C5B54(unk_0x134B62B726CEC8E6(iLocal_1711)))
					{
						unk_0x064E7408AD6E15E5(unk_0x134B62B726CEC8E6(iLocal_1711));
					}
				}
				uLocal_1708 = unk_0x3FF702268B97B673("taxi");
				return 1;
			}
		}
	}
	return 0;
}

void func_177(int iParam0)
{
	var uVar0;
	
	if (func_180())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_7 == 8 && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 20f, 20f, 3f, 0, 1, 1))
		{
			unk_0x3F423BF5B8125A50("TAXI_HAIL");
			if (unk_0xB4AE0788C1587752("TAXI_HAIL"))
			{
				if (uLocal_1682[iParam0] == -1)
				{
					func_179(&(uLocal_1682[iParam0]), 0, "TXM_H01", 1, 0, 0, 0);
				}
				if (func_178(uLocal_1682[iParam0], 1))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 7))
					{
						unk_0xDD353D0E9C789D0E(&uVar0);
						unk_0x9294582561BECEE7(0, 0);
						unk_0xC6EB89C59F2AF6B8(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x75ABDC5F81978924(uVar0);
						unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uVar0);
						unk_0xF82EA857DA10E0CD(&uVar0);
					}
					else
					{
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
					}
					if (func_50("TXM_H01"))
					{
						unk_0xA37A90C62806D848(1);
					}
					Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_1 = iParam0;
					unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 23);
					unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 22);
					func_48(&(uLocal_1682[iParam0]));
				}
			}
		}
		else
		{
			unk_0x8D17794CE3273D70("TAXI_HAIL");
			func_48(&(uLocal_1682[iParam0]));
		}
	}
	else
	{
		unk_0x8D17794CE3273D70("TAXI_HAIL");
		func_48(&(uLocal_1682[iParam0]));
	}
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_179(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_48(uParam0);
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
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_180()
{
	if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_1 != -1)
		{
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			return 0;
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			return 0;
		}
		if (func_181(unk_0xD803B885F5E47A62(), 1, 0))
		{
			return 0;
		}
		if (func_52(0))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
		if (func_80())
		{
			return 0;
		}
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_182(int iParam0)
{
	return func_183(iParam0);
}

bool func_183(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	if (((((((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 10f, 10f, 2f, 0, 1, 0) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) < 3f) && !func_191(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0) && Local_68.f_2[iParam0 /*23*/].f_7 != 9) && Local_68.f_2[iParam0 /*23*/].f_7 != 10) && Local_68.f_2[iParam0 /*23*/].f_7 != 11)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3, (0 + iParam0)))
		{
			func_145(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_1875 == 0)
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1875 = 1;
				}
			}
			else
			{
				iLocal_1875 = 0;
			}
			if (iLocal_1875 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 275)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3), (0 + iParam0));
						iLocal_1875 = 0;
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(uLocal_1672, (0 + iParam0)))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					uVar5 = func_190(1190, -1, 0);
					if ((!unk_0xEAE0D21A50E6C7F4(uVar5, 7) || !unk_0xEAE0D21A50E6C7F4(uVar5, 8)) || !unk_0xEAE0D21A50E6C7F4(uVar5, 9))
					{
						if (func_87(&uLocal_1703, 20000, 0))
						{
							if ((((unk_0x4D570FEF9D230CE7(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) == unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) && unk_0x10BA239D3B8FDC7F(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1119092736)) && !unk_0x70EED0761B82965E(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]))) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_188(unk_0xD803B885F5E47A62()))
							{
								func_175("TXM_H02", -1);
								if (!unk_0xEAE0D21A50E6C7F4(uVar5, 7))
								{
									unk_0x5D96D8530B3D0904(&uVar5, 7);
								}
								else if (!unk_0xEAE0D21A50E6C7F4(uVar5, 8))
								{
									unk_0x5D96D8530B3D0904(&uVar5, 8);
								}
								else
								{
									unk_0x5D96D8530B3D0904(&uVar5, 9);
								}
								func_186(1190, uVar5, -1, 1, 0);
								func_32(&uLocal_1703);
								unk_0x5D96D8530B3D0904(&uLocal_1672, (0 + iParam0));
							}
						}
					}
				}
			}
			if (unk_0x06F8112AA79C53D9(0, 23))
			{
				if (unk_0xC9D9444186B5A374() > 275)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3, (0 + iParam0)))
					{
						if (func_185(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) == 1)
						{
							if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1, 0))
							{
								iVar4 = 1;
							}
							else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 2, 0))
							{
								iVar4 = 2;
							}
							else
							{
								iVar4 = 0;
							}
						}
						else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 2, 0))
						{
							iVar4 = 2;
						}
						else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0, 0))
						{
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), -1, iVar4, 1f, 8388608, 0);
						unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3), (0 + iParam0));
						iLocal_2598 = 1;
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
		if (unk_0xEAE0D21A50E6C7F4(uLocal_1672, (0 + iParam0)))
		{
			unk_0x0674E58A79778E99(&uLocal_1672, (0 + iParam0));
			if (func_50("TXM_H02"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3, (0 + iParam0)))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				iLocal_1875 = 0;
			}
			unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_3), (0 + iParam0));
		}
	}
}

int func_185(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			Var0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0x68E4ADDDDCD7BDDE(iParam0, -1f, -0.5f, 0f) };
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

void func_186(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_187(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, uParam1, iParam3);
	}
}

int func_187(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_170();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

bool func_188(int iParam0)
{
	return func_189(iParam0) == joaat("weapon_minigun");
}

int func_189(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_595;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0 /*3*/][func_187(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0xBBA8A868118C90ED(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xA30B8362589C124A(iParam0, (iVar0 - 1), 0);
				if (unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_192(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_3 == -1)
		{
			if (Local_68.f_2[iParam0 /*23*/].f_7 == 3)
			{
				if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
				{
					if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1))
					{
						if (func_13(Local_68.f_2[iParam0 /*23*/]))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0))
							{
								func_193(iParam0);
								return;
							}
						}
					}
				}
			}
		}
	}
	func_47(iParam0);
}

void func_193(int iParam0)
{
	if (!unk_0xE4EDC4B0E92C078B(uLocal_1673[iParam0]))
	{
		uLocal_1673[iParam0] = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]));
		unk_0xBC8E0A7390523199(uLocal_1673[iParam0], 198);
		unk_0xDC5B2F9D0CCE3A10(uLocal_1673[iParam0], "TXM_BLIP");
		unk_0xF412DD40DE84CE72(uLocal_1673[iParam0], 1);
		unk_0x0EC848EFF66DF45A(uLocal_1673[iParam0], 7000);
		unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 12);
	}
}

void func_194(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 1))
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_1673[iParam0]))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_795), 1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_1, 0))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
		{
			unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_1), 0);
		}
	}
}

void func_195(int iParam0)
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
	
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1) && unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]))
		{
			iVar3 = 3;
			Var4 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0) };
			if (Local_68.f_2[iParam0 /*23*/].f_7 != 11)
			{
				if (Local_68.f_2[iParam0 /*23*/].f_7 != 9)
				{
					if (Local_68.f_2[iParam0 /*23*/].f_7 != 10)
					{
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 251, 1);
						if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iParam0))
						{
							if (func_218(iParam0))
							{
								func_39(1, 1, 1);
								unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
							}
						}
						if (Local_68.f_2[iParam0 /*23*/].f_7 != 8)
						{
							unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1);
						}
					}
				}
			}
			func_217(iParam0);
			switch (Local_68.f_2[iParam0 /*23*/].f_7)
			{
				case 0:
					break;
				
				case 1:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != -1 && Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
					{
						if (func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							if (func_213(iParam0, func_216(unk_0xD803B885F5E47A62()), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), 250))
							{
								Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
								unk_0xE9362E4D600DD12A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
						{
							iVar1 = iLocal_1719;
							unk_0xE9362E4D600DD12A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
						}
						unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
					}
					break;
				
				case 2:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != -1 && Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
						{
							if (func_210(Var4, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29)))
							{
								unk_0x9992C3A6A1766168(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0.5f);
								if (unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 14))
								{
									unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 0, 60f, 0);
								}
								else
								{
									unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 3, 60f, 0);
								}
								iLocal_2598 = 1;
								unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
							}
						}
						unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
					}
					break;
				
				case 3:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != -1 && Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 23))
						{
							unk_0x67B9E919FADF78E0(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 2500, unk_0x12AB0310C2281427("NORMAL"), 0);
							unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 22))
						{
							unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
							iLocal_2598 = 1;
							unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						}
						else if (!unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
						{
							if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 5)
							{
								unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
							}
						}
					}
					break;
				
				case 4:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33 = 0f;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = -1;
					}
					if (func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						func_115(iParam0, 0, 0);
					}
					unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
					if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
					{
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0xFCCE56DAE67AA889(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
								unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
							}
						}
						else if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
								{
									unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Var4, 5, 5f, 1076627627, -1f, 1f, 1);
								}
							}
							else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0, 0))
							{
								unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
								unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 5:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						if (func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0) && func_11(Local_68.f_2[iParam0 /*23*/].f_8, Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_5, 0))
						{
							if (Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 == -1)
							{
								if (func_209(Local_68.f_2[iParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0) || func_199(Local_68.f_2[iParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0))
								{
									unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									func_115(iParam0, 0, 0);
									iLocal_2598 = 1;
								}
								Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
							}
							else
							{
								iVar8 = unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]);
								if (func_196(&iVar8, Local_68.f_2[iParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34), 1000))
								{
									unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
									func_115(iParam0, 0, 0);
									iLocal_2598 = 1;
								}
							}
						}
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
							if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
							{
								unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
								unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
						}
						else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0x8352CA08CF578D18(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
						{
							if (!func_8(iParam0))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 242628503, 1))
								{
									fVar2 = 15f;
									iVar1 = iLocal_1719;
									iVar3 = 3;
									if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 3) || unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 3))
									{
										fVar2 = 20f;
										iVar1 = iLocal_1720;
									}
									if (unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 14))
									{
										iVar3 = 0;
									}
									func_115(iParam0, 1, 1);
									unk_0x9992C3A6A1766168(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0.5f);
									unk_0xDD353D0E9C789D0E(&uVar0);
									unk_0xAB770AF6E04B282A(0, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, fVar2, iVar1, 45f);
									unk_0x27F3789FF35EEDF1(0, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33, iVar3, 60f, 1);
									unk_0x75ABDC5F81978924(uVar0);
									unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), uVar0);
									unk_0xF82EA857DA10E0CD(&uVar0);
									iLocal_2598 = 1;
								}
							}
						}
						unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
						unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
					}
					break;
				
				case 6:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 24))
						{
							if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 242628503, 1))
							{
								unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
								iLocal_2598 = 1;
								unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 5)
								{
									unk_0x0674E58A79778E99(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
								}
							}
							func_7(iParam0, 1);
						}
					}
					break;
				
				case 7:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						iLocal_2598 = 1;
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0xFCCE56DAE67AA889(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
								if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
								{
									unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
									unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
								}
							}
						}
						else if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 25))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 5)
								{
									func_115(iParam0, 1, 1);
									unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 1), unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1)), 3, 60f, 0);
								}
								unk_0x5D96D8530B3D0904(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
							}
						}
					}
					break;
				
				case 8:
					unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0);
					if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
						if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
						{
							unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
							unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0x8352CA08CF578D18(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1), 8, 12f, 786599, 400f, -1f, 0);
					}
					break;
				
				case 9:
				case 10:
					func_7(iParam0, 0);
					if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					{
						unk_0x7720CBBC7DD82563(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x7720CBBC7DD82563(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0x7720CBBC7DD82563(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 251, 0);
					unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0);
					unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0);
					if (((!unk_0xE9FDA1035CFEA94F(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1)) && !func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 1805844857, 1)) && !func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), -251125078, 1)) && unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 8)
					{
						if (Local_68.f_2[iParam0 /*23*/].f_7 == 10)
						{
							bVar7 = true;
						}
						if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), -1, 0) != unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1))
						{
							bVar7 = true;
						}
						if (Local_68.f_2[iParam0 /*23*/].f_4 != -1)
						{
							if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_4)))
							{
								iVar9 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_4)));
							}
						}
						if (!unk_0xC844350D5D58C99A(iVar9))
						{
							iVar9 = 0;
						}
						if (bVar7)
						{
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 2, 0);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 65536, 1);
							if (unk_0xC844350D5D58C99A(iVar9))
							{
								unk_0xF3268524E9BE6D6E(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), iVar9, 500f, -1, 0, 0);
							}
							else
							{
								unk_0xEEB67C3D0A71A47B(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), Var4, 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 65536, 0);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 2, 1);
							if (unk_0xC844350D5D58C99A(iVar9))
							{
								unk_0x89258193691A7600(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), iVar9, 8, 25f, 790564, 200f, 15f, 1);
							}
							else
							{
								unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Var4, 8, 25f, 790564, 200f, 15f, 1);
							}
						}
					}
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 1);
					break;
				
				case 11:
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
					{
						unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0);
						func_28(&(Local_68.f_2[iParam0 /*23*/]));
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
					{
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 251, 0);
						unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0);
						func_28(&(Local_68.f_2[iParam0 /*23*/].f_1));
					}
					return;
					break;
				}
		}
		if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
		{
			fVar10 = unk_0x0EB28750412C3A5A(func_216(unk_0xD803B885F5E47A62()), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 1), 1);
			if (fVar10 < fLocal_2619)
			{
				fLocal_2619 = fVar10;
				iLocal_2618 = iParam0;
			}
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_7 == 11)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]))
			{
				unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0);
				func_28(&(Local_68.f_2[iParam0 /*23*/]));
			}
		}
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
			{
				if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 251, 0);
					unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0);
				}
				func_28(&(Local_68.f_2[iParam0 /*23*/].f_1));
			}
		}
	}
}

int func_196(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
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
	if (!func_198(Param1))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *uParam6 + 2;
	iVar25 = 50;
	unk_0x10FEEAFF01E32639((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7)));
	if (unk_0xD1B4D22E0BA9B0C8((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7))))
	{
		while (!bVar19 && *uParam6 < iVar24)
		{
			if (Param1.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x4A13F7D4B1E239A0(Param1, *uParam6, &Var28, &fVar31, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0xDEC4A70C9F250662(Var28, 1, iVar20, 1077936128, 0);
				if (unk_0x5DD62183BBF151CD(uVar18))
				{
					if (unk_0xC05DA9D35DAF88FD(Var28, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
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
						else if (unk_0x5B33870CBB8B6AC1(uVar18) || !unk_0xD9DC3EBC8290FF92(uVar18))
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
							if (unk_0x968116EE0D84C042(Var28, &uVar27, &uVar26))
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
						if (func_197(Param1, Var28) || fVar17 < 0.5f)
						{
							Var28 = { unk_0x8A5E176FF719A014(Var28, fVar31, fVar15, 0f, 0f) };
							if (unk_0xDF1306B443CD3D15(*iParam0, 0))
							{
								iVar11 = *iParam0;
							}
							if (!unk_0x9868643FAC294133(Var28, 3f, 3f, 3f, iVar11))
							{
								if (func_209(Var28, &Var28, &fVar31, 1) || func_199(Var28, &Var28, &fVar31, 1))
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
		fLocal_1705 = unk_0x652D2EEEF1D3E62C(Var2);
		if (fLocal_1705 != 0f)
		{
		}
		return 1;
	}
	return 0;
}

int func_197(struct<3> Param0, struct<3> Param3)
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
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = unk_0x2A488C176D52CCA5(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_198(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xA5A6BB5EBAD59A21(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x7F8A39872A07D2CE("SanAnd", uVar0) || unk_0x7F8A39872A07D2CE("Alamo", sVar0)) || unk_0x7F8A39872A07D2CE("ArmyB", sVar0)) || unk_0x7F8A39872A07D2CE("BhamCa", sVar0)) || unk_0x7F8A39872A07D2CE("Baytre", sVar0)) || unk_0x7F8A39872A07D2CE("BradT", sVar0)) || unk_0x7F8A39872A07D2CE("BradP", sVar0)) || unk_0x7F8A39872A07D2CE("CANNY", sVar0)) || unk_0x7F8A39872A07D2CE("CCreak", sVar0)) || unk_0x7F8A39872A07D2CE("ChamH", sVar0)) || unk_0x7F8A39872A07D2CE("CHU", sVar0)) || unk_0x7F8A39872A07D2CE("COSI", sVar0)) || unk_0x7F8A39872A07D2CE("CMSW", sVar0)) || unk_0x7F8A39872A07D2CE("Cypre", sVar0)) || unk_0x7F8A39872A07D2CE("Desrt", sVar0)) || unk_0x7F8A39872A07D2CE("ELGorl", sVar0)) || unk_0x7F8A39872A07D2CE("Galli", sVar0)) || unk_0x7F8A39872A07D2CE("Galfish", sVar0)) || unk_0x7F8A39872A07D2CE("Harmo", sVar0)) || unk_0x7F8A39872A07D2CE("HumLab", sVar0)) || unk_0x7F8A39872A07D2CE("Jail", sVar0)) || unk_0x7F8A39872A07D2CE("LAct", sVar0)) || unk_0x7F8A39872A07D2CE("LDam", sVar0)) || unk_0x7F8A39872A07D2CE("Lago", sVar0)) || unk_0x7F8A39872A07D2CE("MTChil", sVar0)) || unk_0x7F8A39872A07D2CE("MTJose", sVar0)) || unk_0x7F8A39872A07D2CE("MTGordo", sVar0)) || unk_0x7F8A39872A07D2CE("NCHU", sVar0)) || unk_0x7F8A39872A07D2CE("Oceana", sVar0)) || unk_0x7F8A39872A07D2CE("Palmpow", sVar0)) || unk_0x7F8A39872A07D2CE("PBluff", sVar0)) || unk_0x7F8A39872A07D2CE("Paleto", sVar0)) || unk_0x7F8A39872A07D2CE("PalCov", sVar0)) || unk_0x7F8A39872A07D2CE("PalFor", sVar0)) || unk_0x7F8A39872A07D2CE("PalHigh", sVar0)) || unk_0x7F8A39872A07D2CE("RTRAK", sVar0)) || unk_0x7F8A39872A07D2CE("Rancho", sVar0)) || unk_0x7F8A39872A07D2CE("SANDY", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaH", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaV", sVar0)) || unk_0x7F8A39872A07D2CE("Zenora", sVar0)) || unk_0x7F8A39872A07D2CE("Slab", sVar0)) || unk_0x7F8A39872A07D2CE("WindF", sVar0)) || unk_0x7F8A39872A07D2CE("Zancudo", sVar0)) || unk_0x7F8A39872A07D2CE("SanChia", sVar0)) || unk_0x7F8A39872A07D2CE("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_199(struct<3> Param0, var uParam3, float fParam4, int iParam5)
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
	
	if (func_208(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_208(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_208(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_208(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_208(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0x8CD06866876216F2())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0x8CD06866876216F2())
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
	if (unk_0x0399732A9EBC368E(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (unk_0x0399732A9EBC368E(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
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
	else if (unk_0x8CD06866876216F2())
	{
		if (unk_0x0399732A9EBC368E(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
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
		else if (unk_0x0399732A9EBC368E(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
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
		else if (unk_0x0399732A9EBC368E(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
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
		else if (unk_0x0399732A9EBC368E(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
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
		else if (unk_0x0399732A9EBC368E(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
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
	if (func_205(3, Var1))
	{
		if (func_204(Var1, 3, 0, 0))
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
	if (unk_0x0399732A9EBC368E(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_203(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_203(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_203(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_203(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
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
	if (func_203(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x0399732A9EBC368E(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0x0399732A9EBC368E(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0x0399732A9EBC368E(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0x09AC81E49EA267F7(0, iVar0))
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
	if (unk_0x0399732A9EBC368E(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
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
	if (!func_201())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_205(7, Var1))
		{
			if (func_204(Var1, 7, 0, 0))
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
	if (func_205(2, Var1))
	{
		if (func_204(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x8CD06866876216F2())
			{
				switch (unk_0x09AC81E49EA267F7(0, iVar0))
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
	fVar31 = func_200(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_200(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x0399732A9EBC368E(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x0399732A9EBC368E(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
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
		if ((((unk_0x0399732A9EBC368E(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x0399732A9EBC368E(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x0399732A9EBC368E(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x0399732A9EBC368E(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x0399732A9EBC368E(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0x09AC81E49EA267F7(0, iVar0) == 0)
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
	if (unk_0x0399732A9EBC368E(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*fParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*fParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*fParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*fParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*fParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x0399732A9EBC368E(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0x09AC81E49EA267F7(0, iVar0) == 0)
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
	if (unk_0x0399732A9EBC368E(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0x0399732A9EBC368E(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*fParam4 = -20f;
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*fParam4 = 160f;
		return 1;
	}
	if (unk_0x0399732A9EBC368E(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_200(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xB7A628320EFF8E47(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_201()
{
	int iVar0;
	
	iVar0 = func_129();
	if (iVar0 == 0)
	{
		if (func_202(65))
		{
			return 1;
		}
		if (unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_202(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_202(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

bool func_203(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_204(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
			fVar92[10] = 140f;
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
		if (unk_0x0399732A9EBC368E(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_205(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_207(iParam0)) < func_206(iParam0);
}

float func_206(int iParam0)
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

Vector3 func_207(int iParam0)
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

int func_208(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_209(struct<3> Param0, var uParam3, float fParam4, int iParam5)
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (unk_0x0399732A9EBC368E(Var0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, 0, 1))
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
	if (unk_0x0399732A9EBC368E(Var0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
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

int func_210(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
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
	if (!func_198(Param3))
	{
		iVar10 = 9;
	}
	uVar9 = unk_0xDEC4A70C9F250662(Param3, 1, iVar10, 1077936128, 0);
	if (unk_0x5DD62183BBF151CD(uVar9))
	{
		unk_0x8502D8EBA9E78216(uVar9, &Var0);
		if (unk_0x48C17E97DDC41CBC(Var0, 0, &Var3) && unk_0x48C17E97DDC41CBC(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.f_0, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_212(Var14, Var17);
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
				*uParam8 = func_211(*uParam8, 0f, 360f);
				return 1;
			}
		}
		else if (unk_0x48C17E97DDC41CBC(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_211(float fParam0, float fParam1, float fParam2)
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

float func_212(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_213(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
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
	if (!func_198(Param1))
	{
		iVar9 = 9;
	}
	func_215(Param1, Param1, &(Local_68.f_2[iParam0 /*23*/].f_12), &(Local_68.f_2[iParam0 /*23*/].f_15), iParam7);
	if (func_214(Local_68.f_2[iParam0 /*23*/].f_12, Local_68.f_2[iParam0 /*23*/].f_15))
	{
		if (!func_209(Param1, uParam4, uParam5, 1) && !func_199(Param1, uParam4, uParam5, 1))
		{
			while (!bVar8 && *uParam6 < iVar6)
			{
				if (Param1.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0x4A13F7D4B1E239A0(Param1, *uParam6, uParam4, uParam5, &uVar4, iVar9, fVar0, fVar1))
				{
					uVar5 = unk_0xDEC4A70C9F250662(*uParam4, 1, iVar9, 1077936128, 0);
					if (unk_0x5DD62183BBF151CD(uVar5))
					{
						fVar2 = (Param1.f_2 - uParam4->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_197(Param1, *uParam4) || fVar2 < 0.5f)
						{
							if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0))
							{
								iVar3 = unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]);
							}
							if (!unk_0x9868643FAC294133(*uParam4, 3f, 3f, 3f, iVar3))
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

int func_214(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0xD1B4D22E0BA9B0C8(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_215(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
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
	if (!func_95(Var0, *uParam6, 1056964608, 0) || !func_95(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	unk_0x10FEEAFF01E32639(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

Vector3 func_216(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

void func_217(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_22 != 0 && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 6))
	{
		func_116(Local_68.f_2[iParam0 /*23*/].f_22, iParam0);
		unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 6);
	}
}

int func_218(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	uVar0 = unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1);
	uVar1 = unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]);
	Var3 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0) };
	if (unk_0xE9FDA1035CFEA94F(uVar0))
	{
		return 1;
	}
	if (unk_0x4734A6196B611C3B(iVar0, 0))
	{
		return 1;
	}
	if (((unk_0x7B5606C651AB51B5(uVar1, 2, 30000) || unk_0x7B5606C651AB51B5(uVar1, 3, 30000)) || unk_0x7B5606C651AB51B5(uVar1, 0, 7000)) || unk_0x7B5606C651AB51B5(uVar1, 1, 7000))
	{
		return 1;
	}
	else if (unk_0xD3DCEC81D13AAFB1(Var3, 7f, 0))
	{
		if (unk_0xD3DCEC81D13AAFB1(Var3, 7f, 1))
		{
			func_219(unk_0x57270EE11514DC67(), 1, 37);
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
		if (unk_0x723EE7F83DF1497D(Var7, Var10, 0))
		{
			if (unk_0x723EE7F83DF1497D(Var7, Var10, 1))
			{
				func_219(unk_0x57270EE11514DC67(), 1, 37);
			}
			return 1;
		}
	}
	if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
	{
		uVar2 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xFB04705FDFDCE640()));
		if (!unk_0xEB6A8945D1AC98A1(uVar2))
		{
			if (unk_0xC844350D5D58C99A(uVar1))
			{
				if (unk_0xB87D13D0C064E9D1(iVar1, iVar2, 1))
				{
					func_219(unk_0x57270EE11514DC67(), 1, 37);
					return 1;
				}
			}
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0xB87D13D0C064E9D1(iVar0, iVar2, 1))
				{
					func_219(unk_0x57270EE11514DC67(), 1, 37);
					return 1;
				}
			}
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_3 == -1 && Local_68.f_2[iParam0 /*23*/].f_7 == 3)
	{
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != -1 && unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iParam0)))
	{
		if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iParam0)), 1, 1))
		{
			unk_0x2956AF9855DAF065(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iParam0)), iParam2, unk_0xBC64C2447446D57B(iParam1));
		}
	}
}

void func_220()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 19))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 16) && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 17))
		{
			if (!func_52(0))
			{
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 17);
				func_39(1, 0, 0);
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 18);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 15) && !unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 16))
		{
			if (func_52(0))
			{
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 16);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 15))
		{
			func_20(&uLocal_2621, 7, 0, "TaxiDispatch", 0, 1);
			if (func_221(&uLocal_2621, 131, "MPTXIAU", "MPTXI_E1", 0, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 15);
			}
		}
	}
}

int func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_300())
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_222(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_222(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	iVar1 = func_298(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_297(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_292(uParam6))
	{
		return 0;
	}
	if (func_289(iVar0, iVar1, iVar2))
	{
		if (func_288())
		{
			return 0;
		}
		func_287();
		return func_229(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_228(iParam4))
	{
		return 0;
	}
	func_223(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_223(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = uParam6;
	func_224(iParam4);
	func_287();
	Global_1370527.f_40.f_13 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 7000);
}

void func_224(int iParam0)
{
	if (func_227(iParam0))
	{
		func_226();
		return;
	}
	func_225();
}

void func_225()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_226()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_227(int iParam0)
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

bool func_228(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_229(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_286();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_283(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_280(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_283(uParam0, sParam3, sParam4);
		}
		return func_272(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_271(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_259(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_258(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_230(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_230(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_257();
	bVar0 = true;
	if (func_232(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(120000);
		return 1;
	}
	return 0;
}

void func_231(int iParam0)
{
	Global_1370527.f_40.f_11 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_232(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_251(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
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
	sVar4 = func_250(sParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
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
		if (unk_0xEAE0D21A50E6C7F4(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_247(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_236(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam4, 0))
	{
		func_235();
	}
	func_257();
	func_234();
	func_233();
	return 1;
}

void func_233()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_234()
{
	Global_1370527.f_40 = 3;
}

void func_235()
{
	unk_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_236(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_237(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			unk_0x5D96D8530B3D0904(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_237(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_128();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
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
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_246() == 0)
	{
		func_244();
		return 0;
	}
	func_243(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/]), sParam1, 64);
	Global_4268500[Global_4269749 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749 /*104*/].f_24 = iParam2;
	}
	Global_4268500[Global_4269749 /*104*/].f_25 = iParam7;
	Global_4268500[Global_4269749 /*104*/].f_26 = uParam8;
	Global_4268500[Global_4269749 /*104*/].f_29 = uParam9;
	Global_4268500[Global_4269749 /*104*/].f_30 = uParam12;
	Global_4268500[Global_4269749 /*104*/].f_31 = uParam11;
	Global_4268500[Global_4269749 /*104*/].f_28 = 0;
	Global_4268500[Global_4269749 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_33), sParam4, 64);
	Global_4268500[Global_4269749 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_50), sParam5, 64);
	Global_4268500[Global_4269749 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_83), sParam15, 64);
	func_128();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749 /*104*/].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268500[Global_4269749 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268500[Global_4269749 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268500[Global_4269749 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_242(0);
				break;
			
			case 1:
				func_242(1);
				break;
			
			case 2:
				func_242(2);
				break;
			
			case 3:
				func_242(3);
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
				Global_4269750 = 1;
				break;
			
			case 0:
				Global_4269750 = 1;
				break;
			
			case 2:
				Global_4269750 = 1;
				break;
			
			case 1:
				Global_4269750 = 1;
				break;
			}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_128();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_241(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_239(1);
			func_241(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_238(uParam0, sParam1);
	return 1;
}

void func_238(var uParam0, char* sParam1)
{
	if (!func_120())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, -1180597171, unk_0x12AB0310C2281427(sParam1), 0);
}

void func_239(int iParam0)
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_135(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_7362);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_240(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_240(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_61(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_61(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_61(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_61(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_61(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_241(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

void func_242(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_243(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4460E481B9E33ADA();
	uVar1 = unk_0x8D199E381D262EEF();
	uVar2 = unk_0xD8A54335F18763BA();
	uVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	uVar5 = unk_0x1A61A218F5C5EB02();
	Global_4268500[iParam0 /*104*/].f_18 = uVar0;
	Global_4268500[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4268500[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4268500[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4268500[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268500[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_244()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_245(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

int func_245(struct<6> Param0, struct<6> Param6)
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

int func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0 || Global_4268500[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_245(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749 /*104*/].f_99[0] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[1] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[2] = 0;
	return 1;
}

int func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_237(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			unk_0x5D96D8530B3D0904(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_249(2, iParam1);
	return iParam0;
}

void func_249(int iParam0, var uParam1)
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

char* func_250(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_249(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = func_254(iParam0);
	if (iVar0 == -1)
	{
		func_252(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_252(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_254(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_253(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_255(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_255(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_256(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_256(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_257()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_258(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_257();
	bVar0 = false;
	return func_232(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_259(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_260(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_260(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_251(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_250(sParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
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
		if (unk_0xEAE0D21A50E6C7F4(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_270(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_262(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam4, 0))
	{
		func_235();
	}
	func_261();
	func_234();
	func_233();
	return 1;
}

void func_261()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_262(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_264(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_263(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_263(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_264(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_128();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
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
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_269() == 0)
	{
		func_267();
		return 0;
	}
	func_266(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_242(0);
		func_242(2);
		func_242(1);
	}
	else
	{
		func_128();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_242(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_242(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_242(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_242(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_128();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_241(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_239(1);
			func_241(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_265(uParam0, sParam1);
	return 1;
}

void func_265(var uParam0, char* sParam1)
{
	if (!func_120())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

void func_266(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4460E481B9E33ADA();
	uVar1 = unk_0x8D199E381D262EEF();
	uVar2 = unk_0xD8A54335F18763BA();
	uVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	uVar5 = unk_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = uVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_267()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
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
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_268(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_268(struct<6> Param0, struct<6> Param6)
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

int func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
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
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_268(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_270(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 3;
	if (func_264(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_263(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_271(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_261();
	bVar0 = true;
	if (func_260(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(120000);
		return 1;
	}
	return 0;
}

int func_272(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xEAE0D21A50E6C7F4(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam4, 4))
	{
		bVar0 = func_279(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_278(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam4, 3))
		{
			func_277(1);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam4, 5))
		{
			func_276(1);
		}
		func_275();
		func_234();
		func_274();
		func_273();
		return 1;
	}
	return 0;
}

void func_273()
{
	Global_2546572 = 0;
}

void func_274()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_275()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_276(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7358, 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7358, 0);
	}
}

void func_277(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 20);
	}
}

int func_278(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_118(sParam3, iParam4, bParam7);
}

int func_279(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_118(sParam3, iParam4, bParam7);
}

int func_280(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_282(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_281();
		func_275();
		func_234();
		func_274();
		func_273();
		return 1;
	}
	return 0;
}

void func_281()
{
	Global_21823 = 0;
}

bool func_282(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_118(sParam3, iParam4, bParam8);
}

int func_283(var uParam0, char* sParam1, char* sParam2)
{
	if (func_285(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_284();
		func_234();
		func_274();
		return 1;
	}
	return 0;
}

void func_284()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_285(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_118(sParam2, iParam3, 0);
}

void func_286()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_287()
{
	Global_1370527.f_40 = 1;
}

bool func_288()
{
	return Global_1370527.f_40 == 1;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_290(int iParam0)
{
	if (!func_291())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_291()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_292(var uParam0)
{
	if (func_296())
	{
		return 0;
	}
	if (func_295())
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_294())
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0, 6))
	{
		if (func_293())
		{
			return 0;
		}
	}
	return 1;
}

bool func_293()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_294()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_295()
{
	return Global_1370527.f_40 == 3;
}

bool func_296()
{
	return func_126();
}

int func_297(int iParam0, int iParam1, int iParam2)
{
	if (!func_295())
	{
		return 0;
	}
	return func_289(iParam0, iParam1, iParam2);
}

int func_298(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_299()
{
	return Global_2543673.f_1;
}

int func_300()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_301();
}

bool func_301()
{
	return func_296();
}

void func_302(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 18))
			{
				if (func_26(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!func_87(&uLocal_1701, 30000, 0))
					{
						if (func_303(iParam0, 1109393408))
						{
							Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
							Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_29 = 0f;
							func_32(&uLocal_1701);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 19))
					{
						unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 19);
					}
				}
			}
		}
	}
}

int func_303(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
	{
		unk_0x523BCC9DC80CD82F(Global_2537071.f_796);
		unk_0x523BCC9DC80CD82F(Global_2537071.f_797);
		if (unk_0xB87F6CF6E5628C67(Global_2537071.f_796))
		{
			if (unk_0xB87F6CF6E5628C67(Global_2537071.f_797))
			{
				Var3 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2))), 1) };
				if (!func_322(Var3))
				{
					if (func_198(Var3))
					{
						if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 2)
						{
							iVar7 = 0;
						}
						else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
						{
							iVar7 = 9;
						}
						else
						{
							iVar7 = 1;
						}
					}
					else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = 9;
					}
					if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 == -1)
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
					if (func_318(Var3, &Var0, &uVar6, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), iVar7, fParam1))
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { Var0 };
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
						return 1;
					}
					else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 >= 5)
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25++;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
				}
				else if (func_304(Var3, &Var0, &uVar6))
				{
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { Var0 };
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_304(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x0399732A9EBC368E(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
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
			if (func_305(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x0399732A9EBC368E(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
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
			if (func_305(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x0399732A9EBC368E(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
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
			if (func_305(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x0399732A9EBC368E(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x0399732A9EBC368E(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
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
			if (func_305(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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

int func_305(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xEA19D5D9230DBB67(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (unk_0xA4F4A1E4DDB4728B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_312(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_306(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_306(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_310(unk_0xD803B885F5E47A62()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8E28E832BEAC3DCE(Param0, fParam3))
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
			if (!func_308(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_307(iVar1) || !bParam10) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x0EB28750412C3A5A(func_310(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xAA451564CBFD3413(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam8 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x0EB28750412C3A5A(func_310(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xAA451564CBFD3413(iVar1, Param0, fParam3))
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

int func_307(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_308(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_309(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_170();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_311() && Global_1590535[iVar0 /*876*/].f_847) && !func_26(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_216(iParam0);
}

var func_311()
{
	return Global_2450632.f_17;
}

int func_312(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_10(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_307(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam9) && bParam6) && func_313(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_216(iVar1), Param0, 1) < fParam3)
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

int func_313(int iParam0)
{
	if (func_317(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_316(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_314(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_315(iParam0);
	if (!iVar0 == func_123())
	{
		if (iVar0 == func_315(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	if (iParam0 != func_123())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_123();
}

struct<13> func_316(var uParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(uParam0, &Var0, 13);
	return Var0;
}

int func_317(int iParam0, var uParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_316(iParam0) };
		Global_2513231 = { func_316(uParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_318(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, float fParam7)
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
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4A13F7D4B1E239A0(Param0, *uParam5, &Var0, &fVar9, &uVar10, iParam6, fVar14, fVar15))
		{
			if (unk_0xB7A628320EFF8E47(Param0, Var0) <= (50f * 50f))
			{
				while (!bVar12 && iVar13 < 5)
				{
					if (unk_0x8F91E660145F47FF(&Var0, &Var3, &Var6, 0f, 180f, fParam7, iVar11, 1, 0))
					{
						fVar9 = func_321(0f, 0f, 0f, Var6, 1);
						if (func_319(Param0, Var3, 120f, fParam7))
						{
							if (func_305(*uParam3, 5f, 2f, 1f, 6f, 1, 1, 1, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
							{
								bVar12 = true;
								Var16 = { unk_0x8A5E176FF719A014(Var3, fVar9, 0f, 1f, 0f) };
								Var19 = { Var16 - Var3 };
								Var22 = { Var0 - Var3 };
								if (unk_0x07AB02F3C4AE2B04(Var19.f_0, Var19.f_1, Var22.f_0, Var22.f_1) > 60f)
								{
									fVar9 = (fVar9 + 180f);
									fVar9 = func_211(fVar9, 0f, 360f);
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

int func_319(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
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
	if (unk_0x8E28E832BEAC3DCE(Param3, 2.5f))
	{
		return 0;
	}
	if (unk_0x9868643FAC294133(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_320(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_320(struct<3> Param0, bool bParam3)
{
	if (func_12(Param0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_204(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_205(2, Param0))
	{
		if (func_204(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(3, Param0))
	{
		if (func_204(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(4, Param0))
	{
		if (func_204(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(5, Param0))
	{
		if (func_204(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(6, Param0))
	{
		if (func_204(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_201())
	{
		if (func_205(7, Param0))
		{
			if (func_204(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_205(8, Param0))
	{
		if (func_204(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (unk_0x0399732A9EBC368E(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (unk_0x0399732A9EBC368E(Param0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		return 1;
	}
	if (unk_0x0399732A9EBC368E(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (unk_0x0399732A9EBC368E(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1) || unk_0x0399732A9EBC368E(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((unk_0x0399732A9EBC368E(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1) || unk_0x0399732A9EBC368E(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)) || unk_0x0399732A9EBC368E(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)) || unk_0x0399732A9EBC368E(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (func_12(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0399732A9EBC368E(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x0399732A9EBC368E(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x0399732A9EBC368E(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x0399732A9EBC368E(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x0399732A9EBC368E(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (unk_0x0399732A9EBC368E(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, 1))
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(Param0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1) || unk_0x0399732A9EBC368E(Param0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

float func_321(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
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

int func_322(struct<3> Param0)
{
	if (unk_0x0399732A9EBC368E(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x0399732A9EBC368E(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x0399732A9EBC368E(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_323()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iVar0))
			{
				if ((Local_68.f_2[iVar0 /*23*/].f_7 == 11 || Local_68.f_2[iVar0 /*23*/].f_7 == 9) || Local_68.f_2[iVar0 /*23*/].f_7 == 10)
				{
					unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iVar0);
				}
				else if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					unk_0x0674E58A79778E99(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_324()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 != unk_0x57270EE11514DC67())
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 1);
						}
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 1);
						}
					}
				}
			}
			else if (Local_68.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == unk_0x57270EE11514DC67())
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 0);
						}
						else if (unk_0x8D30F6387EE75385(Local_68.f_2[iVar0 /*23*/]))
						{
						}
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 0);
						}
					}
				}
				else
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 1);
						}
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 1);
						}
					}
				}
			}
			else
			{
				if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
				{
					if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
					{
						unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 1);
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_325()
{
	switch (Local_263[unk_0x57270EE11514DC67() /*44*/].f_43)
	{
		case 0:
			if (Local_68.f_191 > 0)
			{
				Local_263[unk_0x57270EE11514DC67() /*44*/].f_43 = 1;
			}
			break;
		
		case 1:
			func_336();
			func_326();
			if (Local_68.f_191 >= 4)
			{
				Local_263[unk_0x57270EE11514DC67() /*44*/].f_43 = 4;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			func_366();
			break;
	}
}

void func_326()
{
	int iVar0;
	
	iVar0 = unk_0x11225ACFD0C1477E(false, 0);
	if (Local_68.f_189 != iVar0)
	{
		if (Local_68.f_189 < iVar0 || func_327(Local_68.f_189, Local_68.f_189, Local_68.f_189, 0, 1))
		{
			unk_0x28E5F00F131890E3(Local_68.f_189);
			unk_0x0BEC04ECA8485A3A(Local_68.f_189);
			unk_0x3A4967AE7C71F999(Local_68.f_189);
		}
	}
}

int func_327(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_335(iParam0, bParam3, bParam4) && func_334(iParam1, bParam3, bParam4)) && func_328(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_328(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(2, iParam0, 1, bParam1, bParam2);
}

int func_329(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_333(iParam0) - func_332(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_332(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_333(iParam0) - func_331(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_332(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_333(iParam0) - func_332(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_330(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)
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

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_332(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(1, iParam0, 1, bParam1, bParam2);
}

int func_335(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0, iParam0, 1, bParam1, bParam2);
}

void func_336()
{
	int iVar0;
	struct<2> Var1;
	
	switch (iLocal_1700)
	{
		case 0:
			if (func_350(131))
			{
				iVar0 = func_340();
				if (iVar0 == 0)
				{
					func_20(&uLocal_2621, 7, 0, "TaxiDispatch", 0, 1);
					if (func_339(&uLocal_2621, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, 0))
					{
						iLocal_1700 = 1;
					}
				}
				else if (iVar0 == 9)
				{
				}
				else
				{
					StringCopy(&Var1, "MPTXI_N", 16);
					StringIntConCat(&Var1, iVar0, 16);
					func_20(&uLocal_2621, 7, 0, "TaxiDispatch", 0, 1);
					if (func_339(&uLocal_2621, 131, "MPTXIAU", &Var1, 12, 1, 0, 0, 0))
					{
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 0))
			{
				if (func_340() == 0)
				{
					if (!func_26(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_21))
					{
						Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_24 = 0f;
					}
					unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_1), 0);
					iLocal_1700 = 2;
				}
				unk_0x0674E58A79778E99(&(Global_2537071.f_795), 0);
			}
			break;
		
		case 1:
			if (func_338())
			{
				if (!func_337())
				{
					if (!func_26(Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_21))
					{
						Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_263[unk_0x57270EE11514DC67() /*44*/].f_4.f_24 = 0f;
					}
					unk_0x5D96D8530B3D0904(&(Local_263[unk_0x57270EE11514DC67() /*44*/].f_1), 0);
					iLocal_1700 = 2;
				}
				else
				{
					iLocal_1700 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_1, 0))
			{
				iLocal_1700 = 0;
			}
			break;
	}
}

int func_337()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return 1;
	}
	return 0;
}

int func_338()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_339(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 1;
	return func_118(sParam3, iParam4, bParam8);
}

int func_340()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 0))
	{
		if (IntToFloat(func_172(unk_0xD803B885F5E47A62())) <= (IntToFloat(iLocal_1878) * 1.5f))
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_175("TXM_H03", -1);
			}
			return 9;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
		{
			return 2;
		}
	}
	if (!func_31())
	{
		return 1;
	}
	if (func_349(unk_0x57270EE11514DC67()))
	{
		return 9;
	}
	uVar0 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xFB04705FDFDCE640()));
	if (!unk_0xEB6A8945D1AC98A1(uVar0))
	{
		if (unk_0x405E212DDE472467(iVar0, 0))
		{
			uVar1 = unk_0x6937EA2286828455(iVar0, 0);
			if (unk_0xDF1306B443CD3D15(uVar1, 0))
			{
				if (unk_0x4906F8A34E9F4814(iVar1, joaat("taxi")))
				{
					return 9;
				}
			}
		}
	}
	if (func_348(unk_0x57270EE11514DC67()))
	{
		return 4;
	}
	if (Local_263[unk_0x57270EE11514DC67() /*44*/].f_4 != -1)
	{
		return 4;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_263[unk_0x57270EE11514DC67() /*44*/].f_1, 0))
	{
		return 4;
	}
	if (func_181(unk_0xD803B885F5E47A62(), 1, 0) && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 16)
	{
		return 1;
	}
	if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) >= 6f)
	{
		return 9;
	}
	if (func_347(unk_0xD803B885F5E47A62(), 1, 0))
	{
		return 9;
	}
	if (func_346(unk_0xD803B885F5E47A62(), 0))
	{
		return 9;
	}
	if (func_345())
	{
		return 3;
	}
	if (!func_341(1, 1, 1, 1, 0))
	{
		return 1;
	}
	Var2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	fVar8 = 50f;
	iVar9 = 1;
	if (!func_198(Var2))
	{
		iVar9 = 9;
	}
	if (!unk_0xDE5F9F54005367A1(Var2, &Var5, iVar9, 100f, 2.5f))
	{
		return 3;
	}
	if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Var5, fVar8, fVar8, 20f, 0, 1, 0))
	{
		return 3;
	}
	if (func_320(Var2, 1))
	{
		return 3;
	}
	return 0;
}

int func_341(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_344(iParam0, bParam3, bParam4) || func_343(iParam1, bParam3, bParam4)) || func_342(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(2, iParam0, 0, bParam1, bParam2);
}

int func_343(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(1, iParam0, 0, bParam1, bParam2);
}

int func_344(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0, iParam0, 0, bParam1, bParam2);
}

int func_345()
{
	if (func_10(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (unk_0x62438065F1C29508(unk_0x16F2683693E537C9(), -64f, -850f, 200f, -84f, -795f, 340f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_346(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_347(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_123())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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

int func_351()
{
	return Local_68.f_0;
}

int func_352(int iParam0)
{
	return Local_263[iParam0 /*44*/];
}

bool func_353()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 18);
}

int func_354()
{
	var uVar0;
	
	func_362(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_361())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_360())
	{
		return 1;
	}
	if (func_359(159))
	{
		if (!func_358())
		{
			return 1;
		}
	}
	if (func_359(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_355() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_355()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_355()
{
	switch (func_357())
	{
		case 0:
			return func_356();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_356()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_357()
{
	return Global_30768;
}

bool func_358()
{
	return Global_2450632.f_598;
}

int func_359(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_360()
{
	return Global_2460680;
}

bool func_361()
{
	return Global_2450632.f_593;
}

void func_362(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_363(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_363(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 3))
	{
		if (func_10(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x9539D44F3E4492F6(Var0.f_1);
			if (unk_0xC844350D5D58C99A(uVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					uVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(uVar4, Var0.f_2) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_364(uVar4, &bVar5))
						{
							unk_0x920D29D81E211607(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x046C362CF15F1935(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_364(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_365()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_366()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
			{
				unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 1);
			}
		}
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
			{
				unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x9F4FE516EAACCFC5(uLocal_2600))
	{
		if (unk_0xFBB4F23D534EB790(uLocal_2600))
		{
			func_40();
		}
	}
	if (bLocal_1874)
	{
		unk_0xF3039DE1FDB4F6FD(1);
	}
	if (unk_0xC844350D5D58C99A(iLocal_1711))
	{
		unk_0xF690C84DADBB3551(&iLocal_1711);
		unk_0x71199B01895C6202(iLocal_1712);
	}
	if (unk_0xE6CD5C6925050049("taxi"))
	{
		unk_0x683413D9B7010687("taxi");
	}
	func_367();
}

void func_367()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_368(struct<21> Param0)
{
	func_378(32, Param0);
	func_376(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_68, 195);
	unk_0x35B62793EAE9ADDF(&Local_263, 1409);
	unk_0x256D93AFAE851A7A(0);
	if (!func_375())
	{
		return 0;
	}
	if (unk_0x8CD06866876216F2())
	{
		func_369(131, 3, unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 4));
		func_37(&uLocal_1703, 0, 0);
		Local_263[unk_0x57270EE11514DC67() /*44*/] = 0;
	}
	return 1;
}

void func_369(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_128();
		if (iParam1 == 4)
		{
			func_374(iParam0, 0, 1);
			func_374(iParam0, 1, 1);
			func_374(iParam0, 2, 1);
			func_373(iParam0, 0, 1);
			func_373(iParam0, 1, 1);
			func_373(iParam0, 2, 1);
		}
		else
		{
			if (func_372(iParam0, iParam1) == 1 && func_371(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_374(iParam0, iVar0, 1);
			func_373(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_263(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_263(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_370();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_263(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_370();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_263(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_370();
			}
		}
	}
}

void func_370()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar16, unk_0x19C9F30A7697B43C(&(Global_7966[1 /*6*/])), 64);
		sVar32 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_7966[1 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0674E58A79778E99(&Global_7356, 0);
}

int func_371(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_372(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_374(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_375()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_361())
		{
			return 0;
		}
		if (func_359(157))
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

int func_376(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_367();
			}
			else
			{
				return 0;
			}
		}
		if (!func_377())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0;
					}
				}
				if (func_361())
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0;
					}
				}
				if (func_359(157))
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_367();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_367();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_367();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_377()
{
	return Global_1312854;
}

void func_378(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_367();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

