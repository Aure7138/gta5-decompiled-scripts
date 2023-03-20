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
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<284> Local_99 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_383 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	struct<5> Local_397[32];
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	struct<18> Local_563[32];
	struct<3> Local_1140[32];
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	struct<68> Local_1244[1];
	struct<49> Local_1313[32];
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
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
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
	var uLocal_2910 = -1;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 1;
	var uLocal_2919 = 0;
	var uLocal_2920 = 32;
	var uLocal_2921 = 0;
	var uLocal_2922 = -1;
	var uLocal_2923 = 0;
	var uLocal_2924 = -1;
	var uLocal_2925 = 0;
	var uLocal_2926 = -1;
	var uLocal_2927 = 0;
	var uLocal_2928 = -1;
	var uLocal_2929 = 0;
	var uLocal_2930 = -1;
	var uLocal_2931 = 0;
	var uLocal_2932 = -1;
	var uLocal_2933 = 0;
	var uLocal_2934 = -1;
	var uLocal_2935 = 0;
	var uLocal_2936 = -1;
	var uLocal_2937 = 0;
	var uLocal_2938 = -1;
	var uLocal_2939 = 0;
	var uLocal_2940 = -1;
	var uLocal_2941 = 0;
	var uLocal_2942 = -1;
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
	var uLocal_2985 = -1;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 32;
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
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
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
	int iLocal_3408 = 0;
	int iLocal_3409 = 0;
	int iLocal_3410 = 0;
	int iLocal_3411 = 0;
	int iLocal_3412 = 0;
	int iLocal_3413 = 0;
	int iLocal_3414 = 0;
	int iLocal_3415 = 0;
	int iLocal_3416 = 0;
	int iLocal_3417 = 0;
	int iLocal_3418 = 0;
	int iLocal_3419 = 0;
	var uLocal_3420 = 0;
	int iLocal_3421 = 0;
	var uLocal_3422 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_395 = -1;
	iLocal_3417 = -1;
	if (unk_0x1995B52453EF6537() && func_690(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
	{
		func_675(ScriptParam_0);
	}
	else
	{
		func_646();
	}
	while (true)
	{
		func_645();
		if (func_638())
		{
			func_646();
		}
		if (func_635(29))
		{
			func_646();
		}
		if (func_633())
		{
			func_646();
		}
		if (func_632())
		{
			func_646();
		}
		iLocal_3417 = -1;
		if (unk_0xF44A5E894FE76438(iLocal_3409, unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0xF44A5E894FE76438(iLocal_3410, unk_0x1E7FB1CA38C403F6()))
			{
				if (!func_630(unk_0xFB6B3EEFAB2DD12C()))
				{
					iLocal_3417 = unk_0x1E7FB1CA38C403F6();
				}
				else if (func_629() && !func_628())
				{
					uVar2 = func_626();
					if (unk_0xBEC34BF6B72C417A(uVar2))
					{
						iVar3 = unk_0x61263E0F7C8C9996(uVar2);
						if (unk_0xBF474853319C6A20(iVar3))
						{
							iVar4 = unk_0xCA5CB25B27CC9477(iVar3);
							iLocal_3417 = iVar4;
						}
					}
				}
			}
		}
		func_605();
		if (func_604() < 2)
		{
			if (func_601(2, 0, 1, 0, 0))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_558, 24);
				func_563(0, -1);
				func_646();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_562(iVar0, -1);
			func_561(iVar0, -1);
			func_560(iVar0, uVar1);
			unk_0x4EA098C870B73AB7(&iLocal_558, 0);
			iVar0++;
		}
		func_514();
		func_485();
		func_482();
		func_462();
		switch (func_461(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_460() == 1)
				{
					func_452(141, func_459(0), 0, 0);
					func_451(1);
				}
				else if (func_460() == 4)
				{
					func_451(4);
				}
				break;
			
			case 1:
				if (func_460() == 1)
				{
					func_20();
				}
				else if (func_460() == 4)
				{
					func_19(&(Local_99.f_211));
					func_451(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_99.f_211)))
				{
					if (func_17(&(Local_99.f_211)))
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
					func_451(4);
				}
				break;
			
			case 2:
				func_451(4);
			
			case 4:
				func_646();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_460())
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
	switch (func_604())
	{
		case 0:
			if (unk_0xF44A5E894FE76438(Local_99.f_213, 0))
			{
				if (!func_18(&(Local_99.f_1.f_3)))
				{
					func_11(&(Local_99.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (unk_0xF44A5E894FE76438(Local_99.f_213, 2))
			{
				iVar2 = Global_262145.f_9695;
				if (func_18(&(Local_99.f_1.f_1)))
				{
					if (func_9(&(Local_99.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_9696;
				if (func_18(&(Local_99.f_1.f_3)))
				{
					if (func_9(&(Local_99.f_1.f_3), 0, 0) >= iVar2)
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
			if (unk_0xF44A5E894FE76438(Local_99.f_213, 1))
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
	bVar6 = func_18(&(Local_99.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (unk_0xF44A5E894FE76438(iLocal_3410, iVar0))
		{
			if (unk_0xF44A5E894FE76438(iLocal_3409, iVar1))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_3411, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_99.f_1.f_1)))
					{
						if (!func_18(&(Local_99.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_99.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_99.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_99.f_1.f_1), 0, 0) <= Global_262145.f_9695) && func_604() != 2)
						{
							iVar7 = func_9(&(Local_99.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = unk_0xBBDA792448DB5A89(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_9699 * 1000));
							fVar4 = (unk_0xBBDA792448DB5A89(Global_262145.f_9698) * fVar3);
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
			func_3(&(Local_99.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_99.f_6[iParam0 /*204*/].f_70), 0, 1);
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
	Local_99.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

float func_6(int iParam0, int iParam1)
{
	return Local_99.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0);
		}
		else
		{
			return unk_0x05E1706E4465DAA5(unk_0x8D8F7D01F0EB4218(), *uParam0);
		}
	}
	return unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0);
}

void func_10(int iParam0)
{
	Local_99.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
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
					if (!func_18(&(Local_99.f_1.f_1)))
					{
						Local_99.f_1.f_3 = { Var1 };
						func_11(&(Local_99.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_99.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_99.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!unk_0xF44A5E894FE76438(Local_99.f_213, 2))
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_213), 2);
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
	Local_99.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_99.f_0 = iParam0;
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= 1000)
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
		if (unk_0x04DE35D10A718EEF())
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
	
	func_433();
	func_432();
	func_430();
	if (func_428())
	{
		func_310(iVar0);
	}
	func_294(141, func_309(0), &uLocal_3422, unk_0xBBDA792448DB5A89(Global_262145.f_10003), 1148846080, iLocal_3421);
	if (func_256(0, 1))
	{
		func_255();
	}
	switch (func_604())
	{
		case 0:
			break;
		
		case 1:
			func_254();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_219(iVar0);
				func_218(iVar0);
				func_216(iVar0);
				if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
				{
					if (!func_213(1, 0))
					{
						if (func_212(unk_0x1E7FB1CA38C403F6(), iVar0))
						{
							if (func_211(unk_0xFB6B3EEFAB2DD12C()) == 141)
							{
								if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 2))
								{
									unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 2);
									func_200(1);
								}
							}
							if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 5))
							{
								unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == unk_0x1E7FB1CA38C403F6())
							{
								if (!unk_0xF44A5E894FE76438(iLocal_558, 20))
								{
									unk_0xB8A73E7DA87B2968(&iLocal_558, 20);
								}
							}
						}
						if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == unk_0x1E7FB1CA38C403F6())
							{
								unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 2))
						{
							unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 2);
						}
						if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 5))
						{
							unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 5);
						}
						if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 4))
						{
							unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 4);
						}
						if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 6))
						{
							unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 6);
						}
						if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 7))
						{
							unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!unk_0xF44A5E894FE76438(iLocal_558, 8))
					{
						if (!unk_0xA14FC57CB26C2B67())
						{
							if (!func_199())
							{
								if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
								{
									if (!func_256(0, 0))
									{
										if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
										{
											if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
											{
												func_198("KOTC_1STHELP", 30000);
												func_197(0);
												unk_0xA93E75A5493862BD(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												unk_0xB8A73E7DA87B2968(&iLocal_558, 8);
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
					if (func_196("KOTC_1STHELP"))
					{
						unk_0x04890EB0282525A5(1);
					}
					if (!unk_0xF44A5E894FE76438(iLocal_558, 8))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_558, 8);
					}
				}
				if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
				{
					if (func_195(iVar0) <= 500f)
					{
						if (!unk_0xF44A5E894FE76438(iLocal_558, 9))
						{
							unk_0xFA5E84DCAE200259(0f);
							unk_0xB8A73E7DA87B2968(&iLocal_558, 9);
						}
					}
					else if (unk_0xF44A5E894FE76438(iLocal_558, 9))
					{
						unk_0xFA5E84DCAE200259(1f);
						unk_0x4EA098C870B73AB7(&iLocal_558, 9);
					}
				}
				if (iLocal_3417 != -1)
				{
					if (unk_0xF44A5E894FE76438(iLocal_558, 14) && func_8(iVar0) != iLocal_3417)
					{
						if (!unk_0xF44A5E894FE76438(iLocal_558, 21))
						{
							func_194(80);
							unk_0xB8A73E7DA87B2968(&iLocal_558, 21);
						}
					}
					else if (unk_0xF44A5E894FE76438(iLocal_558, 21))
					{
						unk_0x4EA098C870B73AB7(&iLocal_558, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!unk_0xF44A5E894FE76438(iLocal_558, 26))
					{
						func_170(141, 0f, 0f, 0, 0, 0, 0);
						unk_0xB8A73E7DA87B2968(&iLocal_558, 26);
					}
					if (!unk_0xF44A5E894FE76438(iLocal_558, 1))
					{
						if (iLocal_3417 != -1)
						{
							if (!func_256(0, 0))
							{
								if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
								{
									if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3417)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_169(unk_0xFB6B3EEFAB2DD12C(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_167(80, sVar1, unk_0x7746E8ACE891BFA4(func_7(iVar0)), func_168(), -1, "KOTC_START", func_168());
											}
											else
											{
												func_166(80, "KOTC_START2", "KOTC_STRAP1", func_168(), -1, func_168());
												unk_0xB8A73E7DA87B2968(&iLocal_558, 14);
												unk_0xB8A73E7DA87B2968(&iLocal_558, 15);
											}
										}
										else
										{
											func_166(80, "KOTC_START", "KOTC_STRAP3", func_168(), -1, func_168());
										}
										unk_0xB8A73E7DA87B2968(&iLocal_558, 1);
									}
								}
							}
						}
					}
					else if (!unk_0xF44A5E894FE76438(iLocal_558, 2))
					{
						if (func_165(80))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 2);
						}
					}
					else if (iLocal_3417 != -1)
					{
						if (func_8(iVar0) == iLocal_3417)
						{
							if (!unk_0xF44A5E894FE76438(iLocal_558, 14))
							{
								if (!func_256(0, 0))
								{
									if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
										{
											func_166(80, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											unk_0xB8A73E7DA87B2968(&iLocal_558, 14);
										}
									}
								}
							}
							else if (!unk_0xF44A5E894FE76438(iLocal_558, 15))
							{
								if (func_165(80))
								{
									unk_0xB8A73E7DA87B2968(&iLocal_558, 15);
								}
							}
						}
						else
						{
							if (unk_0xF44A5E894FE76438(iLocal_558, 14))
							{
								unk_0x4EA098C870B73AB7(&iLocal_558, 14);
							}
							if (unk_0xF44A5E894FE76438(iLocal_558, 15))
							{
								unk_0x4EA098C870B73AB7(&iLocal_558, 15);
							}
						}
					}
					else
					{
						if (unk_0xF44A5E894FE76438(iLocal_558, 14))
						{
							unk_0x4EA098C870B73AB7(&iLocal_558, 14);
						}
						if (unk_0xF44A5E894FE76438(iLocal_558, 15))
						{
							unk_0x4EA098C870B73AB7(&iLocal_558, 15);
						}
					}
				}
				else
				{
					func_164();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3417 != -1)
						{
							if (func_8(iVar0) == iLocal_3417)
							{
								if (!func_256(1, 0))
								{
									func_161("KOTC_KINGOB1", 0);
								}
								else
								{
									func_164();
								}
								if (unk_0xF44A5E894FE76438(iLocal_558, 10))
								{
									if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
									{
										if (!unk_0xA14FC57CB26C2B67())
										{
											if (!func_199())
											{
												if (!func_256(0, 0))
												{
													if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
													{
														if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
														{
															if (unk_0xF44A5E894FE76438(iLocal_558, 2))
															{
																if (!func_169(unk_0xFB6B3EEFAB2DD12C(), func_7(iVar0)))
																{
																	if (!unk_0xF44A5E894FE76438(iLocal_558, 10))
																	{
																		func_198("KOTC_YOUKNG", 30000);
																		func_197(1);
																		unk_0xB8A73E7DA87B2968(&iLocal_558, 6);
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
								if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
								{
									if (!unk_0xF44A5E894FE76438(iLocal_558, 7))
									{
										if (func_160(unk_0x1E7FB1CA38C403F6()))
										{
											if (!unk_0xA14FC57CB26C2B67())
											{
												if (!func_199())
												{
													if (!func_256(0, 0))
													{
														if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
														{
															if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
															{
																if (unk_0xF44A5E894FE76438(iLocal_558, 2))
																{
																	if (!func_169(unk_0xFB6B3EEFAB2DD12C(), func_7(iVar0)))
																	{
																		if (!unk_0xF44A5E894FE76438(iLocal_558, 7))
																		{
																			func_198("KOTC_OTHRKG", 30000);
																			func_197(1);
																			unk_0xB8A73E7DA87B2968(&iLocal_558, 7);
																		}
																	}
																	else if (!unk_0xF44A5E894FE76438(iLocal_558, 11))
																	{
																		func_139("KOTC_OTHRKGGN", func_159(), 1, "KOTC_KINGBLIP", func_140(unk_0xFB6B3EEFAB2DD12C(), -2, 0, 0), -1);
																		func_197(1);
																		unk_0xB8A73E7DA87B2968(&iLocal_558, 11);
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
								if (((func_160(iLocal_3417) || unk_0xF44A5E894FE76438(Local_397[iLocal_3417 /*5*/].f_4, 12)) && unk_0xF44A5E894FE76438(iLocal_3410, func_8(iVar0))) && !func_256(1, 0))
								{
									if (func_169(unk_0xFB6B3EEFAB2DD12C(), func_7(iVar0)))
									{
										func_136("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_140(unk_0xFB6B3EEFAB2DD12C(), -2, 0, 0), 0);
									}
									else
									{
										func_125("KOTC_PERMKNG", &(Local_563[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_164();
								}
							}
						}
						else
						{
							func_164();
						}
					}
					else if (iLocal_3417 != -1)
					{
						if (!func_256(1, 0))
						{
							if (func_212(unk_0x1E7FB1CA38C403F6(), iVar0))
							{
								func_161("KOTC_KLLALL", 0);
							}
							else
							{
								func_161("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_164();
						}
						if (!unk_0xF44A5E894FE76438(iLocal_558, 10))
						{
							if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
							{
								if (func_160(unk_0x1E7FB1CA38C403F6()))
								{
									if (!unk_0xA14FC57CB26C2B67())
									{
										if (!func_199())
										{
											if (!func_256(0, 0))
											{
												if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
												{
													if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
													{
														if (func_124(iVar0))
														{
															func_198("KOTC_CONTS", 30000);
															func_197(1);
															unk_0xB8A73E7DA87B2968(&iLocal_558, 10);
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
						func_164();
					}
				}
				if (iLocal_3417 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_160(unk_0x1E7FB1CA38C403F6()) && !func_256(1, 0))
						{
							func_161("KOTC_ENTER", 0);
						}
						else
						{
							func_164();
						}
					}
				}
				else
				{
					func_164();
				}
				func_97(iVar0);
				if (func_211(unk_0xFB6B3EEFAB2DD12C()) == 141)
				{
					func_78(iVar0);
				}
				func_77();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_75(iVar0);
				func_73(iVar0);
				iVar0++;
			}
			func_164();
			func_255();
			func_69();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_3417 != -1)
				{
					if (unk_0xF44A5E894FE76438(iLocal_558, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_99.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == iLocal_3417)
							{
								if (Local_99.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
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
				func_97(iVar0);
				if (Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!unk_0xF44A5E894FE76438(iLocal_3410, Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_383.f_5 = 1;
			}
			if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 1) && func_68())
			{
				if (!unk_0xF44A5E894FE76438(iLocal_558, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_256(0, 0))
							{
								func_67("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar8)
						{
							if (iLocal_3417 != -1)
							{
								if (!func_256(0, 0))
								{
									if (!func_256(0, 0))
									{
										if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
										{
											if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
											{
												if (func_160(iLocal_3417))
												{
													func_166(67, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
												}
												else
												{
													func_67("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_3417 != -1)
							{
								if (!func_256(0, 0))
								{
									if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
										{
											if (func_160(iLocal_3417))
											{
												func_65(63, func_66(Local_99.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_64(sVar5, func_66(Local_99.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_3417 != -1)
						{
							if (!func_256(0, 0))
							{
								if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
								{
									if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (func_160(iLocal_3417))
										{
											sVar5 = "KOTC_OVER3";
											if (func_62(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_52(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = unk_0x7746E8ACE891BFA4(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_44(71, func_66(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_66(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
					{
						if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 3);
						}
					}
				}
				if (unk_0xF44A5E894FE76438(iLocal_558, 3))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_558, 4))
					{
						if (iLocal_3417 != -1)
						{
							if (((((((func_165(63) || func_165(71)) || func_165(67)) || !func_160(iLocal_3417)) || func_256(1, 1)) || unk_0x6AAF285DC78E0304()) || func_15(0) == 0) || iLocal_3417 == -1)
							{
								unk_0xB8A73E7DA87B2968(&iLocal_558, 4);
							}
						}
						else
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 4);
						}
					}
				}
				if (unk_0xF44A5E894FE76438(iLocal_558, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_563(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_256(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (iLocal_3417 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1237, bVar10) && unk_0xF44A5E894FE76438(iLocal_558, 4))
			{
				if (!func_199() || unk_0x6AAF285DC78E0304())
				{
					unk_0xB8A73E7DA87B2968(&iLocal_558, 17);
					if (unk_0xF44A5E894FE76438(iLocal_558, 5))
					{
						unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 1);
						func_451(3);
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
	
	if (((*uParam0 > 0 && !func_199()) && !(func_31(unk_0xFB6B3EEFAB2DD12C(), 0) && (func_30(unk_0xFB6B3EEFAB2DD12C()) || func_28(unk_0xFB6B3EEFAB2DD12C())))) && !func_25(unk_0xFB6B3EEFAB2DD12C()))
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
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 25);
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 0);
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
				if (func_196("AMEV_LBD_HELP"))
				{
					unk_0x04890EB0282525A5(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0))
	{
		if (((((!unk_0x656CD02142B72C18() && !unk_0xF44A5E894FE76438(Global_2494149.f_743, 2)) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !Global_68127) && !Global_52999) && !unk_0x7E3640C27B17457C())
		{
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 1);
			func_198("AMEV_LBD_HELP", -1);
			func_197(1);
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2454003 = 1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_690(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_26(Global_2421621[iParam0 /*358*/].f_312.f_1) == 2;
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
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
			return 3;
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
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
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
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
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
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		unk_0xF5640E619D8FCD5B(iParam2);
		unk_0x4C51E4FBCD1D8830(func_42(&Var1));
		unk_0xF99222307D7150A9(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0x84EF96E928190AB1(0, 1);
		}
		else
		{
			Global_2482005 = { func_41(iParam1) };
			if (unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005))
			{
				iVar17 = 0;
				if (unk_0xCC257DA11A122B5F(&(Global_2481935.f_22), "Leader") && Global_2481935.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2481935.f_21 > 0)
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
					iVar0 = unk_0x060621EC21C1275F(iVar18, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar17, 0, Global_2481935, &Var1, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x4CFEC8A87106E3F3(iVar18, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar17, 0, Global_2481935, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0x84EF96E928190AB1(0, 1);
			}
		}
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_39() || !unk_0x8676DE83D4396C39()) || !func_36(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_37(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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

int func_38()
{
	return Global_1312731;
}

bool func_39()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
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
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
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
	func_51(iParam0, &Var0, iParam1, sParam2, sParam4);
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
		if (Global_2433082.f_2505)
		{
			return 0;
		}
	}
	func_50(uParam0, uParam0->f_16);
	func_48(uParam0);
	if (func_47(uParam0->f_1))
	{
		if (Global_2433082.f_2199[0 /*76*/].f_2 == 0)
		{
			Global_2433082.f_2199[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2433082.f_2199[0 /*76*/].f_1 == 13 || Global_2433082.f_2199[0 /*76*/].f_1 == 52) || Global_2433082.f_2199[0 /*76*/].f_1 == 53) || Global_2433082.f_2199[0 /*76*/].f_1 == 57)
		{
			Global_2433082.f_2199[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2433082.f_2199[iVar0 + 1 /*76*/] = { Global_2433082.f_2199[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2433082.f_2199[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 == 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 1);
				Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_46(Global_2433082.f_2199[iVar0 /*76*/].f_1))
				{
					Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
					unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
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
		case 87:
		case 86:
		case 90:
		case 91:
		case 85:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 88:
		case 99:
		case 100:
		case 101:
		case 102:
		case 89:
			return 1;
		
		default:
	}
	return 0;
}

int func_47(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 103) || iParam0 == 99) || iParam0 == 102)
	{
		return 1;
	}
	return 0;
}

void func_48(var uParam0)
{
	if (func_49(uParam0->f_1))
	{
		uParam0->f_70 = func_168();
	}
}

int func_49(int iParam0)
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

void func_50(var uParam0, int iParam1)
{
	if (func_49(uParam0->f_1))
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
			uParam0->f_71 = func_140(iParam1, -2, 0, 0);
		}
	}
}

void func_51(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

char* func_52(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		sVar0 = func_61(&(Global_1618089[iParam0 /*390*/].f_11.f_97));
		return sVar0;
	}
	if (Global_1618089[iParam0 /*390*/].f_11.f_113 != Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_113)
	{
		sVar0 = func_56(iParam0, 0);
		return sVar0;
	}
	if (((func_29(iParam0, 28) || func_29(unk_0xFB6B3EEFAB2DD12C(), 28)) || func_55(iParam0)) && !func_54(iParam0))
	{
		return func_56(iParam0, 0);
	}
	iVar1 = func_53(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (!unk_0xF1A016B51831B87B() && !unk_0x9F33BB03A41E0DCC(0, -1, 1))
			{
				return func_56(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_61(&(Global_1618089[iVar1 /*390*/].f_11.f_97));
		if (unk_0xC55B9553B3EDADE9(sVar0))
		{
			return func_56(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_53(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_27();
}

int func_54(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0xF1A016B51831B87B() && unk_0xD59699C2E1196EDA(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0x603D621ED5E06CB0() || unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xDE49089F060E6818(0))
		{
			return 0;
		}
	}
	else if (unk_0xF1A016B51831B87B())
	{
		if (unk_0xD59699C2E1196EDA(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_56(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_58(iParam0, 1))
		{
			return func_57();
		}
	}
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACC");
}

char* func_57()
{
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACCM");
}

bool func_58(int iParam0, bool bParam1)
{
	return func_59(iParam0, bParam1, 1);
}

int func_59(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_60(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_27() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 != func_27())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_27())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_61(var uParam0)
{
	return uParam0;
}

bool func_62(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_63(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_27();
}

int func_63(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_27())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_64(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x053CD3063CA9436C(sParam0);
	unk_0xF99222307D7150A9(iParam1);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_65(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_51(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_69 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_70 = iParam7;
	return func_45(&Var0);
}

int func_66(float fParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844(fParam0);
	iVar0 = (iVar0 / Global_262145.f_9698);
	iVar0 = (iVar0 * Global_262145.f_9698);
	return iVar0;
}

int func_67(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x053CD3063CA9436C(sParam0);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_33(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_68()
{
	return unk_0xF44A5E894FE76438(Global_1574332.f_1, 25);
}

void func_69()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_70(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_459(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (unk_0xF44A5E894FE76438(uLocal_559, iVar0))
	{
		unk_0x19F9705716F6BD4E(func_72(iParam0, 0), 0, func_71(iParam0, 1));
		if (iVar0 == 4)
		{
			unk_0x19F9705716F6BD4E(func_72(iParam0, 1), 0, func_71(iParam0, 1));
		}
		unk_0x4EA098C870B73AB7(&iLocal_559, iVar0);
	}
}

int func_71(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == unk_0x1E7FB1CA38C403F6())
	{
		return 9;
	}
	else if (func_169(unk_0xFB6B3EEFAB2DD12C(), func_7(iParam0)))
	{
		return func_140(unk_0xFB6B3EEFAB2DD12C(), -2, 0, 0);
	}
	return 6;
}

int func_72(int iParam0, bool bParam1)
{
	switch (func_459(iParam0))
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

void func_73(int iParam0)
{
	if (unk_0x6901135DDCC4904D(func_74(iParam0)))
	{
		unk_0x8A3D7569826A325D(&(Local_1244[iParam0 /*68*/].f_28));
	}
}

var func_74(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_28;
}

void func_75(int iParam0)
{
	if (unk_0x6901135DDCC4904D(func_76(iParam0)))
	{
		unk_0x8A3D7569826A325D(&(Local_1244[iParam0 /*68*/].f_27));
	}
}

var func_76(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_27;
}

void func_77()
{
	bool bVar0;
	
	if (iLocal_3417 != -1)
	{
		if (func_160(iLocal_3417))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0xF44A5E894FE76438(iLocal_558, 16))
		{
			unk_0xE3E53903AE9B5BD5("MP_Deathmatch_Type_Challenge_Scene");
			unk_0xB8A73E7DA87B2968(&iLocal_558, 16);
		}
	}
	else if (unk_0xF44A5E894FE76438(iLocal_558, 16))
	{
		unk_0xB3C38A4B84C152BF("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x4EA098C870B73AB7(&iLocal_558, 16);
	}
}

void func_78(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_160(unk_0x1E7FB1CA38C403F6()) && !func_256(1, 1)) && iLocal_3417 == unk_0x1E7FB1CA38C403F6()) && !func_94(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0)) && !func_93(unk_0xFB6B3EEFAB2DD12C())) && !func_92())
	{
		if (!unk_0xF44A5E894FE76438(iLocal_558, 18))
		{
			if (iLocal_3421 == 0)
			{
				iLocal_3421 = 1;
			}
			func_88(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_84();
			unk_0xB8A73E7DA87B2968(&iLocal_558, 18);
		}
	}
	else if (unk_0xF44A5E894FE76438(iLocal_558, 18))
	{
		if (iLocal_3421)
		{
			iLocal_3421 = 0;
		}
		func_79();
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x4EA098C870B73AB7(&iLocal_558, 18);
	}
}

void func_79()
{
	if (func_83() && !func_82())
	{
		func_81();
	}
	func_80();
	Global_2404994.f_651 = 0;
}

void func_80()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404994.f_651.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_81()
{
	if (func_82())
	{
		if (Global_2404994.f_651.f_515 == Global_2404994.f_1167.f_515)
		{
			return;
		}
	}
	if (!unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_1167), &(Global_2404994.f_651), 516);
		Global_2404994.f_481 = { Global_2404994.f_477 };
		Global_2404994.f_1683 = 1;
	}
}

int func_82()
{
	if ((Global_2404994.f_1683 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_1167.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_1167.f_515))
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	if ((Global_2404994.f_1684 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_651.f_515))
	{
		return 1;
	}
	return 0;
}

void func_84()
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
			func_86(func_459(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_85(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_85(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2404994.f_1684)
	{
	}
	if (Global_2404994.f_651 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404994.f_651.f_1[Global_2404994.f_651 /*5*/] = { Param0 };
		Global_2404994.f_651.f_1[Global_2404994.f_651 /*5*/].f_3 = uParam3;
		Global_2404994.f_651.f_1[Global_2404994.f_651 /*5*/].f_4 = uParam4;
		Global_2404994.f_651++;
	}
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_87(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_87(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_87(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_87(iParam0, 2);
					break;
			}
			break;
	}
}

float func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9915;
				
				case 1:
					return Global_262145.f_9916;
				
				case 2:
					return Global_262145.f_9917;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9918;
				
				case 1:
					return Global_262145.f_9919;
				
				case 2:
					return Global_262145.f_9920;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9921;
				
				case 1:
					return Global_262145.f_9922;
				
				case 2:
					return Global_262145.f_9923;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9924;
				
				case 1:
					return Global_262145.f_9925;
				
				case 2:
					return Global_262145.f_9926;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9927;
				
				case 1:
					return Global_262145.f_9928;
				
				case 2:
					return Global_262145.f_9929;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9930;
				
				case 1:
					return Global_262145.f_9931;
				
				case 2:
					return Global_262145.f_9932;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9933;
				
				case 1:
					return Global_262145.f_9934;
				
				case 2:
					return Global_262145.f_9935;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9936;
				
				case 1:
					return Global_262145.f_9937;
				
				case 2:
					return Global_262145.f_9938;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_83())
		{
			func_81();
		}
		Global_2404994.f_651.f_504 = iParam1;
		Global_2404994.f_651.f_505 = iParam2;
		Global_2404994.f_651.f_506 = iParam10;
		func_79();
		func_91(8, 0, 0);
		Global_2404994.f_651.f_507 = iParam11;
		Global_2404994.f_651.f_510 = iParam3;
		Global_2404994.f_651.f_511 = iParam4;
		Global_2404994.f_651.f_508 = iParam5;
		Global_2404994.f_651.f_509 = iParam6;
		Global_2404994.f_651.f_512 = iParam7;
		Global_2404994.f_651.f_513 = iParam8;
		Global_2404994.f_651.f_514 = iParam9;
		Global_2404994.f_1684 = 1;
	}
	else
	{
		func_89();
	}
}

void func_89()
{
	if (func_83() && !func_82())
	{
		func_81();
	}
	if (func_82())
	{
		func_90();
	}
	else
	{
		func_79();
		func_91(0, 0, 0);
		Global_2404994.f_1684 = 0;
		Global_2404994.f_1683 = 0;
	}
}

void func_90()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_651), &(Global_2404994.f_1167), 516);
	Global_2404994.f_477 = { Global_2404994.f_481 };
	if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		Global_2404994.f_1683 = 0;
	}
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411314 = 0;
	}
	Global_2404994.f_477 = iParam0;
	Global_2404994.f_477.f_1 = unk_0x3ED6DDB11A7AD67F();
	Global_2404994.f_477.f_2 = iParam1;
	Global_2404994.f_477.f_3 = iParam2;
}

bool func_92()
{
	return Global_1574250;
}

int func_93(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 14))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1589933[iParam0 /*601*/].f_257.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
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
		if (func_96(iParam0))
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
		if (func_95(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_95(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_690(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_26(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_690(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_26(Global_2421621[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_97(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_310(iParam0);
		func_98(iParam0);
	}
}

void func_98(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[3];
	
	if (iLocal_3417 == -1)
	{
		return;
	}
	if (func_256(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_9695 + 1000 - func_9(&(Local_99.f_1.f_1), 0, 0));
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
	if (!unk_0xF44A5E894FE76438(Local_397[iLocal_3417 /*5*/].f_4, 12))
	{
		if (!func_160(iLocal_3417))
		{
			func_121(iVar6, iVar7, func_122());
			return;
		}
	}
	func_120(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_27();
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = unk_0xBBDA792448DB5A89(func_66(Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_66(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar8[iVar0] = 0;
		if (func_119(1))
		{
			if (Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (unk_0x1E0256D6F1052B31(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_62(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_140(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_66(func_117(iParam0, iLocal_3417));
	func_100(Local_1244[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1244[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1244[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3420, iVar7, func_122(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1244[iParam0 /*68*/].f_53[0 /*4*/] == unk_0x1E7FB1CA38C403F6())
	{
		if (!unk_0xF44A5E894FE76438(iLocal_558, 23))
		{
			if (func_99(1))
			{
				unk_0xA93E75A5493862BD(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xA93E75A5493862BD(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xB8A73E7DA87B2968(&iLocal_558, 23);
		}
	}
	else if (unk_0xF44A5E894FE76438(iLocal_558, 23))
	{
		if (func_99(1))
		{
			unk_0xA93E75A5493862BD(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xA93E75A5493862BD(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x4EA098C870B73AB7(&iLocal_558, 23);
	}
}

bool func_99(bool bParam0)
{
	return func_58(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_114(0) == 0)
	{
		return;
	}
	func_113();
	iVar1 = 0;
	if (((Global_2453539[0] != iParam0 || Global_2453539[1] != iParam1) || Global_2453539[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2453539[0] = iParam0;
	Global_2453539[1] = iParam1;
	Global_2453539[2] = iParam2;
	Global_2453539[3] = 0;
	Global_2453539[4] = 0;
	if (Global_2453539[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[0]);
			Global_2453545[0 /*16*/] = { func_112(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_109(iParam3, &(Global_2453545[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12);
		}
	}
	if (Global_2453539[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[1]);
			Global_2453545[1 /*16*/] = { func_112(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_109(iParam4, &(Global_2453545[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13);
		}
	}
	if (Global_2453539[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[2]);
			Global_2453545[2 /*16*/] = { func_112(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_109(iParam5, &(Global_2453545[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (unk_0xFB6B3EEFAB2DD12C() != func_27())
			{
				if (func_105(unk_0xFB6B3EEFAB2DD12C()) == 0)
				{
					func_109(iParam6, unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_105(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_109(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_105(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_109(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_104(sParam10))
	{
		sVar2 = sParam10;
	}
	func_101(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
	*uParam8 = 0;
}

void func_101(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_103(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_102(7, iVar0);
		Global_1354290.f_4131[iVar0] = uParam0;
		StringCopy(&(Global_1354290.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_4131.f_172[iVar0] = iParam2;
		Global_1354290.f_4131.f_216[iVar0] = iParam3;
		Global_1354290.f_4131.f_183[iVar0] = iParam4;
		Global_1354290.f_4131.f_194[iVar0] = iParam5;
		Global_1354290.f_4131.f_249[iVar0] = iParam6;
		Global_1354290.f_4131.f_260[iVar0] = iParam7;
		Global_1354290.f_4131.f_205[iVar0] = uParam8;
		Global_1354290.f_4131.f_314[iVar0] = iParam9;
		Global_1354290.f_4131.f_325[iVar0] = iParam10;
		Global_1354290.f_4131.f_357[iVar0] = iParam11;
		Global_1354290.f_4131.f_238[iVar0] = uParam12;
		Global_1354290.f_4131.f_271[iVar0] = iParam13;
		Global_1354290.f_4131.f_368[iVar0] = iParam14;
		Global_1354290.f_4131.f_379[iVar0] = iParam15;
		Global_1354290.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_102(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_103(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

int func_104(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		if ((func_108() && !func_107()) || func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			return 1;
		}
		if (func_18(&(Global_1574332.f_13)))
		{
			if (!func_5(&(Global_1574332.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1574332.f_13));
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 9);
}

bool func_106(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

bool func_107()
{
	return Global_1312412.f_1;
}

bool func_108()
{
	return Global_1312412;
}

void func_109(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_103(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_102(6, iVar0);
		Global_1354290.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_3579.f_183[iVar0] = iParam3;
		Global_1354290.f_3579.f_172[iVar0] = iParam2;
		Global_1354290.f_3579.f_260[iVar0] = iParam4;
		Global_1354290.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1354290.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1354290.f_3579.f_443[iVar0] = iParam7;
		Global_1354290.f_3579.f_454[iVar0] = iParam8;
		Global_1354290.f_3579.f_497[iVar0] = iParam9;
		Global_1354290.f_3579.f_508[iVar0] = iParam10;
		Global_1354290.f_3579.f_205[iVar0] = iParam11;
		Global_1354290.f_3579.f_216[iVar0] = iParam12;
		Global_1354290.f_3579.f_227[iVar0] = iParam13;
		Global_1354290.f_3579.f_238[iVar0] = iParam14;
		Global_1354290.f_3579.f_249[iVar0] = iParam15;
		Global_1354290.f_3579.f_519[iVar0] = iParam16;
		Global_1354290.f_3579.f_530[iVar0] = iParam17;
		Global_1354290.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_111())
		{
			Global_1354290.f_941 = 1;
		}
		if (unk_0x2D337DD29A7ABD30())
		{
			iVar2 = 0;
			unk_0xBC8A4E0C71749580(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1354290.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1354290.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1354290.f_941 = 1;
			}
			if (func_110())
			{
				Global_1354290.f_945 = 1;
			}
		}
	}
}

int func_110()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0xBC8A4E0C71749580(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	if ((unk_0x37F0B37A9EF3F53B() == 8 || unk_0x37F0B37A9EF3F53B() == 9) || unk_0x37F0B37A9EF3F53B() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_112(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_113()
{
	unk_0x7FE30C99EA3439F7(8);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(7);
	Global_2454006 = 1;
}

int func_114(bool bParam0)
{
	if (func_116())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_115()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

bool func_116()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 12);
}

float func_117(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_118(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_118(int iParam0, int iParam1)
{
	return Local_99.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_119(bool bParam0)
{
	return func_62(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

void func_120(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x758A470BA92498EA())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
		{
			if (!unk_0xC55B9553B3EDADE9(&(Global_2494149.f_4610)))
			{
				unk_0x26BE9B51F0344E7F(&(Global_2494149.f_4610));
			}
			unk_0xE64FA07C00C340C6(1);
			unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_FIRA");
			unk_0xB3C38A4B84C152BF("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xFA320609400AECAE("DisableFlightMusic", 0);
			unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
			unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
			if (Global_2494149.f_4618 > -1)
			{
				unk_0xE723055FBC256C26(Global_2494149.f_4618);
				Global_2494149.f_4618 = -1;
			}
			Global_2494149.f_4608 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
		{
			if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 4))
			{
				if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 2))
				{
					if (unk_0xF404D7919ACA4D52())
					{
						if ((!unk_0xCC257DA11A122B5F(unk_0x609D1508B10D01AD(unk_0xFDD9C8C921B18ACC()), "OFF") && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && !unk_0xC55B9553B3EDADE9(&(Global_2494149.f_4610)))
						{
							StringCopy(&(Global_2494149.f_4610), "", 32);
							unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_FIRA");
							unk_0xB3C38A4B84C152BF("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xFA320609400AECAE("DisableFlightMusic", 0);
							unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
							unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
							unk_0xE64FA07C00C340C6(1);
							unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 2);
						}
					}
				}
				else if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0xF44A5E894FE76438(Global_2494149.f_4608, 5))
				{
					unk_0x26BE9B51F0344E7F("OFF");
				}
			}
			else if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S");
				}
				unk_0xE3E53903AE9B5BD5("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 1);
			}
			else if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x99F3E326DD5C12B2() != 0)
					{
						if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !unk_0xC254088DC917A529())
						{
							StringCopy(&(Global_2494149.f_4610), unk_0xB042A95A94F0D13B(), 32);
							unk_0x26BE9B51F0344E7F("OFF");
						}
						unk_0xE64FA07C00C340C6(1);
						unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 3))
				{
					Global_2494149.f_4618 = unk_0xA6EB3FD2D3CE76A2();
					unk_0xA93E75A5493862BD(Global_2494149.f_4618, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
			{
				Global_2494149.f_4608 = 0;
				Global_2494149.f_4618 = -1;
				unk_0xFB2A602DE19D1E98("FM_COUNTDOWN_30S_KILL");
				unk_0xE64FA07C00C340C6(0);
				unk_0xC86A1E7DAC7A9357("FM_PRE_COUNTDOWN_30S");
				unk_0xFA320609400AECAE("DisableFlightMusic", 1);
				unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
				unk_0xFA320609400AECAE("AllowScoreAndRadio", 1);
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 0);
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0xF44A5E894FE76438(Global_2494149.f_4608, 2))
				{
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 2);
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 5);
				}
				else
				{
					unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 5);
					unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
		{
			Global_2494149.f_4608 = 0;
			Global_2494149.f_4618 = -1;
			unk_0xFB2A602DE19D1E98("FM_COUNTDOWN_30S_KILL");
			unk_0xE64FA07C00C340C6(0);
			unk_0xC86A1E7DAC7A9357("FM_PRE_COUNTDOWN_30S");
			unk_0xFA320609400AECAE("DisableFlightMusic", 1);
			unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
			unk_0xFA320609400AECAE("AllowScoreAndRadio", 1);
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 0);
			if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 2);
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 5);
			}
			else
			{
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 2);
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 5);
			}
		}
	}
}

void func_121(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_114(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_104(sParam2))
	{
		sVar0 = sParam2;
	}
	func_101(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0);
}

char* func_122()
{
	return "HUD_COUNTDOWN";
	switch (func_211(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_123())
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

int func_123()
{
	if (func_211(unk_0xFB6B3EEFAB2DD12C()) == 133)
	{
		return Global_2494149.f_4692;
	}
	return -1;
}

bool func_124(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/].f_72;
}

int func_125(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam1) > 63)
	{
		return 0;
	}
	if (func_135(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_129();
	Global_1312571 = 9;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_128();
	func_127(bParam2);
	func_126();
	return 1;
}

void func_126()
{
	unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 1);
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x4EA098C870B73AB7(&(Global_1312571.f_59), 0);
}

void func_128()
{
	Global_1312571.f_10 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 86400000);
	Global_1312571.f_11 = unk_0x7414B386C0020BEC();
}

void func_129()
{
	func_131();
	func_130(0);
}

void func_130(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1995B52453EF6537();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x7414B386C0020BEC();
		Global_1312571.f_11 = unk_0x7414B386C0020BEC();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_131()
{
	if (!func_134())
	{
	}
	if (func_133())
	{
		unk_0x9F87DFE2C82D23E7(&(Global_1312571.f_12));
		func_132();
		unk_0x231B7D69E0C82ABD();
	}
}

void func_132()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			unk_0xF99222307D7150A9(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_133()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_134()
{
	if (!func_133())
	{
		return 0;
	}
	unk_0xC450F7ACA7F40F98(&(Global_1312571.f_12));
	func_132();
	return unk_0x1B1A26465DF20C87();
}

bool func_135(char* sParam0, char* sParam1)
{
	if (!func_133())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam1) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

void func_136(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_137(sParam0, unk_0x7746E8ACE891BFA4(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312571 = 15;
		Global_1312571.f_56 = iParam3;
		Global_1312571.f_57 = iParam4;
	}
}

int func_137(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam2) > 63)
	{
		return 0;
	}
	if (func_138(sParam0, sParam1, sParam2) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_129();
	Global_1312571 = 10;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	StringCopy(&(Global_1312571.f_32), sParam2, 64);
	Global_1312571.f_58 = uParam4;
	Global_1312571.f_56 = uParam4;
	func_128();
	func_127(bParam3);
	func_126();
	return 1;
}

bool func_138(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_133())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12)))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam1) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16)))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam2) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_32));
}

void func_139(char* sParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xA97D81951B964419(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF5640E619D8FCD5B(iParam2);
	}
	unk_0x4C51E4FBCD1D8830(uParam1);
	if (!iParam4 == 0)
	{
		unk_0xF5640E619D8FCD5B(iParam4);
	}
	unk_0xB1953EBEF4D6BD85(sParam3);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam5);
}

int func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_630(iParam0))
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
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_630(unk_0xFB6B3EEFAB2DD12C()) || (func_158() && func_629()))
	{
		uVar1 = func_157();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(uVar1))
			{
				if (unk_0x61263E0F7C8C9996(uVar1) != -1)
				{
					if (func_690(unk_0x61263E0F7C8C9996(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_155(iParam1, iParam0, 0);
							}
							else
							{
								return func_148(iParam0, unk_0x61263E0F7C8C9996(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_148(iParam0, unk_0x61263E0F7C8C9996(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_155(iParam1, iParam0, 0);
				}
				else
				{
					return func_141(0, -1, 0);
				}
			}
			else
			{
				return func_141(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_155(iParam1, iParam0, 0);
		}
		else
		{
			return func_148(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_148(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_141(bool bParam0, int iParam1, bool bParam2)
{
	return func_142(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_142(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_147(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_146(1);
				}
				else
				{
					return func_146(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_143(iVar0, iParam2, 1);
			}
			else
			{
				return func_143(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_146(1);
	}
	return func_146(0);
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_145(iParam0, iParam1);
	if (func_144(Global_1632166.f_86360))
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

int func_144(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7770[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
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
			if (!func_147(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_147(int iParam0, int iParam1, int iParam2)
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
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_154())
			{
				iVar3 = func_153(iParam0);
				if (!iVar3 == -1)
				{
					return func_151(iVar3);
				}
			}
			if ((func_150(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_147(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_146(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_149(1);
			}
			else
			{
				return func_142(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_146(1);
			}
			else
			{
				return func_142(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_153(iParam0);
	if (!iVar4 == -1)
	{
		return func_151(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_149(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_152(iParam0);
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

var func_152(int iParam0)
{
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_153(int iParam0)
{
	if (!iParam0 == func_27())
	{
		if (func_62(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_53(iParam0)];
		}
	}
	return -1;
}

bool func_154()
{
	return Global_2443089.f_12;
}

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_154())
	{
		iVar1 = func_153(iParam1);
		if (!iVar1 == -1)
		{
			return func_151(iVar1);
		}
	}
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
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
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_142(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_156(iParam0);
	}
	return iVar0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
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

var func_157()
{
	return Global_2359301.f_2;
}

bool func_158()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

char* func_159()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_53(unk_0xFB6B3EEFAB2DD12C());
	if (iVar0 != func_27())
	{
		if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (((func_29(iVar0, 28) || func_29(unk_0xFB6B3EEFAB2DD12C(), 28)) || func_55(iVar0)) && !func_54(iVar0))
			{
				return func_56(iVar0, 0);
			}
			if (!unk_0xF1A016B51831B87B() && !unk_0x9F33BB03A41E0DCC(0, -1, 1))
			{
				return func_56(iVar0, 0);
			}
		}
		sVar1 = func_61(&(Global_1618089[iVar0 /*390*/].f_11.f_97));
		if (unk_0xC55B9553B3EDADE9(sVar1))
		{
			return func_56(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_160(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Local_397[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_397[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_161(char* sParam0, bool bParam1)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return;
	}
	if (func_162(sParam0))
	{
		return;
	}
	func_129();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_128();
	func_127(bParam1);
	func_126();
}

bool func_162(char* sParam0)
{
	if (!func_133())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_163(sParam0);
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12));
}

bool func_163(char* sParam0)
{
	if (!func_133())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

void func_164()
{
	if (!func_133())
	{
		return;
	}
	if (!unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == Global_1312571.f_9)
	{
		return;
	}
	func_129();
}

bool func_165(int iParam0)
{
	return Global_2433082.f_2199[0 /*76*/].f_1 == iParam0;
}

int func_166(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_51(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_45(&Var0);
}

int func_167(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_51(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam6;
	return func_45(&Var0);
}

int func_168()
{
	return 21;
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_53(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_53(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_170(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xFA320609400AECAE("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
	}
	Global_2494149.f_4618 = -1;
	bVar0 = (func_31(unk_0xFB6B3EEFAB2DD12C(), 0) && func_30(unk_0xFB6B3EEFAB2DD12C()));
	if (bParam6)
	{
		func_193(21, 1);
	}
	else
	{
		func_190(iParam0, -1);
		if (func_189(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1574332.f_3 = iParam0;
		}
		else
		{
			func_188(iParam0);
		}
		Global_1574332.f_4 = -1;
		if (func_189(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 5);
		}
		if ((func_108() && !func_107()) || func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 4);
		}
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 17);
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 20);
		if (func_187(iParam0))
		{
			func_186();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_183(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xFA5E84DCAE200259(fParam2);
			if (iParam0 == 146)
			{
				unk_0x028AA922F2B17B2A(0);
				unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
				unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
			}
		}
		if (func_181(iParam0))
		{
			unk_0x028AA922F2B17B2A(0);
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
			unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391043)
			{
				func_179(1);
				if (func_176(0))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 9);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_174(1);
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 12);
		}
		if (bParam5)
		{
			func_173();
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_171(iParam0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 21);
			}
		}
	}
	Global_2481896 = 1;
}

int func_171(int iParam0)
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
	if (func_172())
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	switch (func_123())
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

void func_173()
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4609), 0);
}

void func_174(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91538.f_8 = 1;
	}
	else
	{
		Global_91538.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_175(iVar0);
		iVar0++;
	}
}

void func_175(int iParam0)
{
	Global_91538.f_160[iParam0] = 1;
	Global_91538.f_159 = 1;
}

int func_176(int iParam0)
{
	var uVar0;
	
	uVar0 = func_177(2516, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xF44A5E894FE76438(uVar0, 0) && unk_0xF44A5E894FE76438(iVar0, 1)) && unk_0xF44A5E894FE76438(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xF44A5E894FE76438(iVar0, 3) && unk_0xF44A5E894FE76438(iVar0, 4)) && unk_0xF44A5E894FE76438(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xF44A5E894FE76438(iVar0, 6) && unk_0xF44A5E894FE76438(iVar0, 7)) && unk_0xF44A5E894FE76438(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xF44A5E894FE76438(iVar0, 9) && unk_0xF44A5E894FE76438(iVar0, 10)) && unk_0xF44A5E894FE76438(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_178(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

void func_179(int iParam0)
{
	if (func_180() && iParam0)
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

int func_180()
{
	if ((((Global_979732 != -1 && Global_979732 != 33) && Global_979732 != 35) && Global_979732 != 37) && Global_979732 != 21)
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_182(unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

void func_183(float fParam0)
{
	float fVar0;
	
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_184())
	{
		return;
	}
	fVar0 = (Global_2494149.f_4705 - fParam0);
	if (unk_0x597C1E51157E5516(Global_2494149.f_4706))
	{
		if (!Global_2494149.f_4706 == unk_0x3ED6DDB11A7AD67F() && unk_0xC3D3EC28F0EB3C6D(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2494149.f_4705 = fParam0;
	Global_2494149.f_4706 = unk_0x3ED6DDB11A7AD67F();
}

int func_184()
{
	switch (func_185())
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

int func_185()
{
	return Global_25185;
}

void func_186()
{
	Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_203 = 0;
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4424), 1);
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_188(int iParam0)
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/] = iParam0;
}

bool func_189(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 2);
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_192(0) || func_192(func_191(iVar0)))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 2);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 2);
		}
	}
}

int func_191(int iParam0)
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

bool func_192(int iParam0)
{
	var uVar0;
	
	uVar0 = func_177(2462, -1, 0);
	return unk_0xF44A5E894FE76438(uVar0, iParam0);
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
	{
		unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
	}
}

void func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_1 == iParam0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

float func_195(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_40;
}

bool func_196(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_197(int iParam0)
{
	unk_0xCF2D12C5E6815CC3(3, 21, 200, 0, 0);
	if (iParam0 && !func_199())
	{
		unk_0xA93E75A5493862BD(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_198(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam1);
}

bool func_199()
{
	return Global_2433082.f_2199[0 /*76*/].f_1 != 0;
}

void func_200(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_108())
		{
			func_203(0);
			func_202();
		}
		if (func_192(0))
		{
			uVar0 = func_177(2462, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, 0);
			func_202();
		}
		if (func_192(func_191(func_211(unk_0xFB6B3EEFAB2DD12C()))))
		{
			uVar0 = func_177(2462, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, func_191(func_211(unk_0xFB6B3EEFAB2DD12C())));
			func_202();
		}
		if (func_201())
		{
			func_202();
		}
		if (func_211(unk_0xFB6B3EEFAB2DD12C()) > -1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 7);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 7);
	}
}

int func_201()
{
	if (Global_2433082.f_655.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_202()
{
	if (func_201())
	{
		Global_2433082.f_655.f_16 = 1;
	}
}

void func_203(int iParam0)
{
	if (func_108())
	{
		if (iParam0 == 1)
		{
			if (Global_2494149.f_4257 == -1)
			{
				Global_2494149.f_4257 = 60000;
			}
			func_210(&(Global_2494149.f_4255), 0, 0);
			if (Global_2494149.f_4260 == -1)
			{
				Global_2494149.f_4260 = 10000;
			}
			func_210(&(Global_2494149.f_4258), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_209(1);
		}
		if ((!unk_0x8676DE83D4396C39() && !func_208()) && !func_204(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_979731 = 0;
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_8 = 0;
	}
}

int func_204(int iParam0)
{
	if (func_205(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_206(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_206(int iParam0)
{
	return func_207(iParam0);
}

bool func_207(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

bool func_208()
{
	return Global_2443089.f_718;
}

void func_209(bool bParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (!func_108())
		{
			if (func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 0);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 0);
			}
			unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 1f);
			unk_0x78474BABFD9E36D2(0);
			unk_0x8F5ECEB25B6D76B3(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0xD06F9BE40EFDA8FC(0, 0);
				}
			}
		}
		else
		{
			if (func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 0);
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 1);
				unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0xD06F9BE40EFDA8FC(1, 0);
				}
			}
			unk_0x78474BABFD9E36D2(1);
			unk_0x8F5ECEB25B6D76B3(0);
		}
	}
}

void func_210(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/];
	}
	return -1;
}

bool func_212(int iParam0, int iParam1)
{
	return Local_397[iParam0 /*5*/].f_1[iParam1];
}

int func_213(bool bParam0, bool bParam1)
{
	if (func_215(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_105(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_214(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_214(int iParam0)
{
	return func_36(iParam0, 0);
}

bool func_215(int iParam0)
{
	if (func_189(iParam0))
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8);
}

void func_216(int iParam0)
{
	if (!unk_0xF44A5E894FE76438(iLocal_558, 22))
	{
		if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
		{
			if (func_160(unk_0x1E7FB1CA38C403F6()))
			{
				if (!func_256(1, 1))
				{
					if (Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/] != unk_0x1E7FB1CA38C403F6())
							{
								if (!func_169(unk_0xFB6B3EEFAB2DD12C(), Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_217();
									unk_0xB8A73E7DA87B2968(&iLocal_558, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217()
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_1642), 19);
}

void func_218(int iParam0)
{
	if (iLocal_395 != func_8(iParam0))
	{
		iLocal_395 = func_8(iParam0);
		if (iLocal_395 > -1)
		{
			iLocal_396++;
			unk_0xB8A73E7DA87B2968(&iLocal_558, 25);
		}
	}
}

void func_219(int iParam0)
{
	if (func_604() == 1)
	{
		if (func_8(iParam0) == unk_0x1E7FB1CA38C403F6() && !func_213(1, 0))
		{
			if (!func_182(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_220(1);
			}
		}
		else if (func_182(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_220(0);
		}
	}
}

void func_220(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		Global_2454635 = func_211(unk_0xFB6B3EEFAB2DD12C());
		if (Global_2454635 == -1)
		{
			Global_2454635 = Global_1574332.f_4;
		}
		if (func_253(Global_2454635) == 0)
		{
			if (func_252(1) > 0)
			{
				func_251(26, -1);
			}
		}
		if (func_108())
		{
			func_203(0);
			func_202();
		}
		if (func_192(0))
		{
			uVar1 = func_177(2462, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar1, 0);
			func_202();
		}
		if (func_192(func_191(func_211(unk_0xFB6B3EEFAB2DD12C()))))
		{
			uVar1 = func_177(2462, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar1, func_191(func_211(unk_0xFB6B3EEFAB2DD12C())));
			func_202();
		}
		if (func_201())
		{
			func_202();
		}
		unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 0);
	}
	else
	{
		if ((!func_250() && !func_249()) && !func_248())
		{
			Global_2454635 = -1;
			func_247(26, -1);
		}
		else if (func_253(Global_2454635) == 0)
		{
			iVar0 = func_232(1);
			if (iVar0 > 0)
			{
				func_227(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_223(1926, 1, -1);
				func_227(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_221(26, -1))
		{
			Global_2454635 = -1;
			func_247(26, -1);
		}
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 0);
	}
}

bool func_221(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	uVar0 = func_222(iParam1);
	uVar1 = unk_0x2428688746A375BE(uVar0);
	return unk_0xF44A5E894FE76438(uVar1, iParam0);
}

int func_222(int iParam0)
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

void func_223(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_177(iParam0, func_178(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_226(iParam0))
	{
		func_225(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_224(iParam0, iVar0, iParam2, 1);
	}
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_178(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_178(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_178(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_178(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_178(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_178(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_178(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_178(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_178(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_178(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_178(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_178(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_178(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_178(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_178(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_178(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_178(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_178(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_178(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_178(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_178(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_178(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_178(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_178(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_178(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_178(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_178(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_178(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_178(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_178(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_178(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_178(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_178(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_178(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

int func_226(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

void func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_231(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_230(iParam0))
	{
		func_229(iParam0, iVar0);
	}
	else
	{
		func_228(iParam0, iVar0);
	}
}

void func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_229(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, 1);
	}
}

int func_230(int iParam0)
{
	if (Global_1362328)
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

int func_231(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2453529 == 0)
	{
		return 0;
	}
	if (func_248())
	{
		if (unk_0x8676DE83D4396C39() || (func_246() || func_244()))
		{
			Global_2452483 = 1;
		}
	}
	Global_2453529 = 0;
	if (Global_1318055)
	{
		iVar0 = 1;
	}
	if (Global_2452483)
	{
		iVar0 = 1;
	}
	if (Global_2452482)
	{
		iVar0 = 1;
	}
	if (func_243(Global_100680.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2452408)
	{
		iVar0 = 1;
	}
	if (func_242(512))
	{
		iVar0 = 1;
	}
	if (func_241(128))
	{
		iVar0 = 1;
	}
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_240())
	{
		iVar0 = 0;
	}
	if (Global_2452968)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_238())
		{
			if (Global_1632166.f_86999 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar0 = 0;
	}
	if (func_237())
	{
		iVar0 = 0;
	}
	if ((Global_2452483 || Global_2452482) || Global_1318055)
	{
		if (func_244())
		{
			iVar0 = 0;
		}
	}
	Global_2452968 = 0;
	Global_2452482 = 0;
	Global_2452483 = 0;
	Global_1318055 = 0;
	Global_2452408 = 0;
	func_235(&(Global_100680.f_1), 32);
	func_234(512);
	func_233(128);
	return iVar0;
}

void func_233(int iParam0)
{
	Global_100737 = (Global_100737 - (Global_100737 && iParam0));
}

void func_234(int iParam0)
{
	Global_100738 = (Global_100738 - (Global_100738 && iParam0));
}

void func_235(var uParam0, int iParam1)
{
	func_236(uParam0, iParam1);
}

void func_236(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_237()
{
	if (((Global_1574272 || Global_1574243) || func_36(unk_0xFB6B3EEFAB2DD12C(), 0)) || func_158())
	{
		return 1;
	}
	return 0;
}

int func_238()
{
	switch (func_239())
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

int func_239()
{
	return Global_2443860.f_1.f_2818;
}

bool func_240()
{
	return Global_1315206;
}

bool func_241(int iParam0)
{
	return (Global_100737 && iParam0) != 0;
}

bool func_242(int iParam0)
{
	return (Global_100738 && iParam0) != 0;
}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_244()
{
	if (func_253(Global_2454635))
	{
		return 0;
	}
	if (func_245(unk_0xFB6B3EEFAB2DD12C(), 146))
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/] == iParam1)
	{
		return func_182(iParam0);
	}
	return 0;
}

int func_246()
{
	if (func_253(Global_2454635))
	{
		return 0;
	}
	if (func_182(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

void func_247(int iParam0, int iParam1)
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
			unk_0x4283463A361766E5(0, iParam1);
			break;
		
		default:
			uVar1 = func_222(iParam1);
			iVar0 = unk_0x2428688746A375BE(uVar1);
			if (unk_0xF44A5E894FE76438(iVar0, iParam0))
			{
				unk_0x4EA098C870B73AB7(&iVar0, iParam0);
				unk_0x4283463A361766E5(iVar0, iParam1);
			}
			break;
	}
}

bool func_248()
{
	return unk_0xF44A5E894FE76438(Global_1312419, 0);
}

bool func_249()
{
	return Global_1315198;
}

bool func_250()
{
	return Global_1315229;
}

void func_251(int iParam0, int iParam1)
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
			unk_0x4283463A361766E5(0, iParam1);
			break;
		
		default:
			uVar1 = func_222(iParam1);
			iVar0 = unk_0x2428688746A375BE(uVar1);
			if (!unk_0xF44A5E894FE76438(iVar0, iParam0))
			{
				unk_0xB8A73E7DA87B2968(&iVar0, iParam0);
				unk_0x4283463A361766E5(iVar0, iParam1);
			}
			break;
	}
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_240())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_238())
		{
			if (Global_1632166.f_86999 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar0 = 0;
	}
	if (func_237())
	{
		iVar0 = 0;
	}
	Global_2453529 = 1;
	return iVar0;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9895)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9897)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9894)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9898)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9899)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9900)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9896)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9901)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9902)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9903)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9904)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_254()
{
	if (func_256(0, 0))
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(iLocal_558, 25))
	{
		if (iLocal_395 == unk_0x1E7FB1CA38C403F6())
		{
			if (Local_383.f_11 == 0)
			{
				Local_383.f_11 = unk_0x632066A9E8CB2C4D();
			}
		}
		unk_0x4EA098C870B73AB7(&iLocal_558, 25);
	}
}

void func_255()
{
	if (func_196("KOTC_1STHELP"))
	{
		unk_0x04890EB0282525A5(1);
	}
	if (func_196("KOTC_OTHRKG"))
	{
		unk_0x04890EB0282525A5(1);
	}
	if (func_196("KOTC_YOUKNG"))
	{
		unk_0x04890EB0282525A5(1);
	}
	if (func_196("KOTC_CONTS"))
	{
		unk_0x04890EB0282525A5(1);
	}
}

int func_256(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (unk_0xF44A5E894FE76438(iLocal_558, 17))
	{
		return 1;
	}
	if (func_293(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (func_192(9))
	{
		return 1;
	}
	if (func_192(0))
	{
		return 1;
	}
	if (!func_271())
	{
		return 1;
	}
	if (func_264())
	{
		return 1;
	}
	if (func_259(4))
	{
		return 1;
	}
	if (func_258())
	{
		return 1;
	}
	if (func_213(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1747153)
	{
		return 1;
	}
	if (func_257(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	if (!func_690(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_35;
}

bool func_258()
{
	return Global_91538.f_304 > 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (func_258())
	{
		iVar0 = 0;
		while (iVar0 < 46)
		{
			if (func_263(iVar0) == iParam0)
			{
				if (func_260(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_260(int iParam0)
{
	return func_261(iParam0, 6, 1);
}

int func_261(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_185() == 0)
		{
			return unk_0xF44A5E894FE76438(func_177(func_262(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_263(int iParam0)
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
	}
	return 6;
}

int func_264()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_357.f_5, 0))
	{
		return 1;
	}
	if (func_266() && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 != 3)
	{
		return 1;
	}
	if (func_265() && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 != 3)
	{
		return 1;
	}
	if (Global_2394716)
	{
		return 1;
	}
	if (Global_1574332.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_265()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 5);
}

int func_266()
{
	if (((func_270() || func_269()) || func_268()) || func_267())
	{
		return 1;
	}
	return 0;
}

bool func_267()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 1);
}

bool func_268()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 2);
}

bool func_269()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 20);
}

bool func_270()
{
	return Global_2443089.f_577;
}

int func_271()
{
	if (func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
	{
		return 0;
	}
	if (unk_0xF5C5C10402E12CCB())
	{
		return 0;
	}
	if (unk_0xA488C8C46BFD5A39())
	{
		return 0;
	}
	if (func_204(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_292())
	{
		return 0;
	}
	if (func_291(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_290())
	{
		return 0;
	}
	if (func_280(unk_0xFB6B3EEFAB2DD12C()) == 3)
	{
		return 0;
	}
	if (func_278(func_279()))
	{
		return 0;
	}
	if (func_250())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (unk_0x8676DE83D4396C39())
	{
		return 0;
	}
	if (func_206(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!func_276())
	{
		return 0;
	}
	if (func_106(unk_0xFB6B3EEFAB2DD12C(), 0) || func_106(unk_0xFB6B3EEFAB2DD12C(), 3))
	{
		return 0;
	}
	if ((func_106(unk_0xFB6B3EEFAB2DD12C(), 12) || func_106(unk_0xFB6B3EEFAB2DD12C(), 14)) || func_106(unk_0xFB6B3EEFAB2DD12C(), 13))
	{
		return 0;
	}
	if (func_94(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_275(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (func_257(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (func_272(unk_0xFB6B3EEFAB2DD12C()) && Global_1589609.f_170)
	{
		return 0;
	}
	return 1;
}

int func_272(int iParam0)
{
	if (func_273(Global_1589933[iParam0 /*601*/].f_257.f_15))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0)
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

int func_274()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_275(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11);
}

int func_276()
{
	if (func_277() == 0)
	{
		return 1;
	}
	return 0;
}

int func_277()
{
	return Global_1312462.f_18;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 99:
		case 100:
		case 101:
		case 102:
		case 89:
			return 1;
		
		default:
	}
	return 0;
}

int func_279()
{
	return Global_2433082.f_2199[0 /*76*/].f_1;
}

int func_280(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_289(iParam0) && !func_189(iParam0)) && !unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8));
	bVar2 = func_288(iParam0);
	bVar3 = func_108();
	uVar4 = func_282();
	if ((bVar1 && (func_281(iParam0) || func_182(iParam0))) || uVar4)
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
	if (Global_2494149.f_4710.f_29 != iVar0)
	{
		Global_2494149.f_4710.f_29 = iVar0;
	}
	return iVar0;
}

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 7);
	}
	return 0;
}

int func_282()
{
	if ((func_29(unk_0xFB6B3EEFAB2DD12C(), 21) || func_29(unk_0xFB6B3EEFAB2DD12C(), 22)) || func_286())
	{
		return 1;
	}
	if (func_284())
	{
		func_283(22);
		return 1;
	}
	return 0;
}

void func_283(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

int func_284()
{
	if (func_31(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if ((func_108() && !func_107()) || func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			return 1;
		}
		else
		{
			func_285(27);
		}
	}
	return 0;
}

void func_285(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

int func_286()
{
	return func_287(286, -1);
}

int func_287(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_178(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_288(int iParam0)
{
	return func_29(iParam0, 20);
}

int func_289(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

bool func_290()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 5;
}

int func_291(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_264.f_4 != 0 || Global_2421621[iParam0 /*358*/].f_264.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_292()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
}

int func_293(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_294(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	int iVar1;
	
	Global_1574332.f_6 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param1);
	if (fVar0 < fParam5 && !func_189(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (iParam0 != 146 && !func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			func_308(Param1, 1, 0);
		}
		if ((!*uParam4 || unk_0xF44A5E894FE76438(Global_1574332.f_1, 3)) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			*uParam4 = 1;
			func_183(func_307(iParam0));
			unk_0xFA5E84DCAE200259(func_306(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_305(iParam0);
				unk_0x028AA922F2B17B2A(iVar1);
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > iVar1)
				{
					unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), iVar1, 1);
					unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 1);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 8);
			}
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 3);
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_189(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 3) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			func_304();
			unk_0xFA5E84DCAE200259(Global_262145.f_9907);
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 3);
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 3);
		}
	}
	else if ((*uParam4 || unk_0xF44A5E894FE76438(Global_1574332.f_1, 3)) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		*uParam4 = 0;
		func_304();
		unk_0xFA5E84DCAE200259(1f);
		unk_0x028AA922F2B17B2A(5);
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 8);
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 3);
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_295();
		}
	}
}

void func_295()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_24), &Global_2408525, 2);
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_26), &Global_2408527, 17);
	func_302();
	func_298(1, 1);
	func_296();
}

void func_296()
{
	func_297(0, 0);
}

void func_297(int iParam0, int iParam1)
{
	Global_2404994.f_22 = iParam0;
	Global_2404994.f_23 = iParam1;
}

void func_298(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_43), &Global_2408544, 312);
	}
	else
	{
		Global_2404994.f_43 = { Global_2408544 };
		Global_2404994.f_43.f_49 = { Global_2408544.f_49 };
		Global_2404994.f_43.f_52 = Global_2408544.f_52;
		Global_2404994.f_43.f_53 = Global_2408544.f_53;
	}
	if (bParam0)
	{
		func_301();
	}
	func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_300(0);
	func_299();
}

void func_299()
{
	struct<4> Var0;
	
	if (Global_2404994.f_477.f_1 == unk_0x3ED6DDB11A7AD67F())
	{
		Global_2404994.f_477 = { Var0 };
	}
}

void func_300(bool bParam0)
{
	if (bParam0)
	{
		Global_2404994.f_650 = 0;
	}
	else
	{
		Global_2404994.f_650 = 1;
	}
}

void func_301()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_355), &Global_2408856, 121);
}

void func_302()
{
	func_303();
	Global_2404994.f_1815 = 0;
}

void func_303()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404994.f_1816[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_304()
{
	if (unk_0x597C1E51157E5516(Global_2494149.f_4706))
	{
		if (!Global_2494149.f_4706 == unk_0x3ED6DDB11A7AD67F() && Global_2494149.f_4705 < 1f)
		{
			return;
		}
	}
	Global_2494149.f_4706 = -1;
	Global_2494149.f_4705 = 1f;
}

int func_305(int iParam0)
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

float func_306(int iParam0)
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

float func_307(int iParam0)
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

void func_308(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404994.f_43.f_49 = { Param0 };
	Global_2404994.f_43.f_52 = iParam3;
	Global_2404994.f_43.f_53 = iParam4;
}

Vector3 func_309(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_24;
}

void func_310(int iParam0)
{
	int iVar0;
	
	if (func_256(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1313[iVar0 /*49*/] = -1;
		Local_1313[iVar0 /*49*/].f_1 = func_27();
		Local_1313[iVar0 /*49*/].f_9 = 0;
		Local_1313[iVar0 /*49*/].f_31 = -1;
		if (Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1313[iVar0 /*49*/] = Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1313[iVar0 /*49*/].f_1 = Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1313[iVar0 /*49*/].f_9 = func_66(Local_99.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_311(&Local_1313, &(Local_1244[iParam0 /*68*/].f_66), 23, &uLocal_2882, &uLocal_2991, -1, 0);
}

void func_311(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_427(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_425() || iParam2 == 24)
	{
		if (func_382(uParam1, iParam2, uParam3, Global_1574103, 0, func_428()))
		{
			func_381(1);
			if ((!func_380() && !func_379()) || unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
			{
				if (func_378())
				{
					func_376();
				}
				else
				{
					unk_0x8C8A1913314B5A90(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_375(1);
						Global_1574103 = 0;
						iVar54 = -1;
						if (Global_1574251 != 1)
						{
							func_374(uParam1);
							if (unk_0xF44A5E894FE76438(uParam3->f_33, 7))
							{
								unk_0x4EA098C870B73AB7(&(uParam3->f_33), 7);
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
								if (func_690(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
									if (!func_36(iVar35, 0))
									{
										if ((unk_0x1E8AEE4F02F8E526(iVar35, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar35 /*358*/].f_239 != -1) || func_373(iVar35))
										{
											iVar44 = iVar35;
											if (func_63(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_370(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_367(unk_0xFB6B3EEFAB2DD12C(), 0) && func_366(unk_0xFB6B3EEFAB2DD12C()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_365())
							{
								if (func_690(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
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
							if ((func_364(iVar35) && func_360(iVar35, iParam2)) && func_690(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
								Var38 = { func_355(iVar35) };
								if (iVar35 == unk_0xFB6B3EEFAB2DD12C())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x7746E8ACE891BFA4(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_41(iVar35) };
								iVar37 = func_349(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
								}
								Global_1574103++;
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
									if (!func_365())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_344(&iVar43, &fVar45, (iParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_343(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_342(iVar35, 0);
								if (bVar34)
								{
									if (func_62(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_341(iParam5))
								{
									func_340(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_340(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xB8A73E7DA87B2968(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							if (func_690(iVar35, 0, 1) && !unk_0xF44A5E894FE76438(iVar49, iVar35))
							{
								iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							}
							else
							{
								iVar35 = func_27();
							}
							if (func_364(iVar35))
							{
								if (func_690(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
									Var38 = { func_355(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_41(iVar35) };
									iVar37 = func_349(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
									}
									Global_1574103++;
									iVar51 = func_342(iVar35, 1);
									if (bVar34)
									{
										if (func_62(iVar35, 1))
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
									func_324(iVar35, unk_0x7746E8ACE891BFA4(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							func_321(uParam3, uParam1);
						}
						func_3(&(uParam3->f_21));
						func_320();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 7))
						{
							func_319(uParam3, uParam1);
							func_318(uParam1, 0, 1);
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 7);
						}
						func_319(uParam3, uParam1);
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 11);
						}
						if (func_314(uParam3))
						{
							Global_1574251 = 1;
						}
						func_312(uParam3);
						if (Global_1574251 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574251 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x52622CA85B1C304B(*uParam1))
					{
						unk_0xCF1B9EC03D5AB61E(7);
						unk_0x733D2C5CCB2A212B(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xCF1B9EC03D5AB61E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_320();
			func_375(0);
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 7))
			{
				unk_0x4EA098C870B73AB7(&(uParam3->f_33), 7);
			}
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 10))
			{
				unk_0x4EA098C870B73AB7(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_312(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_313(0);
	}
}

void func_313(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574251 != 2)
		{
			Global_1574251 = 2;
		}
	}
	else
	{
		switch (Global_1574251)
		{
			case 0:
				Global_1574251 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_314(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7A4693BB354F3CD3(uParam0->f_37);
	if (iVar15 != func_27() && func_690(iVar15, 0, 1))
	{
		Var2 = { func_41(iVar15) };
		iVar1 = func_317(uParam0, uParam0->f_37);
		if (func_316(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_315(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_315(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_315(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_315(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x0661F477B16B2070(&Var2))
						{
							iVar16 = 1;
							func_315(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_315(uParam0, iVar0, 0);
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

void func_315(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_316(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5A7D76211B9373CD(&uParam0, 13);
}

var func_317(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_318(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3B6EF6403E3F1CAC(*uParam0, "COLLAPSE"))
	{
		unk_0x2C310F11D2096992(iParam1);
		unk_0xBBAAC5B2437ACF2A();
	}
	if (iParam2 == 1)
	{
		if (unk_0x3B6EF6403E3F1CAC(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

void func_319(var uParam0, var uParam1)
{
	if (!unk_0xF44A5E894FE76438(uParam0->f_33, 10))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam1, "SET_HIGHLIGHT");
		unk_0x1B215CC37BF52E79(uParam0->f_35);
		unk_0xBBAAC5B2437ACF2A();
		unk_0xB8A73E7DA87B2968(&(uParam0->f_33), 10);
	}
}

void func_320()
{
	if (Global_1574251 != 0)
	{
		Global_1574251 = 0;
	}
}

void func_321(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
		if (iVar2 != func_27())
		{
			if (func_690(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_323(uParam0->f_38[iVar0 /*2*/], 0);
					func_322(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589933[iVar0 /*601*/].f_202.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_322(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		if (unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_ICON"))
		{
			unk_0x1B215CC37BF52E79(iParam1);
			unk_0x1B215CC37BF52E79(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1B215CC37BF52E79(iParam3);
			}
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

int func_323(int iParam0, bool bParam1)
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

void func_324(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_339() && iParam4 < func_338())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574251 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x3B6EF6403E3F1CAC(*uParam2, sVar1))
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_337("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(iParam10);
			}
			func_337(sParam1);
			unk_0x1B215CC37BF52E79(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_337("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(65);
			}
			unk_0x1B215CC37BF52E79(-1);
			func_337("");
			if (uParam3->f_108 == 6)
			{
				func_337("");
			}
			else
			{
				func_337(&sParam5);
			}
			func_329(uParam3, iParam0);
			unk_0x36BBBC81A4DEE44C(sParam9);
			unk_0x36BBBC81A4DEE44C(sParam9);
			if (func_328(uParam3))
			{
				func_327("DPAD_FRIEND");
			}
			else if (func_326(uParam3))
			{
				func_327("DPAD_FRIEND");
			}
			else if (func_325(uParam3))
			{
				func_327("DPAD_CREW");
			}
			else
			{
				func_327("");
			}
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

bool func_325(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 6);
}

bool func_326(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 5);
}

void func_327(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

int func_328(var uParam0)
{
	if (func_326(uParam0) && func_325(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_329(var uParam0, int iParam1)
{
	if (func_336(iParam1))
	{
		unk_0x1B215CC37BF52E79(121);
	}
	else if (func_333(iParam1))
	{
		unk_0x1B215CC37BF52E79(122);
	}
	else
	{
		if (func_330())
		{
			uParam0->f_36 = 0;
		}
		unk_0x2C310F11D2096992(uParam0->f_36);
	}
}

int func_330()
{
	if (unk_0x8676DE83D4396C39())
	{
		if (func_331() || func_154())
		{
			return 1;
		}
	}
	return 0;
}

bool func_331()
{
	if (unk_0x8676DE83D4396C39())
	{
		return func_154();
	}
	return func_332(Global_1632166.f_86360);
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5054[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_333(int iParam0)
{
	if ((func_690(iParam0, 0, 1) && func_334()) && func_58(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_334()
{
	if (func_289(unk_0xFB6B3EEFAB2DD12C()) || func_335())
	{
		return 0;
	}
	return 1;
}

int func_335()
{
	switch (func_366(unk_0xFB6B3EEFAB2DD12C()))
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

int func_336(int iParam0)
{
	if (func_330())
	{
		if (func_690(iParam0, 0, 1))
		{
			return func_63(iParam0);
		}
	}
	if ((func_690(iParam0, 0, 1) && func_334()) && func_60(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_337(char* sParam0)
{
	unk_0xDC0269D08B29626C(sParam0);
}

int func_338()
{
	int iVar0;
	
	if (Global_1574105)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_339()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574105)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_340(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_339() && iParam3 < func_338())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574105)
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
		if (Global_1574251 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x52622CA85B1C304B(*uParam1))
		{
			if (unk_0x3B6EF6403E3F1CAC(*uParam1, sVar1))
			{
				unk_0x1B215CC37BF52E79(iParam3);
				if (unk_0xF44A5E894FE76438(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_337("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					func_327(sParam16);
				}
				else
				{
					func_337(&(uParam2->f_1));
				}
				unk_0x1B215CC37BF52E79(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_337("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1B215CC37BF52E79(iVar0);
				}
				else
				{
					unk_0x1B215CC37BF52E79(-1);
				}
				if (func_365())
				{
					func_337("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_ONE_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 5 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_ONE_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if ((uParam2->f_108 == 7 && !unk_0xC55B9553B3EDADE9(sParam16)) && !unk_0xC55B9553B3EDADE9(sParam17))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_TWO_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xB1953EBEF4D6BD85(sParam17);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 8 && !unk_0xC55B9553B3EDADE9(&(uParam2->f_104)))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x67B2488BFC4BE526(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xF99222307D7150A9(iParam10);
					}
					unk_0xB1953EBEF4D6BD85(&(uParam2->f_104));
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_CASH");
					unk_0x4A1042FFF3429779(iParam10, 1);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x0BBDB952BE56A9DF("FM_AE_CASH");
						unk_0x4A1042FFF3429779(iParam10, 1);
						unk_0xCB329F559FA7DCD0();
					}
					else
					{
						unk_0x0BBDB952BE56A9DF("FM_NG_CASH");
						unk_0x4A1042FFF3429779(iParam10, 1);
						unk_0xCB329F559FA7DCD0();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xC55B9553B3EDADE9(&(uParam2->f_104)))
					{
						func_327(&(uParam2->f_104));
					}
					else
					{
						func_337("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam14, 6);
					unk_0xCB329F559FA7DCD0();
				}
				else if (fParam13 != -1f)
				{
					unk_0x0BBDB952BE56A9DF("NUMBER");
					unk_0x67B2488BFC4BE526(fParam13, 1);
					unk_0xCB329F559FA7DCD0();
				}
				else if (iParam10 != -1)
				{
					unk_0x1B215CC37BF52E79(iParam10);
				}
				else
				{
					func_337("");
				}
				if (uParam2->f_108 == 6)
				{
					func_337("");
				}
				else
				{
					func_337(&sParam4);
				}
				func_329(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xC55B9553B3EDADE9(sParam8))
				{
					func_337("");
					func_337("");
				}
				else
				{
					unk_0x36BBBC81A4DEE44C(sParam8);
					unk_0x36BBBC81A4DEE44C(sParam8);
				}
				if (func_328(uParam2))
				{
					func_327("DPAD_FRIEND");
				}
				else if (func_326(uParam2))
				{
					func_327("DPAD_FRIEND");
				}
				else if (func_325(uParam2))
				{
					func_327("DPAD_CREW");
				}
				else
				{
					func_327("");
				}
				unk_0xBBAAC5B2437ACF2A();
			}
		}
	}
}

int func_341(int iParam0)
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

int func_342(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_289(iParam0)) && !func_288(iParam0))
	{
		iVar0 = func_168();
	}
	iVar1 = func_153(iParam0);
	if (!iVar1 == -1)
	{
		return func_151(iVar1);
	}
	return iVar0;
}

char* func_343(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xD065018956F1AA2B())
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
			if (unk_0xD065018956F1AA2B())
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

int func_344(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_348(iParam3))
	{
		*fParam1 = (func_345(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_341(iParam3))
	{
		*fParam1 = (func_345(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_345(int iParam0, int iParam1)
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
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_347(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_346(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_346(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_347(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_348(int iParam0)
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

int func_349(int iParam0)
{
	int iVar0;
	
	iVar0 = func_352(iParam0);
	if (iVar0 == -1)
	{
		func_350(iParam0, 1);
		return 0;
	}
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_350(int iParam0, bool bParam1)
{
	if (!func_690(iParam0, 0, 1))
	{
		return;
	}
	if (func_352(iParam0) != -1)
	{
		return;
	}
	if (Global_1363410)
	{
		if (iParam0 == Global_1363410.f_1)
		{
			return;
		}
	}
	if (func_351(iParam0))
	{
		return;
	}
	if (Global_1363448 >= 32)
	{
		return;
	}
	Global_1363415[Global_1363448] = iParam0;
	Global_1363448++;
	if (bParam1)
	{
	}
}

int func_351(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363448)
	{
		if (Global_1363415[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_352(int iParam0)
{
	int iVar0;
	
	if (!func_690(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1363408 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363408)
	{
		if (Global_1363247[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x23723A703C39388B(Global_1363247[iVar0 /*5*/].f_2) && unk_0x4636FE7BA67FB26C(Global_1363247[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_353(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_353(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1363408)
	{
		return;
	}
	if (unk_0x23723A703C39388B(Global_1363247[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1363247[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x48C5A96AE7C462A4(Global_1363247[iParam0 /*5*/].f_2), 64);
			unk_0x776A0FA6BC6101E2(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB8129A62F0984659(Global_1363247[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1363408)
	{
		Global_1363247[iVar32 /*5*/] = { Global_1363247[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_354(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_354(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

struct<4> func_355(int iParam0)
{
	struct<4> Var0;
	
	if (func_690(iParam0, 0, 1))
	{
		Global_2482005 = { func_41(iParam0) };
		if (unk_0xF1A016B51831B87B())
		{
			if (func_316(Global_2482005))
			{
				if (!unk_0xD59699C2E1196EDA(&Global_2482005))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xDE49089F060E6818(0))
		{
			return Var0;
		}
		if (func_359(&Global_2482005))
		{
			Global_2481935 = { func_357(iParam0) };
			func_356(&Global_2481935, &Var0);
		}
	}
	return Var0;
}

void func_356(var uParam0, var uParam1)
{
	unk_0x80BC8B50E2E17138(uParam0, 35, uParam1);
}

struct<35> func_357(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_358(iParam0))
	{
		return Global_1315261[unk_0xFB6B3EEFAB2DD12C() /*35*/];
	}
	Var0 = { func_41(iParam0) };
	unk_0xF6955213DB8BD7D3(&Var13, 35, &Var0);
	return Var13;
}

int func_358(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	return 0;
}

int func_359(var uParam0)
{
	if (unk_0xC3BB749150EAA702())
	{
		if (unk_0x527DE7DC62A1D335() && unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_189(iParam0) || func_363(iParam0)) || func_215(iParam0))
		{
			return 0;
		}
	}
	if (!func_362(iParam0))
	{
		return 0;
	}
	if ((!func_361(iParam0) && Global_2421621[iParam0 /*358*/].f_239 == -1) && !func_373(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_361(int iParam0)
{
	if (func_690(iParam0, 0, 1))
	{
		if (func_690(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
		{
			if (unk_0x1E8AEE4F02F8E526(iParam0, unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_362(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 22);
}

int func_363(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10) || unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 9));
	}
	return 0;
}

int func_364(int iParam0)
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
		if (unk_0xF44A5E894FE76438(Global_1589933[iVar0 /*601*/].f_138, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_365()
{
	switch (func_366(unk_0xFB6B3EEFAB2DD12C()))
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
	switch (func_211(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_288(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_366(unk_0xFB6B3EEFAB2DD12C()))
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

int func_366(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_367(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 && func_368(Global_1618089[iParam0 /*390*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1)
	{
		if (func_368(Global_1618089[iParam0 /*390*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_368(int iParam0)
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
	return func_369(iParam0, 0);
	return 0;
}

int func_369(int iParam0, int iParam1)
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

void func_370(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_690(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((unk_0x1E8AEE4F02F8E526(iVar1, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar1 /*358*/].f_239 != -1) || func_373(iVar1))
				{
					if (func_371(iVar1, iParam1, 0))
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

int func_371(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_372(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1618089[iParam0 /*390*/].f_11 != func_27())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 != func_27())
			{
				if (Global_1618089[iParam0 /*390*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_373(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187 != 0;
}

void func_374(var uParam0)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1B215CC37BF52E79(0);
		unk_0xBBAAC5B2437ACF2A();
	}
}

void func_375(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1352859.f_2 == 0)
		{
			Global_1352859.f_2 = 1;
		}
	}
	else if (Global_1352859.f_2 == 1)
	{
		Global_1352859.f_2 = 0;
	}
}

void func_376()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
	{
		if (func_199())
		{
			func_377();
		}
	}
}

void func_377()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

int func_378()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0) && func_199())
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1) && func_199())
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	if (func_199())
	{
		if (func_46(Global_2433082.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_380()
{
	if (func_199())
	{
		if (func_49(Global_2433082.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_381(int iParam0)
{
	Global_1352859.f_1 = Global_1352859;
	Global_1352859 = iParam0;
}

int func_382(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_424(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_423();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_422())
		{
			if (func_421() > 0 && Global_1574105)
			{
				unk_0xA770EE27D9D0EB36();
				unk_0x2B153364D0958759(fVar7);
				unk_0x7FE30C99EA3439F7(18);
				if (unk_0xA14FC57CB26C2B67())
				{
					unk_0xA295ADD103FF4641();
				}
				unk_0x7FE30C99EA3439F7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_412())
		{
			func_411(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
	{
		func_411(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_421() == 1)
		{
			func_410(bVar6, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_411(uParam0, uParam2, 0);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xA14FC57CB26C2B67())
		{
			unk_0xA295ADD103FF4641();
		}
		unk_0x7FE30C99EA3439F7(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_421() == 0 && !bParam5))
		{
			func_411(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_409();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0xA770EE27D9D0EB36();
				}
				unk_0x7FE30C99EA3439F7(18);
			}
			if (unk_0xF44A5E894FE76438(uParam2->f_33, 0))
			{
				Global_1574103 = uParam3;
				Global_1574102 = 1;
				unk_0x2B153364D0958759(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574104)
					{
						unk_0x4EA098C870B73AB7(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_409();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xA770EE27D9D0EB36();
					}
					unk_0x7FE30C99EA3439F7(18);
				}
				unk_0x2B153364D0958759(fVar7);
				if (func_410(bVar6, uParam0, 0))
				{
					func_374(uParam0);
					uVar4 = func_407(iParam1, &(Global_1632166.f_86367), bParam4);
					Var0 = { func_405(iParam1) };
					if (bParam4)
					{
						func_402(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_396(uParam0, func_399(uParam2), func_397(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_388(uParam0, func_390(), func_389(), -1);
					}
					else if (func_330())
					{
						uParam2->f_34 = Global_1574104;
						func_402(uParam0, uVar4, &Var0, 1, -1, Global_1574104, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574104;
						func_402(uParam0, uVar4, "", 0, -1, Global_1574104, 1);
					}
					else
					{
						iVar8 = func_383(iParam1);
						func_402(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xB8A73E7DA87B2968(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_387())
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
			if (func_386(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 20;
			}
			if (func_385(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_384(unk_0xFB6B3EEFAB2DD12C()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_384(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 4;
}

bool func_385(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

bool func_386(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_387()
{
	return Global_1632166.f_1 == 0;
}

void func_388(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(sParam2))
		{
			func_327(sParam1);
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_327("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_389()
{
	switch (func_366(unk_0xFB6B3EEFAB2DD12C()))
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

char* func_390()
{
	switch (func_366(unk_0xFB6B3EEFAB2DD12C()))
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
			if (func_392())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_99(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_99(1))
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
			if (func_391(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_391(int iParam0)
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

bool func_392()
{
	return (func_395() && func_393(func_394()));
}

int func_393(int iParam0)
{
	return func_60(iParam0, 1);
}

int func_394()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_34;
}

bool func_395()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148;
}

void func_396(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(uParam2))
		{
			func_327(uParam1);
		}
		else if (func_211(unk_0xFB6B3EEFAB2DD12C()) == 133)
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT_C");
			unk_0xB1953EBEF4D6BD85(uParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_327("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_397(var uParam0)
{
	int iVar0;
	
	iVar0 = func_211(unk_0xFB6B3EEFAB2DD12C());
	if (func_398())
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
			switch (func_123())
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

bool func_398()
{
	return Global_1589821;
}

char* func_399(var uParam0)
{
	int iVar0;
	
	iVar0 = func_211(unk_0xFB6B3EEFAB2DD12C());
	if (func_398())
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
			if (func_401() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_401() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_123())
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
			if (func_400() == 1)
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

int func_400()
{
	return Global_2494149.f_4695;
}

int func_401()
{
	if (func_211(unk_0xFB6B3EEFAB2DD12C()) == 132)
	{
		return Global_2494149.f_4690;
	}
	return -1;
}

void func_402(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_337(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0BBDB952BE56A9DF(uParam1);
			unk_0xF99222307D7150A9(iParam5);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_327(sParam1);
		}
		if (func_422() && iParam6)
		{
			if (func_404())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x0BBDB952BE56A9DF("LBD_DPD_CNT");
			unk_0xF99222307D7150A9(iVar0);
			unk_0xF99222307D7150A9(iVar1);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_327(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (func_403(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x1B215CC37BF52E79(166);
			}
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

int func_403(int iParam0)
{
	if (func_386(iParam0) || func_385(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_404()
{
	return Global_1574105;
}

struct<4> func_405(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_406(unk_0xFB6B3EEFAB2DD12C()) || func_384(unk_0xFB6B3EEFAB2DD12C()))
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
			StringIntConCat(&Var0, Global_1632166.f_27, 16);
			break;
	}
	if (func_330() && unk_0x8676DE83D4396C39())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1632166.f_27, 16);
	}
	return Var0;
}

bool func_406(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 5;
}

char* func_407(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17 && (!func_330() || unk_0xC55B9553B3EDADE9(uParam1)))
	{
		uVar0 = func_408();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1574269 == 0)
		{
			Global_1574269 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xC55B9553B3EDADE9(sParam1))
	{
		if (Global_1574269 == 1)
		{
			Global_1574269 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574269 == 0)
		{
			Global_1574269 = 1;
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
			case 22:
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

char* func_408()
{
	if (unk_0xBD65C65A1BA11C39())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x44CAB1624B5512D4())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9BA5A29B377A2B38())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x9E88D602288A3F67())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_409()
{
	Global_36680 = 1;
}

bool func_410(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x542F16A736FAC9A6("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x542F16A736FAC9A6("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x542F16A736FAC9A6("mp_matchmaking_card");
	}
	return unk_0x52622CA85B1C304B(*uParam1);
}

void func_411(var uParam0, var uParam1, bool bParam2)
{
	unk_0x4EA098C870B73AB7(&(uParam1->f_33), 7);
	Global_1574103 = 0;
	func_320();
	Global_1574102 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
		}
	}
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x4292FC2ED4EC4212(uParam0);
	}
	if (unk_0xF44A5E894FE76438(uParam1->f_33, 0))
	{
		unk_0x4EA098C870B73AB7(&(uParam1->f_33), 0);
	}
	unk_0x2B153364D0958759(0f);
}

int func_412()
{
	if (func_420())
	{
		return 0;
	}
	if (func_290())
	{
		return 0;
	}
	if (!func_418())
	{
		return 0;
	}
	if (!func_276())
	{
		return 0;
	}
	if (func_417(8, -1))
	{
		return 0;
	}
	if (func_421() == 2)
	{
		return 0;
	}
	if (Global_2494149.f_4407)
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	else if (!func_205(unk_0xFB6B3EEFAB2DD12C(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_416(1) || func_414(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (func_630(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (Global_1747156)
	{
		return 0;
	}
	if (func_413(0))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 4))
	{
		return 0;
	}
	return 1;
}

bool func_413(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_25, iParam0);
}

int func_414(bool bParam0)
{
	if (unk_0x9912A7A9E14E5DE4())
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (func_415(unk_0xD5A676B97920D126()))
			{
				if (unk_0xF334707DE9C8DE80(0, 25) || unk_0xF334707DE9C8DE80(0, 68))
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
	if (unk_0xF334707DE9C8DE80(0, 19) || (!bParam0 && unk_0xD464BA52FA359903(0, 19)))
	{
		return 1;
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (((unk_0xF334707DE9C8DE80(0, 166) || unk_0xF334707DE9C8DE80(0, 167)) || unk_0xF334707DE9C8DE80(0, 168)) || unk_0xF334707DE9C8DE80(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD464BA52FA359903(0, 166) || unk_0xD464BA52FA359903(0, 167)) || unk_0xD464BA52FA359903(0, 168)) || unk_0xD464BA52FA359903(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	int iVar0;
	
	if (unk_0xC7E79C4D1964F968())
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			unk_0x2F29BEC857E6C0AC(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_416(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_417(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

int func_418()
{
	if (func_419())
	{
		return 1;
	}
	if (unk_0x7E3640C27B17457C())
	{
		return 0;
	}
	if (unk_0x83D6BCB493FCFCBA() || unk_0xF9B8AB338DC56ADD())
	{
		return 0;
	}
	if (unk_0xB518A6F4BD89B244())
	{
		return 0;
	}
	return 1;
}

bool func_419()
{
	return Global_1312434;
}

bool func_420()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_421()
{
	return Global_1352862.f_68;
}

int func_422()
{
	if (Global_1574104 > 16)
	{
		return 1;
	}
	return 0;
}

float func_423()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x67BF72803FFBF57D()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_424(int iParam0)
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

int func_425()
{
	if (func_428())
	{
		return 1;
	}
	if (func_215(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_398())
	{
		return 1;
	}
	if (func_289(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_211(unk_0xFB6B3EEFAB2DD12C()))
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
				if (!func_426(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_426(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_426(unk_0xFB6B3EEFAB2DD12C()))
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

bool func_426(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 4);
}

int func_427(int iParam0)
{
	if ((iParam0 == 24 && func_289(unk_0xFB6B3EEFAB2DD12C())) && !func_288(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_31(unk_0xFB6B3EEFAB2DD12C(), 0) && func_288(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
		if (func_280(unk_0xFB6B3EEFAB2DD12C()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_428()
{
	if (func_429(unk_0xFB6B3EEFAB2DD12C()))
	{
		return Global_1318164;
	}
	return 0;
}

int func_429(int iParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (func_36(iParam0, 0))
		{
			return unk_0x19239326F582A90C(iParam0);
		}
	}
	return 0;
}

void func_430()
{
	if (!func_18(&uLocal_561))
	{
		if (func_431(unk_0x1E7FB1CA38C403F6()))
		{
			func_11(&uLocal_561, 0, 1);
		}
	}
}

int func_431(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Local_397[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_397[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_397[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_397[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_432()
{
	if (func_256(1, 1))
	{
		if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 8))
		{
			unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 8);
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 8))
	{
		unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 8);
	}
	if (func_256(0, 1))
	{
		if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 9))
		{
			unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 9);
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 9))
	{
		unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 9);
	}
	if (func_256(1, 0))
	{
		if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 10))
		{
			unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 10);
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 10))
	{
		unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 10);
	}
	if (func_256(0, 0))
	{
		if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 11))
		{
			unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 11);
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 11))
	{
		unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 11);
	}
}

void func_433()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_440(iVar0);
		func_434(iVar0);
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

void func_434(int iParam0)
{
	if (func_256(0, 0) || iLocal_3417 == -1)
	{
		func_73(iParam0);
		func_75(iParam0);
		func_70(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_212(unk_0x1E7FB1CA38C403F6(), iParam0))
		{
			func_75(iParam0);
		}
		else
		{
			func_436(iParam0);
		}
	}
	else
	{
		func_75(iParam0);
	}
	if (iLocal_3418 != func_71(iParam0, 1))
	{
		switch (iLocal_3419)
		{
			case 0:
				func_70(iParam0, -1);
				iLocal_3419++;
				break;
			
			case 1:
				func_435(iParam0);
				iLocal_3418 = func_71(iParam0, 1);
				iLocal_3419 = 0;
				break;
			}
	}
}

void func_435(int iParam0)
{
	if (!unk_0xF44A5E894FE76438(iLocal_559, func_459(iParam0)))
	{
		unk_0x19F9705716F6BD4E(func_72(iParam0, 0), 1, func_71(iParam0, 1));
		if (func_459(iParam0) == 4)
		{
			unk_0x19F9705716F6BD4E(func_72(iParam0, 1), 1, func_71(iParam0, 1));
		}
		unk_0xB8A73E7DA87B2968(&iLocal_559, func_459(iParam0));
	}
}

void func_436(int iParam0)
{
	if (!unk_0x6901135DDCC4904D(func_76(iParam0)))
	{
		func_439(iParam0, unk_0x6678F4628618607C(func_309(iParam0)));
		unk_0x0D792BA553E57B27(func_76(iParam0), 12);
		if (unk_0xA6AD4206830E160C("KOTC_AREANAME"))
		{
			unk_0x2EDAF851B28036F0(func_76(iParam0), "KOTC_AREANAME");
		}
		unk_0xD6507DB77BCBD904(func_76(iParam0), 438);
		func_437(&(Local_1244[iParam0 /*68*/].f_27), func_71(iParam0, 1));
		if (!unk_0xF44A5E894FE76438(iLocal_558, 13))
		{
			unk_0x5AF5569613C76AC3(Local_1244[iParam0 /*68*/].f_27, 1);
			unk_0x49A7A4E5E2FD02DC(Local_1244[iParam0 /*68*/].f_27, 7000);
			unk_0xB8A73E7DA87B2968(&iLocal_558, 13);
		}
		if (!unk_0xF44A5E894FE76438(iLocal_558, 12))
		{
			unk_0xB77AFA5DEFB190B1();
			unk_0xB8A73E7DA87B2968(&iLocal_558, 12);
		}
		unk_0x576211BDE434AC9A(func_76(iParam0), 1);
		unk_0x5255022C1A0A7CF1(func_76(iParam0), 1);
	}
	else
	{
		func_437(&(Local_1244[iParam0 /*68*/].f_27), func_71(iParam0, 0));
		if (unk_0x6901135DDCC4904D(func_76(iParam0)))
		{
			if (unk_0xA6AD4206830E160C("KOTC_AREANAME"))
			{
				unk_0x2EDAF851B28036F0(func_76(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_437(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		uVar0 = func_438(iParam1);
		unk_0x4F095059F1C175D5(*uParam0, uVar0);
	}
}

int func_438(int iParam0)
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
	unk_0xC163336F8C5EA891(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_439(int iParam0, var uParam1)
{
	Local_1244[iParam0 /*68*/].f_27 = uParam1;
}

void func_440(int iParam0)
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
		if (func_459(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_450(iParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_449(iParam0, iVar0) };
		uVar21[iVar0] = func_448(iParam0, iVar0);
		func_447(iParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (unk_0xF44A5E894FE76438(iLocal_3410, unk_0x1E7FB1CA38C403F6()))
		{
			if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_3411, Local_563[unk_0x1E7FB1CA38C403F6() /*18*/].f_1))
				{
					if (!func_256(1, 1))
					{
						if (iLocal_3417 == unk_0x1E7FB1CA38C403F6())
						{
							if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
							{
								if ((!func_446(Var1[iVar0 /*3*/]) && !func_446(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (unk_0x1AC9C20D51EE6DC3(Local_1140[unk_0xFB6B3EEFAB2DD12C() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], 0, 1, 0))
									{
										bVar39 = true;
									}
								}
								if (func_459(iParam0) == 7)
								{
									if (func_445(iParam0) < 0f)
									{
										if (func_445(iParam0) <= fVar40 && func_445(iParam0) >= (fVar40 * -1f))
										{
											if (func_444(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_446(Var25[iVar0 /*3*/]))
								{
									if (func_443(iParam0, iVar0) < 0f)
									{
										if (func_443(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_442(iParam0, iVar0) <= uVar35[iVar0])
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
	func_441(iParam0, bVar39);
}

void func_441(int iParam0, bool bParam1)
{
	Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_3), iParam0);
	}
}

float func_442(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_41[iParam1];
}

float func_443(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_45[iParam1];
}

float func_444(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_38;
}

float func_445(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_39;
}

int func_446(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_447(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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

var func_448(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_449(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_450(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/][iParam1 /*3*/];
}

void func_451(int iParam0)
{
	Local_397[unk_0x1E7FB1CA38C403F6() /*5*/] = iParam0;
}

void func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_453("kwUfKUus6EuQyNSL8KpY-w");
					func_453("yMTOFLfO2UKwzKrmgPP7kg");
					func_453("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_453("tP5HSeCA0UiHnkRzakdO2Q");
					func_453("uEkrqoerQEmQ0uZRtp4rkw");
					func_453("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_453("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_453("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_453("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_453("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_453("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_453("uEkrqoerQEmQ0uZRtp4rkw");
					func_453("92t91kL3Wkqvl2Kc82cNSA");
					func_453("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_453("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_453("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_453("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_453("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_453("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_453("fOfm7nzMLkav0ldcSCNAzA");
					func_453("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_453("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_453("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_453("Ma78E44OMkGfYPmCPZXUNA");
					func_453("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_453("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_453("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_453("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_453("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_453("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_453("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_453("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_453("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_453("3AAj-muvN0iHI5IMyGlboA");
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
							func_453("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_453("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_453("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_453("fOfm7nzMLkav0ldcSCNAzA");
							func_453("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_453("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_453("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_453("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_453("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_453("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_453("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_453("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_453("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_453("fOfm7nzMLkav0ldcSCNAzA");
							func_453("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_453("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_453("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_453("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_453("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_453("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_453("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_453("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_453("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_453("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_453("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_453("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_453("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_453("aGBjo2rKi0yMDLl3a2ATGA");
									func_453("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_453("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_453("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_453("f2lnL6wZPkGWUowu0yLm1Q");
									func_453("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_453("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_453("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_453("W-OJzHlM-0ym9PsIASYZtw");
									func_453("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_453("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_453("TjGz31AMYE6bGCjAIitu6w");
									func_453("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_453("QmlvLMLCwkOvoZlkAstYxw");
									func_453("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_453("BktATxH9R0Wp2x0kWSbqjw");
									func_453("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_453("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_453("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_453("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_453("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_453("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_453("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_453("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_453("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_453("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_453("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_453(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_454(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0xB8A73E7DA87B2968(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_454(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_456(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_455(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_455(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_456(uParam0);
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

int func_456(var uParam0)
{
	int iVar0;
	
	if (unk_0xC55B9553B3EDADE9(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_458(uParam0->f_1))
	{
		if (func_457(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xF44A5E894FE76438(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_794643.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xF44A5E894FE76438(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xF44A5E894FE76438(Global_794643.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCC257DA11A122B5F(&(Global_794643.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xF44A5E894FE76438(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_907640.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xF44A5E894FE76438(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xF44A5E894FE76438(Global_907640.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCC257DA11A122B5F(&(Global_907640.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0xFB6B3EEFAB2DD12C())
	{
		if (unk_0xF44A5E894FE76438(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xCC257DA11A122B5F(&(Global_950886.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xF44A5E894FE76438(Global_950886.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_950886.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_457(var uParam0)
{
	if (Global_2398050)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_2398050.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_458(int iParam0)
{
	return iParam0 == 9999;
}

int func_459(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/].f_69;
}

int func_460()
{
	return Local_99.f_0;
}

int func_461(int iParam0)
{
	return Local_397[iParam0 /*5*/];
}

void func_462()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_459(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_480(iVar2, iVar3, func_481(iVar2, iVar3));
					func_478(iVar2, iVar3, func_479(iVar2, iVar3));
					func_476(iVar2, func_477(iVar2));
					func_474(iVar2, iVar3, func_475(iVar2, iVar3));
					unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			if (func_473(iVar2) <= 1)
			{
				func_472(iVar2, 0);
			}
			else
			{
				func_472(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_124(iVar2))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_558, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (unk_0x04DE35D10A718EEF())
			{
				func_472(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_124(iVar2))
			{
				if (unk_0x04DE35D10A718EEF())
				{
					if (iVar0 > -1)
					{
						if (!unk_0xF44A5E894FE76438(iLocal_3410, iVar0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 0);
						}
						if (!unk_0xF44A5E894FE76438(iLocal_3409, iVar0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 0);
						}
						if (unk_0xF44A5E894FE76438(iLocal_3411, iVar0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 0);
						}
						if (!func_212(iVar0, iVar2))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_558, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!unk_0xF44A5E894FE76438(iLocal_3410, iVar0))
				{
					bVar5 = true;
				}
				if (!unk_0xF44A5E894FE76438(iLocal_3409, iVar1))
				{
					bVar5 = true;
				}
				if (unk_0xF44A5E894FE76438(iLocal_3411, iVar1))
				{
					bVar5 = true;
				}
				if (!func_212(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0x04DE35D10A718EEF())
			{
				func_471(iVar2, -1);
				func_470(iVar2, -1);
			}
			func_469(iVar2, uVar4);
		}
		if (unk_0xF44A5E894FE76438(iLocal_558, 0))
		{
			if (func_468(iVar2) > -1 && func_467(iVar2) > -1)
			{
				if (unk_0x04DE35D10A718EEF())
				{
					func_471(iVar2, func_468(iVar2));
					func_470(iVar2, func_467(iVar2));
					func_469(iVar2, func_466(iVar2));
					if (!unk_0xF44A5E894FE76438(Local_99.f_6[iVar2 /*204*/].f_203, func_468(iVar2)))
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_6[iVar2 /*204*/].f_203), func_468(iVar2));
					}
				}
			}
		}
		if (unk_0x04DE35D10A718EEF())
		{
			func_463(iVar2);
		}
		iVar2++;
	}
}

void func_463(int iParam0)
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
				if (Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar16 = Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_99.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar16;
					Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar17;
					Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_99.f_283 == Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_99.f_283 = Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 165;
						Var2.f_10 = unk_0x7A4693BB354F3CD3(Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_464(Var2, func_465(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_464(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_465(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (func_690(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_466(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_31;
}

int func_467(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_35;
}

int func_468(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_34;
}

void func_469(int iParam0, var uParam1)
{
	Local_1244[iParam0 /*68*/].f_30 = uParam1;
}

void func_470(int iParam0, int iParam1)
{
	Local_99.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_471(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_99.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_472(int iParam0, int iParam1)
{
	Local_99.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_473(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_37;
}

void func_474(int iParam0, int iParam1, var uParam2)
{
	Local_1244[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_475(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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

void func_476(int iParam0, struct<3> Param1)
{
	Local_1244[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_477(int iParam0)
{
	switch (func_459(iParam0))
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

void func_478(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1244[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_479(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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

void func_480(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1244[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_481(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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
			switch (func_459(iParam0))
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

void func_482()
{
	func_484();
	iLocal_3408++;
	func_483();
}

void func_483()
{
	if (iLocal_3408 >= (unk_0x11B9E7FF50B2F4CC() - 1))
	{
		iLocal_3408 = 0;
	}
}

void func_484()
{
	if (iLocal_3408 == 0)
	{
	}
}

void func_485()
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
		Local_1140[iVar1 /*3*/] = func_27();
		Local_1140[iVar1 /*3*/].f_1 = -1;
		Local_1140[iVar1 /*3*/].f_2 = uVar3;
		unk_0x4EA098C870B73AB7(&iLocal_3409, iVar1);
		unk_0x4EA098C870B73AB7(&iLocal_3411, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_563[iVar0 /*18*/] = func_513();
		Local_563[iVar0 /*18*/].f_1 = -1;
		unk_0x4EA098C870B73AB7(&iLocal_3410, iVar0);
		if (unk_0x04DE35D10A718EEF())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				unk_0x4EA098C870B73AB7(&(Local_99.f_6[iVar25 /*204*/].f_73), iVar0);
				iVar25++;
			}
		}
		Local_563[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_512(iVar25, 0);
		func_511(iVar25, 0);
		func_510(iVar25, 0f);
		func_509(iVar25, 0f);
		func_508(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_507(iVar25, iVar28, 0f);
			func_506(iVar25, iVar28, 0f);
			func_505(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(iVar0))
		{
			Local_563[iVar0 /*18*/] = iVar0;
			unk_0xB8A73E7DA87B2968(&iLocal_3410, iVar0);
			iVar2 = unk_0x28B48C55342F6368(Local_563[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_690(iVar2, 0, 1))
			{
				Local_1140[iVar1 /*3*/] = iVar2;
				Local_563[iVar0 /*18*/].f_1 = iVar1;
				Local_1140[iVar1 /*3*/].f_1 = iVar0;
				Local_1140[iVar1 /*3*/].f_2 = unk_0x4572B13EE70C8F52(iVar2);
				StringCopy(&(Local_563[iVar0 /*18*/].f_2), unk_0x7746E8ACE891BFA4(iVar2), 64);
				iVar27++;
				if (func_431(iVar0))
				{
					iVar29++;
				}
				unk_0xB8A73E7DA87B2968(&iLocal_3409, iVar1);
				if ((unk_0xB529B2A4B7C64D6D(Local_1140[iVar1 /*3*/].f_2, 0) || unk_0x00B5B0B68211D89B(Local_1140[iVar1 /*3*/].f_2)) || !unk_0x9BA2465846EC8271(Local_1140[iVar1 /*3*/]))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_3411, iVar1);
				}
				if (unk_0x04DE35D10A718EEF())
				{
					if (!unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 0))
					{
						bVar30 = false;
					}
					if (!unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_503(iVar1, 2);
				if (func_215(iVar1))
				{
					if (unk_0x04DE35D10A718EEF())
					{
						func_501(iVar0);
					}
				}
				if (func_105(iVar1))
				{
					if (unk_0x04DE35D10A718EEF())
					{
						func_501(iVar0);
					}
				}
				if (func_214(iVar1))
				{
					if (unk_0x04DE35D10A718EEF())
					{
						func_501(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0x4EA098C870B73AB7(&iLocal_3410, iVar0);
			if (func_604() <= 1)
			{
				if (unk_0x04DE35D10A718EEF())
				{
					func_501(iVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_213, 1))
			{
				if (unk_0x04DE35D10A718EEF())
				{
					func_500(iVar0, iVar25);
				}
			}
			if (unk_0xF44A5E894FE76438(iLocal_3410, iVar0))
			{
				if (unk_0xF44A5E894FE76438(iLocal_3409, iVar1))
				{
					if (!unk_0xF44A5E894FE76438(Local_99.f_213, 1))
					{
						if (unk_0x04DE35D10A718EEF())
						{
							func_499(iVar0, iVar1, iVar25, func_117(iVar25, iVar0));
						}
					}
					if (!unk_0xF44A5E894FE76438(iLocal_3411, iVar1))
					{
						if (iVar0 == unk_0x1E7FB1CA38C403F6())
						{
							fVar32 = func_498(Local_1140[iVar1 /*3*/].f_2, func_309(iVar25), 0);
							fVar33 = func_498(Local_1140[iVar1 /*3*/].f_2, func_309(iVar25), 1);
							Var34 = { unk_0xC086F8D75730FA3A(Local_1140[iVar1 /*3*/].f_2, 1) };
							fVar37 = (Local_1244[iVar25 /*68*/].f_24.f_2 - Var34.f_2);
							func_510(iVar25, fVar32);
							func_509(iVar25, fVar37);
							func_508(iVar25, fVar33);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_447(iVar25, iVar28, &Var20, &fVar23);
								if (!func_446(Var20))
								{
									fVar38 = func_498(Local_1140[iVar1 /*3*/].f_2, Var20, 0);
									fVar39 = func_498(Local_1140[iVar1 /*3*/].f_2, Var20, 1);
									fVar40 = (Var20.f_2 - Var34.f_2);
									func_507(iVar25, iVar28, fVar38);
									func_506(iVar25, iVar28, fVar40);
									func_505(iVar25, iVar28, fVar39);
								}
								iVar28++;
							}
						}
						if (func_212(iVar0, iVar25))
						{
							func_512(iVar25, 1);
							iVar26 = func_473(iVar25);
							iVar26++;
							func_511(iVar25, iVar26);
							if (func_8(iVar25) != iVar0 && func_7(iVar25) != iVar1)
							{
								if (func_468(iVar25) == -1)
								{
									func_562(iVar25, iVar0);
								}
								if (func_467(iVar25) == -1)
								{
									func_561(iVar25, iVar1);
								}
								func_560(iVar25, Local_1140[iVar1 /*3*/].f_2);
							}
							if (unk_0x04DE35D10A718EEF())
							{
								unk_0xB8A73E7DA87B2968(&(Local_99.f_6[iVar25 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x1E7FB1CA38C403F6())
					{
						if (!unk_0xF44A5E894FE76438(iLocal_3411, iVar1))
						{
							if (func_195(iVar25) <= IntToFloat(Global_262145.f_10003))
							{
								if (!unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 12))
								{
									unk_0xB8A73E7DA87B2968(&(Local_397[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_195(iVar25) >= IntToFloat(Global_262145.f_10004))
							{
								if (unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 12))
								{
									unk_0x4EA098C870B73AB7(&(Local_397[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_213(1, 0))
							{
								if (func_195(iVar25) <= IntToFloat(Global_262145.f_10003))
								{
									if (!unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 3))
									{
										unk_0xB8A73E7DA87B2968(&(Local_397[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_195(iVar25) >= IntToFloat(Global_262145.f_10004))
								{
									if (unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 3))
									{
										unk_0x4EA098C870B73AB7(&(Local_397[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (unk_0xF44A5E894FE76438(Local_397[iVar0 /*5*/].f_4, 3))
							{
								unk_0x4EA098C870B73AB7(&(Local_397[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (unk_0xFB6B3EEFAB2DD12C() != Local_1140[iVar1 /*3*/])
				{
					if (func_169(unk_0xFB6B3EEFAB2DD12C(), Local_1140[iVar1 /*3*/]))
					{
						iVar24 = func_140(unk_0xFB6B3EEFAB2DD12C(), -2, 0, 0);
					}
				}
				if (!unk_0xF44A5E894FE76438(iLocal_3411, iVar1))
				{
					if (func_256(0, 0))
					{
						func_497(iVar1);
					}
					else if (func_7(iVar25) != iVar1)
					{
						func_497(iVar1);
					}
					else if (func_604() != 1)
					{
						func_497(iVar1);
					}
					else
					{
						func_492(iVar1);
						if (iVar0 != unk_0x1E7FB1CA38C403F6())
						{
							if (func_160(unk_0x1E7FB1CA38C403F6()))
							{
								unk_0xC163336F8C5EA891(iVar24, &uVar41, &uVar42, &uVar43, &iVar44);
								iVar44 = 100;
								unk_0xF07E528D7DEDB148(2, unk_0xC086F8D75730FA3A(Local_1140[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar41, uVar42, uVar43, iVar44, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_690(Local_1140[iVar1 /*3*/], 1, 1))
				{
					if (func_491(Local_1140[iVar1 /*3*/]))
					{
						func_486(Local_1140[iVar1 /*3*/], func_438(iVar24), func_487(iVar0, iVar1, iVar25));
					}
				}
			}
			iVar25++;
		}
		iVar0++;
	}
	if (unk_0x04DE35D10A718EEF())
	{
		if (bVar30)
		{
			unk_0xB8A73E7DA87B2968(&(Local_99.f_213), 0);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Local_99.f_213), 0);
		}
		if (bVar31)
		{
			unk_0xB8A73E7DA87B2968(&(Local_99.f_213), 1);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Local_99.f_213), 1);
		}
	}
	if (iVar29 > iLocal_560)
	{
		iLocal_560 = iVar29;
	}
	if (iVar27 > iLocal_3412)
	{
		iLocal_3412 = iVar27;
	}
	else
	{
		Local_99.f_216 = (iLocal_3412 - iVar27);
	}
}

void func_486(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_184())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_491(iParam0))
	{
		if (bParam2)
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = unk_0x3ED6DDB11A7AD67F();
			Global_2414704.f_440[iVar0] = uParam1;
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = -1;
		}
	}
}

int func_487(int iParam0, int iParam1, int iParam2)
{
	if (func_256(0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x1E7FB1CA38C403F6())
	{
		return 0;
	}
	if (func_488(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (unk_0x1E7FB1CA38C403F6() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_488(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return func_108();
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_241.f_136[func_490(10) /*33*/][iParam0], func_489(10));
}

int func_489(int iParam0)
{
	return (iParam0 % 32);
}

int func_490(int iParam0)
{
	return (iParam0 / 32);
}

int func_491(int iParam0)
{
	if (!unk_0x597C1E51157E5516(Global_2414704.f_605[iParam0]) || Global_2414704.f_605[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		return 1;
	}
	return 0;
}

void func_492(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (unk_0xF44A5E894FE76438(iLocal_3409, iParam0))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_3411, iParam0))
			{
				if (func_169(unk_0xFB6B3EEFAB2DD12C(), Local_1140[iParam0 /*3*/]))
				{
					iVar0 = func_140(unk_0xFB6B3EEFAB2DD12C(), -2, 0, 0);
				}
				func_495(Local_1140[iParam0 /*3*/], 439, 1);
				if (func_491(Local_1140[iParam0 /*3*/]))
				{
					func_486(Local_1140[iParam0 /*3*/], func_438(iVar0), 1);
				}
				func_493(Local_1140[iParam0 /*3*/], 1, 1);
				unk_0xB8A73E7DA87B2968(&uLocal_3416, iParam0);
			}
		}
	}
}

void func_493(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_690(iParam0, 1, 1))
		{
			Global_2414704.f_704[iParam0] = unk_0x3ED6DDB11A7AD67F();
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_364), iParam0);
			func_494(iParam0, bParam2);
		}
	}
	else
	{
		func_494(iParam0, bParam2);
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_364), iParam0);
		Global_2414704.f_704[iParam0] = -1;
	}
}

void func_494(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2414704.f_365), iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_365), iParam0);
	}
	if (unk_0x6901135DDCC4904D(Global_2414704[iParam0]))
	{
		if (bParam1)
		{
			unk_0x1F68B881D24C6117(Global_2414704[iParam0], 0);
		}
		else
		{
			unk_0x1F68B881D24C6117(Global_2414704[iParam0], 1);
		}
	}
}

void func_495(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_184())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x597C1E51157E5516(Global_2414704.f_572[iParam0]) || Global_2414704.f_572[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		if (bParam2)
		{
			if (!unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_496();
			}
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_407[iVar0] = uVar1;
			Global_2414704.f_572[iParam0] = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			if (unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_496();
			}
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_572[iParam0] = -1;
		}
	}
}

void func_496()
{
	Global_2414704.f_995 = 1;
}

void func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (unk_0xF44A5E894FE76438(uLocal_3416, iParam0))
	{
		if (iParam0 > -1)
		{
			if (unk_0xF44A5E894FE76438(iLocal_3409, iParam0))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_3411, iParam0))
				{
					if (unk_0xFB6B3EEFAB2DD12C() != Local_1140[iParam0 /*3*/])
					{
						if (func_169(unk_0xFB6B3EEFAB2DD12C(), Local_1140[iParam0 /*3*/]))
						{
							iVar0 = func_140(unk_0xFB6B3EEFAB2DD12C(), -2, 0, 0);
						}
					}
					func_495(Local_1140[iParam0 /*3*/], 439, 0);
					if (func_491(Local_1140[iParam0 /*3*/]))
					{
						func_486(Local_1140[iParam0 /*3*/], func_438(iVar0), 0);
					}
					func_493(Local_1140[iParam0 /*3*/], 0, 0);
					unk_0x4EA098C870B73AB7(&iLocal_3416, iParam0);
				}
			}
		}
	}
}

var func_498(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

void func_499(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_500(int iParam0, int iParam1)
{
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_27();
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_501(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_118(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_502(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_99.f_217[iVar1] > 0f)
			{
				if (Local_99.f_250[iVar1] == iParam0)
				{
					Local_99.f_217[iVar1] = 0f;
					Local_99.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_502(int iParam0, int iParam1, float fParam2)
{
	Local_99.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_503(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1574332.f_18)))
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(Global_1574332.f_2, iParam0))
	{
		if (Global_1574332 < iParam1 && unk_0xF44A5E894FE76438(Global_1574332.f_1, 1))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 0);
			return;
		}
		if (Global_1574332 != 0)
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 1);
		}
		Global_1574332 = 0;
		Global_1574332.f_2 = 0;
	}
	unk_0xB8A73E7DA87B2968(&(Global_1574332.f_2), iParam0);
	bVar0 = true;
	if (func_189(iParam0))
	{
		bVar0 = false;
	}
	if (func_504(iParam0))
	{
		bVar0 = false;
	}
	if (func_36(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_215(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574332++;
	}
}

bool func_504(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10);
}

void func_505(int iParam0, int iParam1, float fParam2)
{
	Local_1244[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_506(int iParam0, int iParam1, float fParam2)
{
	Local_1244[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_507(int iParam0, int iParam1, float fParam2)
{
	Local_1244[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_508(int iParam0, float fParam1)
{
	Local_1244[iParam0 /*68*/].f_40 = fParam1;
}

void func_509(int iParam0, float fParam1)
{
	Local_1244[iParam0 /*68*/].f_39 = fParam1;
}

void func_510(int iParam0, float fParam1)
{
	Local_1244[iParam0 /*68*/].f_38 = fParam1;
}

void func_511(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_37 = iParam1;
}

void func_512(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_36 = iParam1;
}

int func_513()
{
	return -1;
}

void func_514()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 182)
		{
			func_515(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_515(int iParam0)
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
	unk_0x49897615E4CA227C(1, iParam0, &Var11, 10);
	if (unk_0x7887B64A08364778(Var11.f_0))
	{
		if (unk_0x6DA4D1391A7B813F(Var11.f_0))
		{
			uVar0 = unk_0x36B702E1B6552B8A(Var11.f_0);
			if (unk_0xBEC34BF6B72C417A(uVar0))
			{
				iVar2 = unk_0x61263E0F7C8C9996(uVar0);
				if (unk_0xBF474853319C6A20(iVar2))
				{
					iVar4 = unk_0xCA5CB25B27CC9477(iVar2);
					if (unk_0x28E01BEA13B73DF2(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (unk_0x7887B64A08364778(Var11.f_1))
					{
						if (unk_0x6DA4D1391A7B813F(Var11.f_1))
						{
							iVar1 = unk_0x36B702E1B6552B8A(Var11.f_1);
							if (unk_0xBEC34BF6B72C417A(iVar1))
							{
								iVar3 = unk_0x61263E0F7C8C9996(iVar1);
								iVar8 = iVar3;
								if (unk_0xBF474853319C6A20(iVar3))
								{
									iVar5 = unk_0xCA5CB25B27CC9477(iVar3);
									if (unk_0x28E01BEA13B73DF2(iVar5))
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
													if (!func_213(1, 0))
													{
														if (iVar7 == unk_0x1E7FB1CA38C403F6())
														{
															if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 7))
															{
																unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == unk_0x1E7FB1CA38C403F6())
														{
															if (iLocal_3415 < func_559())
															{
																iLocal_3415++;
																func_519(0, iVar1, "", -1859646258, 2131309714, func_558(), 1, -1, 0, 0, 0);
																Local_383.f_7 = (Local_383.f_7 + func_558());
															}
															else
															{
																iLocal_3415++;
															}
														}
														if (unk_0x04DE35D10A718EEF())
														{
															fVar21 = func_118(iVar9, iVar6);
															fVar21 = (fVar21 + IntToFloat(Global_262145.f_9700));
															func_502(iVar9, iVar6, fVar21);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x1E7FB1CA38C403F6())
													{
														if (!func_213(1, 0))
														{
															if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 6))
															{
																unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 6);
															}
															if (!unk_0xF44A5E894FE76438(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4, 2))
															{
																unk_0xB8A73E7DA87B2968(&(Local_397[unk_0x1E7FB1CA38C403F6() /*5*/].f_4), 2);
																func_200(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_3413 < func_518())
															{
																iLocal_3413++;
																func_519(0, iVar1, "", -1859646258, 2131309714, func_517(), 1, -1, 0, 0, 0);
																Local_383.f_7 = (Local_383.f_7 + func_517());
															}
															else
															{
																iLocal_3413++;
															}
														}
													}
													if (iVar7 == unk_0x1E7FB1CA38C403F6())
													{
														iLocal_3414++;
													}
													if (func_212(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (unk_0x04DE35D10A718EEF())
															{
																if (func_468(iVar9) == -1)
																{
																	func_562(iVar9, iVar6);
																}
																if (func_467(iVar9) == -1)
																{
																	func_561(iVar9, iVar8);
																}
																unk_0xB8A73E7DA87B2968(&iLocal_558, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (unk_0x04DE35D10A718EEF())
														{
															Var22.f_2 = 195;
															Var22.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (unk_0xF44A5E894FE76438(iLocal_3410, iVar10))
																{
																	if (unk_0xF44A5E894FE76438(iLocal_3409, Local_563[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0xF44A5E894FE76438(Local_397[iVar10 /*5*/].f_4, 9) && !unk_0xF44A5E894FE76438(Local_397[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_160(iVar10))
																			{
																				func_464(Var22, func_516(Local_563[iVar10 /*18*/].f_1));
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

int func_516(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

int func_517()
{
	return Global_262145.f_9505;
}

int func_518()
{
	return Global_262145.f_9507;
}

int func_519(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_520(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_520(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_530(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iParam1);
				func_526(unk_0x6DE9A8183DA7678E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_521(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_521(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_524(iParam0, 1) };
	if (iParam0 == func_523(unk_0xD5A676B97920D126()))
	{
		func_522(1);
	}
	func_526(Var0, iParam1, 0, sParam2, uParam3);
}

void func_522(int iParam0)
{
	Global_2433082.f_1382 = iParam0;
}

int func_523(var uParam0)
{
	return uParam0;
}

Vector3 func_524(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC31BB47A21F61C6C())
	{
		Var3 = { unk_0x4FC37A47A7CC5D48(2) };
	}
	if (iParam0 == func_525(unk_0xD5A676B97920D126()) && unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		Var0 = { unk_0x7E140C583F91AE2B(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		fVar6 = unk_0x714F015B4D2DE1DC(iParam0);
		if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x0A0C20E171493CD0(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_525(var uParam0)
{
	return uParam0;
}

void func_526(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433082.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433082.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433082.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433082.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433082.f_781[iVar1 /*30*/].f_4 = func_529(Global_2433082.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433082.f_781[iVar1 /*30*/].f_7 = unk_0x7414B386C0020BEC();
			Global_2433082.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433082.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433082.f_781[iVar1 /*30*/].f_9 = func_528();
			Global_2433082.f_781[iVar1 /*30*/].f_10 = func_527();
			StringCopy(&(Global_2433082.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433082.f_781[iVar1 /*30*/].f_26 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), uParam6);
		}
	}
}

int func_527()
{
	if (Global_2433082.f_1382)
	{
		Global_2433082.f_1382 = 0;
		return 1;
	}
	Global_2433082.f_1382 = 0;
	return 0;
}

var func_528()
{
	var uVar0;
	
	uVar0 = Global_2433082.f_1384;
	Global_2433082.f_1384 = 1;
	return uVar0;
}

float func_529(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x8E92CDAEB8357ABD(unk_0x816B691E0C59C315(), Param0, 1);
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

var func_530(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_531(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_531(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_557(unk_0xFB6B3EEFAB2DD12C()) || func_556(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_104(uParam2))
	{
	}
	if (func_555())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_553(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_552(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_549(0, &iVar1);
					break;
				
				case 3:
					func_549(1, &iVar1);
					break;
				
				case 1:
					func_546(&iVar1);
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
			func_223(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_538((func_545(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_223(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_534(iVar1);
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
				func_532((func_533(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_532((func_533(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_532(int iParam0)
{
	if (func_555())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_229(joaat("mpply_globalxp"), iParam0);
	}
}

int func_533(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_690(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_231(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_231(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_534(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_41(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_536(func_537(&Var0));
			if (iVar13 == 0)
			{
				func_535(&Global_1362334, iParam0);
				func_228(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_535(&Global_1362335, iParam0);
				func_228(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_535(&Global_1362336, iParam0);
				func_228(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_535(&Global_1362337, iParam0);
				func_228(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_535(&Global_1362338, iParam0);
				func_228(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_535(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_536(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_537(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

void func_538(int iParam0, int iParam1, int iParam2)
{
	if (func_555())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_178(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_178(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_544(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_542(iParam0, 1);
		}
		func_224(634, iParam0, -1, 1);
		func_225(635, func_542(iParam0, 1), -1, 1, 0);
		Global_1362449[func_178(-1)] = iParam0;
		func_539(7, 0);
	}
}

void func_539(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_541(iParam0, iParam1))
	{
		iVar0 = func_540();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_540()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_541(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_543(iParam0, 0);
}

int func_543(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_544(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_545(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_178(-1)];
			}
			else if (func_544(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_178(-1)];
	}
	return 0;
}

void func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_147(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_548(unk_0xFB6B3EEFAB2DD12C(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_547(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_547(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_547(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_548(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_41(iParam0) };
		Global_2482018 = { func_41(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_549(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_690(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_548(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
			if (func_690(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_550(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_548(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_547(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_547(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_550(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_551(iParam0), func_551(iParam1));
	return 0f;
}

Vector3 func_551(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

int func_552(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_547(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_553(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_545(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_545(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_554(8000, 0, 0) > 0)
	{
		if (func_554(8000, 0, 0) < (iParam0 + func_545(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_554(8000, 0, 0) - func_545(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_554(int iParam0, bool bParam1, int iParam2)
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
	return Global_279816[iParam0];
}

int func_555()
{
	return 1;
}

bool func_556(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_557(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

int func_558()
{
	return Global_262145.f_9506;
}

int func_559()
{
	return Global_262145.f_9508;
}

void func_560(int iParam0, var uParam1)
{
	Local_1244[iParam0 /*68*/].f_31 = uParam1;
}

void func_561(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_35 = iParam1;
}

void func_562(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_34 = iParam1;
}

void func_563(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xF44A5E894FE76438(iLocal_558, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_215(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (!func_105(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_431(unk_0x1E7FB1CA38C403F6()))
					{
						if (iParam1 <= 2)
						{
							if (func_160(unk_0x1E7FB1CA38C403F6()) || func_431(unk_0x1E7FB1CA38C403F6()))
							{
								func_586(func_600(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_585(1);
						}
						if (iVar1 > 0)
						{
							func_584();
							func_519(0, unk_0xD5A676B97920D126(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_383.f_7 = (Local_383.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_575(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_574())
							{
								func_565(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								unk_0xBA11645C7A2ECDE2(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_383.f_6 = (Local_383.f_6 + iVar0);
							if (!Global_262145.f_9910)
							{
								if (Local_383.f_6 > 0)
								{
									func_564(16, Local_383.f_6);
								}
							}
							Global_2454660 = iVar0;
						}
					}
					else
					{
						func_585(0);
					}
				}
				else
				{
					func_585(0);
				}
			}
			else
			{
				func_585(0);
			}
		}
		else
		{
			func_585(0);
		}
		unk_0xB8A73E7DA87B2968(&iLocal_558, 5);
	}
}

void func_564(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2494149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5416)
		{
			iParam1 = Global_262145.f_5416;
		}
		Global_2494149.f_270 = iParam1;
		Global_2494149.f_271 = 0;
	}
}

void func_565(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_574())
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
			if (iParam1 > 0)
			{
				func_566(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_566(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_566(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_574())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_38()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_573(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_572(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_567(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_567(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_568(iParam0);
	}
}

void func_568(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_574())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_571(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_569(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_569(var uParam0)
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
	func_570(&(uParam0->f_8.f_3));
	func_570(&(uParam0->f_8.f_16));
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

void func_570(var uParam0)
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

int func_571(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_572(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_573(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_574())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_574()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

void func_575(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_583())
		{
			if (func_119(0))
			{
				if (!func_99(0))
				{
					if (unk_0x1E0256D6F1052B31(func_582()))
					{
						if (func_581() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_581());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_579(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_578("GB_BCUT_TICK1", func_582(), iVar0, 0, 0, 1, 1);
						}
						func_577(20);
						func_576(func_582(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_576(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_690(iParam0, 0, 1))
	{
		Var0.f_0 = 474;
		Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_516(iParam0));
	}
}

void func_577(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_578(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		unk_0xF5640E619D8FCD5B(func_140(iParam1, -2, 1, 0));
		unk_0x4C51E4FBCD1D8830(func_42(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF5640E619D8FCD5B(iParam3);
		}
		unk_0xF99222307D7150A9(iParam2);
		iVar0 = unk_0x84EF96E928190AB1(0, 1);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_579(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_580(1);
	}
	else
	{
		iVar1 = func_580(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_580(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10889;
}

int func_581()
{
	return Global_262145.f_10888;
}

int func_582()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

bool func_583()
{
	return func_63(unk_0xFB6B3EEFAB2DD12C());
}

void func_584()
{
	Global_2454002 = 1;
}

void func_585(bool bParam0)
{
	if (bParam0)
	{
		if (func_176(1))
		{
			unk_0xB8A73E7DA87B2968(&Global_1574357, 1);
		}
	}
	else if (func_176(2))
	{
		unk_0xB8A73E7DA87B2968(&Global_1574357, 2);
	}
}

void func_586(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_561, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_9941)
	{
		iVar0 = Global_262145.f_9941;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_599() * iVar0);
	*uParam2 = (func_598() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_9695 / 60) / 1000);
		if (iVar1 > func_597())
		{
			iVar1 = func_597();
		}
		iVar2 = iLocal_560;
		if (iVar2 > func_596())
		{
			iVar2 = func_596();
		}
		*uParam1 = unk_0xF2DB717A73826179((IntToFloat(func_589(func_595(), func_594(), iVar1, fParam0, func_593(), func_592(), func_591(), iVar2)) * Global_262145.f_9968));
		*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((IntToFloat(func_589(func_588(), func_587(), iVar1, fParam0, func_593(), func_592(), func_591(), iVar2)) * Global_262145.f_9969)));
	}
}

int func_587()
{
	return Global_262145.f_9502;
}

int func_588()
{
	return Global_262145.f_9504;
}

int func_589(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_590(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_590(int iParam0, int iParam1, int iParam2)
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

float func_591()
{
	return Global_262145.f_9511;
}

float func_592()
{
	return Global_262145.f_9510;
}

float func_593()
{
	return Global_262145.f_9509;
}

int func_594()
{
	return Global_262145.f_9501;
}

int func_595()
{
	return Global_262145.f_9503;
}

int func_596()
{
	return Global_262145.f_9854;
}

int func_597()
{
	return Global_262145.f_9853;
}

int func_598()
{
	return Global_262145.f_9500;
}

int func_599()
{
	return Global_262145.f_9499;
}

float func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9512;
		
		case 1:
			return Global_262145.f_9513;
		
		case 2:
			return Global_262145.f_9514;
		
		default:
	}
	return 0f;
}

int func_601(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x38550DD9BFA5B08B() < iParam0)
	{
		if (bParam2)
		{
			func_603(sParam3, sParam4, 1);
		}
		if (func_221(26, -1))
		{
			func_247(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1574332.f_18)))
	{
		if (!func_5(&(Global_1574332.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1574332.f_18));
	}
	if (func_602())
	{
		if (bParam2)
		{
			func_603(sParam3, sParam4, 0);
		}
		if (func_221(26, -1))
		{
			func_247(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xDDCAF6F04D987266() < iParam0)
	{
		if (bParam2)
		{
			func_603(sParam3, sParam4, 1);
		}
		if (func_221(26, -1))
		{
			func_247(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_602()
{
	return unk_0xF44A5E894FE76438(Global_1574332.f_1, 0);
}

void func_603(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xF44A5E894FE76438(Global_1574332.f_1, 2) && !func_189(unk_0xFB6B3EEFAB2DD12C())) && !func_215(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xC55B9553B3EDADE9(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xC55B9553B3EDADE9(sParam1))
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
		func_166(65, sParam0, sParam1, 1, -1, 2);
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 2);
	}
}

int func_604()
{
	return Local_99.f_1;
}

void func_605()
{
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 6))
	{
		func_624();
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 6);
	}
	if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 7))
	{
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 4) || unk_0xF44A5E894FE76438(Global_1574332.f_1, 16))
		{
			if (((!unk_0x656CD02142B72C18() && !unk_0xA14FC57CB26C2B67()) && !func_199()) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 7);
				func_198("FME_PASINT", 30000);
				func_197(1);
			}
		}
		else if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 17))
		{
			if (func_108() && !func_107())
			{
				unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 17);
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 16);
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 23))
	{
		if (((((!unk_0x656CD02142B72C18() && !unk_0xF44A5E894FE76438(Global_2494149.f_743, 2)) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !Global_68127) && !Global_52999) && !unk_0xA14FC57CB26C2B67())
		{
			if (func_622())
			{
				func_198("AMEV_GA_RP", -1);
				if (func_366(unk_0xFB6B3EEFAB2DD12C()) != 200)
				{
					func_197(1);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 23);
			}
		}
	}
	if (unk_0x6AAF285DC78E0304() && unk_0xDEC2120B859399ED() == 15)
	{
		if (func_182(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!unk_0xF4B39D641249E260(1344549371))
			{
				unk_0x6BD2B140FA4718C1(1344549371);
			}
		}
		else if (unk_0xF4B39D641249E260(1344549371))
		{
			unk_0xE099CDF9EBC165A5(1344549371);
		}
	}
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 9))
	{
		if ((((!unk_0x656CD02142B72C18() && !unk_0xA14FC57CB26C2B67()) && !func_199()) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 9);
			func_621(0);
			func_198("FME_TBL00", -1);
			func_197(1);
		}
	}
	if (func_289(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 18))
		{
			if ((func_106(unk_0xFB6B3EEFAB2DD12C(), 21) && unk_0xF44A5E894FE76438(Global_1574332.f_1, 20)) && !unk_0xF44A5E894FE76438(Global_1574332.f_1, 19))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 18);
			}
		}
		else if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 18))
		{
			if (((((!unk_0x656CD02142B72C18() && !unk_0xA14FC57CB26C2B67()) && !func_199()) && func_690(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && unk_0x8AFBC859AA63D3D7()) && !Global_2494149.f_4704)
			{
				unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 18);
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 19);
				func_198("AMTT_RPAS", -1);
				func_197(1);
			}
		}
	}
	if (((((func_289(unk_0xFB6B3EEFAB2DD12C()) && !func_189(unk_0xFB6B3EEFAB2DD12C())) && func_211(unk_0xFB6B3EEFAB2DD12C()) != 146) && !func_215(unk_0xFB6B3EEFAB2DD12C())) && !func_105(unk_0xFB6B3EEFAB2DD12C())) && !func_615())
	{
		if (func_181(func_211(unk_0xFB6B3EEFAB2DD12C())))
		{
			unk_0x9915665260A3283D(unk_0xFB6B3EEFAB2DD12C());
		}
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 22))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 22);
		}
		if (func_281(unk_0xFB6B3EEFAB2DD12C()) || func_172())
		{
			if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 10))
			{
				if (func_613(func_211(unk_0xFB6B3EEFAB2DD12C())))
				{
					if (func_176(0) && !Global_2391043)
					{
						unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_179(1);
						unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 14);
					}
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 10);
			}
		}
		if (func_182(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 11))
			{
				if (!Global_91538.f_8)
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 12);
					func_174(1);
				}
				if (!func_612())
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 13);
					func_173();
				}
				if (!Global_2391043)
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 14);
					if (func_176(0) && !Global_2391043)
					{
						unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 9);
					}
					func_179(1);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 11);
			}
		}
		else
		{
			func_610(0);
		}
	}
	else
	{
		func_610(1);
	}
	func_606();
	if (func_171(func_211(unk_0xFB6B3EEFAB2DD12C())) && !unk_0xF44A5E894FE76438(Global_1574332.f_1, 21))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 21);
	}
	if ((func_108() && !func_107()) || func_106(unk_0xFB6B3EEFAB2DD12C(), 21))
	{
		if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 10))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 10);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 10))
	{
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 10);
	}
}

void func_606()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_199())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_165(iVar2))
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
				if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 26))
				{
					unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 26);
				}
				func_607(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 26))
	{
		func_3(&(Global_1574332.f_22));
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 26);
	}
}

void func_607(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1574332.f_22)))
	{
		func_11(&(Global_1574332.f_22), 0, 0);
	}
	else if (func_5(&(Global_1574332.f_22), iParam1, 0))
	{
		if (func_421() > 0)
		{
			func_194(iParam0);
			if (func_196("AMEV_LBD_HELP"))
			{
				unk_0x04890EB0282525A5(1);
			}
			func_3(&(Global_1574332.f_22));
		}
	}
	else
	{
		func_609(0);
		func_608();
	}
}

void func_608()
{
	Global_2494149.f_4394 = 0;
}

void func_609(int iParam0)
{
	Global_1352862.f_68 = iParam0;
}

void func_610(int iParam0)
{
	if ((unk_0xF44A5E894FE76438(Global_1574332.f_1, 11) || (unk_0xF44A5E894FE76438(Global_1574332.f_1, 10) && iParam0)) || (unk_0xF44A5E894FE76438(Global_1574332.f_1, 22) && iParam0))
	{
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 12))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 12);
			func_174(0);
		}
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 13))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 13);
			func_611();
		}
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 14) && !func_31(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 14);
			func_179(0);
		}
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 11);
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 10);
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 22);
	}
}

void func_611()
{
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4609), 0);
}

bool func_612()
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4609, 0);
}

int func_613(int iParam0)
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
			return func_182(unk_0xFB6B3EEFAB2DD12C());
		
		case 133:
			return (func_172() || func_614(func_123()));
		
		default:
	}
	return 0;
}

int func_614(int iParam0)
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

int func_615()
{
	if (((((((((func_270() || func_269()) || func_268()) || func_115()) || (func_265() && !unk_0x8676DE83D4396C39())) || (func_618() && !func_617())) || Global_2394682) || Global_2394682.f_1 != 0) || Global_2394755 != 0) || (func_616() == 2 && !unk_0x8676DE83D4396C39()))
	{
		return 1;
	}
	return 0;
}

int func_616()
{
	return Global_979732;
}

bool func_617()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 27);
}

int func_618()
{
	if (func_620() || func_619())
	{
		return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 == 8;
	}
	return 0;
}

var func_619()
{
	return Global_2443089.f_613;
}

bool func_620()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 11);
}

void func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = func_177(2516, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 0))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 0);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 1))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 1);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 2))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 3))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 3);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 4))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 4);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 5))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 6))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 6);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 7))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 7);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 8))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 9))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 9);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 10))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 10);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 11))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 11);
		}
	}
	func_225(2516, iVar0, -1, 1, 0);
}

int func_622()
{
	int iVar0;
	
	if (!func_18(&(Global_1574332.f_15)))
	{
		func_11(&(Global_1574332.f_15), 0, 0);
		Global_1574332.f_17 = 0;
	}
	else if (func_5(&(Global_1574332.f_15), 1000, 0))
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(Global_1574332.f_17)))
		{
			iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Global_1574332.f_17));
			if (unk_0x1E0256D6F1052B31(iVar0))
			{
				if (func_690(iVar0, 1, 1) && func_623(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_551(unk_0xFB6B3EEFAB2DD12C()), func_551(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574332.f_17++;
		if (Global_1574332.f_17 >= 32)
		{
			Global_1574332.f_17 = 0;
			func_3(&(Global_1574332.f_15));
		}
	}
	return 0;
}

int func_623(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312443 != 0)
	{
		return 0;
	}
	if (!func_544(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589933[iVar0 /*601*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_624()
{
	unk_0x028AA922F2B17B2A(5);
	func_304();
	unk_0xFA5E84DCAE200259(1f);
	unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 8);
	func_625();
}

void func_625()
{
	if (Global_1756720)
	{
		if (unk_0xF44A5E894FE76438(Global_1756721, 0))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 0);
		}
		if (unk_0xF44A5E894FE76438(Global_1756721, 1))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 1);
		}
		if (unk_0xF44A5E894FE76438(Global_1756721, 5))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 5);
		}
		if (unk_0xA9F93059DE95F096(-355737150))
		{
			unk_0x7E12E87285DA0A0B(-355737150, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-580979506))
		{
			unk_0x7E12E87285DA0A0B(-580979506, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1426452475))
		{
			unk_0x7E12E87285DA0A0B(-1426452475, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(745417724))
		{
			unk_0x7E12E87285DA0A0B(745417724, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1305304906))
		{
			unk_0x7E12E87285DA0A0B(-1305304906, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1543175077))
		{
			unk_0x7E12E87285DA0A0B(-1543175077, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-811770997))
		{
			unk_0x7E12E87285DA0A0B(-811770997, 1, 0, 0);
		}
		Global_1756721 = 0;
	}
	Global_1756720 = 0;
}

var func_626()
{
	if (unk_0x7887B64A08364778(func_627()))
	{
		return func_627();
	}
	return func_157();
}

var func_627()
{
	return Global_2359301.f_3;
}

bool func_628()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 11);
}

bool func_629()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

int func_630(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_631())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_631()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

bool func_632()
{
	return Global_1574332.f_24;
}

int func_633()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2494149.f_4606)
	{
		return 0;
	}
	uVar2 = unk_0x8D8F7D01F0EB4218();
	if (func_18(&(Local_99.f_1.f_1)))
	{
		iVar0 = func_634(&uVar2, &(Local_99.f_1.f_1));
		iVar1 = Global_262145.f_9695;
	}
	else if (func_18(&(Local_99.f_1.f_3)))
	{
		iVar0 = func_634(&uVar2, &(Local_99.f_1.f_3));
		iVar1 = Global_262145.f_9696;
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

int func_634(var uParam0, var uParam1)
{
	return unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(*uParam0, *uParam1));
}

bool func_635(int iParam0)
{
	return !func_636(iParam0);
}

int func_636(int iParam0)
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
			if (Global_262145.f_5492)
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5493)
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5494)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5495)
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_637(4))
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_637(4))
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_637(4))
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_637(4))
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_637(4))
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_637(4))
			{
				return 0;
			}
			if (func_106(unk_0xFB6B3EEFAB2DD12C(), 7))
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

int func_637(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_690(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			if (unk_0xF44A5E894FE76438(Global_2421621[iVar0 /*358*/].f_211, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_638()
{
	bool bVar0;
	var uVar1;
	
	func_642(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_641())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_640())
	{
		return 1;
	}
	if (func_639(157))
	{
		if (!func_270())
		{
			return 1;
		}
	}
	if (func_639(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_184() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_184()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_639(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_640()
{
	return Global_2452479;
}

bool func_641()
{
	return Global_2443089.f_572;
}

void func_642(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_643(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
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

void func_643(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_690(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_644(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_644(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_645()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_646()
{
	int iVar0;
	
	func_164();
	func_674(141);
	func_656(141, 0, unk_0xF44A5E894FE76438(iLocal_558, 5));
	func_255();
	func_200(0);
	if (unk_0xF44A5E894FE76438(iLocal_558, 16))
	{
		unk_0xB3C38A4B84C152BF("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x4EA098C870B73AB7(&iLocal_558, 16);
	}
	unk_0xFA5E84DCAE200259(1f);
	func_69();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_653(iVar0);
		iVar0++;
	}
	func_299();
	func_651();
	func_650(0);
	func_193(29, 0);
	if (func_638())
	{
		Local_383.f_5 = 5;
	}
	else if (unk_0xF44A5E894FE76438(iLocal_558, 24))
	{
		Local_383.f_5 = 6;
	}
	else if (Local_383.f_5 != 1)
	{
		Local_383.f_5 = 2;
	}
	Local_383.f_0 = Local_99.f_214;
	Local_383.f_1 = Local_99.f_215;
	Local_383.f_4 = Local_99.f_216;
	Local_383.f_3 = iLocal_560;
	Local_383.f_10 = (unk_0x632066A9E8CB2C4D() - Local_383.f_9);
	if (!Global_262145.f_9910)
	{
		if (Local_383.f_6 > 0)
		{
			if (Local_383.f_5 == 1)
			{
				func_649();
			}
		}
	}
	if (unk_0x1E7FB1CA38C403F6() != -1)
	{
		func_648(Local_383, iLocal_396, iLocal_3415, iLocal_3414, func_66(func_117(0, unk_0x1E7FB1CA38C403F6())), -1, -1);
	}
	func_647();
}

void func_647()
{
	unk_0x01DFCA3621B68C4A();
}

void func_648(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x0FBCE11007AF301F();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69697)
	{
		if (unk_0xCC257DA11A122B5F(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x55D673F2C6389CA9(&Var1);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x063620CE0DF0ACDE(&Var14);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xCD1C5170EB922466(&Var28);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x104294BE353DBC04(&Var52);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_penned_in"))
		{
			unk_0x5B6AA95767D66E0B(&Param0);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x2C5F4CE11C863CCC(&Var66);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x7AF2F3F8B0835B66(&Var79);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x1E2261C4792E9680(&Var93);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0xF1DE1E2C5E796822(&Var107);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x38A472D765D29912(&Var123);
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x45255132548BC2AD(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x17DCA4E56B363B6D(&Var150);
			}
		}
		else if (unk_0xCC257DA11A122B5F(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x1E189F922BCD9849(&Var164);
		}
	}
}

void func_649()
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_1642), 18);
}

void func_650(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xF44A5E894FE76438(Global_2494149.f_1642, 9))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_1642), 9);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_2494149.f_1642, 9))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1642), 9);
	}
}

void func_651()
{
	if (Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
	{
		func_652();
	}
}

void func_652()
{
	struct<25> Var0;
	
	if (unk_0x597C1E51157E5516(Global_2412527.f_6))
	{
		if (!Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412527 = { Var0 };
	Global_2412527.f_6 = -1;
}

void func_653(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_655(iParam0))
	{
		func_654(iVar0);
		iVar0++;
	}
	func_299();
	func_651();
	func_308(func_309(iParam0), 0, 0);
}

void func_654(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2404994.f_355[iParam0 /*12*/].f_9)
		{
			Global_2404994.f_355[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_655(int iParam0)
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

void func_656(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xFB6B3EEFAB2DD12C() != -1)
	{
		if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 13))
		{
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 13);
		}
		if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 14))
		{
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 14);
		}
	}
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 21))
	{
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 21);
	}
	func_670();
	unk_0xFA320609400AECAE("DisableFlightMusic", 0);
	unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_669(func_211(unk_0xFB6B3EEFAB2DD12C()));
		func_193(21, 0);
	}
	else
	{
		if ((uParam2 && unk_0xFB6B3EEFAB2DD12C() != -1) && func_668(unk_0xFB6B3EEFAB2DD12C()) >= 12)
		{
			func_667(2528, -1);
			iVar1 = func_177(2528, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 5);
			}
		}
		func_666();
		func_665();
		func_664();
		if ((!func_30(unk_0xFB6B3EEFAB2DD12C()) && !func_28(unk_0xFB6B3EEFAB2DD12C())) && !func_92())
		{
			func_295();
		}
		func_663();
		if (!unk_0xF44A5E894FE76438(Global_1759239.f_3, 0) && !unk_0xF44A5E894FE76438(Global_1759239.f_3, 1))
		{
			func_624();
		}
		func_662();
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1647), 2);
		func_661();
		func_660();
	}
	if (unk_0xF4B39D641249E260(1344549371))
	{
		unk_0xE099CDF9EBC165A5(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xFB6B3EEFAB2DD12C() != -1 && !func_106(unk_0xFB6B3EEFAB2DD12C(), 21)) && !func_31(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			func_179(0);
			func_174(0);
			func_659();
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_221(26, -1))
		{
			Global_2454635 = -1;
			func_247(26, -1);
		}
	}
	if (!func_657())
	{
		Global_2481896 = 1;
	}
}

int func_657()
{
	if (((!func_403(unk_0xFB6B3EEFAB2DD12C()) && !func_384(unk_0xFB6B3EEFAB2DD12C())) && func_211(unk_0xFB6B3EEFAB2DD12C()) != 146) && !func_658())
	{
		return 0;
	}
	return 1;
}

int func_658()
{
	if ((Global_1632166 == 0 && unk_0x8676DE83D4396C39()) && (((((((Global_1632166.f_5 != 0 || Global_1632166.f_105262 > 0) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 15)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 18)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 19)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 29)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 28)) || unk_0xF44A5E894FE76438(Global_1632166.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_659()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xF44A5E894FE76438(Global_2359719[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xF44A5E894FE76438(Global_2359719[iVar0 /*26*/].f_13, 26))
			{
				unk_0x4EA098C870B73AB7(&(Global_2359719[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_660()
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_7 = 0;
}

void func_661()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 1))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 1);
	}
	if (Global_2494149.f_4608 > 0)
	{
		unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_KILL");
		unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_FIRA");
		unk_0xB3C38A4B84C152BF("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xE64FA07C00C340C6(1);
		Global_2494149.f_4608 = 0;
		unk_0xFA320609400AECAE("DisableFlightMusic", 0);
		unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
		unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
		if (!unk_0xCC257DA11A122B5F(unk_0x0FBCE11007AF301F(), "am_pi_menu"))
		{
			if (Global_2494149.f_4618 > -1)
			{
				unk_0xE723055FBC256C26(Global_2494149.f_4618);
				Global_2494149.f_4618 = -1;
			}
		}
	}
}

void func_662()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574332 = { Var0 };
}

void func_663()
{
	var uVar0;
	
	Global_1318164 = uVar0;
}

void func_664()
{
	Global_2494149.f_4609 = 0;
}

void func_665()
{
	if (unk_0xFB6B3EEFAB2DD12C() != -1)
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1 = 0;
	}
}

void func_666()
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	if (iVar0 != -1)
	{
		Global_1618089[iVar0 /*390*/] = -1;
	}
}

void func_667(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_177(iParam0, func_178(iParam1), 0);
	iVar0++;
	if (!func_226(iParam0))
	{
		func_225(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_224(iParam0, iVar0, iParam1, 1);
	}
}

int func_668(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_202.f_6;
}

int func_669(int iParam0)
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
			if (func_182(unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_670()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 3) || unk_0xF44A5E894FE76438(Global_2494149.f_1643, 4))
	{
		if (unk_0x7E3640C27B17457C() || unk_0x83D6BCB493FCFCBA())
		{
			unk_0xFF11D473E95357D3(800);
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 5))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1643), 5);
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 3))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1643), 3);
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 4))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1643), 4);
	}
	func_673(0);
	func_672(0);
	func_671(0);
}

void func_671(int iParam0)
{
	if (Global_2494149.f_4382 != iParam0)
	{
		Global_2494149.f_4382 = iParam0;
	}
}

void func_672(bool bParam0)
{
	if (Global_2494149.f_4381 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2494149.f_4381 = bParam0;
	}
}

void func_673(int iParam0)
{
	if (Global_2494149.f_4379 != iParam0)
	{
		Global_2494149.f_4379 = iParam0;
	}
}

void func_674(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_675(struct<20> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_689(Param0.f_0);
	func_688(uVar3, Param0);
	func_687(0, -1, 0);
	func_685(141);
	unk_0x1CB2FF4BC0AF8B2C(&Local_99, 284);
	unk_0x47DDB3A546F48091(&Local_397, 161);
	if (!func_684())
	{
		func_646();
	}
	if (unk_0x1995B52453EF6537())
	{
		unk_0x7E85CEE862B85A74(0);
		func_193(29, 1);
		if (unk_0x04DE35D10A718EEF())
		{
			iVar0 = func_680();
			func_677(func_679(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_676(iVar1, iVar0);
				iVar1++;
			}
			unk_0x87B63DFBDD3C9326(&(Local_99.f_214), &(Local_99.f_215));
		}
		Local_383.f_2 = unk_0x38550DD9BFA5B08B();
		Local_383.f_9 = unk_0x632066A9E8CB2C4D();
		Local_383.f_8 = unk_0x632066A9E8CB2C4D();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_99.f_250[iVar2] = -1;
			iVar2++;
		}
		func_451(0);
	}
	else
	{
		func_646();
	}
}

void func_676(int iParam0, int iParam1)
{
	Local_99.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_677(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 441;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_2 = iParam0;
	iVar3 = func_678(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 3, iVar3);
	}
}

var func_678(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_690(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_679(int iParam0, int iParam1, int iParam2, int iParam3)
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

var func_680()
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_683(iVar10) && !func_681(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[unk_0x7BC26452241AC7C9(0, iVar0)];
	return uVar11;
}

int func_681(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_682(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6911)
		{
			if (Global_2477219.f_148[iVar0 /*2*/] == iVar1 && Global_2477219.f_148[iVar0 /*2*/].f_1 == func_679(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_682(int iParam0)
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

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_9701)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_9702)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_9703)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_9704)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_9705)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_9706)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_9707)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_9708)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_684()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_641())
		{
			return 0;
		}
		if (func_639(155))
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

void func_685(int iParam0)
{
	func_662();
	func_686();
	func_664();
	Global_1574332.f_4 = iParam0;
	Global_1574332.f_5 = iParam0;
	func_190(iParam0, -1);
	func_210(&(Global_1574332.f_18), 0, 0);
	Global_2494149.f_4446 = 0;
	Global_2453539[0] = func_27();
	Global_2453539[1] = func_27();
	Global_2453539[2] = func_27();
	Global_2453539[3] = func_27();
	Global_2453539[4] = func_27();
	func_660();
	func_377();
	if (func_108() && !func_107())
	{
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 16);
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 17);
	}
}

void func_686()
{
	var uVar0;
	
	Global_1574357 = uVar0;
}

int func_687(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_647();
			}
			else
			{
				return 0;
			}
		}
		if (!func_240())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_647();
					}
					else
					{
						return 0;
					}
				}
				if (func_641())
				{
					if (!bParam2)
					{
						func_647();
					}
					else
					{
						return 0;
					}
				}
				if (func_639(155))
				{
					if (!bParam2)
					{
						func_647();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_647();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_647();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_647();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_688(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_647();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_689(int iParam0)
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

int func_690(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

