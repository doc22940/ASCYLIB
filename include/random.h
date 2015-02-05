/*   
 *   File: random.h
 *   Author: Vincent Gramoli <vincent.gramoli@sydney.edu.au>, 
 *  	     Tudor David <tudor.david@epfl.ch>
 *   Description: 
 *   random.h is part of ASCYLIB
 *
 * Copyright (c) 2014 Vasileios Trigonakis <vasileios.trigonakis@epfl.ch>,
 * 	     	      Tudor David <tudor.david@epfl.ch>
 *	      	      Distributed Programming Lab (LPD), EPFL
 *
 * ASCYLIB is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _H_RANDOM_
#define _H_RANDOM_

#include <malloc.h>
#include "measurements.h"
#include "ssalloc.h"

#define LOCAL_RAND

#if defined(LOCAL_RAND)
extern __thread unsigned long* seeds; 
#endif

#define my_random xorshf96

#ifdef ZIPF_4096

static uint32_t the_keys[] = { 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2049, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2050, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2051, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2052, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2053, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2054, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2055, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2056, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2057, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2058, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2059, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2060, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2061, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2062, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2063, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2064, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2065, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2066, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2067, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2068, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2069, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2070, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2071, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2072, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2073, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2074, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2075, 2076, 2076, 2076, 2076, 2076, 2076, 2076, 2076, 2076, 2076, 2076, 2076, 2077, 2077, 2077, 2077, 2077, 2077, 2077, 2077, 2077, 2077, 2077, 2077, 2078, 2078, 2078, 2078, 2078, 2078, 2078, 2078, 2078, 2078, 2078, 2078, 2079, 2079, 2079, 2079, 2079, 2079, 2079, 2079, 2079, 2079, 2079, 2080, 2080, 2080, 2080, 2080, 2080, 2080, 2080, 2080, 2080, 2080, 2081, 2081, 2081, 2081, 2081, 2081, 2081, 2081, 2081, 2081, 2081, 2082, 2082, 2082, 2082, 2082, 2082, 2082, 2082, 2082, 2082, 2082, 2083, 2083, 2083, 2083, 2083, 2083, 2083, 2083, 2083, 2083, 2084, 2084, 2084, 2084, 2084, 2084, 2084, 2084, 2084, 2084, 2085, 2085, 2085, 2085, 2085, 2085, 2085, 2085, 2085, 2085, 2086, 2086, 2086, 2086, 2086, 2086, 2086, 2086, 2086, 2086, 2087, 2087, 2087, 2087, 2087, 2087, 2087, 2087, 2087, 2088, 2088, 2088, 2088, 2088, 2088, 2088, 2088, 2088, 2089, 2089, 2089, 2089, 2089, 2089, 2089, 2089, 2089, 2090, 2090, 2090, 2090, 2090, 2090, 2090, 2090, 2090, 2091, 2091, 2091, 2091, 2091, 2091, 2091, 2091, 2091, 2092, 2092, 2092, 2092, 2092, 2092, 2092, 2092, 2092, 2093, 2093, 2093, 2093, 2093, 2093, 2093, 2093, 2094, 2094, 2094, 2094, 2094, 2094, 2094, 2094, 2095, 2095, 2095, 2095, 2095, 2095, 2095, 2095, 2096, 2096, 2096, 2096, 2096, 2096, 2096, 2096, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2098, 2098, 2098, 2098, 2098, 2098, 2098, 2098, 2099, 2099, 2099, 2099, 2099, 2099, 2099, 2099, 2100, 2100, 2100, 2100, 2100, 2100, 2100, 2101, 2101, 2101, 2101, 2101, 2101, 2101, 2102, 2102, 2102, 2102, 2102, 2102, 2102, 2103, 2103, 2103, 2103, 2103, 2103, 2103, 2104, 2104, 2104, 2104, 2104, 2104, 2104, 2105, 2105, 2105, 2105, 2105, 2105, 2105, 2106, 2106, 2106, 2106, 2106, 2106, 2106, 2107, 2107, 2107, 2107, 2107, 2107, 2107, 2108, 2108, 2108, 2108, 2108, 2108, 2108, 2109, 2109, 2109, 2109, 2109, 2109, 2110, 2110, 2110, 2110, 2110, 2110, 2111, 2111, 2111, 2111, 2111, 2111, 2112, 2112, 2112, 2112, 2112, 2112, 2113, 2113, 2113, 2113, 2113, 2113, 2114, 2114, 2114, 2114, 2114, 2114, 2115, 2115, 2115, 2115, 2115, 2115, 2116, 2116, 2116, 2116, 2116, 2116, 2117, 2117, 2117, 2117, 2117, 2117, 2118, 2118, 2118, 2118, 2118, 2118, 2119, 2119, 2119, 2119, 2119, 2119, 2120, 2120, 2120, 2120, 2120, 2120, 2121, 2121, 2121, 2121, 2121, 2121, 2122, 2122, 2122, 2122, 2122, 2123, 2123, 2123, 2123, 2123, 2124, 2124, 2124, 2124, 2124, 2125, 2125, 2125, 2125, 2125, 2126, 2126, 2126, 2126, 2126, 2127, 2127, 2127, 2127, 2127, 2128, 2128, 2128, 2128, 2128, 2129, 2129, 2129, 2129, 2129, 2130, 2130, 2130, 2130, 2130, 2131, 2131, 2131, 2131, 2131, 2132, 2132, 2132, 2132, 2132, 2133, 2133, 2133, 2133, 2133, 2134, 2134, 2134, 2134, 2134, 2135, 2135, 2135, 2135, 2135, 2136, 2136, 2136, 2136, 2136, 2137, 2137, 2137, 2137, 2137, 2138, 2138, 2138, 2138, 2138, 2139, 2139, 2139, 2139, 2139, 2140, 2140, 2140, 2140, 2140, 2141, 2141, 2141, 2141, 2142, 2142, 2142, 2142, 2143, 2143, 2143, 2143, 2144, 2144, 2144, 2144, 2145, 2145, 2145, 2145, 2146, 2146, 2146, 2146, 2147, 2147, 2147, 2147, 2148, 2148, 2148, 2148, 2149, 2149, 2149, 2149, 2150, 2150, 2150, 2150, 2151, 2151, 2151, 2151, 2152, 2152, 2152, 2152, 2153, 2153, 2153, 2153, 2154, 2154, 2154, 2154, 2155, 2155, 2155, 2155, 2156, 2156, 2156, 2156, 2157, 2157, 2157, 2157, 2158, 2158, 2158, 2158, 2159, 2159, 2159, 2159, 2160, 2160, 2160, 2160, 2161, 2161, 2161, 2161, 2162, 2162, 2162, 2162, 2163, 2163, 2163, 2163, 2164, 2164, 2164, 2164, 2165, 2165, 2165, 2165, 2166, 2166, 2166, 2166, 2167, 2167, 2167, 2167, 2168, 2168, 2168, 2168, 2169, 2169, 2169, 2169, 2170, 2170, 2170, 2171, 2171, 2171, 2172, 2172, 2172, 2173, 2173, 2173, 2174, 2174, 2174, 2175, 2175, 2175, 2176, 2176, 2176, 2177, 2177, 2177, 2178, 2178, 2178, 2179, 2179, 2179, 2180, 2180, 2180, 2181, 2181, 2181, 2182, 2182, 2182, 2183, 2183, 2183, 2184, 2184, 2184, 2185, 2185, 2185, 2186, 2186, 2186, 2187, 2187, 2187, 2188, 2188, 2188, 2189, 2189, 2189, 2190, 2190, 2190, 2191, 2191, 2191, 2192, 2192, 2192, 2193, 2193, 2193, 2194, 2194, 2194, 2195, 2195, 2195, 2196, 2196, 2196, 2197, 2197, 2197, 2198, 2198, 2198, 2199, 2199, 2199, 2200, 2200, 2200, 2201, 2201, 2201, 2202, 2202, 2202, 2203, 2203, 2203, 2204, 2204, 2204, 2205, 2205, 2205, 2206, 2206, 2206, 2207, 2207, 2207, 2208, 2208, 2208, 2209, 2209, 2209, 2210, 2210, 2210, 2211, 2211, 2211, 2212, 2212, 2212, 2213, 2213, 2213, 2214, 2214, 2214, 2215, 2215, 2215, 2216, 2216, 2216, 2217, 2217, 2217, 2218, 2218, 2218, 2219, 2219, 2219, 2220, 2220, 2220, 2221, 2221, 2221, 2222, 2222, 2222, 2223, 2223, 2224, 2224, 2225, 2225, 2226, 2226, 2227, 2227, 2228, 2228, 2229, 2229, 2230, 2230, 2231, 2231, 2232, 2232, 2233, 2233, 2234, 2234, 2235, 2235, 2236, 2236, 2237, 2237, 2238, 2238, 2239, 2239, 2240, 2240, 2241, 2241, 2242, 2242, 2243, 2243, 2244, 2244, 2245, 2245, 2246, 2246, 2247, 2247, 2248, 2248, 2249, 2249, 2250, 2250, 2251, 2251, 2252, 2252, 2253, 2253, 2254, 2254, 2255, 2255, 2256, 2256, 2257, 2257, 2258, 2258, 2259, 2259, 2260, 2260, 2261, 2261, 2262, 2262, 2263, 2263, 2264, 2264, 2265, 2265, 2266, 2266, 2267, 2267, 2268, 2268, 2269, 2269, 2270, 2270, 2271, 2271, 2272, 2272, 2273, 2273, 2274, 2274, 2275, 2275, 2276, 2276, 2277, 2277, 2278, 2278, 2279, 2279, 2280, 2280, 2281, 2281, 2282, 2282, 2283, 2283, 2284, 2284, 2285, 2285, 2286, 2286, 2287, 2287, 2288, 2288, 2289, 2289, 2290, 2290, 2291, 2291, 2292, 2292, 2293, 2293, 2294, 2294, 2295, 2295, 2296, 2296, 2297, 2297, 2298, 2298, 2299, 2299, 2300, 2300, 2301, 2301, 2302, 2302, 2303, 2303, 2304, 2304, 2305, 2305, 2306, 2306, 2307, 2307, 2308, 2308, 2309, 2309, 2310, 2310, 2311, 2311, 2312, 2312, 2313, 2313, 2314, 2314, 2315, 2315, 2316, 2316, 2317, 2317, 2318, 2318, 2319, 2319, 2320, 2320, 2321, 2321, 2322, 2322, 2323, 2323, 2324, 2324, 2325, 2325, 2326, 2326, 2327, 2327, 2328, 2328, 2329, 2329, 2330, 2330, 2331, 2331, 2332, 2332, 2333, 2333, 2334, 2334, 2335, 2335, 2336, 2336, 2337, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 286, 3202, 2058, 2198, 2787, 127, 3064, 1084, 1572, 643, 2092, 3475, 1112, 373, 4002, 3270, 1753, 2232, 950, 3090, 1916, 3418, 1457, 1885, 2909, 2751, 2126, 1573, 1416, 646, 3958, 488, 3987, 1707, 2367, 3309, 2677, 227, 1010, 2322, 2413, 4095, 3531, 3459, 1373, 1802, 2889, 3469, 3237, 3865, 3527, 1745, 2156, 2627, 1070, 2270, 3816, 1701, 1443, 1909, 732, 298, 3772, 1181, 3841, 2, 1263, 2437, 1314, 3151, 3972, 2209, 963, 128, 1267, 1783, 495, 3214, 4074, 2091, 2037, 71, 1999, 1395, 1519, 1029, 770, 426, 1971, 3562, 3472, 3693, 1164, 3247, 21, 109, 906, 424, 1068, 4077, 1540, 642, 2765, 315, 1438, 3995, 3078, 2072, 912, 1150, 2286, 3377, 4076, 3664, 4062, 1201, 2010, 2857, 2762, 726, 766, 3597, 1835, 2581, 3916, 2728, 1598, 3987, 3827, 561, 1473, 782, 597, 1663, 3659, 2056, 601, 2520, 408, 817, 511, 1788, 2998, 3303, 860, 3094, 209, 21, 166, 1345, 316, 3627, 3239, 1227, 1999, 172, 207, 457, 1352, 3151, 169, 419, 251, 3294, 1355, 66, 570, 3288, 2634, 1811, 211, 3053, 1240, 2597, 861, 20, 1209, 983, 1356, 2765, 2595, 1467, 342, 2125, 404, 2737, 2885, 3504, 1455, 3392, 2794, 2093, 850, 2584, 3401, 3068, 319, 3836, 2649, 1520, 773, 2063, 2383, 14, 855, 823, 694, 1320, 3472, 2708, 3309, 3524, 3590, 1987, 2573, 2563, 2297, 3578, 1726, 3459, 897, 2996, 3034, 1692, 1353, 2748, 310, 2732, 808, 542, 3661, 1125, 2736, 2185, 1365, 1828, 3386, 455, 3605, 3471, 2389, 1456, 3791, 653, 3776, 105, 1578, 2840, 3731, 88, 3647, 728, 2049, 454, 2374, 3177, 3232, 882, 3235, 2241, 830, 140, 105, 3992, 4067, 3985, 1288, 2715, 3082, 736, 3772, 229, 1658, 985, 3006, 3029, 1424, 128, 3934, 119, 1225, 3658, 385, 465, 1658, 1483, 1768, 3910, 701, 1471, 580, 2602, 1728, 2339, 3778, 520, 4015, 2458, 2928, 1788, 2809, 1245, 997, 1423, 1307, 3594, 2465, 2372, 1910, 3709, 985, 182, 1008, 1803, 3824, 957, 2838, 574, 355, 3006, 2839, 2346, 407, 3432, 2355, 2005, 647, 2297, 1424, 303, 837, 222, 3992, 3226, 2355, 113, 158, 838, 3430, 1989, 3044, 2486, 1303, 3325, 1577, 2920, 2094, 930, 3453, 984, 1147, 1977, 2486, 2273, 504, 3936, 2331, 1295, 17, 1822, 1098, 2166, 3298, 2420, 1976, 285, 2029, 1113, 1748, 3091, 50, 2431, 3310, 1500, 1404, 935, 3032, 3226, 1668, 3745, 2171, 2616, 3468, 2212, 3314, 2362, 769, 3968, 2568, 729, 3001, 579, 839, 586, 3725, 1, 2701, 2551, 3018, 3098, 408, 3714, 2232, 2761, 2159, 477, 1445, 1564, 1045, 2206, 296, 4029, 284, 2405, 3853, 2846, 3478, 1498, 4093, 3564, 1352, 410, 3159, 1284, 2962, 36, 27, 1716, 544, 3622, 3245, 2922, 3421, 912, 737, 1407, 2725, 2890, 221, 3692, 3763, 488, 1827, 1317, 739, 707, 2157, 484, 2906, 1697, 1443, 3831, 723, 841, 2896, 873, 3419, 1457, 1814, 1203, 4089, 262, 999, 2881, 564, 1049, 531, 2633, 1646, 4029, 221, 3108, 3586, 2948, 2835, 711, 1079, 1927, 2304, 515, 3309, 2364, 1984, 2748, 2089, 2428, 1474, 2943, 3558, 561, 855, 2751, 1783, 484, 3252, 3903, 1755, 59, 1415, 297, 3155, 2053, 374, 2342, 3550, 3360, 747, 1688, 1257, 197, 2684, 1885, 2195, 1098, 2126, 1445, 329, 1627, 2377, 3984, 237, 3414, 1885, 2675, 3838, 4072, 314, 1920, 82, 4074, 2914, 420, 1677, 3315, 24, 3592, 1207, 2694, 3345, 167, 2650, 3315, 1495, 1676, 2188, 121, 2338, 2112, 2533, 1102, 2604, 1374, 866, 351, 952, 405, 327, 1107, 95, 2542, 3779, 2497, 2043, 1934, 1622, 3530, 1287, 1786, 1537, 1059, 2217, 2093, 3438, 2680, 3305, 2775, 2643, 2391, 2418, 2871, 2159, 3181, 3750, 3585, 3999, 2415, 331, 1645, 2079, 3097, 497, 2734, 3910, 2686, 103, 1746, 3670, 428, 1544, 3727, 1363, 303, 1494, 4059, 2322, 673, 1461, 1998, 969, 4047, 663, 1981, 69, 884, 798, 1630, 1655, 1375, 2514, 3841, 1759, 1814, 1582, 2727, 2476, 3795, 865, 3868, 1003, 206, 2078, 89, 1572, 2654, 12, 414, 2578, 3424, 2941, 2572, 3654, 3841, 3920, 3133, 1554, 2666, 963, 43, 3669, 3443, 3806, 59, 3258, 1218, 808, 3011, 1964, 2959, 4015, 2486, 1087, 3544, 3792, 550, 562, 1921, 1585, 2653, 1016, 3489, 2461, 2698, 3738, 3056, 2308, 4048, 232, 1405, 2934, 997, 332, 3704, 3391, 2499, 2929, 1288, 2268, 1493, 1942, 961, 1691, 2129, 17, 3657, 1472, 2547, 1966, 2681, 1996, 3508, 135, 2124, 1284, 124, 3629, 897, 2790, 1871, 3490, 606, 1543, 475, 1598, 1614, 2922, 298, 415, 1174, 2807, 2274, 3503, 1458, 309, 131, 763, 2819, 107, 3006, 2901, 2454, 3437, 2505, 1462, 62, 1210, 1088, 3603, 3873, 4072, 1049, 426, 113, 31, 3822, 3936, 3909, 1892, 2274, 2647, 1898, 3266, 2164, 2625, 1263, 2933, 556, 3677, 2955, 1862, 3499, 1912, 2036, 1868, 3513, 2886, 2452, 3407, 1776, 2435, 390, 1731, 84, 3244, 1376, 2898, 1518, 3846, 3764, 2524, 3799, 1573, 359, 2845, 1049, 3717, 2855, 1843, 3914, 3463, 1247, 255, 3306, 882, 148, 494, 3330, 2225, 1971, 358, 646, 383, 70, 3708, 3598, 2363, 2390, 3269, 1918, 809, 438, 3881, 3090, 362, 1317, 3928, 1111, 886, 175, 3579, 3671, 2517, 80, 2106, 2439, 1622, 2867, 46, 3138, 3295, 2579, 287, 4053, 1027, 1226, 1704, 3072, 568, 3982, 1079, 1811, 1712, 3586, 1602, 2832, 3195, 1383, 1795, 3277, 1049, 942, 792, 440, 2767, 766, 2203, 3225, 1254, 3359, 3385, 1145, 895, 2722, 3801, 389, 1386, 119, 2017, 1707, 2648, 2570, 3358, 2301, 616, 1856, 3507, 4049, 1950, 4004, 559, 889, 1436, 1862, 1534, 3496, 180, 1117, 2512, 3332, 2756, 1722, 1680, 403, 3592, 816, 2167, 3403, 1038, 1216, 2319, 2351, 164, 3648, 3898, 3860, 1173, 3620, 3551, 1808, 1878, 444, 120, 2703, 1722, 967, 1152, 3713, 2243, 1866, 2432, 3571, 3647, 2932, 2929, 58, 3688, 2968, 1381, 380, 595, 1071, 3404, 1278, 3972, 1327, 3213, 515, 817, 1119, 2869, 2468, 2145, 24, 2110, 195, 1945, 1555, 3868, 2547, 1157, 2807, 374, 1313, 1849, 3459, 3456, 1318, 3954, 2210, 2731, 2504, 1706, 3208, 402, 2939, 160, 3486, 3959, 2901, 3623, 507, 1186, 55, 159, 541, 2546, 3040, 1601, 761, 2791, 799, 2384, 934, 1438, 148, 1246, 2214, 3572, 1153, 3355, 2380, 291, 1985, 3316, 3479, 3365, 2283, 3359, 3037, 1881, 671, 3744, 1930, 905, 2611, 1520, 4056, 3318, 2132, 3992, 3096, 3684, 3567, 716, 3111, 3295, 1356, 3162, 3649, 1186, 2853, 3703, 3895, 3157, 553, 3255, 1861, 671, 2936, 1764, 314, 769, 1300, 3051, 449, 647, 2960, 523, 243, 2428, 303, 2777, 961, 2637, 118, 2884, 2579, 2462, 3361, 447, 3420, 3582, 962, 2769, 1431, 2502, 3469, 2228, 1413, 3571, 1508, 3347, 2017, 59, 3357, 2478, 2764, 1663, 500, 1654, 2192, 2571, 606, 525, 2520, 340, 1, 1463, 179, 1848, 3342, 3377, 622, 2878, 585, 3953, 399, 2592, 3862, 3696, 2251, 876, 2284, 462, 3731, 1576, 207, 880, 1193, 665, 3030, 2336, 840, 1452, 565, 2766, 1040, 1664, 545, 3318, 1802, 3514, 1766, 3542, 1514, 1742, 2365, 1292, 3576, 2414, 3085, 2382, 2231, 679, 1955, 760, 2597, 1682, 318, 4053, 1730, 3365, 364, 1070, 2956, 1442, 1282, 1142, 3616, 3068, 1996, 2116, 2465, 525, 736, 885, 125, 2972, 1435, 240, 2051, 3808, 946, 1781, 3896, 1341, 3646, 1997, 1975, 3721, 243, 3127, 722, 3856, 1275, 1486, 3959, 3446, 110, 1697, 1400, 232, 1413, 3648, 1318, 3200, 697, 2954, 3112, 2482, 1261, 311, 1042, 2358, 710, 2484, 779, 2225, 3912, 753, 2013, 1318, 2453, 1034, 1818, 2238, 247, 801, 3383, 3542, 3321, 3536, 830, 2020, 1430, 2563, 2324, 744, 1349, 4025, 3885, 2812, 3419, 2252, 3382, 1641, 3137, 1237, 2988, 3530, 1312, 1866, 1611, 3812, 3898, 4064, 3102, 3356, 1310, 164, 3063, 956, 1427, 2319, 2528, 2928, 3530, 328, 38, 1903, 2353, 3852, 913, 2818, 540, 1524, 321, 2927, 1313, 2400, 2518, 1787, 3744, 681, 2518, 2584, 1112, 2695, 1405, 2569, 1926, 1734, 2871, 790, 1171, 280, 469, 1187, 4092, 596, 814, 1588, 1065, 2100, 4083, 2653, 2127, 724, 1746, 3036, 1481, 2415, 1541, 781, 3034, 684, 3671, 3189, 3690, 2223, 816, 1862, 188, 675, 3557, 1151, 1585, 543, 655, 1785, 1868, 226, 2806, 3013, 3016, 1747, 788, 4012, 3114, 3786, 1780, 2531, 3681, 1252, 2879, 2975, 257, 1605, 847, 1134, 1860, 3232, 3036, 2392, 2044, 1690, 2669, 1587, 1352, 3126, 317, 1913, 2911, 728, 2907, 2409, 2460, 360, 3160, 1798, 3653, 2796, 3652, 634, 308, 2598, 3889, 1068, 662, 2289, 1616, 876, 2693, 88, 4094, 104, 429, 3857, 649, 3084, 1264, 2114, 434, 2286, 3771, 2384, 2854, 2877, 3798, 3340, 450, 3806, 1090, 2291, 698, 2240, 841, 3861, 915, 3953, 3221, 3023, 2029, 1716, 2907, 1476, 467, 1983, 3972, 4005, 2529, 3188, 1172, 4047, 1562, 2011, 3980, 3405, 747, 3818, 730, 447, 2685, 1609, 99, 75, 1607, 3684, 1299, 4050, 3011, 2137, 1524, 3313, 2772, 272, 1058, 3462, 3297, 1248, 616, 1688, 958, 1448, 2236, 858, 3921, 3974, 308, 317, 3165, 1765, 1177, 427, 43, 3668, 307, 2964, 2992, 350, 2421, 391, 1161, 3485, 330, 3667, 1493, 3144, 3939, 2539, 1822, 3425, 2088, 1429, 301, 1816, 2556, 1529, 235, 1635, 1190, 3634, 116, 1093, 1085, 977, 1542, 519, 543, 203, 2851, 3077, 801, 525, 3570, 2887, 2476, 526, 3428, 3500, 1643, 2886, 44, 2090, 3514, 1738, 2521, 1712, 3076, 580, 2373, 2841, 1988, 1758, 1254, 3309, 2232, 1994, 1157, 3093, 3179, 3772, 3548, 2942, 3691, 3304, 2696, 372, 3899, 1445, 3932, 3897, 424, 2284, 2046, 2393, 3166, 2774, 1312, 2513, 2720, 1174, 1147, 704, 1274, 2967, 486, 1590, 3780, 2633, 442, 135, 2412, 557, 252, 262, 2741, 711, 885, 2517, 432, 2553, 1245, 501, 1999, 444, 1362, 914, 427, 386, 3607, 2864, 1385, 3063, 2508, 1977, 253, 92, 1223, 2233, 1331, 2000, 2831, 1502, 3965, 536, 3041, 31, 1879, 68, 1502, 2081, 1930, 71, 47, 3823, 3336, 537, 2125, 441, 2882, 585, 648, 2058, 70, 399, 3523, 876, 2667, 1515, 2386, 2494, 1164, 1646, 357, 3308, 95, 4007, 3712, 1056, 491, 1389, 2331, 1223, 252, 3069, 4007, 1055, 1176, 1567, 233, 1486, 1745, 2960, 3092, 2772, 4010, 818, 666, 3305, 3673, 3926, 334, 3422, 1846, 3794, 2786, 3651, 2538, 3025, 3789, 3467, 2356, 2272, 1860, 3207, 1159, 889, 2694, 3851, 2695, 1605, 1194, 2833, 3857, 2604, 1143, 3265, 2070, 1002, 3435, 2738, 3212, 2423, 340, 3306, 1279, 1220, 2771, 2661, 841, 497, 2115, 4042, 2388, 2504, 2865, 2088, 3962, 1296, 2076, 1608, 3671, 2636, 2399, 1888, 75, 3689, 2154, 1921, 1968, 1784, 2323, 550, 992, 2087, 912, 2070, 468, 2580, 3073, 3773, 2018, 3724, 3120, 1445, 590, 347, 835, 2507, 1035, 1382, 4077, 2456, 965, 1644, 2067, 3992, 2028, 3083, 2080, 990, 1745, 3239, 3170, 3296, 3503, 1981, 255, 2818, 1614, 2144, 2431, 3648, 3912, 3627, 3589, 1556, 1965, 2323, 258, 264, 2870, 1551, 2165, 2519, 412, 3979, 861, 1537, 2412, 1630, 366, 929, 421, 675, 460, 532, 3294, 530, 2948, 1733, 1693, 649, 985, 2871, 183, 375};
#endif

//fast but weak random number generator for the sparc machine
static inline uint32_t
fast_rand() 
{
  return ((getticks()&4294967295UL)>>4);
}


static inline unsigned long* 
seed_rand() 
{
  unsigned long* seeds;
  /* seeds = (unsigned long*) ssalloc_aligned(64, 64); */
  seeds = (unsigned long*) memalign(64, 64);
  seeds[0] = getticks() % 123456789;
  seeds[1] = getticks() % 362436069;
  seeds[2] = getticks() % 521288629;
  return seeds;
}

