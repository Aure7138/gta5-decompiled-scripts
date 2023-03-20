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
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	struct<617> Local_96 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_713 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_725[4] = { 0, 0, 0, 0 };
	struct<18> Local_730[32];
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	float fLocal_1318 = 0f;
	var uLocal_1319[4] = { 0, 0, 0, 0 };
	struct<8> Local_1324[24];
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520[4] = { 0, 0, 0, 0 };
	int iLocal_1525[4] = { 0, 0, 0, 0 };
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	struct<47> Local_1533[32];
	struct<104> Local_3038 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 32;
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
	int iLocal_3571 = 0;
	int iLocal_3572 = 0;
	int iLocal_3573 = 0;
	var uLocal_3574[4] = { 0, 0, 0, 0 };
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	int iLocal_3582 = 0;
	int iLocal_3583 = 0;
	struct<2> Local_3584[10];
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	struct<2> Local_3615[5];
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	int iLocal_3630 = 0;
	struct<3> Local_3631 = { 0, 0, 0 } ;
	int iLocal_3634 = 0;
	int iLocal_3635 = 0;
	int iLocal_3636 = 0;
	int iLocal_3637 = 0;
	int iLocal_3638 = 0;
	int iLocal_3639[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3664 = 0;
	int iLocal_3665[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3671 = 0;
	var uLocal_3672[4] = { 0, 0, 0, 0 };
	var uLocal_3677[4] = { 0, 0, 0, 0 };
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
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	fLocal_1318 = -100f;
	iLocal_3572 = -1;
	iLocal_3573 = -1;
	iLocal_3636 = -1;
	if (unk_0x17CC0D5008835470() && func_755(unk_0xE0BDAFA1A39552D6(), 0, 1))
	{
		func_744(ScriptParam_0);
	}
	else
	{
		func_711();
	}
	while (true)
	{
		func_710();
		if (func_703())
		{
			func_711();
		}
		else if (func_700(19))
		{
			func_711();
		}
		if (func_699())
		{
			func_711();
		}
		func_674();
		switch (func_673(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if ((func_672() == 1 && Local_96.f_1 != -1) && Local_96.f_2 != -1)
				{
					func_670();
					func_666(129, Local_96.f_1, Local_96.f_2, 0);
					if (Global_2464975.f_4675 == -1)
					{
						if (!func_665())
						{
							Global_2464975.f_4675 = 0;
						}
						else
						{
							Global_2464975.f_4675 = 1;
						}
					}
					func_664(Local_96.f_30[0 /*3*/]);
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/] = 1;
				}
				else if (func_672() == 4)
				{
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_672() == 1)
				{
					func_659();
					func_658();
					func_640();
					func_380();
					func_158();
					func_157();
					func_156();
				}
				else if (func_672() == 4)
				{
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_155(&(Local_96.f_320));
				if (func_154(&(Local_96.f_320)))
				{
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/] = 4;
			
			case 4:
				func_711();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_672())
			{
				case 0:
					if (func_139())
					{
						if (func_134())
						{
							func_131(func_133(129, Local_96.f_1, Local_96.f_2, 0));
							Local_96.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_122();
					func_31();
					func_22();
					if (func_1())
					{
						Local_96.f_0 = 4;
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
	
	if ((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2))
	{
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
	{
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_96.f_241 > 0)
	{
		if (Local_96.f_0 != 4)
		{
			if (func_21())
			{
				if (Local_96.f_241 == 3)
				{
					if (func_19())
					{
						if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_17(&(Local_96.f_322), 3000, 0))
				{
					if (func_19())
					{
						return 1;
					}
				}
			}
		}
		if (Local_96.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_96.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
				{
					if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
					{
						if (!func_14(unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1)), 0))
						{
							if (Local_730[iVar1 /*18*/].f_17 < 2)
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
				if ((!((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2)) && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 6)) && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 15);
				}
				func_5();
			}
			else if (Local_96.f_241 < 3)
			{
				if (func_3())
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 16);
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 15);
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
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
		{
			if (!func_4(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1, 0, 0, 0, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD6B335B6F8116876(iParam0) + 1;
	if (iParam4 || !unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x5B4FEA5F286F0C8F(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0x4321FC7479614822(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x06736567F820A39E())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xCFC04A38F256EE06(iVar2))
					{
						if (unk_0x4E75E5867592AC01(iVar2))
						{
							if (unk_0xB0565BA1AD71378E(unk_0x90CB634380C802C7(iVar2)) == 0)
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
				else
				{
					iVar3 = unk_0x4321FC7479614822(iParam0, (iVar0 - 1));
					if (!unk_0xCFC04A38F256EE06(iVar3))
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
	if (Local_96.f_241 != 3)
	{
		func_7();
		func_6(&(Local_96.f_324), 0, 0);
		Local_96.f_241 = 3;
	}
}

void func_6(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

void func_7()
{
	if (!func_13())
	{
		return;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
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
	
	bVar0 = unk_0x17CC0D5008835470();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x201D90648B2AE3CE();
		Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
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
		unk_0xDC3C901EF33A999B(&(Global_1312577.f_10));
		func_11();
		unk_0x50E6AB5DBF4F6633();
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
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			unk_0xD92C45283BCDA624(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_55);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
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
	unk_0xD6574ACDB39AA1DE(&(Global_1312577.f_10));
	func_11();
	return unk_0xAB0007E3E71F28E1();
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
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312747;
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
		}
		uParam0->f_1 = 1;
	}
}

int func_19()
{
	int iVar0;
	
	if (!func_20(&(Local_96.f_328)))
	{
		func_18(&(Local_96.f_328), 0, 0);
	}
	else if (func_17(&(Local_96.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar0]))
		{
			if (Local_96.f_85[iVar0] < 4)
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
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
		{
			if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0))
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
	
	if (!unk_0x587E5997B76F47FE())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar1]))
		{
			if (!func_30(Local_96.f_48[iVar1]))
			{
				switch (Local_96.f_85[iVar1])
				{
					case 0:
						if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar1]), 0))
						{
							Local_96.f_85[iVar1] = 1;
						}
						else if (unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar1]), 0) && func_29(iVar1))
						{
							Local_96.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_96.f_241 == 1)
						{
							if (!func_21())
							{
								if (unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar1]), 0))
								{
									iVar4 = unk_0x34E1EF1E8BCD1BFC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar1]), 0);
									if (func_28(iVar4, 250f))
									{
										Local_96.f_85[iVar1] = 2;
									}
									else if (unk_0x759D601DDE232B39(unk_0x79469DA5833EACA8(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_96.f_110[iVar0] == -1 || !func_27(iVar1))
												{
													iVar2 = func_26();
													if (iVar2 != func_25())
													{
														iVar3 = unk_0x44A9253132E1DDE0(iVar2);
														if (!unk_0xCFC04A38F256EE06(iVar3))
														{
															if (func_24(iVar4, iVar3, 1) > 250f)
															{
																Local_96.f_110[iVar0] = iVar2;
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
									Local_96.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_96.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_96.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_96.f_241 == 1)
						{
							if (func_21())
							{
								Local_96.f_85[iVar1] = 3;
							}
							else if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
							{
								Local_96.f_85[iVar1] = 3;
							}
							else if (unk_0x7DA173D4FD42F36B(Local_96.f_464, iVar1))
							{
								Local_96.f_85[iVar1] = 1;
								unk_0x99BCB15F954AF579(&(Local_96.f_464), iVar1);
							}
						}
						else
						{
							Local_96.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0x0DA2000F5C8A8ECC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar1])))
						{
							func_23(&(Local_96.f_48[iVar1]));
							Local_96.f_85[iVar1] = 4;
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
	
	if (unk_0xC3A7CFC6468E0BAE(*uParam0))
	{
		uVar0 = unk_0x4C4151C3DEC199DC(*uParam0);
		unk_0x6C430D273FC2EC35(&uVar0);
	}
}

float func_24(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
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
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (iVar0 == func_25())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
			{
				if (Local_730[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_730[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
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
			if (Local_96.f_110[iVar0] != -1)
			{
				iVar3 = Local_96.f_110[iVar0];
				iVar1 = unk_0x801C03D92F1C6755(iVar3);
				if (unk_0xA27C9E8196C79D22(iVar1))
				{
					if (func_755(iVar1, 1, 1))
					{
						if (unk_0x605885F0A8AC6672(iVar1))
						{
							iVar2 = unk_0xBD1E178ABA0E03F1(iVar1);
							iVar3 = iVar2;
							if (Local_730[iVar3 /*18*/].f_17 != 1)
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
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			if (Local_730[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_730[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0));
					iVar2 = unk_0x44A9253132E1DDE0(iVar1);
					if (!unk_0xCFC04A38F256EE06(iVar2))
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
	
	if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0]), 0);
	if (!unk_0x1B6292EA51632C25(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_30(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		return unk_0xCFC04A38F256EE06(unk_0x220B3465A4B1FBA5(uParam0));
	}
	return 1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_96.f_463 > 0)
	{
		if (Local_96.f_28 != Local_96.f_463)
		{
			Local_96.f_28 = Local_96.f_463;
		}
	}
	switch (Local_96.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_96.f_28)
			{
				if (Local_96.f_17[iVar0] == func_25())
				{
				}
				else
				{
					iVar1++;
					if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_119();
			func_118();
			if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 4))
			{
				Local_96.f_463 = iVar1;
			}
			if (func_116())
			{
				func_109();
				Local_96.f_241 = 1;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 4) && func_106() > 1)
			{
				func_105();
				func_109();
				Local_96.f_241 = 1;
			}
			if (!func_665())
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[0]))
				{
					if (!func_103(Local_96.f_7[0]))
					{
						Var2.f_2 = 141;
						func_101(Var2, func_102(unk_0xA9B72300DA155F92(Local_96.f_7[0]), 1, 0));
						Local_96.f_241 = 2;
					}
				}
			}
			if (Local_96.f_241 == 0)
			{
				if (!func_20(&(Local_96.f_330)))
				{
					if (!func_20(&(Local_96.f_326)))
					{
						func_18(&(Local_96.f_330), 0, 0);
					}
				}
				else if (func_20(&(Local_96.f_326)))
				{
					func_100(&(Local_96.f_330));
				}
				else if (func_17(&(Local_96.f_330), func_99(), 0))
				{
					Var2.f_2 = 141;
					func_101(Var2, func_98(1));
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 12);
					func_5();
				}
				if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
				{
					func_5();
				}
			}
			break;
		
		case 1:
			func_34();
			func_32();
			func_105();
			if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
			{
				Local_96.f_241 = 2;
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
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 19))
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
	{
		if (!func_20(&(Local_96.f_332)))
		{
			func_18(&(Local_96.f_332), 0, 0);
			unk_0xE27C8E42A97895CF(&(Local_96.f_3), 7);
		}
		else if (func_17(&(Local_96.f_332), func_33(), 0))
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_3), 6);
		}
	}
}

int func_33()
{
	if (func_665())
	{
		return Global_262145.f_9308;
	}
	return Global_262145.f_9285;
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
	if (Local_96.f_278 > 0)
	{
		if (Local_96.f_279 >= Local_96.f_278)
		{
			if (Local_96.f_254 >= Local_96.f_255)
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_3), 0);
				unk_0xE27C8E42A97895CF(&(Local_96.f_3), 1);
				unk_0xE27C8E42A97895CF(&(Local_96.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_96.f_278 > 0)
		{
			if (Local_96.f_279 >= Local_96.f_278)
			{
				if (Local_96.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[0]);
				}
				if (Local_96.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[1]);
				}
				if (Local_96.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[2]);
				}
				if (Local_96.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[3]);
				}
				if (iVar5 >= Local_96.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar4]))
						{
							if (!func_30(Local_96.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 0);
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 1);
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar4]))
					{
						if (!func_30(Local_96.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_20(&(Local_96.f_347)))
					{
						func_18(&(Local_96.f_347), 0, 0);
					}
					else if (func_17(&(Local_96.f_347), 3000, 0))
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 0);
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 1);
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) || !unk_0x7DA173D4FD42F36B(Local_96.f_3, 1))
	{
		if (Local_96.f_249 >= func_97())
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_3), 0);
			unk_0xE27C8E42A97895CF(&(Local_96.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_96.f_242)
		{
			if (unk_0xC7A68C5C107A1253(Local_96.f_73[iVar0]))
			{
				if (func_96(iVar0))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_245, iVar0))
					{
						if ((Local_96.f_27 != joaat("hydra") && !func_4(unk_0xA9B72300DA155F92(Local_96.f_73[iVar0]), 1, 0, 0, 0, 0)) || Local_96.f_27 == joaat("hydra"))
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_3), 0);
							if (func_20(&(Local_3615[iVar0 /*2*/])))
							{
								func_100(&(Local_3615[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0xA9B72300DA155F92(Local_96.f_73[iVar0]), 1, 0, 0, 0, 0) && unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 0))
							{
								unk_0x99BCB15F954AF579(&(Local_96.f_3), 0);
							}
							if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 18))
							{
								func_95(func_98(1), iVar0);
								unk_0xE27C8E42A97895CF(&(Local_96.f_3), 18);
							}
						}
						else if (func_94(iVar0) || !func_665())
						{
							if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 0))
							{
								unk_0x99BCB15F954AF579(&(Local_96.f_3), 0);
							}
							if (!unk_0x7DA173D4FD42F36B(Local_96.f_303, iVar0))
							{
								func_93(func_98(1), iVar0);
								unk_0xE27C8E42A97895CF(&(Local_96.f_303), iVar0);
							}
						}
						else
						{
							func_23(&(Local_96.f_73[iVar0]));
							if (!unk_0x7DA173D4FD42F36B(Local_96.f_253, iVar0))
							{
								Local_96.f_251 = (Local_96.f_251 - 1);
								if (func_92() > 1)
								{
									if (Local_96.f_252 > 0)
									{
										Local_96.f_302++;
										func_91(iVar0, func_98(1));
									}
								}
								unk_0xE27C8E42A97895CF(&(Local_96.f_253), iVar0);
							}
							func_100(&(Local_3615[iVar0 /*2*/]));
						}
					}
				}
				else if (func_90(iVar0))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_253, iVar0))
					{
						Local_96.f_251 = (Local_96.f_251 - 1);
						if (func_92() > 1)
						{
							if (Local_96.f_252 > 0)
							{
								Local_96.f_302++;
								func_91(iVar0, func_98(1));
							}
						}
						if (Local_96.f_27 == joaat("hydra"))
						{
							Local_96.f_254++;
						}
						unk_0xE27C8E42A97895CF(&(Local_96.f_253), iVar0);
					}
					if (func_20(&(Local_96.f_336[iVar0 /*2*/])))
					{
						func_100(&(Local_96.f_336[iVar0 /*2*/]));
					}
					func_23(&(Local_96.f_73[iVar0]));
				}
				else
				{
					if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 0))
					{
						unk_0x99BCB15F954AF579(&(Local_96.f_3), 0);
					}
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_271, iVar0))
					{
						if (!func_20(&(Local_96.f_336[iVar0 /*2*/])))
						{
							func_18(&(Local_96.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_17(&(Local_96.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0xE27C8E42A97895CF(&(Local_96.f_271), iVar0);
						}
						else if (func_17(&(Local_96.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 18))
								{
									func_95(func_98(1), iVar0);
									unk_0xE27C8E42A97895CF(&(Local_96.f_3), 18);
								}
							}
							else if (func_94(iVar0) || !func_665())
							{
								if (!unk_0x7DA173D4FD42F36B(Local_96.f_303, iVar0))
								{
									func_93(func_98(1), iVar0);
									unk_0xE27C8E42A97895CF(&(Local_96.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_96.f_116)
			{
				if (unk_0xC7A68C5C107A1253(Local_96.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_30(Local_96.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_88((iVar0 * 4 + iVar1)))
							{
								unk_0x99BCB15F954AF579(&(Local_96.f_3), 0);
							}
							else if (func_87(iVar6))
							{
								if (!func_17(&(Local_96.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0xE60A28942E3AC2F4(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_86(&(Local_1324[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_23(&(Local_96.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar6)], func_84(iVar6)))
								{
									if (Local_96.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_83((iVar0 * 4 + iVar1), func_98(1));
										Local_96.f_254++;
									}
								}
								Local_96.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_20(&(Local_96.f_364[iVar6 /*2*/])))
								{
									func_100(&(Local_96.f_364[iVar6 /*2*/]));
								}
								if (unk_0x7DA173D4FD42F36B(Local_96.f_275[func_85(iVar6)], func_84(iVar6)))
								{
									unk_0x99BCB15F954AF579(&(Local_96.f_275[func_85(iVar6)]), func_84(iVar6));
								}
							}
							else
							{
								if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar6)], func_84(iVar6)))
								{
									if (!func_20(&(Local_96.f_364[iVar6 /*2*/])))
									{
										func_18(&(Local_96.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_17(&(Local_96.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0xE27C8E42A97895CF(&(Local_96.f_272[func_85(iVar6)]), func_84(iVar6));
										func_100(&(Local_96.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0x7DA173D4FD42F36B(Local_96.f_275[func_85(iVar6)], func_84(iVar6)))
								{
									unk_0xE27C8E42A97895CF(&(Local_96.f_275[func_85(iVar6)]), func_84(iVar6));
								}
							}
						}
					}
					else if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar6)], func_84(iVar6)) || Local_96.f_27 == joaat("hydra"))
					{
						if (!func_17(&(Local_96.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_23(&(Local_96.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar6)], func_84(iVar6)))
						{
							if (Local_96.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_96.f_254++;
								func_83((iVar0 * 4 + iVar1), func_98(1));
							}
						}
						Local_96.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0x7DA173D4FD42F36B(Local_96.f_275[func_85(iVar6)], func_84(iVar6)))
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_275[func_85(iVar6)]), func_84(iVar6));
						}
					}
					else
					{
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar6)], func_84(iVar6)))
						{
							if (!func_20(&(Local_96.f_364[iVar6 /*2*/])))
							{
								func_18(&(Local_96.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_17(&(Local_96.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_272[func_85(iVar6)]), func_84(iVar6));
								func_100(&(Local_96.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_275[func_85(iVar6)], func_84(iVar6)))
						{
							unk_0xE27C8E42A97895CF(&(Local_96.f_275[func_85(iVar6)]), func_84(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_96.f_249 < func_97())
			{
				if (func_69(iVar0))
				{
				}
				unk_0x99BCB15F954AF579(&(Local_96.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 2))
	{
		if (Local_96.f_247 >= Global_262145.f_8412)
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_96.f_243)
		{
			if (unk_0xC7A68C5C107A1253(Local_96.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0xBDA1F5E8A36BFA07(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iVar1)]), 0))
				{
					unk_0x99BCB15F954AF579(&(Local_96.f_3), 2);
				}
				else if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar7)], func_84(iVar7)))
				{
					if (!func_17(&(Local_96.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_20(&(Local_96.f_364[iVar7 /*2*/])))
					{
						func_100(&(Local_96.f_364[iVar7 /*2*/]));
					}
					func_23(&(Local_96.f_48[(20 + iVar1)]));
					if (Local_96.f_85[(20 + iVar1)] > 0)
					{
						Local_96.f_254++;
						if (func_92() > 1)
						{
							if (Local_96.f_317 > 0)
							{
								Local_96.f_316++;
							}
						}
						func_83((20 + iVar1), func_98(1));
					}
					Local_96.f_85[(20 + iVar1)] = 0;
					if (unk_0x7DA173D4FD42F36B(Local_96.f_275[func_85(iVar7)], func_84(iVar7)))
					{
						unk_0x99BCB15F954AF579(&(Local_96.f_275[func_85(iVar7)]), func_84(iVar7));
					}
				}
				else
				{
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar7)], func_84(iVar7)))
					{
						if (!func_20(&(Local_96.f_364[iVar7 /*2*/])))
						{
							func_18(&(Local_96.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_17(&(Local_96.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0xE27C8E42A97895CF(&(Local_96.f_272[func_85(iVar7)]), func_84(iVar7));
							func_100(&(Local_96.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_275[func_85(iVar7)], func_84(iVar7)))
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_275[func_85(iVar7)]), func_84(iVar7));
					}
				}
			}
			if (Local_96.f_247 < func_68())
			{
				if (func_50(iVar1))
				{
				}
				unk_0x99BCB15F954AF579(&(Local_96.f_3), 2);
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
		if (Local_96.f_252 > 0)
		{
			if (Local_96.f_302 > 0)
			{
				if (Local_96.f_302 >= (Local_96.f_252 - 1))
				{
					if (func_49() <= func_48())
					{
						if (func_47() == 0)
						{
							iVar0 = Local_96.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_96.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_46();
									Local_96.f_279++;
									func_39();
								}
								else if (Local_96.f_318 >= func_38())
								{
									func_46();
									Local_96.f_279++;
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
		if (Local_96.f_317 > 0)
		{
			if (Local_96.f_316 > 0)
			{
				if (Local_96.f_316 >= Local_96.f_317)
				{
					if (Local_96.f_317 >= func_37())
					{
						func_46();
						Local_96.f_279++;
						func_39();
					}
				}
			}
		}
	}
	else if (func_92() == 4)
	{
		if (Local_96.f_316 > 0)
		{
			if (Local_96.f_302 > 0)
			{
				if (Local_96.f_317 > 0)
				{
					if (Local_96.f_316 >= (Local_96.f_317 - 2))
					{
						if (Local_96.f_252 > 0)
						{
							if (Local_96.f_302 >= (Local_96.f_252 - 2))
							{
								if (func_49() <= func_48())
								{
									if (func_47() <= func_36())
									{
										iVar0 = Local_96.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_96.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_46();
												Local_96.f_279++;
												func_39();
											}
											else if (Local_96.f_318 >= func_38())
											{
												func_46();
												Local_96.f_279++;
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
		if (Local_96.f_252 > 0)
		{
			if (Local_96.f_302 > 0)
			{
				if (Local_96.f_302 >= (Local_96.f_252 - 1))
				{
					if (func_49() <= func_48())
					{
						if (func_47() == 0)
						{
							func_46();
							Local_96.f_279++;
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
	
	iVar0 = Local_96.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_96.f_280[iVar0];
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
	return Local_96.f_305[Local_96.f_279];
}

int func_38()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_96.f_278)
	{
		iVar0 = (iVar0 + Local_96.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	if (Local_96.f_29 == -1)
	{
		iVar0 = func_45(Local_96.f_27);
		Local_96.f_29 = unk_0xA6055C735E3DD877(0, iVar0);
		if (func_665())
		{
			if (Local_96.f_27 == joaat("hydra"))
			{
				if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 4;
				}
			}
			else if (Local_96.f_27 == joaat("savage"))
			{
				if (Local_96.f_29 == 0)
				{
					Local_96.f_29 = 1;
				}
				else if (Local_96.f_29 == 1)
				{
					Local_96.f_29 = 2;
				}
				else if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 3;
				}
			}
			else if (Local_96.f_27 == joaat("valkyrie"))
			{
				if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 3;
				}
				else if (Local_96.f_29 == 3)
				{
					Local_96.f_29 = 4;
				}
			}
			else if (Local_96.f_27 == joaat("buzzard"))
			{
				if (Local_96.f_29 == 0)
				{
					Local_96.f_29 = 1;
				}
				else if (Local_96.f_29 == 1)
				{
					Local_96.f_29 = 2;
				}
				else if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 3;
				}
				else if (Local_96.f_29 == 3)
				{
					Local_96.f_29 = 4;
				}
			}
		}
		else if (Local_96.f_27 == joaat("savage"))
		{
			if (Local_96.f_29 == 0)
			{
				Local_96.f_29 = 1;
			}
			else if (Local_96.f_29 == 1)
			{
				Local_96.f_29 = 2;
			}
			else if (Local_96.f_29 == 2)
			{
				Local_96.f_29 = 3;
			}
		}
	}
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
			Local_96.f_280[0] = 4;
			Local_96.f_291[0] = func_44(4);
			Local_96.f_305[0] = func_43(4);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_44(4);
			Local_96.f_305[1] = func_43(4);
			Local_96.f_280[2] = 4;
			Local_96.f_291[2] = func_44(4);
			Local_96.f_305[2] = func_43(4);
			if (Local_96.f_12 <= 2 || !func_665())
			{
				Local_96.f_278 = 3;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_278 = 4;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 4;
				Local_96.f_291[4] = func_44(4);
				Local_96.f_305[4] = func_43(4);
				Local_96.f_278 = 5;
			}
			Local_96.f_255 = func_40();
			if (!func_665())
			{
				Local_96.f_1 = 0;
			}
			else
			{
				Local_96.f_1 = 5;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					Local_96.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_96.f_43[0] = 269.414f;
					Local_96.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_96.f_43[1] = 3.5491f;
					Local_96.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_96.f_43[2] = 54.4509f;
					Local_96.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_96.f_43[3] = 178.1948f;
					Local_96.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_96.f_175[0] = 270.8322f;
					Local_96.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_96.f_175[1] = 177.3506f;
					Local_96.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_96.f_175[2] = 318.1089f;
					Local_96.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_96.f_175[3] = 272.0801f;
					Local_96.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_96.f_175[4] = 104.0591f;
					Local_96.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_96.f_148[0] = 296.4225f;
					Local_96.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_96.f_148[1] = 164.9695f;
					Local_96.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_96.f_148[2] = 136.0596f;
					Local_96.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_96.f_148[3] = 116.379f;
					Local_96.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_96.f_148[4] = 86.6586f;
					Local_96.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_96.f_148[5] = 74.6822f;
					Local_96.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_96.f_148[6] = 206.8863f;
					Local_96.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_96.f_148[7] = 267.8581f;
					Local_96.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_96.f_148[8] = 267.5856f;
					Local_96.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_96.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_96.f_43[0] = 194.8062f;
					Local_96.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_96.f_43[1] = 238.9372f;
					Local_96.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_96.f_43[2] = 16.3071f;
					Local_96.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_96.f_43[3] = 209.9883f;
					Local_96.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_96.f_148[0] = 221.3913f;
					Local_96.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_96.f_148[1] = 246.3415f;
					Local_96.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_96.f_148[2] = 213.4087f;
					Local_96.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_96.f_148[3] = 100.5405f;
					Local_96.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_96.f_148[4] = 289.6017f;
					Local_96.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_96.f_148[5] = 285.6456f;
					Local_96.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_96.f_148[6] = 310.9245f;
					Local_96.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_96.f_148[7] = 46.7117f;
					Local_96.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_96.f_148[8] = 35.9192f;
					Local_96.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_96.f_148[9] = 207.53f;
					Local_96.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_96.f_175[0] = 286.6127f;
					Local_96.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_96.f_175[1] = 124.1428f;
					Local_96.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_96.f_175[2] = 275.0147f;
					Local_96.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_96.f_175[3] = 287.91f;
					Local_96.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_96.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_96.f_43[0] = 172.439f;
					Local_96.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_96.f_43[1] = 53.9805f;
					Local_96.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_96.f_43[2] = 303.2142f;
					Local_96.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_96.f_43[3] = 218.5974f;
					Local_96.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_96.f_148[0] = 264.5842f;
					Local_96.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_96.f_148[1] = 133.7932f;
					Local_96.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_96.f_148[2] = 205.1215f;
					Local_96.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_96.f_148[3] = 66.1065f;
					Local_96.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_96.f_148[4] = 7.8064f;
					Local_96.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_96.f_148[5] = 358.7563f;
					Local_96.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_96.f_148[6] = 142.1748f;
					Local_96.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_96.f_148[7] = 247.816f;
					Local_96.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_96.f_148[8] = 124.4666f;
					Local_96.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_96.f_148[9] = 348.6588f;
					Local_96.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_96.f_175[0] = 89.8563f;
					Local_96.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_96.f_175[1] = 163.8004f;
					Local_96.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_96.f_175[2] = 270.0754f;
					Local_96.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_96.f_175[3] = 184.9752f;
					Local_96.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_96.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_96.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_96.f_43[0] = 0.5044f;
					Local_96.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_96.f_43[1] = 179.2507f;
					Local_96.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_96.f_43[2] = 0.3066f;
					Local_96.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_96.f_43[3] = 180.2973f;
					Local_96.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_96.f_148[0] = 336.7541f;
					Local_96.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_96.f_148[1] = 6.0929f;
					Local_96.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_96.f_148[2] = 4.2803f;
					Local_96.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_96.f_148[3] = 274.985f;
					Local_96.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_96.f_148[4] = 267.2555f;
					Local_96.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_96.f_148[5] = 6.5529f;
					Local_96.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_96.f_148[6] = 89.1724f;
					Local_96.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_96.f_148[7] = 348.279f;
					Local_96.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_96.f_148[8] = 267.8075f;
					Local_96.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_96.f_148[9] = 0.5237f;
					Local_96.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_96.f_175[0] = 357.9713f;
					Local_96.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_96.f_175[1] = 269.3234f;
					Local_96.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_96.f_175[2] = 269.3055f;
					Local_96.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_96.f_175[3] = 359.1497f;
					Local_96.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_96.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_96.f_240 = joaat("insurgent");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_44(2);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_44(4);
			Local_96.f_305[1] = func_43(4);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_44(2);
			if (Local_96.f_12 <= 2 || !func_665())
			{
				Local_96.f_280[3] = 5;
				Local_96.f_291[3] = func_44(5);
				Local_96.f_278 = 4;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 5;
				Local_96.f_291[5] = func_44(5);
				Local_96.f_278 = 6;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 4;
				Local_96.f_291[5] = func_44(4);
				Local_96.f_305[5] = func_43(4);
				Local_96.f_280[6] = 5;
				Local_96.f_291[6] = func_44(5);
				Local_96.f_278 = 7;
			}
			Local_96.f_255 = func_40();
			if (!func_665())
			{
				Local_96.f_1 = 2;
			}
			else
			{
				Local_96.f_1 = 7;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					Local_96.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_96.f_43[0] = 331.74f;
					Local_96.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_96.f_43[1] = 327.7335f;
					Local_96.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_96.f_43[2] = 149.1604f;
					Local_96.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_96.f_43[3] = 150.6753f;
					Local_96.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_96.f_148[0] = 147.2177f;
					Local_96.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_96.f_148[1] = 103.9461f;
					Local_96.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_96.f_148[2] = 160.822f;
					Local_96.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_96.f_148[3] = 205.8375f;
					Local_96.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_96.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_96.f_43[0] = 344.2504f;
					Local_96.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_96.f_43[1] = 340.3425f;
					Local_96.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_96.f_43[2] = 351.5693f;
					Local_96.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_96.f_43[3] = 354.2446f;
					Local_96.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_96.f_148[0] = 245.2865f;
					Local_96.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_96.f_148[1] = 74.1185f;
					Local_96.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_96.f_148[2] = 10.2312f;
					Local_96.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_96.f_148[3] = 222.4017f;
					Local_96.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_96.f_148[4] = 150.2763f;
					Local_96.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_96.f_148[5] = 105.4526f;
					Local_96.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_96.f_148[6] = 88.9429f;
					Local_96.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_96.f_148[7] = 51.1733f;
					Local_96.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_96.f_148[8] = 169.7083f;
					Local_96.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_96.f_148[9] = 29.5849f;
					Local_96.f_243 = 3;
					break;
				
				case 2:
					if (!func_665())
					{
						Local_96.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_96.f_43[0] = 319.153f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_96.f_43[0] = 319.153f;
						Local_96.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_96.f_43[1] = 316.7079f;
						Local_96.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_96.f_43[2] = 316.9623f;
						Local_96.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_96.f_43[3] = 314.2003f;
					}
					Local_96.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_96.f_148[0] = 326.4292f;
					Local_96.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_96.f_148[1] = 6.8118f;
					Local_96.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_96.f_148[2] = 32.8776f;
					Local_96.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_96.f_148[3] = 8.387f;
					Local_96.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_96.f_148[4] = 291.5504f;
					Local_96.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_96.f_148[5] = 333.1838f;
					Local_96.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_96.f_148[6] = 203.8353f;
					Local_96.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_96.f_148[7] = 32.2329f;
					Local_96.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_96.f_148[8] = 195.4847f;
					Local_96.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_96.f_148[9] = 327.4941f;
					Local_96.f_243 = 4;
					break;
				
				case 3:
					if (!func_665())
					{
						Local_96.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_96.f_43[0] = 156.0209f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_96.f_43[0] = 156.0209f;
						Local_96.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_96.f_43[1] = 41.8571f;
						Local_96.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_96.f_43[2] = 305.7411f;
						Local_96.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_96.f_43[3] = 223.2489f;
					}
					if (func_92() == 2 || func_92() == 5)
					{
						Local_96.f_242 = 3;
					}
					else
					{
						Local_96.f_242 = 4;
					}
					Local_96.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_96.f_148[0] = 197.3456f;
					Local_96.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_96.f_148[1] = 140.7211f;
					Local_96.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_96.f_148[2] = 98.9528f;
					Local_96.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_96.f_148[3] = 107.0238f;
					Local_96.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_96.f_148[4] = 202.129f;
					Local_96.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_96.f_148[5] = 230.1207f;
					Local_96.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_96.f_148[6] = 36.194f;
					Local_96.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_96.f_148[7] = 48.2522f;
					Local_96.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_96.f_148[8] = 296.114f;
					Local_96.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_96.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_96.f_240 = joaat("lazer");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_44(2);
			Local_96.f_280[1] = 2;
			Local_96.f_291[1] = func_44(2);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_44(2);
			if (Local_96.f_12 <= 2 || !func_665())
			{
				Local_96.f_278 = 3;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 2;
				Local_96.f_291[3] = func_44(2);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_278 = 5;
			}
			else
			{
				Local_96.f_280[3] = 2;
				Local_96.f_291[3] = func_44(2);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 2;
				Local_96.f_291[5] = func_44(2);
				Local_96.f_278 = 6;
			}
			Local_96.f_255 = func_40();
			if (!func_665())
			{
				Local_96.f_1 = 1;
			}
			else
			{
				Local_96.f_1 = 6;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					if (!func_665())
					{
						Local_96.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_96.f_43[0] = 197.4435f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_96.f_43[0] = 197.4435f;
						Local_96.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_96.f_43[1] = 197.1133f;
						Local_96.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_96.f_43[2] = 272.2065f;
						Local_96.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_96.f_43[3] = 142.941f;
					}
					Local_96.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_96.f_175[0] = 34.149f;
					Local_96.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_96.f_175[1] = -26.0182f;
					Local_96.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_96.f_175[2] = 88.3998f;
					Local_96.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_96.f_175[3] = -141.7949f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_96.f_148[0] = 143.4012f;
					Local_96.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_96.f_148[1] = 212.1136f;
					Local_96.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_96.f_148[2] = 95.8248f;
					Local_96.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_96.f_148[3] = 113.3084f;
					Local_96.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_96.f_148[4] = 260.1329f;
					Local_96.f_242 = 4;
					break;
				
				case 1:
					if (!func_665())
					{
						Local_96.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_96.f_43[0] = 131.0993f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_96.f_43[0] = 131.0993f;
						Local_96.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_96.f_43[1] = 127.8408f;
						Local_96.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_96.f_43[2] = 131.1571f;
						Local_96.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_96.f_43[3] = 132.943f;
					}
					Local_96.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_96.f_175[0] = 316.9068f;
					Local_96.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_96.f_175[1] = 142.3075f;
					Local_96.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_96.f_175[2] = 93.1231f;
					Local_96.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_96.f_175[3] = -9.0334f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_96.f_148[0] = 236.3566f;
					Local_96.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_96.f_148[1] = 212.7533f;
					Local_96.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_96.f_148[2] = 299.3619f;
					Local_96.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_96.f_148[3] = 115.7556f;
					Local_96.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_96.f_148[4] = 191.3862f;
					Local_96.f_242 = 4;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_96.f_43[0] = 176.244f;
					Local_96.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_96.f_175[0] = 93.8354f;
					Local_96.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_96.f_175[1] = 250.5173f;
					Local_96.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_96.f_175[2] = 337.8961f;
					Local_96.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_96.f_175[3] = 142.1369f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_96.f_148[0] = 208.2624f;
					Local_96.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_96.f_148[1] = 349.048f;
					Local_96.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_96.f_148[2] = 69.8162f;
					Local_96.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_96.f_148[3] = 286.6181f;
					Local_96.f_242 = 4;
					Local_96.f_243 = 4;
					break;
				
				case 3:
					Local_96.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_96.f_43[0] = 292.0822f;
					Local_96.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_96.f_43[1] = 43.3907f;
					Local_96.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_96.f_43[2] = 124.2279f;
					Local_96.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_96.f_43[3] = 129.3366f;
					Local_96.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_96.f_175[0] = 137.5025f;
					Local_96.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_96.f_175[1] = 227.9336f;
					Local_96.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_96.f_175[2] = 6.0299f;
					Local_96.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_96.f_175[3] = -87.5596f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_242 = 4;
					Local_96.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_96.f_148[0] = 338.8487f;
					Local_96.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_96.f_148[1] = 272.5443f;
					Local_96.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_96.f_148[2] = 223.0158f;
					Local_96.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_96.f_148[3] = 355.6682f;
					Local_96.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_96.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_665())
					{
						Local_96.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_96.f_43[0] = 331.7771f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_96.f_43[0] = 331.7771f;
						Local_96.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_96.f_43[1] = 324.1843f;
						Local_96.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_96.f_43[2] = 330.0586f;
						Local_96.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_96.f_43[3] = 329.5413f;
					}
					Local_96.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_96.f_175[0] = 146.9594f;
					Local_96.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_96.f_175[1] = 137.6555f;
					Local_96.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_96.f_175[2] = 114.7478f;
					Local_96.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_96.f_175[3] = -84.6269f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_242 = 4;
					Local_96.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_96.f_148[0] = 153.0449f;
					Local_96.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_96.f_148[1] = 153.1271f;
					Local_96.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_96.f_148[2] = 331.3771f;
					Local_96.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_96.f_148[3] = 183.2579f;
					Local_96.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_96.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_96.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_96.f_43[0] = 184.7817f;
					Local_96.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_96.f_175[0] = 91.7761f;
					Local_96.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_96.f_175[1] = 269.7376f;
					Local_96.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_96.f_175[1] = 211.4614f;
					Local_96.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_96.f_175[3] = 148.9204f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_242 = 4;
					Local_96.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_96.f_148[0] = 113.298f;
					Local_96.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_96.f_148[1] = 353.0292f;
					Local_96.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_96.f_148[2] = 216.1793f;
					Local_96.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_96.f_148[3] = 347.4008f;
					Local_96.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_96.f_240 = joaat("buzzard");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_44(2);
			Local_96.f_305[0] = func_43(4);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_44(4);
			Local_96.f_305[1] = func_43(4);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_44(2);
			Local_96.f_305[2] = func_43(4);
			if (Local_96.f_12 <= 2 || !func_665())
			{
				Local_96.f_280[3] = 5;
				Local_96.f_291[3] = func_44(5);
				Local_96.f_278 = 4;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 5;
				Local_96.f_291[5] = func_44(5);
				Local_96.f_278 = 6;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 4;
				Local_96.f_291[5] = func_44(4);
				Local_96.f_305[5] = func_43(4);
				Local_96.f_280[6] = 5;
				Local_96.f_291[6] = func_44(5);
				Local_96.f_278 = 7;
			}
			Local_96.f_255 = func_40();
			if (!func_665())
			{
				Local_96.f_1 = 3;
			}
			else
			{
				Local_96.f_1 = 8;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					if (!func_665())
					{
						Local_96.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_96.f_43[0] = 290.0732f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_96.f_43[0] = 290.0732f;
						Local_96.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_96.f_43[1] = 231.5867f;
						Local_96.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_96.f_43[2] = 49.6234f;
						Local_96.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_96.f_43[3] = 229.3317f;
					}
					Local_96.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_96.f_148[0] = 230.0049f;
					Local_96.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_96.f_148[1] = 147.9421f;
					Local_96.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_96.f_148[2] = 22.3204f;
					Local_96.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_96.f_148[3] = 80.7676f;
					Local_96.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_96.f_148[4] = 162.0507f;
					Local_96.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_96.f_148[5] = 225.9002f;
					Local_96.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_96.f_148[6] = 140.0515f;
					Local_96.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_96.f_148[7] = 90.6966f;
					Local_96.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_96.f_148[8] = 226.042f;
					Local_96.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_96.f_148[9] = 79.7294f;
					Local_96.f_243 = 4;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_96.f_43[0] = 122.9714f;
					Local_96.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_96.f_43[1] = 118.6931f;
					Local_96.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_96.f_43[2] = 26.5272f;
					Local_96.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_96.f_43[3] = 211.0638f;
					Local_96.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_96.f_148[0] = 203.4084f;
					Local_96.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_96.f_148[1] = 123.7895f;
					Local_96.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_96.f_148[2] = 115.9053f;
					Local_96.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_96.f_148[3] = 330.5807f;
					Local_96.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_96.f_148[4] = 116.311f;
					Local_96.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_96.f_148[5] = 145.855f;
					Local_96.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_96.f_148[6] = 41.353f;
					Local_96.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_96.f_148[7] = 266.0158f;
					Local_96.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_96.f_148[8] = 290.3963f;
					Local_96.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_96.f_148[9] = 243.2495f;
					Local_96.f_243 = 4;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_96.f_43[0] = 280.2862f;
					Local_96.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_96.f_43[1] = 32.9157f;
					Local_96.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_96.f_43[2] = 106.2954f;
					Local_96.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_96.f_43[3] = 272.3807f;
					Local_96.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_96.f_148[0] = 254.5411f;
					Local_96.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_96.f_148[1] = 183.227f;
					Local_96.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_96.f_148[2] = 338.6039f;
					Local_96.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_96.f_148[3] = 71.8258f;
					Local_96.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_96.f_148[4] = 179.6626f;
					Local_96.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_96.f_148[5] = 272.7491f;
					Local_96.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_96.f_148[6] = 270.8252f;
					Local_96.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_96.f_148[7] = 180.4937f;
					Local_96.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_96.f_148[8] = 107.4297f;
					Local_96.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_96.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_96.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_96.f_43[0] = 117.7311f;
					Local_96.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_96.f_43[1] = 46.3958f;
					Local_96.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_96.f_43[2] = 189.2091f;
					Local_96.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_96.f_43[3] = 50.0778f;
					Local_96.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_96.f_148[0] = 229.5714f;
					Local_96.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_96.f_148[1] = 136.4963f;
					Local_96.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_96.f_148[2] = 88.3908f;
					Local_96.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_96.f_148[3] = 271.8922f;
					Local_96.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_96.f_148[4] = 316.4374f;
					Local_96.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_96.f_148[5] = 246.1521f;
					Local_96.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_96.f_148[6] = 198.8985f;
					Local_96.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_96.f_148[7] = 257.2332f;
					Local_96.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_96.f_148[8] = 104.7808f;
					Local_96.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_96.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_96.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_96.f_43[0] = 306.7662f;
					Local_96.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_96.f_43[1] = 303.3918f;
					Local_96.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_96.f_43[2] = 302.365f;
					Local_96.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_96.f_43[3] = 304.9788f;
					Local_96.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_96.f_148[0] = 30.9787f;
					Local_96.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_96.f_148[1] = 97.3626f;
					Local_96.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_96.f_148[2] = 218.2636f;
					Local_96.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_96.f_148[3] = 257.6324f;
					Local_96.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_96.f_148[4] = 244.6777f;
					Local_96.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_96.f_148[5] = 12.745f;
					Local_96.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_96.f_148[6] = 196.3743f;
					Local_96.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_96.f_148[7] = 283.2556f;
					Local_96.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_96.f_148[8] = 243.4268f;
					Local_96.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_96.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_96.f_240 = joaat("buzzard");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_44(2);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_44(4);
			Local_96.f_305[1] = func_43(4);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_44(2);
			if (Local_96.f_12 <= 2 || !func_665())
			{
				Local_96.f_280[3] = 5;
				Local_96.f_291[3] = func_44(5);
				Local_96.f_278 = 4;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 5;
				Local_96.f_291[5] = func_44(5);
				Local_96.f_278 = 6;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_44(4);
				Local_96.f_305[3] = func_43(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_44(2);
				Local_96.f_280[5] = 4;
				Local_96.f_291[5] = func_44(4);
				Local_96.f_305[5] = func_43(4);
				Local_96.f_280[6] = 5;
				Local_96.f_291[6] = func_44(5);
				Local_96.f_278 = 7;
			}
			Local_96.f_255 = func_40();
			if (!func_665())
			{
				Local_96.f_1 = 4;
			}
			else
			{
				Local_96.f_1 = 9;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					Local_96.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_96.f_43[0] = 180.7904f;
					Local_96.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_96.f_43[1] = 269.3001f;
					Local_96.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_96.f_43[2] = 180.39f;
					Local_96.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_96.f_43[3] = 276.7351f;
					Local_96.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_96.f_148[0] = 329.9165f;
					Local_96.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_96.f_148[1] = 264.7702f;
					Local_96.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_96.f_148[2] = 359.5203f;
					Local_96.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_96.f_148[3] = 111.3101f;
					Local_96.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_96.f_148[4] = 176.3058f;
					Local_96.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_96.f_148[5] = 213.1969f;
					Local_96.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_96.f_148[6] = 275.2275f;
					Local_96.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_96.f_148[7] = 220.0349f;
					Local_96.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_96.f_148[8] = 359.15f;
					Local_96.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_96.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_96.f_43[0] = 247.4892f;
					Local_96.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_96.f_43[1] = 66.129f;
					Local_96.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_96.f_43[2] = 340.0713f;
					Local_96.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_96.f_43[3] = 245.7466f;
					Local_96.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_96.f_148[0] = 252.6017f;
					Local_96.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_96.f_148[1] = 245.262f;
					Local_96.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_96.f_148[2] = 44.7945f;
					Local_96.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_96.f_148[3] = 255.6518f;
					Local_96.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_96.f_148[4] = 124.8391f;
					Local_96.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_96.f_148[5] = 188.9979f;
					Local_96.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_96.f_148[6] = 159.3613f;
					Local_96.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_96.f_148[7] = 5.7762f;
					Local_96.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_96.f_148[8] = 89.3388f;
					Local_96.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_96.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_96.f_43[0] = 310.6241f;
					Local_96.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_96.f_43[1] = 166.0191f;
					Local_96.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_96.f_43[2] = 343.1715f;
					Local_96.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_96.f_43[3] = 342.4984f;
					Local_96.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_96.f_148[0] = 248.8594f;
					Local_96.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_96.f_148[1] = 195.7758f;
					Local_96.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_96.f_148[2] = 28.6127f;
					Local_96.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_96.f_148[3] = 296.7476f;
					Local_96.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_96.f_148[4] = 240.9422f;
					Local_96.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_96.f_148[5] = 2.473f;
					Local_96.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_96.f_148[6] = 343.6776f;
					Local_96.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_96.f_148[7] = 0.2495f;
					Local_96.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_96.f_148[8] = 72.7889f;
					Local_96.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_96.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_96.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_96.f_43[0] = 351.0324f;
					Local_96.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_96.f_43[1] = 3.5452f;
					Local_96.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_96.f_43[2] = 7.3237f;
					Local_96.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_96.f_43[3] = 332.0844f;
					Local_96.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_96.f_148[0] = 2.6416f;
					Local_96.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_96.f_148[1] = 171.8638f;
					Local_96.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_96.f_148[2] = 257.0332f;
					Local_96.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_96.f_148[3] = 91.7869f;
					Local_96.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_96.f_148[4] = 4.2016f;
					Local_96.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_96.f_148[5] = 339.729f;
					Local_96.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_96.f_148[6] = 359.2033f;
					Local_96.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_96.f_148[7] = 333.6298f;
					Local_96.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_96.f_148[8] = 73.2788f;
					Local_96.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_96.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_96.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_96.f_43[0] = 42.1535f;
					Local_96.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_96.f_43[1] = 315.0261f;
					Local_96.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_96.f_43[2] = 1.2527f;
					Local_96.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_96.f_43[3] = 1.9403f;
					Local_96.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_96.f_148[0] = 352.9674f;
					Local_96.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_96.f_148[1] = 88.8285f;
					Local_96.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_96.f_148[2] = 177.2297f;
					Local_96.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_96.f_148[3] = 273.1487f;
					Local_96.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_96.f_148[4] = 225.394f;
					Local_96.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_96.f_148[5] = 175.5423f;
					Local_96.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_96.f_148[6] = 191.1842f;
					Local_96.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_96.f_148[7] = 269.6831f;
					Local_96.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_96.f_148[8] = 29.4203f;
					Local_96.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_96.f_148[9] = 287.677f;
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
	
	if (Local_96.f_255 != -1)
	{
		return Local_96.f_255;
	}
	if (Local_96.f_278 == 0)
	{
		return ((4 * Global_262145.f_8411) + Global_262145.f_8412);
	}
	iVar2 = func_92();
	iVar3 = func_42(iVar2);
	iVar4 = func_41(iVar3);
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_96.f_278)
			{
				iVar0 = (iVar0 + ((Local_96.f_291[iVar1] * iVar4) + Local_96.f_305[iVar1]));
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
			if (Local_96.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_96.f_27 == joaat("rhino"))
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
			if (Local_96.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_96.f_27 == joaat("hydra"))
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
			if (func_665())
			{
				iVar0 = Global_262145.f_9580;
			}
			else
			{
				iVar0 = Global_262145.f_9301;
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
			if (func_665())
			{
				iVar0 = Global_262145.f_9581;
			}
			else
			{
				iVar0 = Global_262145.f_9302;
			}
			break;
		
		case 5:
			if (func_665())
			{
				iVar0 = Global_262145.f_9582;
			}
			else
			{
				iVar0 = Global_262145.f_9303;
			}
			break;
		
		case 4:
			if (func_665())
			{
				iVar0 = Global_262145.f_9579;
			}
			else
			{
				iVar0 = Global_262145.f_9300;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	if (!func_665())
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
	Local_96.f_252 = 0;
	Local_96.f_302 = 0;
	Local_96.f_317 = 0;
	Local_96.f_316 = 0;
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_30(Local_96.f_48[iVar0]))
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
	
	iVar0 = Local_96.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_96.f_280[iVar0];
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
		if (func_103(Local_96.f_73[iVar1]))
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
	
	if (Local_96.f_318 == 0 || Local_96.f_318 == func_38())
	{
		if (func_92() == 2 || func_92() == 5)
		{
			return 0;
		}
	}
	if (func_92() == 3 || func_92() == 4)
	{
		if (Local_96.f_317 >= func_37())
		{
			iVar0 = Local_96.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_96.f_280[iVar0];
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
	else if (Local_96.f_317 == 2)
	{
		iVar0 = Local_96.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_96.f_280[iVar0];
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
	if (Local_96.f_318 == func_38())
	{
		return 0;
	}
	if (Local_96.f_318 == func_67())
	{
		return 0;
	}
	if (func_92() == 1)
	{
		return 0;
	}
	if (!unk_0xC7A68C5C107A1253(Local_96.f_48[(20 + iParam0)]))
	{
		if (func_66(Local_96.f_239) && unk_0xC25F5313AD214090(0, 1, 0, 0))
		{
			if (func_64(&iVar3))
			{
				if (func_54(Local_96.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_53(&(Local_96.f_48[(20 + iParam0)]), 22, Local_96.f_239, Local_96.f_117[iVar3 /*3*/], Local_96.f_148[iVar3], 1, 1, 1))
					{
						unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), iLocal_1518);
						unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1, 0);
						unk_0x7B16B2475ABB1ADC(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0xE4F1570C7355152D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_52());
						unk_0x49BD4C1B5817C978(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179(fVar6));
						unk_0x8DE5412E66CAB4F1(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1);
						unk_0x2FD7042D8FE731D1(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 2);
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 0, 1);
						unk_0x61D7C8D2DB2887AA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1);
						unk_0x76C1E6E8DA089C11(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1);
						unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 42, 1);
						unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
						unk_0xE8F16DB86D0CC8C9(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1);
						unk_0x97C5D2BB8E47131D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1);
						unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 1);
						unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0x6267527E254067CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]));
						fVar5 = func_51();
						iVar4 = unk_0xF2DB717A73826179((fVar5 * unk_0xBBDA792448DB5A89(iVar4)));
						unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_48[(20 + iParam0)]), iVar4);
						iVar7 = (20 + iParam0);
						if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar7)], func_84(iVar7)))
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_272[func_85(iVar7)]), func_84(iVar7));
						}
						Local_96.f_247++;
						Local_96.f_317++;
						Local_96.f_250++;
						Local_96.f_318++;
						func_100(&(Local_96.f_414[iVar7 /*2*/]));
						func_18(&(Local_96.f_414[iVar7 /*2*/]), 0, 0);
						if (func_20(&(Local_96.f_364[iVar7 /*2*/])))
						{
							func_100(&(Local_96.f_364[iVar7 /*2*/]));
						}
						func_18(&(Local_3584[iVar3 /*2*/]), 0, 0);
						unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar7]), 1, iLocal_1517);
					}
				}
			}
		}
	}
	if (!unk_0xC7A68C5C107A1253(Local_96.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_51()
{
	if (func_665())
	{
		return Global_262145.f_9568;
	}
	return Global_262145.f_9289;
}

float func_52()
{
	if (func_665())
	{
		return Global_262145.f_9570;
	}
	return Global_262145.f_9291;
}

int func_53(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	iVar0 = unk_0xB500796AAD639F82(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x6943A7C6646EF9D3(iVar0);
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(iVar0, iParam9);
		if (unk_0x9CE530DAF9F58C77(iVar0))
		{
			if (bParam7)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7D7A247EA1176EFA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x6B1F3F8F6B7B5B2C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x6B1F3F8F6B7B5B2C(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE8689F4DBC5D8E1B(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam13)
	{
		if (unk_0xFED7CD2BD3B9B1DB(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993++;
	if (fParam14 > 0f)
	{
		if (func_58(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
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
	Global_2404993++;
	return 1;
}

int func_55(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_755(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_57(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7515D29C901C4E76(Param0, fParam3))
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
		if (func_755(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_56(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xA1F52EC3ECE1D42E(func_57(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam8 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xA1F52EC3ECE1D42E(func_57(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

Vector3 func_57(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_58(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_755(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_56(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && uParam9) && bParam6) && func_59(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_57(iVar1), Param0, 1) < fParam3)
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
	if (func_63(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_62(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_60(unk_0xE0BDAFA1A39552D6(), iParam0))
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
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_25();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_62(iParam0) };
		Global_2460487 = { func_62(iParam1) };
		if (unk_0x781D726C27D122E2(&Global_2460474))
		{
			if (unk_0x781D726C27D122E2(&Global_2460487))
			{
				unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474);
				unk_0xAFAED23A75339868(&Global_2460439, 35, &Global_2460487);
				if (Global_2460404 == Global_2460439)
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
	
	iVar0 = unk_0xA6055C735E3DD877(0, 10);
	if (!func_65(Local_96.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_20(&(Local_3584[iVar0 /*2*/])) || (func_20(&(Local_3584[iVar0 /*2*/])) && func_17(&(Local_3584[iVar0 /*2*/]), 10000, 0)))
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
	unk_0xBECC89ACB4E5D4ED(iParam0);
	return unk_0x5C9FE32E2FF37989(iParam0);
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	if (Local_96.f_279 == 0)
	{
		iVar0 = Local_96.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_96.f_279)
		{
			iVar0 = (iVar0 + Local_96.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	switch (Local_96.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_96.f_305[iVar0]);
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
	if (Local_96.f_242 < iVar0)
	{
	}
	if (Local_96.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_92() > 1)
	{
		iVar1 = func_82();
		if (Local_96.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_66(Local_96.f_240) && func_66(Local_96.f_239))
	{
		if (func_70(iParam0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_245, iParam0))
			{
				Local_96.f_249++;
				Local_96.f_251++;
				Local_96.f_252++;
				unk_0x99BCB15F954AF579(&(Local_96.f_245), iParam0);
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 19))
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0xC25F5313AD214090(4, 1, 0, 0))
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
	
	if (func_103(Local_96.f_73[iParam0]) && unk_0x7DA173D4FD42F36B(Local_96.f_245, iParam0))
	{
		if (func_75(Local_96.f_73[iParam0]))
		{
			if (Local_96.f_116 <= 0)
			{
				if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_96.f_116 = 2;
				}
				else
				{
					Local_96.f_116 = unk_0xD6B335B6F8116876(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0])) + 1;
					if (Local_96.f_116 > 4)
					{
						Local_96.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_96.f_116)
			{
				if (!unk_0xC7A68C5C107A1253(Local_96.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_66(Local_96.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_74(&(Local_96.f_48[(iParam0 * 4 + iVar6)]), Local_96.f_73[iParam0], 22, Local_96.f_239, iVar4, 1, 1, 1))
						{
							unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), iLocal_1518);
							unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0x7B16B2475ABB1ADC(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0xE4F1570C7355152D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_73())
							{
								unk_0xE4F1570C7355152D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0xE4F1570C7355152D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_52());
							unk_0x49BD4C1B5817C978(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
							unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0x8DE5412E66CAB4F1(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x2FD7042D8FE731D1(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x61D7C8D2DB2887AA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x76C1E6E8DA089C11(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
							unk_0xE8F16DB86D0CC8C9(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x97C5D2BB8E47131D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0xEDA1E7EBC96811E2(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xEA5C74F11BB8EC27(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x69AFCC548851CEC2(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0xEF439FAE899F725F(unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0xB7A88D8620BC1E65(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_72());
									unk_0x49BD4C1B5817C978(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
									unk_0x75084666BD6D4F73(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0xA3AA6235DB0C6E18(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_9553;
								uVar1 = Global_262145.f_9554;
								uVar2 = Global_262145.f_9555;
								uVar3 = Global_262145.f_9556;
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0x759D601DDE232B39(unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]))))
							{
								unk_0xB7A88D8620BC1E65(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_72());
								unk_0x49BD4C1B5817C978(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
								unk_0x75084666BD6D4F73(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_9553;
								uVar1 = Global_262145.f_9554;
								uVar2 = Global_262145.f_9555;
								uVar3 = Global_262145.f_9556;
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xC319F75C4B6840CA(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar7)], func_84(iVar7)))
							{
								unk_0x99BCB15F954AF579(&(Local_96.f_272[func_85(iVar7)]), func_84(iVar7));
							}
							unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x97C5D2BB8E47131D(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x6D515FB30F3EFA74(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1517);
							Local_96.f_250++;
							func_100(&(Local_96.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_18(&(Local_96.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_20(&(Local_96.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_100(&(Local_96.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_96.f_116)
			{
				if (!unk_0xC7A68C5C107A1253(Local_96.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_30(Local_96.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0x954A6C5EBD942B9E(unk_0x220B3465A4B1FBA5(Local_96.f_48[(iParam0 * 4 + iVar6)]), unk_0xA9B72300DA155F92(Local_96.f_73[iParam0])))
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
	if (func_665())
	{
		return Global_262145.f_9571;
	}
	return Global_262145.f_9292;
}

int func_73()
{
	if (unk_0x7DA173D4FD42F36B(unk_0xA6055C735E3DD877(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	if (!unk_0xC7A68C5C107A1253(uParam1))
	{
		return 0;
	}
	if (!unk_0x1B6292EA51632C25(unk_0xA9B72300DA155F92(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x6943A7C6646EF9D3(unk_0x064835636E49C34D(unk_0xA9B72300DA155F92(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(unk_0x220B3465A4B1FBA5(*uParam0), iParam7);
		if (unk_0x9CE530DAF9F58C77(unk_0x220B3465A4B1FBA5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_75(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		unk_0x05482B0CE9645411(uParam0);
		return unk_0x40B3668D7226E0DF(uParam0);
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
	Local_96.f_240 = func_42(iVar0);
	if (!unk_0xC7A68C5C107A1253(Local_96.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_96.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0xC7A68C5C107A1253(Local_96.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_66(Local_96.f_240) && !unk_0x7DA173D4FD42F36B(Local_96.f_245, iParam0))
		{
			fVar10 = 300f;
			if (unk_0xEF439FAE899F725F(Local_96.f_240) || unk_0x759D601DDE232B39(Local_96.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (unk_0x759D601DDE232B39(Local_96.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_96.f_242)
			{
				if (func_81(iVar11))
				{
					func_80(Local_96.f_240, iVar11, &Var12, &uVar15);
					if (!func_65(Var12, 0f, 0f, 0f, 0))
					{
						if (func_54(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_6(&(Local_96.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_96.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (unk_0xEF439FAE899F725F(Local_96.f_240) || unk_0x759D601DDE232B39(Local_96.f_240))
				{
					iVar16 = 0;
				}
				if (func_79(iParam0))
				{
					if (func_78(&(Local_96.f_73[iParam0]), Local_96.f_240, Var4, uVar7, 1, 1, 1, 0, iVar16, 1))
					{
						unk_0x818E8D7BA45E01E7(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 2);
						unk_0x29C555E41A8B25BF(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1);
						unk_0x02AA51E28DECDB1B(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0, 0);
						unk_0x818E8D7BA45E01E7(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 2);
						unk_0x68018E1A807B2CF1(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1, 1, 0);
						unk_0xF9AA30B2AD84FB0E(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0);
						if (unk_0xEF439FAE899F725F(Local_96.f_240))
						{
							unk_0x93DACDDB16E6515D(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]));
							unk_0x372BD522D381233C(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1);
							unk_0xEAF2F3F5A45270D2(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]));
							unk_0xE2098C4F0BF55A98(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0);
						}
						else if (unk_0x759D601DDE232B39(Local_96.f_240))
						{
							unk_0xF06F7EFD458EBC90(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 3);
							unk_0xE2098C4F0BF55A98(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0);
							unk_0x372BD522D381233C(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1);
							unk_0xEAF2F3F5A45270D2(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]));
							unk_0xF503C01D671985ED(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 30f);
							unk_0x0F4E898868066E97(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1);
							unk_0x5CE31F58ECB7B8A4(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0xEC337F42DFBAD859(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
						}
						else
						{
							unk_0x215FFA3EE011BA3C(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1);
						}
						if (func_92() == 5)
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_77());
							unk_0xEC337F42DFBAD859(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xF4CB4D4221C2D77E(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xA393DEF92D73C91E(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), fVar1);
							unk_0x47A85F333BCFEC77(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), fVar1);
							unk_0xFC462627D90533FE(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), fVar1);
							unk_0xD7757C8C366A0BD9(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x01AC8DB217B99AE3(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), fVar1);
							unk_0xE4E9718AC6F58EB9(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), fVar1);
						}
						if (func_20(&(Local_96.f_336[iParam0 /*2*/])))
						{
							func_100(&(Local_96.f_336[iParam0 /*2*/]));
						}
						unk_0x99BCB15F954AF579(&(Local_96.f_253), iParam0);
						unk_0xE27C8E42A97895CF(&(Local_96.f_245), iParam0);
						unk_0x9F5B8A7088748C7A(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 1, iLocal_1517);
						if (unk_0x7DA173D4FD42F36B(Local_96.f_271, iParam0))
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_271), iParam0);
						}
						if (unk_0x7DA173D4FD42F36B(Local_96.f_303, iParam0))
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_303), iParam0);
						}
						if (Local_96.f_240 == joaat("hydra") || Local_96.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0xC7A68C5C107A1253(Local_96.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_77()
{
	if (func_665())
	{
		return Global_262145.f_9569;
	}
	return Global_262145.f_9290;
}

int func_78(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x432BC9C0928AEEC4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x6C4DEE9BDB093DC6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x75409DE1FC985A9D(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xECD7D746642249EB(uVar0);
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(uVar0, iParam10);
		if (unk_0x9CE530DAF9F58C77(iVar0))
		{
			if (bParam8)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
			else
			{
				unk_0x578505FDD63EC643(*uParam0, 0);
			}
		}
		unk_0x194FCE8D467C221F(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			if (unk_0x7DA173D4FD42F36B(Local_730[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0));
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
	
	bVar0 = (unk_0x759D601DDE232B39(iParam0) || unk_0xEF439FAE899F725F(iParam0));
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
			if (!func_65(Local_96.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_96.f_159[iParam1 /*3*/] };
				*uParam3 = Local_96.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_65(Local_96.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_96.f_159[iParam1 /*3*/] };
				*uParam3 = Local_96.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_96.f_29)
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
			switch (Local_96.f_29)
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
			switch (Local_96.f_29)
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
	if (Local_96.f_228[iParam0] > 0)
	{
		if (!func_20(&(Local_96.f_207[iParam0 /*2*/])))
		{
			func_18(&(Local_96.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_17(&(Local_96.f_207[iParam0 /*2*/]), Local_96.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_20(&(Local_96.f_186[iParam0 /*2*/])))
	{
		if (!func_17(&(Local_96.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_82()
{
	return Local_96.f_291[Local_96.f_279];
}

void func_83(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 430;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam1);
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
	
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x2239ED27B231AE2E(uParam0);
		bVar0 = true;
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_1))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_7))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_7))
		{
			if (unk_0xE60A28942E3AC2F4(uParam0->f_7))
			{
				unk_0x02301F37BFDE4853(uParam0->f_7, 0);
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
	if (Local_96.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iParam0)], func_84(iParam0)))
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
	
	if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0]), 0);
	if (unk_0xBDA1F5E8A36BFA07(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0x7DA173D4FD42F36B(Local_96.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0x7DA173D4FD42F36B(Local_96.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_96.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_96.f_27 == joaat("hydra"))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_271, iParam0))
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
	
	Var0.f_0 = 427;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam1);
	}
}

int func_92()
{
	return Local_96.f_280[Local_96.f_279];
}

void func_93(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 436;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam0);
	}
}

int func_94(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
			if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0))
			{
				if (unk_0xC10BF4DD37BD0172(iVar2, unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0xAFD80883820DD54C(iVar2, unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), &uVar0))
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
	
	Var0.f_0 = 435;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam0);
	}
}

bool func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]));
	if (unk_0x759D601DDE232B39(iVar0) || unk_0xEF439FAE899F725F(iVar0))
	{
		return !unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0);
	}
	return !unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_73[iParam0]), 0);
}

int func_97()
{
	int iVar0;
	int iVar1;
	
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_96.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_96.f_291[iVar0]);
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
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
			if (func_755(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_99()
{
	if (func_665())
	{
		return Global_262145.f_9562;
	}
	return Global_262145.f_9286;
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_101(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xE0BDAFA1A39552D6();
	if (!iParam14 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Param0, 14, iParam14);
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
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_755(iVar2, 1, 0))
		{
			if (!unk_0x93E49C491856D7AD(unk_0x44A9253132E1DDE0(iVar2), iParam0, 0))
			{
				if (unk_0xF749B19A9F9B3DBF(iVar2) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) || !bParam2)
				{
					if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam1)
					{
						unk_0xE27C8E42A97895CF(&uVar0, iVar1);
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
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		return !func_104(unk_0xA9B72300DA155F92(uParam0));
	}
	return 0;
}

int func_104(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (unk_0xBDA1F5E8A36BFA07(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1B6292EA51632C25(iParam0, 0))
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
	
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 20))
	{
		return;
	}
	if (!func_20(&uLocal_3628))
	{
		func_18(&uLocal_3628, 0, 0);
		return;
	}
	if (!func_17(&uLocal_3628, 5000, 0))
	{
		return;
	}
	iVar0 = func_106();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), 1, 0, 0, 0, 0))
		{
			func_23(&(Local_96.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0xE27C8E42A97895CF(&(Local_96.f_3), 20);
}

int func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_96.f_12 != 0)
	{
		return Local_96.f_12;
	}
	if (!func_665())
	{
		Local_96.f_12 = 1;
		return Local_96.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar2))
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
		Local_96.f_12 = 2;
	}
	else if (iVar1 < func_107())
	{
		Local_96.f_12 = 3;
	}
	else
	{
		Local_96.f_12 = 4;
	}
	return Local_96.f_12;
}

int func_107()
{
	return Global_262145.f_9311;
}

int func_108()
{
	return Global_262145.f_9310;
}

void func_109()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
		{
			func_115(iVar0);
			func_114(iVar0, Local_96.f_256[iVar0], Local_96.f_22[iVar0]);
		}
		else if (Local_96.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_115(iVar0);
		}
		iVar0++;
	}
	func_113();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0));
			func_112(iVar0);
			if (Local_730[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_730[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_730[iVar0 /*18*/].f_9;
					func_111(uVar1, Local_730[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_111(-1, -1, iVar2);
			}
		}
		else if (Local_96.f_465[iVar0 /*4*/].f_1 != -1)
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
				if (Local_96.f_465[iVar1 /*4*/].f_1 > Local_96.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_96.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_96.f_465[iVar1 /*4*/];
					uVar4 = Local_96.f_465[iVar1 /*4*/].f_2;
					Local_96.f_465[iVar1 /*4*/].f_1 = Local_96.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_96.f_465[iVar1 /*4*/] = Local_96.f_465[(iVar1 - 1) /*4*/];
					Local_96.f_465[iVar1 /*4*/].f_2 = Local_96.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_96.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_96.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_96.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	Local_96.f_465[iParam2 /*4*/] = iParam0;
	Local_96.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_96.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_112(int iParam0)
{
	Local_96.f_465[iParam0 /*4*/] = -1;
	Local_96.f_465[iParam0 /*4*/].f_2 = -1;
	Local_96.f_465[iParam0 /*4*/].f_1 = -1;
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
				if (Local_96.f_594[iVar1 /*4*/].f_1 > Local_96.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_96.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_96.f_594[iVar1 /*4*/];
					uVar4 = Local_96.f_594[iVar1 /*4*/].f_2;
					Local_96.f_594[iVar1 /*4*/].f_1 = Local_96.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_96.f_594[iVar1 /*4*/] = Local_96.f_594[(iVar1 - 1) /*4*/];
					Local_96.f_594[iVar1 /*4*/].f_2 = Local_96.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_96.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_96.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_96.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_114(int iParam0, var uParam1, var uParam2)
{
	Local_96.f_594[iParam0 /*4*/] = iParam0;
	Local_96.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_96.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_115(int iParam0)
{
	Local_96.f_594[iParam0 /*4*/] = -1;
	Local_96.f_594[iParam0 /*4*/].f_1 = -1;
	Local_96.f_594[iParam0 /*4*/].f_2 = -1;
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
			func_100(&(Local_96.f_5));
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_13, iVar1))
		{
			func_100(&(Local_96.f_5));
			return 0;
		}
		else if (func_4(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), 1, 0, 0, 0, 0))
		{
			func_100(&(Local_96.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_20(&(Local_96.f_5)))
	{
		func_18(&(Local_96.f_5), 0, 0);
	}
	else if (func_17(&(Local_96.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_103(Local_96.f_7[iParam0]))
	{
		if (unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), -1) != 0)
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
	
	if (!func_665())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
		{
			if (func_103(Local_96.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_96.f_12)
	{
		Local_96.f_12 = iVar1;
	}
	if (Local_96.f_12 <= 1)
	{
		unk_0x99BCB15F954AF579(&(Local_96.f_3), 8);
		if (!func_103(Local_96.f_7[0]))
		{
			if (func_103(Local_96.f_7[iVar2]))
			{
				func_23(&(Local_96.f_7[0]));
				Local_96.f_7[0] = Local_96.f_7[iVar2];
			}
		}
	}
}

void func_119()
{
	bool bVar0;
	
	if (!func_665())
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[0]))
		{
			if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_96.f_15 != false;
			}
			else
			{
				bVar0 = Local_96.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x7DA173D4FD42F36B(Local_96.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_96.f_413 == -1)
		{
			Local_96.f_413 = func_121();
		}
		if (!func_20(&(Local_96.f_326)))
		{
			func_18(&(Local_96.f_326), 0, 0);
		}
		else if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 4))
		{
			if ((Local_96.f_413 - func_120(&(Local_96.f_326), 0, 0)) < 0)
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_3), 4);
			}
		}
	}
	else if (func_20(&(Local_96.f_326)))
	{
		func_100(&(Local_96.f_326));
		Local_96.f_413 = (Local_96.f_413 - func_120(&(Local_96.f_326), 0, 0));
	}
}

int func_120(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0);
		}
		else
		{
			return unk_0x1F0E2DBE53276B95(unk_0xED6DF4F701311AF8(), *uParam0);
		}
	}
	return unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0);
}

var func_121()
{
	if (func_665())
	{
		return Global_262145.f_9572;
	}
	return Global_262145.f_9293;
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
		iLocal_1520[iVar0] = 0;
		iLocal_725[iVar0] = -2;
		iLocal_1525[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_96.f_0 != 4)
	{
		iLocal_1315 = 0;
		while (iLocal_1315 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iLocal_1315)))
			{
				iVar7 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iLocal_1315));
				if (!func_14(iVar7, 0))
				{
					if (Local_730[iLocal_1315 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_129(iLocal_1315, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_128(iLocal_1315, iVar0);
						iVar0++;
					}
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
					{
						if (!unk_0x7DA173D4FD42F36B(Local_730[iLocal_1315 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_127(iLocal_1315, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0x7DA173D4FD42F36B(Local_730[iLocal_1315 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_125(iLocal_1315, iVar7);
					if (func_755(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_96.f_17[iVar0] == func_25())
							{
								if (unk_0x7DA173D4FD42F36B(Local_730[iLocal_1315 /*18*/].f_2, (0 + iVar0)))
								{
									Local_96.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_96.f_17[iVar0] == iVar7 && Local_96.f_241 == 0)
							{
								if (!unk_0x7DA173D4FD42F36B(Local_730[iLocal_1315 /*18*/].f_2, (0 + iVar0)))
								{
									Local_96.f_17[iVar0] = func_25();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1315++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_13, iVar0))
		{
			if (iLocal_1520[iVar0] == func_124() && func_117(iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_13), iVar0);
			}
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_14, iVar0))
			{
				if (iLocal_1520[iVar0] >= 1 && func_117(iVar0))
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_14), iVar0);
				}
			}
			else if (iLocal_1520[iVar0] == 0 || !func_117(iVar0))
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_14, iVar0))
				{
					unk_0x99BCB15F954AF579(&(Local_96.f_14), iVar0);
					if (iLocal_1520[iVar0] == 0)
					{
						if (Local_96.f_241 >= 1)
						{
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
							{
								func_23(&(Local_96.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_15, iVar0) && func_117(iVar0))
			{
				if (iLocal_1520[iVar0] >= 2)
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_15), iVar0);
				}
			}
			else if (iLocal_1520[iVar0] <= 1 || !func_117(iVar0))
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_15, iVar0))
				{
					unk_0x99BCB15F954AF579(&(Local_96.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1520[iVar0] < func_124() || !func_117(iVar0))
		{
			unk_0x99BCB15F954AF579(&(Local_96.f_13), iVar0);
		}
		if (Local_96.f_266[iVar0] != iLocal_1520[iVar0])
		{
			Local_96.f_266[iVar0] = iLocal_1520[iVar0];
			if (Local_96.f_241 == 1)
			{
				if (Local_96.f_266[iVar0] == 0)
				{
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_616, iVar0))
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_616), iVar0);
					}
				}
			}
		}
		if (Local_96.f_241 == 0)
		{
			if (func_665())
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
				{
					iVar3 = unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]));
					if (iLocal_1520[iVar0] >= func_123(iVar3) && func_117(iVar0))
					{
						iLocal_1525[iVar0] = 1;
					}
				}
			}
		}
		if (Local_96.f_241 == 1)
		{
			if (Local_96.f_256[iVar0] != iLocal_725[iVar0])
			{
				if (iLocal_725[iVar0] >= 0)
				{
					if (iLocal_725[iVar0] > Local_96.f_256[iVar0])
					{
						Local_96.f_256[iVar0] = iLocal_725[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_96.f_256[iVar0] - iLocal_725[iVar0]);
						if (Local_96.f_261[iVar0] != iVar8)
						{
							Local_96.f_261[iVar0] = iVar8;
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
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_96.f_241 == 0)
	{
		if (func_665())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1525[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0x99BCB15F954AF579(&(Local_96.f_3), 9);
			}
		}
	}
	if (Local_96.f_241 == 0)
	{
		if (!func_20(&(Local_96.f_360)))
		{
			func_18(&(Local_96.f_360), 0, 0);
		}
		else if (func_17(&(Local_96.f_360), 5000, 0))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
			{
				if (func_665())
				{
					if (Local_96.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0xE27C8E42A97895CF(&(Local_96.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 14);
					}
				}
				else if (Local_96.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_96.f_614)
	{
		Local_96.f_614 = iVar1;
	}
	else
	{
		Local_96.f_613 = (Local_96.f_614 - iVar1);
	}
	if (iVar2 > Local_96.f_615)
	{
		Local_96.f_615 = iVar2;
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
	return Local_96.f_28;
}

void func_125(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_16, iParam0))
	{
		if (unk_0x7DA173D4FD42F36B(Local_730[iParam0 /*18*/].f_2, 12))
		{
			func_126(iParam1, 1);
			unk_0xE27C8E42A97895CF(&(Local_96.f_16), iParam0);
		}
		else if (Local_96.f_241 >= 1)
		{
			if (Local_730[iParam0 /*18*/].f_1 == 0)
			{
				func_126(iParam1, 1);
				unk_0xE27C8E42A97895CF(&(Local_96.f_16), iParam0);
			}
			else if (Local_730[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar1]))
					{
						if (func_103(Local_96.f_7[iVar1]))
						{
							if (unk_0x93E49C491856D7AD(unk_0x44A9253132E1DDE0(iParam1), unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), 0))
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
					unk_0xE27C8E42A97895CF(&(Local_96.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_96.f_241 < 1)
	{
		if (!unk_0x7DA173D4FD42F36B(Local_730[iParam0 /*18*/].f_2, 12))
		{
			func_126(iParam1, 0);
			unk_0x99BCB15F954AF579(&(Local_96.f_16), iParam0);
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
		{
			unk_0xD81261A54FF973C2(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_127(int iParam0, int iParam1)
{
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iParam1)], func_84(iParam1)))
	{
		if (unk_0x7DA173D4FD42F36B(Local_730[iParam0 /*18*/].f_3[func_85(iParam1)], func_84(iParam1)))
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_272[func_85(iParam1)]), func_84(iParam1));
			if (Local_730[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iParam1]))
			{
				if (!func_30(Local_96.f_48[iParam1]))
				{
					if (!func_88(iParam1))
					{
						unk_0x99BCB15F954AF579(&(Local_96.f_272[func_85(iParam1)]), func_84(iParam1));
					}
					else if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_272[func_85(iParam1)]), func_84(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_128(int iParam0, int iParam1)
{
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_271, iParam1))
	{
		if (unk_0x7DA173D4FD42F36B(Local_730[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_271), iParam1);
			if (Local_730[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x7DA173D4FD42F36B(Local_96.f_303, iParam1))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_253, iParam1))
				{
					Local_96.f_251 = (Local_96.f_251 - 1);
					if (func_92() > 1)
					{
						if (Local_96.f_252 > 0)
						{
							Local_96.f_302++;
							func_91(iParam1, func_98(1));
						}
					}
					unk_0xE27C8E42A97895CF(&(Local_96.f_253), iParam1);
				}
				if (func_20(&(Local_96.f_336[iParam1 /*2*/])))
				{
					func_100(&(Local_96.f_336[iParam1 /*2*/]));
				}
				func_23(&(Local_96.f_73[iParam1]));
				unk_0x99BCB15F954AF579(&(Local_96.f_303), iParam1);
			}
		}
	}
}

void func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DA173D4FD42F36B(Local_730[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1520[iParam1]++;
		if (iLocal_725[iParam1] < 0)
		{
			if (Local_730[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_96.f_261[iParam1] > 0)
				{
					iLocal_725[iParam1] = Local_96.f_261[iParam1];
				}
				else
				{
					iLocal_725[iParam1] = 0;
				}
			}
		}
		iLocal_725[iParam1] = (iLocal_725[iParam1] + Local_730[iParam0 /*18*/].f_8);
		if (Local_96.f_241 >= 1)
		{
			if (Local_96.f_22[iParam1] == func_25())
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iParam1]))
				{
					if (func_103(Local_96.f_7[iParam1]))
					{
						iVar1 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iParam1]), -1);
						if (iVar1 != 0)
						{
							if (unk_0x4E75E5867592AC01(iVar1))
							{
								iVar0 = unk_0x90CB634380C802C7(iVar1);
								if (iVar0 == iParam2)
								{
									Local_96.f_22[iParam1] = iParam2;
									func_109();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_319, iParam1))
		{
			if (Local_730[iParam0 /*18*/].f_10 > -1)
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_319), iParam1);
				func_18(&(Local_96.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_96.f_22[iParam1] != func_25())
	{
		if (!unk_0xA27C9E8196C79D22(Local_96.f_22[iParam1]))
		{
			iVar0 = func_130(iParam1, 1);
			if (iVar0 != func_25())
			{
				Local_96.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_96.f_22[iParam1] = func_25();
			}
		}
		else if (func_14(Local_96.f_22[iParam1], 0))
		{
			Local_96.f_22[iParam1] = func_25();
			func_109();
		}
		else
		{
			iVar1 = unk_0x44A9253132E1DDE0(Local_96.f_22[iParam1]);
			if (!unk_0xCFC04A38F256EE06(iVar1))
			{
				if (func_103(Local_96.f_7[iParam1]))
				{
					if (!unk_0x93E49C491856D7AD(iVar1, unk_0xA9B72300DA155F92(Local_96.f_7[iParam1]), 0))
					{
						iVar0 = func_130(iParam1, 1);
						if (iVar0 != func_25())
						{
							Local_96.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_96.f_22[iParam1] = func_25();
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
		while (iVar3 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar3)))
			{
				if (iVar0 == func_25())
				{
					if (Local_730[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0x7DA173D4FD42F36B(Local_730[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar3));
							}
							else
							{
								iVar1 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar3));
								if (func_103(Local_96.f_7[iParam0]))
								{
									iVar2 = unk_0x44A9253132E1DDE0(iVar1);
									if (!unk_0xCFC04A38F256EE06(iVar2))
									{
										if (unk_0x93E49C491856D7AD(iVar2, unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 0))
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
	
	Var0.f_0 = 423;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	iVar3 = func_132(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_755(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
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
	if (func_66(Local_96.f_27))
	{
		if (func_135())
		{
			unk_0x0B87AFC0B2EECA19(Local_96.f_27);
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
	while (iVar0 < Local_96.f_12)
	{
		if (!unk_0xC7A68C5C107A1253(Local_96.f_7[iVar0]))
		{
			if (func_66(Local_96.f_27))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_244, iVar0))
				{
					unk_0x79D9EC458879E8B8(Local_96.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0xE27C8E42A97895CF(&(Local_96.f_244), iVar0);
				}
				if (func_78(&(Local_96.f_7[iVar0]), Local_96.f_27, Local_96.f_30[iVar0 /*3*/], Local_96.f_43[iVar0], 1, 1, 1, 1, 0, 1))
				{
					unk_0x4CEDDB3E1734081F(unk_0x4C4151C3DEC199DC(Local_96.f_7[iVar0]), 1, 1);
					unk_0x818E8D7BA45E01E7(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
					unk_0xAFD185F8D087942A(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
					unk_0xDC06178CBD34E048(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
					unk_0x02AA51E28DECDB1B(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0, 0);
					unk_0x93F4FB97D1F2E7A1(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
					unk_0x372BD522D381233C(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
					unk_0xEAF2F3F5A45270D2(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]));
					unk_0x68018E1A807B2CF1(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1, 1, 0);
					unk_0xE2098C4F0BF55A98(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
					unk_0xF9AA30B2AD84FB0E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
					if (unk_0xEF439FAE899F725F(Local_96.f_27) || unk_0x759D601DDE232B39(Local_96.f_27))
					{
						unk_0xD7757C8C366A0BD9(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
						if (unk_0xEF439FAE899F725F(Local_96.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else if (unk_0x759D601DDE232B39(Local_96.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_136());
						}
						unk_0xEC337F42DFBAD859(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xF4CB4D4221C2D77E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xA393DEF92D73C91E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
						unk_0x47A85F333BCFEC77(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
						unk_0xFC462627D90533FE(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
						if (unk_0x759D601DDE232B39(Local_96.f_27))
						{
							unk_0x0F4E898868066E97(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
						}
						if (unk_0xEF439FAE899F725F(Local_96.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x01AC8DB217B99AE3(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
							unk_0xE4E9718AC6F58EB9(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xEF439FAE899F725F(Local_96.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else if (unk_0x759D601DDE232B39(Local_96.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_136());
						}
						unk_0xEC337F42DFBAD859(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xF4CB4D4221C2D77E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xA393DEF92D73C91E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
						unk_0x47A85F333BCFEC77(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
						unk_0xFC462627D90533FE(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), fVar1);
					}
					unk_0x494152A30775AD1B(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
					if (Local_96.f_27 == joaat("savage"))
					{
					}
					if (unk_0xAC584872D0639309("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xF5A99D0F2DE51D19(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xAC584872D0639309("MPBitset", 3))
					{
						if (unk_0x7B716E2E84158F57(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x5330D6C095A88596(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), "MPBitset");
						}
						unk_0xE27C8E42A97895CF(&iVar2, 10);
						unk_0xE27C8E42A97895CF(&iVar2, 15);
						unk_0xF5A99D0F2DE51D19(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0xEA839C4667740EDE(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0, iLocal_1517);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0xEA839C4667740EDE(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0, Global_1574218[iVar3]);
						iVar3++;
					}
					unk_0x786698C8F3347C87(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0, 0);
					unk_0x8E4CA769A47FEEC4(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
					unk_0xB2C123C54D84E6A7(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1);
					unk_0x8053CB955C7F93DB(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), false);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_96.f_12)
	{
		if (!unk_0xC7A68C5C107A1253(Local_96.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_136()
{
	if (func_665())
	{
		return Global_262145.f_9566;
	}
	return Global_262145.f_9306;
}

var func_137()
{
	if (func_665())
	{
		return Global_262145.f_9567;
	}
	return Global_262145.f_9307;
}

var func_138()
{
	if (func_665())
	{
		return Global_262145.f_9565;
	}
	return Global_262145.f_9305;
}

bool func_139()
{
	int iVar0;
	int iVar1;
	
	if (!func_20(&(Local_96.f_362)))
	{
		func_18(&(Local_96.f_362), 0, 0);
		return 0;
	}
	else if (!func_17(&(Local_96.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 10))
	{
		if (func_153(&iVar0))
		{
			if (iVar0 < func_152())
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_3), 10);
			}
			else
			{
				iVar1 = unk_0xA6055C735E3DD877(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_9560) && !Global_262145.f_9558) || Global_262145.f_9559)
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 8);
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 10);
				}
				else
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 10);
				}
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 10))
	{
		if (Local_96.f_12 == 0)
		{
			func_106();
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 13))
		{
			if (func_148())
			{
				if (!func_146(129, Local_96.f_1, Local_96.f_2, 0))
				{
					if (func_140())
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_3), 13);
					}
					else
					{
						Local_96.f_29 = -1;
					}
				}
				else
				{
					Local_96.f_29 = -1;
				}
			}
		}
	}
	return unk_0x7DA173D4FD42F36B(Local_96.f_3, 13);
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_141(Local_96.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_54(Local_96.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
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
	
	if (Global_2417251.f_75.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2417251.f_75[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = unk_0x9F7CDE7B20BCB675(&(Global_2417251.f_75[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2417251.f_75.f_225)
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
		if (unk_0x7DA173D4FD42F36B(Global_2359719[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359719[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (unk_0xA1F52EC3ECE1D42E(Var36, Var39, 1) < fParam3)
			{
				Var43 = { Global_2359719[iVar34 /*26*/].f_15 };
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
			return Global_794608.f_98389[iVar1 /*12*/].f_2;
		
		case 62:
			return Global_906487.f_18805[iVar1 /*12*/].f_2;
		
		default:
	}
	return iVar0;
}

int func_143(var uParam0)
{
	int iVar0;
	
	if (unk_0x226FA58470A21AEF(&(uParam0->f_3)))
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
			if (unk_0x7DA173D4FD42F36B(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x2F6869889D97DFED(&(Global_794608.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x7DA173D4FD42F36B(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x2F6869889D97DFED(&(Global_794608.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x7DA173D4FD42F36B(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x2F6869889D97DFED(&(Global_906487.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x7DA173D4FD42F36B(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x2F6869889D97DFED(&(Global_906487.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0xE0BDAFA1A39552D6())
	{
		if (unk_0x7DA173D4FD42F36B(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x2F6869889D97DFED(&(Global_949333.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x7DA173D4FD42F36B(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x2F6869889D97DFED(&(Global_949333.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (Global_2398050)
	{
		if (unk_0x2F6869889D97DFED(&(Global_2398050.f_1), &(uParam0->f_3)))
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
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6691)
		{
			if (Global_2455819.f_148[iVar0 /*2*/] == iVar1 && Global_2455819.f_148[iVar0 /*2*/].f_1 == func_133(iParam0, iParam1, iParam2, iParam3))
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
	if (func_150(&(Local_96.f_27)))
	{
		if (Local_96.f_4)
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
	Global_1732289 = 1;
	if (!unk_0x7DA173D4FD42F36B(Global_2471749, 0))
	{
		unk_0xE27C8E42A97895CF(&Global_2471749, 0);
		unk_0xE27C8E42A97895CF(&Global_1732290, 0);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_2471749, 1))
	{
		unk_0xE27C8E42A97895CF(&Global_2471749, 1);
		unk_0xE27C8E42A97895CF(&Global_1732290, 1);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_2471749, 5))
	{
		unk_0xE27C8E42A97895CF(&Global_2471749, 5);
		unk_0xE27C8E42A97895CF(&Global_1732290, 5);
	}
	if (unk_0x1A7559C163191E43(-355737150))
	{
		unk_0xA78E2D8D6ED49B05(-355737150, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-580979506))
	{
		unk_0xA78E2D8D6ED49B05(-580979506, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-1426452475))
	{
		unk_0xA78E2D8D6ED49B05(-1426452475, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(745417724))
	{
		unk_0xA78E2D8D6ED49B05(745417724, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-1305304906))
	{
		unk_0xA78E2D8D6ED49B05(-1305304906, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-1543175077))
	{
		unk_0xA78E2D8D6ED49B05(-1543175077, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-811770997))
	{
		unk_0xA78E2D8D6ED49B05(-811770997, 0, 0, 0);
	}
}

int func_150(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_151(joaat("rhino")))
			{
				Local_96.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_151(joaat("hydra")))
			{
				Local_96.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_96.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_151(joaat("savage")))
			{
				Local_96.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_96.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_151(joaat("valkyrie")))
			{
				Local_96.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_151(joaat("buzzard")))
			{
				Local_96.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_151(int iParam0)
{
	if (!func_665())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9295;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9297;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9296;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9299;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9298;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9574;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9576;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9575;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9578;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9577;
				break;
			}
	}
	return 0;
}

int func_152()
{
	return Global_262145.f_9309;
}

int func_153(var uParam0)
{
	int iVar0;
	
	if (!func_20(&(Local_96.f_334)))
	{
		func_18(&(Local_96.f_334), 0, 0);
	}
	else if (func_17(&(Local_96.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
			{
				if (!func_14(unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0)), 0))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_730[iVar0 /*18*/].f_2, 7))
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
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= 1000)
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
		if (unk_0x587E5997B76F47FE())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_156()
{
	struct<3> Var0;
	
	if (iLocal_3637 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iLocal_3637]))
		{
			if (unk_0x40B3668D7226E0DF(Local_96.f_7[iLocal_3637]))
			{
				Var0 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iLocal_3637]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_23(&(Local_96.f_7[iLocal_3637]));
				}
			}
		}
	}
	iLocal_3637++;
	if (iLocal_3637 >= 4)
	{
		iLocal_3637 = 0;
	}
}

void func_157()
{
	if (func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 1)
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 13))
		{
			unk_0xE27C8E42A97895CF(&iLocal_1308, 13);
			unk_0x8EE5B578170FE8FC(1, 0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(iLocal_1308, 13))
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
			{
				unk_0x8EE5B578170FE8FC(0, 0);
				unk_0x99BCB15F954AF579(&iLocal_1308, 13);
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
	
	if (!func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	if (func_378())
	{
		func_258(0);
	}
	iVar0 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
	{
		Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_25())
	{
		if (unk_0xA27C9E8196C79D22(iVar0))
		{
			if (unk_0x605885F0A8AC6672(iVar0))
			{
				uVar1 = unk_0xBD1E178ABA0E03F1(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_730[iVar2 /*18*/].f_17;
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
			func_160(Local_96.f_48[iVar0], &(Local_1324[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1);
		}
		else
		{
			func_160(Local_96.f_48[iVar0], &(Local_1324[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55);
		}
		if (unk_0xCDB4C4200A9B478A(Local_1324[iVar0 /*8*/]))
		{
			unk_0x4BFEA7590F203BDF(Local_1324[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0xF1C629E826767C2C(Local_1324[iVar0 /*8*/], 1);
			}
		}
		if (unk_0xCDB4C4200A9B478A(Local_1324[iVar0 /*8*/].f_1))
		{
			unk_0x4BFEA7590F203BDF(Local_1324[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0xF1C629E826767C2C(Local_1324[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_96.f_27 != joaat("hydra"))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar0)], func_84(iVar0)) || unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar0)], func_84(iVar0)))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar0]))
				{
					func_86(&(Local_1324[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0x7DA173D4FD42F36B(Local_96.f_271, iVar1) || unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6, iVar1))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar0]))
				{
					func_86(&(Local_1324[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_160(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		if (func_162())
		{
			Global_2428549 = unk_0xE0BDAFA1A39552D6();
		}
		if (bParam3)
		{
			func_161(unk_0x220B3465A4B1FBA5(uParam0), uParam1, 1, Global_2428549, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
		else
		{
			func_161(unk_0x220B3465A4B1FBA5(uParam0), uParam1, -1, Global_2428549, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
	}
	else if (unk_0xCDB4C4200A9B478A(*uParam1))
	{
		func_86(uParam1);
	}
}

int func_161(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBC628C78D8ECD5F1();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		if (!unk_0xE60A28942E3AC2F4(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x02301F37BFDE4853(iParam0, 1);
			}
			else
			{
				unk_0x1BFD1B2D060B4D7B(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x64C4679AB573D014(iParam0, iParam2);
			unk_0x8071A84CFEF9473E(iParam0, fParam6);
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				unk_0xA4E8F868373B09C0(*uParam1, 7);
			}
		}
		unk_0x4E4EE0053F5CC360(iParam0, uParam4);
		unk_0xD8980636C77E9E15(iParam0, uParam5);
		*uParam1 = unk_0x02474D0091F9C4C7(iParam0);
		if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 2))
		{
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				if (!unk_0x226FA58470A21AEF(uParam7))
				{
					unk_0x029684F77EB71B8F("MCUSTBLIP");
					unk_0x9C174A0D56FFB64A(sParam7);
					unk_0xA16AF6FEBF65A3F0(*uParam1);
				}
				unk_0xE27C8E42A97895CF(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x0FDFEC0DD29106EE(iParam0, 0))
		{
			uParam1->f_1 = unk_0xC449C2B2F01617A0(iParam0);
			if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 3))
			{
				if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
				{
					unk_0xA4E8F868373B09C0(uParam1->f_1, 7);
					unk_0xE27C8E42A97895CF(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x99BCB15F954AF579(&(uParam1->f_6), 3);
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
	return Global_1315888;
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
	
	iVar2 = (func_33() - func_120(&(Local_96.f_332), 0, 0));
	if (iLocal_3583 == 0)
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_1307, 26))
		{
			if ((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2))
			{
				iLocal_3583 = (func_33() - func_120(&(Local_96.f_332), 0, 0));
				iVar2 = iLocal_3583;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3583;
	}
	if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_665())
	{
		iVar0 = (((Local_96.f_256[0] + Local_96.f_256[1]) + Local_96.f_256[2]) + Local_96.f_256[3]);
	}
	else
	{
		iVar0 = Local_96.f_256[0];
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
	if (func_665())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = unk_0x801C03D92F1C6755(Local_96.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_25())
			{
				if (unk_0xA27C9E8196C79D22(iVar21))
				{
					sVar4[iVar1] = unk_0x3DB24415831CBC43(iVar21);
					iVar10[iVar1] = Local_96.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_96.f_594[iVar1 /*4*/];
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 == uVar15[iVar1])
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
		if ((func_33() - func_120(&(Local_96.f_332), 0, 0)) >= 0)
		{
			if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
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
		if (iVar0 > Local_96.f_255)
		{
			iVar0 = Local_96.f_255;
		}
		if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
		{
			func_178(unk_0x3DB24415831CBC43(unk_0xE0BDAFA1A39552D6()), iVar0, iVar0, Local_96.f_255, iVar2, iVar3, 0, func_182());
		}
		else
		{
			func_164(iVar0, iVar0, Local_96.f_255, iVar2, iVar3, 0, func_182(), 1);
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
	func_165(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0);
}

void func_165(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
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
		Global_1339962.f_1 = 1;
		func_166(7, iVar0);
		Global_1339962.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_4109.f_172[iVar0] = iParam2;
		Global_1339962.f_4109.f_216[iVar0] = iParam3;
		Global_1339962.f_4109.f_183[iVar0] = iParam4;
		Global_1339962.f_4109.f_194[iVar0] = iParam5;
		Global_1339962.f_4109.f_249[iVar0] = iParam6;
		Global_1339962.f_4109.f_260[iVar0] = iParam7;
		Global_1339962.f_4109.f_205[iVar0] = iParam8;
		Global_1339962.f_4109.f_314[iVar0] = iParam9;
		Global_1339962.f_4109.f_325[iVar0] = iParam10;
		Global_1339962.f_4109.f_357[iVar0] = iParam11;
		Global_1339962.f_4109.f_238[iVar0] = iParam12;
		Global_1339962.f_4109.f_271[iVar0] = iParam13;
		Global_1339962.f_4109.f_368[iVar0] = iParam14;
		Global_1339962.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_166(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1339962.f_4759[iParam0]), iParam1);
}

bool func_167(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1339962.f_4759[iParam0], iParam1);
}

int func_168(char* sParam0)
{
	if (unk_0x60D87DA27F70EBBC(uParam0))
	{
		return 1;
	}
	else if (unk_0x2F6869889D97DFED(uParam0, "") || unk_0x2F6869889D97DFED(sParam0, "0"))
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
		Global_1339962.f_1 = 1;
		func_166(4, iVar0);
		Global_1339962.f_2907[iVar0] = iParam0;
		Global_1339962.f_2907.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1339962.f_2907.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1339962.f_2907.f_183[iVar0] = iParam3;
		Global_1339962.f_2907.f_216[iVar0] = iParam5;
		Global_1339962.f_2907.f_194[iVar0] = iParam4;
		Global_1339962.f_2907.f_227[iVar0] = iParam6;
		Global_1339962.f_2907.f_270[iVar0] = iParam7;
		Global_1339962.f_2907.f_281[iVar0] = iParam8;
		Global_1339962.f_2907.f_292[iVar0] = iParam9;
		Global_1339962.f_2907.f_303[iVar0] = iParam10;
		Global_1339962.f_2907.f_314[iVar0] = iParam11;
		Global_1339962.f_2907.f_325[iVar0] = iParam13;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x55812CD5A331E1F8()) && iParam12)
		{
			Global_1339962.f_941 = 1;
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
		Global_1339962.f_1 = 1;
		func_166(6, iVar0);
		Global_1339962.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_3557.f_183[iVar0] = iParam3;
		Global_1339962.f_3557.f_172[iVar0] = iParam2;
		Global_1339962.f_3557.f_260[iVar0] = iParam4;
		Global_1339962.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339962.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339962.f_3557.f_443[iVar0] = iParam7;
		Global_1339962.f_3557.f_454[iVar0] = iParam8;
		Global_1339962.f_3557.f_497[iVar0] = iParam9;
		Global_1339962.f_3557.f_508[iVar0] = iParam10;
		Global_1339962.f_3557.f_205[iVar0] = iParam11;
		Global_1339962.f_3557.f_216[iVar0] = iParam12;
		Global_1339962.f_3557.f_227[iVar0] = iParam13;
		Global_1339962.f_3557.f_238[iVar0] = iParam14;
		Global_1339962.f_3557.f_249[iVar0] = iParam15;
		Global_1339962.f_3557.f_519[iVar0] = iParam16;
		Global_1339962.f_3557.f_530[iVar0] = iParam17;
		Global_1339962.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_172())
		{
			Global_1339962.f_941 = 1;
		}
		if (unk_0x55812CD5A331E1F8())
		{
			iVar2 = 0;
			unk_0x4C6D647F0AAA9B5B(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339962.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339962.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339962.f_941 = 1;
			}
			if (func_171())
			{
				Global_1339962.f_945 = 1;
			}
		}
	}
}

int func_171()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x55812CD5A331E1F8())
	{
		unk_0x4C6D647F0AAA9B5B(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_172()
{
	if ((unk_0x852598C027636D43() == 8 || unk_0x852598C027636D43() == 9) || unk_0x852598C027636D43() == 10)
	{
		return 1;
	}
	return 0;
}

void func_173()
{
	unk_0x9AD5FF38501E64A6(8);
	unk_0x9AD5FF38501E64A6(9);
	unk_0x9AD5FF38501E64A6(6);
	unk_0x9AD5FF38501E64A6(7);
	Global_2445587 = 1;
}

void func_174()
{
	Global_1339962.f_941 = 1;
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
		if (func_755(unk_0xE0BDAFA1A39552D6(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_176()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_177()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 12);
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
	func_165(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0);
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
	func_165(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0);
}

struct<16> func_180(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0x71DD68B05C4C8FA5("HUD_TEAM"), 64);
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
	func_165(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0);
}

char* func_182()
{
	return "HUD_COUNTDOWN";
	switch (func_184(unk_0xE0BDAFA1A39552D6()))
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
	if (func_184(unk_0xE0BDAFA1A39552D6()) == 133)
	{
		return Global_2464975.f_4672;
	}
	return -1;
}

int func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/];
	}
	return -1;
}

void func_185(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x487AF170F52A57F1())
	{
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 0))
		{
			if (!unk_0x226FA58470A21AEF(&(Global_2464975.f_4590)))
			{
				unk_0xDB6AA927794D42DE(&(Global_2464975.f_4590));
			}
			unk_0x5BC661D1FF0D731E(1);
			unk_0x25B97FB8615971D6("FM_COUNTDOWN_30S_FIRA");
			unk_0x8D72E02348CB74D2("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
			unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
			if (Global_2464975.f_4598 > -1)
			{
				unk_0x2B84DF57725231E1(Global_2464975.f_4598);
				Global_2464975.f_4598 = -1;
			}
			Global_2464975.f_4588 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 0))
		{
			if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 4))
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 2))
				{
					if (unk_0x0530DF2CECCBD7AC())
					{
						if ((!unk_0x2F6869889D97DFED(unk_0x2E6EA44CA237AF31(unk_0xBEF2EC2EEA033AC8()), "OFF") && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0)) && !unk_0x226FA58470A21AEF(&(Global_2464975.f_4590)))
						{
							StringCopy(&(Global_2464975.f_4590), "", 32);
							unk_0x25B97FB8615971D6("FM_COUNTDOWN_30S_FIRA");
							unk_0x8D72E02348CB74D2("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
							unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
							unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
							unk_0x5BC661D1FF0D731E(1);
							unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 2);
						}
					}
				}
				else if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0) && unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 5))
				{
					unk_0xDB6AA927794D42DE("OFF");
				}
			}
			else if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x25B97FB8615971D6("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x25B97FB8615971D6("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x25B97FB8615971D6("FM_COUNTDOWN_30S");
				}
				unk_0xE491AB346B56AC9F("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 1);
			}
			else if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xC0A11F663E60E0D3() != 0)
					{
						if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0) && !unk_0xE29C03D94E6FDD38())
						{
							StringCopy(&(Global_2464975.f_4590), unk_0x32ED6656B4470C5C(), 32);
							unk_0xDB6AA927794D42DE("OFF");
						}
						unk_0x5BC661D1FF0D731E(1);
						unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 3))
				{
					Global_2464975.f_4598 = unk_0xD619EBCC6AD6E414();
					unk_0x962E604CCA53388F(Global_2464975.f_4598, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 0))
			{
				Global_2464975.f_4588 = 0;
				Global_2464975.f_4598 = -1;
				unk_0xAA821ECDF67A2A25("FM_COUNTDOWN_30S_KILL");
				unk_0x5BC661D1FF0D731E(0);
				unk_0x25B97FB8615971D6("FM_PRE_COUNTDOWN_30S");
				unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
				unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
				unk_0xC8601D5221312A4A("AllowScoreAndRadio", 1);
				unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 0);
				if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 2))
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 2);
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 5);
				}
				else
				{
					unk_0x99BCB15F954AF579(&(Global_2464975.f_4588), 5);
					unk_0x99BCB15F954AF579(&(Global_2464975.f_4588), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 0))
		{
			Global_2464975.f_4588 = 0;
			Global_2464975.f_4598 = -1;
			unk_0xAA821ECDF67A2A25("FM_COUNTDOWN_30S_KILL");
			unk_0x5BC661D1FF0D731E(0);
			unk_0x25B97FB8615971D6("FM_PRE_COUNTDOWN_30S");
			unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
			unk_0xC8601D5221312A4A("AllowScoreAndRadio", 1);
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 0);
			if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
			{
				unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 2);
				unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 5);
			}
			else
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4588), 2);
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4588), 5);
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
		if (unk_0xCDB4C4200A9B478A(uLocal_1319[iVar0]))
		{
			unk_0x2239ED27B231AE2E(&(uLocal_1319[iVar0]));
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
		if (!unk_0xCDB4C4200A9B478A(uLocal_1319[iVar0]))
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_13, iVar0))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_730[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1319[iVar0] = unk_0xDB8B533098769F4F(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]));
						unk_0x3A46FF82408A2709(uLocal_1319[iVar0], 429);
						func_188(&(uLocal_1319[iVar0]), 29);
						if (func_665())
						{
							unk_0x4BFEA7590F203BDF(uLocal_1319[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0x4BFEA7590F203BDF(uLocal_1319[iVar0], "UW_BLIP");
						}
						unk_0xA4E8F868373B09C0(uLocal_1319[iVar0], 9);
					}
					else if (unk_0xCDB4C4200A9B478A(uLocal_1319[iVar0]))
					{
						unk_0x2239ED27B231AE2E(&(uLocal_1319[iVar0]));
					}
				}
				else if (unk_0xCDB4C4200A9B478A(uLocal_1319[iVar0]))
				{
					unk_0x2239ED27B231AE2E(&(uLocal_1319[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)
{
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x8A6C20F61A3C4CFA(*uParam0, func_189(iParam1));
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
	unk_0xD06A5371300291A8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_190()
{
	bool bVar0;
	
	bVar0 = func_250();
	if (bVar0)
	{
		if (Local_96.f_413 > -1)
		{
			if ((Local_96.f_413 - func_120(&(Local_96.f_326), 0, 0)) >= 0)
			{
				if (!func_194())
				{
					func_193((Local_96.f_413 - func_120(&(Local_96.f_326), 0, 0)));
					func_191((Local_96.f_413 - func_120(&(Local_96.f_326), 0, 0)), func_192(-1));
				}
			}
			else
			{
				if (!func_194())
				{
					func_191(0, func_192(-1));
				}
				if (unk_0x587E5997B76F47FE())
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_3), 4);
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
	func_165(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0);
}

char* func_192(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x47B34031F915C179();
	return "HUD_STARTING";
	if (unk_0x2F6869889D97DFED(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "am_challenges"))
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
	else if (unk_0x2F6869889D97DFED(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x2F6869889D97DFED(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_193(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x487AF170F52A57F1())
	{
		Global_2464975.f_4588 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 1))
		{
			unk_0x962E604CCA53388F(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2464975.f_4588 = 0;
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4588), 1);
		}
	}
}

bool func_194()
{
	bool bVar0;
	var uVar1;
	
	if (func_248(8))
	{
		bVar0 = true;
	}
	if (func_248(0))
	{
		bVar0 = true;
	}
	if (!func_240(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_201())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 9))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				uVar1 = unk_0xE8F1FE9FB29EB9CC(unk_0x06736567F820A39E());
				if (!unk_0x1B6292EA51632C25(uVar1, 0))
				{
					func_199(0, -1);
					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 9))
	{
		unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 9);
	}
	if (Global_1722816)
	{
		bVar0 = true;
	}
	if (func_198(unk_0xE0BDAFA1A39552D6()))
	{
		bVar0 = true;
	}
	if (func_197(unk_0xE0BDAFA1A39552D6(), 2))
	{
		bVar0 = true;
	}
	if (func_195(unk_0xE0BDAFA1A39552D6()))
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
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8);
}

bool func_196(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 2);
}

bool func_197(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_198(int iParam0)
{
	if (!func_755(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587816[iParam0 /*444*/].f_35;
}

void func_199(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1587815)
		{
			if (!func_248(0) && !func_248(func_200(iParam1)))
			{
				Global_1587815 = 1;
			}
		}
	}
	else if (Global_1587815)
	{
		Global_1587815 = 0;
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
	return 12;
}

int func_201()
{
	if (func_197(unk_0xE0BDAFA1A39552D6(), 21))
	{
		return 0;
	}
	if (unk_0x51857BE3D081B03F())
	{
		return 0;
	}
	if (unk_0x8122B656FB23F1C7())
	{
		return 0;
	}
	if (func_238(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_237())
	{
		return 0;
	}
	if (func_236(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	if (func_217(unk_0xE0BDAFA1A39552D6()) == 3)
	{
		return 0;
	}
	if (func_215(func_216()))
	{
		return 0;
	}
	if (func_214())
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	if (unk_0x21A36E2323FEA4B1())
	{
		return 0;
	}
	if (func_212(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!func_210())
	{
		return 0;
	}
	if (func_197(unk_0xE0BDAFA1A39552D6(), 0) || func_197(unk_0xE0BDAFA1A39552D6(), 3))
	{
		return 0;
	}
	if ((func_197(unk_0xE0BDAFA1A39552D6(), 12) || func_197(unk_0xE0BDAFA1A39552D6(), 14)) || func_197(unk_0xE0BDAFA1A39552D6(), 13))
	{
		return 0;
	}
	if (func_207(unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		return 0;
	}
	if (func_206(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (func_198(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	if (func_202(unk_0xE0BDAFA1A39552D6()) && Global_1587609.f_168)
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0)
{
	if (func_203(Global_1587816[iParam0 /*444*/].f_250.f_9))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
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

int func_204()
{
	if (Global_2557205.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_205()
{
	return Global_91362.f_297 > 0;
}

bool func_206(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 11);
}

int func_207(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587816[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 0))
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
		if (func_208(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_755(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_209(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
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
	}
	return -1;
}

int func_210()
{
	if (func_211() == 0)
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	return Global_1312466.f_18;
}

bool func_212(int iParam0)
{
	return func_213(iParam0);
}

bool func_213(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_214()
{
	return Global_1315913;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 98:
			return 1;
		
		default:
	}
	return 0;
}

int func_216()
{
	return Global_2428549.f_2191[0 /*72*/].f_1;
}

int func_217(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_234(iParam0) && !func_196(iParam0)) && !unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8));
	bVar2 = func_233(iParam0);
	bVar3 = func_232();
	uVar4 = func_223();
	if ((bVar1 && (func_222(iParam0) || func_221(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_220(iParam0)) && !func_218(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2464975.f_4685.f_22 != iVar0)
	{
		Global_2464975.f_4685.f_22 = iVar0;
	}
	return iVar0;
}

bool func_218(int iParam0)
{
	return func_219(iParam0, 19);
}

bool func_219(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_219(iParam0, 9);
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 7);
	}
	return 0;
}

int func_223()
{
	if ((func_219(unk_0xE0BDAFA1A39552D6(), 21) || func_219(unk_0xE0BDAFA1A39552D6(), 22)) || func_229())
	{
		return 1;
	}
	if (func_225())
	{
		func_224(22);
		return 1;
	}
	return 0;
}

void func_224(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

int func_225()
{
	if (func_228(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if ((func_232() && !func_227()) || func_197(unk_0xE0BDAFA1A39552D6(), 21))
		{
			if (!func_219(unk_0xE0BDAFA1A39552D6(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_226(27);
		}
	}
	return 0;
}

void func_226(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

bool func_227()
{
	return Global_1312416.f_1;
}

int func_228(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_229()
{
	return func_230(284, -1);
}

int func_230(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_231(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

bool func_232()
{
	return Global_1312416;
}

bool func_233(int iParam0)
{
	return func_219(iParam0, 20);
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/] != -1;
	}
	return 0;
}

bool func_235()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 5;
}

int func_236(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418529[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_237()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_238(int iParam0)
{
	if (func_239(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_212(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_240(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6298 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_244(unk_0xE0BDAFA1A39552D6(), 85))
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
		if (Global_262145.f_4870 == 1)
		{
			return 1;
		}
	}
	if (func_243() || func_242())
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
			if (func_241())
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
	return unk_0x7DA173D4FD42F36B(Global_1573893[iVar1], iVar0);
}

int func_241()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1638, 23))
	{
		return 1;
	}
	if (func_243())
	{
		return 1;
	}
	if (func_242())
	{
		return 1;
	}
	uVar0 = Global_1347809[func_231(-1)];
	if (unk_0x7DA173D4FD42F36B(uVar0, 7))
	{
		unk_0xE27C8E42A97895CF(&(Global_2464975.f_1638), 23);
		return 1;
	}
	return 0;
}

bool func_242()
{
	return Global_1315901;
}

bool func_243()
{
	return Global_1315903;
}

bool func_244(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_247())
	{
		return 0;
	}
	if (func_246())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_245(iParam1);
	iVar1 = uVar0;
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_345, iVar1);
}

int func_245(int iParam0)
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

bool func_246()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 3);
}

int func_247()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_243())
	{
		return 1;
	}
	if (func_242())
	{
		return 1;
	}
	return func_230(120, -1);
}

bool func_248(int iParam0)
{
	var uVar0;
	
	uVar0 = func_249(2458, -1, 0);
	return unk_0x7DA173D4FD42F36B(uVar0, iParam0);
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_231(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_250()
{
	bool bVar0;
	
	if (!func_665())
	{
		if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
	{
		if (func_106() == 2)
		{
			return 0;
		}
	}
	if (!func_665())
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[0]))
		{
			if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_96.f_15 != false;
			}
			else
			{
				bVar0 = Local_96.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x7DA173D4FD42F36B(Local_96.f_3, 9);
	}
	if (!func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (bVar0 && !func_194())
		{
			if (func_665())
			{
				if (!func_257("UW_ABTSC"))
				{
					func_251("UW_ABTSC", 0);
				}
			}
			else if (!func_257("UW_ABTS"))
			{
				func_251("UW_ABTS", 0);
			}
		}
		else if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
		{
			func_7();
		}
	}
	return bVar0;
}

void func_251(char* sParam0, bool bParam1)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return;
	}
	if (func_255(sParam0))
	{
		return;
	}
	func_8();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_254();
	func_253(bParam1);
	func_252();
}

void func_252()
{
	unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 1);
}

void func_253(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1312577.f_57), 0);
}

void func_254()
{
	Global_1312577.f_8 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 86400000);
	Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
}

bool func_255(char* sParam0)
{
	if (!func_13())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_256(uParam0);
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
}

bool func_256(char* sParam0)
{
	if (!func_13())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

int func_257(char* sParam0)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (!func_13())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x2673375C0C31BF99(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	return func_255(sParam0);
}

void func_258(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	bool bVar9;
	
	Var1 = { func_377() };
	StringCopy(&Var5, "UW_TM", 16);
	bVar9 = false;
	if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1533[iVar0 /*47*/] = -1;
			Local_1533[iVar0 /*47*/].f_1 = func_25();
			Local_1533[iVar0 /*47*/].f_9 = 0;
			Local_1533[iVar0 /*47*/].f_30 = -1;
			if (Local_96.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1533[iVar0 /*47*/].f_1 = Local_96.f_465[iVar0 /*4*/].f_2;
				Local_1533[iVar0 /*47*/].f_9 = Local_96.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_376())
			{
				if (Local_3038.f_103 != 129)
				{
					Local_3038.f_103 = 129;
				}
				else
				{
					func_199(1, 129);
				}
			}
		}
		else if (Local_3038.f_103 != 129)
		{
			Local_3038.f_103 = 129;
		}
		func_263(&Local_1533, &uLocal_1532, 23, &Local_3038, &uLocal_3147, -1, 0);
		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 1)
		{
			if (Local_1533[0 /*47*/].f_1 != unk_0xE0BDAFA1A39552D6())
			{
				if (Local_96.f_465[0 /*4*/].f_1 > 0)
				{
					func_262();
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
			Local_1533[iVar0 /*47*/] = -1;
			Local_1533[iVar0 /*47*/].f_1 = func_25();
			Local_1533[iVar0 /*47*/].f_9 = 0;
			Local_1533[iVar0 /*47*/].f_30 = -1;
			if (Local_96.f_465[iVar0 /*4*/].f_1 > -1)
			{
				StringIntConCat(&Var5, Local_96.f_465[iVar0 /*4*/] + 1, 16);
				Local_1533[iVar0 /*47*/].f_37 = { Var5 };
				Local_1533[iVar0 /*47*/].f_1 = unk_0x801C03D92F1C6755(Local_96.f_465[iVar0 /*4*/].f_2);
				StringCopy(&(Local_1533[iVar0 /*47*/].f_41), "", 16);
				Local_1533[iVar0 /*47*/].f_45 = Local_96.f_465[iVar0 /*4*/].f_1;
				Local_1533[iVar0 /*47*/].f_9 = Local_96.f_465[iVar0 /*4*/].f_1;
				Local_1533[iVar0 /*47*/].f_2 = Local_96.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_259();
		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 1)
		{
			if (Local_96.f_594[0 /*4*/] > 0)
			{
				if (Local_96.f_594[0 /*4*/] != Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9)
				{
					if (Local_96.f_256[Local_96.f_594[0 /*4*/]] > 0)
					{
						func_262();
					}
				}
			}
		}
		func_263(&Local_1533, &uLocal_1532, 23, &Local_3038, &uLocal_3147, -1, 1);
		if (bParam0)
		{
			if (!func_376())
			{
				if (Local_3038.f_103 != 129)
				{
					Local_3038.f_103 = 129;
				}
				else
				{
					func_199(1, 129);
				}
			}
		}
		else if (Local_3038.f_103 != 129)
		{
			Local_3038.f_103 = 129;
		}
	}
}

void func_259()
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
	
	uLocal_3672[0] = Local_96.f_594[0 /*4*/];
	uLocal_3672[1] = Local_96.f_594[1 /*4*/];
	uLocal_3672[2] = Local_96.f_594[2 /*4*/];
	uLocal_3672[3] = Local_96.f_594[3 /*4*/];
	iVar3 = Local_96.f_594[0 /*4*/];
	iVar4 = Local_96.f_594[1 /*4*/];
	iVar5 = Local_96.f_594[2 /*4*/];
	iVar6 = Local_96.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_96.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_96.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_96.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_96.f_266[iVar6];
	}
	uLocal_3677[0] = uVar7;
	uLocal_3677[1] = uVar8;
	uLocal_3677[2] = uVar9;
	uLocal_3677[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0x3A040D6EABAF9E85())
	{
		iVar2 = func_261(uLocal_3672[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1533[iVar2 /*47*/].f_9 = Local_96.f_594[iVar0 /*4*/].f_1;
		}
		func_260(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3677[iVar0])
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

void func_260(int iParam0, int iParam1)
{
	struct<47> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1533[iParam1 /*47*/] };
	Local_1533[iParam1 /*47*/] = { Local_1533[iParam0 /*47*/] };
	Local_1533[iParam0 /*47*/] = { Var0 };
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0x3A040D6EABAF9E85() - 1))
	{
		if (iParam0 == Local_1533[iVar0 /*47*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0x3A040D6EABAF9E85();
		}
		iVar0++;
	}
	return iVar1;
}

void func_262()
{
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_1641), 19);
}

void func_263(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_375(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_373() || iParam2 == 24)
	{
		if (func_334(uParam1, iParam2, uParam3, Global_1573685, 0, func_378()))
		{
			func_333(1);
			if ((!func_331() && !func_329()) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
			{
				if (func_328())
				{
					func_325();
				}
				else
				{
					unk_0xF2C2AA10F5F1DDB2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_324(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_323(uParam1);
							if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
							{
								unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
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
								if (func_755(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((unk_0x296D7F88818B62E7(iVar35, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar35 /*313*/].f_232 != -1) || func_322(iVar35))
										{
											iVar44 = iVar35;
											if (func_321(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_318(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_316(unk_0xE0BDAFA1A39552D6(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_314())
							{
								if (func_755(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
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
							if ((func_313(iVar35) && func_309(iVar35, iParam2)) && func_755(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
								Var38 = { func_304(iVar35) };
								if (iVar35 == unk_0xE0BDAFA1A39552D6())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3DB24415831CBC43(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_298(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
								}
								Global_1573685++;
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
									if (!func_314())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_293(&iVar43, &fVar45, (iParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_292(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_287(iVar35, 0);
								if (bVar34)
								{
									if (func_286(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_285(iParam5))
								{
									func_284(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*47*/])->f_37), &((iParam0[iVar52 /*47*/])->f_41), (iParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_284(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*47*/])->f_37), &((iParam0[iVar52 /*47*/])->f_41), (iParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0xE27C8E42A97895CF(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x801C03D92F1C6755(iVar52);
							if (func_755(iVar35, 0, 1) && !unk_0x7DA173D4FD42F36B(iVar49, iVar35))
							{
								iVar35 = unk_0x801C03D92F1C6755(iVar52);
							}
							else
							{
								iVar35 = func_25();
							}
							if (func_313(iVar35))
							{
								if (func_755(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
									Var38 = { func_304(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_298(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
									}
									Global_1573685++;
									iVar51 = func_287(iVar35, 1);
									if (bVar34)
									{
										if (func_286(iVar35, 1))
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
									func_276(unk_0x3DB24415831CBC43(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							func_273(uParam3, uParam1);
						}
						func_100(&(uParam3->f_21));
						func_272();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
						{
							func_271(uParam3, uParam1);
							func_270(uParam1, 0, 1);
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 7);
						}
						func_271(uParam3, uParam1);
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 11);
						}
						if (func_266(uParam3))
						{
							Global_1573833 = 1;
						}
						func_264(uParam3);
						if (Global_1573833 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x6A87921801178186(*uParam1))
					{
						unk_0xA53AA6798EF8BAB3(7);
						unk_0x85DC3CB6F30C7FE7(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xA53AA6798EF8BAB3(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_272();
			func_324(0);
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
			}
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 10))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x50E2186E0E0244C6();
}

void func_264(var uParam0)
{
	if (!func_20(&(uParam0->f_21)))
	{
		func_18(&(uParam0->f_21), 0, 0);
	}
	else if (func_17(&(uParam0->f_21), 250, 0))
	{
		func_100(&(uParam0->f_21));
		func_265(0);
	}
}

void func_265(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x801C03D92F1C6755(uParam0->f_37);
	if (iVar15 != func_25() && func_755(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_269(uParam0, uParam0->f_37);
		if (func_268(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_267(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_267(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_267(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_267(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0x88BD5F6528137EC3(&Var2))
						{
							iVar16 = 1;
							func_267(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_267(uParam0, iVar0, 0);
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

void func_267(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_268(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD6F48B026382A9AD(&uParam0, 13);
}

var func_269(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_270(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x2B859AD680983623(*uParam0, "COLLAPSE"))
	{
		unk_0x504EDFAAB39BF764(iParam1);
		unk_0xE97F1B22C5E8989F();
	}
	if (iParam2 == 1)
	{
		if (unk_0x2B859AD680983623(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE97F1B22C5E8989F();
		}
	}
}

void func_271(var uParam0, var uParam1)
{
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_33, 10))
	{
		unk_0x2B859AD680983623(*uParam1, "SET_HIGHLIGHT");
		unk_0x7AF283DA3BA078CD(uParam0->f_35);
		unk_0xE97F1B22C5E8989F();
		unk_0xE27C8E42A97895CF(&(uParam0->f_33), 10);
	}
}

void func_272()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_273(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar0);
		if (iVar2 != func_25())
		{
			if (func_755(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_275(uParam0->f_38[iVar0 /*2*/], 0);
					func_274(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587816[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_274(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		if (unk_0x2B859AD680983623(*uParam0, "SET_ICON"))
		{
			unk_0x7AF283DA3BA078CD(iParam1);
			unk_0x7AF283DA3BA078CD(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7AF283DA3BA078CD(iParam3);
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

int func_275(int iParam0, bool bParam1)
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

void func_276(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_283() && iParam3 < func_282())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x2B859AD680983623(*uParam1, sVar1))
		{
			unk_0x7AF283DA3BA078CD(iParam3);
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_281("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(iParam9);
			}
			func_281(sParam0);
			unk_0x7AF283DA3BA078CD(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_281("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(65);
			}
			unk_0x7AF283DA3BA078CD(-1);
			func_281("");
			if (uParam2->f_108 == 6)
			{
				func_281("");
			}
			else
			{
				func_281(&sParam4);
			}
			unk_0x504EDFAAB39BF764(uParam2->f_36);
			unk_0xD700C94ACCCAC57A(sParam8);
			unk_0xD700C94ACCCAC57A(sParam8);
			if (func_280(uParam2))
			{
				func_279("DPAD_FRIEND");
			}
			else if (func_278(uParam2))
			{
				func_279("DPAD_FRIEND");
			}
			else if (func_277(uParam2))
			{
				func_279("DPAD_CREW");
			}
			else
			{
				func_279("");
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

bool func_277(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 6);
}

bool func_278(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 5);
}

void func_279(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

int func_280(var uParam0)
{
	if (func_278(uParam0) && func_277(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_281(char* sParam0)
{
	unk_0x8C64B9C850F2EFB2(sParam0);
}

int func_282()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_283()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_284(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_283() && iParam2 < func_282())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573687)
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
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x6A87921801178186(*uParam0))
		{
			if (unk_0x2B859AD680983623(*uParam0, sVar1))
			{
				unk_0x7AF283DA3BA078CD(iParam2);
				if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_281("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					func_279(sParam15);
				}
				else
				{
					func_281(&(uParam1->f_1));
				}
				unk_0x7AF283DA3BA078CD(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_281("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(65);
				}
				if (iParam11 == 1)
				{
					unk_0x7AF283DA3BA078CD(iVar0);
				}
				else
				{
					unk_0x7AF283DA3BA078CD(-1);
				}
				if (func_314())
				{
					func_281("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 5 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x226FA58470A21AEF(sParam15)) && !unk_0x226FA58470A21AEF(sParam16))
				{
					unk_0x7291E2F821FCFC04("FM_AE_TWO_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0x4C5D86B5B659C953(sParam16);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 8 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
				{
					unk_0x7291E2F821FCFC04("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xCB4A32D75D69162C(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0xD92C45283BCDA624(iParam9);
					}
					unk_0x4C5D86B5B659C953(&(uParam1->f_104));
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x7291E2F821FCFC04("FM_AE_CASH");
					unk_0x87E13A04CCA58668(iParam9, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
					{
						func_279(&(uParam1->f_104));
					}
					else
					{
						func_281("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x7291E2F821FCFC04("STRING");
					unk_0x474EBA999C39492E(iParam13, 6);
					unk_0xD6360E18957BCDD3();
				}
				else if (fParam12 != -1f)
				{
					unk_0x7291E2F821FCFC04("NUMBER");
					unk_0xCB4A32D75D69162C(fParam12, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam9 != -1)
				{
					unk_0x7AF283DA3BA078CD(iParam9);
				}
				else
				{
					func_281("");
				}
				if (uParam1->f_108 == 6)
				{
					func_281("");
				}
				else
				{
					func_281(&sParam3);
				}
				unk_0x504EDFAAB39BF764(uParam1->f_36);
				if (iParam11 == 1 || unk_0x226FA58470A21AEF(sParam7))
				{
					func_281("");
					func_281("");
				}
				else
				{
					unk_0xD700C94ACCCAC57A(sParam7);
					unk_0xD700C94ACCCAC57A(sParam7);
				}
				if (func_280(uParam1))
				{
					func_279("DPAD_FRIEND");
				}
				else if (func_278(uParam1))
				{
					func_279("DPAD_FRIEND");
				}
				else if (func_277(uParam1))
				{
					func_279("DPAD_CREW");
				}
				else
				{
					func_279("");
				}
				unk_0xE97F1B22C5E8989F();
			}
		}
	}
}

int func_285(int iParam0)
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

bool func_286(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_321(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_25();
}

int func_287(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_234(iParam0)) && !func_233(iParam0))
	{
		iVar0 = func_291();
	}
	iVar1 = func_290(iParam0);
	if (!iVar1 == -1)
	{
		return func_288(iVar1);
	}
	return iVar0;
}

int func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = func_289(iParam0);
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
	return 1;
}

var func_289(int iParam0)
{
	return Global_2413817.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_290(int iParam0)
{
	if (!iParam0 == func_25())
	{
		if (func_286(iParam0, 1))
		{
			return Global_2413817.f_1946.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_291()
{
	return 21;
}

char* func_292(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xF35BDD4618A4A0F0())
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
			if (unk_0xF35BDD4618A4A0F0())
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

int func_293(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_297(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_285(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_294(int iParam0, int iParam1)
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
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_296(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_295(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_295(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_296(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_297(int iParam0)
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

int func_298(int iParam0)
{
	int iVar0;
	
	iVar0 = func_301(iParam0);
	if (iVar0 == -1)
	{
		func_299(iParam0, 1);
		return 0;
	}
	Global_1348612[iVar0 /*5*/].f_4 = 1;
	return Global_1348612[iVar0 /*5*/].f_2;
}

void func_299(int iParam0, bool bParam1)
{
	if (!func_755(iParam0, 0, 1))
	{
		return;
	}
	if (func_301(iParam0) != -1)
	{
		return;
	}
	if (Global_1348775)
	{
		if (iParam0 == Global_1348775.f_1)
		{
			return;
		}
	}
	if (func_300(iParam0))
	{
		return;
	}
	if (Global_1348813 >= 32)
	{
		return;
	}
	Global_1348780[Global_1348813] = iParam0;
	Global_1348813++;
	if (bParam1)
	{
	}
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348813)
	{
		if (Global_1348780[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (!func_755(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348773 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348773)
	{
		if (Global_1348612[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iVar0 /*5*/].f_2) && unk_0x512211B77C9DF624(Global_1348612[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_302(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_302(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348773)
	{
		return;
	}
	if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348612[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xA7ABBEE53A1DE38B(Global_1348612[iParam0 /*5*/].f_2), 64);
			unk_0xCB1D1677ABBD32DC(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x48F723C28E5556E7(Global_1348612[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348773)
	{
		Global_1348612[iVar32 /*5*/] = { Global_1348612[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_303(&(Global_1348612[iVar32 /*5*/]));
	Global_1348773 = (Global_1348773 - 1);
}

void func_303(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_25();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x17CC0D5008835470())
	{
		uParam0->f_3 = unk_0x201D90648B2AE3CE();
	}
}

struct<4> func_304(int iParam0)
{
	struct<4> Var0;
	
	if (func_755(iParam0, 0, 1))
	{
		Global_2460474 = { func_62(iParam0) };
		if (unk_0xB6FEE919E18FF45B())
		{
			if (func_268(Global_2460474))
			{
				if (!unk_0x8BA2944C243C370E(&Global_2460474))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4F07450559D0D1D1(0))
		{
			return Var0;
		}
		if (func_308(&Global_2460474))
		{
			Global_2460404 = { func_306(iParam0) };
			func_305(&Global_2460404, &Var0);
		}
	}
	return Var0;
}

void func_305(var uParam0, var uParam1)
{
	unk_0x86199F6DDB9773B7(uParam0, 35, uParam1);
}

struct<35> func_306(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_307(iParam0))
	{
		return Global_1315947[unk_0xE0BDAFA1A39552D6() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0xAFAED23A75339868(&Var13, 35, &Var0);
	return Var13;
}

int func_307(int iParam0)
{
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		return 1;
	}
	return 0;
}

int func_308(var uParam0)
{
	if (unk_0x80D93820C5262668())
	{
		if (unk_0x3D340893CA28EFFC() && unk_0x781D726C27D122E2(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_196(iParam0) || func_312(iParam0)) || func_195(iParam0))
		{
			return 0;
		}
	}
	if (!func_311(iParam0))
	{
		return 0;
	}
	if ((!func_310(iParam0) && Global_2418529[iParam0 /*313*/].f_232 == -1) && !func_322(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_310(int iParam0)
{
	if (func_755(iParam0, 0, 1))
	{
		if (func_755(unk_0xE0BDAFA1A39552D6(), 0, 1))
		{
			if (unk_0x296D7F88818B62E7(iParam0, unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_311(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 22);
}

int func_312(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 10) || unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 9));
	}
	return 0;
}

int func_313(int iParam0)
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
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_131, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_314()
{
	switch (func_184(unk_0xE0BDAFA1A39552D6()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_233(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_315(unk_0xE0BDAFA1A39552D6()))
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

int func_315(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_316(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 && func_317(Global_1610705[iParam0 /*178*/].f_10.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1)
	{
		if (func_317(Global_1610705[iParam0 /*178*/].f_10.f_27))
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

void func_318(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_755(unk_0x801C03D92F1C6755(iVar0), 0, 1))
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((unk_0x296D7F88818B62E7(iVar1, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar1 /*313*/].f_232 != -1) || func_322(iVar1))
				{
					if (func_319(iVar1, iParam1, 0))
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

int func_319(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_25())
	{
		if (!bParam2)
		{
			if (func_320(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610705[iParam0 /*178*/].f_10 != func_25())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10;
		}
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
{
	if (iParam1 != func_25())
	{
		if (iParam0 != func_25())
		{
			if (Global_1610705[iParam0 /*178*/].f_10 != func_25())
			{
				if (Global_1610705[iParam0 /*178*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_25())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_322(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_180 != 0;
}

void func_323(var uParam0)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7AF283DA3BA078CD(0);
		unk_0xE97F1B22C5E8989F();
	}
}

void func_324(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_325()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
	{
		if (func_327())
		{
			func_326();
		}
	}
}

void func_326()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_327()
{
	return Global_2428549.f_2191[0 /*72*/].f_1 != 0;
}

int func_328()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0) && func_327())
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1) && func_327())
	{
		return 1;
	}
	return 0;
}

int func_329()
{
	if (func_327())
	{
		if (func_330(Global_2428549.f_2191[0 /*72*/].f_1))
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
			return 1;
		
		default:
	}
	return 0;
}

int func_331()
{
	if (func_327())
	{
		if (func_332(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)
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

void func_333(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

int func_334(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_372(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_371();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_370())
		{
			if (func_369() > 0 && Global_1573687)
			{
				unk_0x1DA4744DA0C4552C();
				unk_0x681D62E6F663F7E0(fVar7);
				unk_0x9AD5FF38501E64A6(18);
				if (unk_0x6146EFE5BC2DD8DC())
				{
					unk_0xBC86BA2C01CE2035();
				}
				unk_0x9AD5FF38501E64A6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_358())
		{
			func_357(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4429, 26))
	{
		func_357(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_20(&(uParam2->f_19)))
	{
		if (func_369() == 1)
		{
			func_356(bVar6, uParam0, 0);
			func_18(&(uParam2->f_19), 0, 0);
			func_357(uParam0, uParam2, 0);
		}
	}
	if (func_20(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6146EFE5BC2DD8DC())
		{
			unk_0xBC86BA2C01CE2035();
		}
		unk_0x9AD5FF38501E64A6(10);
		if (func_17(&(uParam2->f_19), 10000, 0) || (func_369() == 0 && !bParam5))
		{
			func_357(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_355();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x1DA4744DA0C4552C();
				}
				unk_0x9AD5FF38501E64A6(18);
			}
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 0))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				unk_0x681D62E6F663F7E0(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573686)
					{
						unk_0x99BCB15F954AF579(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_355();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x1DA4744DA0C4552C();
					}
					unk_0x9AD5FF38501E64A6(18);
				}
				unk_0x681D62E6F663F7E0(fVar7);
				if (func_356(bVar6, uParam0, 0))
				{
					func_323(uParam0);
					uVar4 = func_353(iParam1, &(Global_1617902.f_76925), bParam4);
					if (bParam4)
					{
						func_350(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_345(uParam0, func_347(uParam2), func_346(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_342(uParam0, func_344(), func_343(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573686;
						func_350(uParam0, uVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = { func_340(iParam1) };
						iVar8 = func_335(iParam1);
						func_350(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xE27C8E42A97895CF(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_339())
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
			if (func_338(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 20;
			}
			if (func_337(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_336(unk_0xE0BDAFA1A39552D6()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_336(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 4;
}

bool func_337(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

bool func_338(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_339()
{
	return Global_1617902.f_1 == 0;
}

struct<4> func_340(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_341(unk_0xE0BDAFA1A39552D6()) || func_336(unk_0xE0BDAFA1A39552D6()))
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
			StringIntConCat(&Var0, Global_1617902.f_23, 16);
			break;
	}
	return Var0;
}

bool func_341(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 5;
}

void func_342(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(sParam2))
		{
			func_279(sParam1);
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_279("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_343()
{
	switch (func_315(unk_0xE0BDAFA1A39552D6()))
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

char* func_344()
{
	switch (func_315(unk_0xE0BDAFA1A39552D6()))
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

void func_345(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(uParam2))
		{
			func_279(uParam1);
		}
		else if (func_184(unk_0xE0BDAFA1A39552D6()) == 133)
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT_C");
			unk_0x4C5D86B5B659C953(uParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_279("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_346(var uParam0)
{
	int iVar0;
	
	iVar0 = func_184(unk_0xE0BDAFA1A39552D6());
	if (func_376())
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

char* func_347(var uParam0)
{
	int iVar0;
	
	iVar0 = func_184(unk_0xE0BDAFA1A39552D6());
	if (func_376())
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
			if (func_349() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_349() == 1)
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
			if (func_348() == 1)
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

int func_348()
{
	return Global_2464975.f_4675;
}

int func_349()
{
	if (func_184(unk_0xE0BDAFA1A39552D6()) == 132)
	{
		return Global_2464975.f_4670;
	}
	return -1;
}

void func_350(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_281(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7291E2F821FCFC04(uParam1);
			unk_0xD92C45283BCDA624(iParam5);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_279(sParam1);
		}
		if (func_370() && iParam6)
		{
			if (func_352())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7291E2F821FCFC04("LBD_DPD_CNT");
			unk_0xD92C45283BCDA624(iVar0);
			unk_0xD92C45283BCDA624(iVar1);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_279(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam4);
			if (func_351(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x7AF283DA3BA078CD(166);
			}
		}
		unk_0xE97F1B22C5E8989F();
	}
}

int func_351(int iParam0)
{
	if (func_338(iParam0) || func_337(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_352()
{
	return Global_1573687;
}

char* func_353(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_354();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x226FA58470A21AEF(uParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
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

char* func_354()
{
	if (unk_0x6CEB82F05DCED56D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x80BCEDDB598B6BA5())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8683BD7E2B2607B8())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x2E1D5B997B3CEA7A())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_355()
{
	Global_36642 = 1;
}

bool func_356(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xDDEDAA5105426019("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_matchmaking_card");
	}
	return unk_0x6A87921801178186(*uParam1);
}

void func_357(var uParam0, var uParam1, bool bParam2)
{
	unk_0x99BCB15F954AF579(&(uParam1->f_33), 7);
	Global_1573685 = 0;
	func_272();
	Global_1573684 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_20(&(uParam1->f_19)))
		{
			func_100(&(uParam1->f_19));
		}
	}
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x0E4537BE1D04DAC7(uParam0);
	}
	if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 0))
	{
		unk_0x99BCB15F954AF579(&(uParam1->f_33), 0);
	}
	unk_0x681D62E6F663F7E0(0f);
}

int func_358()
{
	if (func_368())
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	if (!func_366())
	{
		return 0;
	}
	if (!func_210())
	{
		return 0;
	}
	if (func_365(8, -1))
	{
		return 0;
	}
	if (func_369() == 2)
	{
		return 0;
	}
	if (Global_2464975.f_4404)
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	else if (!func_239(unk_0xE0BDAFA1A39552D6(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_364(1) || func_362(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (func_360(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (Global_1722819)
	{
		return 0;
	}
	if (func_359(0))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 4))
	{
		return 0;
	}
	return 1;
}

bool func_359(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_18, iParam0);
}

int func_360(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_361())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_361()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_362(bool bParam0)
{
	if (unk_0xA72B7766889EBB86())
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (func_363(unk_0x06736567F820A39E()))
			{
				if (unk_0xE9F7E89BC2352535(0, 25) || unk_0xE9F7E89BC2352535(0, 68))
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
	if (unk_0xE9F7E89BC2352535(0, 19) || (!bParam0 && unk_0x7A4571218C06A722(0, 19)))
	{
		return 1;
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (((unk_0xE9F7E89BC2352535(0, 166) || unk_0xE9F7E89BC2352535(0, 167)) || unk_0xE9F7E89BC2352535(0, 168)) || unk_0xE9F7E89BC2352535(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7A4571218C06A722(0, 166) || unk_0x7A4571218C06A722(0, 167)) || unk_0x7A4571218C06A722(0, 168)) || unk_0x7A4571218C06A722(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	int iVar0;
	
	if (unk_0x8B2DC483C96C65F6())
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			unk_0x47BF380FF078FA9F(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_364(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_365(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

int func_366()
{
	if (func_367())
	{
		return 1;
	}
	if (unk_0x4FF34B5B023875E1())
	{
		return 0;
	}
	if (unk_0x58CFBE8B8644D59B() || unk_0xEC708A793EB17979())
	{
		return 0;
	}
	if (unk_0xE80DFF2CE01EA7DA())
	{
		return 0;
	}
	return 1;
}

bool func_367()
{
	return Global_1312438;
}

bool func_368()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

int func_369()
{
	return Global_1338622.f_68;
}

int func_370()
{
	if (Global_1573686 > 16)
	{
		return 1;
	}
	return 0;
}

float func_371()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x3F3FC0D85C84A6CE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_372(int iParam0)
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

int func_373()
{
	if (func_378())
	{
		return 1;
	}
	if (func_195(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_376())
	{
		return 1;
	}
	if (func_234(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_184(unk_0xE0BDAFA1A39552D6()))
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
				if (!func_374(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_374(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_374(unk_0xE0BDAFA1A39552D6()))
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

bool func_374(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 4);
}

int func_375(int iParam0)
{
	if ((iParam0 == 24 && func_234(unk_0xE0BDAFA1A39552D6())) && !func_233(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_228(unk_0xE0BDAFA1A39552D6(), 0) && func_233(unk_0xE0BDAFA1A39552D6()))
		{
			return 1;
		}
		if (func_217(unk_0xE0BDAFA1A39552D6()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_376()
{
	return Global_1587815;
}

struct<4> func_377()
{
	struct<4> Var0;
	
	switch (Local_96.f_27)
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

int func_378()
{
	if (func_379(unk_0xE0BDAFA1A39552D6()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_379(int iParam0)
{
	if (unk_0x17CC0D5008835470())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x7FE82332EF233898(iParam0);
		}
	}
	return 0;
}

void func_380()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	switch (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17)
	{
		case 0:
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 == 0)
			{
				if (Local_96.f_241 == 0)
				{
					func_670();
				}
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 22))
			{
				if (Local_96.f_27 == joaat("rhino") && Local_96.f_29 == 2)
				{
					func_639(Local_96.f_30[0 /*3*/]);
					unk_0xE27C8E42A97895CF(&iLocal_1307, 22);
				}
				else if (!func_65(Local_96.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_639(Local_96.f_30[0 /*3*/]);
					unk_0xE27C8E42A97895CF(&iLocal_1307, 22);
				}
			}
			func_638();
			func_632();
			if (Local_96.f_241 == 0)
			{
				func_629(1);
			}
			func_628(0);
			if (Local_96.f_241 == 0)
			{
				if (!Local_96.f_27 == joaat("hydra") && !Local_96.f_27 == joaat("rhino"))
				{
					func_190();
				}
				else if (func_665())
				{
					func_190();
				}
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 1))
					{
						func_627(129);
						func_605(1);
						unk_0xE27C8E42A97895CF(&iLocal_1308, 1);
						unk_0x4C48684974B45ED5(0);
					}
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 6))
					{
						if (Local_96.f_28 > 1 || (Local_96.f_28 == 1 && func_106() > 1))
						{
							if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 4))
							{
								Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 = 0;
								unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0x7DA173D4FD42F36B(iLocal_1308, 1))
				{
					unk_0x99BCB15F954AF579(&iLocal_1308, 1);
					func_604();
					func_603();
					func_605(0);
				}
			}
			if (Local_96.f_241 == 1)
			{
				func_602(&iVar4, &uVar5);
				iLocal_3573 = iVar4;
				func_601(0);
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
				{
					if (!func_600())
					{
						unk_0xE27C8E42A97895CF(&iLocal_1308, 19);
					}
					if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
					{
						func_7();
					}
					unk_0x4C48684974B45ED5(0);
					if ((func_599("UW_MINV") || func_599("UW_TIMELA")) || func_599("UW_TIMEL"))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
					func_186();
					func_589(129, 0f, 0f, 1, 1, 1, 0);
					func_586(1);
					func_585();
					unk_0x71543B3C24188223(0.1f);
					iLocal_1317 = unk_0x16B4666C6E139F11();
					unk_0x23C09ED6B6466E40(0);
					func_584(1);
					func_583(1);
					if (Local_96.f_27 != joaat("rhino"))
					{
						func_566(1);
					}
					iLocal_1519 = unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E());
					unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), iLocal_1517);
					unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
					unk_0x25B97FB8615971D6("MP_MC_START");
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 184, 1);
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 151, 0);
					func_565(0);
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 = iLocal_3573;
					if (!func_665())
					{
						func_564(62, "UW_TITLE", "UW_DESC", func_291(), -1, func_291());
					}
					else if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
					{
						func_564(62, "UW_TITLEC", "UW_DESCC", func_291(), -1, func_291());
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_563(62, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_291(), func_291());
					}
					Local_713.f_9 = unk_0x40077EDF3FF70C39();
					func_565(0);
					func_561(0);
					func_18(&uLocal_3611, 0, 0);
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 1;
				}
				else
				{
					func_186();
					if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
					{
						func_7();
					}
					if (func_558("UW_HELP1", func_560(), func_559(1)) || func_558("UW_HELP1C", func_560(), func_559(1)))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
					func_565(0);
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 == 0)
					{
					}
					else if (!func_557())
					{
					}
				}
			}
			else if (Local_96.f_241 == 3)
			{
				func_565(0);
				if (func_558("UW_HELP1", func_560(), func_559(1)) || func_558("UW_HELP1C", func_560(), func_559(1)))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				if (!func_556())
				{
				}
				if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
				{
					func_7();
				}
				func_186();
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 3;
			}
			else if (Local_96.f_241 > 3)
			{
				if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
				{
					func_7();
				}
				func_565(0);
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
				{
					func_555();
					func_554();
					if (func_116())
					{
						func_585();
					}
				}
				if (func_665())
				{
					if (func_548(2, 0, 1, 0, 0))
					{
						if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
						{
							func_7();
						}
						func_565(0);
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
					}
				}
				else if (Local_96.f_27 == joaat("valkyrie"))
				{
					if (func_548(2, 0, 1, 0, 0))
					{
						if (func_257("UW_ABTSC") || func_257("UW_ABTS"))
						{
							func_7();
						}
						func_565(0);
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_159(1);
			func_632();
			func_498();
			func_163();
			func_496();
			func_484();
			func_258(0);
			func_480();
			func_477();
			func_555();
			func_554();
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 26))
			{
				if (!func_476(54))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
					{
						if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 10))
						{
							if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 == -1)
							{
								if (!func_665())
								{
									if (!func_257("UW_ATTK"))
									{
										func_251("UW_ATTK", 0);
									}
								}
								else if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									if (!func_257("UW_ATTK"))
									{
										func_251("UW_ATTK", 0);
									}
								}
								else if (!func_257("UW_ATTK"))
								{
									func_602(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_251("UW_ATTK", 0);
								}
							}
							else if (func_257("UW_ATTK"))
							{
								func_7();
							}
						}
					}
				}
			}
			func_475();
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
			{
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 == -1)
				{
					func_585();
				}
			}
			if (!func_755(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
				func_7();
				unk_0xE27C8E42A97895CF(&iLocal_1307, 21);
			}
			else if (func_176())
			{
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
				func_7();
			}
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 1)
			{
				if (!func_474())
				{
					unk_0xE27C8E42A97895CF(&iLocal_1307, 23);
					func_7();
					if (iLocal_3573 > -1)
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iLocal_3573]))
						{
							func_23(&(Local_96.f_7[iLocal_3573]));
						}
					}
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
				}
			}
			if (Local_96.f_241 == 3)
			{
				func_604();
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 3;
			}
			else if (Local_96.f_241 > 3)
			{
				func_604();
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
			}
			else if (func_665())
			{
				if (func_548(2, 0, 1, 0, 0))
				{
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_96.f_241 == 3)
			{
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 3;
			}
			else if (Local_96.f_241 > 3)
			{
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
			}
			func_413();
			if (func_556())
			{
				if (func_184(unk_0xE0BDAFA1A39552D6()) == 129)
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !unk_0xCA914B57A3600215())
					{
						unk_0x6553935614875699(unk_0x06736567F820A39E(), 398, 0);
						if (unk_0x7DA173D4FD42F36B(iLocal_1307, 22))
						{
							func_412();
							unk_0x99BCB15F954AF579(&iLocal_1307, 22);
						}
						func_603();
						func_409();
						func_407(0);
						func_405(0);
						unk_0x6553935614875699(unk_0x06736567F820A39E(), 184, 0);
						unk_0x6553935614875699(unk_0x06736567F820A39E(), 151, 1);
						func_605(0);
						func_604();
					}
					func_404();
				}
			}
			else if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 8))
			{
				unk_0xE27C8E42A97895CF(&iLocal_1308, 8);
			}
			if (!func_194())
			{
				func_403();
				func_496();
				func_159(0);
				func_484();
				func_258(1);
				func_480();
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_402();
			}
			func_397();
			func_396();
			func_498();
			if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar6]))
					{
						if (!func_30(Local_96.f_48[iVar6]))
						{
							unk_0x657CAD7CE358D665(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar6]), unk_0xE0BDAFA1A39552D6(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_80[iVar6]))
					{
						if (!func_30(Local_96.f_80[iVar6]))
						{
							unk_0x657CAD7CE358D665(unk_0x220B3465A4B1FBA5(Local_96.f_80[iVar6]), unk_0xE0BDAFA1A39552D6(), 0);
						}
					}
					iVar6++;
				}
				unk_0xE27C8E42A97895CF(&iLocal_1308, 7);
			}
			else if (Local_96.f_247 != iLocal_3571)
			{
				iLocal_3571 = Local_96.f_247;
				unk_0x99BCB15F954AF579(&iLocal_1308, 7);
			}
			if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
			{
				unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 11);
			}
			if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 10))
			{
				unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 10);
			}
			if (unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E()) == iLocal_1517)
			{
				unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), iLocal_1519);
			}
			break;
		
		case 3:
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 31))
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 12))
				{
					func_186();
					unk_0xE27C8E42A97895CF(&iLocal_1307, 31);
				}
			}
			func_475();
			func_391();
			if (!func_194())
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 14) && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 12))
				{
					func_258(1);
				}
				func_484();
				func_496();
				func_480();
				func_382();
			}
			func_413();
			func_396();
			func_498();
			if (Local_96.f_241 > 3)
			{
				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_711();
			break;
	}
	func_381();
}

void func_381()
{
	int iVar0;
	
	if (iLocal_3634 != Local_96.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_616, iVar0))
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_3634, iVar0))
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
					{
						if (unk_0x40B3668D7226E0DF(Local_96.f_7[iVar0]))
						{
							unk_0x818E8D7BA45E01E7(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 2);
							func_23(&(Local_96.f_7[iVar0]));
							unk_0xE27C8E42A97895CF(&iLocal_3634, iVar0);
						}
					}
					else
					{
						unk_0xE27C8E42A97895CF(&iLocal_3634, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_382()
{
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 5))
		{
			if (func_385(0, 1, 1, 1))
			{
				if (func_665())
				{
					func_384("UW_TFEWC", 30000);
				}
				else
				{
					func_384("UW_TFEW", 30000);
				}
				func_383(1);
				unk_0xE27C8E42A97895CF(&iLocal_1308, 5);
			}
		}
	}
}

void func_383(int iParam0)
{
	unk_0x77592BDEB9623D0F(3, 21, 200, 0, 0);
	if (iParam0 && !func_327())
	{
		unk_0x962E604CCA53388F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_384(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam1);
}

int func_385(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (func_368())
	{
		return 0;
	}
	if (func_237())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_239(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_389(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_388())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (func_386())
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	return 1;
}

bool func_386()
{
	return Global_2434839.f_568;
}

bool func_387()
{
	return Global_2434839.f_720;
}

bool func_388()
{
	return Global_2428549.f_2482.f_585;
}

int func_389(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_390()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

void func_391()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_257("UW_EXPL") && !func_257("UW_EXPLC"))
	{
		func_7();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1307, (27 + iVar2)))
		{
			if (unk_0xC7A68C5C107A1253(Local_96.f_7[iVar2]))
			{
				if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 0))
				{
					unk_0xE27C8E42A97895CF(&iLocal_1307, (27 + iVar2));
					uLocal_3574[iVar2] = unk_0xD619EBCC6AD6E414();
					unk_0x65C518355A67952C(uLocal_3574[iVar2], "Explosion_Countdown", unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x9593DF47DE89B3C7(uLocal_3574[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_665())
	{
		if (unk_0xC7A68C5C107A1253(Local_96.f_7[0]))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_319, 0))
			{
				if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_7[0]), 0))
				{
					if ((func_395() - func_120(&(Local_96.f_324), 0, 0)) >= 0)
					{
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0 || unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
						{
							if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_194())
								{
									func_394();
									func_165((func_395() - func_120(&(Local_96.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0 || unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
						{
							if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_194())
								{
									func_394();
									func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
								}
							}
						}
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
						{
							func_604();
						}
						if (unk_0x40B3668D7226E0DF(Local_96.f_7[0]))
						{
							unk_0xB2C123C54D84E6A7(unk_0xA9B72300DA155F92(Local_96.f_7[0]), 0);
							unk_0x8053CB955C7F93DB(unk_0xA9B72300DA155F92(Local_96.f_7[0]), true);
							if (!unk_0xEF439FAE899F725F(unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[0]))))
							{
								unk_0x399D6718F721A01E(unk_0xA9B72300DA155F92(Local_96.f_7[0]), 1, 0, -1);
								func_23(&(Local_96.f_7[0]));
							}
							else
							{
								unk_0xF1A99D120F6D6F60(unk_0xA9B72300DA155F92(Local_96.f_7[0]), 1, 0, 0);
								func_23(&(Local_96.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_186();
		if (!func_194())
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 12))
			{
				if (func_103(Local_96.f_7[0]))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[0])))
						{
							if (!func_665())
							{
								if (!func_257("UW_EXPL"))
								{
									func_251("UW_EXPL", 0);
								}
							}
							else if (!func_257("UW_EXPLC"))
							{
								func_251("UW_EXPLC", 0);
							}
							unk_0xE27C8E42A97895CF(&iLocal_1307, 12);
						}
					}
				}
			}
			else if (func_257("UW_EXPL") || func_257("UW_EXPLC"))
			{
				if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
				{
					if (!unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
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
			if (unk_0xC7A68C5C107A1253(Local_96.f_7[iVar0]))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_319, iVar0))
				{
					if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0))
					{
						if ((func_395() - func_120(&(Local_96.f_324), 0, 0)) >= 0)
						{
							if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0 || unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
							{
								if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_194())
									{
										if (!bVar1)
										{
											func_394();
											func_165((func_395() - func_120(&(Local_96.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0 || unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
							{
								if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_194())
									{
										if (!bVar1)
										{
											func_394();
											func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
							{
								func_604();
							}
							if (func_392(Local_96.f_7[iVar0]))
							{
								if (unk_0x40B3668D7226E0DF(Local_96.f_7[iVar0]))
								{
									unk_0xB2C123C54D84E6A7(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
									unk_0x8053CB955C7F93DB(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), true);
									if (!unk_0xEF439FAE899F725F(unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]))))
									{
										unk_0x399D6718F721A01E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1, 0, -1);
										func_23(&(Local_96.f_7[iVar0]));
									}
									else
									{
										unk_0xF1A99D120F6D6F60(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 1, 0, 0);
										func_23(&(Local_96.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 12))
				{
					if (func_103(Local_96.f_7[iVar0]))
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar0])))
							{
								if (!func_194())
								{
									if (!func_665())
									{
										if (!func_257("UW_EXPL"))
										{
											func_251("UW_EXPL", 0);
										}
									}
									else if (!func_257("UW_EXPLC"))
									{
										func_251("UW_EXPLC", 0);
									}
									unk_0xE27C8E42A97895CF(&iLocal_1307, 12);
								}
							}
						}
					}
				}
				else if (func_257("UW_EXPL") || func_257("UW_EXPLC"))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (!unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
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

int func_392(var uParam0)
{
	if (unk_0xED2E89495A3A119B(uParam0))
	{
		return 1;
	}
	if (func_393(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_393(var uParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return 0;
	}
	if (!unk_0xC3A7CFC6468E0BAE(uParam0))
	{
		return 0;
	}
	if (func_75(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_394()
{
	Global_1339962.f_942 = 1;
}

int func_395()
{
	if (func_665())
	{
		return Global_262145.f_9573;
	}
	return Global_262145.f_9294;
}

void func_396()
{
	if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 4))
	{
		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
				{
					func_604();
					unk_0xE27C8E42A97895CF(&iLocal_1308, 4);
				}
			}
		}
	}
}

void func_397()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x3FA2D2B4F501B725(iLocal_1316);
	if (unk_0x6B90EB073E0E641F(iVar0))
	{
		iVar1 = unk_0x1886D89D5D557CB4(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			if (iLocal_1316 != unk_0x490BA5FDD7EE47A9())
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_3635, iLocal_1316))
				{
					if (!func_194())
					{
						if (Local_730[iLocal_1316 /*18*/].f_17 == 1)
						{
							unk_0xE27C8E42A97895CF(&iLocal_3635, iLocal_1316);
							func_398(iVar1, 55, 1);
						}
					}
				}
				else if (func_194())
				{
					func_398(iVar1, 55, 0);
					unk_0x99BCB15F954AF579(&iLocal_3635, iLocal_1316);
				}
				else if (Local_730[iLocal_1316 /*18*/].f_17 > 1)
				{
					unk_0x99BCB15F954AF579(&iLocal_3635, iLocal_1316);
					func_398(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_1316++;
	if (iLocal_1316 >= unk_0xC4A9F8E5EC59EB4F())
	{
		iLocal_1316 = 0;
	}
}

void func_398(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_400())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_399(iParam0))
	{
		if (bParam2)
		{
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = unk_0xAE832DCCE9CD3242();
			Global_2412936.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = -1;
		}
	}
}

int func_399(int iParam0)
{
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_559[iParam0]) || Global_2412936.f_559[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	switch (func_401())
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

int func_401()
{
	return Global_25152;
}

void func_402()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xCDB4C4200A9B478A(Local_1324[iVar0 /*8*/]))
		{
			unk_0x2239ED27B231AE2E(&(Local_1324[iVar0 /*8*/]));
		}
		if (unk_0xCDB4C4200A9B478A(Local_1324[iVar0 /*8*/].f_1))
		{
			unk_0x2239ED27B231AE2E(&(Local_1324[iVar0 /*8*/].f_1));
		}
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar0]))
		{
			if (!func_30(Local_96.f_48[iVar0]))
			{
				if (unk_0xE60A28942E3AC2F4(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0])))
				{
					func_86(&(Local_1324[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_403()
{
	if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 11))
	{
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 13))
			{
				if (func_184(unk_0xE0BDAFA1A39552D6()) != 129)
				{
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
					{
						if (!func_476(64) && !func_476(65))
						{
							if (unk_0x7DA173D4FD42F36B(iLocal_1308, 11))
							{
								if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 12))
								{
									if (func_385(0, 1, 1, 1))
									{
										if (func_665())
										{
											func_384("UW_HELIMC", -1);
										}
										else
										{
											func_384("UW_HELIM", -1);
										}
										func_383(1);
										unk_0xE27C8E42A97895CF(&iLocal_1308, 12);
									}
								}
							}
							else if (!(Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra")))
							{
								if (func_385(0, 1, 1, 1))
								{
									if (!func_665())
									{
										func_384("UW_TAVAIL", 30000);
									}
									else
									{
										func_384("UW_TAVAILC", 30000);
									}
									func_383(1);
									unk_0xE27C8E42A97895CF(&iLocal_1307, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_404()
{
	float fVar0;
	
	if (iLocal_3630 != 0)
	{
		return;
	}
	if (func_20(&uLocal_3611))
	{
		iLocal_3630 = func_120(&uLocal_3611, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_3630);
	fVar0 = (fVar0 / 60000f);
	iLocal_3630 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_3630 >= 1)
	{
	}
	else
	{
		iLocal_3630 = 1;
	}
	if (iLocal_3630 > Global_262145.f_9633)
	{
		iLocal_3630 = Global_262145.f_9633;
	}
}

void func_405(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91362.f_8 = 1;
	}
	else
	{
		Global_91362.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_406(iVar0);
		iVar0++;
	}
}

void func_406(int iParam0)
{
	Global_91362.f_156[iParam0] = 1;
	Global_91362.f_155 = 1;
}

void func_407(int iParam0)
{
	if (func_408() && iParam0)
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

int func_408()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

void func_409()
{
	unk_0x23C09ED6B6466E40(5);
	func_411();
	unk_0x71543B3C24188223(1f);
	unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 8);
	func_410();
}

void func_410()
{
	if (Global_1732289)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1732290, 0))
		{
			unk_0x99BCB15F954AF579(&Global_2471749, 0);
		}
		if (unk_0x7DA173D4FD42F36B(Global_1732290, 1))
		{
			unk_0x99BCB15F954AF579(&Global_2471749, 1);
		}
		if (unk_0x7DA173D4FD42F36B(Global_1732290, 5))
		{
			unk_0x99BCB15F954AF579(&Global_2471749, 5);
		}
		if (unk_0x1A7559C163191E43(-355737150))
		{
			unk_0xA78E2D8D6ED49B05(-355737150, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-580979506))
		{
			unk_0xA78E2D8D6ED49B05(-580979506, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-1426452475))
		{
			unk_0xA78E2D8D6ED49B05(-1426452475, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(745417724))
		{
			unk_0xA78E2D8D6ED49B05(745417724, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-1305304906))
		{
			unk_0xA78E2D8D6ED49B05(-1305304906, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-1543175077))
		{
			unk_0xA78E2D8D6ED49B05(-1543175077, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-811770997))
		{
			unk_0xA78E2D8D6ED49B05(-811770997, 1, 0, 0);
		}
		Global_1732290 = 0;
	}
	Global_1732289 = 0;
}

void func_411()
{
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && Global_2464975.f_4680 < 1f)
		{
			return;
		}
	}
	Global_2464975.f_4681 = -1;
	Global_2464975.f_4680 = 1f;
}

void func_412()
{
	Global_2391047 = { 0f, 0f, 0f };
	Global_2391050 = 0;
}

void func_413()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (unk_0x7DA173D4FD42F36B(iLocal_1307, 13))
	{
		return;
	}
	bVar0 = unk_0x7DA173D4FD42F36B(Local_96.f_3, 6);
	bVar1 = unk_0x7DA173D4FD42F36B(iLocal_1307, 21);
	bVar2 = unk_0x7DA173D4FD42F36B(iLocal_1307, 23);
	bVar3 = Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_556())
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 17))
		{
			if (func_755(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0) || bVar2)
				{
					if (!func_194())
					{
						if (!func_665())
						{
							if (bVar0)
							{
								func_564(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
								{
									func_564(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[0]) && func_103(Local_96.f_7[0]))
								{
									unk_0xE27C8E42A97895CF(&iLocal_1308, 11);
									unk_0xE27C8E42A97895CF(&iLocal_1308, 16);
									func_564(65, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_564(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_564(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || unk_0x7DA173D4FD42F36B(Local_96.f_3, 16))
							{
								func_564(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_564(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
							{
								if (func_473())
								{
									unk_0xE27C8E42A97895CF(&iLocal_1308, 11);
									unk_0xE27C8E42A97895CF(&iLocal_1308, 16);
									func_564(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_564(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_473())
							{
								unk_0xE27C8E42A97895CF(&iLocal_1308, 11);
								unk_0xE27C8E42A97895CF(&iLocal_1308, 16);
								func_564(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_564(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_473())
							{
								unk_0xE27C8E42A97895CF(&iLocal_1308, 11);
								unk_0xE27C8E42A97895CF(&iLocal_1308, 16);
								func_564(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_564(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || unk_0x7DA173D4FD42F36B(Local_96.f_3, 16))
						{
							func_564(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_472(1);
					Local_713.f_6 = (Local_713.f_6 + iVar4);
					if (!Global_262145.f_9700)
					{
						if (Local_713.f_6 > 0)
						{
							func_471(19, Local_713.f_6);
						}
					}
					Global_2446413 = iVar4;
					if (iVar4 > 0)
					{
						if (func_470())
						{
							func_461(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0xE3BA2F762D3AA0EB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_460(1);
					Local_713.f_7 = (Local_713.f_7 + iVar10);
					func_459();
					func_414(0, unk_0x06736567F820A39E(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_713.f_5 = 2;
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 398, 0);
					if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 16))
					{
						unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 8);
					}
					unk_0xE27C8E42A97895CF(&iLocal_1308, 17);
					unk_0xE27C8E42A97895CF(&iLocal_1308, 18);
				}
			}
		}
	}
}

int func_414(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_415(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_415(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_425(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1))
		{
			if (unk_0x77CB3F400804EDD1(iParam1))
			{
				iVar1 = unk_0x406B8F450D0105AB(iParam1);
				func_421(unk_0xB90C4C04BACF96A1(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_416(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_416(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_419(iParam0, 1) };
	if (iParam0 == func_418(unk_0x06736567F820A39E()))
	{
		func_417(1);
	}
	func_421(Var0, iParam1, 0, sParam2, iParam3);
}

void func_417(int iParam0)
{
	Global_2428549.f_1375 = iParam0;
}

int func_418(int iParam0)
{
	return iParam0;
}

Vector3 func_419(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x611B1E292F714CAD())
	{
		Var3 = { unk_0xE361DCEC3CCB65F0(2) };
	}
	if (iParam0 == func_420(unk_0x06736567F820A39E()) && unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		Var0 = { unk_0xF42E2289B33D5C38(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		fVar6 = unk_0x3CAD22C2D36A7F14(iParam0);
		if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x90B89006901451E8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_420(int iParam0)
{
	return iParam0;
}

void func_421(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428549.f_774[iVar0 /*30*/].f_6 == 0 || Global_2428549.f_774[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428549.f_774[iVar1 /*30*/] = { Param0 };
			Global_2428549.f_774[iVar1 /*30*/].f_6 = 1;
			Global_2428549.f_774[iVar1 /*30*/].f_4 = func_424(Global_2428549.f_774[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2428549.f_774[iVar1 /*30*/].f_7 = unk_0x201D90648B2AE3CE();
			Global_2428549.f_774[iVar1 /*30*/].f_3 = iParam3;
			Global_2428549.f_774[iVar1 /*30*/].f_8 = iParam4;
			Global_2428549.f_774[iVar1 /*30*/].f_9 = func_423();
			Global_2428549.f_774[iVar1 /*30*/].f_10 = func_422();
			StringCopy(&(Global_2428549.f_774[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2428549.f_774[iVar1 /*30*/].f_26 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam6);
		}
	}
}

int func_422()
{
	if (Global_2428549.f_1375)
	{
		Global_2428549.f_1375 = 0;
		return 1;
	}
	Global_2428549.f_1375 = 0;
	return 0;
}

var func_423()
{
	var uVar0;
	
	uVar0 = Global_2428549.f_1377;
	Global_2428549.f_1377 = 1;
	return uVar0;
}

float func_424(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xA1F52EC3ECE1D42E(unk_0x1ADD718B7E9360A5(), Param0, 1);
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

var func_425(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_426(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_426(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_458(unk_0xE0BDAFA1A39552D6()) || func_457(unk_0xE0BDAFA1A39552D6()))
	{
		if (Global_262145.f_7844 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7844;
		}
	}
	else if (Global_262145.f_5249 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5249;
	}
	if (func_168(uParam2))
	{
	}
	if (func_456())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_454(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_453(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_451(0, &iVar1);
					break;
				
				case 3:
					func_451(1, &iVar1);
					break;
				
				case 1:
					func_448(&iVar1);
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
			func_446(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_436((func_445(unk_0xE0BDAFA1A39552D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xADECF862874B38F9(iVar1, iParam8, iParam9);
				if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_2 != -1)
				{
					func_446(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_431(iVar1);
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
				func_427((func_429(unk_0xE0BDAFA1A39552D6()) + iVar1));
			}
			else
			{
				func_427((func_429(unk_0xE0BDAFA1A39552D6()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_427(int iParam0)
{
	if (func_456())
	{
		Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_5 = iParam0;
		func_428(joaat("mpply_globalxp"), iParam0);
	}
}

void func_428(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, 1);
	}
}

int func_429(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_755(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return func_430(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_430(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_431(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0xE0BDAFA1A39552D6()) };
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(&Var0))
		{
			iVar13 = func_434(func_435(&Var0));
			if (iVar13 == 0)
			{
				func_433(&Global_1347700, iParam0);
				func_432(joaat("mpply_crew_local_xp_0"), Global_1347700);
			}
			else if (iVar13 == 1)
			{
				func_433(&Global_1347701, iParam0);
				func_432(joaat("mpply_crew_local_xp_1"), Global_1347701);
			}
			else if (iVar13 == 2)
			{
				func_433(&Global_1347702, iParam0);
				func_432(joaat("mpply_crew_local_xp_2"), Global_1347702);
			}
			else if (iVar13 == 3)
			{
				func_433(&Global_1347703, iParam0);
				func_432(joaat("mpply_crew_local_xp_3"), Global_1347703);
			}
			else if (iVar13 == 4)
			{
				func_433(&Global_1347704, iParam0);
				func_432(joaat("mpply_crew_local_xp_4"), Global_1347704);
			}
		}
	}
}

void func_432(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347695 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347697 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347697 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347698 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347699 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347700 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347701 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347702 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347703 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347704 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347705 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347706 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347707 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347708 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347709 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347710 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347711 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_433(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_434(int iParam0)
{
	if (iParam0 == Global_1347695)
	{
		return 0;
	}
	else if (iParam0 == Global_1347696)
	{
		return 1;
	}
	else if (iParam0 == Global_1347697)
	{
		return 2;
	}
	else if (iParam0 == Global_1347698)
	{
		return 3;
	}
	else if (iParam0 == Global_1347699)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_435(var uParam0)
{
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(uParam0))
		{
			return Global_2444023;
		}
	}
	return Global_2444023;
}

void func_436(int iParam0, int iParam1, int iParam2)
{
	if (func_456())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7814 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347815[func_231(-1)])
				{
					unk_0xADECF862874B38F9(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347815[func_231(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_444(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_1 = iParam0;
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_6 = func_442(iParam0, 1);
		}
		func_441(632, iParam0, -1, 1);
		func_440(633, func_442(iParam0, 1), -1, 1);
		Global_1347815[func_231(-1)] = iParam0;
		func_437(7, 0);
	}
}

void func_437(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_439(iParam0, iParam1))
	{
		iVar0 = func_438();
		Global_2444000[iVar0] = iParam0;
	}
}

int func_438()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2444000[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_439(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_231(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

void func_441(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_231(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_231(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_231(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_231(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_231(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_231(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_231(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_231(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_231(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_231(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_231(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_231(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_231(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_231(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_231(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_231(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_231(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_231(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_231(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_231(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_231(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_231(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_231(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_231(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_231(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_231(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_231(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_231(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_231(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_231(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_231(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_231(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_231(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_231(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_231(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_442(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_443(iParam0, 0);
}

int func_443(int iParam0, int iParam1)
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
		if (Global_276766[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_276766[iVar3] < iParam0)
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

int func_444(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_2428549.f_1, iParam0);
	}
	return 1;
}

int func_445(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return Global_1347815[func_231(-1)];
			}
			else if (func_444(iParam0))
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347815[func_231(-1)];
	}
	return 0;
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_249(iParam0, func_231(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_447(iParam0))
	{
		func_440(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_441(iParam0, iVar0, iParam2, 1);
	}
}

int func_447(int iParam0)
{
	if (Global_1347694)
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
			case 2907:
			case 3036:
			case 3918:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

void func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		iVar4 = unk_0x3FA2D2B4F501B725(iVar0);
		if (unk_0x6B90EB073E0E641F(iVar4))
		{
			iVar5 = unk_0x1886D89D5D557CB4(iVar4);
			if (unk_0xF749B19A9F9B3DBF(iVar5) != -1)
			{
				if (unk_0xF749B19A9F9B3DBF(iVar5) == iVar1 || func_450(unk_0xF749B19A9F9B3DBF(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xE0BDAFA1A39552D6())
					{
						if (func_63(unk_0xE0BDAFA1A39552D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_449(*iParam0, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_449(*iParam0, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_449(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_450(int iParam0, int iParam1, int iParam2)
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
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 0);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 1);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 2);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 4);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 5);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 6);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 8);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 9);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 10);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 12);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 13);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 14);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_451(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
		{
			iVar3 = iVar0;
			if (unk_0x6B90EB073E0E641F(iVar3))
			{
				iVar4 = unk_0x1886D89D5D557CB4(iVar3);
				if (func_755(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xE0BDAFA1A39552D6())
					{
						iVar1++;
						if (func_63(unk_0xE0BDAFA1A39552D6(), iVar4))
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
			if (func_755(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xE0BDAFA1A39552D6())
				{
					if (func_452(unk_0xE0BDAFA1A39552D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0xE0BDAFA1A39552D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_449(*iParam1, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_449(*iParam1, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_452(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_453(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC66ACBB5C8ECB07() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_449(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_454(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xED165ADF51B05913(iParam0) > func_445(unk_0xE0BDAFA1A39552D6()))
		{
			iParam0 = -func_445(unk_0xE0BDAFA1A39552D6());
		}
	}
	if (func_455(8000, 0, 0) > 0)
	{
		if (func_455(8000, 0, 0) < (iParam0 + func_445(unk_0xE0BDAFA1A39552D6())))
		{
			iParam0 = (func_455(8000, 0, 0) - func_445(unk_0xE0BDAFA1A39552D6()));
		}
	}
	return iParam0;
}

int func_455(int iParam0, bool bParam1, int iParam2)
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
	return Global_276766[iParam0];
}

int func_456()
{
	return 1;
}

bool func_457(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_458(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

void func_459()
{
	Global_2445583 = 1;
}

int func_460(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7DA173D4FD42F36B(iLocal_1308, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_665())
		{
			return Global_262145.f_9515;
		}
		else
		{
			return Global_262145.f_9454;
		}
	}
	func_404();
	if (func_665())
	{
		iVar0 = (Global_262145.f_9515 * iLocal_3630);
	}
	else
	{
		iVar0 = (Global_262145.f_9454 * iLocal_3630);
	}
	return iVar0;
}

void func_461(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_470())
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
			if (iParam1 > 0)
			{
				func_462(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_462(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_462(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_470())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_16()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x1CFE5997DD1709D1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar3))
		{
			*uParam0 = func_469(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2562803[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2563285 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2563293 = 1;
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_468(1, iParam4);
			Global_2563293 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_463(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_463(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_464(iParam0);
	}
}

void func_464(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_470())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_467(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_465(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_465(var uParam0)
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
	func_466(&(uParam0->f_8.f_3));
	func_466(&(uParam0->f_8.f_16));
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

void func_466(var uParam0)
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

int func_467(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_468(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

int func_469(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_470())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = uParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = uParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = iParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_470()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

void func_471(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2464975.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5198)
		{
			iParam1 = Global_262145.f_5198;
		}
		Global_2464975.f_270 = iParam1;
		Global_2464975.f_271 = 0;
	}
}

int func_472(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7DA173D4FD42F36B(iLocal_1308, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_665())
		{
			return Global_262145.f_9514;
		}
		else
		{
			return Global_262145.f_9453;
		}
	}
	func_404();
	if (func_665())
	{
		iVar0 = (Global_262145.f_9514 * iLocal_3630);
	}
	else
	{
		iVar0 = (Global_262145.f_9453 * iLocal_3630);
	}
	return iVar0;
}

int func_473()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iLocal_3573]))
	{
		if (func_103(Local_96.f_7[iLocal_3573]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_96.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_96.f_256[iLocal_3573];
	if (!bVar0)
	{
		if (Local_96.f_594[0 /*4*/] != iLocal_3573)
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
	else if (Local_96.f_594[0 /*4*/] == iLocal_3573)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_96.f_256[Local_96.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_96.f_255 - iVar2);
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

int func_474()
{
	int iVar0;
	var uVar1;
	
	func_602(&iVar0, &uVar1);
	if (iLocal_3573 > -1)
	{
		if (func_103(Local_96.f_7[iLocal_3573]))
		{
			return 1;
		}
	}
	return 0;
}

void func_475()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_96.f_241 == 1)
	{
		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
		{
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 == -1)
			{
				if (!func_20(&uLocal_3609) || (func_20(&uLocal_3609) && func_17(&uLocal_3609, 5000, 0)))
				{
					if (Local_96.f_27 == joaat("savage") || Local_96.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3573;
						if (iVar1 > -1)
						{
							if (func_103(Local_96.f_7[iVar1]))
							{
								iVar0 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), -1);
								if (iVar0 == 0)
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
								}
								else if (unk_0xCFC04A38F256EE06(iVar0))
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x4E75E5867592AC01(iVar0))
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_96.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3573;
						if (iVar1 > -1)
						{
							if (func_103(Local_96.f_7[iVar1]))
							{
								iVar0 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), -1);
								if (iVar0 == 0)
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
								}
								else if (unk_0xCFC04A38F256EE06(iVar0))
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x4E75E5867592AC01(iVar0))
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
								}
								if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0x5E094905747079DF(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), iVar2);
										if (iVar0 != 0)
										{
											if (!unk_0xCFC04A38F256EE06(iVar0))
											{
												if (unk_0x4E75E5867592AC01(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_100(&uLocal_3609);
					func_18(&uLocal_3609, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x7DA173D4FD42F36B(Local_96.f_319, iVar2))
		{
			if (unk_0xC7A68C5C107A1253(Local_96.f_7[iVar2]))
			{
				if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 0))
				{
					if ((func_395() - func_120(&(Local_96.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
						{
							if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 0))
							{
								if (!func_194())
								{
									func_394();
									func_165((func_395() - func_120(&(Local_96.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
						{
							if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 0))
							{
								if (!func_194())
								{
									func_394();
									func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
								}
							}
						}
						if (unk_0x40B3668D7226E0DF(Local_96.f_7[iVar2]))
						{
							unk_0xB2C123C54D84E6A7(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 0);
							unk_0x8053CB955C7F93DB(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), true);
							if (!unk_0xEF439FAE899F725F(unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]))))
							{
								unk_0x399D6718F721A01E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 1, 0, -1);
								func_23(&(Local_96.f_7[iVar2]));
							}
							else
							{
								unk_0xF1A99D120F6D6F60(unk_0xA9B72300DA155F92(Local_96.f_7[iVar2]), 1, 0, 0);
								func_23(&(Local_96.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 == iVar2)
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 6))
				{
					if (func_385(0, 1, 1, 1))
					{
						if (func_665())
						{
							if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 19))
							{
								func_384("UW_NOPILC", 30000);
							}
							else
							{
								func_384("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_384("UW_NOPIL", 30000);
						}
						func_383(1);
						unk_0xE27C8E42A97895CF(&iLocal_1308, 6);
					}
					else if (unk_0x7DA173D4FD42F36B(iLocal_1308, 19))
					{
						if (unk_0x6146EFE5BC2DD8DC())
						{
							unk_0x310F6B4E168A8F5D(1);
						}
					}
				}
				if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
				{
					iVar5 = Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10;
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar5]))
					{
						if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar5])))
						{
							if (!func_665())
							{
								if (!func_257("UW_EXPL"))
								{
									func_251("UW_EXPL", 0);
								}
							}
							else if (!func_257("UW_EXPLC"))
							{
								func_251("UW_EXPLC", 0);
							}
						}
						else if (func_257("UW_EXPL") || func_257("UW_EXPLC"))
						{
							func_7();
						}
					}
					else if (func_257("UW_EXPL") || func_257("UW_EXPLC"))
					{
						func_7();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_476(int iParam0)
{
	return Global_2428549.f_2191[0 /*72*/].f_1 == iParam0;
}

void func_477()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
	{
		if (Local_96.f_27 == joaat("rhino"))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 10))
				{
					if (!func_20(&uLocal_3605) || (func_20(&uLocal_3605) && func_17(&uLocal_3605, 5000, 0)))
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (func_65(Local_3631, 0f, 0f, 0f, 0))
							{
								Local_3631 = { Local_96.f_30[0 /*3*/] };
							}
							fVar0 = func_479(unk_0x06736567F820A39E(), Local_3631, 1);
							if (fVar0 > 750f)
							{
								unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 10);
							}
						}
						func_100(&uLocal_3605);
						func_18(&uLocal_3605, 0, 0);
					}
				}
				else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
				{
					if (!func_257("UW_OOB"))
					{
						func_251("UW_OOB", 0);
					}
					if (!func_20(&uLocal_3607))
					{
						uVar2 = unk_0xD619EBCC6AD6E414();
						unk_0x65C518355A67952C(uVar2, "Explosion_Countdown", unk_0xA9B72300DA155F92(Local_96.f_7[func_478()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x9593DF47DE89B3C7(uVar2, "Time", 30f);
						func_18(&uLocal_3607, 0, 0);
					}
					if (func_20(&uLocal_3607))
					{
						if ((func_395() - func_120(&uLocal_3607, 0, 0)) >= 0)
						{
							func_394();
							func_165((func_395() - func_120(&uLocal_3607, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
						}
						else
						{
							func_394();
							func_165(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
							func_7();
							unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 11);
						}
					}
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
					{
						fVar0 = func_479(unk_0x06736567F820A39E(), Local_96.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 10);
							func_100(&uLocal_3607);
							unk_0x8EBF150526027B8E(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
	{
		func_604();
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			iVar1 = func_478();
			if (iVar1 > -1)
			{
				if (func_103(Local_96.f_7[iVar1]))
				{
					if (unk_0x40B3668D7226E0DF(Local_96.f_7[iVar1]))
					{
						unk_0xB2C123C54D84E6A7(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), 0);
						unk_0x8053CB955C7F93DB(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), true);
						unk_0x399D6718F721A01E(unk_0xA9B72300DA155F92(Local_96.f_7[iVar1]), 1, 0, -1);
						func_23(&(Local_96.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_478()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar1]))
			{
				if (func_103(Local_96.f_7[iVar1]))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar1])))
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

float func_479(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Param1, iParam4);
}

void func_480()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 24))
	{
		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 1)
		{
			func_602(&iVar1, &uVar0);
			if (func_483(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_96.f_22[iVar1] != func_25())
					{
						fLocal_1318 = unk_0xDFA323052D1A2D76();
						unk_0xC6F3762602632C26(-1f);
						func_482(1, iVar1);
						unk_0xE27C8E42A97895CF(&iLocal_1307, 24);
						func_481(1);
					}
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&iLocal_1307, 24);
				unk_0xE27C8E42A97895CF(&iLocal_1307, 25);
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 25))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_1307, 24))
		{
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 > 1)
			{
				unk_0xC6F3762602632C26(fLocal_1318);
				func_602(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_482(0, iVar1);
					unk_0xE27C8E42A97895CF(&iLocal_1307, 25);
					func_481(0);
				}
			}
		}
	}
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 15);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 4);
	}
}

void func_482(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			iVar1 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0));
			if (func_755(iVar1, 0, 1) && iVar1 != unk_0xE0BDAFA1A39552D6())
			{
				if (unk_0x7DA173D4FD42F36B(Local_730[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0x57ACE061E4C2BB1C(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0x57ACE061E4C2BB1C(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_483(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (!bVar0)
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
			{
				if (iVar1 != unk_0x490BA5FDD7EE47A9())
				{
					if (unk_0x7DA173D4FD42F36B(Local_730[iVar1 /*18*/].f_1, iParam0))
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

void func_484()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x51857BE3D081B03F())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 15))
	{
		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 2)
		{
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 == 0)
			{
				if (Local_96.f_22[0] != func_25())
				{
					if (func_385(0, 0, 1, 1))
					{
						if (!func_665())
						{
							if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
							{
								if (!func_665())
								{
									func_495("UW_START1P", unk_0x3DB24415831CBC43(Local_96.f_22[0]), 1, 30000);
								}
								else
								{
									func_495("UW_START1PC", unk_0x3DB24415831CBC43(Local_96.f_22[0]), 1, 30000);
								}
								func_383(1);
							}
							else if (unk_0x7DA173D4FD42F36B(Local_96.f_15, 0))
							{
								if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 14))
								{
									if (!func_665())
									{
										func_384("UW_STARTM", 30000);
									}
									else
									{
										func_384("UW_STARTMC", 30000);
									}
									func_383(1);
								}
							}
							else
							{
								func_495("UW_START1P", unk_0x3DB24415831CBC43(Local_96.f_22[0]), 1, 30000);
								func_383(1);
							}
						}
						else if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 14))
						{
							if (!func_665())
							{
								func_384("UW_STARTM", 30000);
							}
							else
							{
								func_384("UW_STARTMC", 30000);
							}
							func_383(1);
						}
						unk_0xE27C8E42A97895CF(&iLocal_1307, 15);
					}
				}
			}
		}
	}
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 2)
	{
		if (Local_96.f_241 == 1)
		{
			if (Local_96.f_27 != joaat("hydra") && Local_96.f_27 != joaat("rhino"))
			{
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
				{
					if (iLocal_3573 >= 0)
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 10))
						{
							if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 9))
							{
								if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iLocal_3573]))
								{
									if (func_103(Local_96.f_7[iLocal_3573]))
									{
										unk_0xE27C8E42A97895CF(&iLocal_1308, 9);
									}
								}
							}
							else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iLocal_3573]))
							{
								if (!func_103(Local_96.f_7[iLocal_3573]))
								{
									func_494("UW_TEAMV", 1);
									unk_0xE27C8E42A97895CF(&iLocal_1308, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_665())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_1307, (16 + iVar1)))
				{
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 >= 2)
					{
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 == 0)
						{
							if ((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2))
							{
								if (unk_0xC7A68C5C107A1253(Local_96.f_7[0]))
								{
									if (func_103(Local_96.f_7[0]))
									{
										if (unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[0]), -1) != 0)
										{
											iVar0 = func_493(iVar1, 0);
											if (iVar0 != func_25())
											{
												func_485("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											unk_0xE27C8E42A97895CF(&iLocal_1307, (16 + iVar1));
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

int func_485(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		unk_0xD5EA844E0F1947AF(iParam2);
		unk_0x9C174A0D56FFB64A(func_491(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		}
		else
		{
			Global_2460474 = { func_62(iParam1) };
			if (unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474))
			{
				iVar17 = 0;
				if (unk_0x2F6869889D97DFED(&(Global_2460404.f_22), "Leader") && Global_2460404.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2460404.f_21 > 0)
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
						Var1 = { func_490(&Var1) };
					}
					iVar0 = unk_0x7EFA4D96D67E80FA(iVar18, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar17, 0, Global_2460404, &Var1, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = unk_0xFA42110C8985008E(iVar18, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar17, 0, Global_2460404, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = unk_0xB452F88B6A7B058D(0, 1);
			}
		}
		func_486(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_486(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_489() || !unk_0x21A36E2323FEA4B1()) || !func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_487(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_487(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_488(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_488(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_489()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

struct<16> func_490(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_491(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_492(&cVar0);
}

var func_492(char[4] cParam0)
{
	return cParam0;
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_25();
	iVar2 = (iParam0 - 1);
	if (unk_0xC7A68C5C107A1253(Local_96.f_7[iParam1]))
	{
		if (func_103(Local_96.f_7[iParam1]))
		{
			iVar1 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iParam1]), iVar2);
			if (iVar1 != 0)
			{
				if (unk_0x4E75E5867592AC01(iVar1))
				{
					iVar0 = unk_0x90CB634380C802C7(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_494(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x999E5F6D1B49D87B(sParam0);
	iVar0 = unk_0xB452F88B6A7B058D(0, 1);
	func_486(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_495(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x15835437CE85AEA4(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x9C174A0D56FFB64A(sParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam3);
}

void func_496()
{
	if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 9))
	{
		if (Local_96.f_241 == 1)
		{
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
			{
				if (unk_0x25B97FB8615971D6("KILL_LIST_START_MUSIC"))
				{
					unk_0xE27C8E42A97895CF(&iLocal_1307, 9);
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 10))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_1307, 9))
		{
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 > 1)
			{
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
				{
					if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (unk_0x25B97FB8615971D6("MP_MC_FAIL"))
						{
							unk_0xE27C8E42A97895CF(&iLocal_1307, 10);
						}
					}
					else if (unk_0x25B97FB8615971D6("KILL_LIST_STOP_MUSIC"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_1307, 10);
						func_497();
					}
				}
			}
		}
	}
}

void func_497()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4588, 1))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4588), 1);
	}
	if (Global_2464975.f_4588 > 0)
	{
		unk_0x25B97FB8615971D6("FM_COUNTDOWN_30S_KILL");
		unk_0x25B97FB8615971D6("FM_COUNTDOWN_30S_FIRA");
		unk_0x8D72E02348CB74D2("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x5BC661D1FF0D731E(1);
		Global_2464975.f_4588 = 0;
		unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
		unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
		unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
		if (!unk_0x2F6869889D97DFED(unk_0x47B34031F915C179(), "am_pi_menu"))
		{
			if (Global_2464975.f_4598 > -1)
			{
				unk_0x2B84DF57725231E1(Global_2464975.f_4598);
				Global_2464975.f_4598 = -1;
			}
		}
	}
}

void func_498()
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
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
	{
		if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 8))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 26))
			{
				if ((((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2)) || (func_665() && unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))) || (func_665() && unk_0x7DA173D4FD42F36B(Local_96.f_3, 15)))
				{
					if (!func_20(&uLocal_3626))
					{
						func_18(&uLocal_3626, 0, 0);
					}
					if (func_17(&uLocal_3626, 1000, 0))
					{
						if (func_257("UW_ATTK"))
						{
							func_7();
						}
						func_547();
						if (func_546())
						{
							iVar25 = func_472(1);
							if (iVar25 > 0)
							{
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if ((!Global_262145.f_9700 && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 8)) || (!Global_262145.f_9701 && unk_0x7DA173D4FD42F36B(Local_96.f_3, 8)))
								{
									if (Local_713.f_6 > 0)
									{
										func_471(19, Local_713.f_6);
									}
								}
								Global_2446413 = iVar25;
								if (func_470())
								{
									func_461(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_460(1);
							func_459();
							Local_713.f_7 = (Local_713.f_7 + iVar23);
							func_414(0, unk_0x06736567F820A39E(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_713.f_5 = 2;
							func_564(64, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_665())
						{
							iVar25 = func_559(0);
							func_535(&iVar25, 1);
							iVar25 = (iVar25 + func_472(1));
							if (iVar25 > 0)
							{
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if (!Global_262145.f_9700)
								{
									if (Local_713.f_6 > 0)
									{
										func_471(19, Local_713.f_6);
									}
								}
								Global_2446413 = iVar25;
								if (func_470())
								{
									func_461(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_460(1);
							iVar23 = (iVar23 + func_534());
							Local_713.f_7 = (Local_713.f_7 + iVar23);
							func_459();
							func_414(0, unk_0x06736567F820A39E(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_713.f_5 = 1;
							func_563(63, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_533())
						{
							if (!func_532(1))
							{
								if (!func_257("UW_EXPL") && !func_257("UW_EXPLC"))
								{
									func_7();
								}
								iVar25 = func_559(0);
								func_535(&iVar25, 1);
								iVar25 = (iVar25 + func_472(1));
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if (!Global_262145.f_9701)
								{
									if (Local_713.f_6 > 0)
									{
										func_471(19, Local_713.f_6);
									}
								}
								Global_2446413 = iVar25;
								if (iVar25 > 0)
								{
									if (func_470())
									{
										func_461(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
								{
									func_563(63, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_563(63, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_713.f_5 = 1;
								iVar23 = func_534();
								iVar23 = (iVar23 + func_460(1));
								Local_713.f_7 = (Local_713.f_7 + iVar23);
								func_459();
								func_414(0, unk_0x06736567F820A39E(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_472(1);
								iVar23 = func_460(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_96.f_465[iVar22 /*4*/].f_1 == Local_96.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
										{
											if (Local_96.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_96.f_465[iVar22 /*4*/].f_2 != unk_0xE0BDAFA1A39552D6())
												{
													if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_96.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = unk_0x801C03D92F1C6755(Local_96.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3573 > -1)
										{
											if (iLocal_3573 != Local_96.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_96.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
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
										func_531(67, "UW_DRAWP", unk_0x3DB24415831CBC43(iVar9[0]), 1, 15000, "UW_BIGO", 2);
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
									func_563(67, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar21)
								{
									if (!func_665())
									{
										func_564(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_564(67, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar26 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_559(0)) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar24 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_534()) / unk_0xBBDA792448DB5A89(iVar20)));
								func_535(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if (!Global_262145.f_9701)
								{
									if (Local_713.f_6 > 0)
									{
										func_471(19, Local_713.f_6);
									}
								}
								Global_2446413 = iVar25;
								if (iVar25 > 0)
								{
									if (func_470())
									{
										func_461(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_713.f_7 = (Local_713.f_7 + iVar23);
								func_459();
								func_414(0, unk_0x06736567F820A39E(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_529(1);
							iVar25 = func_472(1);
							iVar23 = func_460(1);
							Local_713.f_6 = (Local_713.f_6 + iVar25);
							if (!Global_262145.f_9701)
							{
								if (Local_713.f_6 > 0)
								{
									func_471(19, Local_713.f_6);
								}
							}
							Global_2446413 = iVar25;
							if (iVar25 > 0)
							{
								if (func_470())
								{
									func_461(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_713.f_7 = (Local_713.f_7 + iVar23);
							func_459();
							func_414(0, unk_0x06736567F820A39E(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_532(0))
							{
								iVar13 = Local_96.f_465[0 /*4*/];
								if (!func_257("UW_EXPL") && !func_257("UW_EXPLC"))
								{
									func_7();
								}
								if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									iVar8 = unk_0x801C03D92F1C6755(Local_96.f_465[0 /*4*/].f_2);
									if (func_286(iVar8, 1))
									{
										iVar53 = func_290(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_288(iVar53);
											sVar54 = func_525(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_25())
									{
										if (!bVar52)
										{
											if (!func_665())
											{
												func_531(64, "UW_FWONP", unk_0x3DB24415831CBC43(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_531(64, "UW_FWONPC", unk_0x3DB24415831CBC43(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_665())
										{
											func_523(65, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_523(65, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_665())
									{
										func_563(64, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_563(64, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_257("UW_EXPL") && !func_257("UW_EXPLC"))
								{
									func_7();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_96.f_465[iVar22 /*4*/].f_1 == Local_96.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
										{
											if (Local_96.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_96.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = unk_0x801C03D92F1C6755(Local_96.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3573 > -1)
										{
											if (iLocal_3573 != Local_96.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_96.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_25() && unk_0xA27C9E8196C79D22(iVar9[0]))
										{
											if (iVar9[1] != func_25() && unk_0xA27C9E8196C79D22(iVar9[1]))
											{
												func_503(67, func_25(), func_25(), -1, "UW_DRAW2P", "UW_BIGF", func_291(), 15000, func_291(), unk_0x3DB24415831CBC43(iVar9[0]), unk_0x3DB24415831CBC43(iVar9[1]), 0);
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
									func_563(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_564(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_583(0);
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
						{
							Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
						}
						unk_0xE27C8E42A97895CF(&iLocal_1307, 13);
						unk_0xE27C8E42A97895CF(&iLocal_1307, 26);
					}
				}
				else if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 6) || (!func_665() && unk_0x7DA173D4FD42F36B(Local_96.f_3, 15)))
				{
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_10 != -1)
					{
						func_564(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_563(64, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_583(0);
					unk_0xE27C8E42A97895CF(&iLocal_1307, 26);
					iVar25 = func_472(1);
					Local_713.f_6 = (Local_713.f_6 + iVar25);
					if (!Global_262145.f_9700)
					{
						if (Local_713.f_6 > 0)
						{
							func_471(19, Local_713.f_6);
						}
					}
					Global_2446413 = iVar25;
					if (iVar25 > 0)
					{
						if (func_470())
						{
							func_461(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_460(1);
					Local_713.f_7 = (Local_713.f_7 + iVar23);
					func_459();
					func_414(0, unk_0x06736567F820A39E(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_713.f_5 = 2;
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
					{
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 14))
				{
					func_583(0);
					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 8);
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 3)
					{
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 11))
				{
					func_563(64, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_583(0);
					unk_0xE27C8E42A97895CF(&iLocal_1307, 26);
					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 8);
					iVar25 = func_472(1);
					Local_713.f_6 = (Local_713.f_6 + iVar25);
					if (!Global_262145.f_9700)
					{
						if (Local_713.f_6 > 0)
						{
							func_471(19, Local_713.f_6);
						}
					}
					Global_2446413 = iVar25;
					if (iVar25 > 0)
					{
						if (func_470())
						{
							func_461(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							unk_0xE3BA2F762D3AA0EB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_460(1);
					Local_713.f_7 = (Local_713.f_7 + iVar23);
					func_459();
					func_414(0, unk_0x06736567F820A39E(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_713.f_5 = 2;
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
					{
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 12))
				{
					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 8);
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 8))
			{
				if (unk_0x7DA173D4FD42F36B(iLocal_1307, 26))
				{
					if (func_257("UW_ATTK"))
					{
						func_7();
					}
					if (func_499(&uLocal_3564, 1))
					{
						unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 8);
					}
					if (!func_257("UW_EXPL") && !func_257("UW_EXPLC"))
					{
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 > -1)
						{
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9]))
							{
								if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
								{
									if (func_103(Local_96.f_7[Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9]))
									{
										if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9])))
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
	else if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 8))
	{
		unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 8);
	}
}

int func_499(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((*uParam0 > 0 && !func_327()) && !(func_228(unk_0xE0BDAFA1A39552D6(), 0) && (func_220(unk_0xE0BDAFA1A39552D6()) || func_218(unk_0xE0BDAFA1A39552D6()))))
	{
		func_502();
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
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 25);
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 0);
					func_18(&(uParam0->f_5), 0, 0);
				}
				func_18(&(uParam0->f_1), 0, 0);
				func_501(uParam0, 1);
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
				func_500();
				func_501(uParam0, 2);
			}
			break;
		
		case 2:
			func_500();
			if (func_17(&(uParam0->f_1), 15000, 0))
			{
				if (func_599("AMEV_LBD_HELP"))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				func_501(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_17(&(uParam0->f_1), 23500, 0))
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
				func_501(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
			return 1;
	}
	return 0;
}

void func_500()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0))
	{
		if (((((!unk_0xCA914B57A3600215() && !unk_0x7DA173D4FD42F36B(Global_2464975.f_743, 2)) && func_755(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !Global_68089) && !Global_52961) && !unk_0x4FF34B5B023875E1())
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 1);
			func_384("AMEV_LBD_HELP", -1);
			func_383(1);
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 0);
		}
	}
}

void func_501(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_502()
{
	Global_2445584 = 1;
}

int func_503(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_522(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_65 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_66 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_504(&Var0);
}

int func_504(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428549.f_2481)
		{
			return 0;
		}
	}
	func_507(uParam0, uParam0->f_16);
	func_506(uParam0);
	if (func_505(uParam0->f_1))
	{
		if (Global_2428549.f_2191[0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428549.f_2191[0 /*72*/].f_1 == 13 || Global_2428549.f_2191[0 /*72*/].f_1 == 52) || Global_2428549.f_2191[0 /*72*/].f_1 == 53) || Global_2428549.f_2191[0 /*72*/].f_1 == 57)
		{
			Global_2428549.f_2191[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428549.f_2191[iVar0 + 1 /*72*/] = { Global_2428549.f_2191[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428549.f_2191[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 1);
				Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_330(Global_2428549.f_2191[iVar0 /*72*/].f_1))
				{
					Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
					unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_505(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_506(var uParam0)
{
	if (func_332(uParam0->f_1))
	{
		uParam0->f_66 = func_291();
	}
}

void func_507(var uParam0, int iParam1)
{
	if (func_332(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_25())
	{
		return;
	}
	if (func_330(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_508(iParam1, -2, 0, 0);
		}
	}
}

int func_508(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_360(iParam0))
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
	if (func_360(unk_0xE0BDAFA1A39552D6()) || (func_521() && func_520()))
	{
		uVar0 = func_519();
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			if (unk_0x4E75E5867592AC01(iVar0))
			{
				if (unk_0x90CB634380C802C7(iVar0) != -1)
				{
					if (func_755(unk_0x90CB634380C802C7(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
						{
							if (Global_1617902.f_73330[iParam1] != -1)
							{
								return func_518(iParam1, iParam0, 0);
							}
							else
							{
								return func_515(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_515(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
			{
				if (Global_1617902.f_73330[iParam1] != -1)
				{
					return func_518(iParam1, iParam0, 0);
				}
				else
				{
					return func_509(0, -1, 0);
				}
			}
			else
			{
				return func_509(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
	{
		if (Global_1617902.f_73330[iParam1] != -1)
		{
			return func_518(iParam1, iParam0, 0);
		}
		else
		{
			return func_515(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_515(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
}

int func_509(bool bParam0, int iParam1, bool bParam2)
{
	return func_510(unk_0xE0BDAFA1A39552D6(), bParam0, iParam1, bParam2);
}

int func_510(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_450(iVar0, iParam2, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_514(1);
				}
				else
				{
					return func_514(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 20))
			{
				return func_511(iVar0, iParam2, 1);
			}
			else
			{
				return func_511(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_514(1);
	}
	return func_514(0);
}

int func_511(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_513(iParam0, iParam1);
	if (func_512(Global_1617902.f_76918))
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

int func_512(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7549[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_513(int iParam0, int iParam1)
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
			if (!func_450(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_514(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_515(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587816[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_517(iParam1, iParam0, iVar0, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)) || ((func_450(unk_0xF749B19A9F9B3DBF(iParam1), unk_0xF749B19A9F9B3DBF(iParam0), 0) && unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 23)) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)))
			{
				return func_514(1);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 26))
			{
				return func_516(1);
			}
			else
			{
				return func_510(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587816[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_514(1);
			}
			else
			{
				return func_510(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_290(iParam0);
	if (!iVar3 == -1)
	{
		return func_288(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_516(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_517(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
	}
	return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
}

int func_518(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617902.f_73330[iParam0] != -1 && Global_1617902.f_73330[iParam0] <= 4)
	{
		if (Global_1617902.f_73330[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617902.f_73330[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617902.f_73330[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617902.f_73330[iParam0] == 4)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 29))
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
			iVar0 = Global_1617902.f_73330[iParam0];
		}
	}
	else
	{
		iVar0 = func_510(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_519()
{
	return Global_2359301.f_2;
}

bool func_520()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 4);
}

bool func_521()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

void func_522(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_523(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_25();
	iVar1 = func_25();
	iVar2 = func_25();
	return func_524(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_524(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_522(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xE27C8E42A97895CF(&(Var0.f_63), 2);
	return func_504(&Var0);
}

char* func_525(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		uVar0 = func_528(&(Global_1610705[iParam0 /*178*/].f_10.f_77));
		return uVar0;
	}
	if (((func_219(iParam0, 28) || func_219(unk_0xE0BDAFA1A39552D6(), 28)) || func_527(iParam0)) && !func_526(iParam0))
	{
		return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_25())
	{
		if (iVar1 != unk_0xE0BDAFA1A39552D6())
		{
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
	}
	if (iVar1 != func_25())
	{
		uVar0 = func_528(&(Global_1610705[iVar1 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(uVar0))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_526(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0xB6FEE919E18FF45B() && unk_0x8BA2944C243C370E(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x8B003E1580113906() || unk_0x55812CD5A331E1F8())
	{
		if (unk_0x4F07450559D0D1D1(0))
		{
			return 0;
		}
	}
	else if (unk_0xB6FEE919E18FF45B())
	{
		if (unk_0x8BA2944C243C370E(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_528(var uParam0)
{
	return uParam0;
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		if (func_530(1))
		{
			unk_0xE27C8E42A97895CF(&Global_1573927, 1);
		}
	}
	else if (func_530(2))
	{
		unk_0xE27C8E42A97895CF(&Global_1573927, 2);
	}
}

int func_530(int iParam0)
{
	var uVar0;
	
	uVar0 = func_249(2512, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x7DA173D4FD42F36B(uVar0, 0) && unk_0x7DA173D4FD42F36B(iVar0, 1)) && unk_0x7DA173D4FD42F36B(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x7DA173D4FD42F36B(iVar0, 3) && unk_0x7DA173D4FD42F36B(iVar0, 4)) && unk_0x7DA173D4FD42F36B(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x7DA173D4FD42F36B(iVar0, 6) && unk_0x7DA173D4FD42F36B(iVar0, 7)) && unk_0x7DA173D4FD42F36B(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x7DA173D4FD42F36B(iVar0, 9) && unk_0x7DA173D4FD42F36B(iVar0, 10)) && unk_0x7DA173D4FD42F36B(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_531(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_522(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_504(&Var0);
}

int func_532(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_602(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_96.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
	{
		return Local_96.f_465[0 /*4*/].f_1 == Local_96.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_96.f_594[0 /*4*/].f_1 == Local_96.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_533()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_602(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_96.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_534()
{
	if (!func_665())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9450) * Global_262145.f_9639));
	}
	if ((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9511) * Global_262145.f_9641));
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9511) * Global_262145.f_9641));
	}
	return 0;
}

void func_535(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_545())
		{
			if (func_544(0))
			{
				if (unk_0xA27C9E8196C79D22(func_543()))
				{
					if (func_542() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_542());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_540(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_539("GB_BCUT_TICK1", func_543(), iVar0, 0, 0, 1, 1);
					}
					func_538(20);
					func_536(func_543(), iVar0, 1);
				}
			}
		}
	}
}

void func_536(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_755(iParam0, 0, 1))
	{
		Var0.f_0 = 456;
		Var0.f_1 = unk_0xE0BDAFA1A39552D6();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCCAB9843EFA5C08A(1, &Var0, 5, func_537(iParam0));
	}
}

var func_537(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

void func_538(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

int func_539(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		unk_0xD5EA844E0F1947AF(func_508(iParam1, -2, 1, 0));
		unk_0x9C174A0D56FFB64A(func_491(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xD5EA844E0F1947AF(iParam3);
		}
		unk_0xD92C45283BCDA624(iParam2);
		iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		func_486(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_540(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_541(1);
	}
	else
	{
		iVar1 = func_541(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_541(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10577;
}

int func_542()
{
	return Global_262145.f_10576;
}

int func_543()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

bool func_544(bool bParam0)
{
	return func_286(unk_0xE0BDAFA1A39552D6(), bParam0);
}

bool func_545()
{
	return func_321(unk_0xE0BDAFA1A39552D6());
}

int func_546()
{
	int iVar0;
	
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 6) && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_96.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_547()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_73[iVar0]))
		{
			if (!func_103(Local_96.f_73[iVar0]))
			{
				func_23(&(Local_96.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar0]))
		{
			if (func_30(Local_96.f_48[iVar0]))
			{
				func_23(&(Local_96.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_548(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x4D8275150C600F03() < iParam0)
	{
		if (bParam2)
		{
			func_553(sParam3, sParam4, 1);
		}
		if (func_552(26, -1))
		{
			func_550(26, -1);
		}
		return 1;
	}
	if (func_20(&(Global_1573903.f_18)))
	{
		if (!func_17(&(Global_1573903.f_18), 7500, 0))
		{
			return 0;
		}
		func_100(&(Global_1573903.f_18));
	}
	if (func_549())
	{
		if (bParam2)
		{
			func_553(sParam3, sParam4, 0);
		}
		if (func_552(26, -1))
		{
			func_550(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x3A040D6EABAF9E85() < iParam0)
	{
		if (bParam2)
		{
			func_553(sParam3, sParam4, 1);
		}
		if (func_552(26, -1))
		{
			func_550(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_549()
{
	return unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 0);
}

void func_550(int iParam0, int iParam1)
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
			unk_0xEDBA6647CF5AEA5C(0, iParam1);
			break;
		
		default:
			uVar1 = func_551(iParam1);
			iVar0 = unk_0x424297F730B39FD1(uVar1);
			if (unk_0x7DA173D4FD42F36B(iVar0, iParam0))
			{
				unk_0x99BCB15F954AF579(&iVar0, iParam0);
				unk_0xEDBA6647CF5AEA5C(iVar0, iParam1);
			}
			break;
	}
}

int func_551(int iParam0)
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

bool func_552(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_551(iParam1);
	uVar1 = unk_0x424297F730B39FD1(uVar0);
	return unk_0x7DA173D4FD42F36B(uVar1, iParam0);
}

void func_553(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 2) && !func_196(unk_0xE0BDAFA1A39552D6())) && !func_195(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x226FA58470A21AEF(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x226FA58470A21AEF(sParam1))
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
		func_564(65, sParam0, sParam1, 1, -1, 2);
		unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 2);
	}
}

void func_554()
{
	Global_2464975.f_1650.f_56 = 1;
}

void func_555()
{
	Global_2464975.f_1650.f_54 = 1;
}

bool func_556()
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 11);
}

int func_557()
{
	if (iLocal_3573 > -1)
	{
		if (func_103(Local_96.f_7[iLocal_3573]))
		{
			if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iLocal_3573])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_558(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xC11856C04AAC5813(sParam0);
	unk_0x4C5D86B5B659C953(uParam1);
	unk_0xD92C45283BCDA624(uParam2);
	return unk_0xBA2B1F42B35E6698(0);
}

int func_559(bool bParam0)
{
	if (!func_665())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9449) * Global_262145.f_9638));
	}
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9510) * Global_262145.f_9640));
	}
	if ((unk_0x7DA173D4FD42F36B(Local_96.f_3, 0) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 1)) && unk_0x7DA173D4FD42F36B(Local_96.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9510) * Global_262145.f_9640));
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9510) * Global_262145.f_9640));
	}
	return 0;
}

char* func_560()
{
	if (Local_96.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0x759D601DDE232B39(Local_96.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_561(int iParam0)
{
	if (func_232())
	{
		if (iParam0 == 1)
		{
			if (Global_2464975.f_4254 == -1)
			{
				Global_2464975.f_4254 = 60000;
			}
			func_6(&(Global_2464975.f_4252), 0, 0);
			if (Global_2464975.f_4257 == -1)
			{
				Global_2464975.f_4257 = 10000;
			}
			func_6(&(Global_2464975.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_604();
		}
		if ((!unk_0x21A36E2323FEA4B1() && !func_562()) && !func_238(unk_0xE0BDAFA1A39552D6()))
		{
			Global_978174 = 0;
		}
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_8 = 0;
	}
}

bool func_562()
{
	return Global_2434839.f_716;
}

int func_563(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
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
	func_522(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_504(&Var0);
}

int func_564(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_522(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_504(&Var0);
}

void func_565(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 4);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 4);
	}
}

void func_566(bool bParam0)
{
	int iVar0;
	
	if (unk_0xBD5A2DDC459E90C6(unk_0x06736567F820A39E(), 5) != 0)
	{
		unk_0xE736C729727B547E(unk_0x06736567F820A39E(), 177, 1);
		unk_0x58E1B080A905CD55(unk_0xE0BDAFA1A39552D6(), func_249(578, -1, 0));
		if (func_582())
		{
			unk_0x874E2A6DCA27BC9C(unk_0xE0BDAFA1A39552D6(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_581())
		{
			unk_0x874E2A6DCA27BC9C(unk_0xE0BDAFA1A39552D6(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_578(3610, -1, -1))
		{
		}
		iVar0 = func_249(2032, -1, 0);
		unk_0x823BA27833A9827E(unk_0xE0BDAFA1A39552D6(), func_577(unk_0x44A9253132E1DDE0(unk_0xE0BDAFA1A39552D6()), iVar0));
		if (func_544(0))
		{
			unk_0x58E1B080A905CD55(unk_0xE0BDAFA1A39552D6(), func_249(578, -1, 0));
		}
		else
		{
			unk_0x58E1B080A905CD55(unk_0xE0BDAFA1A39552D6(), func_576(Global_2471989));
		}
		func_575(unk_0xE0BDAFA1A39552D6(), iVar0);
		unk_0xCD1778A3A33254B2(unk_0xE0BDAFA1A39552D6(), 5, func_571(unk_0x06736567F820A39E(), iVar0), func_570(unk_0x06736567F820A39E(), iVar0), 0);
		func_569(func_249(2032, -1, 0), 1);
		Global_2464975.f_273 = 1;
		func_567(unk_0xE0BDAFA1A39552D6(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_567(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x17CC0D5008835470())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_249(2032, -1, 0);
		}
		unk_0xCD1778A3A33254B2(iParam0, 5, func_571(unk_0x44A9253132E1DDE0(iParam0), iParam2), func_570(unk_0x44A9253132E1DDE0(iParam0), iParam2), 0);
		func_575(iParam0, iParam2);
		unk_0x823BA27833A9827E(iParam0, func_577(unk_0x44A9253132E1DDE0(iParam0), iParam2));
		unk_0x47222A663B914109(unk_0x44A9253132E1DDE0(iParam0), 5, func_571(unk_0x44A9253132E1DDE0(iParam0), iParam2), func_570(unk_0x44A9253132E1DDE0(iParam0), iParam2), func_577(unk_0x44A9253132E1DDE0(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_249(578, -1, 0);
		}
		if (func_544(1) && func_568(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0x58E1B080A905CD55(unk_0xE0BDAFA1A39552D6(), func_576(Global_2471989));
		}
		else
		{
			unk_0x58E1B080A905CD55(iParam0, iParam1);
		}
		if (func_582())
		{
			unk_0x874E2A6DCA27BC9C(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_581())
		{
			unk_0x874E2A6DCA27BC9C(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0xE736C729727B547E(unk_0x44A9253132E1DDE0(iParam0), 177, 1);
	}
}

bool func_568(int iParam0)
{
	return func_219(iParam0, 10);
}

void func_569(int iParam0, int iParam1)
{
	if (unk_0x17CC0D5008835470())
	{
		func_440(2032, iParam0, -1, 1);
		unk_0xCD1778A3A33254B2(unk_0xE0BDAFA1A39552D6(), 5, func_571(unk_0x06736567F820A39E(), iParam0), func_570(unk_0x06736567F820A39E(), iParam0), 0);
		func_575(unk_0xE0BDAFA1A39552D6(), iParam0);
		unk_0x823BA27833A9827E(unk_0xE0BDAFA1A39552D6(), func_577(unk_0x06736567F820A39E(), iParam0));
		if ((iParam1 && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E())) && unk_0xBD5A2DDC459E90C6(unk_0x06736567F820A39E(), 5) != 0)
		{
			func_567(unk_0xE0BDAFA1A39552D6(), -1, -1);
		}
	}
}

int func_570(int iParam0, int iParam1)
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

int func_571(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0xBD5A2DDC459E90C6(iParam0, 11);
	if (unk_0xBD5A2DDC459E90C6(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x79469DA5833EACA8(iParam0);
	uVar3 = unk_0xDB11D3C7FD850B17(iParam0, 8, unk_0xBD5A2DDC459E90C6(iParam0, 8), unk_0x950602E98E112D03(iParam0, 8));
	if (unk_0x81FEC7DD443FEBE1(uVar3, joaat("OVER_JACKET"), 8))
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
		uVar5 = unk_0xDB11D3C7FD850B17(iParam0, 11, iVar0, unk_0x950602E98E112D03(iParam0, 11));
		if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_574(uVar5, 0);
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
						iVar0 = func_573(uVar5);
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
						iVar0 = func_573(uVar5);
						break;
					}
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_572(uVar5, 0);
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
					iVar0 = func_573(uVar5);
					break;
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0x81FEC7DD443FEBE1(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0x81FEC7DD443FEBE1(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0x81FEC7DD443FEBE1(uVar5, -1086258388, 0) || unk_0x81FEC7DD443FEBE1(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_7"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, -872449705, 0))
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
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_10"), 0))
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
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, -102825006, 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_21"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
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
				return (7 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_0"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_3"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_5"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_6"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x81FEC7DD443FEBE1(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0x81FEC7DD443FEBE1(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x81FEC7DD443FEBE1(uVar5, joaat("SILK_ROBE"), 0)) || unk_0x81FEC7DD443FEBE1(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_573(uVar5);
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

int func_572(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_573(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_574(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x81FEC7DD443FEBE1(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

void func_575(int iParam0, int iParam1)
{
	if (func_582())
	{
		if (iParam1 > 46)
		{
			unk_0x16333BFCAB8A5FE3(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x16333BFCAB8A5FE3(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x16333BFCAB8A5FE3(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xF543E4E4C5297CD7(iParam0);
		}
	}
	else if (func_581())
	{
		if (iParam1 > 0)
		{
			unk_0x16333BFCAB8A5FE3(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xF543E4E4C5297CD7(iParam0);
		}
	}
}

int func_576(var uParam0)
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

int func_577(int iParam0, int iParam1)
{
	return 0;
}

int func_578(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_580(iParam0, iParam1);
	uVar2 = func_579(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4121CA0A35F0B8AA(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_579(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x962F55EEC297B13E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x962F55EEC297B13E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x962F55EEC297B13E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x962F55EEC297B13E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x962F55EEC297B13E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x962F55EEC297B13E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x962F55EEC297B13E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x962F55EEC297B13E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x962F55EEC297B13E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x962F55EEC297B13E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x962F55EEC297B13E((iParam0 - 7321)) * 64);
	}
	return iVar0;
}

int func_580(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x57523A7BBB9C991D((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x57523A7BBB9C991D((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	return iVar0;
}

bool func_581()
{
	return unk_0xAACC697A3792B3EF(joaat("mppilot"));
}

bool func_582()
{
	return unk_0xAACC697A3792B3EF(joaat("mplts"));
}

void func_583(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 11))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_1641), 11);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 11))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1641), 11);
	}
}

void func_584(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 9))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_1641), 9);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 9))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1641), 9);
	}
}

void func_585()
{
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
}

void func_586(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (func_232())
		{
			func_561(0);
			func_588();
		}
		if (func_248(0))
		{
			iVar0 = func_249(2458, -1, 0);
			unk_0x99BCB15F954AF579(&iVar0, 0);
			func_588();
		}
		if (func_248(func_200(func_184(unk_0xE0BDAFA1A39552D6()))))
		{
			iVar0 = func_249(2458, -1, 0);
			unk_0x99BCB15F954AF579(&iVar0, func_200(func_184(unk_0xE0BDAFA1A39552D6())));
			func_588();
		}
		if (func_587())
		{
			func_588();
		}
		if (func_184(unk_0xE0BDAFA1A39552D6()) > -1)
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 7);
		}
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 7);
	}
}

int func_587()
{
	if (Global_2428549.f_648.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_588()
{
	if (func_587())
	{
		Global_2428549.f_648.f_16 = 1;
	}
}

void func_589(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
	}
	Global_2464975.f_4598 = -1;
	bVar0 = (func_228(unk_0xE0BDAFA1A39552D6(), 0) && func_220(unk_0xE0BDAFA1A39552D6()));
	if (bParam6)
	{
		func_598(21, 1);
	}
	else
	{
		func_597(iParam0, -1);
		if (func_196(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1573903.f_3 = iParam0;
		}
		else
		{
			func_627(iParam0);
		}
		Global_1573903.f_4 = -1;
		if (func_196(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 5);
		}
		if ((func_232() && !func_227()) || func_197(unk_0xE0BDAFA1A39552D6(), 21))
		{
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 4);
		}
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 17);
		unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 20);
		if (func_596(iParam0))
		{
			func_595();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_594(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x71543B3C24188223(fParam2);
			if (iParam0 == 146)
			{
				unk_0x23C09ED6B6466E40(0);
				unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
				unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
			}
		}
		if (func_593(iParam0))
		{
			unk_0x23C09ED6B6466E40(0);
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
			unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391043)
			{
				func_407(1);
				if (func_530(0))
				{
					unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 9);
				}
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_405(1);
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 12);
		}
		if (bParam5)
		{
			func_592();
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_590(iParam0))
			{
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 21);
			}
		}
	}
	Global_2460400 = 1;
}

int func_590(int iParam0)
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
	if (func_591())
	{
		return 1;
	}
	return 0;
}

int func_591()
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

void func_592()
{
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4589), 0);
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_221(unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_594(float fParam0)
{
	float fVar0;
	
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_400())
	{
		return;
	}
	fVar0 = (Global_2464975.f_4680 - fParam0);
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && unk_0xF87C669B882D93C0(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2464975.f_4680 = fParam0;
	Global_2464975.f_4681 = unk_0xAE832DCCE9CD3242();
}

void func_595()
{
	Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_198 = 0;
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4420), 1);
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_597(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_248(0) || func_248(func_200(iVar0)))
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 2);
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 2);
		}
	}
}

void func_598(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206, iParam0))
		{
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206), iParam0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206, iParam0))
	{
		unk_0x99BCB15F954AF579(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206), iParam0);
	}
}

bool func_599(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

int func_600()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_96.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
	iVar1 = unk_0x5E094905747079DF(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0x4321FC7479614822(iVar0, iVar2);
		if (iVar4 != 0)
		{
			if (!unk_0xCFC04A38F256EE06(iVar4))
			{
				if (unk_0x4E75E5867592AC01(iVar4))
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

void func_601(bool bParam0)
{
	var uVar0;
	
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		uVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
		if (unk_0xA2C0F3D7469C0A0B(uVar0))
		{
			unk_0xB2C123C54D84E6A7(uVar0, bParam0);
			unk_0x8053CB955C7F93DB(iVar0, !bParam0);
		}
	}
}

void func_602(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_96.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_603()
{
	int iVar0;
	
	iVar0 = unk_0xE0BDAFA1A39552D6();
	if (iVar0 != -1)
	{
		Global_1610705[iVar0 /*178*/] = -1;
	}
}

void func_604()
{
	if (unk_0x17CC0D5008835470())
	{
		if (!func_232())
		{
			if (func_755(unk_0xE0BDAFA1A39552D6(), 1, 0))
			{
				unk_0xB4BF8D10E8B22242(unk_0x06736567F820A39E(), 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 342, 0);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 122, 0);
			}
			unk_0xAC5CD08D2C6F2E74(unk_0xE0BDAFA1A39552D6(), 1f);
			unk_0x2339DE868E879B53(0);
			unk_0x4C48684974B45ED5(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0x8EE5B578170FE8FC(0, 0);
			}
		}
		else
		{
			if (func_755(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				unk_0xB4BF8D10E8B22242(unk_0x06736567F820A39E(), 0);
				unk_0xDC8345A5D9F4B348(unk_0x06736567F820A39E(), joaat("weapon_unarmed"), 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 342, 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 122, 1);
				unk_0xAC5CD08D2C6F2E74(unk_0xE0BDAFA1A39552D6(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x8EE5B578170FE8FC(1, 0);
				}
			}
			unk_0x2339DE868E879B53(1);
			unk_0x4C48684974B45ED5(0);
		}
	}
}

void func_605(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2446396 = func_184(unk_0xE0BDAFA1A39552D6());
		if (Global_2446396 == -1)
		{
			Global_2446396 = Global_1573903.f_4;
		}
		if (func_626(Global_2446396) == 0)
		{
			if (func_625(1) > 0)
			{
				func_624(26, -1);
			}
		}
		if (func_232())
		{
			func_561(0);
			func_588();
		}
		if (func_248(0))
		{
			iVar1 = func_249(2458, -1, 0);
			unk_0x99BCB15F954AF579(&iVar1, 0);
			func_588();
		}
		if (func_248(func_200(func_184(unk_0xE0BDAFA1A39552D6()))))
		{
			iVar1 = func_249(2458, -1, 0);
			unk_0x99BCB15F954AF579(&iVar1, func_200(func_184(unk_0xE0BDAFA1A39552D6())));
			func_588();
		}
		if (func_587())
		{
			func_588();
		}
		unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 0);
	}
	else
	{
		if ((!func_214() && !func_623()) && !func_622())
		{
			Global_2446396 = -1;
			func_550(26, -1);
		}
		else if (func_626(Global_2446396) == 0)
		{
			iVar0 = func_608(1);
			if (iVar0 > 0)
			{
				func_606(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_446(1924, 1, -1);
				func_606(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_552(26, -1))
		{
			Global_2446396 = -1;
			func_550(26, -1);
		}
		unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 0);
	}
}

void func_606(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_430(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_607(iParam0))
	{
		func_428(iParam0, iVar0);
	}
	else
	{
		func_432(iParam0, iVar0);
	}
}

int func_607(int iParam0)
{
	if (Global_1347694)
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

int func_608(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2445113 == 0)
	{
		return 0;
	}
	if (func_622())
	{
		if (unk_0x21A36E2323FEA4B1() || (func_621() || func_619()))
		{
			Global_2444099 = 1;
		}
	}
	Global_2445113 = 0;
	if (Global_1318743)
	{
		iVar0 = 1;
	}
	if (Global_2444099)
	{
		iVar0 = 1;
	}
	if (Global_2444098)
	{
		iVar0 = 1;
	}
	if (func_618(Global_100214.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2444024)
	{
		iVar0 = 1;
	}
	if (func_617(512))
	{
		iVar0 = 1;
	}
	if (func_616(128))
	{
		iVar0 = 1;
	}
	if (Global_1318767 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_162())
	{
		iVar0 = 0;
	}
	if (Global_2444553)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_614())
		{
			if (Global_1617902.f_77557 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = 0;
	}
	if (func_613())
	{
		iVar0 = 0;
	}
	if ((Global_2444099 || Global_2444098) || Global_1318743)
	{
		if (func_619())
		{
			iVar0 = 0;
		}
	}
	Global_2444553 = 0;
	Global_2444098 = 0;
	Global_2444099 = 0;
	Global_1318743 = 0;
	Global_2444024 = 0;
	func_611(&(Global_100214.f_1), 32);
	func_610(512);
	func_609(128);
	return iVar0;
}

void func_609(int iParam0)
{
	Global_100271 = (Global_100271 - (Global_100271 && iParam0));
}

void func_610(int iParam0)
{
	Global_100272 = (Global_100272 - (Global_100272 && iParam0));
}

void func_611(var uParam0, int iParam1)
{
	func_612(uParam0, iParam1);
}

void func_612(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_613()
{
	if (((Global_1573854 || Global_1573825) || func_14(unk_0xE0BDAFA1A39552D6(), 0)) || func_521())
	{
		return 1;
	}
	return 0;
}

int func_614()
{
	switch (func_615())
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

int func_615()
{
	return Global_2435608.f_1.f_2818;
}

bool func_616(int iParam0)
{
	return (Global_100271 && iParam0) != 0;
}

bool func_617(int iParam0)
{
	return (Global_100272 && iParam0) != 0;
}

bool func_618(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_619()
{
	if (func_626(Global_2446396))
	{
		return 0;
	}
	if (func_620(unk_0xE0BDAFA1A39552D6(), 146))
	{
		return 1;
	}
	return 0;
}

int func_620(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/] == iParam1)
	{
		return func_221(iParam0);
	}
	return 0;
}

int func_621()
{
	if (func_626(Global_2446396))
	{
		return 0;
	}
	if (func_221(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	return 0;
}

bool func_622()
{
	return unk_0x7DA173D4FD42F36B(Global_1312423, 0);
}

bool func_623()
{
	return Global_1315880;
}

void func_624(int iParam0, int iParam1)
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
			unk_0xEDBA6647CF5AEA5C(0, iParam1);
			break;
		
		default:
			uVar1 = func_551(iParam1);
			iVar0 = unk_0x424297F730B39FD1(uVar1);
			if (!unk_0x7DA173D4FD42F36B(iVar0, iParam0))
			{
				unk_0xE27C8E42A97895CF(&iVar0, iParam0);
				unk_0xEDBA6647CF5AEA5C(iVar0, iParam1);
			}
			break;
	}
}

int func_625(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318767 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_162())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_614())
		{
			if (Global_1617902.f_77557 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = 0;
	}
	if (func_613())
	{
		iVar0 = 0;
	}
	Global_2445113 = 1;
	return iVar0;
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9587)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9589)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9586)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9590)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9591)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9592)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9588)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9593)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9594)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9595)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9596)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_627(int iParam0)
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/] = iParam0;
}

void func_628(int iParam0)
{
	Global_2445351 = iParam0;
}

void func_629(int iParam0)
{
	if (func_194())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 0))
			{
				if ((((func_631(60000) && !unk_0x6146EFE5BC2DD8DC()) && !func_368()) && !unk_0x3DC360442A11BB38()) && func_385(0, 1, 1, 1))
				{
					if (!func_665())
					{
						func_630("UW_HELP1", func_560(), func_559(1), 30000);
					}
					else
					{
						func_630("UW_HELP1C", func_560(), func_559(1), 30000);
					}
					func_383(0);
					unk_0x962E604CCA53388F(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0xE27C8E42A97895CF(&iLocal_1307, 0);
				}
			}
			break;
	}
}

void func_630(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x4C5D86B5B659C953(uParam1);
	unk_0xD92C45283BCDA624(uParam2);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam3);
}

bool func_631(int iParam0)
{
	return unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(Global_2410755, unk_0x201D90648B2AE3CE())) > iParam0;
}

void func_632()
{
	int iVar0;
	
	unk_0x99BCB15F954AF579(&iLocal_1308, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_633(iVar0);
		iVar0++;
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1308, 15))
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 15))
		{
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 15);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 15))
	{
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 15);
	}
}

void func_633(int iParam0)
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
	
	if (unk_0xC7A68C5C107A1253(Local_96.f_7[iParam0]))
	{
		if (!unk_0x1B6292EA51632C25(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 0))
		{
			if (Local_96.f_241 == 0)
			{
			}
		}
		if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 0))
		{
			if (!func_194())
			{
				if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1, iParam0))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 15))
						{
							if (unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E()) == unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]))
							{
								unk_0xE27C8E42A97895CF(&iLocal_1308, 15);
							}
						}
						if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 0))
						{
							if (func_637("UW_HELP2", func_560()) || func_637("UW_HELP2C", func_560()))
							{
								unk_0x310F6B4E168A8F5D(1);
							}
							if (!func_374(unk_0xE0BDAFA1A39552D6()))
							{
								func_565(1);
							}
							iVar0 = func_636(unk_0x06736567F820A39E(), 0);
							if (func_558("UW_HELP1", func_560(), func_559(1)) || func_558("UW_HELP1C", func_560(), func_559(1)))
							{
								unk_0x310F6B4E168A8F5D(1);
							}
							if (Local_96.f_463 != -1)
							{
								if (iVar0 > (Local_96.f_463 - 2))
								{
									iVar0 = (Local_96.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1), iParam0);
							Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 = iParam0;
							unk_0x6553935614875699(unk_0x06736567F820A39E(), 398, 1);
							func_186();
							iLocal_3636 = iVar0;
						}
						else if (Local_96.f_241 == 0)
						{
							if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 1))
							{
								if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
								{
									if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_385(0, 1, 1, 1))
										{
											if (!func_665())
											{
												func_635("UW_HELP2", func_560(), 30000);
											}
											else
											{
												func_635("UW_HELP2C", func_560(), 30000);
											}
											func_383(1);
											unk_0xE27C8E42A97895CF(&iLocal_1307, 1);
										}
									}
								}
							}
							if (!func_232())
							{
								if (unk_0x7DA173D4FD42F36B(iLocal_1308, 2))
								{
									unk_0x99BCB15F954AF579(&iLocal_1308, 2);
								}
								if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
								{
									if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 4))
									{
										if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 12))
										{
											unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 12);
										}
										if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
										{
											if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_385(0, 1, 1, 1))
												{
													if (!func_665())
													{
														func_384("UW_COPS", 30000);
													}
													else
													{
														func_384("UW_COPSC", 30000);
													}
													func_383(1);
													unk_0xE27C8E42A97895CF(&iLocal_1307, 4);
												}
											}
										}
									}
									else if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0x99BCB15F954AF579(&iLocal_1307, 4);
									}
								}
								else
								{
									if (unk_0x7DA173D4FD42F36B(iLocal_1307, 4))
									{
										unk_0x99BCB15F954AF579(&iLocal_1307, 4);
									}
									if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 12))
									{
										unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 12))
								{
									unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 12);
								}
								if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 2))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_385(0, 1, 1, 1))
										{
											if (!func_665())
											{
												func_384("UW_PASSMD", 30000);
											}
											else
											{
												func_384("UW_PASSMD", 30000);
											}
											func_383(1);
											unk_0xE27C8E42A97895CF(&iLocal_1308, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 == 0)
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_96.f_28)
								{
									if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, (0 + iVar2)))
									{
										func_7();
										unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1, iParam0))
								{
									unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1), iParam0);
								}
								if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 != -1)
								{
									Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 = -1;
								}
								if (func_599("UW_TIMEL"))
								{
									unk_0x310F6B4E168A8F5D(1);
								}
								if (func_599("UW_TIMELA"))
								{
									unk_0x310F6B4E168A8F5D(1);
								}
								if (func_374(unk_0xE0BDAFA1A39552D6()))
								{
									func_565(0);
								}
								unk_0x6553935614875699(unk_0x06736567F820A39E(), 398, 0);
							}
							else
							{
								if (Local_96.f_241 == 0 && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 4))
								{
									iVar0 = func_636(unk_0x06736567F820A39E(), 0);
									if (Local_96.f_463 != -1)
									{
										if (iVar0 > (Local_96.f_463 - 2))
										{
											iVar0 = (Local_96.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3636)
									{
										unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1), iParam0);
										unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), (0 + iLocal_3636 + 1));
									}
								}
								bVar1 = false;
								if (func_250())
								{
									if (Local_96.f_413 > -1)
									{
										iVar3 = (Local_96.f_413 - func_120(&(Local_96.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_634(bVar1);
								if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xA48C2245D1ADC6A3(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]));
								}
								if (!func_20(&uLocal_1530))
								{
									func_18(&uLocal_1530, 0, 0);
								}
								else if (func_17(&uLocal_1530, 2000, 0))
								{
									if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 9) || !func_665())
									{
										if (func_599("UW_MINV"))
										{
										}
										if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 5))
										{
											if (Local_96.f_28 > 1 || (Local_96.f_28 == 1 && func_106() > 1))
											{
												if (func_20(&(Local_96.f_326)))
												{
													if (!unk_0x6146EFE5BC2DD8DC())
													{
														if (func_106() > 1)
														{
															func_384("UW_TIMELA", 30000);
														}
														else
														{
															func_384("UW_TIMEL", 30000);
														}
														func_383(1);
														unk_0xE27C8E42A97895CF(&iLocal_1307, 5);
													}
												}
											}
										}
									}
									else if (func_665())
									{
										if (!unk_0x7DA173D4FD42F36B(Local_96.f_3, 9))
										{
											if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 14))
												{
													if (!unk_0x6146EFE5BC2DD8DC())
													{
														func_384("UW_MINV", 30000);
														func_383(1);
														unk_0xE27C8E42A97895CF(&iLocal_1307, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_96.f_241 == 0)
					{
						if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_599("UW_VALK") && !func_599("UW_VALKC"))
							{
								unk_0x3717CAE3BDD83FB2();
								if (unk_0x7DA173D4FD42F36B(iLocal_1307, 8))
								{
									unk_0x99BCB15F954AF579(&iLocal_1307, 8);
								}
							}
							if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 8))
							{
								if (!unk_0x6146EFE5BC2DD8DC())
								{
									iVar6 = 0;
									iVar4 = unk_0xD6B335B6F8116876(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0x5B4FEA5F286F0C8F(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), (iVar5 - 1)))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_665())
										{
											func_384("UW_VALK", 30000);
										}
										else
										{
											func_384("UW_VALKC", 30000);
										}
										func_383(1);
										unk_0xE27C8E42A97895CF(&iLocal_1307, 8);
									}
									if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 8))
									{
										if (func_665())
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
														if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar7]))
														{
															if (func_103(Local_96.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0x5B4FEA5F286F0C8F(unk_0xA9B72300DA155F92(Local_96.f_7[iVar7]), (iVar5 - 1)))
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
												func_384("UW_VALKC", 30000);
												func_383(1);
												unk_0xE27C8E42A97895CF(&iLocal_1307, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_96.f_241 == 1)
					{
						if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1, iParam0))
						{
							if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 6))
							{
								if (func_103(Local_96.f_7[iParam0]))
								{
									if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
									{
										if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iParam0])))
										{
											if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 7))
											{
												if ((unk_0xD471C64C0898A7BF(0, 75) || unk_0xE9F7E89BC2352535(0, 75)) || unk_0x7A4571218C06A722(0, 75))
												{
													unk_0xE27C8E42A97895CF(&iLocal_1307, 7);
												}
											}
											if (unk_0x7DA173D4FD42F36B(iLocal_1307, 7))
											{
												if (!unk_0x6146EFE5BC2DD8DC())
												{
													if (func_665())
													{
														func_384("UW_EXITVC", 30000);
													}
													else
													{
														func_384("UW_EXITV", 30000);
													}
													func_383(1);
													unk_0xE27C8E42A97895CF(&iLocal_1307, 6);
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
					if (unk_0xC7A68C5C107A1253(Local_96.f_7[iVar10]))
					{
						if (unk_0x1B6292EA51632C25(unk_0xA9B72300DA155F92(Local_96.f_7[iVar10]), 0))
						{
							if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_248(0))
					{
						iVar9 = func_249(2458, -1, 0);
						unk_0x99BCB15F954AF579(&iVar9, 0);
						func_440(2458, iVar9, -1, 1);
						func_588();
						if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 9))
						{
							unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 9);
						}
					}
					if (func_248(8))
					{
						iVar9 = func_249(2458, -1, 0);
						unk_0x99BCB15F954AF579(&iVar9, 8);
						func_440(2458, iVar9, -1, 1);
						func_588();
						if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 9))
						{
							unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
					{
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 = 0;
					}
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 12))
					{
						unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 12);
					}
				}
				if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 14))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (func_103(Local_96.f_7[iParam0]))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_385(0, 1, 1, 1))
								{
									if (!func_240(129, 0, 0))
									{
										if (!func_665())
										{
											func_384("UW_TUT", -1);
										}
										else
										{
											func_384("UW_TUTC", -1);
										}
										func_383(1);
										unk_0xE27C8E42A97895CF(&iLocal_1308, 14);
									}
									else
									{
										if (!func_665())
										{
											func_384("UW_HIDE", -1);
										}
										else
										{
											func_384("UW_HIDEC", -1);
										}
										func_383(1);
										unk_0xE27C8E42A97895CF(&iLocal_1308, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_755(unk_0xE0BDAFA1A39552D6(), 1, 1) && Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_1 != 0)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_4430, 1))
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4430), 1);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4430, 1))
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4430), 1);
			}
		}
	}
}

void func_634(bool bParam0)
{
	unk_0xC80D2B3478FFF428(0, 71, 1);
	unk_0xC80D2B3478FFF428(0, 72, 1);
	unk_0xC80D2B3478FFF428(0, 76, 1);
	unk_0xC80D2B3478FFF428(0, 59, 1);
	unk_0xC80D2B3478FFF428(0, 60, 1);
	if (bParam0)
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
	unk_0xC80D2B3478FFF428(0, 80, 1);
	unk_0xC80D2B3478FFF428(0, 69, 1);
	unk_0xC80D2B3478FFF428(0, 70, 1);
	unk_0xC80D2B3478FFF428(0, 92, 1);
	unk_0xC80D2B3478FFF428(0, 68, 1);
	unk_0xC80D2B3478FFF428(0, 91, 1);
	unk_0xC80D2B3478FFF428(0, 74, 1);
	unk_0xC80D2B3478FFF428(0, 86, 1);
	unk_0xC80D2B3478FFF428(0, 81, 1);
	unk_0xC80D2B3478FFF428(0, 82, 1);
	unk_0xC80D2B3478FFF428(0, 99, 1);
	unk_0xC80D2B3478FFF428(0, 100, 1);
	unk_0xC80D2B3478FFF428(0, 65, 1);
	unk_0xC80D2B3478FFF428(0, 105, 1);
	unk_0xC80D2B3478FFF428(0, 114, 1);
	unk_0xC80D2B3478FFF428(0, 107, 1);
	unk_0xC80D2B3478FFF428(0, 110, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 87, 1);
	unk_0xC80D2B3478FFF428(0, 88, 1);
	unk_0xC80D2B3478FFF428(0, 113, 1);
	unk_0xC80D2B3478FFF428(0, 115, 1);
	unk_0xC80D2B3478FFF428(0, 116, 1);
	unk_0xC80D2B3478FFF428(0, 117, 1);
	unk_0xC80D2B3478FFF428(0, 118, 1);
	unk_0xC80D2B3478FFF428(0, 119, 1);
	unk_0xC80D2B3478FFF428(0, 51, 1);
	unk_0xC80D2B3478FFF428(0, 47, 1);
	unk_0xC80D2B3478FFF428(0, 24, 1);
	unk_0xC80D2B3478FFF428(0, 257, 1);
}

void func_635(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x4C5D86B5B659C953(uParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam2);
}

int func_636(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		if (unk_0x0FDFEC0DD29106EE(iParam0, iParam1))
		{
			iVar0 = unk_0x34E1EF1E8BCD1BFC(iParam0, iParam1);
			if (unk_0xC1EDB61CE0A4B94E(iVar0))
			{
				if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
				{
					iVar1 = unk_0x5E094905747079DF(unk_0x79469DA5833EACA8(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x5B4FEA5F286F0C8F(iVar0, iVar3))
						{
							if (unk_0x4321FC7479614822(iVar0, iVar3) == iParam0)
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

var func_637(char* sParam0, char* sParam1)
{
	unk_0xC11856C04AAC5813(sParam0);
	unk_0x4C5D86B5B659C953(uParam1);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_638()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC7A68C5C107A1253(Local_96.f_7[iVar0]) && unk_0x40B3668D7226E0DF(Local_96.f_7[iVar0]))
		{
			iVar1 = unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]);
			if (unk_0xC1EDB61CE0A4B94E(iVar1) && !unk_0xBDA1F5E8A36BFA07(iVar1, 0))
			{
				unk_0xF1B37547C9ABADED(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_639(struct<3> Param0)
{
	Global_2391047 = { Param0 };
	Global_2391050 = 1;
}

void func_640()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_656(iVar0);
				break;
			
			case 168:
				func_641(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_641(int iParam0)
{
	int iVar0;
	
	unk_0x6E7EC37CC38579DB(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 427:
			func_655(iParam0);
			break;
		
		case 430:
			func_654(iParam0);
			break;
		
		case 429:
			func_653(iParam0);
			break;
		
		case 428:
			func_652(iParam0);
			break;
		
		case 433:
			func_651(iParam0);
			break;
		
		case 435:
			func_648(iParam0);
			break;
		
		case 436:
			func_642(iParam0);
			break;
	}
}

void func_642(int iParam0)
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
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_73[iVar6]))
		{
			return;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6, iVar6))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_271, iVar6))
			{
				if (func_94(iVar6))
				{
					if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]), 0))
					{
						if (unk_0xC10BF4DD37BD0172(unk_0xE0BDAFA1A39552D6(), unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0xAFD80883820DD54C(unk_0xE0BDAFA1A39552D6(), unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_665())
				{
					if (Local_96.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = unk_0x801C03D92F1C6755(Local_96.f_465[0 /*4*/].f_2);
						if (iVar9 != func_25())
						{
							if (iVar9 == unk_0xE0BDAFA1A39552D6())
							{
								bVar8 = true;
							}
						}
					}
					else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[0]))
					{
						if (func_103(Local_96.f_7[0]))
						{
							iVar11 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[0]), -1);
							if (iVar11 != 0)
							{
								if (unk_0x4E75E5867592AC01(iVar11))
								{
									iVar10 = unk_0x90CB634380C802C7(iVar11);
									if (iVar10 == unk_0xE0BDAFA1A39552D6())
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
			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
			{
				iVar4 = func_647();
				iVar12 = unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_646(iVar12))
				{
					iVar3 = func_41(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar14]) && !unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar14)], func_84(iVar14)))
						{
							iVar13++;
							unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar14)]), func_84(iVar14));
						}
						iVar14++;
					}
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 = (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8++;
				}
				if (Local_713.f_11 == 0)
				{
					Local_713.f_11 = unk_0x40077EDF3FF70C39();
				}
				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
				{
					Local_713.f_7 = (Local_713.f_7 + iVar4);
					func_644(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_643();
				}
			}
			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar6);
		}
	}
}

void func_643()
{
	if (!func_20(&uLocal_3613) || (func_20(&uLocal_3613) && func_17(&uLocal_3613, 2000, 0)))
	{
		unk_0x962E604CCA53388F(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_100(&uLocal_3613);
		func_18(&uLocal_3613, 0, 0);
	}
}

var func_644(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_425(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_645()
{
	if (func_665())
	{
		return Global_262145.f_9513;
	}
	return Global_262145.f_9452;
}

bool func_646(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_647()
{
	if (func_665())
	{
		return Global_262145.f_9512;
	}
	return Global_262145.f_9451;
}

void func_648(int iParam0)
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
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6, iVar6))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_271, iVar6))
			{
				if (func_650(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_649(iVar6))
				{
					if (func_94(iVar6))
					{
						if (!unk_0xBDA1F5E8A36BFA07(unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]), 0))
						{
							if (unk_0xC10BF4DD37BD0172(unk_0xE0BDAFA1A39552D6(), unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0xAFD80883820DD54C(unk_0xE0BDAFA1A39552D6(), unk_0xA9B72300DA155F92(Local_96.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_665())
					{
						if (Local_96.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = unk_0x801C03D92F1C6755(Local_96.f_465[0 /*4*/].f_2);
							if (iVar9 != func_25())
							{
								if (iVar9 == unk_0xE0BDAFA1A39552D6())
								{
									bVar8 = true;
								}
							}
						}
						else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[0]))
						{
							if (func_103(Local_96.f_7[0]))
							{
								iVar11 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[0]), -1);
								if (iVar11 != 0)
								{
									if (unk_0x4E75E5867592AC01(iVar11))
									{
										iVar10 = unk_0x90CB634380C802C7(iVar11);
										if (iVar10 == unk_0xE0BDAFA1A39552D6())
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
					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
					{
						iVar3 = func_41(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar12]) && !unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar12)], func_84(iVar12)))
							{
								iVar13++;
								unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar12)]), func_84(iVar12));
							}
							iVar12++;
						}
						Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 = (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
						{
							iVar4 = func_647();
							iVar4 = (iVar4 * iVar3);
							Local_713.f_7 = (Local_713.f_7 + iVar4);
							func_644(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_643();
							if (Local_713.f_11 == 0)
							{
								Local_713.f_11 = unk_0x40077EDF3FF70C39();
							}
						}
						unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_649(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			if (Local_730[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_650(int iParam0)
{
	int iVar0;
	
	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			if (iVar0 != unk_0x490BA5FDD7EE47A9())
			{
				if (Local_730[iVar0 /*18*/].f_11[iParam0] > Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_651(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (unk_0x9EFA0F4073C51215("am_kill_list", -1, 0) != func_25())
		{
		}
		if (unk_0x587E5997B76F47FE())
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_464), Var0.f_2);
		}
	}
}

void func_652(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		unk_0xE27C8E42A97895CF(&uLocal_3580, Var0.f_2);
	}
}

void func_653(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		unk_0xE27C8E42A97895CF(&uLocal_3581, Var0.f_2);
	}
}

void func_654(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(Var0.f_2)], func_84(Var0.f_2)))
		{
			unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(Var0.f_2)]), func_84(Var0.f_2));
		}
	}
}

void func_655(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6, iVar3))
		{
			unk_0x99BCB15F954AF579(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar3);
		}
	}
}

void func_656(int iParam0)
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
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 10))
	{
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6, iVar10))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_271, iVar10))
				{
					if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
					{
						if (unk_0xFCBEC4C2079B0872(Var0.f_0))
						{
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_73[iVar10]))
							{
								if (unk_0xC1EDB61CE0A4B94E(unk_0xA9B72300DA155F92(Local_96.f_73[iVar10])))
								{
									if (unk_0x43AB2E726FCE3BF7(Var0.f_0) == unk_0xA9B72300DA155F92(Local_96.f_73[iVar10]))
									{
										if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
										{
											if (unk_0x77CB3F400804EDD1(Var0.f_1))
											{
												if (unk_0x406B8F450D0105AB(Var0.f_1) == unk_0x06736567F820A39E())
												{
													if (Var0.f_3)
													{
														iVar13 = unk_0x79469DA5833EACA8(Var0.f_0);
														if (Local_96.f_27 == joaat("hydra"))
														{
															if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
															{
																iVar16 = func_647();
																if (func_646(iVar13))
																{
																	iVar11 = func_41(iVar13);
																	Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 = (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 + iVar11);
																	iVar16 = (iVar16 * iVar11);
																}
																else
																{
																	Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8++;
																}
																if (Local_713.f_11 == 0)
																{
																	Local_713.f_11 = unk_0x40077EDF3FF70C39();
																}
																if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																{
																	Local_713.f_7 = (Local_713.f_7 + iVar16);
																	func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																	func_643();
																}
															}
															unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar10);
														}
														else if (iVar13 == joaat("buzzard"))
														{
															iVar18 = -1;
															iVar18 = -1;
															while (iVar18 <= 3)
															{
																iVar15 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_73[iVar10]), iVar18);
																if (iVar15 != 0)
																{
																	iVar17 = func_657(iVar15);
																	if (iVar17 > -1)
																	{
																		if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar17)], func_84(iVar17)))
																		{
																			if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar17)], func_84(iVar17)))
																			{
																				unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar17)]), func_84(iVar17));
																				iVar16 = func_647();
																				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8++;
																				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																				{
																					Local_713.f_7 = (Local_713.f_7 + iVar16);
																					func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_643();
																				}
																				if (unk_0xE60A28942E3AC2F4(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar17])))
																				{
																					func_86(&(Local_1324[iVar17 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar18++;
															}
															unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar10);
														}
													}
													else if (!func_103(Local_96.f_73[iVar10]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var0.f_1)))
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
		if (Local_96.f_27 != joaat("hydra"))
		{
			iVar10 = 0;
			while (iVar10 <= 19)
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar10)], func_84(iVar10)))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar10)], func_84(iVar10)))
					{
						if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
						{
							if (unk_0x77CB3F400804EDD1(Var0.f_0))
							{
								if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar10]))
								{
									if (unk_0xC1EDB61CE0A4B94E(unk_0xA9B72300DA155F92(Local_96.f_48[iVar10])))
									{
										if (unk_0x406B8F450D0105AB(Var0.f_0) == unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
												{
													if (unk_0x77CB3F400804EDD1(Var0.f_1))
													{
														iVar14 = unk_0x406B8F450D0105AB(Var0.f_1);
														if (unk_0x4E75E5867592AC01(iVar14))
														{
															if (iVar14 == unk_0x06736567F820A39E())
															{
																if (Var0.f_3)
																{
																	iVar16 = func_647();
																	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
																	{
																		Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8++;
																		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																		{
																			func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			Local_713.f_7 = (Local_713.f_7 + iVar16);
																			func_643();
																		}
																	}
																	if (Local_713.f_11 == 0)
																	{
																		Local_713.f_11 = unk_0x40077EDF3FF70C39();
																	}
																	unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar10)]), func_84(iVar10));
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
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6, iVar10))
					{
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_271, iVar10))
						{
							if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
							{
								if (unk_0xFCBEC4C2079B0872(Var0.f_0))
								{
									if (unk_0xC3A7CFC6468E0BAE(Local_96.f_73[iVar10]))
									{
										if (unk_0xC1EDB61CE0A4B94E(unk_0xA9B72300DA155F92(Local_96.f_73[iVar10])))
										{
											if (unk_0x43AB2E726FCE3BF7(Var0.f_0) == unk_0xA9B72300DA155F92(Local_96.f_73[iVar10]))
											{
												if (unk_0x79469DA5833EACA8(Var0.f_0) == joaat("savage"))
												{
													if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar10)], func_84(iVar10)))
													{
														if (Var0.f_3)
														{
															if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
															{
																if (unk_0x77CB3F400804EDD1(Var0.f_1))
																{
																	iVar14 = unk_0x406B8F450D0105AB(Var0.f_1);
																	if (unk_0x4E75E5867592AC01(iVar14))
																	{
																		if (iVar14 == unk_0x06736567F820A39E())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
																				{
																					iVar11 = func_41(joaat("savage"));
																					Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 = (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 + iVar11);
																					iVar16 = func_647();
																					iVar16 = (iVar16 * iVar11);
																					if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																					{
																						func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																						Local_713.f_7 = (Local_713.f_7 + iVar16);
																						func_643();
																						if (Local_713.f_11 == 0)
																						{
																							Local_713.f_11 = unk_0x40077EDF3FF70C39();
																						}
																					}
																					iVar19 = iVar10 * 4;
																					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19)]), func_84(iVar19));
																					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 1)]), func_84(iVar19 + 1));
																					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 2)]), func_84(iVar19 + 2));
																					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 3)]), func_84(iVar19 + 3));
																					unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar10);
																				}
																			}
																		}
																	}
																	else if (func_650(iVar10))
																	{
																		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
																		{
																			iVar11 = func_41(joaat("savage"));
																			Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 = (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 + iVar11);
																			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																			{
																				iVar16 = func_647();
																				iVar16 = (iVar16 * iVar11);
																				Local_713.f_7 = (Local_713.f_7 + iVar16);
																				func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																				func_643();
																				if (Local_713.f_11 == 0)
																				{
																					Local_713.f_11 = unk_0x40077EDF3FF70C39();
																				}
																			}
																			iVar19 = iVar10 * 4;
																			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19)]), func_84(iVar19));
																			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 1)]), func_84(iVar19 + 1));
																			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 2)]), func_84(iVar19 + 2));
																			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 3)]), func_84(iVar19 + 3));
																			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar10);
																		}
																	}
																	else if (func_649(iVar10))
																	{
																	}
																	else if (unk_0xAFD80883820DD54C(iVar20, Var0.f_0, &uVar21))
																	{
																		if (iVar20 == unk_0xE0BDAFA1A39552D6())
																		{
																			if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
																			{
																				iVar11 = func_41(joaat("savage"));
																				Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 = (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 + iVar11);
																				if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																				{
																					iVar16 = func_647();
																					iVar16 = (iVar16 * iVar11);
																					Local_713.f_7 = (Local_713.f_7 + iVar16);
																					func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_643();
																					if (Local_713.f_11 == 0)
																					{
																						Local_713.f_11 = unk_0x40077EDF3FF70C39();
																					}
																				}
																				iVar19 = iVar10 * 4;
																				unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19)]), func_84(iVar19));
																				unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 1)]), func_84(iVar19 + 1));
																				unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 2)]), func_84(iVar19 + 2));
																				unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar19 + 3)]), func_84(iVar19 + 3));
																				unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_6), iVar10);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
															{
																if (unk_0x77CB3F400804EDD1(Var0.f_1))
																{
																	iVar14 = unk_0x406B8F450D0105AB(Var0.f_1);
																	if (unk_0x4E75E5867592AC01(iVar14))
																	{
																		if (iVar14 == unk_0x06736567F820A39E())
																		{
																			iVar12 = unk_0x40077EDF3FF70C39();
																			Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_11[iVar10] = iVar12;
																		}
																	}
																}
															}
															if (!unk_0x1B6292EA51632C25(unk_0x43AB2E726FCE3BF7(Var0.f_0), 0))
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
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_272[func_85(iVar10)], func_84(iVar10)))
				{
					if (!unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar10)], func_84(iVar10)))
					{
						if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
						{
							if (unk_0x77CB3F400804EDD1(Var0.f_0))
							{
								if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar10]))
								{
									if (unk_0xC1EDB61CE0A4B94E(unk_0xA9B72300DA155F92(Local_96.f_48[iVar10])))
									{
										if (unk_0x406B8F450D0105AB(Var0.f_0) == unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
												{
													if (unk_0x77CB3F400804EDD1(Var0.f_1))
													{
														iVar14 = unk_0x406B8F450D0105AB(Var0.f_1);
														if (unk_0x4E75E5867592AC01(iVar14))
														{
															if (iVar14 == unk_0x06736567F820A39E())
															{
																if (Var0.f_3)
																{
																	if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_17 < 2)
																	{
																		Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8++;
																		if (Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8 <= func_645())
																		{
																			iVar16 = func_647();
																			Local_713.f_7 = (Local_713.f_7 + iVar16);
																			if (Local_713.f_11 == 0)
																			{
																				Local_713.f_11 = unk_0x40077EDF3FF70C39();
																			}
																			func_644(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			func_643();
																		}
																	}
																	unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar10)]), func_84(iVar10));
																}
															}
														}
													}
												}
												else
												{
													unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_3[func_85(iVar10)]), func_84(iVar10));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar10]))
				{
				}
				iVar10++;
			}
		}
	}
}

int func_657(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar1]))
			{
				if (unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_658()
{
	int iVar0;
	int iVar1;
	
	if (Local_96.f_27 != joaat("hydra"))
	{
		if (iLocal_3638 == 0)
		{
			iLocal_3638 = 20;
		}
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iLocal_3638]))
		{
			if (!func_30(Local_96.f_48[iLocal_3638]))
			{
				iVar0 = unk_0xE48F7DCEC339446F(unk_0x220B3465A4B1FBA5(Local_96.f_48[iLocal_3638]));
				if (iLocal_3639[iLocal_3638] != iVar0)
				{
					iLocal_3639[iLocal_3638] = iVar0;
					unk_0xD6844FCDD2BAFECD(Local_96.f_48[iLocal_3638], 1);
				}
			}
		}
		iLocal_3638++;
		if (iLocal_3638 == 23)
		{
			iLocal_3638 = 20;
		}
	}
	if (Local_96.f_27 != joaat("hydra") && Local_96.f_27 != joaat("rhino"))
	{
		if (!bLocal_3671)
		{
			if (func_92() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_73[iVar1]))
					{
						if (func_103(Local_96.f_73[iVar1]))
						{
							if (unk_0x79469DA5833EACA8(unk_0xA9B72300DA155F92(Local_96.f_73[iVar1])) == joaat("savage"))
							{
								unk_0xD6844FCDD2BAFECD(Local_96.f_73[iVar1], 1);
								bLocal_3671 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_73[iLocal_3664]))
	{
		if (func_103(Local_96.f_73[iLocal_3664]))
		{
			iVar0 = unk_0xE48F7DCEC339446F(unk_0x220B3465A4B1FBA5(Local_96.f_73[iLocal_3664]));
			if (iLocal_3665[iLocal_3664] != iVar0)
			{
				iLocal_3665[iLocal_3664] = iVar0;
				if (!bLocal_3671)
				{
					unk_0xD6844FCDD2BAFECD(Local_96.f_73[iLocal_3664], 1);
				}
			}
		}
	}
	iLocal_3664++;
	if (iLocal_3664 == 5)
	{
		iLocal_3664 = 0;
	}
}

void func_659()
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
		if (unk_0x7DA173D4FD42F36B(uLocal_3582, iVar0))
		{
			if (Local_96.f_85[iVar0] != 2)
			{
				unk_0x99BCB15F954AF579(&iLocal_3582, iVar0);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_48[iVar0]))
		{
			func_663(iVar0);
			if (!func_30(Local_96.f_48[iVar0]))
			{
				switch (Local_96.f_85[iVar0])
				{
					case 1:
						if (unk_0x40B3668D7226E0DF(Local_96.f_48[iVar0]))
						{
							if (unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 0))
							{
								uVar2 = unk_0x34E1EF1E8BCD1BFC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 0);
								uVar1 = unk_0x79469DA5833EACA8(uVar2);
								if (unk_0xEF439FAE899F725F(uVar1))
								{
									if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1273030092) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0x4321FC7479614822(iVar2, -1) == unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]))
										{
											iVar9 = func_26();
											if (iVar9 != func_25())
											{
												uVar10 = unk_0x44A9253132E1DDE0(iVar9);
												if (!unk_0xCFC04A38F256EE06(uVar10))
												{
													if (func_24(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { unk_0xF4745590D18D14B8(iVar10, 1) };
														unk_0xF3BA65D58D2A71D0(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0x759D601DDE232B39(iVar1))
								{
									if (unk_0x4321FC7479614822(iVar2, -1) == unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1273030092) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1309[iVar14] != Local_96.f_110[iVar14]))
									{
										if (unk_0x4321FC7479614822(iVar2, -1) == unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]))
										{
											iVar13 = Local_96.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = unk_0x801C03D92F1C6755(iVar13);
												if (iVar9 != func_25())
												{
													iVar10 = unk_0x44A9253132E1DDE0(iVar9);
													if (!unk_0xCFC04A38F256EE06(iVar10))
													{
														Var3 = { unk_0xF4745590D18D14B8(iVar10, 1) };
														unk_0x7353629CA2F4D1DC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 100, 50);
														if (iLocal_1309[iVar14] != Local_96.f_110[iVar14])
														{
															iLocal_1309[iVar14] = Local_96.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1273030092) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1273030092) != 0) && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 1306903184) != 0) && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0x4321FC7479614822(iVar2, -1) == unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]))
									{
										iVar9 = func_26();
										if (iVar9 != func_25())
										{
											iVar10 = unk_0x44A9253132E1DDE0(iVar9);
											if (!unk_0xCFC04A38F256EE06(iVar10))
											{
												fVar11 = func_24(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													unk_0x284E720D558E7A07(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), unk_0xF4745590D18D14B8(iVar10, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													unk_0x480BD8426B2323B0(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x40B3668D7226E0DF(Local_96.f_48[iVar0]))
						{
							if (!func_21())
							{
								if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1442466670) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 0))
									{
										if (!unk_0x7DA173D4FD42F36B(iLocal_3582, iVar0))
										{
											iVar12 = func_662(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												unk_0xE7E3395C59F02C4A(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0x7DA173D4FD42F36B(iLocal_3582, iVar0))
											{
												func_661(iVar0, func_98(1));
												unk_0xE27C8E42A97895CF(&iLocal_3582, iVar0);
											}
										}
									}
									else
									{
										unk_0xE7E3395C59F02C4A(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -251125078) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_660() };
							unk_0x1F6717C33A02B7AC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]));
							unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), 1);
							unk_0x331679E15ACD8EC7(unk_0x220B3465A4B1FBA5(Local_96.f_48[iVar0]), Var6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_660()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
		{
			return unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_96.f_30[0 /*3*/];
}

void func_661(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 433;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam1);
	}
}

int func_662(int iParam0, float fParam1)
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
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar3]))
		{
			if (func_103(Local_96.f_7[iVar3]))
			{
				iVar7 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_7[iVar3]), -1);
				if (!unk_0xCFC04A38F256EE06(iVar7))
				{
					if (unk_0x4E75E5867592AC01(iVar7))
					{
						Var4 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar3]), 1) };
						fVar2 = func_479(iParam0, Var4, 1);
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

void func_663(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_30(Local_96.f_48[iParam0]))
	{
		if (unk_0x40B3668D7226E0DF(Local_96.f_48[iParam0]))
		{
			if (unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0])))
			{
				uVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0]), 0);
				if (unk_0x759D601DDE232B39(unk_0x79469DA5833EACA8(uVar0)) || unk_0xEF439FAE899F725F(unk_0x79469DA5833EACA8(iVar0)))
				{
					if (!unk_0x1B6292EA51632C25(iVar0, 0))
					{
						unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_48[iParam0]), 5);
					}
				}
			}
		}
	}
}

void func_664(struct<3> Param0)
{
	Global_1573903.f_6 = { Param0 };
}

bool func_665()
{
	return unk_0x7DA173D4FD42F36B(Local_96.f_3, 8);
}

void func_666(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_667("kwUfKUus6EuQyNSL8KpY-w");
					func_667("yMTOFLfO2UKwzKrmgPP7kg");
					func_667("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_667("tP5HSeCA0UiHnkRzakdO2Q");
					func_667("uEkrqoerQEmQ0uZRtp4rkw");
					func_667("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_667("UOTaXepxrUOUEU7QtfBvGQ");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_667("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_667("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_667("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_667("uEkrqoerQEmQ0uZRtp4rkw");
					func_667("92t91kL3Wkqvl2Kc82cNSA");
					func_667("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_667("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_667("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_667("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_667("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_667("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_667("fOfm7nzMLkav0ldcSCNAzA");
					func_667("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_667("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_667("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_667("Ma78E44OMkGfYPmCPZXUNA");
					func_667("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_667("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_667("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_667("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_667("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_667("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_667("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_667("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_667("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_667("3AAj-muvN0iHI5IMyGlboA");
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
							func_667("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_667("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_667("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_667("fOfm7nzMLkav0ldcSCNAzA");
							func_667("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_667("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_667("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_667("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_667("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_667("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_667("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_667("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_667("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_667("fOfm7nzMLkav0ldcSCNAzA");
							func_667("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_667("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_667("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_667("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_667("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_667("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_667("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_667("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_667("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_667("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_667("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_667("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_667("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_667("aGBjo2rKi0yMDLl3a2ATGA");
									func_667("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_667("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_667("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_667("f2lnL6wZPkGWUowu0yLm1Q");
									func_667("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_667("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_667("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_667("W-OJzHlM-0ym9PsIASYZtw");
									func_667("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_667("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_667("TjGz31AMYE6bGCjAIitu6w");
									func_667("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_667("QmlvLMLCwkOvoZlkAstYxw");
									func_667("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_667("BktATxH9R0Wp2x0kWSbqjw");
									func_667("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_667("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_667("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_667("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_667("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_667("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_667("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_667("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_667("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_667("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_667("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_667(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	iVar0 = unk_0x9F7CDE7B20BCB675(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_668(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0xE27C8E42A97895CF(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_668(var uParam0)
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
			Var0 = { func_669(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_669(var uParam0)
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
			return Global_794608.f_98389[iVar12 /*12*/];
		
		case 62:
			return Global_906487.f_18805[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

void func_670()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 12))
	{
		func_186();
	}
	if (func_665())
	{
		if (iLocal_3572 != Local_96.f_12)
		{
			iLocal_3572 = Local_96.f_12;
			func_186();
		}
	}
	if (!func_194())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0xCDB4C4200A9B478A(uLocal_1319[iVar0]))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
				{
					if (func_103(Local_96.f_7[iVar0]))
					{
						Var1 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0) };
						if (!func_671(iVar0, Var1))
						{
							if (!unk_0x7DA173D4FD42F36B(Local_96.f_13, iVar0))
							{
								uLocal_1319[iVar0] = unk_0xDB8B533098769F4F(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]));
								unk_0x3A46FF82408A2709(uLocal_1319[iVar0], 429);
								func_188(&(uLocal_1319[iVar0]), 29);
								if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 20))
								{
									unk_0xC450F6DE1A06C309(uLocal_1319[iVar0], 1);
									unk_0xF86EC7784DA1CB68(uLocal_1319[iVar0], 7000);
									unk_0xE27C8E42A97895CF(&iLocal_1307, 20);
								}
								unk_0xA4E8F868373B09C0(uLocal_1319[iVar0], 9);
								if (func_665())
								{
									unk_0x4BFEA7590F203BDF(uLocal_1319[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0x4BFEA7590F203BDF(uLocal_1319[iVar0], "UW_BLIP");
								}
								if (!unk_0x7DA173D4FD42F36B(iLocal_1308, 3))
								{
									unk_0xCB8EBF02739FC8EA();
									unk_0xE27C8E42A97895CF(&iLocal_1308, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
			{
				if (!func_103(Local_96.f_7[iVar0]))
				{
					unk_0x2239ED27B231AE2E(&(uLocal_1319[iVar0]));
				}
				else if (unk_0x7DA173D4FD42F36B(Local_96.f_13, iVar0))
				{
					unk_0x2239ED27B231AE2E(&(uLocal_1319[iVar0]));
				}
			}
			else
			{
				unk_0x2239ED27B231AE2E(&(uLocal_1319[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_186();
	}
}

int func_671(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_7[iVar0]))
			{
				Var1 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_7[iVar0]), 0) };
				if (func_65(Param1, Var1, 0))
				{
					if (unk_0xCDB4C4200A9B478A(uLocal_1319[iVar0]))
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

int func_672()
{
	return Local_96.f_0;
}

int func_673(int iParam0)
{
	return Local_730[iParam0 /*18*/];
}

void func_674()
{
	if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 6))
	{
		func_409();
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 6);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 7))
	{
		if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 4) || unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 16))
		{
			if (((!unk_0xCA914B57A3600215() && !unk_0x6146EFE5BC2DD8DC()) && !func_327()) && func_755(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 7);
				func_384("FME_PASINT", 30000);
				func_383(1);
			}
		}
		else if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 17))
		{
			if (func_232() && !func_227())
			{
				unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 17);
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 16);
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 23))
	{
		if (((((!unk_0xCA914B57A3600215() && !unk_0x7DA173D4FD42F36B(Global_2464975.f_743, 2)) && func_755(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !Global_68089) && !Global_52961) && !unk_0x6146EFE5BC2DD8DC())
		{
			if (func_697())
			{
				func_384("AMEV_GA_RP", -1);
				func_383(1);
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 23);
			}
		}
	}
	if (unk_0x3DC360442A11BB38() && unk_0x0FDDFFBD775C7598() == 15)
	{
		if (func_221(unk_0xE0BDAFA1A39552D6()))
		{
			if (!unk_0x86AA79952D0B526D(1344549371))
			{
				unk_0x084681BC25D24FCC(1344549371);
			}
		}
		else if (unk_0x86AA79952D0B526D(1344549371))
		{
			unk_0x310F4E81C7574224(1344549371);
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 9))
	{
		if ((((!unk_0xCA914B57A3600215() && !unk_0x6146EFE5BC2DD8DC()) && !func_327()) && func_755(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !func_197(unk_0xE0BDAFA1A39552D6(), 21))
		{
			unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 9);
			func_696(0);
			func_384("FME_TBL00", -1);
			func_383(1);
		}
	}
	if (func_234(unk_0xE0BDAFA1A39552D6()))
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 18))
		{
			if ((func_197(unk_0xE0BDAFA1A39552D6(), 21) && unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 20)) && !unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 19))
			{
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 18);
			}
		}
		else if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 18))
		{
			if (((((!unk_0xCA914B57A3600215() && !unk_0x6146EFE5BC2DD8DC()) && !func_327()) && func_755(unk_0xE0BDAFA1A39552D6(), 1, 1)) && unk_0xDF916BCF4D39E8C2()) && !Global_2464975.f_4679)
			{
				unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 18);
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 19);
				func_384("AMTT_RPAS", -1);
				func_383(1);
			}
		}
	}
	if (((((func_234(unk_0xE0BDAFA1A39552D6()) && !func_196(unk_0xE0BDAFA1A39552D6())) && func_184(unk_0xE0BDAFA1A39552D6()) != 146) && !func_195(unk_0xE0BDAFA1A39552D6())) && !func_695(unk_0xE0BDAFA1A39552D6())) && !func_685())
	{
		if (func_593(func_184(unk_0xE0BDAFA1A39552D6())))
		{
			unk_0x7E66ED87B737EFD0(unk_0xE0BDAFA1A39552D6());
		}
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 22))
		{
			unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 22);
		}
		if (func_222(unk_0xE0BDAFA1A39552D6()) || func_591())
		{
			if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 10))
			{
				if (func_683(func_184(unk_0xE0BDAFA1A39552D6())))
				{
					if (func_530(0) && !Global_2391043)
					{
						unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_407(1);
						unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 14);
					}
				}
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 10);
			}
		}
		if (func_221(unk_0xE0BDAFA1A39552D6()))
		{
			if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 11))
			{
				if (!Global_91362.f_8)
				{
					unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 12);
					func_405(1);
				}
				if (!func_682())
				{
					unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 13);
					func_592();
				}
				if (!Global_2391043)
				{
					unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 14);
					if (func_530(0) && !Global_2391043)
					{
						unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 9);
					}
					func_407(1);
				}
				unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 11);
			}
		}
		else
		{
			func_680(0);
		}
	}
	else
	{
		func_680(1);
	}
	func_675();
	if (func_590(func_184(unk_0xE0BDAFA1A39552D6())) && !unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 21))
	{
		unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 21);
	}
	if ((func_232() && !func_227()) || func_197(unk_0xE0BDAFA1A39552D6(), 21))
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 10))
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 10);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 10))
	{
		unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 10);
	}
}

void func_675()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_327())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_476(iVar2))
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
				if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 26))
				{
					unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 26);
				}
				func_676(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 26))
	{
		func_100(&(Global_1573903.f_21));
		unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 26);
	}
}

void func_676(int iParam0, int iParam1)
{
	if (!func_20(&(Global_1573903.f_21)))
	{
		func_18(&(Global_1573903.f_21), 0, 0);
	}
	else if (func_17(&(Global_1573903.f_21), iParam1, 0))
	{
		if (func_369() > 0)
		{
			func_679(iParam0);
			if (func_599("AMEV_LBD_HELP"))
			{
				unk_0x310F6B4E168A8F5D(1);
			}
			func_100(&(Global_1573903.f_21));
		}
	}
	else
	{
		func_678(0);
		func_677();
	}
}

void func_677()
{
	Global_2464975.f_4391 = 0;
}

void func_678(int iParam0)
{
	Global_1338622.f_68 = iParam0;
}

void func_679(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_680(int iParam0)
{
	if ((unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 11) || (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 10) && iParam0)) || (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 22) && iParam0))
	{
		if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 12))
		{
			unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 12);
			func_405(0);
		}
		if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 13))
		{
			unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 13);
			func_681();
		}
		if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 14) && !func_228(unk_0xE0BDAFA1A39552D6(), 0))
		{
			unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 14);
			func_407(0);
		}
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 11);
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 10);
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 22);
	}
}

void func_681()
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4589), 0);
}

bool func_682()
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4589, 0);
}

int func_683(int iParam0)
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
			return func_221(unk_0xE0BDAFA1A39552D6());
		
		case 133:
			return (func_591() || func_684(func_183()));
		
		default:
	}
	return 0;
}

int func_684(int iParam0)
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

int func_685()
{
	if (((((((((func_694() || func_693()) || func_692()) || func_176()) || (func_691() && !unk_0x21A36E2323FEA4B1())) || (func_688() && !func_687())) || Global_2394682) || Global_2394682.f_1 != 0) || Global_2394755 != 0) || (func_686() == 2 && !unk_0x21A36E2323FEA4B1()))
	{
		return 1;
	}
	return 0;
}

int func_686()
{
	return Global_978175;
}

bool func_687()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_2, 27);
}

int func_688()
{
	if (func_690() || func_689())
	{
		return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_87 == 8;
	}
	return 0;
}

var func_689()
{
	return Global_2434839.f_611;
}

bool func_690()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_2, 11);
}

bool func_691()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839, 5);
}

bool func_692()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839, 2);
}

bool func_693()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839, 20);
}

bool func_694()
{
	return Global_2434839.f_575;
}

bool func_695(int iParam0)
{
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		if ((func_232() && !func_227()) || func_197(unk_0xE0BDAFA1A39552D6(), 21))
		{
			return 1;
		}
		if (func_20(&(Global_1573903.f_13)))
		{
			if (!func_17(&(Global_1573903.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_100(&(Global_1573903.f_13));
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 9);
}

void func_696(int iParam0)
{
	int iVar0;
	
	iVar0 = func_249(2512, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x7DA173D4FD42F36B(iVar0, 0))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 0);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 1))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 1);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 2))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x7DA173D4FD42F36B(iVar0, 3))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 3);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 4))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 4);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 5))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x7DA173D4FD42F36B(iVar0, 6))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 6);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 7))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 7);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 8))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x7DA173D4FD42F36B(iVar0, 9))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 9);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 10))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 10);
		}
		else if (!unk_0x7DA173D4FD42F36B(iVar0, 11))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 11);
		}
	}
	func_440(2512, iVar0, -1, 1);
}

int func_697()
{
	int iVar0;
	
	if (!func_20(&(Global_1573903.f_15)))
	{
		func_18(&(Global_1573903.f_15), 0, 0);
		Global_1573903.f_17 = 0;
	}
	else if (func_17(&(Global_1573903.f_15), 1000, 0))
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(Global_1573903.f_17)))
		{
			iVar0 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Global_1573903.f_17));
			if (unk_0xA27C9E8196C79D22(iVar0))
			{
				if (func_755(iVar0, 1, 1) && func_698(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_57(unk_0xE0BDAFA1A39552D6()), func_57(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573903.f_17++;
		if (Global_1573903.f_17 >= 32)
		{
			Global_1573903.f_17 = 0;
			func_100(&(Global_1573903.f_15));
		}
	}
	return 0;
}

int func_698(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_444(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1587816[iVar0 /*444*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_699()
{
	return Global_1573903.f_23;
}

bool func_700(int iParam0)
{
	return !func_701(iParam0);
}

int func_701(int iParam0)
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
			if (Global_262145.f_5274)
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5275)
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5276)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5277)
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_702(4))
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_702(4))
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_702(4))
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_702(4))
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_702(4))
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_702(4))
			{
				return 0;
			}
			if (func_197(unk_0xE0BDAFA1A39552D6(), 7))
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

int func_702(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_755(unk_0x801C03D92F1C6755(iVar0), 0, 1))
		{
			if (unk_0x7DA173D4FD42F36B(Global_2418529[iVar0 /*313*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_703()
{
	bool bVar0;
	
	func_707(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_706())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_705())
	{
		return 1;
	}
	if (func_704(157))
	{
		if (!func_694())
		{
			return 1;
		}
	}
	if (func_704(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_400() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_400()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_704(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_705()
{
	return Global_2444095;
}

bool func_706()
{
	return Global_2434839.f_570;
}

void func_707(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_708(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
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

void func_708(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_755(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(iVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(iVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_709(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_709(int iParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(iParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(iParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(iParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_710()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_711()
{
	int iVar0;
	
	func_186();
	if (func_672() == 4 && Local_96.f_27 != 0)
	{
		unk_0x2CC3164B94BF6E73(Local_96.f_27, 0);
	}
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4430), 1);
	func_598(19, 0);
	func_584(0);
	if (unk_0x490BA5FDD7EE47A9() != -1)
	{
		func_716(129, 0, unk_0x7DA173D4FD42F36B(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2, 8));
	}
	func_715(129);
	unk_0x6553935614875699(unk_0x06736567F820A39E(), 184, 0);
	unk_0x6553935614875699(unk_0x06736567F820A39E(), 151, 1);
	unk_0x71543B3C24188223(1f);
	if (iLocal_1317 > 0)
	{
		unk_0x23C09ED6B6466E40(iLocal_1317);
	}
	if (unk_0xE0BDAFA1A39552D6() != -1)
	{
		if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 129)
		{
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] = -1;
		}
	}
	if (unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E()) == iLocal_1517)
	{
		unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), iLocal_1519);
	}
	func_714();
	func_199(0, 129);
	if (unk_0x7DA173D4FD42F36B(iLocal_1307, 22))
	{
		func_412();
		unk_0x99BCB15F954AF579(&iLocal_1307, 22);
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1307, 9))
	{
		unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
		if (!unk_0x7DA173D4FD42F36B(iLocal_1307, 10))
		{
			unk_0x25B97FB8615971D6("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1318 != -100f)
	{
		func_482(0, 0);
		unk_0xC6F3762602632C26(fLocal_1318);
	}
	func_481(0);
	if (func_703())
	{
		Local_713.f_5 = 5;
	}
	else if (func_548(2, 0, 0, 0, 0))
	{
		Local_713.f_5 = 6;
	}
	else if (Local_713.f_5 != 1)
	{
		Local_713.f_5 = 2;
	}
	unk_0x8EBF150526027B8E(uLocal_3579);
	Local_713.f_0 = Local_96.f_611;
	Local_713.f_1 = Local_96.f_612;
	Local_713.f_4 = Local_96.f_613;
	Local_713.f_3 = Local_96.f_615;
	if (Local_713.f_9 > 0)
	{
		Local_713.f_10 = (unk_0x40077EDF3FF70C39() - Local_713.f_9);
	}
	if ((!Global_262145.f_9700 && !unk_0x7DA173D4FD42F36B(Local_96.f_3, 8)) || (!Global_262145.f_9701 && unk_0x7DA173D4FD42F36B(Local_96.f_3, 8)))
	{
		if (Local_713.f_6 > 0)
		{
		}
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1308, 1))
	{
		func_604();
		unk_0x8EE5B578170FE8FC(0, 0);
	}
	if (iVar0 == 0)
	{
		func_713(Local_713, Local_96.f_27, Local_96.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x490BA5FDD7EE47A9() != -1)
	{
		func_713(Local_713, Local_96.f_279, Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_374(unk_0xE0BDAFA1A39552D6()))
	{
		func_565(0);
	}
	func_583(0);
	func_628(1);
	func_712();
}

void func_712()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_713(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x47B34031F915C179();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69521)
	{
		if (unk_0x2F6869889D97DFED(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x329776A8D28694C4(&Var1);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x2A8BD7F139997CB3(&Var14);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x2BB9BF8E4F257E8D(&Var28);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x07FB014E32C00B0F(&Var52);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_penned_in"))
		{
			unk_0xDFE098340246B96D(&Param0);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xFECBF336351B34AE(&Var66);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x6DA49557FC221A7B(&Var79);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x9C79A23DC20845E0(&Var93);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x1BAC56BC07C18BC1(&Var107);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x1F2BCE63B7D00D50(&Var123);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x7DE28C6DB21957C2(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x39CA99C96B635509(&Var150);
			}
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xF64220730C6332AD(&Var164);
		}
	}
}

void func_714()
{
	unk_0x50C99396AA9E5449(iLocal_1518);
	unk_0x50C99396AA9E5449(iLocal_1517);
}

void func_715(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_716(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xE0BDAFA1A39552D6() != -1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 13))
		{
			unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 13);
		}
		if (unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 14))
		{
			unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 14);
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 21))
	{
		unk_0x99BCB15F954AF579(&(Global_1573903.f_1), 21);
	}
	func_740();
	unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
	unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_739(func_184(unk_0xE0BDAFA1A39552D6()));
		func_598(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xE0BDAFA1A39552D6() != -1) && func_738(unk_0xE0BDAFA1A39552D6()) >= 12)
		{
			func_737(2524, -1);
			iVar1 = func_249(2524, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xE27C8E42A97895CF(&Global_1573928, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xE27C8E42A97895CF(&Global_1573928, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xE27C8E42A97895CF(&Global_1573928, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xE27C8E42A97895CF(&Global_1573928, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xE27C8E42A97895CF(&Global_1573928, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xE27C8E42A97895CF(&Global_1573928, 5);
			}
		}
		func_603();
		func_736();
		func_735();
		if ((!func_220(unk_0xE0BDAFA1A39552D6()) && !func_218(unk_0xE0BDAFA1A39552D6())) && !func_734())
		{
			func_723();
		}
		func_722();
		if (!unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0) && !unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 1))
		{
			func_409();
		}
		func_721();
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1645), 2);
		func_497();
		func_720();
	}
	if (unk_0x86AA79952D0B526D(1344549371))
	{
		unk_0x310F4E81C7574224(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xE0BDAFA1A39552D6() != -1 && !func_197(unk_0xE0BDAFA1A39552D6(), 21)) && !func_228(unk_0xE0BDAFA1A39552D6(), 0))
		{
			func_407(0);
			func_405(0);
			func_719();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_552(26, -1))
		{
			Global_2446396 = -1;
			func_550(26, -1);
		}
	}
	if (!func_717())
	{
		Global_2460400 = 1;
	}
}

int func_717()
{
	if (((!func_351(unk_0xE0BDAFA1A39552D6()) && !func_336(unk_0xE0BDAFA1A39552D6())) && func_184(unk_0xE0BDAFA1A39552D6()) != 146) && !func_718())
	{
		return 0;
	}
	return 1;
}

int func_718()
{
	if ((Global_1617902 == 0 && unk_0x21A36E2323FEA4B1()) && (((((((Global_1617902.f_5 != 0 || Global_1617902.f_95358 > 0) || unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 15)) || unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 18)) || unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 19)) || unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 28)) || unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 27)) || unk_0x7DA173D4FD42F36B(Global_1617902.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_719()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2359719[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x7DA173D4FD42F36B(Global_2359719[iVar0 /*26*/].f_13, 26))
			{
				unk_0x99BCB15F954AF579(&(Global_2359719[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_720()
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_7 = 0;
}

void func_721()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573903 = { Var0 };
}

void func_722()
{
	var uVar0;
	
	Global_1318849 = uVar0;
}

void func_723()
{
	Global_2404993.f_20 = { Global_2406822 };
	Global_2404993.f_22 = { Global_2406824 };
	func_732();
	func_724(1, 1);
}

void func_724(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404993.f_39 = { Global_2406841 };
	}
	else
	{
		Global_2404993.f_39 = { Global_2406841 };
		Global_2404993.f_39.f_49 = { Global_2406841.f_49 };
		Global_2404993.f_39.f_52 = Global_2406841.f_52;
		Global_2404993.f_39.f_53 = Global_2406841.f_53;
	}
	if (bParam0)
	{
		func_731();
	}
	func_727(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_726(0);
	func_725();
}

void func_725()
{
	struct<4> Var0;
	
	if (Global_2404993.f_469.f_1 == unk_0xAE832DCCE9CD3242())
	{
		Global_2404993.f_469 = { Var0 };
	}
}

void func_726(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_638 = 0;
	}
	else
	{
		Global_2404993.f_638 = 1;
	}
}

void func_727(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404993.f_1144 = iParam1;
		Global_2404993.f_1145 = iParam2;
		Global_2404993.f_1146 = iParam10;
		func_729();
		func_728(8, 0, 0);
		Global_2404993.f_639 = 1;
		Global_2404993.f_1147 = iParam11;
		Global_2404993.f_1150 = iParam3;
		Global_2404993.f_1151 = iParam4;
		Global_2404993.f_1148 = iParam5;
		Global_2404993.f_1149 = iParam6;
		Global_2404993.f_1152 = iParam7;
		Global_2404993.f_1153 = iParam8;
		Global_2404993.f_1154 = iParam9;
	}
	else
	{
		func_729();
		func_728(0, 0, 0);
		Global_2404993.f_639 = 0;
	}
}

void func_728(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409586 = 0;
	}
	Global_2404993.f_469 = iParam0;
	Global_2404993.f_469.f_1 = unk_0xAE832DCCE9CD3242();
	Global_2404993.f_469.f_2 = iParam1;
	Global_2404993.f_469.f_3 = iParam2;
}

void func_729()
{
	func_730();
	Global_2404993.f_640 = 0;
}

void func_730()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_641[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_731()
{
	Global_2404993.f_347 = { Global_2407149 };
}

void func_732()
{
	func_733();
	Global_2404993.f_1285 = 0;
}

void func_733()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1286[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_734()
{
	return Global_1573832;
}

void func_735()
{
	Global_2464975.f_4589 = 0;
}

void func_736()
{
	if (unk_0xE0BDAFA1A39552D6() != -1)
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1 = 0;
	}
}

void func_737(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_249(iParam0, func_231(iParam1), 0);
	iVar0++;
	if (!func_447(iParam0))
	{
		func_440(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_441(iParam0, iVar0, iParam1, 1);
	}
}

int func_738(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_195.f_6;
}

int func_739(int iParam0)
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
			if (func_221(unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_740()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1642, 3) || unk_0x7DA173D4FD42F36B(Global_2464975.f_1642, 4))
	{
		if (unk_0x4FF34B5B023875E1() || unk_0x58CFBE8B8644D59B())
		{
			unk_0x8EA2EEF67922F899(800);
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1642, 5))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1642), 5);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1642, 3))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1642), 3);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1642, 4))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1642), 4);
	}
	func_743(0);
	func_742(0);
	func_741(0);
}

void func_741(int iParam0)
{
	if (Global_2464975.f_4379 != iParam0)
	{
		Global_2464975.f_4379 = iParam0;
	}
}

void func_742(bool bParam0)
{
	if (Global_2464975.f_4378 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2464975.f_4378 = bParam0;
	}
}

void func_743(int iParam0)
{
	if (Global_2464975.f_4376 != iParam0)
	{
		Global_2464975.f_4376 = iParam0;
	}
}

void func_744(struct<20> Param0)
{
	int iVar0;
	
	func_753(func_754(Param0.f_0), Param0);
	unk_0xD9E25CCAEFD3B39A(24);
	unk_0xFABD8F29655099FA(9);
	func_752(0, -1, 0);
	func_750(129);
	unk_0x8C2CCD685DA243F6(&Local_96, 617);
	unk_0xE51AD091F27ECBFF(&Local_730, 577);
	func_749(1);
	if (!func_748())
	{
		func_711();
	}
	if (unk_0x17CC0D5008835470())
	{
		unk_0x8AAE4CDF72BA829A(0);
		if (unk_0x587E5997B76F47FE())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_96.f_17[iVar0] = func_25();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_96.f_22[iVar0] = func_25();
				Local_96.f_256[iVar0] = -1;
				Local_96.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0x5F55B369FD8D3271(&(Local_96.f_611), &(Local_96.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1309[iVar0] = -1;
			iVar0++;
		}
		Local_713.f_2 = unk_0x4D8275150C600F03();
		Local_713.f_8 = unk_0x40077EDF3FF70C39();
		func_598(19, 1);
		func_745();
		if (func_194())
		{
			unk_0xE27C8E42A97895CF(&(Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_2), 7);
		}
		Local_730[unk_0x490BA5FDD7EE47A9() /*18*/].f_9 = -1;
		Global_2464975.f_4675 = -1;
		Local_730[unk_0x490BA5FDD7EE47A9() /*18*/] = 0;
	}
	else
	{
		func_711();
	}
}

void func_745()
{
	int iVar0;
	
	unk_0x3ECE0E645B1530B3("relUWPlayer", &iLocal_1517);
	unk_0x3ECE0E645B1530B3("relUWAi", &iLocal_1518);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x054CBFE90FAA6840(1, Global_1574218[iVar0], iLocal_1517);
		unk_0x054CBFE90FAA6840(1, iLocal_1517, Global_1574218[iVar0]);
		unk_0x054CBFE90FAA6840(1, Global_1574218[iVar0], iLocal_1518);
		unk_0x054CBFE90FAA6840(1, iLocal_1518, Global_1574218[iVar0]);
		unk_0x054CBFE90FAA6840(1, iLocal_1517, joaat("COP"));
		unk_0x054CBFE90FAA6840(1, joaat("COP"), iLocal_1517);
		unk_0x054CBFE90FAA6840(1, iLocal_1517, Global_1574260[5]);
		unk_0x054CBFE90FAA6840(1, Global_1574260[5], iLocal_1517);
		unk_0x054CBFE90FAA6840(1, iLocal_1517, Global_1574251);
		unk_0x054CBFE90FAA6840(1, Global_1574251, iLocal_1517);
		iVar0++;
	}
	unk_0x054CBFE90FAA6840(5, iLocal_1517, iLocal_1518);
	unk_0x054CBFE90FAA6840(5, iLocal_1518, iLocal_1517);
	unk_0x054CBFE90FAA6840(1, 2017343592, iLocal_1518);
	unk_0x054CBFE90FAA6840(5, 2017343592, iLocal_1517);
	func_747(1, &iLocal_1518);
	func_746(&iLocal_1518);
	func_746(&iLocal_1517);
}

void func_746(int iParam0)
{
	unk_0x054CBFE90FAA6840(1, -1865950624, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1865950624);
	unk_0x054CBFE90FAA6840(1, 296331235, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 296331235);
	unk_0x054CBFE90FAA6840(1, 1166638144, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 1166638144);
	unk_0x054CBFE90FAA6840(1, 2037579709, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 2037579709);
	unk_0x054CBFE90FAA6840(1, 2017343592, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 2017343592);
	unk_0x054CBFE90FAA6840(1, -1821475077, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1821475077);
	unk_0x054CBFE90FAA6840(1, 1782292358, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 1782292358);
	unk_0x054CBFE90FAA6840(1, -1033021910, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1033021910);
	unk_0x054CBFE90FAA6840(1, -1285976420, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1285976420);
}

void func_747(int iParam0, int iParam1)
{
	unk_0x054CBFE90FAA6840(iParam0, joaat("COP"), *iParam1);
	unk_0x054CBFE90FAA6840(iParam0, *iParam1, joaat("COP"));
	unk_0x054CBFE90FAA6840(iParam0, joaat("army"), *iParam1);
	unk_0x054CBFE90FAA6840(iParam0, *iParam1, joaat("army"));
	unk_0x054CBFE90FAA6840(iParam0, -183807561, *iParam1);
	unk_0x054CBFE90FAA6840(iParam0, *iParam1, -183807561);
}

int func_748()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_706())
		{
			return 0;
		}
		if (func_704(155))
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

void func_749(bool bParam0)
{
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_400())
	{
		return;
	}
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_725) || Global_2412936.f_725 == unk_0xAE832DCCE9CD3242())
	{
		if (bParam0)
		{
			Global_2412936.f_725 = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			Global_2412936.f_725 = -1;
		}
	}
}

void func_750(int iParam0)
{
	func_721();
	func_751();
	func_735();
	Global_1573903.f_4 = iParam0;
	Global_1573903.f_5 = iParam0;
	func_597(iParam0, -1);
	func_6(&(Global_1573903.f_18), 0, 0);
	Global_2464975.f_4426 = 0;
	Global_2445125[0] = func_25();
	Global_2445125[1] = func_25();
	Global_2445125[2] = func_25();
	Global_2445125[3] = func_25();
	Global_2445125[4] = func_25();
	func_720();
	func_326();
	if (func_232() && !func_227())
	{
		unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 16);
	}
	else
	{
		unk_0xE27C8E42A97895CF(&(Global_1573903.f_1), 17);
	}
}

void func_751()
{
	var uVar0;
	
	Global_1573927 = uVar0;
}

int func_752(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_712();
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
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_712();
					}
					else
					{
						return 0;
					}
				}
				if (func_706())
				{
					if (!bParam2)
					{
						func_712();
					}
					else
					{
						return 0;
					}
				}
				if (func_704(155))
				{
					if (!bParam2)
					{
						func_712();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_712();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_712();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_712();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_753(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_712();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_754(int iParam0)
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

int func_755(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

