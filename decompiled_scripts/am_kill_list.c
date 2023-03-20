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
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
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
	var uLocal_97 = 0;
	struct<617> Local_98 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_715 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_727[4] = { 0, 0, 0, 0 };
	struct<18> Local_732[32];
	int iLocal_1309 = 0;
	int iLocal_1310 = 0;
	int iLocal_1311[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	float fLocal_1320 = 0f;
	var uLocal_1321[4] = { 0, 0, 0, 0 };
	struct<8> Local_1326[24];
	int iLocal_1519 = 0;
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522[4] = { 0, 0, 0, 0 };
	int iLocal_1527[4] = { 0, 0, 0, 0 };
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	struct<47> Local_1535[32];
	struct<104> Local_3040 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 32;
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
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
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
	int iLocal_3573 = 0;
	int iLocal_3574 = 0;
	int iLocal_3575 = 0;
	var uLocal_3576[4] = { 0, 0, 0, 0 };
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	int iLocal_3584 = 0;
	int iLocal_3585 = 0;
	struct<2> Local_3586[10];
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	struct<2> Local_3617[5];
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	int iLocal_3632 = 0;
	struct<3> Local_3633 = { 0, 0, 0 } ;
	int iLocal_3636 = 0;
	int iLocal_3637 = 0;
	int iLocal_3638 = 0;
	int iLocal_3639 = 0;
	int iLocal_3640 = 0;
	int iLocal_3641[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3666 = 0;
	int iLocal_3667[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3673 = 0;
	var uLocal_3674[4] = { 0, 0, 0, 0 };
	var uLocal_3679[4] = { 0, 0, 0, 0 };
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
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	fLocal_1320 = -100f;
	iLocal_3574 = -1;
	iLocal_3575 = -1;
	iLocal_3638 = -1;
	if (unk_0xBBAE3E0C60A8AD4B() && func_748(unk_0xA34E7C2A5118D638(), 0, 1))
	{
		func_737(ScriptParam_0);
	}
	else
	{
		func_704();
	}
	while (true)
	{
		func_703();
		if (func_696())
		{
			func_704();
		}
		else if (func_693(19))
		{
			func_704();
		}
		if (func_692())
		{
			func_704();
		}
		func_667();
		switch (func_666(unk_0x935FA14EDA695A82()))
		{
			case 0:
				if ((func_665() == 1 && Local_98.f_1 != -1) && Local_98.f_2 != -1)
				{
					func_663();
					func_659(129, Local_98.f_1, Local_98.f_2, 0);
					if (Global_2458121.f_4638 == -1)
					{
						if (!func_658())
						{
							Global_2458121.f_4638 = 0;
						}
						else
						{
							Global_2458121.f_4638 = 1;
						}
					}
					func_657(Local_98.f_30[0 /*3*/]);
					Local_732[unk_0x935FA14EDA695A82() /*18*/] = 1;
				}
				else if (func_665() == 4)
				{
					Local_732[unk_0x935FA14EDA695A82() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_665() == 1)
				{
					func_652();
					func_651();
					func_633();
					func_375();
					func_158();
					func_157();
					func_156();
				}
				else if (func_665() == 4)
				{
					Local_732[unk_0x935FA14EDA695A82() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_155(&(Local_98.f_320));
				if (func_154(&(Local_98.f_320)))
				{
					Local_732[unk_0x935FA14EDA695A82() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_732[unk_0x935FA14EDA695A82() /*18*/] = 4;
			
			case 4:
				func_704();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			switch (func_665())
			{
				case 0:
					if (func_139())
					{
						if (func_134())
						{
							func_131(func_133(129, Local_98.f_1, Local_98.f_2, 0));
							Local_98.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_122();
					func_31();
					func_22();
					if (func_1())
					{
						Local_98.f_0 = 4;
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
	
	if ((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2))
	{
		if (!unk_0xDCC86F723E82125E(Local_98.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_98.f_3, 6))
	{
		if (!unk_0xDCC86F723E82125E(Local_98.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_98.f_241 > 0)
	{
		if (Local_98.f_0 != 4)
		{
			if (func_21())
			{
				if (Local_98.f_241 == 3)
				{
					if (func_19())
					{
						if (unk_0xDCC86F723E82125E(Local_98.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_17(&(Local_98.f_322), 3000, 0))
				{
					if (func_19())
					{
						return 1;
					}
				}
			}
		}
		if (Local_98.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_98.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0x55191629F1199760())
				{
					if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
					{
						if (!func_14(unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1)), 0))
						{
							if (Local_732[iVar1 /*18*/].f_17 < 2)
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
				if ((!((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2)) && !unk_0xDCC86F723E82125E(Local_98.f_3, 6)) && !unk_0xDCC86F723E82125E(Local_98.f_3, 14))
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 15);
				}
				func_5();
			}
			else if (Local_98.f_241 < 3)
			{
				if (func_3())
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 16);
					unk_0x59A0729D503ED758(&(Local_98.f_3), 15);
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
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
		{
			if (!func_4(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1, 0, 0, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x7EFD275DF858497F(iParam0) + 1;
	if (iParam4 || !unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x74CAAD9E721B315D(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xC0ADAF0814175B68(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xC8B93D94F8954288())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x2DC9BA2299B45EA6(iVar2))
					{
						if (unk_0xA815CBE767EFA3CB(iVar2))
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
					iVar3 = unk_0xC0ADAF0814175B68(iParam0, (iVar0 - 1));
					if (!unk_0x2DC9BA2299B45EA6(iVar3))
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
	if (Local_98.f_241 != 3)
	{
		func_7();
		func_6(&(Local_98.f_324), 0, 0);
		Local_98.f_241 = 3;
	}
}

void func_6(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2AA13A84EE2D3B24();
		}
		else
		{
			*uParam0 = unk_0x3BC33547A5F418E8();
		}
	}
	else
	{
		*uParam0 = unk_0x693EBB4F13506457();
	}
	uParam0->f_1 = 1;
}

void func_7()
{
	if (!func_13())
	{
		return;
	}
	if (!unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == Global_1312577.f_7)
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
	
	bVar0 = unk_0xBBAE3E0C60A8AD4B();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x2AA13A84EE2D3B24();
		Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
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

void func_10()
{
	if (!func_12())
	{
	}
	if (func_13())
	{
		unk_0x9793A6B024AF02EF(&(Global_1312577.f_10));
		func_11();
		unk_0x8C79EF3DED0E80D0();
	}
}

void func_11()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			unk_0x6DC80A902A91958F(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_55);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
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
	unk_0xF932A8699EA66642(&(Global_1312577.f_10));
	func_11();
	return unk_0xD6AFC45B1375A9DD();
}

int func_13()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
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

int func_16()
{
	return Global_1312746;
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

int func_19()
{
	int iVar0;
	
	if (!func_20(&(Local_98.f_328)))
	{
		func_18(&(Local_98.f_328), 0, 0);
	}
	else if (func_17(&(Local_98.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar0]))
		{
			if (Local_98.f_85[iVar0] < 4)
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
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
		{
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0])))
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
	
	if (!unk_0x736DBE187CFCC863())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar1]))
		{
			if (!func_30(Local_98.f_48[iVar1]))
			{
				switch (Local_98.f_85[iVar1])
				{
					case 0:
						if (!unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar1]), 0))
						{
							Local_98.f_85[iVar1] = 1;
						}
						else if (unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar1]), 0) && func_29(iVar1))
						{
							Local_98.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_98.f_241 == 1)
						{
							if (!func_21())
							{
								if (unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar1]), 0))
								{
									iVar4 = unk_0x275BEBE583A163B5(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar1]), 0);
									if (func_28(iVar4, 250f))
									{
										Local_98.f_85[iVar1] = 2;
									}
									else if (unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_98.f_110[iVar0] == -1 || !func_27(iVar1))
												{
													iVar2 = func_26();
													if (iVar2 != func_25())
													{
														iVar3 = unk_0xCF4C00513A86E840(iVar2);
														if (!unk_0x2DC9BA2299B45EA6(iVar3))
														{
															if (func_24(iVar4, iVar3, 1) > 250f)
															{
																Local_98.f_110[iVar0] = iVar2;
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
									Local_98.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_98.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_98.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_98.f_241 == 1)
						{
							if (func_21())
							{
								Local_98.f_85[iVar1] = 3;
							}
							else if (unk_0xDCC86F723E82125E(Local_98.f_3, 6))
							{
								Local_98.f_85[iVar1] = 3;
							}
							else if (unk_0xDCC86F723E82125E(Local_98.f_464, iVar1))
							{
								Local_98.f_85[iVar1] = 1;
								unk_0x77621132305B133B(&(Local_98.f_464), iVar1);
							}
						}
						else
						{
							Local_98.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0x54BD36F7F4951C53(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar1])))
						{
							func_23(&(Local_98.f_48[iVar1]));
							Local_98.f_85[iVar1] = 4;
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
	
	if (unk_0x691BFDC1728FD714(*uParam0))
	{
		uVar0 = unk_0x6622BC2FDC6DBB0E(*uParam0);
		unk_0xBDC2957CCB5DFDC3(&uVar0);
	}
}

float func_24(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
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
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (iVar0 == func_25())
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
			{
				if (Local_732[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_732[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
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
			if (Local_98.f_110[iVar0] != -1)
			{
				iVar3 = Local_98.f_110[iVar0];
				iVar1 = unk_0x20A20BF765914E37(iVar3);
				if (unk_0xDF73DA5E2287C499(iVar1))
				{
					if (func_748(iVar1, 1, 1))
					{
						if (unk_0xC8D96C5ECEABA5D0(iVar1))
						{
							iVar2 = unk_0xB916365AA117A9F4(iVar1);
							iVar3 = iVar2;
							if (Local_732[iVar3 /*18*/].f_17 != 1)
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
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (Local_732[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_732[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
					iVar2 = unk_0xCF4C00513A86E840(iVar1);
					if (!unk_0x2DC9BA2299B45EA6(iVar2))
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
	
	if (!unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0]), 0);
	if (!unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_30(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		return unk_0x2DC9BA2299B45EA6(unk_0xA84D2F2B8688949A(uParam0));
	}
	return 1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_98.f_463 > 0)
	{
		if (Local_98.f_28 != Local_98.f_463)
		{
			Local_98.f_28 = Local_98.f_463;
		}
	}
	switch (Local_98.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_98.f_28)
			{
				if (Local_98.f_17[iVar0] == func_25())
				{
				}
				else
				{
					iVar1++;
					if (unk_0xDCC86F723E82125E(Local_98.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_119();
			func_118();
			if (unk_0xDCC86F723E82125E(Local_98.f_3, 4))
			{
				Local_98.f_463 = iVar1;
			}
			if (func_116())
			{
				func_109();
				Local_98.f_241 = 1;
			}
			else if (unk_0xDCC86F723E82125E(Local_98.f_3, 4) && func_106() > 1)
			{
				func_105();
				func_109();
				Local_98.f_241 = 1;
			}
			if (!func_658())
			{
				if (unk_0x691BFDC1728FD714(Local_98.f_7[0]))
				{
					if (!func_103(Local_98.f_7[0]))
					{
						Var2.f_2 = 141;
						func_101(Var2, func_102(unk_0xF8A3C382964380BC(Local_98.f_7[0]), 1, 0));
						Local_98.f_241 = 2;
					}
				}
			}
			if (Local_98.f_241 == 0)
			{
				if (!func_20(&(Local_98.f_330)))
				{
					if (!func_20(&(Local_98.f_326)))
					{
						func_18(&(Local_98.f_330), 0, 0);
					}
				}
				else if (func_20(&(Local_98.f_326)))
				{
					func_100(&(Local_98.f_330));
				}
				else if (func_17(&(Local_98.f_330), func_99(), 0))
				{
					Var2.f_2 = 141;
					func_101(Var2, func_98(1));
					unk_0x59A0729D503ED758(&(Local_98.f_3), 12);
					func_5();
				}
				if (unk_0xDCC86F723E82125E(Local_98.f_3, 14))
				{
					func_5();
				}
			}
			break;
		
		case 1:
			func_34();
			func_32();
			func_105();
			if (unk_0xDCC86F723E82125E(Local_98.f_3, 6))
			{
				Local_98.f_241 = 2;
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
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 19))
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 6))
	{
		if (!func_20(&(Local_98.f_332)))
		{
			func_18(&(Local_98.f_332), 0, 0);
			unk_0x59A0729D503ED758(&(Local_98.f_3), 7);
		}
		else if (func_17(&(Local_98.f_332), func_33(), 0))
		{
			unk_0x59A0729D503ED758(&(Local_98.f_3), 6);
		}
	}
}

int func_33()
{
	if (func_658())
	{
		return Global_262145.f_9019;
	}
	return Global_262145.f_8996;
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
	if (Local_98.f_278 > 0)
	{
		if (Local_98.f_279 >= Local_98.f_278)
		{
			if (Local_98.f_254 >= Local_98.f_255)
			{
				unk_0x59A0729D503ED758(&(Local_98.f_3), 0);
				unk_0x59A0729D503ED758(&(Local_98.f_3), 1);
				unk_0x59A0729D503ED758(&(Local_98.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_98.f_278 > 0)
		{
			if (Local_98.f_279 >= Local_98.f_278)
			{
				if (Local_98.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[0]);
				}
				if (Local_98.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[1]);
				}
				if (Local_98.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[2]);
				}
				if (Local_98.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[3]);
				}
				if (iVar5 >= Local_98.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar4]))
						{
							if (!func_30(Local_98.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0x59A0729D503ED758(&(Local_98.f_3), 0);
						unk_0x59A0729D503ED758(&(Local_98.f_3), 1);
						unk_0x59A0729D503ED758(&(Local_98.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar4]))
					{
						if (!func_30(Local_98.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_20(&(Local_98.f_347)))
					{
						func_18(&(Local_98.f_347), 0, 0);
					}
					else if (func_17(&(Local_98.f_347), 3000, 0))
					{
						unk_0x59A0729D503ED758(&(Local_98.f_3), 0);
						unk_0x59A0729D503ED758(&(Local_98.f_3), 1);
						unk_0x59A0729D503ED758(&(Local_98.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 0) || !unk_0xDCC86F723E82125E(Local_98.f_3, 1))
	{
		if (Local_98.f_249 >= func_97())
		{
			unk_0x59A0729D503ED758(&(Local_98.f_3), 0);
			unk_0x59A0729D503ED758(&(Local_98.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_98.f_242)
		{
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_73[iVar0]))
			{
				if (func_96(iVar0))
				{
					if (!unk_0xDCC86F723E82125E(Local_98.f_245, iVar0))
					{
						if ((Local_98.f_27 != joaat("hydra") && !func_4(unk_0xF8A3C382964380BC(Local_98.f_73[iVar0]), 1, 0, 0, 0)) || Local_98.f_27 == joaat("hydra"))
						{
							unk_0x77621132305B133B(&(Local_98.f_3), 0);
							if (func_20(&(Local_3617[iVar0 /*2*/])))
							{
								func_100(&(Local_3617[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0xF8A3C382964380BC(Local_98.f_73[iVar0]), 1, 0, 0, 0) && unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0xDCC86F723E82125E(Local_98.f_3, 0))
							{
								unk_0x77621132305B133B(&(Local_98.f_3), 0);
							}
							if (!unk_0xDCC86F723E82125E(Local_98.f_3, 18))
							{
								func_95(func_98(1), iVar0);
								unk_0x59A0729D503ED758(&(Local_98.f_3), 18);
							}
						}
						else if (func_94(iVar0) || !func_658())
						{
							if (unk_0xDCC86F723E82125E(Local_98.f_3, 0))
							{
								unk_0x77621132305B133B(&(Local_98.f_3), 0);
							}
							if (!unk_0xDCC86F723E82125E(Local_98.f_303, iVar0))
							{
								func_93(func_98(1), iVar0);
								unk_0x59A0729D503ED758(&(Local_98.f_303), iVar0);
							}
						}
						else
						{
							func_23(&(Local_98.f_73[iVar0]));
							if (!unk_0xDCC86F723E82125E(Local_98.f_253, iVar0))
							{
								Local_98.f_251 = (Local_98.f_251 - 1);
								if (func_92() > 1)
								{
									if (Local_98.f_252 > 0)
									{
										Local_98.f_302++;
										func_91(iVar0, func_98(1));
									}
								}
								unk_0x59A0729D503ED758(&(Local_98.f_253), iVar0);
							}
							func_100(&(Local_3617[iVar0 /*2*/]));
						}
					}
				}
				else if (func_90(iVar0))
				{
					if (!unk_0xDCC86F723E82125E(Local_98.f_253, iVar0))
					{
						Local_98.f_251 = (Local_98.f_251 - 1);
						if (func_92() > 1)
						{
							if (Local_98.f_252 > 0)
							{
								Local_98.f_302++;
								func_91(iVar0, func_98(1));
							}
						}
						if (Local_98.f_27 == joaat("hydra"))
						{
							Local_98.f_254++;
						}
						unk_0x59A0729D503ED758(&(Local_98.f_253), iVar0);
					}
					if (func_20(&(Local_98.f_336[iVar0 /*2*/])))
					{
						func_100(&(Local_98.f_336[iVar0 /*2*/]));
					}
					func_23(&(Local_98.f_73[iVar0]));
				}
				else
				{
					if (unk_0xDCC86F723E82125E(Local_98.f_3, 0))
					{
						unk_0x77621132305B133B(&(Local_98.f_3), 0);
					}
					if (!unk_0xDCC86F723E82125E(Local_98.f_271, iVar0))
					{
						if (!func_20(&(Local_98.f_336[iVar0 /*2*/])))
						{
							func_18(&(Local_98.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_17(&(Local_98.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0x59A0729D503ED758(&(Local_98.f_271), iVar0);
						}
						else if (func_17(&(Local_98.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0xDCC86F723E82125E(Local_98.f_3, 18))
								{
									func_95(func_98(1), iVar0);
									unk_0x59A0729D503ED758(&(Local_98.f_3), 18);
								}
							}
							else if (func_94(iVar0) || !func_658())
							{
								if (!unk_0xDCC86F723E82125E(Local_98.f_303, iVar0))
								{
									func_93(func_98(1), iVar0);
									unk_0x59A0729D503ED758(&(Local_98.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_98.f_116)
			{
				if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_30(Local_98.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_88((iVar0 * 4 + iVar1)))
							{
								unk_0x77621132305B133B(&(Local_98.f_3), 0);
							}
							else if (func_87(iVar6))
							{
								if (!func_17(&(Local_98.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0x4E12F93E42909E85(unk_0xA84D2F2B8688949A(Local_98.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_86(&(Local_1326[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_23(&(Local_98.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar6)], func_84(iVar6)))
								{
									if (Local_98.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_83((iVar0 * 4 + iVar1), func_98(1));
										Local_98.f_254++;
									}
								}
								Local_98.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_20(&(Local_98.f_364[iVar6 /*2*/])))
								{
									func_100(&(Local_98.f_364[iVar6 /*2*/]));
								}
								if (unk_0xDCC86F723E82125E(Local_98.f_275[func_85(iVar6)], func_84(iVar6)))
								{
									unk_0x77621132305B133B(&(Local_98.f_275[func_85(iVar6)]), func_84(iVar6));
								}
							}
							else
							{
								if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar6)], func_84(iVar6)))
								{
									if (!func_20(&(Local_98.f_364[iVar6 /*2*/])))
									{
										func_18(&(Local_98.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_17(&(Local_98.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0x59A0729D503ED758(&(Local_98.f_272[func_85(iVar6)]), func_84(iVar6));
										func_100(&(Local_98.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0xDCC86F723E82125E(Local_98.f_275[func_85(iVar6)], func_84(iVar6)))
								{
									unk_0x59A0729D503ED758(&(Local_98.f_275[func_85(iVar6)]), func_84(iVar6));
								}
							}
						}
					}
					else if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar6)], func_84(iVar6)) || Local_98.f_27 == joaat("hydra"))
					{
						if (!func_17(&(Local_98.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_23(&(Local_98.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar6)], func_84(iVar6)))
						{
							if (Local_98.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_98.f_254++;
								func_83((iVar0 * 4 + iVar1), func_98(1));
							}
						}
						Local_98.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0xDCC86F723E82125E(Local_98.f_275[func_85(iVar6)], func_84(iVar6)))
						{
							unk_0x77621132305B133B(&(Local_98.f_275[func_85(iVar6)]), func_84(iVar6));
						}
					}
					else
					{
						if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar6)], func_84(iVar6)))
						{
							if (!func_20(&(Local_98.f_364[iVar6 /*2*/])))
							{
								func_18(&(Local_98.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_17(&(Local_98.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0x59A0729D503ED758(&(Local_98.f_272[func_85(iVar6)]), func_84(iVar6));
								func_100(&(Local_98.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0xDCC86F723E82125E(Local_98.f_275[func_85(iVar6)], func_84(iVar6)))
						{
							unk_0x59A0729D503ED758(&(Local_98.f_275[func_85(iVar6)]), func_84(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_98.f_249 < func_97())
			{
				if (func_69(iVar0))
				{
				}
				unk_0x77621132305B133B(&(Local_98.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 2))
	{
		if (Local_98.f_247 >= Global_262145.f_8123)
		{
			unk_0x59A0729D503ED758(&(Local_98.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_98.f_243)
		{
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iVar1)])))
				{
					unk_0x77621132305B133B(&(Local_98.f_3), 2);
				}
				else if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar7)], func_84(iVar7)))
				{
					if (!func_17(&(Local_98.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_20(&(Local_98.f_364[iVar7 /*2*/])))
					{
						func_100(&(Local_98.f_364[iVar7 /*2*/]));
					}
					func_23(&(Local_98.f_48[(20 + iVar1)]));
					if (Local_98.f_85[(20 + iVar1)] > 0)
					{
						Local_98.f_254++;
						if (func_92() > 1)
						{
							if (Local_98.f_317 > 0)
							{
								Local_98.f_316++;
							}
						}
						func_83((20 + iVar1), func_98(1));
					}
					Local_98.f_85[(20 + iVar1)] = 0;
					if (unk_0xDCC86F723E82125E(Local_98.f_275[func_85(iVar7)], func_84(iVar7)))
					{
						unk_0x77621132305B133B(&(Local_98.f_275[func_85(iVar7)]), func_84(iVar7));
					}
				}
				else
				{
					if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar7)], func_84(iVar7)))
					{
						if (!func_20(&(Local_98.f_364[iVar7 /*2*/])))
						{
							func_18(&(Local_98.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_17(&(Local_98.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0x59A0729D503ED758(&(Local_98.f_272[func_85(iVar7)]), func_84(iVar7));
							func_100(&(Local_98.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0xDCC86F723E82125E(Local_98.f_275[func_85(iVar7)], func_84(iVar7)))
					{
						unk_0x59A0729D503ED758(&(Local_98.f_275[func_85(iVar7)]), func_84(iVar7));
					}
				}
			}
			if (Local_98.f_247 < func_68())
			{
				if (func_50(iVar1))
				{
				}
				unk_0x77621132305B133B(&(Local_98.f_3), 2);
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
	
	if (func_92() == 1)
	{
		return;
	}
	if (func_92() == 2)
	{
		if (Local_98.f_252 > 0)
		{
			if (Local_98.f_302 > 0)
			{
				if (Local_98.f_302 >= (Local_98.f_252 - 1))
				{
					if (func_49() <= func_48())
					{
						if (func_47() == 0)
						{
							iVar0 = Local_98.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_98.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_46();
									Local_98.f_279++;
									func_39();
								}
								else if (Local_98.f_318 >= func_38())
								{
									func_46();
									Local_98.f_279++;
									func_39();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_92() == 3)
	{
		if (Local_98.f_317 > 0)
		{
			if (Local_98.f_316 > 0)
			{
				if (Local_98.f_316 >= Local_98.f_317)
				{
					if (Local_98.f_317 >= func_37())
					{
						func_46();
						Local_98.f_279++;
						func_39();
					}
				}
			}
		}
	}
	else if (func_92() == 4)
	{
		if (Local_98.f_316 > 0)
		{
			if (Local_98.f_302 > 0)
			{
				if (Local_98.f_317 > 0)
				{
					if (Local_98.f_316 >= (Local_98.f_317 - 2))
					{
						if (Local_98.f_252 > 0)
						{
							if (Local_98.f_302 >= (Local_98.f_252 - 2))
							{
								if (func_49() <= func_48())
								{
									if (func_47() <= func_36())
									{
										iVar0 = Local_98.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_98.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_46();
												Local_98.f_279++;
												func_39();
											}
											else if (Local_98.f_318 >= func_38())
											{
												func_46();
												Local_98.f_279++;
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
	else if (func_92() == 5)
	{
		if (Local_98.f_252 > 0)
		{
			if (Local_98.f_302 > 0)
			{
				if (Local_98.f_302 >= (Local_98.f_252 - 1))
				{
					if (func_49() <= func_48())
					{
						if (func_47() == 0)
						{
							func_46();
							Local_98.f_279++;
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
	
	iVar0 = Local_98.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_98.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_92() == 4)
				{
					return 2;
				}
				else if (func_92() == 2)
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
	return Local_98.f_305[Local_98.f_279];
}

int func_38()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_98.f_278)
	{
		iVar0 = (iVar0 + Local_98.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	if (Local_98.f_29 == -1)
	{
		iVar0 = func_45(Local_98.f_27);
		Local_98.f_29 = unk_0x531444754C426278(0, iVar0);
		if (func_658())
		{
			if (Local_98.f_27 == joaat("hydra"))
			{
				if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 4;
				}
			}
			else if (Local_98.f_27 == joaat("savage"))
			{
				if (Local_98.f_29 == 0)
				{
					Local_98.f_29 = 1;
				}
				else if (Local_98.f_29 == 1)
				{
					Local_98.f_29 = 2;
				}
				else if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 3;
				}
			}
			else if (Local_98.f_27 == joaat("valkyrie"))
			{
				if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 3;
				}
				else if (Local_98.f_29 == 3)
				{
					Local_98.f_29 = 4;
				}
			}
			else if (Local_98.f_27 == joaat("buzzard"))
			{
				if (Local_98.f_29 == 0)
				{
					Local_98.f_29 = 1;
				}
				else if (Local_98.f_29 == 1)
				{
					Local_98.f_29 = 2;
				}
				else if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 3;
				}
				else if (Local_98.f_29 == 3)
				{
					Local_98.f_29 = 4;
				}
			}
		}
		else if (Local_98.f_27 == joaat("savage"))
		{
			if (Local_98.f_29 == 0)
			{
				Local_98.f_29 = 1;
			}
			else if (Local_98.f_29 == 1)
			{
				Local_98.f_29 = 2;
			}
			else if (Local_98.f_29 == 2)
			{
				Local_98.f_29 = 3;
			}
		}
	}
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
			Local_98.f_280[0] = 4;
			Local_98.f_291[0] = func_44(4);
			Local_98.f_305[0] = func_43(4);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_44(4);
			Local_98.f_305[1] = func_43(4);
			Local_98.f_280[2] = 4;
			Local_98.f_291[2] = func_44(4);
			Local_98.f_305[2] = func_43(4);
			if (Local_98.f_12 <= 2 || !func_658())
			{
				Local_98.f_278 = 3;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_278 = 4;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 4;
				Local_98.f_291[4] = func_44(4);
				Local_98.f_305[4] = func_43(4);
				Local_98.f_278 = 5;
			}
			Local_98.f_255 = func_40();
			if (!func_658())
			{
				Local_98.f_1 = 0;
			}
			else
			{
				Local_98.f_1 = 5;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					Local_98.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_98.f_43[0] = 269.414f;
					Local_98.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_98.f_43[1] = 3.5491f;
					Local_98.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_98.f_43[2] = 54.4509f;
					Local_98.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_98.f_43[3] = 178.1948f;
					Local_98.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_98.f_175[0] = 270.8322f;
					Local_98.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_98.f_175[1] = 177.3506f;
					Local_98.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_98.f_175[2] = 318.1089f;
					Local_98.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_98.f_175[3] = 272.0801f;
					Local_98.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_98.f_175[4] = 104.0591f;
					Local_98.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_98.f_148[0] = 296.4225f;
					Local_98.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_98.f_148[1] = 164.9695f;
					Local_98.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_98.f_148[2] = 136.0596f;
					Local_98.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_98.f_148[3] = 116.379f;
					Local_98.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_98.f_148[4] = 86.6586f;
					Local_98.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_98.f_148[5] = 74.6822f;
					Local_98.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_98.f_148[6] = 206.8863f;
					Local_98.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_98.f_148[7] = 267.8581f;
					Local_98.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_98.f_148[8] = 267.5856f;
					Local_98.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_98.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_98.f_43[0] = 194.8062f;
					Local_98.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_98.f_43[1] = 238.9372f;
					Local_98.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_98.f_43[2] = 16.3071f;
					Local_98.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_98.f_43[3] = 209.9883f;
					Local_98.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_98.f_148[0] = 221.3913f;
					Local_98.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_98.f_148[1] = 246.3415f;
					Local_98.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_98.f_148[2] = 213.4087f;
					Local_98.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_98.f_148[3] = 100.5405f;
					Local_98.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_98.f_148[4] = 289.6017f;
					Local_98.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_98.f_148[5] = 285.6456f;
					Local_98.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_98.f_148[6] = 310.9245f;
					Local_98.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_98.f_148[7] = 46.7117f;
					Local_98.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_98.f_148[8] = 35.9192f;
					Local_98.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_98.f_148[9] = 207.53f;
					Local_98.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_98.f_175[0] = 286.6127f;
					Local_98.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_98.f_175[1] = 124.1428f;
					Local_98.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_98.f_175[2] = 275.0147f;
					Local_98.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_98.f_175[3] = 287.91f;
					Local_98.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_98.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_98.f_43[0] = 172.439f;
					Local_98.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_98.f_43[1] = 53.9805f;
					Local_98.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_98.f_43[2] = 303.2142f;
					Local_98.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_98.f_43[3] = 218.5974f;
					Local_98.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_98.f_148[0] = 264.5842f;
					Local_98.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_98.f_148[1] = 133.7932f;
					Local_98.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_98.f_148[2] = 205.1215f;
					Local_98.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_98.f_148[3] = 66.1065f;
					Local_98.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_98.f_148[4] = 7.8064f;
					Local_98.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_98.f_148[5] = 358.7563f;
					Local_98.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_98.f_148[6] = 142.1748f;
					Local_98.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_98.f_148[7] = 247.816f;
					Local_98.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_98.f_148[8] = 124.4666f;
					Local_98.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_98.f_148[9] = 348.6588f;
					Local_98.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_98.f_175[0] = 89.8563f;
					Local_98.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_98.f_175[1] = 163.8004f;
					Local_98.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_98.f_175[2] = 270.0754f;
					Local_98.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_98.f_175[3] = 184.9752f;
					Local_98.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_98.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_98.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_98.f_43[0] = 0.5044f;
					Local_98.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_98.f_43[1] = 179.2507f;
					Local_98.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_98.f_43[2] = 0.3066f;
					Local_98.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_98.f_43[3] = 180.2973f;
					Local_98.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_98.f_148[0] = 336.7541f;
					Local_98.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_98.f_148[1] = 6.0929f;
					Local_98.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_98.f_148[2] = 4.2803f;
					Local_98.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_98.f_148[3] = 274.985f;
					Local_98.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_98.f_148[4] = 267.2555f;
					Local_98.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_98.f_148[5] = 6.5529f;
					Local_98.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_98.f_148[6] = 89.1724f;
					Local_98.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_98.f_148[7] = 348.279f;
					Local_98.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_98.f_148[8] = 267.8075f;
					Local_98.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_98.f_148[9] = 0.5237f;
					Local_98.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_98.f_175[0] = 357.9713f;
					Local_98.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_98.f_175[1] = 269.3234f;
					Local_98.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_98.f_175[2] = 269.3055f;
					Local_98.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_98.f_175[3] = 359.1497f;
					Local_98.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_98.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_98.f_240 = joaat("insurgent");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_44(2);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_44(4);
			Local_98.f_305[1] = func_43(4);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_44(2);
			if (Local_98.f_12 <= 2 || !func_658())
			{
				Local_98.f_280[3] = 5;
				Local_98.f_291[3] = func_44(5);
				Local_98.f_278 = 4;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 5;
				Local_98.f_291[5] = func_44(5);
				Local_98.f_278 = 6;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 4;
				Local_98.f_291[5] = func_44(4);
				Local_98.f_305[5] = func_43(4);
				Local_98.f_280[6] = 5;
				Local_98.f_291[6] = func_44(5);
				Local_98.f_278 = 7;
			}
			Local_98.f_255 = func_40();
			if (!func_658())
			{
				Local_98.f_1 = 2;
			}
			else
			{
				Local_98.f_1 = 7;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					Local_98.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_98.f_43[0] = 331.74f;
					Local_98.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_98.f_43[1] = 327.7335f;
					Local_98.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_98.f_43[2] = 149.1604f;
					Local_98.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_98.f_43[3] = 150.6753f;
					Local_98.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_98.f_148[0] = 147.2177f;
					Local_98.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_98.f_148[1] = 103.9461f;
					Local_98.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_98.f_148[2] = 160.822f;
					Local_98.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_98.f_148[3] = 205.8375f;
					Local_98.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_98.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_98.f_43[0] = 344.2504f;
					Local_98.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_98.f_43[1] = 340.3425f;
					Local_98.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_98.f_43[2] = 351.5693f;
					Local_98.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_98.f_43[3] = 354.2446f;
					Local_98.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_98.f_148[0] = 245.2865f;
					Local_98.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_98.f_148[1] = 74.1185f;
					Local_98.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_98.f_148[2] = 10.2312f;
					Local_98.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_98.f_148[3] = 222.4017f;
					Local_98.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_98.f_148[4] = 150.2763f;
					Local_98.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_98.f_148[5] = 105.4526f;
					Local_98.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_98.f_148[6] = 88.9429f;
					Local_98.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_98.f_148[7] = 51.1733f;
					Local_98.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_98.f_148[8] = 169.7083f;
					Local_98.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_98.f_148[9] = 29.5849f;
					Local_98.f_243 = 3;
					break;
				
				case 2:
					if (!func_658())
					{
						Local_98.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_98.f_43[0] = 319.153f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_98.f_43[0] = 319.153f;
						Local_98.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_98.f_43[1] = 316.7079f;
						Local_98.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_98.f_43[2] = 316.9623f;
						Local_98.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_98.f_43[3] = 314.2003f;
					}
					Local_98.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_98.f_148[0] = 326.4292f;
					Local_98.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_98.f_148[1] = 6.8118f;
					Local_98.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_98.f_148[2] = 32.8776f;
					Local_98.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_98.f_148[3] = 8.387f;
					Local_98.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_98.f_148[4] = 291.5504f;
					Local_98.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_98.f_148[5] = 333.1838f;
					Local_98.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_98.f_148[6] = 203.8353f;
					Local_98.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_98.f_148[7] = 32.2329f;
					Local_98.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_98.f_148[8] = 195.4847f;
					Local_98.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_98.f_148[9] = 327.4941f;
					Local_98.f_243 = 4;
					break;
				
				case 3:
					if (!func_658())
					{
						Local_98.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_98.f_43[0] = 156.0209f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_98.f_43[0] = 156.0209f;
						Local_98.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_98.f_43[1] = 41.8571f;
						Local_98.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_98.f_43[2] = 305.7411f;
						Local_98.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_98.f_43[3] = 223.2489f;
					}
					if (func_92() == 2 || func_92() == 5)
					{
						Local_98.f_242 = 3;
					}
					else
					{
						Local_98.f_242 = 4;
					}
					Local_98.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_98.f_148[0] = 197.3456f;
					Local_98.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_98.f_148[1] = 140.7211f;
					Local_98.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_98.f_148[2] = 98.9528f;
					Local_98.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_98.f_148[3] = 107.0238f;
					Local_98.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_98.f_148[4] = 202.129f;
					Local_98.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_98.f_148[5] = 230.1207f;
					Local_98.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_98.f_148[6] = 36.194f;
					Local_98.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_98.f_148[7] = 48.2522f;
					Local_98.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_98.f_148[8] = 296.114f;
					Local_98.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_98.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_98.f_240 = joaat("lazer");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_44(2);
			Local_98.f_280[1] = 2;
			Local_98.f_291[1] = func_44(2);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_44(2);
			if (Local_98.f_12 <= 2 || !func_658())
			{
				Local_98.f_278 = 3;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 2;
				Local_98.f_291[3] = func_44(2);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_278 = 5;
			}
			else
			{
				Local_98.f_280[3] = 2;
				Local_98.f_291[3] = func_44(2);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 2;
				Local_98.f_291[5] = func_44(2);
				Local_98.f_278 = 6;
			}
			Local_98.f_255 = func_40();
			if (!func_658())
			{
				Local_98.f_1 = 1;
			}
			else
			{
				Local_98.f_1 = 6;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					if (!func_658())
					{
						Local_98.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_98.f_43[0] = 197.4435f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_98.f_43[0] = 197.4435f;
						Local_98.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_98.f_43[1] = 197.1133f;
						Local_98.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_98.f_43[2] = 272.2065f;
						Local_98.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_98.f_43[3] = 142.941f;
					}
					Local_98.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_98.f_175[0] = 34.149f;
					Local_98.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_98.f_175[1] = -26.0182f;
					Local_98.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_98.f_175[2] = 88.3998f;
					Local_98.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_98.f_175[3] = -141.7949f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_98.f_148[0] = 143.4012f;
					Local_98.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_98.f_148[1] = 212.1136f;
					Local_98.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_98.f_148[2] = 95.8248f;
					Local_98.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_98.f_148[3] = 113.3084f;
					Local_98.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_98.f_148[4] = 260.1329f;
					Local_98.f_242 = 4;
					break;
				
				case 1:
					if (!func_658())
					{
						Local_98.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_98.f_43[0] = 131.0993f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_98.f_43[0] = 131.0993f;
						Local_98.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_98.f_43[1] = 127.8408f;
						Local_98.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_98.f_43[2] = 131.1571f;
						Local_98.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_98.f_43[3] = 132.943f;
					}
					Local_98.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_98.f_175[0] = 316.9068f;
					Local_98.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_98.f_175[1] = 142.3075f;
					Local_98.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_98.f_175[2] = 93.1231f;
					Local_98.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_98.f_175[3] = -9.0334f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_98.f_148[0] = 236.3566f;
					Local_98.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_98.f_148[1] = 212.7533f;
					Local_98.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_98.f_148[2] = 299.3619f;
					Local_98.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_98.f_148[3] = 115.7556f;
					Local_98.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_98.f_148[4] = 191.3862f;
					Local_98.f_242 = 4;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_98.f_43[0] = 176.244f;
					Local_98.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_98.f_175[0] = 93.8354f;
					Local_98.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_98.f_175[1] = 250.5173f;
					Local_98.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_98.f_175[2] = 337.8961f;
					Local_98.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_98.f_175[3] = 142.1369f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_98.f_148[0] = 208.2624f;
					Local_98.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_98.f_148[1] = 349.048f;
					Local_98.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_98.f_148[2] = 69.8162f;
					Local_98.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_98.f_148[3] = 286.6181f;
					Local_98.f_242 = 4;
					Local_98.f_243 = 4;
					break;
				
				case 3:
					Local_98.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_98.f_43[0] = 292.0822f;
					Local_98.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_98.f_43[1] = 43.3907f;
					Local_98.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_98.f_43[2] = 124.2279f;
					Local_98.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_98.f_43[3] = 129.3366f;
					Local_98.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_98.f_175[0] = 137.5025f;
					Local_98.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_98.f_175[1] = 227.9336f;
					Local_98.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_98.f_175[2] = 6.0299f;
					Local_98.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_98.f_175[3] = -87.5596f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_242 = 4;
					Local_98.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_98.f_148[0] = 338.8487f;
					Local_98.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_98.f_148[1] = 272.5443f;
					Local_98.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_98.f_148[2] = 223.0158f;
					Local_98.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_98.f_148[3] = 355.6682f;
					Local_98.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_98.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_658())
					{
						Local_98.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_98.f_43[0] = 331.7771f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_98.f_43[0] = 331.7771f;
						Local_98.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_98.f_43[1] = 324.1843f;
						Local_98.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_98.f_43[2] = 330.0586f;
						Local_98.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_98.f_43[3] = 329.5413f;
					}
					Local_98.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_98.f_175[0] = 146.9594f;
					Local_98.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_98.f_175[1] = 137.6555f;
					Local_98.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_98.f_175[2] = 114.7478f;
					Local_98.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_98.f_175[3] = -84.6269f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_242 = 4;
					Local_98.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_98.f_148[0] = 153.0449f;
					Local_98.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_98.f_148[1] = 153.1271f;
					Local_98.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_98.f_148[2] = 331.3771f;
					Local_98.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_98.f_148[3] = 183.2579f;
					Local_98.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_98.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_98.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_98.f_43[0] = 184.7817f;
					Local_98.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_98.f_175[0] = 91.7761f;
					Local_98.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_98.f_175[1] = 269.7376f;
					Local_98.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_98.f_175[1] = 211.4614f;
					Local_98.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_98.f_175[3] = 148.9204f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_242 = 4;
					Local_98.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_98.f_148[0] = 113.298f;
					Local_98.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_98.f_148[1] = 353.0292f;
					Local_98.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_98.f_148[2] = 216.1793f;
					Local_98.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_98.f_148[3] = 347.4008f;
					Local_98.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_98.f_240 = joaat("buzzard");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_44(2);
			Local_98.f_305[0] = func_43(4);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_44(4);
			Local_98.f_305[1] = func_43(4);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_44(2);
			Local_98.f_305[2] = func_43(4);
			if (Local_98.f_12 <= 2 || !func_658())
			{
				Local_98.f_280[3] = 5;
				Local_98.f_291[3] = func_44(5);
				Local_98.f_278 = 4;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 5;
				Local_98.f_291[5] = func_44(5);
				Local_98.f_278 = 6;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 4;
				Local_98.f_291[5] = func_44(4);
				Local_98.f_305[5] = func_43(4);
				Local_98.f_280[6] = 5;
				Local_98.f_291[6] = func_44(5);
				Local_98.f_278 = 7;
			}
			Local_98.f_255 = func_40();
			if (!func_658())
			{
				Local_98.f_1 = 3;
			}
			else
			{
				Local_98.f_1 = 8;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					if (!func_658())
					{
						Local_98.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_98.f_43[0] = 290.0732f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_98.f_43[0] = 290.0732f;
						Local_98.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_98.f_43[1] = 231.5867f;
						Local_98.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_98.f_43[2] = 49.6234f;
						Local_98.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_98.f_43[3] = 229.3317f;
					}
					Local_98.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_98.f_148[0] = 230.0049f;
					Local_98.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_98.f_148[1] = 147.9421f;
					Local_98.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_98.f_148[2] = 22.3204f;
					Local_98.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_98.f_148[3] = 80.7676f;
					Local_98.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_98.f_148[4] = 162.0507f;
					Local_98.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_98.f_148[5] = 225.9002f;
					Local_98.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_98.f_148[6] = 140.0515f;
					Local_98.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_98.f_148[7] = 90.6966f;
					Local_98.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_98.f_148[8] = 226.042f;
					Local_98.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_98.f_148[9] = 79.7294f;
					Local_98.f_243 = 4;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_98.f_43[0] = 122.9714f;
					Local_98.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_98.f_43[1] = 118.6931f;
					Local_98.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_98.f_43[2] = 26.5272f;
					Local_98.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_98.f_43[3] = 211.0638f;
					Local_98.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_98.f_148[0] = 203.4084f;
					Local_98.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_98.f_148[1] = 123.7895f;
					Local_98.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_98.f_148[2] = 115.9053f;
					Local_98.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_98.f_148[3] = 330.5807f;
					Local_98.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_98.f_148[4] = 116.311f;
					Local_98.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_98.f_148[5] = 145.855f;
					Local_98.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_98.f_148[6] = 41.353f;
					Local_98.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_98.f_148[7] = 266.0158f;
					Local_98.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_98.f_148[8] = 290.3963f;
					Local_98.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_98.f_148[9] = 243.2495f;
					Local_98.f_243 = 4;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_98.f_43[0] = 280.2862f;
					Local_98.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_98.f_43[1] = 32.9157f;
					Local_98.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_98.f_43[2] = 106.2954f;
					Local_98.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_98.f_43[3] = 272.3807f;
					Local_98.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_98.f_148[0] = 254.5411f;
					Local_98.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_98.f_148[1] = 183.227f;
					Local_98.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_98.f_148[2] = 338.6039f;
					Local_98.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_98.f_148[3] = 71.8258f;
					Local_98.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_98.f_148[4] = 179.6626f;
					Local_98.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_98.f_148[5] = 272.7491f;
					Local_98.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_98.f_148[6] = 270.8252f;
					Local_98.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_98.f_148[7] = 180.4937f;
					Local_98.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_98.f_148[8] = 107.4297f;
					Local_98.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_98.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_98.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_98.f_43[0] = 117.7311f;
					Local_98.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_98.f_43[1] = 46.3958f;
					Local_98.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_98.f_43[2] = 189.2091f;
					Local_98.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_98.f_43[3] = 50.0778f;
					Local_98.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_98.f_148[0] = 229.5714f;
					Local_98.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_98.f_148[1] = 136.4963f;
					Local_98.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_98.f_148[2] = 88.3908f;
					Local_98.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_98.f_148[3] = 271.8922f;
					Local_98.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_98.f_148[4] = 316.4374f;
					Local_98.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_98.f_148[5] = 246.1521f;
					Local_98.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_98.f_148[6] = 198.8985f;
					Local_98.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_98.f_148[7] = 257.2332f;
					Local_98.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_98.f_148[8] = 104.7808f;
					Local_98.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_98.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_98.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_98.f_43[0] = 306.7662f;
					Local_98.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_98.f_43[1] = 303.3918f;
					Local_98.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_98.f_43[2] = 302.365f;
					Local_98.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_98.f_43[3] = 304.9788f;
					Local_98.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_98.f_148[0] = 30.9787f;
					Local_98.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_98.f_148[1] = 97.3626f;
					Local_98.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_98.f_148[2] = 218.2636f;
					Local_98.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_98.f_148[3] = 257.6324f;
					Local_98.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_98.f_148[4] = 244.6777f;
					Local_98.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_98.f_148[5] = 12.745f;
					Local_98.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_98.f_148[6] = 196.3743f;
					Local_98.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_98.f_148[7] = 283.2556f;
					Local_98.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_98.f_148[8] = 243.4268f;
					Local_98.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_98.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_98.f_240 = joaat("buzzard");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_44(2);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_44(4);
			Local_98.f_305[1] = func_43(4);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_44(2);
			if (Local_98.f_12 <= 2 || !func_658())
			{
				Local_98.f_280[3] = 5;
				Local_98.f_291[3] = func_44(5);
				Local_98.f_278 = 4;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 5;
				Local_98.f_291[5] = func_44(5);
				Local_98.f_278 = 6;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_44(4);
				Local_98.f_305[3] = func_43(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_44(2);
				Local_98.f_280[5] = 4;
				Local_98.f_291[5] = func_44(4);
				Local_98.f_305[5] = func_43(4);
				Local_98.f_280[6] = 5;
				Local_98.f_291[6] = func_44(5);
				Local_98.f_278 = 7;
			}
			Local_98.f_255 = func_40();
			if (!func_658())
			{
				Local_98.f_1 = 4;
			}
			else
			{
				Local_98.f_1 = 9;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					Local_98.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_98.f_43[0] = 180.7904f;
					Local_98.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_98.f_43[1] = 269.3001f;
					Local_98.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_98.f_43[2] = 180.39f;
					Local_98.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_98.f_43[3] = 276.7351f;
					Local_98.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_98.f_148[0] = 329.9165f;
					Local_98.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_98.f_148[1] = 264.7702f;
					Local_98.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_98.f_148[2] = 359.5203f;
					Local_98.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_98.f_148[3] = 111.3101f;
					Local_98.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_98.f_148[4] = 176.3058f;
					Local_98.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_98.f_148[5] = 213.1969f;
					Local_98.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_98.f_148[6] = 275.2275f;
					Local_98.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_98.f_148[7] = 220.0349f;
					Local_98.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_98.f_148[8] = 359.15f;
					Local_98.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_98.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_98.f_43[0] = 247.4892f;
					Local_98.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_98.f_43[1] = 66.129f;
					Local_98.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_98.f_43[2] = 340.0713f;
					Local_98.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_98.f_43[3] = 245.7466f;
					Local_98.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_98.f_148[0] = 252.6017f;
					Local_98.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_98.f_148[1] = 245.262f;
					Local_98.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_98.f_148[2] = 44.7945f;
					Local_98.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_98.f_148[3] = 255.6518f;
					Local_98.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_98.f_148[4] = 124.8391f;
					Local_98.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_98.f_148[5] = 188.9979f;
					Local_98.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_98.f_148[6] = 159.3613f;
					Local_98.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_98.f_148[7] = 5.7762f;
					Local_98.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_98.f_148[8] = 89.3388f;
					Local_98.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_98.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_98.f_43[0] = 310.6241f;
					Local_98.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_98.f_43[1] = 166.0191f;
					Local_98.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_98.f_43[2] = 343.1715f;
					Local_98.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_98.f_43[3] = 342.4984f;
					Local_98.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_98.f_148[0] = 248.8594f;
					Local_98.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_98.f_148[1] = 195.7758f;
					Local_98.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_98.f_148[2] = 28.6127f;
					Local_98.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_98.f_148[3] = 296.7476f;
					Local_98.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_98.f_148[4] = 240.9422f;
					Local_98.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_98.f_148[5] = 2.473f;
					Local_98.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_98.f_148[6] = 343.6776f;
					Local_98.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_98.f_148[7] = 0.2495f;
					Local_98.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_98.f_148[8] = 72.7889f;
					Local_98.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_98.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_98.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_98.f_43[0] = 351.0324f;
					Local_98.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_98.f_43[1] = 3.5452f;
					Local_98.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_98.f_43[2] = 7.3237f;
					Local_98.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_98.f_43[3] = 332.0844f;
					Local_98.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_98.f_148[0] = 2.6416f;
					Local_98.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_98.f_148[1] = 171.8638f;
					Local_98.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_98.f_148[2] = 257.0332f;
					Local_98.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_98.f_148[3] = 91.7869f;
					Local_98.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_98.f_148[4] = 4.2016f;
					Local_98.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_98.f_148[5] = 339.729f;
					Local_98.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_98.f_148[6] = 359.2033f;
					Local_98.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_98.f_148[7] = 333.6298f;
					Local_98.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_98.f_148[8] = 73.2788f;
					Local_98.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_98.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_98.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_98.f_43[0] = 42.1535f;
					Local_98.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_98.f_43[1] = 315.0261f;
					Local_98.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_98.f_43[2] = 1.2527f;
					Local_98.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_98.f_43[3] = 1.9403f;
					Local_98.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_98.f_148[0] = 352.9674f;
					Local_98.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_98.f_148[1] = 88.8285f;
					Local_98.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_98.f_148[2] = 177.2297f;
					Local_98.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_98.f_148[3] = 273.1487f;
					Local_98.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_98.f_148[4] = 225.394f;
					Local_98.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_98.f_148[5] = 175.5423f;
					Local_98.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_98.f_148[6] = 191.1842f;
					Local_98.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_98.f_148[7] = 269.6831f;
					Local_98.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_98.f_148[8] = 29.4203f;
					Local_98.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_98.f_148[9] = 287.677f;
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
	
	if (Local_98.f_255 != -1)
	{
		return Local_98.f_255;
	}
	if (Local_98.f_278 == 0)
	{
		return ((4 * Global_262145.f_8122) + Global_262145.f_8123);
	}
	iVar2 = func_92();
	iVar3 = func_42(iVar2);
	iVar4 = func_41(iVar3);
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_98.f_278)
			{
				iVar0 = (iVar0 + ((Local_98.f_291[iVar1] * iVar4) + Local_98.f_305[iVar1]));
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
			if (Local_98.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_98.f_27 == joaat("rhino"))
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
			if (Local_98.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_98.f_27 == joaat("hydra"))
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
			if (func_658())
			{
				iVar0 = Global_262145.f_9291;
			}
			else
			{
				iVar0 = Global_262145.f_9012;
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
			if (func_658())
			{
				iVar0 = Global_262145.f_9292;
			}
			else
			{
				iVar0 = Global_262145.f_9013;
			}
			break;
		
		case 5:
			if (func_658())
			{
				iVar0 = Global_262145.f_9293;
			}
			else
			{
				iVar0 = Global_262145.f_9014;
			}
			break;
		
		case 4:
			if (func_658())
			{
				iVar0 = Global_262145.f_9290;
			}
			else
			{
				iVar0 = Global_262145.f_9011;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	if (!func_658())
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
	Local_98.f_252 = 0;
	Local_98.f_302 = 0;
	Local_98.f_317 = 0;
	Local_98.f_316 = 0;
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_30(Local_98.f_48[iVar0]))
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
	
	iVar0 = Local_98.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_98.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_92() == 4)
				{
					return 2;
				}
				else if (func_92() == 2)
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
		if (func_103(Local_98.f_73[iVar1]))
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
	
	if (Local_98.f_318 == 0 || Local_98.f_318 == func_38())
	{
		if (func_92() == 2 || func_92() == 5)
		{
			return 0;
		}
	}
	if (func_92() == 3 || func_92() == 4)
	{
		if (Local_98.f_317 >= func_37())
		{
			iVar0 = Local_98.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_98.f_280[iVar0];
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
	else if (Local_98.f_317 == 2)
	{
		iVar0 = Local_98.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_98.f_280[iVar0];
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
	if (Local_98.f_318 == func_38())
	{
		return 0;
	}
	if (Local_98.f_318 == func_67())
	{
		return 0;
	}
	if (func_92() == 1)
	{
		return 0;
	}
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[(20 + iParam0)]))
	{
		if (func_66(Local_98.f_239) && unk_0x22E218A7FD9CC36A(0, 1, 0, 0))
		{
			if (func_64(&iVar3))
			{
				if (func_54(Local_98.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_53(&(Local_98.f_48[(20 + iParam0)]), 22, Local_98.f_239, Local_98.f_117[iVar3 /*3*/], Local_98.f_148[iVar3], 1, 1, 1))
					{
						unk_0xCBD60E398042F554(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), iLocal_1520);
						unk_0x5660CB9995F99E7B(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1, 0);
						unk_0x13D89E14CAD4E586(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0x640290651A86938B(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0x21EC660480DA1A3C(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_52());
						unk_0x687051455B40FE5B(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179(fVar6));
						unk_0x2455AECF5E279D05(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1);
						unk_0xC8C48B991776ADA5(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 2);
						unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 0, 1);
						unk_0x7867B753FDFAFE2B(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1);
						unk_0x45775F000D34F090(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1);
						unk_0xC778754E36F3FFD6(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 42, 1);
						unk_0xFE93132CC8944C8C(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179((200f * Global_262145.f_150)));
						unk_0x8409AEE1807BA193(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1);
						unk_0xF1A02DDEC7E15D6E(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1);
						unk_0x6EF57C6D89E028F1(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 1);
						unk_0xC778754E36F3FFD6(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0xD3A4099D2845F152(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]));
						fVar5 = func_51();
						iVar4 = unk_0xF2DB717A73826179((fVar5 * unk_0xBBDA792448DB5A89(iVar4)));
						unk_0xFE93132CC8944C8C(unk_0xA84D2F2B8688949A(Local_98.f_48[(20 + iParam0)]), iVar4);
						iVar7 = (20 + iParam0);
						if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar7)], func_84(iVar7)))
						{
							unk_0x77621132305B133B(&(Local_98.f_272[func_85(iVar7)]), func_84(iVar7));
						}
						Local_98.f_247++;
						Local_98.f_317++;
						Local_98.f_250++;
						Local_98.f_318++;
						func_100(&(Local_98.f_414[iVar7 /*2*/]));
						func_18(&(Local_98.f_414[iVar7 /*2*/]), 0, 0);
						if (func_20(&(Local_98.f_364[iVar7 /*2*/])))
						{
							func_100(&(Local_98.f_364[iVar7 /*2*/]));
						}
						func_18(&(Local_3586[iVar3 /*2*/]), 0, 0);
						unk_0xFE890F6B7507C09C(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar7]), 1, iLocal_1519);
					}
				}
			}
		}
	}
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_51()
{
	if (func_658())
	{
		return Global_262145.f_9279;
	}
	return Global_262145.f_9000;
}

float func_52()
{
	if (func_658())
	{
		return Global_262145.f_9281;
	}
	return Global_262145.f_9002;
}

int func_53(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x30D45E180EF7AEE1(1))
	{
		return 0;
	}
	iVar0 = unk_0x71DD988C1B903F5D(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xFD3315C91C68296D(iVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(iVar0, iParam9);
		if (unk_0x6061DFC4D87F4B3E(iVar0))
		{
			if (bParam7)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB3E60341E58EA2CF(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x7F49B0A4EC76092E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x7F49B0A4EC76092E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDF38DD44307A8523(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x2E895CA0C4A6EC85(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_58(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
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
	Global_2404919++;
	return 1;
}

int func_55(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_748(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (!unk_0xD5DFCA69ACAA20E3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4F982ED5336EA899(func_57(unk_0xA34E7C2A5118D638()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8EBAC9BC4005929D(Param0, fParam3))
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
		if (func_748(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xA34E7C2A5118D638()))
				{
					if ((func_56(iVar1) || !bParam10) && !Global_2417071[iVar1 /*306*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x07CBE0ED3114C7D8(iVar1) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x07CBE0ED3114C7D8(iVar1) != unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))) || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x4F982ED5336EA899(func_57(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x07CBE0ED3114C7D8(iVar1) != iParam8 || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
						{
							if (unk_0x4F982ED5336EA899(func_57(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
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
	if (unk_0x06FCE440581B1EC5(unk_0xCF4C00513A86E840(iParam0)) || Global_2417071[iParam0 /*306*/].f_241)
	{
		return 1;
	}
	return 0;
}

Vector3 func_57(int iParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
}

int func_58(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xA34E7C2A5118D638() != iVar1) || iParam8 == 0)
		{
			if (func_748(iVar1, bParam4, bParam5))
			{
				if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DC9BA2299B45EA6(unk_0xCF4C00513A86E840(iVar1)) && func_56(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) != unk_0x07CBE0ED3114C7D8(iVar1))) || unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
						{
							if (((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && uParam9) && bParam6) && func_59(iVar1))
							{
							}
							else if (unk_0x95CCECA3948CFE7B(unk_0xCF4C00513A86E840(iVar1)))
							{
								if (unk_0x4F982ED5336EA899(func_57(iVar1), Param0, 1) < fParam3)
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
	if (func_63(unk_0xA34E7C2A5118D638(), iParam0))
	{
		return 1;
	}
	Global_2457104 = { func_62(iParam0) };
	if (unk_0x45C7D789894EAE64(&Global_2457104))
	{
		return 1;
	}
	if (func_60(unk_0xA34E7C2A5118D638(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_25())
	{
		if (iVar0 == func_61(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1608811[iParam0 /*109*/].f_9;
	}
	return func_25();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_62(iParam0) };
		Global_2457117 = { func_62(iParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_64(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 10);
	if (!func_65(Local_98.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_20(&(Local_3586[iVar0 /*2*/])) || (func_20(&(Local_3586[iVar0 /*2*/])) && func_17(&(Local_3586[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_65(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_66(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x7567CEA8E6B5340B(iParam0);
	return unk_0x0845149A26DABBA5(iParam0);
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	if (Local_98.f_279 == 0)
	{
		iVar0 = Local_98.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_98.f_279)
		{
			iVar0 = (iVar0 + Local_98.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	switch (Local_98.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_98.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_92() == 3)
	{
		return 0;
	}
	if (Local_98.f_242 < iVar0)
	{
	}
	if (Local_98.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_92() > 1)
	{
		iVar1 = func_82();
		if (Local_98.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_66(Local_98.f_240) && func_66(Local_98.f_239))
	{
		if (func_70(iParam0))
		{
			if (unk_0xDCC86F723E82125E(Local_98.f_245, iParam0))
			{
				Local_98.f_249++;
				Local_98.f_251++;
				Local_98.f_252++;
				unk_0x77621132305B133B(&(Local_98.f_245), iParam0);
				if (!unk_0xDCC86F723E82125E(Local_98.f_3, 19))
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0x22E218A7FD9CC36A(4, 1, 0, 0))
	{
		if (func_76(iParam0))
		{
			if (func_71(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_103(Local_98.f_73[iParam0]) && unk_0xDCC86F723E82125E(Local_98.f_245, iParam0))
	{
		if (func_75(Local_98.f_73[iParam0]))
		{
			if (Local_98.f_116 <= 0)
			{
				if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_98.f_116 = 2;
				}
				else
				{
					Local_98.f_116 = unk_0x7EFD275DF858497F(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0])) + 1;
					if (Local_98.f_116 > 4)
					{
						Local_98.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_98.f_116)
			{
				if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_66(Local_98.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_74(&(Local_98.f_48[(iParam0 * 4 + iVar6)]), Local_98.f_73[iParam0], 22, Local_98.f_239, iVar4, 1, 1, 1))
						{
							unk_0xCBD60E398042F554(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), iLocal_1520);
							unk_0x5660CB9995F99E7B(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0x13D89E14CAD4E586(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0x21EC660480DA1A3C(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_73())
							{
								unk_0x21EC660480DA1A3C(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0x21EC660480DA1A3C(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_52());
							unk_0x687051455B40FE5B(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
							unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0x2455AECF5E279D05(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xC8C48B991776ADA5(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x7867B753FDFAFE2B(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x45775F000D34F090(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xFE93132CC8944C8C(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179((200f * Global_262145.f_150)));
							unk_0x8409AEE1807BA193(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xF1A02DDEC7E15D6E(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xC778754E36F3FFD6(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0x9880BAA7286E1072(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xD9E5847CABE6B639(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x519FF37D08E3A541(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xC778754E36F3FFD6(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x0893EE04C269FFD2(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_72());
									unk_0x687051455B40FE5B(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
									unk_0x26AC12F29494F9F3(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0x3666313D9695A671(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_9264;
								uVar1 = Global_262145.f_9265;
								uVar2 = Global_262145.f_9266;
								uVar3 = Global_262145.f_9267;
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]))))
							{
								unk_0x0893EE04C269FFD2(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_72());
								unk_0x687051455B40FE5B(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
								unk_0x26AC12F29494F9F3(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0x1296D571B761D748(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_9264;
								uVar1 = Global_262145.f_9265;
								uVar2 = Global_262145.f_9266;
								uVar3 = Global_262145.f_9267;
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x1202518C37DBD030(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar7)], func_84(iVar7)))
							{
								unk_0x77621132305B133B(&(Local_98.f_272[func_85(iVar7)]), func_84(iVar7));
							}
							unk_0x6EF57C6D89E028F1(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xF1A02DDEC7E15D6E(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x09BED569F20DBF34(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xFE890F6B7507C09C(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1519);
							Local_98.f_250++;
							func_100(&(Local_98.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_18(&(Local_98.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_20(&(Local_98.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_100(&(Local_98.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_98.f_116)
			{
				if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_30(Local_98.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0x465DC424E3211BBE(unk_0xA84D2F2B8688949A(Local_98.f_48[(iParam0 * 4 + iVar6)]), unk_0xF8A3C382964380BC(Local_98.f_73[iParam0])))
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

float func_72()
{
	if (func_658())
	{
		return Global_262145.f_9282;
	}
	return Global_262145.f_9003;
}

int func_73()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x30D45E180EF7AEE1(1))
	{
		return 0;
	}
	if (!unk_0x1BDB4A81F7EE9BE6(uParam1))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFD3315C91C68296D(unk_0xDEFAEEE1A4058454(unk_0xF8A3C382964380BC(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(unk_0xA84D2F2B8688949A(*uParam0), iParam7);
		if (unk_0x6061DFC4D87F4B3E(unk_0xA84D2F2B8688949A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_75(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		unk_0x835FF05091869303(uParam0);
		return unk_0xFEA25F5BCFDBD741(uParam0);
	}
	return 0;
}

int func_76(int iParam0)
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
	
	iVar0 = func_92();
	Local_98.f_240 = func_42(iVar0);
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_98.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_66(Local_98.f_240) && !unk_0xDCC86F723E82125E(Local_98.f_245, iParam0))
		{
			fVar10 = 300f;
			if (unk_0xAF40E7422A6D9D80(Local_98.f_240) || unk_0xE924C2C283992918(Local_98.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (unk_0xE924C2C283992918(Local_98.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_98.f_242)
			{
				if (func_81(iVar11))
				{
					func_80(Local_98.f_240, iVar11, &Var12, &uVar15);
					if (!func_65(Var12, 0f, 0f, 0f, 0))
					{
						if (func_54(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0))
						{
							Var4 = { Var12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_6(&(Local_98.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_98.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (unk_0xAF40E7422A6D9D80(Local_98.f_240) || unk_0xE924C2C283992918(Local_98.f_240))
				{
					iVar16 = 0;
				}
				if (func_79(iParam0))
				{
					if (func_78(&(Local_98.f_73[iParam0]), Local_98.f_240, Var4, uVar7, 1, 1, 1, 0, iVar16, 1))
					{
						unk_0x0782F0CAEA719452(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 2);
						unk_0xCCFFA2E333A3F89B(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1);
						unk_0x20F2C35BB8206D0D(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 0, 0);
						unk_0x0782F0CAEA719452(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 2);
						unk_0x57892FEA93664769(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1, 1, 0);
						unk_0xAB5D9565F49A6333(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 0);
						if (unk_0xAF40E7422A6D9D80(Local_98.f_240))
						{
							unk_0x0C7C7F68B472963C(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
							unk_0xFE4533E741E5E8FC(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1);
							unk_0xE457AC24AF211ECC(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
							unk_0x3907D4738A2C8ABD(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 0);
						}
						else if (unk_0xE924C2C283992918(Local_98.f_240))
						{
							unk_0xAD20BE8460150C41(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 3);
							unk_0x3907D4738A2C8ABD(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 0);
							unk_0xFE4533E741E5E8FC(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1);
							unk_0xE457AC24AF211ECC(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
							unk_0x1034B9E3CD286ADE(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 30f);
							unk_0x37FF6229E3B8C4CE(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1);
							unk_0x9DBF7449C688DBC3(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0xFE93132CC8944C8C(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
						}
						else
						{
							unk_0x05BE583DF8C6A617(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1);
						}
						if (func_92() == 5)
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_77());
							unk_0xFE93132CC8944C8C(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xB475A01381151886(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0x1F7ED83E60948CC2(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), fVar1);
							unk_0x52F412C56181F7E4(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), fVar1);
							unk_0x62C4DFB4097A1725(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), fVar1);
							unk_0x27161551B7DB6B22(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x7A3C0A1C396EF087(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), fVar1);
							unk_0x653884E7CCFA39FA(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), fVar1);
						}
						if (func_20(&(Local_98.f_336[iParam0 /*2*/])))
						{
							func_100(&(Local_98.f_336[iParam0 /*2*/]));
						}
						unk_0x77621132305B133B(&(Local_98.f_253), iParam0);
						unk_0x59A0729D503ED758(&(Local_98.f_245), iParam0);
						unk_0xFE890F6B7507C09C(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), 1, iLocal_1519);
						if (unk_0xDCC86F723E82125E(Local_98.f_271, iParam0))
						{
							unk_0x77621132305B133B(&(Local_98.f_271), iParam0);
						}
						if (unk_0xDCC86F723E82125E(Local_98.f_303, iParam0))
						{
							unk_0x77621132305B133B(&(Local_98.f_303), iParam0);
						}
						if (Local_98.f_240 == joaat("hydra") || Local_98.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_77()
{
	if (func_658())
	{
		return Global_262145.f_9280;
	}
	return Global_262145.f_9001;
}

int func_78(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x0B3DCCE96DC81466(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3FC9316FEF4E4720(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xD53B4DCC7B2C8551(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xBE16446E4B20EFE2(uVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(uVar0, iParam10);
		if (unk_0x6061DFC4D87F4B3E(iVar0))
		{
			if (bParam8)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
			else
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 0);
			}
		}
		unk_0x59CE4F88873CD573(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (unk_0xDCC86F723E82125E(Local_732[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_80(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0xE924C2C283992918(iParam0) || unk_0xAF40E7422A6D9D80(iParam0));
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
			if (!func_65(Local_98.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_98.f_159[iParam1 /*3*/] };
				*uParam3 = Local_98.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_65(Local_98.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_98.f_159[iParam1 /*3*/] };
				*uParam3 = Local_98.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_98.f_29)
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
			switch (Local_98.f_29)
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
			switch (Local_98.f_29)
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

int func_81(int iParam0)
{
	if (Local_98.f_228[iParam0] > 0)
	{
		if (!func_20(&(Local_98.f_207[iParam0 /*2*/])))
		{
			func_18(&(Local_98.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_17(&(Local_98.f_207[iParam0 /*2*/]), Local_98.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_20(&(Local_98.f_186[iParam0 /*2*/])))
	{
		if (!func_17(&(Local_98.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_82()
{
	return Local_98.f_291[Local_98.f_279];
}

void func_83(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 408;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iParam1);
	}
}

int func_84(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_85(iParam0) * 31);
}

int func_85(int iParam0)
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

void func_86(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x5356E82C1E5E0C44(uParam0);
		bVar0 = true;
	}
	if (unk_0x6B4865E08E90ACC5(uParam0->f_1))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x95CCECA3948CFE7B(uParam0->f_7))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_7))
		{
			if (unk_0x4E12F93E42909E85(uParam0->f_7))
			{
				unk_0xA474BF93C34BB50D(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_87(int iParam0)
{
	if (Local_98.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iParam0)], func_84(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_88(int iParam0)
{
	return func_89(iParam0);
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (!unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0]), 0);
	if (unk_0xB6900B8CB0ABBD2B(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0xDCC86F723E82125E(Local_98.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0xDCC86F723E82125E(Local_98.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_98.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_98.f_27 == joaat("hydra"))
		{
			if (unk_0xDCC86F723E82125E(Local_98.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 405;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iParam1);
	}
}

int func_92()
{
	return Local_98.f_280[Local_98.f_279];
}

void func_93(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 414;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iParam0);
	}
}

int func_94(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0])))
			{
				if (unk_0x7E35ED80132399B0(iVar2, unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x9441A8CA63B60B76(iVar2, unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 413;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iParam0);
	}
}

bool func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
	if (unk_0xE924C2C283992918(iVar0) || unk_0xAF40E7422A6D9D80(iVar0))
	{
		return !unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
	}
	return !unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_73[iParam0]));
}

int func_97()
{
	int iVar0;
	int iVar1;
	
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_98.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_98.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_98(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
			if (func_748(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_99()
{
	if (func_658())
	{
		return Global_262145.f_9273;
	}
	return Global_262145.f_8997;
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_101(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xA34E7C2A5118D638();
	if (!iParam14 == 0)
	{
		unk_0x74A5559828D3116B(1, &Param0, 14, iParam14);
	}
}

int func_102(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar1);
		if (func_748(iVar2, 1, 0))
		{
			if (!unk_0x0C7EC810080F0459(unk_0xCF4C00513A86E840(iVar2), iParam0, 0))
			{
				if (unk_0x07CBE0ED3114C7D8(iVar2) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) || !bParam2)
				{
					if (iVar2 != unk_0xA34E7C2A5118D638() || iParam1)
					{
						unk_0x59A0729D503ED758(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_103(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		return !func_104(unk_0xF8A3C382964380BC(uParam0));
	}
	return 0;
}

int func_104(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
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

void func_105()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 20))
	{
		return;
	}
	if (!func_20(&uLocal_3630))
	{
		func_18(&uLocal_3630, 0, 0);
		return;
	}
	if (!func_17(&uLocal_3630, 5000, 0))
	{
		return;
	}
	iVar0 = func_106();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), 1, 0, 0, 0))
		{
			func_23(&(Local_98.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0x59A0729D503ED758(&(Local_98.f_3), 20);
}

int func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_98.f_12 != 0)
	{
		return Local_98.f_12;
	}
	if (!func_658())
	{
		Local_98.f_12 = 1;
		return Local_98.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar0);
		if (unk_0xDF73DA5E2287C499(iVar2))
		{
			if (!func_14(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_108())
	{
		Local_98.f_12 = 2;
	}
	else if (iVar1 < func_107())
	{
		Local_98.f_12 = 3;
	}
	else
	{
		Local_98.f_12 = 4;
	}
	return Local_98.f_12;
}

int func_107()
{
	return Global_262145.f_9022;
}

int func_108()
{
	return Global_262145.f_9021;
}

void func_109()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
		{
			func_115(iVar0);
			func_114(iVar0, Local_98.f_256[iVar0], Local_98.f_22[iVar0]);
		}
		else if (Local_98.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_115(iVar0);
		}
		iVar0++;
	}
	func_113();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
			func_112(iVar0);
			if (Local_732[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_732[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_732[iVar0 /*18*/].f_9;
					func_111(uVar1, Local_732[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_111(-1, -1, iVar2);
			}
		}
		else if (Local_98.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_112(iVar0);
		}
		iVar0++;
	}
	func_110();
}

void func_110()
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
				if (Local_98.f_465[iVar1 /*4*/].f_1 > Local_98.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_98.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_98.f_465[iVar1 /*4*/];
					uVar4 = Local_98.f_465[iVar1 /*4*/].f_2;
					Local_98.f_465[iVar1 /*4*/].f_1 = Local_98.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_465[iVar1 /*4*/] = Local_98.f_465[(iVar1 - 1) /*4*/];
					Local_98.f_465[iVar1 /*4*/].f_2 = Local_98.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_98.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_98.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_98.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	Local_98.f_465[iParam2 /*4*/] = iParam0;
	Local_98.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_98.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_112(int iParam0)
{
	Local_98.f_465[iParam0 /*4*/] = -1;
	Local_98.f_465[iParam0 /*4*/].f_2 = -1;
	Local_98.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_113()
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
				if (Local_98.f_594[iVar1 /*4*/].f_1 > Local_98.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_98.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_98.f_594[iVar1 /*4*/];
					uVar4 = Local_98.f_594[iVar1 /*4*/].f_2;
					Local_98.f_594[iVar1 /*4*/].f_1 = Local_98.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_594[iVar1 /*4*/] = Local_98.f_594[(iVar1 - 1) /*4*/];
					Local_98.f_594[iVar1 /*4*/].f_2 = Local_98.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_98.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_98.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_98.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_114(int iParam0, var uParam1, var uParam2)
{
	Local_98.f_594[iParam0 /*4*/] = iParam0;
	Local_98.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_98.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_115(int iParam0)
{
	Local_98.f_594[iParam0 /*4*/] = -1;
	Local_98.f_594[iParam0 /*4*/].f_1 = -1;
	Local_98.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_117(iVar1))
		{
			func_100(&(Local_98.f_5));
			return 0;
		}
		if (!unk_0xDCC86F723E82125E(Local_98.f_13, iVar1))
		{
			func_100(&(Local_98.f_5));
			return 0;
		}
		else if (func_4(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), 1, 0, 0, 0))
		{
			func_100(&(Local_98.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_20(&(Local_98.f_5)))
	{
		func_18(&(Local_98.f_5), 0, 0);
	}
	else if (func_17(&(Local_98.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_103(Local_98.f_7[iParam0]))
	{
		if (unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), -1) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_658())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
		{
			if (func_103(Local_98.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_98.f_12)
	{
		Local_98.f_12 = iVar1;
	}
	if (Local_98.f_12 <= 1)
	{
		unk_0x77621132305B133B(&(Local_98.f_3), 8);
		if (!func_103(Local_98.f_7[0]))
		{
			if (func_103(Local_98.f_7[iVar2]))
			{
				func_23(&(Local_98.f_7[0]));
				Local_98.f_7[0] = Local_98.f_7[iVar2];
			}
		}
	}
}

void func_119()
{
	bool bVar0;
	
	if (!func_658())
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[0]))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_98.f_15 != false;
			}
			else
			{
				bVar0 = Local_98.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0xDCC86F723E82125E(Local_98.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_98.f_413 == -1)
		{
			Local_98.f_413 = func_121();
		}
		if (!func_20(&(Local_98.f_326)))
		{
			func_18(&(Local_98.f_326), 0, 0);
		}
		else if (!unk_0xDCC86F723E82125E(Local_98.f_3, 4))
		{
			if ((Local_98.f_413 - func_120(&(Local_98.f_326), 0, 0)) < 0)
			{
				unk_0x59A0729D503ED758(&(Local_98.f_3), 4);
			}
		}
	}
	else if (func_20(&(Local_98.f_326)))
	{
		func_100(&(Local_98.f_326));
		Local_98.f_413 = (Local_98.f_413 - func_120(&(Local_98.f_326), 0, 0));
	}
}

int func_120(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0);
		}
		else
		{
			return unk_0x2F4EBE92EB266B70(unk_0x3BC33547A5F418E8(), *uParam0);
		}
	}
	return unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0);
}

var func_121()
{
	if (func_658())
	{
		return Global_262145.f_9283;
	}
	return Global_262145.f_9004;
}

void func_122()
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
		iLocal_1522[iVar0] = 0;
		iLocal_727[iVar0] = -2;
		iLocal_1527[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_98.f_0 != 4)
	{
		iLocal_1317 = 0;
		while (iLocal_1317 < unk_0x55191629F1199760())
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iLocal_1317)))
			{
				iVar7 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iLocal_1317));
				if (!func_14(iVar7, 0))
				{
					if (Local_732[iLocal_1317 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_129(iLocal_1317, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_128(iLocal_1317, iVar0);
						iVar0++;
					}
					if (!unk_0xDCC86F723E82125E(Local_98.f_3, 14))
					{
						if (!unk_0xDCC86F723E82125E(Local_732[iLocal_1317 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_127(iLocal_1317, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0xDCC86F723E82125E(Local_732[iLocal_1317 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_125(iLocal_1317, iVar7);
					if (func_748(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_98.f_17[iVar0] == func_25())
							{
								if (unk_0xDCC86F723E82125E(Local_732[iLocal_1317 /*18*/].f_2, (0 + iVar0)))
								{
									Local_98.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_98.f_17[iVar0] == iVar7 && Local_98.f_241 == 0)
							{
								if (!unk_0xDCC86F723E82125E(Local_732[iLocal_1317 /*18*/].f_2, (0 + iVar0)))
								{
									Local_98.f_17[iVar0] = func_25();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1317++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xDCC86F723E82125E(Local_98.f_13, iVar0))
		{
			if (iLocal_1522[iVar0] == func_124() && func_117(iVar0))
			{
				unk_0x59A0729D503ED758(&(Local_98.f_13), iVar0);
			}
			if (!unk_0xDCC86F723E82125E(Local_98.f_14, iVar0))
			{
				if (iLocal_1522[iVar0] >= 1 && func_117(iVar0))
				{
					unk_0x59A0729D503ED758(&(Local_98.f_14), iVar0);
				}
			}
			else if (iLocal_1522[iVar0] == 0 || !func_117(iVar0))
			{
				if (unk_0xDCC86F723E82125E(Local_98.f_14, iVar0))
				{
					unk_0x77621132305B133B(&(Local_98.f_14), iVar0);
					if (iLocal_1522[iVar0] == 0)
					{
						if (Local_98.f_241 >= 1)
						{
							if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
							{
								func_23(&(Local_98.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0xDCC86F723E82125E(Local_98.f_15, iVar0) && func_117(iVar0))
			{
				if (iLocal_1522[iVar0] >= 2)
				{
					unk_0x59A0729D503ED758(&(Local_98.f_15), iVar0);
				}
			}
			else if (iLocal_1522[iVar0] <= 1 || !func_117(iVar0))
			{
				if (unk_0xDCC86F723E82125E(Local_98.f_15, iVar0))
				{
					unk_0x77621132305B133B(&(Local_98.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1522[iVar0] < func_124() || !func_117(iVar0))
		{
			unk_0x77621132305B133B(&(Local_98.f_13), iVar0);
		}
		if (Local_98.f_266[iVar0] != iLocal_1522[iVar0])
		{
			Local_98.f_266[iVar0] = iLocal_1522[iVar0];
			if (Local_98.f_241 == 1)
			{
				if (Local_98.f_266[iVar0] == 0)
				{
					if (!unk_0xDCC86F723E82125E(Local_98.f_616, iVar0))
					{
						unk_0x59A0729D503ED758(&(Local_98.f_616), iVar0);
					}
				}
			}
		}
		if (Local_98.f_241 == 0)
		{
			if (func_658())
			{
				if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
				{
					iVar3 = unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]));
					if (iLocal_1522[iVar0] >= func_123(iVar3) && func_117(iVar0))
					{
						iLocal_1527[iVar0] = 1;
					}
				}
			}
		}
		if (Local_98.f_241 == 1)
		{
			if (Local_98.f_256[iVar0] != iLocal_727[iVar0])
			{
				if (iLocal_727[iVar0] >= 0)
				{
					if (iLocal_727[iVar0] > Local_98.f_256[iVar0])
					{
						Local_98.f_256[iVar0] = iLocal_727[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_98.f_256[iVar0] - iLocal_727[iVar0]);
						if (Local_98.f_261[iVar0] != iVar8)
						{
							Local_98.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_109();
	}
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0x59A0729D503ED758(&(Local_98.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_98.f_241 == 0)
	{
		if (func_658())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1527[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0xDCC86F723E82125E(Local_98.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0x77621132305B133B(&(Local_98.f_3), 9);
			}
		}
	}
	if (Local_98.f_241 == 0)
	{
		if (!func_20(&(Local_98.f_360)))
		{
			func_18(&(Local_98.f_360), 0, 0);
		}
		else if (func_17(&(Local_98.f_360), 5000, 0))
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_3, 14))
			{
				if (func_658())
				{
					if (Local_98.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0x59A0729D503ED758(&(Local_98.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0x59A0729D503ED758(&(Local_98.f_3), 14);
					}
				}
				else if (Local_98.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0x59A0729D503ED758(&(Local_98.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_98.f_614)
	{
		Local_98.f_614 = iVar1;
	}
	else
	{
		Local_98.f_613 = (Local_98.f_614 - iVar1);
	}
	if (iVar2 > Local_98.f_615)
	{
		Local_98.f_615 = iVar2;
	}
}

int func_123(int iParam0)
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

int func_124()
{
	return Local_98.f_28;
}

void func_125(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xDCC86F723E82125E(Local_98.f_16, iParam0))
	{
		if (unk_0xDCC86F723E82125E(Local_732[iParam0 /*18*/].f_2, 12))
		{
			func_126(iParam1, 1);
			unk_0x59A0729D503ED758(&(Local_98.f_16), iParam0);
		}
		else if (Local_98.f_241 >= 1)
		{
			if (Local_732[iParam0 /*18*/].f_1 == 0)
			{
				func_126(iParam1, 1);
				unk_0x59A0729D503ED758(&(Local_98.f_16), iParam0);
			}
			else if (Local_732[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar1]))
					{
						if (func_103(Local_98.f_7[iVar1]))
						{
							if (unk_0x0C7EC810080F0459(unk_0xCF4C00513A86E840(iParam1), unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_126(iParam1, 1);
					unk_0x59A0729D503ED758(&(Local_98.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_98.f_241 < 1)
	{
		if (!unk_0xDCC86F723E82125E(Local_732[iParam0 /*18*/].f_2, 12))
		{
			func_126(iParam1, 0);
			unk_0x77621132305B133B(&(Local_98.f_16), iParam0);
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
		{
			unk_0x6D68A64C7323D805(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_127(int iParam0, int iParam1)
{
	if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iParam1)], func_84(iParam1)))
	{
		if (unk_0xDCC86F723E82125E(Local_732[iParam0 /*18*/].f_3[func_85(iParam1)], func_84(iParam1)))
		{
			unk_0x59A0729D503ED758(&(Local_98.f_272[func_85(iParam1)]), func_84(iParam1));
			if (Local_732[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x691BFDC1728FD714(Local_98.f_48[iParam1]))
			{
				if (!func_30(Local_98.f_48[iParam1]))
				{
					if (!func_88(iParam1))
					{
						unk_0x77621132305B133B(&(Local_98.f_272[func_85(iParam1)]), func_84(iParam1));
					}
					else if (!unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0x77621132305B133B(&(Local_98.f_272[func_85(iParam1)]), func_84(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_128(int iParam0, int iParam1)
{
	if (!unk_0xDCC86F723E82125E(Local_98.f_271, iParam1))
	{
		if (unk_0xDCC86F723E82125E(Local_732[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0x59A0729D503ED758(&(Local_98.f_271), iParam1);
			if (Local_732[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0xDCC86F723E82125E(Local_98.f_303, iParam1))
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_253, iParam1))
				{
					Local_98.f_251 = (Local_98.f_251 - 1);
					if (func_92() > 1)
					{
						if (Local_98.f_252 > 0)
						{
							Local_98.f_302++;
							func_91(iParam1, func_98(1));
						}
					}
					unk_0x59A0729D503ED758(&(Local_98.f_253), iParam1);
				}
				if (func_20(&(Local_98.f_336[iParam1 /*2*/])))
				{
					func_100(&(Local_98.f_336[iParam1 /*2*/]));
				}
				func_23(&(Local_98.f_73[iParam1]));
				unk_0x77621132305B133B(&(Local_98.f_303), iParam1);
			}
		}
	}
}

void func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDCC86F723E82125E(Local_732[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1522[iParam1]++;
		if (iLocal_727[iParam1] < 0)
		{
			if (Local_732[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_98.f_261[iParam1] > 0)
				{
					iLocal_727[iParam1] = Local_98.f_261[iParam1];
				}
				else
				{
					iLocal_727[iParam1] = 0;
				}
			}
		}
		iLocal_727[iParam1] = (iLocal_727[iParam1] + Local_732[iParam0 /*18*/].f_8);
		if (Local_98.f_241 >= 1)
		{
			if (Local_98.f_22[iParam1] == func_25())
			{
				if (unk_0x691BFDC1728FD714(Local_98.f_7[iParam1]))
				{
					if (func_103(Local_98.f_7[iParam1]))
					{
						iVar1 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iParam1]), -1);
						if (iVar1 != 0)
						{
							if (unk_0xA815CBE767EFA3CB(iVar1))
							{
								iVar0 = unk_0x8ACC9D9AC6076DCB(iVar1);
								if (iVar0 == iParam2)
								{
									Local_98.f_22[iParam1] = iParam2;
									func_109();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xDCC86F723E82125E(Local_98.f_319, iParam1))
		{
			if (Local_732[iParam0 /*18*/].f_10 > -1)
			{
				unk_0x59A0729D503ED758(&(Local_98.f_319), iParam1);
				func_18(&(Local_98.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_98.f_22[iParam1] != func_25())
	{
		if (!unk_0xDF73DA5E2287C499(Local_98.f_22[iParam1]))
		{
			iVar0 = func_130(iParam1, 1);
			if (iVar0 != func_25())
			{
				Local_98.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_98.f_22[iParam1] = func_25();
			}
		}
		else if (func_14(Local_98.f_22[iParam1], 0))
		{
			Local_98.f_22[iParam1] = func_25();
			func_109();
		}
		else
		{
			iVar1 = unk_0xCF4C00513A86E840(Local_98.f_22[iParam1]);
			if (!unk_0x2DC9BA2299B45EA6(iVar1))
			{
				if (func_103(Local_98.f_7[iParam1]))
				{
					if (!unk_0x0C7EC810080F0459(iVar1, unk_0xF8A3C382964380BC(Local_98.f_7[iParam1]), 0))
					{
						iVar0 = func_130(iParam1, 1);
						if (iVar0 != func_25())
						{
							Local_98.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_98.f_22[iParam1] = func_25();
						}
					}
				}
			}
		}
	}
}

int func_130(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_25();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0x55191629F1199760())
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar3)))
			{
				if (iVar0 == func_25())
				{
					if (Local_732[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0xDCC86F723E82125E(Local_732[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar3));
							}
							else
							{
								iVar1 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar3));
								if (func_103(Local_98.f_7[iParam0]))
								{
									iVar2 = unk_0xCF4C00513A86E840(iVar1);
									if (!unk_0x2DC9BA2299B45EA6(iVar2))
									{
										if (unk_0x0C7EC810080F0459(iVar2, unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 0))
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

void func_131(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 401;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam0;
	iVar3 = func_132(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iVar3);
	}
}

var func_132(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar1);
		if (func_748(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
			{
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_134()
{
	func_106();
	if (func_66(Local_98.f_27))
	{
		if (func_135())
		{
			unk_0x4BBD72565A0AF033(Local_98.f_27);
			return 1;
		}
	}
	return 0;
}

int func_135()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_98.f_12)
	{
		if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar0]))
		{
			if (func_66(Local_98.f_27))
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_244, iVar0))
				{
					unk_0x98371F41D43CDFA9(Local_98.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0x59A0729D503ED758(&(Local_98.f_244), iVar0);
				}
				if (func_78(&(Local_98.f_7[iVar0]), Local_98.f_27, Local_98.f_30[iVar0 /*3*/], Local_98.f_43[iVar0], 1, 1, 1, 1, 0, 1))
				{
					unk_0x77A10AB6D4288EA1(unk_0x6622BC2FDC6DBB0E(Local_98.f_7[iVar0]), 1);
					unk_0x0782F0CAEA719452(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
					unk_0xE77813FF83D3CC53(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
					unk_0x98F7B7105ADFB8DE(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
					unk_0x20F2C35BB8206D0D(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0, 0);
					unk_0xB7A2078CD1C9A82F(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
					unk_0xFE4533E741E5E8FC(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
					unk_0xE457AC24AF211ECC(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]));
					unk_0x57892FEA93664769(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1, 1, 0);
					unk_0x3907D4738A2C8ABD(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
					unk_0xAB5D9565F49A6333(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
					if (unk_0xAF40E7422A6D9D80(Local_98.f_27) || unk_0xE924C2C283992918(Local_98.f_27))
					{
						unk_0x27161551B7DB6B22(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
						if (unk_0xAF40E7422A6D9D80(Local_98.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else if (unk_0xE924C2C283992918(Local_98.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_136());
						}
						unk_0xFE93132CC8944C8C(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xB475A01381151886(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x1F7ED83E60948CC2(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
						unk_0x52F412C56181F7E4(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
						unk_0x62C4DFB4097A1725(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
						if (unk_0xE924C2C283992918(Local_98.f_27))
						{
							unk_0x37FF6229E3B8C4CE(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
						}
						if (unk_0xAF40E7422A6D9D80(Local_98.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x7A3C0A1C396EF087(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
							unk_0x653884E7CCFA39FA(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xAF40E7422A6D9D80(Local_98.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else if (unk_0xE924C2C283992918(Local_98.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_136());
						}
						unk_0xFE93132CC8944C8C(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xB475A01381151886(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x1F7ED83E60948CC2(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
						unk_0x52F412C56181F7E4(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
						unk_0x62C4DFB4097A1725(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), fVar1);
					}
					unk_0x8AFC38C51DD8090D(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
					if (Local_98.f_27 == joaat("savage"))
					{
					}
					if (unk_0x9F7DDFEF511FDBD8("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x99230E3785E2C923(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x9F7DDFEF511FDBD8("MPBitset", 3))
					{
						if (unk_0x3D32B80EFC48A92D(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0xFE76479AD91F5A0A(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), "MPBitset");
						}
						unk_0x59A0729D503ED758(&iVar2, 10);
						unk_0x59A0729D503ED758(&iVar2, 15);
						unk_0x99230E3785E2C923(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0x58864F3A0E415543(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0, iLocal_1519);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0x58864F3A0E415543(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0, Global_1574194[iVar3]);
						iVar3++;
					}
					unk_0x8B159AC82266F82B(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0, 0);
					unk_0x58DC9F45D31023CA(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
					unk_0xEE6504C7ECC425AB(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1);
					unk_0x7203A71F4A3F15CC(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), false);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_98.f_12)
	{
		if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_136()
{
	if (func_658())
	{
		return Global_262145.f_9277;
	}
	return Global_262145.f_9017;
}

var func_137()
{
	if (func_658())
	{
		return Global_262145.f_9278;
	}
	return Global_262145.f_9018;
}

var func_138()
{
	if (func_658())
	{
		return Global_262145.f_9276;
	}
	return Global_262145.f_9016;
}

bool func_139()
{
	int iVar0;
	int iVar1;
	
	if (!func_20(&(Local_98.f_362)))
	{
		func_18(&(Local_98.f_362), 0, 0);
		return 0;
	}
	else if (!func_17(&(Local_98.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 10))
	{
		if (func_153(&iVar0))
		{
			if (iVar0 < func_152())
			{
				unk_0x59A0729D503ED758(&(Local_98.f_3), 10);
			}
			else
			{
				iVar1 = unk_0x531444754C426278(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_9271) && !Global_262145.f_9269) || Global_262145.f_9270)
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 8);
					unk_0x59A0729D503ED758(&(Local_98.f_3), 10);
				}
				else
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 10);
				}
			}
		}
	}
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 10))
	{
		if (Local_98.f_12 == 0)
		{
			func_106();
			return 0;
		}
		if (!unk_0xDCC86F723E82125E(Local_98.f_3, 13))
		{
			if (func_148())
			{
				if (!func_146(129, Local_98.f_1, Local_98.f_2, 0))
				{
					if (func_140())
					{
						unk_0x59A0729D503ED758(&(Local_98.f_3), 13);
					}
					else
					{
						Local_98.f_29 = -1;
					}
				}
				else
				{
					Local_98.f_29 = -1;
				}
			}
		}
	}
	return unk_0xDCC86F723E82125E(Local_98.f_3, 13);
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_141(Local_98.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_54(Local_98.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_141(struct<3> Param0, float fParam3)
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
	
	if (Global_2415793.f_75.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2415793.f_75[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = unk_0x7CBED6EFED40E7EB(&(Global_2415793.f_75[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2415793.f_75.f_225)
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
		if (unk_0xDCC86F723E82125E(Global_2359718[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359718[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (unk_0x4F982ED5336EA899(Var36, Var39, 1) < fParam3)
			{
				Var43 = { Global_2359718[iVar34 /*26*/].f_15 };
				iVar53 = func_142(&Var43);
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

int func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_143(uParam0);
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

int func_143(var uParam0)
{
	int iVar0;
	
	if (unk_0xB8A06E7E729EED0A(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_145(uParam0->f_1))
	{
		if (func_144(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xDCC86F723E82125E(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_794573.f_4[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xDCC86F723E82125E(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xDCC86F723E82125E(Global_794573.f_4[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xF8D041B05C3D1FD4(&(Global_794573.f_4[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xDCC86F723E82125E(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_905334.f_1204[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xDCC86F723E82125E(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xDCC86F723E82125E(Global_905334.f_1204[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xF8D041B05C3D1FD4(&(Global_905334.f_1204[iVar0 /*87*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0xA34E7C2A5118D638())
	{
		if (unk_0xDCC86F723E82125E(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (unk_0xF8D041B05C3D1FD4(&(Global_947780.f_5[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xDCC86F723E82125E(Global_947780.f_5[iVar0 /*87*/].f_76, 13))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_947780.f_5[iVar0 /*87*/]), &(uParam0->f_3)))
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

int func_144(var uParam0)
{
	if (Global_2397977)
	{
		if (unk_0xF8D041B05C3D1FD4(&(Global_2397977.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_145(int iParam0)
{
	return iParam0 == 9999;
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_147(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6473)
		{
			if (Global_2452665.f_124[iVar0 /*2*/] == iVar1 && Global_2452665.f_124[iVar0 /*2*/].f_1 == func_133(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_147(int iParam0)
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

int func_148()
{
	if (func_150(&(Local_98.f_27)))
	{
		if (Local_98.f_4)
		{
			func_149();
		}
		func_39();
		return 1;
	}
	return 0;
}

void func_149()
{
	Global_1719525 = 1;
	if (!unk_0xDCC86F723E82125E(Global_2464686, 0))
	{
		unk_0x59A0729D503ED758(&Global_2464686, 0);
		unk_0x59A0729D503ED758(&Global_1719526, 0);
	}
	if (!unk_0xDCC86F723E82125E(Global_2464686, 1))
	{
		unk_0x59A0729D503ED758(&Global_2464686, 1);
		unk_0x59A0729D503ED758(&Global_1719526, 1);
	}
	if (!unk_0xDCC86F723E82125E(Global_2464686, 5))
	{
		unk_0x59A0729D503ED758(&Global_2464686, 5);
		unk_0x59A0729D503ED758(&Global_1719526, 5);
	}
	if (unk_0x42277337DA18A497(-355737150))
	{
		unk_0x130F0C5AE7B52B7A(-355737150, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-580979506))
	{
		unk_0x130F0C5AE7B52B7A(-580979506, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-1426452475))
	{
		unk_0x130F0C5AE7B52B7A(-1426452475, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(745417724))
	{
		unk_0x130F0C5AE7B52B7A(745417724, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-1305304906))
	{
		unk_0x130F0C5AE7B52B7A(-1305304906, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-1543175077))
	{
		unk_0x130F0C5AE7B52B7A(-1543175077, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-811770997))
	{
		unk_0x130F0C5AE7B52B7A(-811770997, 0, 0, 0);
	}
}

int func_150(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_151(joaat("rhino")))
			{
				Local_98.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_151(joaat("hydra")))
			{
				Local_98.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_98.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_151(joaat("savage")))
			{
				Local_98.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_98.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_151(joaat("valkyrie")))
			{
				Local_98.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_151(joaat("buzzard")))
			{
				Local_98.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_151(int iParam0)
{
	if (!func_658())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9006;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9008;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9007;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9010;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9009;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9285;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9287;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9286;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9289;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9288;
				break;
			}
	}
	return 0;
}

int func_152()
{
	return Global_262145.f_9020;
}

int func_153(var uParam0)
{
	int iVar0;
	
	if (!func_20(&(Local_98.f_334)))
	{
		func_18(&(Local_98.f_334), 0, 0);
	}
	else if (func_17(&(Local_98.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x55191629F1199760())
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
			{
				if (!func_14(unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0)), 0))
				{
					if (!unk_0xDCC86F723E82125E(Local_732[iVar0 /*18*/].f_2, 7))
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

int func_154(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_155(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x736DBE187CFCC863())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_156()
{
	struct<3> Var0;
	
	if (iLocal_3639 < 4)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iLocal_3639]))
		{
			if (unk_0xFEA25F5BCFDBD741(Local_98.f_7[iLocal_3639]))
			{
				Var0 = { unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iLocal_3639]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_23(&(Local_98.f_7[iLocal_3639]));
				}
			}
		}
	}
	iLocal_3639++;
	if (iLocal_3639 >= 4)
	{
		iLocal_3639 = 0;
	}
}

void func_157()
{
	if (func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 1)
	{
		if (!unk_0xDCC86F723E82125E(iLocal_1310, 13))
		{
			unk_0x59A0729D503ED758(&iLocal_1310, 13);
			unk_0xB2D9791D33CC8156(1);
		}
	}
	else if (unk_0xDCC86F723E82125E(iLocal_1310, 13))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				unk_0xB2D9791D33CC8156(0);
				unk_0x77621132305B133B(&iLocal_1310, 13);
			}
		}
	}
}

void func_158()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	if (func_373())
	{
		func_253(0);
	}
	iVar0 = Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_331;
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
	{
		Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_25())
	{
		if (unk_0xDF73DA5E2287C499(iVar0))
		{
			if (unk_0xC8D96C5ECEABA5D0(iVar0))
			{
				uVar1 = unk_0xB916365AA117A9F4(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_732[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_190();
						func_187(iVar2);
						break;
					
					case 1:
						func_186();
						func_163();
						func_159(1);
						break;
					
					case 2:
						func_159(0);
						break;
					}
				}
			}
	}
}

void func_159(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_160(Local_98.f_48[iVar0], &(Local_1326[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1);
		}
		else
		{
			func_160(Local_98.f_48[iVar0], &(Local_1326[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55);
		}
		if (unk_0x6B4865E08E90ACC5(Local_1326[iVar0 /*8*/]))
		{
			unk_0x8755DAC584918BF9(Local_1326[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x577E650C288BBD2C(Local_1326[iVar0 /*8*/], 1);
			}
		}
		if (unk_0x6B4865E08E90ACC5(Local_1326[iVar0 /*8*/].f_1))
		{
			unk_0x8755DAC584918BF9(Local_1326[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x577E650C288BBD2C(Local_1326[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_98.f_27 != joaat("hydra"))
		{
			if (unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar0)], func_84(iVar0)) || unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar0)], func_84(iVar0)))
			{
				if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar0]))
				{
					func_86(&(Local_1326[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0xDCC86F723E82125E(Local_98.f_271, iVar1) || unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6, iVar1))
			{
				if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar0]))
				{
					func_86(&(Local_1326[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_160(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		if (func_162())
		{
			Global_2426867 = unk_0xA34E7C2A5118D638();
		}
		if (bParam3)
		{
			func_161(unk_0xA84D2F2B8688949A(uParam0), uParam1, 1, Global_2426867, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
		else
		{
			func_161(unk_0xA84D2F2B8688949A(uParam0), uParam1, -1, Global_2426867, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
	}
	else if (unk_0x6B4865E08E90ACC5(*uParam1))
	{
		func_86(uParam1);
	}
}

int func_161(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x1A96BAEAC664567A();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (!unk_0x4E12F93E42909E85(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA474BF93C34BB50D(iParam0, 1);
			}
			else
			{
				unk_0xE5AC30DA51579B11(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xED313B3795FE8D4D(iParam0, iParam2);
			unk_0x1F446578F95908B9(iParam0, fParam6);
			if (unk_0x6B4865E08E90ACC5(*uParam1))
			{
				unk_0xEB19FBC5156AAE3A(*uParam1, 7);
			}
		}
		unk_0x95DC74EF0662E765(iParam0, uParam4);
		unk_0x18E370C407910F3E(iParam0, uParam5);
		*uParam1 = unk_0xF136BF62E6F0206F(iParam0);
		if (!unk_0xDCC86F723E82125E(uParam1->f_6, 2))
		{
			if (unk_0x6B4865E08E90ACC5(*uParam1))
			{
				if (!unk_0xB8A06E7E729EED0A(uParam7))
				{
					unk_0xF318DA2E8E4F4397("MCUSTBLIP");
					unk_0x2DED6C1306496257(sParam7);
					unk_0xA133FE69F7ED3360(*uParam1);
				}
				unk_0x59A0729D503ED758(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
		{
			uParam1->f_1 = unk_0x92CDA8CE01B2853F(iParam0);
			if (!unk_0xDCC86F723E82125E(uParam1->f_6, 3))
			{
				if (unk_0x6B4865E08E90ACC5(uParam1->f_1))
				{
					unk_0xEB19FBC5156AAE3A(uParam1->f_1, 7);
					unk_0x59A0729D503ED758(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6B4865E08E90ACC5(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x77621132305B133B(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_1315886;
}

void func_163()
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
	
	iVar2 = (func_33() - func_120(&(Local_98.f_332), 0, 0));
	if (iLocal_3585 == 0)
	{
		if (unk_0xDCC86F723E82125E(iLocal_1309, 26))
		{
			if ((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2))
			{
				iLocal_3585 = (func_33() - func_120(&(Local_98.f_332), 0, 0));
				iVar2 = iLocal_3585;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3585;
	}
	if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_658())
	{
		iVar0 = (((Local_98.f_256[0] + Local_98.f_256[1]) + Local_98.f_256[2]) + Local_98.f_256[3]);
	}
	else
	{
		iVar0 = Local_98.f_256[0];
	}
	func_185(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_658())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = unk_0x20A20BF765914E37(Local_98.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_25())
			{
				if (unk_0xDF73DA5E2287C499(iVar21))
				{
					sVar4[iVar1] = unk_0x74C5CB21CF9F1178(iVar21);
					iVar10[iVar1] = Local_98.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_98.f_594[iVar1 /*4*/];
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 == uVar15[iVar1])
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
		if ((func_33() - func_120(&(Local_98.f_332), 0, 0)) >= 0)
		{
			if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
			{
				func_181(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_182(), iVar20);
			}
			else
			{
				func_179(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_182(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_98.f_255)
		{
			iVar0 = Local_98.f_255;
		}
		if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
		{
			func_178(unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), iVar0, iVar0, Local_98.f_255, iVar2, iVar3, 0, func_182());
		}
		else
		{
			func_164(iVar0, iVar0, Local_98.f_255, iVar2, iVar3, 0, func_182(), 1);
		}
		if (bVar9)
		{
			func_109();
		}
	}
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_175(0) == 0)
	{
		return;
	}
	func_174();
	func_173();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_170(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	func_169(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_168(sParam6))
	{
		sVar16 = sParam6;
	}
	func_165(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0);
}

void func_165(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_167(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_166(7, iVar0);
		Global_1339929.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = iParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = iParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_166(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_167(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
}

int func_168(char* sParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_167(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_166(4, iVar0);
		Global_1339929.f_2786[iVar0] = iParam0;
		Global_1339929.f_2786.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1339929.f_2786.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1339929.f_2786.f_183[iVar0] = iParam3;
		Global_1339929.f_2786.f_216[iVar0] = iParam5;
		Global_1339929.f_2786.f_194[iVar0] = iParam4;
		Global_1339929.f_2786.f_227[iVar0] = iParam6;
		Global_1339929.f_2786.f_270[iVar0] = iParam7;
		Global_1339929.f_2786.f_281[iVar0] = iParam8;
		Global_1339929.f_2786.f_292[iVar0] = iParam9;
		Global_1339929.f_2786.f_303[iVar0] = iParam10;
		Global_1339929.f_2786.f_314[iVar0] = iParam11;
		Global_1339929.f_2786.f_325[iVar0] = iParam13;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x68B0A67658F2D9C2()) && iParam12)
		{
			Global_1339929.f_941 = 1;
		}
	}
}

void func_170(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_167(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_166(6, iVar0);
		Global_1339929.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3436.f_183[iVar0] = iParam3;
		Global_1339929.f_3436.f_172[iVar0] = iParam2;
		Global_1339929.f_3436.f_260[iVar0] = iParam4;
		Global_1339929.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339929.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339929.f_3436.f_443[iVar0] = iParam7;
		Global_1339929.f_3436.f_454[iVar0] = iParam8;
		Global_1339929.f_3436.f_497[iVar0] = iParam9;
		Global_1339929.f_3436.f_508[iVar0] = iParam10;
		Global_1339929.f_3436.f_205[iVar0] = iParam11;
		Global_1339929.f_3436.f_216[iVar0] = iParam12;
		Global_1339929.f_3436.f_227[iVar0] = iParam13;
		Global_1339929.f_3436.f_238[iVar0] = iParam14;
		Global_1339929.f_3436.f_249[iVar0] = iParam15;
		Global_1339929.f_3436.f_519[iVar0] = iParam16;
		Global_1339929.f_3436.f_530[iVar0] = iParam17;
		Global_1339929.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_172())
		{
			Global_1339929.f_941 = 1;
		}
		if (unk_0x68B0A67658F2D9C2())
		{
			iVar2 = 0;
			unk_0x94AEC7924AE05010(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339929.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339929.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339929.f_941 = 1;
			}
			if (func_171())
			{
				Global_1339929.f_945 = 1;
			}
		}
	}
}

int func_171()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x94AEC7924AE05010(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_172()
{
	if ((unk_0x884056BD9590BF29() == 8 || unk_0x884056BD9590BF29() == 9) || unk_0x884056BD9590BF29() == 10)
	{
		return 1;
	}
	return 0;
}

void func_173()
{
	unk_0x68A38902ADFD05FE(8);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(7);
	Global_2442435 = 1;
}

void func_174()
{
	Global_1339929.f_941 = 1;
}

int func_175(bool bParam0)
{
	if (func_177())
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_748(unk_0xA34E7C2A5118D638(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_176()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

bool func_177()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 12);
}

void func_178(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_175(0) == 0)
	{
		return;
	}
	func_173();
	func_174();
	if (bParam6)
	{
		func_170(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_169(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_168(sParam7))
	{
		sVar0 = sParam7;
	}
	func_165(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0);
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_175(0) == 0)
	{
		return;
	}
	func_174();
	func_173();
	if (iParam0 > -1)
	{
		Var0 = { func_180(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_170(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_180(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_170(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_180(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_170(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_180(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_170(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_168(sParam10))
	{
		sVar20 = sParam10;
	}
	func_165(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0);
}

struct<16> func_180(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0x73630CECCD6630B5("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_181(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_175(0) == 0)
	{
		return;
	}
	func_174();
	func_173();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_170(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_170(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_170(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_170(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_168(sParam14))
	{
		sVar4 = sParam14;
	}
	func_165(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0);
}

char* func_182()
{
	return "HUD_COUNTDOWN";
	switch (func_184(unk_0xA34E7C2A5118D638()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_183())
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

int func_183()
{
	if (func_184(unk_0xA34E7C2A5118D638()) == 133)
	{
		return Global_2458121.f_4635;
	}
	return -1;
}

int func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/];
	}
	return -1;
}

void func_185(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6CE7EDC8B5C46819())
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_2458121.f_4553)))
			{
				unk_0xEAB6899170047615(&(Global_2458121.f_4553));
			}
			unk_0x384EC102F362C893(1);
			unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
			unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
			unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
			if (Global_2458121.f_4561 > -1)
			{
				unk_0x279EB90079F76860(Global_2458121.f_4561);
				Global_2458121.f_4561 = -1;
			}
			Global_2458121.f_4551 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 4))
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 2))
				{
					if (unk_0x5BA0531C8F1DEF29())
					{
						if ((!unk_0xF8D041B05C3D1FD4(unk_0xC067EFDA9FF8398B(unk_0x50421F238A334931()), "OFF") && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && !unk_0xB8A06E7E729EED0A(&(Global_2458121.f_4553)))
						{
							StringCopy(&(Global_2458121.f_4553), "", 32);
							unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
							unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
							unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
							unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
							unk_0x384EC102F362C893(1);
							unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
						}
					}
				}
				else if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0xDCC86F723E82125E(Global_2458121.f_4551, 5))
				{
					unk_0xEAB6899170047615("OFF");
				}
			}
			else if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x233432976E597324("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x233432976E597324("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x233432976E597324("FM_COUNTDOWN_30S");
				}
				unk_0x925AE2E6F6E41362("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 1);
			}
			else if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x326F40CE5DA0E863() != 0)
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && !unk_0x66D013F030E3FDD1())
						{
							StringCopy(&(Global_2458121.f_4553), unk_0x8AD9ED202F7B5553(), 32);
							unk_0xEAB6899170047615("OFF");
						}
						unk_0x384EC102F362C893(1);
						unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 3))
				{
					Global_2458121.f_4561 = unk_0x83E9D86E63672B9A();
					unk_0xC4EE38A4CFF7544C(Global_2458121.f_4561, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
			{
				Global_2458121.f_4551 = 0;
				Global_2458121.f_4561 = -1;
				unk_0xE685497EA92333FF("FM_COUNTDOWN_30S_KILL");
				unk_0x384EC102F362C893(0);
				unk_0x233432976E597324("FM_PRE_COUNTDOWN_30S");
				unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
				unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
				unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 0);
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || unk_0xDCC86F723E82125E(Global_2458121.f_4551, 2))
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 5);
				}
				else
				{
					unk_0x77621132305B133B(&(Global_2458121.f_4551), 5);
					unk_0x77621132305B133B(&(Global_2458121.f_4551), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			Global_2458121.f_4551 = 0;
			Global_2458121.f_4561 = -1;
			unk_0xE685497EA92333FF("FM_COUNTDOWN_30S_KILL");
			unk_0x384EC102F362C893(0);
			unk_0x233432976E597324("FM_PRE_COUNTDOWN_30S");
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
			unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
			unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 0);
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 5);
			}
			else
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4551), 2);
				unk_0x77621132305B133B(&(Global_2458121.f_4551), 5);
			}
		}
	}
}

void func_186()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x6B4865E08E90ACC5(uLocal_1321[iVar0]))
		{
			unk_0x5356E82C1E5E0C44(&(uLocal_1321[iVar0]));
		}
		iVar0++;
	}
}

void func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x6B4865E08E90ACC5(uLocal_1321[iVar0]))
		{
			if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_13, iVar0))
				{
					if (!unk_0xDCC86F723E82125E(Local_732[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1321[iVar0] = unk_0x361E437CE4AD5532(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]));
						unk_0x31FDDAFCCFEFA478(uLocal_1321[iVar0], 429);
						func_188(&(uLocal_1321[iVar0]), 29);
						if (func_658())
						{
							unk_0x8755DAC584918BF9(uLocal_1321[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0x8755DAC584918BF9(uLocal_1321[iVar0], "UW_BLIP");
						}
						unk_0xEB19FBC5156AAE3A(uLocal_1321[iVar0], 9);
					}
					else if (unk_0x6B4865E08E90ACC5(uLocal_1321[iVar0]))
					{
						unk_0x5356E82C1E5E0C44(&(uLocal_1321[iVar0]));
					}
				}
				else if (unk_0x6B4865E08E90ACC5(uLocal_1321[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uLocal_1321[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)
{
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x32546F91F646B246(*uParam0, func_189(iParam1));
	}
}

int func_189(int iParam0)
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
	unk_0x7068E8DB78AD0A08(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_190()
{
	bool bVar0;
	
	bVar0 = func_245();
	if (bVar0)
	{
		if (Local_98.f_413 > -1)
		{
			if ((Local_98.f_413 - func_120(&(Local_98.f_326), 0, 0)) >= 0)
			{
				if (!func_194())
				{
					func_193((Local_98.f_413 - func_120(&(Local_98.f_326), 0, 0)));
					func_191((Local_98.f_413 - func_120(&(Local_98.f_326), 0, 0)), func_192(-1));
				}
			}
			else
			{
				if (!func_194())
				{
					func_191(0, func_192(-1));
				}
				if (unk_0x736DBE187CFCC863())
				{
					unk_0x59A0729D503ED758(&(Local_98.f_3), 4);
				}
			}
		}
	}
}

void func_191(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_175(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_168(sParam1))
	{
		sVar0 = sParam1;
	}
	func_165(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0);
}

char* func_192(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xC4E68AF0B559FAC4();
	return "HUD_STARTING";
	if (unk_0xF8D041B05C3D1FD4(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_challenges"))
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
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_193(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6CE7EDC8B5C46819())
	{
		Global_2458121.f_4551 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
		{
			unk_0xC4EE38A4CFF7544C(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2458121.f_4551 = 0;
			unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 1);
		}
	}
}

bool func_194()
{
	bool bVar0;
	var uVar1;
	
	if (func_243(8))
	{
		bVar0 = true;
	}
	if (func_243(0))
	{
		bVar0 = true;
	}
	if (!func_235(129, 0))
	{
		bVar0 = true;
	}
	if (!func_201())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 9))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				uVar1 = unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288());
				if (!unk_0x5D42322C7DB888D0(uVar1, 0))
				{
					func_199(0, -1);
					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 9))
	{
		unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 9);
	}
	if (Global_1710052)
	{
		bVar0 = true;
	}
	if (func_198(unk_0xA34E7C2A5118D638()))
	{
		bVar0 = true;
	}
	if (func_197(unk_0xA34E7C2A5118D638(), 2))
	{
		bVar0 = true;
	}
	if (func_195(unk_0xA34E7C2A5118D638()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_195(int iParam0)
{
	if (func_196(iParam0))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8);
}

bool func_196(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 2);
}

bool func_197(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

int func_198(int iParam0)
{
	if (!func_748(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587175[iParam0 /*410*/].f_35;
}

void func_199(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1587174)
		{
			if (!func_243(0) && !func_243(func_200(iParam1)))
			{
				Global_1587174 = 1;
			}
		}
	}
	else if (Global_1587174)
	{
		Global_1587174 = 0;
	}
}

int func_200(int iParam0)
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

int func_201()
{
	if (func_197(unk_0xA34E7C2A5118D638(), 21))
	{
		return 0;
	}
	if (unk_0xE21B8C41C187AA64())
	{
		return 0;
	}
	if (unk_0x547823CBA92EEF50())
	{
		return 0;
	}
	if (func_233(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_232())
	{
		return 0;
	}
	if (func_231(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_230())
	{
		return 0;
	}
	if (func_212(unk_0xA34E7C2A5118D638()) == 3)
	{
		return 0;
	}
	if (func_210(func_211()))
	{
		return 0;
	}
	if (func_209())
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	if (unk_0xDC9A5ADFE0C41DD2())
	{
		return 0;
	}
	if (func_207(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!func_205())
	{
		return 0;
	}
	if (func_197(unk_0xA34E7C2A5118D638(), 0) || func_197(unk_0xA34E7C2A5118D638(), 3))
	{
		return 0;
	}
	if ((func_197(unk_0xA34E7C2A5118D638(), 12) || func_197(unk_0xA34E7C2A5118D638(), 14)) || func_197(unk_0xA34E7C2A5118D638(), 13))
	{
		return 0;
	}
	if (func_204(unk_0xA34E7C2A5118D638(), 0))
	{
		return 0;
	}
	if (func_203())
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (func_198(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_202())
	{
		return 0;
	}
	return 1;
}

int func_202()
{
	if (Global_2549001.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_203()
{
	return Global_91158.f_297 > 0;
}

int func_204(int iParam0, bool bParam1)
{
	if (Global_1587175[iParam0 /*410*/].f_247.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
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

int func_205()
{
	if (func_206() == 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	return Global_1312466.f_18;
}

bool func_207(int iParam0)
{
	return func_208(iParam0);
}

bool func_208(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

bool func_209()
{
	return Global_1315911;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 86:
		case 87:
			return 1;
		
		default:
	}
	return 0;
}

int func_211()
{
	return Global_2426867.f_2138[0 /*72*/].f_1;
}

int func_212(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_229(iParam0) && !func_196(iParam0)) && !unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8));
	bVar2 = func_228(iParam0);
	bVar3 = func_227();
	uVar4 = func_218();
	if ((bVar1 && (func_217(iParam0) || func_216(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_215(iParam0)) && !func_213(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2458121.f_4648.f_18 != iVar0)
	{
		Global_2458121.f_4648.f_18 = iVar0;
	}
	return iVar0;
}

bool func_213(int iParam0)
{
	return func_214(iParam0, 19);
}

bool func_214(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_214(iParam0, 9);
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 7);
	}
	return 0;
}

int func_218()
{
	if ((func_214(unk_0xA34E7C2A5118D638(), 21) || func_214(unk_0xA34E7C2A5118D638(), 22)) || func_224())
	{
		return 1;
	}
	if (func_220())
	{
		func_219(22);
		return 1;
	}
	return 0;
}

void func_219(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

int func_220()
{
	if (func_223(unk_0xA34E7C2A5118D638(), 0))
	{
		if ((func_227() && !func_222()) || func_197(unk_0xA34E7C2A5118D638(), 21))
		{
			if (!func_214(unk_0xA34E7C2A5118D638(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_221(27);
		}
	}
	return 0;
}

void func_221(int iParam0)
{
	unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

bool func_222()
{
	return Global_1312416.f_1;
}

int func_223(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return func_225(267, -1);
}

int func_225(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_226(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

bool func_227()
{
	return Global_1312416;
}

bool func_228(int iParam0)
{
	return func_214(iParam0, 20);
}

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/] != -1;
	}
	return 0;
}

bool func_230()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 5;
}

int func_231(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_257.f_4 != 0 || Global_2417071[iParam0 /*306*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_232()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

int func_233(int iParam0)
{
	if (func_234(iParam0, 1))
	{
		if (Global_1587175[iParam0 /*410*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_207(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6081 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_239(unk_0xA34E7C2A5118D638(), 85))
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
		if (Global_262145.f_4862 == 1)
		{
			return 1;
		}
	}
	if (func_238() || func_237())
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
			if (func_236())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0xDCC86F723E82125E(Global_1573869[iVar1], iVar0);
}

int func_236()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1632, 23))
	{
		return 1;
	}
	if (func_238())
	{
		return 1;
	}
	if (func_237())
	{
		return 1;
	}
	uVar0 = Global_1347607[func_226(-1)];
	if (unk_0xDCC86F723E82125E(uVar0, 7))
	{
		unk_0x59A0729D503ED758(&(Global_2458121.f_1632), 23);
		return 1;
	}
	return 0;
}

bool func_237()
{
	return Global_1315899;
}

bool func_238()
{
	return Global_1315901;
}

bool func_239(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_242())
	{
		return 0;
	}
	if (func_241())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_240(iParam1);
	iVar1 = uVar0;
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_321, iVar1);
}

int func_240(int iParam0)
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

bool func_241()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_132, 3);
}

int func_242()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_238())
	{
		return 1;
	}
	if (func_237())
	{
		return 1;
	}
	return func_225(120, -1);
}

bool func_243(int iParam0)
{
	var uVar0;
	
	uVar0 = func_244(2453, -1, 0);
	return unk_0xDCC86F723E82125E(uVar0, iParam0);
}

int func_244(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_226(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_245()
{
	bool bVar0;
	
	if (!func_658())
	{
		if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
	{
		if (func_106() == 2)
		{
			return 0;
		}
	}
	if (!func_658())
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[0]))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_98.f_15 != false;
			}
			else
			{
				bVar0 = Local_98.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0xDCC86F723E82125E(Local_98.f_3, 9);
	}
	if (!func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		if (bVar0 && !func_194())
		{
			if (func_658())
			{
				if (!func_252("UW_ABTSC"))
				{
					func_246("UW_ABTSC", 0);
				}
			}
			else if (!func_252("UW_ABTS"))
			{
				func_246("UW_ABTS", 0);
			}
		}
		else if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
		{
			func_7();
		}
	}
	return bVar0;
}

void func_246(char* sParam0, bool bParam1)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (func_250(sParam0))
	{
		return;
	}
	func_8();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_249();
	func_248(bParam1);
	func_247();
}

void func_247()
{
	unk_0x59A0729D503ED758(&(Global_1312577.f_56), 1);
}

void func_248(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0x77621132305B133B(&(Global_1312577.f_56), 0);
}

void func_249()
{
	Global_1312577.f_8 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 86400000);
	Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
}

bool func_250(char* sParam0)
{
	if (!func_13())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_251(uParam0);
	}
	if (unk_0xB8A06E7E729EED0A(uParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10));
}

bool func_251(char* sParam0)
{
	if (!func_13())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

int func_252(char* sParam0)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	if (!func_13())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x7FB2AC00554ED7D4(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return 0;
	}
	return func_250(sParam0);
}

void func_253(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	bool bVar9;
	
	Var1 = { func_372() };
	StringCopy(&Var5, "UW_TM", 16);
	bVar9 = false;
	if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1535[iVar0 /*47*/] = -1;
			Local_1535[iVar0 /*47*/].f_1 = func_25();
			Local_1535[iVar0 /*47*/].f_9 = 0;
			Local_1535[iVar0 /*47*/].f_30 = -1;
			if (Local_98.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1535[iVar0 /*47*/].f_1 = Local_98.f_465[iVar0 /*4*/].f_2;
				Local_1535[iVar0 /*47*/].f_9 = Local_98.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_371())
			{
				if (Local_3040.f_103 != 129)
				{
					Local_3040.f_103 = 129;
				}
				else
				{
					func_199(1, 129);
				}
			}
		}
		else if (Local_3040.f_103 != 129)
		{
			Local_3040.f_103 = 129;
		}
		func_258(&Local_1535, &uLocal_1534, 23, &Local_3040, &uLocal_3149, -1, 0);
		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 1)
		{
			if (Local_1535[0 /*47*/].f_1 != unk_0xA34E7C2A5118D638())
			{
				if (Local_98.f_465[0 /*4*/].f_1 > 0)
				{
					func_257();
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
			Local_1535[iVar0 /*47*/] = -1;
			Local_1535[iVar0 /*47*/].f_1 = func_25();
			Local_1535[iVar0 /*47*/].f_9 = 0;
			Local_1535[iVar0 /*47*/].f_30 = -1;
			if (Local_98.f_465[iVar0 /*4*/].f_1 > -1)
			{
				StringIntConCat(&Var5, Local_98.f_465[iVar0 /*4*/] + 1, 16);
				Local_1535[iVar0 /*47*/].f_37 = { Var5 };
				Local_1535[iVar0 /*47*/].f_1 = unk_0x20A20BF765914E37(Local_98.f_465[iVar0 /*4*/].f_2);
				StringCopy(&(Local_1535[iVar0 /*47*/].f_41), "", 16);
				Local_1535[iVar0 /*47*/].f_45 = Local_98.f_465[iVar0 /*4*/].f_1;
				Local_1535[iVar0 /*47*/].f_9 = Local_98.f_465[iVar0 /*4*/].f_1;
				Local_1535[iVar0 /*47*/].f_2 = Local_98.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_254();
		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 1)
		{
			if (Local_98.f_594[0 /*4*/] > 0)
			{
				if (Local_98.f_594[0 /*4*/] != Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9)
				{
					if (Local_98.f_256[Local_98.f_594[0 /*4*/]] > 0)
					{
						func_257();
					}
				}
			}
		}
		func_258(&Local_1535, &uLocal_1534, 23, &Local_3040, &uLocal_3149, -1, 1);
		if (bParam0)
		{
			if (!func_371())
			{
				if (Local_3040.f_103 != 129)
				{
					Local_3040.f_103 = 129;
				}
				else
				{
					func_199(1, 129);
				}
			}
		}
		else if (Local_3040.f_103 != 129)
		{
			Local_3040.f_103 = 129;
		}
	}
}

void func_254()
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
	
	uLocal_3674[0] = Local_98.f_594[0 /*4*/];
	uLocal_3674[1] = Local_98.f_594[1 /*4*/];
	uLocal_3674[2] = Local_98.f_594[2 /*4*/];
	uLocal_3674[3] = Local_98.f_594[3 /*4*/];
	iVar3 = Local_98.f_594[0 /*4*/];
	iVar4 = Local_98.f_594[1 /*4*/];
	iVar5 = Local_98.f_594[2 /*4*/];
	iVar6 = Local_98.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_98.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_98.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_98.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_98.f_266[iVar6];
	}
	uLocal_3679[0] = uVar7;
	uLocal_3679[1] = uVar8;
	uLocal_3679[2] = uVar9;
	uLocal_3679[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0xEE9C884FC3CB6070())
	{
		iVar2 = func_256(uLocal_3674[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1535[iVar2 /*47*/].f_9 = Local_98.f_594[iVar0 /*4*/].f_1;
		}
		func_255(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3679[iVar0])
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

void func_255(int iParam0, int iParam1)
{
	struct<47> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1535[iParam1 /*47*/] };
	Local_1535[iParam1 /*47*/] = { Local_1535[iParam0 /*47*/] };
	Local_1535[iParam0 /*47*/] = { Var0 };
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0xEE9C884FC3CB6070() - 1))
	{
		if (iParam0 == Local_1535[iVar0 /*47*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0xEE9C884FC3CB6070();
		}
		iVar0++;
	}
	return iVar1;
}

void func_257()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 19);
}

void func_258(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_370(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_368() || iParam2 == 24)
	{
		if (func_329(uParam1, iParam2, uParam3, Global_1573681, 0, func_373()))
		{
			func_328(1);
			if ((!func_326() && !func_324()) || unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
			{
				if (func_323())
				{
					func_320();
				}
				else
				{
					unk_0xF799955FDE53592F(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_319(1);
						Global_1573681 = 0;
						iVar54 = -1;
						if (Global_1573829 != 1)
						{
							func_318(uParam1);
							if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
							{
								unk_0x77621132305B133B(&(uParam3->f_33), 7);
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
								if (func_748(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((unk_0x139A9C4D61DFD52E(iVar35, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar35 /*306*/].f_232 != -1) || func_317(iVar35))
										{
											iVar44 = iVar35;
											if (func_316(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_313(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_311(unk_0xA34E7C2A5118D638(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_309())
							{
								if (func_748(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
								}
								else
								{
									iVar35 = func_25();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_308(iVar35) && func_304(iVar35, iParam2)) && func_748(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
								Var38 = { func_299(iVar35) };
								if (iVar35 == unk_0xA34E7C2A5118D638())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x74C5CB21CF9F1178(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_293(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
								}
								Global_1573681++;
								if ((iParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*47*/])->f_22;
								}
								if ((iParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (iParam0[iVar52 /*47*/])->f_30;
								}
								if ((iParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (iParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (iParam0[iVar52 /*47*/])->f_9;
								if (((iParam0[iVar52 /*47*/])->f_9 != -1 || (iParam0[iVar52 /*47*/])->f_22 != -1f) || (iParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_309())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_288(&iVar43, &fVar45, (iParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_287(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_282(iVar35, 0);
								if (bVar34)
								{
									if (func_281(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_280(iParam5))
								{
									func_279(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*47*/])->f_37), &((iParam0[iVar52 /*47*/])->f_41), (iParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_279(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*47*/])->f_37), &((iParam0[iVar52 /*47*/])->f_41), (iParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x59A0729D503ED758(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x20A20BF765914E37(iVar52);
							if (func_748(iVar35, 0, 1) && !unk_0xDCC86F723E82125E(iVar49, iVar35))
							{
								iVar35 = unk_0x20A20BF765914E37(iVar52);
							}
							else
							{
								iVar35 = func_25();
							}
							if (func_308(iVar35))
							{
								if (func_748(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
									Var38 = { func_299(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_293(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
									}
									Global_1573681++;
									iVar51 = func_282(iVar35, 1);
									if (bVar34)
									{
										if (func_281(iVar35, 1))
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
									func_271(unk_0x74C5CB21CF9F1178(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							func_268(uParam3, uParam1);
						}
						func_100(&(uParam3->f_21));
						func_267();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 7))
						{
							func_266(uParam3, uParam1);
							func_265(uParam1, 0, 1);
							unk_0x59A0729D503ED758(&(uParam3->f_33), 7);
						}
						func_266(uParam3, uParam1);
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							unk_0x59A0729D503ED758(&(uParam3->f_33), 11);
						}
						if (func_261(uParam3))
						{
							Global_1573829 = 1;
						}
						func_259(uParam3);
						if (Global_1573829 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573829 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xF518F3C7FACD43B7(*uParam1))
					{
						unk_0x7F1F2564B5CE06AF(7);
						unk_0x06D856499865F31F(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F1F2564B5CE06AF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_267();
			func_319(0);
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 7);
			}
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 10))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xFA99CE7438CDE58B();
}

void func_259(var uParam0)
{
	if (!func_20(&(uParam0->f_21)))
	{
		func_18(&(uParam0->f_21), 0, 0);
	}
	else if (func_17(&(uParam0->f_21), 250, 0))
	{
		func_100(&(uParam0->f_21));
		func_260(0);
	}
}

void func_260(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573829 != 2)
		{
			Global_1573829 = 2;
		}
	}
	else
	{
		switch (Global_1573829)
		{
			case 0:
				Global_1573829 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_261(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x20A20BF765914E37(uParam0->f_37);
	if (iVar15 != func_25() && func_748(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_264(uParam0, uParam0->f_37);
		if (func_263(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_262(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_262(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_262(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_262(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x186143F44A45035A(&Var2))
						{
							iVar16 = 1;
							func_262(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_262(uParam0, iVar0, 0);
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

void func_262(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xB622E0FF38C89E7E(&uParam0, 13);
}

var func_264(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_265(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7C38F93AF52620B1(*uParam0, "COLLAPSE"))
	{
		unk_0x0139C89EE907A315(iParam1);
		unk_0xD013AC29829DDC02();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_266(var uParam0, var uParam1)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_33, 10))
	{
		unk_0x7C38F93AF52620B1(*uParam1, "SET_HIGHLIGHT");
		unk_0x65960B4E2ADC9F6D(uParam0->f_35);
		unk_0xD013AC29829DDC02();
		unk_0x59A0729D503ED758(&(uParam0->f_33), 10);
	}
}

void func_267()
{
	if (Global_1573829 != 0)
	{
		Global_1573829 = 0;
	}
}

void func_268(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar0);
		if (iVar2 != func_25())
		{
			if (func_748(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_270(uParam0->f_38[iVar0 /*2*/], 0);
					func_269(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587175[iVar0 /*410*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_269(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "SET_ICON"))
		{
			unk_0x65960B4E2ADC9F6D(iParam1);
			unk_0x65960B4E2ADC9F6D(iParam2);
			if (iParam2 == 65)
			{
				unk_0x65960B4E2ADC9F6D(iParam3);
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

int func_270(int iParam0, bool bParam1)
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

void func_271(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_278() && iParam3 < func_277())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7C38F93AF52620B1(*uParam1, sVar1))
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_276("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(iParam9);
			}
			func_276(sParam0);
			unk_0x65960B4E2ADC9F6D(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_276("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(65);
			}
			unk_0x65960B4E2ADC9F6D(-1);
			func_276("");
			if (uParam2->f_108 == 6)
			{
				func_276("");
			}
			else
			{
				func_276(&sParam4);
			}
			unk_0x0139C89EE907A315(uParam2->f_36);
			unk_0x36D5E26AC42570A3(sParam8);
			unk_0x36D5E26AC42570A3(sParam8);
			if (func_275(uParam2))
			{
				func_274("DPAD_FRIEND");
			}
			else if (func_273(uParam2))
			{
				func_274("DPAD_FRIEND");
			}
			else if (func_272(uParam2))
			{
				func_274("DPAD_CREW");
			}
			else
			{
				func_274("");
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

bool func_272(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 6);
}

bool func_273(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 5);
}

void func_274(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

int func_275(var uParam0)
{
	if (func_273(uParam0) && func_272(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_276(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(sParam0);
}

int func_277()
{
	int iVar0;
	
	if (Global_1573683)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_278()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573683)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_279(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_278() && iParam2 < func_277())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573683)
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
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			if (unk_0x7C38F93AF52620B1(*uParam0, sVar1))
			{
				unk_0x65960B4E2ADC9F6D(iParam2);
				if (unk_0xDCC86F723E82125E(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_276("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					func_274(sParam15);
				}
				else
				{
					func_276(&(uParam1->f_1));
				}
				unk_0x65960B4E2ADC9F6D(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_276("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(65);
				}
				if (iParam11 == 1)
				{
					unk_0x65960B4E2ADC9F6D(iVar0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(-1);
				}
				if (func_309())
				{
					func_276("");
				}
				else if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 5 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if ((uParam1->f_108 == 7 && !unk_0xB8A06E7E729EED0A(sParam15)) && !unk_0xB8A06E7E729EED0A(sParam16))
				{
					unk_0x276F16E002D00C0C("FM_AE_TWO_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0xCE59E3E42586D52D(sParam16);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 8 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
				{
					unk_0x276F16E002D00C0C("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x36E8D9048E194806(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6DC80A902A91958F(iParam9);
					}
					unk_0xCE59E3E42586D52D(&(uParam1->f_104));
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x276F16E002D00C0C("FM_AE_CASH");
					unk_0x5CDA8F588F01C361(iParam9, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
					{
						func_274(&(uParam1->f_104));
					}
					else
					{
						func_276("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam13, 6);
					unk_0x354E2E7AA52E941F();
				}
				else if (fParam12 != -1f)
				{
					unk_0x276F16E002D00C0C("NUMBER");
					unk_0x36E8D9048E194806(fParam12, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam9 != -1)
				{
					unk_0x65960B4E2ADC9F6D(iParam9);
				}
				else
				{
					func_276("");
				}
				if (uParam1->f_108 == 6)
				{
					func_276("");
				}
				else
				{
					func_276(&sParam3);
				}
				unk_0x0139C89EE907A315(uParam1->f_36);
				if (iParam11 == 1 || unk_0xB8A06E7E729EED0A(sParam7))
				{
					func_276("");
					func_276("");
				}
				else
				{
					unk_0x36D5E26AC42570A3(sParam7);
					unk_0x36D5E26AC42570A3(sParam7);
				}
				if (func_275(uParam1))
				{
					func_274("DPAD_FRIEND");
				}
				else if (func_273(uParam1))
				{
					func_274("DPAD_FRIEND");
				}
				else if (func_272(uParam1))
				{
					func_274("DPAD_CREW");
				}
				else
				{
					func_274("");
				}
				unk_0xD013AC29829DDC02();
			}
		}
	}
}

int func_280(int iParam0)
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

bool func_281(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_316(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_25();
}

int func_282(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_229(iParam0)) && !func_228(iParam0))
	{
		iVar0 = func_286();
	}
	iVar1 = func_285(iParam0);
	if (!iVar1 == -1)
	{
		return func_283(iVar1);
	}
	return iVar0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = func_284(iParam0);
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

var func_284(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_285(int iParam0)
{
	if (!iParam0 == func_25())
	{
		if (func_281(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_286()
{
	return 21;
}

char* func_287(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xC3D849E6E05C31A7())
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
			if (unk_0xC3D849E6E05C31A7())
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

int func_288(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_292(iParam3))
	{
		*fParam1 = (func_289(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_280(iParam3))
	{
		*fParam1 = (func_289(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_289(int iParam0, int iParam1)
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
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_291(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_290(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_290(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_291(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_292(int iParam0)
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

int func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = func_296(iParam0);
	if (iVar0 == -1)
	{
		func_294(iParam0, 1);
		return 0;
	}
	Global_1348409[iVar0 /*5*/].f_4 = 1;
	return Global_1348409[iVar0 /*5*/].f_2;
}

void func_294(int iParam0, bool bParam1)
{
	if (!func_748(iParam0, 0, 1))
	{
		return;
	}
	if (func_296(iParam0) != -1)
	{
		return;
	}
	if (Global_1348572)
	{
		if (iParam0 == Global_1348572.f_1)
		{
			return;
		}
	}
	if (func_295(iParam0))
	{
		return;
	}
	if (Global_1348610 >= 32)
	{
		return;
	}
	Global_1348577[Global_1348610] = iParam0;
	Global_1348610++;
	if (bParam1)
	{
	}
}

int func_295(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348610)
	{
		if (Global_1348577[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_296(int iParam0)
{
	int iVar0;
	
	if (!func_748(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348570 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348570)
	{
		if (Global_1348409[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x09EE7867D5A6100E(Global_1348409[iVar0 /*5*/].f_2) && unk_0x1A48755EDAA1BFA6(Global_1348409[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_297(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_297(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348570)
	{
		return;
	}
	if (unk_0x09EE7867D5A6100E(Global_1348409[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348409[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xC607197AF4E3A5B7(Global_1348409[iParam0 /*5*/].f_2), 64);
			unk_0xE0F13AAF9FB19B4B(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0AF52A8B5613FE81(Global_1348409[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348570)
	{
		Global_1348409[iVar32 /*5*/] = { Global_1348409[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_298(&(Global_1348409[iVar32 /*5*/]));
	Global_1348570 = (Global_1348570 - 1);
}

void func_298(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_25();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uParam0->f_3 = unk_0x2AA13A84EE2D3B24();
	}
}

struct<4> func_299(int iParam0)
{
	struct<4> Var0;
	
	if (func_748(iParam0, 0, 1))
	{
		Global_2457104 = { func_62(iParam0) };
		if (unk_0xF7FE713C9F786F8C())
		{
			if (func_263(Global_2457104))
			{
				if (!unk_0x3084526A863D7966(&Global_2457104))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE028438B8B6A57B6(0))
		{
			return Var0;
		}
		if (func_303(&Global_2457104))
		{
			Global_2457034 = { func_301(iParam0) };
			func_300(&Global_2457034, &Var0);
		}
	}
	return Var0;
}

void func_300(var uParam0, var uParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, uParam1);
}

struct<35> func_301(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_302(iParam0))
	{
		return Global_1315945[unk_0xA34E7C2A5118D638() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x59E0C66A4FA07806(&Var13, 35, &Var0);
	return Var13;
}

int func_302(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return 1;
	}
	return 0;
}

int func_303(var uParam0)
{
	if (unk_0x5AA202D345A0E889())
	{
		if (unk_0x14F2268F2CD21E48() && unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_196(iParam0) || func_307(iParam0)) || func_195(iParam0))
		{
			return 0;
		}
	}
	if (!func_306(iParam0))
	{
		return 0;
	}
	if ((!func_305(iParam0) && Global_2417071[iParam0 /*306*/].f_232 == -1) && !func_317(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0)
{
	if (func_748(iParam0, 0, 1))
	{
		if (func_748(unk_0xA34E7C2A5118D638(), 0, 1))
		{
			if (unk_0x139A9C4D61DFD52E(iParam0, unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_306(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_128, 22);
}

int func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10) || unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9));
	}
	return 0;
}

int func_308(int iParam0)
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
		if (unk_0xDCC86F723E82125E(Global_1587175[iVar0 /*410*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_309()
{
	switch (func_184(unk_0xA34E7C2A5118D638()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_228(unk_0xA34E7C2A5118D638()))
	{
		switch (func_310(unk_0xA34E7C2A5118D638()))
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

int func_310(int iParam0)
{
	if (func_223(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_28;
	}
	return -1;
}

int func_311(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 && func_312(Global_1608811[iParam0 /*109*/].f_9.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1)
	{
		if (func_312(Global_1608811[iParam0 /*109*/].f_9.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_312(int iParam0)
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
	return 0;
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_748(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			iVar1 = unk_0x20A20BF765914E37(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((unk_0x139A9C4D61DFD52E(iVar1, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar1 /*306*/].f_232 != -1) || func_317(iVar1))
				{
					if (func_314(iVar1, iParam1, 0))
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

int func_314(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_25())
	{
		if (!bParam2)
		{
			if (func_315(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608811[iParam0 /*109*/].f_9 != func_25())
		{
			return iParam1 == Global_1608811[iParam0 /*109*/].f_9;
		}
	}
	return 0;
}

int func_315(int iParam0, int iParam1)
{
	if (iParam1 != func_25())
	{
		if (iParam0 != func_25())
		{
			if (Global_1608811[iParam0 /*109*/].f_9 != func_25())
			{
				if (Global_1608811[iParam0 /*109*/].f_9 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_25())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

bool func_317(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_177 != 0;
}

void func_318(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x65960B4E2ADC9F6D(0);
		unk_0xD013AC29829DDC02();
	}
}

void func_319(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338608.f_2 == 0)
		{
			Global_1338608.f_2 = 1;
		}
	}
	else if (Global_1338608.f_2 == 1)
	{
		Global_1338608.f_2 = 0;
	}
}

void func_320()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
	{
		if (func_322())
		{
			func_321();
		}
	}
}

void func_321()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 != 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_322()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

int func_323()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0) && func_322())
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1) && func_322())
	{
		return 1;
	}
	return 0;
}

int func_324()
{
	if (func_322())
	{
		if (func_325(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
			return 1;
		
		default:
	}
	return 0;
}

int func_326()
{
	if (func_322())
	{
		if (func_327(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0)
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

void func_328(int iParam0)
{
	Global_1338608.f_1 = Global_1338608;
	Global_1338608 = iParam0;
}

int func_329(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_367(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_366();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_365())
		{
			if (func_364() > 0 && Global_1573683)
			{
				unk_0x7662B6FB19655462();
				unk_0x416AE03EAAA9AE80(fVar7);
				unk_0x68A38902ADFD05FE(18);
				if (unk_0xB45DF29A98EEAD5D())
				{
					unk_0x0CD0751316BC99F7();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_353())
		{
			func_352(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
	{
		func_352(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_20(&(uParam2->f_19)))
	{
		if (func_364() == 1)
		{
			func_351(bVar6, uParam0, 0);
			func_18(&(uParam2->f_19), 0, 0);
			func_352(uParam0, uParam2, 0);
		}
	}
	if (func_20(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xB45DF29A98EEAD5D())
		{
			unk_0x0CD0751316BC99F7();
		}
		if (func_17(&(uParam2->f_19), 10000, 0) || (func_364() == 0 && !bParam5))
		{
			func_352(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_350();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x7662B6FB19655462();
				}
				unk_0x68A38902ADFD05FE(18);
			}
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 0))
			{
				Global_1573681 = uParam3;
				Global_1573680 = 1;
				unk_0x416AE03EAAA9AE80(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573682)
					{
						unk_0x77621132305B133B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_350();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x7662B6FB19655462();
					}
					unk_0x68A38902ADFD05FE(18);
				}
				unk_0x416AE03EAAA9AE80(fVar7);
				if (func_351(bVar6, uParam0, 0))
				{
					func_318(uParam0);
					uVar4 = func_348(iParam1, &(Global_1613622.f_68795), bParam4);
					if (bParam4)
					{
						func_345(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_340(uParam0, func_342(uParam2), func_341(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_337(uParam0, func_339(), func_338(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573682;
						func_345(uParam0, uVar4, "", 0, -1, Global_1573682, 1);
					}
					else
					{
						Var0 = { func_335(iParam1) };
						iVar8 = func_330(iParam1);
						func_345(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x59A0729D503ED758(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_334())
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
			if (func_333(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 20;
			}
			if (func_332(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_331(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_331(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 4;
}

bool func_332(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

bool func_333(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_334()
{
	return Global_1613622.f_1 == 0;
}

struct<4> func_335(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_336(unk_0xA34E7C2A5118D638()) || func_331(unk_0xA34E7C2A5118D638()))
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
			StringIntConCat(&Var0, Global_1613622.f_22, 16);
			break;
	}
	return Var0;
}

bool func_336(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 5;
}

void func_337(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_274(sParam1);
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_274("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_338()
{
	switch (func_310(unk_0xA34E7C2A5118D638()))
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

char* func_339()
{
	switch (func_310(unk_0xA34E7C2A5118D638()))
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
	}
	return "";
}

void func_340(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(uParam2))
		{
			func_274(uParam1);
		}
		else if (func_184(unk_0xA34E7C2A5118D638()) == 133)
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT_C");
			unk_0xCE59E3E42586D52D(uParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_274("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_341(var uParam0)
{
	int iVar0;
	
	iVar0 = func_184(unk_0xA34E7C2A5118D638());
	if (func_371())
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
			switch (func_183())
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

char* func_342(var uParam0)
{
	int iVar0;
	
	iVar0 = func_184(unk_0xA34E7C2A5118D638());
	if (func_371())
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
			if (func_344() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_344() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_183())
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
			if (func_343() == 1)
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

int func_343()
{
	return Global_2458121.f_4638;
}

int func_344()
{
	if (func_184(unk_0xA34E7C2A5118D638()) == 132)
	{
		return Global_2458121.f_4633;
	}
	return -1;
}

void func_345(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_276(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x276F16E002D00C0C(uParam1);
			unk_0x6DC80A902A91958F(iParam5);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_274(sParam1);
		}
		if (func_365() && iParam6)
		{
			if (func_347())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x276F16E002D00C0C("LBD_DPD_CNT");
			unk_0x6DC80A902A91958F(iVar0);
			unk_0x6DC80A902A91958F(iVar1);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_274(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam4);
			if (func_346(unk_0xA34E7C2A5118D638()))
			{
				unk_0x65960B4E2ADC9F6D(166);
			}
		}
		unk_0xD013AC29829DDC02();
	}
}

int func_346(int iParam0)
{
	if (func_333(iParam0) || func_332(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_347()
{
	return Global_1573683;
}

char* func_348(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_349();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB8A06E7E729EED0A(uParam1))
	{
		if (Global_1573847 == 1)
		{
			Global_1573847 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
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

char* func_349()
{
	if (unk_0x94D4FEDA7822E39D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x59F25675A261768C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6CD7F99044C6563E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x70620CD9F8A7C758())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_350()
{
	Global_36522 = 1;
}

bool func_351(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_matchmaking_card");
	}
	return unk_0xF518F3C7FACD43B7(*uParam1);
}

void func_352(var uParam0, var uParam1, bool bParam2)
{
	unk_0x77621132305B133B(&(uParam1->f_33), 7);
	Global_1573681 = 0;
	func_267();
	Global_1573680 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_20(&(uParam1->f_19)))
		{
			func_100(&(uParam1->f_19));
		}
	}
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0xEF145906684E3D72(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam1->f_33, 0))
	{
		unk_0x77621132305B133B(&(uParam1->f_33), 0);
	}
	unk_0x416AE03EAAA9AE80(0f);
}

int func_353()
{
	if (func_363())
	{
		return 0;
	}
	if (func_230())
	{
		return 0;
	}
	if (!func_361())
	{
		return 0;
	}
	if (!func_205())
	{
		return 0;
	}
	if (func_360(8, -1))
	{
		return 0;
	}
	if (func_364() == 2)
	{
		return 0;
	}
	if (Global_2458121.f_4397)
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	else if (!func_234(unk_0xA34E7C2A5118D638(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_359(1) || func_357(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (func_355(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (Global_1710055)
	{
		return 0;
	}
	if (func_354(0))
	{
		return 0;
	}
	return 1;
}

bool func_354(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4648.f_16, iParam0);
}

int func_355(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_356())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_356()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

int func_357(bool bParam0)
{
	if (unk_0x5E9D81C7387C86AE())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (func_358(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0139E142C27412BC(0, 25) || unk_0x0139E142C27412BC(0, 68))
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
	if (unk_0x0139E142C27412BC(0, 19) || (!bParam0 && unk_0x69ED83B6DEBA60F9(0, 19)))
	{
		return 1;
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (((unk_0x0139E142C27412BC(0, 166) || unk_0x0139E142C27412BC(0, 167)) || unk_0x0139E142C27412BC(0, 168)) || unk_0x0139E142C27412BC(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x69ED83B6DEBA60F9(0, 166) || unk_0x69ED83B6DEBA60F9(0, 167)) || unk_0x69ED83B6DEBA60F9(0, 168)) || unk_0x69ED83B6DEBA60F9(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C0EF9FA1B336D64())
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_359(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_360(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

int func_361()
{
	if (func_362())
	{
		return 1;
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 0;
	}
	if (unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240())
	{
		return 0;
	}
	if (unk_0x0B7B1F8E572996A4())
	{
		return 0;
	}
	return 1;
}

bool func_362()
{
	return Global_1312438;
}

bool func_363()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_364()
{
	return Global_1338611.f_68;
}

int func_365()
{
	if (Global_1573682 > 16)
	{
		return 1;
	}
	return 0;
}

float func_366()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5EC483EC6D05F31E()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_367(int iParam0)
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

int func_368()
{
	if (func_373())
	{
		return 1;
	}
	if (func_195(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_371())
	{
		return 1;
	}
	if (func_229(unk_0xA34E7C2A5118D638()))
	{
		switch (func_184(unk_0xA34E7C2A5118D638()))
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
				if (!func_369(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_369(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_369(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 4);
}

int func_370(int iParam0)
{
	if ((iParam0 == 24 && func_229(unk_0xA34E7C2A5118D638())) && !func_228(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_223(unk_0xA34E7C2A5118D638(), 0) && func_228(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
		if (func_212(unk_0xA34E7C2A5118D638()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_371()
{
	return Global_1587174;
}

struct<4> func_372()
{
	struct<4> Var0;
	
	switch (Local_98.f_27)
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

int func_373()
{
	if (func_374(unk_0xA34E7C2A5118D638()))
	{
		return Global_1318847;
	}
	return 0;
}

int func_374(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x1E3906AEA0BF5747(iParam0);
		}
	}
	return 0;
}

void func_375()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	switch (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17)
	{
		case 0:
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 == 0)
			{
				if (Local_98.f_241 == 0)
				{
					func_663();
				}
			}
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 22))
			{
				if (Local_98.f_27 == joaat("rhino") && Local_98.f_29 == 2)
				{
					func_632(Local_98.f_30[0 /*3*/]);
					unk_0x59A0729D503ED758(&iLocal_1309, 22);
				}
				else if (!func_65(Local_98.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_632(Local_98.f_30[0 /*3*/]);
					unk_0x59A0729D503ED758(&iLocal_1309, 22);
				}
			}
			func_631();
			func_625();
			if (Local_98.f_241 == 0)
			{
				func_622(1);
			}
			func_621(0);
			if (Local_98.f_241 == 0)
			{
				if (!Local_98.f_27 == joaat("hydra") && !Local_98.f_27 == joaat("rhino"))
				{
					func_190();
				}
				else if (func_658())
				{
					func_190();
				}
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
				{
					if (!unk_0xDCC86F723E82125E(iLocal_1310, 1))
					{
						func_620(129);
						func_598(1);
						unk_0x59A0729D503ED758(&iLocal_1310, 1);
						unk_0x3FAC4C670EE704C9(0);
					}
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 6))
					{
						if (Local_98.f_28 > 1 || (Local_98.f_28 == 1 && func_106() > 1))
						{
							if (unk_0xDCC86F723E82125E(Local_98.f_3, 4))
							{
								Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 = 0;
								unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0xDCC86F723E82125E(iLocal_1310, 1))
				{
					unk_0x77621132305B133B(&iLocal_1310, 1);
					func_597();
					func_596();
					func_598(0);
				}
			}
			if (Local_98.f_241 == 1)
			{
				func_595(&iVar4, &uVar5);
				iLocal_3575 = iVar4;
				func_594(0);
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
				{
					if (!func_593())
					{
						unk_0x59A0729D503ED758(&iLocal_1310, 19);
					}
					if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
					{
						func_7();
					}
					unk_0x3FAC4C670EE704C9(0);
					if ((func_592("UW_MINV") || func_592("UW_TIMELA")) || func_592("UW_TIMEL"))
					{
						unk_0x9F4AA6F234E8A860(1);
					}
					func_186();
					func_582(129, 0f, 0f, 1, 1, 1, 0);
					func_579(1);
					func_578();
					unk_0xFD62177C7242216E(0.1f);
					iLocal_1319 = unk_0xECB10B5C06DD2F31();
					unk_0x60B57BC5E51D2074(0);
					func_577(1);
					func_576(1);
					if (Local_98.f_27 != joaat("rhino"))
					{
						func_559(1);
					}
					iLocal_1521 = unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288());
					unk_0xCBD60E398042F554(unk_0xC8B93D94F8954288(), iLocal_1519);
					unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
					unk_0x233432976E597324("MP_MC_START");
					unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 184, 1);
					unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 151, 0);
					func_558(0);
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 = iLocal_3575;
					if (!func_658())
					{
						func_557(62, "UW_TITLE", "UW_DESC", func_286(), -1, func_286());
					}
					else if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
					{
						func_557(62, "UW_TITLEC", "UW_DESCC", func_286(), -1, func_286());
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_556(62, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_286(), func_286());
					}
					Local_715.f_9 = unk_0x20F8506526D25CE0();
					func_558(0);
					func_554(0);
					func_18(&uLocal_3613, 0, 0);
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 1;
				}
				else
				{
					func_186();
					if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
					{
						func_7();
					}
					if (func_551("UW_HELP1", func_553(), func_552(1)) || func_551("UW_HELP1C", func_553(), func_552(1)))
					{
						unk_0x9F4AA6F234E8A860(1);
					}
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
					func_558(0);
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 == 0)
					{
					}
					else if (!func_550())
					{
					}
				}
			}
			else if (Local_98.f_241 == 3)
			{
				func_558(0);
				if (func_551("UW_HELP1", func_553(), func_552(1)) || func_551("UW_HELP1C", func_553(), func_552(1)))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				if (!func_549())
				{
				}
				if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
				{
					func_7();
				}
				func_186();
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 3;
			}
			else if (Local_98.f_241 > 3)
			{
				if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
				{
					func_7();
				}
				func_558(0);
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
				{
					func_548();
					func_547();
					if (func_116())
					{
						func_578();
					}
				}
				if (func_658())
				{
					if (func_541(2, 0, 1, 0, 0))
					{
						if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
						{
							func_7();
						}
						func_558(0);
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
					}
				}
				else if (Local_98.f_27 == joaat("valkyrie"))
				{
					if (func_541(2, 0, 1, 0, 0))
					{
						if (func_252("UW_ABTSC") || func_252("UW_ABTS"))
						{
							func_7();
						}
						func_558(0);
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_159(1);
			func_625();
			func_492();
			func_163();
			func_490();
			func_478();
			func_253(0);
			func_474();
			func_471();
			func_548();
			func_547();
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 26))
			{
				if (!func_470(54))
				{
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
					{
						if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 10))
						{
							if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 == -1)
							{
								if (!func_658())
								{
									if (!func_252("UW_ATTK"))
									{
										func_246("UW_ATTK", 0);
									}
								}
								else if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									if (!func_252("UW_ATTK"))
									{
										func_246("UW_ATTK", 0);
									}
								}
								else if (!func_252("UW_ATTK"))
								{
									func_595(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_246("UW_ATTK", 0);
								}
							}
							else if (func_252("UW_ATTK"))
							{
								func_7();
							}
						}
					}
				}
			}
			func_469();
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
			{
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 == -1)
				{
					func_578();
				}
			}
			if (!func_748(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
				func_7();
				unk_0x59A0729D503ED758(&iLocal_1309, 21);
			}
			else if (func_176())
			{
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
				func_7();
			}
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 1)
			{
				if (!func_468())
				{
					unk_0x59A0729D503ED758(&iLocal_1309, 23);
					func_7();
					if (iLocal_3575 > -1)
					{
						if (unk_0x691BFDC1728FD714(Local_98.f_7[iLocal_3575]))
						{
							func_23(&(Local_98.f_7[iLocal_3575]));
						}
					}
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
				}
			}
			if (Local_98.f_241 == 3)
			{
				func_597();
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 3;
			}
			else if (Local_98.f_241 > 3)
			{
				func_597();
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
			}
			else if (func_658())
			{
				if (func_541(2, 0, 1, 0, 0))
				{
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_98.f_241 == 3)
			{
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 3;
			}
			else if (Local_98.f_241 > 3)
			{
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
			}
			func_407();
			if (func_549())
			{
				if (func_184(unk_0xA34E7C2A5118D638()) == 129)
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !unk_0xDA64C07A3B5D886D())
					{
						unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 398, 0);
						if (unk_0xDCC86F723E82125E(iLocal_1309, 22))
						{
							func_406();
							unk_0x77621132305B133B(&iLocal_1309, 22);
						}
						func_596();
						func_403();
						func_402(0);
						func_400(0);
						unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 184, 0);
						unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 151, 1);
						func_598(0);
						func_597();
					}
					func_399();
				}
			}
			else if (!unk_0xDCC86F723E82125E(iLocal_1310, 8))
			{
				unk_0x59A0729D503ED758(&iLocal_1310, 8);
			}
			if (!func_194())
			{
				func_398();
				func_490();
				func_159(0);
				func_478();
				func_253(1);
				func_474();
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_397();
			}
			func_392();
			func_391();
			func_492();
			if (!unk_0xDCC86F723E82125E(iLocal_1310, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar6]))
					{
						if (!func_30(Local_98.f_48[iVar6]))
						{
							unk_0xEAFC18C8453F4DA8(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar6]), unk_0xA34E7C2A5118D638(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (unk_0x691BFDC1728FD714(Local_98.f_80[iVar6]))
					{
						if (!func_30(Local_98.f_80[iVar6]))
						{
							unk_0xEAFC18C8453F4DA8(unk_0xA84D2F2B8688949A(Local_98.f_80[iVar6]), unk_0xA34E7C2A5118D638(), 0);
						}
					}
					iVar6++;
				}
				unk_0x59A0729D503ED758(&iLocal_1310, 7);
			}
			else if (Local_98.f_247 != iLocal_3573)
			{
				iLocal_3573 = Local_98.f_247;
				unk_0x77621132305B133B(&iLocal_1310, 7);
			}
			if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
			{
				unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 11);
			}
			if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 10))
			{
				unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 10);
			}
			if (unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288()) == iLocal_1519)
			{
				unk_0xCBD60E398042F554(unk_0xC8B93D94F8954288(), iLocal_1521);
			}
			break;
		
		case 3:
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 31))
			{
				if (unk_0xDCC86F723E82125E(Local_98.f_3, 12))
				{
					func_186();
					unk_0x59A0729D503ED758(&iLocal_1309, 31);
				}
			}
			func_469();
			func_386();
			if (!func_194())
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_3, 14) && !unk_0xDCC86F723E82125E(Local_98.f_3, 12))
				{
					func_253(1);
				}
				func_478();
				func_490();
				func_474();
				func_377();
			}
			func_407();
			func_391();
			func_492();
			if (Local_98.f_241 > 3)
			{
				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_704();
			break;
	}
	func_376();
}

void func_376()
{
	int iVar0;
	
	if (iLocal_3636 != Local_98.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xDCC86F723E82125E(Local_98.f_616, iVar0))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_3636, iVar0))
				{
					if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
					{
						if (unk_0xFEA25F5BCFDBD741(Local_98.f_7[iVar0]))
						{
							unk_0x0782F0CAEA719452(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 2);
							func_23(&(Local_98.f_7[iVar0]));
							unk_0x59A0729D503ED758(&iLocal_3636, iVar0);
						}
					}
					else
					{
						unk_0x59A0729D503ED758(&iLocal_3636, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_377()
{
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 14))
	{
		if (!unk_0xDCC86F723E82125E(iLocal_1310, 5))
		{
			if (func_380(0, 1, 1, 1))
			{
				if (func_658())
				{
					func_379("UW_TFEWC", 30000);
				}
				else
				{
					func_379("UW_TFEW", 30000);
				}
				func_378(1);
				unk_0x59A0729D503ED758(&iLocal_1310, 5);
			}
		}
	}
}

void func_378(int iParam0)
{
	unk_0xAC5554624B8FE548(3, 21, 200, 0, 0);
	if (iParam0 && !func_322())
	{
		unk_0xC4EE38A4CFF7544C(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_379(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam1);
}

int func_380(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xB45DF29A98EEAD5D())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (!unk_0xB66DD474AA9E764E())
	{
		return 0;
	}
	if (func_363())
	{
		return 0;
	}
	if (func_232())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_234(unk_0xA34E7C2A5118D638(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_384(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (func_383())
	{
		return 0;
	}
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (Global_1573680)
	{
		return 0;
	}
	if (func_382())
	{
		return 0;
	}
	if (func_381())
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (Global_2465403)
	{
		return 0;
	}
	return 1;
}

bool func_381()
{
	return Global_2433098.f_567;
}

bool func_382()
{
	return Global_2433098.f_717;
}

bool func_383()
{
	return Global_2426867.f_2429.f_585;
}

int func_384(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_385()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_386()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_252("UW_EXPL") && !func_252("UW_EXPLC"))
	{
		func_7();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0xDCC86F723E82125E(iLocal_1309, (27 + iVar2)))
		{
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar2]))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2])))
				{
					unk_0x59A0729D503ED758(&iLocal_1309, (27 + iVar2));
					uLocal_3576[iVar2] = unk_0x83E9D86E63672B9A();
					unk_0x90EA80826C00FB10(uLocal_3576[iVar2], "Explosion_Countdown", unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x19EF487B6B6C1F0B(uLocal_3576[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_658())
	{
		if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[0]))
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_319, 0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_7[0])))
				{
					if ((func_390() - func_120(&(Local_98.f_324), 0, 0)) >= 0)
					{
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0 || unk_0xDCC86F723E82125E(Local_98.f_3, 14))
						{
							if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_194())
								{
									func_389();
									func_165((func_390() - func_120(&(Local_98.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0 || unk_0xDCC86F723E82125E(Local_98.f_3, 14))
						{
							if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_194())
								{
									func_389();
									func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
								}
							}
						}
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
						{
							func_597();
						}
						if (unk_0xFEA25F5BCFDBD741(Local_98.f_7[0]))
						{
							unk_0xEE6504C7ECC425AB(unk_0xF8A3C382964380BC(Local_98.f_7[0]), 0);
							unk_0x7203A71F4A3F15CC(unk_0xF8A3C382964380BC(Local_98.f_7[0]), true);
							if (!unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[0]))))
							{
								unk_0xE0FE625F16A0E489(unk_0xF8A3C382964380BC(Local_98.f_7[0]), 1, 0, -1);
								func_23(&(Local_98.f_7[0]));
							}
							else
							{
								unk_0x2822BBA800F4EEE7(unk_0xF8A3C382964380BC(Local_98.f_7[0]), 1, 0, 0);
								func_23(&(Local_98.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_186();
		if (!func_194())
		{
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 12))
			{
				if (func_103(Local_98.f_7[0]))
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[0])))
						{
							if (!func_658())
							{
								if (!func_252("UW_EXPL"))
								{
									func_246("UW_EXPL", 0);
								}
							}
							else if (!func_252("UW_EXPLC"))
							{
								func_246("UW_EXPLC", 0);
							}
							unk_0x59A0729D503ED758(&iLocal_1309, 12);
						}
					}
				}
			}
			else if (func_252("UW_EXPL") || func_252("UW_EXPLC"))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
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
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar0]))
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_319, iVar0))
				{
					if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0])))
					{
						if ((func_390() - func_120(&(Local_98.f_324), 0, 0)) >= 0)
						{
							if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0 || unk_0xDCC86F723E82125E(Local_98.f_3, 14))
							{
								if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_194())
									{
										if (!bVar1)
										{
											func_389();
											func_165((func_390() - func_120(&(Local_98.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0 || unk_0xDCC86F723E82125E(Local_98.f_3, 14))
							{
								if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_194())
									{
										if (!bVar1)
										{
											func_389();
											func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
							{
								func_597();
							}
							if (func_387(Local_98.f_7[iVar0]))
							{
								if (unk_0xFEA25F5BCFDBD741(Local_98.f_7[iVar0]))
								{
									unk_0xEE6504C7ECC425AB(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
									unk_0x7203A71F4A3F15CC(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), true);
									if (!unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]))))
									{
										unk_0xE0FE625F16A0E489(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1, 0, -1);
										func_23(&(Local_98.f_7[iVar0]));
									}
									else
									{
										unk_0x2822BBA800F4EEE7(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 1, 0, 0);
										func_23(&(Local_98.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0xDCC86F723E82125E(iLocal_1309, 12))
				{
					if (func_103(Local_98.f_7[iVar0]))
					{
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
						{
							if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar0])))
							{
								if (!func_194())
								{
									if (!func_658())
									{
										if (!func_252("UW_EXPL"))
										{
											func_246("UW_EXPL", 0);
										}
									}
									else if (!func_252("UW_EXPLC"))
									{
										func_246("UW_EXPLC", 0);
									}
									unk_0x59A0729D503ED758(&iLocal_1309, 12);
								}
							}
						}
					}
				}
				else if (func_252("UW_EXPL") || func_252("UW_EXPLC"))
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
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

int func_387(var uParam0)
{
	if (unk_0xBE5036433C51E57D(uParam0))
	{
		return 1;
	}
	if (func_388(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_388(var uParam0)
{
	if (!unk_0x736DBE187CFCC863())
	{
		return 0;
	}
	if (!unk_0x691BFDC1728FD714(uParam0))
	{
		return 0;
	}
	if (func_75(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_389()
{
	Global_1339929.f_942 = 1;
}

int func_390()
{
	if (func_658())
	{
		return Global_262145.f_9284;
	}
	return Global_262145.f_9005;
}

void func_391()
{
	if (!unk_0xDCC86F723E82125E(iLocal_1310, 4))
	{
		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					func_597();
					unk_0x59A0729D503ED758(&iLocal_1310, 4);
				}
			}
		}
	}
}

void func_392()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xD9BFAEBB04416B09(iLocal_1318);
	if (unk_0x784B3253F40F728C(iVar0))
	{
		iVar1 = unk_0x8F765930684A893F(iVar0);
		if (unk_0xDF73DA5E2287C499(iVar1))
		{
			if (iLocal_1318 != unk_0x935FA14EDA695A82())
			{
				if (!unk_0xDCC86F723E82125E(iLocal_3637, iLocal_1318))
				{
					if (!func_194())
					{
						if (Local_732[iLocal_1318 /*18*/].f_17 == 1)
						{
							unk_0x59A0729D503ED758(&iLocal_3637, iLocal_1318);
							func_393(iVar1, 55, 1);
						}
					}
				}
				else if (func_194())
				{
					func_393(iVar1, 55, 0);
					unk_0x77621132305B133B(&iLocal_3637, iLocal_1318);
				}
				else if (Local_732[iLocal_1318 /*18*/].f_17 > 1)
				{
					unk_0x77621132305B133B(&iLocal_3637, iLocal_1318);
					func_393(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_1318++;
	if (iLocal_1318 >= unk_0x55191629F1199760())
	{
		iLocal_1318 = 0;
	}
}

void func_393(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_395())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_394(iParam0))
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = unk_0x46CF50E0E5A24635();
			Global_2411623.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = -1;
		}
	}
}

int func_394(int iParam0)
{
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_559[iParam0]) || Global_2411623.f_559[iParam0] == unk_0x46CF50E0E5A24635())
	{
		return 1;
	}
	return 0;
}

int func_395()
{
	switch (func_396())
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

int func_396()
{
	return Global_25115;
}

void func_397()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x6B4865E08E90ACC5(Local_1326[iVar0 /*8*/]))
		{
			unk_0x5356E82C1E5E0C44(&(Local_1326[iVar0 /*8*/]));
		}
		if (unk_0x6B4865E08E90ACC5(Local_1326[iVar0 /*8*/].f_1))
		{
			unk_0x5356E82C1E5E0C44(&(Local_1326[iVar0 /*8*/].f_1));
		}
		if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar0]))
		{
			if (!func_30(Local_98.f_48[iVar0]))
			{
				if (unk_0x4E12F93E42909E85(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0])))
				{
					func_86(&(Local_1326[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_398()
{
	if (!unk_0xDCC86F723E82125E(iLocal_1309, 11))
	{
		if (!unk_0xDCC86F723E82125E(Local_98.f_3, 6))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 13))
			{
				if (func_184(unk_0xA34E7C2A5118D638()) != 129)
				{
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
					{
						if (!func_470(64) && !func_470(65))
						{
							if (unk_0xDCC86F723E82125E(iLocal_1310, 11))
							{
								if (!unk_0xDCC86F723E82125E(iLocal_1310, 12))
								{
									if (func_380(0, 1, 1, 1))
									{
										if (func_658())
										{
											func_379("UW_HELIMC", -1);
										}
										else
										{
											func_379("UW_HELIM", -1);
										}
										func_378(1);
										unk_0x59A0729D503ED758(&iLocal_1310, 12);
									}
								}
							}
							else if (!(Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra")))
							{
								if (func_380(0, 1, 1, 1))
								{
									if (!func_658())
									{
										func_379("UW_TAVAIL", 30000);
									}
									else
									{
										func_379("UW_TAVAILC", 30000);
									}
									func_378(1);
									unk_0x59A0729D503ED758(&iLocal_1309, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_399()
{
	float fVar0;
	
	if (iLocal_3632 != 0)
	{
		return;
	}
	if (func_20(&uLocal_3613))
	{
		iLocal_3632 = func_120(&uLocal_3613, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_3632);
	fVar0 = (fVar0 / 60000f);
	iLocal_3632 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_3632 >= 1)
	{
	}
	else
	{
		iLocal_3632 = 1;
	}
	if (iLocal_3632 > Global_262145.f_9344)
	{
		iLocal_3632 = Global_262145.f_9344;
	}
}

void func_400(bool bParam0)
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
		func_401(iVar0);
		iVar0++;
	}
}

void func_401(int iParam0)
{
	Global_91158.f_156[iParam0] = 1;
	Global_91158.f_155 = 1;
}

void func_402(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

void func_403()
{
	unk_0x60B57BC5E51D2074(5);
	func_405();
	unk_0xFD62177C7242216E(1f);
	unk_0x77621132305B133B(&(Global_1573879.f_1), 8);
	func_404();
}

void func_404()
{
	if (Global_1719525)
	{
		if (unk_0xDCC86F723E82125E(Global_1719526, 0))
		{
			unk_0x77621132305B133B(&Global_2464686, 0);
		}
		if (unk_0xDCC86F723E82125E(Global_1719526, 1))
		{
			unk_0x77621132305B133B(&Global_2464686, 1);
		}
		if (unk_0xDCC86F723E82125E(Global_1719526, 5))
		{
			unk_0x77621132305B133B(&Global_2464686, 5);
		}
		if (unk_0x42277337DA18A497(-355737150))
		{
			unk_0x130F0C5AE7B52B7A(-355737150, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-580979506))
		{
			unk_0x130F0C5AE7B52B7A(-580979506, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1426452475))
		{
			unk_0x130F0C5AE7B52B7A(-1426452475, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(745417724))
		{
			unk_0x130F0C5AE7B52B7A(745417724, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1305304906))
		{
			unk_0x130F0C5AE7B52B7A(-1305304906, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1543175077))
		{
			unk_0x130F0C5AE7B52B7A(-1543175077, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-811770997))
		{
			unk_0x130F0C5AE7B52B7A(-811770997, 1, 0, 0);
		}
		Global_1719526 = 0;
	}
	Global_1719525 = 0;
}

void func_405()
{
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && Global_2458121.f_4643 < 1f)
		{
			return;
		}
	}
	Global_2458121.f_4644 = -1;
	Global_2458121.f_4643 = 1f;
}

void func_406()
{
	Global_2391046 = { 0f, 0f, 0f };
	Global_2391049 = 0;
}

void func_407()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (unk_0xDCC86F723E82125E(iLocal_1309, 13))
	{
		return;
	}
	bVar0 = unk_0xDCC86F723E82125E(Local_98.f_3, 6);
	bVar1 = unk_0xDCC86F723E82125E(iLocal_1309, 21);
	bVar2 = unk_0xDCC86F723E82125E(iLocal_1309, 23);
	bVar3 = Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_549())
	{
		if (!unk_0xDCC86F723E82125E(iLocal_1310, 17))
		{
			if (func_748(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || bVar2)
				{
					if (!func_194())
					{
						if (!func_658())
						{
							if (bVar0)
							{
								func_557(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
								{
									func_557(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (unk_0x691BFDC1728FD714(Local_98.f_7[0]) && func_103(Local_98.f_7[0]))
								{
									unk_0x59A0729D503ED758(&iLocal_1310, 11);
									unk_0x59A0729D503ED758(&iLocal_1310, 16);
									func_557(65, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_557(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_557(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || unk_0xDCC86F723E82125E(Local_98.f_3, 16))
							{
								func_557(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_557(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
							{
								if (func_467())
								{
									unk_0x59A0729D503ED758(&iLocal_1310, 11);
									unk_0x59A0729D503ED758(&iLocal_1310, 16);
									func_557(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_557(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_467())
							{
								unk_0x59A0729D503ED758(&iLocal_1310, 11);
								unk_0x59A0729D503ED758(&iLocal_1310, 16);
								func_557(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_557(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_467())
							{
								unk_0x59A0729D503ED758(&iLocal_1310, 11);
								unk_0x59A0729D503ED758(&iLocal_1310, 16);
								func_557(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_557(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || unk_0xDCC86F723E82125E(Local_98.f_3, 16))
						{
							func_557(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_466(1);
					Local_715.f_6 = (Local_715.f_6 + iVar4);
					if (!Global_262145.f_9411)
					{
						if (Local_715.f_6 > 0)
						{
							func_465(19, Local_715.f_6);
						}
					}
					Global_2443261 = iVar4;
					if (iVar4 > 0)
					{
						if (func_464())
						{
							func_455(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0x7AF7488EF897601F(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_454(1);
					Local_715.f_7 = (Local_715.f_7 + iVar10);
					func_453();
					func_408(0, unk_0xC8B93D94F8954288(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0);
					Local_715.f_5 = 2;
					unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 398, 0);
					if (!unk_0xDCC86F723E82125E(iLocal_1310, 16))
					{
						unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 8);
					}
					unk_0x59A0729D503ED758(&iLocal_1310, 17);
					unk_0x59A0729D503ED758(&iLocal_1310, 18);
				}
			}
		}
	}
}

int func_408(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_409(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_409(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_419(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x96209AADF56E8FE8(iParam1))
			{
				iVar1 = unk_0x4D3C2AC8339BFB4F(iParam1);
				func_415(unk_0xB867FC7DBA46C0F1(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_410(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_410(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_413(iParam0, 1) };
	if (iParam0 == func_412(unk_0xC8B93D94F8954288()))
	{
		func_411(1);
	}
	func_415(Var0, iParam1, 0, sParam2);
}

void func_411(int iParam0)
{
	Global_2426867.f_1322 = iParam0;
}

int func_412(int iParam0)
{
	return iParam0;
}

Vector3 func_413(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_414(unk_0xC8B93D94F8954288()) && unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
	{
		Var0 = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar3 = unk_0x59DD203239FBDCAD(iParam0);
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xE79F1883B253E5B8(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_414(int iParam0)
{
	return iParam0;
}

void func_415(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426867.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426867.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426867.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426867.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426867.f_741[iVar1 /*29*/].f_4 = func_418(Global_2426867.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426867.f_741[iVar1 /*29*/].f_7 = unk_0x2AA13A84EE2D3B24();
			Global_2426867.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426867.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426867.f_741[iVar1 /*29*/].f_9 = func_417();
			Global_2426867.f_741[iVar1 /*29*/].f_10 = func_416();
			StringCopy(&(Global_2426867.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_416()
{
	if (Global_2426867.f_1322)
	{
		Global_2426867.f_1322 = 0;
		return 1;
	}
	Global_2426867.f_1322 = 0;
	return 0;
}

var func_417()
{
	var uVar0;
	
	uVar0 = Global_2426867.f_1324;
	Global_2426867.f_1324 = 1;
	return uVar0;
}

float func_418(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4F982ED5336EA899(unk_0xE81835FB046A7978(), Param0, 1);
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

var func_419(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_420(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_420(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_452(unk_0xA34E7C2A5118D638()) || func_451(unk_0xA34E7C2A5118D638()))
	{
		if (Global_262145.f_7555 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7555;
		}
	}
	else if (Global_262145.f_5033 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5033;
	}
	if (func_168(uParam2))
	{
	}
	if (func_450())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_448(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_447(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_445(0, &iVar1);
					break;
				
				case 3:
					func_445(1, &iVar1);
					break;
				
				case 1:
					func_442(&iVar1);
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
			func_440(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_430((func_439(unk_0xA34E7C2A5118D638()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xEF84C5FA6302A771(iVar1, iParam8, iParam9);
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_2 != -1)
				{
					func_440(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_425(iVar1);
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
				func_421((func_423(unk_0xA34E7C2A5118D638()) + iVar1));
			}
			else
			{
				func_421((func_423(unk_0xA34E7C2A5118D638()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_421(int iParam0)
{
	if (func_450())
	{
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_5 = iParam0;
		func_422(joaat("mpply_globalxp"), iParam0);
	}
}

void func_422(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, 1);
	}
}

int func_423(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_748(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return func_424(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_5;
			}
		}
		else
		{
			return func_424(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_425(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0xA34E7C2A5118D638()) };
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(&Var0))
		{
			iVar13 = func_428(func_429(&Var0));
			if (iVar13 == 0)
			{
				func_427(&Global_1347498, iParam0);
				func_426(joaat("mpply_crew_local_xp_0"), Global_1347498);
			}
			else if (iVar13 == 1)
			{
				func_427(&Global_1347499, iParam0);
				func_426(joaat("mpply_crew_local_xp_1"), Global_1347499);
			}
			else if (iVar13 == 2)
			{
				func_427(&Global_1347500, iParam0);
				func_426(joaat("mpply_crew_local_xp_2"), Global_1347500);
			}
			else if (iVar13 == 3)
			{
				func_427(&Global_1347501, iParam0);
				func_426(joaat("mpply_crew_local_xp_3"), Global_1347501);
			}
			else if (iVar13 == 4)
			{
				func_427(&Global_1347502, iParam0);
				func_426(joaat("mpply_crew_local_xp_4"), Global_1347502);
			}
		}
	}
}

void func_426(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347493 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347495 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347495 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347496 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347497 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347498 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347499 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347500 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347501 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347502 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347503 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347504 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347505 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347506 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347507 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347508 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347509 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_427(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_428(int iParam0)
{
	if (iParam0 == Global_1347493)
	{
		return 0;
	}
	else if (iParam0 == Global_1347494)
	{
		return 1;
	}
	else if (iParam0 == Global_1347495)
	{
		return 2;
	}
	else if (iParam0 == Global_1347496)
	{
		return 3;
	}
	else if (iParam0 == Global_1347497)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_429(var uParam0)
{
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return Global_2441309;
		}
	}
	return Global_2441309;
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	if (func_450())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7530 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347613[func_226(-1)])
				{
					unk_0xEF84C5FA6302A771(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347613[func_226(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_438(unk_0xA34E7C2A5118D638()))
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_1 = iParam0;
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_6 = func_436(iParam0, 1);
		}
		func_435(629, iParam0, -1, 1);
		func_434(630, func_436(iParam0, 1), -1, 1);
		Global_1347613[func_226(-1)] = iParam0;
		func_431(7, 0);
	}
}

void func_431(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_433(iParam0, iParam1))
	{
		iVar0 = func_432();
		Global_2441286[iVar0] = iParam0;
	}
}

int func_432()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2441286[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_433(int iParam0, var uParam1)
{
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_434(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_226(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

void func_435(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_226(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_226(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_226(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_226(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_226(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_226(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_226(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_226(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_226(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_226(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_226(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_226(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_226(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_226(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_226(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_226(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_226(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_226(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_226(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_226(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_226(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_226(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_226(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_226(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_226(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_226(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_226(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_226(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_436(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_437(iParam0, 0);
}

int func_437(int iParam0, int iParam1)
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
		if (Global_273943[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273943[iVar3] < iParam0)
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

int func_438(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

int func_439(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return Global_1347613[func_226(-1)];
			}
			else if (func_438(iParam0))
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347613[func_226(-1)];
	}
	return 0;
}

void func_440(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_244(iParam0, func_226(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_441(iParam0))
	{
		func_434(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_435(iParam0, iVar0, iParam2, 1);
	}
}

int func_441(int iParam0)
{
	if (Global_1347492)
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
			case 3732:
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

void func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		iVar4 = unk_0xD9BFAEBB04416B09(iVar0);
		if (unk_0x784B3253F40F728C(iVar4))
		{
			iVar5 = unk_0x8F765930684A893F(iVar4);
			if (unk_0x07CBE0ED3114C7D8(iVar5) != -1)
			{
				if (unk_0x07CBE0ED3114C7D8(iVar5) == iVar1 || func_444(unk_0x07CBE0ED3114C7D8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xA34E7C2A5118D638())
					{
						if (func_63(unk_0xA34E7C2A5118D638(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_443(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_443(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_443(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_444(int iParam0, int iParam1, int iParam2)
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
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_445(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x55191629F1199760())
		{
			iVar3 = iVar0;
			if (unk_0x784B3253F40F728C(iVar3))
			{
				iVar4 = unk_0x8F765930684A893F(iVar3);
				if (func_748(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xA34E7C2A5118D638())
					{
						iVar1++;
						if (func_63(unk_0xA34E7C2A5118D638(), iVar4))
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
			if (func_748(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xA34E7C2A5118D638())
				{
					if (func_446(unk_0xA34E7C2A5118D638(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0xA34E7C2A5118D638(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_443(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_443(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_446(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_447(int iParam0)
{
	int iVar0;
	
	if (unk_0xBAEDEB596C4FA2C5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_443(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_448(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xA1836B70A59643DD(iParam0) > func_439(unk_0xA34E7C2A5118D638()))
		{
			iParam0 = -func_439(unk_0xA34E7C2A5118D638());
		}
	}
	if (func_449(8000, 0, 0) > 0)
	{
		if (func_449(8000, 0, 0) < (iParam0 + func_439(unk_0xA34E7C2A5118D638())))
		{
			iParam0 = (func_449(8000, 0, 0) - func_439(unk_0xA34E7C2A5118D638()));
		}
	}
	return iParam0;
}

int func_449(int iParam0, bool bParam1, int iParam2)
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
	return Global_273943[iParam0];
}

int func_450()
{
	return 1;
}

bool func_451(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_452(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

void func_453()
{
	Global_2442431 = 1;
}

int func_454(bool bParam0)
{
	int iVar0;
	
	if (unk_0xDCC86F723E82125E(iLocal_1310, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_658())
		{
			return Global_262145.f_9226;
		}
		else
		{
			return Global_262145.f_9165;
		}
	}
	func_399();
	if (func_658())
	{
		iVar0 = (Global_262145.f_9226 * iLocal_3632);
	}
	else
	{
		iVar0 = (Global_262145.f_9165 * iLocal_3632);
	}
	return iVar0;
}

void func_455(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_464())
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
				func_456(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_456(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_456(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_464())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x9A07DDC8D6013A35(func_16()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_463(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_462(1, iParam4);
			Global_2555081 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_457(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_457(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_458(iParam0);
	}
}

void func_458(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_464())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_461(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_459(&(Global_2554598[iParam0 /*72*/]));
	}
}

void func_459(var uParam0)
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
	func_460(&(uParam0->f_8.f_3));
	func_460(&(uParam0->f_8.f_16));
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

void func_460(var uParam0)
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

int func_461(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_462(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_463(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_464())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_464()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

void func_465(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2458121.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4983)
		{
			iParam1 = Global_262145.f_4983;
		}
		Global_2458121.f_270 = iParam1;
		Global_2458121.f_271 = 0;
	}
}

int func_466(bool bParam0)
{
	int iVar0;
	
	if (unk_0xDCC86F723E82125E(iLocal_1310, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_658())
		{
			return Global_262145.f_9225;
		}
		else
		{
			return Global_262145.f_9164;
		}
	}
	func_399();
	if (func_658())
	{
		iVar0 = (Global_262145.f_9225 * iLocal_3632);
	}
	else
	{
		iVar0 = (Global_262145.f_9164 * iLocal_3632);
	}
	return iVar0;
}

int func_467()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x691BFDC1728FD714(Local_98.f_7[iLocal_3575]))
	{
		if (func_103(Local_98.f_7[iLocal_3575]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_98.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_98.f_256[iLocal_3575];
	if (!bVar0)
	{
		if (Local_98.f_594[0 /*4*/] != iLocal_3575)
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
	else if (Local_98.f_594[0 /*4*/] == iLocal_3575)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_98.f_256[Local_98.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_98.f_255 - iVar2);
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

int func_468()
{
	int iVar0;
	var uVar1;
	
	func_595(&iVar0, &uVar1);
	if (iLocal_3575 > -1)
	{
		if (func_103(Local_98.f_7[iLocal_3575]))
		{
			return 1;
		}
	}
	return 0;
}

void func_469()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_98.f_241 == 1)
	{
		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
		{
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 == -1)
			{
				if (!func_20(&uLocal_3611) || (func_20(&uLocal_3611) && func_17(&uLocal_3611, 5000, 0)))
				{
					if (Local_98.f_27 == joaat("savage") || Local_98.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3575;
						if (iVar1 > -1)
						{
							if (func_103(Local_98.f_7[iVar1]))
							{
								iVar0 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), -1);
								if (iVar0 == 0)
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x2DC9BA2299B45EA6(iVar0))
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0xA815CBE767EFA3CB(iVar0))
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_98.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3575;
						if (iVar1 > -1)
						{
							if (func_103(Local_98.f_7[iVar1]))
							{
								iVar0 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), -1);
								if (iVar0 == 0)
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x2DC9BA2299B45EA6(iVar0))
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0xA815CBE767EFA3CB(iVar0))
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
								}
								if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0x66B735F5B005FAD7(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), iVar2);
										if (iVar0 != 0)
										{
											if (!unk_0x2DC9BA2299B45EA6(iVar0))
											{
												if (unk_0xA815CBE767EFA3CB(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_100(&uLocal_3611);
					func_18(&uLocal_3611, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0xDCC86F723E82125E(Local_98.f_319, iVar2))
		{
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar2]))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2])))
				{
					if ((func_390() - func_120(&(Local_98.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
						{
							if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), 0))
							{
								if (!func_194())
								{
									func_389();
									func_165((func_390() - func_120(&(Local_98.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
						{
							if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), 0))
							{
								if (!func_194())
								{
									func_389();
									func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
								}
							}
						}
						if (unk_0xFEA25F5BCFDBD741(Local_98.f_7[iVar2]))
						{
							unk_0xEE6504C7ECC425AB(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), 0);
							unk_0x7203A71F4A3F15CC(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), true);
							if (!unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]))))
							{
								unk_0xE0FE625F16A0E489(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), 1, 0, -1);
								func_23(&(Local_98.f_7[iVar2]));
							}
							else
							{
								unk_0x2822BBA800F4EEE7(unk_0xF8A3C382964380BC(Local_98.f_7[iVar2]), 1, 0, 0);
								func_23(&(Local_98.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 == iVar2)
			{
				if (!unk_0xDCC86F723E82125E(iLocal_1310, 6))
				{
					if (func_380(0, 1, 1, 1))
					{
						if (func_658())
						{
							if (!unk_0xDCC86F723E82125E(iLocal_1310, 19))
							{
								func_379("UW_NOPILC", 30000);
							}
							else
							{
								func_379("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_379("UW_NOPIL", 30000);
						}
						func_378(1);
						unk_0x59A0729D503ED758(&iLocal_1310, 6);
					}
					else if (unk_0xDCC86F723E82125E(iLocal_1310, 19))
					{
						if (unk_0xB45DF29A98EEAD5D())
						{
							unk_0x9F4AA6F234E8A860(1);
						}
					}
				}
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					iVar5 = Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10;
					if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar5]))
					{
						if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar5])))
						{
							if (!func_658())
							{
								if (!func_252("UW_EXPL"))
								{
									func_246("UW_EXPL", 0);
								}
							}
							else if (!func_252("UW_EXPLC"))
							{
								func_246("UW_EXPLC", 0);
							}
						}
						else if (func_252("UW_EXPL") || func_252("UW_EXPLC"))
						{
							func_7();
						}
					}
					else if (func_252("UW_EXPL") || func_252("UW_EXPLC"))
					{
						func_7();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_470(int iParam0)
{
	return Global_2426867.f_2138[0 /*72*/].f_1 == iParam0;
}

void func_471()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
	{
		if (Local_98.f_27 == joaat("rhino"))
		{
			if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
			{
				if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 10))
				{
					if (!func_20(&uLocal_3607) || (func_20(&uLocal_3607) && func_17(&uLocal_3607, 5000, 0)))
					{
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
						{
							if (func_65(Local_3633, 0f, 0f, 0f, 0))
							{
								Local_3633 = { Local_98.f_30[0 /*3*/] };
							}
							fVar0 = func_473(unk_0xC8B93D94F8954288(), Local_3633, 1);
							if (fVar0 > 750f)
							{
								unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 10);
							}
						}
						func_100(&uLocal_3607);
						func_18(&uLocal_3607, 0, 0);
					}
				}
				else if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					if (!func_252("UW_OOB"))
					{
						func_246("UW_OOB", 0);
					}
					if (!func_20(&uLocal_3609))
					{
						uVar2 = unk_0x83E9D86E63672B9A();
						unk_0x90EA80826C00FB10(uVar2, "Explosion_Countdown", unk_0xF8A3C382964380BC(Local_98.f_7[func_472()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x19EF487B6B6C1F0B(uVar2, "Time", 30f);
						func_18(&uLocal_3609, 0, 0);
					}
					if (func_20(&uLocal_3609))
					{
						if ((func_390() - func_120(&uLocal_3609, 0, 0)) >= 0)
						{
							func_389();
							func_165((func_390() - func_120(&uLocal_3609, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
						}
						else
						{
							func_389();
							func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
							func_7();
							unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 11);
						}
					}
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
					{
						fVar0 = func_473(unk_0xC8B93D94F8954288(), Local_98.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 10);
							func_100(&uLocal_3609);
							unk_0x7A2D5FC5F94932AA(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
	{
		func_597();
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			iVar1 = func_472();
			if (iVar1 > -1)
			{
				if (func_103(Local_98.f_7[iVar1]))
				{
					if (unk_0xFEA25F5BCFDBD741(Local_98.f_7[iVar1]))
					{
						unk_0xEE6504C7ECC425AB(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), 0);
						unk_0x7203A71F4A3F15CC(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), true);
						unk_0xE0FE625F16A0E489(unk_0xF8A3C382964380BC(Local_98.f_7[iVar1]), 1, 0, -1);
						func_23(&(Local_98.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_472()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar1]))
			{
				if (func_103(Local_98.f_7[iVar1]))
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar1])))
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

float func_473(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

void func_474()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(iLocal_1309, 24))
	{
		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 1)
		{
			func_595(&iVar1, &uVar0);
			if (func_477(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_98.f_22[iVar1] != func_25())
					{
						fLocal_1320 = unk_0x6579BA9E0C6DCC6B();
						unk_0x1602E178668EC9AD(-1f);
						func_476(1, iVar1);
						unk_0x59A0729D503ED758(&iLocal_1309, 24);
						func_475(1);
					}
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&iLocal_1309, 24);
				unk_0x59A0729D503ED758(&iLocal_1309, 25);
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(iLocal_1309, 25))
	{
		if (unk_0xDCC86F723E82125E(iLocal_1309, 24))
		{
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 > 1)
			{
				unk_0x1602E178668EC9AD(fLocal_1320);
				func_595(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_476(0, iVar1);
					unk_0x59A0729D503ED758(&iLocal_1309, 25);
					func_475(0);
				}
			}
		}
	}
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 15);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 4);
	}
}

void func_476(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			iVar1 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
			if (func_748(iVar1, 0, 1) && iVar1 != unk_0xA34E7C2A5118D638())
			{
				if (unk_0xDCC86F723E82125E(Local_732[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0xFFD780346339D6AB(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0xFFD780346339D6AB(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_477(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (!bVar0)
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
			{
				if (iVar1 != unk_0x935FA14EDA695A82())
				{
					if (unk_0xDCC86F723E82125E(Local_732[iVar1 /*18*/].f_1, iParam0))
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

void func_478()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE21B8C41C187AA64())
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(iLocal_1309, 15))
	{
		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 2)
		{
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 == 0)
			{
				if (Local_98.f_22[0] != func_25())
				{
					if (func_380(0, 0, 1, 1))
					{
						if (!func_658())
						{
							if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
							{
								if (!func_658())
								{
									func_489("UW_START1P", unk_0x74C5CB21CF9F1178(Local_98.f_22[0]), 1, 30000);
								}
								else
								{
									func_489("UW_START1PC", unk_0x74C5CB21CF9F1178(Local_98.f_22[0]), 1, 30000);
								}
								func_378(1);
							}
							else if (unk_0xDCC86F723E82125E(Local_98.f_15, 0))
							{
								if (!unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 14))
								{
									if (!func_658())
									{
										func_379("UW_STARTM", 30000);
									}
									else
									{
										func_379("UW_STARTMC", 30000);
									}
									func_378(1);
								}
							}
							else
							{
								func_489("UW_START1P", unk_0x74C5CB21CF9F1178(Local_98.f_22[0]), 1, 30000);
								func_378(1);
							}
						}
						else if (!unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 14))
						{
							if (!func_658())
							{
								func_379("UW_STARTM", 30000);
							}
							else
							{
								func_379("UW_STARTMC", 30000);
							}
							func_378(1);
						}
						unk_0x59A0729D503ED758(&iLocal_1309, 15);
					}
				}
			}
		}
	}
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 2)
	{
		if (Local_98.f_241 == 1)
		{
			if (Local_98.f_27 != joaat("hydra") && Local_98.f_27 != joaat("rhino"))
			{
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
				{
					if (iLocal_3575 >= 0)
					{
						if (!unk_0xDCC86F723E82125E(iLocal_1310, 10))
						{
							if (!unk_0xDCC86F723E82125E(iLocal_1310, 9))
							{
								if (unk_0x691BFDC1728FD714(Local_98.f_7[iLocal_3575]))
								{
									if (func_103(Local_98.f_7[iLocal_3575]))
									{
										unk_0x59A0729D503ED758(&iLocal_1310, 9);
									}
								}
							}
							else if (unk_0x691BFDC1728FD714(Local_98.f_7[iLocal_3575]))
							{
								if (!func_103(Local_98.f_7[iLocal_3575]))
								{
									func_488("UW_TEAMV", 1);
									unk_0x59A0729D503ED758(&iLocal_1310, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_658())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_3, 6))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_1309, (16 + iVar1)))
				{
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 >= 2)
					{
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 == 0)
						{
							if ((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2))
							{
								if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[0]))
								{
									if (func_103(Local_98.f_7[0]))
									{
										if (unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[0]), -1) != 0)
										{
											iVar0 = func_487(iVar1, 0);
											if (iVar0 != func_25())
											{
												func_479("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											unk_0x59A0729D503ED758(&iLocal_1309, (16 + iVar1));
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

int func_479(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(iParam2);
		unk_0x2DED6C1306496257(func_485(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xC754466C15BD85AC(0, 1);
		}
		else
		{
			Global_2457104 = { func_62(iParam1) };
			if (unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104))
			{
				iVar17 = 0;
				if (unk_0xF8D041B05C3D1FD4(&(Global_2457034.f_22), "Leader") && Global_2457034.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2457034.f_21 > 0)
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
						Var1 = { func_484(&Var1) };
					}
					iVar0 = unk_0xE87FCD388F3A02EF(iVar18, unk_0x4041059B7AB947DE(&Global_2457034, 35), &(Global_2457034.f_17), Global_2457034.f_30, iVar17, 0, Global_2457034, &Var1, Global_1317070, Global_1317071, Global_1317072);
				}
				else
				{
					iVar0 = unk_0xE2F4E22A9715A1BC(iVar18, unk_0x4041059B7AB947DE(&Global_2457034, 35), &(Global_2457034.f_17), Global_2457034.f_30, iVar17, 0, Global_2457034, Global_1317070, Global_1317071, Global_1317072);
				}
			}
			else
			{
				iVar0 = unk_0xC754466C15BD85AC(0, 1);
			}
		}
		func_480(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_480(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_483() || !unk_0xDC9A5ADFE0C41DD2()) || !func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = func_481(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1718883.f_5[iVar0 /*53*/] = iParam0;
		Global_1718883.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1718883.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1718883.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1718883.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1718883.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1718883.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1718883 - 1))
	{
		if (iParam0 > Global_1718883.f_5[iVar0 /*53*/].f_1)
		{
			func_482(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1718883++;
	if (Global_1718883 > 5)
	{
		Global_1718883 = 5;
		return Global_1718883;
	}
	return (Global_1718883 - 1);
}

void func_482(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1718883.f_5[iVar0 /*53*/] = { Global_1718883.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_483()
{
	return unk_0x9F37711843A20114(-1762644250);
}

struct<16> func_484(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_485(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_486(&cVar0);
}

var func_486(char[4] cParam0)
{
	return cParam0;
}

int func_487(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_25();
	iVar2 = (iParam0 - 1);
	if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iParam1]))
	{
		if (func_103(Local_98.f_7[iParam1]))
		{
			iVar1 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iParam1]), iVar2);
			if (iVar1 != 0)
			{
				if (unk_0xA815CBE767EFA3CB(iVar1))
				{
					iVar0 = unk_0x8ACC9D9AC6076DCB(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_488(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x12F4A48D84A3989D(sParam0);
	iVar0 = unk_0xC754466C15BD85AC(0, 1);
	func_480(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_489(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(sParam1);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam3);
}

void func_490()
{
	if (!unk_0xDCC86F723E82125E(iLocal_1309, 9))
	{
		if (Local_98.f_241 == 1)
		{
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
			{
				if (unk_0x233432976E597324("KILL_LIST_START_MUSIC"))
				{
					unk_0x59A0729D503ED758(&iLocal_1309, 9);
				}
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(iLocal_1309, 10))
	{
		if (unk_0xDCC86F723E82125E(iLocal_1309, 9))
		{
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 > 1)
			{
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
				{
					if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x233432976E597324("MP_MC_FAIL"))
						{
							unk_0x59A0729D503ED758(&iLocal_1309, 10);
						}
					}
					else if (unk_0x233432976E597324("KILL_LIST_STOP_MUSIC"))
					{
						unk_0x59A0729D503ED758(&iLocal_1309, 10);
						func_491();
					}
				}
			}
		}
	}
}

void func_491()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4551), 1);
	}
	if (Global_2458121.f_4551 > 0)
	{
		unk_0x233432976E597324("FM_COUNTDOWN_30S_KILL");
		unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
		unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x384EC102F362C893(1);
		Global_2458121.f_4551 = 0;
		unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
		unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
		unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
		if (!unk_0xF8D041B05C3D1FD4(unk_0xC4E68AF0B559FAC4(), "am_pi_menu"))
		{
			if (Global_2458121.f_4561 > -1)
			{
				unk_0x279EB90079F76860(Global_2458121.f_4561);
				Global_2458121.f_4561 = -1;
			}
		}
	}
}

void func_492()
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
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
	{
		if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 8))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 26))
			{
				if ((((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2)) || (func_658() && unk_0xDCC86F723E82125E(Local_98.f_3, 6))) || (func_658() && unk_0xDCC86F723E82125E(Local_98.f_3, 15)))
				{
					if (!func_20(&uLocal_3628))
					{
						func_18(&uLocal_3628, 0, 0);
					}
					if (func_17(&uLocal_3628, 1000, 0))
					{
						if (func_252("UW_ATTK"))
						{
							func_7();
						}
						func_540();
						if (func_539())
						{
							iVar25 = func_466(1);
							if (iVar25 > 0)
							{
								Local_715.f_6 = (Local_715.f_6 + iVar25);
								if ((!Global_262145.f_9411 && !unk_0xDCC86F723E82125E(Local_98.f_3, 8)) || (!Global_262145.f_9412 && unk_0xDCC86F723E82125E(Local_98.f_3, 8)))
								{
									if (Local_715.f_6 > 0)
									{
										func_465(19, Local_715.f_6);
									}
								}
								Global_2443261 = iVar25;
								if (func_464())
								{
									func_455(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_454(1);
							func_453();
							Local_715.f_7 = (Local_715.f_7 + iVar23);
							func_408(0, unk_0xC8B93D94F8954288(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
							Local_715.f_5 = 2;
							func_557(64, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_658())
						{
							iVar25 = func_552(0);
							func_528(&iVar25, 1);
							iVar25 = (iVar25 + func_466(1));
							if (iVar25 > 0)
							{
								Local_715.f_6 = (Local_715.f_6 + iVar25);
								if (!Global_262145.f_9411)
								{
									if (Local_715.f_6 > 0)
									{
										func_465(19, Local_715.f_6);
									}
								}
								Global_2443261 = iVar25;
								if (func_464())
								{
									func_455(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_454(1);
							iVar23 = (iVar23 + func_527());
							Local_715.f_7 = (Local_715.f_7 + iVar23);
							func_453();
							func_408(0, unk_0xC8B93D94F8954288(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
							Local_715.f_5 = 1;
							func_556(63, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_526())
						{
							if (!func_525(1))
							{
								if (!func_252("UW_EXPL") && !func_252("UW_EXPLC"))
								{
									func_7();
								}
								iVar25 = func_552(0);
								func_528(&iVar25, 1);
								iVar25 = (iVar25 + func_466(1));
								Local_715.f_6 = (Local_715.f_6 + iVar25);
								if (!Global_262145.f_9412)
								{
									if (Local_715.f_6 > 0)
									{
										func_465(19, Local_715.f_6);
									}
								}
								Global_2443261 = iVar25;
								if (iVar25 > 0)
								{
									if (func_464())
									{
										func_455(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
								{
									func_556(63, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_556(63, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_715.f_5 = 1;
								iVar23 = func_527();
								iVar23 = (iVar23 + func_454(1));
								Local_715.f_7 = (Local_715.f_7 + iVar23);
								func_453();
								func_408(0, unk_0xC8B93D94F8954288(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0);
							}
							else
							{
								iVar25 = func_466(1);
								iVar23 = func_454(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_98.f_465[iVar22 /*4*/].f_1 == Local_98.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
										{
											if (Local_98.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_98.f_465[iVar22 /*4*/].f_2 != unk_0xA34E7C2A5118D638())
												{
													if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(Local_98.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = unk_0x20A20BF765914E37(Local_98.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3575 > -1)
										{
											if (iLocal_3575 != Local_98.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_98.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
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
										func_524(67, "UW_DRAWP", unk_0x74C5CB21CF9F1178(iVar9[0]), 1, 15000, "UW_BIGO", 2);
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
									func_556(67, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar21)
								{
									if (!func_658())
									{
										func_557(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_557(67, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar26 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_552(0)) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar24 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_527()) / unk_0xBBDA792448DB5A89(iVar20)));
								func_528(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_715.f_6 = (Local_715.f_6 + iVar25);
								if (!Global_262145.f_9412)
								{
									if (Local_715.f_6 > 0)
									{
										func_465(19, Local_715.f_6);
									}
								}
								Global_2443261 = iVar25;
								if (iVar25 > 0)
								{
									if (func_464())
									{
										func_455(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_715.f_7 = (Local_715.f_7 + iVar23);
								func_453();
								func_408(0, unk_0xC8B93D94F8954288(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0);
							}
						}
						else
						{
							func_522(1);
							iVar25 = func_466(1);
							iVar23 = func_454(1);
							Local_715.f_6 = (Local_715.f_6 + iVar25);
							if (!Global_262145.f_9412)
							{
								if (Local_715.f_6 > 0)
								{
									func_465(19, Local_715.f_6);
								}
							}
							Global_2443261 = iVar25;
							if (iVar25 > 0)
							{
								if (func_464())
								{
									func_455(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_715.f_7 = (Local_715.f_7 + iVar23);
							func_453();
							func_408(0, unk_0xC8B93D94F8954288(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0);
							if (!func_525(0))
							{
								iVar13 = Local_98.f_465[0 /*4*/];
								if (!func_252("UW_EXPL") && !func_252("UW_EXPLC"))
								{
									func_7();
								}
								if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									iVar8 = unk_0x20A20BF765914E37(Local_98.f_465[0 /*4*/].f_2);
									if (func_281(iVar8, 1))
									{
										iVar53 = func_285(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_283(iVar53);
											sVar54 = func_519(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_25())
									{
										if (!bVar52)
										{
											if (!func_658())
											{
												func_524(64, "UW_FWONP", unk_0x74C5CB21CF9F1178(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_524(64, "UW_FWONPC", unk_0x74C5CB21CF9F1178(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_658())
										{
											func_517(65, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_517(65, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_658())
									{
										func_556(64, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_556(64, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_252("UW_EXPL") && !func_252("UW_EXPLC"))
								{
									func_7();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_98.f_465[iVar22 /*4*/].f_1 == Local_98.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
										{
											if (Local_98.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(Local_98.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = unk_0x20A20BF765914E37(Local_98.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3575 > -1)
										{
											if (iLocal_3575 != Local_98.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_98.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_25() && unk_0xDF73DA5E2287C499(iVar9[0]))
										{
											if (iVar9[1] != func_25() && unk_0xDF73DA5E2287C499(iVar9[1]))
											{
												func_497(67, func_25(), func_25(), -1, "UW_DRAW2P", "UW_BIGF", func_286(), 15000, func_286(), unk_0x74C5CB21CF9F1178(iVar9[0]), unk_0x74C5CB21CF9F1178(iVar9[1]), 0);
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
									func_556(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_557(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_576(0);
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
						{
							Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
						}
						unk_0x59A0729D503ED758(&iLocal_1309, 13);
						unk_0x59A0729D503ED758(&iLocal_1309, 26);
					}
				}
				else if (unk_0xDCC86F723E82125E(Local_98.f_3, 6) || (!func_658() && unk_0xDCC86F723E82125E(Local_98.f_3, 15)))
				{
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_10 != -1)
					{
						func_557(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_556(64, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_576(0);
					unk_0x59A0729D503ED758(&iLocal_1309, 26);
					iVar25 = func_466(1);
					Local_715.f_6 = (Local_715.f_6 + iVar25);
					if (!Global_262145.f_9411)
					{
						if (Local_715.f_6 > 0)
						{
							func_465(19, Local_715.f_6);
						}
					}
					Global_2443261 = iVar25;
					if (iVar25 > 0)
					{
						if (func_464())
						{
							func_455(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_454(1);
					Local_715.f_7 = (Local_715.f_7 + iVar23);
					func_453();
					func_408(0, unk_0xC8B93D94F8954288(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
					Local_715.f_5 = 2;
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
					{
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0xDCC86F723E82125E(Local_98.f_3, 14))
				{
					func_576(0);
					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 8);
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 3)
					{
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 11))
				{
					func_556(64, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_576(0);
					unk_0x59A0729D503ED758(&iLocal_1309, 26);
					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 8);
					iVar25 = func_466(1);
					Local_715.f_6 = (Local_715.f_6 + iVar25);
					if (!Global_262145.f_9411)
					{
						if (Local_715.f_6 > 0)
						{
							func_465(19, Local_715.f_6);
						}
					}
					Global_2443261 = iVar25;
					if (iVar25 > 0)
					{
						if (func_464())
						{
							func_455(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							unk_0x7AF7488EF897601F(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_454(1);
					Local_715.f_7 = (Local_715.f_7 + iVar23);
					func_453();
					func_408(0, unk_0xC8B93D94F8954288(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0);
					Local_715.f_5 = 2;
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
					{
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0xDCC86F723E82125E(Local_98.f_3, 12))
				{
					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 8);
				}
			}
			if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 8))
			{
				if (unk_0xDCC86F723E82125E(iLocal_1309, 26))
				{
					if (func_252("UW_ATTK"))
					{
						func_7();
					}
					if (func_493(&uLocal_3566, 1))
					{
						unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 8);
					}
					if (!func_252("UW_EXPL") && !func_252("UW_EXPLC"))
					{
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 > -1)
						{
							if (unk_0x691BFDC1728FD714(Local_98.f_7[Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9]))
							{
								if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
								{
									if (func_103(Local_98.f_7[Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9]))
									{
										if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9])))
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
	else if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 8))
	{
		unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 8);
	}
}

int func_493(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((*uParam0 > 0 && !func_322()) && !(func_223(unk_0xA34E7C2A5118D638(), 0) && (func_215(unk_0xA34E7C2A5118D638()) || func_213(unk_0xA34E7C2A5118D638()))))
	{
		func_496();
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
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 25);
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 0);
					func_18(&(uParam0->f_5), 0, 0);
				}
				func_18(&(uParam0->f_1), 0, 0);
				func_495(uParam0, 1);
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
				func_494();
				func_495(uParam0, 2);
			}
			break;
		
		case 2:
			func_494();
			if (func_17(&(uParam0->f_1), 15000, 0))
			{
				if (func_592("AMEV_LBD_HELP"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				func_495(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_17(&(uParam0->f_1), 23500, 0))
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
				func_495(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
			return 1;
	}
	return 0;
}

void func_494()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0))
	{
		if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_748(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 1);
			func_379("AMEV_LBD_HELP", -1);
			func_378(1);
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 0);
		}
	}
}

void func_495(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_496()
{
	Global_2442432 = 1;
}

int func_497(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_516(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_65 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_66 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_498(&Var0);
}

int func_498(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426867.f_2428)
		{
			return 0;
		}
	}
	func_501(uParam0, uParam0->f_16);
	func_500(uParam0);
	if (func_499(uParam0->f_1))
	{
		if (Global_2426867.f_2138[0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426867.f_2138[0 /*72*/].f_1 == 13 || Global_2426867.f_2138[0 /*72*/].f_1 == 52) || Global_2426867.f_2138[0 /*72*/].f_1 == 53) || Global_2426867.f_2138[0 /*72*/].f_1 == 57)
		{
			Global_2426867.f_2138[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426867.f_2138[iVar0 + 1 /*72*/] = { Global_2426867.f_2138[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426867.f_2138[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 1);
				Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_325(Global_2426867.f_2138[iVar0 /*72*/].f_1))
				{
					Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
					unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_499(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_500(var uParam0)
{
	if (func_327(uParam0->f_1))
	{
		uParam0->f_66 = func_286();
	}
}

void func_501(var uParam0, int iParam1)
{
	if (func_327(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_25())
	{
		return;
	}
	if (func_325(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_502(iParam1, -2, 0, 0);
		}
	}
}

int func_502(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_355(iParam0))
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
	if (func_355(unk_0xA34E7C2A5118D638()) || (func_515() && func_514()))
	{
		uVar0 = func_513();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(iVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(iVar0) != -1)
				{
					if (func_748(unk_0x8ACC9D9AC6076DCB(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_512(iParam1, iParam0, 0);
							}
							else
							{
								return func_509(iParam0, unk_0x8ACC9D9AC6076DCB(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_509(iParam0, unk_0x8ACC9D9AC6076DCB(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
				{
					return func_512(iParam1, iParam0, 0);
				}
				else
				{
					return func_503(0, -1, 0);
				}
			}
			else
			{
				return func_503(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_512(iParam1, iParam0, 0);
		}
		else
		{
			return func_509(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_509(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_503(bool bParam0, int iParam1, bool bParam2)
{
	return func_504(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_504(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_444(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_508(1);
				}
				else
				{
					return func_508(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
			{
				return func_505(iVar0, iParam2, 1);
			}
			else
			{
				return func_505(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_508(1);
	}
	return func_508(0);
}

int func_505(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_507(iParam0, iParam1);
	if (func_506(Global_1613622.f_68788))
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

int func_506(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7331[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
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
			if (!func_444(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_508(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_509(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_511(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_444(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_508(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_510(1);
			}
			else
			{
				return func_504(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_508(1);
			}
			else
			{
				return func_504(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_285(iParam0);
	if (!iVar3 == -1)
	{
		return func_283(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_510(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_511(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_512(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
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
			iVar0 = Global_1613622.f_65200[iParam0];
		}
	}
	else
	{
		iVar0 = func_504(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_513()
{
	return Global_2359301.f_2;
}

bool func_514()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

bool func_515()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

void func_516(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_517(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_25();
	iVar1 = func_25();
	iVar2 = func_25();
	return func_518(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_518(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_516(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0x59A0729D503ED758(&(Var0.f_63), 2);
	return func_498(&Var0);
}

char* func_519(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if ((func_214(iParam0, 28) || func_214(unk_0xA34E7C2A5118D638(), 28)) || func_521(iParam0))
	{
		return unk_0x73630CECCD6630B5("GB_REST_ACC");
	}
	iVar0 = func_61(iParam0);
	if (iVar0 != func_25())
	{
		uVar1 = func_520(&(Global_1608811[iVar0 /*109*/].f_9.f_74));
		if (unk_0xB8A06E7E729EED0A(uVar1))
		{
			return unk_0x73630CECCD6630B5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_520(var uParam0)
{
	return uParam0;
}

int func_521(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x62F8BA7ED89768FB() || unk_0x68B0A67658F2D9C2())
	{
		if (unk_0xE028438B8B6A57B6(0))
		{
			return 0;
		}
	}
	else if (unk_0xF7FE713C9F786F8C())
	{
		if (unk_0x3084526A863D7966(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

void func_522(bool bParam0)
{
	if (bParam0)
	{
		if (func_523(1))
		{
			unk_0x59A0729D503ED758(&Global_1573903, 1);
		}
	}
	else if (func_523(2))
	{
		unk_0x59A0729D503ED758(&Global_1573903, 2);
	}
}

int func_523(int iParam0)
{
	var uVar0;
	
	uVar0 = func_244(2507, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xDCC86F723E82125E(uVar0, 0) && unk_0xDCC86F723E82125E(iVar0, 1)) && unk_0xDCC86F723E82125E(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 3) && unk_0xDCC86F723E82125E(iVar0, 4)) && unk_0xDCC86F723E82125E(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 6) && unk_0xDCC86F723E82125E(iVar0, 7)) && unk_0xDCC86F723E82125E(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 9) && unk_0xDCC86F723E82125E(iVar0, 10)) && unk_0xDCC86F723E82125E(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_524(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_516(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_498(&Var0);
}

int func_525(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_595(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_98.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
	{
		return Local_98.f_465[0 /*4*/].f_1 == Local_98.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_98.f_594[0 /*4*/].f_1 == Local_98.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_526()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_595(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_98.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_527()
{
	if (!func_658())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9161) * Global_262145.f_9350));
	}
	if ((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9222) * Global_262145.f_9352));
	}
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9222) * Global_262145.f_9352));
	}
	return 0;
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_538())
		{
			if (func_537(0))
			{
				if (unk_0xDF73DA5E2287C499(func_536()))
				{
					if (func_535() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_535());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_533(&iVar0);
					if (iParam1 == 1)
					{
						func_532("GB_BCUT_TICK1", func_536(), iVar0, 0, 0, 1, 1);
					}
					func_531(20);
					func_529(func_536(), iVar0, 1);
				}
			}
		}
	}
}

void func_529(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_748(iParam0, 0, 1))
	{
		Var0.f_0 = 433;
		Var0.f_1 = unk_0xA34E7C2A5118D638();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x74A5559828D3116B(1, &Var0, 5, func_530(iParam0));
	}
}

var func_530(int iParam0)
{
	var uVar0;
	
	unk_0x59A0729D503ED758(&uVar0, iParam0);
	return uVar0;
}

void func_531(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_7), iParam0);
}

int func_532(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(func_502(iParam1, -2, 1, 0));
		unk_0x2DED6C1306496257(func_485(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x1AE578B67805BFB7(iParam3);
		}
		unk_0x6DC80A902A91958F(iParam2);
		iVar0 = unk_0xC754466C15BD85AC(0, 1);
		func_480(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_534();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_534()
{
	return Global_262145.f_10288;
}

int func_535()
{
	return Global_262145.f_10287;
}

int func_536()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

bool func_537(bool bParam0)
{
	return func_281(unk_0xA34E7C2A5118D638(), bParam0);
}

bool func_538()
{
	return func_316(unk_0xA34E7C2A5118D638());
}

int func_539()
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(Local_98.f_3, 6) && !unk_0xDCC86F723E82125E(Local_98.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_98.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_540()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_73[iVar0]))
		{
			if (!func_103(Local_98.f_73[iVar0]))
			{
				func_23(&(Local_98.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar0]))
		{
			if (func_30(Local_98.f_48[iVar0]))
			{
				func_23(&(Local_98.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_541(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x19EE47A00B170BB8() < iParam0)
	{
		if (bParam2)
		{
			func_546(sParam3, sParam4, 1);
		}
		if (func_545(26, -1))
		{
			func_543(26, -1);
		}
		return 1;
	}
	if (func_20(&(Global_1573879.f_18)))
	{
		if (!func_17(&(Global_1573879.f_18), 7500, 0))
		{
			return 0;
		}
		func_100(&(Global_1573879.f_18));
	}
	if (func_542())
	{
		if (bParam2)
		{
			func_546(sParam3, sParam4, 0);
		}
		if (func_545(26, -1))
		{
			func_543(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xEE9C884FC3CB6070() < iParam0)
	{
		if (bParam2)
		{
			func_546(sParam3, sParam4, 1);
		}
		if (func_545(26, -1))
		{
			func_543(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_542()
{
	return unk_0xDCC86F723E82125E(Global_1573879.f_1, 0);
}

void func_543(int iParam0, int iParam1)
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
			unk_0x793E1948527089BB(0, iParam1);
			break;
		
		default:
			uVar1 = func_544(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			if (unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x77621132305B133B(&iVar0, iParam0);
				unk_0x793E1948527089BB(iVar0, iParam1);
			}
			break;
	}
}

int func_544(int iParam0)
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

bool func_545(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_544(iParam1);
	uVar1 = unk_0x11BD984A2A4EF9A7(uVar0);
	return unk_0xDCC86F723E82125E(uVar1, iParam0);
}

void func_546(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xDCC86F723E82125E(Global_1573879.f_1, 2) && !func_196(unk_0xA34E7C2A5118D638())) && !func_195(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB8A06E7E729EED0A(sParam1))
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
		func_557(65, sParam0, sParam1, 1, -1, 2);
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 2);
	}
}

void func_547()
{
	Global_2458121.f_1643.f_56 = 1;
}

void func_548()
{
	Global_2458121.f_1643.f_54 = 1;
}

bool func_549()
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_1635, 11);
}

int func_550()
{
	if (iLocal_3575 > -1)
	{
		if (func_103(Local_98.f_7[iLocal_3575]))
		{
			if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iLocal_3575])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_551(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0x6DC80A902A91958F(uParam2);
	return unk_0x699790DC9A5E5D9A(0);
}

int func_552(bool bParam0)
{
	if (!func_658())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9160) * Global_262145.f_9349));
	}
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9221) * Global_262145.f_9351));
	}
	if ((unk_0xDCC86F723E82125E(Local_98.f_3, 0) && unk_0xDCC86F723E82125E(Local_98.f_3, 1)) && unk_0xDCC86F723E82125E(Local_98.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9221) * Global_262145.f_9351));
	}
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9221) * Global_262145.f_9351));
	}
	return 0;
}

char* func_553()
{
	if (Local_98.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0xE924C2C283992918(Local_98.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_554(int iParam0)
{
	if (func_227())
	{
		if (iParam0 == 1)
		{
			if (Global_2458121.f_4247 == -1)
			{
				Global_2458121.f_4247 = 60000;
			}
			func_6(&(Global_2458121.f_4245), 0, 0);
			if (Global_2458121.f_4250 == -1)
			{
				Global_2458121.f_4250 = 10000;
			}
			func_6(&(Global_2458121.f_4248), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_597();
		}
		if ((!unk_0xDC9A5ADFE0C41DD2() && !func_555()) && !func_233(unk_0xA34E7C2A5118D638()))
		{
			Global_976340 = 0;
		}
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_7 = 0;
	}
}

bool func_555()
{
	return Global_2433098.f_713;
}

int func_556(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
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
	func_516(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_498(&Var0);
}

int func_557(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_516(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_498(&Var0);
}

void func_558(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 4);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 4);
	}
}

void func_559(bool bParam0)
{
	int iVar0;
	
	if (unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 5) != 0)
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
		unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_244(575, -1, 0));
		if (func_575())
		{
			unk_0xEACA2903193F00BA(unk_0xA34E7C2A5118D638(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_574())
		{
			unk_0xEACA2903193F00BA(unk_0xA34E7C2A5118D638(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_571(3610, -1, -1))
		{
		}
		iVar0 = func_244(2029, -1, 0);
		unk_0xB097B46113B38749(unk_0xA34E7C2A5118D638(), func_570(unk_0xCF4C00513A86E840(unk_0xA34E7C2A5118D638()), iVar0));
		if (func_537(0))
		{
			unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_244(575, -1, 0));
		}
		else
		{
			unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_569(Global_2464911));
		}
		func_568(unk_0xA34E7C2A5118D638(), iVar0);
		unk_0x2E9F709E6BB1D74A(unk_0xA34E7C2A5118D638(), 5, func_564(unk_0xC8B93D94F8954288(), iVar0), func_563(unk_0xC8B93D94F8954288(), iVar0), 0);
		func_562(func_244(2029, -1, 0), 1);
		Global_2458121.f_273 = 1;
		func_560(unk_0xA34E7C2A5118D638(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_560(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_244(2029, -1, 0);
		}
		unk_0x2E9F709E6BB1D74A(iParam0, 5, func_564(unk_0xCF4C00513A86E840(iParam0), iParam2), func_563(unk_0xCF4C00513A86E840(iParam0), iParam2), 0);
		func_568(iParam0, iParam2);
		unk_0xB097B46113B38749(iParam0, func_570(unk_0xCF4C00513A86E840(iParam0), iParam2));
		unk_0x8C245572EDB27776(unk_0xCF4C00513A86E840(iParam0), 5, func_564(unk_0xCF4C00513A86E840(iParam0), iParam2), func_563(unk_0xCF4C00513A86E840(iParam0), iParam2), func_570(unk_0xCF4C00513A86E840(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_244(575, -1, 0);
		}
		if (func_537(1) && func_561(unk_0xA34E7C2A5118D638()))
		{
			unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_569(Global_2464911));
		}
		else
		{
			unk_0x9B6C7136336F942B(iParam0, iParam1);
		}
		if (func_575())
		{
			unk_0xEACA2903193F00BA(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_574())
		{
			unk_0xEACA2903193F00BA(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x1F64302AA4F597A7(unk_0xCF4C00513A86E840(iParam0), 177, 1);
	}
}

bool func_561(int iParam0)
{
	return func_214(iParam0, 10);
}

void func_562(int iParam0, int iParam1)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		func_434(2029, iParam0, -1, 1);
		unk_0x2E9F709E6BB1D74A(unk_0xA34E7C2A5118D638(), 5, func_564(unk_0xC8B93D94F8954288(), iParam0), func_563(unk_0xC8B93D94F8954288(), iParam0), 0);
		func_568(unk_0xA34E7C2A5118D638(), iParam0);
		unk_0xB097B46113B38749(unk_0xA34E7C2A5118D638(), func_570(unk_0xC8B93D94F8954288(), iParam0));
		if ((iParam1 && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 5) != 0)
		{
			func_560(unk_0xA34E7C2A5118D638(), -1, -1);
		}
	}
}

int func_563(int iParam0, int iParam1)
{
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

int func_564(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 11);
	if (unk_0x3A59BCC40A12FD28(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6D5BB810CC209E15(iParam0);
	uVar3 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
	if (unk_0xED5E7EEE0DB220EF(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
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
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
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
	if (iVar0 > 15)
	{
		uVar5 = unk_0x4D4C7C54C2E89DDF(iParam0, 11, iVar0, unk_0x268F3DC177BF5D38(iParam0, 11));
		if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_567(uVar5, 0);
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
						iVar0 = func_566(uVar5);
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
						iVar0 = func_566(uVar5);
						break;
					}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_565(uVar5, 0);
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
					iVar0 = func_566(uVar5);
					break;
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0xED5E7EEE0DB220EF(uVar5, -1086258388, 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_0"), 0))
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
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return (4 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					if (iParam1 > 51)
					{
						return 51;
					}
					else if (iParam1 > 46)
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
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xED5E7EEE0DB220EF(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_566(uVar5);
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

int func_565(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_566(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_567(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

void func_568(int iParam0, int iParam1)
{
	if (func_575())
	{
		if (iParam1 > 46)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x06470EB9AAE2FC33(iParam0);
		}
	}
	else if (func_574())
	{
		if (iParam1 > 0)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x06470EB9AAE2FC33(iParam0);
		}
	}
}

int func_569(var uParam0)
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

int func_570(int iParam0, int iParam1)
{
	return 0;
}

int func_571(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_573(iParam0, iParam1);
	uVar2 = func_572(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F9C325BC5873651(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_572(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
	}
	return iVar0;
}

int func_573(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

bool func_574()
{
	return unk_0x9F37711843A20114(joaat("mppilot"));
}

bool func_575()
{
	return unk_0x9F37711843A20114(joaat("mplts"));
}

void func_576(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_1635, 11))
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 11);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2458121.f_1635, 11))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1635), 11);
	}
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_1635, 9))
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 9);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2458121.f_1635, 9))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1635), 9);
	}
}

void func_578()
{
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
}

void func_579(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (func_227())
		{
			func_554(0);
			func_581();
		}
		if (func_243(0))
		{
			iVar0 = func_244(2453, -1, 0);
			unk_0x77621132305B133B(&iVar0, 0);
			func_581();
		}
		if (func_243(func_200(func_184(unk_0xA34E7C2A5118D638()))))
		{
			iVar0 = func_244(2453, -1, 0);
			unk_0x77621132305B133B(&iVar0, func_200(func_184(unk_0xA34E7C2A5118D638())));
			func_581();
		}
		if (func_580())
		{
			func_581();
		}
		if (func_184(unk_0xA34E7C2A5118D638()) > -1)
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 7);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 7);
	}
}

int func_580()
{
	if (Global_2426867.f_615.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_581()
{
	if (func_580())
	{
		Global_2426867.f_615.f_16 = 1;
	}
}

void func_582(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
	}
	Global_2458121.f_4561 = -1;
	bVar0 = (func_223(unk_0xA34E7C2A5118D638(), 0) && func_215(unk_0xA34E7C2A5118D638()));
	if (bParam6)
	{
		func_591(21, 1);
	}
	else
	{
		func_590(iParam0, -1);
		if (func_196(unk_0xA34E7C2A5118D638()))
		{
			Global_1573879.f_3 = iParam0;
		}
		else
		{
			func_620(iParam0);
		}
		Global_1573879.f_4 = -1;
		if (func_196(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 5);
		}
		if ((func_227() && !func_222()) || func_197(unk_0xA34E7C2A5118D638(), 21))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 4);
		}
		unk_0x77621132305B133B(&(Global_1573879.f_1), 17);
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 20);
		if (func_589(iParam0))
		{
			func_588();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_587(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xFD62177C7242216E(fParam2);
			if (iParam0 == 146)
			{
				unk_0x60B57BC5E51D2074(0);
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
				unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
			}
		}
		if (func_586(iParam0))
		{
			unk_0x60B57BC5E51D2074(0);
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
			unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 8);
		}
		if (bParam3)
		{
			func_402(1);
			if (func_523(0))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
			}
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
		}
		if (bParam4)
		{
			func_400(1);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
		}
		if (bParam5)
		{
			func_585();
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_583(iParam0))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 21);
			}
		}
	}
	Global_2457030 = 1;
}

int func_583(int iParam0)
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
	if (func_584())
	{
		return 1;
	}
	return 0;
}

int func_584()
{
	switch (func_183())
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

void func_585()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4552), 0);
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_216(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_587(float fParam0)
{
	float fVar0;
	
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_395())
	{
		return;
	}
	fVar0 = (Global_2458121.f_4643 - fParam0);
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && unk_0xA3C5926D6E5619AE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2458121.f_4643 = fParam0;
	Global_2458121.f_4644 = unk_0x46CF50E0E5A24635();
}

void func_588()
{
	Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_198 = 0;
	unk_0x77621132305B133B(&(Global_2458121.f_4413), 1);
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_590(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_243(0) || func_243(func_200(iVar0)))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 2);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 2);
		}
	}
}

void func_591(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
	{
		unk_0x77621132305B133B(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
	}
}

bool func_592(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

int func_593()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_98.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	iVar1 = unk_0x66B735F5B005FAD7(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0xC0ADAF0814175B68(iVar0, iVar2);
		if (iVar4 != 0)
		{
			if (!unk_0x2DC9BA2299B45EA6(iVar4))
			{
				if (unk_0xA815CBE767EFA3CB(iVar4))
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

void func_594(bool bParam0)
{
	var uVar0;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (unk_0xFE7BCFB02217DCDF(uVar0))
		{
			unk_0xEE6504C7ECC425AB(uVar0, bParam0);
			unk_0x7203A71F4A3F15CC(iVar0, !bParam0);
		}
	}
}

void func_595(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_98.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_596()
{
	int iVar0;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	if (iVar0 != -1)
	{
		Global_1608811[iVar0 /*109*/] = -1;
	}
}

void func_597()
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!func_227())
		{
			if (func_748(unk_0xA34E7C2A5118D638(), 1, 0))
			{
				unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 342, 0);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 122, 0);
			}
			unk_0x7C53F209D14EAB83(unk_0xA34E7C2A5118D638(), 1f);
			unk_0x00AF6DC1F221C0A3(0);
			unk_0x3FAC4C670EE704C9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xB2D9791D33CC8156(0);
			}
		}
		else
		{
			if (func_748(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 0);
				unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 342, 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 122, 1);
				unk_0x7C53F209D14EAB83(unk_0xA34E7C2A5118D638(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xB2D9791D33CC8156(1);
				}
			}
			unk_0x00AF6DC1F221C0A3(1);
			unk_0x3FAC4C670EE704C9(0);
		}
	}
}

void func_598(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2443244 = func_184(unk_0xA34E7C2A5118D638());
		if (Global_2443244 == -1)
		{
			Global_2443244 = Global_1573879.f_4;
		}
		if (func_619(Global_2443244) == 0)
		{
			if (func_618(1) > 0)
			{
				func_617(26, -1);
			}
		}
		if (func_227())
		{
			func_554(0);
			func_581();
		}
		if (func_243(0))
		{
			iVar1 = func_244(2453, -1, 0);
			unk_0x77621132305B133B(&iVar1, 0);
			func_581();
		}
		if (func_243(func_200(func_184(unk_0xA34E7C2A5118D638()))))
		{
			iVar1 = func_244(2453, -1, 0);
			unk_0x77621132305B133B(&iVar1, func_200(func_184(unk_0xA34E7C2A5118D638())));
			func_581();
		}
		if (func_580())
		{
			func_581();
		}
		unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 0);
	}
	else
	{
		if ((!func_209() && !func_616()) && !func_615())
		{
			Global_2443244 = -1;
			func_543(26, -1);
		}
		else if (func_619(Global_2443244) == 0)
		{
			iVar0 = func_601(1);
			if (iVar0 > 0)
			{
				func_599(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_440(1921, 1, -1);
				func_599(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_545(26, -1))
		{
			Global_2443244 = -1;
			func_543(26, -1);
		}
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 0);
	}
}

void func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_424(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_600(iParam0))
	{
		func_422(iParam0, iVar0);
	}
	else
	{
		func_426(iParam0, iVar0);
	}
}

int func_600(int iParam0)
{
	if (Global_1347492)
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

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2442010 == 0)
	{
		return 0;
	}
	if (func_615())
	{
		if (unk_0xDC9A5ADFE0C41DD2() || (func_614() || func_612()))
		{
			Global_2441385 = 1;
		}
	}
	Global_2442010 = 0;
	if (Global_1318741)
	{
		iVar0 = 1;
	}
	if (Global_2441385)
	{
		iVar0 = 1;
	}
	if (Global_2441384)
	{
		iVar0 = 1;
	}
	if (func_611(Global_100004.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2441310)
	{
		iVar0 = 1;
	}
	if (func_610(512))
	{
		iVar0 = 1;
	}
	if (func_609(128))
	{
		iVar0 = 1;
	}
	if (Global_1318765 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_162())
	{
		iVar0 = 0;
	}
	if (Global_2441450)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_607())
		{
			if (Global_1613622.f_69427 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		iVar0 = 0;
	}
	if (func_606())
	{
		iVar0 = 0;
	}
	if ((Global_2441385 || Global_2441384) || Global_1318741)
	{
		if (func_612())
		{
			iVar0 = 0;
		}
	}
	Global_2441450 = 0;
	Global_2441384 = 0;
	Global_2441385 = 0;
	Global_1318741 = 0;
	Global_2441310 = 0;
	func_604(&(Global_100004.f_1), 32);
	func_603(512);
	func_602(128);
	return iVar0;
}

void func_602(int iParam0)
{
	Global_100061 = (Global_100061 - (Global_100061 && iParam0));
}

void func_603(int iParam0)
{
	Global_100062 = (Global_100062 - (Global_100062 && iParam0));
}

void func_604(var uParam0, int iParam1)
{
	func_605(uParam0, iParam1);
}

void func_605(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_606()
{
	if (((Global_1573850 || Global_1573821) || func_14(unk_0xA34E7C2A5118D638(), 0)) || func_515())
	{
		return 1;
	}
	return 0;
}

int func_607()
{
	switch (func_608())
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

int func_608()
{
	return Global_2433864.f_1.f_2818;
}

bool func_609(int iParam0)
{
	return (Global_100061 && iParam0) != 0;
}

bool func_610(int iParam0)
{
	return (Global_100062 && iParam0) != 0;
}

bool func_611(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_612()
{
	if (func_619(Global_2443244))
	{
		return 0;
	}
	if (func_613(unk_0xA34E7C2A5118D638(), 146))
	{
		return 1;
	}
	return 0;
}

int func_613(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/] == iParam1)
	{
		return func_216(iParam0);
	}
	return 0;
}

int func_614()
{
	if (func_619(Global_2443244))
	{
		return 0;
	}
	if (func_216(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	return 0;
}

bool func_615()
{
	return unk_0xDCC86F723E82125E(Global_1312423, 0);
}

bool func_616()
{
	return Global_1315878;
}

void func_617(int iParam0, int iParam1)
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
			unk_0x793E1948527089BB(0, iParam1);
			break;
		
		default:
			uVar1 = func_544(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			if (!unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x59A0729D503ED758(&iVar0, iParam0);
				unk_0x793E1948527089BB(iVar0, iParam1);
			}
			break;
	}
}

int func_618(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318765 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_162())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_607())
		{
			if (Global_1613622.f_69427 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		iVar0 = 0;
	}
	if (func_606())
	{
		iVar0 = 0;
	}
	Global_2442010 = 1;
	return iVar0;
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9298)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9300)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9297)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9301)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9302)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9303)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9299)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9304)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9305)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9306)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9307)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_620(int iParam0)
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/] = iParam0;
}

void func_621(int iParam0)
{
	Global_2442248 = iParam0;
}

void func_622(int iParam0)
{
	if (func_194())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0xDCC86F723E82125E(iLocal_1309, 0))
			{
				if ((((func_624(60000) && !unk_0xB45DF29A98EEAD5D()) && !func_363()) && !unk_0x2BF05095F2389894()) && func_380(0, 1, 1, 1))
				{
					if (!func_658())
					{
						func_623("UW_HELP1", func_553(), func_552(1), 30000);
					}
					else
					{
						func_623("UW_HELP1C", func_553(), func_552(1), 30000);
					}
					func_378(0);
					unk_0xC4EE38A4CFF7544C(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0x59A0729D503ED758(&iLocal_1309, 0);
				}
			}
			break;
	}
}

void func_623(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0x6DC80A902A91958F(uParam2);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam3);
}

bool func_624(int iParam0)
{
	return unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(Global_2409442, unk_0x2AA13A84EE2D3B24())) > iParam0;
}

void func_625()
{
	int iVar0;
	
	unk_0x77621132305B133B(&iLocal_1310, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_626(iVar0);
		iVar0++;
	}
	if (unk_0xDCC86F723E82125E(iLocal_1310, 15))
	{
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 15))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 15);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 15))
	{
		unk_0x77621132305B133B(&(Global_1573879.f_1), 15);
	}
}

void func_626(int iParam0)
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
	
	if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iParam0]))
	{
		if (!unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 0))
		{
			if (Local_98.f_241 == 0)
			{
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0])))
		{
			if (!func_194())
			{
				if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1, iParam0))
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (!unk_0xDCC86F723E82125E(iLocal_1310, 15))
						{
							if (unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288()) == unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]))
							{
								unk_0x59A0729D503ED758(&iLocal_1310, 15);
							}
						}
						if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 0))
						{
							if (func_630("UW_HELP2", func_553()) || func_630("UW_HELP2C", func_553()))
							{
								unk_0x9F4AA6F234E8A860(1);
							}
							if (!func_369(unk_0xA34E7C2A5118D638()))
							{
								func_558(1);
							}
							iVar0 = func_629(unk_0xC8B93D94F8954288(), 0);
							if (func_551("UW_HELP1", func_553(), func_552(1)) || func_551("UW_HELP1C", func_553(), func_552(1)))
							{
								unk_0x9F4AA6F234E8A860(1);
							}
							if (Local_98.f_463 != -1)
							{
								if (iVar0 > (Local_98.f_463 - 2))
								{
									iVar0 = (Local_98.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1), iParam0);
							Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 = iParam0;
							unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 398, 1);
							func_186();
							iLocal_3638 = iVar0;
						}
						else if (Local_98.f_241 == 0)
						{
							if (!unk_0xDCC86F723E82125E(iLocal_1309, 1))
							{
								if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
								{
									if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_380(0, 1, 1, 1))
										{
											if (!func_658())
											{
												func_628("UW_HELP2", func_553(), 30000);
											}
											else
											{
												func_628("UW_HELP2C", func_553(), 30000);
											}
											func_378(1);
											unk_0x59A0729D503ED758(&iLocal_1309, 1);
										}
									}
								}
							}
							if (!func_227())
							{
								if (unk_0xDCC86F723E82125E(iLocal_1310, 2))
								{
									unk_0x77621132305B133B(&iLocal_1310, 2);
								}
								if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
								{
									if (!unk_0xDCC86F723E82125E(iLocal_1309, 4))
									{
										if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 12))
										{
											unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 12);
										}
										if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
										{
											if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_380(0, 1, 1, 1))
												{
													if (!func_658())
													{
														func_379("UW_COPS", 30000);
													}
													else
													{
														func_379("UW_COPSC", 30000);
													}
													func_378(1);
													unk_0x59A0729D503ED758(&iLocal_1309, 4);
												}
											}
										}
									}
									else if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0x77621132305B133B(&iLocal_1309, 4);
									}
								}
								else
								{
									if (unk_0xDCC86F723E82125E(iLocal_1309, 4))
									{
										unk_0x77621132305B133B(&iLocal_1309, 4);
									}
									if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 12))
									{
										unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 12))
								{
									unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 12);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_1310, 2))
								{
									if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_380(0, 1, 1, 1))
										{
											if (!func_658())
											{
												func_379("UW_PASSMD", 30000);
											}
											else
											{
												func_379("UW_PASSMD", 30000);
											}
											func_378(1);
											unk_0x59A0729D503ED758(&iLocal_1310, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 == 0)
					{
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
						{
							if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_98.f_28)
								{
									if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, (0 + iVar2)))
									{
										func_7();
										unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1, iParam0))
								{
									unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1), iParam0);
								}
								if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 != -1)
								{
									Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 = -1;
								}
								if (func_592("UW_TIMEL"))
								{
									unk_0x9F4AA6F234E8A860(1);
								}
								if (func_592("UW_TIMELA"))
								{
									unk_0x9F4AA6F234E8A860(1);
								}
								if (func_369(unk_0xA34E7C2A5118D638()))
								{
									func_558(0);
								}
								unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 398, 0);
							}
							else
							{
								if (Local_98.f_241 == 0 && !unk_0xDCC86F723E82125E(Local_98.f_3, 4))
								{
									iVar0 = func_629(unk_0xC8B93D94F8954288(), 0);
									if (Local_98.f_463 != -1)
									{
										if (iVar0 > (Local_98.f_463 - 2))
										{
											iVar0 = (Local_98.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3638)
									{
										unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1), iParam0);
										unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), (0 + iLocal_3638 + 1));
									}
								}
								bVar1 = false;
								if (func_245())
								{
									if (Local_98.f_413 > -1)
									{
										iVar3 = (Local_98.f_413 - func_120(&(Local_98.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_627(bVar1);
								if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xF646F98998F4A7D0(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]));
								}
								if (!func_20(&uLocal_1532))
								{
									func_18(&uLocal_1532, 0, 0);
								}
								else if (func_17(&uLocal_1532, 2000, 0))
								{
									if (unk_0xDCC86F723E82125E(Local_98.f_3, 9) || !func_658())
									{
										if (func_592("UW_MINV"))
										{
										}
										if (!unk_0xDCC86F723E82125E(iLocal_1309, 5))
										{
											if (Local_98.f_28 > 1 || (Local_98.f_28 == 1 && func_106() > 1))
											{
												if (func_20(&(Local_98.f_326)))
												{
													if (!unk_0xB45DF29A98EEAD5D())
													{
														if (func_106() > 1)
														{
															func_379("UW_TIMELA", 30000);
														}
														else
														{
															func_379("UW_TIMEL", 30000);
														}
														func_378(1);
														unk_0x59A0729D503ED758(&iLocal_1309, 5);
													}
												}
											}
										}
									}
									else if (func_658())
									{
										if (!unk_0xDCC86F723E82125E(Local_98.f_3, 9))
										{
											if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0xDCC86F723E82125E(iLocal_1309, 14))
												{
													if (!unk_0xB45DF29A98EEAD5D())
													{
														func_379("UW_MINV", 30000);
														func_378(1);
														unk_0x59A0729D503ED758(&iLocal_1309, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_98.f_241 == 0)
					{
						if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_592("UW_VALK") && !func_592("UW_VALKC"))
							{
								unk_0xF4C9DB13E4CF9A58();
								if (unk_0xDCC86F723E82125E(iLocal_1309, 8))
								{
									unk_0x77621132305B133B(&iLocal_1309, 8);
								}
							}
							if (!unk_0xDCC86F723E82125E(iLocal_1309, 8))
							{
								if (!unk_0xB45DF29A98EEAD5D())
								{
									iVar6 = 0;
									iVar4 = unk_0x7EFD275DF858497F(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0x74CAAD9E721B315D(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), (iVar5 - 1)))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_658())
										{
											func_379("UW_VALK", 30000);
										}
										else
										{
											func_379("UW_VALKC", 30000);
										}
										func_378(1);
										unk_0x59A0729D503ED758(&iLocal_1309, 8);
									}
									if (!unk_0xDCC86F723E82125E(iLocal_1309, 8))
									{
										if (func_658())
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
														if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar7]))
														{
															if (func_103(Local_98.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0x74CAAD9E721B315D(unk_0xF8A3C382964380BC(Local_98.f_7[iVar7]), (iVar5 - 1)))
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
												func_379("UW_VALKC", 30000);
												func_378(1);
												unk_0x59A0729D503ED758(&iLocal_1309, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_98.f_241 == 1)
					{
						if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1, iParam0))
						{
							if (!unk_0xDCC86F723E82125E(iLocal_1309, 6))
							{
								if (func_103(Local_98.f_7[iParam0]))
								{
									if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
									{
										if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iParam0])))
										{
											if (!unk_0xDCC86F723E82125E(iLocal_1309, 7))
											{
												if ((unk_0x8D9008B8900A28D0(0, 75) || unk_0x0139E142C27412BC(0, 75)) || unk_0x69ED83B6DEBA60F9(0, 75))
												{
													unk_0x59A0729D503ED758(&iLocal_1309, 7);
												}
											}
											if (unk_0xDCC86F723E82125E(iLocal_1309, 7))
											{
												if (!unk_0xB45DF29A98EEAD5D())
												{
													if (func_658())
													{
														func_379("UW_EXITVC", 30000);
													}
													else
													{
														func_379("UW_EXITV", 30000);
													}
													func_378(1);
													unk_0x59A0729D503ED758(&iLocal_1309, 6);
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
					if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar10]))
					{
						if (unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(Local_98.f_7[iVar10]), 0))
						{
							if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_98.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_243(0))
					{
						iVar9 = func_244(2453, -1, 0);
						unk_0x77621132305B133B(&iVar9, 0);
						func_434(2453, iVar9, -1, 1);
						func_581();
						if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 9))
						{
							unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 9);
						}
					}
					if (func_243(8))
					{
						iVar9 = func_244(2453, -1, 0);
						unk_0x77621132305B133B(&iVar9, 8);
						func_434(2453, iVar9, -1, 1);
						func_581();
						if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 9))
						{
							unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
					{
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 = 0;
					}
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 12))
					{
						unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 12);
					}
				}
				if (!unk_0xDCC86F723E82125E(iLocal_1310, 14))
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (func_103(Local_98.f_7[iParam0]))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_380(0, 1, 1, 1))
								{
									if (!func_235(129, 0))
									{
										if (!func_658())
										{
											func_379("UW_TUT", -1);
										}
										else
										{
											func_379("UW_TUTC", -1);
										}
										func_378(1);
										unk_0x59A0729D503ED758(&iLocal_1310, 14);
									}
									else
									{
										if (!func_658())
										{
											func_379("UW_HIDE", -1);
										}
										else
										{
											func_379("UW_HIDEC", -1);
										}
										func_378(1);
										unk_0x59A0729D503ED758(&iLocal_1310, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_748(unk_0xA34E7C2A5118D638(), 1, 1) && Local_732[unk_0x935FA14EDA695A82() /*18*/].f_1 != 0)
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4418, 1))
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4418), 1);
				}
			}
			else if (unk_0xDCC86F723E82125E(Global_2458121.f_4418, 1))
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4418), 1);
			}
		}
	}
}

void func_627(bool bParam0)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam0)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	unk_0x2BE3C7FA4FCCA784(0, 69, 1);
	unk_0x2BE3C7FA4FCCA784(0, 70, 1);
	unk_0x2BE3C7FA4FCCA784(0, 92, 1);
	unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	unk_0x2BE3C7FA4FCCA784(0, 91, 1);
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 99, 1);
	unk_0x2BE3C7FA4FCCA784(0, 100, 1);
	unk_0x2BE3C7FA4FCCA784(0, 65, 1);
	unk_0x2BE3C7FA4FCCA784(0, 105, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
	unk_0x2BE3C7FA4FCCA784(0, 51, 1);
	unk_0x2BE3C7FA4FCCA784(0, 47, 1);
	unk_0x2BE3C7FA4FCCA784(0, 24, 1);
	unk_0x2BE3C7FA4FCCA784(0, 257, 1);
}

void func_628(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam2);
}

int func_629(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x277ECDA23D8CCEB4(iParam0, iParam1))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam0, iParam1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iVar0))
				{
					iVar1 = unk_0x66B735F5B005FAD7(unk_0x6D5BB810CC209E15(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x74CAAD9E721B315D(iVar0, iVar3))
						{
							if (unk_0xC0ADAF0814175B68(iVar0, iVar3) == iParam0)
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

var func_630(char* sParam0, char* sParam1)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_631()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_7[iVar0]) && unk_0xFEA25F5BCFDBD741(Local_98.f_7[iVar0]))
		{
			iVar1 = unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]);
			if (unk_0x95CCECA3948CFE7B(iVar1) && !unk_0xB6900B8CB0ABBD2B(iVar1))
			{
				unk_0x30528FBE2EACEA71(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_632(struct<3> Param0)
{
	Global_2391046 = { Param0 };
	Global_2391049 = 1;
}

void func_633()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_649(iVar0);
				break;
			
			case 168:
				func_634(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_634(int iParam0)
{
	int iVar0;
	
	unk_0x74238B7708290D43(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 405:
			func_648(iParam0);
			break;
		
		case 408:
			func_647(iParam0);
			break;
		
		case 407:
			func_646(iParam0);
			break;
		
		case 406:
			func_645(iParam0);
			break;
		
		case 411:
			func_644(iParam0);
			break;
		
		case 413:
			func_641(iParam0);
			break;
		
		case 414:
			func_635(iParam0);
			break;
	}
}

void func_635(int iParam0)
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
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x691BFDC1728FD714(Local_98.f_73[iVar6]))
		{
			return;
		}
		if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6, iVar6))
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_271, iVar6))
			{
				if (func_94(iVar6))
				{
					if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_73[iVar6])))
					{
						if (unk_0x7E35ED80132399B0(unk_0xA34E7C2A5118D638(), unk_0xF8A3C382964380BC(Local_98.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0x9441A8CA63B60B76(unk_0xA34E7C2A5118D638(), unk_0xF8A3C382964380BC(Local_98.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_658())
				{
					if (Local_98.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = unk_0x20A20BF765914E37(Local_98.f_465[0 /*4*/].f_2);
						if (iVar9 != func_25())
						{
							if (iVar9 == unk_0xA34E7C2A5118D638())
							{
								bVar8 = true;
							}
						}
					}
					else if (unk_0x691BFDC1728FD714(Local_98.f_7[0]))
					{
						if (func_103(Local_98.f_7[0]))
						{
							iVar11 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[0]), -1);
							if (iVar11 != 0)
							{
								if (unk_0xA815CBE767EFA3CB(iVar11))
								{
									iVar10 = unk_0x8ACC9D9AC6076DCB(iVar11);
									if (iVar10 == unk_0xA34E7C2A5118D638())
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
			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
			{
				iVar4 = func_640();
				iVar12 = unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_639(iVar12))
				{
					iVar3 = func_41(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar14]) && !unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar14)], func_84(iVar14)))
						{
							iVar13++;
							unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar14)]), func_84(iVar14));
						}
						iVar14++;
					}
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 = (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8++;
				}
				if (Local_715.f_11 == 0)
				{
					Local_715.f_11 = unk_0x20F8506526D25CE0();
				}
				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
				{
					Local_715.f_7 = (Local_715.f_7 + iVar4);
					func_637(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_636();
				}
			}
			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar6);
		}
	}
}

void func_636()
{
	if (!func_20(&uLocal_3615) || (func_20(&uLocal_3615) && func_17(&uLocal_3615, 2000, 0)))
	{
		unk_0xC4EE38A4CFF7544C(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_100(&uLocal_3615);
		func_18(&uLocal_3615, 0, 0);
	}
}

var func_637(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_419(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_638()
{
	if (func_658())
	{
		return Global_262145.f_9224;
	}
	return Global_262145.f_9163;
}

bool func_639(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_640()
{
	if (func_658())
	{
		return Global_262145.f_9223;
	}
	return Global_262145.f_9162;
}

void func_641(int iParam0)
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
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6, iVar6))
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_271, iVar6))
			{
				if (func_643(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_642(iVar6))
				{
					if (func_94(iVar6))
					{
						if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_73[iVar6])))
						{
							if (unk_0x7E35ED80132399B0(unk_0xA34E7C2A5118D638(), unk_0xF8A3C382964380BC(Local_98.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0x9441A8CA63B60B76(unk_0xA34E7C2A5118D638(), unk_0xF8A3C382964380BC(Local_98.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_658())
					{
						if (Local_98.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = unk_0x20A20BF765914E37(Local_98.f_465[0 /*4*/].f_2);
							if (iVar9 != func_25())
							{
								if (iVar9 == unk_0xA34E7C2A5118D638())
								{
									bVar8 = true;
								}
							}
						}
						else if (unk_0x691BFDC1728FD714(Local_98.f_7[0]))
						{
							if (func_103(Local_98.f_7[0]))
							{
								iVar11 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[0]), -1);
								if (iVar11 != 0)
								{
									if (unk_0xA815CBE767EFA3CB(iVar11))
									{
										iVar10 = unk_0x8ACC9D9AC6076DCB(iVar11);
										if (iVar10 == unk_0xA34E7C2A5118D638())
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
					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
					{
						iVar3 = func_41(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar12]) && !unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar12)], func_84(iVar12)))
							{
								iVar13++;
								unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar12)]), func_84(iVar12));
							}
							iVar12++;
						}
						Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 = (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
						{
							iVar4 = func_640();
							iVar4 = (iVar4 * iVar3);
							Local_715.f_7 = (Local_715.f_7 + iVar4);
							func_637(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_636();
							if (Local_715.f_11 == 0)
							{
								Local_715.f_11 = unk_0x20F8506526D25CE0();
							}
						}
						unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_642(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (Local_732[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_643(int iParam0)
{
	int iVar0;
	
	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (iVar0 != unk_0x935FA14EDA695A82())
			{
				if (Local_732[iVar0 /*18*/].f_11[iParam0] > Local_732[unk_0x935FA14EDA695A82() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_644(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (unk_0x0A9B8F979C3EDBE3("am_kill_list", -1, 0) != func_25())
		{
		}
		if (unk_0x736DBE187CFCC863())
		{
			unk_0x59A0729D503ED758(&(Local_98.f_464), Var0.f_2);
		}
	}
}

void func_645(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		unk_0x59A0729D503ED758(&uLocal_3582, Var0.f_2);
	}
}

void func_646(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		unk_0x59A0729D503ED758(&uLocal_3583, Var0.f_2);
	}
}

void func_647(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(Var0.f_2)], func_84(Var0.f_2)))
		{
			unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(Var0.f_2)]), func_84(Var0.f_2));
		}
	}
}

void func_648(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6, iVar3))
		{
			unk_0x77621132305B133B(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar3);
		}
	}
}

void func_649(int iParam0)
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
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 10))
	{
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6, iVar10))
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_271, iVar10))
				{
					if (unk_0x95CCECA3948CFE7B(Var0.f_0))
					{
						if (unk_0x18BDAFC0B20C2C9E(Var0.f_0))
						{
							if (unk_0x691BFDC1728FD714(Local_98.f_73[iVar10]))
							{
								if (unk_0x95CCECA3948CFE7B(unk_0xF8A3C382964380BC(Local_98.f_73[iVar10])))
								{
									if (unk_0xE6E6D9800E15A76C(Var0.f_0) == unk_0xF8A3C382964380BC(Local_98.f_73[iVar10]))
									{
										if (unk_0x95CCECA3948CFE7B(Var0.f_1))
										{
											if (unk_0x96209AADF56E8FE8(Var0.f_1))
											{
												if (unk_0x4D3C2AC8339BFB4F(Var0.f_1) == unk_0xC8B93D94F8954288())
												{
													if (Var0.f_3)
													{
														iVar13 = unk_0x6D5BB810CC209E15(Var0.f_0);
														if (Local_98.f_27 == joaat("hydra"))
														{
															if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
															{
																iVar16 = func_640();
																if (func_639(iVar13))
																{
																	iVar11 = func_41(iVar13);
																	Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 = (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 + iVar11);
																	iVar16 = (iVar16 * iVar11);
																}
																else
																{
																	Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8++;
																}
																if (Local_715.f_11 == 0)
																{
																	Local_715.f_11 = unk_0x20F8506526D25CE0();
																}
																if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																{
																	Local_715.f_7 = (Local_715.f_7 + iVar16);
																	func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																	func_636();
																}
															}
															unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar10);
														}
														else if (iVar13 == joaat("buzzard"))
														{
															iVar18 = -1;
															iVar18 = -1;
															while (iVar18 <= 3)
															{
																iVar15 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_73[iVar10]), iVar18);
																if (iVar15 != 0)
																{
																	iVar17 = func_650(iVar15);
																	if (iVar17 > -1)
																	{
																		if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar17)], func_84(iVar17)))
																		{
																			if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar17)], func_84(iVar17)))
																			{
																				unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar17)]), func_84(iVar17));
																				iVar16 = func_640();
																				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8++;
																				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																				{
																					Local_715.f_7 = (Local_715.f_7 + iVar16);
																					func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_636();
																				}
																				if (unk_0x4E12F93E42909E85(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar17])))
																				{
																					func_86(&(Local_1326[iVar17 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar18++;
															}
															unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar10);
														}
													}
													else if (!func_103(Local_98.f_73[iVar10]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (unk_0xA815CBE767EFA3CB(unk_0x4D3C2AC8339BFB4F(Var0.f_1)))
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
		if (Local_98.f_27 != joaat("hydra"))
		{
			iVar10 = 0;
			while (iVar10 <= 19)
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar10)], func_84(iVar10)))
				{
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar10)], func_84(iVar10)))
					{
						if (unk_0x95CCECA3948CFE7B(Var0.f_0))
						{
							if (unk_0x96209AADF56E8FE8(Var0.f_0))
							{
								if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar10]))
								{
									if (unk_0x95CCECA3948CFE7B(unk_0xF8A3C382964380BC(Local_98.f_48[iVar10])))
									{
										if (unk_0x4D3C2AC8339BFB4F(Var0.f_0) == unk_0xA84D2F2B8688949A(Local_98.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x95CCECA3948CFE7B(Var0.f_1))
												{
													if (unk_0x96209AADF56E8FE8(Var0.f_1))
													{
														iVar14 = unk_0x4D3C2AC8339BFB4F(Var0.f_1);
														if (unk_0xA815CBE767EFA3CB(iVar14))
														{
															if (iVar14 == unk_0xC8B93D94F8954288())
															{
																if (Var0.f_3)
																{
																	iVar16 = func_640();
																	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
																	{
																		Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8++;
																		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																		{
																			func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			Local_715.f_7 = (Local_715.f_7 + iVar16);
																			func_636();
																		}
																	}
																	if (Local_715.f_11 == 0)
																	{
																		Local_715.f_11 = unk_0x20F8506526D25CE0();
																	}
																	unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar10)]), func_84(iVar10));
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
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6, iVar10))
					{
						if (!unk_0xDCC86F723E82125E(Local_98.f_271, iVar10))
						{
							if (unk_0x95CCECA3948CFE7B(Var0.f_0))
							{
								if (unk_0x18BDAFC0B20C2C9E(Var0.f_0))
								{
									if (unk_0x691BFDC1728FD714(Local_98.f_73[iVar10]))
									{
										if (unk_0x95CCECA3948CFE7B(unk_0xF8A3C382964380BC(Local_98.f_73[iVar10])))
										{
											if (unk_0xE6E6D9800E15A76C(Var0.f_0) == unk_0xF8A3C382964380BC(Local_98.f_73[iVar10]))
											{
												if (unk_0x6D5BB810CC209E15(Var0.f_0) == joaat("savage"))
												{
													if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar10)], func_84(iVar10)))
													{
														if (Var0.f_3)
														{
															if (unk_0x95CCECA3948CFE7B(Var0.f_1))
															{
																if (unk_0x96209AADF56E8FE8(Var0.f_1))
																{
																	iVar14 = unk_0x4D3C2AC8339BFB4F(Var0.f_1);
																	if (unk_0xA815CBE767EFA3CB(iVar14))
																	{
																		if (iVar14 == unk_0xC8B93D94F8954288())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
																				{
																					iVar11 = func_41(joaat("savage"));
																					Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 = (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 + iVar11);
																					iVar16 = func_640();
																					iVar16 = (iVar16 * iVar11);
																					if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																					{
																						func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																						Local_715.f_7 = (Local_715.f_7 + iVar16);
																						func_636();
																						if (Local_715.f_11 == 0)
																						{
																							Local_715.f_11 = unk_0x20F8506526D25CE0();
																						}
																					}
																					iVar19 = iVar10 * 4;
																					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19)]), func_84(iVar19));
																					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 1)]), func_84(iVar19 + 1));
																					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 2)]), func_84(iVar19 + 2));
																					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 3)]), func_84(iVar19 + 3));
																					unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar10);
																				}
																			}
																		}
																	}
																	else if (func_643(iVar10))
																	{
																		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
																		{
																			iVar11 = func_41(joaat("savage"));
																			Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 = (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 + iVar11);
																			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																			{
																				iVar16 = func_640();
																				iVar16 = (iVar16 * iVar11);
																				Local_715.f_7 = (Local_715.f_7 + iVar16);
																				func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																				func_636();
																				if (Local_715.f_11 == 0)
																				{
																					Local_715.f_11 = unk_0x20F8506526D25CE0();
																				}
																			}
																			iVar19 = iVar10 * 4;
																			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19)]), func_84(iVar19));
																			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 1)]), func_84(iVar19 + 1));
																			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 2)]), func_84(iVar19 + 2));
																			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 3)]), func_84(iVar19 + 3));
																			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar10);
																		}
																	}
																	else if (func_642(iVar10))
																	{
																	}
																	else if (unk_0x9441A8CA63B60B76(iVar20, Var0.f_0, &uVar21))
																	{
																		if (iVar20 == unk_0xA34E7C2A5118D638())
																		{
																			if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
																			{
																				iVar11 = func_41(joaat("savage"));
																				Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 = (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 + iVar11);
																				if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																				{
																					iVar16 = func_640();
																					iVar16 = (iVar16 * iVar11);
																					Local_715.f_7 = (Local_715.f_7 + iVar16);
																					func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_636();
																					if (Local_715.f_11 == 0)
																					{
																						Local_715.f_11 = unk_0x20F8506526D25CE0();
																					}
																				}
																				iVar19 = iVar10 * 4;
																				unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19)]), func_84(iVar19));
																				unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 1)]), func_84(iVar19 + 1));
																				unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 2)]), func_84(iVar19 + 2));
																				unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar19 + 3)]), func_84(iVar19 + 3));
																				unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_6), iVar10);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0x95CCECA3948CFE7B(Var0.f_1))
															{
																if (unk_0x96209AADF56E8FE8(Var0.f_1))
																{
																	iVar14 = unk_0x4D3C2AC8339BFB4F(Var0.f_1);
																	if (unk_0xA815CBE767EFA3CB(iVar14))
																	{
																		if (iVar14 == unk_0xC8B93D94F8954288())
																		{
																			iVar12 = unk_0x20F8506526D25CE0();
																			Local_732[unk_0x935FA14EDA695A82() /*18*/].f_11[iVar10] = iVar12;
																		}
																	}
																}
															}
															if (!unk_0x5D42322C7DB888D0(unk_0xE6E6D9800E15A76C(Var0.f_0), 0))
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
				if (!unk_0xDCC86F723E82125E(Local_98.f_272[func_85(iVar10)], func_84(iVar10)))
				{
					if (!unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar10)], func_84(iVar10)))
					{
						if (unk_0x95CCECA3948CFE7B(Var0.f_0))
						{
							if (unk_0x96209AADF56E8FE8(Var0.f_0))
							{
								if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar10]))
								{
									if (unk_0x95CCECA3948CFE7B(unk_0xF8A3C382964380BC(Local_98.f_48[iVar10])))
									{
										if (unk_0x4D3C2AC8339BFB4F(Var0.f_0) == unk_0xA84D2F2B8688949A(Local_98.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x95CCECA3948CFE7B(Var0.f_1))
												{
													if (unk_0x96209AADF56E8FE8(Var0.f_1))
													{
														iVar14 = unk_0x4D3C2AC8339BFB4F(Var0.f_1);
														if (unk_0xA815CBE767EFA3CB(iVar14))
														{
															if (iVar14 == unk_0xC8B93D94F8954288())
															{
																if (Var0.f_3)
																{
																	if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_17 < 2)
																	{
																		Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8++;
																		if (Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8 <= func_638())
																		{
																			iVar16 = func_640();
																			Local_715.f_7 = (Local_715.f_7 + iVar16);
																			if (Local_715.f_11 == 0)
																			{
																				Local_715.f_11 = unk_0x20F8506526D25CE0();
																			}
																			func_637(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			func_636();
																		}
																	}
																	unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar10)]), func_84(iVar10));
																}
															}
														}
													}
												}
												else
												{
													unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_3[func_85(iVar10)]), func_84(iVar10));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar10]))
				{
				}
				iVar10++;
			}
		}
	}
}

int func_650(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar1]))
			{
				if (unk_0xA84D2F2B8688949A(Local_98.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_651()
{
	int iVar0;
	int iVar1;
	
	if (Local_98.f_27 != joaat("hydra"))
	{
		if (iLocal_3640 == 0)
		{
			iLocal_3640 = 20;
		}
		if (unk_0x691BFDC1728FD714(Local_98.f_48[iLocal_3640]))
		{
			if (!func_30(Local_98.f_48[iLocal_3640]))
			{
				iVar0 = unk_0x3B5023528CDA3E5F(unk_0xA84D2F2B8688949A(Local_98.f_48[iLocal_3640]));
				if (iLocal_3641[iLocal_3640] != iVar0)
				{
					iLocal_3641[iLocal_3640] = iVar0;
					unk_0x2D1DE6BF82DCF36D(Local_98.f_48[iLocal_3640], 1);
				}
			}
		}
		iLocal_3640++;
		if (iLocal_3640 == 23)
		{
			iLocal_3640 = 20;
		}
	}
	if (Local_98.f_27 != joaat("hydra") && Local_98.f_27 != joaat("rhino"))
	{
		if (!bLocal_3673)
		{
			if (func_92() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0x691BFDC1728FD714(Local_98.f_73[iVar1]))
					{
						if (func_103(Local_98.f_73[iVar1]))
						{
							if (unk_0x6D5BB810CC209E15(unk_0xF8A3C382964380BC(Local_98.f_73[iVar1])) == joaat("savage"))
							{
								unk_0x2D1DE6BF82DCF36D(Local_98.f_73[iVar1], 1);
								bLocal_3673 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0x691BFDC1728FD714(Local_98.f_73[iLocal_3666]))
	{
		if (func_103(Local_98.f_73[iLocal_3666]))
		{
			iVar0 = unk_0x3B5023528CDA3E5F(unk_0xA84D2F2B8688949A(Local_98.f_73[iLocal_3666]));
			if (iLocal_3667[iLocal_3666] != iVar0)
			{
				iLocal_3667[iLocal_3666] = iVar0;
				if (!bLocal_3673)
				{
					unk_0x2D1DE6BF82DCF36D(Local_98.f_73[iLocal_3666], 1);
				}
			}
		}
	}
	iLocal_3666++;
	if (iLocal_3666 == 5)
	{
		iLocal_3666 = 0;
	}
}

void func_652()
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
		if (unk_0xDCC86F723E82125E(uLocal_3584, iVar0))
		{
			if (Local_98.f_85[iVar0] != 2)
			{
				unk_0x77621132305B133B(&iLocal_3584, iVar0);
			}
		}
		if (unk_0x691BFDC1728FD714(Local_98.f_48[iVar0]))
		{
			func_656(iVar0);
			if (!func_30(Local_98.f_48[iVar0]))
			{
				switch (Local_98.f_85[iVar0])
				{
					case 1:
						if (unk_0xFEA25F5BCFDBD741(Local_98.f_48[iVar0]))
						{
							if (unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 0))
							{
								uVar2 = unk_0x275BEBE583A163B5(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 0);
								uVar1 = unk_0x6D5BB810CC209E15(uVar2);
								if (unk_0xAF40E7422A6D9D80(uVar1))
								{
									if (unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1273030092) != 1 && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0xC0ADAF0814175B68(iVar2, -1) == unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]))
										{
											iVar9 = func_26();
											if (iVar9 != func_25())
											{
												uVar10 = unk_0xCF4C00513A86E840(iVar9);
												if (!unk_0x2DC9BA2299B45EA6(uVar10))
												{
													if (func_24(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { unk_0x44C17CCB85A88A1F(iVar10, 1) };
														unk_0x53ADC9115BDB0CDD(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0xE924C2C283992918(iVar1))
								{
									if (unk_0xC0ADAF0814175B68(iVar2, -1) == unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1273030092) != 1 && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1311[iVar14] != Local_98.f_110[iVar14]))
									{
										if (unk_0xC0ADAF0814175B68(iVar2, -1) == unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]))
										{
											iVar13 = Local_98.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = unk_0x20A20BF765914E37(iVar13);
												if (iVar9 != func_25())
												{
													iVar10 = unk_0xCF4C00513A86E840(iVar9);
													if (!unk_0x2DC9BA2299B45EA6(iVar10))
													{
														Var3 = { unk_0x44C17CCB85A88A1F(iVar10, 1) };
														unk_0x0A066ABD54AB94B7(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 100, 50);
														if (iLocal_1311[iVar14] != Local_98.f_110[iVar14])
														{
															iLocal_1311[iVar14] = Local_98.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1273030092) != 1 && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1273030092) != 0) && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 1306903184) != 0) && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0xC0ADAF0814175B68(iVar2, -1) == unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]))
									{
										iVar9 = func_26();
										if (iVar9 != func_25())
										{
											iVar10 = unk_0xCF4C00513A86E840(iVar9);
											if (!unk_0x2DC9BA2299B45EA6(iVar10))
											{
												fVar11 = func_24(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													unk_0xB01C54FED727B532(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), unk_0x44C17CCB85A88A1F(iVar10, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													unk_0xC2E4F4B0B73CFE01(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xFEA25F5BCFDBD741(Local_98.f_48[iVar0]))
						{
							if (!func_21())
							{
								if (unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1442466670) != 1 && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0x277ECDA23D8CCEB4(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 0))
									{
										if (!unk_0xDCC86F723E82125E(iLocal_3584, iVar0))
										{
											iVar12 = func_655(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												unk_0x937BE3A0F630EFAD(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0xDCC86F723E82125E(iLocal_3584, iVar0))
											{
												func_654(iVar0, func_98(1));
												unk_0x59A0729D503ED758(&iLocal_3584, iVar0);
											}
										}
									}
									else
									{
										unk_0x937BE3A0F630EFAD(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -251125078) != 1 && unk_0x090C65D5190A249D(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_653() };
							unk_0x5124C5FA52D2AF3E(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]));
							unk_0xAAD662D7E0D59F4C(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), 1);
							unk_0xFF45E8546235908A(unk_0xA84D2F2B8688949A(Local_98.f_48[iVar0]), Var6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_653()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
		{
			return unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_98.f_30[0 /*3*/];
}

void func_654(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 411;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iParam1);
	}
}

int func_655(int iParam0, float fParam1)
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
		if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar3]))
		{
			if (func_103(Local_98.f_7[iVar3]))
			{
				iVar7 = unk_0xC0ADAF0814175B68(unk_0xF8A3C382964380BC(Local_98.f_7[iVar3]), -1);
				if (!unk_0x2DC9BA2299B45EA6(iVar7))
				{
					if (unk_0xA815CBE767EFA3CB(iVar7))
					{
						Var4 = { unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iVar3]), 1) };
						fVar2 = func_473(iParam0, Var4, 1);
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

void func_656(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_30(Local_98.f_48[iParam0]))
	{
		if (unk_0xFEA25F5BCFDBD741(Local_98.f_48[iParam0]))
		{
			if (unk_0x7F13E3D2383CF15F(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0])))
			{
				uVar0 = unk_0x275BEBE583A163B5(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0]), 0);
				if (unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(uVar0)) || unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iVar0)))
				{
					if (!unk_0x5D42322C7DB888D0(iVar0, 0))
					{
						unk_0xFE93132CC8944C8C(unk_0xA84D2F2B8688949A(Local_98.f_48[iParam0]), 5);
					}
				}
			}
		}
	}
}

void func_657(struct<3> Param0)
{
	Global_1573879.f_6 = { Param0 };
}

bool func_658()
{
	return unk_0xDCC86F723E82125E(Local_98.f_3, 8);
}

void func_659(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_660("kwUfKUus6EuQyNSL8KpY-w");
					func_660("yMTOFLfO2UKwzKrmgPP7kg");
					func_660("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_660("tP5HSeCA0UiHnkRzakdO2Q");
					func_660("uEkrqoerQEmQ0uZRtp4rkw");
					func_660("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_660("UOTaXepxrUOUEU7QtfBvGQ");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_660("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_660("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_660("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_660("uEkrqoerQEmQ0uZRtp4rkw");
					func_660("92t91kL3Wkqvl2Kc82cNSA");
					func_660("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_660("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_660("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_660("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_660("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_660("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_660("fOfm7nzMLkav0ldcSCNAzA");
					func_660("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_660("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_660("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_660("Ma78E44OMkGfYPmCPZXUNA");
					func_660("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_660("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_660("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_660("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_660("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_660("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_660("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_660("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_660("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_660("3AAj-muvN0iHI5IMyGlboA");
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
							func_660("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_660("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_660("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_660("fOfm7nzMLkav0ldcSCNAzA");
							func_660("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_660("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_660("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_660("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_660("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_660("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_660("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_660("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_660("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_660("fOfm7nzMLkav0ldcSCNAzA");
							func_660("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_660("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_660("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_660("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_660("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_660("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_660("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_660("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_660("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_660("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_660("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_660("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_660("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_660("aGBjo2rKi0yMDLl3a2ATGA");
									func_660("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_660("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_660("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_660("f2lnL6wZPkGWUowu0yLm1Q");
									func_660("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_660("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_660("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_660("W-OJzHlM-0ym9PsIASYZtw");
									func_660("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_660("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_660("TjGz31AMYE6bGCjAIitu6w");
									func_660("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_660("QmlvLMLCwkOvoZlkAstYxw");
									func_660("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_660("BktATxH9R0Wp2x0kWSbqjw");
									func_660("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_660("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_660("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_660("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_660("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_660("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_660("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_660("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_660("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_660("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_660("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_660(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	iVar0 = unk_0x7CBED6EFED40E7EB(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xDCC86F723E82125E(Global_2359718[iVar1 /*26*/].f_12, 11))
		{
			if (func_661(&(Global_2359718[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xDCC86F723E82125E(Global_2359718[iVar1 /*26*/].f_13, 26))
				{
					unk_0x59A0729D503ED758(&(Global_2359718[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_661(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_143(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_662(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_662(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_143(uParam0);
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

void func_663()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 12))
	{
		func_186();
	}
	if (func_658())
	{
		if (iLocal_3574 != Local_98.f_12)
		{
			iLocal_3574 = Local_98.f_12;
			func_186();
		}
	}
	if (!func_194())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0x6B4865E08E90ACC5(uLocal_1321[iVar0]))
			{
				if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
				{
					if (func_103(Local_98.f_7[iVar0]))
					{
						Var1 = { unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0) };
						if (!func_664(iVar0, Var1))
						{
							if (!unk_0xDCC86F723E82125E(Local_98.f_13, iVar0))
							{
								uLocal_1321[iVar0] = unk_0x361E437CE4AD5532(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]));
								unk_0x31FDDAFCCFEFA478(uLocal_1321[iVar0], 429);
								func_188(&(uLocal_1321[iVar0]), 29);
								if (!unk_0xDCC86F723E82125E(iLocal_1309, 20))
								{
									unk_0x2D482C2DD6BFCD09(uLocal_1321[iVar0], 1);
									unk_0xD66C551FC33EDE83(uLocal_1321[iVar0], 7000);
									unk_0x59A0729D503ED758(&iLocal_1309, 20);
								}
								unk_0xEB19FBC5156AAE3A(uLocal_1321[iVar0], 9);
								if (func_658())
								{
									unk_0x8755DAC584918BF9(uLocal_1321[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0x8755DAC584918BF9(uLocal_1321[iVar0], "UW_BLIP");
								}
								if (!unk_0xDCC86F723E82125E(iLocal_1310, 3))
								{
									unk_0x837755F6FCE9B0E2();
									unk_0x59A0729D503ED758(&iLocal_1310, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
			{
				if (!func_103(Local_98.f_7[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uLocal_1321[iVar0]));
				}
				else if (unk_0xDCC86F723E82125E(Local_98.f_13, iVar0))
				{
					unk_0x5356E82C1E5E0C44(&(uLocal_1321[iVar0]));
				}
			}
			else
			{
				unk_0x5356E82C1E5E0C44(&(uLocal_1321[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_186();
	}
}

int func_664(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x691BFDC1728FD714(Local_98.f_7[iVar0]))
			{
				Var1 = { unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_98.f_7[iVar0]), 0) };
				if (func_65(Param1, Var1, 0))
				{
					if (unk_0x6B4865E08E90ACC5(uLocal_1321[iVar0]))
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

int func_665()
{
	return Local_98.f_0;
}

int func_666(int iParam0)
{
	return Local_732[iParam0 /*18*/];
}

void func_667()
{
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 6))
	{
		func_403();
		unk_0x77621132305B133B(&(Global_1573879.f_1), 6);
	}
	if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 7))
	{
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 4) || unk_0xDCC86F723E82125E(Global_1573879.f_1, 16))
		{
			if (((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_322()) && func_748(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 7);
				func_379("FME_PASINT", 30000);
				func_378(1);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 17))
		{
			if (func_227() && !func_222())
			{
				unk_0x77621132305B133B(&(Global_1573879.f_1), 17);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 16);
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 23))
	{
		if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_748(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xB45DF29A98EEAD5D())
		{
			if (func_690())
			{
				func_379("AMEV_GA_RP", -1);
				func_378(1);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 23);
			}
		}
	}
	if (unk_0x2BF05095F2389894() && unk_0x45D1BEB329799891() == 15)
	{
		if (func_216(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0x997F946EBE927086(1344549371))
			{
				unk_0xDB617B399FCCE424(1344549371);
			}
		}
		else if (unk_0x997F946EBE927086(1344549371))
		{
			unk_0x7876EF2FBBB49635(1344549371);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 9))
	{
		if ((((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_322()) && func_748(unk_0xA34E7C2A5118D638(), 1, 1)) && !func_197(unk_0xA34E7C2A5118D638(), 21))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 9);
			func_689(0);
			func_379("FME_TBL00", -1);
			func_378(1);
		}
	}
	if (func_229(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 18))
		{
			if ((func_197(unk_0xA34E7C2A5118D638(), 21) && unk_0xDCC86F723E82125E(Global_1573879.f_1, 20)) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 19))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 18);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 18))
		{
			if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_322()) && func_748(unk_0xA34E7C2A5118D638(), 1, 1)) && unk_0xB66DD474AA9E764E()) && !Global_2458121.f_4642)
			{
				unk_0x77621132305B133B(&(Global_1573879.f_1), 18);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 19);
				func_379("AMTT_RPAS", -1);
				func_378(1);
			}
		}
	}
	if (((((func_229(unk_0xA34E7C2A5118D638()) && !func_196(unk_0xA34E7C2A5118D638())) && func_184(unk_0xA34E7C2A5118D638()) != 146) && !func_195(unk_0xA34E7C2A5118D638())) && !func_688(unk_0xA34E7C2A5118D638())) && !func_678())
	{
		if (func_586(func_184(unk_0xA34E7C2A5118D638())))
		{
			unk_0x30A4F7E00272A0F5(unk_0xA34E7C2A5118D638());
		}
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 22))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 22);
		}
		if (func_217(unk_0xA34E7C2A5118D638()) || func_584())
		{
			if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 10))
			{
				if (func_676(func_184(unk_0xA34E7C2A5118D638())))
				{
					if (func_523(0) && !Global_2391042)
					{
						unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
					}
					func_402(1);
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 10);
			}
		}
		if (func_216(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 11))
			{
				if (!Global_91158.f_8)
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
					func_400(1);
				}
				if (!func_675())
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 13);
					func_585();
				}
				if (!Global_2391042)
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
					if (func_523(0) && !Global_2391042)
					{
						unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
					}
					func_402(1);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 11);
			}
		}
		else
		{
			func_673(0);
		}
	}
	else
	{
		func_673(1);
	}
	func_668();
	if (func_583(func_184(unk_0xA34E7C2A5118D638())) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 21))
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 21);
	}
	if ((func_227() && !func_222()) || func_197(unk_0xA34E7C2A5118D638(), 21))
	{
		if (!unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 10))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 10);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 10))
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 10);
	}
}

void func_668()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_322())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_470(iVar2))
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
				if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 26))
				{
					unk_0x77621132305B133B(&(Global_1573879.f_1), 26);
				}
				func_669(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 26))
	{
		func_100(&(Global_1573879.f_21));
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 26);
	}
}

void func_669(int iParam0, int iParam1)
{
	if (!func_20(&(Global_1573879.f_21)))
	{
		func_18(&(Global_1573879.f_21), 0, 0);
	}
	else if (func_17(&(Global_1573879.f_21), iParam1, 0))
	{
		if (func_364() > 0)
		{
			func_672(iParam0);
			if (func_592("AMEV_LBD_HELP"))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
			func_100(&(Global_1573879.f_21));
		}
	}
	else
	{
		func_671(0);
		func_670();
	}
}

void func_670()
{
	Global_2458121.f_4384 = 0;
}

void func_671(int iParam0)
{
	Global_1338611.f_68 = iParam0;
}

void func_672(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_673(int iParam0)
{
	if ((unk_0xDCC86F723E82125E(Global_1573879.f_1, 11) || (unk_0xDCC86F723E82125E(Global_1573879.f_1, 10) && iParam0)) || (unk_0xDCC86F723E82125E(Global_1573879.f_1, 22) && iParam0))
	{
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 12))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 12);
			func_400(0);
		}
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 13))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 13);
			func_674();
		}
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 14) && !func_223(unk_0xA34E7C2A5118D638(), 0))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 14);
			func_402(0);
		}
		unk_0x77621132305B133B(&(Global_1573879.f_1), 11);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 10);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 22);
	}
}

void func_674()
{
	unk_0x77621132305B133B(&(Global_2458121.f_4552), 0);
}

bool func_675()
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4552, 0);
}

int func_676(int iParam0)
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
			return func_216(unk_0xA34E7C2A5118D638());
		
		case 133:
			return (func_584() || func_677(func_183()));
		
		default:
	}
	return 0;
}

int func_677(int iParam0)
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

int func_678()
{
	if (((((((((func_687() || func_686()) || func_685()) || func_176()) || (func_684() && !unk_0xDC9A5ADFE0C41DD2())) || (func_681() && !func_680())) || Global_2394609) || Global_2394609.f_1 != 0) || Global_2394682 != 0) || (func_679() == 2 && !unk_0xDC9A5ADFE0C41DD2()))
	{
		return 1;
	}
	return 0;
}

int func_679()
{
	return Global_976341;
}

bool func_680()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 27);
}

int func_681()
{
	if (func_683() || func_682())
	{
		return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_84 == 8;
	}
	return 0;
}

var func_682()
{
	return Global_2433098.f_610;
}

bool func_683()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

bool func_684()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 5);
}

bool func_685()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 2);
}

bool func_686()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 20);
}

bool func_687()
{
	return Global_2433098.f_574;
}

bool func_688(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		if ((func_227() && !func_222()) || func_197(unk_0xA34E7C2A5118D638(), 21))
		{
			return 1;
		}
		if (func_20(&(Global_1573879.f_13)))
		{
			if (!func_17(&(Global_1573879.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_100(&(Global_1573879.f_13));
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9);
}

void func_689(int iParam0)
{
	int iVar0;
	
	iVar0 = func_244(2507, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 0))
		{
			unk_0x59A0729D503ED758(&iVar0, 0);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 1))
		{
			unk_0x59A0729D503ED758(&iVar0, 1);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 2))
		{
			unk_0x59A0729D503ED758(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 3))
		{
			unk_0x59A0729D503ED758(&iVar0, 3);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 4))
		{
			unk_0x59A0729D503ED758(&iVar0, 4);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 5))
		{
			unk_0x59A0729D503ED758(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 6))
		{
			unk_0x59A0729D503ED758(&iVar0, 6);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 7))
		{
			unk_0x59A0729D503ED758(&iVar0, 7);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 8))
		{
			unk_0x59A0729D503ED758(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 9))
		{
			unk_0x59A0729D503ED758(&iVar0, 9);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 10))
		{
			unk_0x59A0729D503ED758(&iVar0, 10);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 11))
		{
			unk_0x59A0729D503ED758(&iVar0, 11);
		}
	}
	func_434(2507, iVar0, -1, 1);
}

int func_690()
{
	int iVar0;
	
	if (!func_20(&(Global_1573879.f_15)))
	{
		func_18(&(Global_1573879.f_15), 0, 0);
		Global_1573879.f_17 = 0;
	}
	else if (func_17(&(Global_1573879.f_15), 1000, 0))
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(Global_1573879.f_17)))
		{
			iVar0 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(Global_1573879.f_17));
			if (unk_0xDF73DA5E2287C499(iVar0))
			{
				if (func_748(iVar0, 1, 1) && func_691(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_57(unk_0xA34E7C2A5118D638()), func_57(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573879.f_17++;
		if (Global_1573879.f_17 >= 32)
		{
			Global_1573879.f_17 = 0;
			func_100(&(Global_1573879.f_15));
		}
	}
	return 0;
}

int func_691(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_438(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1587175[iVar0 /*410*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_692()
{
	return Global_1573879.f_23;
}

bool func_693(int iParam0)
{
	return !func_694(iParam0);
}

int func_694(int iParam0)
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
			if (Global_262145.f_5057)
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5058)
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5059)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5060)
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_695(4))
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_695(4))
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_695(4))
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_695(4))
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_695(4))
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_695(4))
			{
				return 0;
			}
			if (func_197(unk_0xA34E7C2A5118D638(), 7))
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

int func_695(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_748(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			if (unk_0xDCC86F723E82125E(Global_2417071[iVar0 /*306*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_696()
{
	bool bVar0;
	
	func_700(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_699())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_698())
	{
		return 1;
	}
	if (func_697(157))
	{
		if (!func_687())
		{
			return 1;
		}
	}
	if (func_697(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_395() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_395()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_697(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_698()
{
	return Global_2441381;
}

bool func_699()
{
	return Global_2433098.f_569;
}

void func_700(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_701(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
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

void func_701(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_748(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_702(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_702(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_703()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_704()
{
	int iVar0;
	
	func_186();
	if (func_665() == 4 && Local_98.f_27 != 0)
	{
		unk_0xB7FAA1C591A4664F(Local_98.f_27, 0);
	}
	unk_0x77621132305B133B(&(Global_2458121.f_4418), 1);
	func_591(19, 0);
	func_577(0);
	if (unk_0x935FA14EDA695A82() != -1)
	{
		func_709(129, 0, unk_0xDCC86F723E82125E(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2, 8));
	}
	func_708(129);
	unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 184, 0);
	unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 151, 1);
	unk_0xFD62177C7242216E(1f);
	if (iLocal_1319 > 0)
	{
		unk_0x60B57BC5E51D2074(iLocal_1319);
	}
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 129)
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] = -1;
		}
	}
	if (unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288()) == iLocal_1519)
	{
		unk_0xCBD60E398042F554(unk_0xC8B93D94F8954288(), iLocal_1521);
	}
	func_707();
	func_199(0, 129);
	if (unk_0xDCC86F723E82125E(iLocal_1309, 22))
	{
		func_406();
		unk_0x77621132305B133B(&iLocal_1309, 22);
	}
	if (unk_0xDCC86F723E82125E(iLocal_1309, 9))
	{
		unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
		if (!unk_0xDCC86F723E82125E(iLocal_1309, 10))
		{
			unk_0x233432976E597324("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1320 != -100f)
	{
		func_476(0, 0);
		unk_0x1602E178668EC9AD(fLocal_1320);
	}
	func_475(0);
	if (func_696())
	{
		Local_715.f_5 = 5;
	}
	else if (func_541(2, 0, 0, 0, 0))
	{
		Local_715.f_5 = 6;
	}
	else if (Local_715.f_5 != 1)
	{
		Local_715.f_5 = 2;
	}
	unk_0x7A2D5FC5F94932AA(uLocal_3581);
	Local_715.f_0 = Local_98.f_611;
	Local_715.f_1 = Local_98.f_612;
	Local_715.f_4 = Local_98.f_613;
	Local_715.f_3 = Local_98.f_615;
	if (Local_715.f_9 > 0)
	{
		Local_715.f_10 = (unk_0x20F8506526D25CE0() - Local_715.f_9);
	}
	if ((!Global_262145.f_9411 && !unk_0xDCC86F723E82125E(Local_98.f_3, 8)) || (!Global_262145.f_9412 && unk_0xDCC86F723E82125E(Local_98.f_3, 8)))
	{
		if (Local_715.f_6 > 0)
		{
		}
	}
	if (unk_0xDCC86F723E82125E(Local_98.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0xDCC86F723E82125E(iLocal_1310, 1))
	{
		func_597();
		unk_0xB2D9791D33CC8156(0);
	}
	if (iVar0 == 0)
	{
		func_706(Local_715, Local_98.f_27, Local_98.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x935FA14EDA695A82() != -1)
	{
		func_706(Local_715, Local_98.f_279, Local_732[unk_0x935FA14EDA695A82() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_369(unk_0xA34E7C2A5118D638()))
	{
		func_558(0);
	}
	func_576(0);
	func_621(1);
	func_705();
}

void func_705()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_706(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
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
		if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x6483456300B637A2(&Var1);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xC3F52FE7E766CF71(&Var14);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x01451F2BA643A1A3(&Var28);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x12226DEF09574124(&Var52);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_penned_in"))
		{
			unk_0xA7330A116146362C(&Param0);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x288A17BAB1853D87(&Var66);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x394AF500F69538DA(&Var79);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xD9E663B83CF84644(&Var93);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0xF4D6757401B12AC1(&Var107);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xC382FB77214E8E89(&Var123);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x2FB576B2B4703629(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x533E1F35BAEA394D(&Var150);
			}
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x9987C8881E457B06(&Var164);
		}
	}
}

void func_707()
{
	unk_0xC2389B725A8A1CD3(iLocal_1520);
	unk_0xC2389B725A8A1CD3(iLocal_1519);
}

void func_708(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_709(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 13))
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 13);
		}
		if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 14))
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 14);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 21))
	{
		unk_0x77621132305B133B(&(Global_1573879.f_1), 21);
	}
	func_733();
	unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
	unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_732(func_184(unk_0xA34E7C2A5118D638()));
		func_591(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xA34E7C2A5118D638() != -1) && func_731(unk_0xA34E7C2A5118D638()) >= 12)
		{
			func_730(2519, -1);
			iVar1 = func_244(2519, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 5);
			}
		}
		func_596();
		func_729();
		func_728();
		if ((!func_215(unk_0xA34E7C2A5118D638()) && !func_213(unk_0xA34E7C2A5118D638())) && !func_727())
		{
			func_716();
		}
		func_715();
		if (!unk_0xDCC86F723E82125E(Global_1722044.f_3, 0) && !unk_0xDCC86F723E82125E(Global_1722044.f_3, 1))
		{
			func_403();
		}
		func_714();
		unk_0x77621132305B133B(&(Global_2458121.f_1638), 2);
		func_491();
		func_713();
	}
	if (unk_0x997F946EBE927086(1344549371))
	{
		unk_0x7876EF2FBBB49635(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xA34E7C2A5118D638() != -1 && !func_197(unk_0xA34E7C2A5118D638(), 21)) && !func_223(unk_0xA34E7C2A5118D638(), 0))
		{
			func_402(0);
			func_400(0);
			func_712();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_545(26, -1))
		{
			Global_2443244 = -1;
			func_543(26, -1);
		}
	}
	if (!func_710())
	{
		Global_2457030 = 1;
	}
}

int func_710()
{
	if (((!func_346(unk_0xA34E7C2A5118D638()) && !func_331(unk_0xA34E7C2A5118D638())) && func_184(unk_0xA34E7C2A5118D638()) != 146) && !func_711())
	{
		return 0;
	}
	return 1;
}

int func_711()
{
	if ((Global_1613622 == 0 && unk_0xDC9A5ADFE0C41DD2()) && (((((Global_1613622.f_5 != 0 || unk_0xDCC86F723E82125E(Global_1613622.f_4, 15)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 18)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 19)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 28)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 27)))
	{
		return 1;
	}
	return 0;
}

void func_712()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xDCC86F723E82125E(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xDCC86F723E82125E(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0x77621132305B133B(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_713()
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_6 = 0;
}

void func_714()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573879 = { Var0 };
}

void func_715()
{
	var uVar0;
	
	Global_1318847 = uVar0;
}

void func_716()
{
	Global_2404919.f_20 = { Global_2406723 };
	Global_2404919.f_22 = { Global_2406725 };
	func_725();
	func_717(1, 1);
}

void func_717(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406742 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406742 };
		Global_2404919.f_39.f_49 = { Global_2406742.f_49 };
		Global_2404919.f_39.f_52 = Global_2406742.f_52;
		Global_2404919.f_39.f_53 = Global_2406742.f_53;
	}
	if (bParam0)
	{
		func_724();
	}
	func_720(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
	func_719(0);
	func_718();
}

void func_718()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x46CF50E0E5A24635())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_719(bool bParam0)
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

void func_720(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		Global_2404919.f_1137 = iParam10;
		func_722();
		func_721(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1140 = iParam3;
		Global_2404919.f_1141 = iParam4;
		Global_2404919.f_1138 = iParam5;
		Global_2404919.f_1139 = iParam6;
		Global_2404919.f_1142 = iParam7;
		Global_2404919.f_1143 = iParam8;
		Global_2404919.f_1144 = iParam9;
	}
	else
	{
		func_722();
		func_721(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_721(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409431 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x46CF50E0E5A24635();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_722()
{
	func_723();
	Global_2404919.f_631 = 0;
}

void func_723()
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

void func_724()
{
	Global_2404919.f_347 = { Global_2407050 };
}

void func_725()
{
	func_726();
	Global_2404919.f_1275 = 0;
}

void func_726()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404919.f_1276[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_727()
{
	return Global_1573828;
}

void func_728()
{
	Global_2458121.f_4552 = 0;
}

void func_729()
{
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1 = 0;
	}
}

void func_730(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_244(iParam0, func_226(iParam1), 0);
	iVar0++;
	if (!func_441(iParam0))
	{
		func_434(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_435(iParam0, iVar0, iParam1, 1);
	}
}

int func_731(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_192.f_6;
}

int func_732(int iParam0)
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
			if (func_216(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_733()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 3) || unk_0xDCC86F723E82125E(Global_2458121.f_1636, 4))
	{
		if (unk_0xD5DFCA69ACAA20E3() || unk_0xE71FCE10773CF7B0())
		{
			unk_0x31E6EB2040318451(800);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 5))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 5);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 3))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 3);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 4))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 4);
	}
	func_736(0);
	func_735(0);
	func_734(0);
}

void func_734(int iParam0)
{
	if (Global_2458121.f_4372 != iParam0)
	{
		Global_2458121.f_4372 = iParam0;
	}
}

void func_735(bool bParam0)
{
	if (Global_2458121.f_4371 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2458121.f_4371 = bParam0;
	}
}

void func_736(int iParam0)
{
	if (Global_2458121.f_4369 != iParam0)
	{
		Global_2458121.f_4369 = iParam0;
	}
}

void func_737(struct<20> Param0)
{
	int iVar0;
	
	func_746(func_747(Param0.f_0), Param0);
	unk_0xB575A770677DC316(24);
	unk_0xC908ABD9A1B6E6E6(9);
	func_745(0, -1, 0);
	func_743(129);
	unk_0xFE7B095449D5F053(&Local_98, 617);
	unk_0x99592530153DB318(&Local_732, 577);
	func_742(1);
	if (!func_741())
	{
		func_704();
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		unk_0x6ECAEE4901F465A1(0);
		if (unk_0x736DBE187CFCC863())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_98.f_17[iVar0] = func_25();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_98.f_22[iVar0] = func_25();
				Local_98.f_256[iVar0] = -1;
				Local_98.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0x3A7FF4BAFC26BDFD(&(Local_98.f_611), &(Local_98.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1311[iVar0] = -1;
			iVar0++;
		}
		Local_715.f_2 = unk_0x19EE47A00B170BB8();
		Local_715.f_8 = unk_0x20F8506526D25CE0();
		func_591(19, 1);
		func_738();
		if (func_194())
		{
			unk_0x59A0729D503ED758(&(Local_732[unk_0x935FA14EDA695A82() /*18*/].f_2), 7);
		}
		Local_732[unk_0x935FA14EDA695A82() /*18*/].f_9 = -1;
		Global_2458121.f_4638 = -1;
		Local_732[unk_0x935FA14EDA695A82() /*18*/] = 0;
	}
	else
	{
		func_704();
	}
}

void func_738()
{
	int iVar0;
	
	unk_0x4A606A8BE6924115("relUWPlayer", &iLocal_1519);
	unk_0x4A606A8BE6924115("relUWAi", &iLocal_1520);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x6CCF5F545348D54E(1, Global_1574194[iVar0], iLocal_1519);
		unk_0x6CCF5F545348D54E(1, iLocal_1519, Global_1574194[iVar0]);
		unk_0x6CCF5F545348D54E(1, Global_1574194[iVar0], iLocal_1520);
		unk_0x6CCF5F545348D54E(1, iLocal_1520, Global_1574194[iVar0]);
		unk_0x6CCF5F545348D54E(1, iLocal_1519, joaat("COP"));
		unk_0x6CCF5F545348D54E(1, joaat("COP"), iLocal_1519);
		unk_0x6CCF5F545348D54E(1, iLocal_1519, Global_1574234[5]);
		unk_0x6CCF5F545348D54E(1, Global_1574234[5], iLocal_1519);
		unk_0x6CCF5F545348D54E(1, iLocal_1519, Global_1574227);
		unk_0x6CCF5F545348D54E(1, Global_1574227, iLocal_1519);
		iVar0++;
	}
	unk_0x6CCF5F545348D54E(5, iLocal_1519, iLocal_1520);
	unk_0x6CCF5F545348D54E(5, iLocal_1520, iLocal_1519);
	unk_0x6CCF5F545348D54E(1, 2017343592, iLocal_1520);
	unk_0x6CCF5F545348D54E(5, 2017343592, iLocal_1519);
	func_740(1, &iLocal_1520);
	func_739(&iLocal_1520);
	func_739(&iLocal_1519);
}

void func_739(int iParam0)
{
	unk_0x6CCF5F545348D54E(1, -1865950624, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, -1865950624);
	unk_0x6CCF5F545348D54E(1, 296331235, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, 296331235);
	unk_0x6CCF5F545348D54E(1, 1166638144, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, 1166638144);
	unk_0x6CCF5F545348D54E(1, 2037579709, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, 2037579709);
	unk_0x6CCF5F545348D54E(1, 2017343592, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, 2017343592);
	unk_0x6CCF5F545348D54E(1, -1821475077, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, -1821475077);
	unk_0x6CCF5F545348D54E(1, 1782292358, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, 1782292358);
	unk_0x6CCF5F545348D54E(1, -1033021910, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, -1033021910);
	unk_0x6CCF5F545348D54E(1, -1285976420, *iParam0);
	unk_0x6CCF5F545348D54E(1, *iParam0, -1285976420);
}

void func_740(int iParam0, int iParam1)
{
	unk_0x6CCF5F545348D54E(iParam0, joaat("COP"), *iParam1);
	unk_0x6CCF5F545348D54E(iParam0, *iParam1, joaat("COP"));
	unk_0x6CCF5F545348D54E(iParam0, joaat("army"), *iParam1);
	unk_0x6CCF5F545348D54E(iParam0, *iParam1, joaat("army"));
	unk_0x6CCF5F545348D54E(iParam0, -183807561, *iParam1);
	unk_0x6CCF5F545348D54E(iParam0, *iParam1, -183807561);
}

int func_741()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_699())
		{
			return 0;
		}
		if (func_697(155))
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

void func_742(bool bParam0)
{
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_395())
	{
		return;
	}
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_725) || Global_2411623.f_725 == unk_0x46CF50E0E5A24635())
	{
		if (bParam0)
		{
			Global_2411623.f_725 = unk_0x46CF50E0E5A24635();
		}
		else
		{
			Global_2411623.f_725 = -1;
		}
	}
}

void func_743(int iParam0)
{
	func_714();
	func_744();
	func_728();
	Global_1573879.f_4 = iParam0;
	Global_1573879.f_5 = iParam0;
	func_590(iParam0, -1);
	func_6(&(Global_1573879.f_18), 0, 0);
	Global_2458121.f_4414 = 0;
	Global_2442022[0] = func_25();
	Global_2442022[1] = func_25();
	Global_2442022[2] = func_25();
	Global_2442022[3] = func_25();
	Global_2442022[4] = func_25();
	func_713();
	func_321();
	if (func_227() && !func_222())
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 16);
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 17);
	}
}

void func_744()
{
	var uVar0;
	
	Global_1573903 = uVar0;
}

int func_745(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_705();
			}
			else
			{
				return 0;
			}
		}
		if (!func_162())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_705();
					}
					else
					{
						return 0;
					}
				}
				if (func_699())
				{
					if (!bParam2)
					{
						func_705();
					}
					else
					{
						return 0;
					}
				}
				if (func_697(155))
				{
					if (!bParam2)
					{
						func_705();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_705();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_705();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_705();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_746(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_705();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_747(int iParam0)
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

int func_748(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

