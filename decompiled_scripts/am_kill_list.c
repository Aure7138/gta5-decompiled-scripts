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
	struct<617> Local_122 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_739 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_751[4] = { 0, 0, 0, 0 };
	struct<18> Local_756[32];
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int iLocal_1335[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	float fLocal_1344 = 0f;
	var uLocal_1345[4] = { 0, 0, 0, 0 };
	struct<8> Local_1350[24];
	int iLocal_1543 = 0;
	int iLocal_1544 = 0;
	int iLocal_1545 = 0;
	int iLocal_1546[4] = { 0, 0, 0, 0 };
	int iLocal_1551[4] = { 0, 0, 0, 0 };
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	struct<42> Local_1559[32];
	struct<104> Local_2904 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = -1;
	var uLocal_3014 = -1;
	var uLocal_3015 = -1;
	var uLocal_3016 = -1;
	var uLocal_3017 = 32;
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
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	var uLocal_3444[4] = { 0, 0, 0, 0 };
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	int iLocal_3452 = 0;
	int iLocal_3453 = 0;
	struct<2> Local_3454[10];
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	struct<2> Local_3485[5];
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	int iLocal_3500 = 0;
	struct<3> Local_3501 = { 0, 0, 0 } ;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3534 = 0;
	int iLocal_3535[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3541 = 0;
	var uLocal_3542[4] = { 0, 0, 0, 0 };
	var uLocal_3547[4] = { 0, 0, 0, 0 };
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
	fLocal_1344 = -100f;
	iLocal_3442 = -1;
	iLocal_3443 = -1;
	iLocal_3506 = -1;
	if (unk_0x27CA09C6DFAB1E79() && func_808(unk_0x3D35F9864E4640B1(), 0, 1))
	{
		func_797(ScriptParam_0);
	}
	else
	{
		func_756();
	}
	while (true)
	{
		func_755();
		if (func_748())
		{
			func_756();
		}
		else if (func_745(19))
		{
			func_756();
		}
		if (func_744())
		{
			func_756();
		}
		func_719();
		switch (func_718(unk_0x43B24C247F35B6BC()))
		{
			case 0:
				if ((func_717() == 1 && Local_122.f_1 != -1) && Local_122.f_2 != -1)
				{
					func_715();
					func_711(129, Local_122.f_1, Local_122.f_2, 0);
					if (Global_2501777.f_4791 == -1)
					{
						if (!func_710())
						{
							Global_2501777.f_4791 = 0;
						}
						else
						{
							Global_2501777.f_4791 = 1;
						}
					}
					func_709(Local_122.f_30[0 /*3*/]);
					Local_756[unk_0x43B24C247F35B6BC() /*18*/] = 1;
				}
				else if (func_717() == 4)
				{
					Local_756[unk_0x43B24C247F35B6BC() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_717() == 1)
				{
					func_704();
					func_703();
					func_685();
					func_406();
					func_159();
					func_158();
					func_157();
				}
				else if (func_717() == 4)
				{
					Local_756[unk_0x43B24C247F35B6BC() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_156(&(Local_122.f_320));
				if (func_155(&(Local_122.f_320)))
				{
					Local_756[unk_0x43B24C247F35B6BC() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_756[unk_0x43B24C247F35B6BC() /*18*/] = 4;
			
			case 4:
				func_756();
				break;
		}
		if (unk_0xEF0CB8FF125B9F9C())
		{
			switch (func_717())
			{
				case 0:
					if (func_140())
					{
						if (func_135())
						{
							func_132(func_134(129, Local_122.f_1, Local_122.f_2, 0));
							Local_122.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_123();
					func_32();
					func_24();
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
	int iVar0;
	int iVar1;
	
	if ((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2))
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0x2A3398C6222EB190(Local_122.f_3, 6))
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_122.f_241 > 0)
	{
		if (Local_122.f_0 != 4)
		{
			if (func_23())
			{
				if (Local_122.f_241 == 3)
				{
					if (func_21())
					{
						if (unk_0x2A3398C6222EB190(Local_122.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_122.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_122.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_122.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0x32C41AA379415932())
				{
					if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
					{
						if (!func_16(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1)), 0))
						{
							if (Local_756[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2)) && !unk_0x2A3398C6222EB190(Local_122.f_3, 6)) && !unk_0x2A3398C6222EB190(Local_122.f_3, 14))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 15);
				}
				func_7();
			}
			else if (Local_122.f_241 < 3)
			{
				if (func_3())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 16);
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
		{
			if (!func_4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xB8B31FD7EF092667(iParam0) + 1;
	if (iParam4 || !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_5(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x76B3C79DE564AFC6(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x0031992CA618A445())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x8682D8A6269E52C9(iVar2))
					{
						if (unk_0x972B5786EA49FE1A(iVar2))
						{
							if (unk_0x4347749EAD4D87DF(unk_0x46E9A8D99AF6D7BC(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x8682D8A6269E52C9(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x00E962E9D49FD6C4(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, iParam1, iParam3);
		iVar1 = unk_0x46E9A8D99AF6D7BC(iVar0);
		if (iVar1 != func_6())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iParam0, 0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, iParam1);
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iVar0, 451360105) == 1 || unk_0xF57D21B49780A7A8(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 0), unk_0xF177E0DA126D71C8(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_6()
{
	return -1;
}

void func_7()
{
	if (Local_122.f_241 != 3)
	{
		func_9();
		func_8(&(Local_122.f_324), 0, 0);
		Local_122.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == Global_1312575.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
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

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		unk_0x256FC007473C96F4(&(Global_1312575.f_12));
		func_13();
		unk_0xDAB2310BAD5B9F5B();
	}
}

void func_13()
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

int func_14()
{
	if (!func_15())
	{
		return 0;
	}
	unk_0xDDF591880CC70341(&(Global_1312575.f_12));
	func_13();
	return unk_0xD140B300704DB2C2();
}

int func_15()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1312735;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_122.f_328)))
	{
		func_20(&(Local_122.f_328), 0, 0);
	}
	else if (func_19(&(Local_122.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar0]))
		{
			if (Local_122.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
		{
			if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar1]))
		{
			if (!func_31(Local_122.f_48[iVar1]))
			{
				switch (Local_122.f_85[iVar1])
				{
					case 0:
						if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iVar1]), 0))
						{
							Local_122.f_85[iVar1] = 1;
						}
						else if (unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_122.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_122.f_241 == 1)
						{
							if (!func_23())
							{
								if (unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iVar1]), 0))
								{
									iVar4 = unk_0xCFA31F1E461A6BB5(unk_0xECB7D3275586261E(Local_122.f_48[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_122.f_85[iVar1] = 2;
									}
									else if (unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_122.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_6())
													{
														iVar3 = unk_0xD33F4BC17EB987E5(iVar2);
														if (!unk_0x8682D8A6269E52C9(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_122.f_110[iVar0] = iVar2;
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
									Local_122.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_122.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_122.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_122.f_241 == 1)
						{
							if (func_23())
							{
								Local_122.f_85[iVar1] = 3;
							}
							else if (unk_0x2A3398C6222EB190(Local_122.f_3, 6))
							{
								Local_122.f_85[iVar1] = 3;
							}
							else if (unk_0x2A3398C6222EB190(Local_122.f_464, iVar1))
							{
								Local_122.f_85[iVar1] = 1;
								unk_0xD804ACF2A7171150(&(Local_122.f_464), iVar1);
							}
						}
						else
						{
							Local_122.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0xFD4433475BBB55D3(unk_0xECB7D3275586261E(Local_122.f_48[iVar1])))
						{
							func_25(&(Local_122.f_48[iVar1]));
							Local_122.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_25(var uParam0)
{
	var uVar0;
	
	if (unk_0xAA55DF0CB38F413B(*uParam0))
	{
		uVar0 = unk_0xC42CA935BE72299D(*uParam0);
		unk_0x3D93C0CB2ED2E7DC(&uVar0);
	}
}

float func_26(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Var3, iParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_6();
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (iVar0 == func_6())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
			{
				if (Local_756[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_756[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_122.f_110[iVar0] != -1)
			{
				iVar3 = Local_122.f_110[iVar0];
				iVar1 = unk_0xA7871E29B06DA901(iVar3);
				if (unk_0x80BA8E3CC61A8625(iVar1))
				{
					if (func_808(iVar1, 1, 1))
					{
						if (unk_0x532CFF8D6B65E42F(iVar1))
						{
							iVar2 = unk_0x3DAB36F6FA9328A6(iVar1);
							iVar3 = iVar2;
							if (Local_756[iVar3 /*18*/].f_17 != 1)
							{
								return 0;
							}
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
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (Local_756[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_756[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
					iVar2 = unk_0xD33F4BC17EB987E5(iVar1);
					if (!unk_0x8682D8A6269E52C9(iVar2))
					{
						if (func_26(uParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0xCFA31F1E461A6BB5(unk_0xECB7D3275586261E(Local_122.f_48[iParam0]), 0);
	if (!unk_0x432757A9E7AAFA96(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return unk_0x8682D8A6269E52C9(unk_0xECB7D3275586261E(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_122.f_463 > 0)
	{
		if (Local_122.f_28 != Local_122.f_463)
		{
			Local_122.f_28 = Local_122.f_463;
		}
	}
	switch (Local_122.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_122.f_28)
			{
				if (Local_122.f_17[iVar0] == func_6())
				{
				}
				else
				{
					iVar1++;
					if (unk_0x2A3398C6222EB190(Local_122.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_120();
			func_119();
			if (unk_0x2A3398C6222EB190(Local_122.f_3, 4))
			{
				Local_122.f_463 = iVar1;
			}
			if (func_117())
			{
				func_110();
				Local_122.f_241 = 1;
			}
			else if (unk_0x2A3398C6222EB190(Local_122.f_3, 4) && func_107() > 1)
			{
				func_106();
				func_110();
				Local_122.f_241 = 1;
			}
			if (!func_710())
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_7[0]))
				{
					if (!func_104(Local_122.f_7[0]))
					{
						Var2.f_2 = -1721146214;
						func_102(Var2, func_103(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 1, 0));
						Local_122.f_241 = 2;
					}
				}
			}
			if (Local_122.f_241 == 0)
			{
				if (!func_22(&(Local_122.f_330)))
				{
					if (!func_22(&(Local_122.f_326)))
					{
						func_20(&(Local_122.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_122.f_326)))
				{
					func_101(&(Local_122.f_330));
				}
				else if (func_19(&(Local_122.f_330), func_100(), 0))
				{
					Var2.f_2 = -1721146214;
					func_102(Var2, func_99(1));
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 12);
					func_7();
				}
				if (unk_0x2A3398C6222EB190(Local_122.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_106();
			if (unk_0x2A3398C6222EB190(Local_122.f_3, 6))
			{
				Local_122.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 19))
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 6))
	{
		if (!func_22(&(Local_122.f_332)))
		{
			func_20(&(Local_122.f_332), 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 7);
		}
		else if (func_19(&(Local_122.f_332), func_34(), 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_710())
	{
		return Global_262145.f_10306;
	}
	return Global_262145.f_10283;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_122.f_278 > 0)
	{
		if (Local_122.f_279 >= Local_122.f_278)
		{
			if (Local_122.f_254 >= Local_122.f_255)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 0);
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 1);
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_122.f_278 > 0)
		{
			if (Local_122.f_279 >= Local_122.f_278)
			{
				if (Local_122.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_122.f_256[0]);
				}
				if (Local_122.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_122.f_256[1]);
				}
				if (Local_122.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_122.f_256[2]);
				}
				if (Local_122.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_122.f_256[3]);
				}
				if (iVar5 >= Local_122.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar4]))
						{
							if (!func_31(Local_122.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 0);
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 1);
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar4]))
					{
						if (!func_31(Local_122.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_122.f_347)))
					{
						func_20(&(Local_122.f_347), 0, 0);
					}
					else if (func_19(&(Local_122.f_347), 3000, 0))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 0);
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 1);
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 0) || !unk_0x2A3398C6222EB190(Local_122.f_3, 1))
	{
		if (Local_122.f_249 >= func_98())
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 0);
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_122.f_242)
		{
			if (unk_0x69DA17666D6E3F5A(Local_122.f_73[iVar0]))
			{
				if (func_97(iVar0))
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_245, iVar0))
					{
						if ((Local_122.f_27 != joaat("hydra") && !func_4(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0)) || Local_122.f_27 == joaat("hydra"))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_3), 0);
							if (func_22(&(Local_3485[iVar0 /*2*/])))
							{
								func_101(&(Local_3485[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0) && unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0x2A3398C6222EB190(Local_122.f_3, 0))
							{
								unk_0xD804ACF2A7171150(&(Local_122.f_3), 0);
							}
							if (!unk_0x2A3398C6222EB190(Local_122.f_3, 18))
							{
								func_96(func_99(1), iVar0);
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 18);
							}
						}
						else if (func_95(iVar0) || !func_710())
						{
							if (unk_0x2A3398C6222EB190(Local_122.f_3, 0))
							{
								unk_0xD804ACF2A7171150(&(Local_122.f_3), 0);
							}
							if (!unk_0x2A3398C6222EB190(Local_122.f_303, iVar0))
							{
								func_94(func_99(1), iVar0);
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_303), iVar0);
							}
						}
						else
						{
							func_25(&(Local_122.f_73[iVar0]));
							if (!unk_0x2A3398C6222EB190(Local_122.f_253, iVar0))
							{
								Local_122.f_251 = (Local_122.f_251 - 1);
								if (func_93() > 1)
								{
									if (Local_122.f_252 > 0)
									{
										Local_122.f_302++;
										func_92(iVar0, func_99(1));
									}
								}
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_253), iVar0);
							}
							func_101(&(Local_3485[iVar0 /*2*/]));
						}
					}
				}
				else if (func_91(iVar0))
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_253, iVar0))
					{
						Local_122.f_251 = (Local_122.f_251 - 1);
						if (func_93() > 1)
						{
							if (Local_122.f_252 > 0)
							{
								Local_122.f_302++;
								func_92(iVar0, func_99(1));
							}
						}
						if (Local_122.f_27 == joaat("hydra"))
						{
							Local_122.f_254++;
						}
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_253), iVar0);
					}
					if (func_22(&(Local_122.f_336[iVar0 /*2*/])))
					{
						func_101(&(Local_122.f_336[iVar0 /*2*/]));
					}
					func_25(&(Local_122.f_73[iVar0]));
				}
				else
				{
					if (unk_0x2A3398C6222EB190(Local_122.f_3, 0))
					{
						unk_0xD804ACF2A7171150(&(Local_122.f_3), 0);
					}
					if (!unk_0x2A3398C6222EB190(Local_122.f_271, iVar0))
					{
						if (!func_22(&(Local_122.f_336[iVar0 /*2*/])))
						{
							func_20(&(Local_122.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_122.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_271), iVar0);
						}
						else if (func_19(&(Local_122.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0x2A3398C6222EB190(Local_122.f_3, 18))
								{
									func_96(func_99(1), iVar0);
									unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 18);
								}
							}
							else if (func_95(iVar0) || !func_710())
							{
								if (!unk_0x2A3398C6222EB190(Local_122.f_303, iVar0))
								{
									func_94(func_99(1), iVar0);
									unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_122.f_116)
			{
				if (unk_0x69DA17666D6E3F5A(Local_122.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_122.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_89((iVar0 * 4 + iVar1)))
							{
								unk_0xD804ACF2A7171150(&(Local_122.f_3), 0);
							}
							else if (func_88(iVar6))
							{
								if (!func_19(&(Local_122.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0x8E124932BCA8337D(unk_0xECB7D3275586261E(Local_122.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_87(&(Local_1350[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_122.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar6)], func_85(iVar6)))
								{
									if (Local_122.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_84((iVar0 * 4 + iVar1), func_99(1));
										Local_122.f_254++;
									}
								}
								Local_122.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_122.f_364[iVar6 /*2*/])))
								{
									func_101(&(Local_122.f_364[iVar6 /*2*/]));
								}
								if (unk_0x2A3398C6222EB190(Local_122.f_275[func_86(iVar6)], func_85(iVar6)))
								{
									unk_0xD804ACF2A7171150(&(Local_122.f_275[func_86(iVar6)]), func_85(iVar6));
								}
							}
							else
							{
								if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar6)], func_85(iVar6)))
								{
									if (!func_22(&(Local_122.f_364[iVar6 /*2*/])))
									{
										func_20(&(Local_122.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_122.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_272[func_86(iVar6)]), func_85(iVar6));
										func_101(&(Local_122.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0x2A3398C6222EB190(Local_122.f_275[func_86(iVar6)], func_85(iVar6)))
								{
									unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_275[func_86(iVar6)]), func_85(iVar6));
								}
							}
						}
					}
					else if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar6)], func_85(iVar6)) || Local_122.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_122.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_122.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar6)], func_85(iVar6)))
						{
							if (Local_122.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_122.f_254++;
								func_84((iVar0 * 4 + iVar1), func_99(1));
							}
						}
						Local_122.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0x2A3398C6222EB190(Local_122.f_275[func_86(iVar6)], func_85(iVar6)))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_275[func_86(iVar6)]), func_85(iVar6));
						}
					}
					else
					{
						if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar6)], func_85(iVar6)))
						{
							if (!func_22(&(Local_122.f_364[iVar6 /*2*/])))
							{
								func_20(&(Local_122.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_122.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_272[func_86(iVar6)]), func_85(iVar6));
								func_101(&(Local_122.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0x2A3398C6222EB190(Local_122.f_275[func_86(iVar6)], func_85(iVar6)))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_275[func_86(iVar6)]), func_85(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_122.f_249 < func_98())
			{
				if (func_70(iVar0))
				{
				}
				unk_0xD804ACF2A7171150(&(Local_122.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 2))
	{
		if (Local_122.f_247 >= Global_262145.f_9408)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_122.f_243)
		{
			if (unk_0x69DA17666D6E3F5A(Local_122.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0x7A6C051038031EFA(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iVar1)]), 0))
				{
					unk_0xD804ACF2A7171150(&(Local_122.f_3), 2);
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar7)], func_85(iVar7)))
				{
					if (!func_19(&(Local_122.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_122.f_364[iVar7 /*2*/])))
					{
						func_101(&(Local_122.f_364[iVar7 /*2*/]));
					}
					func_25(&(Local_122.f_48[(20 + iVar1)]));
					if (Local_122.f_85[(20 + iVar1)] > 0)
					{
						Local_122.f_254++;
						if (func_93() > 1)
						{
							if (Local_122.f_317 > 0)
							{
								Local_122.f_316++;
							}
						}
						func_84((20 + iVar1), func_99(1));
					}
					Local_122.f_85[(20 + iVar1)] = 0;
					if (unk_0x2A3398C6222EB190(Local_122.f_275[func_86(iVar7)], func_85(iVar7)))
					{
						unk_0xD804ACF2A7171150(&(Local_122.f_275[func_86(iVar7)]), func_85(iVar7));
					}
				}
				else
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar7)], func_85(iVar7)))
					{
						if (!func_22(&(Local_122.f_364[iVar7 /*2*/])))
						{
							func_20(&(Local_122.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_122.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_272[func_86(iVar7)]), func_85(iVar7));
							func_101(&(Local_122.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0x2A3398C6222EB190(Local_122.f_275[func_86(iVar7)], func_85(iVar7)))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_275[func_86(iVar7)]), func_85(iVar7));
					}
				}
			}
			if (Local_122.f_247 < func_69())
			{
				if (func_51(iVar1))
				{
				}
				unk_0xD804ACF2A7171150(&(Local_122.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_93() == 1)
	{
		return;
	}
	if (func_93() == 2)
	{
		if (Local_122.f_252 > 0)
		{
			if (Local_122.f_302 > 0)
			{
				if (Local_122.f_302 >= (Local_122.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_122.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_122.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_122.f_279++;
									func_40();
								}
								else if (Local_122.f_318 >= func_39())
								{
									func_47();
									Local_122.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_93() == 3)
	{
		if (Local_122.f_317 > 0)
		{
			if (Local_122.f_316 > 0)
			{
				if (Local_122.f_316 >= Local_122.f_317)
				{
					if (Local_122.f_317 >= func_38())
					{
						func_47();
						Local_122.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_93() == 4)
	{
		if (Local_122.f_316 > 0)
		{
			if (Local_122.f_302 > 0)
			{
				if (Local_122.f_317 > 0)
				{
					if (Local_122.f_316 >= (Local_122.f_317 - 2))
					{
						if (Local_122.f_252 > 0)
						{
							if (Local_122.f_302 >= (Local_122.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_122.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_122.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_122.f_279++;
												func_40();
											}
											else if (Local_122.f_318 >= func_39())
											{
												func_47();
												Local_122.f_279++;
												func_40();
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
	else if (func_93() == 5)
	{
		if (Local_122.f_252 > 0)
		{
			if (Local_122.f_302 > 0)
			{
				if (Local_122.f_302 >= (Local_122.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_122.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_122.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_122.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_93() == 4)
				{
					return 2;
				}
				else if (func_93() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_122.f_305[Local_122.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_122.f_278)
	{
		iVar0 = (iVar0 + Local_122.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_122.f_29 == -1)
	{
		iVar0 = func_46(Local_122.f_27);
		Local_122.f_29 = unk_0x3AF262D7332EEDF5(0, iVar0);
		if (func_710())
		{
			if (Local_122.f_27 == joaat("hydra"))
			{
				if (Local_122.f_29 == 2)
				{
					Local_122.f_29 = 4;
				}
			}
			else if (Local_122.f_27 == joaat("savage"))
			{
				if (Local_122.f_29 == 0)
				{
					Local_122.f_29 = 1;
				}
				else if (Local_122.f_29 == 1)
				{
					Local_122.f_29 = 2;
				}
				else if (Local_122.f_29 == 2)
				{
					Local_122.f_29 = 3;
				}
			}
			else if (Local_122.f_27 == joaat("valkyrie"))
			{
				if (Local_122.f_29 == 2)
				{
					Local_122.f_29 = 3;
				}
				else if (Local_122.f_29 == 3)
				{
					Local_122.f_29 = 4;
				}
			}
			else if (Local_122.f_27 == joaat("buzzard"))
			{
				if (Local_122.f_29 == 0)
				{
					Local_122.f_29 = 1;
				}
				else if (Local_122.f_29 == 1)
				{
					Local_122.f_29 = 2;
				}
				else if (Local_122.f_29 == 2)
				{
					Local_122.f_29 = 3;
				}
				else if (Local_122.f_29 == 3)
				{
					Local_122.f_29 = 4;
				}
			}
		}
		else if (Local_122.f_27 == joaat("savage"))
		{
			if (Local_122.f_29 == 0)
			{
				Local_122.f_29 = 1;
			}
			else if (Local_122.f_29 == 1)
			{
				Local_122.f_29 = 2;
			}
			else if (Local_122.f_29 == 2)
			{
				Local_122.f_29 = 3;
			}
		}
	}
	switch (Local_122.f_27)
	{
		case joaat("rhino"):
			Local_122.f_280[0] = 4;
			Local_122.f_291[0] = func_45(4);
			Local_122.f_305[0] = func_44(4);
			Local_122.f_280[1] = 4;
			Local_122.f_291[1] = func_45(4);
			Local_122.f_305[1] = func_44(4);
			Local_122.f_280[2] = 4;
			Local_122.f_291[2] = func_45(4);
			Local_122.f_305[2] = func_44(4);
			if (Local_122.f_12 <= 2 || !func_710())
			{
				Local_122.f_278 = 3;
			}
			else if (Local_122.f_12 == 3)
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_278 = 4;
			}
			else
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 4;
				Local_122.f_291[4] = func_45(4);
				Local_122.f_305[4] = func_44(4);
				Local_122.f_278 = 5;
			}
			Local_122.f_255 = func_41();
			if (!func_710())
			{
				Local_122.f_1 = 0;
			}
			else
			{
				Local_122.f_1 = 5;
			}
			Local_122.f_2 = Local_122.f_29;
			switch (Local_122.f_29)
			{
				case 0:
					Local_122.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_122.f_43[0] = 269.414f;
					Local_122.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_122.f_43[1] = 3.5491f;
					Local_122.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_122.f_43[2] = 54.4509f;
					Local_122.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_122.f_43[3] = 178.1948f;
					Local_122.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_122.f_175[0] = 270.8322f;
					Local_122.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_122.f_175[1] = 177.3506f;
					Local_122.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_122.f_175[2] = 318.1089f;
					Local_122.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_122.f_175[3] = 272.0801f;
					Local_122.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_122.f_175[4] = 104.0591f;
					Local_122.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_122.f_148[0] = 296.4225f;
					Local_122.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_122.f_148[1] = 164.9695f;
					Local_122.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_122.f_148[2] = 136.0596f;
					Local_122.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_122.f_148[3] = 116.379f;
					Local_122.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_122.f_148[4] = 86.6586f;
					Local_122.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_122.f_148[5] = 74.6822f;
					Local_122.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_122.f_148[6] = 206.8863f;
					Local_122.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_122.f_148[7] = 267.8581f;
					Local_122.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_122.f_148[8] = 267.5856f;
					Local_122.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_122.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_122.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_122.f_43[0] = 194.8062f;
					Local_122.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_122.f_43[1] = 238.9372f;
					Local_122.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_122.f_43[2] = 16.3071f;
					Local_122.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_122.f_43[3] = 209.9883f;
					Local_122.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_122.f_148[0] = 221.3913f;
					Local_122.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_122.f_148[1] = 246.3415f;
					Local_122.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_122.f_148[2] = 213.4087f;
					Local_122.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_122.f_148[3] = 100.5405f;
					Local_122.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_122.f_148[4] = 289.6017f;
					Local_122.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_122.f_148[5] = 285.6456f;
					Local_122.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_122.f_148[6] = 310.9245f;
					Local_122.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_122.f_148[7] = 46.7117f;
					Local_122.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_122.f_148[8] = 35.9192f;
					Local_122.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_122.f_148[9] = 207.53f;
					Local_122.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_122.f_175[0] = 286.6127f;
					Local_122.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_122.f_175[1] = 124.1428f;
					Local_122.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_122.f_175[2] = 275.0147f;
					Local_122.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_122.f_175[3] = 287.91f;
					Local_122.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_122.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_122.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_122.f_43[0] = 172.439f;
					Local_122.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_122.f_43[1] = 53.9805f;
					Local_122.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_122.f_43[2] = 303.2142f;
					Local_122.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_122.f_43[3] = 218.5974f;
					Local_122.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_122.f_148[0] = 264.5842f;
					Local_122.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_122.f_148[1] = 133.7932f;
					Local_122.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_122.f_148[2] = 205.1215f;
					Local_122.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_122.f_148[3] = 66.1065f;
					Local_122.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_122.f_148[4] = 7.8064f;
					Local_122.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_122.f_148[5] = 358.7563f;
					Local_122.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_122.f_148[6] = 142.1748f;
					Local_122.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_122.f_148[7] = 247.816f;
					Local_122.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_122.f_148[8] = 124.4666f;
					Local_122.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_122.f_148[9] = 348.6588f;
					Local_122.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_122.f_175[0] = 89.8563f;
					Local_122.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_122.f_175[1] = 163.8004f;
					Local_122.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_122.f_175[2] = 270.0754f;
					Local_122.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_122.f_175[3] = 184.9752f;
					Local_122.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_122.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_122.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_122.f_43[0] = 0.5044f;
					Local_122.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_122.f_43[1] = 179.2507f;
					Local_122.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_122.f_43[2] = 0.3066f;
					Local_122.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_122.f_43[3] = 180.2973f;
					Local_122.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_122.f_148[0] = 336.7541f;
					Local_122.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_122.f_148[1] = 6.0929f;
					Local_122.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_122.f_148[2] = 4.2803f;
					Local_122.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_122.f_148[3] = 274.985f;
					Local_122.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_122.f_148[4] = 267.2555f;
					Local_122.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_122.f_148[5] = 6.5529f;
					Local_122.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_122.f_148[6] = 89.1724f;
					Local_122.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_122.f_148[7] = 348.279f;
					Local_122.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_122.f_148[8] = 267.8075f;
					Local_122.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_122.f_148[9] = 0.5237f;
					Local_122.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_122.f_175[0] = 357.9713f;
					Local_122.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_122.f_175[1] = 269.3234f;
					Local_122.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_122.f_175[2] = 269.3055f;
					Local_122.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_122.f_175[3] = 359.1497f;
					Local_122.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_122.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_122.f_240 = joaat("insurgent");
			Local_122.f_280[0] = 2;
			Local_122.f_291[0] = func_45(2);
			Local_122.f_280[1] = 4;
			Local_122.f_291[1] = func_45(4);
			Local_122.f_305[1] = func_44(4);
			Local_122.f_280[2] = 2;
			Local_122.f_291[2] = func_45(2);
			if (Local_122.f_12 <= 2 || !func_710())
			{
				Local_122.f_280[3] = 5;
				Local_122.f_291[3] = func_45(5);
				Local_122.f_278 = 4;
			}
			else if (Local_122.f_12 == 3)
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 5;
				Local_122.f_291[5] = func_45(5);
				Local_122.f_278 = 6;
			}
			else
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 4;
				Local_122.f_291[5] = func_45(4);
				Local_122.f_305[5] = func_44(4);
				Local_122.f_280[6] = 5;
				Local_122.f_291[6] = func_45(5);
				Local_122.f_278 = 7;
			}
			Local_122.f_255 = func_41();
			if (!func_710())
			{
				Local_122.f_1 = 2;
			}
			else
			{
				Local_122.f_1 = 7;
			}
			Local_122.f_2 = Local_122.f_29;
			switch (Local_122.f_29)
			{
				case 0:
					Local_122.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_122.f_43[0] = 331.74f;
					Local_122.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_122.f_43[1] = 327.7335f;
					Local_122.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_122.f_43[2] = 149.1604f;
					Local_122.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_122.f_43[3] = 150.6753f;
					Local_122.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_122.f_148[0] = 147.2177f;
					Local_122.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_122.f_148[1] = 103.9461f;
					Local_122.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_122.f_148[2] = 160.822f;
					Local_122.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_122.f_148[3] = 205.8375f;
					Local_122.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_122.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_122.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_122.f_43[0] = 344.2504f;
					Local_122.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_122.f_43[1] = 340.3425f;
					Local_122.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_122.f_43[2] = 351.5693f;
					Local_122.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_122.f_43[3] = 354.2446f;
					Local_122.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_122.f_148[0] = 245.2865f;
					Local_122.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_122.f_148[1] = 74.1185f;
					Local_122.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_122.f_148[2] = 10.2312f;
					Local_122.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_122.f_148[3] = 222.4017f;
					Local_122.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_122.f_148[4] = 150.2763f;
					Local_122.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_122.f_148[5] = 105.4526f;
					Local_122.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_122.f_148[6] = 88.9429f;
					Local_122.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_122.f_148[7] = 51.1733f;
					Local_122.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_122.f_148[8] = 169.7083f;
					Local_122.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_122.f_148[9] = 29.5849f;
					Local_122.f_243 = 3;
					break;
				
				case 2:
					if (!func_710())
					{
						Local_122.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_122.f_43[0] = 319.153f;
					}
					else
					{
						Local_122.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_122.f_43[0] = 319.153f;
						Local_122.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_122.f_43[1] = 316.7079f;
						Local_122.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_122.f_43[2] = 316.9623f;
						Local_122.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_122.f_43[3] = 314.2003f;
					}
					Local_122.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_122.f_148[0] = 326.4292f;
					Local_122.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_122.f_148[1] = 6.8118f;
					Local_122.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_122.f_148[2] = 32.8776f;
					Local_122.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_122.f_148[3] = 8.387f;
					Local_122.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_122.f_148[4] = 291.5504f;
					Local_122.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_122.f_148[5] = 333.1838f;
					Local_122.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_122.f_148[6] = 203.8353f;
					Local_122.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_122.f_148[7] = 32.2329f;
					Local_122.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_122.f_148[8] = 195.4847f;
					Local_122.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_122.f_148[9] = 327.4941f;
					Local_122.f_243 = 4;
					break;
				
				case 3:
					if (!func_710())
					{
						Local_122.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_122.f_43[0] = 156.0209f;
					}
					else
					{
						Local_122.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_122.f_43[0] = 156.0209f;
						Local_122.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_122.f_43[1] = 41.8571f;
						Local_122.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_122.f_43[2] = 305.7411f;
						Local_122.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_122.f_43[3] = 223.2489f;
					}
					if (func_93() == 2 || func_93() == 5)
					{
						Local_122.f_242 = 3;
					}
					else
					{
						Local_122.f_242 = 4;
					}
					Local_122.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_122.f_148[0] = 197.3456f;
					Local_122.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_122.f_148[1] = 140.7211f;
					Local_122.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_122.f_148[2] = 98.9528f;
					Local_122.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_122.f_148[3] = 107.0238f;
					Local_122.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_122.f_148[4] = 202.129f;
					Local_122.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_122.f_148[5] = 230.1207f;
					Local_122.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_122.f_148[6] = 36.194f;
					Local_122.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_122.f_148[7] = 48.2522f;
					Local_122.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_122.f_148[8] = 296.114f;
					Local_122.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_122.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_122.f_240 = joaat("lazer");
			Local_122.f_280[0] = 2;
			Local_122.f_291[0] = func_45(2);
			Local_122.f_280[1] = 2;
			Local_122.f_291[1] = func_45(2);
			Local_122.f_280[2] = 2;
			Local_122.f_291[2] = func_45(2);
			if (Local_122.f_12 <= 2 || !func_710())
			{
				Local_122.f_278 = 3;
			}
			else if (Local_122.f_12 == 3)
			{
				Local_122.f_280[3] = 2;
				Local_122.f_291[3] = func_45(2);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_278 = 5;
			}
			else
			{
				Local_122.f_280[3] = 2;
				Local_122.f_291[3] = func_45(2);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 2;
				Local_122.f_291[5] = func_45(2);
				Local_122.f_278 = 6;
			}
			Local_122.f_255 = func_41();
			if (!func_710())
			{
				Local_122.f_1 = 1;
			}
			else
			{
				Local_122.f_1 = 6;
			}
			Local_122.f_2 = Local_122.f_29;
			switch (Local_122.f_29)
			{
				case 0:
					if (!func_710())
					{
						Local_122.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_122.f_43[0] = 197.4435f;
					}
					else
					{
						Local_122.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_122.f_43[0] = 197.4435f;
						Local_122.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_122.f_43[1] = 197.1133f;
						Local_122.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_122.f_43[2] = 272.2065f;
						Local_122.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_122.f_43[3] = 142.941f;
					}
					Local_122.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_122.f_175[0] = 34.149f;
					Local_122.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_122.f_175[1] = -26.0182f;
					Local_122.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_122.f_175[2] = 88.3998f;
					Local_122.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_122.f_175[3] = -141.7949f;
					Local_122.f_228[0] = 10000;
					Local_122.f_228[1] = 10000;
					Local_122.f_228[2] = 10000;
					Local_122.f_228[3] = 10000;
					Local_122.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_122.f_148[0] = 143.4012f;
					Local_122.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_122.f_148[1] = 212.1136f;
					Local_122.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_122.f_148[2] = 95.8248f;
					Local_122.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_122.f_148[3] = 113.3084f;
					Local_122.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_122.f_148[4] = 260.1329f;
					Local_122.f_242 = 4;
					break;
				
				case 1:
					if (!func_710())
					{
						Local_122.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_122.f_43[0] = 131.0993f;
					}
					else
					{
						Local_122.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_122.f_43[0] = 131.0993f;
						Local_122.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_122.f_43[1] = 127.8408f;
						Local_122.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_122.f_43[2] = 131.1571f;
						Local_122.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_122.f_43[3] = 132.943f;
					}
					Local_122.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_122.f_175[0] = 316.9068f;
					Local_122.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_122.f_175[1] = 142.3075f;
					Local_122.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_122.f_175[2] = 93.1231f;
					Local_122.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_122.f_175[3] = -9.0334f;
					Local_122.f_228[0] = 10000;
					Local_122.f_228[1] = 10000;
					Local_122.f_228[2] = 10000;
					Local_122.f_228[3] = 10000;
					Local_122.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_122.f_148[0] = 236.3566f;
					Local_122.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_122.f_148[1] = 212.7533f;
					Local_122.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_122.f_148[2] = 299.3619f;
					Local_122.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_122.f_148[3] = 115.7556f;
					Local_122.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_122.f_148[4] = 191.3862f;
					Local_122.f_242 = 4;
					break;
				
				case 2:
					Local_122.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_122.f_43[0] = 176.244f;
					Local_122.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_122.f_175[0] = 93.8354f;
					Local_122.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_122.f_175[1] = 250.5173f;
					Local_122.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_122.f_175[2] = 337.8961f;
					Local_122.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_122.f_175[3] = 142.1369f;
					Local_122.f_228[0] = 10000;
					Local_122.f_228[1] = 10000;
					Local_122.f_228[2] = 10000;
					Local_122.f_228[3] = 10000;
					Local_122.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_122.f_148[0] = 208.2624f;
					Local_122.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_122.f_148[1] = 349.048f;
					Local_122.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_122.f_148[2] = 69.8162f;
					Local_122.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_122.f_148[3] = 286.6181f;
					Local_122.f_242 = 4;
					Local_122.f_243 = 4;
					break;
				
				case 3:
					Local_122.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_122.f_43[0] = 292.0822f;
					Local_122.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_122.f_43[1] = 43.3907f;
					Local_122.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_122.f_43[2] = 124.2279f;
					Local_122.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_122.f_43[3] = 129.3366f;
					Local_122.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_122.f_175[0] = 137.5025f;
					Local_122.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_122.f_175[1] = 227.9336f;
					Local_122.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_122.f_175[2] = 6.0299f;
					Local_122.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_122.f_175[3] = -87.5596f;
					Local_122.f_228[0] = 10000;
					Local_122.f_228[1] = 10000;
					Local_122.f_228[2] = 10000;
					Local_122.f_228[3] = 10000;
					Local_122.f_242 = 4;
					Local_122.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_122.f_148[0] = 338.8487f;
					Local_122.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_122.f_148[1] = 272.5443f;
					Local_122.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_122.f_148[2] = 223.0158f;
					Local_122.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_122.f_148[3] = 355.6682f;
					Local_122.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_122.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_710())
					{
						Local_122.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_122.f_43[0] = 331.7771f;
					}
					else
					{
						Local_122.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_122.f_43[0] = 331.7771f;
						Local_122.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_122.f_43[1] = 324.1843f;
						Local_122.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_122.f_43[2] = 330.0586f;
						Local_122.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_122.f_43[3] = 329.5413f;
					}
					Local_122.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_122.f_175[0] = 146.9594f;
					Local_122.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_122.f_175[1] = 137.6555f;
					Local_122.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_122.f_175[2] = 114.7478f;
					Local_122.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_122.f_175[3] = -84.6269f;
					Local_122.f_228[0] = 10000;
					Local_122.f_228[1] = 10000;
					Local_122.f_228[2] = 10000;
					Local_122.f_228[3] = 10000;
					Local_122.f_242 = 4;
					Local_122.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_122.f_148[0] = 153.0449f;
					Local_122.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_122.f_148[1] = 153.1271f;
					Local_122.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_122.f_148[2] = 331.3771f;
					Local_122.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_122.f_148[3] = 183.2579f;
					Local_122.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_122.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_122.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_122.f_43[0] = 184.7817f;
					Local_122.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_122.f_175[0] = 91.7761f;
					Local_122.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_122.f_175[1] = 269.7376f;
					Local_122.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_122.f_175[1] = 211.4614f;
					Local_122.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_122.f_175[3] = 148.9204f;
					Local_122.f_228[0] = 10000;
					Local_122.f_228[1] = 10000;
					Local_122.f_228[2] = 10000;
					Local_122.f_228[3] = 10000;
					Local_122.f_242 = 4;
					Local_122.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_122.f_148[0] = 113.298f;
					Local_122.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_122.f_148[1] = 353.0292f;
					Local_122.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_122.f_148[2] = 216.1793f;
					Local_122.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_122.f_148[3] = 347.4008f;
					Local_122.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_122.f_240 = joaat("buzzard");
			Local_122.f_280[0] = 2;
			Local_122.f_291[0] = func_45(2);
			Local_122.f_305[0] = func_44(4);
			Local_122.f_280[1] = 4;
			Local_122.f_291[1] = func_45(4);
			Local_122.f_305[1] = func_44(4);
			Local_122.f_280[2] = 2;
			Local_122.f_291[2] = func_45(2);
			Local_122.f_305[2] = func_44(4);
			if (Local_122.f_12 <= 2 || !func_710())
			{
				Local_122.f_280[3] = 5;
				Local_122.f_291[3] = func_45(5);
				Local_122.f_278 = 4;
			}
			else if (Local_122.f_12 == 3)
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 5;
				Local_122.f_291[5] = func_45(5);
				Local_122.f_278 = 6;
			}
			else
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 4;
				Local_122.f_291[5] = func_45(4);
				Local_122.f_305[5] = func_44(4);
				Local_122.f_280[6] = 5;
				Local_122.f_291[6] = func_45(5);
				Local_122.f_278 = 7;
			}
			Local_122.f_255 = func_41();
			if (!func_710())
			{
				Local_122.f_1 = 3;
			}
			else
			{
				Local_122.f_1 = 8;
			}
			Local_122.f_2 = Local_122.f_29;
			switch (Local_122.f_29)
			{
				case 0:
					if (!func_710())
					{
						Local_122.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_122.f_43[0] = 290.0732f;
					}
					else
					{
						Local_122.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_122.f_43[0] = 290.0732f;
						Local_122.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_122.f_43[1] = 231.5867f;
						Local_122.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_122.f_43[2] = 49.6234f;
						Local_122.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_122.f_43[3] = 229.3317f;
					}
					Local_122.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_122.f_148[0] = 230.0049f;
					Local_122.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_122.f_148[1] = 147.9421f;
					Local_122.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_122.f_148[2] = 22.3204f;
					Local_122.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_122.f_148[3] = 80.7676f;
					Local_122.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_122.f_148[4] = 162.0507f;
					Local_122.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_122.f_148[5] = 225.9002f;
					Local_122.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_122.f_148[6] = 140.0515f;
					Local_122.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_122.f_148[7] = 90.6966f;
					Local_122.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_122.f_148[8] = 226.042f;
					Local_122.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_122.f_148[9] = 79.7294f;
					Local_122.f_243 = 4;
					break;
				
				case 1:
					Local_122.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_122.f_43[0] = 122.9714f;
					Local_122.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_122.f_43[1] = 118.6931f;
					Local_122.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_122.f_43[2] = 26.5272f;
					Local_122.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_122.f_43[3] = 211.0638f;
					Local_122.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_122.f_148[0] = 203.4084f;
					Local_122.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_122.f_148[1] = 123.7895f;
					Local_122.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_122.f_148[2] = 115.9053f;
					Local_122.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_122.f_148[3] = 330.5807f;
					Local_122.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_122.f_148[4] = 116.311f;
					Local_122.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_122.f_148[5] = 145.855f;
					Local_122.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_122.f_148[6] = 41.353f;
					Local_122.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_122.f_148[7] = 266.0158f;
					Local_122.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_122.f_148[8] = 290.3963f;
					Local_122.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_122.f_148[9] = 243.2495f;
					Local_122.f_243 = 4;
					break;
				
				case 2:
					Local_122.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_122.f_43[0] = 280.2862f;
					Local_122.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_122.f_43[1] = 32.9157f;
					Local_122.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_122.f_43[2] = 106.2954f;
					Local_122.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_122.f_43[3] = 272.3807f;
					Local_122.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_122.f_148[0] = 254.5411f;
					Local_122.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_122.f_148[1] = 183.227f;
					Local_122.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_122.f_148[2] = 338.6039f;
					Local_122.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_122.f_148[3] = 71.8258f;
					Local_122.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_122.f_148[4] = 179.6626f;
					Local_122.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_122.f_148[5] = 272.7491f;
					Local_122.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_122.f_148[6] = 270.8252f;
					Local_122.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_122.f_148[7] = 180.4937f;
					Local_122.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_122.f_148[8] = 107.4297f;
					Local_122.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_122.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_122.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_122.f_43[0] = 117.7311f;
					Local_122.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_122.f_43[1] = 46.3958f;
					Local_122.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_122.f_43[2] = 189.2091f;
					Local_122.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_122.f_43[3] = 50.0778f;
					Local_122.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_122.f_148[0] = 229.5714f;
					Local_122.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_122.f_148[1] = 136.4963f;
					Local_122.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_122.f_148[2] = 88.3908f;
					Local_122.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_122.f_148[3] = 271.8922f;
					Local_122.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_122.f_148[4] = 316.4374f;
					Local_122.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_122.f_148[5] = 246.1521f;
					Local_122.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_122.f_148[6] = 198.8985f;
					Local_122.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_122.f_148[7] = 257.2332f;
					Local_122.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_122.f_148[8] = 104.7808f;
					Local_122.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_122.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_122.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_122.f_43[0] = 306.7662f;
					Local_122.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_122.f_43[1] = 303.3918f;
					Local_122.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_122.f_43[2] = 302.365f;
					Local_122.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_122.f_43[3] = 304.9788f;
					Local_122.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_122.f_148[0] = 30.9787f;
					Local_122.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_122.f_148[1] = 97.3626f;
					Local_122.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_122.f_148[2] = 218.2636f;
					Local_122.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_122.f_148[3] = 257.6324f;
					Local_122.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_122.f_148[4] = 244.6777f;
					Local_122.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_122.f_148[5] = 12.745f;
					Local_122.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_122.f_148[6] = 196.3743f;
					Local_122.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_122.f_148[7] = 283.2556f;
					Local_122.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_122.f_148[8] = 243.4268f;
					Local_122.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_122.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_122.f_240 = joaat("buzzard");
			Local_122.f_280[0] = 2;
			Local_122.f_291[0] = func_45(2);
			Local_122.f_280[1] = 4;
			Local_122.f_291[1] = func_45(4);
			Local_122.f_305[1] = func_44(4);
			Local_122.f_280[2] = 2;
			Local_122.f_291[2] = func_45(2);
			if (Local_122.f_12 <= 2 || !func_710())
			{
				Local_122.f_280[3] = 5;
				Local_122.f_291[3] = func_45(5);
				Local_122.f_278 = 4;
			}
			else if (Local_122.f_12 == 3)
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 5;
				Local_122.f_291[5] = func_45(5);
				Local_122.f_278 = 6;
			}
			else
			{
				Local_122.f_280[3] = 4;
				Local_122.f_291[3] = func_45(4);
				Local_122.f_305[3] = func_44(4);
				Local_122.f_280[4] = 2;
				Local_122.f_291[4] = func_45(2);
				Local_122.f_280[5] = 4;
				Local_122.f_291[5] = func_45(4);
				Local_122.f_305[5] = func_44(4);
				Local_122.f_280[6] = 5;
				Local_122.f_291[6] = func_45(5);
				Local_122.f_278 = 7;
			}
			Local_122.f_255 = func_41();
			if (!func_710())
			{
				Local_122.f_1 = 4;
			}
			else
			{
				Local_122.f_1 = 9;
			}
			Local_122.f_2 = Local_122.f_29;
			switch (Local_122.f_29)
			{
				case 0:
					Local_122.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_122.f_43[0] = 180.7904f;
					Local_122.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_122.f_43[1] = 269.3001f;
					Local_122.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_122.f_43[2] = 180.39f;
					Local_122.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_122.f_43[3] = 276.7351f;
					Local_122.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_122.f_148[0] = 329.9165f;
					Local_122.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_122.f_148[1] = 264.7702f;
					Local_122.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_122.f_148[2] = 359.5203f;
					Local_122.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_122.f_148[3] = 111.3101f;
					Local_122.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_122.f_148[4] = 176.3058f;
					Local_122.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_122.f_148[5] = 213.1969f;
					Local_122.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_122.f_148[6] = 275.2275f;
					Local_122.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_122.f_148[7] = 220.0349f;
					Local_122.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_122.f_148[8] = 359.15f;
					Local_122.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_122.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_122.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_122.f_43[0] = 247.4892f;
					Local_122.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_122.f_43[1] = 66.129f;
					Local_122.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_122.f_43[2] = 340.0713f;
					Local_122.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_122.f_43[3] = 245.7466f;
					Local_122.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_122.f_148[0] = 252.6017f;
					Local_122.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_122.f_148[1] = 245.262f;
					Local_122.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_122.f_148[2] = 44.7945f;
					Local_122.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_122.f_148[3] = 255.6518f;
					Local_122.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_122.f_148[4] = 124.8391f;
					Local_122.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_122.f_148[5] = 188.9979f;
					Local_122.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_122.f_148[6] = 159.3613f;
					Local_122.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_122.f_148[7] = 5.7762f;
					Local_122.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_122.f_148[8] = 89.3388f;
					Local_122.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_122.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_122.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_122.f_43[0] = 310.6241f;
					Local_122.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_122.f_43[1] = 166.0191f;
					Local_122.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_122.f_43[2] = 343.1715f;
					Local_122.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_122.f_43[3] = 342.4984f;
					Local_122.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_122.f_148[0] = 248.8594f;
					Local_122.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_122.f_148[1] = 195.7758f;
					Local_122.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_122.f_148[2] = 28.6127f;
					Local_122.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_122.f_148[3] = 296.7476f;
					Local_122.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_122.f_148[4] = 240.9422f;
					Local_122.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_122.f_148[5] = 2.473f;
					Local_122.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_122.f_148[6] = 343.6776f;
					Local_122.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_122.f_148[7] = 0.2495f;
					Local_122.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_122.f_148[8] = 72.7889f;
					Local_122.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_122.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_122.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_122.f_43[0] = 351.0324f;
					Local_122.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_122.f_43[1] = 3.5452f;
					Local_122.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_122.f_43[2] = 7.3237f;
					Local_122.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_122.f_43[3] = 332.0844f;
					Local_122.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_122.f_148[0] = 2.6416f;
					Local_122.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_122.f_148[1] = 171.8638f;
					Local_122.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_122.f_148[2] = 257.0332f;
					Local_122.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_122.f_148[3] = 91.7869f;
					Local_122.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_122.f_148[4] = 4.2016f;
					Local_122.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_122.f_148[5] = 339.729f;
					Local_122.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_122.f_148[6] = 359.2033f;
					Local_122.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_122.f_148[7] = 333.6298f;
					Local_122.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_122.f_148[8] = 73.2788f;
					Local_122.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_122.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_122.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_122.f_43[0] = 42.1535f;
					Local_122.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_122.f_43[1] = 315.0261f;
					Local_122.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_122.f_43[2] = 1.2527f;
					Local_122.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_122.f_43[3] = 1.9403f;
					Local_122.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_122.f_148[0] = 352.9674f;
					Local_122.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_122.f_148[1] = 88.8285f;
					Local_122.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_122.f_148[2] = 177.2297f;
					Local_122.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_122.f_148[3] = 273.1487f;
					Local_122.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_122.f_148[4] = 225.394f;
					Local_122.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_122.f_148[5] = 175.5423f;
					Local_122.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_122.f_148[6] = 191.1842f;
					Local_122.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_122.f_148[7] = 269.6831f;
					Local_122.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_122.f_148[8] = 29.4203f;
					Local_122.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_122.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_122.f_255 != -1)
	{
		return Local_122.f_255;
	}
	if (Local_122.f_278 == 0)
	{
		return ((4 * Global_262145.f_9407) + Global_262145.f_9408);
	}
	iVar2 = func_93();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_122.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_122.f_278)
			{
				iVar0 = (iVar0 + ((Local_122.f_291[iVar1] * iVar4) + Local_122.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_122.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_122.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_122.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_122.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_710())
			{
				iVar0 = Global_262145.f_10578;
			}
			else
			{
				iVar0 = Global_262145.f_10299;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_710())
			{
				iVar0 = Global_262145.f_10579;
			}
			else
			{
				iVar0 = Global_262145.f_10300;
			}
			break;
		
		case 5:
			if (func_710())
			{
				iVar0 = Global_262145.f_10580;
			}
			else
			{
				iVar0 = Global_262145.f_10301;
			}
			break;
		
		case 4:
			if (func_710())
			{
				iVar0 = Global_262145.f_10577;
			}
			else
			{
				iVar0 = Global_262145.f_10298;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_710())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_122.f_252 = 0;
	Local_122.f_302 = 0;
	Local_122.f_317 = 0;
	Local_122.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_122.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_122.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_122.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_93() == 4)
				{
					return 2;
				}
				else if (func_93() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_104(Local_122.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_122.f_318 == 0 || Local_122.f_318 == func_39())
	{
		if (func_93() == 2 || func_93() == 5)
		{
			return 0;
		}
	}
	if (func_93() == 3 || func_93() == 4)
	{
		if (Local_122.f_317 >= func_38())
		{
			iVar0 = Local_122.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_122.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_122.f_317 == 2)
	{
		iVar0 = Local_122.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_122.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_122.f_318 == func_39())
	{
		return 0;
	}
	if (Local_122.f_318 == func_68())
	{
		return 0;
	}
	if (func_93() == 1)
	{
		return 0;
	}
	if (!unk_0x69DA17666D6E3F5A(Local_122.f_48[(20 + iParam0)]))
	{
		if (func_67(Local_122.f_239) && unk_0xF77EB0140804CA9C(0, 1, 0, 0))
		{
			if (func_65(&iVar3))
			{
				if (func_55(Local_122.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_122.f_48[(20 + iParam0)]), 22, Local_122.f_239, Local_122.f_117[iVar3 /*3*/], Local_122.f_148[iVar3], 1, 1, 1))
					{
						unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), iLocal_1544);
						unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1, 0);
						unk_0x3E57B1D8EBDD3DD0(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0xA216B901E12D9971(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_53());
						unk_0xBCEFFDCF42E59903(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179(fVar6));
						unk_0x49F78C32179F3B1F(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1);
						unk_0x541B678DB67C7CF0(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 2);
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 0, 1);
						unk_0xA84451B91C2933E5(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1);
						unk_0xF5A766CC3A8142D0(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1);
						unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 42, 1);
						unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179((200f * Global_262145.f_153)));
						unk_0xAB83B3D37016BD26(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1);
						unk_0x390D16BCBFB23E1A(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1);
						unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 1);
						unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0x8DB158934E64B062(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = unk_0xF2DB717A73826179((fVar5 * unk_0xBBDA792448DB5A89(iVar4)));
						unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_48[(20 + iParam0)]), iVar4);
						iVar7 = (20 + iParam0);
						if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar7)], func_85(iVar7)))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_272[func_86(iVar7)]), func_85(iVar7));
						}
						Local_122.f_247++;
						Local_122.f_317++;
						Local_122.f_250++;
						Local_122.f_318++;
						func_101(&(Local_122.f_414[iVar7 /*2*/]));
						func_20(&(Local_122.f_414[iVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_122.f_364[iVar7 /*2*/])))
						{
							func_101(&(Local_122.f_364[iVar7 /*2*/]));
						}
						func_20(&(Local_3454[iVar3 /*2*/]), 0, 0);
						unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_48[iVar7]), 1, iLocal_1543);
					}
				}
			}
		}
	}
	if (!unk_0x69DA17666D6E3F5A(Local_122.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_710())
	{
		return Global_262145.f_10566;
	}
	return Global_262145.f_10287;
}

float func_53()
{
	if (func_710())
	{
		return Global_262145.f_10568;
	}
	return Global_262145.f_10289;
}

int func_54(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	iVar0 = unk_0x5618B819E5B9C053(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xC191BE4D610C22BA(iVar0);
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(iVar0, iParam9);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam7)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404997.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x736668867F457F94(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xDE23154833E5D069(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xDE23154833E5D069(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDC9A6EA41577EFB6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam13)
	{
		if (unk_0x9DC4BF239830A808(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (fParam14 > 0f)
	{
		if (func_59(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404997.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_808(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x1410333E912D4EC6(func_58(unk_0x3D35F9864E4640B1()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xAD2B8127B12C130D(Param0, fParam3))
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
		if (func_808(iVar1, 1, 1))
		{
			if (!func_16(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2422142[iVar1 /*399*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0x1410333E912D4EC6(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam8 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0x1410333E912D4EC6(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
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

int func_57(int iParam0)
{
	if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

int func_59(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam8 == 0)
		{
			if (func_808(iVar1, bParam4, bParam5))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam7 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && uParam9) && bParam6) && func_60(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (unk_0x1410333E912D4EC6(func_58(iVar1), Param0, 1) < fParam3)
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

int func_60(int iParam0)
{
	if (func_64(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	Global_2488575 = { func_63(iParam0) };
	if (unk_0x9EC1A7C50E0AB3CF(&Global_2488575))
	{
		return 1;
	}
	if (func_61(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (!iVar0 == func_6())
	{
		if (iVar0 == func_62(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_6();
}

struct<13> func_63(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0, int iParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_63(iParam0) };
		Global_2488588 = { func_63(iParam1) };
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

int func_65(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 10);
	if (!func_66(Local_122.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_3454[iVar0 /*2*/])) || (func_22(&(Local_3454[iVar0 /*2*/])) && func_19(&(Local_3454[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_66(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_67(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xBE91026C1FC72180(iParam0);
	return unk_0x772F801619C83779(iParam0);
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	if (Local_122.f_279 == 0)
	{
		iVar0 = Local_122.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_122.f_279)
		{
			iVar0 = (iVar0 + Local_122.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_69()
{
	int iVar0;
	int iVar1;
	
	switch (Local_122.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_122.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_93() == 3)
	{
		return 0;
	}
	if (Local_122.f_242 < iVar0)
	{
	}
	if (Local_122.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_93() > 1)
	{
		iVar1 = func_83();
		if (Local_122.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_67(Local_122.f_240) && func_67(Local_122.f_239))
	{
		if (func_71(iParam0))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_245, iParam0))
			{
				Local_122.f_249++;
				Local_122.f_251++;
				Local_122.f_252++;
				unk_0xD804ACF2A7171150(&(Local_122.f_245), iParam0);
				if (!unk_0x2A3398C6222EB190(Local_122.f_3, 19))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0xF77EB0140804CA9C(4, 1, 0, 0))
	{
		if (func_77(iParam0))
		{
			if (func_72(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_104(Local_122.f_73[iParam0]) && unk_0x2A3398C6222EB190(Local_122.f_245, iParam0))
	{
		if (func_76(Local_122.f_73[iParam0]))
		{
			if (Local_122.f_116 <= 0)
			{
				if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_122.f_116 = 2;
				}
				else
				{
					Local_122.f_116 = unk_0xB8B31FD7EF092667(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0])) + 1;
					if (Local_122.f_116 > 4)
					{
						Local_122.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_122.f_116)
			{
				if (!unk_0x69DA17666D6E3F5A(Local_122.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_67(Local_122.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_75(&(Local_122.f_48[(iParam0 * 4 + iVar6)]), Local_122.f_73[iParam0], 22, Local_122.f_239, iVar4, 1, 1, 1))
						{
							unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), iLocal_1544);
							unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0x3E57B1D8EBDD3DD0(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0xA216B901E12D9971(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_74())
							{
								unk_0xA216B901E12D9971(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0xA216B901E12D9971(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0xBCEFFDCF42E59903(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
							unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0x49F78C32179F3B1F(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x541B678DB67C7CF0(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0xA84451B91C2933E5(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xF5A766CC3A8142D0(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179((200f * Global_262145.f_153)));
							unk_0xAB83B3D37016BD26(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x390D16BCBFB23E1A(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0x47719B470B88CAC0(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x3D4C0ADDD75A1FE7(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x0B297B9F03A34A7C(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x0B74ECD04F4F0262(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_73());
									unk_0xBCEFFDCF42E59903(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
									unk_0x5D1F49D1932759D1(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0x34DE879566222CF2(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_10551;
								uVar1 = Global_262145.f_10552;
								uVar2 = Global_262145.f_10553;
								uVar3 = Global_262145.f_10554;
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]))))
							{
								unk_0x0B74ECD04F4F0262(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_73());
								unk_0xBCEFFDCF42E59903(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
								unk_0x5D1F49D1932759D1(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_10551;
								uVar1 = Global_262145.f_10552;
								uVar2 = Global_262145.f_10553;
								uVar3 = Global_262145.f_10554;
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x19B1C76600C75750(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar7)], func_85(iVar7)))
							{
								unk_0xD804ACF2A7171150(&(Local_122.f_272[func_86(iVar7)]), func_85(iVar7));
							}
							unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x390D16BCBFB23E1A(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x1ADB46574E80A3AE(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1543);
							Local_122.f_250++;
							func_101(&(Local_122.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_122.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_122.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_101(&(Local_122.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_122.f_116)
			{
				if (!unk_0x69DA17666D6E3F5A(Local_122.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_122.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_122.f_48[(iParam0 * 4 + iVar6)]), unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_73()
{
	if (func_710())
	{
		return Global_262145.f_10569;
	}
	return Global_262145.f_10290;
}

int func_74()
{
	if (unk_0x2A3398C6222EB190(unk_0x3AF262D7332EEDF5(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_75(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_76(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		unk_0xED8E0F2F3151048A(uParam0);
		return unk_0xA02DD6B5C8C02298(uParam0);
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	int iVar16;
	
	iVar0 = func_93();
	Local_122.f_240 = func_43(iVar0);
	if (!unk_0x69DA17666D6E3F5A(Local_122.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_122.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0x69DA17666D6E3F5A(Local_122.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_67(Local_122.f_240) && !unk_0x2A3398C6222EB190(Local_122.f_245, iParam0))
		{
			fVar10 = 300f;
			if (unk_0x1DBFCF939B3B47D0(Local_122.f_240) || unk_0xF9CDF5CA6A1D6756(Local_122.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (unk_0xF9CDF5CA6A1D6756(Local_122.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_122.f_242)
			{
				if (func_82(iVar11))
				{
					func_81(Local_122.f_240, iVar11, &Var12, &uVar15);
					if (!func_66(Var12, 0f, 0f, 0f, 0))
					{
						if (func_55(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_8(&(Local_122.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_122.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (unk_0x1DBFCF939B3B47D0(Local_122.f_240) || unk_0xF9CDF5CA6A1D6756(Local_122.f_240))
				{
					iVar16 = 0;
				}
				if (func_80(iParam0))
				{
					if (func_79(&(Local_122.f_73[iParam0]), Local_122.f_240, Var4, uVar7, 1, 1, 1, 0, iVar16, 1, 0, 0, 0, 0))
					{
						unk_0xFABEFEE17018AE2A(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 2);
						unk_0x313C054C7E496E56(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1);
						unk_0x5CBEDEFFD7D137BD(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0, 0);
						unk_0xFABEFEE17018AE2A(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 2);
						unk_0x56B418F469976565(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1, 1, 0);
						unk_0x8BC8A4FEB4B8FB05(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
						unk_0x75C57ED2D557CF95(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
						if (unk_0x1DBFCF939B3B47D0(Local_122.f_240))
						{
							unk_0x6CDFA9B556069FD7(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]));
							unk_0xF3A7713570EDCB05(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1);
							unk_0xA516DB03BDB6B4EB(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]));
							unk_0x583AB626B1CF33F0(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
						}
						else if (unk_0xF9CDF5CA6A1D6756(Local_122.f_240))
						{
							unk_0xC82776FBB5D72B5A(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 3);
							unk_0x583AB626B1CF33F0(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
							unk_0xF3A7713570EDCB05(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1);
							unk_0xA516DB03BDB6B4EB(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]));
							unk_0x5EF58B2B49A4503B(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 30f);
							unk_0x943BFA25D560F0AA(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1);
							unk_0xC1A5C2C11B67CBD7(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0x990879ED64ED4138(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
						}
						else
						{
							unk_0xCFC7B014BB928D6D(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1, 1);
						}
						if (func_93() == 5)
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_78());
							unk_0x990879ED64ED4138(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0x845D37CEF8F0ABAF(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xAB7E0AE68E18BEED(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), fVar1);
							unk_0xEB9008A3848B31D2(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), fVar1);
							unk_0xCB78392CBBC0CB2F(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), fVar1);
							unk_0xB3460ED1DE6509A8(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x56A8BEAE41AD4D8D(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), fVar1);
							unk_0x038C88290AA8A54D(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), fVar1);
						}
						if (func_22(&(Local_122.f_336[iParam0 /*2*/])))
						{
							func_101(&(Local_122.f_336[iParam0 /*2*/]));
						}
						unk_0xD804ACF2A7171150(&(Local_122.f_253), iParam0);
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_245), iParam0);
						unk_0x691386A8C3FAEB92(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 1, iLocal_1543);
						if (unk_0x2A3398C6222EB190(Local_122.f_271, iParam0))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_271), iParam0);
						}
						if (unk_0x2A3398C6222EB190(Local_122.f_303, iParam0))
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_303), iParam0);
						}
						if (Local_122.f_240 == joaat("hydra") || Local_122.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0x69DA17666D6E3F5A(Local_122.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_78()
{
	if (func_710())
	{
		return Global_262145.f_10567;
	}
	return Global_262145.f_10288;
}

int func_79(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (unk_0x2A3398C6222EB190(Local_756[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_81(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0xF9CDF5CA6A1D6756(iParam0) || unk_0x1DBFCF939B3B47D0(iParam0));
	switch (Local_122.f_27)
	{
		case joaat("rhino"):
			if (!func_66(Local_122.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_122.f_159[iParam1 /*3*/] };
				*uParam3 = Local_122.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_66(Local_122.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_122.f_159[iParam1 /*3*/] };
				*uParam3 = Local_122.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_122.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_122.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_122.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_82(int iParam0)
{
	if (Local_122.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_122.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_122.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_122.f_207[iParam0 /*2*/]), Local_122.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_122.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_122.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_83()
{
	return Local_122.f_291[Local_122.f_279];
}

void func_84(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 2118956415;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iParam1);
	}
}

int func_85(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_86(iParam0) * 31);
}

int func_86(int iParam0)
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

void func_87(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0x0C4BDC77192798AE(uParam0);
		bVar0 = true;
	}
	if (unk_0xA761A0B6072010C8(uParam0->f_1))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x76B3C79DE564AFC6(uParam0->f_7))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_7, 0))
		{
			if (unk_0x8E124932BCA8337D(uParam0->f_7))
			{
				unk_0xFAE7EEA9EC6C8B59(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_88(int iParam0)
{
	if (Local_122.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iParam0)], func_85(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_89(int iParam0)
{
	return func_90(iParam0);
}

int func_90(int iParam0)
{
	int iVar0;
	
	if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0xCFA31F1E461A6BB5(unk_0xECB7D3275586261E(Local_122.f_48[iParam0]), 0);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0x2A3398C6222EB190(Local_122.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0x2A3398C6222EB190(Local_122.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_122.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_122.f_27 == joaat("hydra"))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_92(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -547553178;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iParam1);
	}
}

int func_93()
{
	return Local_122.f_280[Local_122.f_279];
}

void func_94(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -670156593;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iParam0);
	}
}

int func_95(int iParam0)
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
			if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0))
			{
				if (unk_0xBF46993E3B1741E4(iVar2, unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x435EA303C4DFB8D4(iVar2, unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 1869598351;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iParam0);
	}
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]));
	if (unk_0xF9CDF5CA6A1D6756(iVar0) || unk_0x1DBFCF939B3B47D0(iVar0))
	{
		return !unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
	}
	return !unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iParam0]), 0);
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	switch (Local_122.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_122.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_122.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_99(int iParam0)
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
			if (func_808(iVar2, 0, 0))
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

int func_100()
{
	if (func_710())
	{
		return Global_262145.f_10560;
	}
	return Global_262145.f_10284;
}

void func_101(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_102(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1021925946;
	Param0.f_1 = unk_0x3D35F9864E4640B1();
	if (!iParam14 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Param0, 14, iParam14);
	}
}

int func_103(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_808(iVar2, 1, 0))
		{
			if (!unk_0xA32DC7E16AD1DFB7(unk_0xD33F4BC17EB987E5(iVar2), iParam0, 0))
			{
				if (unk_0xB5E2A107E006EC7A(iVar2) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) || !bParam2)
				{
					if (iVar2 != unk_0x3D35F9864E4640B1() || iParam1)
					{
						unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_104(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return !func_105(unk_0xD7E2A160FD5DEEE1(uParam0));
	}
	return 0;
}

int func_105(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
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

void func_106()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_3498))
	{
		func_20(&uLocal_3498, 0, 0);
		return;
	}
	if (!func_19(&uLocal_3498, 5000, 0))
	{
		return;
	}
	iVar0 = func_107();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_25(&(Local_122.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 20);
}

int func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_122.f_12 != 0)
	{
		return Local_122.f_12;
	}
	if (!func_710())
	{
		Local_122.f_12 = 1;
		return Local_122.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar2))
		{
			if (!func_16(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_109())
	{
		Local_122.f_12 = 2;
	}
	else if (iVar1 < func_108())
	{
		Local_122.f_12 = 3;
	}
	else
	{
		Local_122.f_12 = 4;
	}
	return Local_122.f_12;
}

int func_108()
{
	return Global_262145.f_10309;
}

int func_109()
{
	return Global_262145.f_10308;
}

void func_110()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
		{
			func_116(iVar0);
			func_115(iVar0, Local_122.f_256[iVar0], Local_122.f_22[iVar0]);
		}
		else if (Local_122.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
	func_114();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
			func_113(iVar0);
			if (Local_756[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_756[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_756[iVar0 /*18*/].f_9;
					func_112(uVar1, Local_756[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_112(-1, -1, iVar2);
			}
		}
		else if (Local_122.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_113(iVar0);
		}
		iVar0++;
	}
	func_111();
}

void func_111()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_122.f_465[iVar1 /*4*/].f_1 > Local_122.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_122.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_122.f_465[iVar1 /*4*/];
					uVar4 = Local_122.f_465[iVar1 /*4*/].f_2;
					Local_122.f_465[iVar1 /*4*/].f_1 = Local_122.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_122.f_465[iVar1 /*4*/] = Local_122.f_465[(iVar1 - 1) /*4*/];
					Local_122.f_465[iVar1 /*4*/].f_2 = Local_122.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_122.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_122.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_122.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	Local_122.f_465[iParam2 /*4*/] = iParam0;
	Local_122.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_122.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_113(int iParam0)
{
	Local_122.f_465[iParam0 /*4*/] = -1;
	Local_122.f_465[iParam0 /*4*/].f_2 = -1;
	Local_122.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_114()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_122.f_594[iVar1 /*4*/].f_1 > Local_122.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_122.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_122.f_594[iVar1 /*4*/];
					uVar4 = Local_122.f_594[iVar1 /*4*/].f_2;
					Local_122.f_594[iVar1 /*4*/].f_1 = Local_122.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_122.f_594[iVar1 /*4*/] = Local_122.f_594[(iVar1 - 1) /*4*/];
					Local_122.f_594[iVar1 /*4*/].f_2 = Local_122.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_122.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_122.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_122.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	Local_122.f_594[iParam0 /*4*/] = iParam0;
	Local_122.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_122.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_116(int iParam0)
{
	Local_122.f_594[iParam0 /*4*/] = -1;
	Local_122.f_594[iParam0 /*4*/].f_1 = -1;
	Local_122.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_117()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_107();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_118(iVar1))
		{
			func_101(&(Local_122.f_5));
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_13, iVar1))
		{
			func_101(&(Local_122.f_5));
			return 0;
		}
		else if (func_4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_101(&(Local_122.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_22(&(Local_122.f_5)))
	{
		func_20(&(Local_122.f_5), 0, 0);
	}
	else if (func_19(&(Local_122.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	if (func_104(Local_122.f_7[iParam0]))
	{
		if (unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), -1, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_119()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_710())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
		{
			if (func_104(Local_122.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_122.f_12)
	{
		Local_122.f_12 = iVar1;
	}
	if (Local_122.f_12 <= 1)
	{
		unk_0xD804ACF2A7171150(&(Local_122.f_3), 8);
		if (!func_104(Local_122.f_7[0]))
		{
			if (func_104(Local_122.f_7[iVar2]))
			{
				func_25(&(Local_122.f_7[0]));
				Local_122.f_7[0] = Local_122.f_7[iVar2];
			}
		}
	}
}

void func_120()
{
	bool bVar0;
	
	if (!func_710())
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[0]))
		{
			if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_122.f_15 != false;
			}
			else
			{
				bVar0 = Local_122.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x2A3398C6222EB190(Local_122.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_122.f_413 == -1)
		{
			Local_122.f_413 = func_122();
		}
		if (!func_22(&(Local_122.f_326)))
		{
			func_20(&(Local_122.f_326), 0, 0);
		}
		else if (!unk_0x2A3398C6222EB190(Local_122.f_3, 4))
		{
			if ((Local_122.f_413 - func_121(&(Local_122.f_326), 0, 0)) < 0)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_122.f_326)))
	{
		func_101(&(Local_122.f_326));
		Local_122.f_413 = (Local_122.f_413 - func_121(&(Local_122.f_326), 0, 0));
	}
}

int func_121(var uParam0, bool bParam1, bool bParam2)
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

var func_122()
{
	if (func_710())
	{
		return Global_262145.f_10570;
	}
	return Global_262145.f_10291;
}

void func_123()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_1546[iVar0] = 0;
		iLocal_751[iVar0] = -2;
		iLocal_1551[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_122.f_0 != 4)
	{
		iLocal_1341 = 0;
		while (iLocal_1341 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iLocal_1341)))
			{
				iVar7 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iLocal_1341));
				if (!func_16(iVar7, 0))
				{
					if (Local_756[iLocal_1341 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_130(iLocal_1341, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_129(iLocal_1341, iVar0);
						iVar0++;
					}
					if (!unk_0x2A3398C6222EB190(Local_122.f_3, 14))
					{
						if (!unk_0x2A3398C6222EB190(Local_756[iLocal_1341 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_128(iLocal_1341, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0x2A3398C6222EB190(Local_756[iLocal_1341 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_126(iLocal_1341, iVar7);
					if (func_808(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_122.f_17[iVar0] == func_6())
							{
								if (unk_0x2A3398C6222EB190(Local_756[iLocal_1341 /*18*/].f_2, (0 + iVar0)))
								{
									Local_122.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_122.f_17[iVar0] == iVar7 && Local_122.f_241 == 0)
							{
								if (!unk_0x2A3398C6222EB190(Local_756[iLocal_1341 /*18*/].f_2, (0 + iVar0)))
								{
									Local_122.f_17[iVar0] = func_6();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1341++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_13, iVar0))
		{
			if (iLocal_1546[iVar0] == func_125() && func_118(iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_13), iVar0);
			}
			if (!unk_0x2A3398C6222EB190(Local_122.f_14, iVar0))
			{
				if (iLocal_1546[iVar0] >= 1 && func_118(iVar0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_14), iVar0);
				}
			}
			else if (iLocal_1546[iVar0] == 0 || !func_118(iVar0))
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_14, iVar0))
				{
					unk_0xD804ACF2A7171150(&(Local_122.f_14), iVar0);
					if (iLocal_1546[iVar0] == 0)
					{
						if (Local_122.f_241 >= 1)
						{
							if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
							{
								func_25(&(Local_122.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(Local_122.f_15, iVar0) && func_118(iVar0))
			{
				if (iLocal_1546[iVar0] >= 2)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_15), iVar0);
				}
			}
			else if (iLocal_1546[iVar0] <= 1 || !func_118(iVar0))
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_15, iVar0))
				{
					unk_0xD804ACF2A7171150(&(Local_122.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1546[iVar0] < func_125() || !func_118(iVar0))
		{
			unk_0xD804ACF2A7171150(&(Local_122.f_13), iVar0);
		}
		if (Local_122.f_266[iVar0] != iLocal_1546[iVar0])
		{
			Local_122.f_266[iVar0] = iLocal_1546[iVar0];
			if (Local_122.f_241 == 1)
			{
				if (Local_122.f_266[iVar0] == 0)
				{
					if (!unk_0x2A3398C6222EB190(Local_122.f_616, iVar0))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_616), iVar0);
					}
				}
			}
		}
		if (Local_122.f_241 == 0)
		{
			if (func_710())
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
				{
					iVar3 = unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]));
					if (iLocal_1546[iVar0] >= func_124(iVar3) && func_118(iVar0))
					{
						iLocal_1551[iVar0] = 1;
					}
				}
			}
		}
		if (Local_122.f_241 == 1)
		{
			if (Local_122.f_256[iVar0] != iLocal_751[iVar0])
			{
				if (iLocal_751[iVar0] >= 0)
				{
					if (iLocal_751[iVar0] > Local_122.f_256[iVar0])
					{
						Local_122.f_256[iVar0] = iLocal_751[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_122.f_256[iVar0] - iLocal_751[iVar0]);
						if (Local_122.f_261[iVar0] != iVar8)
						{
							Local_122.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_110();
	}
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_122.f_241 == 0)
	{
		if (func_710())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1551[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0x2A3398C6222EB190(Local_122.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0xD804ACF2A7171150(&(Local_122.f_3), 9);
			}
		}
	}
	if (Local_122.f_241 == 0)
	{
		if (!func_22(&(Local_122.f_360)))
		{
			func_20(&(Local_122.f_360), 0, 0);
		}
		else if (func_19(&(Local_122.f_360), 5000, 0))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_3, 14))
			{
				if (func_710())
				{
					if (Local_122.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 14);
					}
				}
				else if (Local_122.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_122.f_614)
	{
		Local_122.f_614 = iVar1;
	}
	else
	{
		Local_122.f_613 = (Local_122.f_614 - iVar1);
	}
	if (iVar2 > Local_122.f_615)
	{
		Local_122.f_615 = iVar2;
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_125()
{
	return Local_122.f_28;
}

void func_126(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x2A3398C6222EB190(Local_122.f_16, iParam0))
	{
		if (unk_0x2A3398C6222EB190(Local_756[iParam0 /*18*/].f_2, 12))
		{
			func_127(iParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_16), iParam0);
		}
		else if (Local_122.f_241 >= 1)
		{
			if (Local_756[iParam0 /*18*/].f_1 == 0)
			{
				func_127(iParam1, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_16), iParam0);
			}
			else if (Local_756[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar1]))
					{
						if (func_104(Local_122.f_7[iVar1]))
						{
							if (unk_0xA32DC7E16AD1DFB7(unk_0xD33F4BC17EB987E5(iParam1), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_127(iParam1, 1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_122.f_241 < 1)
	{
		if (!unk_0x2A3398C6222EB190(Local_756[iParam0 /*18*/].f_2, 12))
		{
			func_127(iParam1, 0);
			unk_0xD804ACF2A7171150(&(Local_122.f_16), iParam0);
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
		{
			unk_0xA2A739A5B0AF6AEC(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_128(int iParam0, int iParam1)
{
	if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iParam1)], func_85(iParam1)))
	{
		if (unk_0x2A3398C6222EB190(Local_756[iParam0 /*18*/].f_3[func_86(iParam1)], func_85(iParam1)))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_272[func_86(iParam1)]), func_85(iParam1));
			if (Local_756[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iParam1]))
			{
				if (!func_31(Local_122.f_48[iParam1]))
				{
					if (!func_89(iParam1))
					{
						unk_0xD804ACF2A7171150(&(Local_122.f_272[func_86(iParam1)]), func_85(iParam1));
					}
					else if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0xD804ACF2A7171150(&(Local_122.f_272[func_86(iParam1)]), func_85(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_129(int iParam0, int iParam1)
{
	if (!unk_0x2A3398C6222EB190(Local_122.f_271, iParam1))
	{
		if (unk_0x2A3398C6222EB190(Local_756[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_271), iParam1);
			if (Local_756[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x2A3398C6222EB190(Local_122.f_303, iParam1))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_253, iParam1))
				{
					Local_122.f_251 = (Local_122.f_251 - 1);
					if (func_93() > 1)
					{
						if (Local_122.f_252 > 0)
						{
							Local_122.f_302++;
							func_92(iParam1, func_99(1));
						}
					}
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_253), iParam1);
				}
				if (func_22(&(Local_122.f_336[iParam1 /*2*/])))
				{
					func_101(&(Local_122.f_336[iParam1 /*2*/]));
				}
				func_25(&(Local_122.f_73[iParam1]));
				unk_0xD804ACF2A7171150(&(Local_122.f_303), iParam1);
			}
		}
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2A3398C6222EB190(Local_756[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1546[iParam1]++;
		if (iLocal_751[iParam1] < 0)
		{
			if (Local_756[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_122.f_261[iParam1] > 0)
				{
					iLocal_751[iParam1] = Local_122.f_261[iParam1];
				}
				else
				{
					iLocal_751[iParam1] = 0;
				}
			}
		}
		iLocal_751[iParam1] = (iLocal_751[iParam1] + Local_756[iParam0 /*18*/].f_8);
		if (Local_122.f_241 >= 1)
		{
			if (Local_122.f_22[iParam1] == func_6())
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iParam1]))
				{
					if (func_104(Local_122.f_7[iParam1]))
					{
						iVar1 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (unk_0x972B5786EA49FE1A(iVar1))
							{
								iVar0 = unk_0x46E9A8D99AF6D7BC(iVar1);
								if (iVar0 == iParam2)
								{
									Local_122.f_22[iParam1] = iParam2;
									func_110();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_319, iParam1))
		{
			if (Local_756[iParam0 /*18*/].f_10 > -1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_319), iParam1);
				func_20(&(Local_122.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_122.f_22[iParam1] != func_6())
	{
		if (!unk_0x80BA8E3CC61A8625(Local_122.f_22[iParam1]))
		{
			iVar0 = func_131(iParam1, 1);
			if (iVar0 != func_6())
			{
				Local_122.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_122.f_22[iParam1] = func_6();
			}
		}
		else if (func_16(Local_122.f_22[iParam1], 0))
		{
			Local_122.f_22[iParam1] = func_6();
			func_110();
		}
		else
		{
			iVar1 = unk_0xD33F4BC17EB987E5(Local_122.f_22[iParam1]);
			if (!unk_0x8682D8A6269E52C9(iVar1))
			{
				if (func_104(Local_122.f_7[iParam1]))
				{
					if (!unk_0xA32DC7E16AD1DFB7(iVar1, unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam1]), 0))
					{
						iVar0 = func_131(iParam1, 1);
						if (iVar0 != func_6())
						{
							Local_122.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_122.f_22[iParam1] = func_6();
						}
					}
				}
			}
		}
	}
}

int func_131(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_6();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar3)))
			{
				if (iVar0 == func_6())
				{
					if (Local_756[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0x2A3398C6222EB190(Local_756[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar3));
							}
							else
							{
								iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar3));
								if (func_104(Local_122.f_7[iParam0]))
								{
									iVar2 = unk_0xD33F4BC17EB987E5(iVar1);
									if (!unk_0x8682D8A6269E52C9(iVar2))
									{
										if (unk_0xA32DC7E16AD1DFB7(iVar2, unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 0))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_132(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1260112073;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam0;
	iVar3 = func_133(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iVar3);
	}
}

var func_133(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_808(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_135()
{
	func_107();
	if (func_67(Local_122.f_27))
	{
		if (func_136())
		{
			unk_0x9793B48C4C8275F8(Local_122.f_27);
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_122.f_12)
	{
		if (!unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar0]))
		{
			if (func_67(Local_122.f_27))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_244, iVar0))
				{
					unk_0x963AAB0E6FFD7E02(Local_122.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_244), iVar0);
				}
				if (func_79(&(Local_122.f_7[iVar0]), Local_122.f_27, Local_122.f_30[iVar0 /*3*/], Local_122.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0x7569BCF8BBFF16B9(unk_0xC42CA935BE72299D(Local_122.f_7[iVar0]), 1, 1);
					unk_0xFABEFEE17018AE2A(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
					unk_0x4D843768938087D4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
					unk_0xF65099AB993BAEBC(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
					unk_0x5CBEDEFFD7D137BD(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0, 0);
					unk_0x1F18D3C78C8C1A11(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
					unk_0xF3A7713570EDCB05(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
					unk_0xA516DB03BDB6B4EB(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]));
					unk_0x56B418F469976565(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1, 1, 0);
					unk_0x583AB626B1CF33F0(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
					unk_0x8BC8A4FEB4B8FB05(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
					if (unk_0x1DBFCF939B3B47D0(Local_122.f_27) || unk_0xF9CDF5CA6A1D6756(Local_122.f_27))
					{
						unk_0xB3460ED1DE6509A8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
						if (unk_0x1DBFCF939B3B47D0(Local_122.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_139());
						}
						else if (unk_0xF9CDF5CA6A1D6756(Local_122.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						unk_0x990879ED64ED4138(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x845D37CEF8F0ABAF(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xAB7E0AE68E18BEED(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
						unk_0xEB9008A3848B31D2(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
						unk_0xCB78392CBBC0CB2F(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
						if (unk_0xF9CDF5CA6A1D6756(Local_122.f_27))
						{
							unk_0x943BFA25D560F0AA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
						}
						if (unk_0x1DBFCF939B3B47D0(Local_122.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x56A8BEAE41AD4D8D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
							unk_0x038C88290AA8A54D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0x1DBFCF939B3B47D0(Local_122.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_139());
						}
						else if (unk_0xF9CDF5CA6A1D6756(Local_122.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						unk_0x990879ED64ED4138(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x845D37CEF8F0ABAF(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xAB7E0AE68E18BEED(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
						unk_0xEB9008A3848B31D2(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
						unk_0xCB78392CBBC0CB2F(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), fVar1);
					}
					unk_0x9DFCC19370F919F3(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
					if (Local_122.f_27 == joaat("savage"))
					{
					}
					if (unk_0x496D18970B708258("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x2EDC8603BB24D464(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x496D18970B708258("MPBitset", 3))
					{
						if (unk_0x8B0523D9EF9595C2(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x9E69E04AC6AD5C49(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), "MPBitset");
						}
						unk_0xCD7E92DE2BFA0B0D(&iVar2, 10);
						unk_0xCD7E92DE2BFA0B0D(&iVar2, 15);
						unk_0x2EDC8603BB24D464(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0x3529025CFB8BE3AA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0, iLocal_1543);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0x3529025CFB8BE3AA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0, Global_1574701[iVar3]);
						iVar3++;
					}
					unk_0xAF836A092CEE8C6F(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0, 0);
					unk_0xC0024AB730429D63(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
					unk_0xC20B73867395D06D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1);
					unk_0x644BF74611C3769E(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), false);
					unk_0x75C57ED2D557CF95(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_122.f_12)
	{
		if (!unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_137()
{
	if (func_710())
	{
		return Global_262145.f_10564;
	}
	return Global_262145.f_10304;
}

var func_138()
{
	if (func_710())
	{
		return Global_262145.f_10565;
	}
	return Global_262145.f_10305;
}

var func_139()
{
	if (func_710())
	{
		return Global_262145.f_10563;
	}
	return Global_262145.f_10303;
}

bool func_140()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_122.f_362)))
	{
		func_20(&(Local_122.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_122.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 10))
	{
		if (func_154(&iVar0))
		{
			if (iVar0 < func_153())
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 10);
			}
			else
			{
				iVar1 = unk_0x3AF262D7332EEDF5(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_10558) && !Global_262145.f_10556) || Global_262145.f_10557)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 8);
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 10);
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 10);
				}
			}
		}
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 10))
	{
		if (Local_122.f_12 == 0)
		{
			func_107();
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_3, 13))
		{
			if (func_149())
			{
				if (!func_147(129, Local_122.f_1, Local_122.f_2, 0))
				{
					if (func_141())
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 13);
					}
					else
					{
						Local_122.f_29 = -1;
					}
				}
				else
				{
					Local_122.f_29 = -1;
				}
			}
		}
	}
	return unk_0x2A3398C6222EB190(Local_122.f_3, 13);
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_107();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_142(Local_122.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_122.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_142(struct<3> Param0, float fParam3)
{
	int iVar0[32];
	int iVar33;
	int iVar34;
	bool bVar35;
	struct<3> Var36;
	struct<3> Var39;
	int iVar42;
	struct<10> Var43;
	int iVar53;
	
	if (Global_2420855.f_84.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2420855.f_84[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = unk_0x50B7853132D8438E(&(Global_2420855.f_84[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2420855.f_84.f_225)
			{
				bVar35 = false;
			}
		}
		iVar34++;
		if (iVar34 >= 32)
		{
			bVar35 = false;
		}
	}
	if (iVar33 == 0)
	{
		return 0;
	}
	Var36 = { 0f, 0f, 0f };
	Var39 = { Param0 };
	iVar42 = 0;
	Var43.f_1 = -1;
	Var43.f_2 = -1;
	Var43.f_9 = -1;
	iVar53 = 0;
	iVar34 = 0;
	while (iVar34 < Global_1311741)
	{
		if (unk_0x2A3398C6222EB190(Global_2359720[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359720[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (unk_0x1410333E912D4EC6(Var36, Var39, 1) < fParam3)
			{
				Var43 = { Global_2359720[iVar34 /*26*/].f_15 };
				iVar53 = func_143(&Var43);
				iVar42 = 0;
				while (iVar42 < iVar33)
				{
					if (iVar53 == iVar0[iVar42])
					{
						return 1;
					}
					iVar42++;
				}
			}
		}
		iVar34++;
	}
	return 0;
}

int func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_144(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794643.f_98389[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_907640.f_18805[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_144(var uParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_146(uParam0->f_1))
	{
		if (func_145(uParam0))
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

int func_145(var uParam0)
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

bool func_146(int iParam0)
{
	return iParam0 == 9999;
}

int func_147(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_148(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_7474)
		{
			if (Global_2483501.f_148[iVar0 /*2*/] == iVar1 && Global_2483501.f_148[iVar0 /*2*/].f_1 == func_134(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_148(int iParam0)
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

int func_149()
{
	if (func_151(&(Local_122.f_27)))
	{
		if (Local_122.f_4)
		{
			func_150();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_150()
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

int func_151(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_152(joaat("rhino")))
			{
				Local_122.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_152(joaat("hydra")))
			{
				Local_122.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_122.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_152(joaat("savage")))
			{
				Local_122.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_122.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_152(joaat("valkyrie")))
			{
				Local_122.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_152(joaat("buzzard")))
			{
				Local_122.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	if (!func_710())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_10293;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_10295;
				break;
			
			case joaat("savage"):
				return Global_262145.f_10294;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_10297;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_10296;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_10572;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_10574;
				break;
			
			case joaat("savage"):
				return Global_262145.f_10573;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_10576;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_10575;
				break;
			}
	}
	return 0;
}

int func_153()
{
	return Global_262145.f_10307;
}

int func_154(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_122.f_334)))
	{
		func_20(&(Local_122.f_334), 0, 0);
	}
	else if (func_19(&(Local_122.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
			{
				if (!func_16(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0)), 0))
				{
					if (!unk_0x2A3398C6222EB190(Local_756[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_155(var uParam0)
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

void func_156(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_157()
{
	struct<3> Var0;
	
	if (iLocal_3507 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iLocal_3507]))
		{
			if (unk_0xA02DD6B5C8C02298(Local_122.f_7[iLocal_3507]))
			{
				Var0 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iLocal_3507]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_122.f_7[iLocal_3507]));
				}
			}
		}
	}
	iLocal_3507++;
	if (iLocal_3507 >= 4)
	{
		iLocal_3507 = 0;
	}
}

void func_158()
{
	if (func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 1)
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1334, 13))
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 13);
			unk_0x5C72983073515174(1, 0);
		}
	}
	else if (unk_0x2A3398C6222EB190(iLocal_1334, 13))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				unk_0x5C72983073515174(0, 0);
				unk_0xD804ACF2A7171150(&iLocal_1334, 13);
			}
		}
	}
}

void func_159()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	if (func_404())
	{
		func_265(0);
	}
	iVar0 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
	{
		Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_6())
	{
		if (unk_0x80BA8E3CC61A8625(iVar0))
		{
			if (unk_0x532CFF8D6B65E42F(iVar0))
			{
				uVar1 = unk_0x3DAB36F6FA9328A6(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_756[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_191();
						func_188(iVar2);
						break;
					
					case 1:
						func_187();
						func_164();
						func_160(1);
						break;
					
					case 2:
						func_160(0);
						break;
					}
				}
			}
	}
}

void func_160(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_161(Local_122.f_48[iVar0], &(Local_1350[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_161(Local_122.f_48[iVar0], &(Local_1350[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (unk_0xA761A0B6072010C8(Local_1350[iVar0 /*8*/]))
		{
			unk_0x50B5259DFC71B8EC(Local_1350[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0xC2001CECF808BD21(Local_1350[iVar0 /*8*/], 1);
			}
		}
		if (unk_0xA761A0B6072010C8(Local_1350[iVar0 /*8*/].f_1))
		{
			unk_0x50B5259DFC71B8EC(Local_1350[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0xC2001CECF808BD21(Local_1350[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_122.f_27 != joaat("hydra"))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar0)], func_85(iVar0)) || unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar0)], func_85(iVar0)))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar0]))
				{
					func_87(&(Local_1350[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0x2A3398C6222EB190(Local_122.f_271, iVar1) || unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6, iVar1))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar0]))
				{
					func_87(&(Local_1350[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_161(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		if (func_163())
		{
			Global_2434915 = unk_0x3D35F9864E4640B1();
		}
		if (bParam3)
		{
			func_162(unk_0xECB7D3275586261E(uParam0), uParam1, 1, Global_2434915, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_162(unk_0xECB7D3275586261E(uParam0), uParam1, -1, Global_2434915, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA761A0B6072010C8(*uParam1))
	{
		func_87(uParam1);
	}
}

int func_162(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xED1168B8D2D313FA();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (!unk_0x8E124932BCA8337D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xFAE7EEA9EC6C8B59(iParam0, 1);
			}
			else
			{
				unk_0xC1F8D3D339E714E3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xCF88C2F9C02AE277(iParam0, iParam2);
			unk_0x7F39688B4D1E8A5B(iParam0, fParam6);
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x042302634EF280A7(iParam0, iParam9);
		}
		unk_0xF856340FF6FF9351(iParam0, uParam4);
		unk_0x0F321108A38FDEEF(iParam0, uParam5);
		*uParam1 = unk_0x92EB201D24EEB65C(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB934A06DDA5027D(*uParam1, iParam8);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(uParam7))
				{
					unk_0xA23268A8852A45E8("STRING");
					if (bParam10)
					{
						unk_0x50B3C23D0902259F(sParam7);
					}
					else
					{
						unk_0x7C8A7ECFBAD2C8C4(sParam7);
					}
					unk_0x05064114393805B9(*uParam1);
				}
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_6, 2))
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x90219307C9D2728D(iParam0, 0))
		{
			uParam1->f_1 = unk_0x44DF128826D07906(iParam0);
			if (!unk_0x2A3398C6222EB190(uParam1->f_6, 3))
			{
				if (unk_0xA761A0B6072010C8(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xEB934A06DDA5027D(uParam1->f_1, iParam8);
					}
					if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
					{
						unk_0xA23268A8852A45E8("STRING");
						if (bParam10)
						{
							unk_0x50B3C23D0902259F(sParam7);
						}
						else
						{
							unk_0x7C8A7ECFBAD2C8C4(sParam7);
						}
						unk_0x05064114393805B9(uParam1->f_1);
					}
					unk_0xC5B4383DA70A2C1A(uParam1->f_1, 7);
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA761A0B6072010C8(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA761A0B6072010C8(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_1312830;
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar9;
	int iVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	
	iVar2 = (func_34() - func_121(&(Local_122.f_332), 0, 0));
	if (iLocal_3453 == 0)
	{
		if (unk_0x2A3398C6222EB190(iLocal_1333, 26))
		{
			if ((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2))
			{
				iLocal_3453 = (func_34() - func_121(&(Local_122.f_332), 0, 0));
				iVar2 = iLocal_3453;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3453;
	}
	if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_710())
	{
		iVar0 = (((Local_122.f_256[0] + Local_122.f_256[1]) + Local_122.f_256[2]) + Local_122.f_256[3]);
	}
	else
	{
		iVar0 = Local_122.f_256[0];
	}
	func_186(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_710())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = unk_0xA7871E29B06DA901(Local_122.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_6())
			{
				if (unk_0x80BA8E3CC61A8625(iVar21))
				{
					sVar4[iVar1] = unk_0x06D7899D9C1F422F(iVar21);
					iVar10[iVar1] = Local_122.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_122.f_594[iVar1 /*4*/];
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 == uVar15[iVar1])
					{
						iVar20 = uVar15[iVar1];
						iVar20++;
					}
					uVar15[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar10[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar10[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_121(&(Local_122.f_332), 0, 0)) >= 0)
		{
			if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
			{
				func_182(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_183(), iVar20);
			}
			else
			{
				func_180(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_183(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_122.f_255)
		{
			iVar0 = Local_122.f_255;
		}
		if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
		{
			func_179(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), iVar0, iVar0, Local_122.f_255, iVar2, iVar3, 0, func_183());
		}
		else
		{
			func_165(iVar0, iVar0, Local_122.f_255, iVar2, iVar3, 0, func_183(), 1);
		}
		if (bVar9)
		{
			func_110();
		}
	}
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_176(0) == 0)
	{
		return;
	}
	func_175();
	func_174();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_171(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0);
	}
	func_170(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_169(sParam6))
	{
		sVar16 = sParam6;
	}
	func_166(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0);
}

void func_166(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_168(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_167(7, iVar0);
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

void func_167(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_168(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

int func_169(char* sParam0)
{
	if (unk_0x996B09F758C57FBE(uParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(uParam0, "") || unk_0xB3404E397FF56B3B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_168(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_167(4, iVar0);
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

void func_171(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_168(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_167(6, iVar0);
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
		if (iParam15 == 5 && func_173())
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
			if (func_172())
			{
				Global_1356070.f_1092 = 1;
			}
		}
	}
}

int func_172()
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

int func_173()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(7);
	Global_2456645 = 1;
}

void func_175()
{
	Global_1356070.f_1088 = 1;
}

int func_176(bool bParam0)
{
	if (func_178())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_808(unk_0x3D35F9864E4640B1(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189 != 0;
}

bool func_178()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 12);
}

void func_179(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_176(0) == 0)
	{
		return;
	}
	func_174();
	func_175();
	if (bParam6)
	{
		func_171(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	func_170(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_169(sParam7))
	{
		sVar0 = sParam7;
	}
	func_166(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0);
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_176(0) == 0)
	{
		return;
	}
	func_175();
	func_174();
	if (iParam0 > -1)
	{
		Var0 = { func_181(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_171(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_181(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_171(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_181(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_171(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_181(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_171(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_169(sParam10))
	{
		sVar20 = sParam10;
	}
	func_166(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
}

struct<16> func_181(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0xC0D54565FC1032F4("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_182(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_176(0) == 0)
	{
		return;
	}
	func_175();
	func_174();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_171(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_171(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_171(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_171(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_169(sParam14))
	{
		sVar4 = sParam14;
	}
	func_166(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0);
}

char* func_183()
{
	return "HUD_COUNTDOWN";
	switch (func_185(unk_0x3D35F9864E4640B1()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_184())
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

int func_184()
{
	if (func_185(unk_0x3D35F9864E4640B1()) == 133)
	{
		return Global_2501777.f_4788;
	}
	return -1;
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/];
	}
	return -1;
}

void func_186(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xCD70DA50CCD55658())
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4704, 0))
		{
			if (!unk_0x0BD3CCFB6C6CFA91(&(Global_2501777.f_4706)))
			{
				unk_0x925DD855308C5F32(&(Global_2501777.f_4706));
			}
			unk_0x62316D43A8F729C6(1);
			unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_30S_FIRA");
			unk_0xB3E27A9E412BBDF8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
			unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
			unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 0);
			if (Global_2501777.f_4714 > -1)
			{
				unk_0xF2565A150D1CA964(Global_2501777.f_4714);
				Global_2501777.f_4714 = -1;
			}
			Global_2501777.f_4704 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4704, 0))
		{
			if (unk_0x2A3398C6222EB190(Global_2501777.f_4704, 4))
			{
				if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 2))
				{
					if (unk_0xC9E006CAE450C21B())
					{
						if ((!unk_0xB3404E397FF56B3B(unk_0x3B6901D890F3121F(unk_0x885DE9EE2AE89A2A()), "OFF") && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)) && !unk_0x0BD3CCFB6C6CFA91(&(Global_2501777.f_4706)))
						{
							StringCopy(&(Global_2501777.f_4706), "", 32);
							unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_30S_FIRA");
							unk_0xB3E27A9E412BBDF8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
							unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
							unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 0);
							unk_0x62316D43A8F729C6(1);
							unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 2);
						}
					}
				}
				else if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x2A3398C6222EB190(Global_2501777.f_4704, 5))
				{
					unk_0x925DD855308C5F32("OFF");
				}
			}
			else if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x1E420F926A7BC4D2("FM_COUNTDOWN_30S");
				}
				unk_0xFD69BDF108B32E5B("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 1);
			}
			else if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x95C584AB3FA8F8EA() != 0)
					{
						if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && !unk_0xCDCD2BE10A3617C3())
						{
							StringCopy(&(Global_2501777.f_4706), unk_0x5EB500590B7B4F22(), 32);
							unk_0x925DD855308C5F32("OFF");
						}
						unk_0x62316D43A8F729C6(1);
						unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 3))
				{
					Global_2501777.f_4714 = unk_0x6307C3D1D866114A();
					unk_0x18F1BFAF88AC511B(Global_2501777.f_4714, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 0))
			{
				Global_2501777.f_4704 = 0;
				Global_2501777.f_4714 = -1;
				unk_0x5C7A4C010111DAF5("FM_COUNTDOWN_30S_KILL");
				unk_0x62316D43A8F729C6(0);
				unk_0x1E420F926A7BC4D2("FM_PRE_COUNTDOWN_30S");
				unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 1);
				unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 1);
				unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 0);
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || unk_0x2A3398C6222EB190(Global_2501777.f_4704, 2))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 2);
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 5);
				}
				else
				{
					unk_0xD804ACF2A7171150(&(Global_2501777.f_4704), 5);
					unk_0xD804ACF2A7171150(&(Global_2501777.f_4704), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x2A3398C6222EB190(Global_2501777.f_4704, 0))
		{
			Global_2501777.f_4704 = 0;
			Global_2501777.f_4714 = -1;
			unk_0x5C7A4C010111DAF5("FM_COUNTDOWN_30S_KILL");
			unk_0x62316D43A8F729C6(0);
			unk_0x1E420F926A7BC4D2("FM_PRE_COUNTDOWN_30S");
			unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 1);
			unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 1);
			unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 1);
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 0);
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 2);
				unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4704), 5);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_2501777.f_4704), 2);
				unk_0xD804ACF2A7171150(&(Global_2501777.f_4704), 5);
			}
		}
	}
}

void func_187()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xA761A0B6072010C8(uLocal_1345[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_1345[iVar0]));
		}
		iVar0++;
	}
}

void func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xA761A0B6072010C8(uLocal_1345[iVar0]))
		{
			if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_13, iVar0))
				{
					if (!unk_0x2A3398C6222EB190(Local_756[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1345[iVar0] = unk_0xE80C2D6BF636C6C4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]));
						unk_0x3B815A6E8530D3A5(uLocal_1345[iVar0], 429);
						func_189(&(uLocal_1345[iVar0]), 29);
						if (func_710())
						{
							unk_0x50B5259DFC71B8EC(uLocal_1345[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0x50B5259DFC71B8EC(uLocal_1345[iVar0], "UW_BLIP");
						}
						unk_0xC5B4383DA70A2C1A(uLocal_1345[iVar0], 9);
					}
					else if (unk_0xA761A0B6072010C8(uLocal_1345[iVar0]))
					{
						unk_0x0C4BDC77192798AE(&(uLocal_1345[iVar0]));
					}
				}
				else if (unk_0xA761A0B6072010C8(uLocal_1345[iVar0]))
				{
					unk_0x0C4BDC77192798AE(&(uLocal_1345[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_189(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		uVar0 = func_190(iParam1);
		unk_0xEB934A06DDA5027D(*uParam0, uVar0);
	}
}

int func_190(int iParam0)
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

void func_191()
{
	bool bVar0;
	
	bVar0 = func_257();
	if (bVar0)
	{
		if (Local_122.f_413 > -1)
		{
			if ((Local_122.f_413 - func_121(&(Local_122.f_326), 0, 0)) >= 0)
			{
				if (!func_195())
				{
					func_194((Local_122.f_413 - func_121(&(Local_122.f_326), 0, 0)));
					func_192((Local_122.f_413 - func_121(&(Local_122.f_326), 0, 0)), func_193(-1));
				}
			}
			else
			{
				if (!func_195())
				{
					func_192(0, func_193(-1));
				}
				if (unk_0xEF0CB8FF125B9F9C())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_3), 4);
				}
			}
		}
	}
}

void func_192(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_176(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_169(sParam1))
	{
		sVar0 = sParam1;
	}
	func_166(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_193(int iParam0)
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

void func_194(int iParam0)
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

bool func_195()
{
	bool bVar0;
	var uVar1;
	
	if (func_255(8))
	{
		bVar0 = true;
	}
	if (func_255(0))
	{
		bVar0 = true;
	}
	if (!func_247(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_202())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 9))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				uVar1 = unk_0x882388E2A8356C6F(unk_0x0031992CA618A445());
				if (!unk_0x432757A9E7AAFA96(uVar1, 0))
				{
					func_200(0, -1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 9))
	{
		unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 9);
	}
	if (Global_1767039)
	{
		bVar0 = true;
	}
	if (func_199(unk_0x3D35F9864E4640B1()))
	{
		bVar0 = true;
	}
	if (func_198(unk_0x3D35F9864E4640B1(), 2))
	{
		bVar0 = true;
	}
	if (func_196(unk_0x3D35F9864E4640B1()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_196(int iParam0)
{
	if (func_197(iParam0))
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8);
}

bool func_197(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 2);
}

bool func_198(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

int func_199(int iParam0)
{
	if (!func_808(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_35;
}

void func_200(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1592949)
		{
			if (!func_255(0) && !func_255(func_201(iParam1)))
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

int func_202()
{
	if (func_246(unk_0x3D35F9864E4640B1(), 29))
	{
		return 0;
	}
	if (func_198(unk_0x3D35F9864E4640B1(), 21))
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
	if (func_244(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_243())
	{
		return 0;
	}
	if (func_242(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_241())
	{
		return 0;
	}
	if (func_223(unk_0x3D35F9864E4640B1()) == 3)
	{
		return 0;
	}
	if (func_221(func_222()))
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (unk_0xF4F91CD09D59F42E())
	{
		return 0;
	}
	if (func_218(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!func_216())
	{
		return 0;
	}
	if (func_198(unk_0x3D35F9864E4640B1(), 0) || func_198(unk_0x3D35F9864E4640B1(), 3))
	{
		return 0;
	}
	if ((func_198(unk_0x3D35F9864E4640B1(), 12) || func_198(unk_0x3D35F9864E4640B1(), 14)) || func_198(unk_0x3D35F9864E4640B1(), 13))
	{
		return 0;
	}
	if (func_212(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_211(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_210())
	{
		return 0;
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (func_199(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_209())
	{
		return 0;
	}
	if (func_207(unk_0x3D35F9864E4640B1()) && Global_1592729.f_170)
	{
		return 0;
	}
	if ((func_206(unk_0x3D35F9864E4640B1()) || func_205(unk_0x3D35F9864E4640B1())) || func_203(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_808(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_204(int iParam0)
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

int func_205(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_808(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1 && Global_2422142[iParam0 /*399*/].f_318.f_4 != func_6())
			{
				return func_204(Global_2422142[iParam0 /*399*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_808(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (func_208(Global_1593076[iParam0 /*647*/].f_259.f_16))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
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

int func_209()
{
	if (Global_2595735.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return Global_92814.f_310 > 0;
}

bool func_211(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11);
}

int func_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_215(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_214(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_213(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_206(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_203(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_808(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_808(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422142[iParam0 /*399*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_808(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422142[iParam0 /*399*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_216()
{
	if (func_217() == 0)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	return Global_1312466.f_18;
}

bool func_218(int iParam0)
{
	return func_219(iParam0);
}

bool func_219(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

bool func_220()
{
	return Global_1312853;
}

int func_221(int iParam0)
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

int func_222()
{
	return Global_2434915.f_2484[0 /*76*/].f_1;
}

int func_223(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_240(iParam0) && !func_197(iParam0)) && !unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8));
	bVar2 = func_239(iParam0);
	bVar3 = func_238();
	uVar4 = func_229();
	if ((bVar1 && (func_228(iParam0) || func_227(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_226(iParam0)) && !func_224(iParam0)))
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

bool func_224(int iParam0)
{
	return func_225(iParam0, 19);
}

bool func_225(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_225(iParam0, 9);
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_228(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 7);
	}
	return 0;
}

int func_229()
{
	if ((func_225(unk_0x3D35F9864E4640B1(), 21) || func_225(unk_0x3D35F9864E4640B1(), 22)) || func_235())
	{
		return 1;
	}
	if (func_231())
	{
		func_230(22);
		return 1;
	}
	return 0;
}

void func_230(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

int func_231()
{
	if (func_234(unk_0x3D35F9864E4640B1(), 0))
	{
		if ((func_238() && !func_233()) || func_198(unk_0x3D35F9864E4640B1(), 21))
		{
			return 1;
		}
		else
		{
			func_232(27);
		}
	}
	return 0;
}

void func_232(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

bool func_233()
{
	return Global_1312416.f_1;
}

int func_234(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_235()
{
	return func_236(292, -1);
}

int func_236(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_237(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

bool func_238()
{
	return Global_1312416;
}

bool func_239(int iParam0)
{
	return func_225(iParam0, 20);
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/] != -1;
	}
	return 0;
}

bool func_241()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 5;
}

int func_242(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_270.f_4 != 0 || Global_2422142[iParam0 /*399*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_243()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

int func_244(int iParam0)
{
	if (func_245(iParam0, 1))
	{
		if (Global_1593076[iParam0 /*647*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_218(iParam0))
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

bool func_246(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_5, iParam1);
}

bool func_247(int iParam0, bool bParam1, bool bParam2)
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
		if (func_251(unk_0x3D35F9864E4640B1(), 85))
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
	if (func_250() || func_249())
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
			if (func_248())
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

int func_248()
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
	if (func_250())
	{
		return 1;
	}
	if (func_249())
	{
		return 1;
	}
	uVar0 = Global_1365053[func_237(-1)];
	if (unk_0x2A3398C6222EB190(uVar0, 7))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1697), 23);
		return 1;
	}
	return 0;
}

bool func_249()
{
	return Global_1312841;
}

bool func_250()
{
	return Global_1312843;
}

bool func_251(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_254())
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_252(iParam1);
	iVar1 = uVar0;
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_533, iVar1);
}

int func_252(int iParam0)
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

bool func_253()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_144, 3);
}

int func_254()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_250())
	{
		return 1;
	}
	if (func_249())
	{
		return 1;
	}
	return func_236(120, -1);
}

bool func_255(int iParam0)
{
	var uVar0;
	
	uVar0 = func_256(2467, -1, 0);
	return unk_0x2A3398C6222EB190(uVar0, iParam0);
}

int func_256(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_237(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_257()
{
	bool bVar0;
	
	if (!func_710())
	{
		if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
	{
		if (func_107() == 2)
		{
			return 0;
		}
	}
	if (!func_710())
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[0]))
		{
			if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_122.f_15 != false;
			}
			else
			{
				bVar0 = Local_122.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x2A3398C6222EB190(Local_122.f_3, 9);
	}
	if (!func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		if (bVar0 && !func_195())
		{
			if (func_710())
			{
				if (!func_264("UW_ABTSC"))
				{
					func_258("UW_ABTSC", 0);
				}
			}
			else if (!func_264("UW_ABTS"))
			{
				func_258("UW_ABTS", 0);
			}
		}
		else if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_258(char* sParam0, bool bParam1)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return;
	}
	if (func_262(sParam0))
	{
		return;
	}
	func_10();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_261();
	func_260(bParam1);
	func_259();
}

void func_259()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 1);
}

void func_260(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_1312575.f_59), 0);
}

void func_261()
{
	Global_1312575.f_10 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 86400000);
	Global_1312575.f_11 = unk_0x898811EA80D35DE2();
}

bool func_262(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_263(uParam0);
	}
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12));
}

bool func_263(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

int func_264(char* sParam0)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!func_15())
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
	return func_262(sParam0);
}

void func_265(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	
	Var1 = { func_403() };
	bVar5 = false;
	if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1559[iVar0 /*42*/] = -1;
			Local_1559[iVar0 /*42*/].f_1 = func_6();
			Local_1559[iVar0 /*42*/].f_9 = 0;
			Local_1559[iVar0 /*42*/].f_31 = -1;
			if (Local_122.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1559[iVar0 /*42*/].f_1 = Local_122.f_465[iVar0 /*4*/].f_2;
				Local_1559[iVar0 /*42*/].f_9 = Local_122.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_402())
			{
				if (Local_2904.f_103 != 129)
				{
					Local_2904.f_103 = 129;
				}
				else
				{
					func_200(1, 129);
				}
			}
		}
		else if (Local_2904.f_103 != 129)
		{
			Local_2904.f_103 = 129;
		}
		func_270(&Local_1559, &uLocal_1558, 25, &Local_2904, &uLocal_3017, -1, 0);
		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 1)
		{
			if (Local_1559[0 /*42*/].f_1 != unk_0x3D35F9864E4640B1())
			{
				if (Local_122.f_465[0 /*4*/].f_1 > 0)
				{
					func_269();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1559[iVar0 /*42*/] = -1;
			Local_1559[iVar0 /*42*/].f_1 = func_6();
			Local_1559[iVar0 /*42*/].f_9 = 0;
			Local_1559[iVar0 /*42*/].f_31 = -1;
			Local_1559[iVar0 /*42*/].f_39 = -1;
			if (Local_122.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1559[iVar0 /*42*/].f_39 = Local_122.f_465[iVar0 /*4*/] + 1;
				Local_1559[iVar0 /*42*/].f_1 = unk_0xA7871E29B06DA901(Local_122.f_465[iVar0 /*4*/].f_2);
				Local_1559[iVar0 /*42*/].f_40 = Local_122.f_465[iVar0 /*4*/].f_1;
				Local_1559[iVar0 /*42*/].f_9 = Local_122.f_465[iVar0 /*4*/].f_1;
				Local_1559[iVar0 /*42*/].f_2 = Local_122.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_266();
		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 1)
		{
			if (Local_122.f_594[0 /*4*/] > 0)
			{
				if (Local_122.f_594[0 /*4*/] != Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9)
				{
					if (Local_122.f_256[Local_122.f_594[0 /*4*/]] > 0)
					{
						func_269();
					}
				}
			}
		}
		func_270(&Local_1559, &uLocal_1558, 25, &Local_2904, &uLocal_3017, -1, 1);
		if (bParam0)
		{
			if (!func_402())
			{
				if (Local_2904.f_103 != 129)
				{
					Local_2904.f_103 = 129;
				}
				else
				{
					func_200(1, 129);
				}
			}
		}
		else if (Local_2904.f_103 != 129)
		{
			Local_2904.f_103 = 129;
		}
	}
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_3542[0] = Local_122.f_594[0 /*4*/];
	uLocal_3542[1] = Local_122.f_594[1 /*4*/];
	uLocal_3542[2] = Local_122.f_594[2 /*4*/];
	uLocal_3542[3] = Local_122.f_594[3 /*4*/];
	iVar3 = Local_122.f_594[0 /*4*/];
	iVar4 = Local_122.f_594[1 /*4*/];
	iVar5 = Local_122.f_594[2 /*4*/];
	iVar6 = Local_122.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_122.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_122.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_122.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_122.f_266[iVar6];
	}
	uLocal_3547[0] = uVar7;
	uLocal_3547[1] = uVar8;
	uLocal_3547[2] = uVar9;
	uLocal_3547[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0xEAFA0E77286423E5())
	{
		iVar2 = func_268(uLocal_3542[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1559[iVar2 /*42*/].f_9 = Local_122.f_594[iVar0 /*4*/].f_1;
		}
		func_267(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3547[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_267(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1559[iParam1 /*42*/] };
	Local_1559[iParam1 /*42*/] = { Local_1559[iParam0 /*42*/] };
	Local_1559[iParam0 /*42*/] = { Var0 };
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0xEAFA0E77286423E5() - 1))
	{
		if (iParam0 == Local_1559[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0xEAFA0E77286423E5();
		}
		iVar0++;
	}
	return iVar1;
}

void func_269()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1700), 19);
}

void func_270(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_401(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_399() || iParam2 == 26)
	{
		if (func_354(uParam1, iParam2, uParam3, Global_1574110, 0, func_404()))
		{
			func_353(1);
			if ((!func_351() && !func_349()) || unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
			{
				if (func_348())
				{
					func_345();
				}
				else
				{
					unk_0x661705F074A804D1(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_344(1);
						Global_1574110 = 0;
						iVar54 = -1;
						if (Global_1574293 != 1)
						{
							func_343(uParam1);
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
								if (func_808(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
									if (!func_16(iVar35, 0))
									{
										if ((unk_0x09C68D317F1B5143(iVar35, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar35 /*399*/].f_245 != -1) || func_342(iVar35))
										{
											iVar44 = iVar35;
											if (func_341(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_338(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_335(unk_0x3D35F9864E4640B1(), 0) && func_334(unk_0x3D35F9864E4640B1()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_333())
							{
								if (func_808(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
								}
								else
								{
									iVar35 = func_6();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_332(iVar35) && func_328(iVar35, iParam2)) && func_808(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
								Var38 = { func_323(iVar35) };
								if (iVar35 == unk_0x3D35F9864E4640B1())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x06D7899D9C1F422F(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
								iVar37 = func_317(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x7EBBB7725601519D(iVar37);
								}
								Global_1574110++;
								if ((iParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*42*/])->f_22;
								}
								if ((iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (iParam0[iVar52 /*42*/])->f_31;
								}
								if ((iParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (iParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (iParam0[iVar52 /*42*/])->f_9;
								if (((iParam0[iVar52 /*42*/])->f_9 != -1 || (iParam0[iVar52 /*42*/])->f_22 != -1f) || (iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_333())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_312(&iVar43, &fVar45, (iParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_311(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_306(iVar35, 0);
								if (bVar34)
								{
									if (func_305(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((iParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (iParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_304(iParam5))
								{
									func_303(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_303(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_808(iVar35, 0, 1) && !unk_0x2A3398C6222EB190(iVar49, iVar35))
							{
								iVar35 = unk_0xA7871E29B06DA901(iVar52);
							}
							else
							{
								iVar35 = func_6();
							}
							if (func_332(iVar35))
							{
								if (func_808(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
									Var38 = { func_323(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
									iVar37 = func_317(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x7EBBB7725601519D(iVar37);
									}
									Global_1574110++;
									iVar51 = func_306(iVar35, 1);
									if (bVar34)
									{
										if (func_305(iVar35, 1))
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
									func_283(iVar35, unk_0x06D7899D9C1F422F(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							func_280(uParam3, uParam1);
						}
						func_101(&(uParam3->f_21));
						func_279();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 7))
						{
							func_278(uParam3, uParam1);
							func_277(uParam1, 0, 1);
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 7);
						}
						func_278(uParam3, uParam1);
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 11);
						}
						if (func_273(uParam3))
						{
							Global_1574293 = 1;
						}
						func_271(uParam3);
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
			func_279();
			func_344(0);
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

void func_271(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_101(&(uParam0->f_21));
		func_272(0);
	}
}

void func_272(bool bParam0)
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

int func_273(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0xA7871E29B06DA901(uParam0->f_37);
	if (iVar15 != func_6() && func_808(iVar15, 0, 1))
	{
		Var2 = { func_63(iVar15) };
		iVar1 = func_276(uParam0, uParam0->f_37);
		if (func_275(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_274(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_274(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_274(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_274(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0x07D2F212D68B29BB(&Var2))
						{
							iVar16 = 1;
							func_274(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_274(uParam0, iVar0, 0);
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

void func_274(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_275(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

var func_276(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_277(var uParam0, int iParam1, int iParam2)
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

void func_278(var uParam0, var uParam1)
{
	if (!unk_0x2A3398C6222EB190(uParam0->f_33, 10))
	{
		unk_0xEBD23F68B1A617FC(*uParam1, "SET_HIGHLIGHT");
		unk_0x32F9127910F63DFA(uParam0->f_35);
		unk_0x1C703A54AB4B12F6();
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_33), 10);
	}
}

void func_279()
{
	if (Global_1574293 != 0)
	{
		Global_1574293 = 0;
	}
}

void func_280(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (iVar2 != func_6())
		{
			if (func_808(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_282(uParam0->f_38[iVar0 /*2*/], 0);
					func_281(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1593076[iVar0 /*647*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_281(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_282(int iParam0, bool bParam1)
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

void func_283(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_302() && iParam4 < func_301())
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
				func_300("");
			}
			else
			{
				unk_0x32F9127910F63DFA(iParam10);
			}
			func_300(sParam1);
			unk_0x32F9127910F63DFA(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_300("");
			}
			else
			{
				unk_0x32F9127910F63DFA(65);
			}
			unk_0x32F9127910F63DFA(-1);
			func_300("");
			if (uParam3->f_108 == 6)
			{
				func_300("");
			}
			else
			{
				func_300(&sParam5);
			}
			func_288(uParam3, iParam0);
			unk_0x58F4B3BE2B4DE520(sParam9);
			unk_0x58F4B3BE2B4DE520(sParam9);
			if (func_287(uParam3))
			{
				func_286("DPAD_FRIEND");
			}
			else if (func_285(uParam3))
			{
				func_286("DPAD_FRIEND");
			}
			else if (func_284(uParam3))
			{
				func_286("DPAD_CREW");
			}
			else
			{
				func_286("");
			}
			unk_0x1C703A54AB4B12F6();
		}
	}
}

bool func_284(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 6);
}

bool func_285(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 5);
}

void func_286(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

int func_287(var uParam0)
{
	if (func_285(uParam0) && func_284(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_288(var uParam0, int iParam1)
{
	if (func_299(iParam1))
	{
		unk_0x32F9127910F63DFA(121);
	}
	else if (func_293(iParam1))
	{
		unk_0x32F9127910F63DFA(122);
	}
	else
	{
		if (func_289())
		{
			uParam0->f_36 = 0;
		}
		unk_0xE8240315678FDE8E(uParam0->f_36);
	}
}

int func_289()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		if (func_291() || func_290())
		{
			return 1;
		}
	}
	return 0;
}

var func_290()
{
	return Global_2445582.f_12;
}

int func_291()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		return func_290();
	}
	return func_292(Global_1641087.f_96810);
}

int func_292(int iParam0)
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

int func_293(int iParam0)
{
	if ((func_808(iParam0, 0, 1) && func_297()) && func_294(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_294(int iParam0, bool bParam1)
{
	return func_295(iParam0, bParam1, 1);
}

int func_295(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_296(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_6() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_296(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_297()
{
	if (func_240(unk_0x3D35F9864E4640B1()) || func_298())
	{
		return 0;
	}
	return 1;
}

int func_298()
{
	switch (func_334(unk_0x3D35F9864E4640B1()))
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

int func_299(int iParam0)
{
	if (func_289())
	{
		if (func_808(iParam0, 0, 1))
		{
			return func_341(iParam0);
		}
	}
	if ((func_808(iParam0, 0, 1) && func_297()) && func_296(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_300(char* sParam0)
{
	unk_0x8E394933209D820A(sParam0);
}

int func_301()
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

int func_302()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574112)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_303(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_302() && iParam3 < func_301())
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
					func_300("");
				}
				else
				{
					unk_0x32F9127910F63DFA(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					func_286(sParam16);
				}
				else
				{
					func_300(&(uParam2->f_1));
				}
				unk_0x32F9127910F63DFA(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_300("");
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
				if (func_333())
				{
					func_300("");
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
						func_286(&(uParam2->f_104));
					}
					else
					{
						func_300("");
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
					func_300("");
				}
				if (uParam2->f_108 == 6)
				{
					func_300("");
				}
				else
				{
					func_300(&sParam4);
				}
				func_288(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x0BD3CCFB6C6CFA91(sParam8))
				{
					func_300("");
					func_300("");
				}
				else
				{
					unk_0x58F4B3BE2B4DE520(sParam8);
					unk_0x58F4B3BE2B4DE520(sParam8);
				}
				if (func_287(uParam2))
				{
					func_286("DPAD_FRIEND");
				}
				else if (func_285(uParam2))
				{
					func_286("DPAD_FRIEND");
				}
				else if (func_284(uParam2))
				{
					func_286("DPAD_CREW");
				}
				else
				{
					func_286("");
				}
				unk_0x1C703A54AB4B12F6();
			}
		}
	}
}

int func_304(int iParam0)
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

bool func_305(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_341(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_6();
}

int func_306(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_240(iParam0)) && !func_239(iParam0))
	{
		iVar0 = func_310();
	}
	iVar1 = func_309(iParam0);
	if (!iVar1 == -1)
	{
		return func_307(iVar1);
	}
	return iVar0;
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_308(iParam0);
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

var func_308(int iParam0)
{
	return Global_2416331.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_309(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_305(iParam0, 1))
		{
			return Global_2416331.f_1947.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_310()
{
	return 21;
}

char* func_311(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_312(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_316(iParam3))
	{
		*fParam1 = (func_313(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_304(iParam3))
	{
		*fParam1 = (func_313(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_313(int iParam0, int iParam1)
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
				return func_315(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xE42DE35DC4399ED5())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_314(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_314(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_315(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_316(int iParam0)
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

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == -1)
	{
		func_318(iParam0, 1);
		return 0;
	}
	Global_1365860[iVar0 /*5*/].f_4 = 1;
	return Global_1365860[iVar0 /*5*/].f_2;
}

void func_318(int iParam0, bool bParam1)
{
	if (!func_808(iParam0, 0, 1))
	{
		return;
	}
	if (func_320(iParam0) != -1)
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
	if (func_319(iParam0))
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

int func_319(int iParam0)
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

int func_320(int iParam0)
{
	int iVar0;
	
	if (!func_808(iParam0, 0, 1))
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
			func_321(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_321(int iParam0)
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
	func_322(&(Global_1365860[iVar32 /*5*/]));
	Global_1366021 = (Global_1366021 - 1);
}

void func_322(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_6();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		uParam0->f_3 = unk_0x898811EA80D35DE2();
	}
}

struct<4> func_323(int iParam0)
{
	struct<4> Var0;
	
	if (func_808(iParam0, 0, 1))
	{
		Global_2488575 = { func_63(iParam0) };
		if (unk_0x9D3EA2635512FD6B())
		{
			if (func_275(Global_2488575))
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
		if (func_327(&Global_2488575))
		{
			Global_2488505 = { func_325(iParam0) };
			func_324(&Global_2488505, &Var0);
		}
	}
	return Var0;
}

void func_324(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

struct<35> func_325(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_326(iParam0))
	{
		return Global_1312885[unk_0x3D35F9864E4640B1() /*35*/];
	}
	Var0 = { func_63(iParam0) };
	unk_0x7838EB8661A32D68(&Var13, 35, &Var0);
	return Var13;
}

int func_326(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		return 1;
	}
	return 0;
}

int func_327(var uParam0)
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

int func_328(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_197(iParam0) || func_331(iParam0)) || func_196(iParam0))
		{
			return 0;
		}
	}
	if (!func_330(iParam0))
	{
		return 0;
	}
	if ((!func_329(iParam0) && Global_2422142[iParam0 /*399*/].f_245 == -1) && !func_342(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_329(int iParam0)
{
	if (func_808(iParam0, 0, 1))
	{
		if (func_808(unk_0x3D35F9864E4640B1(), 0, 1))
		{
			if (unk_0x09C68D317F1B5143(iParam0, unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_330(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_140, 22);
}

int func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 10) || unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 9));
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (func_16(iParam0, 0))
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

int func_333()
{
	switch (func_334(unk_0x3D35F9864E4640B1()))
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
	switch (func_185(unk_0x3D35F9864E4640B1()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_239(unk_0x3D35F9864E4640B1()))
	{
		switch (func_334(unk_0x3D35F9864E4640B1()))
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

int func_334(int iParam0)
{
	if (func_234(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

int func_335(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 && func_336(Global_1623799[iParam0 /*488*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1)
	{
		if (func_336(Global_1623799[iParam0 /*488*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)
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
	return func_337(iParam0, 0);
	return 0;
}

int func_337(int iParam0, int iParam1)
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

void func_338(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_808(unk_0xA7871E29B06DA901(iVar0), 0, 1))
		{
			iVar1 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_16(iVar1, 0))
			{
				if ((unk_0x09C68D317F1B5143(iVar1, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar1 /*399*/].f_245 != -1) || func_342(iVar1))
				{
					if (func_339(iVar1, iParam1, 0))
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

int func_339(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_6())
	{
		if (!bParam2)
		{
			if (func_340(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			return iParam1 == Global_1623799[iParam0 /*488*/].f_11;
		}
	}
	return 0;
}

int func_340(int iParam0, int iParam1)
{
	if (iParam1 != func_6())
	{
		if (iParam0 != func_6())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
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

int func_341(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_342(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189 != 0;
}

void func_343(var uParam0)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x32F9127910F63DFA(0);
		unk_0x1C703A54AB4B12F6();
	}
}

void func_344(bool bParam0)
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

void func_345()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
	{
		if (func_347())
		{
			func_346();
		}
	}
}

void func_346()
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

bool func_347()
{
	return Global_2434915.f_2484[0 /*76*/].f_1 != 0;
}

int func_348()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0) && func_347())
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1) && func_347())
	{
		return 1;
	}
	return 0;
}

int func_349()
{
	if (func_347())
	{
		if (func_350(Global_2434915.f_2484[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0)
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

int func_351()
{
	if (func_347())
	{
		if (func_352(Global_2434915.f_2484[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_352(int iParam0)
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

void func_353(int iParam0)
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

int func_354(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_398(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_397();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_396())
		{
			if (func_395() > 0 && Global_1574112)
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
		if (!func_384())
		{
			func_383(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
	{
		func_383(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_395() == 1)
		{
			func_382(bVar6, uParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_383(uParam0, uParam2, 0);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x068C69D0643C4B95())
		{
			unk_0x390920286F8D4571();
		}
		unk_0xBD1C47D856010F09(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_395() == 0 && !bParam5))
		{
			func_383(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_381();
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
					func_381();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xC8E49AC936A8E11E();
					}
					unk_0xBD1C47D856010F09(18);
				}
				unk_0x4288569892059474(fVar7);
				if (func_382(bVar6, uParam0, 0))
				{
					func_343(uParam0);
					uVar4 = func_379(iParam1, &(Global_1641087.f_96817), bParam4);
					Var0 = { func_377(iParam1) };
					if (bParam4)
					{
						func_374(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_369(uParam0, func_371(uParam2), func_370(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_360(uParam0, func_362(uParam2), func_361(), -1);
					}
					else if (func_289())
					{
						uParam2->f_34 = Global_1574111;
						func_374(uParam0, uVar4, &Var0, 1, -1, Global_1574111, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574111;
						func_374(uParam0, uVar4, "", 0, -1, Global_1574111, 1);
					}
					else
					{
						iVar8 = func_355(iParam1);
						func_374(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
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

int func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_359())
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
			if (func_358(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 20;
			}
			if (func_357(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_356(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_356(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 4;
}

bool func_357(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

bool func_358(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_359()
{
	return Global_1641087.f_1 == 0;
}

void func_360(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(sParam2))
		{
			func_286(sParam1);
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_286("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_361()
{
	switch (func_334(unk_0x3D35F9864E4640B1()))
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

char* func_362(var uParam0)
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
	switch (func_334(unk_0x3D35F9864E4640B1()))
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
			if (func_365())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_364(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_364(1))
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
			if (func_363(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_363(int iParam0)
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

bool func_364(bool bParam0)
{
	return func_294(unk_0x3D35F9864E4640B1(), bParam0);
}

bool func_365()
{
	return (func_368() && func_366(func_367()));
}

int func_366(int iParam0)
{
	return func_296(iParam0, 1);
}

int func_367()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34;
}

bool func_368()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148;
}

void func_369(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(uParam2))
		{
			func_286(uParam1);
		}
		else if (func_185(unk_0x3D35F9864E4640B1()) == 133)
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT_C");
			unk_0x7C8A7ECFBAD2C8C4(uParam1);
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
		func_286("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_370(var uParam0)
{
	int iVar0;
	
	iVar0 = func_185(unk_0x3D35F9864E4640B1());
	if (func_402())
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
			switch (func_184())
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

char* func_371(var uParam0)
{
	int iVar0;
	
	iVar0 = func_185(unk_0x3D35F9864E4640B1());
	if (func_402())
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
			if (func_373() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_373() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_184())
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
			if (func_372() == 1)
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

int func_372()
{
	return Global_2501777.f_4791;
}

int func_373()
{
	if (func_185(unk_0x3D35F9864E4640B1()) == 132)
	{
		return Global_2501777.f_4786;
	}
	return -1;
}

void func_374(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_300(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x9BC6C9E77AAC792E(uParam1);
			unk_0x96577CAA1D1E72DB(iParam5);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			func_286(sParam1);
		}
		if (func_396() && iParam6)
		{
			if (func_376())
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
			func_286(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (func_375(unk_0x3D35F9864E4640B1()))
			{
				unk_0x32F9127910F63DFA(166);
			}
		}
		unk_0x1C703A54AB4B12F6();
	}
}

int func_375(int iParam0)
{
	if (func_358(iParam0) || func_357(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_376()
{
	return Global_1574112;
}

struct<4> func_377(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_378(unk_0x3D35F9864E4640B1()) || func_356(unk_0x3D35F9864E4640B1()))
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
	if (func_289() && unk_0xF4F91CD09D59F42E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1641087.f_32, 16);
	}
	return Var0;
}

bool func_378(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 5;
}

char* func_379(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_289() || unk_0x0BD3CCFB6C6CFA91(uParam1)))
	{
		uVar0 = func_380();
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

char* func_380()
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

void func_381()
{
	Global_36716 = 1;
}

bool func_382(bool bParam0, var uParam1, bool bParam2)
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

void func_383(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD804ACF2A7171150(&(uParam1->f_33), 7);
	Global_1574110 = 0;
	func_279();
	Global_1574109 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_101(&(uParam1->f_19));
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

int func_384()
{
	if (func_394())
	{
		return 0;
	}
	if (func_241())
	{
		return 0;
	}
	if (!func_392())
	{
		return 0;
	}
	if (!func_216())
	{
		return 0;
	}
	if (func_391(8, -1))
	{
		return 0;
	}
	if (func_395() == 2)
	{
		return 0;
	}
	if (Global_2501777.f_4500)
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	else if (!func_245(unk_0x3D35F9864E4640B1(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_390(1) || func_388(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (func_386(unk_0x3D35F9864E4640B1()))
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
	if (func_385(0))
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

bool func_385(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_29, iParam0);
}

int func_386(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_387())
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

bool func_387()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_388(bool bParam0)
{
	if (unk_0x220490B94EE0AB33())
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (func_389(unk_0x0031992CA618A445()))
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

int func_389(int iParam0)
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

bool func_390(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_391(int iParam0, int iParam1)
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

int func_392()
{
	if (func_393())
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

bool func_393()
{
	return Global_1312438;
}

bool func_394()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_395()
{
	return Global_1354565.f_68;
}

int func_396()
{
	if (Global_1574111 > 16)
	{
		return 1;
	}
	return 0;
}

float func_397()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFBBE93DE05521B5C()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_398(int iParam0)
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

int func_399()
{
	if (func_404())
	{
		return 1;
	}
	if (func_196(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_402())
	{
		return 1;
	}
	if (func_240(unk_0x3D35F9864E4640B1()))
	{
		switch (func_185(unk_0x3D35F9864E4640B1()))
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
				if (!func_400(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_400(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_400(unk_0x3D35F9864E4640B1()))
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

bool func_400(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 4);
}

int func_401(int iParam0)
{
	if ((iParam0 == 26 && func_240(unk_0x3D35F9864E4640B1())) && !func_239(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_234(unk_0x3D35F9864E4640B1(), 0) && func_239(unk_0x3D35F9864E4640B1()))
		{
			return 1;
		}
		if (func_223(unk_0x3D35F9864E4640B1()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_402()
{
	return Global_1592949;
}

struct<4> func_403()
{
	struct<4> Var0;
	
	switch (Local_122.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_404()
{
	if (func_405(unk_0x3D35F9864E4640B1()))
	{
		return Global_1316427;
	}
	return 0;
}

int func_405(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_16(iParam0, 0))
		{
			return unk_0xD629F5D6E3CE15E2(iParam0);
		}
	}
	return 0;
}

void func_406()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	switch (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17)
	{
		case 0:
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 == 0)
			{
				if (Local_122.f_241 == 0)
				{
					func_715();
				}
			}
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 22))
			{
				if (Local_122.f_27 == joaat("rhino") && Local_122.f_29 == 2)
				{
					func_684(Local_122.f_30[0 /*3*/]);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 22);
				}
				else if (!func_66(Local_122.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_684(Local_122.f_30[0 /*3*/]);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 22);
				}
			}
			func_683();
			func_677();
			if (Local_122.f_241 == 0)
			{
				func_674(1);
			}
			func_673(0);
			if (Local_122.f_241 == 0)
			{
				if (!Local_122.f_27 == joaat("hydra") && !Local_122.f_27 == joaat("rhino"))
				{
					func_191();
				}
				else if (func_710())
				{
					func_191();
				}
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
				{
					if (!unk_0x2A3398C6222EB190(iLocal_1334, 1))
					{
						func_672(129);
						func_650(1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 1);
						unk_0xE8AFE63721D00A2E(0);
					}
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 6))
					{
						if (Local_122.f_28 > 1 || (Local_122.f_28 == 1 && func_107() > 1))
						{
							if (unk_0x2A3398C6222EB190(Local_122.f_3, 4))
							{
								Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 = 0;
								unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0x2A3398C6222EB190(iLocal_1334, 1))
				{
					unk_0xD804ACF2A7171150(&iLocal_1334, 1);
					func_649(1);
					func_648();
					func_650(0);
				}
			}
			if (Local_122.f_241 == 1)
			{
				func_647(&iVar4, &uVar5);
				iLocal_3443 = iVar4;
				func_646(0);
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
				{
					if (!func_645())
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 19);
					}
					if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
					{
						func_9();
					}
					unk_0xE8AFE63721D00A2E(0);
					if ((func_644("UW_MINV") || func_644("UW_TIMELA")) || func_644("UW_TIMEL"))
					{
						unk_0x8C361F37C04084F4(1);
					}
					func_187();
					func_634(129, 0f, 0f, 1, 1, 1, 0);
					func_631(1);
					func_630();
					unk_0x15007EAE63C7ECCF(0.1f);
					iLocal_1343 = unk_0x58288C08A90CC7D0();
					unk_0x438B2E6B2BAD6A0D(0);
					func_629(1);
					func_628(1);
					if (Local_122.f_27 != joaat("rhino"))
					{
						func_607(1);
					}
					iLocal_1545 = unk_0x834C6A3950A9090B(unk_0x0031992CA618A445());
					unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_1543);
					unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 1);
					unk_0x1E420F926A7BC4D2("MP_MC_START");
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 184, 1);
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 151, 0);
					func_606(0);
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 = iLocal_3443;
					if (!func_710())
					{
						func_605(63, "UW_TITLE", "UW_DESC", func_310(), -1, func_310());
					}
					else if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
					{
						func_605(63, "UW_TITLEC", "UW_DESCC", func_310(), -1, func_310());
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_604(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_310(), func_310());
					}
					Local_739.f_9 = unk_0x6239D1A379D387A4();
					func_606(0);
					func_602(0);
					func_20(&uLocal_3481, 0, 0);
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 1;
				}
				else
				{
					func_187();
					if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
					{
						func_9();
					}
					if (func_599("UW_HELP1", func_601(), func_600(1)) || func_599("UW_HELP1C", func_601(), func_600(1)))
					{
						unk_0x8C361F37C04084F4(1);
					}
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
					func_606(0);
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 == 0)
					{
					}
					else if (!func_598())
					{
					}
				}
			}
			else if (Local_122.f_241 == 3)
			{
				func_606(0);
				if (func_599("UW_HELP1", func_601(), func_600(1)) || func_599("UW_HELP1C", func_601(), func_600(1)))
				{
					unk_0x8C361F37C04084F4(1);
				}
				if (!func_597())
				{
				}
				if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
				{
					func_9();
				}
				func_187();
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 3;
			}
			else if (Local_122.f_241 > 3)
			{
				if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
				{
					func_9();
				}
				func_606(0);
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
				{
					func_596();
					func_595();
					if (func_117())
					{
						func_630();
					}
				}
				if (func_710())
				{
					if (func_589(2, 0, 1, 0, 0))
					{
						if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
						{
							func_9();
						}
						func_606(0);
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
					}
				}
				else if (Local_122.f_27 == joaat("valkyrie"))
				{
					if (func_589(2, 0, 1, 0, 0))
					{
						if (func_264("UW_ABTSC") || func_264("UW_ABTS"))
						{
							func_9();
						}
						func_606(0);
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_160(1);
			func_677();
			func_524();
			func_164();
			func_522();
			func_510();
			func_265(0);
			func_506();
			func_503();
			func_596();
			func_595();
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 26))
			{
				if (!func_502(55))
				{
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
					{
						if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 10))
						{
							if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 == -1)
							{
								if (!func_710())
								{
									if (!func_264("UW_ATTK"))
									{
										func_258("UW_ATTK", 0);
									}
								}
								else if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
								{
									if (!func_264("UW_ATTK"))
									{
										func_258("UW_ATTK", 0);
									}
								}
								else if (!func_264("UW_ATTK"))
								{
									func_647(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_258("UW_ATTK", 0);
								}
							}
							else if (func_264("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_501();
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
			{
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 == -1)
				{
					func_630();
				}
			}
			if (!func_808(unk_0x3D35F9864E4640B1(), 1, 1))
			{
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
				func_9();
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 21);
			}
			else if (func_177())
			{
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 1)
			{
				if (!func_500())
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 23);
					func_9();
					if (iLocal_3443 > -1)
					{
						if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iLocal_3443]))
						{
							func_25(&(Local_122.f_7[iLocal_3443]));
						}
					}
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
				}
			}
			if (Local_122.f_241 == 3)
			{
				func_649(1);
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 3;
			}
			else if (Local_122.f_241 > 3)
			{
				func_649(1);
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
			}
			else if (func_710())
			{
				if (func_589(2, 0, 1, 0, 0))
				{
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_122.f_241 == 3)
			{
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 3;
			}
			else if (Local_122.f_241 > 3)
			{
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
			}
			func_439();
			if (func_597())
			{
				if (func_185(unk_0x3D35F9864E4640B1()) == 129)
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0x90EEDEFFBABEF36F())
					{
						unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
						if (unk_0x2A3398C6222EB190(iLocal_1333, 22))
						{
							func_438();
							unk_0xD804ACF2A7171150(&iLocal_1333, 22);
						}
						func_648();
						func_435();
						func_433(0);
						func_431(0);
						unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 184, 0);
						unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 151, 1);
						func_650(0);
						func_649(1);
					}
					func_430();
				}
			}
			else if (!unk_0x2A3398C6222EB190(iLocal_1334, 8))
			{
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 8);
			}
			if (!func_195())
			{
				func_429();
				func_522();
				func_160(0);
				func_510();
				func_265(1);
				func_506();
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_428();
			}
			func_423();
			func_422();
			func_524();
			if (!unk_0x2A3398C6222EB190(iLocal_1334, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar6]))
					{
						if (!func_31(Local_122.f_48[iVar6]))
						{
							unk_0xF3D2FD7057C04CD8(unk_0xECB7D3275586261E(Local_122.f_48[iVar6]), unk_0x3D35F9864E4640B1(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_80[iVar6]))
					{
						if (!func_31(Local_122.f_80[iVar6]))
						{
							unk_0xF3D2FD7057C04CD8(unk_0xECB7D3275586261E(Local_122.f_80[iVar6]), unk_0x3D35F9864E4640B1(), 0);
						}
					}
					iVar6++;
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 7);
			}
			else if (Local_122.f_247 != iLocal_3441)
			{
				iLocal_3441 = Local_122.f_247;
				unk_0xD804ACF2A7171150(&iLocal_1334, 7);
			}
			if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
			{
				unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 11);
			}
			if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 10))
			{
				unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 10);
			}
			if (unk_0x834C6A3950A9090B(unk_0x0031992CA618A445()) == iLocal_1543)
			{
				unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_1545);
			}
			break;
		
		case 3:
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 31))
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_3, 12))
				{
					func_187();
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 31);
				}
			}
			func_501();
			func_417();
			if (!func_195())
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_3, 14) && !unk_0x2A3398C6222EB190(Local_122.f_3, 12))
				{
					func_265(1);
				}
				func_510();
				func_522();
				func_506();
				func_408();
			}
			func_439();
			func_422();
			func_524();
			if (Local_122.f_241 > 3)
			{
				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_756();
			break;
	}
	func_407();
}

void func_407()
{
	int iVar0;
	
	if (iLocal_3504 != Local_122.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_616, iVar0))
			{
				if (!unk_0x2A3398C6222EB190(iLocal_3504, iVar0))
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
					{
						if (unk_0xA02DD6B5C8C02298(Local_122.f_7[iVar0]))
						{
							unk_0xFABEFEE17018AE2A(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 2);
							func_25(&(Local_122.f_7[iVar0]));
							unk_0xCD7E92DE2BFA0B0D(&iLocal_3504, iVar0);
						}
					}
					else
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_3504, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_408()
{
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 14))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1334, 5))
		{
			if (func_411(0, 1, 1, 1))
			{
				if (func_710())
				{
					func_410("UW_TFEWC", 30000);
				}
				else
				{
					func_410("UW_TFEW", 30000);
				}
				func_409(1);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 5);
			}
		}
	}
}

void func_409(int iParam0)
{
	unk_0x55281B6E993CE19E(3, 21, 200, 0, 0);
	if (iParam0 && !func_347())
	{
		unk_0x18F1BFAF88AC511B(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_410(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam1);
}

int func_411(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x068C69D0643C4B95())
	{
		return 0;
	}
	if (func_416())
	{
		return 0;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	if (func_394())
	{
		return 0;
	}
	if (func_243())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_245(unk_0x3D35F9864E4640B1(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_415(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (func_414())
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
	if (func_413())
	{
		return 0;
	}
	if (func_412())
	{
		return 0;
	}
	if (func_177())
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

bool func_412()
{
	return Global_2445582.f_572;
}

bool func_413()
{
	return Global_2445582.f_724;
}

bool func_414()
{
	return Global_2434915.f_2792.f_578;
}

int func_415(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_416()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_417()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_264("UW_EXPL") && !func_264("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1333, (27 + iVar2)))
		{
			if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar2]))
			{
				if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, (27 + iVar2));
					uLocal_3444[iVar2] = unk_0x6307C3D1D866114A();
					unk_0x71CE8B25981385FD(uLocal_3444[iVar2], "Explosion_Countdown", unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x52FE0F2031364132(uLocal_3444[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_710())
	{
		if (unk_0x69DA17666D6E3F5A(Local_122.f_7[0]))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_319, 0))
			{
				if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 0))
				{
					if ((func_421() - func_121(&(Local_122.f_324), 0, 0)) >= 0)
					{
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0 || unk_0x2A3398C6222EB190(Local_122.f_3, 14))
						{
							if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_195())
								{
									func_420();
									func_166((func_421() - func_121(&(Local_122.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0 || unk_0x2A3398C6222EB190(Local_122.f_3, 14))
						{
							if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_195())
								{
									func_420();
									func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
						{
							func_649(1);
						}
						if (unk_0xA02DD6B5C8C02298(Local_122.f_7[0]))
						{
							unk_0xC20B73867395D06D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 0);
							unk_0x644BF74611C3769E(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), true);
							if (!unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]))))
							{
								unk_0x21E37FAB6C42ACCF(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 1, 0, -1);
								func_25(&(Local_122.f_7[0]));
							}
							else
							{
								unk_0x4FDBE36FF1E5DB69(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), 1, 0, 0);
								func_25(&(Local_122.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_187();
		if (!func_195())
		{
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 12))
			{
				if (func_104(Local_122.f_7[0]))
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0])))
						{
							if (!func_710())
							{
								if (!func_264("UW_EXPL"))
								{
									func_258("UW_EXPL", 0);
								}
							}
							else if (!func_264("UW_EXPLC"))
							{
								func_258("UW_EXPLC", 0);
							}
							unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 12);
						}
					}
				}
			}
			else if (func_264("UW_EXPL") || func_264("UW_EXPLC"))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar0]))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_319, iVar0))
				{
					if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0))
					{
						if ((func_421() - func_121(&(Local_122.f_324), 0, 0)) >= 0)
						{
							if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0 || unk_0x2A3398C6222EB190(Local_122.f_3, 14))
							{
								if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_195())
									{
										if (!bVar1)
										{
											func_420();
											func_166((func_421() - func_121(&(Local_122.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0 || unk_0x2A3398C6222EB190(Local_122.f_3, 14))
							{
								if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_195())
									{
										if (!bVar1)
										{
											func_420();
											func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
							{
								func_649(1);
							}
							if (func_418(Local_122.f_7[iVar0]))
							{
								if (unk_0xA02DD6B5C8C02298(Local_122.f_7[iVar0]))
								{
									unk_0xC20B73867395D06D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
									unk_0x644BF74611C3769E(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), true);
									if (!unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]))))
									{
										unk_0x21E37FAB6C42ACCF(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1, 0, -1);
										func_25(&(Local_122.f_7[iVar0]));
									}
									else
									{
										unk_0x4FDBE36FF1E5DB69(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 1, 0, 0);
										func_25(&(Local_122.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0x2A3398C6222EB190(iLocal_1333, 12))
				{
					if (func_104(Local_122.f_7[iVar0]))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0])))
							{
								if (!func_195())
								{
									if (!func_710())
									{
										if (!func_264("UW_EXPL"))
										{
											func_258("UW_EXPL", 0);
										}
									}
									else if (!func_264("UW_EXPLC"))
									{
										func_258("UW_EXPLC", 0);
									}
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 12);
								}
							}
						}
					}
				}
				else if (func_264("UW_EXPL") || func_264("UW_EXPLC"))
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
						{
							func_9();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_418(var uParam0)
{
	if (unk_0x9855654AB6D34651(uParam0))
	{
		return 1;
	}
	if (func_419(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_419(var uParam0)
{
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return 0;
	}
	if (!unk_0xAA55DF0CB38F413B(uParam0))
	{
		return 0;
	}
	if (func_76(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_420()
{
	Global_1356070.f_1089 = 1;
}

int func_421()
{
	if (func_710())
	{
		return Global_262145.f_10571;
	}
	return Global_262145.f_10292;
}

void func_422()
{
	if (!unk_0x2A3398C6222EB190(iLocal_1334, 4))
	{
		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					func_649(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 4);
				}
			}
		}
	}
}

void func_423()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xDF6AF3C6DAF25A51(iLocal_1342);
	if (unk_0xA3C5F17FDDF2701D(iVar0))
	{
		iVar1 = unk_0x3F3ED1FF7CF1C641(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if (iLocal_1342 != unk_0x43B24C247F35B6BC())
			{
				if (!unk_0x2A3398C6222EB190(iLocal_3505, iLocal_1342))
				{
					if (!func_195())
					{
						if (Local_756[iLocal_1342 /*18*/].f_17 == 1)
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_3505, iLocal_1342);
							func_424(iVar1, 55, 1);
						}
					}
				}
				else if (func_195())
				{
					func_424(iVar1, 55, 0);
					unk_0xD804ACF2A7171150(&iLocal_3505, iLocal_1342);
				}
				else if (Local_756[iLocal_1342 /*18*/].f_17 > 1)
				{
					unk_0xD804ACF2A7171150(&iLocal_3505, iLocal_1342);
					func_424(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_1342++;
	if (iLocal_1342 >= unk_0x32C41AA379415932())
	{
		iLocal_1342 = 0;
	}
}

void func_424(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_426())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_425(iParam0))
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

int func_425(int iParam0)
{
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_609[iParam0]) || Global_2415153.f_609[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		return 1;
	}
	return 0;
}

int func_426()
{
	switch (func_427())
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

int func_427()
{
	return Global_25222;
}

void func_428()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xA761A0B6072010C8(Local_1350[iVar0 /*8*/]))
		{
			unk_0x0C4BDC77192798AE(&(Local_1350[iVar0 /*8*/]));
		}
		if (unk_0xA761A0B6072010C8(Local_1350[iVar0 /*8*/].f_1))
		{
			unk_0x0C4BDC77192798AE(&(Local_1350[iVar0 /*8*/].f_1));
		}
		if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar0]))
		{
			if (!func_31(Local_122.f_48[iVar0]))
			{
				if (unk_0x8E124932BCA8337D(unk_0xECB7D3275586261E(Local_122.f_48[iVar0])))
				{
					func_87(&(Local_1350[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_429()
{
	if (!unk_0x2A3398C6222EB190(iLocal_1333, 11))
	{
		if (!unk_0x2A3398C6222EB190(Local_122.f_3, 6))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 13))
			{
				if (func_185(unk_0x3D35F9864E4640B1()) != 129)
				{
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
					{
						if (!func_502(65) && !func_502(66))
						{
							if (unk_0x2A3398C6222EB190(iLocal_1334, 11))
							{
								if (!unk_0x2A3398C6222EB190(iLocal_1334, 12))
								{
									if (func_411(0, 1, 1, 1))
									{
										if (func_710())
										{
											func_410("UW_HELIMC", -1);
										}
										else
										{
											func_410("UW_HELIM", -1);
										}
										func_409(1);
										unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 12);
									}
								}
							}
							else if (!(Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra")))
							{
								if (func_411(0, 1, 1, 1))
								{
									if (!func_710())
									{
										func_410("UW_TAVAIL", 30000);
									}
									else
									{
										func_410("UW_TAVAILC", 30000);
									}
									func_409(1);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_430()
{
	float fVar0;
	
	if (iLocal_3500 != 0)
	{
		return;
	}
	if (func_22(&uLocal_3481))
	{
		iLocal_3500 = func_121(&uLocal_3481, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_3500);
	fVar0 = (fVar0 / 60000f);
	iLocal_3500 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_3500 >= 1)
	{
	}
	else
	{
		iLocal_3500 = 1;
	}
	if (iLocal_3500 > Global_262145.f_10631)
	{
		iLocal_3500 = Global_262145.f_10631;
	}
}

void func_431(bool bParam0)
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
		func_432(iVar0);
		iVar0++;
	}
}

void func_432(int iParam0)
{
	Global_92814.f_163[iParam0] = 1;
	Global_92814.f_162 = 1;
}

void func_433(int iParam0)
{
	if (func_434() && iParam0)
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

int func_434()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

void func_435()
{
	unk_0x438B2E6B2BAD6A0D(5);
	func_437();
	unk_0x15007EAE63C7ECCF(1f);
	unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 8);
	func_436();
}

void func_436()
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

void func_437()
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

void func_438()
{
	Global_2391048 = { 0f, 0f, 0f };
	Global_2391051 = 0;
}

void func_439()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (unk_0x2A3398C6222EB190(iLocal_1333, 13))
	{
		return;
	}
	bVar0 = unk_0x2A3398C6222EB190(Local_122.f_3, 6);
	bVar1 = unk_0x2A3398C6222EB190(iLocal_1333, 21);
	bVar2 = unk_0x2A3398C6222EB190(iLocal_1333, 23);
	bVar3 = Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_597())
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1334, 17))
		{
			if (func_808(unk_0x3D35F9864E4640B1(), 1, 1))
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || bVar2)
				{
					if (!func_195())
					{
						if (!func_710())
						{
							if (bVar0)
							{
								func_605(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
								{
									func_605(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (unk_0xAA55DF0CB38F413B(Local_122.f_7[0]) && func_104(Local_122.f_7[0]))
								{
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 11);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 16);
									func_605(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_605(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_605(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || unk_0x2A3398C6222EB190(Local_122.f_3, 16))
							{
								func_605(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_605(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
							{
								if (func_499())
								{
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 11);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 16);
									func_605(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_605(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_499())
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 11);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 16);
								func_605(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_605(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_499())
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 11);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 16);
								func_605(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_605(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || unk_0x2A3398C6222EB190(Local_122.f_3, 16))
						{
							func_605(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_498(1);
					Local_739.f_6 = (Local_739.f_6 + iVar4);
					if (!Global_262145.f_10698)
					{
						if (Local_739.f_6 > 0)
						{
							func_497(19, Local_739.f_6);
						}
					}
					Global_2457299 = iVar4;
					if (iVar4 > 0)
					{
						if (func_496())
						{
							func_487(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0xED431D10152559DB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_486(1);
					Local_739.f_7 = (Local_739.f_7 + iVar10);
					func_485();
					func_440(0, unk_0x0031992CA618A445(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_739.f_5 = 2;
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
					if (!unk_0x2A3398C6222EB190(iLocal_1334, 16))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 8);
					}
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 17);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 18);
				}
			}
		}
	}
}

int func_440(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_441(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_441(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_451(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x76B3C79DE564AFC6(iParam1))
		{
			if (unk_0x269F274F1955DE87(iParam1))
			{
				iVar1 = unk_0x4849801147A2BA1E(iParam1);
				func_447(unk_0x616B55A822407A37(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_442(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_442(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_445(iParam0, 1) };
	if (iParam0 == func_444(unk_0x0031992CA618A445()))
	{
		func_443(1);
	}
	func_447(Var0, iParam1, 0, sParam2, iParam3);
}

void func_443(int iParam0)
{
	Global_2434915.f_1667 = iParam0;
}

int func_444(int iParam0)
{
	return iParam0;
}

Vector3 func_445(int iParam0, bool bParam1)
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
	if (iParam0 == func_446(unk_0x0031992CA618A445()) && unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
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

int func_446(int iParam0)
{
	return iParam0;
}

void func_447(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2434915.f_1066[iVar1 /*30*/].f_4 = func_450(Global_2434915.f_1066[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434915.f_1066[iVar1 /*30*/].f_7 = unk_0x898811EA80D35DE2();
			Global_2434915.f_1066[iVar1 /*30*/].f_3 = iParam3;
			Global_2434915.f_1066[iVar1 /*30*/].f_8 = iParam4;
			Global_2434915.f_1066[iVar1 /*30*/].f_9 = func_449();
			Global_2434915.f_1066[iVar1 /*30*/].f_10 = func_448();
			StringCopy(&(Global_2434915.f_1066[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434915.f_1066[iVar1 /*30*/].f_26 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam6);
		}
	}
}

int func_448()
{
	if (Global_2434915.f_1667)
	{
		Global_2434915.f_1667 = 0;
		return 1;
	}
	Global_2434915.f_1667 = 0;
	return 0;
}

var func_449()
{
	var uVar0;
	
	uVar0 = Global_2434915.f_1669;
	Global_2434915.f_1669 = 1;
	return uVar0;
}

float func_450(struct<3> Param0, var uParam3, var uParam4)
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

var func_451(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_452(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_452(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_484(unk_0x3D35F9864E4640B1()) || func_483(unk_0x3D35F9864E4640B1()))
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
	if (func_169(uParam2))
	{
	}
	if (func_482())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_480(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_479(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_477(0, &iVar1);
					break;
				
				case 3:
					func_477(1, &iVar1);
					break;
				
				case 1:
					func_474(&iVar1);
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
			func_472(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_462((func_471(unk_0x3D35F9864E4640B1()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0EC11F1BDB694AB(iVar1, iParam8, iParam9);
				if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_2 != -1)
				{
					func_472(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_457(iVar1);
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
				func_453((func_455(unk_0x3D35F9864E4640B1()) + iVar1));
			}
			else
			{
				func_453((func_455(unk_0x3D35F9864E4640B1()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_453(int iParam0)
{
	if (func_482())
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_5 = iParam0;
		func_454(joaat("mpply_globalxp"), iParam0);
	}
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
	}
}

int func_455(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_808(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return func_456(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_5;
			}
		}
		else
		{
			return func_456(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_456(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_457(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_63(unk_0x3D35F9864E4640B1()) };
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(&Var0))
		{
			iVar13 = func_460(func_461(&Var0));
			if (iVar13 == 0)
			{
				func_459(&Global_1364944, iParam0);
				func_458(joaat("mpply_crew_local_xp_0"), Global_1364944);
			}
			else if (iVar13 == 1)
			{
				func_459(&Global_1364945, iParam0);
				func_458(joaat("mpply_crew_local_xp_1"), Global_1364945);
			}
			else if (iVar13 == 2)
			{
				func_459(&Global_1364946, iParam0);
				func_458(joaat("mpply_crew_local_xp_2"), Global_1364946);
			}
			else if (iVar13 == 3)
			{
				func_459(&Global_1364947, iParam0);
				func_458(joaat("mpply_crew_local_xp_3"), Global_1364947);
			}
			else if (iVar13 == 4)
			{
				func_459(&Global_1364948, iParam0);
				func_458(joaat("mpply_crew_local_xp_4"), Global_1364948);
			}
		}
	}
}

void func_458(int iParam0, int iParam1)
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

void func_459(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_460(int iParam0)
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

int func_461(var uParam0)
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

void func_462(int iParam0, int iParam1, int iParam2)
{
	if (func_482())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8806 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1365059[func_237(-1)])
				{
					unk_0xC0EC11F1BDB694AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1365059[func_237(-1)])
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
		if (func_470(unk_0x3D35F9864E4640B1()))
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_1 = iParam0;
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_6 = func_468(iParam0, 1);
		}
		func_467(636, iParam0, -1, 1);
		func_466(637, func_468(iParam0, 1), -1, 1, 0);
		Global_1365059[func_237(-1)] = iParam0;
		func_463(7, 0);
	}
}

void func_463(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_465(iParam0, iParam1))
	{
		iVar0 = func_464();
		Global_2455018[iVar0] = iParam0;
	}
}

int func_464()
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

int func_465(int iParam0, var uParam1)
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

void func_466(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_237(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

void func_467(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_237(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_237(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_237(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_237(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_237(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_237(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_237(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_237(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_237(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_237(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_237(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_237(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_237(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_237(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_237(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_237(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_237(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_237(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_237(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_237(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_237(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_237(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_237(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_237(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_237(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_237(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_237(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_237(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_237(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_237(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_237(iParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_237(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_237(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_468(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_469(iParam0, 0);
}

int func_469(int iParam0, int iParam1)
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

int func_470(int iParam0)
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

int func_471(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return Global_1365059[func_237(-1)];
			}
			else if (func_470(iParam0))
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1365059[func_237(-1)];
	}
	return 0;
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_256(iParam0, func_237(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_473(iParam0))
	{
		func_466(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_467(iParam0, iVar0, iParam2, 1);
	}
}

int func_473(int iParam0)
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

void func_474(int iParam0)
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
				if (unk_0xB5E2A107E006EC7A(iVar5) == iVar1 || func_476(unk_0xB5E2A107E006EC7A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3D35F9864E4640B1())
					{
						if (func_64(unk_0x3D35F9864E4640B1(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_475(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_475(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_475(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_476(int iParam0, int iParam1, int iParam2)
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

void func_477(bool bParam0, int iParam1)
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
				if (func_808(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3D35F9864E4640B1())
					{
						iVar1++;
						if (func_64(unk_0x3D35F9864E4640B1(), iVar4))
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
			if (func_808(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3D35F9864E4640B1())
				{
					if (func_478(unk_0x3D35F9864E4640B1(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_64(unk_0x3D35F9864E4640B1(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_475(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_475(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_478(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_58(iParam0), func_58(iParam1));
	return 0f;
}

int func_479(int iParam0)
{
	int iVar0;
	
	if (unk_0x1DB8DA6E03DC888B() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_475(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_480(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x0C58CE21DE9AD283(iParam0) > func_471(unk_0x3D35F9864E4640B1()))
		{
			iParam0 = -func_471(unk_0x3D35F9864E4640B1());
		}
	}
	if (func_481(8000, 0, 0) > 0)
	{
		if (func_481(8000, 0, 0) < (iParam0 + func_471(unk_0x3D35F9864E4640B1())))
		{
			iParam0 = (func_481(8000, 0, 0) - func_471(unk_0x3D35F9864E4640B1()));
		}
	}
	return iParam0;
}

int func_481(int iParam0, bool bParam1, int iParam2)
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

int func_482()
{
	return 1;
}

bool func_483(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_484(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

void func_485()
{
	Global_2456641 = 1;
}

int func_486(bool bParam0)
{
	int iVar0;
	
	if (unk_0x2A3398C6222EB190(iLocal_1334, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_710())
		{
			return Global_262145.f_10513;
		}
		else
		{
			return Global_262145.f_10452;
		}
	}
	func_430();
	if (func_710())
	{
		iVar0 = (Global_262145.f_10513 * iLocal_3500);
	}
	else
	{
		iVar0 = (Global_262145.f_10452 * iLocal_3500);
	}
	return iVar0;
}

void func_487(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_496())
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
				func_488(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_488(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_488(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_496())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_18()) || unk_0x00A30B9F92946C2D())
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
			*uParam0 = func_495(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_494(1, iParam4);
			Global_2603324 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_489(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_489(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_490(iParam0);
	}
}

void func_490(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_496())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_493(iParam0))
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
		func_491(&(Global_2602788[iParam0 /*80*/]));
	}
}

void func_491(var uParam0)
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
	func_492(&(uParam0->f_8.f_3));
	func_492(&(uParam0->f_8.f_16));
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

void func_492(var uParam0)
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

int func_493(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_494(int iParam0, var uParam1)
{
	Global_2457433 = uParam1;
	Global_2457432 = iParam0;
}

int func_495(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2602788[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_496())
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

int func_496()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

void func_497(int iParam0, int iParam1)
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

int func_498(bool bParam0)
{
	int iVar0;
	
	if (unk_0x2A3398C6222EB190(iLocal_1334, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_710())
		{
			return Global_262145.f_10512;
		}
		else
		{
			return Global_262145.f_10451;
		}
	}
	func_430();
	if (func_710())
	{
		iVar0 = (Global_262145.f_10512 * iLocal_3500);
	}
	else
	{
		iVar0 = (Global_262145.f_10451 * iLocal_3500);
	}
	return iVar0;
}

int func_499()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iLocal_3443]))
	{
		if (func_104(Local_122.f_7[iLocal_3443]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_122.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_122.f_256[iLocal_3443];
	if (!bVar0)
	{
		if (Local_122.f_594[0 /*4*/] != iLocal_3443)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_122.f_594[0 /*4*/] == iLocal_3443)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_122.f_256[Local_122.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_122.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_500()
{
	int iVar0;
	var uVar1;
	
	func_647(&iVar0, &uVar1);
	if (iLocal_3443 > -1)
	{
		if (func_104(Local_122.f_7[iLocal_3443]))
		{
			return 1;
		}
	}
	return 0;
}

void func_501()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_122.f_241 == 1)
	{
		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
		{
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_3479) || (func_22(&uLocal_3479) && func_19(&uLocal_3479, 5000, 0)))
				{
					if (Local_122.f_27 == joaat("savage") || Local_122.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3443;
						if (iVar1 > -1)
						{
							if (func_104(Local_122.f_7[iVar1]))
							{
								iVar0 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x8682D8A6269E52C9(iVar0))
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x972B5786EA49FE1A(iVar0))
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_122.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3443;
						if (iVar1 > -1)
						{
							if (func_104(Local_122.f_7[iVar1]))
							{
								iVar0 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x8682D8A6269E52C9(iVar0))
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x972B5786EA49FE1A(iVar0))
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
								}
								if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0x09139F011D2AE2D0(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!unk_0x8682D8A6269E52C9(iVar0))
											{
												if (unk_0x972B5786EA49FE1A(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_101(&uLocal_3479);
					func_20(&uLocal_3479, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x2A3398C6222EB190(Local_122.f_319, iVar2))
		{
			if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar2]))
			{
				if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 0))
				{
					if ((func_421() - func_121(&(Local_122.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
						{
							if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 0))
							{
								if (!func_195())
								{
									func_420();
									func_166((func_421() - func_121(&(Local_122.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
						{
							if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 0))
							{
								if (!func_195())
								{
									func_420();
									func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (unk_0xA02DD6B5C8C02298(Local_122.f_7[iVar2]))
						{
							unk_0xC20B73867395D06D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 0);
							unk_0x644BF74611C3769E(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), true);
							if (!unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]))))
							{
								unk_0x21E37FAB6C42ACCF(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 1, 0, -1);
								func_25(&(Local_122.f_7[iVar2]));
							}
							else
							{
								unk_0x4FDBE36FF1E5DB69(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar2]), 1, 0, 0);
								func_25(&(Local_122.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 == iVar2)
			{
				if (!unk_0x2A3398C6222EB190(iLocal_1334, 6))
				{
					if (func_411(0, 1, 1, 1))
					{
						if (func_710())
						{
							if (!unk_0x2A3398C6222EB190(iLocal_1334, 19))
							{
								func_410("UW_NOPILC", 30000);
							}
							else
							{
								func_410("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_410("UW_NOPIL", 30000);
						}
						func_409(1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 6);
					}
					else if (unk_0x2A3398C6222EB190(iLocal_1334, 19))
					{
						if (unk_0x068C69D0643C4B95())
						{
							unk_0x8C361F37C04084F4(1);
						}
					}
				}
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					iVar5 = Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10;
					if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar5]))
					{
						if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar5])))
						{
							if (!func_710())
							{
								if (!func_264("UW_EXPL"))
								{
									func_258("UW_EXPL", 0);
								}
							}
							else if (!func_264("UW_EXPLC"))
							{
								func_258("UW_EXPLC", 0);
							}
						}
						else if (func_264("UW_EXPL") || func_264("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_264("UW_EXPL") || func_264("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_502(int iParam0)
{
	return Global_2434915.f_2484[0 /*76*/].f_1 == iParam0;
}

void func_503()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
	{
		if (Local_122.f_27 == joaat("rhino"))
		{
			if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
			{
				if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_3475) || (func_22(&uLocal_3475) && func_19(&uLocal_3475, 5000, 0)))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (func_66(Local_3501, 0f, 0f, 0f, 0))
							{
								Local_3501 = { Local_122.f_30[0 /*3*/] };
							}
							fVar0 = func_505(unk_0x0031992CA618A445(), Local_3501, 1);
							if (fVar0 > 750f)
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 10);
							}
						}
						func_101(&uLocal_3475);
						func_20(&uLocal_3475, 0, 0);
					}
				}
				else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					if (!func_264("UW_OOB"))
					{
						func_258("UW_OOB", 0);
					}
					if (!func_22(&uLocal_3477))
					{
						uVar2 = unk_0x6307C3D1D866114A();
						unk_0x71CE8B25981385FD(uVar2, "Explosion_Countdown", unk_0xD7E2A160FD5DEEE1(Local_122.f_7[func_504()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x52FE0F2031364132(uVar2, "Time", 30f);
						func_20(&uLocal_3477, 0, 0);
					}
					if (func_22(&uLocal_3477))
					{
						if ((func_421() - func_121(&uLocal_3477, 0, 0)) >= 0)
						{
							func_420();
							func_166((func_421() - func_121(&uLocal_3477, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
						}
						else
						{
							func_420();
							func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
							func_9();
							unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 11);
						}
					}
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
					{
						fVar0 = func_505(unk_0x0031992CA618A445(), Local_122.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 10);
							func_101(&uLocal_3477);
							unk_0x03C4BA9F5A120DFE(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
	{
		func_649(1);
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			iVar1 = func_504();
			if (iVar1 > -1)
			{
				if (func_104(Local_122.f_7[iVar1]))
				{
					if (unk_0xA02DD6B5C8C02298(Local_122.f_7[iVar1]))
					{
						unk_0xC20B73867395D06D(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), 0);
						unk_0x644BF74611C3769E(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), true);
						unk_0x21E37FAB6C42ACCF(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1]), 1, 0, -1);
						func_25(&(Local_122.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_504()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar1]))
			{
				if (func_104(Local_122.f_7[iVar1]))
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_505(int iParam0, struct<3> Param1, int iParam4)
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

void func_506()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1333, 24))
	{
		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 1)
		{
			func_647(&iVar1, &uVar0);
			if (func_509(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_122.f_22[iVar1] != func_6())
					{
						fLocal_1344 = unk_0x797DD6C5E11FF492();
						unk_0x3B915141D0F115CA(-1f);
						func_508(1, iVar1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 24);
						func_507(1);
					}
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 24);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 25);
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1333, 25))
	{
		if (unk_0x2A3398C6222EB190(iLocal_1333, 24))
		{
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 > 1)
			{
				unk_0x3B915141D0F115CA(fLocal_1344);
				func_647(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_508(0, iVar1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 25);
					func_507(0);
				}
			}
		}
	}
}

void func_507(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 15);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 4);
	}
}

void func_508(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
			if (func_808(iVar1, 0, 1) && iVar1 != unk_0x3D35F9864E4640B1())
			{
				if (unk_0x2A3398C6222EB190(Local_756[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0xCEAB95BCEFCC75F0(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0xCEAB95BCEFCC75F0(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_509(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (!bVar0)
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
			{
				if (iVar1 != unk_0x43B24C247F35B6BC())
				{
					if (unk_0x2A3398C6222EB190(Local_756[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_510()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x12F270E0E3ED8AA1())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1333, 15))
	{
		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 2)
		{
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 == 0)
			{
				if (Local_122.f_22[0] != func_6())
				{
					if (func_411(0, 0, 1, 1))
					{
						if (!func_710())
						{
							if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
							{
								if (!func_710())
								{
									func_521("UW_START1P", unk_0x06D7899D9C1F422F(Local_122.f_22[0]), 1, 30000);
								}
								else
								{
									func_521("UW_START1PC", unk_0x06D7899D9C1F422F(Local_122.f_22[0]), 1, 30000);
								}
								func_409(1);
							}
							else if (unk_0x2A3398C6222EB190(Local_122.f_15, 0))
							{
								if (!unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 14))
								{
									if (!func_710())
									{
										func_410("UW_STARTM", 30000);
									}
									else
									{
										func_410("UW_STARTMC", 30000);
									}
									func_409(1);
								}
							}
							else
							{
								func_521("UW_START1P", unk_0x06D7899D9C1F422F(Local_122.f_22[0]), 1, 30000);
								func_409(1);
							}
						}
						else if (!unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 14))
						{
							if (!func_710())
							{
								func_410("UW_STARTM", 30000);
							}
							else
							{
								func_410("UW_STARTMC", 30000);
							}
							func_409(1);
						}
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 15);
					}
				}
			}
		}
	}
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 2)
	{
		if (Local_122.f_241 == 1)
		{
			if (Local_122.f_27 != joaat("hydra") && Local_122.f_27 != joaat("rhino"))
			{
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
				{
					if (iLocal_3443 >= 0)
					{
						if (!unk_0x2A3398C6222EB190(iLocal_1334, 10))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_1334, 9))
							{
								if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iLocal_3443]))
								{
									if (func_104(Local_122.f_7[iLocal_3443]))
									{
										unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 9);
									}
								}
							}
							else if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iLocal_3443]))
							{
								if (!func_104(Local_122.f_7[iLocal_3443]))
								{
									func_520("UW_TEAMV", 1);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_710())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_3, 6))
			{
				if (!unk_0x2A3398C6222EB190(iLocal_1333, (16 + iVar1)))
				{
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 >= 2)
					{
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 == 0)
						{
							if ((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2))
							{
								if (unk_0x69DA17666D6E3F5A(Local_122.f_7[0]))
								{
									if (func_104(Local_122.f_7[0]))
									{
										if (unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_519(iVar1, 0);
											if (iVar0 != func_6())
											{
												func_511("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_511(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
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
		unk_0x50B3C23D0902259F(func_517(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		}
		else
		{
			Global_2488575 = { func_63(iParam1) };
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
						Var1 = { func_516(&Var1) };
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
		func_512(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_512(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_515() || !unk_0xF4F91CD09D59F42E()) || !func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_513(iParam2);
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

int func_513(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_514(iVar0);
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

void func_514(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_515()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

struct<16> func_516(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_517(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_518(&cVar0);
}

var func_518(char[4] cParam0)
{
	return cParam0;
}

int func_519(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_6();
	iVar2 = (iParam0 - 1);
	if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iParam1]))
	{
		if (func_104(Local_122.f_7[iParam1]))
		{
			iVar1 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (unk_0x972B5786EA49FE1A(iVar1))
				{
					iVar0 = unk_0x46E9A8D99AF6D7BC(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_520(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_512(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_521(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam2);
	}
	unk_0x50B3C23D0902259F(sParam1);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam3);
}

void func_522()
{
	if (!unk_0x2A3398C6222EB190(iLocal_1333, 9))
	{
		if (Local_122.f_241 == 1)
		{
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
			{
				if (unk_0x1E420F926A7BC4D2("KILL_LIST_START_MUSIC"))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 9);
				}
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1333, 10))
	{
		if (unk_0x2A3398C6222EB190(iLocal_1333, 9))
		{
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 > 1)
			{
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
				{
					if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (unk_0x1E420F926A7BC4D2("MP_MC_FAIL"))
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 10);
						}
					}
					else if (unk_0x1E420F926A7BC4D2("KILL_LIST_STOP_MUSIC"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 10);
						func_523();
					}
				}
			}
		}
	}
}

void func_523()
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

void func_524()
{
	struct<2> Var0;
	struct<2> Var4;
	int iVar8;
	int iVar9[2];
	int iVar12;
	int iVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	var uVar32;
	var uVar33;
	var uVar37;
	var uVar38;
	var uVar42;
	var uVar43;
	var uVar47;
	var uVar48;
	bool bVar52;
	int iVar53;
	char* sVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar61;
	var uVar62;
	
	iVar20 = 1;
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
	{
		if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 8))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 26))
			{
				if ((((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2)) || (func_710() && unk_0x2A3398C6222EB190(Local_122.f_3, 6))) || (func_710() && unk_0x2A3398C6222EB190(Local_122.f_3, 15)))
				{
					if (!func_22(&uLocal_3496))
					{
						func_20(&uLocal_3496, 0, 0);
					}
					if (func_19(&uLocal_3496, 1000, 0))
					{
						if (func_264("UW_ATTK"))
						{
							func_9();
						}
						func_588();
						if (func_587())
						{
							iVar25 = func_498(1);
							if (iVar25 > 0)
							{
								Local_739.f_6 = (Local_739.f_6 + iVar25);
								if ((!Global_262145.f_10698 && !unk_0x2A3398C6222EB190(Local_122.f_3, 8)) || (!Global_262145.f_10699 && unk_0x2A3398C6222EB190(Local_122.f_3, 8)))
								{
									if (Local_739.f_6 > 0)
									{
										func_497(19, Local_739.f_6);
									}
								}
								Global_2457299 = iVar25;
								if (func_496())
								{
									func_487(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_486(1);
							func_485();
							Local_739.f_7 = (Local_739.f_7 + iVar23);
							func_440(0, unk_0x0031992CA618A445(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_739.f_5 = 2;
							func_605(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_710())
						{
							iVar25 = func_600(0);
							func_574(&iVar25, 1);
							iVar25 = (iVar25 + func_498(1));
							if (iVar25 > 0)
							{
								Local_739.f_6 = (Local_739.f_6 + iVar25);
								if (!Global_262145.f_10698)
								{
									if (Local_739.f_6 > 0)
									{
										func_497(19, Local_739.f_6);
									}
								}
								Global_2457299 = iVar25;
								if (func_496())
								{
									func_487(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_486(1);
							iVar23 = (iVar23 + func_573());
							Local_739.f_7 = (Local_739.f_7 + iVar23);
							func_485();
							func_440(0, unk_0x0031992CA618A445(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_739.f_5 = 1;
							func_604(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_572())
						{
							if (!func_571(1))
							{
								if (!func_264("UW_EXPL") && !func_264("UW_EXPLC"))
								{
									func_9();
								}
								iVar25 = func_600(0);
								func_574(&iVar25, 1);
								iVar25 = (iVar25 + func_498(1));
								Local_739.f_6 = (Local_739.f_6 + iVar25);
								if (!Global_262145.f_10699)
								{
									if (Local_739.f_6 > 0)
									{
										func_497(19, Local_739.f_6);
									}
								}
								Global_2457299 = iVar25;
								if (iVar25 > 0)
								{
									if (func_496())
									{
										func_487(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
								{
									func_604(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_604(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_739.f_5 = 1;
								iVar23 = func_573();
								iVar23 = (iVar23 + func_486(1));
								Local_739.f_7 = (Local_739.f_7 + iVar23);
								func_485();
								func_440(0, unk_0x0031992CA618A445(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_498(1);
								iVar23 = func_486(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_122.f_465[iVar22 /*4*/].f_1 == Local_122.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
										{
											if (Local_122.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_122.f_465[iVar22 /*4*/].f_2 != unk_0x3D35F9864E4640B1())
												{
													if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(Local_122.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = unk_0xA7871E29B06DA901(Local_122.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3443 > -1)
										{
											if (iLocal_3443 != Local_122.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_122.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_6())
									{
										bVar21 = true;
									}
									else
									{
										func_570(68, "UW_DRAWP", unk_0x06D7899D9C1F422F(iVar9[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar20 > 2)
								{
									bVar21 = true;
								}
								else if (iVar14[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									func_604(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar21)
								{
									if (!func_710())
									{
										func_605(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_605(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar26 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_600(0)) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar24 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_573()) / unk_0xBBDA792448DB5A89(iVar20)));
								func_574(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_739.f_6 = (Local_739.f_6 + iVar25);
								if (!Global_262145.f_10699)
								{
									if (Local_739.f_6 > 0)
									{
										func_497(19, Local_739.f_6);
									}
								}
								Global_2457299 = iVar25;
								if (iVar25 > 0)
								{
									if (func_496())
									{
										func_487(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_739.f_7 = (Local_739.f_7 + iVar23);
								func_485();
								func_440(0, unk_0x0031992CA618A445(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_568(1);
							iVar25 = func_498(1);
							iVar23 = func_486(1);
							Local_739.f_6 = (Local_739.f_6 + iVar25);
							if (!Global_262145.f_10699)
							{
								if (Local_739.f_6 > 0)
								{
									func_497(19, Local_739.f_6);
								}
							}
							Global_2457299 = iVar25;
							if (iVar25 > 0)
							{
								if (func_496())
								{
									func_487(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_739.f_7 = (Local_739.f_7 + iVar23);
							func_485();
							func_440(0, unk_0x0031992CA618A445(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_571(0))
							{
								iVar13 = Local_122.f_465[0 /*4*/];
								if (!func_264("UW_EXPL") && !func_264("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
								{
									iVar8 = unk_0xA7871E29B06DA901(Local_122.f_465[0 /*4*/].f_2);
									if (func_305(iVar8, 1))
									{
										iVar53 = func_309(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_307(iVar53);
											sVar54 = func_562(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_6())
									{
										if (!bVar52)
										{
											if (!func_710())
											{
												func_570(65, "UW_FWONP", unk_0x06D7899D9C1F422F(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_570(65, "UW_FWONPC", unk_0x06D7899D9C1F422F(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_710())
										{
											func_560(66, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_560(66, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_710())
									{
										func_604(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_604(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_264("UW_EXPL") && !func_264("UW_EXPLC"))
								{
									func_9();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_122.f_465[iVar22 /*4*/].f_1 == Local_122.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
										{
											if (Local_122.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(Local_122.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = unk_0xA7871E29B06DA901(Local_122.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3443 > -1)
										{
											if (iLocal_3443 != Local_122.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_122.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_122.f_27 == joaat("hydra") || Local_122.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_6() && unk_0x80BA8E3CC61A8625(iVar9[0]))
										{
											if (iVar9[1] != func_6() && unk_0x80BA8E3CC61A8625(iVar9[1]))
											{
												func_529(68, func_6(), func_6(), -1, "UW_DRAW2P", "UW_BIGF", func_310(), 15000, func_310(), unk_0x06D7899D9C1F422F(iVar9[0]), unk_0x06D7899D9C1F422F(iVar9[1]), 0);
											}
											else
											{
												bVar21 = true;
											}
										}
										else
										{
											bVar21 = true;
										}
									}
									else
									{
										bVar21 = true;
									}
								}
								else if (iVar20 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									StringCopy(&Var4, "UW_TM", 16);
									StringIntConCat(&Var4, iVar14[1] + 1, 16);
									func_604(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_605(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_628(0);
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
						{
							Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
						}
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 13);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 26);
					}
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_3, 6) || (!func_710() && unk_0x2A3398C6222EB190(Local_122.f_3, 15)))
				{
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_10 != -1)
					{
						func_605(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_604(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_628(0);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 26);
					iVar25 = func_498(1);
					Local_739.f_6 = (Local_739.f_6 + iVar25);
					if (!Global_262145.f_10698)
					{
						if (Local_739.f_6 > 0)
						{
							func_497(19, Local_739.f_6);
						}
					}
					Global_2457299 = iVar25;
					if (iVar25 > 0)
					{
						if (func_496())
						{
							func_487(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_486(1);
					Local_739.f_7 = (Local_739.f_7 + iVar23);
					func_485();
					func_440(0, unk_0x0031992CA618A445(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_739.f_5 = 2;
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
					{
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_3, 14))
				{
					func_628(0);
					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 8);
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 3)
					{
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 11))
				{
					func_604(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_628(0);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 26);
					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 8);
					iVar25 = func_498(1);
					Local_739.f_6 = (Local_739.f_6 + iVar25);
					if (!Global_262145.f_10698)
					{
						if (Local_739.f_6 > 0)
						{
							func_497(19, Local_739.f_6);
						}
					}
					Global_2457299 = iVar25;
					if (iVar25 > 0)
					{
						if (func_496())
						{
							func_487(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							unk_0xED431D10152559DB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_486(1);
					Local_739.f_7 = (Local_739.f_7 + iVar23);
					func_485();
					func_440(0, unk_0x0031992CA618A445(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_739.f_5 = 2;
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
					{
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_3, 12))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 8);
				}
			}
			if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 8))
			{
				if (unk_0x2A3398C6222EB190(iLocal_1333, 26))
				{
					if (func_264("UW_ATTK"))
					{
						func_9();
					}
					if (func_525(&uLocal_3434, 1))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 8);
					}
					if (!func_264("UW_EXPL") && !func_264("UW_EXPLC"))
					{
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 > -1)
						{
							if (unk_0xAA55DF0CB38F413B(Local_122.f_7[Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9]))
							{
								if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
								{
									if (func_104(Local_122.f_7[Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9]))
									{
										if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9])))
										{
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
	else if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 8))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 8);
	}
}

int func_525(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_347()) && !(func_234(unk_0x3D35F9864E4640B1(), 0) && (func_226(unk_0x3D35F9864E4640B1()) || func_224(unk_0x3D35F9864E4640B1())))) && !func_214(unk_0x3D35F9864E4640B1()))
	{
		func_528();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 25);
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4542), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_527(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
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
				func_526();
				func_527(uParam0, 2);
			}
			break;
		
		case 2:
			func_526();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_644("AMEV_LBD_HELP"))
				{
					unk_0x8C361F37C04084F4(1);
				}
				func_527(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 1);
				func_527(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 1);
			return 1;
	}
	return 0;
}

void func_526()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0))
	{
		if (((((!unk_0x90EEDEFFBABEF36F() && !unk_0x2A3398C6222EB190(Global_2501777.f_773, 2)) && func_808(unk_0x3D35F9864E4640B1(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x5114FCEE2A997B95())
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4542), 1);
			func_410("AMEV_LBD_HELP", -1);
			func_409(1);
			unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 0);
		}
	}
}

void func_527(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_528()
{
	Global_2456642 = 1;
}

int func_529(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_559(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_69 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_70 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_530(&Var0);
}

int func_530(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434915.f_2790)
		{
			return 0;
		}
	}
	func_540(uParam0, uParam0->f_16);
	func_539(uParam0);
	if (func_538(uParam0->f_1))
	{
		func_531();
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
				func_531();
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
				if (func_350(Global_2434915.f_2484[iVar0 /*76*/].f_1))
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

void func_531()
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
	func_532();
	if (bVar0)
	{
		Global_71053 = 0;
	}
}

void func_532()
{
	Global_2434915.f_2792 = 0;
	Global_2434915.f_2792.f_578 = 0;
	func_536(&(Global_2434915.f_2792.f_1));
	Global_2434915.f_2792.f_1.f_1 = 0;
	func_533(&(Global_2434915.f_2792.f_1));
}

void func_533(var uParam0)
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
				if (unk_0x5114FCEE2A997B95() && !func_535(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_534(0);
}

void func_534(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

bool func_535(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_536(var uParam0)
{
	func_537(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_537(var uParam0)
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

int func_538(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_539(var uParam0)
{
	if (func_352(uParam0->f_1))
	{
		uParam0->f_70 = func_310();
	}
}

void func_540(var uParam0, int iParam1)
{
	if (func_352(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_6())
	{
		return;
	}
	if (func_350(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_541(iParam1, -2, 0, 0);
		}
	}
}

int func_541(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_386(iParam0))
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
	if ((func_386(unk_0x3D35F9864E4640B1()) || (func_558() && func_557())) && !unk_0x2A3398C6222EB190(Global_2501777.f_4545, 31))
	{
		uVar1 = func_556();
		if (unk_0x76B3C79DE564AFC6(uVar1))
		{
			if (unk_0x972B5786EA49FE1A(iVar1))
			{
				if (unk_0x46E9A8D99AF6D7BC(iVar1) != -1)
				{
					if (func_808(unk_0x46E9A8D99AF6D7BC(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
						{
							if (Global_1641087.f_92322[iParam1] != -1)
							{
								return func_554(iParam1, iParam0, 0);
							}
							else
							{
								return func_548(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_548(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
			{
				if (Global_1641087.f_92322[iParam1] != -1)
				{
					return func_554(iParam1, iParam0, 0);
				}
				else
				{
					return func_542(0, -1, 0);
				}
			}
			else
			{
				return func_542(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
	{
		if (Global_1641087.f_92322[iParam1] != -1)
		{
			return func_554(iParam1, iParam0, 0);
		}
		else
		{
			return func_548(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
		}
	}
	return func_548(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
}

int func_542(bool bParam0, int iParam1, bool bParam2)
{
	return func_543(unk_0x3D35F9864E4640B1(), bParam0, iParam1, bParam2);
}

int func_543(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			if (func_476(iVar0, iParam2, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_547(1);
				}
				else
				{
					return func_547(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_4, 20))
			{
				return func_544(iVar0, iParam2, 1);
			}
			else
			{
				return func_544(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_547(1);
	}
	return func_547(0);
}

int func_544(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_546(iParam0, iParam1);
	if (func_545(Global_1641087.f_96810))
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

int func_545(int iParam0)
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

int func_546(int iParam0, int iParam1)
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
			if (!func_476(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_547(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_548(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_551())
			{
				iVar3 = func_309(iParam0);
				if (!iVar3 == -1)
				{
					return func_307(iVar3);
				}
			}
			if ((func_550(iParam1, iParam0, iVar0, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)) || ((func_476(unk_0xB5E2A107E006EC7A(iParam1), unk_0xB5E2A107E006EC7A(iParam0), 0) && unk_0x2A3398C6222EB190(Global_1641087.f_15, 23)) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)))
			{
				return func_547(1);
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 26))
			{
				return func_549(1);
			}
			else
			{
				return func_543(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574297 || Global_1574288) || Global_1593076[iParam0 /*647*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574297 == 1 && Global_1574307 == 0))
			{
				return func_547(1);
			}
			else
			{
				return func_543(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574292 && Global_1573831.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_309(iParam0);
	if (!iVar4 == -1)
	{
		return func_307(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_549(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_550(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_551()
{
	if ((func_290() || func_553()) || func_552())
	{
		return 1;
	}
	return 0;
}

var func_552()
{
	return Global_2445582.f_14;
}

var func_553()
{
	return Global_2445582.f_13;
}

int func_554(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_551())
	{
		iVar1 = func_309(iParam1);
		if (!iVar1 == -1)
		{
			return func_307(iVar1);
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
		iVar0 = func_543(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_21, 13))
	{
		iVar0 = func_555(iParam0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_555(int iParam0)
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

var func_556()
{
	return Global_2359302.f_2;
}

bool func_557()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 4);
}

bool func_558()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

void func_559(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_6();
	uParam1->f_17 = func_6();
	uParam1->f_18 = func_6();
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

int func_560(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_6();
	iVar1 = func_6();
	iVar2 = func_6();
	return func_561(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_561(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_559(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	return func_530(&Var0);
}

char* func_562(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		uVar0 = func_567(&(Global_1623799[iParam0 /*488*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1623799[iParam0 /*488*/].f_11.f_114 != Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_114)
	{
		uVar0 = func_565(iParam0, 0);
		return uVar0;
	}
	if (((func_225(iParam0, 28) || func_225(unk_0x3D35F9864E4640B1(), 28)) || func_564(iParam0)) && !func_563(iParam0))
	{
		return func_565(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_6())
	{
		if (iVar1 != unk_0x3D35F9864E4640B1())
		{
			if (!unk_0x9D3EA2635512FD6B() && !unk_0x2792DE3D57C3435A(0, -1, 1))
			{
				return func_565(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_6())
	{
		uVar0 = func_567(&(Global_1623799[iVar1 /*488*/].f_11.f_98));
		if (unk_0x0BD3CCFB6C6CFA91(uVar0))
		{
			return func_565(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_563(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

int func_564(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

char* func_565(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_294(iParam0, 1))
		{
			return func_566();
		}
	}
	return unk_0xC0D54565FC1032F4("GB_REST_ACC");
}

char* func_566()
{
	return unk_0xC0D54565FC1032F4("GB_REST_ACCM");
}

var func_567(var uParam0)
{
	return uParam0;
}

void func_568(bool bParam0)
{
	if (bParam0)
	{
		if (func_569(1))
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_1574410, 1);
		}
	}
	else if (func_569(2))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_1574410, 2);
	}
}

int func_569(int iParam0)
{
	var uVar0;
	
	uVar0 = func_256(2521, -1, 0);
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

int func_570(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_559(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam6;
	return func_530(&Var0);
}

int func_571(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_647(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_122.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_122.f_27 == joaat("rhino") || Local_122.f_27 == joaat("hydra"))
	{
		return Local_122.f_465[0 /*4*/].f_1 == Local_122.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_122.f_594[0 /*4*/].f_1 == Local_122.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_572()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_647(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_122.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_573()
{
	if (!func_710())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10448) * Global_262145.f_10637));
	}
	if ((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10509) * Global_262145.f_10639));
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10509) * Global_262145.f_10639));
	}
	return 0;
}

void func_574(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_586())
		{
			if (func_585(0))
			{
				if (!func_364(0))
				{
					if (unk_0x80BA8E3CC61A8625(func_584()))
					{
						if (func_583() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_583());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_581(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_580("GB_BCUT_TICK1", func_584(), iVar0, 0, 0, 1, 1);
						}
						func_579(20);
						func_575(func_584(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_575(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_808(iParam0, 0, 1))
	{
		Var0.f_0 = -1983770473;
		Var0.f_1 = unk_0x3D35F9864E4640B1();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_578(iParam0);
		func_577(&(Var0.f_6), &(Var0.f_7));
		unk_0xBD257D33BCFA529A(1, &Var0, 8, func_576(iParam0));
	}
}

var func_576(int iParam0)
{
	var uVar0;
	
	unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam0);
	return uVar0;
}

void func_577(var uParam0, var uParam1)
{
	*uParam0 = Global_1639417.f_9;
	*uParam1 = Global_1639417.f_10;
}

var func_578(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_430;
}

void func_579(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

int func_580(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0xDBB8FCB00B701798(func_541(iParam1, -2, 1, 0));
		unk_0x50B3C23D0902259F(func_517(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xDBB8FCB00B701798(iParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam2);
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		func_512(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_581(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_582(1);
	}
	else
	{
		iVar1 = func_582(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_582(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11579;
}

int func_583()
{
	return Global_262145.f_11578;
}

int func_584()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

bool func_585(bool bParam0)
{
	return func_305(unk_0x3D35F9864E4640B1(), bParam0);
}

bool func_586()
{
	return func_341(unk_0x3D35F9864E4640B1());
}

int func_587()
{
	int iVar0;
	
	if (!unk_0x2A3398C6222EB190(Local_122.f_3, 6) && !unk_0x2A3398C6222EB190(Local_122.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_122.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_588()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_73[iVar0]))
		{
			if (!func_104(Local_122.f_73[iVar0]))
			{
				func_25(&(Local_122.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar0]))
		{
			if (func_31(Local_122.f_48[iVar0]))
			{
				func_25(&(Local_122.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_589(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_234(unk_0x3D35F9864E4640B1(), 0) || func_335(unk_0x3D35F9864E4640B1(), 0))
	{
		if (func_226(unk_0x3D35F9864E4640B1()) || func_239(unk_0x3D35F9864E4640B1()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x5D59DC9563118DFD() < iParam0)
	{
		if (bParam2)
		{
			func_594(sParam3, sParam4, 1);
		}
		if (func_593(26, -1))
		{
			func_591(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1574385.f_18)))
	{
		if (!func_19(&(Global_1574385.f_18), 7500, 0))
		{
			return 0;
		}
		func_101(&(Global_1574385.f_18));
	}
	if (func_590())
	{
		if (bParam2)
		{
			func_594(sParam3, sParam4, 0);
		}
		if (func_593(26, -1))
		{
			func_591(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xEAFA0E77286423E5() < iParam0)
	{
		if (bParam2)
		{
			func_594(sParam3, sParam4, 1);
		}
		if (func_593(26, -1))
		{
			func_591(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_590()
{
	return unk_0x2A3398C6222EB190(Global_1574385.f_1, 0);
}

void func_591(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x6B75D9DC60122244(0, iParam1);
			break;
		
		default:
			uVar1 = func_592(iParam1);
			iVar0 = unk_0x03CCEFDDDC599303(uVar1);
			if (unk_0x2A3398C6222EB190(iVar0, iParam0))
			{
				unk_0xD804ACF2A7171150(&iVar0, iParam0);
				unk_0x6B75D9DC60122244(iVar0, iParam1);
			}
			break;
	}
}

int func_592(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
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

bool func_593(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	uVar0 = func_592(iParam1);
	uVar1 = unk_0x03CCEFDDDC599303(uVar0);
	return unk_0x2A3398C6222EB190(uVar1, iParam0);
}

void func_594(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x2A3398C6222EB190(Global_1574385.f_1, 2) && !func_197(unk_0x3D35F9864E4640B1())) && !func_196(unk_0x3D35F9864E4640B1()))
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
		func_605(66, sParam0, sParam1, 1, -1, 2);
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 2);
	}
}

void func_595()
{
	Global_2501777.f_1748.f_56 = 1;
}

void func_596()
{
	Global_2501777.f_1748.f_54 = 1;
}

bool func_597()
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_1700, 11);
}

int func_598()
{
	if (iLocal_3443 > -1)
	{
		if (func_104(Local_122.f_7[iLocal_3443]))
		{
			if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iLocal_3443])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_599(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x92C5C77953D80467(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	unk_0x96577CAA1D1E72DB(uParam2);
	return unk_0x602E6661A0F13A13(0);
}

int func_600(bool bParam0)
{
	if (!func_710())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10447) * Global_262145.f_10636));
	}
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10508) * Global_262145.f_10638));
	}
	if ((unk_0x2A3398C6222EB190(Local_122.f_3, 0) && unk_0x2A3398C6222EB190(Local_122.f_3, 1)) && unk_0x2A3398C6222EB190(Local_122.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10508) * Global_262145.f_10638));
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_10508) * Global_262145.f_10638));
	}
	return 0;
}

char* func_601()
{
	if (Local_122.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0xF9CDF5CA6A1D6756(Local_122.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_602(int iParam0)
{
	if (func_238())
	{
		if (iParam0 == 1)
		{
			if (Global_2501777.f_4352 == -1)
			{
				Global_2501777.f_4352 = 60000;
			}
			func_8(&(Global_2501777.f_4350), 0, 0);
			if (Global_2501777.f_4355 == -1)
			{
				Global_2501777.f_4355 = 10000;
			}
			func_8(&(Global_2501777.f_4353), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_649(1);
		}
		if ((!unk_0xF4F91CD09D59F42E() && !func_603()) && !func_244(unk_0x3D35F9864E4640B1()))
		{
			Global_979817 = 0;
		}
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_8 = 0;
	}
}

bool func_603()
{
	return Global_2445582.f_720;
}

int func_604(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
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
	func_559(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_69 = iParam8;
	Var0.f_70 = iParam9;
	return func_530(&Var0);
}

int func_605(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_559(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_530(&Var0);
}

void func_606(bool bParam0)
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

void func_607(bool bParam0)
{
	int iVar0;
	
	if (unk_0x2BCDCFC2AA7EC715(unk_0x0031992CA618A445(), 5) != 0)
	{
		unk_0x49544FB997F0AADE(unk_0x0031992CA618A445(), 177, 1);
		unk_0xF887A0BFE71249F9(unk_0x3D35F9864E4640B1(), func_256(582, -1, 0));
		if (func_627())
		{
			unk_0xA44D8996B2D8CC57(unk_0x3D35F9864E4640B1(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_626())
		{
			unk_0xA44D8996B2D8CC57(unk_0x3D35F9864E4640B1(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_623(3610, -1, -1))
		{
		}
		iVar0 = func_256(2037, -1, 0);
		unk_0xBC96A53C08BD160C(unk_0x3D35F9864E4640B1(), func_622(unk_0xD33F4BC17EB987E5(unk_0x3D35F9864E4640B1()), iVar0));
		if (func_585(0))
		{
			unk_0xF887A0BFE71249F9(unk_0x3D35F9864E4640B1(), func_256(582, -1, 0));
		}
		else
		{
			unk_0xF887A0BFE71249F9(unk_0x3D35F9864E4640B1(), func_621(Global_2509976));
		}
		func_620(unk_0x3D35F9864E4640B1(), iVar0);
		unk_0x061B24A5295C64B7(unk_0x3D35F9864E4640B1(), 5, func_613(unk_0x0031992CA618A445(), iVar0), func_612(unk_0x0031992CA618A445(), iVar0), 0);
		func_611(func_256(2037, -1, 0), 1);
		Global_2501777.f_276 = 1;
		func_608(unk_0x3D35F9864E4640B1(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		func_610();
		if (iParam2 == -1)
		{
			iParam2 = func_256(2037, -1, 0);
		}
		unk_0x061B24A5295C64B7(iParam0, 5, func_613(unk_0xD33F4BC17EB987E5(iParam0), iParam2), func_612(unk_0xD33F4BC17EB987E5(iParam0), iParam2), 0);
		unk_0xBC96A53C08BD160C(iParam0, func_622(unk_0xD33F4BC17EB987E5(iParam0), iParam2));
		unk_0xD5FF2158C8907CA9(unk_0xD33F4BC17EB987E5(iParam0), 5, func_613(unk_0xD33F4BC17EB987E5(iParam0), iParam2), func_612(unk_0xD33F4BC17EB987E5(iParam0), iParam2), func_622(unk_0xD33F4BC17EB987E5(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_256(582, -1, 0);
		}
		if (func_585(1) && func_609(iParam0))
		{
			unk_0xF887A0BFE71249F9(iParam0, func_621(Global_2509976));
		}
		else
		{
			unk_0xF887A0BFE71249F9(iParam0, iParam1);
		}
		func_620(iParam0, iParam2);
		unk_0x49544FB997F0AADE(unk_0xD33F4BC17EB987E5(iParam0), 177, 1);
	}
}

bool func_609(int iParam0)
{
	return func_225(iParam0, 10);
}

void func_610()
{
	Global_70761 = 0;
	Global_70762 = -1;
	Global_70763 = -1;
	Global_70764 = -1;
	Global_70765 = -1;
	Global_70766 = -1;
}

void func_611(int iParam0, int iParam1)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		func_610();
		func_466(2037, iParam0, -1, 1, 0);
		unk_0x061B24A5295C64B7(unk_0x3D35F9864E4640B1(), 5, func_613(unk_0x0031992CA618A445(), iParam0), func_612(unk_0x0031992CA618A445(), iParam0), 0);
		func_620(unk_0x3D35F9864E4640B1(), iParam0);
		unk_0xBC96A53C08BD160C(unk_0x3D35F9864E4640B1(), func_622(unk_0x0031992CA618A445(), iParam0));
		if ((iParam1 && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445())) && unk_0x2BCDCFC2AA7EC715(unk_0x0031992CA618A445(), 5) != 0)
		{
			func_608(unk_0x3D35F9864E4640B1(), -1, -1);
		}
	}
}

int func_612(int iParam0, int iParam1)
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_613(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x2BCDCFC2AA7EC715(iParam0, 9) != false;
	iVar1 = unk_0x6EBEC7F03B4E2589(iParam0, 8, unk_0x2BCDCFC2AA7EC715(iParam0, 8), unk_0xBE6AC2A79C0215BC(iParam0, 8));
	iVar2 = unk_0x6EBEC7F03B4E2589(iParam0, 11, unk_0x2BCDCFC2AA7EC715(iParam0, 11), unk_0xBE6AC2A79C0215BC(iParam0, 11));
	iVar3 = unk_0x6EBEC7F03B4E2589(iParam0, 4, unk_0x2BCDCFC2AA7EC715(iParam0, 4), unk_0xBE6AC2A79C0215BC(iParam0, 4));
	if ((((!bVar0 == Global_70761 || !iParam1 == Global_70762) || !iVar1 == Global_70763) || !iVar2 == Global_70764) || !iVar3 == Global_70765)
	{
		Global_70761 = bVar0;
		Global_70762 = iParam1;
		Global_70763 = iVar1;
		Global_70764 = iVar2;
		Global_70765 = iVar3;
		Global_70766 = func_614(iParam0, iParam1);
	}
	return Global_70766;
}

int func_614(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x2BCDCFC2AA7EC715(iParam0, 11);
	if (unk_0x2BCDCFC2AA7EC715(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0xE9559A12052415BE(iParam0);
	uVar3 = unk_0x6EBEC7F03B4E2589(iParam0, 8, unk_0x2BCDCFC2AA7EC715(iParam0, 8), unk_0xBE6AC2A79C0215BC(iParam0, 8));
	if (unk_0x698ED51C7EF0C52D(uVar3, joaat("OVER_JACKET"), 8))
	{
		return func_619(iParam0, iParam1);
	}
	iVar4 = 0;
	if (iParam1 > 61)
	{
		iVar4 = 50;
	}
	else if (iParam1 > 51)
	{
		iVar4 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (func_618(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar4);
		}
		else
		{
			return (2 + iVar4);
		}
	}
	if (iVar0 > 15)
	{
		uVar5 = unk_0x6EBEC7F03B4E2589(iParam0, 11, iVar0, unk_0xBE6AC2A79C0215BC(iParam0, 11));
		if (unk_0x698ED51C7EF0C52D(uVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar4);
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_619(iParam0, iParam1) + 15;
			}
			else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_619(iParam0, iParam1) + 15;
			}
			else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_619(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_617(uVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar4);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_616(uVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar4);
						break;
					
					default:
						iVar0 = func_616(uVar5);
						break;
					}
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_615(uVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_616(uVar5);
					break;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0x698ED51C7EF0C52D(uVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0x698ED51C7EF0C52D(uVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x698ED51C7EF0C52D(uVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_619(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0x698ED51C7EF0C52D(uVar5, -1086258388, 0) || unk_0x698ED51C7EF0C52D(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_619(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x698ED51C7EF0C52D(uVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return func_619(iParam0, iParam1);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return func_619(iParam0, iParam1);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1) + 15;
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1) + 15;
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_619(iParam0, iParam1) + 15;
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar4);
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar4);
			}
			else
			{
				return (48 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_619(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x698ED51C7EF0C52D(uVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if ((unk_0x698ED51C7EF0C52D(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x698ED51C7EF0C52D(uVar5, joaat("SILK_ROBE"), 0)) || unk_0x698ED51C7EF0C52D(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_616(uVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 9:
				return (2 + iVar4);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (4 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			}
	}
	return (1 + iVar4);
	return 0;
}

int func_615(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_616(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_617(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x698ED51C7EF0C52D(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_618(int iParam0)
{
	if (unk_0x698ED51C7EF0C52D(unk_0x6EBEC7F03B4E2589(iParam0, 4, unk_0x2BCDCFC2AA7EC715(iParam0, 4), unk_0xBE6AC2A79C0215BC(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_619(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_620(int iParam0, int iParam1)
{
	if (func_627())
	{
		if (iParam1 > 51)
		{
			unk_0x322D35CC35B40346(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else if (iParam1 > 46)
		{
			unk_0x322D35CC35B40346(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x322D35CC35B40346(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x322D35CC35B40346(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xBD0BC00D95F4DFE8(iParam0);
		}
	}
	else if (func_626())
	{
		if (iParam1 > 0)
		{
			unk_0x322D35CC35B40346(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xBD0BC00D95F4DFE8(iParam0);
		}
	}
}

int func_621(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_622(int iParam0, int iParam1)
{
	return 0;
}

int func_623(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_625(iParam0, iParam1);
	uVar2 = func_624(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_624(int iParam0)
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

int func_625(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
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

bool func_626()
{
	return unk_0x43456EBBDC27D696(joaat("mppilot"));
}

bool func_627()
{
	return unk_0x43456EBBDC27D696(joaat("mplts"));
}

void func_628(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2501777.f_1700, 11))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1700), 11);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2501777.f_1700, 11))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1700), 11);
	}
}

void func_629(bool bParam0)
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

void func_630()
{
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
}

void func_631(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (func_238())
		{
			func_602(0);
			func_633();
		}
		if (func_255(0))
		{
			iVar0 = func_256(2467, -1, 0);
			unk_0xD804ACF2A7171150(&iVar0, 0);
			func_633();
		}
		if (func_255(func_201(func_185(unk_0x3D35F9864E4640B1()))))
		{
			iVar0 = func_256(2467, -1, 0);
			unk_0xD804ACF2A7171150(&iVar0, func_201(func_185(unk_0x3D35F9864E4640B1())));
			func_633();
		}
		if (func_632())
		{
			func_633();
		}
		if (func_185(unk_0x3D35F9864E4640B1()) > -1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 7);
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 7);
	}
}

int func_632()
{
	if (Global_2434915.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_633()
{
	if (func_632())
	{
		Global_2434915.f_933.f_16 = 1;
	}
}

void func_634(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 1);
	}
	Global_2501777.f_4714 = -1;
	bVar0 = (func_234(unk_0x3D35F9864E4640B1(), 0) && func_226(unk_0x3D35F9864E4640B1()));
	if (bParam6)
	{
		func_643(21, 1);
	}
	else
	{
		func_642(iParam0, -1);
		if (func_197(unk_0x3D35F9864E4640B1()))
		{
			Global_1574385.f_3 = iParam0;
		}
		else
		{
			func_672(iParam0);
		}
		Global_1574385.f_4 = -1;
		if (func_197(unk_0x3D35F9864E4640B1()))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 5);
		}
		if ((func_238() && !func_233()) || func_198(unk_0x3D35F9864E4640B1(), 21))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 4);
		}
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 17);
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 20);
		if (func_641(iParam0))
		{
			func_640();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_639(fParam1);
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
		if (func_638(iParam0))
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
				func_433(1);
				if (func_569(0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 9);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_431(1);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 12);
		}
		if (bParam5)
		{
			func_637();
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_635(iParam0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 21);
			}
		}
	}
	Global_2488466 = 1;
}

int func_635(int iParam0)
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
	if (func_636())
	{
		return 1;
	}
	return 0;
}

int func_636()
{
	switch (func_184())
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

void func_637()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4705), 0);
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_227(unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_639(float fParam0)
{
	float fVar0;
	
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_426())
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

void func_640()
{
	Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_209 = 0;
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4518), 1);
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_642(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_255(0) || func_255(func_201(iVar0)))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 2);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 2);
		}
	}
}

void func_643(int iParam0, bool bParam1)
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

bool func_644(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

int func_645()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_122.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
	iVar1 = unk_0x09139F011D2AE2D0(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0x3251C2B06497863C(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!unk_0x8682D8A6269E52C9(iVar4))
			{
				if (unk_0x972B5786EA49FE1A(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_646(bool bParam0)
{
	var uVar0;
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (unk_0x3B077EBCBD1ABF1F(uVar0))
		{
			unk_0xC20B73867395D06D(uVar0, bParam0);
			unk_0x644BF74611C3769E(iVar0, !bParam0);
		}
	}
}

void func_647(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_122.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_648()
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	if (iVar0 != -1)
	{
		Global_1623799[iVar0 /*488*/] = -1;
	}
}

void func_649(bool bParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (!func_238())
		{
			if (func_808(unk_0x3D35F9864E4640B1(), 1, 0))
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
			if (func_808(unk_0x3D35F9864E4640B1(), 1, 1))
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

void func_650(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2457274 = func_185(unk_0x3D35F9864E4640B1());
		if (Global_2457274 == -1)
		{
			Global_2457274 = Global_1574385.f_4;
		}
		if (func_671(Global_2457274) == 0)
		{
			if (func_670(1) > 0)
			{
				func_669(26, -1);
			}
		}
		if (func_238())
		{
			func_602(0);
			func_633();
		}
		if (func_255(0))
		{
			iVar1 = func_256(2467, -1, 0);
			unk_0xD804ACF2A7171150(&iVar1, 0);
			func_633();
		}
		if (func_255(func_201(func_185(unk_0x3D35F9864E4640B1()))))
		{
			iVar1 = func_256(2467, -1, 0);
			unk_0xD804ACF2A7171150(&iVar1, func_201(func_185(unk_0x3D35F9864E4640B1())));
			func_633();
		}
		if (func_632())
		{
			func_633();
		}
		unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 0);
	}
	else
	{
		if ((!func_220() && !func_668()) && !func_667())
		{
			Global_2457274 = -1;
			func_591(26, -1);
		}
		else if (func_671(Global_2457274) == 0)
		{
			iVar0 = func_653(1);
			if (iVar0 > 0)
			{
				func_651(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_472(1929, 1, -1);
				func_651(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_593(26, -1))
		{
			Global_2457274 = -1;
			func_591(26, -1);
		}
		unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 0);
	}
}

void func_651(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_456(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_652(iParam0))
	{
		func_454(iParam0, iVar0);
	}
	else
	{
		func_458(iParam0, iVar0);
	}
}

int func_652(int iParam0)
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

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2456165 == 0)
	{
		return 0;
	}
	if (func_667())
	{
		if (unk_0xF4F91CD09D59F42E() || (func_666() || func_664()))
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
	if (func_663(Global_103467.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2455042)
	{
		iVar0 = 1;
	}
	if (func_662(512))
	{
		iVar0 = 1;
	}
	if (func_661(128))
	{
		iVar0 = 1;
	}
	if (Global_1315703 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_163())
	{
		iVar0 = 0;
	}
	if (Global_2455604)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_659())
		{
			if (Global_1641087.f_97449 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = 0;
	}
	if (func_658())
	{
		iVar0 = 0;
	}
	if ((Global_2455118 || Global_2455117) || Global_1315679)
	{
		if (func_664())
		{
			iVar0 = 0;
		}
	}
	Global_2455604 = 0;
	Global_2455117 = 0;
	Global_2455118 = 0;
	Global_1315679 = 0;
	Global_2455042 = 0;
	func_656(&(Global_103467.f_1), 32);
	func_655(512);
	func_654(128);
	return iVar0;
}

void func_654(int iParam0)
{
	Global_103524 = (Global_103524 - (Global_103524 && iParam0));
}

void func_655(int iParam0)
{
	Global_103525 = (Global_103525 - (Global_103525 && iParam0));
}

void func_656(var uParam0, int iParam1)
{
	func_657(uParam0, iParam1);
}

void func_657(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_658()
{
	if (((Global_1574314 || Global_1574285) || func_16(unk_0x3D35F9864E4640B1(), 0)) || func_558())
	{
		return 1;
	}
	return 0;
}

int func_659()
{
	switch (func_660())
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

int func_660()
{
	return Global_2446355.f_1.f_2819;
}

bool func_661(int iParam0)
{
	return (Global_103524 && iParam0) != 0;
}

bool func_662(int iParam0)
{
	return (Global_103525 && iParam0) != 0;
}

bool func_663(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_664()
{
	if (func_671(Global_2457274))
	{
		return 0;
	}
	if (func_665(unk_0x3D35F9864E4640B1(), 146))
	{
		return 1;
	}
	return 0;
}

int func_665(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/] == iParam1)
	{
		return func_227(iParam0);
	}
	return 0;
}

int func_666()
{
	if (func_671(Global_2457274))
	{
		return 0;
	}
	if (func_227(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

bool func_667()
{
	return unk_0x2A3398C6222EB190(Global_1312423, 0);
}

bool func_668()
{
	return Global_1312822;
}

void func_669(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x6B75D9DC60122244(0, iParam1);
			break;
		
		default:
			uVar1 = func_592(iParam1);
			iVar0 = unk_0x03CCEFDDDC599303(uVar1);
			if (!unk_0x2A3398C6222EB190(iVar0, iParam0))
			{
				unk_0xCD7E92DE2BFA0B0D(&iVar0, iParam0);
				unk_0x6B75D9DC60122244(iVar0, iParam1);
			}
			break;
	}
}

int func_670(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315703 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_163())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_659())
		{
			if (Global_1641087.f_97449 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = 0;
	}
	if (func_658())
	{
		iVar0 = 0;
	}
	Global_2456165 = 1;
	return iVar0;
}

int func_671(int iParam0)
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

void func_672(int iParam0)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/] = iParam0;
}

void func_673(int iParam0)
{
	Global_2456401 = iParam0;
}

void func_674(int iParam0)
{
	if (func_195())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0x2A3398C6222EB190(iLocal_1333, 0))
			{
				if ((((func_676(60000) && !unk_0x068C69D0643C4B95()) && !func_394()) && !unk_0x957E53BB191CB24D()) && func_411(0, 1, 1, 1))
				{
					if (!func_710())
					{
						func_675("UW_HELP1", func_601(), func_600(1), 30000);
					}
					else
					{
						func_675("UW_HELP1C", func_601(), func_600(1), 30000);
					}
					func_409(0);
					unk_0x18F1BFAF88AC511B(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 0);
				}
			}
			break;
	}
}

void func_675(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	unk_0x96577CAA1D1E72DB(uParam2);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam3);
}

bool func_676(int iParam0)
{
	return unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(Global_2412970, unk_0x898811EA80D35DE2())) > iParam0;
}

void func_677()
{
	int iVar0;
	
	unk_0xD804ACF2A7171150(&iLocal_1334, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_678(iVar0);
		iVar0++;
	}
	if (unk_0x2A3398C6222EB190(iLocal_1334, 15))
	{
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 15))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 15);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 15))
	{
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 15);
	}
}

void func_678(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iParam0]))
	{
		if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 0))
		{
			if (Local_122.f_241 == 0)
			{
			}
		}
		if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 0))
		{
			if (!func_195())
			{
				if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1, iParam0))
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (!unk_0x2A3398C6222EB190(iLocal_1334, 15))
						{
							if (unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445()) == unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]))
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 15);
							}
						}
						if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 0))
						{
							if (func_682("UW_HELP2", func_601()) || func_682("UW_HELP2C", func_601()))
							{
								unk_0x8C361F37C04084F4(1);
							}
							if (!func_400(unk_0x3D35F9864E4640B1()))
							{
								func_606(1);
							}
							iVar0 = func_681(unk_0x0031992CA618A445(), 0);
							if (func_599("UW_HELP1", func_601(), func_600(1)) || func_599("UW_HELP1C", func_601(), func_600(1)))
							{
								unk_0x8C361F37C04084F4(1);
							}
							if (Local_122.f_463 != -1)
							{
								if (iVar0 > (Local_122.f_463 - 2))
								{
									iVar0 = (Local_122.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1), iParam0);
							Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 = iParam0;
							unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 1);
							func_187();
							iLocal_3506 = iVar0;
						}
						else if (Local_122.f_241 == 0)
						{
							if (!unk_0x2A3398C6222EB190(iLocal_1333, 1))
							{
								if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0)
								{
									if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_411(0, 1, 1, 1))
										{
											if (!func_710())
											{
												func_680("UW_HELP2", func_601(), 30000);
											}
											else
											{
												func_680("UW_HELP2C", func_601(), 30000);
											}
											func_409(1);
											unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 1);
										}
									}
								}
							}
							if (!func_238())
							{
								if (unk_0x2A3398C6222EB190(iLocal_1334, 2))
								{
									unk_0xD804ACF2A7171150(&iLocal_1334, 2);
								}
								if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
								{
									if (!unk_0x2A3398C6222EB190(iLocal_1333, 4))
									{
										if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 12))
										{
											unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 12);
										}
										if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
										{
											if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_411(0, 1, 1, 1))
												{
													if (!func_710())
													{
														func_410("UW_COPS", 30000);
													}
													else
													{
														func_410("UW_COPSC", 30000);
													}
													func_409(1);
													unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 4);
												}
											}
										}
									}
									else if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0xD804ACF2A7171150(&iLocal_1333, 4);
									}
								}
								else
								{
									if (unk_0x2A3398C6222EB190(iLocal_1333, 4))
									{
										unk_0xD804ACF2A7171150(&iLocal_1333, 4);
									}
									if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 12))
									{
										unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 12))
								{
									unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 12);
								}
								if (!unk_0x2A3398C6222EB190(iLocal_1334, 2))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_411(0, 1, 1, 1))
										{
											if (!func_710())
											{
												func_410("UW_PASSMD", 30000);
											}
											else
											{
												func_410("UW_PASSMD", 30000);
											}
											func_409(1);
											unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 == 0)
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_122.f_28)
								{
									if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1, iParam0))
								{
									unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1), iParam0);
								}
								if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 != -1)
								{
									Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 = -1;
								}
								if (func_644("UW_TIMEL"))
								{
									unk_0x8C361F37C04084F4(1);
								}
								if (func_644("UW_TIMELA"))
								{
									unk_0x8C361F37C04084F4(1);
								}
								if (func_400(unk_0x3D35F9864E4640B1()))
								{
									func_606(0);
								}
								unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 398, 0);
							}
							else
							{
								if (Local_122.f_241 == 0 && !unk_0x2A3398C6222EB190(Local_122.f_3, 4))
								{
									iVar0 = func_681(unk_0x0031992CA618A445(), 0);
									if (Local_122.f_463 != -1)
									{
										if (iVar0 > (Local_122.f_463 - 2))
										{
											iVar0 = (Local_122.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3506)
									{
										unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1), iParam0);
										unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), (0 + iLocal_3506 + 1));
									}
								}
								bVar1 = false;
								if (func_257())
								{
									if (Local_122.f_413 > -1)
									{
										iVar3 = (Local_122.f_413 - func_121(&(Local_122.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_679(bVar1);
								if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xF885177A20D726D3(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]));
								}
								if (!func_22(&uLocal_1556))
								{
									func_20(&uLocal_1556, 0, 0);
								}
								else if (func_19(&uLocal_1556, 2000, 0))
								{
									if (unk_0x2A3398C6222EB190(Local_122.f_3, 9) || !func_710())
									{
										if (func_644("UW_MINV"))
										{
										}
										if (!unk_0x2A3398C6222EB190(iLocal_1333, 5))
										{
											if (Local_122.f_28 > 1 || (Local_122.f_28 == 1 && func_107() > 1))
											{
												if (func_22(&(Local_122.f_326)))
												{
													if (!unk_0x068C69D0643C4B95())
													{
														if (func_107() > 1)
														{
															func_410("UW_TIMELA", 30000);
														}
														else
														{
															func_410("UW_TIMEL", 30000);
														}
														func_409(1);
														unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 5);
													}
												}
											}
										}
									}
									else if (func_710())
									{
										if (!unk_0x2A3398C6222EB190(Local_122.f_3, 9))
										{
											if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0x2A3398C6222EB190(iLocal_1333, 14))
												{
													if (!unk_0x068C69D0643C4B95())
													{
														func_410("UW_MINV", 30000);
														func_409(1);
														unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_122.f_241 == 0)
					{
						if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_644("UW_VALK") && !func_644("UW_VALKC"))
							{
								unk_0x5D25E9B108E49E19();
								if (unk_0x2A3398C6222EB190(iLocal_1333, 8))
								{
									unk_0xD804ACF2A7171150(&iLocal_1333, 8);
								}
							}
							if (!unk_0x2A3398C6222EB190(iLocal_1333, 8))
							{
								if (!unk_0x068C69D0643C4B95())
								{
									iVar6 = 0;
									iVar4 = unk_0xB8B31FD7EF092667(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0x00E962E9D49FD6C4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_710())
										{
											func_410("UW_VALK", 30000);
										}
										else
										{
											func_410("UW_VALKC", 30000);
										}
										func_409(1);
										unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 8);
									}
									if (!unk_0x2A3398C6222EB190(iLocal_1333, 8))
									{
										if (func_710())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar7]))
														{
															if (func_104(Local_122.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0x00E962E9D49FD6C4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_410("UW_VALKC", 30000);
												func_409(1);
												unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_122.f_241 == 1)
					{
						if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1, iParam0))
						{
							if (!unk_0x2A3398C6222EB190(iLocal_1333, 6))
							{
								if (func_104(Local_122.f_7[iParam0]))
								{
									if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
									{
										if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0])))
										{
											if (!unk_0x2A3398C6222EB190(iLocal_1333, 7))
											{
												if ((unk_0xD887E21676314450(0, 75) || unk_0x9148803485DEDF45(0, 75)) || unk_0x59ABF4F2C485FC38(0, 75))
												{
													unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 7);
												}
											}
											if (unk_0x2A3398C6222EB190(iLocal_1333, 7))
											{
												if (!unk_0x068C69D0643C4B95())
												{
													if (func_710())
													{
														func_410("UW_EXITVC", 30000);
													}
													else
													{
														func_410("UW_EXITV", 30000);
													}
													func_409(1);
													unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 6);
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
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar10]))
					{
						if (unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar10]), 0))
						{
							if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_255(0))
					{
						iVar9 = func_256(2467, -1, 0);
						unk_0xD804ACF2A7171150(&iVar9, 0);
						func_466(2467, iVar9, -1, 1, 0);
						func_633();
						if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 9))
						{
							unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 9);
						}
					}
					if (func_255(8))
					{
						iVar9 = func_256(2467, -1, 0);
						unk_0xD804ACF2A7171150(&iVar9, 8);
						func_466(2467, iVar9, -1, 1, 0);
						func_633();
						if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 9))
						{
							unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
					{
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 = 0;
					}
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 12))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 12);
					}
				}
				if (!unk_0x2A3398C6222EB190(iLocal_1334, 14))
				{
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (func_104(Local_122.f_7[iParam0]))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_411(0, 1, 1, 1))
								{
									if (!func_247(129, 0, 0))
									{
										if (!func_710())
										{
											func_410("UW_TUT", -1);
										}
										else
										{
											func_410("UW_TUTC", -1);
										}
										func_409(1);
										unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 14);
									}
									else
									{
										if (!func_710())
										{
											func_410("UW_HIDE", -1);
										}
										else
										{
											func_410("UW_HIDEC", -1);
										}
										func_409(1);
										unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_808(unk_0x3D35F9864E4640B1(), 1, 1) && Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_1 != 0)
			{
				if (!unk_0x2A3398C6222EB190(Global_2501777.f_4546, 1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4546), 1);
				}
			}
			else if (unk_0x2A3398C6222EB190(Global_2501777.f_4546, 1))
			{
				unk_0xD804ACF2A7171150(&(Global_2501777.f_4546), 1);
			}
		}
	}
}

void func_679(bool bParam0)
{
	unk_0xC9621A9AD282CC14(0, 71, 1);
	unk_0xC9621A9AD282CC14(0, 72, 1);
	unk_0xC9621A9AD282CC14(0, 76, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	if (bParam0)
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
	unk_0xC9621A9AD282CC14(0, 80, 1);
	unk_0xC9621A9AD282CC14(0, 69, 1);
	unk_0xC9621A9AD282CC14(0, 70, 1);
	unk_0xC9621A9AD282CC14(0, 92, 1);
	unk_0xC9621A9AD282CC14(0, 68, 1);
	unk_0xC9621A9AD282CC14(0, 91, 1);
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 86, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 99, 1);
	unk_0xC9621A9AD282CC14(0, 100, 1);
	unk_0xC9621A9AD282CC14(0, 65, 1);
	unk_0xC9621A9AD282CC14(0, 105, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 107, 1);
	unk_0xC9621A9AD282CC14(0, 110, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 87, 1);
	unk_0xC9621A9AD282CC14(0, 88, 1);
	unk_0xC9621A9AD282CC14(0, 113, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 117, 1);
	unk_0xC9621A9AD282CC14(0, 118, 1);
	unk_0xC9621A9AD282CC14(0, 119, 1);
	unk_0xC9621A9AD282CC14(0, 51, 1);
	unk_0xC9621A9AD282CC14(0, 47, 1);
	unk_0xC9621A9AD282CC14(0, 24, 1);
	unk_0xC9621A9AD282CC14(0, 257, 1);
}

void func_680(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam2);
}

int func_681(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_682(char* sParam0, char* sParam1)
{
	unk_0x92C5C77953D80467(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	return unk_0x602E6661A0F13A13(0);
}

void func_683()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x69DA17666D6E3F5A(Local_122.f_7[iVar0]) && unk_0xA02DD6B5C8C02298(Local_122.f_7[iVar0]))
		{
			iVar1 = unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]);
			if (unk_0x76B3C79DE564AFC6(iVar1) && !unk_0x7A6C051038031EFA(iVar1, 0))
			{
				unk_0x1A8B5820BACCE3A6(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_684(struct<3> Param0)
{
	Global_2391048 = { Param0 };
	Global_2391051 = 1;
}

void func_685()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_701(iVar0);
				break;
			
			case 171:
				func_686(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_686(int iParam0)
{
	int iVar0;
	
	unk_0x4AE700F97F1781DC(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -547553178:
			func_700(iParam0);
			break;
		
		case 2118956415:
			func_699(iParam0);
			break;
		
		case -1820782342:
			func_698(iParam0);
			break;
		
		case 828334256:
			func_697(iParam0);
			break;
		
		case 1560224714:
			func_696(iParam0);
			break;
		
		case 1869598351:
			func_693(iParam0);
			break;
		
		case -670156593:
			func_687(iParam0);
			break;
	}
}

void func_687(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0xAA55DF0CB38F413B(Local_122.f_73[iVar6]))
		{
			return;
		}
		if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6, iVar6))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_271, iVar6))
			{
				if (func_95(iVar6))
				{
					if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]), 0))
					{
						if (unk_0xBF46993E3B1741E4(unk_0x3D35F9864E4640B1(), unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0x435EA303C4DFB8D4(unk_0x3D35F9864E4640B1(), unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_710())
				{
					if (Local_122.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = unk_0xA7871E29B06DA901(Local_122.f_465[0 /*4*/].f_2);
						if (iVar9 != func_6())
						{
							if (iVar9 == unk_0x3D35F9864E4640B1())
							{
								bVar8 = true;
							}
						}
					}
					else if (unk_0xAA55DF0CB38F413B(Local_122.f_7[0]))
					{
						if (func_104(Local_122.f_7[0]))
						{
							iVar11 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), -1, 0);
							if (iVar11 != 0)
							{
								if (unk_0x972B5786EA49FE1A(iVar11))
								{
									iVar10 = unk_0x46E9A8D99AF6D7BC(iVar11);
									if (iVar10 == unk_0x3D35F9864E4640B1())
									{
										bVar8 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar8)
		{
			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
			{
				iVar4 = func_692();
				iVar12 = unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_691(iVar12))
				{
					iVar3 = func_42(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar14]) && !unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar14)], func_85(iVar14)))
						{
							iVar13++;
							unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar14)]), func_85(iVar14));
						}
						iVar14++;
					}
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 = (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8++;
				}
				if (Local_739.f_11 == 0)
				{
					Local_739.f_11 = unk_0x6239D1A379D387A4();
				}
				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
				{
					Local_739.f_7 = (Local_739.f_7 + iVar4);
					func_689(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_688();
				}
			}
			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar6);
		}
	}
}

void func_688()
{
	if (!func_22(&uLocal_3483) || (func_22(&uLocal_3483) && func_19(&uLocal_3483, 2000, 0)))
	{
		unk_0x18F1BFAF88AC511B(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_101(&uLocal_3483);
		func_20(&uLocal_3483, 0, 0);
	}
}

var func_689(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_451(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_690()
{
	if (func_710())
	{
		return Global_262145.f_10511;
	}
	return Global_262145.f_10450;
}

bool func_691(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_692()
{
	if (func_710())
	{
		return Global_262145.f_10510;
	}
	return Global_262145.f_10449;
}

void func_693(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6, iVar6))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_271, iVar6))
			{
				if (func_695(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_694(iVar6))
				{
					if (func_95(iVar6))
					{
						if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]), 0))
						{
							if (unk_0xBF46993E3B1741E4(unk_0x3D35F9864E4640B1(), unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0x435EA303C4DFB8D4(unk_0x3D35F9864E4640B1(), unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_710())
					{
						if (Local_122.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = unk_0xA7871E29B06DA901(Local_122.f_465[0 /*4*/].f_2);
							if (iVar9 != func_6())
							{
								if (iVar9 == unk_0x3D35F9864E4640B1())
								{
									bVar8 = true;
								}
							}
						}
						else if (unk_0xAA55DF0CB38F413B(Local_122.f_7[0]))
						{
							if (func_104(Local_122.f_7[0]))
							{
								iVar11 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[0]), -1, 0);
								if (iVar11 != 0)
								{
									if (unk_0x972B5786EA49FE1A(iVar11))
									{
										iVar10 = unk_0x46E9A8D99AF6D7BC(iVar11);
										if (iVar10 == unk_0x3D35F9864E4640B1())
										{
											bVar8 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar8)
				{
					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar12]) && !unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar12)], func_85(iVar12)))
							{
								iVar13++;
								unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar12)]), func_85(iVar12));
							}
							iVar12++;
						}
						Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 = (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
						{
							iVar4 = func_692();
							iVar4 = (iVar4 * iVar3);
							Local_739.f_7 = (Local_739.f_7 + iVar4);
							func_689(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_688();
							if (Local_739.f_11 == 0)
							{
								Local_739.f_11 = unk_0x6239D1A379D387A4();
							}
						}
						unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_694(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (Local_756[iVar0 /*18*/].f_11[iParam0] > 0)
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
	int iVar0;
	
	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (iVar0 != unk_0x43B24C247F35B6BC())
			{
				if (Local_756[iVar0 /*18*/].f_11[iParam0] > Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_696(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (unk_0x87D05145F203EF5E("am_kill_list", -1, 0) != func_6())
		{
		}
		if (unk_0xEF0CB8FF125B9F9C())
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_464), Var0.f_2);
		}
	}
}

void func_697(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_3450, Var0.f_2);
	}
}

void func_698(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_3451, Var0.f_2);
	}
}

void func_699(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(Var0.f_2)], func_85(Var0.f_2)))
		{
			unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(Var0.f_2)]), func_85(Var0.f_2));
		}
	}
}

void func_700(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6, iVar3))
		{
			unk_0xD804ACF2A7171150(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar3);
		}
	}
}

void func_701(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 10))
	{
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6, iVar10))
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_271, iVar10))
				{
					if (unk_0x76B3C79DE564AFC6(Var0.f_0))
					{
						if (unk_0x036E1D5EA494CEB2(Var0.f_0))
						{
							if (unk_0xAA55DF0CB38F413B(Local_122.f_73[iVar10]))
							{
								if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar10])))
								{
									if (unk_0x89C1AD6422029361(Var0.f_0) == unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar10]))
									{
										if (unk_0x76B3C79DE564AFC6(Var0.f_1))
										{
											if (unk_0x269F274F1955DE87(Var0.f_1))
											{
												if (unk_0x4849801147A2BA1E(Var0.f_1) == unk_0x0031992CA618A445())
												{
													if (Var0.f_3)
													{
														iVar13 = unk_0xE9559A12052415BE(Var0.f_0);
														if (Local_122.f_27 == joaat("hydra"))
														{
															if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
															{
																iVar16 = func_692();
																if (func_691(iVar13))
																{
																	iVar11 = func_42(iVar13);
																	Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 = (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 + iVar11);
																	iVar16 = (iVar16 * iVar11);
																}
																else
																{
																	Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8++;
																}
																if (Local_739.f_11 == 0)
																{
																	Local_739.f_11 = unk_0x6239D1A379D387A4();
																}
																if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																{
																	Local_739.f_7 = (Local_739.f_7 + iVar16);
																	func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																	func_688();
																}
															}
															unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar10);
														}
														else if (iVar13 == joaat("buzzard"))
														{
															iVar18 = -1;
															iVar18 = -1;
															while (iVar18 <= 3)
															{
																iVar15 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar10]), iVar18, 0);
																if (iVar15 != 0)
																{
																	iVar17 = func_702(iVar15);
																	if (iVar17 > -1)
																	{
																		if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar17)], func_85(iVar17)))
																		{
																			if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar17)], func_85(iVar17)))
																			{
																				unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar17)]), func_85(iVar17));
																				iVar16 = func_692();
																				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8++;
																				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																				{
																					Local_739.f_7 = (Local_739.f_7 + iVar16);
																					func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_688();
																				}
																				if (unk_0x8E124932BCA8337D(unk_0xECB7D3275586261E(Local_122.f_48[iVar17])))
																				{
																					func_87(&(Local_1350[iVar17 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar18++;
															}
															unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar10);
														}
													}
													else if (!func_104(Local_122.f_73[iVar10]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (unk_0x972B5786EA49FE1A(unk_0x4849801147A2BA1E(Var0.f_1)))
													{
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
			iVar10++;
		}
		if (Local_122.f_27 != joaat("hydra"))
		{
			iVar10 = 0;
			while (iVar10 <= 19)
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar10)], func_85(iVar10)))
				{
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
					{
						if (unk_0x76B3C79DE564AFC6(Var0.f_0))
						{
							if (unk_0x269F274F1955DE87(Var0.f_0))
							{
								if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar10]))
								{
									if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_122.f_48[iVar10])))
									{
										if (unk_0x4849801147A2BA1E(Var0.f_0) == unk_0xECB7D3275586261E(Local_122.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x76B3C79DE564AFC6(Var0.f_1))
												{
													if (unk_0x269F274F1955DE87(Var0.f_1))
													{
														iVar14 = unk_0x4849801147A2BA1E(Var0.f_1);
														if (unk_0x972B5786EA49FE1A(iVar14))
														{
															if (iVar14 == unk_0x0031992CA618A445())
															{
																if (Var0.f_3)
																{
																	iVar16 = func_692();
																	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
																	{
																		Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8++;
																		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																		{
																			func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			Local_739.f_7 = (Local_739.f_7 + iVar16);
																			func_688();
																		}
																	}
																	if (Local_739.f_11 == 0)
																	{
																		Local_739.f_11 = unk_0x6239D1A379D387A4();
																	}
																	unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
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
				}
				if (iVar10 < 5)
				{
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6, iVar10))
					{
						if (!unk_0x2A3398C6222EB190(Local_122.f_271, iVar10))
						{
							if (unk_0x76B3C79DE564AFC6(Var0.f_0))
							{
								if (unk_0x036E1D5EA494CEB2(Var0.f_0))
								{
									if (unk_0xAA55DF0CB38F413B(Local_122.f_73[iVar10]))
									{
										if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar10])))
										{
											if (unk_0x89C1AD6422029361(Var0.f_0) == unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar10]))
											{
												if (unk_0xE9559A12052415BE(Var0.f_0) == joaat("savage"))
												{
													if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
													{
														if (Var0.f_3)
														{
															if (unk_0x76B3C79DE564AFC6(Var0.f_1))
															{
																if (unk_0x269F274F1955DE87(Var0.f_1))
																{
																	iVar14 = unk_0x4849801147A2BA1E(Var0.f_1);
																	if (unk_0x972B5786EA49FE1A(iVar14))
																	{
																		if (iVar14 == unk_0x0031992CA618A445())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
																				{
																					iVar11 = func_42(joaat("savage"));
																					Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 = (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 + iVar11);
																					iVar16 = func_692();
																					iVar16 = (iVar16 * iVar11);
																					if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																					{
																						func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																						Local_739.f_7 = (Local_739.f_7 + iVar16);
																						func_688();
																						if (Local_739.f_11 == 0)
																						{
																							Local_739.f_11 = unk_0x6239D1A379D387A4();
																						}
																					}
																					iVar19 = iVar10 * 4;
																					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																					unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar10);
																				}
																			}
																		}
																	}
																	else if (func_695(iVar10))
																	{
																		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
																		{
																			iVar11 = func_42(joaat("savage"));
																			Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 = (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 + iVar11);
																			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																			{
																				iVar16 = func_692();
																				iVar16 = (iVar16 * iVar11);
																				Local_739.f_7 = (Local_739.f_7 + iVar16);
																				func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																				func_688();
																				if (Local_739.f_11 == 0)
																				{
																					Local_739.f_11 = unk_0x6239D1A379D387A4();
																				}
																			}
																			iVar19 = iVar10 * 4;
																			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar10);
																		}
																	}
																	else if (func_694(iVar10))
																	{
																	}
																	else if (unk_0x435EA303C4DFB8D4(iVar20, Var0.f_0, &uVar21))
																	{
																		if (iVar20 == unk_0x3D35F9864E4640B1())
																		{
																			if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
																			{
																				iVar11 = func_42(joaat("savage"));
																				Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 = (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 + iVar11);
																				if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																				{
																					iVar16 = func_692();
																					iVar16 = (iVar16 * iVar11);
																					Local_739.f_7 = (Local_739.f_7 + iVar16);
																					func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_688();
																					if (Local_739.f_11 == 0)
																					{
																						Local_739.f_11 = unk_0x6239D1A379D387A4();
																					}
																				}
																				iVar19 = iVar10 * 4;
																				unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																				unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																				unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																				unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																				unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_6), iVar10);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0x76B3C79DE564AFC6(Var0.f_1))
															{
																if (unk_0x269F274F1955DE87(Var0.f_1))
																{
																	iVar14 = unk_0x4849801147A2BA1E(Var0.f_1);
																	if (unk_0x972B5786EA49FE1A(iVar14))
																	{
																		if (iVar14 == unk_0x0031992CA618A445())
																		{
																			iVar12 = unk_0x6239D1A379D387A4();
																			Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_11[iVar10] = iVar12;
																		}
																	}
																}
															}
															if (!unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(Var0.f_0), 0))
															{
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
				iVar10++;
			}
			iVar10 = 20;
			while (iVar10 <= 23)
			{
				if (!unk_0x2A3398C6222EB190(Local_122.f_272[func_86(iVar10)], func_85(iVar10)))
				{
					if (!unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
					{
						if (unk_0x76B3C79DE564AFC6(Var0.f_0))
						{
							if (unk_0x269F274F1955DE87(Var0.f_0))
							{
								if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar10]))
								{
									if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_122.f_48[iVar10])))
									{
										if (unk_0x4849801147A2BA1E(Var0.f_0) == unk_0xECB7D3275586261E(Local_122.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x76B3C79DE564AFC6(Var0.f_1))
												{
													if (unk_0x269F274F1955DE87(Var0.f_1))
													{
														iVar14 = unk_0x4849801147A2BA1E(Var0.f_1);
														if (unk_0x972B5786EA49FE1A(iVar14))
														{
															if (iVar14 == unk_0x0031992CA618A445())
															{
																if (Var0.f_3)
																{
																	if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_17 < 2)
																	{
																		Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8++;
																		if (Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8 <= func_690())
																		{
																			iVar16 = func_692();
																			Local_739.f_7 = (Local_739.f_7 + iVar16);
																			if (Local_739.f_11 == 0)
																			{
																				Local_739.f_11 = unk_0x6239D1A379D387A4();
																			}
																			func_689(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			func_688();
																		}
																	}
																	unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
																}
															}
														}
													}
												}
												else
												{
													unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar10]))
				{
				}
				iVar10++;
			}
		}
	}
}

int func_702(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar1]))
			{
				if (unk_0xECB7D3275586261E(Local_122.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_703()
{
	int iVar0;
	int iVar1;
	
	if (Local_122.f_27 != joaat("hydra"))
	{
		if (iLocal_3508 == 0)
		{
			iLocal_3508 = 20;
		}
		if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iLocal_3508]))
		{
			if (!func_31(Local_122.f_48[iLocal_3508]))
			{
				iVar0 = unk_0x66F6D7501A6DDAF1(unk_0xECB7D3275586261E(Local_122.f_48[iLocal_3508]));
				if (iLocal_3509[iLocal_3508] != iVar0)
				{
					iLocal_3509[iLocal_3508] = iVar0;
					unk_0xCA038BB6D5C71F9C(Local_122.f_48[iLocal_3508], 1);
				}
			}
		}
		iLocal_3508++;
		if (iLocal_3508 == 23)
		{
			iLocal_3508 = 20;
		}
	}
	if (Local_122.f_27 != joaat("hydra") && Local_122.f_27 != joaat("rhino"))
	{
		if (!bLocal_3541)
		{
			if (func_93() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_73[iVar1]))
					{
						if (func_104(Local_122.f_73[iVar1]))
						{
							if (unk_0xE9559A12052415BE(unk_0xD7E2A160FD5DEEE1(Local_122.f_73[iVar1])) == joaat("savage"))
							{
								unk_0xCA038BB6D5C71F9C(Local_122.f_73[iVar1], 1);
								bLocal_3541 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0xAA55DF0CB38F413B(Local_122.f_73[iLocal_3534]))
	{
		if (func_104(Local_122.f_73[iLocal_3534]))
		{
			iVar0 = unk_0x66F6D7501A6DDAF1(unk_0xECB7D3275586261E(Local_122.f_73[iLocal_3534]));
			if (iLocal_3535[iLocal_3534] != iVar0)
			{
				iLocal_3535[iLocal_3534] = iVar0;
				if (!bLocal_3541)
				{
					unk_0xCA038BB6D5C71F9C(Local_122.f_73[iLocal_3534], 1);
				}
			}
		}
	}
	iLocal_3534++;
	if (iLocal_3534 == 5)
	{
		iLocal_3534 = 0;
	}
}

void func_704()
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x2A3398C6222EB190(uLocal_3452, iVar0))
		{
			if (Local_122.f_85[iVar0] != 2)
			{
				unk_0xD804ACF2A7171150(&iLocal_3452, iVar0);
			}
		}
		if (unk_0xAA55DF0CB38F413B(Local_122.f_48[iVar0]))
		{
			func_708(iVar0);
			if (!func_31(Local_122.f_48[iVar0]))
			{
				switch (Local_122.f_85[iVar0])
				{
					case 1:
						if (unk_0xA02DD6B5C8C02298(Local_122.f_48[iVar0]))
						{
							if (unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 0))
							{
								uVar2 = unk_0xCFA31F1E461A6BB5(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 0);
								uVar1 = unk_0xE9559A12052415BE(uVar2);
								if (unk_0x1DBFCF939B3B47D0(uVar1))
								{
									if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1273030092) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0x3251C2B06497863C(iVar2, -1, 0) == unk_0xECB7D3275586261E(Local_122.f_48[iVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_6())
											{
												uVar10 = unk_0xD33F4BC17EB987E5(iVar9);
												if (!unk_0x8682D8A6269E52C9(uVar10))
												{
													if (func_26(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { unk_0xF177E0DA126D71C8(iVar10, 1) };
														unk_0x3A7639BDA0C847F6(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0xF9CDF5CA6A1D6756(iVar1))
								{
									if (unk_0x3251C2B06497863C(iVar2, -1, 0) == unk_0xECB7D3275586261E(Local_122.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1273030092) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1335[iVar14] != Local_122.f_110[iVar14]))
									{
										if (unk_0x3251C2B06497863C(iVar2, -1, 0) == unk_0xECB7D3275586261E(Local_122.f_48[iVar0]))
										{
											iVar13 = Local_122.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = unk_0xA7871E29B06DA901(iVar13);
												if (iVar9 != func_6())
												{
													iVar10 = unk_0xD33F4BC17EB987E5(iVar9);
													if (!unk_0x8682D8A6269E52C9(iVar10))
													{
														Var3 = { unk_0xF177E0DA126D71C8(iVar10, 1) };
														unk_0x542398CD432CDFF7(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_1335[iVar14] != Local_122.f_110[iVar14])
														{
															iLocal_1335[iVar14] = Local_122.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1273030092) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1273030092) != 0) && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 1306903184) != 0) && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0x3251C2B06497863C(iVar2, -1, 0) == unk_0xECB7D3275586261E(Local_122.f_48[iVar0]))
									{
										iVar9 = func_27();
										if (iVar9 != func_6())
										{
											iVar10 = unk_0xD33F4BC17EB987E5(iVar9);
											if (!unk_0x8682D8A6269E52C9(iVar10))
											{
												fVar11 = func_26(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													unk_0x379F0B3A641340F2(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), unk_0xF177E0DA126D71C8(iVar10, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													unk_0xF67CC1918ACD3BB7(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xA02DD6B5C8C02298(Local_122.f_48[iVar0]))
						{
							if (!func_23())
							{
								if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1442466670) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 0))
									{
										if (!unk_0x2A3398C6222EB190(iLocal_3452, iVar0))
										{
											iVar12 = func_707(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												unk_0x0C3078938F876AB9(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0x2A3398C6222EB190(iLocal_3452, iVar0))
											{
												func_706(iVar0, func_99(1));
												unk_0xCD7E92DE2BFA0B0D(&iLocal_3452, iVar0);
											}
										}
									}
									else
									{
										unk_0x0C3078938F876AB9(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -251125078) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_705() };
							unk_0xD706D9D85701BFBD(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]));
							unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), 1);
							unk_0x109515D259FB313E(unk_0xECB7D3275586261E(Local_122.f_48[iVar0]), Var6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_705()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
		{
			return unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_122.f_30[0 /*3*/];
}

void func_706(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 1560224714;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 3, iParam1);
	}
}

int func_707(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar3]))
		{
			if (func_104(Local_122.f_7[iVar3]))
			{
				iVar7 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar3]), -1, 0);
				if (!unk_0x8682D8A6269E52C9(iVar7))
				{
					if (unk_0x972B5786EA49FE1A(iVar7))
					{
						Var4 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar3]), 1) };
						fVar2 = func_505(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_708(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_31(Local_122.f_48[iParam0]))
	{
		if (unk_0xA02DD6B5C8C02298(Local_122.f_48[iParam0]))
		{
			if (unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_122.f_48[iParam0])))
			{
				uVar0 = unk_0xCFA31F1E461A6BB5(unk_0xECB7D3275586261E(Local_122.f_48[iParam0]), 0);
				if (unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(uVar0)) || unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iVar0)))
				{
					if (!unk_0x432757A9E7AAFA96(iVar0, 0))
					{
						unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_48[iParam0]), 5);
					}
				}
			}
		}
	}
}

void func_709(struct<3> Param0)
{
	Global_1574385.f_6 = { Param0 };
}

bool func_710()
{
	return unk_0x2A3398C6222EB190(Local_122.f_3, 8);
}

void func_711(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_712("kwUfKUus6EuQyNSL8KpY-w");
					func_712("yMTOFLfO2UKwzKrmgPP7kg");
					func_712("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_712("tP5HSeCA0UiHnkRzakdO2Q");
					func_712("uEkrqoerQEmQ0uZRtp4rkw");
					func_712("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_712("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_712("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_712("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_712("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_712("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_712("uEkrqoerQEmQ0uZRtp4rkw");
					func_712("92t91kL3Wkqvl2Kc82cNSA");
					func_712("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_712("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_712("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_712("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_712("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_712("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_712("fOfm7nzMLkav0ldcSCNAzA");
					func_712("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_712("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_712("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_712("Ma78E44OMkGfYPmCPZXUNA");
					func_712("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_712("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_712("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_712("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_712("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_712("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_712("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_712("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_712("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_712("3AAj-muvN0iHI5IMyGlboA");
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
							func_712("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_712("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_712("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_712("fOfm7nzMLkav0ldcSCNAzA");
							func_712("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_712("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_712("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_712("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_712("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_712("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_712("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_712("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_712("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_712("fOfm7nzMLkav0ldcSCNAzA");
							func_712("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_712("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_712("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_712("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_712("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_712("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_712("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_712("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_712("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_712("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_712("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_712("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_712("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_712("aGBjo2rKi0yMDLl3a2ATGA");
									func_712("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_712("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_712("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_712("f2lnL6wZPkGWUowu0yLm1Q");
									func_712("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_712("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_712("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_712("W-OJzHlM-0ym9PsIASYZtw");
									func_712("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_712("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_712("TjGz31AMYE6bGCjAIitu6w");
									func_712("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_712("QmlvLMLCwkOvoZlkAstYxw");
									func_712("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_712("BktATxH9R0Wp2x0kWSbqjw");
									func_712("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_712("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_712("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_712("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_712("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_712("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_712("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_712("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_712("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_712("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_712("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_712(char* sParam0)
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
			if (func_713(&(Global_2359720[iVar1 /*26*/].f_15)) == iVar0)
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

int func_713(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_144(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_714(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_714(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_144(uParam0);
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

void func_715()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 12))
	{
		func_187();
	}
	if (func_710())
	{
		if (iLocal_3442 != Local_122.f_12)
		{
			iLocal_3442 = Local_122.f_12;
			func_187();
		}
	}
	if (!func_195())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0xA761A0B6072010C8(uLocal_1345[iVar0]))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
				{
					if (func_104(Local_122.f_7[iVar0]))
					{
						Var1 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0) };
						if (!func_716(iVar0, Var1))
						{
							if (!unk_0x2A3398C6222EB190(Local_122.f_13, iVar0))
							{
								uLocal_1345[iVar0] = unk_0xE80C2D6BF636C6C4(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]));
								unk_0x3B815A6E8530D3A5(uLocal_1345[iVar0], 429);
								func_189(&(uLocal_1345[iVar0]), 29);
								if (!unk_0x2A3398C6222EB190(iLocal_1333, 20))
								{
									unk_0xB989C497205DF6E8(uLocal_1345[iVar0], 1);
									unk_0x82F6662608C79359(uLocal_1345[iVar0], 7000);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1333, 20);
								}
								unk_0xC5B4383DA70A2C1A(uLocal_1345[iVar0], 9);
								if (func_710())
								{
									unk_0x50B5259DFC71B8EC(uLocal_1345[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0x50B5259DFC71B8EC(uLocal_1345[iVar0], "UW_BLIP");
								}
								if (!unk_0x2A3398C6222EB190(iLocal_1334, 3))
								{
									unk_0x292298DDE6D3EE2A();
									unk_0xCD7E92DE2BFA0B0D(&iLocal_1334, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
			{
				if (!func_104(Local_122.f_7[iVar0]))
				{
					unk_0x0C4BDC77192798AE(&(uLocal_1345[iVar0]));
				}
				else if (unk_0x2A3398C6222EB190(Local_122.f_13, iVar0))
				{
					unk_0x0C4BDC77192798AE(&(uLocal_1345[iVar0]));
				}
			}
			else
			{
				unk_0x0C4BDC77192798AE(&(uLocal_1345[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_187();
	}
}

int func_716(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xAA55DF0CB38F413B(Local_122.f_7[iVar0]))
			{
				Var1 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_122.f_7[iVar0]), 0) };
				if (func_66(Param1, Var1, 0))
				{
					if (unk_0xA761A0B6072010C8(uLocal_1345[iVar0]))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_717()
{
	return Local_122.f_0;
}

int func_718(int iParam0)
{
	return Local_756[iParam0 /*18*/];
}

void func_719()
{
	if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 6))
	{
		func_435();
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 6);
	}
	if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 7))
	{
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 4) || unk_0x2A3398C6222EB190(Global_1574385.f_1, 16))
		{
			if (((!unk_0x90EEDEFFBABEF36F() && !unk_0x068C69D0643C4B95()) && !func_347()) && func_808(unk_0x3D35F9864E4640B1(), 1, 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 7);
				func_410("FME_PASINT", 30000);
				func_409(1);
			}
		}
		else if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 17))
		{
			if (func_238() && !func_233())
			{
				unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 17);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 16);
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 23))
	{
		if (((((!unk_0x90EEDEFFBABEF36F() && !unk_0x2A3398C6222EB190(Global_2501777.f_773, 2)) && func_808(unk_0x3D35F9864E4640B1(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x068C69D0643C4B95())
		{
			if (func_742())
			{
				func_410("AMEV_GA_RP", -1);
				if (func_334(unk_0x3D35F9864E4640B1()) != 200)
				{
					func_409(1);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 23);
			}
		}
	}
	if (unk_0x957E53BB191CB24D() && unk_0xA095EFC51C188A82() == 15)
	{
		if (func_227(unk_0x3D35F9864E4640B1()))
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
		if ((((!unk_0x90EEDEFFBABEF36F() && !unk_0x068C69D0643C4B95()) && !func_347()) && func_808(unk_0x3D35F9864E4640B1(), 1, 1)) && !func_198(unk_0x3D35F9864E4640B1(), 21))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 9);
			func_741(0);
			func_410("FME_TBL00", -1);
			func_409(1);
		}
	}
	if (func_240(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 18))
		{
			if ((func_198(unk_0x3D35F9864E4640B1(), 21) && unk_0x2A3398C6222EB190(Global_1574385.f_1, 20)) && !unk_0x2A3398C6222EB190(Global_1574385.f_1, 19))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 18);
			}
		}
		else if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 18))
		{
			if (((((!unk_0x90EEDEFFBABEF36F() && !unk_0x068C69D0643C4B95()) && !func_347()) && func_808(unk_0x3D35F9864E4640B1(), 1, 1)) && unk_0xF9FC07CC13402AEF()) && !Global_2501777.f_4800)
			{
				unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 18);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 19);
				func_410("AMTT_RPAS", -1);
				func_409(1);
			}
		}
	}
	if (((((func_240(unk_0x3D35F9864E4640B1()) && !func_197(unk_0x3D35F9864E4640B1())) && func_185(unk_0x3D35F9864E4640B1()) != 146) && !func_196(unk_0x3D35F9864E4640B1())) && !func_740(unk_0x3D35F9864E4640B1())) && !func_730())
	{
		if (func_638(func_185(unk_0x3D35F9864E4640B1())))
		{
			unk_0x22DFDF650A525398(unk_0x3D35F9864E4640B1());
		}
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 22))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 22);
		}
		if (func_228(unk_0x3D35F9864E4640B1()) || func_636())
		{
			if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 10))
			{
				if (func_728(func_185(unk_0x3D35F9864E4640B1())))
				{
					if (func_569(0) && !Global_2391044)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 9);
					}
					if (!Global_2391044)
					{
						func_433(1);
						unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 14);
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 10);
			}
		}
		if (func_227(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 11))
			{
				if (!Global_92814.f_8)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 12);
					func_431(1);
				}
				if (!func_727())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 13);
					func_637();
				}
				if (!Global_2391044)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 14);
					if (func_569(0) && !Global_2391044)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 9);
					}
					func_433(1);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 11);
			}
		}
		else
		{
			func_725(0);
		}
	}
	else
	{
		func_725(1);
	}
	func_720();
	if (func_635(func_185(unk_0x3D35F9864E4640B1())) && !unk_0x2A3398C6222EB190(Global_1574385.f_1, 21))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 21);
	}
	if ((func_238() && !func_233()) || func_198(unk_0x3D35F9864E4640B1(), 21))
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

void func_720()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_347())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_502(iVar2))
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
				func_721(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 26))
	{
		func_101(&(Global_1574385.f_22));
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 26);
	}
}

void func_721(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1574385.f_22)))
	{
		func_20(&(Global_1574385.f_22), 0, 0);
	}
	else if (func_19(&(Global_1574385.f_22), iParam1, 0))
	{
		if (func_395() > 0)
		{
			func_724(iParam0);
			if (func_644("AMEV_LBD_HELP"))
			{
				unk_0x8C361F37C04084F4(1);
			}
			func_101(&(Global_1574385.f_22));
		}
	}
	else
	{
		func_723(0);
		func_722();
	}
}

void func_722()
{
	Global_2501777.f_4489 = 0;
}

void func_723(int iParam0)
{
	Global_1354565.f_68 = iParam0;
}

void func_724(int iParam0)
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

void func_725(int iParam0)
{
	if ((unk_0x2A3398C6222EB190(Global_1574385.f_1, 11) || (unk_0x2A3398C6222EB190(Global_1574385.f_1, 10) && iParam0)) || (unk_0x2A3398C6222EB190(Global_1574385.f_1, 22) && iParam0))
	{
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 12))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 12);
			func_431(0);
		}
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 13))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 13);
			func_726();
		}
		if (unk_0x2A3398C6222EB190(Global_1574385.f_1, 14) && !func_234(unk_0x3D35F9864E4640B1(), 0))
		{
			unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 14);
			func_433(0);
		}
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 11);
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 10);
		unk_0xD804ACF2A7171150(&(Global_1574385.f_1), 22);
	}
}

void func_726()
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4705), 0);
}

bool func_727()
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_4705, 0);
}

int func_728(int iParam0)
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
			return func_227(unk_0x3D35F9864E4640B1());
		
		case 133:
			return (func_636() || func_729(func_184()));
		
		default:
	}
	return 0;
}

int func_729(int iParam0)
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

int func_730()
{
	if (((((((((func_739() || func_738()) || func_737()) || func_177()) || (func_736() && !unk_0xF4F91CD09D59F42E())) || (func_733() && !func_732())) || Global_2394684) || Global_2394684.f_1 != 0) || Global_2394757 != 0) || (func_731() == 2 && !unk_0xF4F91CD09D59F42E()))
	{
		return 1;
	}
	return 0;
}

int func_731()
{
	return Global_979818;
}

bool func_732()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 27);
}

int func_733()
{
	if (func_735() || func_734())
	{
		return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 == 8;
	}
	return 0;
}

var func_734()
{
	return Global_2445582.f_615;
}

bool func_735()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 11);
}

bool func_736()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 5);
}

bool func_737()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 2);
}

bool func_738()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 20);
}

bool func_739()
{
	return Global_2445582.f_579;
}

bool func_740(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		if ((func_238() && !func_233()) || func_198(unk_0x3D35F9864E4640B1(), 21))
		{
			return 1;
		}
		if (func_22(&(Global_1574385.f_13)))
		{
			if (!func_19(&(Global_1574385.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_101(&(Global_1574385.f_13));
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 9);
}

void func_741(int iParam0)
{
	int iVar0;
	
	iVar0 = func_256(2521, -1, 0);
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
	func_466(2521, iVar0, -1, 1, 0);
}

int func_742()
{
	int iVar0;
	
	if (!func_22(&(Global_1574385.f_15)))
	{
		func_20(&(Global_1574385.f_15), 0, 0);
		Global_1574385.f_17 = 0;
	}
	else if (func_19(&(Global_1574385.f_15), 1000, 0))
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(Global_1574385.f_17)))
		{
			iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Global_1574385.f_17));
			if (unk_0x80BA8E3CC61A8625(iVar0))
			{
				if (func_808(iVar0, 1, 1) && func_743(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_58(unk_0x3D35F9864E4640B1()), func_58(iVar0)) < 80f)
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
			func_101(&(Global_1574385.f_15));
		}
	}
	return 0;
}

int func_743(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_470(iParam0))
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

bool func_744()
{
	return Global_1574385.f_24;
}

bool func_745(int iParam0)
{
	return !func_746(iParam0);
}

int func_746(int iParam0)
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
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
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
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
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
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_747(4))
			{
				return 0;
			}
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_747(4))
			{
				return 0;
			}
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_747(4))
			{
				return 0;
			}
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
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
			if (func_747(4))
			{
				return 0;
			}
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 0) || unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_747(4))
			{
				return 0;
			}
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_747(4))
			{
				return 0;
			}
			if (func_198(unk_0x3D35F9864E4640B1(), 7))
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

int func_747(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_808(unk_0xA7871E29B06DA901(iVar0), 0, 1))
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

int func_748()
{
	var uVar0;
	
	func_752(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_751())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_750())
	{
		return 1;
	}
	if (func_749(157))
	{
		if (!func_739())
		{
			return 1;
		}
	}
	if (func_749(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_426() != 0)
	{
		if (unk_0x7832F791572D5809(func_426()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_749(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_750()
{
	return Global_2455114;
}

bool func_751()
{
	return Global_2445582.f_574;
}

void func_752(var uParam0)
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
					func_753(iVar0);
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

void func_753(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_808(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(iVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(iVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_754(uVar4, &bVar5))
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

int func_754(int iParam0, var uParam1)
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

void func_755()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_756()
{
	int iVar0;
	
	func_187();
	if (func_717() == 4 && Local_122.f_27 != 0)
	{
		unk_0x05C9FC8771682275(Local_122.f_27, 0);
	}
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4546), 1);
	func_643(19, 0);
	func_629(0);
	if (unk_0x43B24C247F35B6BC() != -1)
	{
		func_761(129, 0, unk_0x2A3398C6222EB190(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2, 8));
	}
	func_760(129);
	unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 184, 0);
	unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 151, 1);
	unk_0x15007EAE63C7ECCF(1f);
	if (iLocal_1343 > 0)
	{
		unk_0x438B2E6B2BAD6A0D(iLocal_1343);
	}
	if (unk_0x3D35F9864E4640B1() != -1)
	{
		if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 129)
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] = -1;
		}
	}
	if (unk_0x834C6A3950A9090B(unk_0x0031992CA618A445()) == iLocal_1543)
	{
		unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_1545);
	}
	func_759();
	func_200(0, 129);
	if (unk_0x2A3398C6222EB190(iLocal_1333, 22))
	{
		func_438();
		unk_0xD804ACF2A7171150(&iLocal_1333, 22);
	}
	if (unk_0x2A3398C6222EB190(iLocal_1333, 9))
	{
		unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
		if (!unk_0x2A3398C6222EB190(iLocal_1333, 10))
		{
			unk_0x1E420F926A7BC4D2("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1344 != -100f)
	{
		func_508(0, 0);
		unk_0x3B915141D0F115CA(fLocal_1344);
	}
	func_507(0);
	if (func_748())
	{
		Local_739.f_5 = 5;
	}
	else if (func_589(2, 0, 0, 0, 0))
	{
		Local_739.f_5 = 6;
	}
	else if (Local_739.f_5 != 1)
	{
		Local_739.f_5 = 2;
	}
	unk_0x03C4BA9F5A120DFE(uLocal_3449);
	Local_739.f_0 = Local_122.f_611;
	Local_739.f_1 = Local_122.f_612;
	Local_739.f_4 = Local_122.f_613;
	Local_739.f_3 = Local_122.f_615;
	if (Local_739.f_9 > 0)
	{
		Local_739.f_10 = (unk_0x6239D1A379D387A4() - Local_739.f_9);
	}
	if ((!Global_262145.f_10698 && !unk_0x2A3398C6222EB190(Local_122.f_3, 8)) || (!Global_262145.f_10699 && unk_0x2A3398C6222EB190(Local_122.f_3, 8)))
	{
		if (Local_739.f_6 > 0)
		{
		}
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0x2A3398C6222EB190(iLocal_1334, 1))
	{
		func_649(1);
		unk_0x5C72983073515174(0, 0);
	}
	if (iVar0 == 0)
	{
		func_758(Local_739, Local_122.f_27, Local_122.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x43B24C247F35B6BC() != -1)
	{
		func_758(Local_739, Local_122.f_279, Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_400(unk_0x3D35F9864E4640B1()))
	{
		func_606(0);
	}
	func_628(0);
	func_673(1);
	func_757();
}

void func_757()
{
	unk_0xBEE2834559A8897A();
}

void func_758(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x49CAADAD1ABAB70A();
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
		if (unk_0xB3404E397FF56B3B(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x961467AE077EC8CA(&Var1);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x8DA40E956FD51C24(&Var14);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
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
			Var52.f_12 = uParam12;
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
			Var66.f_12 = uParam12;
			unk_0x03F536C7BCBEA1B0(&Var66);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x3AE25A7FC6625C45(&Var79);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x8952CE44914039E1(&Var93);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x02E2D3529F5B1631(&Var107);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x4B76FBB660A02D46(&Var123);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x4EC33530CC427351(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xAA72309DE122AE0C(&Var150);
			}
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xD9281F0282F9F44A(&Var164);
		}
	}
}

void func_759()
{
	unk_0x15C7C9DD9A0BD58C(iLocal_1544);
	unk_0x15C7C9DD9A0BD58C(iLocal_1543);
}

void func_760(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_761(int iParam0, bool bParam1, bool bParam2)
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
	func_793();
	unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
	unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_792(func_185(unk_0x3D35F9864E4640B1()));
		func_643(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x3D35F9864E4640B1() != -1) && func_791(unk_0x3D35F9864E4640B1()) >= 12)
		{
			func_790(2533, -1);
			iVar1 = func_256(2533, -1, 0);
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
		func_648();
		func_789();
		func_788();
		if ((!func_226(unk_0x3D35F9864E4640B1()) && !func_224(unk_0x3D35F9864E4640B1())) && !func_787())
		{
			func_769();
		}
		func_768();
		if (!unk_0x2A3398C6222EB190(Global_1779211.f_3, 0) && !unk_0x2A3398C6222EB190(Global_1779211.f_3, 1))
		{
			func_435();
		}
		func_767();
		unk_0xD804ACF2A7171150(&(Global_2501777.f_1706), 2);
		func_523();
		func_766();
	}
	if (unk_0xA7D65AEDCF363C6A(1344549371))
	{
		unk_0x812DD153A22D0357(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x3D35F9864E4640B1() != -1 && !func_198(unk_0x3D35F9864E4640B1(), 21)) && !func_234(unk_0x3D35F9864E4640B1(), 0))
		{
			func_433(0);
			func_431(0);
			func_765();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_593(26, -1))
		{
			Global_2457274 = -1;
			func_591(26, -1);
		}
	}
	if (!func_762())
	{
		Global_2488466 = 1;
	}
}

int func_762()
{
	if ((((!func_375(unk_0x3D35F9864E4640B1()) && !func_356(unk_0x3D35F9864E4640B1())) && func_185(unk_0x3D35F9864E4640B1()) != 146) && !func_764()) && !func_763())
	{
		return 0;
	}
	return 1;
}

int func_763()
{
	if (Global_1641087.f_96810 == Global_262145.f_8799)
	{
		return 1;
	}
	return 0;
}

int func_764()
{
	if ((Global_1641087 == 0 && unk_0xF4F91CD09D59F42E()) && (((((((Global_1641087.f_5 != 0 || Global_1641087.f_116067 > 0) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 15)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 18)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 19)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 29)) || unk_0x2A3398C6222EB190(Global_1641087.f_4, 28)) || unk_0x2A3398C6222EB190(Global_1641087.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_765()
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

void func_766()
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_7 = 0;
}

void func_767()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574385 = { Var0 };
}

void func_768()
{
	var uVar0;
	
	Global_1316427 = uVar0;
}

void func_769()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_24), &Global_2408969, 2);
	unk_0x44666CF18D6E211C(&(Global_2404997.f_26), &Global_2408971, 17);
	func_785();
	func_772(1, 1);
	func_770();
}

void func_770()
{
	func_771(0, 0);
}

void func_771(int iParam0, int iParam1)
{
	Global_2404997.f_22 = iParam0;
	Global_2404997.f_23 = iParam1;
}

void func_772(bool bParam0, bool bParam1)
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
		func_784();
	}
	func_775(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_774(0);
	func_773();
}

void func_773()
{
	struct<6> Var0;
	
	if (Global_2404997.f_480.f_1 == unk_0xFFDE6A3A0108B7CB())
	{
		Global_2404997.f_480 = { Var0 };
	}
}

void func_774(bool bParam0)
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

void func_775(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_783())
		{
			func_782();
		}
		Global_2404997.f_680.f_515 = unk_0xFFDE6A3A0108B7CB();
		Global_2404997.f_680.f_504 = iParam1;
		Global_2404997.f_680.f_505 = iParam2;
		Global_2404997.f_680.f_506 = iParam10;
		func_780();
		func_779(8, 0, 0, 0, 0);
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
		func_776();
	}
}

void func_776()
{
	if (func_783() && !func_778())
	{
		func_782();
	}
	if (func_778())
	{
		func_777();
	}
	else
	{
		func_780();
		func_779(0, 0, 0, 0, 0);
		Global_2404997.f_1713 = 0;
		Global_2404997.f_1712 = 0;
	}
}

void func_777()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_680), &(Global_2404997.f_1196), 516);
	Global_2404997.f_480 = { Global_2404997.f_486 };
	if (unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		Global_2404997.f_1712 = 0;
	}
}

int func_778()
{
	if ((Global_2404997.f_1712 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_1196.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_1196.f_515))
	{
		return 1;
	}
	return 0;
}

void func_779(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_780()
{
	if (func_783() && !func_778())
	{
		func_782();
	}
	func_781();
	Global_2404997.f_680 = 0;
}

void func_781()
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

void func_782()
{
	if (func_778())
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

int func_783()
{
	if ((Global_2404997.f_1713 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_680.f_515))
	{
		return 1;
	}
	return 0;
}

void func_784()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_358), &Global_2409303, 121);
}

void func_785()
{
	func_786();
	Global_2404997.f_2172 = 0;
}

void func_786()
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

bool func_787()
{
	return Global_1574292;
}

void func_788()
{
	Global_2501777.f_4705 = 0;
}

void func_789()
{
	if (unk_0x3D35F9864E4640B1() != -1)
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1 = 0;
	}
}

void func_790(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_256(iParam0, func_237(iParam1), 0);
	iVar0++;
	if (!func_473(iParam0))
	{
		func_466(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_467(iParam0, iVar0, iParam1, 1);
	}
}

int func_791(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_204.f_6;
}

int func_792(int iParam0)
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
			if (func_227(unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_793()
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
	func_796(0);
	func_795(0);
	func_794(0);
}

void func_794(int iParam0)
{
	if (Global_2501777.f_4477 != iParam0)
	{
		Global_2501777.f_4477 = iParam0;
	}
}

void func_795(bool bParam0)
{
	if (Global_2501777.f_4476 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2501777.f_4476 = bParam0;
	}
}

void func_796(int iParam0)
{
	if (Global_2501777.f_4474 != iParam0)
	{
		Global_2501777.f_4474 = iParam0;
	}
}

void func_797(struct<21> Param0)
{
	int iVar0;
	
	func_806(func_807(Param0.f_0), Param0);
	unk_0x8A4541F891BF3B2B(24);
	unk_0x79C80114C0FC1BE7(9);
	func_805(0, -1, 0);
	func_803(129);
	unk_0x158D750851ECBBF8(&Local_122, 617);
	unk_0xC0AFA7500AD40377(&Local_756, 577);
	func_802(1);
	if (!func_801())
	{
		func_756();
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x0BDEAF4CD9510F40(0);
		if (unk_0xEF0CB8FF125B9F9C())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_122.f_17[iVar0] = func_6();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_122.f_22[iVar0] = func_6();
				Local_122.f_256[iVar0] = -1;
				Local_122.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0x2462B56C1A432B47(&(Local_122.f_611), &(Local_122.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1335[iVar0] = -1;
			iVar0++;
		}
		Local_739.f_2 = unk_0x5D59DC9563118DFD();
		Local_739.f_8 = unk_0x6239D1A379D387A4();
		func_643(19, 1);
		func_798();
		if (func_195())
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_2), 7);
		}
		Local_756[unk_0x43B24C247F35B6BC() /*18*/].f_9 = -1;
		Global_2501777.f_4791 = -1;
		Local_756[unk_0x43B24C247F35B6BC() /*18*/] = 0;
	}
	else
	{
		func_756();
	}
}

void func_798()
{
	int iVar0;
	
	unk_0x659E5E147E8E6635("relUWPlayer", &iLocal_1543);
	unk_0x659E5E147E8E6635("relUWAi", &iLocal_1544);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x85F49C37BE784CD7(1, Global_1574701[iVar0], iLocal_1543);
		unk_0x85F49C37BE784CD7(1, iLocal_1543, Global_1574701[iVar0]);
		unk_0x85F49C37BE784CD7(1, Global_1574701[iVar0], iLocal_1544);
		unk_0x85F49C37BE784CD7(1, iLocal_1544, Global_1574701[iVar0]);
		unk_0x85F49C37BE784CD7(1, iLocal_1543, joaat("COP"));
		unk_0x85F49C37BE784CD7(1, joaat("COP"), iLocal_1543);
		unk_0x85F49C37BE784CD7(1, iLocal_1543, Global_1574745[5]);
		unk_0x85F49C37BE784CD7(1, Global_1574745[5], iLocal_1543);
		unk_0x85F49C37BE784CD7(1, iLocal_1543, Global_1574734);
		unk_0x85F49C37BE784CD7(1, Global_1574734, iLocal_1543);
		iVar0++;
	}
	unk_0x85F49C37BE784CD7(5, iLocal_1543, iLocal_1544);
	unk_0x85F49C37BE784CD7(5, iLocal_1544, iLocal_1543);
	unk_0x85F49C37BE784CD7(1, 2017343592, iLocal_1544);
	unk_0x85F49C37BE784CD7(5, 2017343592, iLocal_1543);
	func_800(1, &iLocal_1544);
	func_799(&iLocal_1544);
	func_799(&iLocal_1543);
}

void func_799(int iParam0)
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

void func_800(int iParam0, int iParam1)
{
	unk_0x85F49C37BE784CD7(iParam0, joaat("COP"), *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, joaat("COP"));
	unk_0x85F49C37BE784CD7(iParam0, joaat("army"), *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, joaat("army"));
	unk_0x85F49C37BE784CD7(iParam0, -183807561, *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, -183807561);
}

int func_801()
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
		if (func_751())
		{
			return 0;
		}
		if (func_749(155))
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

void func_802(bool bParam0)
{
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_426())
	{
		return;
	}
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_808) || Global_2415153.f_808 == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam0)
		{
			Global_2415153.f_808 = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			Global_2415153.f_808 = -1;
		}
	}
}

void func_803(int iParam0)
{
	func_767();
	func_804();
	func_788();
	Global_1574385.f_4 = iParam0;
	Global_1574385.f_5 = iParam0;
	func_642(iParam0, -1);
	func_8(&(Global_1574385.f_18), 0, 0);
	Global_2501777.f_4542 = 0;
	Global_2456175[0] = func_6();
	Global_2456175[1] = func_6();
	Global_2456175[2] = func_6();
	Global_2456175[3] = func_6();
	Global_2456175[4] = func_6();
	func_766();
	if (!func_221(func_222()))
	{
		func_346();
	}
	if (func_238() && !func_233())
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 16);
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1574385.f_1), 17);
	}
}

void func_804()
{
	var uVar0;
	
	Global_1574410 = uVar0;
}

int func_805(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5343104BDF6779F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_757();
			}
			else
			{
				return 0;
			}
		}
		if (!func_163())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					if (!bParam2)
					{
						func_757();
					}
					else
					{
						return 0;
					}
				}
				if (func_751())
				{
					if (!bParam2)
					{
						func_757();
					}
					else
					{
						return 0;
					}
				}
				if (func_749(155))
				{
					if (!bParam2)
					{
						func_757();
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
					func_757();
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
				func_757();
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
			func_757();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_806(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_757();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_807(int iParam0)
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

int func_808(int iParam0, bool bParam1, bool bParam2)
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