//Marsaglia's xorshf generator
static inline unsigned long
xorshf96(unsigned long* x, unsigned long* y, unsigned long* z)  //period 2^96-1
{
  unsigned long t;
  (*x) ^= (*x) << 16;
  (*x) ^= (*x) >> 5;
  (*x) ^= (*x) << 1;

  t = *x;
  (*x) = *y;
  (*y) = *z;
  (*z) = t ^ (*x) ^ (*y);

  return *z;
}

static inline long
rand_range(long r) 
{
  /* PF_START(0); */
#if defined(LOCAL_RAND)
  long v = xorshf96(seeds, seeds + 1, seeds + 2) % r;
  v++;
#else
  int m = RAND_MAX;
  long d, v = 0;
	
  do {
    d = (m > r ? r : m);
    v += 1 + (long)(d * ((double)rand()/((double)(m)+1.0)));
    r -= m;
  } while (r > 0);
#endif
  /* PF_STOP(0); */
  return v;
}

/* Re-entrant version of rand_range(r) */
static inline long
rand_range_re(unsigned int *seed, long r) 
{
  /* PF_START(0); */
#if defined(LOCAL_RAND)
  long v = xorshf96(seeds, seeds + 1, seeds + 2) % r;
  v++;
#else
  int m = RAND_MAX;
  long d, v = 0;
	
  do {
    d = (m > r ? r : m);		
    v += 1 + (long)(d * ((double)rand_r(seed)/((double)(m)+1.0)));
    r -= m;
  } while (r > 0);
#endif
  /* PF_STOP(0); */
  return v;
}


#endif
