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
	if (unk_0xA86CA03D9749EEB3() && func_684(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_669(ScriptParam_0);
	}
	else
	{
		func_640();
	}
	while (true)
	{
		func_639();
		if (func_632())
		{
			func_640();
		}
		if (func_629(29))
		{
			func_640();
		}
		if (func_627())
		{
			func_640();
		}
		if (func_626())
		{
			func_640();
		}
		iLocal_3417 = -1;
		if (unk_0x08BA6DD398CA197C(iLocal_3409, unk_0x0C1D3C552325765B()))
		{
			if (unk_0x08BA6DD398CA197C(iLocal_3410, unk_0x848AF823A8EA3C62()))
			{
				if (!func_624(unk_0x0C1D3C552325765B()))
				{
					iLocal_3417 = unk_0x848AF823A8EA3C62();
				}
				else if (func_623() && !func_622())
				{
					uVar2 = func_620();
					if (unk_0x54F0AEFB11EA090A(uVar2))
					{
						iVar3 = unk_0xA43666ACD375E339(uVar2);
						if (unk_0x3F3C7C3B52DD0ECA(iVar3))
						{
							iVar4 = unk_0x9259DE19D910276C(iVar3);
							iLocal_3417 = iVar4;
						}
					}
				}
			}
		}
		func_599();
		if (func_598() < 2)
		{
			if (func_595(2, 0, 1, 0, 0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_558, 24);
				func_557(0, -1);
				func_640();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_556(iVar0, -1);
			func_555(iVar0, -1);
			func_554(iVar0, uVar1);
			unk_0x09C86C0C5CA26B1E(&iLocal_558, 0);
			iVar0++;
		}
		func_508();
		func_479();
		func_476();
		func_456();
		switch (func_455(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_454() == 1)
				{
					func_446(141, func_453(0), 0, 0);
					func_445(1);
				}
				else if (func_454() == 4)
				{
					func_445(4);
				}
				break;
			
			case 1:
				if (func_454() == 1)
				{
					func_20();
				}
				else if (func_454() == 4)
				{
					func_19(&(Local_99.f_211));
					func_445(3);
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
					func_445(4);
				}
				break;
			
			case 2:
				func_445(4);
			
			case 4:
				func_640();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_454())
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
	switch (func_598())
	{
		case 0:
			if (unk_0x08BA6DD398CA197C(Local_99.f_213, 0))
			{
				if (!func_18(&(Local_99.f_1.f_3)))
				{
					func_11(&(Local_99.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (unk_0x08BA6DD398CA197C(Local_99.f_213, 2))
			{
				iVar2 = Global_262145.f_9631;
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
				iVar2 = Global_262145.f_9632;
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
			if (unk_0x08BA6DD398CA197C(Local_99.f_213, 1))
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
		if (unk_0x08BA6DD398CA197C(iLocal_3410, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(iLocal_3409, iVar1))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_3411, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_99.f_1.f_1)))
					{
						if (!func_18(&(Local_99.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_99.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_99.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_99.f_1.f_1), 0, 0) <= Global_262145.f_9631) && func_598() != 2)
						{
							iVar7 = func_9(&(Local_99.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = unk_0xBBDA792448DB5A89(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_9635 * 1000));
							fVar4 = (unk_0xBBDA792448DB5A89(Global_262145.f_9634) * fVar3);
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
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
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

void func_10(int iParam0)
{
	Local_99.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
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
					if (!unk_0x08BA6DD398CA197C(Local_99.f_213, 2))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_213), 2);
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
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
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
		if (unk_0xD9E8CA806A80203D())
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
	
	func_427();
	func_426();
	func_424();
	if (func_422())
	{
		func_307(iVar0);
	}
	func_291(141, func_306(0), &uLocal_3422, unk_0xBBDA792448DB5A89(Global_262145.f_9939), 1148846080, iLocal_3421);
	if (func_253(0, 1))
	{
		func_252();
	}
	switch (func_598())
	{
		case 0:
			break;
		
		case 1:
			func_251();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_216(iVar0);
				func_215(iVar0);
				func_213(iVar0);
				if (iLocal_3417 == unk_0x848AF823A8EA3C62())
				{
					if (!func_210(1, 0))
					{
						if (func_209(unk_0x848AF823A8EA3C62(), iVar0))
						{
							if (func_208(unk_0x0C1D3C552325765B()) == 141)
							{
								if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
								{
									unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 2);
									func_197(1);
								}
							}
							if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 5))
							{
								unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == unk_0x848AF823A8EA3C62())
							{
								if (!unk_0x08BA6DD398CA197C(iLocal_558, 20))
								{
									unk_0x88B0F0DC270164B7(&iLocal_558, 20);
								}
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == unk_0x848AF823A8EA3C62())
							{
								unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 2);
						}
						if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 5))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 5);
						}
						if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 4))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 4);
						}
						if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 6))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 6);
						}
						if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 7))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_558, 8))
					{
						if (!unk_0x598A9E990F05F82C())
						{
							if (!func_196())
							{
								if (iLocal_3417 == unk_0x848AF823A8EA3C62())
								{
									if (!func_253(0, 0))
									{
										if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
										{
											if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
											{
												func_195("KOTC_1STHELP", 30000);
												func_194(0);
												unk_0xAB16AADE80707D47(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												unk_0x88B0F0DC270164B7(&iLocal_558, 8);
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
					if (func_193("KOTC_1STHELP"))
					{
						unk_0x94724F7C938EBE34(1);
					}
					if (!unk_0x08BA6DD398CA197C(iLocal_558, 8))
					{
						unk_0x88B0F0DC270164B7(&iLocal_558, 8);
					}
				}
				if (iLocal_3417 == unk_0x848AF823A8EA3C62())
				{
					if (func_192(iVar0) <= 500f)
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_558, 9))
						{
							unk_0xACD6D334FD769B0C(0f);
							unk_0x88B0F0DC270164B7(&iLocal_558, 9);
						}
					}
					else if (unk_0x08BA6DD398CA197C(iLocal_558, 9))
					{
						unk_0xACD6D334FD769B0C(1f);
						unk_0x09C86C0C5CA26B1E(&iLocal_558, 9);
					}
				}
				if (iLocal_3417 != -1)
				{
					if (unk_0x08BA6DD398CA197C(iLocal_558, 14) && func_8(iVar0) != iLocal_3417)
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_558, 21))
						{
							func_191(80);
							unk_0x88B0F0DC270164B7(&iLocal_558, 21);
						}
					}
					else if (unk_0x08BA6DD398CA197C(iLocal_558, 21))
					{
						unk_0x09C86C0C5CA26B1E(&iLocal_558, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_558, 26))
					{
						func_167(141, 0f, 0f, 0, 0, 0, 0);
						unk_0x88B0F0DC270164B7(&iLocal_558, 26);
					}
					if (!unk_0x08BA6DD398CA197C(iLocal_558, 1))
					{
						if (iLocal_3417 != -1)
						{
							if (!func_253(0, 0))
							{
								if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
								{
									if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3417)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_166(unk_0x0C1D3C552325765B(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_164(80, sVar1, unk_0xCF66111B26743875(func_7(iVar0)), func_165(), -1, "KOTC_START", func_165());
											}
											else
											{
												func_163(80, "KOTC_START2", "KOTC_STRAP1", func_165(), -1, func_165());
												unk_0x88B0F0DC270164B7(&iLocal_558, 14);
												unk_0x88B0F0DC270164B7(&iLocal_558, 15);
											}
										}
										else
										{
											func_163(80, "KOTC_START", "KOTC_STRAP3", func_165(), -1, func_165());
										}
										unk_0x88B0F0DC270164B7(&iLocal_558, 1);
									}
								}
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(iLocal_558, 2))
					{
						if (func_162(80))
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 2);
						}
					}
					else if (iLocal_3417 != -1)
					{
						if (func_8(iVar0) == iLocal_3417)
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_558, 14))
							{
								if (!func_253(0, 0))
								{
									if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
										{
											func_163(80, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											unk_0x88B0F0DC270164B7(&iLocal_558, 14);
										}
									}
								}
							}
							else if (!unk_0x08BA6DD398CA197C(iLocal_558, 15))
							{
								if (func_162(80))
								{
									unk_0x88B0F0DC270164B7(&iLocal_558, 15);
								}
							}
						}
						else
						{
							if (unk_0x08BA6DD398CA197C(iLocal_558, 14))
							{
								unk_0x09C86C0C5CA26B1E(&iLocal_558, 14);
							}
							if (unk_0x08BA6DD398CA197C(iLocal_558, 15))
							{
								unk_0x09C86C0C5CA26B1E(&iLocal_558, 15);
							}
						}
					}
					else
					{
						if (unk_0x08BA6DD398CA197C(iLocal_558, 14))
						{
							unk_0x09C86C0C5CA26B1E(&iLocal_558, 14);
						}
						if (unk_0x08BA6DD398CA197C(iLocal_558, 15))
						{
							unk_0x09C86C0C5CA26B1E(&iLocal_558, 15);
						}
					}
				}
				else
				{
					func_161();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3417 != -1)
						{
							if (func_8(iVar0) == iLocal_3417)
							{
								if (!func_253(1, 0))
								{
									func_158("KOTC_KINGOB1", 0);
								}
								else
								{
									func_161();
								}
								if (unk_0x08BA6DD398CA197C(iLocal_558, 10))
								{
									if (iLocal_3417 == unk_0x848AF823A8EA3C62())
									{
										if (!unk_0x598A9E990F05F82C())
										{
											if (!func_196())
											{
												if (!func_253(0, 0))
												{
													if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
													{
														if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
														{
															if (unk_0x08BA6DD398CA197C(iLocal_558, 2))
															{
																if (!func_166(unk_0x0C1D3C552325765B(), func_7(iVar0)))
																{
																	if (!unk_0x08BA6DD398CA197C(iLocal_558, 10))
																	{
																		func_195("KOTC_YOUKNG", 30000);
																		func_194(1);
																		unk_0x88B0F0DC270164B7(&iLocal_558, 6);
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
								if (iLocal_3417 == unk_0x848AF823A8EA3C62())
								{
									if (!unk_0x08BA6DD398CA197C(iLocal_558, 7))
									{
										if (func_157(unk_0x848AF823A8EA3C62()))
										{
											if (!unk_0x598A9E990F05F82C())
											{
												if (!func_196())
												{
													if (!func_253(0, 0))
													{
														if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
														{
															if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
															{
																if (unk_0x08BA6DD398CA197C(iLocal_558, 2))
																{
																	if (!func_166(unk_0x0C1D3C552325765B(), func_7(iVar0)))
																	{
																		if (!unk_0x08BA6DD398CA197C(iLocal_558, 7))
																		{
																			func_195("KOTC_OTHRKG", 30000);
																			func_194(1);
																			unk_0x88B0F0DC270164B7(&iLocal_558, 7);
																		}
																	}
																	else if (!unk_0x08BA6DD398CA197C(iLocal_558, 11))
																	{
																		func_138("KOTC_OTHRKGGN", func_156(), 1, "KOTC_KINGBLIP", func_139(unk_0x0C1D3C552325765B(), -2, 0, 0), -1);
																		func_194(1);
																		unk_0x88B0F0DC270164B7(&iLocal_558, 11);
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
								if (((func_157(iLocal_3417) || unk_0x08BA6DD398CA197C(Local_397[iLocal_3417 /*5*/].f_4, 12)) && unk_0x08BA6DD398CA197C(iLocal_3410, func_8(iVar0))) && !func_253(1, 0))
								{
									if (func_166(unk_0x0C1D3C552325765B(), func_7(iVar0)))
									{
										func_135("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_139(unk_0x0C1D3C552325765B(), -2, 0, 0), 0);
									}
									else
									{
										func_124("KOTC_PERMKNG", &(Local_563[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_161();
								}
							}
						}
						else
						{
							func_161();
						}
					}
					else if (iLocal_3417 != -1)
					{
						if (!func_253(1, 0))
						{
							if (func_209(unk_0x848AF823A8EA3C62(), iVar0))
							{
								func_158("KOTC_KLLALL", 0);
							}
							else
							{
								func_158("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_161();
						}
						if (!unk_0x08BA6DD398CA197C(iLocal_558, 10))
						{
							if (iLocal_3417 == unk_0x848AF823A8EA3C62())
							{
								if (func_157(unk_0x848AF823A8EA3C62()))
								{
									if (!unk_0x598A9E990F05F82C())
									{
										if (!func_196())
										{
											if (!func_253(0, 0))
											{
												if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
												{
													if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
													{
														if (func_123(iVar0))
														{
															func_195("KOTC_CONTS", 30000);
															func_194(1);
															unk_0x88B0F0DC270164B7(&iLocal_558, 10);
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
						func_161();
					}
				}
				if (iLocal_3417 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_157(unk_0x848AF823A8EA3C62()) && !func_253(1, 0))
						{
							func_158("KOTC_ENTER", 0);
						}
						else
						{
							func_161();
						}
					}
				}
				else
				{
					func_161();
				}
				func_96(iVar0);
				if (func_208(unk_0x0C1D3C552325765B()) == 141)
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
			func_161();
			func_252();
			func_69();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_3417 != -1)
				{
					if (unk_0x08BA6DD398CA197C(iLocal_558, 20))
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
				func_96(iVar0);
				if (Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!unk_0x08BA6DD398CA197C(iLocal_3410, Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
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
			if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 1) && func_68())
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_558, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_253(0, 0))
							{
								func_67("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar8)
						{
							if (iLocal_3417 != -1)
							{
								if (!func_253(0, 0))
								{
									if (!func_253(0, 0))
									{
										if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
										{
											if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
											{
												if (func_157(iLocal_3417))
												{
													func_163(67, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
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
								if (!func_253(0, 0))
								{
									if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
										{
											if (func_157(iLocal_3417))
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
							if (!func_253(0, 0))
							{
								if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[iLocal_3417 /*18*/].f_1))
								{
									if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[iLocal_3417 /*18*/].f_1))
									{
										if (func_157(iLocal_3417))
										{
											sVar5 = "KOTC_OVER3";
											if (func_62(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_52(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = unk_0xCF66111B26743875(Local_99.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
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
					if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 3);
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_558, 3))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_558, 4))
					{
						if (iLocal_3417 != -1)
						{
							if (((((((func_162(63) || func_162(71)) || func_162(67)) || !func_157(iLocal_3417)) || func_253(1, 1)) || unk_0x84C71F36E7D97756()) || func_15(0) == 0) || iLocal_3417 == -1)
							{
								unk_0x88B0F0DC270164B7(&iLocal_558, 4);
							}
						}
						else
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 4);
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_558, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_557(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_253(0, 0))
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
			if (func_21(&uLocal_1237, bVar10) && unk_0x08BA6DD398CA197C(iLocal_558, 4))
			{
				if (!func_196() || unk_0x84C71F36E7D97756())
				{
					unk_0x88B0F0DC270164B7(&iLocal_558, 17);
					if (unk_0x08BA6DD398CA197C(iLocal_558, 5))
					{
						unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 1);
						func_445(3);
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
	
	if (((*uParam0 > 0 && !func_196()) && !(func_31(unk_0x0C1D3C552325765B(), 0) && (func_30(unk_0x0C1D3C552325765B()) || func_28(unk_0x0C1D3C552325765B())))) && !func_25(unk_0x0C1D3C552325765B()))
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
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 25);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
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
				if (func_193("AMEV_LBD_HELP"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_684(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF())
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_195("AMEV_LBD_HELP", -1);
			func_194(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2453273 = 1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_684(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_26(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
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
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
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
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(iParam2);
		unk_0xDA35BDB37E728640(func_42(&Var1));
		unk_0x3F9D1B882EC0B8AF(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_41(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar17 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2471124.f_21 > 0)
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
					iVar0 = unk_0xF02E9753777E6C9C(iVar18, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar17, 0, Global_2471124, &Var1, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar18, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar17, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_39() || !unk_0x1504F110F2576375()) || !func_36(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_37(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	return unk_0x6E373DDF41F95D44(-1762644250);
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
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
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
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_51(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_50(uParam0, uParam0->f_16);
	func_48(uParam0);
	if (func_47(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_46(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
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
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_47(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_48(var uParam0)
{
	if (func_49(uParam0->f_1))
	{
		uParam0->f_66 = func_165();
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
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_27())
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_139(iParam1, -2, 0, 0);
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
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

char* func_52(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		sVar0 = func_61(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return sVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		sVar0 = func_56(iParam0, 0);
		return sVar0;
	}
	if (((func_29(iParam0, 28) || func_29(unk_0x0C1D3C552325765B(), 28)) || func_55(iParam0)) && !func_54(iParam0))
	{
		return func_56(iParam0, 0);
	}
	iVar1 = func_53(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_56(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_61(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(sVar0))
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
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_27();
}

int func_54(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
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
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

char* func_57()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
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
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_27() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 != func_27())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_27())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
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
	return Global_1614576[iParam0 /*324*/].f_10 != func_27();
}

int func_63(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_27())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_64(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	unk_0x3F9D1B882EC0B8AF(iParam1);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_65(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_51(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_45(&Var0);
}

int func_66(float fParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844(fParam0);
	iVar0 = (iVar0 / Global_262145.f_9634);
	iVar0 = (iVar0 * Global_262145.f_9634);
	return iVar0;
}

int func_67(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_33(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_68()
{
	return unk_0x08BA6DD398CA197C(Global_1573924.f_1, 25);
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
	
	iVar0 = func_453(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (unk_0x08BA6DD398CA197C(uLocal_559, iVar0))
	{
		unk_0x1E8D45D2D7539440(func_72(iParam0, 0), 0, func_71(iParam0, 1));
		if (iVar0 == 4)
		{
			unk_0x1E8D45D2D7539440(func_72(iParam0, 1), 0, func_71(iParam0, 1));
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_559, iVar0);
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
	else if (func_8(iParam0) == unk_0x848AF823A8EA3C62())
	{
		return 9;
	}
	else if (func_166(unk_0x0C1D3C552325765B(), func_7(iParam0)))
	{
		return func_139(unk_0x0C1D3C552325765B(), -2, 0, 0);
	}
	return 6;
}

int func_72(int iParam0, bool bParam1)
{
	switch (func_453(iParam0))
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
	if (unk_0x16833EFAA58E63DB(func_74(iParam0)))
	{
		unk_0x0B57C567D698C373(&(Local_1244[iParam0 /*68*/].f_28));
	}
}

var func_74(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_28;
}

void func_75(int iParam0)
{
	if (unk_0x16833EFAA58E63DB(func_76(iParam0)))
	{
		unk_0x0B57C567D698C373(&(Local_1244[iParam0 /*68*/].f_27));
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
		if (func_157(iLocal_3417))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_558, 16))
		{
			unk_0xC94C39C53546E775("MP_Deathmatch_Type_Challenge_Scene");
			unk_0x88B0F0DC270164B7(&iLocal_558, 16);
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_558, 16))
	{
		unk_0x7C1793252FA472B6("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x09C86C0C5CA26B1E(&iLocal_558, 16);
	}
}

void func_78(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_157(unk_0x848AF823A8EA3C62()) && !func_253(1, 1)) && iLocal_3417 == unk_0x848AF823A8EA3C62()) && !func_94(unk_0x0C1D3C552325765B(), 0, 0, 0)) && !func_93(unk_0x0C1D3C552325765B())) && !func_92())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_558, 18))
		{
			if (iLocal_3421 == 0)
			{
				iLocal_3421 = 1;
			}
			func_88(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_84();
			unk_0x88B0F0DC270164B7(&iLocal_558, 18);
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_558, 18))
	{
		if (iLocal_3421)
		{
			iLocal_3421 = 0;
		}
		func_79();
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x09C86C0C5CA26B1E(&iLocal_558, 18);
	}
}

void func_79()
{
	if (func_83() && !func_82())
	{
		func_81();
	}
	func_80();
	Global_2404993.f_649 = 0;
}

void func_80()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_81()
{
	if (func_82())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_82()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
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
			func_86(func_453(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_85(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_85(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2404993.f_1682)
	{
	}
	if (Global_2404993.f_649 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/] = { Param0 };
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_3 = uParam3;
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_4 = uParam4;
		Global_2404993.f_649++;
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
					return Global_262145.f_9851;
				
				case 1:
					return Global_262145.f_9852;
				
				case 2:
					return Global_262145.f_9853;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9854;
				
				case 1:
					return Global_262145.f_9855;
				
				case 2:
					return Global_262145.f_9856;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9857;
				
				case 1:
					return Global_262145.f_9858;
				
				case 2:
					return Global_262145.f_9859;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9860;
				
				case 1:
					return Global_262145.f_9861;
				
				case 2:
					return Global_262145.f_9862;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9863;
				
				case 1:
					return Global_262145.f_9864;
				
				case 2:
					return Global_262145.f_9865;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9866;
				
				case 1:
					return Global_262145.f_9867;
				
				case 2:
					return Global_262145.f_9868;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9869;
				
				case 1:
					return Global_262145.f_9870;
				
				case 2:
					return Global_262145.f_9871;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9872;
				
				case 1:
					return Global_262145.f_9873;
				
				case 2:
					return Global_262145.f_9874;
				
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
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_79();
		func_91(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
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
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_90()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

bool func_92()
{
	return Global_1573843;
}

int func_93(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_95(iParam0))
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
	return 0;
}

int func_95(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_684(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_26(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_96(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_307(iParam0);
		func_97(iParam0);
	}
}

void func_97(int iParam0)
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
	if (func_253(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_9631 + 1000 - func_9(&(Local_99.f_1.f_1), 0, 0));
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
	if (!unk_0x08BA6DD398CA197C(Local_397[iLocal_3417 /*5*/].f_4, 12))
	{
		if (!func_157(iLocal_3417))
		{
			func_120(iVar6, iVar7, func_121());
			return;
		}
	}
	func_119(iVar6);
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
		if (func_118(1))
		{
			if (Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (unk_0xCB129F9A01D14082(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_62(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_139(Local_1244[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_66(func_116(iParam0, iLocal_3417));
	func_99(Local_1244[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1244[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1244[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3420, iVar7, func_121(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1244[iParam0 /*68*/].f_53[0 /*4*/] == unk_0x848AF823A8EA3C62())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_558, 23))
		{
			if (func_98(1))
			{
				unk_0xAB16AADE80707D47(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xAB16AADE80707D47(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x88B0F0DC270164B7(&iLocal_558, 23);
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_558, 23))
	{
		if (func_98(1))
		{
			unk_0xAB16AADE80707D47(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xAB16AADE80707D47(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_558, 23);
	}
}

bool func_98(bool bParam0)
{
	return func_58(unk_0x0C1D3C552325765B(), bParam0);
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_113(0) == 0)
	{
		return;
	}
	func_112();
	iVar1 = 0;
	if (((Global_2452809[0] != iParam0 || Global_2452809[1] != iParam1) || Global_2452809[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2452809[0] = iParam0;
	Global_2452809[1] = iParam1;
	Global_2452809[2] = iParam2;
	Global_2452809[3] = 0;
	Global_2452809[4] = 0;
	if (Global_2452809[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[0]);
			Global_2452815[0 /*16*/] = { func_111(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_108(iParam3, &(Global_2452815[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12);
		}
	}
	if (Global_2452809[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[1]);
			Global_2452815[1 /*16*/] = { func_111(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_108(iParam4, &(Global_2452815[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13);
		}
	}
	if (Global_2452809[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[2]);
			Global_2452815[2 /*16*/] = { func_111(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_108(iParam5, &(Global_2452815[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (unk_0x0C1D3C552325765B() != func_27())
			{
				if (func_104(unk_0x0C1D3C552325765B()) == 0)
				{
					func_108(iParam6, unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_104(unk_0x0C1D3C552325765B()) == 0)
			{
				func_108(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_104(unk_0x0C1D3C552325765B()) == 0)
			{
				func_108(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_103(sParam10))
	{
		sVar2 = sParam10;
	}
	func_100(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
	*uParam8 = 0;
}

void func_100(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_102(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_101(7, iVar0);
		Global_1344178.f_4131[iVar0] = uParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = uParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = uParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_101(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_102(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

int func_103(var uParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_104(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		if ((func_107() && !func_106()) || func_105(unk_0x0C1D3C552325765B(), 21))
		{
			return 1;
		}
		if (func_18(&(Global_1573924.f_13)))
		{
			if (!func_5(&(Global_1573924.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1573924.f_13));
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9);
}

bool func_105(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

bool func_106()
{
	return Global_1312412.f_1;
}

bool func_107()
{
	return Global_1312412;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_102(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_101(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = iParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = iParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_110())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_109())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_109()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_111(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_112()
{
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	Global_2453276 = 1;
}

int func_113(bool bParam0)
{
	if (func_115())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_684(unk_0x0C1D3C552325765B(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_114()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_115()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 12);
}

float func_116(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_117(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_117(int iParam0, int iParam1)
{
	return Local_99.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_118(bool bParam0)
{
	return func_62(unk_0x0C1D3C552325765B(), bParam0);
}

void func_119(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x62E2FDDFDA7A731D())
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
		{
			if (!unk_0x509383441597090D(&(Global_2482149.f_4603)))
			{
				unk_0x59CA83A35E3F2FD3(&(Global_2482149.f_4603));
			}
			unk_0x5A6B86444D23FCA8(1);
			unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA");
			unk_0x7C1793252FA472B6("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x0756AF366187C194("DisableFlightMusic", 0);
			unk_0x0756AF366187C194("WantedMusicDisabled", 0);
			unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
			if (Global_2482149.f_4611 > -1)
			{
				unk_0xC8656944A36C8E78(Global_2482149.f_4611);
				Global_2482149.f_4611 = -1;
			}
			Global_2482149.f_4601 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
		{
			if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 4))
			{
				if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 2))
				{
					if (unk_0x9FB4AB85AEBEC9F4())
					{
						if ((!unk_0x28C1B9853548BD8E(unk_0x91715E28C0CEA779(unk_0x6327B643497275A6()), "OFF") && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)) && !unk_0x509383441597090D(&(Global_2482149.f_4603)))
						{
							StringCopy(&(Global_2482149.f_4603), "", 32);
							unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA");
							unk_0x7C1793252FA472B6("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x0756AF366187C194("DisableFlightMusic", 0);
							unk_0x0756AF366187C194("WantedMusicDisabled", 0);
							unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
							unk_0x5A6B86444D23FCA8(1);
							unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 2);
						}
					}
				}
				else if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 5))
				{
					unk_0x59CA83A35E3F2FD3("OFF");
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0xB49DAD10DC051295("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0xB49DAD10DC051295("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S");
				}
				unk_0xC94C39C53546E775("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 1);
			}
			else if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x77188BBB27D82F39() != 0)
					{
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && !unk_0xEE7660EB94DECD0D())
						{
							StringCopy(&(Global_2482149.f_4603), unk_0xC5291E6D40B33FC3(), 32);
							unk_0x59CA83A35E3F2FD3("OFF");
						}
						unk_0x5A6B86444D23FCA8(1);
						unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 3))
				{
					Global_2482149.f_4611 = unk_0x2657E29E0DD8087E();
					unk_0xAB16AADE80707D47(Global_2482149.f_4611, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
			{
				Global_2482149.f_4601 = 0;
				Global_2482149.f_4611 = -1;
				unk_0x27971883A8701E73("FM_COUNTDOWN_30S_KILL");
				unk_0x5A6B86444D23FCA8(0);
				unk_0xB49DAD10DC051295("FM_PRE_COUNTDOWN_30S");
				unk_0x0756AF366187C194("DisableFlightMusic", 1);
				unk_0x0756AF366187C194("WantedMusicDisabled", 1);
				unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 0);
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 2))
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 2);
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 5);
				}
				else
				{
					unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 5);
					unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
		{
			Global_2482149.f_4601 = 0;
			Global_2482149.f_4611 = -1;
			unk_0x27971883A8701E73("FM_COUNTDOWN_30S_KILL");
			unk_0x5A6B86444D23FCA8(0);
			unk_0xB49DAD10DC051295("FM_PRE_COUNTDOWN_30S");
			unk_0x0756AF366187C194("DisableFlightMusic", 1);
			unk_0x0756AF366187C194("WantedMusicDisabled", 1);
			unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 0);
			if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 2);
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 5);
			}
			else
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 2);
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 5);
			}
		}
	}
}

void func_120(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_113(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_103(sParam2))
	{
		sVar0 = sParam2;
	}
	func_100(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0);
}

char* func_121()
{
	return "HUD_COUNTDOWN";
	switch (func_208(unk_0x0C1D3C552325765B()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_122())
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

int func_122()
{
	if (func_208(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

bool func_123(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/].f_72;
}

int func_124(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 63)
	{
		return 0;
	}
	if (func_134(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_128();
	Global_1312571 = 9;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_127();
	func_126(bParam2);
	func_125();
	return 1;
}

void func_125()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_126(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_127()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

void func_128()
{
	func_130();
	func_129(0);
}

void func_129(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
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

void func_130()
{
	if (!func_133())
	{
	}
	if (func_132())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_131();
		unk_0x953FDEB57BB0D276();
	}
}

void func_131()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_132()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_133()
{
	if (!func_132())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_131();
	return unk_0x7A2AFC1B08BD3742();
}

bool func_134(char* sParam0, char* sParam1)
{
	if (!func_132())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_135(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_136(sParam0, unk_0xCF66111B26743875(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312571 = 15;
		Global_1312571.f_56 = iParam3;
		Global_1312571.f_57 = iParam4;
	}
}

int func_136(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 63)
	{
		return 0;
	}
	if (func_137(sParam0, sParam1, sParam2) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_128();
	Global_1312571 = 10;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	StringCopy(&(Global_1312571.f_32), sParam2, 64);
	Global_1312571.f_58 = uParam4;
	Global_1312571.f_56 = uParam4;
	func_127();
	func_126(bParam3);
	func_125();
	return 1;
}

bool func_137(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_132())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam2) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_32));
}

void func_138(char* sParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(uParam1);
	if (!iParam4 == 0)
	{
		unk_0x212C24688D441F9E(iParam4);
	}
	unk_0xBDE6EEC5F6BDC060(sParam3);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam5);
}

int func_139(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_624(iParam0))
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_624(unk_0x0C1D3C552325765B()) || (func_155() && func_623()))
	{
		uVar1 = func_154();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(uVar1))
			{
				if (unk_0xA43666ACD375E339(uVar1) != -1)
				{
					if (func_684(unk_0xA43666ACD375E339(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_153(iParam1, iParam0, 0);
							}
							else
							{
								return func_147(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_147(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_153(iParam1, iParam0, 0);
				}
				else
				{
					return func_140(0, -1, 0);
				}
			}
			else
			{
				return func_140(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_153(iParam1, iParam0, 0);
		}
		else
		{
			return func_147(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_147(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_140(bool bParam0, int iParam1, bool bParam2)
{
	return func_141(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_141(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_145(1);
				}
				else
				{
					return func_145(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_142(iVar0, iParam2, 1);
			}
			else
			{
				return func_142(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_145(1);
	}
	return func_145(0);
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_144(iParam0, iParam1);
	if (func_143(Global_1626500.f_83867))
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

int func_143(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
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
			if (!func_146(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_145(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_146(int iParam0, int iParam1, int iParam2)
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_152(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_146(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_145(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_151(1);
			}
			else
			{
				return func_141(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_145(1);
			}
			else
			{
				return func_141(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_150(iParam0);
	if (!iVar3 == -1)
	{
		return func_148(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_149(iParam0);
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

var func_149(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_150(int iParam0)
{
	if (!iParam0 == func_27())
	{
		if (func_62(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_53(iParam0)];
		}
	}
	return -1;
}

int func_151(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_153(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_141(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_154()
{
	return Global_2359301.f_2;
}

bool func_155()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

char* func_156()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_53(unk_0x0C1D3C552325765B());
	if (iVar0 != func_27())
	{
		if (iVar0 != unk_0x0C1D3C552325765B())
		{
			if (((func_29(iVar0, 28) || func_29(unk_0x0C1D3C552325765B(), 28)) || func_55(iVar0)) && !func_54(iVar0))
			{
				return func_56(iVar0, 0);
			}
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_56(iVar0, 0);
			}
		}
		sVar1 = func_61(&(Global_1614576[iVar0 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(sVar1))
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

int func_157(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Local_397[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_397[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_158(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_159(sParam0))
	{
		return;
	}
	func_128();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_127();
	func_126(bParam1);
	func_125();
}

bool func_159(char* sParam0)
{
	if (!func_132())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_160(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_160(char* sParam0)
{
	if (!func_132())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_161()
{
	if (!func_132())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_128();
}

bool func_162(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

int func_163(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_51(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_45(&Var0);
}

int func_164(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_51(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_45(&Var0);
}

int func_165()
{
	return 21;
}

int func_166(int iParam0, int iParam1)
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

void func_167(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0756AF366187C194("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0756AF366187C194("WantedMusicDisabled", 1);
	}
	Global_2482149.f_4611 = -1;
	bVar0 = (func_31(unk_0x0C1D3C552325765B(), 0) && func_30(unk_0x0C1D3C552325765B()));
	if (bParam6)
	{
		func_190(21, 1);
	}
	else
	{
		func_187(iParam0, -1);
		if (func_186(unk_0x0C1D3C552325765B()))
		{
			Global_1573924.f_3 = iParam0;
		}
		else
		{
			func_185(iParam0);
		}
		Global_1573924.f_4 = -1;
		if (func_186(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 5);
		}
		if ((func_107() && !func_106()) || func_105(unk_0x0C1D3C552325765B(), 21))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 4);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 17);
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 20);
		if (func_184(iParam0))
		{
			func_183();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_180(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xACD6D334FD769B0C(fParam2);
			if (iParam0 == 146)
			{
				unk_0xCF03D9C8A7F1577C(0);
				unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
				unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			}
		}
		if (func_178(iParam0))
		{
			unk_0xCF03D9C8A7F1577C(0);
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391043)
			{
				func_176(1);
				if (func_173(0))
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_171(1);
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
		}
		if (bParam5)
		{
			func_170();
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_168(iParam0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 21);
			}
		}
	}
	Global_2471085 = 1;
}

int func_168(int iParam0)
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
	if (func_169())
	{
		return 1;
	}
	return 0;
}

int func_169()
{
	switch (func_122())
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

void func_170()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4602), 0);
}

void func_171(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91458.f_8 = 1;
	}
	else
	{
		Global_91458.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_172(iVar0);
		iVar0++;
	}
}

void func_172(int iParam0)
{
	Global_91458.f_160[iParam0] = 1;
	Global_91458.f_159 = 1;
}

int func_173(int iParam0)
{
	var uVar0;
	
	uVar0 = func_174(2514, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x08BA6DD398CA197C(uVar0, 0) && unk_0x08BA6DD398CA197C(iVar0, 1)) && unk_0x08BA6DD398CA197C(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x08BA6DD398CA197C(iVar0, 3) && unk_0x08BA6DD398CA197C(iVar0, 4)) && unk_0x08BA6DD398CA197C(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x08BA6DD398CA197C(iVar0, 6) && unk_0x08BA6DD398CA197C(iVar0, 7)) && unk_0x08BA6DD398CA197C(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x08BA6DD398CA197C(iVar0, 9) && unk_0x08BA6DD398CA197C(iVar0, 10)) && unk_0x08BA6DD398CA197C(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_175(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

void func_176(int iParam0)
{
	if (func_177() && iParam0)
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

int func_177()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_179(unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

void func_180(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_181())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

int func_181()
{
	switch (func_182())
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

int func_182()
{
	return Global_25185;
}

void func_183()
{
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_200 = 0;
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4422), 1);
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_185(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/] = iParam0;
}

bool func_186(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_189(0) || func_189(func_188(iVar0)))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 2);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 2);
		}
	}
}

int func_188(int iParam0)
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

bool func_189(int iParam0)
{
	var uVar0;
	
	uVar0 = func_174(2460, -1, 0);
	return unk_0x08BA6DD398CA197C(uVar0, iParam0);
}

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
	}
}

void func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

float func_192(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_40;
}

bool func_193(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_194(int iParam0)
{
	unk_0x65F5CA804AAEE6C3(3, 21, 200, 0, 0);
	if (iParam0 && !func_196())
	{
		unk_0xAB16AADE80707D47(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_195(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

bool func_196()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

void func_197(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_107())
		{
			func_200(0);
			func_199();
		}
		if (func_189(0))
		{
			uVar0 = func_174(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, 0);
			func_199();
		}
		if (func_189(func_188(func_208(unk_0x0C1D3C552325765B()))))
		{
			uVar0 = func_174(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, func_188(func_208(unk_0x0C1D3C552325765B())));
			func_199();
		}
		if (func_198())
		{
			func_199();
		}
		if (func_208(unk_0x0C1D3C552325765B()) > -1)
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 7);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 7);
	}
}

int func_198()
{
	if (Global_2432628.f_654.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_199()
{
	if (func_198())
	{
		Global_2432628.f_654.f_16 = 1;
	}
}

void func_200(int iParam0)
{
	if (func_107())
	{
		if (iParam0 == 1)
		{
			if (Global_2482149.f_4255 == -1)
			{
				Global_2482149.f_4255 = 60000;
			}
			func_207(&(Global_2482149.f_4253), 0, 0);
			if (Global_2482149.f_4258 == -1)
			{
				Global_2482149.f_4258 = 10000;
			}
			func_207(&(Global_2482149.f_4256), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_206(1);
		}
		if ((!unk_0x1504F110F2576375() && !func_205()) && !func_201(unk_0x0C1D3C552325765B()))
		{
			Global_978174 = 0;
		}
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_8 = 0;
	}
}

int func_201(int iParam0)
{
	if (func_202(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_203(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_203(int iParam0)
{
	return func_204(iParam0);
}

bool func_204(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_205()
{
	return Global_2442442.f_717;
}

void func_206(bool bParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_107())
		{
			if (func_684(unk_0x0C1D3C552325765B(), 1, 0))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 0);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 0);
			}
			unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 1f);
			unk_0x57FA95501E37763C(0);
			unk_0x83CDA1F1ADCD9582(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0x9066E5B82BC6B02C(0, 0);
				}
			}
		}
		else
		{
			if (func_684(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 0);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 1);
				unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0x9066E5B82BC6B02C(1, 0);
				}
			}
			unk_0x57FA95501E37763C(1);
			unk_0x83CDA1F1ADCD9582(0);
		}
	}
}

void func_207(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

bool func_209(int iParam0, int iParam1)
{
	return Local_397[iParam0 /*5*/].f_1[iParam1];
}

int func_210(bool bParam0, bool bParam1)
{
	if (func_212(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_104(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_211(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_211(int iParam0)
{
	return func_36(iParam0, 0);
}

bool func_212(int iParam0)
{
	if (func_186(iParam0))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

void func_213(int iParam0)
{
	if (!unk_0x08BA6DD398CA197C(iLocal_558, 22))
	{
		if (iLocal_3417 == unk_0x848AF823A8EA3C62())
		{
			if (func_157(unk_0x848AF823A8EA3C62()))
			{
				if (!func_253(1, 1))
				{
					if (Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/] != unk_0x848AF823A8EA3C62())
							{
								if (!func_166(unk_0x0C1D3C552325765B(), Local_99.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_214();
									unk_0x88B0F0DC270164B7(&iLocal_558, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_214()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 19);
}

void func_215(int iParam0)
{
	if (iLocal_395 != func_8(iParam0))
	{
		iLocal_395 = func_8(iParam0);
		if (iLocal_395 > -1)
		{
			iLocal_396++;
			unk_0x88B0F0DC270164B7(&iLocal_558, 25);
		}
	}
}

void func_216(int iParam0)
{
	if (func_598() == 1)
	{
		if (func_8(iParam0) == unk_0x848AF823A8EA3C62() && !func_210(1, 0))
		{
			if (!func_179(unk_0x0C1D3C552325765B()))
			{
				func_217(1);
			}
		}
		else if (func_179(unk_0x0C1D3C552325765B()))
		{
			func_217(0);
		}
	}
}

void func_217(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		Global_2453905 = func_208(unk_0x0C1D3C552325765B());
		if (Global_2453905 == -1)
		{
			Global_2453905 = Global_1573924.f_4;
		}
		if (func_250(Global_2453905) == 0)
		{
			if (func_249(1) > 0)
			{
				func_248(26, -1);
			}
		}
		if (func_107())
		{
			func_200(0);
			func_199();
		}
		if (func_189(0))
		{
			uVar1 = func_174(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar1, 0);
			func_199();
		}
		if (func_189(func_188(func_208(unk_0x0C1D3C552325765B()))))
		{
			uVar1 = func_174(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar1, func_188(func_208(unk_0x0C1D3C552325765B())));
			func_199();
		}
		if (func_198())
		{
			func_199();
		}
		unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 0);
	}
	else
	{
		if ((!func_247() && !func_246()) && !func_245())
		{
			Global_2453905 = -1;
			func_244(26, -1);
		}
		else if (func_250(Global_2453905) == 0)
		{
			iVar0 = func_229(1);
			if (iVar0 > 0)
			{
				func_224(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_220(1924, 1, -1);
				func_224(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_218(26, -1))
		{
			Global_2453905 = -1;
			func_244(26, -1);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 0);
	}
}

bool func_218(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	uVar0 = func_219(iParam1);
	uVar1 = unk_0x680A5FBB1F20F775(uVar0);
	return unk_0x08BA6DD398CA197C(uVar1, iParam0);
}

int func_219(int iParam0)
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

void func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_174(iParam0, func_175(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_223(iParam0))
	{
		func_222(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_221(iParam0, iVar0, iParam2, 1);
	}
}

void func_221(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_175(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_175(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_175(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_175(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_175(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_175(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_175(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_175(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_175(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_175(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_175(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_175(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_175(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_175(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_175(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_175(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_175(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_175(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_175(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_175(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_175(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_175(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_175(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_175(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_175(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_175(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_175(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_175(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_175(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_175(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_175(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_175(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_175(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_175(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_223(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

void func_224(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_228(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_227(iParam0))
	{
		func_226(iParam0, iVar0);
	}
	else
	{
		func_225(iParam0, iVar0);
	}
}

void func_225(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_226(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
}

int func_227(int iParam0)
{
	if (Global_1352216)
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

int func_228(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2452799 == 0)
	{
		return 0;
	}
	if (func_245())
	{
		if (unk_0x1504F110F2576375() || (func_243() || func_241()))
		{
			Global_2451781 = 1;
		}
	}
	Global_2452799 = 0;
	if (Global_1318055)
	{
		iVar0 = 1;
	}
	if (Global_2451781)
	{
		iVar0 = 1;
	}
	if (Global_2451780)
	{
		iVar0 = 1;
	}
	if (func_240(Global_100581.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2451706)
	{
		iVar0 = 1;
	}
	if (func_239(512))
	{
		iVar0 = 1;
	}
	if (func_238(128))
	{
		iVar0 = 1;
	}
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_237())
	{
		iVar0 = 0;
	}
	if (Global_2452238)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_235())
		{
			if (Global_1626500.f_84506 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = 0;
	}
	if (func_234())
	{
		iVar0 = 0;
	}
	if ((Global_2451781 || Global_2451780) || Global_1318055)
	{
		if (func_241())
		{
			iVar0 = 0;
		}
	}
	Global_2452238 = 0;
	Global_2451780 = 0;
	Global_2451781 = 0;
	Global_1318055 = 0;
	Global_2451706 = 0;
	func_232(&(Global_100581.f_1), 32);
	func_231(512);
	func_230(128);
	return iVar0;
}

void func_230(int iParam0)
{
	Global_100638 = (Global_100638 - (Global_100638 && iParam0));
}

void func_231(int iParam0)
{
	Global_100639 = (Global_100639 - (Global_100639 && iParam0));
}

void func_232(var uParam0, int iParam1)
{
	func_233(uParam0, iParam1);
}

void func_233(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_234()
{
	if (((Global_1573865 || Global_1573836) || func_36(unk_0x0C1D3C552325765B(), 0)) || func_155())
	{
		return 1;
	}
	return 0;
}

int func_235()
{
	switch (func_236())
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

int func_236()
{
	return Global_2443212.f_1.f_2818;
}

bool func_237()
{
	return Global_1315206;
}

bool func_238(int iParam0)
{
	return (Global_100638 && iParam0) != 0;
}

bool func_239(int iParam0)
{
	return (Global_100639 && iParam0) != 0;
}

bool func_240(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_241()
{
	if (func_250(Global_2453905))
	{
		return 0;
	}
	if (func_242(unk_0x0C1D3C552325765B(), 146))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/] == iParam1)
	{
		return func_179(iParam0);
	}
	return 0;
}

int func_243()
{
	if (func_250(Global_2453905))
	{
		return 0;
	}
	if (func_179(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

void func_244(int iParam0, int iParam1)
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
			unk_0x9460FEB503073236(0, iParam1);
			break;
		
		default:
			uVar1 = func_219(iParam1);
			iVar0 = unk_0x680A5FBB1F20F775(uVar1);
			if (unk_0x08BA6DD398CA197C(iVar0, iParam0))
			{
				unk_0x09C86C0C5CA26B1E(&iVar0, iParam0);
				unk_0x9460FEB503073236(iVar0, iParam1);
			}
			break;
	}
}

bool func_245()
{
	return unk_0x08BA6DD398CA197C(Global_1312419, 0);
}

bool func_246()
{
	return Global_1315198;
}

bool func_247()
{
	return Global_1315229;
}

void func_248(int iParam0, int iParam1)
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
			unk_0x9460FEB503073236(0, iParam1);
			break;
		
		default:
			uVar1 = func_219(iParam1);
			iVar0 = unk_0x680A5FBB1F20F775(uVar1);
			if (!unk_0x08BA6DD398CA197C(iVar0, iParam0))
			{
				unk_0x88B0F0DC270164B7(&iVar0, iParam0);
				unk_0x9460FEB503073236(iVar0, iParam1);
			}
			break;
	}
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_237())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_235())
		{
			if (Global_1626500.f_84506 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = 0;
	}
	if (func_234())
	{
		iVar0 = 0;
	}
	Global_2452799 = 1;
	return iVar0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9831)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9833)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9830)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9834)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9835)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9836)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9832)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9837)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9838)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9839)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9840)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_251()
{
	if (func_253(0, 0))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_558, 25))
	{
		if (iLocal_395 == unk_0x848AF823A8EA3C62())
		{
			if (Local_383.f_11 == 0)
			{
				Local_383.f_11 = unk_0x39E54E7BC7452169();
			}
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_558, 25);
	}
}

void func_252()
{
	if (func_193("KOTC_1STHELP"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	if (func_193("KOTC_OTHRKG"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	if (func_193("KOTC_YOUKNG"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	if (func_193("KOTC_CONTS"))
	{
		unk_0x94724F7C938EBE34(1);
	}
}

int func_253(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (unk_0x08BA6DD398CA197C(iLocal_558, 17))
	{
		return 1;
	}
	if (func_290(unk_0x0C1D3C552325765B(), 1, 0))
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (func_189(9))
	{
		return 1;
	}
	if (func_189(0))
	{
		return 1;
	}
	if (!func_268())
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_256(4))
	{
		return 1;
	}
	if (func_255())
	{
		return 1;
	}
	if (func_210(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1738544)
	{
		return 1;
	}
	if (func_254(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	if (!func_684(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_255()
{
	return Global_91458.f_304 > 0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	if (func_255())
	{
		iVar0 = 0;
		while (iVar0 < 46)
		{
			if (func_260(iVar0) == iParam0)
			{
				if (func_257(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_257(int iParam0)
{
	return func_258(iParam0, 6, 1);
}

int func_258(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x08BA6DD398CA197C(Global_91458.f_1308[iParam0], iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_182() == 0)
		{
			return unk_0x08BA6DD398CA197C(func_174(func_259(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 4442;
			break;
		
		case 45:
			return 3776;
			break;
		
		default:
			break;
	}
	return 4617;
}

int func_260(int iParam0)
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

int func_261()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_357.f_5, 0))
	{
		return 1;
	}
	if (func_263() && Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 != 3)
	{
		return 1;
	}
	if (func_262() && Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 != 3)
	{
		return 1;
	}
	if (Global_2394716)
	{
		return 1;
	}
	if (Global_1573924.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_262()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 5);
}

int func_263()
{
	if (((func_267() || func_266()) || func_265()) || func_264())
	{
		return 1;
	}
	return 0;
}

bool func_264()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 1);
}

bool func_265()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

bool func_266()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

bool func_267()
{
	return Global_2442442.f_576;
}

int func_268()
{
	if (func_105(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (unk_0xA012E3A84A2B2F1A())
	{
		return 0;
	}
	if (func_201(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (func_288(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_287())
	{
		return 0;
	}
	if (func_277(unk_0x0C1D3C552325765B()) == 3)
	{
		return 0;
	}
	if (func_275(func_276()))
	{
		return 0;
	}
	if (func_247())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_203(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_273())
	{
		return 0;
	}
	if (func_105(unk_0x0C1D3C552325765B(), 0) || func_105(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_105(unk_0x0C1D3C552325765B(), 12) || func_105(unk_0x0C1D3C552325765B(), 14)) || func_105(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_94(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		return 0;
	}
	if (func_272(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_254(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_271())
	{
		return 0;
	}
	if (func_269(unk_0x0C1D3C552325765B()) && Global_1588450.f_168)
	{
		return 0;
	}
	return 1;
}

int func_269(int iParam0)
{
	if (func_270(Global_1588660[iParam0 /*532*/].f_256.f_11))
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0)
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

int func_271()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_272(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11);
}

int func_273()
{
	if (func_274() == 0)
	{
		return 1;
	}
	return 0;
}

int func_274()
{
	return Global_1312462.f_18;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_276()
{
	return Global_2432628.f_2198[0 /*72*/].f_1;
}

int func_277(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_286(iParam0) && !func_186(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_285(iParam0);
	bVar3 = func_107();
	uVar4 = func_279();
	if ((bVar1 && (func_278(iParam0) || func_179(iParam0))) || uVar4)
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
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

int func_278(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

int func_279()
{
	if ((func_29(unk_0x0C1D3C552325765B(), 21) || func_29(unk_0x0C1D3C552325765B(), 22)) || func_283())
	{
		return 1;
	}
	if (func_281())
	{
		func_280(22);
		return 1;
	}
	return 0;
}

void func_280(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_281()
{
	if (func_31(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_107() && !func_106()) || func_105(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_29(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_282(27);
		}
	}
	return 0;
}

void func_282(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_283()
{
	return func_284(286, -1);
}

int func_284(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_175(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_285(int iParam0)
{
	return func_29(iParam0, 20);
}

int func_286(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

bool func_287()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

int func_288(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_289()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_290(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_291(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	int iVar1;
	
	Global_1573924.f_6 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param1);
	if (fVar0 < fParam5 && !func_186(unk_0x0C1D3C552325765B()))
	{
		if (iParam0 != 146 && !func_105(unk_0x0C1D3C552325765B(), 21))
		{
			func_305(Param1, 1, 0);
		}
		if ((!*uParam4 || unk_0x08BA6DD398CA197C(Global_1573924.f_1, 3)) && func_684(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 1;
			func_180(func_304(iParam0));
			unk_0xACD6D334FD769B0C(func_303(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_302(iParam0);
				unk_0xCF03D9C8A7F1577C(iVar1);
				if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > iVar1)
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), iVar1, 1);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 8);
			}
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 3);
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_186(unk_0x0C1D3C552325765B()))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 3) && func_684(unk_0x0C1D3C552325765B(), 1, 1))
		{
			func_301();
			unk_0xACD6D334FD769B0C(Global_262145.f_9843);
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 3);
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 3);
		}
	}
	else if ((*uParam4 || unk_0x08BA6DD398CA197C(Global_1573924.f_1, 3)) && func_684(unk_0x0C1D3C552325765B(), 1, 1))
	{
		*uParam4 = 0;
		func_301();
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 8);
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 3);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_292();
		}
	}
}

void func_292()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_299();
	func_295(1, 1);
	func_293();
}

void func_293()
{
	func_294(0, 0);
}

void func_294(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_295(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_298();
	}
	func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_297(0);
	func_296();
}

void func_296()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_297(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_298()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_299()
{
	func_300();
	Global_2404993.f_1813 = 0;
}

void func_300()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_301()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

int func_302(int iParam0)
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

float func_303(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_304(int iParam0)
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

void func_305(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

Vector3 func_306(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_24;
}

void func_307(int iParam0)
{
	int iVar0;
	
	if (func_253(0, 0))
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
	func_308(&Local_1313, &(Local_1244[iParam0 /*68*/].f_66), 23, &uLocal_2882, &uLocal_2991, -1, 0);
}

void func_308(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_421(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_419() || iParam2 == 24)
	{
		if (func_376(uParam1, iParam2, uParam3, Global_1573696, 0, func_422()))
		{
			func_375(1);
			if ((!func_374() && !func_373()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_372())
				{
					func_370();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_369(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_368(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
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
								if (func_684(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_36(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_367(iVar35))
										{
											iVar44 = iVar35;
											if (func_63(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_364(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_361(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_360())
							{
								if (func_684(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
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
							if ((func_359(iVar35) && func_355(iVar35, iParam2)) && func_684(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_350(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_41(iVar35) };
								iVar37 = func_344(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
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
									if (!func_360())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_339(&iVar43, &fVar45, (iParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_338(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_337(iVar35, 0);
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
								if (func_336(iParam5))
								{
									func_335(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_335(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_684(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_27();
							}
							if (func_359(iVar35))
							{
								if (func_684(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_350(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_41(iVar35) };
									iVar37 = func_344(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_337(iVar35, 1);
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
									func_321(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_318(uParam3, uParam1);
						}
						func_3(&(uParam3->f_21));
						func_317();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_316(uParam3, uParam1);
							func_315(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_316(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_311(uParam3))
						{
							Global_1573844 = 1;
						}
						func_309(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_317();
			func_369(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_309(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_310(0);
	}
}

void func_310(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_311(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_27() && func_684(iVar15, 0, 1))
	{
		Var2 = { func_41(iVar15) };
		iVar1 = func_314(uParam0, uParam0->f_37);
		if (func_313(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_312(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_312(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_312(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_312(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_312(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_312(uParam0, iVar0, 0);
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

void func_312(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_313(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_314(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_316(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_317()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_318(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_27())
		{
			if (func_684(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_320(uParam0->f_38[iVar0 /*2*/], 0);
					func_319(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_319(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_320(int iParam0, bool bParam1)
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

void func_321(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_334() && iParam4 < func_333())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_332("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_332(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_332("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_332("");
			if (uParam3->f_108 == 6)
			{
				func_332("");
			}
			else
			{
				func_332(&sParam5);
			}
			func_326(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_325(uParam3))
			{
				func_324("DPAD_FRIEND");
			}
			else if (func_323(uParam3))
			{
				func_324("DPAD_FRIEND");
			}
			else if (func_322(uParam3))
			{
				func_324("DPAD_CREW");
			}
			else
			{
				func_324("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_322(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_323(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_324(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_325(var uParam0)
{
	if (func_323(uParam0) && func_322(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_326(var uParam0, int iParam1)
{
	if (func_331(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_327(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_327(int iParam0)
{
	if ((func_684(iParam0, 0, 1) && func_328()) && func_58(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	if (func_286(unk_0x0C1D3C552325765B()) || func_329())
	{
		return 0;
	}
	return 1;
}

int func_329()
{
	switch (func_330(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_330(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_331(int iParam0)
{
	if ((func_684(iParam0, 0, 1) && func_328()) && func_60(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_332(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_333()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_334()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_335(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_334() && iParam3 < func_333())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
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
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_332("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_324(sParam16);
				}
				else
				{
					func_332(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_332("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_360())
				{
					func_332("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_324(&(uParam2->f_104));
					}
					else
					{
						func_332("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_332("");
				}
				if (uParam2->f_108 == 6)
				{
					func_332("");
				}
				else
				{
					func_332(&sParam4);
				}
				func_326(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_332("");
					func_332("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_325(uParam2))
				{
					func_324("DPAD_FRIEND");
				}
				else if (func_323(uParam2))
				{
					func_324("DPAD_FRIEND");
				}
				else if (func_322(uParam2))
				{
					func_324("DPAD_CREW");
				}
				else
				{
					func_324("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_336(int iParam0)
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

int func_337(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_286(iParam0)) && !func_285(iParam0))
	{
		iVar0 = func_165();
	}
	iVar1 = func_150(iParam0);
	if (!iVar1 == -1)
	{
		return func_148(iVar1);
	}
	return iVar0;
}

char* func_338(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xAE52C62FC0BBB14E())
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
			if (unk_0xAE52C62FC0BBB14E())
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

int func_339(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_343(iParam3))
	{
		*fParam1 = (func_340(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_336(iParam3))
	{
		*fParam1 = (func_340(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_340(int iParam0, int iParam1)
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
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_342(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_341(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_341(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_342(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_343(int iParam0)
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

int func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = func_347(iParam0);
	if (iVar0 == -1)
	{
		func_345(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_345(int iParam0, bool bParam1)
{
	if (!func_684(iParam0, 0, 1))
	{
		return;
	}
	if (func_347(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_346(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_347(int iParam0)
{
	int iVar0;
	
	if (!func_684(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_348(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_348(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_349(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_349(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_350(int iParam0)
{
	struct<4> Var0;
	
	if (func_684(iParam0, 0, 1))
	{
		Global_2471194 = { func_41(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_313(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_354(&Global_2471194))
		{
			Global_2471124 = { func_352(iParam0) };
			func_351(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_351(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_352(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_353(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_41(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_353(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_354(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_186(iParam0) || func_358(iParam0)) || func_212(iParam0))
		{
			return 0;
		}
	}
	if (!func_357(iParam0))
	{
		return 0;
	}
	if ((!func_356(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_367(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_356(int iParam0)
{
	if (func_684(iParam0, 0, 1))
	{
		if (func_684(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_357(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

int func_358(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_359(int iParam0)
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
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_360()
{
	switch (func_330(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
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
	switch (func_208(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_285(unk_0x0C1D3C552325765B()))
	{
		switch (func_330(unk_0x0C1D3C552325765B()))
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

int func_361(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_362(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_362(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_362(int iParam0)
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
	return func_363(iParam0, 0);
	return 0;
}

int func_363(int iParam0, int iParam1)
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

void func_364(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_684(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_367(iVar1))
				{
					if (func_365(iVar1, iParam1, 0))
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

int func_365(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_366(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_27())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_366(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_27())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_367(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

void func_368(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_370()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_196())
		{
			func_371();
		}
	}
}

void func_371()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_372()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_196())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_196())
	{
		return 1;
	}
	return 0;
}

int func_373()
{
	if (func_196())
	{
		if (func_46(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_374()
{
	if (func_196())
	{
		if (func_49(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_375(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_376(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_418(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_417();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_416())
		{
			if (func_415() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_406())
		{
			func_405(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_405(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_415() == 1)
		{
			func_404(bVar6, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_405(uParam0, uParam2, 0);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_415() == 0 && !bParam5))
		{
			func_405(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_403();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_403();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_404(bVar6, uParam0, 0))
				{
					func_368(uParam0);
					uVar4 = func_401(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_398(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_392(uParam0, func_395(uParam2), func_393(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_384(uParam0, func_386(), func_385(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_398(uParam0, uVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_382(iParam1) };
						iVar8 = func_377(iParam1);
						func_398(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_381())
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
			if (func_380(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_379(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_378(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_378(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_379(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_380(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_381()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_382(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_383(unk_0x0C1D3C552325765B()) || func_378(unk_0x0C1D3C552325765B()))
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
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_383(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_384(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_324(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_324("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_385()
{
	switch (func_330(unk_0x0C1D3C552325765B()))
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

char* func_386()
{
	switch (func_330(unk_0x0C1D3C552325765B()))
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
			if (func_388())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_98(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_98(1))
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
			if (func_387(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_387(int iParam0)
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

bool func_388()
{
	return (func_391() && func_389(func_390()));
}

int func_389(int iParam0)
{
	return func_60(iParam0, 1);
}

int func_390()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_391()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_392(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(uParam2))
		{
			func_324(uParam1);
		}
		else if (func_208(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(uParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_324("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_393(var uParam0)
{
	int iVar0;
	
	iVar0 = func_208(unk_0x0C1D3C552325765B());
	if (func_394())
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
			switch (func_122())
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

bool func_394()
{
	return Global_1588659;
}

char* func_395(var uParam0)
{
	int iVar0;
	
	iVar0 = func_208(unk_0x0C1D3C552325765B());
	if (func_394())
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
			if (func_397() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_397() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_122())
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
			if (func_396() == 1)
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

int func_396()
{
	return Global_2482149.f_4688;
}

int func_397()
{
	if (func_208(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_398(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_332(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(uParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_324(sParam1);
		}
		if (func_416() && iParam6)
		{
			if (func_400())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_324(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_399(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_399(int iParam0)
{
	if (func_380(iParam0) || func_379(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_400()
{
	return Global_1573698;
}

char* func_401(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_402();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(uParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
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

char* func_402()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_403()
{
	Global_36678 = 1;
}

bool func_404(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_405(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_317();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_406()
{
	if (func_414())
	{
		return 0;
	}
	if (func_287())
	{
		return 0;
	}
	if (!func_412())
	{
		return 0;
	}
	if (!func_273())
	{
		return 0;
	}
	if (func_411(8, -1))
	{
		return 0;
	}
	if (func_415() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	else if (!func_202(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_410(1) || func_408(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_624(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_407(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

bool func_407(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

int func_408(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_409(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
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
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_410(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_411(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_412()
{
	if (func_413())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_413()
{
	return Global_1312434;
}

bool func_414()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_415()
{
	return Global_1342783.f_68;
}

int func_416()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_417()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_418(int iParam0)
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

int func_419()
{
	if (func_422())
	{
		return 1;
	}
	if (func_212(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_394())
	{
		return 1;
	}
	if (func_286(unk_0x0C1D3C552325765B()))
	{
		switch (func_208(unk_0x0C1D3C552325765B()))
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
				if (!func_420(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_420(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_420(unk_0x0C1D3C552325765B()))
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

bool func_420(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_421(int iParam0)
{
	if ((iParam0 == 24 && func_286(unk_0x0C1D3C552325765B())) && !func_285(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_31(unk_0x0C1D3C552325765B(), 0) && func_285(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_277(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_422()
{
	if (func_423(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_423(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_36(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

void func_424()
{
	if (!func_18(&uLocal_561))
	{
		if (func_425(unk_0x848AF823A8EA3C62()))
		{
			func_11(&uLocal_561, 0, 1);
		}
	}
}

int func_425(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Local_397[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_397[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_397[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_397[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_426()
{
	if (func_253(1, 1))
	{
		if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 8))
		{
			unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 8);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 8))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 8);
	}
	if (func_253(0, 1))
	{
		if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 9))
		{
			unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 9);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 9))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 9);
	}
	if (func_253(1, 0))
	{
		if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 10))
		{
			unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 10);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 10))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 10);
	}
	if (func_253(0, 0))
	{
		if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 11))
		{
			unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 11);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 11))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 11);
	}
}

void func_427()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_434(iVar0);
		func_428(iVar0);
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

void func_428(int iParam0)
{
	if (func_253(0, 0) || iLocal_3417 == -1)
	{
		func_73(iParam0);
		func_75(iParam0);
		func_70(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_209(unk_0x848AF823A8EA3C62(), iParam0))
		{
			func_75(iParam0);
		}
		else
		{
			func_430(iParam0);
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
				func_429(iParam0);
				iLocal_3418 = func_71(iParam0, 1);
				iLocal_3419 = 0;
				break;
			}
	}
}

void func_429(int iParam0)
{
	if (!unk_0x08BA6DD398CA197C(iLocal_559, func_453(iParam0)))
	{
		unk_0x1E8D45D2D7539440(func_72(iParam0, 0), 1, func_71(iParam0, 1));
		if (func_453(iParam0) == 4)
		{
			unk_0x1E8D45D2D7539440(func_72(iParam0, 1), 1, func_71(iParam0, 1));
		}
		unk_0x88B0F0DC270164B7(&iLocal_559, func_453(iParam0));
	}
}

void func_430(int iParam0)
{
	if (!unk_0x16833EFAA58E63DB(func_76(iParam0)))
	{
		func_433(iParam0, unk_0x52CE8C31DD5898E7(func_306(iParam0)));
		unk_0x420759DE4A6A9555(func_76(iParam0), 12);
		if (unk_0x7179DC5DD4B8EEBC("KOTC_AREANAME"))
		{
			unk_0x6F18BFEFE84565FF(func_76(iParam0), "KOTC_AREANAME");
		}
		unk_0x32479C670EB9962F(func_76(iParam0), 438);
		func_431(&(Local_1244[iParam0 /*68*/].f_27), func_71(iParam0, 1));
		if (!unk_0x08BA6DD398CA197C(iLocal_558, 13))
		{
			unk_0x3AE9C8E8575D2576(Local_1244[iParam0 /*68*/].f_27, 1);
			unk_0xFB70601EAE8F9B9E(Local_1244[iParam0 /*68*/].f_27, 7000);
			unk_0x88B0F0DC270164B7(&iLocal_558, 13);
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_558, 12))
		{
			unk_0x07FD940F5798C7D3();
			unk_0x88B0F0DC270164B7(&iLocal_558, 12);
		}
		unk_0x2FE9515E72A14285(func_76(iParam0), 1);
		unk_0x03BF882778D9DF25(func_76(iParam0), 1);
	}
	else
	{
		func_431(&(Local_1244[iParam0 /*68*/].f_27), func_71(iParam0, 0));
		if (unk_0x16833EFAA58E63DB(func_76(iParam0)))
		{
			if (unk_0x7179DC5DD4B8EEBC("KOTC_AREANAME"))
			{
				unk_0x6F18BFEFE84565FF(func_76(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_431(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_432(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
	}
}

int func_432(int iParam0)
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_433(int iParam0, var uParam1)
{
	Local_1244[iParam0 /*68*/].f_27 = uParam1;
}

void func_434(int iParam0)
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
		if (func_453(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_444(iParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_443(iParam0, iVar0) };
		uVar21[iVar0] = func_442(iParam0, iVar0);
		func_441(iParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (unk_0x08BA6DD398CA197C(iLocal_3410, unk_0x848AF823A8EA3C62()))
		{
			if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_3411, Local_563[unk_0x848AF823A8EA3C62() /*18*/].f_1))
				{
					if (!func_253(1, 1))
					{
						if (iLocal_3417 == unk_0x848AF823A8EA3C62())
						{
							if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
							{
								if ((!func_440(Var1[iVar0 /*3*/]) && !func_440(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (unk_0xFD4DDA3E1EF89C67(Local_1140[unk_0x0C1D3C552325765B() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], 0, 1, 0))
									{
										bVar39 = true;
									}
								}
								if (func_453(iParam0) == 7)
								{
									if (func_439(iParam0) < 0f)
									{
										if (func_439(iParam0) <= fVar40 && func_439(iParam0) >= (fVar40 * -1f))
										{
											if (func_438(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_440(Var25[iVar0 /*3*/]))
								{
									if (func_437(iParam0, iVar0) < 0f)
									{
										if (func_437(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_436(iParam0, iVar0) <= uVar35[iVar0])
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
	func_435(iParam0, bVar39);
}

void func_435(int iParam0, bool bParam1)
{
	Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_3), iParam0);
	}
}

float func_436(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_41[iParam1];
}

float func_437(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_45[iParam1];
}

float func_438(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_38;
}

float func_439(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_39;
}

int func_440(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_441(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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

var func_442(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_443(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_444(int iParam0, int iParam1)
{
	return Local_1244[iParam0 /*68*/][iParam1 /*3*/];
}

void func_445(int iParam0)
{
	Local_397[unk_0x848AF823A8EA3C62() /*5*/] = iParam0;
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_447("kwUfKUus6EuQyNSL8KpY-w");
					func_447("yMTOFLfO2UKwzKrmgPP7kg");
					func_447("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_447("tP5HSeCA0UiHnkRzakdO2Q");
					func_447("uEkrqoerQEmQ0uZRtp4rkw");
					func_447("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_447("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_447("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_447("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_447("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_447("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_447("uEkrqoerQEmQ0uZRtp4rkw");
					func_447("92t91kL3Wkqvl2Kc82cNSA");
					func_447("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_447("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_447("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_447("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_447("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_447("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_447("fOfm7nzMLkav0ldcSCNAzA");
					func_447("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_447("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_447("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_447("Ma78E44OMkGfYPmCPZXUNA");
					func_447("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_447("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_447("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_447("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_447("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_447("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_447("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_447("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_447("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_447("3AAj-muvN0iHI5IMyGlboA");
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
							func_447("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_447("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_447("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_447("fOfm7nzMLkav0ldcSCNAzA");
							func_447("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_447("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_447("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_447("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_447("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_447("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_447("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_447("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_447("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_447("fOfm7nzMLkav0ldcSCNAzA");
							func_447("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_447("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_447("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_447("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_447("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_447("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_447("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_447("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_447("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_447("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_447("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_447("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_447("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_447("aGBjo2rKi0yMDLl3a2ATGA");
									func_447("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_447("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_447("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_447("f2lnL6wZPkGWUowu0yLm1Q");
									func_447("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_447("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_447("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_447("W-OJzHlM-0ym9PsIASYZtw");
									func_447("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_447("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_447("TjGz31AMYE6bGCjAIitu6w");
									func_447("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_447("QmlvLMLCwkOvoZlkAstYxw");
									func_447("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_447("BktATxH9R0Wp2x0kWSbqjw");
									func_447("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_447("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_447("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_447("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_447("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_447("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_447("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_447("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_447("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_447("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_447("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_447(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_448(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0x88B0F0DC270164B7(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_448(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_450(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_449(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_449(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_450(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794608.f_98389[iVar12 /*12*/];
		
		case 62:
			return Global_906487.f_18805[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_450(var uParam0)
{
	int iVar0;
	
	if (unk_0x509383441597090D(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_452(uParam0->f_1))
	{
		if (func_451(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x08BA6DD398CA197C(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_794608.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x08BA6DD398CA197C(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x28C1B9853548BD8E(&(Global_794608.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x08BA6DD398CA197C(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_906487.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x08BA6DD398CA197C(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x28C1B9853548BD8E(&(Global_906487.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x0C1D3C552325765B())
	{
		if (unk_0x08BA6DD398CA197C(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x28C1B9853548BD8E(&(Global_949333.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x08BA6DD398CA197C(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_949333.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_451(var uParam0)
{
	if (Global_2398050)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_2398050.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_452(int iParam0)
{
	return iParam0 == 9999;
}

int func_453(int iParam0)
{
	return Local_99.f_6[iParam0 /*204*/].f_69;
}

int func_454()
{
	return Local_99.f_0;
}

int func_455(int iParam0)
{
	return Local_397[iParam0 /*5*/];
}

void func_456()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_453(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_474(iVar2, iVar3, func_475(iVar2, iVar3));
					func_472(iVar2, iVar3, func_473(iVar2, iVar3));
					func_470(iVar2, func_471(iVar2));
					func_468(iVar2, iVar3, func_469(iVar2, iVar3));
					unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			if (func_467(iVar2) <= 1)
			{
				func_466(iVar2, 0);
			}
			else
			{
				func_466(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_123(iVar2))
			{
				unk_0x88B0F0DC270164B7(&iLocal_558, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (unk_0xD9E8CA806A80203D())
			{
				func_466(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_123(iVar2))
			{
				if (unk_0xD9E8CA806A80203D())
				{
					if (iVar0 > -1)
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_3410, iVar0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 0);
						}
						if (!unk_0x08BA6DD398CA197C(iLocal_3409, iVar0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 0);
						}
						if (unk_0x08BA6DD398CA197C(iLocal_3411, iVar0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 0);
						}
						if (!func_209(iVar0, iVar2))
						{
							unk_0x88B0F0DC270164B7(&iLocal_558, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_3410, iVar0))
				{
					bVar5 = true;
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_3409, iVar1))
				{
					bVar5 = true;
				}
				if (unk_0x08BA6DD398CA197C(iLocal_3411, iVar1))
				{
					bVar5 = true;
				}
				if (!func_209(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0xD9E8CA806A80203D())
			{
				func_465(iVar2, -1);
				func_464(iVar2, -1);
			}
			func_463(iVar2, uVar4);
		}
		if (unk_0x08BA6DD398CA197C(iLocal_558, 0))
		{
			if (func_462(iVar2) > -1 && func_461(iVar2) > -1)
			{
				if (unk_0xD9E8CA806A80203D())
				{
					func_465(iVar2, func_462(iVar2));
					func_464(iVar2, func_461(iVar2));
					func_463(iVar2, func_460(iVar2));
					if (!unk_0x08BA6DD398CA197C(Local_99.f_6[iVar2 /*204*/].f_203, func_462(iVar2)))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_6[iVar2 /*204*/].f_203), func_462(iVar2));
					}
				}
			}
		}
		if (unk_0xD9E8CA806A80203D())
		{
			func_457(iVar2);
		}
		iVar2++;
	}
}

void func_457(int iParam0)
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
						Var2.f_10 = unk_0x81C85E54237F8A2E(Local_99.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_458(Var2, func_459(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_458(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_459(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_684(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_460(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_31;
}

int func_461(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_35;
}

int func_462(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_34;
}

void func_463(int iParam0, var uParam1)
{
	Local_1244[iParam0 /*68*/].f_30 = uParam1;
}

void func_464(int iParam0, int iParam1)
{
	Local_99.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_465(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_99.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_466(int iParam0, int iParam1)
{
	Local_99.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_467(int iParam0)
{
	return Local_1244[iParam0 /*68*/].f_37;
}

void func_468(int iParam0, int iParam1, var uParam2)
{
	Local_1244[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_469(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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

void func_470(int iParam0, struct<3> Param1)
{
	Local_1244[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_471(int iParam0)
{
	switch (func_453(iParam0))
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

void func_472(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1244[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_473(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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

void func_474(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1244[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_475(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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
			switch (func_453(iParam0))
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

void func_476()
{
	func_478();
	iLocal_3408++;
	func_477();
}

void func_477()
{
	if (iLocal_3408 >= (unk_0xE5697AB254094B0D() - 1))
	{
		iLocal_3408 = 0;
	}
}

void func_478()
{
	if (iLocal_3408 == 0)
	{
	}
}

void func_479()
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
		unk_0x09C86C0C5CA26B1E(&iLocal_3409, iVar1);
		unk_0x09C86C0C5CA26B1E(&iLocal_3411, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_563[iVar0 /*18*/] = func_507();
		Local_563[iVar0 /*18*/].f_1 = -1;
		unk_0x09C86C0C5CA26B1E(&iLocal_3410, iVar0);
		if (unk_0xD9E8CA806A80203D())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_6[iVar25 /*204*/].f_73), iVar0);
				iVar25++;
			}
		}
		Local_563[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_506(iVar25, 0);
		func_505(iVar25, 0);
		func_504(iVar25, 0f);
		func_503(iVar25, 0f);
		func_502(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_501(iVar25, iVar28, 0f);
			func_500(iVar25, iVar28, 0f);
			func_499(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(iVar0))
		{
			Local_563[iVar0 /*18*/] = iVar0;
			unk_0x88B0F0DC270164B7(&iLocal_3410, iVar0);
			iVar2 = unk_0xF3B8A064D228878B(Local_563[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_684(iVar2, 0, 1))
			{
				Local_1140[iVar1 /*3*/] = iVar2;
				Local_563[iVar0 /*18*/].f_1 = iVar1;
				Local_1140[iVar1 /*3*/].f_1 = iVar0;
				Local_1140[iVar1 /*3*/].f_2 = unk_0x21F191D9AFF98B5E(iVar2);
				StringCopy(&(Local_563[iVar0 /*18*/].f_2), unk_0xCF66111B26743875(iVar2), 64);
				iVar27++;
				if (func_425(iVar0))
				{
					iVar29++;
				}
				unk_0x88B0F0DC270164B7(&iLocal_3409, iVar1);
				if ((unk_0x912AD5A10E7633F0(Local_1140[iVar1 /*3*/].f_2, 0) || unk_0xEB361B4BD195A4D3(Local_1140[iVar1 /*3*/].f_2)) || !unk_0xC0691D80D21C989D(Local_1140[iVar1 /*3*/]))
				{
					unk_0x88B0F0DC270164B7(&iLocal_3411, iVar1);
				}
				if (unk_0xD9E8CA806A80203D())
				{
					if (!unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 0))
					{
						bVar30 = false;
					}
					if (!unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_497(iVar1, 2);
				if (func_212(iVar1))
				{
					if (unk_0xD9E8CA806A80203D())
					{
						func_495(iVar0);
					}
				}
				if (func_104(iVar1))
				{
					if (unk_0xD9E8CA806A80203D())
					{
						func_495(iVar0);
					}
				}
				if (func_211(iVar1))
				{
					if (unk_0xD9E8CA806A80203D())
					{
						func_495(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_3410, iVar0);
			if (func_598() <= 1)
			{
				if (unk_0xD9E8CA806A80203D())
				{
					func_495(iVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_213, 1))
			{
				if (unk_0xD9E8CA806A80203D())
				{
					func_494(iVar0, iVar25);
				}
			}
			if (unk_0x08BA6DD398CA197C(iLocal_3410, iVar0))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_3409, iVar1))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_213, 1))
					{
						if (unk_0xD9E8CA806A80203D())
						{
							func_493(iVar0, iVar1, iVar25, func_116(iVar25, iVar0));
						}
					}
					if (!unk_0x08BA6DD398CA197C(iLocal_3411, iVar1))
					{
						if (iVar0 == unk_0x848AF823A8EA3C62())
						{
							fVar32 = func_492(Local_1140[iVar1 /*3*/].f_2, func_306(iVar25), 0);
							fVar33 = func_492(Local_1140[iVar1 /*3*/].f_2, func_306(iVar25), 1);
							Var34 = { unk_0xC59DF10B4FC39DF8(Local_1140[iVar1 /*3*/].f_2, 1) };
							fVar37 = (Local_1244[iVar25 /*68*/].f_24.f_2 - Var34.f_2);
							func_504(iVar25, fVar32);
							func_503(iVar25, fVar37);
							func_502(iVar25, fVar33);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_441(iVar25, iVar28, &Var20, &fVar23);
								if (!func_440(Var20))
								{
									fVar38 = func_492(Local_1140[iVar1 /*3*/].f_2, Var20, 0);
									fVar39 = func_492(Local_1140[iVar1 /*3*/].f_2, Var20, 1);
									fVar40 = (Var20.f_2 - Var34.f_2);
									func_501(iVar25, iVar28, fVar38);
									func_500(iVar25, iVar28, fVar40);
									func_499(iVar25, iVar28, fVar39);
								}
								iVar28++;
							}
						}
						if (func_209(iVar0, iVar25))
						{
							func_506(iVar25, 1);
							iVar26 = func_467(iVar25);
							iVar26++;
							func_505(iVar25, iVar26);
							if (func_8(iVar25) != iVar0 && func_7(iVar25) != iVar1)
							{
								if (func_462(iVar25) == -1)
								{
									func_556(iVar25, iVar0);
								}
								if (func_461(iVar25) == -1)
								{
									func_555(iVar25, iVar1);
								}
								func_554(iVar25, Local_1140[iVar1 /*3*/].f_2);
							}
							if (unk_0xD9E8CA806A80203D())
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_6[iVar25 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x848AF823A8EA3C62())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_3411, iVar1))
						{
							if (func_192(iVar25) <= IntToFloat(Global_262145.f_9939))
							{
								if (!unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 12))
								{
									unk_0x88B0F0DC270164B7(&(Local_397[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_192(iVar25) >= IntToFloat(Global_262145.f_9940))
							{
								if (unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 12))
								{
									unk_0x09C86C0C5CA26B1E(&(Local_397[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_210(1, 0))
							{
								if (func_192(iVar25) <= IntToFloat(Global_262145.f_9939))
								{
									if (!unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 3))
									{
										unk_0x88B0F0DC270164B7(&(Local_397[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_192(iVar25) >= IntToFloat(Global_262145.f_9940))
								{
									if (unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 3))
									{
										unk_0x09C86C0C5CA26B1E(&(Local_397[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (unk_0x08BA6DD398CA197C(Local_397[iVar0 /*5*/].f_4, 3))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_397[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (unk_0x0C1D3C552325765B() != Local_1140[iVar1 /*3*/])
				{
					if (func_166(unk_0x0C1D3C552325765B(), Local_1140[iVar1 /*3*/]))
					{
						iVar24 = func_139(unk_0x0C1D3C552325765B(), -2, 0, 0);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_3411, iVar1))
				{
					if (func_253(0, 0))
					{
						func_491(iVar1);
					}
					else if (func_7(iVar25) != iVar1)
					{
						func_491(iVar1);
					}
					else if (func_598() != 1)
					{
						func_491(iVar1);
					}
					else
					{
						func_486(iVar1);
						if (iVar0 != unk_0x848AF823A8EA3C62())
						{
							if (func_157(unk_0x848AF823A8EA3C62()))
							{
								unk_0x29F530EB20218AC0(iVar24, &uVar41, &uVar42, &uVar43, &iVar44);
								iVar44 = 100;
								unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(Local_1140[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar41, uVar42, uVar43, iVar44, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_684(Local_1140[iVar1 /*3*/], 1, 1))
				{
					if (func_485(Local_1140[iVar1 /*3*/]))
					{
						func_480(Local_1140[iVar1 /*3*/], func_432(iVar24), func_481(iVar0, iVar1, iVar25));
					}
				}
			}
			iVar25++;
		}
		iVar0++;
	}
	if (unk_0xD9E8CA806A80203D())
	{
		if (bVar30)
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_213), 0);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Local_99.f_213), 0);
		}
		if (bVar31)
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_213), 1);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Local_99.f_213), 1);
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

void func_480(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_181())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_485(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = uParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_481(int iParam0, int iParam1, int iParam2)
{
	if (func_253(0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x848AF823A8EA3C62())
	{
		return 0;
	}
	if (func_482(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (unk_0x848AF823A8EA3C62() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_482(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return func_107();
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_241.f_136[func_484(10) /*33*/][iParam0], func_483(10));
}

int func_483(int iParam0)
{
	return (iParam0 % 32);
}

int func_484(int iParam0)
{
	return (iParam0 / 32);
}

int func_485(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

void func_486(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_3409, iParam0))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_3411, iParam0))
			{
				if (func_166(unk_0x0C1D3C552325765B(), Local_1140[iParam0 /*3*/]))
				{
					iVar0 = func_139(unk_0x0C1D3C552325765B(), -2, 0, 0);
				}
				func_489(Local_1140[iParam0 /*3*/], 439, 1);
				if (func_485(Local_1140[iParam0 /*3*/]))
				{
					func_480(Local_1140[iParam0 /*3*/], func_432(iVar0), 1);
				}
				func_487(Local_1140[iParam0 /*3*/], 1, 1);
				unk_0x88B0F0DC270164B7(&uLocal_3416, iParam0);
			}
		}
	}
}

void func_487(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_684(iParam0, 1, 1))
		{
			Global_2414657.f_634[iParam0] = unk_0xEAE20F1125B83888();
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_364), iParam0);
			func_488(iParam0, bParam2);
		}
	}
	else
	{
		func_488(iParam0, bParam2);
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_364), iParam0);
		Global_2414657.f_634[iParam0] = -1;
	}
}

void func_488(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_2414657.f_365), iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_365), iParam0);
	}
	if (unk_0x16833EFAA58E63DB(Global_2414657[iParam0]))
	{
		if (bParam1)
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 0);
		}
		else
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 1);
		}
	}
}

void func_489(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_181())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_535[iParam0]) || Global_2414657.f_535[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_490();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_490();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_490()
{
	Global_2414657.f_923 = 1;
}

void func_491(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (unk_0x08BA6DD398CA197C(uLocal_3416, iParam0))
	{
		if (iParam0 > -1)
		{
			if (unk_0x08BA6DD398CA197C(iLocal_3409, iParam0))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_3411, iParam0))
				{
					if (unk_0x0C1D3C552325765B() != Local_1140[iParam0 /*3*/])
					{
						if (func_166(unk_0x0C1D3C552325765B(), Local_1140[iParam0 /*3*/]))
						{
							iVar0 = func_139(unk_0x0C1D3C552325765B(), -2, 0, 0);
						}
					}
					func_489(Local_1140[iParam0 /*3*/], 439, 0);
					if (func_485(Local_1140[iParam0 /*3*/]))
					{
						func_480(Local_1140[iParam0 /*3*/], func_432(iVar0), 0);
					}
					func_487(Local_1140[iParam0 /*3*/], 0, 0);
					unk_0x09C86C0C5CA26B1E(&iLocal_3416, iParam0);
				}
			}
		}
	}
}

var func_492(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

void func_493(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_99.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_494(int iParam0, int iParam1)
{
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_27();
	Local_99.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_117(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_496(iVar0, iParam0, 0f);
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

void func_496(int iParam0, int iParam1, float fParam2)
{
	Local_99.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_497(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1573924.f_18)))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_2, iParam0))
	{
		if (Global_1573924 < iParam1 && unk_0x08BA6DD398CA197C(Global_1573924.f_1, 1))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 0);
			return;
		}
		if (Global_1573924 != 0)
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 1);
		}
		Global_1573924 = 0;
		Global_1573924.f_2 = 0;
	}
	unk_0x88B0F0DC270164B7(&(Global_1573924.f_2), iParam0);
	bVar0 = true;
	if (func_186(iParam0))
	{
		bVar0 = false;
	}
	if (func_498(iParam0))
	{
		bVar0 = false;
	}
	if (func_36(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_212(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1573924++;
	}
}

bool func_498(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10);
}

void func_499(int iParam0, int iParam1, float fParam2)
{
	Local_1244[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_500(int iParam0, int iParam1, float fParam2)
{
	Local_1244[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_501(int iParam0, int iParam1, float fParam2)
{
	Local_1244[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_502(int iParam0, float fParam1)
{
	Local_1244[iParam0 /*68*/].f_40 = fParam1;
}

void func_503(int iParam0, float fParam1)
{
	Local_1244[iParam0 /*68*/].f_39 = fParam1;
}

void func_504(int iParam0, float fParam1)
{
	Local_1244[iParam0 /*68*/].f_38 = fParam1;
}

void func_505(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_37 = iParam1;
}

void func_506(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_36 = iParam1;
}

int func_507()
{
	return -1;
}

void func_508()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 179)
		{
			func_509(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_509(int iParam0)
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
	unk_0x4FD5256AFF6E50B7(1, iParam0, &Var11, 10);
	if (unk_0xD3FACCDA4D66AEAD(Var11.f_0))
	{
		if (unk_0x60F161681C368C4E(Var11.f_0))
		{
			uVar0 = unk_0x90897FA118314142(Var11.f_0);
			if (unk_0x54F0AEFB11EA090A(uVar0))
			{
				iVar2 = unk_0xA43666ACD375E339(uVar0);
				if (unk_0x3F3C7C3B52DD0ECA(iVar2))
				{
					iVar4 = unk_0x9259DE19D910276C(iVar2);
					if (unk_0x1489FFC2CBA39486(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (unk_0xD3FACCDA4D66AEAD(Var11.f_1))
					{
						if (unk_0x60F161681C368C4E(Var11.f_1))
						{
							iVar1 = unk_0x90897FA118314142(Var11.f_1);
							if (unk_0x54F0AEFB11EA090A(iVar1))
							{
								iVar3 = unk_0xA43666ACD375E339(iVar1);
								iVar8 = iVar3;
								if (unk_0x3F3C7C3B52DD0ECA(iVar3))
								{
									iVar5 = unk_0x9259DE19D910276C(iVar3);
									if (unk_0x1489FFC2CBA39486(iVar5))
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
													if (!func_210(1, 0))
													{
														if (iVar7 == unk_0x848AF823A8EA3C62())
														{
															if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 7))
															{
																unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == unk_0x848AF823A8EA3C62())
														{
															if (iLocal_3415 < func_553())
															{
																iLocal_3415++;
																func_513(0, iVar1, "", -1859646258, 2131309714, func_552(), 1, -1, 0, 0, 0);
																Local_383.f_7 = (Local_383.f_7 + func_552());
															}
															else
															{
																iLocal_3415++;
															}
														}
														if (unk_0xD9E8CA806A80203D())
														{
															fVar21 = func_117(iVar9, iVar6);
															fVar21 = (fVar21 + IntToFloat(Global_262145.f_9636));
															func_496(iVar9, iVar6, fVar21);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x848AF823A8EA3C62())
													{
														if (!func_210(1, 0))
														{
															if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 6))
															{
																unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 6);
															}
															if (!unk_0x08BA6DD398CA197C(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
															{
																unk_0x88B0F0DC270164B7(&(Local_397[unk_0x848AF823A8EA3C62() /*5*/].f_4), 2);
																func_197(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_3413 < func_512())
															{
																iLocal_3413++;
																func_513(0, iVar1, "", -1859646258, 2131309714, func_511(), 1, -1, 0, 0, 0);
																Local_383.f_7 = (Local_383.f_7 + func_511());
															}
															else
															{
																iLocal_3413++;
															}
														}
													}
													if (iVar7 == unk_0x848AF823A8EA3C62())
													{
														iLocal_3414++;
													}
													if (func_209(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (unk_0xD9E8CA806A80203D())
															{
																if (func_462(iVar9) == -1)
																{
																	func_556(iVar9, iVar6);
																}
																if (func_461(iVar9) == -1)
																{
																	func_555(iVar9, iVar8);
																}
																unk_0x88B0F0DC270164B7(&iLocal_558, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (unk_0xD9E8CA806A80203D())
														{
															Var22.f_2 = 195;
															Var22.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (unk_0x08BA6DD398CA197C(iLocal_3410, iVar10))
																{
																	if (unk_0x08BA6DD398CA197C(iLocal_3409, Local_563[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0x08BA6DD398CA197C(Local_397[iVar10 /*5*/].f_4, 9) && !unk_0x08BA6DD398CA197C(Local_397[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_157(iVar10))
																			{
																				func_458(Var22, func_510(Local_563[iVar10 /*18*/].f_1));
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

int func_510(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

int func_511()
{
	return Global_262145.f_9441;
}

int func_512()
{
	return Global_262145.f_9443;
}

int func_513(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_514(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_514(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_524(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_520(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_515(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_515(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_518(iParam0, 1) };
	if (iParam0 == func_517(unk_0xA0081090911D13E5()))
	{
		func_516(1);
	}
	func_520(Var0, iParam1, 0, sParam2, uParam3);
}

void func_516(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_517(var uParam0)
{
	return uParam0;
}

Vector3 func_518(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_519(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_519(var uParam0)
{
	return uParam0;
}

void func_520(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_523(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_522();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_521();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), uParam6);
		}
	}
}

int func_521()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_522()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_523(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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

var func_524(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_525(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_525(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_551(unk_0x0C1D3C552325765B()) || func_550(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_103(uParam2))
	{
	}
	if (func_549())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_547(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_546(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_543(0, &iVar1);
					break;
				
				case 3:
					func_543(1, &iVar1);
					break;
				
				case 1:
					func_540(&iVar1);
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
			func_220(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_532((func_539(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_220(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_528(iVar1);
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
				func_526((func_527(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_526((func_527(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_526(int iParam0)
{
	if (func_549())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_226(joaat("mpply_globalxp"), iParam0);
	}
}

int func_527(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_684(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_228(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_228(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_528(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_41(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_530(func_531(&Var0));
			if (iVar13 == 0)
			{
				func_529(&Global_1352222, iParam0);
				func_225(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_529(&Global_1352223, iParam0);
				func_225(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_529(&Global_1352224, iParam0);
				func_225(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_529(&Global_1352225, iParam0);
				func_225(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_529(&Global_1352226, iParam0);
				func_225(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_529(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_530(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_531(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

void func_532(int iParam0, int iParam1, int iParam2)
{
	if (func_549())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_175(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_175(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_538(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_536(iParam0, 1);
		}
		func_221(632, iParam0, -1, 1);
		func_222(633, func_536(iParam0, 1), -1, 1, 0);
		Global_1352337[func_175(-1)] = iParam0;
		func_533(7, 0);
	}
}

void func_533(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_535(iParam0, iParam1))
	{
		iVar0 = func_534();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_534()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_535(int iParam0, var uParam1)
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

int func_536(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_537(iParam0, 0);
}

int func_537(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_538(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_539(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_175(-1)];
			}
			else if (func_538(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_175(-1)];
	}
	return 0;
}

void func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_146(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_542(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_541(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_541(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_541(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_542(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_41(iParam0) };
		Global_2471207 = { func_41(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_543(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_684(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_542(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_684(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_544(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_542(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_541(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_541(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_544(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_545(iParam0), func_545(iParam1));
	return 0f;
}

Vector3 func_545(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_546(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_541(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_547(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_539(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_539(unk_0x0C1D3C552325765B());
		}
	}
	if (func_548(8000, 0, 0) > 0)
	{
		if (func_548(8000, 0, 0) < (iParam0 + func_539(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_548(8000, 0, 0) - func_539(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_548(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_549()
{
	return 1;
}

bool func_550(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_551(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

int func_552()
{
	return Global_262145.f_9442;
}

int func_553()
{
	return Global_262145.f_9444;
}

void func_554(int iParam0, var uParam1)
{
	Local_1244[iParam0 /*68*/].f_31 = uParam1;
}

void func_555(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_35 = iParam1;
}

void func_556(int iParam0, int iParam1)
{
	Local_1244[iParam0 /*68*/].f_34 = iParam1;
}

void func_557(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_558, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_212(unk_0x0C1D3C552325765B()))
			{
				if (!func_104(unk_0x0C1D3C552325765B()))
				{
					if (func_425(unk_0x848AF823A8EA3C62()))
					{
						if (iParam1 <= 2)
						{
							if (func_157(unk_0x848AF823A8EA3C62()) || func_425(unk_0x848AF823A8EA3C62()))
							{
								func_580(func_594(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_579(1);
						}
						if (iVar1 > 0)
						{
							func_578();
							func_513(0, unk_0xA0081090911D13E5(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_383.f_7 = (Local_383.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_569(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_568())
							{
								func_559(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								unk_0x62EA9E19007EE5C6(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_383.f_6 = (Local_383.f_6 + iVar0);
							if (!Global_262145.f_9846)
							{
								if (Local_383.f_6 > 0)
								{
									func_558(16, Local_383.f_6);
								}
							}
							Global_2453923 = iVar0;
						}
					}
					else
					{
						func_579(0);
					}
				}
				else
				{
					func_579(0);
				}
			}
			else
			{
				func_579(0);
			}
		}
		else
		{
			func_579(0);
		}
		unk_0x88B0F0DC270164B7(&iLocal_558, 5);
	}
}

void func_558(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

void func_559(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_568())
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
			if (iParam1 > 0)
			{
				func_560(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 848090538:
		case -47546905:
			func_560(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_560(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_568())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_38()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_567(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_566(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_561(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_561(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_562(iParam0);
	}
}

void func_562(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_568())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_565(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_563(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_563(var uParam0)
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
	func_564(&(uParam0->f_8.f_3));
	func_564(&(uParam0->f_8.f_16));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_564(var uParam0)
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

int func_565(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_566(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_567(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_568())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_568()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

void func_569(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_577())
		{
			if (func_118(0))
			{
				if (!func_98(0))
				{
					if (unk_0xCB129F9A01D14082(func_576()))
					{
						if (func_575() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_575());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_573(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_572("GB_BCUT_TICK1", func_576(), iVar0, 0, 0, 1, 1);
						}
						func_571(20);
						func_570(func_576(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_570(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_684(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_510(iParam0));
	}
}

void func_571(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_572(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_139(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_42(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_573(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_574(1);
	}
	else
	{
		iVar1 = func_574(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_574(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_575()
{
	return Global_262145.f_10821;
}

int func_576()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_577()
{
	return func_63(unk_0x0C1D3C552325765B());
}

void func_578()
{
	Global_2453272 = 1;
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		if (func_173(1))
		{
			unk_0x88B0F0DC270164B7(&Global_1573949, 1);
		}
	}
	else if (func_173(2))
	{
		unk_0x88B0F0DC270164B7(&Global_1573949, 2);
	}
}

void func_580(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_561, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_9877)
	{
		iVar0 = Global_262145.f_9877;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_593() * iVar0);
	*uParam2 = (func_592() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_9631 / 60) / 1000);
		if (iVar1 > func_591())
		{
			iVar1 = func_591();
		}
		iVar2 = iLocal_560;
		if (iVar2 > func_590())
		{
			iVar2 = func_590();
		}
		*uParam1 = unk_0xF2DB717A73826179((IntToFloat(func_583(func_589(), func_588(), iVar1, fParam0, func_587(), func_586(), func_585(), iVar2)) * Global_262145.f_9904));
		*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((IntToFloat(func_583(func_582(), func_581(), iVar1, fParam0, func_587(), func_586(), func_585(), iVar2)) * Global_262145.f_9905)));
	}
}

int func_581()
{
	return Global_262145.f_9438;
}

int func_582()
{
	return Global_262145.f_9440;
}

int func_583(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_584(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_584(int iParam0, int iParam1, int iParam2)
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

float func_585()
{
	return Global_262145.f_9447;
}

float func_586()
{
	return Global_262145.f_9446;
}

float func_587()
{
	return Global_262145.f_9445;
}

int func_588()
{
	return Global_262145.f_9437;
}

int func_589()
{
	return Global_262145.f_9439;
}

int func_590()
{
	return Global_262145.f_9790;
}

int func_591()
{
	return Global_262145.f_9789;
}

int func_592()
{
	return Global_262145.f_9436;
}

int func_593()
{
	return Global_262145.f_9435;
}

float func_594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9448;
		
		case 1:
			return Global_262145.f_9449;
		
		case 2:
			return Global_262145.f_9450;
		
		default:
	}
	return 0f;
}

int func_595(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x6AC3C3A7CD358D90() < iParam0)
	{
		if (bParam2)
		{
			func_597(sParam3, sParam4, 1);
		}
		if (func_218(26, -1))
		{
			func_244(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1573924.f_18)))
	{
		if (!func_5(&(Global_1573924.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1573924.f_18));
	}
	if (func_596())
	{
		if (bParam2)
		{
			func_597(sParam3, sParam4, 0);
		}
		if (func_218(26, -1))
		{
			func_244(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x8BCACDC751B3961A() < iParam0)
	{
		if (bParam2)
		{
			func_597(sParam3, sParam4, 1);
		}
		if (func_218(26, -1))
		{
			func_244(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_596()
{
	return unk_0x08BA6DD398CA197C(Global_1573924.f_1, 0);
}

void func_597(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 2) && !func_186(unk_0x0C1D3C552325765B())) && !func_212(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x509383441597090D(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x509383441597090D(sParam1))
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
		func_163(65, sParam0, sParam1, 1, -1, 2);
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 2);
	}
}

int func_598()
{
	return Local_99.f_1;
}

void func_599()
{
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 6))
	{
		func_618();
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 6);
	}
	if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 7))
	{
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 4) || unk_0x08BA6DD398CA197C(Global_1573924.f_1, 16))
		{
			if (((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_196()) && func_684(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 7);
				func_195("FME_PASINT", 30000);
				func_194(1);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 17))
		{
			if (func_107() && !func_106())
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 17);
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 16);
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 23))
	{
		if (((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_684(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x598A9E990F05F82C())
		{
			if (func_616())
			{
				func_195("AMEV_GA_RP", -1);
				if (func_330(unk_0x0C1D3C552325765B()) != 200)
				{
					func_194(1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 23);
			}
		}
	}
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_179(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 9))
	{
		if ((((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_196()) && func_684(unk_0x0C1D3C552325765B(), 1, 1)) && !func_105(unk_0x0C1D3C552325765B(), 21))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 9);
			func_615(0);
			func_195("FME_TBL00", -1);
			func_194(1);
		}
	}
	if (func_286(unk_0x0C1D3C552325765B()))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 18))
		{
			if ((func_105(unk_0x0C1D3C552325765B(), 21) && unk_0x08BA6DD398CA197C(Global_1573924.f_1, 20)) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 19))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 18);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 18))
		{
			if (((((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_196()) && func_684(unk_0x0C1D3C552325765B(), 1, 1)) && unk_0xB20CA7A3EE29687A()) && !Global_2482149.f_4692)
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 18);
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 19);
				func_195("AMTT_RPAS", -1);
				func_194(1);
			}
		}
	}
	if (((((func_286(unk_0x0C1D3C552325765B()) && !func_186(unk_0x0C1D3C552325765B())) && func_208(unk_0x0C1D3C552325765B()) != 146) && !func_212(unk_0x0C1D3C552325765B())) && !func_104(unk_0x0C1D3C552325765B())) && !func_609())
	{
		if (func_178(func_208(unk_0x0C1D3C552325765B())))
		{
			unk_0xFE110F7E7B5A77FB(unk_0x0C1D3C552325765B());
		}
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 22))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 22);
		}
		if (func_278(unk_0x0C1D3C552325765B()) || func_169())
		{
			if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 10))
			{
				if (func_607(func_208(unk_0x0C1D3C552325765B())))
				{
					if (func_173(0) && !Global_2391043)
					{
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_176(1);
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
					}
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 10);
			}
		}
		if (func_179(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 11))
			{
				if (!Global_91458.f_8)
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
					func_171(1);
				}
				if (!func_606())
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 13);
					func_170();
				}
				if (!Global_2391043)
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
					if (func_173(0) && !Global_2391043)
					{
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
					}
					func_176(1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 11);
			}
		}
		else
		{
			func_604(0);
		}
	}
	else
	{
		func_604(1);
	}
	func_600();
	if (func_168(func_208(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 21))
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 21);
	}
	if ((func_107() && !func_106()) || func_105(unk_0x0C1D3C552325765B(), 21))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 10))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 10);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 10))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 10);
	}
}

void func_600()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_196())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_162(iVar2))
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
				if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 26))
				{
					unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 26);
				}
				func_601(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 26))
	{
		func_3(&(Global_1573924.f_22));
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 26);
	}
}

void func_601(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1573924.f_22)))
	{
		func_11(&(Global_1573924.f_22), 0, 0);
	}
	else if (func_5(&(Global_1573924.f_22), iParam1, 0))
	{
		if (func_415() > 0)
		{
			func_191(iParam0);
			if (func_193("AMEV_LBD_HELP"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			func_3(&(Global_1573924.f_22));
		}
	}
	else
	{
		func_603(0);
		func_602();
	}
}

void func_602()
{
	Global_2482149.f_4392 = 0;
}

void func_603(int iParam0)
{
	Global_1342783.f_68 = iParam0;
}

void func_604(int iParam0)
{
	if ((unk_0x08BA6DD398CA197C(Global_1573924.f_1, 11) || (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 10) && iParam0)) || (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 22) && iParam0))
	{
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 12))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 12);
			func_171(0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 13))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 13);
			func_605();
		}
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_31(unk_0x0C1D3C552325765B(), 0))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 14);
			func_176(0);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 11);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 10);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 22);
	}
}

void func_605()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4602), 0);
}

bool func_606()
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4602, 0);
}

int func_607(int iParam0)
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
			return func_179(unk_0x0C1D3C552325765B());
		
		case 133:
			return (func_169() || func_608(func_122()));
		
		default:
	}
	return 0;
}

int func_608(int iParam0)
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

int func_609()
{
	if (((((((((func_267() || func_266()) || func_265()) || func_114()) || (func_262() && !unk_0x1504F110F2576375())) || (func_612() && !func_611())) || Global_2394682) || Global_2394682.f_1 != 0) || Global_2394755 != 0) || (func_610() == 2 && !unk_0x1504F110F2576375()))
	{
		return 1;
	}
	return 0;
}

int func_610()
{
	return Global_978175;
}

bool func_611()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 27);
}

int func_612()
{
	if (func_614() || func_613())
	{
		return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 == 8;
	}
	return 0;
}

var func_613()
{
	return Global_2442442.f_612;
}

bool func_614()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

void func_615(int iParam0)
{
	int iVar0;
	
	iVar0 = func_174(2514, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 0))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 0);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 1))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 1);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 2))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 3))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 3);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 4))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 4);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 5))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 6))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 6);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 7))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 7);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 8))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 9))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 9);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 10))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 10);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 11))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 11);
		}
	}
	func_222(2514, iVar0, -1, 1, 0);
}

int func_616()
{
	int iVar0;
	
	if (!func_18(&(Global_1573924.f_15)))
	{
		func_11(&(Global_1573924.f_15), 0, 0);
		Global_1573924.f_17 = 0;
	}
	else if (func_5(&(Global_1573924.f_15), 1000, 0))
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(Global_1573924.f_17)))
		{
			iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Global_1573924.f_17));
			if (unk_0xCB129F9A01D14082(iVar0))
			{
				if (func_684(iVar0, 1, 1) && func_617(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_545(unk_0x0C1D3C552325765B()), func_545(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573924.f_17++;
		if (Global_1573924.f_17 >= 32)
		{
			Global_1573924.f_17 = 0;
			func_3(&(Global_1573924.f_15));
		}
	}
	return 0;
}

int func_617(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312443 != 0)
	{
		return 0;
	}
	if (!func_538(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1588660[iVar0 /*532*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_618()
{
	unk_0xCF03D9C8A7F1577C(5);
	func_301();
	unk_0xACD6D334FD769B0C(1f);
	unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 8);
	func_619();
}

void func_619()
{
	if (Global_1748041)
	{
		if (unk_0x08BA6DD398CA197C(Global_1748042, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 1))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 1);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 5))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 5);
		}
		if (unk_0x7B0208FFAEF67EF9(-355737150))
		{
			unk_0x6A7EBBBF8B647A25(-355737150, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-580979506))
		{
			unk_0x6A7EBBBF8B647A25(-580979506, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1426452475))
		{
			unk_0x6A7EBBBF8B647A25(-1426452475, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(745417724))
		{
			unk_0x6A7EBBBF8B647A25(745417724, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1305304906))
		{
			unk_0x6A7EBBBF8B647A25(-1305304906, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1543175077))
		{
			unk_0x6A7EBBBF8B647A25(-1543175077, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-811770997))
		{
			unk_0x6A7EBBBF8B647A25(-811770997, 1, 0, 0);
		}
		Global_1748042 = 0;
	}
	Global_1748041 = 0;
}

var func_620()
{
	if (unk_0xD3FACCDA4D66AEAD(func_621()))
	{
		return func_621();
	}
	return func_154();
}

var func_621()
{
	return Global_2359301.f_3;
}

bool func_622()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 11);
}

bool func_623()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

int func_624(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_625())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_625()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

bool func_626()
{
	return Global_1573924.f_24;
}

int func_627()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2482149.f_4599)
	{
		return 0;
	}
	uVar2 = unk_0xB3FCCA0C64473451();
	if (func_18(&(Local_99.f_1.f_1)))
	{
		iVar0 = func_628(&uVar2, &(Local_99.f_1.f_1));
		iVar1 = Global_262145.f_9631;
	}
	else if (func_18(&(Local_99.f_1.f_3)))
	{
		iVar0 = func_628(&uVar2, &(Local_99.f_1.f_3));
		iVar1 = Global_262145.f_9632;
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

int func_628(var uParam0, var uParam1)
{
	return unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(*uParam0, *uParam1));
}

bool func_629(int iParam0)
{
	return !func_630(iParam0);
}

int func_630(int iParam0)
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
			if (Global_262145.f_5476)
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5477)
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5478)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5479)
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_631(4))
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_631(4))
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_631(4))
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_631(4))
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_631(4))
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_631(4))
			{
				return 0;
			}
			if (func_105(unk_0x0C1D3C552325765B(), 7))
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

int func_631(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_684(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			if (unk_0x08BA6DD398CA197C(Global_2421327[iVar0 /*353*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_632()
{
	bool bVar0;
	var uVar1;
	
	func_636(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_635())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_634())
	{
		return 1;
	}
	if (func_633(157))
	{
		if (!func_267())
		{
			return 1;
		}
	}
	if (func_633(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_181() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_181()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_633(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_634()
{
	return Global_2451777;
}

bool func_635()
{
	return Global_2442442.f_571;
}

void func_636(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_637(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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

void func_637(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_684(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_638(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_638(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_639()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_640()
{
	int iVar0;
	
	func_161();
	func_668(141);
	func_650(141, 0, unk_0x08BA6DD398CA197C(iLocal_558, 5));
	func_252();
	func_197(0);
	if (unk_0x08BA6DD398CA197C(iLocal_558, 16))
	{
		unk_0x7C1793252FA472B6("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x09C86C0C5CA26B1E(&iLocal_558, 16);
	}
	unk_0xACD6D334FD769B0C(1f);
	func_69();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_647(iVar0);
		iVar0++;
	}
	func_296();
	func_645();
	func_644(0);
	func_190(29, 0);
	if (func_632())
	{
		Local_383.f_5 = 5;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_558, 24))
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
	Local_383.f_10 = (unk_0x39E54E7BC7452169() - Local_383.f_9);
	if (!Global_262145.f_9846)
	{
		if (Local_383.f_6 > 0)
		{
			if (Local_383.f_5 == 1)
			{
				func_643();
			}
		}
	}
	if (unk_0x848AF823A8EA3C62() != -1)
	{
		func_642(Local_383, iLocal_396, iLocal_3415, iLocal_3414, func_66(func_116(0, unk_0x848AF823A8EA3C62())), -1, -1);
	}
	func_641();
}

void func_641()
{
	unk_0x78C587487CD40B92();
}

void func_642(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x367152330DB70D69();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69617)
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x0286E1026327707E(&Var1);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x5DCAD2F659FD51F3(&Var14);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xD660C18DC0B0416A(&Var28);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x69F19B986E64A802(&Var52);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_penned_in"))
		{
			unk_0x2B9499F823AD9D4D(&Param0);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xE710F68D7F7F6DBC(&Var66);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x04BADAC1C9C10BEF(&Var79);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xAD6691D2B297C152(&Var93);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0x5DAC2993B423DE6A(&Var107);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x04F66D0DA94C82FA(&Var123);
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xE8B1B7294780FBB4(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xD7EEAF15B6F4D72C(&Var150);
			}
		}
		else if (unk_0x28C1B9853548BD8E(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xD6666F4B2CA7FC7F(&Var164);
		}
	}
}

void func_643()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 18);
}

void func_644(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 9))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 9);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 9))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1641), 9);
	}
}

void func_645()
{
	if (Global_2412480.f_6 == unk_0xEAE20F1125B83888())
	{
		func_646();
	}
}

void func_646()
{
	struct<25> Var0;
	
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412480 = { Var0 };
	Global_2412480.f_6 = -1;
}

void func_647(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_649(iParam0))
	{
		func_648(iVar0);
		iVar0++;
	}
	func_296();
	func_645();
	func_305(func_306(iParam0), 0, 0);
}

void func_648(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2404993.f_353[iParam0 /*12*/].f_9)
		{
			Global_2404993.f_353[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_649(int iParam0)
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

void func_650(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x0C1D3C552325765B() != -1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 13))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 13);
		}
		if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 14))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 14);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 21))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 21);
	}
	func_664();
	unk_0x0756AF366187C194("DisableFlightMusic", 0);
	unk_0x0756AF366187C194("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_663(func_208(unk_0x0C1D3C552325765B()));
		func_190(21, 0);
	}
	else
	{
		if ((uParam2 && unk_0x0C1D3C552325765B() != -1) && func_662(unk_0x0C1D3C552325765B()) >= 12)
		{
			func_661(2526, -1);
			iVar1 = func_174(2526, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 5);
			}
		}
		func_660();
		func_659();
		func_658();
		if ((!func_30(unk_0x0C1D3C552325765B()) && !func_28(unk_0x0C1D3C552325765B())) && !func_92())
		{
			func_292();
		}
		func_657();
		if (!unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0) && !unk_0x08BA6DD398CA197C(Global_1750560.f_3, 1))
		{
			func_618();
		}
		func_656();
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1646), 2);
		func_655();
		func_654();
	}
	if (unk_0x7645014AAA2B6DDF(1344549371))
	{
		unk_0x2099DD912801B1F4(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x0C1D3C552325765B() != -1 && !func_105(unk_0x0C1D3C552325765B(), 21)) && !func_31(unk_0x0C1D3C552325765B(), 0))
		{
			func_176(0);
			func_171(0);
			func_653();
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_218(26, -1))
		{
			Global_2453905 = -1;
			func_244(26, -1);
		}
	}
	if (!func_651())
	{
		Global_2471085 = 1;
	}
}

int func_651()
{
	if (((!func_399(unk_0x0C1D3C552325765B()) && !func_378(unk_0x0C1D3C552325765B())) && func_208(unk_0x0C1D3C552325765B()) != 146) && !func_652())
	{
		return 0;
	}
	return 1;
}

int func_652()
{
	if ((Global_1626500 == 0 && unk_0x1504F110F2576375()) && (((((((Global_1626500.f_5 != 0 || Global_1626500.f_102390 > 0) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 15)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 18)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 19)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 29)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 28)) || unk_0x08BA6DD398CA197C(Global_1626500.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_653()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x08BA6DD398CA197C(Global_2359719[iVar0 /*26*/].f_13, 26))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2359719[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_654()
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_7 = 0;
}

void func_655()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 1);
	}
	if (Global_2482149.f_4601 > 0)
	{
		unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_KILL");
		unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA");
		unk_0x7C1793252FA472B6("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x5A6B86444D23FCA8(1);
		Global_2482149.f_4601 = 0;
		unk_0x0756AF366187C194("DisableFlightMusic", 0);
		unk_0x0756AF366187C194("WantedMusicDisabled", 0);
		unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
		if (!unk_0x28C1B9853548BD8E(unk_0x367152330DB70D69(), "am_pi_menu"))
		{
			if (Global_2482149.f_4611 > -1)
			{
				unk_0xC8656944A36C8E78(Global_2482149.f_4611);
				Global_2482149.f_4611 = -1;
			}
		}
	}
}

void func_656()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1573924 = { Var0 };
}

void func_657()
{
	var uVar0;
	
	Global_1318162 = uVar0;
}

void func_658()
{
	Global_2482149.f_4602 = 0;
}

void func_659()
{
	if (unk_0x0C1D3C552325765B() != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1 = 0;
	}
}

void func_660()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (iVar0 != -1)
	{
		Global_1614576[iVar0 /*324*/] = -1;
	}
}

void func_661(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_174(iParam0, func_175(iParam1), 0);
	iVar0++;
	if (!func_223(iParam0))
	{
		func_222(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_221(iParam0, iVar0, iParam1, 1);
	}
}

int func_662(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_201.f_6;
}

int func_663(int iParam0)
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
			if (func_179(unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_664()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 3) || unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 4))
	{
		if (unk_0x2C22E7D1C80A53EF() || unk_0x44F90FBF2C1E8021())
		{
			unk_0xA0303A6B8C99DD6A(800);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1642), 5);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 3))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1642), 3);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1642), 4);
	}
	func_667(0);
	func_666(0);
	func_665(0);
}

void func_665(int iParam0)
{
	if (Global_2482149.f_4380 != iParam0)
	{
		Global_2482149.f_4380 = iParam0;
	}
}

void func_666(bool bParam0)
{
	if (Global_2482149.f_4379 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2482149.f_4379 = bParam0;
	}
}

void func_667(int iParam0)
{
	if (Global_2482149.f_4377 != iParam0)
	{
		Global_2482149.f_4377 = iParam0;
	}
}

void func_668(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_669(struct<20> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_683(Param0.f_0);
	func_682(uVar3, Param0);
	func_681(0, -1, 0);
	func_679(141);
	unk_0x4331DF6C42BE352E(&Local_99, 284);
	unk_0xCCA45C9E00D2BC01(&Local_397, 161);
	if (!func_678())
	{
		func_640();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		func_190(29, 1);
		if (unk_0xD9E8CA806A80203D())
		{
			iVar0 = func_674();
			func_671(func_673(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_670(iVar1, iVar0);
				iVar1++;
			}
			unk_0xB21EB307350F5CA1(&(Local_99.f_214), &(Local_99.f_215));
		}
		Local_383.f_2 = unk_0x6AC3C3A7CD358D90();
		Local_383.f_9 = unk_0x39E54E7BC7452169();
		Local_383.f_8 = unk_0x39E54E7BC7452169();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_99.f_250[iVar2] = -1;
			iVar2++;
		}
		func_445(0);
	}
	else
	{
		func_640();
	}
}

void func_670(int iParam0, int iParam1)
{
	Local_99.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_671(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 427;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam0;
	iVar3 = func_672(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iVar3);
	}
}

var func_672(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_684(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_673(int iParam0, int iParam1, int iParam2, int iParam3)
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

var func_674()
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_677(iVar10) && !func_675(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[unk_0xB5BF1B58C833F7A9(0, iVar0)];
	return uVar11;
}

int func_675(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_676(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6893)
		{
			if (Global_2466504.f_148[iVar0 /*2*/] == iVar1 && Global_2466504.f_148[iVar0 /*2*/].f_1 == func_673(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_676(int iParam0)
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

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_9637)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_9638)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_9639)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_9640)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_9641)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_9642)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_9643)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_9644)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_678()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_635())
		{
			return 0;
		}
		if (func_633(155))
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

void func_679(int iParam0)
{
	func_656();
	func_680();
	func_658();
	Global_1573924.f_4 = iParam0;
	Global_1573924.f_5 = iParam0;
	func_187(iParam0, -1);
	func_207(&(Global_1573924.f_18), 0, 0);
	Global_2482149.f_4439 = 0;
	Global_2452809[0] = func_27();
	Global_2452809[1] = func_27();
	Global_2452809[2] = func_27();
	Global_2452809[3] = func_27();
	Global_2452809[4] = func_27();
	func_654();
	func_371();
	if (func_107() && !func_106())
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 16);
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 17);
	}
}

void func_680()
{
	var uVar0;
	
	Global_1573949 = uVar0;
}

int func_681(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_641();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_641();
					}
					else
					{
						return 0;
					}
				}
				if (func_635())
				{
					if (!bParam2)
					{
						func_641();
					}
					else
					{
						return 0;
					}
				}
				if (func_633(155))
				{
					if (!bParam2)
					{
						func_641();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_641();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_641();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_641();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_682(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_641();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_683(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_684(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

