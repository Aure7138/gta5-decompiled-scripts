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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	struct<617> Local_94 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_711 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_723[4] = { 0, 0, 0, 0 };
	struct<18> Local_728[32];
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	float fLocal_1316 = 0f;
	var uLocal_1317[4] = { 0, 0, 0, 0 };
	struct<8> Local_1322[24];
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518[4] = { 0, 0, 0, 0 };
	int iLocal_1523[4] = { 0, 0, 0, 0 };
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	struct<46> Local_1531[32];
	struct<106> Local_3004 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0 } ;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 32;
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
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
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
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
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
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
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
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	var uLocal_3539[4] = { 0, 0, 0, 0 };
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	int iLocal_3547 = 0;
	int iLocal_3548 = 0;
	struct<2> Local_3549[10];
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	struct<2> Local_3580[5];
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	int iLocal_3595 = 0;
	struct<3> Local_3596 = { 0, 0, 0 } ;
	int iLocal_3599 = 0;
	int iLocal_3600 = 0;
	int iLocal_3601 = 0;
	int iLocal_3602 = 0;
	int iLocal_3603 = 0;
	int iLocal_3604[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3629 = 0;
	int iLocal_3630[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3636 = 0;
	var uLocal_3637[4] = { 0, 0, 0, 0 };
	var uLocal_3642[4] = { 0, 0, 0, 0 };
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	fLocal_89 = -0.05f;
	fLocal_90 = 0.92f;
	fLocal_91 = 1.94f;
	fLocal_92 = 2.99f;
	fLocal_93 = 3.7f;
	fLocal_1316 = -100f;
	iLocal_3537 = -1;
	iLocal_3538 = -1;
	iLocal_3601 = -1;
	if (unk_0x1C6DF6AD69BE853E() && func_665(unk_0x1329891157A54C63(), 0, 1))
	{
		func_654(ScriptParam_0);
	}
	else
	{
		func_626();
	}
	while (true)
	{
		func_625();
		if (func_617() || func_614(19))
		{
			func_626();
		}
		if (func_613())
		{
			func_626();
		}
		func_597();
		switch (func_596(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if ((func_595() == 1 && Local_94.f_1 != -1) && Local_94.f_2 != -1)
				{
					func_593();
					func_589(129, Local_94.f_1, Local_94.f_2, 0);
					if (Global_2451473.f_4627 == -1)
					{
						if (!func_588())
						{
							Global_2451473.f_4627 = 0;
						}
						else
						{
							Global_2451473.f_4627 = 1;
						}
					}
					func_587(Local_94.f_30[0 /*3*/]);
					Local_728[unk_0x519AAFF77CC141DF() /*18*/] = 1;
				}
				else if (func_595() == 4)
				{
					Local_728[unk_0x519AAFF77CC141DF() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_595() == 1)
				{
					func_582();
					func_581();
					func_563();
					func_336();
					func_156();
					func_155();
					func_154();
				}
				else if (func_595() == 4)
				{
					Local_728[unk_0x519AAFF77CC141DF() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_153(&(Local_94.f_320));
				if (func_152(&(Local_94.f_320)))
				{
					Local_728[unk_0x519AAFF77CC141DF() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_728[unk_0x519AAFF77CC141DF() /*18*/] = 4;
			
			case 4:
				func_626();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_595())
			{
				case 0:
					if (func_137())
					{
						if (func_132())
						{
							func_129(func_131(129, Local_94.f_1, Local_94.f_2, 0));
							Local_94.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_120();
					func_31();
					func_22();
					if (func_1())
					{
						Local_94.f_0 = 4;
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
	
	if ((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2))
	{
		if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
	{
		if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_94.f_241 > 0)
	{
		if (Local_94.f_0 != 4)
		{
			if (func_21())
			{
				if (Local_94.f_241 == 3)
				{
					if (func_19())
					{
						if (unk_0x236D8AD7EE179F46(Local_94.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_17(&(Local_94.f_322), 3000, 0))
				{
					if (func_19())
					{
						return 1;
					}
				}
			}
		}
		if (Local_94.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_94.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0x945535897333587B())
				{
					if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
					{
						if (!func_14(unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1)), 0))
						{
							if (Local_728[iVar1 /*18*/].f_17 < 2)
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
				if ((!((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2)) && !unk_0x236D8AD7EE179F46(Local_94.f_3, 6)) && !unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 15);
				}
				func_5();
			}
			else if (Local_94.f_241 < 3)
			{
				if (func_3())
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 16);
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 15);
					func_5();
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
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
		{
			if (!func_4(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1, 0, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x59D35AC211D17FAB(iParam0) + 1;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBEB00EB4ADDC2A33(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x81873881071CD9FE())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x5FEB513A4402FD59(iVar2))
					{
						if (unk_0x0452D5BF20AD945A(iVar2))
						{
							return 0;
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
				else
				{
					iVar3 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
					if (!unk_0x5FEB513A4402FD59(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_5()
{
	if (Local_94.f_241 != 3)
	{
		func_7();
		func_6(&(Local_94.f_324), 0, 0);
		Local_94.f_241 = 3;
	}
}

void func_6(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD74C7D8D2E5E43D2();
		}
		else
		{
			*uParam0 = unk_0xE36DF6414E5CCBBF();
		}
	}
	else
	{
		*uParam0 = unk_0x48E480685981C7D4();
	}
	uParam0->f_1 = 1;
}

void func_7()
{
	if (!func_13())
	{
		return;
	}
	if (!unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == Global_1312577.f_7)
	{
		return;
	}
	func_8();
}

void func_8()
{
	func_10();
	func_9(0);
}

void func_9(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xD74C7D8D2E5E43D2();
		Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_10()
{
	if (!func_12())
	{
	}
	if (func_13())
	{
		unk_0x10F61CB44B66BBDE(&(Global_1312577.f_10));
		func_11();
		unk_0x311B25F9901AB37A();
	}
}

void func_11()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			unk_0x6D55FF05D62B91BC(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_12()
{
	if (!func_13())
	{
		return 0;
	}
	unk_0x35C3DC3A3BE08CC1(&(Global_1312577.f_10));
	func_11();
	return unk_0x8BF06EFC37AF94F0();
}

int func_13()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312729;
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

int func_19()
{
	int iVar0;
	
	if (!func_20(&(Local_94.f_328)))
	{
		func_18(&(Local_94.f_328), 0, 0);
	}
	else if (func_17(&(Local_94.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar0]))
		{
			if (Local_94.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x1C7D9BFDF15A02B4())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar1]))
		{
			if (!func_30(Local_94.f_48[iVar1]))
			{
				switch (Local_94.f_85[iVar1])
				{
					case 0:
						if (!unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar1]), 0))
						{
							Local_94.f_85[iVar1] = 1;
						}
						else if (unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar1]), 0) && func_29(iVar1))
						{
							Local_94.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_94.f_241 == 1)
						{
							if (!func_21())
							{
								if (unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar1]), 0))
								{
									iVar4 = unk_0xE68E6B44DABA9C05(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar1]), 0);
									if (func_28(iVar4, 250f))
									{
										Local_94.f_85[iVar1] = 2;
									}
									else if (unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_94.f_110[iVar0] == -1 || !func_27(iVar1))
												{
													iVar2 = func_26();
													if (iVar2 != func_25())
													{
														iVar3 = unk_0xE495E987CB2BE7EF(iVar2);
														if (!unk_0x5FEB513A4402FD59(iVar3))
														{
															if (func_24(iVar4, iVar3, 1) > 250f)
															{
																Local_94.f_110[iVar0] = iVar2;
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
									Local_94.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_94.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_94.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_94.f_241 == 1)
						{
							if (func_21())
							{
								Local_94.f_85[iVar1] = 3;
							}
							else if (unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
							{
								Local_94.f_85[iVar1] = 3;
							}
							else if (unk_0x236D8AD7EE179F46(Local_94.f_464, iVar1))
							{
								Local_94.f_85[iVar1] = 1;
								unk_0xC69E84EBBD7166E6(&(Local_94.f_464), iVar1);
							}
						}
						else
						{
							Local_94.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0x5EF53977B76418E5(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar1])))
						{
							func_23(&(Local_94.f_48[iVar1]));
							Local_94.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_23(var uParam0)
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0x3C6E68D2D7F41A39(&uVar0);
	}
}

float func_24(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

int func_25()
{
	return -1;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_25();
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (iVar0 == func_25())
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
			{
				if (Local_728[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_728[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_27(int iParam0)
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
			if (Local_94.f_110[iVar0] != -1)
			{
				iVar3 = Local_94.f_110[iVar0];
				iVar1 = unk_0x6528B1497E4313F1(iVar3);
				if (unk_0xA89AE5060232966A(iVar1))
				{
					if (func_665(iVar1, 1, 1))
					{
						if (unk_0x92016690A1675C2F(iVar1))
						{
							iVar2 = unk_0x563980A76107BC80(iVar1);
							iVar3 = iVar2;
							if (Local_728[iVar3 /*18*/].f_17 != 1)
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

int func_28(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			if (Local_728[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_728[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0));
					iVar2 = unk_0xE495E987CB2BE7EF(iVar1);
					if (!unk_0x5FEB513A4402FD59(iVar2))
					{
						if (func_24(uParam0, iVar2, 1) < fParam1)
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

int func_29(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0]), 0);
	if (!unk_0x7404950238A154C2(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_30(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(uParam0));
	}
	return 1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_94.f_463 > 0)
	{
		if (Local_94.f_28 != Local_94.f_463)
		{
			Local_94.f_28 = Local_94.f_463;
		}
	}
	switch (Local_94.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_94.f_28)
			{
				if (Local_94.f_17[iVar0] == func_25())
				{
				}
				else
				{
					iVar1++;
					if (unk_0x236D8AD7EE179F46(Local_94.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_117();
			func_116();
			if (unk_0x236D8AD7EE179F46(Local_94.f_3, 4))
			{
				Local_94.f_463 = iVar1;
			}
			if (func_114())
			{
				func_107();
				Local_94.f_241 = 1;
			}
			else if (unk_0x236D8AD7EE179F46(Local_94.f_3, 4) && func_104() > 1)
			{
				func_103();
				func_107();
				Local_94.f_241 = 1;
			}
			if (!func_588())
			{
				if (unk_0x335F574AD77E59CE(Local_94.f_7[0]))
				{
					if (!func_101(Local_94.f_7[0]))
					{
						Var2.f_2 = 141;
						func_99(Var2, func_100(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), 1, 0));
						Local_94.f_241 = 2;
					}
				}
			}
			if (Local_94.f_241 == 0)
			{
				if (!func_20(&(Local_94.f_330)))
				{
					if (!func_20(&(Local_94.f_326)))
					{
						func_18(&(Local_94.f_330), 0, 0);
					}
				}
				else if (func_20(&(Local_94.f_326)))
				{
					func_98(&(Local_94.f_330));
				}
				else if (func_17(&(Local_94.f_330), func_97(), 0))
				{
					Var2.f_2 = 141;
					func_99(Var2, func_96(1));
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 12);
					func_5();
				}
				if (unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
				{
					func_5();
				}
			}
			break;
		
		case 1:
			func_34();
			func_32();
			func_103();
			if (unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
			{
				Local_94.f_241 = 2;
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

void func_32()
{
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 19))
	{
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
	{
		if (!func_20(&(Local_94.f_332)))
		{
			func_18(&(Local_94.f_332), 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 7);
		}
		else if (func_17(&(Local_94.f_332), func_33(), 0))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 6);
		}
	}
}

int func_33()
{
	if (func_588())
	{
		return Global_262145.f_8878;
	}
	return Global_262145.f_8855;
}

void func_34()
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
	if (Local_94.f_278 > 0)
	{
		if (Local_94.f_279 >= Local_94.f_278)
		{
			if (Local_94.f_254 >= Local_94.f_255)
			{
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 0);
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 1);
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_94.f_278 > 0)
		{
			if (Local_94.f_279 >= Local_94.f_278)
			{
				if (Local_94.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_94.f_256[0]);
				}
				if (Local_94.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_94.f_256[1]);
				}
				if (Local_94.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_94.f_256[2]);
				}
				if (Local_94.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_94.f_256[3]);
				}
				if (iVar5 >= Local_94.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar4]))
						{
							if (!func_30(Local_94.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 0);
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 1);
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar4]))
					{
						if (!func_30(Local_94.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_20(&(Local_94.f_347)))
					{
						func_18(&(Local_94.f_347), 0, 0);
					}
					else if (func_17(&(Local_94.f_347), 3000, 0))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 0);
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 1);
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 0) || !unk_0x236D8AD7EE179F46(Local_94.f_3, 1))
	{
		if (Local_94.f_249 >= func_95())
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 0);
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_94.f_242)
		{
			if (unk_0x250A8F68F67CA19A(Local_94.f_73[iVar0]))
			{
				if (func_94(iVar0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_94.f_245, iVar0))
					{
						if ((Local_94.f_27 != joaat("hydra") && !func_4(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar0]), 1, 0, 0)) || Local_94.f_27 == joaat("hydra"))
						{
							unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 0);
							if (func_20(&(Local_3580[iVar0 /*2*/])))
							{
								func_98(&(Local_3580[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar0]), 1, 0, 0) && unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0x236D8AD7EE179F46(Local_94.f_3, 0))
							{
								unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 0);
							}
							if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 18))
							{
								func_93(func_96(1), iVar0);
								unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 18);
							}
						}
						else if (func_92(iVar0) || !func_588())
						{
							if (unk_0x236D8AD7EE179F46(Local_94.f_3, 0))
							{
								unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 0);
							}
							if (!unk_0x236D8AD7EE179F46(Local_94.f_303, iVar0))
							{
								func_91(func_96(1), iVar0);
								unk_0xF3148AAF69AF9CBC(&(Local_94.f_303), iVar0);
							}
						}
						else
						{
							func_23(&(Local_94.f_73[iVar0]));
							if (!unk_0x236D8AD7EE179F46(Local_94.f_253, iVar0))
							{
								Local_94.f_251 = (Local_94.f_251 - 1);
								if (func_90() > 1)
								{
									if (Local_94.f_252 > 0)
									{
										Local_94.f_302++;
										func_89(iVar0, func_96(1));
									}
								}
								unk_0xF3148AAF69AF9CBC(&(Local_94.f_253), iVar0);
							}
							func_98(&(Local_3580[iVar0 /*2*/]));
						}
					}
				}
				else if (func_88(iVar0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_94.f_253, iVar0))
					{
						Local_94.f_251 = (Local_94.f_251 - 1);
						if (func_90() > 1)
						{
							if (Local_94.f_252 > 0)
							{
								Local_94.f_302++;
								func_89(iVar0, func_96(1));
							}
						}
						if (Local_94.f_27 == joaat("hydra"))
						{
							Local_94.f_254++;
						}
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_253), iVar0);
					}
					if (func_20(&(Local_94.f_336[iVar0 /*2*/])))
					{
						func_98(&(Local_94.f_336[iVar0 /*2*/]));
					}
					func_23(&(Local_94.f_73[iVar0]));
				}
				else
				{
					if (unk_0x236D8AD7EE179F46(Local_94.f_3, 0))
					{
						unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 0);
					}
					if (!unk_0x236D8AD7EE179F46(Local_94.f_271, iVar0))
					{
						if (!func_20(&(Local_94.f_336[iVar0 /*2*/])))
						{
							func_18(&(Local_94.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_17(&(Local_94.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_94.f_271), iVar0);
						}
						else if (func_17(&(Local_94.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 18))
								{
									func_93(func_96(1), iVar0);
									unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 18);
								}
							}
							else if (func_92(iVar0) || !func_588())
							{
								if (!unk_0x236D8AD7EE179F46(Local_94.f_303, iVar0))
								{
									func_91(func_96(1), iVar0);
									unk_0xF3148AAF69AF9CBC(&(Local_94.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_94.f_116)
			{
				if (unk_0x250A8F68F67CA19A(Local_94.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_30(Local_94.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_86((iVar0 * 4 + iVar1)))
							{
								unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 0);
							}
							else if (func_85(iVar6))
							{
								if (!func_17(&(Local_94.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0xDBC7B8E3258E68CE(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_84(&(Local_1322[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_23(&(Local_94.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar6)], func_82(iVar6)))
								{
									if (Local_94.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_81((iVar0 * 4 + iVar1), func_96(1));
										Local_94.f_254++;
									}
								}
								Local_94.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_20(&(Local_94.f_364[iVar6 /*2*/])))
								{
									func_98(&(Local_94.f_364[iVar6 /*2*/]));
								}
								if (unk_0x236D8AD7EE179F46(Local_94.f_275[func_83(iVar6)], func_82(iVar6)))
								{
									unk_0xC69E84EBBD7166E6(&(Local_94.f_275[func_83(iVar6)]), func_82(iVar6));
								}
							}
							else
							{
								if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar6)], func_82(iVar6)))
								{
									if (!func_20(&(Local_94.f_364[iVar6 /*2*/])))
									{
										func_18(&(Local_94.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_17(&(Local_94.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0xF3148AAF69AF9CBC(&(Local_94.f_272[func_83(iVar6)]), func_82(iVar6));
										func_98(&(Local_94.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0x236D8AD7EE179F46(Local_94.f_275[func_83(iVar6)], func_82(iVar6)))
								{
									unk_0xF3148AAF69AF9CBC(&(Local_94.f_275[func_83(iVar6)]), func_82(iVar6));
								}
							}
						}
					}
					else if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar6)], func_82(iVar6)) || Local_94.f_27 == joaat("hydra"))
					{
						if (!func_17(&(Local_94.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_23(&(Local_94.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar6)], func_82(iVar6)))
						{
							if (Local_94.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_94.f_254++;
								func_81((iVar0 * 4 + iVar1), func_96(1));
							}
						}
						Local_94.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0x236D8AD7EE179F46(Local_94.f_275[func_83(iVar6)], func_82(iVar6)))
						{
							unk_0xC69E84EBBD7166E6(&(Local_94.f_275[func_83(iVar6)]), func_82(iVar6));
						}
					}
					else
					{
						if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar6)], func_82(iVar6)))
						{
							if (!func_20(&(Local_94.f_364[iVar6 /*2*/])))
							{
								func_18(&(Local_94.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_17(&(Local_94.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(Local_94.f_272[func_83(iVar6)]), func_82(iVar6));
								func_98(&(Local_94.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0x236D8AD7EE179F46(Local_94.f_275[func_83(iVar6)], func_82(iVar6)))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_94.f_275[func_83(iVar6)]), func_82(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_94.f_249 < func_95())
			{
				if (func_67(iVar0))
				{
				}
				unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 2))
	{
		if (Local_94.f_247 >= Global_262145.f_7987)
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_94.f_243)
		{
			if (unk_0x250A8F68F67CA19A(Local_94.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0x930F8FBB8E9537CC(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iVar1)])))
				{
					unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 2);
				}
				else if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar7)], func_82(iVar7)))
				{
					if (!func_17(&(Local_94.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_20(&(Local_94.f_364[iVar7 /*2*/])))
					{
						func_98(&(Local_94.f_364[iVar7 /*2*/]));
					}
					func_23(&(Local_94.f_48[(20 + iVar1)]));
					if (Local_94.f_85[(20 + iVar1)] > 0)
					{
						Local_94.f_254++;
						if (func_90() > 1)
						{
							if (Local_94.f_317 > 0)
							{
								Local_94.f_316++;
							}
						}
						func_81((20 + iVar1), func_96(1));
					}
					Local_94.f_85[(20 + iVar1)] = 0;
					if (unk_0x236D8AD7EE179F46(Local_94.f_275[func_83(iVar7)], func_82(iVar7)))
					{
						unk_0xC69E84EBBD7166E6(&(Local_94.f_275[func_83(iVar7)]), func_82(iVar7));
					}
				}
				else
				{
					if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar7)], func_82(iVar7)))
					{
						if (!func_20(&(Local_94.f_364[iVar7 /*2*/])))
						{
							func_18(&(Local_94.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_17(&(Local_94.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_94.f_272[func_83(iVar7)]), func_82(iVar7));
							func_98(&(Local_94.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0x236D8AD7EE179F46(Local_94.f_275[func_83(iVar7)], func_82(iVar7)))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_275[func_83(iVar7)]), func_82(iVar7));
					}
				}
			}
			if (Local_94.f_247 < func_66())
			{
				if (func_50(iVar1))
				{
				}
				unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 2);
			}
			iVar1++;
		}
	}
	func_35();
}

void func_35()
{
	int iVar0;
	int iVar1;
	
	if (func_90() == 1)
	{
		return;
	}
	if (func_90() == 2)
	{
		if (Local_94.f_252 > 0)
		{
			if (Local_94.f_302 > 0)
			{
				if (Local_94.f_302 >= (Local_94.f_252 - 1))
				{
					if (func_49() <= func_48())
					{
						if (func_47() == 0)
						{
							iVar0 = Local_94.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_94.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_46();
									Local_94.f_279++;
									func_39();
								}
								else if (Local_94.f_318 >= func_38())
								{
									func_46();
									Local_94.f_279++;
									func_39();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_90() == 3)
	{
		if (Local_94.f_317 > 0)
		{
			if (Local_94.f_316 > 0)
			{
				if (Local_94.f_316 >= Local_94.f_317)
				{
					if (Local_94.f_317 >= func_37())
					{
						func_46();
						Local_94.f_279++;
						func_39();
					}
				}
			}
		}
	}
	else if (func_90() == 4)
	{
		if (Local_94.f_316 > 0)
		{
			if (Local_94.f_302 > 0)
			{
				if (Local_94.f_317 > 0)
				{
					if (Local_94.f_316 >= (Local_94.f_317 - 2))
					{
						if (Local_94.f_252 > 0)
						{
							if (Local_94.f_302 >= (Local_94.f_252 - 2))
							{
								if (func_49() <= func_48())
								{
									if (func_47() <= func_36())
									{
										iVar0 = Local_94.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_94.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_46();
												Local_94.f_279++;
												func_39();
											}
											else if (Local_94.f_318 >= func_38())
											{
												func_46();
												Local_94.f_279++;
												func_39();
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
	else if (func_90() == 5)
	{
		if (Local_94.f_252 > 0)
		{
			if (Local_94.f_302 > 0)
			{
				if (Local_94.f_302 >= (Local_94.f_252 - 1))
				{
					if (func_49() <= func_48())
					{
						if (func_47() == 0)
						{
							func_46();
							Local_94.f_279++;
							func_39();
						}
					}
				}
			}
		}
	}
}

int func_36()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_94.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_94.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_90() == 4)
				{
					return 2;
				}
				else if (func_90() == 2)
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

int func_37()
{
	return Local_94.f_305[Local_94.f_279];
}

int func_38()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_94.f_278)
	{
		iVar0 = (iVar0 + Local_94.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	if (Local_94.f_29 == -1)
	{
		iVar0 = func_45(Local_94.f_27);
		Local_94.f_29 = unk_0x2E0A9E3291F398E3(0, iVar0);
		if (func_588())
		{
			if (Local_94.f_27 == joaat("hydra"))
			{
				if (Local_94.f_29 == 2)
				{
					Local_94.f_29 = 4;
				}
			}
			else if (Local_94.f_27 == joaat("savage"))
			{
				if (Local_94.f_29 == 0)
				{
					Local_94.f_29 = 1;
				}
				else if (Local_94.f_29 == 1)
				{
					Local_94.f_29 = 2;
				}
				else if (Local_94.f_29 == 2)
				{
					Local_94.f_29 = 3;
				}
			}
			else if (Local_94.f_27 == joaat("valkyrie"))
			{
				if (Local_94.f_29 == 2)
				{
					Local_94.f_29 = 3;
				}
				else if (Local_94.f_29 == 3)
				{
					Local_94.f_29 = 4;
				}
			}
			else if (Local_94.f_27 == joaat("buzzard"))
			{
				if (Local_94.f_29 == 0)
				{
					Local_94.f_29 = 1;
				}
				else if (Local_94.f_29 == 1)
				{
					Local_94.f_29 = 2;
				}
				else if (Local_94.f_29 == 2)
				{
					Local_94.f_29 = 3;
				}
				else if (Local_94.f_29 == 3)
				{
					Local_94.f_29 = 4;
				}
			}
		}
		else if (Local_94.f_27 == joaat("savage"))
		{
			if (Local_94.f_29 == 0)
			{
				Local_94.f_29 = 1;
			}
			else if (Local_94.f_29 == 1)
			{
				Local_94.f_29 = 2;
			}
			else if (Local_94.f_29 == 2)
			{
				Local_94.f_29 = 3;
			}
		}
	}
	switch (Local_94.f_27)
	{
		case joaat("rhino"):
			Local_94.f_280[0] = 4;
			Local_94.f_291[0] = func_44(4);
			Local_94.f_305[0] = func_43(4);
			Local_94.f_280[1] = 4;
			Local_94.f_291[1] = func_44(4);
			Local_94.f_305[1] = func_43(4);
			Local_94.f_280[2] = 4;
			Local_94.f_291[2] = func_44(4);
			Local_94.f_305[2] = func_43(4);
			if (Local_94.f_12 <= 2 || !func_588())
			{
				Local_94.f_278 = 3;
			}
			else if (Local_94.f_12 == 3)
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_278 = 4;
			}
			else
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 4;
				Local_94.f_291[4] = func_44(4);
				Local_94.f_305[4] = func_43(4);
				Local_94.f_278 = 5;
			}
			Local_94.f_255 = func_40();
			if (!func_588())
			{
				Local_94.f_1 = 0;
			}
			else
			{
				Local_94.f_1 = 5;
			}
			Local_94.f_2 = Local_94.f_29;
			switch (Local_94.f_29)
			{
				case 0:
					Local_94.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_94.f_43[0] = 269.414f;
					Local_94.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_94.f_43[1] = 3.5491f;
					Local_94.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_94.f_43[2] = 54.4509f;
					Local_94.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_94.f_43[3] = 178.1948f;
					Local_94.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_94.f_175[0] = 270.8322f;
					Local_94.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_94.f_175[1] = 177.3506f;
					Local_94.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_94.f_175[2] = 318.1089f;
					Local_94.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_94.f_175[3] = 272.0801f;
					Local_94.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_94.f_175[4] = 104.0591f;
					Local_94.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_94.f_148[0] = 296.4225f;
					Local_94.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_94.f_148[1] = 164.9695f;
					Local_94.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_94.f_148[2] = 136.0596f;
					Local_94.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_94.f_148[3] = 116.379f;
					Local_94.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_94.f_148[4] = 86.6586f;
					Local_94.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_94.f_148[5] = 74.6822f;
					Local_94.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_94.f_148[6] = 206.8863f;
					Local_94.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_94.f_148[7] = 267.8581f;
					Local_94.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_94.f_148[8] = 267.5856f;
					Local_94.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_94.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_94.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_94.f_43[0] = 194.8062f;
					Local_94.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_94.f_43[1] = 238.9372f;
					Local_94.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_94.f_43[2] = 16.3071f;
					Local_94.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_94.f_43[3] = 209.9883f;
					Local_94.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_94.f_148[0] = 221.3913f;
					Local_94.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_94.f_148[1] = 246.3415f;
					Local_94.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_94.f_148[2] = 213.4087f;
					Local_94.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_94.f_148[3] = 100.5405f;
					Local_94.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_94.f_148[4] = 289.6017f;
					Local_94.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_94.f_148[5] = 285.6456f;
					Local_94.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_94.f_148[6] = 310.9245f;
					Local_94.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_94.f_148[7] = 46.7117f;
					Local_94.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_94.f_148[8] = 35.9192f;
					Local_94.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_94.f_148[9] = 207.53f;
					Local_94.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_94.f_175[0] = 286.6127f;
					Local_94.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_94.f_175[1] = 124.1428f;
					Local_94.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_94.f_175[2] = 275.0147f;
					Local_94.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_94.f_175[3] = 287.91f;
					Local_94.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_94.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_94.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_94.f_43[0] = 172.439f;
					Local_94.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_94.f_43[1] = 53.9805f;
					Local_94.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_94.f_43[2] = 303.2142f;
					Local_94.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_94.f_43[3] = 218.5974f;
					Local_94.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_94.f_148[0] = 264.5842f;
					Local_94.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_94.f_148[1] = 133.7932f;
					Local_94.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_94.f_148[2] = 205.1215f;
					Local_94.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_94.f_148[3] = 66.1065f;
					Local_94.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_94.f_148[4] = 7.8064f;
					Local_94.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_94.f_148[5] = 358.7563f;
					Local_94.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_94.f_148[6] = 142.1748f;
					Local_94.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_94.f_148[7] = 247.816f;
					Local_94.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_94.f_148[8] = 124.4666f;
					Local_94.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_94.f_148[9] = 348.6588f;
					Local_94.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_94.f_175[0] = 89.8563f;
					Local_94.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_94.f_175[1] = 163.8004f;
					Local_94.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_94.f_175[2] = 270.0754f;
					Local_94.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_94.f_175[3] = 184.9752f;
					Local_94.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_94.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_94.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_94.f_43[0] = 0.5044f;
					Local_94.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_94.f_43[1] = 179.2507f;
					Local_94.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_94.f_43[2] = 0.3066f;
					Local_94.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_94.f_43[3] = 180.2973f;
					Local_94.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_94.f_148[0] = 336.7541f;
					Local_94.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_94.f_148[1] = 6.0929f;
					Local_94.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_94.f_148[2] = 4.2803f;
					Local_94.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_94.f_148[3] = 274.985f;
					Local_94.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_94.f_148[4] = 267.2555f;
					Local_94.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_94.f_148[5] = 6.5529f;
					Local_94.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_94.f_148[6] = 89.1724f;
					Local_94.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_94.f_148[7] = 348.279f;
					Local_94.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_94.f_148[8] = 267.8075f;
					Local_94.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_94.f_148[9] = 0.5237f;
					Local_94.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_94.f_175[0] = 357.9713f;
					Local_94.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_94.f_175[1] = 269.3234f;
					Local_94.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_94.f_175[2] = 269.3055f;
					Local_94.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_94.f_175[3] = 359.1497f;
					Local_94.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_94.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_94.f_240 = joaat("insurgent");
			Local_94.f_280[0] = 2;
			Local_94.f_291[0] = func_44(2);
			Local_94.f_280[1] = 4;
			Local_94.f_291[1] = func_44(4);
			Local_94.f_305[1] = func_43(4);
			Local_94.f_280[2] = 2;
			Local_94.f_291[2] = func_44(2);
			if (Local_94.f_12 <= 2 || !func_588())
			{
				Local_94.f_280[3] = 5;
				Local_94.f_291[3] = func_44(5);
				Local_94.f_278 = 4;
			}
			else if (Local_94.f_12 == 3)
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 5;
				Local_94.f_291[5] = func_44(5);
				Local_94.f_278 = 6;
			}
			else
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 4;
				Local_94.f_291[5] = func_44(4);
				Local_94.f_305[5] = func_43(4);
				Local_94.f_280[6] = 5;
				Local_94.f_291[6] = func_44(5);
				Local_94.f_278 = 7;
			}
			Local_94.f_255 = func_40();
			if (!func_588())
			{
				Local_94.f_1 = 2;
			}
			else
			{
				Local_94.f_1 = 7;
			}
			Local_94.f_2 = Local_94.f_29;
			switch (Local_94.f_29)
			{
				case 0:
					Local_94.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_94.f_43[0] = 331.74f;
					Local_94.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_94.f_43[1] = 327.7335f;
					Local_94.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_94.f_43[2] = 149.1604f;
					Local_94.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_94.f_43[3] = 150.6753f;
					Local_94.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_94.f_148[0] = 147.2177f;
					Local_94.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_94.f_148[1] = 103.9461f;
					Local_94.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_94.f_148[2] = 160.822f;
					Local_94.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_94.f_148[3] = 205.8375f;
					Local_94.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_94.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_94.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_94.f_43[0] = 344.2504f;
					Local_94.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_94.f_43[1] = 340.3425f;
					Local_94.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_94.f_43[2] = 351.5693f;
					Local_94.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_94.f_43[3] = 354.2446f;
					Local_94.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_94.f_148[0] = 245.2865f;
					Local_94.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_94.f_148[1] = 74.1185f;
					Local_94.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_94.f_148[2] = 10.2312f;
					Local_94.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_94.f_148[3] = 222.4017f;
					Local_94.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_94.f_148[4] = 150.2763f;
					Local_94.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_94.f_148[5] = 105.4526f;
					Local_94.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_94.f_148[6] = 88.9429f;
					Local_94.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_94.f_148[7] = 51.1733f;
					Local_94.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_94.f_148[8] = 169.7083f;
					Local_94.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_94.f_148[9] = 29.5849f;
					Local_94.f_243 = 3;
					break;
				
				case 2:
					if (!func_588())
					{
						Local_94.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_94.f_43[0] = 319.153f;
					}
					else
					{
						Local_94.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_94.f_43[0] = 319.153f;
						Local_94.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_94.f_43[1] = 316.7079f;
						Local_94.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_94.f_43[2] = 316.9623f;
						Local_94.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_94.f_43[3] = 314.2003f;
					}
					Local_94.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_94.f_148[0] = 326.4292f;
					Local_94.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_94.f_148[1] = 6.8118f;
					Local_94.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_94.f_148[2] = 32.8776f;
					Local_94.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_94.f_148[3] = 8.387f;
					Local_94.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_94.f_148[4] = 291.5504f;
					Local_94.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_94.f_148[5] = 333.1838f;
					Local_94.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_94.f_148[6] = 203.8353f;
					Local_94.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_94.f_148[7] = 32.2329f;
					Local_94.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_94.f_148[8] = 195.4847f;
					Local_94.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_94.f_148[9] = 327.4941f;
					Local_94.f_243 = 4;
					break;
				
				case 3:
					if (!func_588())
					{
						Local_94.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_94.f_43[0] = 156.0209f;
					}
					else
					{
						Local_94.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_94.f_43[0] = 156.0209f;
						Local_94.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_94.f_43[1] = 41.8571f;
						Local_94.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_94.f_43[2] = 305.7411f;
						Local_94.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_94.f_43[3] = 223.2489f;
					}
					if (func_90() == 2 || func_90() == 5)
					{
						Local_94.f_242 = 3;
					}
					else
					{
						Local_94.f_242 = 4;
					}
					Local_94.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_94.f_148[0] = 197.3456f;
					Local_94.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_94.f_148[1] = 140.7211f;
					Local_94.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_94.f_148[2] = 98.9528f;
					Local_94.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_94.f_148[3] = 107.0238f;
					Local_94.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_94.f_148[4] = 202.129f;
					Local_94.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_94.f_148[5] = 230.1207f;
					Local_94.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_94.f_148[6] = 36.194f;
					Local_94.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_94.f_148[7] = 48.2522f;
					Local_94.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_94.f_148[8] = 296.114f;
					Local_94.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_94.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_94.f_240 = joaat("lazer");
			Local_94.f_280[0] = 2;
			Local_94.f_291[0] = func_44(2);
			Local_94.f_280[1] = 2;
			Local_94.f_291[1] = func_44(2);
			Local_94.f_280[2] = 2;
			Local_94.f_291[2] = func_44(2);
			if (Local_94.f_12 <= 2 || !func_588())
			{
				Local_94.f_278 = 3;
			}
			else if (Local_94.f_12 == 3)
			{
				Local_94.f_280[3] = 2;
				Local_94.f_291[3] = func_44(2);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_278 = 5;
			}
			else
			{
				Local_94.f_280[3] = 2;
				Local_94.f_291[3] = func_44(2);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 2;
				Local_94.f_291[5] = func_44(2);
				Local_94.f_278 = 6;
			}
			Local_94.f_255 = func_40();
			if (!func_588())
			{
				Local_94.f_1 = 1;
			}
			else
			{
				Local_94.f_1 = 6;
			}
			Local_94.f_2 = Local_94.f_29;
			switch (Local_94.f_29)
			{
				case 0:
					if (!func_588())
					{
						Local_94.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_94.f_43[0] = 197.4435f;
					}
					else
					{
						Local_94.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_94.f_43[0] = 197.4435f;
						Local_94.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_94.f_43[1] = 197.1133f;
						Local_94.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_94.f_43[2] = 272.2065f;
						Local_94.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_94.f_43[3] = 142.941f;
					}
					Local_94.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_94.f_175[0] = 34.149f;
					Local_94.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_94.f_175[1] = -26.0182f;
					Local_94.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_94.f_175[2] = 88.3998f;
					Local_94.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_94.f_175[3] = -141.7949f;
					Local_94.f_228[0] = 10000;
					Local_94.f_228[1] = 10000;
					Local_94.f_228[2] = 10000;
					Local_94.f_228[3] = 10000;
					Local_94.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_94.f_148[0] = 143.4012f;
					Local_94.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_94.f_148[1] = 212.1136f;
					Local_94.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_94.f_148[2] = 95.8248f;
					Local_94.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_94.f_148[3] = 113.3084f;
					Local_94.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_94.f_148[4] = 260.1329f;
					Local_94.f_242 = 4;
					break;
				
				case 1:
					if (!func_588())
					{
						Local_94.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_94.f_43[0] = 131.0993f;
					}
					else
					{
						Local_94.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_94.f_43[0] = 131.0993f;
						Local_94.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_94.f_43[1] = 127.8408f;
						Local_94.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_94.f_43[2] = 131.1571f;
						Local_94.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_94.f_43[3] = 132.943f;
					}
					Local_94.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_94.f_175[0] = 316.9068f;
					Local_94.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_94.f_175[1] = 142.3075f;
					Local_94.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_94.f_175[2] = 93.1231f;
					Local_94.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_94.f_175[3] = -9.0334f;
					Local_94.f_228[0] = 10000;
					Local_94.f_228[1] = 10000;
					Local_94.f_228[2] = 10000;
					Local_94.f_228[3] = 10000;
					Local_94.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_94.f_148[0] = 236.3566f;
					Local_94.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_94.f_148[1] = 212.7533f;
					Local_94.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_94.f_148[2] = 299.3619f;
					Local_94.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_94.f_148[3] = 115.7556f;
					Local_94.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_94.f_148[4] = 191.3862f;
					Local_94.f_242 = 4;
					break;
				
				case 2:
					Local_94.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_94.f_43[0] = 176.244f;
					Local_94.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_94.f_175[0] = 93.8354f;
					Local_94.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_94.f_175[1] = 250.5173f;
					Local_94.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_94.f_175[2] = 337.8961f;
					Local_94.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_94.f_175[3] = 142.1369f;
					Local_94.f_228[0] = 10000;
					Local_94.f_228[1] = 10000;
					Local_94.f_228[2] = 10000;
					Local_94.f_228[3] = 10000;
					Local_94.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_94.f_148[0] = 208.2624f;
					Local_94.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_94.f_148[1] = 349.048f;
					Local_94.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_94.f_148[2] = 69.8162f;
					Local_94.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_94.f_148[3] = 286.6181f;
					Local_94.f_242 = 4;
					Local_94.f_243 = 4;
					break;
				
				case 3:
					Local_94.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_94.f_43[0] = 292.0822f;
					Local_94.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_94.f_43[1] = 43.3907f;
					Local_94.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_94.f_43[2] = 124.2279f;
					Local_94.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_94.f_43[3] = 129.3366f;
					Local_94.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_94.f_175[0] = 137.5025f;
					Local_94.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_94.f_175[1] = 227.9336f;
					Local_94.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_94.f_175[2] = 6.0299f;
					Local_94.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_94.f_175[3] = -87.5596f;
					Local_94.f_228[0] = 10000;
					Local_94.f_228[1] = 10000;
					Local_94.f_228[2] = 10000;
					Local_94.f_228[3] = 10000;
					Local_94.f_242 = 4;
					Local_94.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_94.f_148[0] = 338.8487f;
					Local_94.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_94.f_148[1] = 272.5443f;
					Local_94.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_94.f_148[2] = 223.0158f;
					Local_94.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_94.f_148[3] = 355.6682f;
					Local_94.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_94.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_588())
					{
						Local_94.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_94.f_43[0] = 331.7771f;
					}
					else
					{
						Local_94.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_94.f_43[0] = 331.7771f;
						Local_94.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_94.f_43[1] = 324.1843f;
						Local_94.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_94.f_43[2] = 330.0586f;
						Local_94.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_94.f_43[3] = 329.5413f;
					}
					Local_94.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_94.f_175[0] = 146.9594f;
					Local_94.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_94.f_175[1] = 137.6555f;
					Local_94.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_94.f_175[2] = 114.7478f;
					Local_94.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_94.f_175[3] = -84.6269f;
					Local_94.f_228[0] = 10000;
					Local_94.f_228[1] = 10000;
					Local_94.f_228[2] = 10000;
					Local_94.f_228[3] = 10000;
					Local_94.f_242 = 4;
					Local_94.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_94.f_148[0] = 153.0449f;
					Local_94.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_94.f_148[1] = 153.1271f;
					Local_94.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_94.f_148[2] = 331.3771f;
					Local_94.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_94.f_148[3] = 183.2579f;
					Local_94.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_94.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_94.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_94.f_43[0] = 184.7817f;
					Local_94.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_94.f_175[0] = 91.7761f;
					Local_94.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_94.f_175[1] = 269.7376f;
					Local_94.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_94.f_175[1] = 211.4614f;
					Local_94.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_94.f_175[3] = 148.9204f;
					Local_94.f_228[0] = 10000;
					Local_94.f_228[1] = 10000;
					Local_94.f_228[2] = 10000;
					Local_94.f_228[3] = 10000;
					Local_94.f_242 = 4;
					Local_94.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_94.f_148[0] = 113.298f;
					Local_94.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_94.f_148[1] = 353.0292f;
					Local_94.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_94.f_148[2] = 216.1793f;
					Local_94.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_94.f_148[3] = 347.4008f;
					Local_94.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_94.f_240 = joaat("buzzard");
			Local_94.f_280[0] = 2;
			Local_94.f_291[0] = func_44(2);
			Local_94.f_305[0] = func_43(4);
			Local_94.f_280[1] = 4;
			Local_94.f_291[1] = func_44(4);
			Local_94.f_305[1] = func_43(4);
			Local_94.f_280[2] = 2;
			Local_94.f_291[2] = func_44(2);
			Local_94.f_305[2] = func_43(4);
			if (Local_94.f_12 <= 2 || !func_588())
			{
				Local_94.f_280[3] = 5;
				Local_94.f_291[3] = func_44(5);
				Local_94.f_278 = 4;
			}
			else if (Local_94.f_12 == 3)
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 5;
				Local_94.f_291[5] = func_44(5);
				Local_94.f_278 = 6;
			}
			else
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 4;
				Local_94.f_291[5] = func_44(4);
				Local_94.f_305[5] = func_43(4);
				Local_94.f_280[6] = 5;
				Local_94.f_291[6] = func_44(5);
				Local_94.f_278 = 7;
			}
			Local_94.f_255 = func_40();
			if (!func_588())
			{
				Local_94.f_1 = 3;
			}
			else
			{
				Local_94.f_1 = 8;
			}
			Local_94.f_2 = Local_94.f_29;
			switch (Local_94.f_29)
			{
				case 0:
					if (!func_588())
					{
						Local_94.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_94.f_43[0] = 290.0732f;
					}
					else
					{
						Local_94.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_94.f_43[0] = 290.0732f;
						Local_94.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_94.f_43[1] = 231.5867f;
						Local_94.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_94.f_43[2] = 49.6234f;
						Local_94.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_94.f_43[3] = 229.3317f;
					}
					Local_94.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_94.f_148[0] = 230.0049f;
					Local_94.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_94.f_148[1] = 147.9421f;
					Local_94.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_94.f_148[2] = 22.3204f;
					Local_94.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_94.f_148[3] = 80.7676f;
					Local_94.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_94.f_148[4] = 162.0507f;
					Local_94.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_94.f_148[5] = 225.9002f;
					Local_94.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_94.f_148[6] = 140.0515f;
					Local_94.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_94.f_148[7] = 90.6966f;
					Local_94.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_94.f_148[8] = 226.042f;
					Local_94.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_94.f_148[9] = 79.7294f;
					Local_94.f_243 = 4;
					break;
				
				case 1:
					Local_94.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_94.f_43[0] = 122.9714f;
					Local_94.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_94.f_43[1] = 118.6931f;
					Local_94.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_94.f_43[2] = 26.5272f;
					Local_94.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_94.f_43[3] = 211.0638f;
					Local_94.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_94.f_148[0] = 203.4084f;
					Local_94.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_94.f_148[1] = 123.7895f;
					Local_94.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_94.f_148[2] = 115.9053f;
					Local_94.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_94.f_148[3] = 330.5807f;
					Local_94.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_94.f_148[4] = 116.311f;
					Local_94.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_94.f_148[5] = 145.855f;
					Local_94.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_94.f_148[6] = 41.353f;
					Local_94.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_94.f_148[7] = 266.0158f;
					Local_94.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_94.f_148[8] = 290.3963f;
					Local_94.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_94.f_148[9] = 243.2495f;
					Local_94.f_243 = 4;
					break;
				
				case 2:
					Local_94.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_94.f_43[0] = 280.2862f;
					Local_94.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_94.f_43[1] = 32.9157f;
					Local_94.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_94.f_43[2] = 106.2954f;
					Local_94.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_94.f_43[3] = 272.3807f;
					Local_94.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_94.f_148[0] = 254.5411f;
					Local_94.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_94.f_148[1] = 183.227f;
					Local_94.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_94.f_148[2] = 338.6039f;
					Local_94.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_94.f_148[3] = 71.8258f;
					Local_94.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_94.f_148[4] = 179.6626f;
					Local_94.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_94.f_148[5] = 272.7491f;
					Local_94.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_94.f_148[6] = 270.8252f;
					Local_94.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_94.f_148[7] = 180.4937f;
					Local_94.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_94.f_148[8] = 107.4297f;
					Local_94.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_94.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_94.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_94.f_43[0] = 117.7311f;
					Local_94.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_94.f_43[1] = 46.3958f;
					Local_94.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_94.f_43[2] = 189.2091f;
					Local_94.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_94.f_43[3] = 50.0778f;
					Local_94.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_94.f_148[0] = 229.5714f;
					Local_94.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_94.f_148[1] = 136.4963f;
					Local_94.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_94.f_148[2] = 88.3908f;
					Local_94.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_94.f_148[3] = 271.8922f;
					Local_94.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_94.f_148[4] = 316.4374f;
					Local_94.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_94.f_148[5] = 246.1521f;
					Local_94.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_94.f_148[6] = 198.8985f;
					Local_94.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_94.f_148[7] = 257.2332f;
					Local_94.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_94.f_148[8] = 104.7808f;
					Local_94.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_94.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_94.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_94.f_43[0] = 306.7662f;
					Local_94.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_94.f_43[1] = 303.3918f;
					Local_94.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_94.f_43[2] = 302.365f;
					Local_94.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_94.f_43[3] = 304.9788f;
					Local_94.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_94.f_148[0] = 30.9787f;
					Local_94.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_94.f_148[1] = 97.3626f;
					Local_94.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_94.f_148[2] = 218.2636f;
					Local_94.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_94.f_148[3] = 257.6324f;
					Local_94.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_94.f_148[4] = 244.6777f;
					Local_94.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_94.f_148[5] = 12.745f;
					Local_94.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_94.f_148[6] = 196.3743f;
					Local_94.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_94.f_148[7] = 283.2556f;
					Local_94.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_94.f_148[8] = 243.4268f;
					Local_94.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_94.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_94.f_240 = joaat("buzzard");
			Local_94.f_280[0] = 2;
			Local_94.f_291[0] = func_44(2);
			Local_94.f_280[1] = 4;
			Local_94.f_291[1] = func_44(4);
			Local_94.f_305[1] = func_43(4);
			Local_94.f_280[2] = 2;
			Local_94.f_291[2] = func_44(2);
			if (Local_94.f_12 <= 2 || !func_588())
			{
				Local_94.f_280[3] = 5;
				Local_94.f_291[3] = func_44(5);
				Local_94.f_278 = 4;
			}
			else if (Local_94.f_12 == 3)
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 5;
				Local_94.f_291[5] = func_44(5);
				Local_94.f_278 = 6;
			}
			else
			{
				Local_94.f_280[3] = 4;
				Local_94.f_291[3] = func_44(4);
				Local_94.f_305[3] = func_43(4);
				Local_94.f_280[4] = 2;
				Local_94.f_291[4] = func_44(2);
				Local_94.f_280[5] = 4;
				Local_94.f_291[5] = func_44(4);
				Local_94.f_305[5] = func_43(4);
				Local_94.f_280[6] = 5;
				Local_94.f_291[6] = func_44(5);
				Local_94.f_278 = 7;
			}
			Local_94.f_255 = func_40();
			if (!func_588())
			{
				Local_94.f_1 = 4;
			}
			else
			{
				Local_94.f_1 = 9;
			}
			Local_94.f_2 = Local_94.f_29;
			switch (Local_94.f_29)
			{
				case 0:
					Local_94.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_94.f_43[0] = 180.7904f;
					Local_94.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_94.f_43[1] = 269.3001f;
					Local_94.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_94.f_43[2] = 180.39f;
					Local_94.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_94.f_43[3] = 276.7351f;
					Local_94.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_94.f_148[0] = 329.9165f;
					Local_94.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_94.f_148[1] = 264.7702f;
					Local_94.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_94.f_148[2] = 359.5203f;
					Local_94.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_94.f_148[3] = 111.3101f;
					Local_94.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_94.f_148[4] = 176.3058f;
					Local_94.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_94.f_148[5] = 213.1969f;
					Local_94.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_94.f_148[6] = 275.2275f;
					Local_94.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_94.f_148[7] = 220.0349f;
					Local_94.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_94.f_148[8] = 359.15f;
					Local_94.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_94.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_94.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_94.f_43[0] = 247.4892f;
					Local_94.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_94.f_43[1] = 66.129f;
					Local_94.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_94.f_43[2] = 340.0713f;
					Local_94.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_94.f_43[3] = 245.7466f;
					Local_94.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_94.f_148[0] = 252.6017f;
					Local_94.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_94.f_148[1] = 245.262f;
					Local_94.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_94.f_148[2] = 44.7945f;
					Local_94.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_94.f_148[3] = 255.6518f;
					Local_94.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_94.f_148[4] = 124.8391f;
					Local_94.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_94.f_148[5] = 188.9979f;
					Local_94.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_94.f_148[6] = 159.3613f;
					Local_94.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_94.f_148[7] = 5.7762f;
					Local_94.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_94.f_148[8] = 89.3388f;
					Local_94.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_94.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_94.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_94.f_43[0] = 310.6241f;
					Local_94.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_94.f_43[1] = 166.0191f;
					Local_94.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_94.f_43[2] = 343.1715f;
					Local_94.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_94.f_43[3] = 342.4984f;
					Local_94.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_94.f_148[0] = 248.8594f;
					Local_94.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_94.f_148[1] = 195.7758f;
					Local_94.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_94.f_148[2] = 28.6127f;
					Local_94.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_94.f_148[3] = 296.7476f;
					Local_94.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_94.f_148[4] = 240.9422f;
					Local_94.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_94.f_148[5] = 2.473f;
					Local_94.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_94.f_148[6] = 343.6776f;
					Local_94.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_94.f_148[7] = 0.2495f;
					Local_94.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_94.f_148[8] = 72.7889f;
					Local_94.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_94.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_94.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_94.f_43[0] = 351.0324f;
					Local_94.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_94.f_43[1] = 3.5452f;
					Local_94.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_94.f_43[2] = 7.3237f;
					Local_94.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_94.f_43[3] = 332.0844f;
					Local_94.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_94.f_148[0] = 2.6416f;
					Local_94.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_94.f_148[1] = 171.8638f;
					Local_94.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_94.f_148[2] = 257.0332f;
					Local_94.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_94.f_148[3] = 91.7869f;
					Local_94.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_94.f_148[4] = 4.2016f;
					Local_94.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_94.f_148[5] = 339.729f;
					Local_94.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_94.f_148[6] = 359.2033f;
					Local_94.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_94.f_148[7] = 333.6298f;
					Local_94.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_94.f_148[8] = 73.2788f;
					Local_94.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_94.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_94.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_94.f_43[0] = 42.1535f;
					Local_94.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_94.f_43[1] = 315.0261f;
					Local_94.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_94.f_43[2] = 1.2527f;
					Local_94.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_94.f_43[3] = 1.9403f;
					Local_94.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_94.f_148[0] = 352.9674f;
					Local_94.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_94.f_148[1] = 88.8285f;
					Local_94.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_94.f_148[2] = 177.2297f;
					Local_94.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_94.f_148[3] = 273.1487f;
					Local_94.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_94.f_148[4] = 225.394f;
					Local_94.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_94.f_148[5] = 175.5423f;
					Local_94.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_94.f_148[6] = 191.1842f;
					Local_94.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_94.f_148[7] = 269.6831f;
					Local_94.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_94.f_148[8] = 29.4203f;
					Local_94.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_94.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_94.f_255 != -1)
	{
		return Local_94.f_255;
	}
	if (Local_94.f_278 == 0)
	{
		return ((4 * Global_262145.f_7986) + Global_262145.f_7987);
	}
	iVar2 = func_90();
	iVar3 = func_42(iVar2);
	iVar4 = func_41(iVar3);
	switch (Local_94.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_94.f_278)
			{
				iVar0 = (iVar0 + ((Local_94.f_291[iVar1] * iVar4) + Local_94.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_41(int iParam0)
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

int func_42(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_94.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_94.f_27 == joaat("rhino"))
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
			if (Local_94.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_94.f_27 == joaat("hydra"))
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

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_588())
			{
				iVar0 = Global_262145.f_9150;
			}
			else
			{
				iVar0 = Global_262145.f_8871;
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
		case 2:
			if (func_588())
			{
				iVar0 = Global_262145.f_9151;
			}
			else
			{
				iVar0 = Global_262145.f_8872;
			}
			break;
		
		case 5:
			if (func_588())
			{
				iVar0 = Global_262145.f_9152;
			}
			else
			{
				iVar0 = Global_262145.f_8873;
			}
			break;
		
		case 4:
			if (func_588())
			{
				iVar0 = Global_262145.f_9149;
			}
			else
			{
				iVar0 = Global_262145.f_8870;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	if (!func_588())
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

void func_46()
{
	Local_94.f_252 = 0;
	Local_94.f_302 = 0;
	Local_94.f_317 = 0;
	Local_94.f_316 = 0;
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_30(Local_94.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_94.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_94.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_90() == 4)
				{
					return 2;
				}
				else if (func_90() == 2)
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

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_101(Local_94.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_94.f_318 == 0 || Local_94.f_318 == func_38())
	{
		if (func_90() == 2 || func_90() == 5)
		{
			return 0;
		}
	}
	if (func_90() == 3 || func_90() == 4)
	{
		if (Local_94.f_317 >= func_37())
		{
			iVar0 = Local_94.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_94.f_280[iVar0];
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
	else if (Local_94.f_317 == 2)
	{
		iVar0 = Local_94.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_94.f_280[iVar0];
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
	if (Local_94.f_318 == func_38())
	{
		return 0;
	}
	if (Local_94.f_318 == func_65())
	{
		return 0;
	}
	if (func_90() == 1)
	{
		return 0;
	}
	if (!unk_0x250A8F68F67CA19A(Local_94.f_48[(20 + iParam0)]))
	{
		if (func_64(Local_94.f_239) && unk_0xC390CE355F131C83(0, 1, 0, 0))
		{
			if (func_62(&iVar3))
			{
				if (func_54(Local_94.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_53(&(Local_94.f_48[(20 + iParam0)]), 22, Local_94.f_239, Local_94.f_117[iVar3 /*3*/], Local_94.f_148[iVar3], 1, 1, 1))
					{
						unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), iLocal_1516);
						unk_0xA0E2C72EEFBD5858(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1, 0);
						unk_0x6BC3C6046951661E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0x8E4A427F5C43E416(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_52());
						unk_0xD31C3826B16CD027(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179(fVar6));
						unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1);
						unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 2);
						unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 0, 1);
						unk_0x632435B4905EF92E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1);
						unk_0x01685154DCFBC6C1(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1);
						unk_0xCE566DBDCACD245E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 42, 1);
						unk_0x9765BF567DB87B5F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
						unk_0x9909A5E972866C34(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1);
						unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1);
						unk_0xCF01B06C83451A7F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 1);
						unk_0xCE566DBDCACD245E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0x4DC6EF945236C0F7(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]));
						fVar5 = func_51();
						iVar4 = unk_0xF2DB717A73826179((fVar5 * unk_0xBBDA792448DB5A89(iVar4)));
						unk_0x9765BF567DB87B5F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(20 + iParam0)]), iVar4);
						iVar7 = (20 + iParam0);
						if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar7)], func_82(iVar7)))
						{
							unk_0xC69E84EBBD7166E6(&(Local_94.f_272[func_83(iVar7)]), func_82(iVar7));
						}
						Local_94.f_247++;
						Local_94.f_317++;
						Local_94.f_250++;
						Local_94.f_318++;
						func_98(&(Local_94.f_414[iVar7 /*2*/]));
						func_18(&(Local_94.f_414[iVar7 /*2*/]), 0, 0);
						if (func_20(&(Local_94.f_364[iVar7 /*2*/])))
						{
							func_98(&(Local_94.f_364[iVar7 /*2*/]));
						}
						func_18(&(Local_3549[iVar3 /*2*/]), 0, 0);
						unk_0xF5E0C3D8E5F6EED0(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar7]), 1, iLocal_1515);
					}
				}
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_94.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_51()
{
	if (func_588())
	{
		return Global_262145.f_9138;
	}
	return Global_262145.f_8859;
}

float func_52()
{
	if (func_588())
	{
		return Global_262145.f_9140;
	}
	return Global_262145.f_8861;
}

int func_53(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	iVar0 = unk_0x206897C6DBC12488(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x39E5853480A5C856(iVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(iVar0, iParam9);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam7)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_58(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_55(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_55(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_665(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_57(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
		if (func_665(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_56(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_57(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_57(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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

int func_56(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

Vector3 func_57(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_58(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_665(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_56(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_59(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_57(iVar1), Param0, 1) < fParam3)
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

int func_59(int iParam0)
{
	if (func_61(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_60(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_60(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_61(int iParam0, int iParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_60(iParam0) };
		Global_2450514 = { func_60(iParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
	if (!func_63(Local_94.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_20(&(Local_3549[iVar0 /*2*/])) || (func_20(&(Local_3549[iVar0 /*2*/])) && func_17(&(Local_3549[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_63(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

int func_65()
{
	int iVar0;
	int iVar1;
	
	if (Local_94.f_279 == 0)
	{
		iVar0 = Local_94.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_94.f_279)
		{
			iVar0 = (iVar0 + Local_94.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_66()
{
	int iVar0;
	int iVar1;
	
	switch (Local_94.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_94.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_90() == 3)
	{
		return 0;
	}
	if (Local_94.f_242 < iVar0)
	{
	}
	if (Local_94.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_90() > 1)
	{
		iVar1 = func_80();
		if (Local_94.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_64(Local_94.f_240) && func_64(Local_94.f_239))
	{
		if (func_68(iParam0))
		{
			if (unk_0x236D8AD7EE179F46(Local_94.f_245, iParam0))
			{
				Local_94.f_249++;
				Local_94.f_251++;
				Local_94.f_252++;
				unk_0xC69E84EBBD7166E6(&(Local_94.f_245), iParam0);
				if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 19))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0)
{
	if (unk_0xC390CE355F131C83(4, 1, 0, 0))
	{
		if (func_74(iParam0))
		{
			if (func_69(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_101(Local_94.f_73[iParam0]) && unk_0x236D8AD7EE179F46(Local_94.f_245, iParam0))
	{
		if (func_73(Local_94.f_73[iParam0]))
		{
			if (Local_94.f_116 <= 0)
			{
				if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_94.f_116 = 2;
				}
				else
				{
					Local_94.f_116 = unk_0x59D35AC211D17FAB(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0])) + 1;
					if (Local_94.f_116 > 4)
					{
						Local_94.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_94.f_116)
			{
				if (!unk_0x250A8F68F67CA19A(Local_94.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_64(Local_94.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_72(&(Local_94.f_48[(iParam0 * 4 + iVar6)]), Local_94.f_73[iParam0], 22, Local_94.f_239, iVar4, 1, 1, 1))
						{
							unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), iLocal_1516);
							unk_0xA0E2C72EEFBD5858(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0x6BC3C6046951661E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_71())
							{
								unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_52());
							unk_0xD31C3826B16CD027(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
							unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x632435B4905EF92E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x01685154DCFBC6C1(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x9765BF567DB87B5F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
							unk_0x9909A5E972866C34(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xCE566DBDCACD245E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0xE56D08F12AE48555(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x47BB782E50EFEDF2(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x94C6BEA0B949D9D6(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xCE566DBDCACD245E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0xA867A6CA433961B0(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_70());
									unk_0xD31C3826B16CD027(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
									unk_0x3E0DE130384C7771(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0x0795E896D82CFA3B(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_9123;
								uVar1 = Global_262145.f_9124;
								uVar2 = Global_262145.f_9125;
								uVar3 = Global_262145.f_9126;
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]))))
							{
								unk_0xA867A6CA433961B0(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_70());
								unk_0xD31C3826B16CD027(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
								unk_0x3E0DE130384C7771(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_9123;
								uVar1 = Global_262145.f_9124;
								uVar2 = Global_262145.f_9125;
								uVar3 = Global_262145.f_9126;
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xA8D1BCA296A5D380(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar7)], func_82(iVar7)))
							{
								unk_0xC69E84EBBD7166E6(&(Local_94.f_272[func_83(iVar7)]), func_82(iVar7));
							}
							unk_0xCF01B06C83451A7F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x150101BCDC17D828(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xF5E0C3D8E5F6EED0(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1515);
							Local_94.f_250++;
							func_98(&(Local_94.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_18(&(Local_94.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_20(&(Local_94.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_98(&(Local_94.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_94.f_116)
			{
				if (!unk_0x250A8F68F67CA19A(Local_94.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_30(Local_94.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0x58A69336FE7307D8(unk_0xCFD52BB67CC0A98F(Local_94.f_48[(iParam0 * 4 + iVar6)]), unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0])))
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

float func_70()
{
	if (func_588())
	{
		return Global_262145.f_9141;
	}
	return Global_262145.f_8862;
}

int func_71()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_72(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	if (!unk_0x250A8F68F67CA19A(uParam1))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x39E5853480A5C856(unk_0x4D135F3066A9BF9C(unk_0x1D1DAF7F94D5FE77(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(unk_0xCFD52BB67CC0A98F(*uParam0), iParam7);
		if (unk_0xE682D8146CB90267(unk_0xCFD52BB67CC0A98F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_73(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		unk_0x3A6FE26AD5BF8C2E(uParam0);
		return unk_0x402F3F19221FF696(uParam0);
	}
	return 0;
}

int func_74(int iParam0)
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
	
	iVar0 = func_90();
	Local_94.f_240 = func_42(iVar0);
	if (!unk_0x250A8F68F67CA19A(Local_94.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_94.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0x250A8F68F67CA19A(Local_94.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_64(Local_94.f_240) && !unk_0x236D8AD7EE179F46(Local_94.f_245, iParam0))
		{
			fVar10 = 300f;
			if (unk_0xE083914AB72DD7CE(Local_94.f_240) || unk_0x1699D7B95446F15C(Local_94.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (unk_0x1699D7B95446F15C(Local_94.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_94.f_242)
			{
				if (func_79(iVar11))
				{
					func_78(Local_94.f_240, iVar11, &Var12, &uVar15);
					if (!func_63(Var12, 0f, 0f, 0f, 0))
					{
						if (func_54(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0))
						{
							Var4 = { Var12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_6(&(Local_94.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_94.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (unk_0xE083914AB72DD7CE(Local_94.f_240) || unk_0x1699D7B95446F15C(Local_94.f_240))
				{
					iVar16 = 0;
				}
				if (func_77(iParam0))
				{
					if (func_76(&(Local_94.f_73[iParam0]), Local_94.f_240, Var4, uVar7, 1, 1, 1, 0, iVar16, 1))
					{
						unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 2);
						unk_0x1DD960960DEF67A8(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1);
						unk_0x55E6058CA305144A(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 0, 0);
						unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 2);
						unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1, 1);
						unk_0x51A5B56EA7D7B0BF(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 0);
						if (unk_0xE083914AB72DD7CE(Local_94.f_240))
						{
							unk_0x50638C188ABB218B(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
							unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1);
							unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
							unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 0);
						}
						else if (unk_0x1699D7B95446F15C(Local_94.f_240))
						{
							unk_0xDE113FA802D77FA6(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 3);
							unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 0);
							unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1);
							unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
							unk_0x3D24414865131CB8(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 30f);
							unk_0x2D2DB76347CF5E00(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1);
							unk_0xF20930A1C114A6BE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0x9765BF567DB87B5F(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
						}
						else
						{
							unk_0x3B7AFF7DCE22C1CF(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1);
						}
						if (func_90() == 5)
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_75());
							unk_0x9765BF567DB87B5F(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xB8B46B9698CAEA8D(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xB43C660E422A4C75(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), fVar1);
							unk_0xB65D824ED9E7FB37(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), fVar1);
							unk_0xE61FF1947C0507EB(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), fVar1);
							unk_0xBB7571549012B07C(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x862F59765BA228C2(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), fVar1);
							unk_0xDE63172F65FD763F(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), fVar1);
						}
						if (func_20(&(Local_94.f_336[iParam0 /*2*/])))
						{
							func_98(&(Local_94.f_336[iParam0 /*2*/]));
						}
						unk_0xC69E84EBBD7166E6(&(Local_94.f_253), iParam0);
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_245), iParam0);
						unk_0xF5E0C3D8E5F6EED0(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), 1, iLocal_1515);
						if (unk_0x236D8AD7EE179F46(Local_94.f_271, iParam0))
						{
							unk_0xC69E84EBBD7166E6(&(Local_94.f_271), iParam0);
						}
						if (unk_0x236D8AD7EE179F46(Local_94.f_303, iParam0))
						{
							unk_0xC69E84EBBD7166E6(&(Local_94.f_303), iParam0);
						}
						if (Local_94.f_240 == joaat("hydra") || Local_94.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_94.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_75()
{
	if (func_588())
	{
		return Global_262145.f_9139;
	}
	return Global_262145.f_8860;
}

int func_76(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			if (unk_0x236D8AD7EE179F46(Local_728[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_78(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0x1699D7B95446F15C(iParam0) || unk_0xE083914AB72DD7CE(iParam0));
	switch (Local_94.f_27)
	{
		case joaat("rhino"):
			if (!func_63(Local_94.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_94.f_159[iParam1 /*3*/] };
				*uParam3 = Local_94.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_63(Local_94.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_94.f_159[iParam1 /*3*/] };
				*uParam3 = Local_94.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_94.f_29)
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
			switch (Local_94.f_29)
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
			switch (Local_94.f_29)
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

int func_79(int iParam0)
{
	if (Local_94.f_228[iParam0] > 0)
	{
		if (!func_20(&(Local_94.f_207[iParam0 /*2*/])))
		{
			func_18(&(Local_94.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_17(&(Local_94.f_207[iParam0 /*2*/]), Local_94.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_20(&(Local_94.f_186[iParam0 /*2*/])))
	{
		if (!func_17(&(Local_94.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_80()
{
	return Local_94.f_291[Local_94.f_279];
}

void func_81(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 393;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam1);
	}
}

int func_82(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_83(iParam0) * 31);
}

int func_83(int iParam0)
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

void func_84(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x0A8175F24237A3D4(uParam0);
		bVar0 = true;
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_1))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_7))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_7))
		{
			if (unk_0xDBC7B8E3258E68CE(uParam0->f_7))
			{
				unk_0xCAE13BE6285A2562(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_85(int iParam0)
{
	if (Local_94.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iParam0)], func_82(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_86(int iParam0)
{
	return func_87(iParam0);
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0]), 0);
	if (unk_0x930F8FBB8E9537CC(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0x236D8AD7EE179F46(Local_94.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0x236D8AD7EE179F46(Local_94.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_94.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_94.f_27 == joaat("hydra"))
		{
			if (unk_0x236D8AD7EE179F46(Local_94.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 390;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam1);
	}
}

int func_90()
{
	return Local_94.f_280[Local_94.f_279];
}

void func_91(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 399;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam0);
	}
}

int func_92(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0])))
			{
				if (unk_0xBAD4D81C283D31CB(iVar2, unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x640CF223339008B8(iVar2, unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_93(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 398;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam0);
	}
}

bool func_94(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
	if (unk_0x1699D7B95446F15C(iVar0) || unk_0xE083914AB72DD7CE(iVar0))
	{
		return !unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
	}
	return !unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iParam0]));
}

int func_95()
{
	int iVar0;
	int iVar1;
	
	switch (Local_94.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_94.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_94.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_96(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (func_665(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1329891157A54C63() || iParam0)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_97()
{
	if (func_588())
	{
		return Global_262145.f_9132;
	}
	return Global_262145.f_8856;
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_99(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_665(iVar2, 1, 0))
		{
			if (!unk_0x04C377C10639B842(unk_0xE495E987CB2BE7EF(iVar2), iParam0, 0))
			{
				if (unk_0xCCFDB2B968281FE8(iVar2) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) || !bParam2)
				{
					if (iVar2 != unk_0x1329891157A54C63() || iParam1)
					{
						unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_101(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_102(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_102(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(iParam0, 0))
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

void func_103()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 20))
	{
		return;
	}
	if (!func_20(&uLocal_3593))
	{
		func_18(&uLocal_3593, 0, 0);
		return;
	}
	if (!func_17(&uLocal_3593, 5000, 0))
	{
		return;
	}
	iVar0 = func_104();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), 1, 0, 0))
		{
			func_23(&(Local_94.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 20);
}

int func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_94.f_12 != 0)
	{
		return Local_94.f_12;
	}
	if (!func_588())
	{
		Local_94.f_12 = 1;
		return Local_94.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar0);
		if (unk_0xA89AE5060232966A(iVar2))
		{
			if (!func_14(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_106())
	{
		Local_94.f_12 = 2;
	}
	else if (iVar1 < func_105())
	{
		Local_94.f_12 = 3;
	}
	else
	{
		Local_94.f_12 = 4;
	}
	return Local_94.f_12;
}

int func_105()
{
	return Global_262145.f_8881;
}

int func_106()
{
	return Global_262145.f_8880;
}

void func_107()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
		{
			func_113(iVar0);
			func_112(iVar0, Local_94.f_256[iVar0], Local_94.f_22[iVar0]);
		}
		else if (Local_94.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_113(iVar0);
		}
		iVar0++;
	}
	func_111();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0));
			func_110(iVar0);
			if (Local_728[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_728[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_728[iVar0 /*18*/].f_9;
					func_109(uVar1, Local_728[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_109(-1, -1, iVar2);
			}
		}
		else if (Local_94.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_110(iVar0);
		}
		iVar0++;
	}
	func_108();
}

void func_108()
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
				if (Local_94.f_465[iVar1 /*4*/].f_1 > Local_94.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_94.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_94.f_465[iVar1 /*4*/];
					uVar4 = Local_94.f_465[iVar1 /*4*/].f_2;
					Local_94.f_465[iVar1 /*4*/].f_1 = Local_94.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_94.f_465[iVar1 /*4*/] = Local_94.f_465[(iVar1 - 1) /*4*/];
					Local_94.f_465[iVar1 /*4*/].f_2 = Local_94.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_94.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_94.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_94.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	Local_94.f_465[iParam2 /*4*/] = iParam0;
	Local_94.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_94.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_110(int iParam0)
{
	Local_94.f_465[iParam0 /*4*/] = -1;
	Local_94.f_465[iParam0 /*4*/].f_2 = -1;
	Local_94.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_111()
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
				if (Local_94.f_594[iVar1 /*4*/].f_1 > Local_94.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_94.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_94.f_594[iVar1 /*4*/];
					uVar4 = Local_94.f_594[iVar1 /*4*/].f_2;
					Local_94.f_594[iVar1 /*4*/].f_1 = Local_94.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_94.f_594[iVar1 /*4*/] = Local_94.f_594[(iVar1 - 1) /*4*/];
					Local_94.f_594[iVar1 /*4*/].f_2 = Local_94.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_94.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_94.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_94.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_112(int iParam0, var uParam1, var uParam2)
{
	Local_94.f_594[iParam0 /*4*/] = iParam0;
	Local_94.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_94.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_113(int iParam0)
{
	Local_94.f_594[iParam0 /*4*/] = -1;
	Local_94.f_594[iParam0 /*4*/].f_1 = -1;
	Local_94.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_115(iVar1))
		{
			func_98(&(Local_94.f_5));
			return 0;
		}
		if (!unk_0x236D8AD7EE179F46(Local_94.f_13, iVar1))
		{
			func_98(&(Local_94.f_5));
			return 0;
		}
		else if (func_4(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), 1, 0, 0))
		{
			func_98(&(Local_94.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_20(&(Local_94.f_5)))
	{
		func_18(&(Local_94.f_5), 0, 0);
	}
	else if (func_17(&(Local_94.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	if (func_101(Local_94.f_7[iParam0]))
	{
		if (unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), -1) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_588())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
		{
			if (func_101(Local_94.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_94.f_12)
	{
		Local_94.f_12 = iVar1;
	}
	if (Local_94.f_12 <= 1)
	{
		unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 8);
		if (!func_101(Local_94.f_7[0]))
		{
			if (func_101(Local_94.f_7[iVar2]))
			{
				func_23(&(Local_94.f_7[0]));
				Local_94.f_7[0] = Local_94.f_7[iVar2];
			}
		}
	}
}

void func_117()
{
	bool bVar0;
	
	if (!func_588())
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[0]))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_94.f_15 != false;
			}
			else
			{
				bVar0 = Local_94.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x236D8AD7EE179F46(Local_94.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_94.f_413 == -1)
		{
			Local_94.f_413 = func_119();
		}
		if (!func_20(&(Local_94.f_326)))
		{
			func_18(&(Local_94.f_326), 0, 0);
		}
		else if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 4))
		{
			if ((Local_94.f_413 - func_118(&(Local_94.f_326), 0, 0)) < 0)
			{
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 4);
			}
		}
	}
	else if (func_20(&(Local_94.f_326)))
	{
		func_98(&(Local_94.f_326));
		Local_94.f_413 = (Local_94.f_413 - func_118(&(Local_94.f_326), 0, 0));
	}
}

int func_118(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0);
		}
		else
		{
			return unk_0x996F735E5C03B101(unk_0xE36DF6414E5CCBBF(), *uParam0);
		}
	}
	return unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0);
}

var func_119()
{
	if (func_588())
	{
		return Global_262145.f_9142;
	}
	return Global_262145.f_8863;
}

void func_120()
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
		iLocal_1518[iVar0] = 0;
		iLocal_723[iVar0] = -2;
		iLocal_1523[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_94.f_0 != 4)
	{
		iLocal_1313 = 0;
		while (iLocal_1313 < unk_0x945535897333587B())
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_1313)))
			{
				iVar7 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_1313));
				if (!func_14(iVar7, 0))
				{
					if (Local_728[iLocal_1313 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_127(iLocal_1313, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_126(iLocal_1313, iVar0);
						iVar0++;
					}
					if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
					{
						if (!unk_0x236D8AD7EE179F46(Local_728[iLocal_1313 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_125(iLocal_1313, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0x236D8AD7EE179F46(Local_728[iLocal_1313 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_123(iLocal_1313, iVar7);
					if (func_665(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_94.f_17[iVar0] == func_25())
							{
								if (unk_0x236D8AD7EE179F46(Local_728[iLocal_1313 /*18*/].f_2, (0 + iVar0)))
								{
									Local_94.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_94.f_17[iVar0] == iVar7 && Local_94.f_241 == 0)
							{
								if (!unk_0x236D8AD7EE179F46(Local_728[iLocal_1313 /*18*/].f_2, (0 + iVar0)))
								{
									Local_94.f_17[iVar0] = func_25();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1313++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x236D8AD7EE179F46(Local_94.f_13, iVar0))
		{
			if (iLocal_1518[iVar0] == func_122() && func_115(iVar0))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_13), iVar0);
			}
			if (!unk_0x236D8AD7EE179F46(Local_94.f_14, iVar0))
			{
				if (iLocal_1518[iVar0] >= 1 && func_115(iVar0))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_14), iVar0);
				}
			}
			else if (iLocal_1518[iVar0] == 0 || !func_115(iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Local_94.f_14, iVar0))
				{
					unk_0xC69E84EBBD7166E6(&(Local_94.f_14), iVar0);
					if (iLocal_1518[iVar0] == 0)
					{
						if (Local_94.f_241 >= 1)
						{
							if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
							{
								func_23(&(Local_94.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0x236D8AD7EE179F46(Local_94.f_15, iVar0) && func_115(iVar0))
			{
				if (iLocal_1518[iVar0] >= 2)
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_15), iVar0);
				}
			}
			else if (iLocal_1518[iVar0] <= 1 || !func_115(iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Local_94.f_15, iVar0))
				{
					unk_0xC69E84EBBD7166E6(&(Local_94.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1518[iVar0] < func_122() || !func_115(iVar0))
		{
			unk_0xC69E84EBBD7166E6(&(Local_94.f_13), iVar0);
		}
		if (Local_94.f_266[iVar0] != iLocal_1518[iVar0])
		{
			Local_94.f_266[iVar0] = iLocal_1518[iVar0];
			if (Local_94.f_241 == 1)
			{
				if (Local_94.f_266[iVar0] == 0)
				{
					if (!unk_0x236D8AD7EE179F46(Local_94.f_616, iVar0))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_616), iVar0);
					}
				}
			}
		}
		if (Local_94.f_241 == 0)
		{
			if (func_588())
			{
				if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
				{
					iVar3 = unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]));
					if (iLocal_1518[iVar0] >= func_121(iVar3) && func_115(iVar0))
					{
						iLocal_1523[iVar0] = 1;
					}
				}
			}
		}
		if (Local_94.f_241 == 1)
		{
			if (Local_94.f_256[iVar0] != iLocal_723[iVar0])
			{
				if (iLocal_723[iVar0] >= 0)
				{
					if (iLocal_723[iVar0] > Local_94.f_256[iVar0])
					{
						Local_94.f_256[iVar0] = iLocal_723[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_94.f_256[iVar0] - iLocal_723[iVar0]);
						if (Local_94.f_261[iVar0] != iVar8)
						{
							Local_94.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_107();
	}
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_94.f_241 == 0)
	{
		if (func_588())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1523[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0xC69E84EBBD7166E6(&(Local_94.f_3), 9);
			}
		}
	}
	if (Local_94.f_241 == 0)
	{
		if (!func_20(&(Local_94.f_360)))
		{
			func_18(&(Local_94.f_360), 0, 0);
		}
		else if (func_17(&(Local_94.f_360), 5000, 0))
		{
			if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
			{
				if (func_588())
				{
					if (Local_94.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 14);
					}
				}
				else if (Local_94.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_94.f_614)
	{
		Local_94.f_614 = iVar1;
	}
	else
	{
		Local_94.f_613 = (Local_94.f_614 - iVar1);
	}
	if (iVar2 > Local_94.f_615)
	{
		Local_94.f_615 = iVar2;
	}
}

int func_121(int iParam0)
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

int func_122()
{
	return Local_94.f_28;
}

void func_123(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x236D8AD7EE179F46(Local_94.f_16, iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Local_728[iParam0 /*18*/].f_2, 12))
		{
			func_124(iParam1, 1);
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_16), iParam0);
		}
		else if (Local_94.f_241 >= 1)
		{
			if (Local_728[iParam0 /*18*/].f_1 == 0)
			{
				func_124(iParam1, 1);
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_16), iParam0);
			}
			else if (Local_728[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar1]))
					{
						if (func_101(Local_94.f_7[iVar1]))
						{
							if (unk_0x04C377C10639B842(unk_0xE495E987CB2BE7EF(iParam1), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_124(iParam1, 1);
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_94.f_241 < 1)
	{
		if (!unk_0x236D8AD7EE179F46(Local_728[iParam0 /*18*/].f_2, 12))
		{
			func_124(iParam1, 0);
			unk_0xC69E84EBBD7166E6(&(Local_94.f_16), iParam0);
		}
	}
}

void func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
		{
			unk_0xCF70B216F7807630(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_125(int iParam0, int iParam1)
{
	if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iParam1)], func_82(iParam1)))
	{
		if (unk_0x236D8AD7EE179F46(Local_728[iParam0 /*18*/].f_3[func_83(iParam1)], func_82(iParam1)))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_272[func_83(iParam1)]), func_82(iParam1));
			if (Local_728[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x335F574AD77E59CE(Local_94.f_48[iParam1]))
			{
				if (!func_30(Local_94.f_48[iParam1]))
				{
					if (!func_86(iParam1))
					{
						unk_0xC69E84EBBD7166E6(&(Local_94.f_272[func_83(iParam1)]), func_82(iParam1));
					}
					else if (!unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0xC69E84EBBD7166E6(&(Local_94.f_272[func_83(iParam1)]), func_82(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	if (!unk_0x236D8AD7EE179F46(Local_94.f_271, iParam1))
	{
		if (unk_0x236D8AD7EE179F46(Local_728[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_271), iParam1);
			if (Local_728[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x236D8AD7EE179F46(Local_94.f_303, iParam1))
			{
				if (!unk_0x236D8AD7EE179F46(Local_94.f_253, iParam1))
				{
					Local_94.f_251 = (Local_94.f_251 - 1);
					if (func_90() > 1)
					{
						if (Local_94.f_252 > 0)
						{
							Local_94.f_302++;
							func_89(iParam1, func_96(1));
						}
					}
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_253), iParam1);
				}
				if (func_20(&(Local_94.f_336[iParam1 /*2*/])))
				{
					func_98(&(Local_94.f_336[iParam1 /*2*/]));
				}
				func_23(&(Local_94.f_73[iParam1]));
				unk_0xC69E84EBBD7166E6(&(Local_94.f_303), iParam1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x236D8AD7EE179F46(Local_728[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1518[iParam1]++;
		if (iLocal_723[iParam1] < 0)
		{
			if (Local_728[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_94.f_261[iParam1] > 0)
				{
					iLocal_723[iParam1] = Local_94.f_261[iParam1];
				}
				else
				{
					iLocal_723[iParam1] = 0;
				}
			}
		}
		iLocal_723[iParam1] = (iLocal_723[iParam1] + Local_728[iParam0 /*18*/].f_8);
		if (Local_94.f_241 >= 1)
		{
			if (Local_94.f_22[iParam1] == func_25())
			{
				if (unk_0x335F574AD77E59CE(Local_94.f_7[iParam1]))
				{
					if (func_101(Local_94.f_7[iParam1]))
					{
						iVar1 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam1]), -1);
						if (iVar1 != 0)
						{
							if (unk_0x0452D5BF20AD945A(iVar1))
							{
								iVar0 = unk_0x1B503E81E3B3D65F(iVar1);
								if (iVar0 == iParam2)
								{
									Local_94.f_22[iParam1] = iParam2;
									func_107();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_94.f_319, iParam1))
		{
			if (Local_728[iParam0 /*18*/].f_10 > -1)
			{
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_319), iParam1);
				func_18(&(Local_94.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_94.f_22[iParam1] != func_25())
	{
		if (!unk_0xA89AE5060232966A(Local_94.f_22[iParam1]))
		{
			iVar0 = func_128(iParam1, 1);
			if (iVar0 != func_25())
			{
				Local_94.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_94.f_22[iParam1] = func_25();
			}
		}
		else if (func_14(Local_94.f_22[iParam1], 0))
		{
			Local_94.f_22[iParam1] = func_25();
			func_107();
		}
		else
		{
			iVar1 = unk_0xE495E987CB2BE7EF(Local_94.f_22[iParam1]);
			if (!unk_0x5FEB513A4402FD59(iVar1))
			{
				if (func_101(Local_94.f_7[iParam1]))
				{
					if (!unk_0x04C377C10639B842(iVar1, unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam1]), 0))
					{
						iVar0 = func_128(iParam1, 1);
						if (iVar0 != func_25())
						{
							Local_94.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_94.f_22[iParam1] = func_25();
						}
					}
				}
			}
		}
	}
}

int func_128(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_25();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0x945535897333587B())
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar3)))
			{
				if (iVar0 == func_25())
				{
					if (Local_728[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0x236D8AD7EE179F46(Local_728[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar3));
							}
							else
							{
								iVar1 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar3));
								if (func_101(Local_94.f_7[iParam0]))
								{
									iVar2 = unk_0xE495E987CB2BE7EF(iVar1);
									if (!unk_0x5FEB513A4402FD59(iVar2))
									{
										if (unk_0x04C377C10639B842(iVar2, unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 0))
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

void func_129(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 386;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam0;
	iVar3 = func_130(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iVar3);
	}
}

var func_130(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_665(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_132()
{
	func_104();
	if (func_64(Local_94.f_27))
	{
		if (func_133())
		{
			unk_0x887F4488DA99FD21(Local_94.f_27);
			return 1;
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_94.f_12)
	{
		if (!unk_0x250A8F68F67CA19A(Local_94.f_7[iVar0]))
		{
			if (func_64(Local_94.f_27))
			{
				if (!unk_0x236D8AD7EE179F46(Local_94.f_244, iVar0))
				{
					unk_0x7C6BF0CD5D7454C9(Local_94.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_244), iVar0);
				}
				if (func_76(&(Local_94.f_7[iVar0]), Local_94.f_27, Local_94.f_30[iVar0 /*3*/], Local_94.f_43[iVar0], 1, 1, 1, 1, 0, 1))
				{
					unk_0x4B9126AEF0E84DA7(unk_0x262EBD0AA0ED1D6D(Local_94.f_7[iVar0]), 1);
					unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
					unk_0xB32EF3A4ABA4A096(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
					unk_0x7955866882846F51(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
					unk_0x55E6058CA305144A(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0, 0);
					unk_0xA8F22633ACC22189(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
					unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
					unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]));
					unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1, 1);
					unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
					unk_0x51A5B56EA7D7B0BF(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
					if (unk_0xE083914AB72DD7CE(Local_94.f_27) || unk_0x1699D7B95446F15C(Local_94.f_27))
					{
						unk_0xBB7571549012B07C(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
						if (unk_0xE083914AB72DD7CE(Local_94.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_136());
						}
						else if (unk_0x1699D7B95446F15C(Local_94.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_135());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_134());
						}
						unk_0x9765BF567DB87B5F(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xB8B46B9698CAEA8D(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xB43C660E422A4C75(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
						unk_0xB65D824ED9E7FB37(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
						unk_0xE61FF1947C0507EB(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
						if (unk_0x1699D7B95446F15C(Local_94.f_27))
						{
							unk_0x2D2DB76347CF5E00(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
						}
						if (unk_0xE083914AB72DD7CE(Local_94.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x862F59765BA228C2(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
							unk_0xDE63172F65FD763F(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xE083914AB72DD7CE(Local_94.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_136());
						}
						else if (unk_0x1699D7B95446F15C(Local_94.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_135());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_134());
						}
						unk_0x9765BF567DB87B5F(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xB8B46B9698CAEA8D(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xB43C660E422A4C75(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
						unk_0xB65D824ED9E7FB37(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
						unk_0xE61FF1947C0507EB(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), fVar1);
					}
					unk_0xDEE6369ABB2B517A(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
					if (Local_94.f_27 == joaat("savage"))
					{
					}
					if (unk_0x9C1418C53B05D47B("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x9C1418C53B05D47B("MPBitset", 3))
					{
						if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), "MPBitset");
						}
						unk_0xF3148AAF69AF9CBC(&iVar2, 10);
						unk_0xF3148AAF69AF9CBC(&iVar2, 15);
						unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0xC194A1F3AA9EEE40(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0, iLocal_1515);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0xC194A1F3AA9EEE40(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0, Global_1574182[iVar3]);
						iVar3++;
					}
					unk_0xE65ACEF00BB5C889(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
					unk_0x9A4D3F7FEB5EE4C5(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
					unk_0x210A4A0B257F8433(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1);
					unk_0x1A6319AD50F7E848(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), false);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_94.f_12)
	{
		if (!unk_0x250A8F68F67CA19A(Local_94.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_134()
{
	if (func_588())
	{
		return Global_262145.f_9136;
	}
	return Global_262145.f_8876;
}

var func_135()
{
	if (func_588())
	{
		return Global_262145.f_9137;
	}
	return Global_262145.f_8877;
}

var func_136()
{
	if (func_588())
	{
		return Global_262145.f_9135;
	}
	return Global_262145.f_8875;
}

bool func_137()
{
	int iVar0;
	int iVar1;
	
	if (!func_20(&(Local_94.f_362)))
	{
		func_18(&(Local_94.f_362), 0, 0);
		return 0;
	}
	else if (!func_17(&(Local_94.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 10))
	{
		if (func_151(&iVar0))
		{
			if (iVar0 < func_150())
			{
				unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 10);
			}
			else
			{
				iVar1 = unk_0x2E0A9E3291F398E3(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_9130) && !Global_262145.f_9128) || Global_262145.f_9129)
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 8);
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 10);
				}
				else
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 10);
				}
			}
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 10))
	{
		if (Local_94.f_12 == 0)
		{
			func_104();
			return 0;
		}
		if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 13))
		{
			if (func_146())
			{
				if (!func_144(129, Local_94.f_1, Local_94.f_2, 0))
				{
					if (func_138())
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 13);
					}
					else
					{
						Local_94.f_29 = -1;
					}
				}
				else
				{
					Local_94.f_29 = -1;
				}
			}
		}
	}
	return unk_0x236D8AD7EE179F46(Local_94.f_3, 13);
}

int func_138()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_139(Local_94.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_54(Local_94.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_139(struct<3> Param0, float fParam3)
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
	
	if (Global_2413228.f_75.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2413228.f_75[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = unk_0x8DAF7A748E41AD46(&(Global_2413228.f_75[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2413228.f_75.f_225)
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
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359718[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (unk_0x0D6E79537424BACE(Var36, Var39, 1) < fParam3)
			{
				Var43 = { Global_2359718[iVar34 /*26*/].f_15 };
				iVar53 = func_140(&Var43);
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

int func_140(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_141(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_97271[iVar1 /*12*/].f_2;
		
		case 62:
			return Global_905334.f_18605[iVar1 /*12*/].f_2;
		
		default:
	}
	return iVar0;
}

int func_141(var uParam0)
{
	int iVar0;
	
	if (unk_0xB318FDA0D1ABDB20(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_143(uParam0->f_1))
	{
		if (func_142(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x236D8AD7EE179F46(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x236D8AD7EE179F46(Global_794573.f_4[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[iVar0 /*87*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x236D8AD7EE179F46(Global_947780.f_5[iVar0 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[iVar0 /*87*/]), &(uParam0->f_3)))
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

int func_142(var uParam0)
{
	if (Global_2397665)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_2397665.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_143(int iParam0)
{
	return iParam0 == 9999;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_145(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6441)
		{
			if (Global_2446446.f_124[iVar0 /*2*/] == iVar1 && Global_2446446.f_124[iVar0 /*2*/].f_1 == func_131(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_145(int iParam0)
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

int func_146()
{
	if (func_148(&(Local_94.f_27)))
	{
		if (Local_94.f_4)
		{
			func_147();
		}
		func_39();
		return 1;
	}
	return 0;
}

void func_147()
{
	Global_1708196 = 1;
	if (!unk_0x236D8AD7EE179F46(Global_2457846, 0))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2457846, 0);
		unk_0xF3148AAF69AF9CBC(&Global_1708197, 0);
	}
	if (!unk_0x236D8AD7EE179F46(Global_2457846, 1))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2457846, 1);
		unk_0xF3148AAF69AF9CBC(&Global_1708197, 1);
	}
	if (!unk_0x236D8AD7EE179F46(Global_2457846, 5))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2457846, 5);
		unk_0xF3148AAF69AF9CBC(&Global_1708197, 5);
	}
	if (unk_0x0017826B6757A11F(-355737150))
	{
		unk_0xFF3E86C4D581F64B(-355737150, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-580979506))
	{
		unk_0xFF3E86C4D581F64B(-580979506, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-1426452475))
	{
		unk_0xFF3E86C4D581F64B(-1426452475, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(745417724))
	{
		unk_0xFF3E86C4D581F64B(745417724, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-1305304906))
	{
		unk_0xFF3E86C4D581F64B(-1305304906, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-1543175077))
	{
		unk_0xFF3E86C4D581F64B(-1543175077, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-811770997))
	{
		unk_0xFF3E86C4D581F64B(-811770997, 0, 0, 0);
	}
}

int func_148(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_149(joaat("rhino")))
			{
				Local_94.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_149(joaat("hydra")))
			{
				Local_94.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_94.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_149(joaat("savage")))
			{
				Local_94.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_94.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_149(joaat("valkyrie")))
			{
				Local_94.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_149(joaat("buzzard")))
			{
				Local_94.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_149(int iParam0)
{
	if (!func_588())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_8865;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_8867;
				break;
			
			case joaat("savage"):
				return Global_262145.f_8866;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_8869;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_8868;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9144;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9146;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9145;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9148;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9147;
				break;
			}
	}
	return 0;
}

int func_150()
{
	return Global_262145.f_8879;
}

int func_151(var uParam0)
{
	int iVar0;
	
	if (!func_20(&(Local_94.f_334)))
	{
		func_18(&(Local_94.f_334), 0, 0);
	}
	else if (func_17(&(Local_94.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x945535897333587B())
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
			{
				if (!func_14(unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0)), 0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_728[iVar0 /*18*/].f_2, 7))
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

int func_152(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_153(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_154()
{
	struct<3> Var0;
	
	if (iLocal_3602 < 4)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iLocal_3602]))
		{
			if (unk_0x402F3F19221FF696(Local_94.f_7[iLocal_3602]))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iLocal_3602]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_23(&(Local_94.f_7[iLocal_3602]));
				}
			}
		}
	}
	iLocal_3602++;
	if (iLocal_3602 >= 4)
	{
		iLocal_3602 = 0;
	}
}

void func_155()
{
	if (func_14(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_1306, 13))
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_1306, 13);
			unk_0xC1A3EEFD7C446E1D(1);
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_1306, 13))
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xC1A3EEFD7C446E1D(0);
				unk_0xC69E84EBBD7166E6(&iLocal_1306, 13);
			}
		}
	}
}

void func_156()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_14(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	if (func_334())
	{
		func_230(0);
	}
	iVar0 = Global_1585045[unk_0x1329891157A54C63() /*400*/].f_324;
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
	{
		Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_25())
	{
		if (unk_0xA89AE5060232966A(iVar0))
		{
			if (unk_0x92016690A1675C2F(iVar0))
			{
				uVar1 = unk_0x563980A76107BC80(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_728[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_188();
						func_185(iVar2);
						break;
					
					case 1:
						func_184();
						func_161();
						func_157(1);
						break;
					
					case 2:
						func_157(0);
						break;
					}
				}
			}
	}
}

void func_157(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_158(Local_94.f_48[iVar0], &(Local_1322[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1);
		}
		else
		{
			func_158(Local_94.f_48[iVar0], &(Local_1322[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55);
		}
		if (unk_0xFBACB273AA628CC5(Local_1322[iVar0 /*8*/]))
		{
			unk_0x2AB7C42FF2AF476D(Local_1322[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x6FA15F9609E21DA5(Local_1322[iVar0 /*8*/], 1);
			}
		}
		if (unk_0xFBACB273AA628CC5(Local_1322[iVar0 /*8*/].f_1))
		{
			unk_0x2AB7C42FF2AF476D(Local_1322[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x6FA15F9609E21DA5(Local_1322[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_94.f_27 != joaat("hydra"))
		{
			if (unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar0)], func_82(iVar0)) || unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar0)], func_82(iVar0)))
			{
				if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar0]))
				{
					func_84(&(Local_1322[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0x236D8AD7EE179F46(Local_94.f_271, iVar1) || unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6, iVar1))
			{
				if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar0]))
				{
					func_84(&(Local_1322[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_158(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		if (func_160())
		{
			Global_2422670 = unk_0x1329891157A54C63();
		}
		if (bParam3)
		{
			func_159(unk_0xCFD52BB67CC0A98F(uParam0), uParam1, 1, Global_2422670, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
		else
		{
			func_159(unk_0xCFD52BB67CC0A98F(uParam0), uParam1, -1, Global_2422670, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
	}
	else if (unk_0xFBACB273AA628CC5(*uParam1))
	{
		func_84(uParam1);
	}
}

int func_159(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xEC537F0C0E8265EE();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0xDBC7B8E3258E68CE(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xCAE13BE6285A2562(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E7BA9EA361385C5(iParam0, iParam2);
			unk_0x4C730676BE9DF375(iParam0, fParam6);
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				unk_0xCB015C3E2E01CA1C(*uParam1, 7);
			}
		}
		unk_0x581873C8EB9FC73D(iParam0, uParam4);
		unk_0xE52713622089952D(iParam0, uParam5);
		*uParam1 = unk_0x8A4F3BFB34FAA5A8(iParam0);
		if (!unk_0x236D8AD7EE179F46(uParam1->f_6, 2))
		{
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				if (!unk_0xB318FDA0D1ABDB20(uParam7))
				{
					unk_0xF8EE50B3E85D24B7("MCUSTBLIP");
					unk_0x6222A57F463E8EE7(sParam7);
					unk_0xE5C70EC67B67C35E(*uParam1);
				}
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
		{
			uParam1->f_1 = unk_0x18D49A1E7201D38E(iParam0);
			if (!unk_0x236D8AD7EE179F46(uParam1->f_6, 3))
			{
				if (unk_0xFBACB273AA628CC5(uParam1->f_1))
				{
					unk_0xCB015C3E2E01CA1C(uParam1->f_1, 7);
					unk_0xF3148AAF69AF9CBC(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xFBACB273AA628CC5(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xC69E84EBBD7166E6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return Global_1315867;
}

void func_161()
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
	
	iVar2 = (func_33() - func_118(&(Local_94.f_332), 0, 0));
	if (iLocal_3548 == 0)
	{
		if (unk_0x236D8AD7EE179F46(iLocal_1305, 26))
		{
			if ((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2))
			{
				iLocal_3548 = (func_33() - func_118(&(Local_94.f_332), 0, 0));
				iVar2 = iLocal_3548;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3548;
	}
	if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_588())
	{
		iVar0 = (((Local_94.f_256[0] + Local_94.f_256[1]) + Local_94.f_256[2]) + Local_94.f_256[3]);
	}
	else
	{
		iVar0 = Local_94.f_256[0];
	}
	func_183(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_588())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = unk_0x6528B1497E4313F1(Local_94.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_25())
			{
				if (unk_0xA89AE5060232966A(iVar21))
				{
					sVar4[iVar1] = unk_0xB67DF8F35744CF60(iVar21);
					iVar10[iVar1] = Local_94.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_94.f_594[iVar1 /*4*/];
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 == uVar15[iVar1])
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
		if ((func_33() - func_118(&(Local_94.f_332), 0, 0)) >= 0)
		{
			if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
			{
				func_179(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_180(), iVar20);
			}
			else
			{
				func_177(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_180(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_94.f_255)
		{
			iVar0 = Local_94.f_255;
		}
		if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
		{
			func_176(unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), iVar0, iVar0, Local_94.f_255, iVar2, iVar3, 0, func_180());
		}
		else
		{
			func_162(iVar0, iVar0, Local_94.f_255, iVar2, iVar3, 0, func_180(), 1);
		}
		if (bVar9)
		{
			func_107();
		}
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_173(0) == 0)
	{
		return;
	}
	func_172();
	func_171();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_168(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
	}
	func_167(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_166(sParam6))
	{
		sVar16 = sParam6;
	}
	func_163(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0);
}

void func_163(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_165(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_164(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_164(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_165(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_166(char* sParam0)
{
	if (unk_0x4357449749A521B1(uParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5(uParam0, "") || unk_0xD994929E13CC1ED5(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_165(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_164(4, iVar0);
		Global_1336084.f_2742[iVar0] = iParam0;
		Global_1336084.f_2742.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1336084.f_2742.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1336084.f_2742.f_183[iVar0] = iParam3;
		Global_1336084.f_2742.f_216[iVar0] = iParam5;
		Global_1336084.f_2742.f_194[iVar0] = iParam4;
		Global_1336084.f_2742.f_227[iVar0] = iParam6;
		Global_1336084.f_2742.f_270[iVar0] = iParam7;
		Global_1336084.f_2742.f_281[iVar0] = iParam8;
		Global_1336084.f_2742.f_292[iVar0] = iParam9;
		Global_1336084.f_2742.f_303[iVar0] = iParam10;
		Global_1336084.f_2742.f_314[iVar0] = iParam11;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x913B1C01C1BA6C6F()) && iParam12)
		{
			Global_1336084.f_941 = 1;
		}
	}
}

void func_168(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_165(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_164(6, iVar0);
		Global_1336084.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3370.f_183[iVar0] = iParam3;
		Global_1336084.f_3370.f_172[iVar0] = iParam2;
		Global_1336084.f_3370.f_260[iVar0] = iParam4;
		Global_1336084.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_3370.f_443[iVar0] = iParam7;
		Global_1336084.f_3370.f_454[iVar0] = iParam8;
		Global_1336084.f_3370.f_497[iVar0] = iParam9;
		Global_1336084.f_3370.f_508[iVar0] = iParam10;
		Global_1336084.f_3370.f_205[iVar0] = iParam11;
		Global_1336084.f_3370.f_216[iVar0] = iParam12;
		Global_1336084.f_3370.f_227[iVar0] = iParam13;
		Global_1336084.f_3370.f_238[iVar0] = iParam14;
		Global_1336084.f_3370.f_249[iVar0] = iParam15;
		Global_1336084.f_3370.f_519[iVar0] = iParam16;
		Global_1336084.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_170())
		{
			Global_1336084.f_941 = 1;
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			iVar2 = 0;
			unk_0x510185F6AA2AE89F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1336084.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1336084.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1336084.f_941 = 1;
			}
			if (func_169())
			{
				Global_1336084.f_945 = 1;
			}
		}
	}
}

int func_169()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x510185F6AA2AE89F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_170()
{
	if ((unk_0x45EDE682E0EE8FDF() == 8 || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
	{
		return 1;
	}
	return 0;
}

void func_171()
{
	unk_0xC9A352663D97EFC3(8);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(6);
	unk_0xC9A352663D97EFC3(7);
	Global_2438034 = 1;
}

void func_172()
{
	Global_1336084.f_941 = 1;
}

int func_173(bool bParam0)
{
	if (func_175())
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_665(unk_0x1329891157A54C63(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_174()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

bool func_175()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 12);
}

void func_176(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_173(0) == 0)
	{
		return;
	}
	func_171();
	func_172();
	if (bParam6)
	{
		func_168(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_167(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_166(sParam7))
	{
		sVar0 = sParam7;
	}
	func_163(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0);
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_173(0) == 0)
	{
		return;
	}
	func_172();
	func_171();
	if (iParam0 > -1)
	{
		Var0 = { func_178(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_168(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_178(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_168(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_178(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_168(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_178(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_168(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_166(sParam10))
	{
		sVar20 = sParam10;
	}
	func_163(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0);
}

struct<16> func_178(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0x46E7F5908F815DDC("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_179(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_173(0) == 0)
	{
		return;
	}
	func_172();
	func_171();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_168(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_168(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_168(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_168(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_166(sParam14))
	{
		sVar4 = sParam14;
	}
	func_163(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0);
}

char* func_180()
{
	return "HUD_COUNTDOWN";
	switch (func_182(unk_0x1329891157A54C63()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_181())
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

int func_181()
{
	if (func_182(unk_0x1329891157A54C63()) == 133)
	{
		return Global_2451473.f_4624;
	}
	return -1;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/];
	}
	return -1;
}

void func_183(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
			{
				unk_0xE3131684E8191AA9(&(Global_2451473.f_4542));
			}
			unk_0x094B864326B5FE96(1);
			unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
			unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
			Global_2451473.f_4540 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					if (unk_0x0C66FFD2F3913C49())
					{
						if ((!unk_0xD994929E13CC1ED5(unk_0x41899D9898B4EEE4(unk_0x2595B211F055F9FB()), "OFF") && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && !unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
						{
							StringCopy(&(Global_2451473.f_4542), "", 32);
							unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
							unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
							unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
							unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
							unk_0x094B864326B5FE96(1);
							unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
						}
					}
				}
				else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 5))
				{
					unk_0xE3131684E8191AA9("OFF");
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_30S");
				}
				unk_0xF2A6D4C99549CA85("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x71994BFA37D418F5() != 0)
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x75D6577FC39B6697())
						{
							StringCopy(&(Global_2451473.f_4542), unk_0x85C45E5EB4792D9B(), 32);
							unk_0xE3131684E8191AA9("OFF");
						}
						unk_0x094B864326B5FE96(1);
						unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 3))
				{
					Global_2451473.f_4550 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(Global_2451473.f_4550, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
			{
				Global_2451473.f_4540 = 0;
				Global_2451473.f_4550 = -1;
				unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
				unk_0x094B864326B5FE96(0);
				unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
				unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
				unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
				unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			Global_2451473.f_4540 = 0;
			Global_2451473.f_4550 = -1;
			unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
			unk_0x094B864326B5FE96(0);
			unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
			}
		}
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFBACB273AA628CC5(uLocal_1317[iVar0]))
		{
			unk_0x0A8175F24237A3D4(&(uLocal_1317[iVar0]));
		}
		iVar0++;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xFBACB273AA628CC5(uLocal_1317[iVar0]))
		{
			if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
			{
				if (!unk_0x236D8AD7EE179F46(Local_94.f_13, iVar0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_728[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1317[iVar0] = unk_0xE122DDAE9E94767B(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]));
						unk_0x8F827BB0F6ED7AA8(uLocal_1317[iVar0], 429);
						func_186(&(uLocal_1317[iVar0]), 29);
						if (func_588())
						{
							unk_0x2AB7C42FF2AF476D(uLocal_1317[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0x2AB7C42FF2AF476D(uLocal_1317[iVar0], "UW_BLIP");
						}
						unk_0xCB015C3E2E01CA1C(uLocal_1317[iVar0], 9);
					}
					else if (unk_0xFBACB273AA628CC5(uLocal_1317[iVar0]))
					{
						unk_0x0A8175F24237A3D4(&(uLocal_1317[iVar0]));
					}
				}
				else if (unk_0xFBACB273AA628CC5(uLocal_1317[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_1317[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_186(var uParam0, int iParam1)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, func_187(iParam1));
	}
}

int func_187(int iParam0)
{
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
	return 0;
}

void func_188()
{
	bool bVar0;
	
	bVar0 = func_222();
	if (bVar0)
	{
		if (Local_94.f_413 > -1)
		{
			if ((Local_94.f_413 - func_118(&(Local_94.f_326), 0, 0)) >= 0)
			{
				if (!func_192())
				{
					func_191((Local_94.f_413 - func_118(&(Local_94.f_326), 0, 0)));
					func_189((Local_94.f_413 - func_118(&(Local_94.f_326), 0, 0)), func_190(-1));
				}
			}
			else
			{
				if (!func_192())
				{
					func_189(0, func_190(-1));
				}
				if (unk_0x1C7D9BFDF15A02B4())
				{
					unk_0xF3148AAF69AF9CBC(&(Local_94.f_3), 4);
				}
			}
		}
	}
}

void func_189(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_173(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_166(sParam1))
	{
		sVar0 = sParam1;
	}
	func_163(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

char* func_190(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x11CA2334E341B424();
	return "HUD_STARTING";
	if (unk_0xD994929E13CC1ED5(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_challenges"))
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
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xD994929E13CC1ED5(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_191(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		Global_2451473.f_4540 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
		{
			unk_0x35D7948F61AA3FEC(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2451473.f_4540 = 0;
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
		}
	}
}

bool func_192()
{
	bool bVar0;
	var uVar1;
	
	if (func_220(8))
	{
		bVar0 = true;
	}
	if (func_220(0))
	{
		bVar0 = true;
	}
	if (!func_210(129, 0))
	{
		bVar0 = true;
	}
	if (!func_197())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 9))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				uVar1 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
				if (!unk_0x7404950238A154C2(uVar1, 0))
				{
					func_195(0, -1);
					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 9))
	{
		unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 9);
	}
	if (Global_1698742)
	{
		bVar0 = true;
	}
	if (func_194(unk_0x1329891157A54C63()))
	{
		bVar0 = true;
	}
	if (func_193(unk_0x1329891157A54C63(), 2))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_193(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_194(int iParam0)
{
	if (!func_665(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1585045[iParam0 /*400*/].f_35;
}

void func_195(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1585044)
		{
			if (!func_220(0) && !func_220(func_196(iParam1)))
			{
				Global_1585044 = 1;
			}
		}
	}
	else if (Global_1585044)
	{
		Global_1585044 = 0;
	}
}

int func_196(int iParam0)
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

int func_197()
{
	if (func_193(unk_0x1329891157A54C63(), 21))
	{
		return 0;
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		return 0;
	}
	if (unk_0xD10899F3A1372292())
	{
		return 0;
	}
	if (func_208(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_207())
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	if (unk_0x726DA50057167075())
	{
		return 0;
	}
	if (func_203(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!func_201())
	{
		return 0;
	}
	if (func_193(unk_0x1329891157A54C63(), 0) || func_193(unk_0x1329891157A54C63(), 3))
	{
		return 0;
	}
	if ((func_193(unk_0x1329891157A54C63(), 12) || func_193(unk_0x1329891157A54C63(), 14)) || func_193(unk_0x1329891157A54C63(), 13))
	{
		return 0;
	}
	if (func_200(unk_0x1329891157A54C63(), 0))
	{
		return 0;
	}
	if (func_199())
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (func_194(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	return 1;
}

int func_198()
{
	if (Global_2539917.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_199()
{
	return Global_90861.f_297 > 0;
}

int func_200(int iParam0, bool bParam1)
{
	if (Global_1585045[iParam0 /*400*/].f_248.f_7 > 0)
	{
		if (bParam1)
		{
			if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
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

int func_201()
{
	if (func_202() == 0)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	return Global_1312466.f_18;
}

bool func_203(int iParam0)
{
	return func_204(iParam0);
}

bool func_204(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_205()
{
	return Global_1315892;
}

bool func_206()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/] == 5;
}

bool func_207()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_208(int iParam0)
{
	if (func_209(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_203(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_210(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6049 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_215(unk_0x1329891157A54C63(), 85))
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
		if (Global_262145.f_4850 == 1)
		{
			return 1;
		}
	}
	if (func_214() || func_213())
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
			if (func_211())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x236D8AD7EE179F46(Global_1573858[iVar1], iVar0);
}

int func_211()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 23))
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (func_213())
	{
		return 1;
	}
	uVar0 = Global_1343666[func_212(-1)];
	if (unk_0x236D8AD7EE179F46(uVar0, 7))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1623), 23);
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

bool func_213()
{
	return Global_1315880;
}

bool func_214()
{
	return Global_1315882;
}

bool func_215(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_218())
	{
		return 0;
	}
	if (func_217())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_216(iParam1);
	iVar1 = uVar0;
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_314, iVar1);
}

int func_216(int iParam0)
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

bool func_217()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_132, 3);
}

int func_218()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (func_213())
	{
		return 1;
	}
	return func_219(120, -1);
}

int func_219(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_212(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	var uVar0;
	
	uVar0 = func_221(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_212(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_222()
{
	bool bVar0;
	
	if (!func_588())
	{
		if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
	{
		if (func_104() == 2)
		{
			return 0;
		}
	}
	if (!func_588())
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[0]))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_94.f_15 != false;
			}
			else
			{
				bVar0 = Local_94.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x236D8AD7EE179F46(Local_94.f_3, 9);
	}
	if (!func_14(unk_0x1329891157A54C63(), 0))
	{
		if (bVar0 && !func_192())
		{
			if (func_588())
			{
				if (!func_229("UW_ABTSC"))
				{
					func_223("UW_ABTSC", 0);
				}
			}
			else if (!func_229("UW_ABTS"))
			{
				func_223("UW_ABTS", 0);
			}
		}
		else if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
		{
			func_7();
		}
	}
	return bVar0;
}

void func_223(char* sParam0, bool bParam1)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (func_227(sParam0))
	{
		return;
	}
	func_8();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_226();
	func_225(bParam1);
	func_224();
}

void func_224()
{
	unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 1);
}

void func_225(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_1312577.f_39), 0);
}

void func_226()
{
	Global_1312577.f_8 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 86400000);
	Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
}

bool func_227(char* sParam0)
{
	if (!func_13())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_228(uParam0);
	}
	if (unk_0xB318FDA0D1ABDB20(uParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
}

bool func_228(char* sParam0)
{
	if (!func_13())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(uParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

int func_229(char* sParam0)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	if (!func_13())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0xA84EEA1DAC64D0D5(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return 0;
	}
	return func_227(sParam0);
}

void func_230(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	bool bVar9;
	
	Var1 = { func_333() };
	StringCopy(&Var5, "UW_TM", 16);
	bVar9 = false;
	if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1531[iVar0 /*46*/] = -1;
			Local_1531[iVar0 /*46*/].f_1 = func_25();
			Local_1531[iVar0 /*46*/].f_8 = 0;
			Local_1531[iVar0 /*46*/].f_29 = -1;
			if (Local_94.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1531[iVar0 /*46*/].f_1 = Local_94.f_465[iVar0 /*4*/].f_2;
				Local_1531[iVar0 /*46*/].f_8 = Local_94.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_332())
			{
				if (unk_0xB318FDA0D1ABDB20(Local_3004.f_105))
				{
					Local_3004.f_105 = func_329(&Local_3004);
				}
				else
				{
					func_195(1, 129);
				}
			}
		}
		else if (unk_0xB318FDA0D1ABDB20(Local_3004.f_105))
		{
			Local_3004.f_105 = func_329(&Local_3004);
		}
		func_235(&Local_1531, &uLocal_1530, 23, &Local_3004, &uLocal_3112, -1, 0);
		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 1)
		{
			if (Local_1531[0 /*46*/].f_1 != unk_0x1329891157A54C63())
			{
				if (Local_94.f_465[0 /*4*/].f_1 > 0)
				{
					func_234();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			StringCopy(&Var5, "UW_TM", 16);
			Local_1531[iVar0 /*46*/] = -1;
			Local_1531[iVar0 /*46*/].f_1 = func_25();
			Local_1531[iVar0 /*46*/].f_8 = 0;
			Local_1531[iVar0 /*46*/].f_29 = -1;
			if (Local_94.f_465[iVar0 /*4*/].f_1 > -1)
			{
				StringIntConCat(&Var5, Local_94.f_465[iVar0 /*4*/] + 1, 16);
				Local_1531[iVar0 /*46*/].f_36 = { Var5 };
				Local_1531[iVar0 /*46*/].f_1 = unk_0x6528B1497E4313F1(Local_94.f_465[iVar0 /*4*/].f_2);
				StringCopy(&(Local_1531[iVar0 /*46*/].f_40), "", 16);
				Local_1531[iVar0 /*46*/].f_44 = Local_94.f_465[iVar0 /*4*/].f_1;
				Local_1531[iVar0 /*46*/].f_8 = Local_94.f_465[iVar0 /*4*/].f_1;
				Local_1531[iVar0 /*46*/].f_2 = Local_94.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_231();
		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 1)
		{
			if (Local_94.f_594[0 /*4*/] > 0)
			{
				if (Local_94.f_594[0 /*4*/] != Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9)
				{
					if (Local_94.f_256[Local_94.f_594[0 /*4*/]] > 0)
					{
						func_234();
					}
				}
			}
		}
		func_235(&Local_1531, &uLocal_1530, 23, &Local_3004, &uLocal_3112, -1, 1);
		if (bParam0)
		{
			if (!func_332())
			{
				if (unk_0xB318FDA0D1ABDB20(Local_3004.f_105))
				{
					Local_3004.f_105 = func_329(&Local_3004);
				}
				else
				{
					func_195(1, 129);
				}
			}
		}
		else if (unk_0xB318FDA0D1ABDB20(Local_3004.f_105))
		{
			Local_3004.f_105 = func_329(&Local_3004);
		}
	}
}

void func_231()
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
	
	uLocal_3637[0] = Local_94.f_594[0 /*4*/];
	uLocal_3637[1] = Local_94.f_594[1 /*4*/];
	uLocal_3637[2] = Local_94.f_594[2 /*4*/];
	uLocal_3637[3] = Local_94.f_594[3 /*4*/];
	iVar3 = Local_94.f_594[0 /*4*/];
	iVar4 = Local_94.f_594[1 /*4*/];
	iVar5 = Local_94.f_594[2 /*4*/];
	iVar6 = Local_94.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_94.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_94.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_94.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_94.f_266[iVar6];
	}
	uLocal_3642[0] = uVar7;
	uLocal_3642[1] = uVar8;
	uLocal_3642[2] = uVar9;
	uLocal_3642[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0xD49F8CA46CF1D5B3())
	{
		iVar2 = func_233(uLocal_3637[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1531[iVar2 /*46*/].f_8 = Local_94.f_594[iVar0 /*4*/].f_1;
		}
		func_232(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3642[iVar0])
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

void func_232(int iParam0, int iParam1)
{
	struct<46> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1531[iParam1 /*46*/] };
	Local_1531[iParam1 /*46*/] = { Local_1531[iParam0 /*46*/] };
	Local_1531[iParam0 /*46*/] = { Var0 };
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0xD49F8CA46CF1D5B3() - 1))
	{
		if (iParam0 == Local_1531[iVar0 /*46*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0xD49F8CA46CF1D5B3();
		}
		iVar0++;
	}
	return iVar1;
}

void func_234()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 19);
}

void func_235(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_37 = 0;
	if (func_325())
	{
		if (func_293(uParam1, iParam2, uParam3, Global_1573670, 0, func_334()))
		{
			func_292(1);
			if (!func_290() || unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
			{
				if (func_289())
				{
					func_286();
				}
				else
				{
					unk_0x700CD125EC59941D(76, 84);
					if (uParam3->f_28 == 0)
					{
						func_285(1);
						Global_1573670 = 0;
						iVar18 = -1;
						if (Global_1573818 != 1)
						{
							func_284(uParam1);
							if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
							{
								unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
							}
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							if (func_283())
							{
								if (func_665(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar0 = unk_0x6528B1497E4313F1(iVar16);
								}
								else
								{
									iVar0 = func_25();
								}
							}
							else
							{
								iVar0 = (iParam0[iVar16 /*46*/])->f_1;
							}
							if ((func_282(iVar0) && func_276(iVar0)) && func_665(iVar0, 0, 1))
							{
								iVar9 = iVar0;
								uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
								iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
								Var3 = { func_271(iVar0) };
								if (iVar0 == unk_0x1329891157A54C63())
								{
									uParam3->f_36 = iVar17;
								}
								StringCopy(&(uParam3->f_1), unk_0xB67DF8F35744CF60(iVar0), 64);
								*(uParam4[iVar16 /*13*/]) = { func_60(iVar0) };
								if (func_270(*(uParam4[iVar16 /*13*/])))
								{
								}
								iVar2 = func_264(iVar0);
								sVar1 = "";
								if (iVar2 != 0)
								{
									sVar1 = unk_0xD23DF626788C30FE(iVar2);
								}
								Global_1573670++;
								if ((iParam0[iVar16 /*46*/])->f_21 != -1f)
								{
									fVar10 = (iParam0[iVar16 /*46*/])->f_21;
								}
								if ((iParam0[iVar16 /*46*/])->f_29 != -1)
								{
									iVar11 = (iParam0[iVar16 /*46*/])->f_29;
								}
								if ((iParam0[iVar16 /*46*/])->f_45 != -1)
								{
									iVar12 = (iParam0[iVar16 /*46*/])->f_45;
								}
								iVar8 = (iParam0[iVar16 /*46*/])->f_8;
								if (((iParam0[iVar16 /*46*/])->f_8 != -1 || (iParam0[iVar16 /*46*/])->f_21 != -1f) || (iParam0[iVar16 /*46*/])->f_29 != -1)
								{
									if (!func_283())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_259(&iVar8, &fVar10, (iParam0[iVar16 /*46*/])->f_8, iParam5);
									uParam3->f_104 = func_258(iParam5, 1, 0, 0);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar16 /*46*/])->f_2 + 1;
									if (iVar18 != iVar13)
									{
										iVar18 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								if (func_257(iParam5))
								{
									func_255(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_256(), iVar15, fVar10, iVar8, iVar12, &((iParam0[iVar16 /*46*/])->f_36), &((iParam0[iVar16 /*46*/])->f_40), (iParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								else
								{
									func_255(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_256(), iVar15, fVar10, iVar11, iVar12, &((iParam0[iVar16 /*46*/])->f_36), &((iParam0[iVar16 /*46*/])->f_40), (iParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								unk_0xF3148AAF69AF9CBC(&iVar14, iVar0);
								iVar17++;
							}
							iVar16++;
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							iVar0 = unk_0x6528B1497E4313F1(iVar16);
							if (func_665(iVar0, 0, 1) && !unk_0x236D8AD7EE179F46(iVar14, iVar0))
							{
								iVar0 = unk_0x6528B1497E4313F1(iVar16);
							}
							else
							{
								iVar0 = func_25();
							}
							if (func_282(iVar0))
							{
								if (func_665(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar9 = iVar0;
									uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
									iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
									Var3 = { func_271(iVar0) };
									*(uParam4[iVar16 /*13*/]) = { func_60(iVar0) };
									iVar2 = func_264(iVar0);
									sVar1 = "";
									if (iVar2 != 0)
									{
										sVar1 = unk_0xD23DF626788C30FE(iVar2);
									}
									Global_1573670++;
									func_247(unk_0xB67DF8F35744CF60(iVar0), uParam1, uParam3, iVar17, Var3, sVar1, iVar7, 116, iVar15);
									iVar17++;
								}
							}
							iVar16++;
						}
						if (unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							func_244(uParam3, uParam1);
						}
						func_98(&(uParam3->f_22));
						func_243();
						uParam3->f_28 = 2;
					}
					if (uParam3->f_28 == 2)
					{
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
						{
							func_242(uParam3, uParam1);
							func_241(uParam1, 0, 1);
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 7);
						}
						func_242(uParam3, uParam1);
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 11);
						}
						if (func_238(uParam3))
						{
							Global_1573818 = 1;
						}
						func_236(uParam3);
						if (Global_1573818 == 1)
						{
							uParam3->f_28 = 0;
						}
						if (Global_1573818 == 2)
						{
							uParam3->f_28 = 0;
						}
					}
					if (unk_0xCC8E3BAC62A29F42(*uParam1))
					{
						unk_0x7F3AA121397DEEC9(7);
						unk_0xD45896EF84BD41C8(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F3AA121397DEEC9(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_28 = 0;
			func_243();
			func_285(0);
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
			}
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 10))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 10);
			}
		}
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_236(var uParam0)
{
	if (!func_20(&(uParam0->f_22)))
	{
		func_18(&(uParam0->f_22), 0, 0);
	}
	else if (func_17(&(uParam0->f_22), 250, 0))
	{
		func_98(&(uParam0->f_22));
		func_237(0);
	}
}

void func_237(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573818 != 2)
		{
			Global_1573818 = 2;
		}
	}
	else
	{
		switch (Global_1573818)
		{
			case 0:
				Global_1573818 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_238(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_38;
	iVar15 = unk_0x6528B1497E4313F1(uParam0->f_38);
	if (iVar15 != func_25() && func_665(iVar15, 0, 1))
	{
		Var2 = { func_60(iVar15) };
		iVar1 = func_240(uParam0, uParam0->f_38);
		if (func_270(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_239(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_239(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_239(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_239(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x6E5E82D7E6363134(&Var2))
						{
							iVar16 = 1;
							func_239(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_239(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_38++;
	if (uParam0->f_38 >= 32)
	{
		uParam0->f_38 = 0;
	}
	return iVar16;
}

void func_239(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*2*/] = iParam2;
}

var func_240(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*2*/];
}

void func_241(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x21ED0FC9B5CC748B(*uParam0, "COLLAPSE"))
	{
		unk_0x75A2A42ADE12FD0E(iParam1);
		unk_0xBA9BA6181F2B6111();
	}
	if (iParam2 == 1)
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBA9BA6181F2B6111();
		}
	}
}

void func_242(var uParam0, var uParam1)
{
	if (!unk_0x236D8AD7EE179F46(uParam0->f_34, 10))
	{
		unk_0x21ED0FC9B5CC748B(*uParam1, "SET_HIGHLIGHT");
		unk_0xBD0C54D89298454E(uParam0->f_36);
		unk_0xBA9BA6181F2B6111();
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_34), 10);
	}
}

void func_243()
{
	if (Global_1573818 != 0)
	{
		Global_1573818 = 0;
	}
}

void func_244(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar0);
		if (iVar2 != func_25())
		{
			if (func_665(iVar2, 0, 1))
			{
				if (uParam0->f_39[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_246(uParam0->f_39[iVar0 /*2*/]);
					func_245(uParam1, uParam0->f_39[iVar0 /*2*/].f_1, iVar1, Global_1585045[iVar0 /*400*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "SET_ICON"))
		{
			unk_0xBD0C54D89298454E(iParam1);
			unk_0xBD0C54D89298454E(iParam2);
			if (iParam2 == 65)
			{
				unk_0xBD0C54D89298454E(iParam3);
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 65;
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

void func_247(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_254() && iParam3 < func_253())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573672)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x21ED0FC9B5CC748B(*uParam1, sVar1))
		{
			unk_0xBD0C54D89298454E(iParam3);
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 8) || uParam2->f_107 == 6)
			{
				func_252("");
			}
			else
			{
				unk_0xBD0C54D89298454E(iParam9);
			}
			func_252(sParam0);
			unk_0xBD0C54D89298454E(iParam10);
			if (uParam2->f_107 == 6)
			{
				func_252("");
			}
			else
			{
				unk_0xBD0C54D89298454E(65);
			}
			unk_0xBD0C54D89298454E(-1);
			func_252("");
			if (uParam2->f_107 == 6)
			{
				func_252("");
			}
			else
			{
				func_252(&sParam4);
			}
			unk_0x75A2A42ADE12FD0E(uParam2->f_37);
			unk_0x19A855A370EE563C(sParam8);
			unk_0x19A855A370EE563C(sParam8);
			if (func_251(uParam2))
			{
				func_250("DPAD_FRIEND");
			}
			else if (func_249(uParam2))
			{
				func_250("DPAD_FRIEND");
			}
			else if (func_248(uParam2))
			{
				func_250("DPAD_CREW");
			}
			else
			{
				func_250("");
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

bool func_248(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 6);
}

bool func_249(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 5);
}

void func_250(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

int func_251(var uParam0)
{
	if (func_249(uParam0) && func_248(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_252(char* sParam0)
{
	unk_0x1F704997074F9C16(sParam0);
}

int func_253()
{
	int iVar0;
	
	if (Global_1573672)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573672)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_255(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_254() && iParam2 < func_253())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573672)
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
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			if (unk_0x21ED0FC9B5CC748B(*uParam0, sVar1))
			{
				unk_0xBD0C54D89298454E(iParam2);
				if (unk_0x236D8AD7EE179F46(uParam1->f_34, 8) || uParam1->f_107 == 6)
				{
					func_252("");
				}
				else
				{
					unk_0xBD0C54D89298454E(iParam8);
				}
				if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					func_250(sParam15);
				}
				else
				{
					func_252(&(uParam1->f_1));
				}
				unk_0xBD0C54D89298454E(iParam10);
				if (uParam1->f_107 == 6)
				{
					func_252("");
				}
				else
				{
					unk_0xBD0C54D89298454E(65);
				}
				if (iParam11 == 1)
				{
					unk_0xBD0C54D89298454E(iVar0);
				}
				else
				{
					unk_0xBD0C54D89298454E(-1);
				}
				if (func_283())
				{
					func_252("");
				}
				else if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 5 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if ((uParam1->f_107 == 7 && !unk_0xB318FDA0D1ABDB20(sParam15)) && !unk_0xB318FDA0D1ABDB20(sParam16))
				{
					unk_0x6CE839BF5D87A428("FM_AE_TWO_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x072D7B028D6C7A05(sParam16);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 8 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
				{
					unk_0x6CE839BF5D87A428("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xB6F6A8755E3C6180(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6D55FF05D62B91BC(iParam9);
					}
					unk_0x072D7B028D6C7A05(uParam1->f_104);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 9)
				{
					unk_0x6CE839BF5D87A428("FM_AE_CASH");
					unk_0x849D5F6ABEAF5CC2(iParam9, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
					{
						func_250(uParam1->f_104);
					}
					else
					{
						func_252("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam13, 6);
					unk_0xC3822F70D0E7940B();
				}
				else if (fParam12 != -1f)
				{
					unk_0x6CE839BF5D87A428("NUMBER");
					unk_0xB6F6A8755E3C6180(fParam12, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam9 != -1)
				{
					unk_0xBD0C54D89298454E(iParam9);
				}
				else
				{
					func_252("");
				}
				if (uParam1->f_107 == 6)
				{
					func_252("");
				}
				else
				{
					func_252(&sParam3);
				}
				unk_0x75A2A42ADE12FD0E(uParam1->f_37);
				if (iParam11 == 1 || unk_0xB318FDA0D1ABDB20(sParam7))
				{
					func_252("");
					func_252("");
				}
				else
				{
					unk_0x19A855A370EE563C(sParam7);
					unk_0x19A855A370EE563C(sParam7);
				}
				if (func_251(uParam1))
				{
					func_250("DPAD_FRIEND");
				}
				else if (func_249(uParam1))
				{
					func_250("DPAD_FRIEND");
				}
				else if (func_248(uParam1))
				{
					func_250("DPAD_CREW");
				}
				else
				{
					func_250("");
				}
				unk_0xBA9BA6181F2B6111();
			}
		}
	}
}

int func_256()
{
	return 21;
}

int func_257(int iParam0)
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

char* func_258(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x32D4891AD2E2D140())
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
			if (unk_0x32D4891AD2E2D140())
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

int func_259(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_263(iParam3))
	{
		*fParam1 = (func_260(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_257(iParam3))
	{
		*fParam1 = (func_260(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_260(int iParam0, int iParam1)
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
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_262(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_261(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_261(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_262(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_263(int iParam0)
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

int func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		func_265(iParam0, 1);
		return 0;
	}
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
}

void func_265(int iParam0, bool bParam1)
{
	if (!func_665(iParam0, 0, 1))
	{
		return;
	}
	if (func_267(iParam0) != -1)
	{
		return;
	}
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_266(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (!func_665(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_268(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_268(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_269(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_269(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_25();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

bool func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

struct<4> func_271(int iParam0)
{
	struct<4> Var0;
	
	if (func_665(iParam0, 0, 1))
	{
		Global_2450501 = { func_60(iParam0) };
		if (unk_0x3F0C224D3CC05EF2())
		{
			if (func_270(Global_2450501))
			{
				if (!unk_0x02F6979593134AF6(&Global_2450501))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xBEC1291D6B41868E(0))
		{
			return Var0;
		}
		if (func_275(&Global_2450501))
		{
			Global_2450431 = { func_273(iParam0) };
			func_272(&Global_2450431, &Var0);
		}
	}
	return Var0;
}

void func_272(var uParam0, var uParam1)
{
	unk_0x99C56C4A7747183E(uParam0, 35, uParam1);
}

struct<35> func_273(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_274(iParam0))
	{
		return Global_1315926[unk_0x1329891157A54C63() /*35*/];
	}
	Var0 = { func_60(iParam0) };
	unk_0xEF956A1EC046AA4A(&Var13, 35, &Var0);
	return Var13;
}

int func_274(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0)
{
	if (unk_0x98465343DD18A1F7())
	{
		if (unk_0x80622F5ED5957337() && unk_0x464883E45616A088(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)
{
	if (func_281(iParam0) || func_280(iParam0))
	{
		return 0;
	}
	if (!func_279(iParam0))
	{
		return 0;
	}
	if ((!func_278(iParam0) && Global_2414506[iParam0 /*255*/].f_230 == -1) && !func_277(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_277(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

int func_278(int iParam0)
{
	if (func_665(iParam0, 0, 1))
	{
		if (func_665(unk_0x1329891157A54C63(), 0, 1))
		{
			if (unk_0x4F5BEB9A4097F301(iParam0, unk_0x1329891157A54C63()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_279(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 22);
}

int func_280(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10) || unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9));
	}
	return 0;
}

bool func_281(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 2);
}

int func_282(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iVar0 /*400*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_283()
{
	switch (func_182(unk_0x1329891157A54C63()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	return 0;
}

void func_284(var uParam0)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xBD0C54D89298454E(0);
		unk_0xBA9BA6181F2B6111();
	}
}

void func_285(bool bParam0)
{
	if (bParam0)
	{
		Global_1334763.f_2 = 1;
	}
	else
	{
		Global_1334763.f_2 = 0;
	}
}

void func_286()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
	{
		if (func_288())
		{
			func_287();
		}
	}
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 != 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_288()
{
	return Global_2422670.f_2137[0 /*70*/].f_1 != 0;
}

int func_289()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0) && func_288())
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1) && func_288())
	{
		return 1;
	}
	return 0;
}

int func_290()
{
	if (func_288())
	{
		if (func_291(Global_2422670.f_2137[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0)
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

void func_292(int iParam0)
{
	Global_1334763.f_1 = Global_1334763;
	Global_1334763 = iParam0;
}

int func_293(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	
	StringCopy(&Var0, "", 16);
	bVar5 = func_324(iParam1);
	if (iParam1 == 17)
	{
		bVar4 = true;
	}
	fVar6 = func_323();
	if (iParam1 == 23)
	{
		if (func_322())
		{
			if (func_321() > 0 && Global_1573672)
			{
				unk_0x10BFA51B8BA62476();
				unk_0x97925E0DE42EFC5C(fVar6);
				unk_0xC9A352663D97EFC3(18);
				if (unk_0xA83A609D74168B30())
				{
					unk_0xB5BFC55E4F67D18D();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_311())
		{
			func_310(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
	{
		func_310(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_20(&(uParam2->f_20)))
	{
		if (func_321() == 1)
		{
			func_309(bVar5, uParam0, 0);
			func_18(&(uParam2->f_20), 0, 0);
			func_310(uParam0, uParam2, 0);
		}
	}
	if (func_20(&(uParam2->f_20)) || bParam5)
	{
		if (unk_0xA83A609D74168B30())
		{
			unk_0xB5BFC55E4F67D18D();
		}
		if (func_17(&(uParam2->f_20), 10000, 0) || (func_321() == 0 && !bParam5))
		{
			func_310(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar4 == 0)
			{
				func_308();
				if (iParam1 == 23)
				{
					unk_0x10BFA51B8BA62476();
				}
				unk_0xC9A352663D97EFC3(18);
			}
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 0))
			{
				Global_1573670 = uParam3;
				Global_1573669 = 1;
				unk_0x97925E0DE42EFC5C(fVar6);
				if (bVar4)
				{
					if (uParam2->f_35 != Global_1573671)
					{
						unk_0xC69E84EBBD7166E6(&(uParam2->f_34), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar4 == 0)
				{
					func_308();
					if (iParam1 == 23)
					{
						unk_0x10BFA51B8BA62476();
					}
					unk_0xC9A352663D97EFC3(18);
				}
				unk_0x97925E0DE42EFC5C(fVar6);
				if (func_309(bVar5, uParam0, 0))
				{
					func_284(uParam0);
					uParam2->f_17 = func_306(iParam1, &(Global_1607808.f_63428), bParam4);
					if (unk_0xB318FDA0D1ABDB20(uParam2->f_17))
					{
						uParam2->f_17 = func_306(iParam1, &(Global_1607808.f_63428), bParam4);
					}
					if (bParam4)
					{
						func_303(uParam0, uParam2->f_17, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_301(uParam0, func_329(uParam2), func_302(uParam2), -1);
					}
					else if (bVar4)
					{
						uParam2->f_35 = Global_1573671;
						func_303(uParam0, uParam2->f_17, "", 0, -1, Global_1573671, 1);
					}
					else
					{
						Var0 = { func_299(iParam1) };
						iVar7 = func_294(iParam1);
						func_303(uParam0, uParam2->f_17, &Var0, 1, iVar7, -1, 1);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam2->f_34), 0);
				}
			}
		}
	}
	return 0;
}

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_298())
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
			if (func_297(unk_0x1329891157A54C63()))
			{
				iVar0 = 20;
			}
			if (func_296(unk_0x1329891157A54C63()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_295(unk_0x1329891157A54C63()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_295(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 4;
}

bool func_296(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_297(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_298()
{
	return Global_1607808.f_1 == 0;
}

struct<4> func_299(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_300(unk_0x1329891157A54C63()) || func_295(unk_0x1329891157A54C63()))
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
			StringIntConCat(&Var0, Global_1607808.f_20, 16);
			break;
	}
	return Var0;
}

bool func_300(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 5;
}

void func_301(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (unk_0xB318FDA0D1ABDB20(uParam2))
		{
			func_250(uParam1);
		}
		else if (func_182(unk_0x1329891157A54C63()) == 133)
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT_C");
			unk_0x072D7B028D6C7A05(uParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT");
			unk_0x072D7B028D6C7A05(sParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		func_250("");
		if (iParam3 != -1)
		{
			unk_0xBD0C54D89298454E(iParam3);
		}
		unk_0xBA9BA6181F2B6111();
	}
}

char* func_302(var uParam0)
{
	if (func_332() && !unk_0xB318FDA0D1ABDB20(uParam0->f_106))
	{
		return uParam0->f_106;
	}
	else
	{
		switch (func_182(unk_0x1329891157A54C63()))
		{
			case 131:
				return "";
			
			case 132:
				return "FM_AE_SORT_5";
			
			case 133:
				switch (func_181())
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
	}
	return "";
}

void func_303(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_252(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x6CE839BF5D87A428(uParam1);
			unk_0x6D55FF05D62B91BC(iParam5);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_250(sParam1);
		}
		if (func_322() && iParam6)
		{
			if (func_305())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x6CE839BF5D87A428("LBD_DPD_CNT");
			unk_0x6D55FF05D62B91BC(iVar0);
			unk_0x6D55FF05D62B91BC(iVar1);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_250(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xBD0C54D89298454E(iParam4);
			if (func_304(unk_0x1329891157A54C63()))
			{
				unk_0xBD0C54D89298454E(166);
			}
		}
		unk_0xBA9BA6181F2B6111();
	}
}

int func_304(int iParam0)
{
	if (func_297(iParam0) || func_296(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_305()
{
	return Global_1573672;
}

char* func_306(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_307();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB318FDA0D1ABDB20(uParam1))
	{
		if (Global_1573836 == 1)
		{
			Global_1573836 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
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

char* func_307()
{
	if (unk_0xCCA957C9E80D164B())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xE7A4B9596EBA099D())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x819401838C15BB6B())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xB830EBEEFC476A2F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_308()
{
	Global_36265 = 1;
}

bool func_309(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x95EF972E3A07B525("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_matchmaking_card");
	}
	return unk_0xCC8E3BAC62A29F42(*uParam1);
}

void func_310(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 7);
	Global_1573670 = 0;
	func_243();
	Global_1573669 = 0;
	uParam1->f_28 = 0;
	if (bParam2)
	{
		if (func_20(&(uParam1->f_20)))
		{
			func_98(&(uParam1->f_20));
		}
	}
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x4B6F01DE8CCE643E(uParam0);
	}
	if (unk_0x236D8AD7EE179F46(uParam1->f_34, 0))
	{
		unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 0);
	}
	unk_0x97925E0DE42EFC5C(0f);
}

int func_311()
{
	if (func_320())
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	if (!func_318())
	{
		return 0;
	}
	if (!func_201())
	{
		return 0;
	}
	if (func_317(8, -1))
	{
		return 0;
	}
	if (func_321() == 2)
	{
		return 0;
	}
	if (Global_2451473.f_4387)
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	else if (!func_209(unk_0x1329891157A54C63(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_316(1) || func_314(1)) || Global_17099.f_124) || Global_17099)
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (func_312(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (Global_1698745)
	{
		return 0;
	}
	return 1;
}

int func_312(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_313())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_313()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

int func_314(bool bParam0)
{
	if (unk_0xACE30BA91B2DD8E5())
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (func_315(unk_0x81873881071CD9FE()))
			{
				if (unk_0xCAD9951C953F5B2D(0, 25) || unk_0xCAD9951C953F5B2D(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17099.f_130)
	{
		return 0;
	}
	if (unk_0xCAD9951C953F5B2D(0, 19) || (!bParam0 && unk_0x70A79CA636F98FA5(0, 19)))
	{
		return 1;
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (((unk_0xCAD9951C953F5B2D(0, 166) || unk_0xCAD9951C953F5B2D(0, 167)) || unk_0xCAD9951C953F5B2D(0, 168)) || unk_0xCAD9951C953F5B2D(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x70A79CA636F98FA5(0, 166) || unk_0x70A79CA636F98FA5(0, 167)) || unk_0x70A79CA636F98FA5(0, 168)) || unk_0x70A79CA636F98FA5(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	int iVar0;
	
	if (unk_0x763F2CFB73975AA7())
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_316(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

bool func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

int func_318()
{
	if (func_319())
	{
		return 1;
	}
	if (unk_0x29AFA2493D7C23D0())
	{
		return 0;
	}
	if (unk_0xC584A413BCB2AA39() || unk_0xC11AD1609CFCCCE1())
	{
		return 0;
	}
	if (unk_0x3A93B922D5E9060F())
	{
		return 0;
	}
	return 1;
}

bool func_319()
{
	return Global_1312438;
}

bool func_320()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_321()
{
	return Global_1334766.f_68;
}

int func_322()
{
	if (Global_1573671 > 16)
	{
		return 1;
	}
	return 0;
}

float func_323()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xCAF8683E9362A022()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
			return 1;
			break;
	}
	return 0;
}

int func_325()
{
	if (func_334())
	{
		return 1;
	}
	if (func_328(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_332())
	{
		return 1;
	}
	if (func_327(unk_0x1329891157A54C63()))
	{
		switch (func_182(unk_0x1329891157A54C63()))
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
				if (!func_326(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_326(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_326(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 4);
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/] != -1;
	}
	return 0;
}

bool func_328(int iParam0)
{
	if (func_281(iParam0))
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 8);
}

char* func_329(var uParam0)
{
	if (func_332() && !unk_0xB318FDA0D1ABDB20(uParam0->f_105))
	{
		return uParam0->f_105;
	}
	else
	{
		switch (func_182(unk_0x1329891157A54C63()))
		{
			case 131:
				return "PIM_TA9";
			
			case 132:
				if (func_331() == 0)
				{
					return "CPC_TILEL";
				}
				else if (func_331() == 1)
				{
					return "CPC_TILELA";
				}
				return "PIM_TA0";
				break;
			
			case 133:
				switch (func_181())
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
				if (func_330() == 1)
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
	}
	return "";
}

int func_330()
{
	return Global_2451473.f_4627;
}

int func_331()
{
	if (func_182(unk_0x1329891157A54C63()) == 132)
	{
		return Global_2451473.f_4622;
	}
	return -1;
}

bool func_332()
{
	return Global_1585044;
}

struct<4> func_333()
{
	struct<4> Var0;
	
	switch (Local_94.f_27)
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

int func_334()
{
	if (func_335(unk_0x1329891157A54C63()))
	{
		return Global_1318828;
	}
	return 0;
}

int func_335(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return unk_0xC9C35C91114A8B03(iParam0);
	}
	return 0;
}

void func_336()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_14(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	switch (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17)
	{
		case 0:
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 == 0)
			{
				if (Local_94.f_241 == 0)
				{
					func_593();
				}
			}
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 22))
			{
				if (Local_94.f_27 == joaat("rhino") && Local_94.f_29 == 2)
				{
					func_562(Local_94.f_30[0 /*3*/]);
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 22);
				}
				else if (!func_63(Local_94.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_562(Local_94.f_30[0 /*3*/]);
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 22);
				}
			}
			func_561();
			func_555();
			if (Local_94.f_241 == 0)
			{
				func_552(1);
			}
			func_551(0);
			if (Local_94.f_241 == 0)
			{
				if (!Local_94.f_27 == joaat("hydra") && !Local_94.f_27 == joaat("rhino"))
				{
					func_188();
				}
				else if (func_588())
				{
					func_188();
				}
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
				{
					if (!unk_0x236D8AD7EE179F46(iLocal_1306, 1))
					{
						func_550(129);
						func_526(1);
						unk_0xF3148AAF69AF9CBC(&iLocal_1306, 1);
						unk_0x96BED0459085F7E9(0);
					}
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 6))
					{
						if (Local_94.f_28 > 1 || (Local_94.f_28 == 1 && func_104() > 1))
						{
							if (unk_0x236D8AD7EE179F46(Local_94.f_3, 4))
							{
								Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 = 0;
								unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0x236D8AD7EE179F46(iLocal_1306, 1))
				{
					unk_0xC69E84EBBD7166E6(&iLocal_1306, 1);
					func_525();
					func_524();
					func_526(0);
				}
			}
			if (Local_94.f_241 == 1)
			{
				func_523(&iVar4, &uVar5);
				iLocal_3538 = iVar4;
				func_522(0);
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
				{
					if (!func_521())
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_1306, 19);
					}
					if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
					{
						func_7();
					}
					unk_0x96BED0459085F7E9(0);
					if ((func_520("UW_MINV") || func_520("UW_TIMELA")) || func_520("UW_TIMEL"))
					{
						unk_0xB8BB626315D394F5(1);
					}
					func_184();
					func_509(129, 0f, 0f, 1, 1, 1, 0);
					func_506(1);
					func_505();
					unk_0x5B6D37392F5991C3(0.1f);
					iLocal_1315 = unk_0x4D273DA55E880307();
					unk_0x9BAE0FF806E5C2E5(0);
					func_504(1);
					func_503(1);
					if (Local_94.f_27 != joaat("rhino"))
					{
						func_488(1);
					}
					iLocal_1517 = unk_0x88594869E178AFA2(unk_0x81873881071CD9FE());
					unk_0x506A601663C5417C(unk_0x81873881071CD9FE(), iLocal_1515);
					unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
					unk_0x80650551CC58C784("MP_MC_START");
					unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 184, 1);
					unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 151, 0);
					func_487(0);
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 = iLocal_3538;
					if (!func_588())
					{
						func_486(62, "UW_TITLE", "UW_DESC", func_256(), -1, func_256());
					}
					else if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
					{
						func_486(62, "UW_TITLEC", "UW_DESCC", func_256(), -1, func_256());
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_485(62, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_256(), func_256());
					}
					Local_711.f_9 = unk_0xC7224E4F41E00BE3();
					func_487(0);
					func_482(0);
					func_18(&uLocal_3576, 0, 0);
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 1;
				}
				else
				{
					func_184();
					if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
					{
						func_7();
					}
					if (func_479("UW_HELP1", func_481(), func_480(1)) || func_479("UW_HELP1C", func_481(), func_480(1)))
					{
						unk_0xB8BB626315D394F5(1);
					}
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
					func_487(0);
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 == 0)
					{
					}
					else if (!func_478())
					{
					}
				}
			}
			else if (Local_94.f_241 == 3)
			{
				func_487(0);
				if (func_479("UW_HELP1", func_481(), func_480(1)) || func_479("UW_HELP1C", func_481(), func_480(1)))
				{
					unk_0xB8BB626315D394F5(1);
				}
				if (!func_477())
				{
				}
				if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
				{
					func_7();
				}
				func_184();
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 3;
			}
			else if (Local_94.f_241 > 3)
			{
				if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
				{
					func_7();
				}
				func_487(0);
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
				{
					func_476();
					func_475();
					if (func_114())
					{
						func_505();
					}
				}
				if (func_588())
				{
					if (func_469(2, 0, 1, 0, 0))
					{
						if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
						{
							func_7();
						}
						func_487(0);
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
					}
				}
				else if (Local_94.f_27 == joaat("valkyrie"))
				{
					if (func_469(2, 0, 1, 0, 0))
					{
						if (func_229("UW_ABTSC") || func_229("UW_ABTS"))
						{
							func_7();
						}
						func_487(0);
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_157(1);
			func_555();
			func_450();
			func_161();
			func_448();
			func_436();
			func_230(0);
			func_432();
			func_429();
			func_476();
			func_475();
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 26))
			{
				if (!func_428(54))
				{
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
					{
						if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 10))
						{
							if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 == -1)
							{
								if (!func_588())
								{
									if (!func_229("UW_ATTK"))
									{
										func_223("UW_ATTK", 0);
									}
								}
								else if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
								{
									if (!func_229("UW_ATTK"))
									{
										func_223("UW_ATTK", 0);
									}
								}
								else if (!func_229("UW_ATTK"))
								{
									func_523(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_223("UW_ATTK", 0);
								}
							}
							else if (func_229("UW_ATTK"))
							{
								func_7();
							}
						}
					}
				}
			}
			func_427();
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
			{
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 == -1)
				{
					func_505();
				}
			}
			if (!func_665(unk_0x1329891157A54C63(), 1, 1))
			{
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
				func_7();
				unk_0xF3148AAF69AF9CBC(&iLocal_1305, 21);
			}
			else if (func_174())
			{
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
				func_7();
			}
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 1)
			{
				if (!func_426())
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 23);
					func_7();
					if (iLocal_3538 > -1)
					{
						if (unk_0x335F574AD77E59CE(Local_94.f_7[iLocal_3538]))
						{
							func_23(&(Local_94.f_7[iLocal_3538]));
						}
					}
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
				}
			}
			if (Local_94.f_241 == 3)
			{
				func_525();
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 3;
			}
			else if (Local_94.f_241 > 3)
			{
				func_525();
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
			}
			else if (func_588())
			{
				if (func_469(2, 0, 1, 0, 0))
				{
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_94.f_241 == 3)
			{
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 3;
			}
			else if (Local_94.f_241 > 3)
			{
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
			}
			func_367();
			if (func_477())
			{
				if (func_182(unk_0x1329891157A54C63()) == 129)
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !unk_0x2DD54246D4BB0A20())
					{
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 398, 0);
						if (unk_0x236D8AD7EE179F46(iLocal_1305, 22))
						{
							func_366();
							unk_0xC69E84EBBD7166E6(&iLocal_1305, 22);
						}
						func_524();
						func_363();
						func_362(0);
						func_360(0);
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 184, 0);
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 151, 1);
						func_526(0);
						func_525();
					}
					func_359();
				}
			}
			else if (!unk_0x236D8AD7EE179F46(iLocal_1306, 8))
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_1306, 8);
			}
			if (!func_192())
			{
				func_358();
				func_448();
				func_157(0);
				func_436();
				func_230(1);
				func_432();
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_357();
			}
			func_353();
			func_352();
			func_450();
			if (!unk_0x236D8AD7EE179F46(iLocal_1306, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar6]))
					{
						if (!func_30(Local_94.f_48[iVar6]))
						{
							unk_0xDAA38F3D9F4D3406(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar6]), unk_0x1329891157A54C63(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (unk_0x335F574AD77E59CE(Local_94.f_80[iVar6]))
					{
						if (!func_30(Local_94.f_80[iVar6]))
						{
							unk_0xDAA38F3D9F4D3406(unk_0xCFD52BB67CC0A98F(Local_94.f_80[iVar6]), unk_0x1329891157A54C63(), 0);
						}
					}
					iVar6++;
				}
				unk_0xF3148AAF69AF9CBC(&iLocal_1306, 7);
			}
			else if (Local_94.f_247 != iLocal_3536)
			{
				iLocal_3536 = Local_94.f_247;
				unk_0xC69E84EBBD7166E6(&iLocal_1306, 7);
			}
			if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
			{
				unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 11);
			}
			if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 10))
			{
				unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 10);
			}
			if (unk_0x88594869E178AFA2(unk_0x81873881071CD9FE()) == iLocal_1515)
			{
				unk_0x506A601663C5417C(unk_0x81873881071CD9FE(), iLocal_1517);
			}
			break;
		
		case 3:
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 31))
			{
				if (unk_0x236D8AD7EE179F46(Local_94.f_3, 12))
				{
					func_184();
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 31);
				}
			}
			func_427();
			func_347();
			if (!func_192())
			{
				func_230(1);
				func_436();
				func_448();
				func_432();
				func_338();
			}
			func_367();
			func_352();
			func_450();
			if (Local_94.f_241 > 3)
			{
				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_626();
			break;
	}
	func_337();
}

void func_337()
{
	int iVar0;
	
	if (iLocal_3599 != Local_94.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x236D8AD7EE179F46(Local_94.f_616, iVar0))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_3599, iVar0))
				{
					if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
					{
						if (unk_0x402F3F19221FF696(Local_94.f_7[iVar0]))
						{
							unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 2);
							func_23(&(Local_94.f_7[iVar0]));
							unk_0xF3148AAF69AF9CBC(&iLocal_3599, iVar0);
						}
					}
					else
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_3599, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_338()
{
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_1306, 5))
		{
			if (func_341(0, 1, 1, 1))
			{
				if (func_588())
				{
					func_340("UW_TFEWC", 30000);
				}
				else
				{
					func_340("UW_TFEW", 30000);
				}
				func_339(1);
				unk_0xF3148AAF69AF9CBC(&iLocal_1306, 5);
			}
		}
	}
}

void func_339(int iParam0)
{
	unk_0x1F14EC098854F746(3, 21, 200, 0, 0);
	if (iParam0 && !func_288())
	{
		unk_0x35D7948F61AA3FEC(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_340(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam1);
}

int func_341(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xA83A609D74168B30())
	{
		return 0;
	}
	if (func_346())
	{
		return 0;
	}
	if (!unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	if (func_207())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_209(unk_0x1329891157A54C63(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_345(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (func_344())
	{
		return 0;
	}
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (Global_1573669)
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (func_342())
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (Global_2458396)
	{
		return 0;
	}
	return 1;
}

bool func_342()
{
	return Global_2428865.f_566;
}

bool func_343()
{
	return Global_2428865.f_716;
}

bool func_344()
{
	return Global_2422670.f_2420.f_585;
}

int func_345(int iParam0)
{
	if (Global_2414506[iParam0 /*255*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

int func_346()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_347()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_229("UW_EXPL") && !func_229("UW_EXPLC"))
	{
		func_7();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_1305, (27 + iVar2)))
		{
			if (unk_0x250A8F68F67CA19A(Local_94.f_7[iVar2]))
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2])))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, (27 + iVar2));
					uLocal_3539[iVar2] = unk_0xEDDCCC3D357A50F8();
					unk_0x058526005957A956(uLocal_3539[iVar2], "Explosion_Countdown", unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xBAF887AF0EAEA412(uLocal_3539[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_588())
	{
		if (unk_0x250A8F68F67CA19A(Local_94.f_7[0]))
		{
			if (!unk_0x236D8AD7EE179F46(Local_94.f_319, 0))
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0])))
				{
					if ((func_351() - func_118(&(Local_94.f_324), 0, 0)) >= 0)
					{
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0 || unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
						{
							if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_192())
								{
									func_350();
									func_163((func_351() - func_118(&(Local_94.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
								}
							}
						}
					}
					else
					{
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0 || unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
						{
							if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_192())
								{
									func_350();
									func_163(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
								}
							}
						}
						func_525();
						if (unk_0x402F3F19221FF696(Local_94.f_7[0]))
						{
							unk_0x210A4A0B257F8433(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), 0);
							unk_0x1A6319AD50F7E848(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), true);
							if (!unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]))))
							{
								unk_0x893021E5A96D97BA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), 1, 0, 0);
								func_23(&(Local_94.f_7[0]));
							}
							else
							{
								unk_0x7AB4E4970000148E(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), 1, 0, 0);
								func_23(&(Local_94.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_184();
		if (!func_192())
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 12))
			{
				if (func_101(Local_94.f_7[0]))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0])))
						{
							if (!func_588())
							{
								if (!func_229("UW_EXPL"))
								{
									func_223("UW_EXPL", 0);
								}
							}
							else if (!func_229("UW_EXPLC"))
							{
								func_223("UW_EXPLC", 0);
							}
							unk_0xF3148AAF69AF9CBC(&iLocal_1305, 12);
						}
					}
				}
			}
			else if (func_229("UW_EXPL") || func_229("UW_EXPLC"))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
					{
						func_7();
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
			if (unk_0x250A8F68F67CA19A(Local_94.f_7[iVar0]))
			{
				if (!unk_0x236D8AD7EE179F46(Local_94.f_319, iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0])))
					{
						if ((func_351() - func_118(&(Local_94.f_324), 0, 0)) >= 0)
						{
							if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0 || unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
							{
								if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_192())
									{
										if (!bVar1)
										{
											func_350();
											func_163((func_351() - func_118(&(Local_94.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0 || unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
							{
								if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_192())
									{
										if (!bVar1)
										{
											func_350();
											func_163(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
											bVar1 = true;
										}
									}
								}
							}
							func_525();
							if (func_348(Local_94.f_7[iVar0]))
							{
								if (unk_0x402F3F19221FF696(Local_94.f_7[iVar0]))
								{
									unk_0x210A4A0B257F8433(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
									unk_0x1A6319AD50F7E848(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), true);
									if (!unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]))))
									{
										unk_0x893021E5A96D97BA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1, 0, 0);
										func_23(&(Local_94.f_7[iVar0]));
									}
									else
									{
										unk_0x7AB4E4970000148E(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 1, 0, 0);
										func_23(&(Local_94.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0x236D8AD7EE179F46(iLocal_1305, 12))
				{
					if (func_101(Local_94.f_7[iVar0]))
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0])))
							{
								if (!func_192())
								{
									if (!func_588())
									{
										if (!func_229("UW_EXPL"))
										{
											func_223("UW_EXPL", 0);
										}
									}
									else if (!func_229("UW_EXPLC"))
									{
										func_223("UW_EXPLC", 0);
									}
									unk_0xF3148AAF69AF9CBC(&iLocal_1305, 12);
								}
							}
						}
					}
				}
				else if (func_229("UW_EXPL") || func_229("UW_EXPLC"))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
						{
							func_7();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_348(var uParam0)
{
	if (unk_0xB7CA313E589A2589(uParam0))
	{
		return 1;
	}
	if (func_349(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_349(var uParam0)
{
	if (!unk_0x1C7D9BFDF15A02B4())
	{
		return 0;
	}
	if (!unk_0x335F574AD77E59CE(uParam0))
	{
		return 0;
	}
	if (func_73(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_350()
{
	Global_1336084.f_942 = 1;
}

int func_351()
{
	if (func_588())
	{
		return Global_262145.f_9143;
	}
	return Global_262145.f_8864;
}

void func_352()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_1306, 4))
	{
		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					func_525();
					unk_0xF3148AAF69AF9CBC(&iLocal_1306, 4);
				}
			}
		}
	}
}

void func_353()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC3904F8771F37B7F(iLocal_1314);
	if (unk_0xC4FEBC724D547D78(iVar0))
	{
		iVar1 = unk_0x29A638E7EEEE6B16(iVar0);
		if (unk_0xA89AE5060232966A(iVar1))
		{
			if (iLocal_1314 != unk_0x519AAFF77CC141DF())
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_3600, iLocal_1314))
				{
					if (!func_192())
					{
						if (Local_728[iLocal_1314 /*18*/].f_17 == 1)
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_3600, iLocal_1314);
							func_354(iVar1, 55, 1);
						}
					}
				}
				else if (func_192())
				{
					func_354(iVar1, 55, 0);
					unk_0xC69E84EBBD7166E6(&iLocal_3600, iLocal_1314);
				}
				else if (Local_728[iLocal_1314 /*18*/].f_17 > 1)
				{
					unk_0xC69E84EBBD7166E6(&iLocal_3600, iLocal_1314);
					func_354(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_1314++;
	if (iLocal_1314 >= unk_0x945535897333587B())
	{
		iLocal_1314 = 0;
	}
}

void func_354(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_355())
	{
		return;
	}
	iVar0 = iParam0;
	if (bParam2)
	{
		if (!unk_0x64AD45A6264810A8(Global_2410756.f_527) || Global_2410756.f_527 == unk_0x8F56512BDA9F6921())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2410756.f_386), iVar0);
			Global_2410756.f_527 = unk_0x8F56512BDA9F6921();
			Global_2410756.f_427[iVar0] = iParam1;
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_2410756.f_386), iVar0);
		if (Global_2410756.f_386 == 0)
		{
			Global_2410756.f_527 = -1;
		}
	}
}

int func_355()
{
	switch (func_356())
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

int func_356()
{
	return Global_24946;
}

void func_357()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xFBACB273AA628CC5(Local_1322[iVar0 /*8*/]))
		{
			unk_0x0A8175F24237A3D4(&(Local_1322[iVar0 /*8*/]));
		}
		if (unk_0xFBACB273AA628CC5(Local_1322[iVar0 /*8*/].f_1))
		{
			unk_0x0A8175F24237A3D4(&(Local_1322[iVar0 /*8*/].f_1));
		}
		if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar0]))
		{
			if (!func_30(Local_94.f_48[iVar0]))
			{
				if (unk_0xDBC7B8E3258E68CE(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0])))
				{
					func_84(&(Local_1322[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_358()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_1305, 11))
	{
		if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 13))
			{
				if (func_182(unk_0x1329891157A54C63()) != 129)
				{
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
					{
						if (!func_428(64) && !func_428(65))
						{
							if (unk_0x236D8AD7EE179F46(iLocal_1306, 11))
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_1306, 12))
								{
									if (func_341(0, 1, 1, 1))
									{
										if (func_588())
										{
											func_340("UW_HELIMC", -1);
										}
										else
										{
											func_340("UW_HELIM", -1);
										}
										func_339(1);
										unk_0xF3148AAF69AF9CBC(&iLocal_1306, 12);
									}
								}
							}
							else if (!(Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra")))
							{
								if (func_341(0, 1, 1, 1))
								{
									if (!func_588())
									{
										func_340("UW_TAVAIL", 30000);
									}
									else
									{
										func_340("UW_TAVAILC", 30000);
									}
									func_339(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_1305, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_359()
{
	float fVar0;
	
	if (iLocal_3595 != 0)
	{
		return;
	}
	if (func_20(&uLocal_3576))
	{
		iLocal_3595 = func_118(&uLocal_3576, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_3595);
	fVar0 = (fVar0 / 60000f);
	iLocal_3595 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_3595 >= 1)
	{
	}
	else
	{
		iLocal_3595 = 1;
	}
	if (iLocal_3595 > Global_262145.f_9203)
	{
		iLocal_3595 = Global_262145.f_9203;
	}
}

void func_360(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90861.f_8 = 1;
	}
	else
	{
		Global_90861.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_361(iVar0);
		iVar0++;
	}
}

void func_361(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

void func_362(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

void func_363()
{
	unk_0x9BAE0FF806E5C2E5(5);
	func_365();
	unk_0x5B6D37392F5991C3(1f);
	unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 8);
	func_364();
}

void func_364()
{
	if (Global_1708196)
	{
		if (unk_0x236D8AD7EE179F46(Global_1708197, 0))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 1))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 1);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 5))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 5);
		}
		if (unk_0x0017826B6757A11F(-355737150))
		{
			unk_0xFF3E86C4D581F64B(-355737150, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-580979506))
		{
			unk_0xFF3E86C4D581F64B(-580979506, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1426452475))
		{
			unk_0xFF3E86C4D581F64B(-1426452475, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(745417724))
		{
			unk_0xFF3E86C4D581F64B(745417724, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1305304906))
		{
			unk_0xFF3E86C4D581F64B(-1305304906, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1543175077))
		{
			unk_0xFF3E86C4D581F64B(-1543175077, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-811770997))
		{
			unk_0xFF3E86C4D581F64B(-811770997, 1, 0, 0);
		}
		Global_1708197 = 0;
	}
	Global_1708196 = 0;
}

void func_365()
{
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4633 = -1;
	Global_2451473.f_4632 = 1f;
}

void func_366()
{
	Global_2391046 = { 0f, 0f, 0f };
	Global_2391049 = 0;
}

void func_367()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (unk_0x236D8AD7EE179F46(iLocal_1305, 13))
	{
		return;
	}
	bVar0 = unk_0x236D8AD7EE179F46(Local_94.f_3, 6);
	bVar1 = unk_0x236D8AD7EE179F46(iLocal_1305, 21);
	bVar2 = unk_0x236D8AD7EE179F46(iLocal_1305, 23);
	bVar3 = Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_477())
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_1306, 17))
		{
			if (func_665(unk_0x1329891157A54C63(), 1, 1))
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || bVar2)
				{
					if (!func_192())
					{
						if (!func_588())
						{
							if (bVar0)
							{
								func_486(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
								{
									func_486(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (unk_0x335F574AD77E59CE(Local_94.f_7[0]) && func_101(Local_94.f_7[0]))
								{
									unk_0xF3148AAF69AF9CBC(&iLocal_1306, 11);
									unk_0xF3148AAF69AF9CBC(&iLocal_1306, 16);
									func_486(65, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_486(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_486(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || unk_0x236D8AD7EE179F46(Local_94.f_3, 16))
							{
								func_486(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_486(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
							{
								if (func_425())
								{
									unk_0xF3148AAF69AF9CBC(&iLocal_1306, 11);
									unk_0xF3148AAF69AF9CBC(&iLocal_1306, 16);
									func_486(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_486(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_425())
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_1306, 11);
								unk_0xF3148AAF69AF9CBC(&iLocal_1306, 16);
								func_486(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_486(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_425())
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_1306, 11);
								unk_0xF3148AAF69AF9CBC(&iLocal_1306, 16);
								func_486(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_486(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || unk_0x236D8AD7EE179F46(Local_94.f_3, 16))
						{
							func_486(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_424(1);
					Local_711.f_6 = (Local_711.f_6 + iVar4);
					if (!Global_262145.f_9264)
					{
						if (Local_711.f_6 > 0)
						{
							func_423(19, Local_711.f_6);
						}
					}
					Global_2438858 = iVar4;
					if (iVar4 > 0)
					{
						if (func_422())
						{
							func_415(210955503, iVar4, &uVar5, 0, 1);
						}
						else
						{
							unk_0xFEF1B8BDBF81B2E4(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_414(1);
					Local_711.f_7 = (Local_711.f_7 + iVar10);
					func_413();
					func_368(0, unk_0x81873881071CD9FE(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0);
					Local_711.f_5 = 2;
					unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 398, 0);
					if (!unk_0x236D8AD7EE179F46(iLocal_1306, 16))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 8);
					}
					unk_0xF3148AAF69AF9CBC(&iLocal_1306, 17);
					unk_0xF3148AAF69AF9CBC(&iLocal_1306, 18);
				}
			}
		}
	}
}

int func_368(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_369(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_369(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_379(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0xCF0C46D719D5302C(iParam1))
			{
				iVar1 = unk_0x8F1CCE5AF629C4D3(iParam1);
				func_375(unk_0xC91EFAB304EB7DE6(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_370(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_370(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_373(iParam0, 1) };
	if (iParam0 == func_372(unk_0x81873881071CD9FE()))
	{
		func_371(1);
	}
	func_375(Var0, iParam1, 0, sParam2);
}

void func_371(int iParam0)
{
	Global_2422670.f_1321 = iParam0;
}

int func_372(int iParam0)
{
	return iParam0;
}

Vector3 func_373(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_374(unk_0x81873881071CD9FE()) && unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
	{
		Var0 = { unk_0xB07F27EC3B05E4EA(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		fVar3 = unk_0x3306AAAFE3B25098(iParam0);
	}
	unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x957F1AE07A974C5E(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_374(int iParam0)
{
	return iParam0;
}

void func_375(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422670.f_740[iVar0 /*29*/].f_6 == 0 || Global_2422670.f_740[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422670.f_740[iVar1 /*29*/] = { Param0 };
			Global_2422670.f_740[iVar1 /*29*/].f_6 = 1;
			Global_2422670.f_740[iVar1 /*29*/].f_4 = func_378(Global_2422670.f_740[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422670.f_740[iVar1 /*29*/].f_7 = unk_0xD74C7D8D2E5E43D2();
			Global_2422670.f_740[iVar1 /*29*/].f_3 = iParam3;
			Global_2422670.f_740[iVar1 /*29*/].f_8 = iParam4;
			Global_2422670.f_740[iVar1 /*29*/].f_9 = func_377();
			Global_2422670.f_740[iVar1 /*29*/].f_10 = func_376();
			StringCopy(&(Global_2422670.f_740[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_376()
{
	if (Global_2422670.f_1321)
	{
		Global_2422670.f_1321 = 0;
		return 1;
	}
	Global_2422670.f_1321 = 0;
	return 0;
}

var func_377()
{
	var uVar0;
	
	uVar0 = Global_2422670.f_1323;
	Global_2422670.f_1323 = 1;
	return uVar0;
}

float func_378(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0D6E79537424BACE(unk_0xF37444D33840484C(), Param0, 1);
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

var func_379(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_380(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_380(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_412(unk_0x1329891157A54C63()) || func_411(unk_0x1329891157A54C63()))
	{
		if (Global_262145.f_7419 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7419;
		}
	}
	else if (Global_262145.f_5001 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5001;
	}
	if (func_166(uParam2))
	{
	}
	if (func_410())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_408(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_407(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_405(0, &iVar1);
					break;
				
				case 3:
					func_405(1, &iVar1);
					break;
				
				case 1:
					func_402(&iVar1);
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
			func_400(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_390((func_399(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_400(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_385(iVar1);
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
				func_381((func_383(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_381((func_383(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_381(int iParam0)
{
	if (func_410())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_382(joaat("mpply_globalxp"), iParam0);
	}
}

void func_382(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
}

int func_383(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_665(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_384(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_384(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_385(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_60(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_388(func_389(&Var0));
			if (iVar13 == 0)
			{
				func_387(&Global_1343557, iParam0);
				func_386(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_387(&Global_1343558, iParam0);
				func_386(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_387(&Global_1343559, iParam0);
				func_386(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_387(&Global_1343560, iParam0);
				func_386(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_387(&Global_1343561, iParam0);
				func_386(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_386(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_388(int iParam0)
{
	if (iParam0 == Global_1343552)
	{
		return 0;
	}
	else if (iParam0 == Global_1343553)
	{
		return 1;
	}
	else if (iParam0 == Global_1343554)
	{
		return 2;
	}
	else if (iParam0 == Global_1343555)
	{
		return 3;
	}
	else if (iParam0 == Global_1343556)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_389(var uParam0)
{
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(uParam0))
		{
			return Global_2436916;
		}
	}
	return Global_2436916;
}

void func_390(int iParam0, int iParam1, int iParam2)
{
	if (func_410())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_212(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_212(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_398(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_396(iParam0, 1);
		}
		func_395(629, iParam0, -1, 1);
		func_394(630, func_396(iParam0, 1), -1, 1);
		Global_1343672[func_212(-1)] = iParam0;
		func_391(7, 0);
	}
}

void func_391(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_393(iParam0, iParam1))
	{
		iVar0 = func_392();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_392()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_393(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_212(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_212(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_212(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_212(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_212(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_212(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_212(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_212(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_212(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_212(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_212(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_212(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_212(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_212(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_212(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_212(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_212(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_212(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_212(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_212(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_212(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_212(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_212(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_212(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_212(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_212(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_212(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_212(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_396(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_397(iParam0, 0);
}

int func_397(int iParam0, int iParam1)
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
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
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

int func_398(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
	}
	return 1;
}

int func_399(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_212(-1)];
			}
			else if (func_398(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_212(-1)];
	}
	return 0;
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_221(iParam0, func_212(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_401(iParam0))
	{
		func_394(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_395(iParam0, iVar0, iParam2, 1);
	}
}

int func_401(int iParam0)
{
	if (Global_1343551)
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
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		iVar4 = unk_0xC3904F8771F37B7F(iVar0);
		if (unk_0xC4FEBC724D547D78(iVar4))
		{
			iVar5 = unk_0x29A638E7EEEE6B16(iVar4);
			if (unk_0xCCFDB2B968281FE8(iVar5) != -1)
			{
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_404(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_61(unk_0x1329891157A54C63(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_403(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_403(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_403(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_404(int iParam0, int iParam1, int iParam2)
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
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_405(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x945535897333587B())
		{
			iVar3 = iVar0;
			if (unk_0xC4FEBC724D547D78(iVar3))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
				if (func_665(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_61(unk_0x1329891157A54C63(), iVar4))
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
			if (func_665(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_406(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_61(unk_0x1329891157A54C63(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_403(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_403(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_406(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_407(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_403(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_408(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x013F97B9D88B92CA(iParam0) > func_399(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_399(unk_0x1329891157A54C63());
		}
	}
	if (func_409(8000, 0, 0) > 0)
	{
		if (func_409(8000, 0, 0) < (iParam0 + func_399(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_409(8000, 0, 0) - func_399(unk_0x1329891157A54C63()));
		}
	}
	return iParam0;
}

int func_409(int iParam0, bool bParam1, int iParam2)
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
	return Global_272182[iParam0];
}

int func_410()
{
	return 1;
}

bool func_411(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_412(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

void func_413()
{
	Global_2438030 = 1;
}

int func_414(bool bParam0)
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(iLocal_1306, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_588())
		{
			return Global_262145.f_9085;
		}
		else
		{
			return Global_262145.f_9024;
		}
	}
	func_359();
	if (func_588())
	{
		iVar0 = (Global_262145.f_9085 * iLocal_3595);
	}
	else
	{
		iVar0 = (Global_262145.f_9024 * iLocal_3595);
	}
	return iVar0;
}

void func_415(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_422())
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
			if (iParam1 > 0)
			{
				func_416(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_416(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_422())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_16()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_421(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_420(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_417(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_417(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_418(iParam0);
	}
}

void func_418(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_422())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_419(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_419(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_420(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_421(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_422())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_422()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_423(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2451473.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4951)
		{
			iParam1 = Global_262145.f_4951;
		}
		Global_2451473.f_270 = iParam1;
		Global_2451473.f_271 = 0;
	}
}

int func_424(bool bParam0)
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(iLocal_1306, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_588())
		{
			return Global_262145.f_9084;
		}
		else
		{
			return Global_262145.f_9023;
		}
	}
	func_359();
	if (func_588())
	{
		iVar0 = (Global_262145.f_9084 * iLocal_3595);
	}
	else
	{
		iVar0 = (Global_262145.f_9023 * iLocal_3595);
	}
	return iVar0;
}

int func_425()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x335F574AD77E59CE(Local_94.f_7[iLocal_3538]))
	{
		if (func_101(Local_94.f_7[iLocal_3538]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_94.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_94.f_256[iLocal_3538];
	if (!bVar0)
	{
		if (Local_94.f_594[0 /*4*/] != iLocal_3538)
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
	else if (Local_94.f_594[0 /*4*/] == iLocal_3538)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_94.f_256[Local_94.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_94.f_255 - iVar2);
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

int func_426()
{
	int iVar0;
	var uVar1;
	
	func_523(&iVar0, &uVar1);
	if (iLocal_3538 > -1)
	{
		if (func_101(Local_94.f_7[iLocal_3538]))
		{
			return 1;
		}
	}
	return 0;
}

void func_427()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_94.f_241 == 1)
	{
		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
		{
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 == -1)
			{
				if (!func_20(&uLocal_3574) || (func_20(&uLocal_3574) && func_17(&uLocal_3574, 5000, 0)))
				{
					if (Local_94.f_27 == joaat("savage") || Local_94.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3538;
						if (iVar1 > -1)
						{
							if (func_101(Local_94.f_7[iVar1]))
							{
								iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), -1);
								if (iVar0 == 0)
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x5FEB513A4402FD59(iVar0))
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x0452D5BF20AD945A(iVar0))
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_94.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3538;
						if (iVar1 > -1)
						{
							if (func_101(Local_94.f_7[iVar1]))
							{
								iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), -1);
								if (iVar0 == 0)
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x5FEB513A4402FD59(iVar0))
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x0452D5BF20AD945A(iVar0))
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
								}
								if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0x56F6C62C27F50DCB(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), iVar2);
										if (iVar0 != 0)
										{
											if (!unk_0x5FEB513A4402FD59(iVar0))
											{
												if (unk_0x0452D5BF20AD945A(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_98(&uLocal_3574);
					func_18(&uLocal_3574, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x236D8AD7EE179F46(Local_94.f_319, iVar2))
		{
			if (unk_0x250A8F68F67CA19A(Local_94.f_7[iVar2]))
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2])))
				{
					if ((func_351() - func_118(&(Local_94.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
						{
							if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), 0))
							{
								if (!func_192())
								{
									func_350();
									func_163((func_351() - func_118(&(Local_94.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
								}
							}
						}
					}
					else
					{
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
						{
							if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), 0))
							{
								if (!func_192())
								{
									func_350();
									func_163(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
								}
							}
						}
						if (unk_0x402F3F19221FF696(Local_94.f_7[iVar2]))
						{
							unk_0x210A4A0B257F8433(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), 0);
							unk_0x1A6319AD50F7E848(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), true);
							if (!unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]))))
							{
								unk_0x893021E5A96D97BA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), 1, 0, 0);
								func_23(&(Local_94.f_7[iVar2]));
							}
							else
							{
								unk_0x7AB4E4970000148E(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar2]), 1, 0, 0);
								func_23(&(Local_94.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 == iVar2)
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_1306, 6))
				{
					if (func_341(0, 1, 1, 1))
					{
						if (func_588())
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1306, 19))
							{
								func_340("UW_NOPILC", 30000);
							}
							else
							{
								func_340("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_340("UW_NOPIL", 30000);
						}
						func_339(1);
						unk_0xF3148AAF69AF9CBC(&iLocal_1306, 6);
					}
					else if (unk_0x236D8AD7EE179F46(iLocal_1306, 19))
					{
						if (unk_0xA83A609D74168B30())
						{
							unk_0xB8BB626315D394F5(1);
						}
					}
				}
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					iVar5 = Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10;
					if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar5]))
					{
						if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar5])))
						{
							if (!func_588())
							{
								if (!func_229("UW_EXPL"))
								{
									func_223("UW_EXPL", 0);
								}
							}
							else if (!func_229("UW_EXPLC"))
							{
								func_223("UW_EXPLC", 0);
							}
						}
						else if (func_229("UW_EXPL") || func_229("UW_EXPLC"))
						{
							func_7();
						}
					}
					else if (func_229("UW_EXPL") || func_229("UW_EXPLC"))
					{
						func_7();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_428(int iParam0)
{
	return Global_2422670.f_2137[0 /*70*/].f_1 == iParam0;
}

void func_429()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
	{
		if (Local_94.f_27 == joaat("rhino"))
		{
			if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
			{
				if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 10))
				{
					if (!func_20(&uLocal_3570) || (func_20(&uLocal_3570) && func_17(&uLocal_3570, 5000, 0)))
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (func_63(Local_3596, 0f, 0f, 0f, 0))
							{
								Local_3596 = { Local_94.f_30[0 /*3*/] };
							}
							fVar0 = func_431(unk_0x81873881071CD9FE(), Local_3596, 1);
							if (fVar0 > 750f)
							{
								unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 10);
							}
						}
						func_98(&uLocal_3570);
						func_18(&uLocal_3570, 0, 0);
					}
				}
				else if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					if (!func_229("UW_OOB"))
					{
						func_223("UW_OOB", 0);
					}
					if (!func_20(&uLocal_3572))
					{
						uVar2 = unk_0xEDDCCC3D357A50F8();
						unk_0x058526005957A956(uVar2, "Explosion_Countdown", unk_0x1D1DAF7F94D5FE77(Local_94.f_7[func_430()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0xBAF887AF0EAEA412(uVar2, "Time", 30f);
						func_18(&uLocal_3572, 0, 0);
					}
					if (func_20(&uLocal_3572))
					{
						if ((func_351() - func_118(&uLocal_3572, 0, 0)) >= 0)
						{
							func_350();
							func_163((func_351() - func_118(&uLocal_3572, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
						}
						else
						{
							func_350();
							func_163(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
							func_7();
							unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 11);
						}
					}
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
					{
						fVar0 = func_431(unk_0x81873881071CD9FE(), Local_94.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 10);
							func_98(&uLocal_3572);
							unk_0x98A5E5B909F1B162(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
	{
		func_525();
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			iVar1 = func_430();
			if (iVar1 > -1)
			{
				if (func_101(Local_94.f_7[iVar1]))
				{
					if (unk_0x402F3F19221FF696(Local_94.f_7[iVar1]))
					{
						unk_0x210A4A0B257F8433(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), 0);
						unk_0x1A6319AD50F7E848(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), true);
						unk_0x893021E5A96D97BA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1]), 1, 0, 0);
						func_23(&(Local_94.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_430()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar1]))
			{
				if (func_101(Local_94.f_7[iVar1]))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar1])))
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

float func_431(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_432()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0x236D8AD7EE179F46(iLocal_1305, 24))
	{
		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 1)
		{
			func_523(&iVar1, &uVar0);
			if (func_435(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_94.f_22[iVar1] != func_25())
					{
						fLocal_1316 = unk_0xD14571B35CE6733A();
						unk_0xCB9ED80838478527(-1f);
						func_434(1, iVar1);
						unk_0xF3148AAF69AF9CBC(&iLocal_1305, 24);
						func_433(1);
					}
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_1305, 24);
				unk_0xF3148AAF69AF9CBC(&iLocal_1305, 25);
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(iLocal_1305, 25))
	{
		if (unk_0x236D8AD7EE179F46(iLocal_1305, 24))
		{
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 > 1)
			{
				unk_0xCB9ED80838478527(fLocal_1316);
				func_523(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_434(0, iVar1);
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 25);
					func_433(0);
				}
			}
		}
	}
}

void func_433(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 15);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
}

void func_434(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			iVar1 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0));
			if (func_665(iVar1, 0, 1) && iVar1 != unk_0x1329891157A54C63())
			{
				if (unk_0x236D8AD7EE179F46(Local_728[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0x7E134367C1FD44FB(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0x7E134367C1FD44FB(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_435(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (!bVar0)
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
			{
				if (iVar1 != unk_0x519AAFF77CC141DF())
				{
					if (unk_0x236D8AD7EE179F46(Local_728[iVar1 /*18*/].f_1, iParam0))
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

void func_436()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9B20331E99DD1C1C())
	{
		return;
	}
	if (!unk_0x236D8AD7EE179F46(iLocal_1305, 15))
	{
		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 2)
		{
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 == 0)
			{
				if (Local_94.f_22[0] != func_25())
				{
					if (func_341(0, 0, 1, 1))
					{
						if (!func_588())
						{
							if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
							{
								if (!func_588())
								{
									func_447("UW_START1P", unk_0xB67DF8F35744CF60(Local_94.f_22[0]), 1, 30000);
								}
								else
								{
									func_447("UW_START1PC", unk_0xB67DF8F35744CF60(Local_94.f_22[0]), 1, 30000);
								}
								func_339(1);
							}
							else if (unk_0x236D8AD7EE179F46(Local_94.f_15, 0))
							{
								if (!unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 14))
								{
									if (!func_588())
									{
										func_340("UW_STARTM", 30000);
									}
									else
									{
										func_340("UW_STARTMC", 30000);
									}
									func_339(1);
								}
							}
							else
							{
								func_447("UW_START1P", unk_0xB67DF8F35744CF60(Local_94.f_22[0]), 1, 30000);
								func_339(1);
							}
						}
						else if (!unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 14))
						{
							if (!func_588())
							{
								func_340("UW_STARTM", 30000);
							}
							else
							{
								func_340("UW_STARTMC", 30000);
							}
							func_339(1);
						}
						unk_0xF3148AAF69AF9CBC(&iLocal_1305, 15);
					}
				}
			}
		}
	}
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 2)
	{
		if (Local_94.f_241 == 1)
		{
			if (Local_94.f_27 != joaat("hydra") && Local_94.f_27 != joaat("rhino"))
			{
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
				{
					if (iLocal_3538 >= 0)
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_1306, 10))
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1306, 9))
							{
								if (unk_0x335F574AD77E59CE(Local_94.f_7[iLocal_3538]))
								{
									if (func_101(Local_94.f_7[iLocal_3538]))
									{
										unk_0xF3148AAF69AF9CBC(&iLocal_1306, 9);
									}
								}
							}
							else if (unk_0x335F574AD77E59CE(Local_94.f_7[iLocal_3538]))
							{
								if (!func_101(Local_94.f_7[iLocal_3538]))
								{
									func_446("UW_TEAMV", 1);
									unk_0xF3148AAF69AF9CBC(&iLocal_1306, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_588())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_1305, (16 + iVar1)))
				{
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 >= 2)
					{
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 == 0)
						{
							if ((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2))
							{
								if (unk_0x250A8F68F67CA19A(Local_94.f_7[0]))
								{
									if (func_101(Local_94.f_7[0]))
									{
										if (unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), -1) != 0)
										{
											iVar0 = func_445(iVar1, 0);
											if (iVar0 != func_25())
											{
												func_437("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											unk_0xF3148AAF69AF9CBC(&iLocal_1305, (16 + iVar1));
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

int func_437(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0xB67DF8F35744CF60(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xB67DF8F35744CF60(iParam1), 64);
		}
		unk_0x02A6B267064771B1(sParam0);
		unk_0xDB5ED960DFB0E4DF(iParam2);
		unk_0x6222A57F463E8EE7(func_443(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x267D6EB296008122(0, 1);
		}
		else
		{
			Global_2450501 = { func_60(iParam1) };
			if (unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501))
			{
				iVar17 = 0;
				if (unk_0xD994929E13CC1ED5(&(Global_2450431.f_22), "Leader") && Global_2450431.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2450431.f_21 > 0)
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
						Var1 = { func_442(&Var1) };
					}
					iVar0 = unk_0xADB0BFD6F62AC3BD(iVar18, unk_0x9C86777A4808F723(&Global_2450431, 35), &(Global_2450431.f_17), Global_2450431.f_30, iVar17, 0, Global_2450431, &Var1, Global_1317051, Global_1317052, Global_1317053);
				}
				else
				{
					iVar0 = unk_0xB8D63AFAF0FBFF54(iVar18, unk_0x9C86777A4808F723(&Global_2450431, 35), &(Global_2450431.f_17), Global_2450431.f_30, iVar17, 0, Global_2450431, Global_1317051, Global_1317052, Global_1317053);
				}
			}
			else
			{
				iVar0 = unk_0x267D6EB296008122(0, 1);
			}
		}
		func_438(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_438(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_441() || !unk_0x726DA50057167075()) || !func_14(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_439(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1707570.f_5[iVar0 /*53*/] = iParam0;
		Global_1707570.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1707570.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1707570.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1707570.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1707570.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1707570.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_440(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1707570++;
	if (Global_1707570 > 5)
	{
		Global_1707570 = 5;
		return Global_1707570;
	}
	return (Global_1707570 - 1);
}

void func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_441()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

struct<16> func_442(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_443(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_444(&cVar0);
}

var func_444(char[4] cParam0)
{
	return cParam0;
}

int func_445(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_25();
	iVar2 = (iParam0 - 1);
	if (unk_0x250A8F68F67CA19A(Local_94.f_7[iParam1]))
	{
		if (func_101(Local_94.f_7[iParam1]))
		{
			iVar1 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam1]), iVar2);
			if (iVar1 != 0)
			{
				if (unk_0x0452D5BF20AD945A(iVar1))
				{
					iVar0 = unk_0x1B503E81E3B3D65F(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_446(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x02A6B267064771B1(sParam0);
	iVar0 = unk_0x267D6EB296008122(0, 1);
	func_438(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_447(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x522099B37CAE9E12(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDB5ED960DFB0E4DF(iParam2);
	}
	unk_0x6222A57F463E8EE7(sParam1);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam3);
}

void func_448()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_1305, 9))
	{
		if (Local_94.f_241 == 1)
		{
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
			{
				if (unk_0x80650551CC58C784("KILL_LIST_START_MUSIC"))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 9);
				}
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(iLocal_1305, 10))
	{
		if (unk_0x236D8AD7EE179F46(iLocal_1305, 9))
		{
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 > 1)
			{
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
				{
					if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (unk_0x80650551CC58C784("MP_MC_FAIL"))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_1305, 10);
						}
					}
					else if (unk_0x80650551CC58C784("KILL_LIST_STOP_MUSIC"))
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_1305, 10);
						func_449();
					}
				}
			}
		}
	}
}

void func_449()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 1);
	}
	if (Global_2451473.f_4540 > 0)
	{
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_KILL");
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
		unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x094B864326B5FE96(1);
		Global_2451473.f_4540 = 0;
		unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
		unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
		if (!unk_0xD994929E13CC1ED5(unk_0x11CA2334E341B424(), "am_pi_menu"))
		{
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
		}
	}
}

void func_450()
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
	var uVar52;
	var uVar53;
	var uVar57;
	var uVar58;
	
	iVar20 = 1;
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
	{
		if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 8))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 26))
			{
				if ((((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2)) || (func_588() && unk_0x236D8AD7EE179F46(Local_94.f_3, 6))) || (func_588() && unk_0x236D8AD7EE179F46(Local_94.f_3, 15)))
				{
					if (!func_20(&uLocal_3591))
					{
						func_18(&uLocal_3591, 0, 0);
					}
					if (func_17(&uLocal_3591, 1000, 0))
					{
						if (func_229("UW_ATTK"))
						{
							func_7();
						}
						func_468();
						if (func_467())
						{
							iVar25 = func_424(1);
							if (iVar25 > 0)
							{
								Local_711.f_6 = (Local_711.f_6 + iVar25);
								if ((!Global_262145.f_9264 && !unk_0x236D8AD7EE179F46(Local_94.f_3, 8)) || (!Global_262145.f_9265 && unk_0x236D8AD7EE179F46(Local_94.f_3, 8)))
								{
									if (Local_711.f_6 > 0)
									{
										func_423(19, Local_711.f_6);
									}
								}
								Global_2438858 = iVar25;
								if (func_422())
								{
									func_415(210955503, iVar25, &uVar27, 0, 1);
								}
								else
								{
									unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_414(1);
							func_413();
							Local_711.f_7 = (Local_711.f_7 + iVar23);
							func_368(0, unk_0x81873881071CD9FE(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
							Local_711.f_5 = 2;
							func_486(64, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_588())
						{
							iVar25 = func_424(1);
							iVar25 = (iVar25 + func_480(0));
							if (iVar25 > 0)
							{
								Local_711.f_6 = (Local_711.f_6 + iVar25);
								if (!Global_262145.f_9264)
								{
									if (Local_711.f_6 > 0)
									{
										func_423(19, Local_711.f_6);
									}
								}
								Global_2438858 = iVar25;
								if (func_422())
								{
									func_415(210955503, iVar25, &uVar32, 0, 1);
								}
								else
								{
									unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_414(1);
							iVar23 = (iVar23 + func_466());
							Local_711.f_7 = (Local_711.f_7 + iVar23);
							func_413();
							func_368(0, unk_0x81873881071CD9FE(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
							Local_711.f_5 = 1;
							func_485(63, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_465())
						{
							if (!func_464(1))
							{
								if (!func_229("UW_EXPL") && !func_229("UW_EXPLC"))
								{
									func_7();
								}
								iVar25 = func_424(1);
								iVar25 = (iVar25 + func_480(0));
								Local_711.f_6 = (Local_711.f_6 + iVar25);
								if (!Global_262145.f_9265)
								{
									if (Local_711.f_6 > 0)
									{
										func_423(19, Local_711.f_6);
									}
								}
								Global_2438858 = iVar25;
								if (iVar25 > 0)
								{
									if (func_422())
									{
										func_415(210955503, iVar25, &uVar37, 0, 1);
									}
									else
									{
										unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
								{
									func_485(63, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_485(63, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_711.f_5 = 1;
								iVar23 = func_466();
								iVar23 = (iVar23 + func_414(1));
								Local_711.f_7 = (Local_711.f_7 + iVar23);
								func_413();
								func_368(0, unk_0x81873881071CD9FE(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0);
							}
							else
							{
								iVar25 = func_424(1);
								iVar23 = func_414(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_94.f_465[iVar22 /*4*/].f_1 == Local_94.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
										{
											if (Local_94.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_94.f_465[iVar22 /*4*/].f_2 != unk_0x1329891157A54C63())
												{
													if (unk_0xA89AE5060232966A(unk_0x6528B1497E4313F1(Local_94.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = unk_0x6528B1497E4313F1(Local_94.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3538 > -1)
										{
											if (iLocal_3538 != Local_94.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_94.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_25())
									{
										bVar21 = true;
									}
									else
									{
										func_463(67, "UW_DRAWP", unk_0xB67DF8F35744CF60(iVar9[0]), 1, 15000, "UW_BIGO", 2);
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
									func_485(67, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar21)
								{
									if (!func_588())
									{
										func_486(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_486(67, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar26 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_480(0)) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar24 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_466()) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_711.f_6 = (Local_711.f_6 + iVar25);
								if (!Global_262145.f_9265)
								{
									if (Local_711.f_6 > 0)
									{
										func_423(19, Local_711.f_6);
									}
								}
								Global_2438858 = iVar25;
								if (iVar25 > 0)
								{
									if (func_422())
									{
										func_415(210955503, iVar25, &uVar42, 0, 1);
									}
									else
									{
										unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_711.f_7 = (Local_711.f_7 + iVar23);
								func_413();
								func_368(0, unk_0x81873881071CD9FE(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0);
							}
						}
						else
						{
							func_461(1);
							iVar25 = func_424(1);
							iVar23 = func_414(1);
							Local_711.f_6 = (Local_711.f_6 + iVar25);
							if (!Global_262145.f_9265)
							{
								if (Local_711.f_6 > 0)
								{
									func_423(19, Local_711.f_6);
								}
							}
							Global_2438858 = iVar25;
							if (iVar25 > 0)
							{
								if (func_422())
								{
									func_415(210955503, iVar25, &uVar47, 0, 1);
								}
								else
								{
									unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_711.f_7 = (Local_711.f_7 + iVar23);
							func_413();
							func_368(0, unk_0x81873881071CD9FE(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0);
							if (!func_464(0))
							{
								iVar13 = Local_94.f_465[0 /*4*/];
								if (!func_229("UW_EXPL") && !func_229("UW_EXPLC"))
								{
									func_7();
								}
								if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
								{
									iVar8 = unk_0x6528B1497E4313F1(Local_94.f_465[0 /*4*/].f_2);
									if (iVar8 != func_25())
									{
										if (!func_588())
										{
											func_463(64, "UW_FWONP", unk_0xB67DF8F35744CF60(iVar8), 6, 15000, "UW_BIGF", 2);
										}
										else
										{
											func_463(64, "UW_FWONPC", unk_0xB67DF8F35744CF60(iVar8), 6, 15000, "UW_BIGF", 2);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_588())
									{
										func_485(64, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_485(64, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_229("UW_EXPL") && !func_229("UW_EXPLC"))
								{
									func_7();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_94.f_465[iVar22 /*4*/].f_1 == Local_94.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
										{
											if (Local_94.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (unk_0xA89AE5060232966A(unk_0x6528B1497E4313F1(Local_94.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = unk_0x6528B1497E4313F1(Local_94.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3538 > -1)
										{
											if (iLocal_3538 != Local_94.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_94.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_94.f_27 == joaat("hydra") || Local_94.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_25() && unk_0xA89AE5060232966A(iVar9[0]))
										{
											if (iVar9[1] != func_25() && unk_0xA89AE5060232966A(iVar9[1]))
											{
												func_455(67, func_25(), func_25(), -1, "UW_DRAW2P", "UW_BIGF", func_256(), 15000, func_256(), unk_0xB67DF8F35744CF60(iVar9[0]), unk_0xB67DF8F35744CF60(iVar9[1]));
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
									func_485(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_486(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_503(0);
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
						{
							Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
						}
						unk_0xF3148AAF69AF9CBC(&iLocal_1305, 13);
						unk_0xF3148AAF69AF9CBC(&iLocal_1305, 26);
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_94.f_3, 6) || (!func_588() && unk_0x236D8AD7EE179F46(Local_94.f_3, 15)))
				{
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_10 != -1)
					{
						func_486(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_485(64, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_503(0);
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 26);
					iVar25 = func_424(1);
					Local_711.f_6 = (Local_711.f_6 + iVar25);
					if (!Global_262145.f_9264)
					{
						if (Local_711.f_6 > 0)
						{
							func_423(19, Local_711.f_6);
						}
					}
					Global_2438858 = iVar25;
					if (iVar25 > 0)
					{
						if (func_422())
						{
							func_415(210955503, iVar25, &uVar52, 0, 1);
						}
						else
						{
							unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar53);
						}
					}
					iVar23 = func_414(1);
					Local_711.f_7 = (Local_711.f_7 + iVar23);
					func_413();
					func_368(0, unk_0x81873881071CD9FE(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
					Local_711.f_5 = 2;
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
					{
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_94.f_3, 14))
				{
					func_503(0);
					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 8);
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 3)
					{
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 11))
				{
					func_485(64, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_503(0);
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 26);
					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 8);
					iVar25 = func_424(1);
					Local_711.f_6 = (Local_711.f_6 + iVar25);
					if (!Global_262145.f_9264)
					{
						if (Local_711.f_6 > 0)
						{
							func_423(19, Local_711.f_6);
						}
					}
					Global_2438858 = iVar25;
					if (iVar25 > 0)
					{
						if (func_422())
						{
							func_415(210955503, iVar25, &uVar57, 0, 1);
						}
						else
						{
							unk_0xFEF1B8BDBF81B2E4(iVar25, "AM_KILL_LIST", &uVar58);
						}
					}
					iVar23 = func_414(1);
					Local_711.f_7 = (Local_711.f_7 + iVar23);
					func_413();
					func_368(0, unk_0x81873881071CD9FE(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
					Local_711.f_5 = 2;
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
					{
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_94.f_3, 12))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 8);
				}
			}
			if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 8))
			{
				if (unk_0x236D8AD7EE179F46(iLocal_1305, 26))
				{
					if (func_229("UW_ATTK"))
					{
						func_7();
					}
					if (func_451(&uLocal_3529, 1))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 8);
					}
					if (!func_229("UW_EXPL") && !func_229("UW_EXPLC"))
					{
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 > -1)
						{
							if (unk_0x335F574AD77E59CE(Local_94.f_7[Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9]))
							{
								if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
								{
									if (func_101(Local_94.f_7[Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9]))
									{
										if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9])))
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
	else if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 8))
	{
		unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 8);
	}
}

int func_451(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (*uParam0 > 0 && !func_288())
	{
		func_454();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_20(&(uParam0->f_3)))
			{
				func_18(&(uParam0->f_3), 0, 0);
			}
			else if (func_17(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 25);
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 0);
					func_18(&(uParam0->f_5), 0, 0);
				}
				func_18(&(uParam0->f_1), 0, 0);
				func_453(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_20(&(uParam0->f_5)))
			{
				if (func_17(&(uParam0->f_5), 3000, 0))
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
				func_452();
				func_453(uParam0, 2);
			}
			break;
		
		case 2:
			func_452();
			if (func_17(&(uParam0->f_1), 15000, 0))
			{
				if (func_520("AMEV_LBD_HELP"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				func_453(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_17(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
				func_453(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
			return 1;
	}
	return 0;
}

void func_452()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_665(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0x29AFA2493D7C23D0())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 1);
			func_340("AMEV_LBD_HELP", -1);
			func_339(1);
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 0);
		}
	}
}

void func_453(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_454()
{
	Global_2438031 = 1;
}

int func_455(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10)
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
	func_460(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_65 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_66 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	return func_456(&Var0);
}

int func_456(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2422670.f_2419)
		{
			return 0;
		}
	}
	func_459(uParam0);
	func_458(uParam0);
	if (func_457(uParam0->f_1))
	{
		if (Global_2422670.f_2137[0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422670.f_2137[0 /*70*/].f_1 == 13 || Global_2422670.f_2137[0 /*70*/].f_1 == 52) || Global_2422670.f_2137[0 /*70*/].f_1 == 53) || Global_2422670.f_2137[0 /*70*/].f_1 == 57)
		{
			Global_2422670.f_2137[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422670.f_2137[iVar0 + 1 /*70*/] = { Global_2422670.f_2137[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422670.f_2137[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 1);
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
		}
		iVar0++;
	}
	return 0;
}

int func_457(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_458(var uParam0)
{
	if (func_291(uParam0->f_1))
	{
		uParam0->f_66 = func_256();
	}
}

void func_459(var uParam0)
{
	if (func_291(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
}

void func_460(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_25();
	uParam1->f_17 = func_25();
	uParam1->f_18 = func_25();
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

void func_461(bool bParam0)
{
	if (bParam0)
	{
		if (func_462(1))
		{
			unk_0xF3148AAF69AF9CBC(&Global_1573891, 1);
		}
	}
	else if (func_462(2))
	{
		unk_0xF3148AAF69AF9CBC(&Global_1573891, 2);
	}
}

int func_462(int iParam0)
{
	var uVar0;
	
	uVar0 = func_221(2506, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x236D8AD7EE179F46(uVar0, 0) && unk_0x236D8AD7EE179F46(iVar0, 1)) && unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 3) && unk_0x236D8AD7EE179F46(iVar0, 4)) && unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 6) && unk_0x236D8AD7EE179F46(iVar0, 7)) && unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 9) && unk_0x236D8AD7EE179F46(iVar0, 10)) && unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_463(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_460(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_456(&Var0);
}

int func_464(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_523(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_94.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_94.f_27 == joaat("rhino") || Local_94.f_27 == joaat("hydra"))
	{
		return Local_94.f_465[0 /*4*/].f_1 == Local_94.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_94.f_594[0 /*4*/].f_1 == Local_94.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_465()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_523(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_94.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_466()
{
	if (!func_588())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9020) * Global_262145.f_9209));
	}
	if ((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9081) * Global_262145.f_9211));
	}
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9081) * Global_262145.f_9211));
	}
	return 0;
}

int func_467()
{
	int iVar0;
	
	if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 6) && !unk_0x236D8AD7EE179F46(Local_94.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_94.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_468()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_73[iVar0]))
		{
			if (!func_101(Local_94.f_73[iVar0]))
			{
				func_23(&(Local_94.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar0]))
		{
			if (func_30(Local_94.f_48[iVar0]))
			{
				func_23(&(Local_94.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_469(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x8C283330B889AF48() < iParam0)
	{
		if (bParam2)
		{
			func_474(sParam3, sParam4, 1);
		}
		if (func_473(26, -1))
		{
			func_471(26, -1);
		}
		return 1;
	}
	if (func_20(&(Global_1573867.f_18)))
	{
		if (!func_17(&(Global_1573867.f_18), 7500, 0))
		{
			return 0;
		}
		func_98(&(Global_1573867.f_18));
	}
	if (func_470())
	{
		if (bParam2)
		{
			func_474(sParam3, sParam4, 0);
		}
		if (func_473(26, -1))
		{
			func_471(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD49F8CA46CF1D5B3() < iParam0)
	{
		if (bParam2)
		{
			func_474(sParam3, sParam4, 1);
		}
		if (func_473(26, -1))
		{
			func_471(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_470()
{
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0);
}

void func_471(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x59C26149DF458387(0, iParam1);
			break;
		
		default:
			uVar1 = func_472(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xC69E84EBBD7166E6(&iVar0, iParam0);
				unk_0x59C26149DF458387(iVar0, iParam1);
			}
			break;
	}
}

int func_472(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
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

bool func_473(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_472(iParam1);
	uVar1 = unk_0xE19FDB171CBF814A(uVar0);
	return unk_0x236D8AD7EE179F46(uVar1, iParam0);
}

void func_474(char* sParam0, char* sParam1, bool bParam2)
{
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 2) && !func_281(unk_0x1329891157A54C63()))
	{
		if (unk_0xB318FDA0D1ABDB20(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB318FDA0D1ABDB20(sParam1))
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
		func_486(65, sParam0, sParam1, 1, -1, 2);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 2);
	}
}

void func_475()
{
	Global_2451473.f_1633.f_56 = 1;
}

void func_476()
{
	Global_2451473.f_1633.f_54 = 1;
}

bool func_477()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 11);
}

int func_478()
{
	if (iLocal_3538 > -1)
	{
		if (func_101(Local_94.f_7[iLocal_3538]))
		{
			if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iLocal_3538])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_479(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0x6D55FF05D62B91BC(uParam2);
	return unk_0xEF468B98099969A5(0);
}

int func_480(bool bParam0)
{
	if (!func_588())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9019) * Global_262145.f_9208));
	}
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9080) * Global_262145.f_9210));
	}
	if ((unk_0x236D8AD7EE179F46(Local_94.f_3, 0) && unk_0x236D8AD7EE179F46(Local_94.f_3, 1)) && unk_0x236D8AD7EE179F46(Local_94.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9080) * Global_262145.f_9210));
	}
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9080) * Global_262145.f_9210));
	}
	return 0;
}

char* func_481()
{
	if (Local_94.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0x1699D7B95446F15C(Local_94.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_482(int iParam0)
{
	if (func_484())
	{
		if (iParam0 == 1)
		{
			if (Global_2451473.f_4237 == -1)
			{
				Global_2451473.f_4237 = 60000;
			}
			func_6(&(Global_2451473.f_4235), 0, 0);
			if (Global_2451473.f_4240 == -1)
			{
				Global_2451473.f_4240 = 10000;
			}
			func_6(&(Global_2451473.f_4238), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_525();
		}
		if ((!unk_0x726DA50057167075() && !func_483()) && !func_208(unk_0x1329891157A54C63()))
		{
			Global_975760 = 0;
		}
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_7 = 0;
	}
}

bool func_483()
{
	return Global_2428865.f_712;
}

bool func_484()
{
	return Global_1312416;
}

int func_485(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
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
	func_460(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_456(&Var0);
}

int func_486(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_460(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_456(&Var0);
}

void func_487(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
}

void func_488(bool bParam0)
{
	int iVar0;
	
	if (unk_0x1CFC95A2D6BABBA2(unk_0x81873881071CD9FE(), 5) != 0)
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
		unk_0x307D7E924B919DB5(unk_0x1329891157A54C63(), func_221(575, -1, 0));
		if (func_502())
		{
			unk_0xD14AB154F9686410(unk_0x1329891157A54C63(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_501())
		{
			unk_0xD14AB154F9686410(unk_0x1329891157A54C63(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_498(3610, -1, -1))
		{
		}
		iVar0 = func_221(2028, -1, 0);
		unk_0x9D22CEF854DC2B26(unk_0x1329891157A54C63(), func_497(unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63()), iVar0));
		unk_0x307D7E924B919DB5(unk_0x1329891157A54C63(), func_221(575, -1, 0));
		func_496(unk_0x1329891157A54C63(), iVar0);
		unk_0xEE8AF954BD703F55(unk_0x1329891157A54C63(), 5, func_492(unk_0x81873881071CD9FE(), iVar0), func_491(unk_0x81873881071CD9FE(), iVar0), 0);
		func_490(func_221(2028, -1, 0), 1);
		Global_2451473.f_273 = 1;
		func_489(unk_0x1329891157A54C63());
		if (bParam0)
		{
		}
	}
}

void func_489(int iParam0)
{
	int iVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = func_221(2028, -1, 0);
		unk_0xEE8AF954BD703F55(iParam0, 5, func_492(unk_0xE495E987CB2BE7EF(iParam0), iVar0), func_491(unk_0xE495E987CB2BE7EF(iParam0), iVar0), 0);
		func_496(iParam0, iVar0);
		unk_0x9D22CEF854DC2B26(iParam0, func_497(unk_0xE495E987CB2BE7EF(iParam0), iVar0));
		unk_0x03F73D35E5AC583A(unk_0xE495E987CB2BE7EF(iParam0), 5, func_492(unk_0xE495E987CB2BE7EF(iParam0), iVar0), func_491(unk_0xE495E987CB2BE7EF(iParam0), iVar0), func_497(unk_0xE495E987CB2BE7EF(iParam0), iVar0));
		unk_0x307D7E924B919DB5(iParam0, func_221(575, -1, 0));
		if (func_502())
		{
			unk_0xD14AB154F9686410(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_501())
		{
			unk_0xD14AB154F9686410(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x0B895A812F665A52(unk_0xE495E987CB2BE7EF(iParam0), 177, 1);
	}
}

void func_490(int iParam0, int iParam1)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_394(2028, iParam0, -1, 1);
		unk_0xEE8AF954BD703F55(unk_0x1329891157A54C63(), 5, func_492(unk_0x81873881071CD9FE(), iParam0), func_491(unk_0x81873881071CD9FE(), iParam0), 0);
		func_496(unk_0x1329891157A54C63(), iParam0);
		unk_0x9D22CEF854DC2B26(unk_0x1329891157A54C63(), func_497(unk_0x81873881071CD9FE(), iParam0));
		if ((iParam1 && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x1CFC95A2D6BABBA2(unk_0x81873881071CD9FE(), 5) != 0)
		{
			func_489(unk_0x1329891157A54C63());
		}
	}
}

int func_491(int iParam0, int iParam1)
{
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

int func_492(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x1CFC95A2D6BABBA2(iParam0, 11);
	if (unk_0x1CFC95A2D6BABBA2(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x14B7103DBD149FFE(iParam0);
	uVar3 = unk_0x630D604241EC3A6A(iParam0, 8, unk_0x1CFC95A2D6BABBA2(iParam0, 8), unk_0x2933140C98919EB1(iParam0, 8));
	if (unk_0x3FFA0207A02FD5C0(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 46)
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
	if (iVar0 > 15)
	{
		uVar5 = unk_0x630D604241EC3A6A(iParam0, 11, iVar0, unk_0x2933140C98919EB1(iParam0, 11));
		if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_495(uVar5, 0);
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
						iVar0 = func_494(uVar5);
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
						iVar0 = func_494(uVar5);
						break;
					}
			}
		}
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_493(uVar5, 0);
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
					iVar0 = func_494(uVar5);
					break;
			}
		}
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_7"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_8"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0x3FFA0207A02FD5C0(uVar5, -1086258388, 0) || unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
			iVar0 = func_494(uVar5);
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

int func_493(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_494(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_495(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

void func_496(int iParam0, int iParam1)
{
	if (func_502())
	{
		if (iParam1 > 46)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xB034712F32ACC3A8(iParam0);
		}
	}
	else if (func_501())
	{
		if (iParam1 > 0)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xB034712F32ACC3A8(iParam0);
		}
	}
}

int func_497(int iParam0, int iParam1)
{
	return 0;
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_500(iParam0, iParam1);
	uVar2 = func_499(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x864ED3213B1F4AED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
	}
	return iVar0;
}

int func_500(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_501()
{
	return unk_0x2D6859674806FDCE(joaat("mppilot"));
}

bool func_502()
{
	return unk_0x2D6859674806FDCE(joaat("mplts"));
}

void func_503(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 11))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 11);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 11))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1626), 11);
	}
}

void func_504(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 9))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 9);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 9))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1626), 9);
	}
}

void func_505()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
}

void func_506(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (func_484())
		{
			func_482(0);
			func_508();
		}
		if (func_220(0))
		{
			iVar0 = func_221(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			func_508();
		}
		if (func_220(func_196(func_182(unk_0x1329891157A54C63()))))
		{
			iVar0 = func_221(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, func_196(func_182(unk_0x1329891157A54C63())));
			func_508();
		}
		if (func_507())
		{
			func_508();
		}
		if (func_182(unk_0x1329891157A54C63()) > -1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
	}
}

int func_507()
{
	if (Global_2422670.f_614.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_508()
{
	if (func_507())
	{
		Global_2422670.f_614.f_16 = 1;
	}
}

void func_509(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
	}
	Global_2451473.f_4550 = -1;
	if (bParam6)
	{
		func_519(21, 1);
	}
	else
	{
		func_518(iParam0, -1);
		if (func_281(unk_0x1329891157A54C63()))
		{
			Global_1573867.f_3 = iParam0;
		}
		else
		{
			func_550(iParam0);
		}
		Global_1573867.f_4 = -1;
		if (func_281(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 5);
		}
		if ((func_484() && !func_517()) || func_193(unk_0x1329891157A54C63(), 21))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 4);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 20);
		if (func_516(iParam0))
		{
			func_515();
		}
	}
	if (fParam1 != 1f)
	{
		func_514(fParam1);
	}
	if (fParam2 != 1f)
	{
		unk_0x5B6D37392F5991C3(fParam2);
		if (iParam0 == 146)
		{
			unk_0x9BAE0FF806E5C2E5(0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		}
	}
	if (func_513(iParam0))
	{
		unk_0x9BAE0FF806E5C2E5(0);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 8);
	}
	if (bParam3)
	{
		func_362(1);
		if (func_462(0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
		}
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
	}
	if (bParam4)
	{
		func_360(1);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (bParam5)
	{
		func_512();
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (!bParam6)
	{
		if (func_510(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
		}
	}
	Global_2450427 = 1;
}

int func_510(int iParam0)
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
	if (func_511())
	{
		return 1;
	}
	return 0;
}

int func_511()
{
	switch (func_181())
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

void func_512()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4541), 0);
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		default:
	}
	return 0;
}

void func_514(float fParam0)
{
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_355())
	{
		return;
	}
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4632 = fParam0;
	Global_2451473.f_4633 = unk_0x8F56512BDA9F6921();
}

void func_515()
{
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_198 = 0;
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4402), 1);
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

bool func_517()
{
	return Global_1312416.f_1;
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_220(0) || func_220(func_196(iVar0)))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
	}
}

void func_519(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
	}
}

bool func_520(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

int func_521()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_94.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	iVar1 = unk_0x56F6C62C27F50DCB(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0xB0B9E53CEFDB16AA(iVar0, iVar2);
		if (iVar4 != 0)
		{
			if (!unk_0x5FEB513A4402FD59(iVar4))
			{
				if (unk_0x0452D5BF20AD945A(iVar4))
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

void func_522(bool bParam0)
{
	var uVar0;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x4D2386673BCED434(uVar0))
		{
			unk_0x210A4A0B257F8433(uVar0, bParam0);
			unk_0x1A6319AD50F7E848(iVar0, !bParam0);
		}
	}
}

void func_523(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_94.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_524()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (iVar0 != -1)
	{
		Global_1606167[iVar0 /*12*/] = -1;
	}
}

void func_525()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_484())
		{
			if (func_665(unk_0x1329891157A54C63(), 1, 0))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 0);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 0);
			}
			unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 1f);
			unk_0xD547C5EA6ACA33EA(0);
			unk_0x96BED0459085F7E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xC1A3EEFD7C446E1D(0);
			}
		}
		else
		{
			if (func_665(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 0);
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 1);
				unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC1A3EEFD7C446E1D(1);
				}
			}
			unk_0xD547C5EA6ACA33EA(1);
			unk_0x96BED0459085F7E9(0);
		}
	}
}

void func_526(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2438842 = func_182(unk_0x1329891157A54C63());
		if (Global_2438842 == -1)
		{
			Global_2438842 = Global_1573867.f_4;
		}
		if (func_549(Global_2438842) == 0)
		{
			if (func_548(1) > 0)
			{
				func_547(26, -1);
			}
		}
		if (func_484())
		{
			func_482(0);
			func_508();
		}
		if (func_220(0))
		{
			iVar1 = func_221(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&iVar1, 0);
			func_508();
		}
		if (func_220(func_196(func_182(unk_0x1329891157A54C63()))))
		{
			iVar1 = func_221(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&iVar1, func_196(func_182(unk_0x1329891157A54C63())));
			func_508();
		}
		if (func_507())
		{
			func_508();
		}
		unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 0);
	}
	else
	{
		if ((!func_205() && !func_546()) && !func_545())
		{
			Global_2438842 = -1;
			func_471(26, -1);
		}
		else if (func_549(Global_2438842) == 0)
		{
			iVar0 = func_529(1);
			if (iVar0 > 0)
			{
				func_527(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_400(1920, 1, -1);
				func_527(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_473(26, -1))
		{
			Global_2438842 = -1;
			func_471(26, -1);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 0);
	}
}

void func_527(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_384(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_528(iParam0))
	{
		func_382(iParam0, iVar0);
	}
	else
	{
		func_386(iParam0, iVar0);
	}
}

int func_528(int iParam0)
{
	if (Global_1343551)
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

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2437616 == 0)
	{
		return 0;
	}
	if (func_545())
	{
		if (unk_0x726DA50057167075() || (func_544() || func_541()))
		{
			Global_2436992 = 1;
		}
	}
	Global_2437616 = 0;
	if (Global_1318722)
	{
		iVar0 = 1;
	}
	if (Global_2436992)
	{
		iVar0 = 1;
	}
	if (Global_2436991)
	{
		iVar0 = 1;
	}
	if (func_540(Global_97959.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2436917)
	{
		iVar0 = 1;
	}
	if (func_539(512))
	{
		iVar0 = 1;
	}
	if (func_538(128))
	{
		iVar0 = 1;
	}
	if (Global_1318746 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_160())
	{
		iVar0 = 0;
	}
	if (Global_2437056)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_536())
		{
			if (Global_1607808.f_64060 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_14(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = 0;
	}
	if (func_534())
	{
		iVar0 = 0;
	}
	if ((Global_2436992 || Global_2436991) || Global_1318722)
	{
		if (func_541())
		{
			iVar0 = 0;
		}
	}
	Global_2437056 = 0;
	Global_2436991 = 0;
	Global_2436992 = 0;
	Global_1318722 = 0;
	Global_2436917 = 0;
	func_532(&(Global_97959.f_1), 32);
	func_531(512);
	func_530(128);
	return iVar0;
}

void func_530(int iParam0)
{
	Global_98016 = (Global_98016 - (Global_98016 && iParam0));
}

void func_531(int iParam0)
{
	Global_98017 = (Global_98017 - (Global_98017 && iParam0));
}

void func_532(var uParam0, int iParam1)
{
	func_533(uParam0, iParam1);
}

void func_533(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_534()
{
	if (((Global_1573839 || Global_1573810) || func_14(unk_0x1329891157A54C63(), 0)) || func_535())
	{
		return 1;
	}
	return 0;
}

bool func_535()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_536()
{
	switch (func_537())
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

int func_537()
{
	return Global_2429626.f_1.f_2818;
}

bool func_538(int iParam0)
{
	return (Global_98016 && iParam0) != 0;
}

bool func_539(int iParam0)
{
	return (Global_98017 && iParam0) != 0;
}

bool func_540(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_541()
{
	if (func_549(Global_2438842))
	{
		return 0;
	}
	if (func_542(unk_0x1329891157A54C63(), 146))
	{
		return 1;
	}
	return 0;
}

int func_542(int iParam0, int iParam1)
{
	if (Global_1606167[iParam0 /*12*/] == iParam1)
	{
		return func_543(iParam0);
	}
	return 0;
}

int func_543(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_544()
{
	if (func_549(Global_2438842))
	{
		return 0;
	}
	if (func_543(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	return 0;
}

bool func_545()
{
	return unk_0x236D8AD7EE179F46(Global_1312423, 0);
}

bool func_546()
{
	return Global_1315859;
}

void func_547(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x59C26149DF458387(0, iParam1);
			break;
		
		default:
			uVar1 = func_472(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (!unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xF3148AAF69AF9CBC(&iVar0, iParam0);
				unk_0x59C26149DF458387(iVar0, iParam1);
			}
			break;
	}
}

int func_548(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318746 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_160())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_536())
		{
			if (Global_1607808.f_64060 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_14(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = 0;
	}
	if (func_534())
	{
		iVar0 = 0;
	}
	Global_2437616 = 1;
	return iVar0;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9157)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9159)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9156)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9160)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9161)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9162)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9158)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9163)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9164)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9165)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9166)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_550(int iParam0)
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/] = iParam0;
}

void func_551(int iParam0)
{
	Global_2437849 = iParam0;
}

void func_552(int iParam0)
{
	if (func_192())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0x236D8AD7EE179F46(iLocal_1305, 0))
			{
				if ((((func_554(60000) && !unk_0xA83A609D74168B30()) && !func_320()) && !unk_0xDB10DED5ABC4AA20()) && func_341(0, 1, 1, 1))
				{
					if (!func_588())
					{
						func_553("UW_HELP1", func_481(), func_480(1), 30000);
					}
					else
					{
						func_553("UW_HELP1C", func_481(), func_480(1), 30000);
					}
					func_339(0);
					unk_0x35D7948F61AA3FEC(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0xF3148AAF69AF9CBC(&iLocal_1305, 0);
				}
			}
			break;
	}
}

void func_553(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0x6D55FF05D62B91BC(uParam2);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam3);
}

bool func_554(int iParam0)
{
	return unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(Global_2408782, unk_0xD74C7D8D2E5E43D2())) > iParam0;
}

void func_555()
{
	int iVar0;
	
	unk_0xC69E84EBBD7166E6(&iLocal_1306, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_556(iVar0);
		iVar0++;
	}
	if (unk_0x236D8AD7EE179F46(iLocal_1306, 15))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 15))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 15);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 15))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 15);
	}
}

void func_556(int iParam0)
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
	
	if (unk_0x250A8F68F67CA19A(Local_94.f_7[iParam0]))
	{
		if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 0))
		{
			if (Local_94.f_241 == 0)
			{
			}
		}
		if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0])))
		{
			if (!func_192())
			{
				if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1, iParam0))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_1306, 15))
						{
							if (unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()) == unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]))
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_1306, 15);
							}
						}
						if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 0))
						{
							if (func_560("UW_HELP2", func_481()) || func_560("UW_HELP2C", func_481()))
							{
								unk_0xB8BB626315D394F5(1);
							}
							if (!func_326(unk_0x1329891157A54C63()))
							{
								func_487(1);
							}
							iVar0 = func_559(unk_0x81873881071CD9FE(), 0);
							if (func_479("UW_HELP1", func_481(), func_480(1)) || func_479("UW_HELP1C", func_481(), func_480(1)))
							{
								unk_0xB8BB626315D394F5(1);
							}
							if (Local_94.f_463 != -1)
							{
								if (iVar0 > (Local_94.f_463 - 2))
								{
									iVar0 = (Local_94.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1), iParam0);
							Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 = iParam0;
							unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 398, 1);
							func_184();
							iLocal_3601 = iVar0;
						}
						else if (Local_94.f_241 == 0)
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1305, 1))
							{
								if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
								{
									if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_341(0, 1, 1, 1))
										{
											if (!func_588())
											{
												func_558("UW_HELP2", func_481(), 30000);
											}
											else
											{
												func_558("UW_HELP2C", func_481(), 30000);
											}
											func_339(1);
											unk_0xF3148AAF69AF9CBC(&iLocal_1305, 1);
										}
									}
								}
							}
							if (!func_484())
							{
								if (unk_0x236D8AD7EE179F46(iLocal_1306, 2))
								{
									unk_0xC69E84EBBD7166E6(&iLocal_1306, 2);
								}
								if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_1305, 4))
									{
										if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 12))
										{
											unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 12);
										}
										if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
										{
											if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_341(0, 1, 1, 1))
												{
													if (!func_588())
													{
														func_340("UW_COPS", 30000);
													}
													else
													{
														func_340("UW_COPSC", 30000);
													}
													func_339(1);
													unk_0xF3148AAF69AF9CBC(&iLocal_1305, 4);
												}
											}
										}
									}
									else if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0xC69E84EBBD7166E6(&iLocal_1305, 4);
									}
								}
								else
								{
									if (unk_0x236D8AD7EE179F46(iLocal_1305, 4))
									{
										unk_0xC69E84EBBD7166E6(&iLocal_1305, 4);
									}
									if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 12))
									{
										unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 12))
								{
									unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 12);
								}
								if (!unk_0x236D8AD7EE179F46(iLocal_1306, 2))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_341(0, 1, 1, 1))
										{
											if (!func_588())
											{
												func_340("UW_PASSMD", 30000);
											}
											else
											{
												func_340("UW_PASSMD", 30000);
											}
											func_339(1);
											unk_0xF3148AAF69AF9CBC(&iLocal_1306, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 == 0)
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_94.f_28)
								{
									if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, (0 + iVar2)))
									{
										func_7();
										unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1, iParam0))
								{
									unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1), iParam0);
								}
								if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 != -1)
								{
									Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 = -1;
								}
								if (func_520("UW_TIMEL"))
								{
									unk_0xB8BB626315D394F5(1);
								}
								if (func_520("UW_TIMELA"))
								{
									unk_0xB8BB626315D394F5(1);
								}
								if (func_326(unk_0x1329891157A54C63()))
								{
									func_487(0);
								}
								unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 398, 0);
							}
							else
							{
								if (Local_94.f_241 == 0 && !unk_0x236D8AD7EE179F46(Local_94.f_3, 4))
								{
									iVar0 = func_559(unk_0x81873881071CD9FE(), 0);
									if (Local_94.f_463 != -1)
									{
										if (iVar0 > (Local_94.f_463 - 2))
										{
											iVar0 = (Local_94.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3601)
									{
										unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1), iParam0);
										unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), (0 + iLocal_3601 + 1));
									}
								}
								bVar1 = false;
								if (func_222())
								{
									if (Local_94.f_413 > -1)
									{
										iVar3 = (Local_94.f_413 - func_118(&(Local_94.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_557(bVar1);
								if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xFC206D31BA50F1A6(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]));
								}
								if (!func_20(&uLocal_1528))
								{
									func_18(&uLocal_1528, 0, 0);
								}
								else if (func_17(&uLocal_1528, 2000, 0))
								{
									if (unk_0x236D8AD7EE179F46(Local_94.f_3, 9) || !func_588())
									{
										if (func_520("UW_MINV"))
										{
										}
										if (!unk_0x236D8AD7EE179F46(iLocal_1305, 5))
										{
											if (Local_94.f_28 > 1 || (Local_94.f_28 == 1 && func_104() > 1))
											{
												if (func_20(&(Local_94.f_326)))
												{
													if (!unk_0xA83A609D74168B30())
													{
														if (func_104() > 1)
														{
															func_340("UW_TIMELA", 30000);
														}
														else
														{
															func_340("UW_TIMEL", 30000);
														}
														func_339(1);
														unk_0xF3148AAF69AF9CBC(&iLocal_1305, 5);
													}
												}
											}
										}
									}
									else if (func_588())
									{
										if (!unk_0x236D8AD7EE179F46(Local_94.f_3, 9))
										{
											if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0x236D8AD7EE179F46(iLocal_1305, 14))
												{
													if (!unk_0xA83A609D74168B30())
													{
														func_340("UW_MINV", 30000);
														func_339(1);
														unk_0xF3148AAF69AF9CBC(&iLocal_1305, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_94.f_241 == 0)
					{
						if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_520("UW_VALK") && !func_520("UW_VALKC"))
							{
								unk_0x90312EB2231FB786();
								if (unk_0x236D8AD7EE179F46(iLocal_1305, 8))
								{
									unk_0xC69E84EBBD7166E6(&iLocal_1305, 8);
								}
							}
							if (!unk_0x236D8AD7EE179F46(iLocal_1305, 8))
							{
								if (!unk_0xA83A609D74168B30())
								{
									iVar6 = 0;
									iVar4 = unk_0x59D35AC211D17FAB(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0xBEB00EB4ADDC2A33(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), (iVar5 - 1)))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_588())
										{
											func_340("UW_VALK", 30000);
										}
										else
										{
											func_340("UW_VALKC", 30000);
										}
										func_339(1);
										unk_0xF3148AAF69AF9CBC(&iLocal_1305, 8);
									}
									if (!unk_0x236D8AD7EE179F46(iLocal_1305, 8))
									{
										if (func_588())
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
														if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar7]))
														{
															if (func_101(Local_94.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0xBEB00EB4ADDC2A33(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar7]), (iVar5 - 1)))
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
												func_340("UW_VALKC", 30000);
												func_339(1);
												unk_0xF3148AAF69AF9CBC(&iLocal_1305, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_94.f_241 == 1)
					{
						if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1, iParam0))
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1305, 6))
							{
								if (func_101(Local_94.f_7[iParam0]))
								{
									if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
									{
										if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0])))
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_1305, 7))
											{
												if ((unk_0x093DEAE9A023FAA0(0, 75) || unk_0xCAD9951C953F5B2D(0, 75)) || unk_0x70A79CA636F98FA5(0, 75))
												{
													unk_0xF3148AAF69AF9CBC(&iLocal_1305, 7);
												}
											}
											if (unk_0x236D8AD7EE179F46(iLocal_1305, 7))
											{
												if (!unk_0xA83A609D74168B30())
												{
													if (func_588())
													{
														func_340("UW_EXITVC", 30000);
													}
													else
													{
														func_340("UW_EXITV", 30000);
													}
													func_339(1);
													unk_0xF3148AAF69AF9CBC(&iLocal_1305, 6);
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
					if (unk_0x250A8F68F67CA19A(Local_94.f_7[iVar10]))
					{
						if (unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar10]), 0))
						{
							if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_220(0))
					{
						iVar9 = func_221(2452, -1, 0);
						unk_0xC69E84EBBD7166E6(&iVar9, 0);
						func_394(2452, iVar9, -1, 1);
						func_508();
						if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 9))
						{
							unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 9);
						}
					}
					if (func_220(8))
					{
						iVar9 = func_221(2452, -1, 0);
						unk_0xC69E84EBBD7166E6(&iVar9, 8);
						func_394(2452, iVar9, -1, 1);
						func_508();
						if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 9))
						{
							unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
					{
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 = 0;
					}
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 12))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 12);
					}
				}
				if (!unk_0x236D8AD7EE179F46(iLocal_1306, 14))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (func_101(Local_94.f_7[iParam0]))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_341(0, 1, 1, 1))
								{
									if (!func_210(129, 0))
									{
										if (!func_588())
										{
											func_340("UW_TUT", -1);
										}
										else
										{
											func_340("UW_TUTC", -1);
										}
										func_339(1);
										unk_0xF3148AAF69AF9CBC(&iLocal_1306, 14);
									}
									else
									{
										if (!func_588())
										{
											func_340("UW_HIDE", -1);
										}
										else
										{
											func_340("UW_HIDEC", -1);
										}
										func_339(1);
										unk_0xF3148AAF69AF9CBC(&iLocal_1306, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_665(unk_0x1329891157A54C63(), 1, 1) && Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_1 != 0)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4407, 1))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4407), 1);
				}
			}
			else if (unk_0x236D8AD7EE179F46(Global_2451473.f_4407, 1))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4407), 1);
			}
		}
	}
}

void func_557(bool bParam0)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam0)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	unk_0xDE1125A413AF241C(0, 69, 1);
	unk_0xDE1125A413AF241C(0, 70, 1);
	unk_0xDE1125A413AF241C(0, 92, 1);
	unk_0xDE1125A413AF241C(0, 68, 1);
	unk_0xDE1125A413AF241C(0, 91, 1);
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 99, 1);
	unk_0xDE1125A413AF241C(0, 100, 1);
	unk_0xDE1125A413AF241C(0, 65, 1);
	unk_0xDE1125A413AF241C(0, 105, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 51, 1);
	unk_0xDE1125A413AF241C(0, 47, 1);
	unk_0xDE1125A413AF241C(0, 24, 1);
	unk_0xDE1125A413AF241C(0, 257, 1);
}

void func_558(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam2);
}

int func_559(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (unk_0xE5AB05962FA1FF3F(iParam0, iParam1))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(iParam0, iParam1);
			if (unk_0x86CCCD2FAE9D5E65(iVar0))
			{
				if (!unk_0x930F8FBB8E9537CC(iVar0))
				{
					iVar1 = unk_0x56F6C62C27F50DCB(unk_0x14B7103DBD149FFE(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xBEB00EB4ADDC2A33(iVar0, iVar3))
						{
							if (unk_0xB0B9E53CEFDB16AA(iVar0, iVar3) == iParam0)
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

var func_560(char* sParam0, char* sParam1)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	return unk_0xEF468B98099969A5(0);
}

void func_561()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x250A8F68F67CA19A(Local_94.f_7[iVar0]) && unk_0x402F3F19221FF696(Local_94.f_7[iVar0]))
		{
			iVar1 = unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]);
			if (unk_0x86CCCD2FAE9D5E65(iVar1) && !unk_0x930F8FBB8E9537CC(iVar1))
			{
				unk_0x6D756BA4B25B346F(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_562(struct<3> Param0)
{
	Global_2391046 = { Param0 };
	Global_2391049 = 1;
}

void func_563()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_579(iVar0);
				break;
			
			case 168:
				func_564(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_564(int iParam0)
{
	int iVar0;
	
	unk_0xDC8C46445C29336D(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 390:
			func_578(iParam0);
			break;
		
		case 393:
			func_577(iParam0);
			break;
		
		case 392:
			func_576(iParam0);
			break;
		
		case 391:
			func_575(iParam0);
			break;
		
		case 396:
			func_574(iParam0);
			break;
		
		case 398:
			func_571(iParam0);
			break;
		
		case 399:
			func_565(iParam0);
			break;
	}
}

void func_565(int iParam0)
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
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x335F574AD77E59CE(Local_94.f_73[iVar6]))
		{
			return;
		}
		if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6, iVar6))
		{
			if (!unk_0x236D8AD7EE179F46(Local_94.f_271, iVar6))
			{
				if (func_92(iVar6))
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6])))
					{
						if (unk_0xBAD4D81C283D31CB(unk_0x1329891157A54C63(), unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0x640CF223339008B8(unk_0x1329891157A54C63(), unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_588())
				{
					if (Local_94.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = unk_0x6528B1497E4313F1(Local_94.f_465[0 /*4*/].f_2);
						if (iVar9 != func_25())
						{
							if (iVar9 == unk_0x1329891157A54C63())
							{
								bVar8 = true;
							}
						}
					}
					else if (unk_0x335F574AD77E59CE(Local_94.f_7[0]))
					{
						if (func_101(Local_94.f_7[0]))
						{
							iVar11 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), -1);
							if (iVar11 != 0)
							{
								if (unk_0x0452D5BF20AD945A(iVar11))
								{
									iVar10 = unk_0x1B503E81E3B3D65F(iVar11);
									if (iVar10 == unk_0x1329891157A54C63())
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
			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
			{
				iVar4 = func_570();
				iVar12 = unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_569(iVar12))
				{
					iVar3 = func_41(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar14]) && !unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar14)], func_82(iVar14)))
						{
							iVar13++;
							unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar14)]), func_82(iVar14));
						}
						iVar14++;
					}
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 = (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8++;
				}
				if (Local_711.f_11 == 0)
				{
					Local_711.f_11 = unk_0xC7224E4F41E00BE3();
				}
				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
				{
					Local_711.f_7 = (Local_711.f_7 + iVar4);
					func_567(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_566();
				}
			}
			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar6);
		}
	}
}

void func_566()
{
	if (!func_20(&uLocal_3578) || (func_20(&uLocal_3578) && func_17(&uLocal_3578, 2000, 0)))
	{
		unk_0x35D7948F61AA3FEC(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_98(&uLocal_3578);
		func_18(&uLocal_3578, 0, 0);
	}
}

var func_567(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_379(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_568()
{
	if (func_588())
	{
		return Global_262145.f_9083;
	}
	return Global_262145.f_9022;
}

bool func_569(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_570()
{
	if (func_588())
	{
		return Global_262145.f_9082;
	}
	return Global_262145.f_9021;
}

void func_571(int iParam0)
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
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6, iVar6))
		{
			if (!unk_0x236D8AD7EE179F46(Local_94.f_271, iVar6))
			{
				if (func_573(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_572(iVar6))
				{
					if (func_92(iVar6))
					{
						if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6])))
						{
							if (unk_0xBAD4D81C283D31CB(unk_0x1329891157A54C63(), unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0x640CF223339008B8(unk_0x1329891157A54C63(), unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_588())
					{
						if (Local_94.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = unk_0x6528B1497E4313F1(Local_94.f_465[0 /*4*/].f_2);
							if (iVar9 != func_25())
							{
								if (iVar9 == unk_0x1329891157A54C63())
								{
									bVar8 = true;
								}
							}
						}
						else if (unk_0x335F574AD77E59CE(Local_94.f_7[0]))
						{
							if (func_101(Local_94.f_7[0]))
							{
								iVar11 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[0]), -1);
								if (iVar11 != 0)
								{
									if (unk_0x0452D5BF20AD945A(iVar11))
									{
										iVar10 = unk_0x1B503E81E3B3D65F(iVar11);
										if (iVar10 == unk_0x1329891157A54C63())
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
					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
					{
						iVar3 = func_41(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar12]) && !unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar12)], func_82(iVar12)))
							{
								iVar13++;
								unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar12)]), func_82(iVar12));
							}
							iVar12++;
						}
						Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 = (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
						{
							iVar4 = func_570();
							iVar4 = (iVar4 * iVar3);
							Local_711.f_7 = (Local_711.f_7 + iVar4);
							func_567(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_566();
							if (Local_711.f_11 == 0)
							{
								Local_711.f_11 = unk_0xC7224E4F41E00BE3();
							}
						}
						unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_572(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			if (Local_728[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)
{
	int iVar0;
	
	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			if (iVar0 != unk_0x519AAFF77CC141DF())
			{
				if (Local_728[iVar0 /*18*/].f_11[iParam0] > Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_574(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (unk_0x1888BBA7387E194A("am_kill_list", -1, 0) != func_25())
		{
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_464), Var0.f_2);
		}
	}
}

void func_575(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		unk_0xF3148AAF69AF9CBC(&uLocal_3545, Var0.f_2);
	}
}

void func_576(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		unk_0xF3148AAF69AF9CBC(&uLocal_3546, Var0.f_2);
	}
}

void func_577(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(Var0.f_2)], func_82(Var0.f_2)))
		{
			unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(Var0.f_2)]), func_82(Var0.f_2));
		}
	}
}

void func_578(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6, iVar3))
		{
			unk_0xC69E84EBBD7166E6(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar3);
		}
	}
}

void func_579(int iParam0)
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
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 10))
	{
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6, iVar10))
			{
				if (!unk_0x236D8AD7EE179F46(Local_94.f_271, iVar10))
				{
					if (unk_0x86CCCD2FAE9D5E65(Var0.f_0))
					{
						if (unk_0xCF8AA94BAD0F766A(Var0.f_0))
						{
							if (unk_0x335F574AD77E59CE(Local_94.f_73[iVar10]))
							{
								if (unk_0x86CCCD2FAE9D5E65(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar10])))
								{
									if (unk_0x522C7043B2B961F9(Var0.f_0) == unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar10]))
									{
										if (unk_0x86CCCD2FAE9D5E65(Var0.f_1))
										{
											if (unk_0xCF0C46D719D5302C(Var0.f_1))
											{
												if (unk_0x8F1CCE5AF629C4D3(Var0.f_1) == unk_0x81873881071CD9FE())
												{
													if (Var0.f_3)
													{
														iVar13 = unk_0x14B7103DBD149FFE(Var0.f_0);
														if (Local_94.f_27 == joaat("hydra"))
														{
															if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
															{
																iVar16 = func_570();
																if (func_569(iVar13))
																{
																	iVar11 = func_41(iVar13);
																	Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 = (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 + iVar11);
																	iVar16 = (iVar16 * iVar11);
																}
																else
																{
																	Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8++;
																}
																if (Local_711.f_11 == 0)
																{
																	Local_711.f_11 = unk_0xC7224E4F41E00BE3();
																}
																if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																{
																	Local_711.f_7 = (Local_711.f_7 + iVar16);
																	func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																	func_566();
																}
															}
															unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar10);
														}
														else if (iVar13 == joaat("buzzard"))
														{
															iVar18 = -1;
															iVar18 = -1;
															while (iVar18 <= 3)
															{
																iVar15 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar10]), iVar18);
																if (iVar15 != 0)
																{
																	iVar17 = func_580(iVar15);
																	if (iVar17 > -1)
																	{
																		if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar17)], func_82(iVar17)))
																		{
																			if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar17)], func_82(iVar17)))
																			{
																				unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar17)]), func_82(iVar17));
																				iVar16 = func_570();
																				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8++;
																				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																				{
																					Local_711.f_7 = (Local_711.f_7 + iVar16);
																					func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_566();
																				}
																				if (unk_0xDBC7B8E3258E68CE(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar17])))
																				{
																					func_84(&(Local_1322[iVar17 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar18++;
															}
															unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar10);
														}
													}
													else if (!func_101(Local_94.f_73[iVar10]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (unk_0x0452D5BF20AD945A(unk_0x8F1CCE5AF629C4D3(Var0.f_1)))
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
		if (Local_94.f_27 != joaat("hydra"))
		{
			iVar10 = 0;
			while (iVar10 <= 19)
			{
				if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar10)], func_82(iVar10)))
				{
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar10)], func_82(iVar10)))
					{
						if (unk_0x86CCCD2FAE9D5E65(Var0.f_0))
						{
							if (unk_0xCF0C46D719D5302C(Var0.f_0))
							{
								if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar10]))
								{
									if (unk_0x86CCCD2FAE9D5E65(unk_0x1D1DAF7F94D5FE77(Local_94.f_48[iVar10])))
									{
										if (unk_0x8F1CCE5AF629C4D3(Var0.f_0) == unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x86CCCD2FAE9D5E65(Var0.f_1))
												{
													if (unk_0xCF0C46D719D5302C(Var0.f_1))
													{
														iVar14 = unk_0x8F1CCE5AF629C4D3(Var0.f_1);
														if (unk_0x0452D5BF20AD945A(iVar14))
														{
															if (iVar14 == unk_0x81873881071CD9FE())
															{
																if (Var0.f_3)
																{
																	iVar16 = func_570();
																	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
																	{
																		Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8++;
																		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																		{
																			func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			Local_711.f_7 = (Local_711.f_7 + iVar16);
																			func_566();
																		}
																	}
																	if (Local_711.f_11 == 0)
																	{
																		Local_711.f_11 = unk_0xC7224E4F41E00BE3();
																	}
																	unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar10)]), func_82(iVar10));
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
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6, iVar10))
					{
						if (!unk_0x236D8AD7EE179F46(Local_94.f_271, iVar10))
						{
							if (unk_0x86CCCD2FAE9D5E65(Var0.f_0))
							{
								if (unk_0xCF8AA94BAD0F766A(Var0.f_0))
								{
									if (unk_0x335F574AD77E59CE(Local_94.f_73[iVar10]))
									{
										if (unk_0x86CCCD2FAE9D5E65(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar10])))
										{
											if (unk_0x522C7043B2B961F9(Var0.f_0) == unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar10]))
											{
												if (unk_0x14B7103DBD149FFE(Var0.f_0) == joaat("savage"))
												{
													if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar10)], func_82(iVar10)))
													{
														if (Var0.f_3)
														{
															if (unk_0x86CCCD2FAE9D5E65(Var0.f_1))
															{
																if (unk_0xCF0C46D719D5302C(Var0.f_1))
																{
																	iVar14 = unk_0x8F1CCE5AF629C4D3(Var0.f_1);
																	if (unk_0x0452D5BF20AD945A(iVar14))
																	{
																		if (iVar14 == unk_0x81873881071CD9FE())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
																				{
																					iVar11 = func_41(joaat("savage"));
																					Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 = (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 + iVar11);
																					iVar16 = func_570();
																					iVar16 = (iVar16 * iVar11);
																					if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																					{
																						func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																						Local_711.f_7 = (Local_711.f_7 + iVar16);
																						func_566();
																						if (Local_711.f_11 == 0)
																						{
																							Local_711.f_11 = unk_0xC7224E4F41E00BE3();
																						}
																					}
																					iVar19 = iVar10 * 4;
																					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19)]), func_82(iVar19));
																					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 1)]), func_82(iVar19 + 1));
																					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 2)]), func_82(iVar19 + 2));
																					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 3)]), func_82(iVar19 + 3));
																					unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar10);
																				}
																			}
																		}
																	}
																	else if (func_573(iVar10))
																	{
																		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
																		{
																			iVar11 = func_41(joaat("savage"));
																			Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 = (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 + iVar11);
																			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																			{
																				iVar16 = func_570();
																				iVar16 = (iVar16 * iVar11);
																				Local_711.f_7 = (Local_711.f_7 + iVar16);
																				func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																				func_566();
																				if (Local_711.f_11 == 0)
																				{
																					Local_711.f_11 = unk_0xC7224E4F41E00BE3();
																				}
																			}
																			iVar19 = iVar10 * 4;
																			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19)]), func_82(iVar19));
																			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 1)]), func_82(iVar19 + 1));
																			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 2)]), func_82(iVar19 + 2));
																			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 3)]), func_82(iVar19 + 3));
																			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar10);
																		}
																	}
																	else if (func_572(iVar10))
																	{
																	}
																	else if (unk_0x640CF223339008B8(iVar20, Var0.f_0, &uVar21))
																	{
																		if (iVar20 == unk_0x1329891157A54C63())
																		{
																			if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
																			{
																				iVar11 = func_41(joaat("savage"));
																				Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 = (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 + iVar11);
																				if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																				{
																					iVar16 = func_570();
																					iVar16 = (iVar16 * iVar11);
																					Local_711.f_7 = (Local_711.f_7 + iVar16);
																					func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_566();
																					if (Local_711.f_11 == 0)
																					{
																						Local_711.f_11 = unk_0xC7224E4F41E00BE3();
																					}
																				}
																				iVar19 = iVar10 * 4;
																				unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19)]), func_82(iVar19));
																				unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 1)]), func_82(iVar19 + 1));
																				unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 2)]), func_82(iVar19 + 2));
																				unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar19 + 3)]), func_82(iVar19 + 3));
																				unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_6), iVar10);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0x86CCCD2FAE9D5E65(Var0.f_1))
															{
																if (unk_0xCF0C46D719D5302C(Var0.f_1))
																{
																	iVar14 = unk_0x8F1CCE5AF629C4D3(Var0.f_1);
																	if (unk_0x0452D5BF20AD945A(iVar14))
																	{
																		if (iVar14 == unk_0x81873881071CD9FE())
																		{
																			iVar12 = unk_0xC7224E4F41E00BE3();
																			Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_11[iVar10] = iVar12;
																		}
																	}
																}
															}
															if (!unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(Var0.f_0), 0))
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
				if (!unk_0x236D8AD7EE179F46(Local_94.f_272[func_83(iVar10)], func_82(iVar10)))
				{
					if (!unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar10)], func_82(iVar10)))
					{
						if (unk_0x86CCCD2FAE9D5E65(Var0.f_0))
						{
							if (unk_0xCF0C46D719D5302C(Var0.f_0))
							{
								if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar10]))
								{
									if (unk_0x86CCCD2FAE9D5E65(unk_0x1D1DAF7F94D5FE77(Local_94.f_48[iVar10])))
									{
										if (unk_0x8F1CCE5AF629C4D3(Var0.f_0) == unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x86CCCD2FAE9D5E65(Var0.f_1))
												{
													if (unk_0xCF0C46D719D5302C(Var0.f_1))
													{
														iVar14 = unk_0x8F1CCE5AF629C4D3(Var0.f_1);
														if (unk_0x0452D5BF20AD945A(iVar14))
														{
															if (iVar14 == unk_0x81873881071CD9FE())
															{
																if (Var0.f_3)
																{
																	if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_17 < 2)
																	{
																		Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8++;
																		if (Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8 <= func_568())
																		{
																			iVar16 = func_570();
																			Local_711.f_7 = (Local_711.f_7 + iVar16);
																			if (Local_711.f_11 == 0)
																			{
																				Local_711.f_11 = unk_0xC7224E4F41E00BE3();
																			}
																			func_567(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			func_566();
																		}
																	}
																	unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar10)]), func_82(iVar10));
																}
															}
														}
													}
												}
												else
												{
													unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_3[func_83(iVar10)]), func_82(iVar10));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar10]))
				{
				}
				iVar10++;
			}
		}
	}
}

int func_580(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar1]))
			{
				if (unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_581()
{
	int iVar0;
	int iVar1;
	
	if (Local_94.f_27 != joaat("hydra"))
	{
		if (iLocal_3603 == 0)
		{
			iLocal_3603 = 20;
		}
		if (unk_0x335F574AD77E59CE(Local_94.f_48[iLocal_3603]))
		{
			if (!func_30(Local_94.f_48[iLocal_3603]))
			{
				iVar0 = unk_0xA987F4EAD0A9DD6D(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iLocal_3603]));
				if (iLocal_3604[iLocal_3603] != iVar0)
				{
					iLocal_3604[iLocal_3603] = iVar0;
					unk_0x8DF96F85100AC153(Local_94.f_48[iLocal_3603], 1);
				}
			}
		}
		iLocal_3603++;
		if (iLocal_3603 == 23)
		{
			iLocal_3603 = 20;
		}
	}
	if (Local_94.f_27 != joaat("hydra") && Local_94.f_27 != joaat("rhino"))
	{
		if (!bLocal_3636)
		{
			if (func_90() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0x335F574AD77E59CE(Local_94.f_73[iVar1]))
					{
						if (func_101(Local_94.f_73[iVar1]))
						{
							if (unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_94.f_73[iVar1])) == joaat("savage"))
							{
								unk_0x8DF96F85100AC153(Local_94.f_73[iVar1], 1);
								bLocal_3636 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0x335F574AD77E59CE(Local_94.f_73[iLocal_3629]))
	{
		if (func_101(Local_94.f_73[iLocal_3629]))
		{
			iVar0 = unk_0xA987F4EAD0A9DD6D(unk_0xCFD52BB67CC0A98F(Local_94.f_73[iLocal_3629]));
			if (iLocal_3630[iLocal_3629] != iVar0)
			{
				iLocal_3630[iLocal_3629] = iVar0;
				if (!bLocal_3636)
				{
					unk_0x8DF96F85100AC153(Local_94.f_73[iLocal_3629], 1);
				}
			}
		}
	}
	iLocal_3629++;
	if (iLocal_3629 == 5)
	{
		iLocal_3629 = 0;
	}
}

void func_582()
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
		if (unk_0x236D8AD7EE179F46(uLocal_3547, iVar0))
		{
			if (Local_94.f_85[iVar0] != 2)
			{
				unk_0xC69E84EBBD7166E6(&iLocal_3547, iVar0);
			}
		}
		if (unk_0x335F574AD77E59CE(Local_94.f_48[iVar0]))
		{
			func_586(iVar0);
			if (!func_30(Local_94.f_48[iVar0]))
			{
				switch (Local_94.f_85[iVar0])
				{
					case 1:
						if (unk_0x402F3F19221FF696(Local_94.f_48[iVar0]))
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 0))
							{
								uVar2 = unk_0xE68E6B44DABA9C05(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 0);
								uVar1 = unk_0x14B7103DBD149FFE(uVar2);
								if (unk_0xE083914AB72DD7CE(uVar1))
								{
									if (unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1273030092) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) == unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]))
										{
											iVar9 = func_26();
											if (iVar9 != func_25())
											{
												uVar10 = unk_0xE495E987CB2BE7EF(iVar9);
												if (!unk_0x5FEB513A4402FD59(uVar10))
												{
													if (func_24(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { unk_0xB6AE0DAE06D56288(iVar10, 1) };
														unk_0x927A38D2A216C253(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0x1699D7B95446F15C(iVar1))
								{
									if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) == unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1273030092) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1307[iVar14] != Local_94.f_110[iVar14]))
									{
										if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) == unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]))
										{
											iVar13 = Local_94.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = unk_0x6528B1497E4313F1(iVar13);
												if (iVar9 != func_25())
												{
													iVar10 = unk_0xE495E987CB2BE7EF(iVar9);
													if (!unk_0x5FEB513A4402FD59(iVar10))
													{
														Var3 = { unk_0xB6AE0DAE06D56288(iVar10, 1) };
														unk_0x0EF9ADF085D23B65(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 100, 50);
														if (iLocal_1307[iVar14] != Local_94.f_110[iVar14])
														{
															iLocal_1307[iVar14] = Local_94.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1273030092) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1273030092) != 0) && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 1306903184) != 0) && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) == unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]))
									{
										iVar9 = func_26();
										if (iVar9 != func_25())
										{
											iVar10 = unk_0xE495E987CB2BE7EF(iVar9);
											if (!unk_0x5FEB513A4402FD59(iVar10))
											{
												fVar11 = func_24(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													unk_0x5F42E83F9F05D818(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), unk_0xB6AE0DAE06D56288(iVar10, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													unk_0xEFACB1875068FA30(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x402F3F19221FF696(Local_94.f_48[iVar0]))
						{
							if (!func_21())
							{
								if (unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1442466670) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0xE5AB05962FA1FF3F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 0))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_3547, iVar0))
										{
											iVar12 = func_585(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												unk_0xEC29A7F05A3AA03E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0x236D8AD7EE179F46(iLocal_3547, iVar0))
											{
												func_584(iVar0, func_96(1));
												unk_0xF3148AAF69AF9CBC(&iLocal_3547, iVar0);
											}
										}
									}
									else
									{
										unk_0xEC29A7F05A3AA03E(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -251125078) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_583() };
							unk_0x27CC98B7C879C320(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]));
							unk_0x1D15D99A10A15334(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), 1);
							unk_0x06189C52198B2264(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iVar0]), Var6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_583()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
		{
			return unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_94.f_30[0 /*3*/];
}

void func_584(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 396;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam1);
	}
}

int func_585(int iParam0, float fParam1)
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
		if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar3]))
		{
			if (func_101(Local_94.f_7[iVar3]))
			{
				iVar7 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar3]), -1);
				if (!unk_0x5FEB513A4402FD59(iVar7))
				{
					if (unk_0x0452D5BF20AD945A(iVar7))
					{
						Var4 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar3]), 1) };
						fVar2 = func_431(iParam0, Var4, 1);
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

void func_586(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_30(Local_94.f_48[iParam0]))
	{
		if (unk_0x402F3F19221FF696(Local_94.f_48[iParam0]))
		{
			if (unk_0x86F7E6A693F6370F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0])))
			{
				uVar0 = unk_0xE68E6B44DABA9C05(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0]), 0);
				if (unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(uVar0)) || unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iVar0)))
				{
					if (!unk_0x7404950238A154C2(iVar0, 0))
					{
						unk_0x9765BF567DB87B5F(unk_0xCFD52BB67CC0A98F(Local_94.f_48[iParam0]), 5);
					}
				}
			}
		}
	}
}

void func_587(struct<3> Param0)
{
	Global_1573867.f_6 = { Param0 };
}

bool func_588()
{
	return unk_0x236D8AD7EE179F46(Local_94.f_3, 8);
}

void func_589(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_590("kwUfKUus6EuQyNSL8KpY-w");
					func_590("yMTOFLfO2UKwzKrmgPP7kg");
					func_590("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_590("tP5HSeCA0UiHnkRzakdO2Q");
					func_590("uEkrqoerQEmQ0uZRtp4rkw");
					func_590("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_590("UOTaXepxrUOUEU7QtfBvGQ");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_590("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_590("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_590("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_590("uEkrqoerQEmQ0uZRtp4rkw");
					func_590("92t91kL3Wkqvl2Kc82cNSA");
					func_590("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_590("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_590("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_590("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_590("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_590("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_590("fOfm7nzMLkav0ldcSCNAzA");
					func_590("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_590("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_590("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_590("Ma78E44OMkGfYPmCPZXUNA");
					func_590("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_590("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_590("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_590("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_590("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_590("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_590("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_590("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_590("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_590("3AAj-muvN0iHI5IMyGlboA");
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
							func_590("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_590("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_590("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_590("fOfm7nzMLkav0ldcSCNAzA");
							func_590("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_590("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_590("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_590("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_590("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_590("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_590("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_590("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_590("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_590("fOfm7nzMLkav0ldcSCNAzA");
							func_590("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_590("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_590("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_590("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_590("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_590("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_590("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_590("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_590("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_590("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_590("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_590("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_590("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_590("aGBjo2rKi0yMDLl3a2ATGA");
									func_590("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_590("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_590("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_590("f2lnL6wZPkGWUowu0yLm1Q");
									func_590("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_590("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_590("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_590("W-OJzHlM-0ym9PsIASYZtw");
									func_590("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_590("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_590("TjGz31AMYE6bGCjAIitu6w");
									func_590("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_590("QmlvLMLCwkOvoZlkAstYxw");
									func_590("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_590("BktATxH9R0Wp2x0kWSbqjw");
									func_590("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_590("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_590("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_590("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_590("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_590("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_590("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_590("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_590("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_590("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_590("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_590(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	iVar0 = unk_0x8DAF7A748E41AD46(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar1 /*26*/].f_12, 11))
		{
			if (func_591(&(Global_2359718[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2359718[iVar1 /*26*/].f_13, 26))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2359718[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_591(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_141(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_592(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_592(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_141(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_97271[iVar12 /*12*/];
		
		case 62:
			return Global_905334.f_18605[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

void func_593()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 12))
	{
		func_184();
	}
	if (func_588())
	{
		if (iLocal_3537 != Local_94.f_12)
		{
			iLocal_3537 = Local_94.f_12;
			func_184();
		}
	}
	if (!func_192())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_1317[iVar0]))
			{
				if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
				{
					if (func_101(Local_94.f_7[iVar0]))
					{
						Var1 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0) };
						if (!func_594(iVar0, Var1))
						{
							if (!unk_0x236D8AD7EE179F46(Local_94.f_13, iVar0))
							{
								uLocal_1317[iVar0] = unk_0xE122DDAE9E94767B(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]));
								unk_0x8F827BB0F6ED7AA8(uLocal_1317[iVar0], 429);
								func_186(&(uLocal_1317[iVar0]), 29);
								if (!unk_0x236D8AD7EE179F46(iLocal_1305, 20))
								{
									unk_0x20F5C387A2DC0C80(uLocal_1317[iVar0], 1);
									unk_0x4D2AF8274EB774A2(uLocal_1317[iVar0], 7000);
									unk_0xF3148AAF69AF9CBC(&iLocal_1305, 20);
								}
								unk_0xCB015C3E2E01CA1C(uLocal_1317[iVar0], 9);
								if (func_588())
								{
									unk_0x2AB7C42FF2AF476D(uLocal_1317[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0x2AB7C42FF2AF476D(uLocal_1317[iVar0], "UW_BLIP");
								}
								if (!unk_0x236D8AD7EE179F46(iLocal_1306, 3))
								{
									unk_0x34D34ABC20E130B1();
									unk_0xF3148AAF69AF9CBC(&iLocal_1306, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
			{
				if (!func_101(Local_94.f_7[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_1317[iVar0]));
				}
				else if (unk_0x236D8AD7EE179F46(Local_94.f_13, iVar0))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_1317[iVar0]));
				}
			}
			else
			{
				unk_0x0A8175F24237A3D4(&(uLocal_1317[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_184();
	}
}

int func_594(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x335F574AD77E59CE(Local_94.f_7[iVar0]))
			{
				Var1 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_94.f_7[iVar0]), 0) };
				if (func_63(Param1, Var1, 0))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_1317[iVar0]))
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

int func_595()
{
	return Local_94.f_0;
}

int func_596(int iParam0)
{
	return Local_728[iParam0 /*18*/];
}

void func_597()
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 6))
	{
		func_363();
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 6);
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 7))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 4) || unk_0x236D8AD7EE179F46(Global_1573867.f_1, 16))
		{
			if (((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_288()) && func_665(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 7);
				func_340("FME_PASINT", 30000);
				func_339(1);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 17))
		{
			if (func_484() && !func_517())
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 23))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_665(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0xA83A609D74168B30())
		{
			if (func_611())
			{
				func_340("AMEV_GA_RP", -1);
				func_339(1);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 23);
			}
		}
	}
	if (unk_0xDB10DED5ABC4AA20() && unk_0x37F19465A7165331() == 15)
	{
		if (func_543(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF96ADDF61615476B(1344549371))
			{
				unk_0x10F474DA4DF674D9(1344549371);
			}
		}
		else if (unk_0xF96ADDF61615476B(1344549371))
		{
			unk_0x53D82E134017815A(1344549371);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 9))
	{
		if ((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_288()) && func_665(unk_0x1329891157A54C63(), 1, 1)) && !func_193(unk_0x1329891157A54C63(), 21))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 9);
			func_610(0);
			func_340("FME_TBL00", -1);
			func_339(1);
		}
	}
	if (func_327(unk_0x1329891157A54C63()))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if ((func_193(unk_0x1329891157A54C63(), 21) && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 20)) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 19))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 18);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if (((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_288()) && func_665(unk_0x1329891157A54C63(), 1, 1)) && unk_0xECDEA377354CBDA4()) && !Global_2451473.f_4631)
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 18);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 19);
				func_340("AMTT_RPAS", -1);
				func_339(1);
			}
		}
	}
	if ((((func_327(unk_0x1329891157A54C63()) && !func_281(unk_0x1329891157A54C63())) && func_182(unk_0x1329891157A54C63()) != 146) && !func_328(unk_0x1329891157A54C63())) && !func_609(unk_0x1329891157A54C63()))
	{
		if (func_513(func_182(unk_0x1329891157A54C63())))
		{
			unk_0xF637D39758718565(unk_0x1329891157A54C63());
		}
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 22);
		}
		if (func_608(unk_0x1329891157A54C63()) || func_511())
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10))
			{
				if (func_606(func_182(unk_0x1329891157A54C63())))
				{
					if (func_462(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_362(1);
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 10);
			}
		}
		if (func_543(unk_0x1329891157A54C63()))
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11))
			{
				if (!Global_90861.f_8)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
					func_360(1);
				}
				if (!func_605())
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 13);
					func_512();
				}
				if (!Global_2391042)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
					if (func_462(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_362(1);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 11);
			}
		}
		else
		{
			func_603(0);
		}
	}
	else
	{
		func_603(1);
	}
	func_598();
	if (func_510(func_182(unk_0x1329891157A54C63())) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
	}
	if ((func_484() && !func_517()) || func_193(unk_0x1329891157A54C63(), 21))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
	}
}

void func_598()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_288())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_428(iVar2))
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
				if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
				{
					unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 26);
				}
				func_599(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
	{
		func_98(&(Global_1573867.f_21));
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 26);
	}
}

void func_599(int iParam0, int iParam1)
{
	if (!func_20(&(Global_1573867.f_21)))
	{
		func_18(&(Global_1573867.f_21), 0, 0);
	}
	else if (func_17(&(Global_1573867.f_21), iParam1, 0))
	{
		if (func_321() > 0)
		{
			func_602(iParam0);
			if (func_520("AMEV_LBD_HELP"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			func_98(&(Global_1573867.f_21));
		}
	}
	else
	{
		func_601(0);
		func_600();
	}
}

void func_600()
{
	Global_2451473.f_4374 = 0;
}

void func_601(int iParam0)
{
	Global_1334766.f_68 = iParam0;
}

void func_602(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_603(int iParam0)
{
	if ((unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10) && iParam0)) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22) && iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 12))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 12);
			func_360(0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 13);
			func_604();
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 14);
			func_362(0);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 11);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 10);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 22);
	}
}

void func_604()
{
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4541), 0);
}

bool func_605()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_4541, 0);
}

int func_606(int iParam0)
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
			return func_543(unk_0x1329891157A54C63());
		
		case 133:
			return (func_511() || func_607(func_181()));
		
		default:
	}
	return 0;
}

int func_607(int iParam0)
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

int func_608(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

bool func_609(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		if ((func_484() && !func_517()) || func_193(unk_0x1329891157A54C63(), 21))
		{
			return 1;
		}
		if (func_20(&(Global_1573867.f_13)))
		{
			if (!func_17(&(Global_1573867.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_98(&(Global_1573867.f_13));
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9);
}

void func_610(int iParam0)
{
	int iVar0;
	
	iVar0 = func_221(2506, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 0);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 1);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 3);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 4))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 4);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 6))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 6);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 7))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 7);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 9))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 9);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 10))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 10);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 11);
		}
	}
	func_394(2506, iVar0, -1, 1);
}

int func_611()
{
	int iVar0;
	
	if (!func_20(&(Global_1573867.f_15)))
	{
		func_18(&(Global_1573867.f_15), 0, 0);
		Global_1573867.f_17 = 0;
	}
	else if (func_17(&(Global_1573867.f_15), 1000, 0))
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(Global_1573867.f_17)))
		{
			iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(Global_1573867.f_17));
			if (unk_0xA89AE5060232966A(iVar0))
			{
				if (func_665(iVar0, 1, 1) && func_612(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_57(unk_0x1329891157A54C63()), func_57(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573867.f_17++;
		if (Global_1573867.f_17 >= 32)
		{
			Global_1573867.f_17 = 0;
			func_98(&(Global_1573867.f_15));
		}
	}
	return 0;
}

int func_612(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_398(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1585045[iVar0 /*400*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_613()
{
	return Global_1573867.f_23;
}

bool func_614(int iParam0)
{
	return !func_615(iParam0);
}

int func_615(int iParam0)
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
			if (Global_262145.f_5025)
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5026)
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5027)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5028)
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_616(4))
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_616(4))
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_616(4))
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 19:
		case 21:
		case 22:
		case 23:
			if (func_616(4))
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_616(4))
			{
				return 0;
			}
			if (func_193(unk_0x1329891157A54C63(), 7))
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

int func_616(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_665(unk_0x6528B1497E4313F1(iVar0), 0, 1))
		{
			if (unk_0x236D8AD7EE179F46(Global_2414506[iVar0 /*255*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_617()
{
	bool bVar0;
	
	func_622(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_621())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	if (func_619(157))
	{
		if (!func_618())
		{
			return 1;
		}
	}
	if (func_619(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_355() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_355()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_618()
{
	return Global_2428865.f_573;
}

int func_619(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_620()
{
	return Global_2436988;
}

bool func_621()
{
	return Global_2428865.f_568;
}

void func_622(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_623(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_623(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_665(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_624(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_624(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_625()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_626()
{
	int iVar0;
	
	func_184();
	if (func_595() == 4 && Local_94.f_27 != 0)
	{
		unk_0xB5A91586385F755B(Local_94.f_27, 0);
	}
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4407), 1);
	func_519(19, 0);
	func_504(0);
	if (unk_0x519AAFF77CC141DF() != -1)
	{
		func_631(129, 0, unk_0x236D8AD7EE179F46(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2, 8));
	}
	func_630(129);
	unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 184, 0);
	unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 151, 1);
	unk_0x5B6D37392F5991C3(1f);
	if (iLocal_1315 > 0)
	{
		unk_0x9BAE0FF806E5C2E5(iLocal_1315);
	}
	if (unk_0x1329891157A54C63() != -1)
	{
		if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 129)
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/] = -1;
		}
	}
	if (unk_0x88594869E178AFA2(unk_0x81873881071CD9FE()) == iLocal_1515)
	{
		unk_0x506A601663C5417C(unk_0x81873881071CD9FE(), iLocal_1517);
	}
	func_629();
	func_195(0, 129);
	if (unk_0x236D8AD7EE179F46(iLocal_1305, 22))
	{
		func_366();
		unk_0xC69E84EBBD7166E6(&iLocal_1305, 22);
	}
	if (unk_0x236D8AD7EE179F46(iLocal_1305, 9))
	{
		unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
		if (!unk_0x236D8AD7EE179F46(iLocal_1305, 10))
		{
			unk_0x80650551CC58C784("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1316 != -100f)
	{
		func_434(0, 0);
		unk_0xCB9ED80838478527(fLocal_1316);
	}
	func_433(0);
	if (func_617())
	{
		Local_711.f_5 = 5;
	}
	else if (func_469(2, 0, 0, 0, 0))
	{
		Local_711.f_5 = 6;
	}
	else if (Local_711.f_5 != 1)
	{
		Local_711.f_5 = 2;
	}
	unk_0x98A5E5B909F1B162(uLocal_3544);
	Local_711.f_0 = Local_94.f_611;
	Local_711.f_1 = Local_94.f_612;
	Local_711.f_4 = Local_94.f_613;
	Local_711.f_3 = Local_94.f_615;
	if (Local_711.f_9 > 0)
	{
		Local_711.f_10 = (unk_0xC7224E4F41E00BE3() - Local_711.f_9);
	}
	if ((!Global_262145.f_9264 && !unk_0x236D8AD7EE179F46(Local_94.f_3, 8)) || (!Global_262145.f_9265 && unk_0x236D8AD7EE179F46(Local_94.f_3, 8)))
	{
		if (Local_711.f_6 > 0)
		{
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_94.f_3, 8))
	{
		iVar0 = 1;
	}
	func_525();
	unk_0xC1A3EEFD7C446E1D(0);
	if (iVar0 == 0)
	{
		func_628(Local_711, Local_94.f_27, Local_94.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x519AAFF77CC141DF() != -1)
	{
		func_628(Local_711, Local_94.f_279, Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_326(unk_0x1329891157A54C63()))
	{
		func_487(0);
	}
	func_503(0);
	func_551(1);
	func_627();
}

void func_627()
{
	unk_0xC23A229F78DAD92A();
}

void func_628(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x11CA2334E341B424();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69020)
	{
		if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x873A507463AEADAD(&Var1);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x7F79069287DE07E5(&Var14);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x79FB900F8BBD70D4(&Var28);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x38D7FC94D929810F(&Var52);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_penned_in"))
		{
			unk_0x308932840CD4CC5F(&Param0);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xD32EF874013A489C(&Var66);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xFEFB7107D5ABDC62(&Var79);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xB9AF9560738D57F9(&Var93);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x71C684296070EB75(&Var107);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xA10EAC86FFC2F674(&Var123);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xFA0B3892D04539F2(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x501D8C12E466C8AF(&Var150);
			}
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2271CB417FFB4D70(&Var164);
		}
	}
}

void func_629()
{
	unk_0x4BF7FC7E9DBAB99B(iLocal_1516);
	unk_0x4BF7FC7E9DBAB99B(iLocal_1515);
}

void func_630(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_631(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1329891157A54C63() != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 13);
		}
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 14);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 21);
	}
	func_650();
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
	unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_649(func_182(unk_0x1329891157A54C63()));
		func_519(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x1329891157A54C63() != -1) && func_648(unk_0x1329891157A54C63()) >= 12)
		{
			func_647(2518, -1);
			iVar1 = func_221(2518, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 5);
			}
		}
		func_524();
		func_646();
		func_645();
		func_636();
		func_635();
		func_363();
		func_634();
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1628), 2);
		func_449();
		func_633();
	}
	if (unk_0xF96ADDF61615476B(1344549371))
	{
		unk_0x53D82E134017815A(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (unk_0x1329891157A54C63() != -1 && !func_193(unk_0x1329891157A54C63(), 21))
		{
			func_362(0);
			func_360(0);
			func_632();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_473(26, -1))
		{
			Global_2438842 = -1;
			func_471(26, -1);
		}
	}
	Global_2450427 = 1;
}

void func_632()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_633()
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/].f_6 = 0;
}

void func_634()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573867 = { Var0 };
}

void func_635()
{
	var uVar0;
	
	Global_1318828 = uVar0;
}

void func_636()
{
	Global_2404607.f_20 = { Global_2406143 };
	Global_2404607.f_22 = { Global_2406145 };
	func_637(1, 1);
}

void func_637(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404607.f_39 = { Global_2406162 };
	}
	else
	{
		Global_2404607.f_39 = { Global_2406162 };
		Global_2404607.f_39.f_49 = { Global_2406162.f_49 };
		Global_2404607.f_39.f_52 = Global_2406162.f_52;
		Global_2404607.f_39.f_53 = Global_2406162.f_53;
	}
	if (bParam0)
	{
		func_644();
	}
	func_640(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_639(0);
	func_638();
}

void func_638()
{
	struct<4> Var0;
	
	if (Global_2404607.f_466.f_1 == unk_0x8F56512BDA9F6921())
	{
		Global_2404607.f_466 = { Var0 };
	}
}

void func_639(bool bParam0)
{
	if (bParam0)
	{
		Global_2404607.f_615 = 0;
	}
	else
	{
		Global_2404607.f_615 = 1;
	}
}

void func_640(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404607.f_1121 = iParam1;
		Global_2404607.f_1122 = iParam2;
		func_642();
		func_641(8, 0, 0);
		Global_2404607.f_616 = 1;
		Global_2404607.f_1125 = iParam3;
		Global_2404607.f_1126 = iParam4;
		Global_2404607.f_1123 = iParam5;
		Global_2404607.f_1124 = iParam6;
		Global_2404607.f_1127 = iParam7;
		Global_2404607.f_1128 = iParam8;
		Global_2404607.f_1129 = iParam9;
	}
	else
	{
		func_642();
		func_641(0, 0, 0);
		Global_2404607.f_616 = 0;
	}
}

void func_641(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408771 = 0;
	}
	Global_2404607.f_466 = iParam0;
	Global_2404607.f_466.f_1 = unk_0x8F56512BDA9F6921();
	Global_2404607.f_466.f_2 = iParam1;
	Global_2404607.f_466.f_3 = iParam2;
}

void func_642()
{
	func_643();
	Global_2404607.f_617 = 0;
}

void func_643()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404607.f_618[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_644()
{
	Global_2404607.f_344 = { Global_2406467 };
}

void func_645()
{
	Global_2451473.f_4541 = 0;
}

void func_646()
{
	if (unk_0x1329891157A54C63() != -1)
	{
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1 = 0;
	}
}

void func_647(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_221(iParam0, func_212(iParam1), 0);
	iVar0++;
	if (!func_401(iParam0))
	{
		func_394(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_395(iParam0, iVar0, iParam1, 1);
	}
}

int func_648(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_192.f_6;
}

int func_649(int iParam0)
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
			if (func_543(unk_0x1329891157A54C63()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_650()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3) || unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 5))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 5);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 3);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 4);
	}
	func_653(0);
	func_652(0);
	func_651(0);
}

void func_651(int iParam0)
{
	if (Global_2451473.f_4362 != iParam0)
	{
		Global_2451473.f_4362 = iParam0;
	}
}

void func_652(bool bParam0)
{
	if (Global_2451473.f_4361 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2451473.f_4361 = bParam0;
	}
}

void func_653(int iParam0)
{
	if (Global_2451473.f_4359 != iParam0)
	{
		Global_2451473.f_4359 = iParam0;
	}
}

void func_654(struct<20> Param0)
{
	int iVar0;
	
	func_663(func_664(Param0.f_0), Param0);
	unk_0xAADD6AD1A7B6D4E2(24);
	unk_0xCD9A6588DBAF710A(9);
	func_662(0, -1, 0);
	func_660(129);
	unk_0x19F630B59442E836(&Local_94, 617);
	unk_0xCBCBE0D8DD0EF168(&Local_728, 577);
	func_659(1);
	if (!func_658())
	{
		func_626();
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xE6E19E3BBABCBC24(0);
		if (unk_0x1C7D9BFDF15A02B4())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_94.f_17[iVar0] = func_25();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_94.f_22[iVar0] = func_25();
				Local_94.f_256[iVar0] = -1;
				Local_94.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0x33967CC5BBA849B8(&(Local_94.f_611), &(Local_94.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1307[iVar0] = -1;
			iVar0++;
		}
		Local_711.f_2 = unk_0x8C283330B889AF48();
		Local_711.f_8 = unk_0xC7224E4F41E00BE3();
		func_519(19, 1);
		func_655();
		if (func_192())
		{
			unk_0xF3148AAF69AF9CBC(&(Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_2), 7);
		}
		Local_728[unk_0x519AAFF77CC141DF() /*18*/].f_9 = -1;
		Global_2451473.f_4627 = -1;
		Local_728[unk_0x519AAFF77CC141DF() /*18*/] = 0;
	}
	else
	{
		func_626();
	}
}

void func_655()
{
	int iVar0;
	
	unk_0x4865E80F793024CE("relUWPlayer", &iLocal_1515);
	unk_0x4865E80F793024CE("relUWAi", &iLocal_1516);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xF8E77F310A5B6EAB(1, Global_1574182[iVar0], iLocal_1515);
		unk_0xF8E77F310A5B6EAB(1, iLocal_1515, Global_1574182[iVar0]);
		unk_0xF8E77F310A5B6EAB(1, Global_1574182[iVar0], iLocal_1516);
		unk_0xF8E77F310A5B6EAB(1, iLocal_1516, Global_1574182[iVar0]);
		unk_0xF8E77F310A5B6EAB(1, iLocal_1515, joaat("COP"));
		unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_1515);
		unk_0xF8E77F310A5B6EAB(1, iLocal_1515, Global_1574222[5]);
		unk_0xF8E77F310A5B6EAB(1, Global_1574222[5], iLocal_1515);
		unk_0xF8E77F310A5B6EAB(1, iLocal_1515, Global_1574215);
		unk_0xF8E77F310A5B6EAB(1, Global_1574215, iLocal_1515);
		iVar0++;
	}
	unk_0xF8E77F310A5B6EAB(5, iLocal_1515, iLocal_1516);
	unk_0xF8E77F310A5B6EAB(5, iLocal_1516, iLocal_1515);
	unk_0xF8E77F310A5B6EAB(1, 2017343592, iLocal_1516);
	unk_0xF8E77F310A5B6EAB(5, 2017343592, iLocal_1515);
	func_657(1, &iLocal_1516);
	func_656(&iLocal_1516);
	func_656(&iLocal_1515);
}

void func_656(int iParam0)
{
	unk_0xF8E77F310A5B6EAB(1, -1865950624, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, -1865950624);
	unk_0xF8E77F310A5B6EAB(1, 296331235, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, 296331235);
	unk_0xF8E77F310A5B6EAB(1, 1166638144, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, 1166638144);
	unk_0xF8E77F310A5B6EAB(1, 2037579709, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, 2037579709);
	unk_0xF8E77F310A5B6EAB(1, 2017343592, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, 2017343592);
	unk_0xF8E77F310A5B6EAB(1, -1821475077, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, -1821475077);
	unk_0xF8E77F310A5B6EAB(1, 1782292358, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, 1782292358);
	unk_0xF8E77F310A5B6EAB(1, -1033021910, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, -1033021910);
	unk_0xF8E77F310A5B6EAB(1, -1285976420, *iParam0);
	unk_0xF8E77F310A5B6EAB(1, *iParam0, -1285976420);
}

void func_657(int iParam0, int iParam1)
{
	unk_0xF8E77F310A5B6EAB(iParam0, joaat("COP"), *iParam1);
	unk_0xF8E77F310A5B6EAB(iParam0, *iParam1, joaat("COP"));
	unk_0xF8E77F310A5B6EAB(iParam0, joaat("army"), *iParam1);
	unk_0xF8E77F310A5B6EAB(iParam0, *iParam1, joaat("army"));
	unk_0xF8E77F310A5B6EAB(iParam0, -183807561, *iParam1);
	unk_0xF8E77F310A5B6EAB(iParam0, *iParam1, -183807561);
}

int func_658()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_621())
		{
			return 0;
		}
		if (func_619(155))
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

void func_659(bool bParam0)
{
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_355())
	{
		return;
	}
	if (bParam0)
	{
		if (!unk_0x64AD45A6264810A8(Global_2410756.f_532) || Global_2410756.f_532 == unk_0x8F56512BDA9F6921())
		{
			Global_2410756.f_532 = unk_0x8F56512BDA9F6921();
		}
	}
	else
	{
		Global_2410756.f_532 = -1;
	}
}

void func_660(int iParam0)
{
	func_634();
	func_661();
	func_645();
	Global_1573867.f_4 = iParam0;
	Global_1573867.f_5 = iParam0;
	func_518(iParam0, -1);
	func_6(&(Global_1573867.f_18), 0, 0);
	Global_2451473.f_4403 = 0;
	Global_2437628[0] = func_25();
	Global_2437628[1] = func_25();
	Global_2437628[2] = func_25();
	Global_2437628[3] = func_25();
	Global_2437628[4] = func_25();
	func_633();
	func_287();
	if (func_484() && !func_517())
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 17);
	}
}

void func_661()
{
	var uVar0;
	
	Global_1573891 = uVar0;
}

int func_662(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_627();
			}
			else
			{
				return 0;
			}
		}
		if (!func_160())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_627();
					}
					else
					{
						return 0;
					}
				}
				if (func_621())
				{
					if (!bParam2)
					{
						func_627();
					}
					else
					{
						return 0;
					}
				}
				if (func_619(155))
				{
					if (!bParam2)
					{
						func_627();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_627();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_627();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_627();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_663(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_627();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_664(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

int func_665(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

