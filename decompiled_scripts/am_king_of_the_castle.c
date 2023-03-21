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
	struct<284> Local_121 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_405 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<5> Local_419[32];
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	struct<18> Local_585[32];
	struct<3> Local_1162[32];
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	struct<68> Local_1266[1];
	struct<49> Local_1335[32];
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
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
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
	var uLocal_2932 = -1;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 1;
	var uLocal_2941 = 0;
	var uLocal_2942 = 32;
	var uLocal_2943 = 0;
	var uLocal_2944 = -1;
	var uLocal_2945 = 0;
	var uLocal_2946 = -1;
	var uLocal_2947 = 0;
	var uLocal_2948 = -1;
	var uLocal_2949 = 0;
	var uLocal_2950 = -1;
	var uLocal_2951 = 0;
	var uLocal_2952 = -1;
	var uLocal_2953 = 0;
	var uLocal_2954 = -1;
	var uLocal_2955 = 0;
	var uLocal_2956 = -1;
	var uLocal_2957 = 0;
	var uLocal_2958 = -1;
	var uLocal_2959 = 0;
	var uLocal_2960 = -1;
	var uLocal_2961 = 0;
	var uLocal_2962 = -1;
	var uLocal_2963 = 0;
	var uLocal_2964 = -1;
	var uLocal_2965 = 0;
	var uLocal_2966 = -1;
	var uLocal_2967 = 0;
	var uLocal_2968 = -1;
	var uLocal_2969 = 0;
	var uLocal_2970 = -1;
	var uLocal_2971 = 0;
	var uLocal_2972 = -1;
	var uLocal_2973 = 0;
	var uLocal_2974 = -1;
	var uLocal_2975 = 0;
	var uLocal_2976 = -1;
	var uLocal_2977 = 0;
	var uLocal_2978 = -1;
	var uLocal_2979 = 0;
	var uLocal_2980 = -1;
	var uLocal_2981 = 0;
	var uLocal_2982 = -1;
	var uLocal_2983 = 0;
	var uLocal_2984 = -1;
	var uLocal_2985 = 0;
	var uLocal_2986 = -1;
	var uLocal_2987 = 0;
	var uLocal_2988 = -1;
	var uLocal_2989 = 0;
	var uLocal_2990 = -1;
	var uLocal_2991 = 0;
	var uLocal_2992 = -1;
	var uLocal_2993 = 0;
	var uLocal_2994 = -1;
	var uLocal_2995 = 0;
	var uLocal_2996 = -1;
	var uLocal_2997 = 0;
	var uLocal_2998 = -1;
	var uLocal_2999 = 0;
	var uLocal_3000 = -1;
	var uLocal_3001 = 0;
	var uLocal_3002 = -1;
	var uLocal_3003 = 0;
	var uLocal_3004 = -1;
	var uLocal_3005 = 0;
	var uLocal_3006 = -1;
	var uLocal_3007 = -1;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = -1;
	var uLocal_3014 = -1;
	var uLocal_3015 = 32;
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
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
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
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
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
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
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
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
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
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
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
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
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
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
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
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
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
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
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
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
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
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
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
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
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
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
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
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
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
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
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
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
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
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
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
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	int iLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	var uLocal_3444 = 0;
	int iLocal_3445 = 0;
	var uLocal_3446 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
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
	iLocal_417 = -1;
	iLocal_3441 = -1;
	if (unk_0x591AF4C50B46E014() && func_703(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_688(ScriptParam_0);
	}
	else
	{
		func_659();
	}
	while (true)
	{
		func_658();
		if (func_651())
		{
			func_659();
		}
		if (func_648(29))
		{
			func_659();
		}
		if (func_646())
		{
			func_659();
		}
		if (func_645())
		{
			func_659();
		}
		iLocal_3441 = -1;
		if (unk_0xAA4F14DA15DB0B51(iLocal_3433, unk_0x0FFED3E94261A832()))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_3434, unk_0x88641E5BC172153A()))
			{
				if (!func_643(unk_0x0FFED3E94261A832()))
				{
					iLocal_3441 = unk_0x88641E5BC172153A();
				}
				else if (func_642() && !func_641())
				{
					uVar2 = func_639();
					if (unk_0xDB61DD81432BD145(uVar2))
					{
						iVar3 = unk_0xB0BB7458627D389F(uVar2);
						if (unk_0x76BCE6C7B20502DA(iVar3))
						{
							iVar4 = unk_0x675E1E93DBDAF30B(iVar3);
							iLocal_3441 = iVar4;
						}
					}
				}
			}
		}
		func_618();
		if (func_617() < 2)
		{
			if (func_614(2, 0, 1, 0, 0))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_580, 24);
				func_574(0, -1);
				func_659();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_573(iVar0, -1);
			func_572(iVar0, -1);
			func_571(iVar0, uVar1);
			unk_0x507FE690B1271947(&iLocal_580, 0);
			iVar0++;
		}
		func_525();
		func_496();
		func_493();
		func_473();
		switch (func_472(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_471() == 1)
				{
					func_463(141, func_470(0), 0, 0);
					func_462(1);
				}
				else if (func_471() == 4)
				{
					func_462(4);
				}
				break;
			
			case 1:
				if (func_471() == 1)
				{
					func_20();
				}
				else if (func_471() == 4)
				{
					func_19(&(Local_121.f_211));
					func_462(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_121.f_211)))
				{
					if (func_17(&(Local_121.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_462(4);
				}
				break;
			
			case 2:
				func_462(4);
			
			case 4:
				func_659();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_471())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_617())
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_213, 0))
			{
				if (!func_18(&(Local_121.f_1.f_3)))
				{
					func_11(&(Local_121.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_213, 2))
			{
				iVar2 = Global_262145.f_9848;
				if (func_18(&(Local_121.f_1.f_1)))
				{
					if (func_9(&(Local_121.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_9849;
				if (func_18(&(Local_121.f_1.f_3)))
				{
					if (func_9(&(Local_121.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_121.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_3434, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_3433, iVar1))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_121.f_1.f_1)))
					{
						if (!func_18(&(Local_121.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_121.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_121.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_121.f_1.f_1), 0, 0) <= Global_262145.f_9848) && func_617() != 2)
						{
							iVar7 = func_9(&(Local_121.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = unk_0xBBDA792448DB5A89(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_9852 * 1000));
							fVar4 = (unk_0xBBDA792448DB5A89(Global_262145.f_9851) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, iVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_121.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_121.f_6[iParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, int iParam1, float fParam2)
{
	Local_121.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

float func_6(int iParam0, int iParam1)
{
	return Local_121.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_121.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)
{
	return Local_121.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
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

void func_10(int iParam0)
{
	Local_121.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

void func_12()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_121.f_1.f_1)))
					{
						Local_121.f_1.f_3 = { Var1 };
						func_11(&(Local_121.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_121.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_121.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_213, 2))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)
{
	Local_121.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)
{
	return Local_121.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_121.f_0 = iParam0;
}

int func_17(var uParam0)
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

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_444();
	func_443();
	func_441();
	if (func_439())
	{
		func_321(iVar0);
	}
	func_305(141, func_320(0), &uLocal_3446, unk_0xBBDA792448DB5A89(Global_262145.f_10156), 1148846080, iLocal_3445);
	if (func_266(0, 1))
	{
		func_265();
	}
	switch (func_617())
	{
		case 0:
			break;
		
		case 1:
			func_264();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_229(iVar0);
				func_228(iVar0);
				func_226(iVar0);
				if (iLocal_3441 == unk_0x88641E5BC172153A())
				{
					if (!func_223(1, 0))
					{
						if (func_222(unk_0x88641E5BC172153A(), iVar0))
						{
							if (func_221(unk_0x0FFED3E94261A832()) == 141)
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
								{
									unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 2);
									func_210(1);
								}
							}
							if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 5))
							{
								unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == unk_0x88641E5BC172153A())
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 20))
								{
									unk_0xF6082E2ADA1C795B(&iLocal_580, 20);
								}
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == unk_0x88641E5BC172153A())
							{
								unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
						{
							unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 2);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 5))
						{
							unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 5);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 4))
						{
							unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 4);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 6))
						{
							unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 6);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 7))
						{
							unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 8))
					{
						if (!unk_0x6235C49EA2DBA22D())
						{
							if (!func_209())
							{
								if (iLocal_3441 == unk_0x88641E5BC172153A())
								{
									if (!func_266(0, 0))
									{
										if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
										{
											if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
											{
												func_208("KOTC_1STHELP", 30000);
												func_207(0);
												unk_0x08BE237DBCD9CBD9(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												unk_0xF6082E2ADA1C795B(&iLocal_580, 8);
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
					if (func_206("KOTC_1STHELP"))
					{
						unk_0x7D53B6FFAEDA810A(1);
					}
					if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 8))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_580, 8);
					}
				}
				if (iLocal_3441 == unk_0x88641E5BC172153A())
				{
					if (func_205(iVar0) <= 500f)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 9))
						{
							unk_0xFBC4596E19752537(0f);
							unk_0xF6082E2ADA1C795B(&iLocal_580, 9);
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(iLocal_580, 9))
					{
						unk_0xFBC4596E19752537(1f);
						unk_0x507FE690B1271947(&iLocal_580, 9);
					}
				}
				if (iLocal_3441 != -1)
				{
					if (unk_0xAA4F14DA15DB0B51(iLocal_580, 14) && func_8(iVar0) != iLocal_3441)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 21))
						{
							func_204(81);
							unk_0xF6082E2ADA1C795B(&iLocal_580, 21);
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(iLocal_580, 21))
					{
						unk_0x507FE690B1271947(&iLocal_580, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 26))
					{
						func_180(141, 0f, 0f, 0, 0, 0, 0);
						unk_0xF6082E2ADA1C795B(&iLocal_580, 26);
					}
					if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 1))
					{
						if (iLocal_3441 != -1)
						{
							if (!func_266(0, 0))
							{
								if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[iLocal_3441 /*18*/].f_1))
								{
									if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[iLocal_3441 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3441)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_179(unk_0x0FFED3E94261A832(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_177(81, sVar1, unk_0x4325D353D7D27B34(func_7(iVar0)), func_178(), -1, "KOTC_START", func_178());
											}
											else
											{
												func_176(81, "KOTC_START2", "KOTC_STRAP1", func_178(), -1, func_178());
												unk_0xF6082E2ADA1C795B(&iLocal_580, 14);
												unk_0xF6082E2ADA1C795B(&iLocal_580, 15);
											}
										}
										else
										{
											func_176(81, "KOTC_START", "KOTC_STRAP3", func_178(), -1, func_178());
										}
										unk_0xF6082E2ADA1C795B(&iLocal_580, 1);
									}
								}
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 2))
					{
						if (func_175(81))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 2);
						}
					}
					else if (iLocal_3441 != -1)
					{
						if (func_8(iVar0) == iLocal_3441)
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 14))
							{
								if (!func_266(0, 0))
								{
									if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[iLocal_3441 /*18*/].f_1))
									{
										if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[iLocal_3441 /*18*/].f_1))
										{
											func_176(81, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											unk_0xF6082E2ADA1C795B(&iLocal_580, 14);
										}
									}
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 15))
							{
								if (func_175(81))
								{
									unk_0xF6082E2ADA1C795B(&iLocal_580, 15);
								}
							}
						}
						else
						{
							if (unk_0xAA4F14DA15DB0B51(iLocal_580, 14))
							{
								unk_0x507FE690B1271947(&iLocal_580, 14);
							}
							if (unk_0xAA4F14DA15DB0B51(iLocal_580, 15))
							{
								unk_0x507FE690B1271947(&iLocal_580, 15);
							}
						}
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(iLocal_580, 14))
						{
							unk_0x507FE690B1271947(&iLocal_580, 14);
						}
						if (unk_0xAA4F14DA15DB0B51(iLocal_580, 15))
						{
							unk_0x507FE690B1271947(&iLocal_580, 15);
						}
					}
				}
				else
				{
					func_174();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3441 != -1)
						{
							if (func_8(iVar0) == iLocal_3441)
							{
								if (!func_266(1, 0))
								{
									func_171("KOTC_KINGOB1", 0);
								}
								else
								{
									func_174();
								}
								if (unk_0xAA4F14DA15DB0B51(iLocal_580, 10))
								{
									if (iLocal_3441 == unk_0x88641E5BC172153A())
									{
										if (!unk_0x6235C49EA2DBA22D())
										{
											if (!func_209())
											{
												if (!func_266(0, 0))
												{
													if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
													{
														if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
														{
															if (unk_0xAA4F14DA15DB0B51(iLocal_580, 2))
															{
																if (!func_179(unk_0x0FFED3E94261A832(), func_7(iVar0)))
																{
																	if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 10))
																	{
																		func_208("KOTC_YOUKNG", 30000);
																		func_207(1);
																		unk_0xF6082E2ADA1C795B(&iLocal_580, 6);
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
							else
							{
								if (iLocal_3441 == unk_0x88641E5BC172153A())
								{
									if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 7))
									{
										if (func_170(unk_0x88641E5BC172153A()))
										{
											if (!unk_0x6235C49EA2DBA22D())
											{
												if (!func_209())
												{
													if (!func_266(0, 0))
													{
														if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
														{
															if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
															{
																if (unk_0xAA4F14DA15DB0B51(iLocal_580, 2))
																{
																	if (!func_179(unk_0x0FFED3E94261A832(), func_7(iVar0)))
																	{
																		if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 7))
																		{
																			func_208("KOTC_OTHRKG", 30000);
																			func_207(1);
																			unk_0xF6082E2ADA1C795B(&iLocal_580, 7);
																		}
																	}
																	else if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 11))
																	{
																		func_147("KOTC_OTHRKGGN", func_169(), 1, "KOTC_KINGBLIP", func_148(unk_0x0FFED3E94261A832(), -2, 0, 0), -1);
																		func_207(1);
																		unk_0xF6082E2ADA1C795B(&iLocal_580, 11);
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
								if (((func_170(iLocal_3441) || unk_0xAA4F14DA15DB0B51(Local_419[iLocal_3441 /*5*/].f_4, 12)) && unk_0xAA4F14DA15DB0B51(iLocal_3434, func_8(iVar0))) && !func_266(1, 0))
								{
									if (func_179(unk_0x0FFED3E94261A832(), func_7(iVar0)))
									{
										func_144("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_148(unk_0x0FFED3E94261A832(), -2, 0, 0), 0);
									}
									else
									{
										func_133("KOTC_PERMKNG", &(Local_585[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_174();
								}
							}
						}
						else
						{
							func_174();
						}
					}
					else if (iLocal_3441 != -1)
					{
						if (!func_266(1, 0))
						{
							if (func_222(unk_0x88641E5BC172153A(), iVar0))
							{
								func_171("KOTC_KLLALL", 0);
							}
							else
							{
								func_171("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_174();
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 10))
						{
							if (iLocal_3441 == unk_0x88641E5BC172153A())
							{
								if (func_170(unk_0x88641E5BC172153A()))
								{
									if (!unk_0x6235C49EA2DBA22D())
									{
										if (!func_209())
										{
											if (!func_266(0, 0))
											{
												if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
												{
													if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
													{
														if (func_132(iVar0))
														{
															func_208("KOTC_CONTS", 30000);
															func_207(1);
															unk_0xF6082E2ADA1C795B(&iLocal_580, 10);
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
					else
					{
						func_174();
					}
				}
				if (iLocal_3441 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_170(unk_0x88641E5BC172153A()) && !func_266(1, 0))
						{
							func_171("KOTC_ENTER", 0);
						}
						else
						{
							func_174();
						}
					}
				}
				else
				{
					func_174();
				}
				func_105(iVar0);
				if (func_221(unk_0x0FFED3E94261A832()) == 141)
				{
					func_85(iVar0);
				}
				func_84();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_82(iVar0);
				func_80(iVar0);
				iVar0++;
			}
			func_174();
			func_265();
			func_76();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_3441 != -1)
				{
					if (unk_0xAA4F14DA15DB0B51(iLocal_580, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_121.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == iLocal_3441)
							{
								if (Local_121.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_105(iVar0);
				if (Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!unk_0xAA4F14DA15DB0B51(iLocal_3434, Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_405.f_5 = 1;
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 1) && func_75())
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_266(0, 0))
							{
								func_74("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar8)
						{
							if (iLocal_3441 != -1)
							{
								if (!func_266(0, 0))
								{
									if (!func_266(0, 0))
									{
										if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[iLocal_3441 /*18*/].f_1))
										{
											if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[iLocal_3441 /*18*/].f_1))
											{
												if (func_170(iLocal_3441))
												{
													func_176(68, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
												}
												else
												{
													func_74("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_3441 != -1)
							{
								if (!func_266(0, 0))
								{
									if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[iLocal_3441 /*18*/].f_1))
									{
										if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[iLocal_3441 /*18*/].f_1))
										{
											if (func_170(iLocal_3441))
											{
												func_72(64, func_73(Local_121.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_71(sVar5, func_73(Local_121.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_3441 != -1)
						{
							if (!func_266(0, 0))
							{
								if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[iLocal_3441 /*18*/].f_1))
								{
									if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[iLocal_3441 /*18*/].f_1))
									{
										if (func_170(iLocal_3441))
										{
											sVar5 = "KOTC_OVER3";
											if (func_69(Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_59(Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = unk_0x4325D353D7D27B34(Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_44(72, func_73(Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_73(Local_121.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 3);
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_580, 3))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 4))
					{
						if (iLocal_3441 != -1)
						{
							if (((((((func_175(64) || func_175(72)) || func_175(68)) || !func_170(iLocal_3441)) || func_266(1, 1)) || unk_0x9E5289F5D782437C()) || func_15(0) == 0) || iLocal_3441 == -1)
							{
								unk_0xF6082E2ADA1C795B(&iLocal_580, 4);
							}
						}
						else
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 4);
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_580, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_574(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_266(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (iLocal_3441 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1259, bVar10) && unk_0xAA4F14DA15DB0B51(iLocal_580, 4))
			{
				if (!func_209() || unk_0x9E5289F5D782437C())
				{
					unk_0xF6082E2ADA1C795B(&iLocal_580, 17);
					if (unk_0xAA4F14DA15DB0B51(iLocal_580, 5))
					{
						unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 1);
						func_462(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_209()) && !(func_31(unk_0x0FFED3E94261A832(), 0) && (func_30(unk_0x0FFED3E94261A832()) || func_28(unk_0x0FFED3E94261A832())))) && !func_25(unk_0x0FFED3E94261A832()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 25);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
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
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_206("AMEV_LBD_HELP"))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_703(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22())
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_208("AMEV_LBD_HELP", -1);
			func_207(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2456236 = 1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_703(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_26(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
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

int func_27()
{
	return -1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, 19);
}

bool func_29(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_29(iParam0, 9);
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_32(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
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
		unk_0x95CE6D748899618C(iParam2);
		unk_0xCF6846167A5EFE98(func_42(&Var1));
		unk_0xEA97619D8B89D387(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_41(iParam1) };
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
				if (bParam8)
				{
					if (bParam9)
					{
						Var1 = { func_40(&Var1) };
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
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_39() || !unk_0x1B154DE2D4606530()) || !func_36(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
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

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
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

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312735;
}

bool func_39()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

struct<16> func_40(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

var func_42(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

var func_43(char[4] cParam0)
{
	return cParam0;
}

int func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_58(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_69 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_70 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_16);
	func_55(uParam0);
	if (func_54(uParam0->f_1))
	{
		func_47();
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
				func_47();
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
				if (func_46(Global_2434604.f_2483[iVar0 /*76*/].f_1))
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

int func_46(int iParam0)
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

void func_47()
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
	func_48();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_48()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_52(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_49(&(Global_2434604.f_2791.f_1));
}

void func_49(var uParam0)
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
				if (unk_0xF4EE9D6C8E60AE22() && !func_51(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_50(0);
}

void func_50(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_51(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_53(var uParam0)
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

int func_54(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_55(var uParam0)
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_70 = func_178();
	}
}

int func_56(int iParam0)
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

void func_57(var uParam0, int iParam1)
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_27())
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_148(iParam1, -2, 0, 0);
		}
	}
}

void func_58(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_27();
	uParam1->f_17 = func_27();
	uParam1->f_18 = func_27();
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

char* func_59(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		sVar0 = func_68(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return sVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		sVar0 = func_63(iParam0, 0);
		return sVar0;
	}
	if (((func_29(iParam0, 28) || func_29(unk_0x0FFED3E94261A832(), 28)) || func_62(iParam0)) && !func_61(iParam0))
	{
		return func_63(iParam0, 0);
	}
	iVar1 = func_60(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_63(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_68(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(sVar0))
		{
			return func_63(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_60(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_27();
}

int func_61(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
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

int func_62(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
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

char* func_63(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_65(iParam0, 1))
		{
			return func_64();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

char* func_64()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

bool func_65(int iParam0, bool bParam1)
{
	return func_66(iParam0, bParam1, 1);
}

int func_66(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_67(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_27() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 != func_27())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_27())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_68(var uParam0)
{
	return uParam0;
}

bool func_69(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_70(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_27();
}

int func_70(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_27())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_71(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_72(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_58(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_69 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_70 = iParam7;
	return func_45(&Var0);
}

int func_73(float fParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844(fParam0);
	iVar0 = (iVar0 / Global_262145.f_9851);
	iVar0 = (iVar0 * Global_262145.f_9851);
	return iVar0;
}

int func_74(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_33(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_75()
{
	return unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 25);
}

void func_76()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_77(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_470(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (unk_0xAA4F14DA15DB0B51(uLocal_581, iVar0))
	{
		unk_0xFC285DAA1CD81983(func_79(iParam0, 0), 0, func_78(iParam0, 1));
		if (iVar0 == 4)
		{
			unk_0xFC285DAA1CD81983(func_79(iParam0, 1), 0, func_78(iParam0, 1));
		}
		unk_0x507FE690B1271947(&iLocal_581, iVar0);
	}
}

int func_78(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == unk_0x88641E5BC172153A())
	{
		return 9;
	}
	else if (func_179(unk_0x0FFED3E94261A832(), func_7(iParam0)))
	{
		return func_148(unk_0x0FFED3E94261A832(), -2, 0, 0);
	}
	return 6;
}

int func_79(int iParam0, bool bParam1)
{
	switch (func_470(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_80(int iParam0)
{
	if (unk_0xBDD3EABACAB97D09(func_81(iParam0)))
	{
		unk_0x789C84F1B8496AD0(&(Local_1266[iParam0 /*68*/].f_28));
	}
}

var func_81(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_28;
}

void func_82(int iParam0)
{
	if (unk_0xBDD3EABACAB97D09(func_83(iParam0)))
	{
		unk_0x789C84F1B8496AD0(&(Local_1266[iParam0 /*68*/].f_27));
	}
}

var func_83(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_27;
}

void func_84()
{
	bool bVar0;
	
	if (iLocal_3441 != -1)
	{
		if (func_170(iLocal_3441))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 16))
		{
			unk_0xB0D390F8FEB78903("MP_Deathmatch_Type_Challenge_Scene");
			unk_0xF6082E2ADA1C795B(&iLocal_580, 16);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_580, 16))
	{
		unk_0x40F160C3038ECAF5("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x507FE690B1271947(&iLocal_580, 16);
	}
}

void func_85(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_170(unk_0x88641E5BC172153A()) && !func_266(1, 1)) && iLocal_3441 == unk_0x88641E5BC172153A()) && !func_101(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0)) && !func_100(unk_0x0FFED3E94261A832())) && !func_99())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 18))
		{
			if (iLocal_3445 == 0)
			{
				iLocal_3445 = 1;
			}
			func_95(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_91();
			unk_0xF6082E2ADA1C795B(&iLocal_580, 18);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_580, 18))
	{
		if (iLocal_3445)
		{
			iLocal_3445 = 0;
		}
		func_86();
		func_95(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x507FE690B1271947(&iLocal_580, 18);
	}
}

void func_86()
{
	if (func_90() && !func_89())
	{
		func_88();
	}
	func_87();
	Global_2404996.f_676 = 0;
}

void func_87()
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

void func_88()
{
	if (func_89())
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

int func_89()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_93(func_470(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_92(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_92(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2404996.f_1709)
	{
	}
	if (Global_2404996.f_676 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/] = { Param0 };
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_3 = uParam3;
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_4 = uParam4;
		Global_2404996.f_676++;
	}
}

void func_93(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_94(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_94(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_94(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_94(iParam0, 2);
					break;
			}
			break;
	}
}

float func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10068;
				
				case 1:
					return Global_262145.f_10069;
				
				case 2:
					return Global_262145.f_10070;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10071;
				
				case 1:
					return Global_262145.f_10072;
				
				case 2:
					return Global_262145.f_10073;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10074;
				
				case 1:
					return Global_262145.f_10075;
				
				case 2:
					return Global_262145.f_10076;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10077;
				
				case 1:
					return Global_262145.f_10078;
				
				case 2:
					return Global_262145.f_10079;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10080;
				
				case 1:
					return Global_262145.f_10081;
				
				case 2:
					return Global_262145.f_10082;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10083;
				
				case 1:
					return Global_262145.f_10084;
				
				case 2:
					return Global_262145.f_10085;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10086;
				
				case 1:
					return Global_262145.f_10087;
				
				case 2:
					return Global_262145.f_10088;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10089;
				
				case 1:
					return Global_262145.f_10090;
				
				case 2:
					return Global_262145.f_10091;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_95(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_90())
		{
			func_88();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_86();
		func_98(8, 0, 0, 0, 0);
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
		func_96();
	}
}

void func_96()
{
	if (func_90() && !func_89())
	{
		func_88();
	}
	if (func_89())
	{
		func_97();
	}
	else
	{
		func_86();
		func_98(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_97()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_99()
{
	return Global_1574290;
}

int func_100(int iParam0)
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

int func_101(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (func_104(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_25(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_103(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_102(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_703(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_26(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_703(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_26(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_703(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_26(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_105(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_321(iParam0);
		func_106(iParam0);
	}
}

void func_106(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[3];
	
	if (iLocal_3441 == -1)
	{
		return;
	}
	if (func_266(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_9848 + 1000 - func_9(&(Local_121.f_1.f_1), 0, 0));
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_419[iLocal_3441 /*5*/].f_4, 12))
	{
		if (!func_170(iLocal_3441))
		{
			func_129(iVar6, iVar7, func_130());
			return;
		}
	}
	func_128(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_27();
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = unk_0xBBDA792448DB5A89(func_73(Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_73(Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar8[iVar0] = 0;
		if (func_127(1))
		{
			if (Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (unk_0x885F483F34E47503(Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_69(Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_148(Local_1266[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_73(func_125(iParam0, iLocal_3441));
	func_108(Local_1266[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1266[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1266[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3444, iVar7, func_130(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1266[iParam0 /*68*/].f_53[0 /*4*/] == unk_0x88641E5BC172153A())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 23))
		{
			if (func_107(1))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x08BE237DBCD9CBD9(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xF6082E2ADA1C795B(&iLocal_580, 23);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_580, 23))
	{
		if (func_107(1))
		{
			unk_0x08BE237DBCD9CBD9(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x08BE237DBCD9CBD9(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x507FE690B1271947(&iLocal_580, 23);
	}
}

bool func_107(bool bParam0)
{
	return func_65(unk_0x0FFED3E94261A832(), bParam0);
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_122(0) == 0)
	{
		return;
	}
	func_121();
	iVar1 = 0;
	if (((Global_2455769[0] != iParam0 || Global_2455769[1] != iParam1) || Global_2455769[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2455769[0] = iParam0;
	Global_2455769[1] = iParam1;
	Global_2455769[2] = iParam2;
	Global_2455769[3] = 0;
	Global_2455769[4] = 0;
	if (Global_2455769[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x4325D353D7D27B34(Global_2455769[0]);
			Global_2455775[0 /*16*/] = { func_120(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_117(iParam3, &(Global_2455775[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12, 255, 0, 0, 0);
		}
	}
	if (Global_2455769[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x4325D353D7D27B34(Global_2455769[1]);
			Global_2455775[1 /*16*/] = { func_120(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_117(iParam4, &(Global_2455775[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0);
		}
	}
	if (Global_2455769[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x4325D353D7D27B34(Global_2455769[2]);
			Global_2455775[2 /*16*/] = { func_120(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_117(iParam5, &(Global_2455775[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (unk_0x0FFED3E94261A832() != func_27())
			{
				if (func_113(unk_0x0FFED3E94261A832()) == 0)
				{
					func_117(iParam6, unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_113(unk_0x0FFED3E94261A832()) == 0)
			{
				func_117(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_113(unk_0x0FFED3E94261A832()) == 0)
			{
				func_117(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_112(sParam10))
	{
		sVar2 = sParam10;
	}
	func_109(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
	*uParam8 = 0;
}

void func_109(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
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
		Global_1353013.f_1 = 1;
		func_110(7, iVar0);
		Global_1353013.f_4366[iVar0] = uParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = uParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = uParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_110(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

int func_112(var uParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_113(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		if ((func_116() && !func_115()) || func_114(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		if (func_18(&(Global_1574379.f_13)))
		{
			if (!func_5(&(Global_1574379.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1574379.f_13));
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9);
}

bool func_114(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

bool func_115()
{
	return Global_1312416.f_1;
}

bool func_116()
{
	return Global_1312416;
}

void func_117(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
		Global_1353013.f_1 = 1;
		func_110(6, iVar0);
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
		if (iParam15 == 5 && func_119())
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
			if (func_118())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_118()
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

int func_119()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_120(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x91D2F083AE17E209("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x91D2F083AE17E209("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x91D2F083AE17E209("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x91D2F083AE17E209("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x91D2F083AE17E209("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_121()
{
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	Global_2456239 = 1;
}

int func_122(bool bParam0)
{
	if (func_124())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_703(unk_0x0FFED3E94261A832(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_123()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_124()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 12);
}

float func_125(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_126(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_126(int iParam0, int iParam1)
{
	return Local_121.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_127(bool bParam0)
{
	return func_69(unk_0x0FFED3E94261A832(), bParam0);
}

void func_128(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xBCA469D44FBFAC80())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 0))
		{
			if (!unk_0x58478145CAF8429C(&(Global_2497344.f_4668)))
			{
				unk_0x295E3CE52FB58909(&(Global_2497344.f_4668));
			}
			unk_0x6040865446FA4030(1);
			unk_0x988197573BDAD49A("FM_COUNTDOWN_30S_FIRA");
			unk_0x40F160C3038ECAF5("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
			unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
			if (Global_2497344.f_4676 > -1)
			{
				unk_0x15BA16B33BC155D8(Global_2497344.f_4676);
				Global_2497344.f_4676 = -1;
			}
			Global_2497344.f_4666 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 0))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 4))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 2))
				{
					if (unk_0xB6080B946DC31271())
					{
						if ((!unk_0x35302CD5A5D37EED(unk_0xD2225B71AF170B13(unk_0x511EB800EFE78B52()), "OFF") && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && !unk_0x58478145CAF8429C(&(Global_2497344.f_4668)))
						{
							StringCopy(&(Global_2497344.f_4668), "", 32);
							unk_0x988197573BDAD49A("FM_COUNTDOWN_30S_FIRA");
							unk_0x40F160C3038ECAF5("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
							unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
							unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
							unk_0x6040865446FA4030(1);
							unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 2);
						}
					}
				}
				else if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 5))
				{
					unk_0x295E3CE52FB58909("OFF");
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x988197573BDAD49A("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x988197573BDAD49A("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x988197573BDAD49A("FM_COUNTDOWN_30S");
				}
				unk_0xB0D390F8FEB78903("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 1);
			}
			else if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x6D8FF930A4DA6C2C() != 0)
					{
						if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0x2220C39A0D4C8350())
						{
							StringCopy(&(Global_2497344.f_4668), unk_0x0FA01F6A341D97AA(), 32);
							unk_0x295E3CE52FB58909("OFF");
						}
						unk_0x6040865446FA4030(1);
						unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 3))
				{
					Global_2497344.f_4676 = unk_0x9FF6FFD9EB30D086();
					unk_0x08BE237DBCD9CBD9(Global_2497344.f_4676, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 0))
			{
				Global_2497344.f_4666 = 0;
				Global_2497344.f_4676 = -1;
				unk_0x8CF1128C350F1552("FM_COUNTDOWN_30S_KILL");
				unk_0x6040865446FA4030(0);
				unk_0x988197573BDAD49A("FM_PRE_COUNTDOWN_30S");
				unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
				unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
				unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 1);
				unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 0);
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 2))
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 2);
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 5);
				}
				else
				{
					unk_0x507FE690B1271947(&(Global_2497344.f_4666), 5);
					unk_0x507FE690B1271947(&(Global_2497344.f_4666), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 0))
		{
			Global_2497344.f_4666 = 0;
			Global_2497344.f_4676 = -1;
			unk_0x8CF1128C350F1552("FM_COUNTDOWN_30S_KILL");
			unk_0x6040865446FA4030(0);
			unk_0x988197573BDAD49A("FM_PRE_COUNTDOWN_30S");
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
			unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 1);
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 0);
			if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 2);
				unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 5);
			}
			else
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4666), 2);
				unk_0x507FE690B1271947(&(Global_2497344.f_4666), 5);
			}
		}
	}
}

void func_129(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_122(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_112(sParam2))
	{
		sVar0 = sParam2;
	}
	func_109(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0);
}

char* func_130()
{
	return "HUD_COUNTDOWN";
	switch (func_221(unk_0x0FFED3E94261A832()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_131())
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

int func_131()
{
	if (func_221(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

bool func_132(int iParam0)
{
	return Local_121.f_6[iParam0 /*204*/].f_72;
}

int func_133(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
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
	if (unk_0x8A3FBC299F47ED6B(sParam1) > 63)
	{
		return 0;
	}
	if (func_143(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312575.f_54;
	func_137();
	Global_1312575 = 9;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = iParam3;
	Global_1312575.f_56 = iParam3;
	Global_1312575.f_54 = uVar0;
	func_136();
	func_135(bParam2);
	func_134();
	return 1;
}

void func_134()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_136()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

void func_137()
{
	func_139();
	func_138(0);
}

void func_138(bool bParam0)
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

void func_139()
{
	if (!func_142())
	{
	}
	if (func_141())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_140();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_140()
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

int func_141()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_142()
{
	if (!func_141())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_140();
	return unk_0x0D3452E263E036CA();
}

bool func_143(char* sParam0, char* sParam1)
{
	if (!func_141())
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

void func_144(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_145(sParam0, unk_0x4325D353D7D27B34(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312575 = 15;
		Global_1312575.f_56 = iParam3;
		Global_1312575.f_57 = iParam4;
		Global_1312575.f_54 = iParam1;
	}
}

int func_145(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
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
	if (unk_0x8A3FBC299F47ED6B(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 63)
	{
		return 0;
	}
	if (func_146(sParam0, sParam1, sParam2) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_137();
	Global_1312575 = 10;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	StringCopy(&(Global_1312575.f_32), sParam2, 64);
	Global_1312575.f_58 = uParam4;
	Global_1312575.f_56 = uParam4;
	func_136();
	func_135(bParam3);
	func_134();
	return 1;
}

bool func_146(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_141())
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
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam2) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_32));
}

void func_147(char* sParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(uParam1);
	if (!iParam4 == 0)
	{
		unk_0x95CE6D748899618C(iParam4);
	}
	unk_0xD5DA3EC5EEC78358(sParam3);
	unk_0xED95966D04271FDA(0, 0, 0, iParam5);
}

int func_148(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_643(iParam0))
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
	if ((func_643(unk_0x0FFED3E94261A832()) || (func_168() && func_642())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_167();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(uVar1))
			{
				if (unk_0xB0BB7458627D389F(uVar1) != -1)
				{
					if (func_703(unk_0xB0BB7458627D389F(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_165(iParam1, iParam0, 0);
							}
							else
							{
								return func_156(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_156(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_165(iParam1, iParam0, 0);
				}
				else
				{
					return func_149(0, -1, 0);
				}
			}
			else
			{
				return func_149(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_165(iParam1, iParam0, 0);
		}
		else
		{
			return func_156(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_156(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_149(bool bParam0, int iParam1, bool bParam2)
{
	return func_150(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_150(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			if (func_155(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_154(1);
				}
				else
				{
					return func_154(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_151(iVar0, iParam2, 1);
			}
			else
			{
				return func_151(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_154(1);
	}
	return func_154(0);
}

int func_151(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_153(iParam0, iParam1);
	if (func_152(Global_1638223.f_93532))
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

int func_152(int iParam0)
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

int func_153(int iParam0, int iParam1)
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
			if (!func_155(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_154(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_155(int iParam0, int iParam1, int iParam2)
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

int func_156(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_162())
			{
				iVar3 = func_161(iParam0);
				if (!iVar3 == -1)
				{
					return func_159(iVar3);
				}
			}
			if ((func_158(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_155(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_154(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_157(1);
			}
			else
			{
				return func_150(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_154(1);
			}
			else
			{
				return func_150(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_161(iParam0);
	if (!iVar4 == -1)
	{
		return func_159(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_157(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_158(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_159(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_160(iParam0);
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

var func_160(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_161(int iParam0)
{
	if (!iParam0 == func_27())
	{
		if (func_69(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_60(iParam0)];
		}
	}
	return -1;
}

int func_162()
{
	if (func_164() || func_163())
	{
		return 1;
	}
	return 0;
}

var func_163()
{
	return Global_2445217.f_13;
}

var func_164()
{
	return Global_2445217.f_12;
}

int func_165(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_162())
	{
		iVar1 = func_161(iParam1);
		if (!iVar1 == -1)
		{
			return func_159(iVar1);
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
		iVar0 = func_150(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_166(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_166(int iParam0)
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

var func_167()
{
	return Global_2359301.f_2;
}

bool func_168()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

char* func_169()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_60(unk_0x0FFED3E94261A832());
	if (iVar0 != func_27())
	{
		if (iVar0 != unk_0x0FFED3E94261A832())
		{
			if (((func_29(iVar0, 28) || func_29(unk_0x0FFED3E94261A832(), 28)) || func_62(iVar0)) && !func_61(iVar0))
			{
				return func_63(iVar0, 0);
			}
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_63(iVar0, 0);
			}
		}
		sVar1 = func_68(&(Global_1622795[iVar0 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(sVar1))
		{
			return func_63(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_170(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Local_419[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_419[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_171(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_172(sParam0))
	{
		return;
	}
	func_137();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_136();
	func_135(bParam1);
	func_134();
}

bool func_172(char* sParam0)
{
	if (!func_141())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_173(sParam0);
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_173(char* sParam0)
{
	if (!func_141())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_174()
{
	if (!func_141())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_137();
}

bool func_175(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

int func_176(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_58(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_45(&Var0);
}

int func_177(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_58(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam6;
	return func_45(&Var0);
}

int func_178()
{
	return 21;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_60(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_180(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
	}
	Global_2497344.f_4676 = -1;
	bVar0 = (func_31(unk_0x0FFED3E94261A832(), 0) && func_30(unk_0x0FFED3E94261A832()));
	if (bParam6)
	{
		func_203(21, 1);
	}
	else
	{
		func_200(iParam0, -1);
		if (func_199(unk_0x0FFED3E94261A832()))
		{
			Global_1574379.f_3 = iParam0;
		}
		else
		{
			func_198(iParam0);
		}
		Global_1574379.f_4 = -1;
		if (func_199(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 5);
		}
		if ((func_116() && !func_115()) || func_114(unk_0x0FFED3E94261A832(), 21))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 4);
		}
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 17);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 20);
		if (func_197(iParam0))
		{
			func_196();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_193(fParam1);
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
		if (func_191(iParam0))
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
				func_189(1);
				if (func_186(0))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_184(1);
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
		}
		if (bParam5)
		{
			func_183();
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_181(iParam0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 21);
			}
		}
	}
	Global_2484463 = 1;
}

int func_181(int iParam0)
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
	if (func_182())
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	switch (func_131())
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

void func_183()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4667), 0);
}

void func_184(bool bParam0)
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
		func_185(iVar0);
		iVar0++;
	}
}

void func_185(int iParam0)
{
	Global_91829.f_163[iParam0] = 1;
	Global_91829.f_162 = 1;
}

int func_186(int iParam0)
{
	var uVar0;
	
	uVar0 = func_187(2519, -1, 0);
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

int func_187(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_188(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

void func_189(int iParam0)
{
	if (func_190() && iParam0)
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

int func_190()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_192(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

void func_193(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_194())
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

int func_194()
{
	switch (func_195())
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

int func_195()
{
	return Global_25222;
}

void func_196()
{
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_209 = 0;
	unk_0x507FE690B1271947(&(Global_2497344.f_4482), 1);
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_198(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/] = iParam0;
}

bool func_199(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_202(0) || func_202(func_201(iVar0)))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 2);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 2);
		}
	}
}

int func_201(int iParam0)
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

bool func_202(int iParam0)
{
	var uVar0;
	
	uVar0 = func_187(2465, -1, 0);
	return unk_0xAA4F14DA15DB0B51(uVar0, iParam0);
}

void func_203(int iParam0, bool bParam1)
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

void func_204(int iParam0)
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

float func_205(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_40;
}

bool func_206(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_207(int iParam0)
{
	unk_0xE068B121D78064B6(3, 21, 200, 0, 0);
	if (iParam0 && !func_209())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_208(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

bool func_209()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

void func_210(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_116())
		{
			func_213(0);
			func_212();
		}
		if (func_202(0))
		{
			uVar0 = func_187(2465, -1, 0);
			unk_0x507FE690B1271947(&uVar0, 0);
			func_212();
		}
		if (func_202(func_201(func_221(unk_0x0FFED3E94261A832()))))
		{
			uVar0 = func_187(2465, -1, 0);
			unk_0x507FE690B1271947(&uVar0, func_201(func_221(unk_0x0FFED3E94261A832())));
			func_212();
		}
		if (func_211())
		{
			func_212();
		}
		if (func_221(unk_0x0FFED3E94261A832()) > -1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 7);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 7);
	}
}

int func_211()
{
	if (Global_2434604.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_212()
{
	if (func_211())
	{
		Global_2434604.f_933.f_16 = 1;
	}
}

void func_213(int iParam0)
{
	if (func_116())
	{
		if (iParam0 == 1)
		{
			if (Global_2497344.f_4314 == -1)
			{
				Global_2497344.f_4314 = 60000;
			}
			func_220(&(Global_2497344.f_4312), 0, 0);
			if (Global_2497344.f_4317 == -1)
			{
				Global_2497344.f_4317 = 10000;
			}
			func_220(&(Global_2497344.f_4315), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_219(1);
		}
		if ((!unk_0x1B154DE2D4606530() && !func_218()) && !func_214(unk_0x0FFED3E94261A832()))
		{
			Global_979817 = 0;
		}
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_8 = 0;
	}
}

int func_214(int iParam0)
{
	if (func_215(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_216(iParam0))
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

bool func_216(int iParam0)
{
	return func_217(iParam0);
}

bool func_217(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_218()
{
	return Global_2445217.f_719;
}

void func_219(bool bParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (!func_116())
		{
			if (func_703(unk_0x0FFED3E94261A832(), 1, 0))
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
			if (func_703(unk_0x0FFED3E94261A832(), 1, 1))
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

void func_220(var uParam0, bool bParam1, bool bParam2)
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

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

bool func_222(int iParam0, int iParam1)
{
	return Local_419[iParam0 /*5*/].f_1[iParam1];
}

int func_223(bool bParam0, bool bParam1)
{
	if (func_225(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_113(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_224(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_224(int iParam0)
{
	return func_36(iParam0, 0);
}

bool func_225(int iParam0)
{
	if (func_199(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

void func_226(int iParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 22))
	{
		if (iLocal_3441 == unk_0x88641E5BC172153A())
		{
			if (func_170(unk_0x88641E5BC172153A()))
			{
				if (!func_266(1, 1))
				{
					if (Local_121.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_121.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_121.f_6[iParam0 /*204*/].f_74[0 /*4*/] != unk_0x88641E5BC172153A())
							{
								if (!func_179(unk_0x0FFED3E94261A832(), Local_121.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_227();
									unk_0xF6082E2ADA1C795B(&iLocal_580, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_227()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1697), 19);
}

void func_228(int iParam0)
{
	if (iLocal_417 != func_8(iParam0))
	{
		iLocal_417 = func_8(iParam0);
		if (iLocal_417 > -1)
		{
			iLocal_418++;
			unk_0xF6082E2ADA1C795B(&iLocal_580, 25);
		}
	}
}

void func_229(int iParam0)
{
	if (func_617() == 1)
	{
		if (func_8(iParam0) == unk_0x88641E5BC172153A() && !func_223(1, 0))
		{
			if (!func_192(unk_0x0FFED3E94261A832()))
			{
				func_230(1);
			}
		}
		else if (func_192(unk_0x0FFED3E94261A832()))
		{
			func_230(0);
		}
	}
}

void func_230(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		Global_2456868 = func_221(unk_0x0FFED3E94261A832());
		if (Global_2456868 == -1)
		{
			Global_2456868 = Global_1574379.f_4;
		}
		if (func_263(Global_2456868) == 0)
		{
			if (func_262(1) > 0)
			{
				func_261(26, -1);
			}
		}
		if (func_116())
		{
			func_213(0);
			func_212();
		}
		if (func_202(0))
		{
			uVar1 = func_187(2465, -1, 0);
			unk_0x507FE690B1271947(&uVar1, 0);
			func_212();
		}
		if (func_202(func_201(func_221(unk_0x0FFED3E94261A832()))))
		{
			uVar1 = func_187(2465, -1, 0);
			unk_0x507FE690B1271947(&uVar1, func_201(func_221(unk_0x0FFED3E94261A832())));
			func_212();
		}
		if (func_211())
		{
			func_212();
		}
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 0);
	}
	else
	{
		if ((!func_260() && !func_259()) && !func_258())
		{
			Global_2456868 = -1;
			func_257(26, -1);
		}
		else if (func_263(Global_2456868) == 0)
		{
			iVar0 = func_242(1);
			if (iVar0 > 0)
			{
				func_237(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_233(1927, 1, -1);
				func_237(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_231(26, -1))
		{
			Global_2456868 = -1;
			func_257(26, -1);
		}
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 0);
	}
}

bool func_231(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	uVar0 = func_232(iParam1);
	uVar1 = unk_0x29B06605BA5CF280(uVar0);
	return unk_0xAA4F14DA15DB0B51(uVar1, iParam0);
}

int func_232(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
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

void func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_187(iParam0, func_188(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_236(iParam0))
	{
		func_235(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_234(iParam0, iVar0, iParam2, 1);
	}
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_188(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_188(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_188(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_188(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_188(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_188(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_188(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_188(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_188(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_188(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_188(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_188(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_188(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_188(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_188(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_188(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_188(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_188(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_188(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_188(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_188(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_188(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_188(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_188(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_188(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_188(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_188(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_188(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_188(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_188(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_188(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_188(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_188(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_235(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_188(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_236(int iParam0)
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

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_241(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_240(iParam0))
	{
		func_239(iParam0, iVar0);
	}
	else
	{
		func_238(iParam0, iVar0);
	}
}

void func_238(int iParam0, int iParam1)
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

void func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
}

int func_240(int iParam0)
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

int func_241(int iParam0)
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

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2455759 == 0)
	{
		return 0;
	}
	if (func_258())
	{
		if (unk_0x1B154DE2D4606530() || (func_256() || func_254()))
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
	if (func_253(Global_102264.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2454637)
	{
		iVar0 = 1;
	}
	if (func_252(512))
	{
		iVar0 = 1;
	}
	if (func_251(128))
	{
		iVar0 = 1;
	}
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_250())
	{
		iVar0 = 0;
	}
	if (Global_2455198)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_248())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_247())
	{
		iVar0 = 0;
	}
	if ((Global_2454713 || Global_2454712) || Global_1315678)
	{
		if (func_254())
		{
			iVar0 = 0;
		}
	}
	Global_2455198 = 0;
	Global_2454712 = 0;
	Global_2454713 = 0;
	Global_1315678 = 0;
	Global_2454637 = 0;
	func_245(&(Global_102264.f_1), 32);
	func_244(512);
	func_243(128);
	return iVar0;
}

void func_243(int iParam0)
{
	Global_102321 = (Global_102321 - (Global_102321 && iParam0));
}

void func_244(int iParam0)
{
	Global_102322 = (Global_102322 - (Global_102322 && iParam0));
}

void func_245(var uParam0, int iParam1)
{
	func_246(uParam0, iParam1);
}

void func_246(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_247()
{
	if (((Global_1574312 || Global_1574283) || func_36(unk_0x0FFED3E94261A832(), 0)) || func_168())
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	switch (func_249())
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

int func_249()
{
	return Global_2445989.f_1.f_2819;
}

bool func_250()
{
	return Global_1312829;
}

bool func_251(int iParam0)
{
	return (Global_102321 && iParam0) != 0;
}

bool func_252(int iParam0)
{
	return (Global_102322 && iParam0) != 0;
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_254()
{
	if (func_263(Global_2456868))
	{
		return 0;
	}
	if (func_255(unk_0x0FFED3E94261A832(), 146))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
	{
		return func_192(iParam0);
	}
	return 0;
}

int func_256()
{
	if (func_263(Global_2456868))
	{
		return 0;
	}
	if (func_192(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xB8D595DDD2159686(0, iParam1);
			break;
		
		default:
			uVar1 = func_232(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0x507FE690B1271947(&iVar0, iParam0);
				unk_0xB8D595DDD2159686(iVar0, iParam1);
			}
			break;
	}
}

bool func_258()
{
	return unk_0xAA4F14DA15DB0B51(Global_1312423, 0);
}

bool func_259()
{
	return Global_1312821;
}

bool func_260()
{
	return Global_1312852;
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xB8D595DDD2159686(0, iParam1);
			break;
		
		default:
			uVar1 = func_232(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (!unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0xF6082E2ADA1C795B(&iVar0, iParam0);
				unk_0xB8D595DDD2159686(iVar0, iParam1);
			}
			break;
	}
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_250())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_248())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_247())
	{
		iVar0 = 0;
	}
	Global_2455759 = 1;
	return iVar0;
}

int func_263(int iParam0)
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

void func_264()
{
	if (func_266(0, 0))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_580, 25))
	{
		if (iLocal_417 == unk_0x88641E5BC172153A())
		{
			if (Local_405.f_11 == 0)
			{
				Local_405.f_11 = unk_0xDA84A1E29323722E();
			}
		}
		unk_0x507FE690B1271947(&iLocal_580, 25);
	}
}

void func_265()
{
	if (func_206("KOTC_1STHELP"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	if (func_206("KOTC_OTHRKG"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	if (func_206("KOTC_YOUKNG"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	if (func_206("KOTC_CONTS"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
}

int func_266(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_580, 17))
	{
		return 1;
	}
	if (func_304(unk_0x0FFED3E94261A832(), 1, 0))
	{
		return 1;
	}
	if (func_123())
	{
		return 1;
	}
	if (func_202(9))
	{
		return 1;
	}
	if (func_202(0))
	{
		return 1;
	}
	if (!func_281())
	{
		return 1;
	}
	if (func_274())
	{
		return 1;
	}
	if (func_269(4))
	{
		return 1;
	}
	if (func_268())
	{
		return 1;
	}
	if (func_223(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1761100)
	{
		return 1;
	}
	if (func_267(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0)
{
	if (!func_703(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_268()
{
	return Global_91829.f_310 > 0;
}

int func_269(int iParam0)
{
	int iVar0;
	
	if (func_268())
	{
		iVar0 = 0;
		while (iVar0 < 47)
		{
			if (func_273(iVar0) == iParam0)
			{
				if (func_270(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_270(int iParam0)
{
	return func_271(iParam0, 6, 1);
}

int func_271(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_195() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_187(func_272(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
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
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
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
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

int func_274()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_370.f_5, 0))
	{
		return 1;
	}
	if (func_276() && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 != 3)
	{
		return 1;
	}
	if (func_275() && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 != 3)
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

bool func_275()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 5);
}

int func_276()
{
	if (((func_280() || func_279()) || func_278()) || func_277())
	{
		return 1;
	}
	return 0;
}

bool func_277()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 1);
}

bool func_278()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

bool func_279()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

bool func_280()
{
	return Global_2445217.f_578;
}

int func_281()
{
	if (func_114(unk_0x0FFED3E94261A832(), 21))
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
	if (func_214(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_303())
	{
		return 0;
	}
	if (func_302(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (func_291(unk_0x0FFED3E94261A832()) == 3)
	{
		return 0;
	}
	if (func_289(func_290()))
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_216(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_287())
	{
		return 0;
	}
	if (func_114(unk_0x0FFED3E94261A832(), 0) || func_114(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_114(unk_0x0FFED3E94261A832(), 12) || func_114(unk_0x0FFED3E94261A832(), 14)) || func_114(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_101(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_286(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_267(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_285())
	{
		return 0;
	}
	if (func_283(unk_0x0FFED3E94261A832()) && Global_1592110.f_170)
	{
		return 0;
	}
	if (func_102(unk_0x0FFED3E94261A832()) || func_282(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_703(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1 && Global_2422215[iParam0 /*387*/].f_318.f_4 != func_27())
			{
				return func_26(Global_2422215[iParam0 /*387*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_283(int iParam0)
{
	if (func_284(Global_1592456[iParam0 /*635*/].f_259.f_15))
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
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

int func_285()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_286(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11);
}

int func_287()
{
	if (func_288() == 0)
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	return Global_1312466.f_18;
}

int func_289(int iParam0)
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

int func_290()
{
	return Global_2434604.f_2483[0 /*76*/].f_1;
}

int func_291(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_300(iParam0) && !func_199(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_299(iParam0);
	bVar3 = func_116();
	uVar4 = func_293();
	if ((bVar1 && (func_292(iParam0) || func_192(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_30(iParam0)) && !func_28(iParam0)))
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

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

int func_293()
{
	if ((func_29(unk_0x0FFED3E94261A832(), 21) || func_29(unk_0x0FFED3E94261A832(), 22)) || func_297())
	{
		return 1;
	}
	if (func_295())
	{
		func_294(22);
		return 1;
	}
	return 0;
}

void func_294(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

int func_295()
{
	if (func_31(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_116() && !func_115()) || func_114(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_296(27);
		}
	}
	return 0;
}

void func_296(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

int func_297()
{
	return func_298(289, -1);
}

int func_298(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_188(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_299(int iParam0)
{
	return func_29(iParam0, 20);
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

bool func_301()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

int func_302(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_303()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_304(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_305(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	int iVar1;
	
	Global_1574379.f_6 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Param1);
	if (fVar0 < fParam5 && !func_199(unk_0x0FFED3E94261A832()))
	{
		if (iParam0 != 146 && !func_114(unk_0x0FFED3E94261A832(), 21))
		{
			func_319(Param1, 1, 0);
		}
		if ((!*uParam4 || unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 3)) && func_703(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 1;
			func_193(func_318(iParam0));
			unk_0xFBC4596E19752537(func_317(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_316(iParam0);
				unk_0xE0125DCD8DB3EFC3(iVar1);
				if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > iVar1)
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), iVar1, 1);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 8);
			}
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 3);
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_199(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 3) && func_703(unk_0x0FFED3E94261A832(), 1, 1))
		{
			func_315();
			unk_0xFBC4596E19752537(Global_262145.f_10060);
			unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 3);
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 3);
		}
	}
	else if ((*uParam4 || unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 3)) && func_703(unk_0x0FFED3E94261A832(), 1, 1))
	{
		*uParam4 = 0;
		func_315();
		unk_0xFBC4596E19752537(1f);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 8);
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 3);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_306();
		}
	}
}

void func_306()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_313();
	func_309(1, 1);
	func_307();
}

void func_307()
{
	func_308(0, 0);
}

void func_308(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_309(bool bParam0, bool bParam1)
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
		func_312();
	}
	func_95(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_311(0);
	func_310();
}

void func_310()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_311(bool bParam0)
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

void func_312()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_313()
{
	func_314();
	Global_2404996.f_2053 = 0;
}

void func_314()
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

void func_315()
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

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_317(int iParam0)
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

float func_318(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_319(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404996.f_43.f_49 = { Param0 };
	Global_2404996.f_43.f_52 = iParam3;
	Global_2404996.f_43.f_53 = iParam4;
}

Vector3 func_320(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_24;
}

void func_321(int iParam0)
{
	int iVar0;
	
	if (func_266(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1335[iVar0 /*49*/] = -1;
		Local_1335[iVar0 /*49*/].f_1 = func_27();
		Local_1335[iVar0 /*49*/].f_9 = 0;
		Local_1335[iVar0 /*49*/].f_31 = -1;
		if (Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1335[iVar0 /*49*/] = Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1335[iVar0 /*49*/].f_1 = Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1335[iVar0 /*49*/].f_9 = func_73(Local_121.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_322(&Local_1335, &(Local_1266[iParam0 /*68*/].f_66), 25, &uLocal_2904, &uLocal_3015, -1, 0);
}

void func_322(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_438(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_436() || iParam2 == 26)
	{
		if (func_393(uParam1, iParam2, uParam3, Global_1574108, 0, func_439()))
		{
			func_392(1);
			if ((!func_391() && !func_390()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_389())
				{
					func_387();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_386(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_385(uParam1);
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
								if (func_703(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_36(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_384(iVar35))
										{
											iVar44 = iVar35;
											if (func_70(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_381(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_378(unk_0x0FFED3E94261A832(), 0) && func_377(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_376())
							{
								if (func_703(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_27();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_375(iVar35) && func_371(iVar35, iParam2)) && func_703(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_366(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_41(iVar35) };
								iVar37 = func_360(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
								}
								Global_1574108++;
								if ((iParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*49*/])->f_22;
								}
								if ((iParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (iParam0[iVar52 /*49*/])->f_31;
								}
								if ((iParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (iParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (iParam0[iVar52 /*49*/])->f_9;
								if (((iParam0[iVar52 /*49*/])->f_9 != -1 || (iParam0[iVar52 /*49*/])->f_22 != -1f) || (iParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_376())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_355(&iVar43, &fVar45, (iParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_354(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_353(iVar35, 0);
								if (bVar34)
								{
									if (func_69(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_352(iParam5))
								{
									func_351(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_351(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
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
							if (func_703(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_27();
							}
							if (func_375(iVar35))
							{
								if (func_703(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_366(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_41(iVar35) };
									iVar37 = func_360(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_353(iVar35, 1);
									if (bVar34)
									{
										if (func_69(iVar35, 1))
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
									func_335(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_332(uParam3, uParam1);
						}
						func_3(&(uParam3->f_21));
						func_331();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_330(uParam3, uParam1);
							func_329(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_330(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_325(uParam3))
						{
							Global_1574291 = 1;
						}
						func_323(uParam3);
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
			func_331();
			func_386(0);
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

void func_323(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_324(0);
	}
}

void func_324(bool bParam0)
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

int func_325(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_27() && func_703(iVar15, 0, 1))
	{
		Var2 = { func_41(iVar15) };
		iVar1 = func_328(uParam0, uParam0->f_37);
		if (func_327(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_326(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_326(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_326(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_326(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_326(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_326(uParam0, iVar0, 0);
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

void func_326(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_328(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_329(var uParam0, int iParam1, int iParam2)
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

void func_330(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_331()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_332(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_27())
		{
			if (func_703(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_334(uParam0->f_38[iVar0 /*2*/], 0);
					func_333(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_333(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_334(int iParam0, bool bParam1)
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

void func_335(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_350() && iParam4 < func_349())
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
				func_348("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_348(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_348("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_348("");
			if (uParam3->f_108 == 6)
			{
				func_348("");
			}
			else
			{
				func_348(&sParam5);
			}
			func_340(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_339(uParam3))
			{
				func_338("DPAD_FRIEND");
			}
			else if (func_337(uParam3))
			{
				func_338("DPAD_FRIEND");
			}
			else if (func_336(uParam3))
			{
				func_338("DPAD_CREW");
			}
			else
			{
				func_338("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_336(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_337(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_338(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_339(var uParam0)
{
	if (func_337(uParam0) && func_336(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_340(var uParam0, int iParam1)
{
	if (func_347(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_344(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_341())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_341()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_342() || func_164())
		{
			return 1;
		}
	}
	return 0;
}

int func_342()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_164();
	}
	return func_343(Global_1638223.f_93532);
}

int func_343(int iParam0)
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

int func_344(int iParam0)
{
	if ((func_703(iParam0, 0, 1) && func_345()) && func_65(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_345()
{
	if (func_300(unk_0x0FFED3E94261A832()) || func_346())
	{
		return 0;
	}
	return 1;
}

int func_346()
{
	switch (func_377(unk_0x0FFED3E94261A832()))
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

int func_347(int iParam0)
{
	if (func_341())
	{
		if (func_703(iParam0, 0, 1))
		{
			return func_70(iParam0);
		}
	}
	if ((func_703(iParam0, 0, 1) && func_345()) && func_67(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_348(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_349()
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

int func_350()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_351(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_350() && iParam3 < func_349())
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
					func_348("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_338(sParam16);
				}
				else
				{
					func_348(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_348("");
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
				if (func_376())
				{
					func_348("");
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
						func_338(&(uParam2->f_104));
					}
					else
					{
						func_348("");
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
					func_348("");
				}
				if (uParam2->f_108 == 6)
				{
					func_348("");
				}
				else
				{
					func_348(&sParam4);
				}
				func_340(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_348("");
					func_348("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_339(uParam2))
				{
					func_338("DPAD_FRIEND");
				}
				else if (func_337(uParam2))
				{
					func_338("DPAD_FRIEND");
				}
				else if (func_336(uParam2))
				{
					func_338("DPAD_CREW");
				}
				else
				{
					func_338("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_352(int iParam0)
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

int func_353(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_300(iParam0)) && !func_299(iParam0))
	{
		iVar0 = func_178();
	}
	iVar1 = func_161(iParam0);
	if (!iVar1 == -1)
	{
		return func_159(iVar1);
	}
	return iVar0;
}

char* func_354(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_355(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_359(iParam3))
	{
		*fParam1 = (func_356(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_352(iParam3))
	{
		*fParam1 = (func_356(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_356(int iParam0, int iParam1)
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
				return func_358(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_357(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_357(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_358(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_359(int iParam0)
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

int func_360(int iParam0)
{
	int iVar0;
	
	iVar0 = func_363(iParam0);
	if (iVar0 == -1)
	{
		func_361(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_361(int iParam0, bool bParam1)
{
	if (!func_703(iParam0, 0, 1))
	{
		return;
	}
	if (func_363(iParam0) != -1)
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
	if (func_362(iParam0))
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

int func_362(int iParam0)
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

int func_363(int iParam0)
{
	int iVar0;
	
	if (!func_703(iParam0, 0, 1))
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
			func_364(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_364(int iParam0)
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
	func_365(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_365(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_366(int iParam0)
{
	struct<4> Var0;
	
	if (func_703(iParam0, 0, 1))
	{
		Global_2484572 = { func_41(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_327(Global_2484572))
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
		if (func_370(&Global_2484572))
		{
			Global_2484502 = { func_368(iParam0) };
			func_367(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_367(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_368(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_369(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_41(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_369(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_370(var uParam0)
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

int func_371(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_199(iParam0) || func_374(iParam0)) || func_225(iParam0))
		{
			return 0;
		}
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	if ((!func_372(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_384(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0)
{
	if (func_703(iParam0, 0, 1))
	{
		if (func_703(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_373(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

int func_374(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_375(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
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

int func_376()
{
	switch (func_377(unk_0x0FFED3E94261A832()))
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
	switch (func_221(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_299(unk_0x0FFED3E94261A832()))
	{
		switch (func_377(unk_0x0FFED3E94261A832()))
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

int func_377(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_378(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_379(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_379(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_379(int iParam0)
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
	return func_380(iParam0, 0);
	return 0;
}

int func_380(int iParam0, int iParam1)
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

void func_381(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_703(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_384(iVar1))
				{
					if (func_382(iVar1, iParam1, 0))
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

int func_382(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_383(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_27())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_383(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_27())
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

bool func_384(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

void func_385(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_386(bool bParam0)
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

void func_387()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_209())
		{
			func_388();
		}
	}
}

void func_388()
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

int func_389()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_209())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_209())
	{
		return 1;
	}
	return 0;
}

int func_390()
{
	if (func_209())
	{
		if (func_46(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_391()
{
	if (func_209())
	{
		if (func_56(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_392(int iParam0)
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

int func_393(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_435(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_434();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_433())
		{
			if (func_432() > 0 && Global_1574110)
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
		if (!func_423())
		{
			func_422(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_422(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_432() == 1)
		{
			func_421(bVar6, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_422(uParam0, uParam2, 0);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_432() == 0 && !bParam5))
		{
			func_422(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_420();
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
					func_420();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_421(bVar6, uParam0, 0))
				{
					func_385(uParam0);
					uVar4 = func_418(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_416(iParam1) };
					if (bParam4)
					{
						func_413(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_407(uParam0, func_410(uParam2), func_408(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_399(uParam0, func_401(uParam2), func_400(), -1);
					}
					else if (func_341())
					{
						uParam2->f_34 = Global_1574109;
						func_413(uParam0, uVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_413(uParam0, uVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_394(iParam1);
						func_413(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
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

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_398())
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
			if (func_397(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_396(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_395(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_395(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_396(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_397(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_398()
{
	return Global_1638223.f_1 == 0;
}

void func_399(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_338(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_338("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_400()
{
	switch (func_377(unk_0x0FFED3E94261A832()))
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

char* func_401(var uParam0)
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
	switch (func_377(unk_0x0FFED3E94261A832()))
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
			if (func_403())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_107(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_107(1))
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
			if (func_402(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_402(int iParam0)
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

bool func_403()
{
	return (func_406() && func_404(func_405()));
}

int func_404(int iParam0)
{
	return func_67(iParam0, 1);
}

int func_405()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_406()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_407(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(uParam2))
		{
			func_338(uParam1);
		}
		else if (func_221(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(uParam1);
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
		func_338("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_408(var uParam0)
{
	int iVar0;
	
	iVar0 = func_221(unk_0x0FFED3E94261A832());
	if (func_409())
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
			switch (func_131())
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

bool func_409()
{
	return Global_1592329;
}

char* func_410(var uParam0)
{
	int iVar0;
	
	iVar0 = func_221(unk_0x0FFED3E94261A832());
	if (func_409())
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
			if (func_412() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_412() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_131())
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
			if (func_411() == 1)
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

int func_411()
{
	return Global_2497344.f_4753;
}

int func_412()
{
	if (func_221(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_413(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_348(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(uParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_338(sParam1);
		}
		if (func_433() && iParam6)
		{
			if (func_415())
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
			func_338(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_414(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_414(int iParam0)
{
	if (func_397(iParam0) || func_396(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_415()
{
	return Global_1574110;
}

struct<4> func_416(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_417(unk_0x0FFED3E94261A832()) || func_395(unk_0x0FFED3E94261A832()))
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
	if (func_341() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_417(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_418(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_341() || unk_0x58478145CAF8429C(uParam1)))
	{
		uVar0 = func_419();
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

char* func_419()
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

void func_420()
{
	Global_36716 = 1;
}

bool func_421(bool bParam0, var uParam1, bool bParam2)
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

void func_422(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_331();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
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

int func_423()
{
	if (func_431())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (!func_429())
	{
		return 0;
	}
	if (!func_287())
	{
		return 0;
	}
	if (func_428(8, -1))
	{
		return 0;
	}
	if (func_432() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	else if (!func_215(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_427(1) || func_425(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_643(unk_0x0FFED3E94261A832()))
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
	if (func_424(0))
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

bool func_424(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

int func_425(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_426(unk_0x2A5EB8B0FE590B91()))
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

int func_426(int iParam0)
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

bool func_427(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_428(int iParam0, int iParam1)
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

int func_429()
{
	if (func_430())
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

bool func_430()
{
	return Global_1312438;
}

bool func_431()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_432()
{
	return Global_1351508.f_68;
}

int func_433()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_434()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_435(int iParam0)
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

int func_436()
{
	if (func_439())
	{
		return 1;
	}
	if (func_225(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_409())
	{
		return 1;
	}
	if (func_300(unk_0x0FFED3E94261A832()))
	{
		switch (func_221(unk_0x0FFED3E94261A832()))
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
				if (!func_437(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_437(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_437(unk_0x0FFED3E94261A832()))
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

bool func_437(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_438(int iParam0)
{
	if ((iParam0 == 26 && func_300(unk_0x0FFED3E94261A832())) && !func_299(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_31(unk_0x0FFED3E94261A832(), 0) && func_299(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_291(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_439()
{
	if (func_440(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_440(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_36(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

void func_441()
{
	if (!func_18(&uLocal_583))
	{
		if (func_442(unk_0x88641E5BC172153A()))
		{
			func_11(&uLocal_583, 0, 1);
		}
	}
}

int func_442(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Local_419[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_419[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_419[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_419[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_443()
{
	if (func_266(1, 1))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 8))
		{
			unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 8);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 8))
	{
		unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 8);
	}
	if (func_266(0, 1))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 9))
		{
			unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 9))
	{
		unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 9);
	}
	if (func_266(1, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 10))
		{
			unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 10);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 10))
	{
		unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 10);
	}
	if (func_266(0, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 11))
		{
			unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 11);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 11))
	{
		unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 11);
	}
}

void func_444()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_451(iVar0);
		func_445(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_445(int iParam0)
{
	if (func_266(0, 0) || iLocal_3441 == -1)
	{
		func_80(iParam0);
		func_82(iParam0);
		func_77(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_222(unk_0x88641E5BC172153A(), iParam0))
		{
			func_82(iParam0);
		}
		else
		{
			func_447(iParam0);
		}
	}
	else
	{
		func_82(iParam0);
	}
	if (iLocal_3442 != func_78(iParam0, 1))
	{
		switch (iLocal_3443)
		{
			case 0:
				func_77(iParam0, -1);
				iLocal_3443++;
				break;
			
			case 1:
				func_446(iParam0);
				iLocal_3442 = func_78(iParam0, 1);
				iLocal_3443 = 0;
				break;
			}
	}
}

void func_446(int iParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_581, func_470(iParam0)))
	{
		unk_0xFC285DAA1CD81983(func_79(iParam0, 0), 1, func_78(iParam0, 1));
		if (func_470(iParam0) == 4)
		{
			unk_0xFC285DAA1CD81983(func_79(iParam0, 1), 1, func_78(iParam0, 1));
		}
		unk_0xF6082E2ADA1C795B(&iLocal_581, func_470(iParam0));
	}
}

void func_447(int iParam0)
{
	if (!unk_0xBDD3EABACAB97D09(func_83(iParam0)))
	{
		func_450(iParam0, unk_0x9EDB165CAADCAB2C(func_320(iParam0)));
		unk_0x697F84823ACFF84C(func_83(iParam0), 12);
		if (unk_0x9418F0AE636D9770("KOTC_AREANAME"))
		{
			unk_0xA6B842B66643C116(func_83(iParam0), "KOTC_AREANAME");
		}
		unk_0x9FD1808EF916E312(func_83(iParam0), 438);
		func_448(&(Local_1266[iParam0 /*68*/].f_27), func_78(iParam0, 1));
		if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 13))
		{
			unk_0xA4F6216A8431C2E8(Local_1266[iParam0 /*68*/].f_27, 1);
			unk_0x43FC07DB1C2FA4B3(Local_1266[iParam0 /*68*/].f_27, 7000);
			unk_0xF6082E2ADA1C795B(&iLocal_580, 13);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 12))
		{
			unk_0x847E5C2DF89423C1();
			unk_0xF6082E2ADA1C795B(&iLocal_580, 12);
		}
		unk_0xE1E81CBB89115254(func_83(iParam0), 1);
		unk_0xE329891A5111516C(func_83(iParam0), 1);
	}
	else
	{
		func_448(&(Local_1266[iParam0 /*68*/].f_27), func_78(iParam0, 0));
		if (unk_0xBDD3EABACAB97D09(func_83(iParam0)))
		{
			if (unk_0x9418F0AE636D9770("KOTC_AREANAME"))
			{
				unk_0xA6B842B66643C116(func_83(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_448(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		uVar0 = func_449(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, uVar0);
	}
}

int func_449(int iParam0)
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

void func_450(int iParam0, var uParam1)
{
	Local_1266[iParam0 /*68*/].f_27 = uParam1;
}

void func_451(int iParam0)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	var uVar21[3];
	struct<3> Var25[3];
	var uVar35[3];
	bool bVar39;
	float fVar40;
	float fVar41;
	
	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_470(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_461(iParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_460(iParam0, iVar0) };
		uVar21[iVar0] = func_459(iParam0, iVar0);
		func_458(iParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (unk_0xAA4F14DA15DB0B51(iLocal_3434, unk_0x88641E5BC172153A()))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, Local_585[unk_0x88641E5BC172153A() /*18*/].f_1))
				{
					if (!func_266(1, 1))
					{
						if (iLocal_3441 == unk_0x88641E5BC172153A())
						{
							if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
							{
								if ((!func_457(Var1[iVar0 /*3*/]) && !func_457(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (unk_0x9A46207BB68ED2F0(Local_1162[unk_0x0FFED3E94261A832() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], 0, 1, 0))
									{
										bVar39 = true;
									}
								}
								if (func_470(iParam0) == 7)
								{
									if (func_456(iParam0) < 0f)
									{
										if (func_456(iParam0) <= fVar40 && func_456(iParam0) >= (fVar40 * -1f))
										{
											if (func_455(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_457(Var25[iVar0 /*3*/]))
								{
									if (func_454(iParam0, iVar0) < 0f)
									{
										if (func_454(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_453(iParam0, iVar0) <= uVar35[iVar0])
											{
												bVar39 = true;
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
		iVar0++;
	}
	func_452(iParam0, bVar39);
}

void func_452(int iParam0, bool bParam1)
{
	Local_419[unk_0x88641E5BC172153A() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_3), iParam0);
	}
}

float func_453(int iParam0, int iParam1)
{
	return Local_1266[iParam0 /*68*/].f_41[iParam1];
}

float func_454(int iParam0, int iParam1)
{
	return Local_1266[iParam0 /*68*/].f_45[iParam1];
}

float func_455(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_38;
}

float func_456(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_39;
}

int func_457(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_458(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_470(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_470(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_470(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_459(int iParam0, int iParam1)
{
	return Local_1266[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_460(int iParam0, int iParam1)
{
	return Local_1266[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_461(int iParam0, int iParam1)
{
	return Local_1266[iParam0 /*68*/][iParam1 /*3*/];
}

void func_462(int iParam0)
{
	Local_419[unk_0x88641E5BC172153A() /*5*/] = iParam0;
}

void func_463(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_464("kwUfKUus6EuQyNSL8KpY-w");
					func_464("yMTOFLfO2UKwzKrmgPP7kg");
					func_464("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_464("tP5HSeCA0UiHnkRzakdO2Q");
					func_464("uEkrqoerQEmQ0uZRtp4rkw");
					func_464("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_464("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_464("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_464("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_464("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_464("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_464("uEkrqoerQEmQ0uZRtp4rkw");
					func_464("92t91kL3Wkqvl2Kc82cNSA");
					func_464("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_464("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_464("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_464("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_464("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_464("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_464("fOfm7nzMLkav0ldcSCNAzA");
					func_464("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_464("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_464("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_464("Ma78E44OMkGfYPmCPZXUNA");
					func_464("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_464("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_464("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_464("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_464("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_464("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_464("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_464("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_464("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_464("3AAj-muvN0iHI5IMyGlboA");
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
							func_464("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_464("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_464("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_464("fOfm7nzMLkav0ldcSCNAzA");
							func_464("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_464("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_464("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_464("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_464("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_464("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_464("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_464("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_464("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_464("fOfm7nzMLkav0ldcSCNAzA");
							func_464("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_464("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_464("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_464("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_464("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_464("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_464("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_464("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_464("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_464("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_464("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_464("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_464("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_464("aGBjo2rKi0yMDLl3a2ATGA");
									func_464("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_464("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_464("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_464("f2lnL6wZPkGWUowu0yLm1Q");
									func_464("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_464("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_464("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_464("W-OJzHlM-0ym9PsIASYZtw");
									func_464("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_464("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_464("TjGz31AMYE6bGCjAIitu6w");
									func_464("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_464("QmlvLMLCwkOvoZlkAstYxw");
									func_464("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_464("BktATxH9R0Wp2x0kWSbqjw");
									func_464("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_464("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_464("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_464("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_464("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_464("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_464("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_464("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_464("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_464("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_464("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_464(char* sParam0)
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
			if (func_465(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
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

int func_465(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_467(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_466(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_466(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_467(uParam0);
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

int func_467(var uParam0)
{
	int iVar0;
	
	if (unk_0x58478145CAF8429C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_469(uParam0->f_1))
	{
		if (func_468(uParam0))
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

int func_468(var uParam0)
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

bool func_469(int iParam0)
{
	return iParam0 == 9999;
}

int func_470(int iParam0)
{
	return Local_121.f_6[iParam0 /*204*/].f_69;
}

int func_471()
{
	return Local_121.f_0;
}

int func_472(int iParam0)
{
	return Local_419[iParam0 /*5*/];
}

void func_473()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_470(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_491(iVar2, iVar3, func_492(iVar2, iVar3));
					func_489(iVar2, iVar3, func_490(iVar2, iVar3));
					func_487(iVar2, func_488(iVar2));
					func_485(iVar2, iVar3, func_486(iVar2, iVar3));
					unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			if (func_484(iVar2) <= 1)
			{
				func_483(iVar2, 0);
			}
			else
			{
				func_483(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_132(iVar2))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_580, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (unk_0x62E688B72E3C57B0())
			{
				func_483(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_132(iVar2))
			{
				if (unk_0x62E688B72E3C57B0())
				{
					if (iVar0 > -1)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_3434, iVar0))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 0);
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_3433, iVar0))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 0);
						}
						if (unk_0xAA4F14DA15DB0B51(iLocal_3435, iVar0))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 0);
						}
						if (!func_222(iVar0, iVar2))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_580, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3434, iVar0))
				{
					bVar5 = true;
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3433, iVar1))
				{
					bVar5 = true;
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_3435, iVar1))
				{
					bVar5 = true;
				}
				if (!func_222(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0x62E688B72E3C57B0())
			{
				func_482(iVar2, -1);
				func_481(iVar2, -1);
			}
			func_480(iVar2, uVar4);
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_580, 0))
		{
			if (func_479(iVar2) > -1 && func_478(iVar2) > -1)
			{
				if (unk_0x62E688B72E3C57B0())
				{
					func_482(iVar2, func_479(iVar2));
					func_481(iVar2, func_478(iVar2));
					func_480(iVar2, func_477(iVar2));
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_6[iVar2 /*204*/].f_203, func_479(iVar2)))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_6[iVar2 /*204*/].f_203), func_479(iVar2));
					}
				}
			}
		}
		if (unk_0x62E688B72E3C57B0())
		{
			func_474(iVar2);
		}
		iVar2++;
	}
}

void func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar16;
	var uVar17;
	var uVar18;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar16 = Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_121.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar16;
					Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar17;
					Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_121.f_283 == Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_121.f_283 = Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 486078405;
						Var2.f_10 = unk_0x7C214DA899F05536(Local_121.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_475(Var2, func_476(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_475(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_476(int iParam0)
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
			if (func_703(iVar2, 0, 0))
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

var func_477(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_31;
}

int func_478(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_35;
}

int func_479(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_34;
}

void func_480(int iParam0, var uParam1)
{
	Local_1266[iParam0 /*68*/].f_30 = uParam1;
}

void func_481(int iParam0, int iParam1)
{
	Local_121.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_482(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_121.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_483(int iParam0, int iParam1)
{
	Local_121.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_484(int iParam0)
{
	return Local_1266[iParam0 /*68*/].f_37;
}

void func_485(int iParam0, int iParam1, var uParam2)
{
	Local_1266[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_486(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_470(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_470(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_470(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_487(int iParam0, struct<3> Param1)
{
	Local_1266[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_488(int iParam0)
{
	switch (func_470(iParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_489(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1266[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_490(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_470(iParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_470(iParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_470(iParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_491(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1266[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_492(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_470(iParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_470(iParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_470(iParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_493()
{
	func_495();
	iLocal_3432++;
	func_494();
}

void func_494()
{
	if (iLocal_3432 >= (unk_0x244673FE98A43CA3() - 1))
	{
		iLocal_3432 = 0;
	}
}

void func_495()
{
	if (iLocal_3432 == 0)
	{
	}
}

void func_496()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	float fVar32;
	float fVar33;
	struct<3> Var34;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	int iVar44;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Local_1162[iVar1 /*3*/] = func_27();
		Local_1162[iVar1 /*3*/].f_1 = -1;
		Local_1162[iVar1 /*3*/].f_2 = uVar3;
		unk_0x507FE690B1271947(&iLocal_3433, iVar1);
		unk_0x507FE690B1271947(&iLocal_3435, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_585[iVar0 /*18*/] = func_524();
		Local_585[iVar0 /*18*/].f_1 = -1;
		unk_0x507FE690B1271947(&iLocal_3434, iVar0);
		if (unk_0x62E688B72E3C57B0())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				unk_0x507FE690B1271947(&(Local_121.f_6[iVar25 /*204*/].f_73), iVar0);
				iVar25++;
			}
		}
		Local_585[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_523(iVar25, 0);
		func_522(iVar25, 0);
		func_521(iVar25, 0f);
		func_520(iVar25, 0f);
		func_519(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_518(iVar25, iVar28, 0f);
			func_517(iVar25, iVar28, 0f);
			func_516(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(iVar0))
		{
			Local_585[iVar0 /*18*/] = iVar0;
			unk_0xF6082E2ADA1C795B(&iLocal_3434, iVar0);
			iVar2 = unk_0x2AFA21CE4322B48D(Local_585[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_703(iVar2, 0, 1))
			{
				Local_1162[iVar1 /*3*/] = iVar2;
				Local_585[iVar0 /*18*/].f_1 = iVar1;
				Local_1162[iVar1 /*3*/].f_1 = iVar0;
				Local_1162[iVar1 /*3*/].f_2 = unk_0x1E199569E0295838(iVar2);
				StringCopy(&(Local_585[iVar0 /*18*/].f_2), unk_0x4325D353D7D27B34(iVar2), 64);
				iVar27++;
				if (func_442(iVar0))
				{
					iVar29++;
				}
				unk_0xF6082E2ADA1C795B(&iLocal_3433, iVar1);
				if ((unk_0xA9A04898798AE9E6(Local_1162[iVar1 /*3*/].f_2, 0) || unk_0x769F0F6444C1ABE0(Local_1162[iVar1 /*3*/].f_2)) || !unk_0xB8B285A272E7A79E(Local_1162[iVar1 /*3*/]))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_3435, iVar1);
				}
				if (unk_0x62E688B72E3C57B0())
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 0))
					{
						bVar30 = false;
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_514(iVar1, 2);
				if (func_225(iVar1))
				{
					if (unk_0x62E688B72E3C57B0())
					{
						func_512(iVar0);
					}
				}
				if (func_113(iVar1))
				{
					if (unk_0x62E688B72E3C57B0())
					{
						func_512(iVar0);
					}
				}
				if (func_224(iVar1))
				{
					if (unk_0x62E688B72E3C57B0())
					{
						func_512(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0x507FE690B1271947(&iLocal_3434, iVar0);
			if (func_617() <= 1)
			{
				if (unk_0x62E688B72E3C57B0())
				{
					func_512(iVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_213, 1))
			{
				if (unk_0x62E688B72E3C57B0())
				{
					func_511(iVar0, iVar25);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(iLocal_3434, iVar0))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_3433, iVar1))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_213, 1))
					{
						if (unk_0x62E688B72E3C57B0())
						{
							func_510(iVar0, iVar1, iVar25, func_125(iVar25, iVar0));
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, iVar1))
					{
						if (iVar0 == unk_0x88641E5BC172153A())
						{
							fVar32 = func_509(Local_1162[iVar1 /*3*/].f_2, func_320(iVar25), 0);
							fVar33 = func_509(Local_1162[iVar1 /*3*/].f_2, func_320(iVar25), 1);
							Var34 = { unk_0xD1EE0E9FCD74A37B(Local_1162[iVar1 /*3*/].f_2, 1) };
							fVar37 = (Local_1266[iVar25 /*68*/].f_24.f_2 - Var34.f_2);
							func_521(iVar25, fVar32);
							func_520(iVar25, fVar37);
							func_519(iVar25, fVar33);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_458(iVar25, iVar28, &Var20, &fVar23);
								if (!func_457(Var20))
								{
									fVar38 = func_509(Local_1162[iVar1 /*3*/].f_2, Var20, 0);
									fVar39 = func_509(Local_1162[iVar1 /*3*/].f_2, Var20, 1);
									fVar40 = (Var20.f_2 - Var34.f_2);
									func_518(iVar25, iVar28, fVar38);
									func_517(iVar25, iVar28, fVar40);
									func_516(iVar25, iVar28, fVar39);
								}
								iVar28++;
							}
						}
						if (func_222(iVar0, iVar25))
						{
							func_523(iVar25, 1);
							iVar26 = func_484(iVar25);
							iVar26++;
							func_522(iVar25, iVar26);
							if (func_8(iVar25) != iVar0 && func_7(iVar25) != iVar1)
							{
								if (func_479(iVar25) == -1)
								{
									func_573(iVar25, iVar0);
								}
								if (func_478(iVar25) == -1)
								{
									func_572(iVar25, iVar1);
								}
								func_571(iVar25, Local_1162[iVar1 /*3*/].f_2);
							}
							if (unk_0x62E688B72E3C57B0())
							{
								unk_0xF6082E2ADA1C795B(&(Local_121.f_6[iVar25 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x88641E5BC172153A())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, iVar1))
						{
							if (func_205(iVar25) <= IntToFloat(Global_262145.f_10156))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 12))
								{
									unk_0xF6082E2ADA1C795B(&(Local_419[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_205(iVar25) >= IntToFloat(Global_262145.f_10157))
							{
								if (unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 12))
								{
									unk_0x507FE690B1271947(&(Local_419[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_223(1, 0))
							{
								if (func_205(iVar25) <= IntToFloat(Global_262145.f_10156))
								{
									if (!unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 3))
									{
										unk_0xF6082E2ADA1C795B(&(Local_419[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_205(iVar25) >= IntToFloat(Global_262145.f_10157))
								{
									if (unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 3))
									{
										unk_0x507FE690B1271947(&(Local_419[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_419[iVar0 /*5*/].f_4, 3))
							{
								unk_0x507FE690B1271947(&(Local_419[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (unk_0x0FFED3E94261A832() != Local_1162[iVar1 /*3*/])
				{
					if (func_179(unk_0x0FFED3E94261A832(), Local_1162[iVar1 /*3*/]))
					{
						iVar24 = func_148(unk_0x0FFED3E94261A832(), -2, 0, 0);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, iVar1))
				{
					if (func_266(0, 0))
					{
						func_508(iVar1);
					}
					else if (func_7(iVar25) != iVar1)
					{
						func_508(iVar1);
					}
					else if (func_617() != 1)
					{
						func_508(iVar1);
					}
					else
					{
						func_503(iVar1);
						if (iVar0 != unk_0x88641E5BC172153A())
						{
							if (func_170(unk_0x88641E5BC172153A()))
							{
								unk_0xF9C830438D0097FD(iVar24, &uVar41, &uVar42, &uVar43, &iVar44);
								iVar44 = 100;
								unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(Local_1162[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar41, uVar42, uVar43, iVar44, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_703(Local_1162[iVar1 /*3*/], 1, 1))
				{
					if (func_502(Local_1162[iVar1 /*3*/]))
					{
						func_497(Local_1162[iVar1 /*3*/], func_449(iVar24), func_498(iVar0, iVar1, iVar25));
					}
				}
			}
			iVar25++;
		}
		iVar0++;
	}
	if (unk_0x62E688B72E3C57B0())
	{
		if (bVar30)
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_213), 0);
		}
		else
		{
			unk_0x507FE690B1271947(&(Local_121.f_213), 0);
		}
		if (bVar31)
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_213), 1);
		}
		else
		{
			unk_0x507FE690B1271947(&(Local_121.f_213), 1);
		}
	}
	if (iVar29 > iLocal_582)
	{
		iLocal_582 = iVar29;
	}
	if (iVar27 > iLocal_3436)
	{
		iLocal_3436 = iVar27;
	}
	else
	{
		Local_121.f_216 = (iLocal_3436 - iVar27);
	}
}

void func_497(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_194())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_502(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = uParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	if (func_266(0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x88641E5BC172153A())
	{
		return 0;
	}
	if (func_499(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (unk_0x88641E5BC172153A() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_499(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return func_116();
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_241.f_136[func_501(10) /*33*/][iParam0], func_500(10));
}

int func_500(int iParam0)
{
	return (iParam0 % 32);
}

int func_501(int iParam0)
{
	return (iParam0 / 32);
}

int func_502(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

void func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_3433, iParam0))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, iParam0))
			{
				if (func_179(unk_0x0FFED3E94261A832(), Local_1162[iParam0 /*3*/]))
				{
					iVar0 = func_148(unk_0x0FFED3E94261A832(), -2, 0, 0);
				}
				func_506(Local_1162[iParam0 /*3*/], 439, 1);
				if (func_502(Local_1162[iParam0 /*3*/]))
				{
					func_497(Local_1162[iParam0 /*3*/], func_449(iVar0), 1);
				}
				func_504(Local_1162[iParam0 /*3*/], 1, 1);
				unk_0xF6082E2ADA1C795B(&uLocal_3440, iParam0);
			}
		}
	}
}

void func_504(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_703(iParam0, 1, 1))
		{
			Global_2415029.f_706[iParam0] = unk_0xFF09208EC90C94CB();
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_364), iParam0);
			func_505(iParam0, bParam2);
		}
	}
	else
	{
		func_505(iParam0, bParam2);
		unk_0x507FE690B1271947(&(Global_2415029.f_364), iParam0);
		Global_2415029.f_706[iParam0] = -1;
	}
}

void func_505(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_2415029.f_365), iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2415029.f_365), iParam0);
	}
	if (unk_0xBDD3EABACAB97D09(Global_2415029[iParam0]))
	{
		if (bParam1)
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 0);
		}
		else
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 1);
		}
	}
}

void func_506(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_194())
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
				func_507();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_507();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_507()
{
	Global_2415029.f_1002 = 1;
}

void func_508(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (unk_0xAA4F14DA15DB0B51(uLocal_3440, iParam0))
	{
		if (iParam0 > -1)
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_3433, iParam0))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3435, iParam0))
				{
					if (unk_0x0FFED3E94261A832() != Local_1162[iParam0 /*3*/])
					{
						if (func_179(unk_0x0FFED3E94261A832(), Local_1162[iParam0 /*3*/]))
						{
							iVar0 = func_148(unk_0x0FFED3E94261A832(), -2, 0, 0);
						}
					}
					func_506(Local_1162[iParam0 /*3*/], 439, 0);
					if (func_502(Local_1162[iParam0 /*3*/]))
					{
						func_497(Local_1162[iParam0 /*3*/], func_449(iVar0), 0);
					}
					func_504(Local_1162[iParam0 /*3*/], 0, 0);
					unk_0x507FE690B1271947(&iLocal_3440, iParam0);
				}
			}
		}
	}
}

var func_509(int iParam0, struct<3> Param1, int iParam4)
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

void func_510(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_121.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_121.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_121.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_121.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_511(int iParam0, int iParam1)
{
	Local_121.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_121.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_121.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_27();
	Local_121.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_126(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_513(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_121.f_217[iVar1] > 0f)
			{
				if (Local_121.f_250[iVar1] == iParam0)
				{
					Local_121.f_217[iVar1] = 0f;
					Local_121.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_513(int iParam0, int iParam1, float fParam2)
{
	Local_121.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_514(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1574379.f_18)))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_2, iParam0))
	{
		if (Global_1574379 < iParam1 && unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 1))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 0);
			return;
		}
		if (Global_1574379 != 0)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 1);
		}
		Global_1574379 = 0;
		Global_1574379.f_2 = 0;
	}
	unk_0xF6082E2ADA1C795B(&(Global_1574379.f_2), iParam0);
	bVar0 = true;
	if (func_199(iParam0))
	{
		bVar0 = false;
	}
	if (func_515(iParam0))
	{
		bVar0 = false;
	}
	if (func_36(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_225(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574379++;
	}
}

bool func_515(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10);
}

void func_516(int iParam0, int iParam1, float fParam2)
{
	Local_1266[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_517(int iParam0, int iParam1, float fParam2)
{
	Local_1266[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_518(int iParam0, int iParam1, float fParam2)
{
	Local_1266[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_519(int iParam0, float fParam1)
{
	Local_1266[iParam0 /*68*/].f_40 = fParam1;
}

void func_520(int iParam0, float fParam1)
{
	Local_1266[iParam0 /*68*/].f_39 = fParam1;
}

void func_521(int iParam0, float fParam1)
{
	Local_1266[iParam0 /*68*/].f_38 = fParam1;
}

void func_522(int iParam0, int iParam1)
{
	Local_1266[iParam0 /*68*/].f_37 = iParam1;
}

void func_523(int iParam0, int iParam1)
{
	Local_1266[iParam0 /*68*/].f_36 = iParam1;
}

int func_524()
{
	return -1;
}

void func_525()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 182)
		{
			func_526(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_526(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<4> Var11;
	float fVar21;
	struct<14> Var22;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	unk_0xD9298AF91B40C8C4(1, iParam0, &Var11, 10);
	if (unk_0x2137828D03306CAF(Var11.f_0))
	{
		if (unk_0xEE46DE31F43DCAF1(Var11.f_0))
		{
			uVar0 = unk_0xC3A7AD90290CA72E(Var11.f_0);
			if (unk_0xDB61DD81432BD145(uVar0))
			{
				iVar2 = unk_0xB0BB7458627D389F(uVar0);
				if (unk_0x76BCE6C7B20502DA(iVar2))
				{
					iVar4 = unk_0x675E1E93DBDAF30B(iVar2);
					if (unk_0x9E8AB4FC19962A90(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (unk_0x2137828D03306CAF(Var11.f_1))
					{
						if (unk_0xEE46DE31F43DCAF1(Var11.f_1))
						{
							iVar1 = unk_0xC3A7AD90290CA72E(Var11.f_1);
							if (unk_0xDB61DD81432BD145(iVar1))
							{
								iVar3 = unk_0xB0BB7458627D389F(iVar1);
								iVar8 = iVar3;
								if (unk_0x76BCE6C7B20502DA(iVar3))
								{
									iVar5 = unk_0x675E1E93DBDAF30B(iVar3);
									if (unk_0x9E8AB4FC19962A90(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_223(1, 0))
													{
														if (iVar7 == unk_0x88641E5BC172153A())
														{
															if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 7))
															{
																unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == unk_0x88641E5BC172153A())
														{
															if (iLocal_3439 < func_570())
															{
																iLocal_3439++;
																func_530(0, iVar1, "", -1859646258, 2131309714, func_569(), 1, -1, 0, 0, 0);
																Local_405.f_7 = (Local_405.f_7 + func_569());
															}
															else
															{
																iLocal_3439++;
															}
														}
														if (unk_0x62E688B72E3C57B0())
														{
															fVar21 = func_126(iVar9, iVar6);
															fVar21 = (fVar21 + IntToFloat(Global_262145.f_9853));
															func_513(iVar9, iVar6, fVar21);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x88641E5BC172153A())
													{
														if (!func_223(1, 0))
														{
															if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 6))
															{
																unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 6);
															}
															if (!unk_0xAA4F14DA15DB0B51(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
															{
																unk_0xF6082E2ADA1C795B(&(Local_419[unk_0x88641E5BC172153A() /*5*/].f_4), 2);
																func_210(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_3437 < func_529())
															{
																iLocal_3437++;
																func_530(0, iVar1, "", -1859646258, 2131309714, func_528(), 1, -1, 0, 0, 0);
																Local_405.f_7 = (Local_405.f_7 + func_528());
															}
															else
															{
																iLocal_3437++;
															}
														}
													}
													if (iVar7 == unk_0x88641E5BC172153A())
													{
														iLocal_3438++;
													}
													if (func_222(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (unk_0x62E688B72E3C57B0())
															{
																if (func_479(iVar9) == -1)
																{
																	func_573(iVar9, iVar6);
																}
																if (func_478(iVar9) == -1)
																{
																	func_572(iVar9, iVar8);
																}
																unk_0xF6082E2ADA1C795B(&iLocal_580, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (unk_0x62E688B72E3C57B0())
														{
															Var22.f_2 = -832738911;
															Var22.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (unk_0xAA4F14DA15DB0B51(iLocal_3434, iVar10))
																{
																	if (unk_0xAA4F14DA15DB0B51(iLocal_3433, Local_585[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0xAA4F14DA15DB0B51(Local_419[iVar10 /*5*/].f_4, 9) && !unk_0xAA4F14DA15DB0B51(Local_419[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_170(iVar10))
																			{
																				func_475(Var22, func_527(Local_585[iVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
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

int func_527(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

int func_528()
{
	return Global_262145.f_9658;
}

int func_529()
{
	return Global_262145.f_9660;
}

int func_530(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_531(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_531(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_541(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_537(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_532(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_532(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_535(iParam0, 1) };
	if (iParam0 == func_534(unk_0x2A5EB8B0FE590B91()))
	{
		func_533(1);
	}
	func_537(Var0, iParam1, 0, sParam2, uParam3);
}

void func_533(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_534(var uParam0)
{
	return uParam0;
}

Vector3 func_535(int iParam0, bool bParam1)
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
	if (iParam0 == func_536(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
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

int func_536(var uParam0)
{
	return uParam0;
}

void func_537(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_540(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_539();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_538();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), uParam6);
		}
	}
}

int func_538()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_539()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_540(struct<3> Param0, var uParam3, var uParam4)
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

var func_541(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_542(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_542(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_568(unk_0x0FFED3E94261A832()) || func_567(unk_0x0FFED3E94261A832()))
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
	if (func_112(uParam2))
	{
	}
	if (func_566())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_564(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_563(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_560(0, &iVar1);
					break;
				
				case 3:
					func_560(1, &iVar1);
					break;
				
				case 1:
					func_557(&iVar1);
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
			func_233(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_549((func_556(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_233(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_545(iVar1);
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
				func_543((func_544(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_543((func_544(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_543(int iParam0)
{
	if (func_566())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_239(joaat("mpply_globalxp"), iParam0);
	}
}

int func_544(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_703(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_241(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_241(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_545(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_41(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_547(func_548(&Var0));
			if (iVar13 == 0)
			{
				func_546(&Global_1361887, iParam0);
				func_238(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_546(&Global_1361888, iParam0);
				func_238(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_546(&Global_1361889, iParam0);
				func_238(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_546(&Global_1361890, iParam0);
				func_238(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_546(&Global_1361891, iParam0);
				func_238(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_546(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_547(int iParam0)
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

int func_548(var uParam0)
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

void func_549(int iParam0, int iParam1, int iParam2)
{
	if (func_566())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_188(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_188(-1)])
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
		if (func_555(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_553(iParam0, 1);
		}
		func_234(635, iParam0, -1, 1);
		func_235(636, func_553(iParam0, 1), -1, 1, 0);
		Global_1362002[func_188(-1)] = iParam0;
		func_550(7, 0);
	}
}

void func_550(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_552(iParam0, iParam1))
	{
		iVar0 = func_551();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_551()
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

int func_552(int iParam0, var uParam1)
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

int func_553(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_554(iParam0, 0);
}

int func_554(int iParam0, int iParam1)
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

int func_555(int iParam0)
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

int func_556(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_188(-1)];
			}
			else if (func_555(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_188(-1)];
	}
	return 0;
}

void func_557(int iParam0)
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
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_155(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_559(unk_0x0FFED3E94261A832(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_558(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_558(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_558(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_559(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_41(iParam0) };
		Global_2484585 = { func_41(iParam1) };
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

void func_560(bool bParam0, int iParam1)
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
				if (func_703(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_559(unk_0x0FFED3E94261A832(), iVar4))
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
			if (func_703(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_561(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_559(unk_0x0FFED3E94261A832(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_558(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_558(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_561(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_562(iParam0), func_562(iParam1));
	return 0f;
}

Vector3 func_562(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_563(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_558(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_564(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_556(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_556(unk_0x0FFED3E94261A832());
		}
	}
	if (func_565(8000, 0, 0) > 0)
	{
		if (func_565(8000, 0, 0) < (iParam0 + func_556(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_565(8000, 0, 0) - func_556(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_565(int iParam0, bool bParam1, int iParam2)
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

int func_566()
{
	return 1;
}

bool func_567(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_568(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

int func_569()
{
	return Global_262145.f_9659;
}

int func_570()
{
	return Global_262145.f_9661;
}

void func_571(int iParam0, var uParam1)
{
	Local_1266[iParam0 /*68*/].f_31 = uParam1;
}

void func_572(int iParam0, int iParam1)
{
	Local_1266[iParam0 /*68*/].f_35 = iParam1;
}

void func_573(int iParam0, int iParam1)
{
	Local_1266[iParam0 /*68*/].f_34 = iParam1;
}

void func_574(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_580, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_225(unk_0x0FFED3E94261A832()))
			{
				if (!func_113(unk_0x0FFED3E94261A832()))
				{
					if (func_442(unk_0x88641E5BC172153A()))
					{
						if (iParam1 <= 2)
						{
							if (func_170(unk_0x88641E5BC172153A()) || func_442(unk_0x88641E5BC172153A()))
							{
								func_599(func_613(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_598(1);
						}
						if (iVar1 > 0)
						{
							func_597();
							func_530(0, unk_0x2A5EB8B0FE590B91(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_405.f_7 = (Local_405.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_586(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_585())
							{
								func_576(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								unk_0xD227FE677C456569(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_405.f_6 = (Local_405.f_6 + iVar0);
							if (!Global_262145.f_10063)
							{
								if (Local_405.f_6 > 0)
								{
									func_575(16, Local_405.f_6);
								}
							}
							Global_2456893 = iVar0;
						}
					}
					else
					{
						func_598(0);
					}
				}
				else
				{
					func_598(0);
				}
			}
			else
			{
				func_598(0);
			}
		}
		else
		{
			func_598(0);
		}
		unk_0xF6082E2ADA1C795B(&iLocal_580, 5);
	}
}

void func_575(int iParam0, int iParam1)
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

void func_576(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_585())
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
				func_577(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_577(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_577(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_585())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_38()) || unk_0x3227E797058C3C9A())
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
			*uParam0 = func_584(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_583(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_578(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_578(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_579(iParam0);
	}
}

void func_579(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_585())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_582(iParam0))
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
		func_580(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_580(var uParam0)
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
	func_581(&(uParam0->f_8.f_3));
	func_581(&(uParam0->f_8.f_16));
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

void func_581(var uParam0)
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

int func_582(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_583(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_584(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_585())
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

int func_585()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

void func_586(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_596())
		{
			if (func_127(0))
			{
				if (!func_107(0))
				{
					if (unk_0x885F483F34E47503(func_595()))
					{
						if (func_594() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_594());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_592(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_591("GB_BCUT_TICK1", func_595(), iVar0, 0, 0, 1, 1);
						}
						func_590(20);
						func_587(func_595(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_587(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_703(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_589(iParam0);
		func_588(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_527(iParam0));
	}
}

void func_588(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_589(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_590(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_591(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x95CE6D748899618C(func_148(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_42(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_592(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_593(1);
	}
	else
	{
		iVar1 = func_593(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_593(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_594()
{
	return Global_262145.f_11041;
}

int func_595()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

bool func_596()
{
	return func_70(unk_0x0FFED3E94261A832());
}

void func_597()
{
	Global_2456235 = 1;
}

void func_598(bool bParam0)
{
	if (bParam0)
	{
		if (func_186(1))
		{
			unk_0xF6082E2ADA1C795B(&Global_1574404, 1);
		}
	}
	else if (func_186(2))
	{
		unk_0xF6082E2ADA1C795B(&Global_1574404, 2);
	}
}

void func_599(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_583, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_10094)
	{
		iVar0 = Global_262145.f_10094;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_612() * iVar0);
	*uParam2 = (func_611() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_9848 / 60) / 1000);
		if (iVar1 > func_610())
		{
			iVar1 = func_610();
		}
		iVar2 = iLocal_582;
		if (iVar2 > func_609())
		{
			iVar2 = func_609();
		}
		*uParam1 = unk_0xF2DB717A73826179((IntToFloat(func_602(func_608(), func_607(), iVar1, fParam0, func_606(), func_605(), func_604(), iVar2)) * Global_262145.f_10121));
		*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((IntToFloat(func_602(func_601(), func_600(), iVar1, fParam0, func_606(), func_605(), func_604(), iVar2)) * Global_262145.f_10122)));
	}
}

int func_600()
{
	return Global_262145.f_9655;
}

int func_601()
{
	return Global_262145.f_9657;
}

int func_602(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_603(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_603(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_604()
{
	return Global_262145.f_9664;
}

float func_605()
{
	return Global_262145.f_9663;
}

float func_606()
{
	return Global_262145.f_9662;
}

int func_607()
{
	return Global_262145.f_9654;
}

int func_608()
{
	return Global_262145.f_9656;
}

int func_609()
{
	return Global_262145.f_10007;
}

int func_610()
{
	return Global_262145.f_10006;
}

int func_611()
{
	return Global_262145.f_9653;
}

int func_612()
{
	return Global_262145.f_9652;
}

float func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9665;
		
		case 1:
			return Global_262145.f_9666;
		
		case 2:
			return Global_262145.f_9667;
		
		default:
	}
	return 0f;
}

int func_614(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_31(unk_0x0FFED3E94261A832(), 0) || func_378(unk_0x0FFED3E94261A832(), 0))
	{
		if (func_30(unk_0x0FFED3E94261A832()) || func_299(unk_0x0FFED3E94261A832()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xE66A798F07C5EFC7() < iParam0)
	{
		if (bParam2)
		{
			func_616(sParam3, sParam4, 1);
		}
		if (func_231(26, -1))
		{
			func_257(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1574379.f_18)))
	{
		if (!func_5(&(Global_1574379.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1574379.f_18));
	}
	if (func_615())
	{
		if (bParam2)
		{
			func_616(sParam3, sParam4, 0);
		}
		if (func_231(26, -1))
		{
			func_257(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD7577082A8533202() < iParam0)
	{
		if (bParam2)
		{
			func_616(sParam3, sParam4, 1);
		}
		if (func_231(26, -1))
		{
			func_257(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_615()
{
	return unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 0);
}

void func_616(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 2) && !func_199(unk_0x0FFED3E94261A832())) && !func_225(unk_0x0FFED3E94261A832()))
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
		func_176(66, sParam0, sParam1, 1, -1, 2);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 2);
	}
}

int func_617()
{
	return Local_121.f_1;
}

void func_618()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 6))
	{
		func_637();
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 6);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 7))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 4) || unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 16))
		{
			if (((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_209()) && func_703(unk_0x0FFED3E94261A832(), 1, 1))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 7);
				func_208("FME_PASINT", 30000);
				func_207(1);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 17))
		{
			if (func_116() && !func_115())
			{
				unk_0x507FE690B1271947(&(Global_1574379.f_1), 17);
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 16);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 23))
	{
		if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_703(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x6235C49EA2DBA22D())
		{
			if (func_635())
			{
				func_208("AMEV_GA_RP", -1);
				if (func_377(unk_0x0FFED3E94261A832()) != 200)
				{
					func_207(1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 23);
			}
		}
	}
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_192(unk_0x0FFED3E94261A832()))
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
		if ((((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_209()) && func_703(unk_0x0FFED3E94261A832(), 1, 1)) && !func_114(unk_0x0FFED3E94261A832(), 21))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 9);
			func_634(0);
			func_208("FME_TBL00", -1);
			func_207(1);
		}
	}
	if (func_300(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 18))
		{
			if ((func_114(unk_0x0FFED3E94261A832(), 21) && unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 20)) && !unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 19))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 18);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 18))
		{
			if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_209()) && func_703(unk_0x0FFED3E94261A832(), 1, 1)) && unk_0x0B21CC5276C2CE1B()) && !Global_2497344.f_4762)
			{
				unk_0x507FE690B1271947(&(Global_1574379.f_1), 18);
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 19);
				func_208("AMTT_RPAS", -1);
				func_207(1);
			}
		}
	}
	if (((((func_300(unk_0x0FFED3E94261A832()) && !func_199(unk_0x0FFED3E94261A832())) && func_221(unk_0x0FFED3E94261A832()) != 146) && !func_225(unk_0x0FFED3E94261A832())) && !func_113(unk_0x0FFED3E94261A832())) && !func_628())
	{
		if (func_191(func_221(unk_0x0FFED3E94261A832())))
		{
			unk_0xAA5F36A70B643256(unk_0x0FFED3E94261A832());
		}
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 22))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 22);
		}
		if (func_292(unk_0x0FFED3E94261A832()) || func_182())
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 10))
			{
				if (func_626(func_221(unk_0x0FFED3E94261A832())))
				{
					if (func_186(0) && !Global_2391043)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_189(1);
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
					}
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 10);
			}
		}
		if (func_192(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 11))
			{
				if (!Global_91829.f_8)
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
					func_184(1);
				}
				if (!func_625())
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 13);
					func_183();
				}
				if (!Global_2391043)
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
					if (func_186(0) && !Global_2391043)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
					}
					func_189(1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 11);
			}
		}
		else
		{
			func_623(0);
		}
	}
	else
	{
		func_623(1);
	}
	func_619();
	if (func_181(func_221(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 21))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 21);
	}
	if ((func_116() && !func_115()) || func_114(unk_0x0FFED3E94261A832(), 21))
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

void func_619()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_209())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_175(iVar2))
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
				func_620(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 26))
	{
		func_3(&(Global_1574379.f_22));
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 26);
	}
}

void func_620(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1574379.f_22)))
	{
		func_11(&(Global_1574379.f_22), 0, 0);
	}
	else if (func_5(&(Global_1574379.f_22), iParam1, 0))
	{
		if (func_432() > 0)
		{
			func_204(iParam0);
			if (func_206("AMEV_LBD_HELP"))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
			func_3(&(Global_1574379.f_22));
		}
	}
	else
	{
		func_622(0);
		func_621();
	}
}

void func_621()
{
	Global_2497344.f_4451 = 0;
}

void func_622(int iParam0)
{
	Global_1351508.f_68 = iParam0;
}

void func_623(int iParam0)
{
	if ((unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 11) || (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 10) && iParam0)) || (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 22) && iParam0))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 12))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 12);
			func_184(0);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 13))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 13);
			func_624();
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_31(unk_0x0FFED3E94261A832(), 0))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 14);
			func_189(0);
		}
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 11);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 10);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 22);
	}
}

void func_624()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4667), 0);
}

bool func_625()
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4667, 0);
}

int func_626(int iParam0)
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
			return func_192(unk_0x0FFED3E94261A832());
		
		case 133:
			return (func_182() || func_627(func_131()));
		
		default:
	}
	return 0;
}

int func_627(int iParam0)
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

int func_628()
{
	if (((((((((func_280() || func_279()) || func_278()) || func_123()) || (func_275() && !unk_0x1B154DE2D4606530())) || (func_631() && !func_630())) || Global_2394683) || Global_2394683.f_1 != 0) || Global_2394756 != 0) || (func_629() == 2 && !unk_0x1B154DE2D4606530()))
	{
		return 1;
	}
	return 0;
}

int func_629()
{
	return Global_979818;
}

bool func_630()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 27);
}

int func_631()
{
	if (func_633() || func_632())
	{
		return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 == 8;
	}
	return 0;
}

var func_632()
{
	return Global_2445217.f_614;
}

bool func_633()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

void func_634(int iParam0)
{
	int iVar0;
	
	iVar0 = func_187(2519, -1, 0);
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
	func_235(2519, iVar0, -1, 1, 0);
}

int func_635()
{
	int iVar0;
	
	if (!func_18(&(Global_1574379.f_15)))
	{
		func_11(&(Global_1574379.f_15), 0, 0);
		Global_1574379.f_17 = 0;
	}
	else if (func_5(&(Global_1574379.f_15), 1000, 0))
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(Global_1574379.f_17)))
		{
			iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Global_1574379.f_17));
			if (unk_0x885F483F34E47503(iVar0))
			{
				if (func_703(iVar0, 1, 1) && func_636(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_562(unk_0x0FFED3E94261A832()), func_562(iVar0)) < 80f)
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
			func_3(&(Global_1574379.f_15));
		}
	}
	return 0;
}

int func_636(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_555(iParam0))
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

void func_637()
{
	unk_0xE0125DCD8DB3EFC3(5);
	func_315();
	unk_0xFBC4596E19752537(1f);
	unk_0x507FE690B1271947(&(Global_1574379.f_1), 8);
	func_638();
}

void func_638()
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

var func_639()
{
	if (unk_0x2137828D03306CAF(func_640()))
	{
		return func_640();
	}
	return func_167();
}

var func_640()
{
	return Global_2359301.f_3;
}

bool func_641()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 11);
}

bool func_642()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

int func_643(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_644())
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

bool func_644()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

bool func_645()
{
	return Global_1574379.f_24;
}

int func_646()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2497344.f_4664)
	{
		return 0;
	}
	uVar2 = unk_0xFD0C6B49DA615791();
	if (func_18(&(Local_121.f_1.f_1)))
	{
		iVar0 = func_647(&uVar2, &(Local_121.f_1.f_1));
		iVar1 = Global_262145.f_9848;
	}
	else if (func_18(&(Local_121.f_1.f_3)))
	{
		iVar0 = func_647(&uVar2, &(Local_121.f_1.f_3));
		iVar1 = Global_262145.f_9849;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_647(var uParam0, var uParam1)
{
	return unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(*uParam0, *uParam1));
}

bool func_648(int iParam0)
{
	return !func_649(iParam0);
}

int func_649(int iParam0)
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
			if (func_114(unk_0x0FFED3E94261A832(), 7))
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
			if (func_114(unk_0x0FFED3E94261A832(), 7))
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
			if (func_114(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_650(4))
			{
				return 0;
			}
			if (func_114(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_650(4))
			{
				return 0;
			}
			if (func_114(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_650(4))
			{
				return 0;
			}
			if (func_114(unk_0x0FFED3E94261A832(), 7))
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
			if (func_650(4))
			{
				return 0;
			}
			if (func_114(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_650(4))
			{
				return 0;
			}
			if (func_114(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_650(4))
			{
				return 0;
			}
			if (func_114(unk_0x0FFED3E94261A832(), 7))
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

int func_650(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_703(unk_0x7C214DA899F05536(iVar0), 0, 1))
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

int func_651()
{
	var uVar0;
	
	func_655(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_654())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_653())
	{
		return 1;
	}
	if (func_652(157))
	{
		if (!func_280())
		{
			return 1;
		}
	}
	if (func_652(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_194() != 0)
	{
		if (unk_0x09952BA662A7629B(func_194()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_652(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_653()
{
	return Global_2454709;
}

bool func_654()
{
	return Global_2445217.f_573;
}

void func_655(var uParam0)
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
					func_656(iVar0);
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

void func_656(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_703(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_657(uVar4, &bVar5))
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

int func_657(int iParam0, var uParam1)
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

void func_658()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_659()
{
	int iVar0;
	
	func_174();
	func_687(141);
	func_669(141, 0, unk_0xAA4F14DA15DB0B51(iLocal_580, 5));
	func_265();
	func_210(0);
	if (unk_0xAA4F14DA15DB0B51(iLocal_580, 16))
	{
		unk_0x40F160C3038ECAF5("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x507FE690B1271947(&iLocal_580, 16);
	}
	unk_0xFBC4596E19752537(1f);
	func_76();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_666(iVar0);
		iVar0++;
	}
	func_310();
	func_664();
	func_663(0);
	func_203(29, 0);
	if (func_651())
	{
		Local_405.f_5 = 5;
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_580, 24))
	{
		Local_405.f_5 = 6;
	}
	else if (Local_405.f_5 != 1)
	{
		Local_405.f_5 = 2;
	}
	Local_405.f_0 = Local_121.f_214;
	Local_405.f_1 = Local_121.f_215;
	Local_405.f_4 = Local_121.f_216;
	Local_405.f_3 = iLocal_582;
	Local_405.f_10 = (unk_0xDA84A1E29323722E() - Local_405.f_9);
	if (!Global_262145.f_10063)
	{
		if (Local_405.f_6 > 0)
		{
			if (Local_405.f_5 == 1)
			{
				func_662();
			}
		}
	}
	if (unk_0x88641E5BC172153A() != -1)
	{
		func_661(Local_405, iLocal_418, iLocal_3439, iLocal_3438, func_73(func_125(0, unk_0x88641E5BC172153A())), -1, -1);
	}
	func_660();
}

void func_660()
{
	unk_0xA232817B0B36F2E5();
}

void func_661(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xFABF5258A318B1DC();
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
		if (unk_0x35302CD5A5D37EED(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0xB1BF705571EE36BB(&Var1);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x1BFD81725890FE16(&Var14);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xF3E387DE7804E755(&Var28);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xBD6F94216F555AD7(&Var52);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_penned_in"))
		{
			unk_0xDB781DB9C232EAD6(&Param0);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x9E58BCF1884E0E01(&Var66);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xA5019E62FE9FEDA7(&Var79);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x01876C8ABC66C46F(&Var93);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0x713A4A8D7D95D21D(&Var107);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xBEFCFE9DF0E86F20(&Var123);
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xCE72A6974512A170(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xC6E4B4B0B05C5346(&Var150);
			}
		}
		else if (unk_0x35302CD5A5D37EED(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xCD7D4855D6DCE0F3(&Var164);
		}
	}
}

void func_662()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1697), 18);
}

void func_663(bool bParam0)
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

void func_664()
{
	if (Global_2412851.f_6 == unk_0xFF09208EC90C94CB())
	{
		func_665();
	}
}

void func_665()
{
	struct<26> Var0;
	
	if (unk_0xE00BB08A385D5A25(Global_2412851.f_6))
	{
		if (!Global_2412851.f_6 == unk_0xFF09208EC90C94CB())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412851 = { Var0 };
	Global_2412851.f_6 = -1;
}

void func_666(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_668(iParam0))
	{
		func_667(iVar0);
		iVar0++;
	}
	func_310();
	func_664();
	func_319(func_320(iParam0), 0, 0);
}

void func_667(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2404996.f_357[iParam0 /*12*/].f_9)
		{
			Global_2404996.f_357[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_669(int iParam0, bool bParam1, var uParam2)
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
	func_683();
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
	unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_682(func_221(unk_0x0FFED3E94261A832()));
		func_203(21, 0);
	}
	else
	{
		if ((uParam2 && unk_0x0FFED3E94261A832() != -1) && func_681(unk_0x0FFED3E94261A832()) >= 12)
		{
			func_680(2531, -1);
			iVar1 = func_187(2531, -1, 0);
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
		func_679();
		func_678();
		func_677();
		if ((!func_30(unk_0x0FFED3E94261A832()) && !func_28(unk_0x0FFED3E94261A832())) && !func_99())
		{
			func_306();
		}
		func_676();
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0) && !unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 1))
		{
			func_637();
		}
		func_675();
		unk_0x507FE690B1271947(&(Global_2497344.f_1703), 2);
		func_674();
		func_673();
	}
	if (unk_0x440E77FA46936F83(1344549371))
	{
		unk_0x74B42EAFF204A87F(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x0FFED3E94261A832() != -1 && !func_114(unk_0x0FFED3E94261A832(), 21)) && !func_31(unk_0x0FFED3E94261A832(), 0))
		{
			func_189(0);
			func_184(0);
			func_672();
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_231(26, -1))
		{
			Global_2456868 = -1;
			func_257(26, -1);
		}
	}
	if (!func_670())
	{
		Global_2484463 = 1;
	}
}

int func_670()
{
	if (((!func_414(unk_0x0FFED3E94261A832()) && !func_395(unk_0x0FFED3E94261A832())) && func_221(unk_0x0FFED3E94261A832()) != 146) && !func_671())
	{
		return 0;
	}
	return 1;
}

int func_671()
{
	if ((Global_1638223 == 0 && unk_0x1B154DE2D4606530()) && (((((((Global_1638223.f_5 != 0 || Global_1638223.f_112772 > 0) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 15)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 18)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 19)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 29)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 28)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_672()
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

void func_673()
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_7 = 0;
}

void func_674()
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

void func_675()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574379 = { Var0 };
}

void func_676()
{
	var uVar0;
	
	Global_1316425 = uVar0;
}

void func_677()
{
	Global_2497344.f_4667 = 0;
}

void func_678()
{
	if (unk_0x0FFED3E94261A832() != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1 = 0;
	}
}

void func_679()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (iVar0 != -1)
	{
		Global_1622795[iVar0 /*431*/] = -1;
	}
}

void func_680(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_187(iParam0, func_188(iParam1), 0);
	iVar0++;
	if (!func_236(iParam0))
	{
		func_235(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_234(iParam0, iVar0, iParam1, 1);
	}
}

int func_681(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_204.f_6;
}

int func_682(int iParam0)
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
			if (func_192(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_683()
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
	func_686(0);
	func_685(0);
	func_684(0);
}

void func_684(int iParam0)
{
	if (Global_2497344.f_4439 != iParam0)
	{
		Global_2497344.f_4439 = iParam0;
	}
}

void func_685(bool bParam0)
{
	if (Global_2497344.f_4438 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2497344.f_4438 = bParam0;
	}
}

void func_686(int iParam0)
{
	if (Global_2497344.f_4436 != iParam0)
	{
		Global_2497344.f_4436 = iParam0;
	}
}

void func_687(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_688(struct<21> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_702(Param0.f_0);
	func_701(uVar3, Param0);
	func_700(0, -1, 0);
	func_698(141);
	unk_0x2D179B3FFCF1AADA(&Local_121, 284);
	unk_0xA5929B03CD847BE8(&Local_419, 161);
	if (!func_697())
	{
		func_659();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		func_203(29, 1);
		if (unk_0x62E688B72E3C57B0())
		{
			iVar0 = func_693();
			func_690(func_692(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_689(iVar1, iVar0);
				iVar1++;
			}
			unk_0xABE13CB17EB2BE02(&(Local_121.f_214), &(Local_121.f_215));
		}
		Local_405.f_2 = unk_0xE66A798F07C5EFC7();
		Local_405.f_9 = unk_0xDA84A1E29323722E();
		Local_405.f_8 = unk_0xDA84A1E29323722E();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_121.f_250[iVar2] = -1;
			iVar2++;
		}
		func_462(0);
	}
	else
	{
		func_659();
	}
}

void func_689(int iParam0, int iParam1)
{
	Local_121.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_690(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1187610982;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	iVar3 = func_691(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iVar3);
	}
}

var func_691(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_703(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_692(int iParam0, int iParam1, int iParam2, int iParam3)
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

var func_693()
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_696(iVar10) && !func_694(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[unk_0x895FB9FE885E36ED(0, iVar0)];
	return uVar11;
}

int func_694(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_695(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6995)
		{
			if (Global_2479594.f_148[iVar0 /*2*/] == iVar1 && Global_2479594.f_148[iVar0 /*2*/].f_1 == func_692(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_695(int iParam0)
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

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_9854)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_9855)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_9856)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_9857)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_9858)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_9859)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_9860)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_9861)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_697()
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
		if (func_654())
		{
			return 0;
		}
		if (func_652(155))
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

void func_698(int iParam0)
{
	func_675();
	func_699();
	func_677();
	Global_1574379.f_4 = iParam0;
	Global_1574379.f_5 = iParam0;
	func_200(iParam0, -1);
	func_220(&(Global_1574379.f_18), 0, 0);
	Global_2497344.f_4504 = 0;
	Global_2455769[0] = func_27();
	Global_2455769[1] = func_27();
	Global_2455769[2] = func_27();
	Global_2455769[3] = func_27();
	Global_2455769[4] = func_27();
	func_673();
	func_388();
	if (func_116() && !func_115())
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 16);
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 17);
	}
}

void func_699()
{
	var uVar0;
	
	Global_1574404 = uVar0;
}

int func_700(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_660();
			}
			else
			{
				return 0;
			}
		}
		if (!func_250())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_660();
					}
					else
					{
						return 0;
					}
				}
				if (func_654())
				{
					if (!bParam2)
					{
						func_660();
					}
					else
					{
						return 0;
					}
				}
				if (func_652(155))
				{
					if (!bParam2)
					{
						func_660();
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
					func_660();
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
				func_660();
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
			func_660();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_701(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_660();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_702(int iParam0)
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

int func_703(int iParam0, bool bParam1, bool bParam2)
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

