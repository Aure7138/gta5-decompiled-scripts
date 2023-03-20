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
	var uLocal_56 = 10;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
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
	struct<617> Local_99 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_716 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_728[4] = { 0, 0, 0, 0 };
	struct<18> Local_733[32];
	int iLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	float fLocal_1321 = 0f;
	var uLocal_1322[4] = { 0, 0, 0, 0 };
	struct<8> Local_1327[24];
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	int iLocal_1523[4] = { 0, 0, 0, 0 };
	int iLocal_1528[4] = { 0, 0, 0, 0 };
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	struct<49> Local_1536[32];
	struct<104> Local_3105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 32;
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
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
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
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	int iLocal_3638 = 0;
	int iLocal_3639 = 0;
	int iLocal_3640 = 0;
	var uLocal_3641[4] = { 0, 0, 0, 0 };
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	int iLocal_3649 = 0;
	int iLocal_3650 = 0;
	struct<2> Local_3651[10];
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	struct<2> Local_3682[5];
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	int iLocal_3697 = 0;
	struct<3> Local_3698 = { 0, 0, 0 } ;
	int iLocal_3701 = 0;
	int iLocal_3702 = 0;
	int iLocal_3703 = 0;
	int iLocal_3704 = 0;
	int iLocal_3705 = 0;
	int iLocal_3706[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3731 = 0;
	int iLocal_3732[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3738 = 0;
	var uLocal_3739[4] = { 0, 0, 0, 0 };
	var uLocal_3744[4] = { 0, 0, 0, 0 };
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	fLocal_1321 = -100f;
	iLocal_3639 = -1;
	iLocal_3640 = -1;
	iLocal_3703 = -1;
	if (unk_0xA86CA03D9749EEB3() && func_782(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_771(ScriptParam_0);
	}
	else
	{
		func_731();
	}
	while (true)
	{
		func_730();
		if (func_723())
		{
			func_731();
		}
		else if (func_720(19))
		{
			func_731();
		}
		if (func_719())
		{
			func_731();
		}
		func_694();
		switch (func_693(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if ((func_692() == 1 && Local_99.f_1 != -1) && Local_99.f_2 != -1)
				{
					func_690();
					func_686(129, Local_99.f_1, Local_99.f_2, 0);
					if (Global_2482149.f_4688 == -1)
					{
						if (!func_685())
						{
							Global_2482149.f_4688 = 0;
						}
						else
						{
							Global_2482149.f_4688 = 1;
						}
					}
					func_684(Local_99.f_30[0 /*3*/]);
					Local_733[unk_0x848AF823A8EA3C62() /*18*/] = 1;
				}
				else if (func_692() == 4)
				{
					Local_733[unk_0x848AF823A8EA3C62() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_692() == 1)
				{
					func_679();
					func_678();
					func_660();
					func_397();
					func_159();
					func_158();
					func_157();
				}
				else if (func_692() == 4)
				{
					Local_733[unk_0x848AF823A8EA3C62() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_156(&(Local_99.f_320));
				if (func_155(&(Local_99.f_320)))
				{
					Local_733[unk_0x848AF823A8EA3C62() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_733[unk_0x848AF823A8EA3C62() /*18*/] = 4;
			
			case 4:
				func_731();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_692())
			{
				case 0:
					if (func_140())
					{
						if (func_135())
						{
							func_132(func_134(129, Local_99.f_1, Local_99.f_2, 0));
							Local_99.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_123();
					func_32();
					func_23();
					if (func_1())
					{
						Local_99.f_0 = 4;
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
	
	if ((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2))
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_99.f_241 > 0)
	{
		if (Local_99.f_0 != 4)
		{
			if (func_22())
			{
				if (Local_99.f_241 == 3)
				{
					if (func_20())
					{
						if (unk_0x08BA6DD398CA197C(Local_99.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_18(&(Local_99.f_322), 3000, 0))
				{
					if (func_20())
					{
						return 1;
					}
				}
			}
		}
		if (Local_99.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_99.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0xE5697AB254094B0D())
				{
					if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
					{
						if (!func_15(unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1)), 0))
						{
							if (Local_733[iVar1 /*18*/].f_17 < 2)
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
				if ((!((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2)) && !unk_0x08BA6DD398CA197C(Local_99.f_3, 6)) && !unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 15);
				}
				func_6();
			}
			else if (Local_99.f_241 < 3)
			{
				if (func_3())
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 16);
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 15);
					func_6();
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
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
		{
			if (!func_4(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0))
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
	
	iVar1 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
	if (iParam4 || !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_5(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xD3FACCDA4D66AEAD(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xA0081090911D13E5())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xEB361B4BD195A4D3(iVar2))
					{
						if (unk_0x54F0AEFB11EA090A(iVar2))
						{
							if (unk_0x7DC70BB637724B43(unk_0xA43666ACD375E339(iVar2)) == 0)
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
				else if (!unk_0xEB361B4BD195A4D3(iVar2))
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
	
	if (!unk_0x6315EBE95A97CADF(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8FD32443A080784B(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			iVar0 = unk_0xA89799E38057BB0B(iParam0, iParam1);
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x21178DF77817BF39(iVar0, 451360105) == 1 || unk_0x21178DF77817BF39(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 0), unk_0xC59DF10B4FC39DF8(iVar0, 0)) < 10f)
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

void func_6()
{
	if (Local_99.f_241 != 3)
	{
		func_8();
		func_7(&(Local_99.f_324), 0, 0);
		Local_99.f_241 = 3;
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (!func_14())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_9();
}

void func_9()
{
	func_11();
	func_10(0);
}

void func_10(bool bParam0)
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

void func_11()
{
	if (!func_13())
	{
	}
	if (func_14())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_12();
		unk_0x953FDEB57BB0D276();
	}
}

void func_12()
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

int func_13()
{
	if (!func_14())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_12();
	return unk_0x7A2AFC1B08BD3742();
}

int func_14()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_16(-1, 0) == 8;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

int func_17()
{
	return Global_1312731;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

int func_20()
{
	int iVar0;
	
	if (!func_21(&(Local_99.f_328)))
	{
		func_19(&(Local_99.f_328), 0, 0);
	}
	else if (func_18(&(Local_99.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar0]))
		{
			if (Local_99.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
		{
			if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar1]))
		{
			if (!func_31(Local_99.f_48[iVar1]))
			{
				switch (Local_99.f_85[iVar1])
				{
					case 0:
						if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iVar1]), 0))
						{
							Local_99.f_85[iVar1] = 1;
						}
						else if (unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_99.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_99.f_241 == 1)
						{
							if (!func_22())
							{
								if (unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iVar1]), 0))
								{
									iVar4 = unk_0xF8DB47D339B8B953(unk_0x564EAE6038A81C07(Local_99.f_48[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_99.f_85[iVar1] = 2;
									}
									else if (unk_0x1E3C80E7C4B8041B(unk_0x705BC1BB91F530B5(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_99.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_26())
													{
														iVar3 = unk_0x21F191D9AFF98B5E(iVar2);
														if (!unk_0xEB361B4BD195A4D3(iVar3))
														{
															if (func_25(iVar4, iVar3, 1) > 250f)
															{
																Local_99.f_110[iVar0] = iVar2;
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
									Local_99.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_99.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_99.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_99.f_241 == 1)
						{
							if (func_22())
							{
								Local_99.f_85[iVar1] = 3;
							}
							else if (unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
							{
								Local_99.f_85[iVar1] = 3;
							}
							else if (unk_0x08BA6DD398CA197C(Local_99.f_464, iVar1))
							{
								Local_99.f_85[iVar1] = 1;
								unk_0x09C86C0C5CA26B1E(&(Local_99.f_464), iVar1);
							}
						}
						else
						{
							Local_99.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0x9337892D1C5EA0F0(unk_0x564EAE6038A81C07(Local_99.f_48[iVar1])))
						{
							func_24(&(Local_99.f_48[iVar1]));
							Local_99.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

float func_25(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

int func_26()
{
	return -1;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_26();
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (iVar0 == func_26())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
			{
				if (Local_733[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_733[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
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
			if (Local_99.f_110[iVar0] != -1)
			{
				iVar3 = Local_99.f_110[iVar0];
				iVar1 = unk_0x81C85E54237F8A2E(iVar3);
				if (unk_0xCB129F9A01D14082(iVar1))
				{
					if (func_782(iVar1, 1, 1))
					{
						if (unk_0x3F3C7C3B52DD0ECA(iVar1))
						{
							iVar2 = unk_0x9259DE19D910276C(iVar1);
							iVar3 = iVar2;
							if (Local_733[iVar3 /*18*/].f_17 != 1)
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
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			if (Local_733[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_733[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
					iVar2 = unk_0x21F191D9AFF98B5E(iVar1);
					if (!unk_0xEB361B4BD195A4D3(iVar2))
					{
						if (func_25(uParam0, iVar2, 1) < fParam1)
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
	
	if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0]), 0);
	if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_99.f_463 > 0)
	{
		if (Local_99.f_28 != Local_99.f_463)
		{
			Local_99.f_28 = Local_99.f_463;
		}
	}
	switch (Local_99.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_99.f_28)
			{
				if (Local_99.f_17[iVar0] == func_26())
				{
				}
				else
				{
					iVar1++;
					if (unk_0x08BA6DD398CA197C(Local_99.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_120();
			func_119();
			if (unk_0x08BA6DD398CA197C(Local_99.f_3, 4))
			{
				Local_99.f_463 = iVar1;
			}
			if (func_117())
			{
				func_110();
				Local_99.f_241 = 1;
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_3, 4) && func_107() > 1)
			{
				func_106();
				func_110();
				Local_99.f_241 = 1;
			}
			if (!func_685())
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_7[0]))
				{
					if (!func_104(Local_99.f_7[0]))
					{
						Var2.f_2 = 141;
						func_102(Var2, func_103(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 1, 0));
						Local_99.f_241 = 2;
					}
				}
			}
			if (Local_99.f_241 == 0)
			{
				if (!func_21(&(Local_99.f_330)))
				{
					if (!func_21(&(Local_99.f_326)))
					{
						func_19(&(Local_99.f_330), 0, 0);
					}
				}
				else if (func_21(&(Local_99.f_326)))
				{
					func_101(&(Local_99.f_330));
				}
				else if (func_18(&(Local_99.f_330), func_100(), 0))
				{
					Var2.f_2 = 141;
					func_102(Var2, func_99(1));
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 12);
					func_6();
				}
				if (unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
				{
					func_6();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_106();
			if (unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
			{
				Local_99.f_241 = 2;
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
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 19))
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
	{
		if (!func_21(&(Local_99.f_332)))
		{
			func_19(&(Local_99.f_332), 0, 0);
			unk_0x88B0F0DC270164B7(&(Local_99.f_3), 7);
		}
		else if (func_18(&(Local_99.f_332), func_34(), 0))
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_685())
	{
		return Global_262145.f_9552;
	}
	return Global_262145.f_9529;
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
	if (Local_99.f_278 > 0)
	{
		if (Local_99.f_279 >= Local_99.f_278)
		{
			if (Local_99.f_254 >= Local_99.f_255)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_3), 0);
				unk_0x88B0F0DC270164B7(&(Local_99.f_3), 1);
				unk_0x88B0F0DC270164B7(&(Local_99.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_99.f_278 > 0)
		{
			if (Local_99.f_279 >= Local_99.f_278)
			{
				if (Local_99.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_99.f_256[0]);
				}
				if (Local_99.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_99.f_256[1]);
				}
				if (Local_99.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_99.f_256[2]);
				}
				if (Local_99.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_99.f_256[3]);
				}
				if (iVar5 >= Local_99.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar4]))
						{
							if (!func_31(Local_99.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 0);
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 1);
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar4]))
					{
						if (!func_31(Local_99.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_21(&(Local_99.f_347)))
					{
						func_19(&(Local_99.f_347), 0, 0);
					}
					else if (func_18(&(Local_99.f_347), 3000, 0))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 0);
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 1);
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 0) || !unk_0x08BA6DD398CA197C(Local_99.f_3, 1))
	{
		if (Local_99.f_249 >= func_98())
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_3), 0);
			unk_0x88B0F0DC270164B7(&(Local_99.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_99.f_242)
		{
			if (unk_0x0E091C9F3918F674(Local_99.f_73[iVar0]))
			{
				if (func_97(iVar0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_245, iVar0))
					{
						if ((Local_99.f_27 != joaat("hydra") && !func_4(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0)) || Local_99.f_27 == joaat("hydra"))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 0);
							if (func_21(&(Local_3682[iVar0 /*2*/])))
							{
								func_101(&(Local_3682[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0) && unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0x08BA6DD398CA197C(Local_99.f_3, 0))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 0);
							}
							if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 18))
							{
								func_96(func_99(1), iVar0);
								unk_0x88B0F0DC270164B7(&(Local_99.f_3), 18);
							}
						}
						else if (func_95(iVar0) || !func_685())
						{
							if (unk_0x08BA6DD398CA197C(Local_99.f_3, 0))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 0);
							}
							if (!unk_0x08BA6DD398CA197C(Local_99.f_303, iVar0))
							{
								func_94(func_99(1), iVar0);
								unk_0x88B0F0DC270164B7(&(Local_99.f_303), iVar0);
							}
						}
						else
						{
							func_24(&(Local_99.f_73[iVar0]));
							if (!unk_0x08BA6DD398CA197C(Local_99.f_253, iVar0))
							{
								Local_99.f_251 = (Local_99.f_251 - 1);
								if (func_93() > 1)
								{
									if (Local_99.f_252 > 0)
									{
										Local_99.f_302++;
										func_92(iVar0, func_99(1));
									}
								}
								unk_0x88B0F0DC270164B7(&(Local_99.f_253), iVar0);
							}
							func_101(&(Local_3682[iVar0 /*2*/]));
						}
					}
				}
				else if (func_91(iVar0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_253, iVar0))
					{
						Local_99.f_251 = (Local_99.f_251 - 1);
						if (func_93() > 1)
						{
							if (Local_99.f_252 > 0)
							{
								Local_99.f_302++;
								func_92(iVar0, func_99(1));
							}
						}
						if (Local_99.f_27 == joaat("hydra"))
						{
							Local_99.f_254++;
						}
						unk_0x88B0F0DC270164B7(&(Local_99.f_253), iVar0);
					}
					if (func_21(&(Local_99.f_336[iVar0 /*2*/])))
					{
						func_101(&(Local_99.f_336[iVar0 /*2*/]));
					}
					func_24(&(Local_99.f_73[iVar0]));
				}
				else
				{
					if (unk_0x08BA6DD398CA197C(Local_99.f_3, 0))
					{
						unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 0);
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_271, iVar0))
					{
						if (!func_21(&(Local_99.f_336[iVar0 /*2*/])))
						{
							func_19(&(Local_99.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_99.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_271), iVar0);
						}
						else if (func_18(&(Local_99.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 18))
								{
									func_96(func_99(1), iVar0);
									unk_0x88B0F0DC270164B7(&(Local_99.f_3), 18);
								}
							}
							else if (func_95(iVar0) || !func_685())
							{
								if (!unk_0x08BA6DD398CA197C(Local_99.f_303, iVar0))
								{
									func_94(func_99(1), iVar0);
									unk_0x88B0F0DC270164B7(&(Local_99.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_99.f_116)
			{
				if (unk_0x0E091C9F3918F674(Local_99.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_99.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_89((iVar0 * 4 + iVar1)))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 0);
							}
							else if (func_88(iVar6))
							{
								if (!func_18(&(Local_99.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0x86998240179B9048(unk_0x564EAE6038A81C07(Local_99.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_87(&(Local_1327[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_24(&(Local_99.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar6)], func_85(iVar6)))
								{
									if (Local_99.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_84((iVar0 * 4 + iVar1), func_99(1));
										Local_99.f_254++;
									}
								}
								Local_99.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_21(&(Local_99.f_364[iVar6 /*2*/])))
								{
									func_101(&(Local_99.f_364[iVar6 /*2*/]));
								}
								if (unk_0x08BA6DD398CA197C(Local_99.f_275[func_86(iVar6)], func_85(iVar6)))
								{
									unk_0x09C86C0C5CA26B1E(&(Local_99.f_275[func_86(iVar6)]), func_85(iVar6));
								}
							}
							else
							{
								if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar6)], func_85(iVar6)))
								{
									if (!func_21(&(Local_99.f_364[iVar6 /*2*/])))
									{
										func_19(&(Local_99.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_18(&(Local_99.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0x88B0F0DC270164B7(&(Local_99.f_272[func_86(iVar6)]), func_85(iVar6));
										func_101(&(Local_99.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0x08BA6DD398CA197C(Local_99.f_275[func_86(iVar6)], func_85(iVar6)))
								{
									unk_0x88B0F0DC270164B7(&(Local_99.f_275[func_86(iVar6)]), func_85(iVar6));
								}
							}
						}
					}
					else if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar6)], func_85(iVar6)) || Local_99.f_27 == joaat("hydra"))
					{
						if (!func_18(&(Local_99.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_24(&(Local_99.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar6)], func_85(iVar6)))
						{
							if (Local_99.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_99.f_254++;
								func_84((iVar0 * 4 + iVar1), func_99(1));
							}
						}
						Local_99.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0x08BA6DD398CA197C(Local_99.f_275[func_86(iVar6)], func_85(iVar6)))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_275[func_86(iVar6)]), func_85(iVar6));
						}
					}
					else
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar6)], func_85(iVar6)))
						{
							if (!func_21(&(Local_99.f_364[iVar6 /*2*/])))
							{
								func_19(&(Local_99.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_18(&(Local_99.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_272[func_86(iVar6)]), func_85(iVar6));
								func_101(&(Local_99.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_99.f_275[func_86(iVar6)], func_85(iVar6)))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_275[func_86(iVar6)]), func_85(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_99.f_249 < func_98())
			{
				if (func_70(iVar0))
				{
				}
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 2))
	{
		if (Local_99.f_247 >= Global_262145.f_8656)
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_99.f_243)
		{
			if (unk_0x0E091C9F3918F674(Local_99.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iVar1)]), 0))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 2);
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar7)], func_85(iVar7)))
				{
					if (!func_18(&(Local_99.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_21(&(Local_99.f_364[iVar7 /*2*/])))
					{
						func_101(&(Local_99.f_364[iVar7 /*2*/]));
					}
					func_24(&(Local_99.f_48[(20 + iVar1)]));
					if (Local_99.f_85[(20 + iVar1)] > 0)
					{
						Local_99.f_254++;
						if (func_93() > 1)
						{
							if (Local_99.f_317 > 0)
							{
								Local_99.f_316++;
							}
						}
						func_84((20 + iVar1), func_99(1));
					}
					Local_99.f_85[(20 + iVar1)] = 0;
					if (unk_0x08BA6DD398CA197C(Local_99.f_275[func_86(iVar7)], func_85(iVar7)))
					{
						unk_0x09C86C0C5CA26B1E(&(Local_99.f_275[func_86(iVar7)]), func_85(iVar7));
					}
				}
				else
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar7)], func_85(iVar7)))
					{
						if (!func_21(&(Local_99.f_364[iVar7 /*2*/])))
						{
							func_19(&(Local_99.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_99.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_272[func_86(iVar7)]), func_85(iVar7));
							func_101(&(Local_99.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_275[func_86(iVar7)], func_85(iVar7)))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_275[func_86(iVar7)]), func_85(iVar7));
					}
				}
			}
			if (Local_99.f_247 < func_69())
			{
				if (func_51(iVar1))
				{
				}
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 2);
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
		if (Local_99.f_252 > 0)
		{
			if (Local_99.f_302 > 0)
			{
				if (Local_99.f_302 >= (Local_99.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_99.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_99.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_99.f_279++;
									func_40();
								}
								else if (Local_99.f_318 >= func_39())
								{
									func_47();
									Local_99.f_279++;
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
		if (Local_99.f_317 > 0)
		{
			if (Local_99.f_316 > 0)
			{
				if (Local_99.f_316 >= Local_99.f_317)
				{
					if (Local_99.f_317 >= func_38())
					{
						func_47();
						Local_99.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_93() == 4)
	{
		if (Local_99.f_316 > 0)
		{
			if (Local_99.f_302 > 0)
			{
				if (Local_99.f_317 > 0)
				{
					if (Local_99.f_316 >= (Local_99.f_317 - 2))
					{
						if (Local_99.f_252 > 0)
						{
							if (Local_99.f_302 >= (Local_99.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_99.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_99.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_99.f_279++;
												func_40();
											}
											else if (Local_99.f_318 >= func_39())
											{
												func_47();
												Local_99.f_279++;
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
		if (Local_99.f_252 > 0)
		{
			if (Local_99.f_302 > 0)
			{
				if (Local_99.f_302 >= (Local_99.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_99.f_279++;
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
	
	iVar0 = Local_99.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_99.f_280[iVar0];
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
	return Local_99.f_305[Local_99.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_99.f_278)
	{
		iVar0 = (iVar0 + Local_99.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_99.f_29 == -1)
	{
		iVar0 = func_46(Local_99.f_27);
		Local_99.f_29 = unk_0xB5BF1B58C833F7A9(0, iVar0);
		if (func_685())
		{
			if (Local_99.f_27 == joaat("hydra"))
			{
				if (Local_99.f_29 == 2)
				{
					Local_99.f_29 = 4;
				}
			}
			else if (Local_99.f_27 == joaat("savage"))
			{
				if (Local_99.f_29 == 0)
				{
					Local_99.f_29 = 1;
				}
				else if (Local_99.f_29 == 1)
				{
					Local_99.f_29 = 2;
				}
				else if (Local_99.f_29 == 2)
				{
					Local_99.f_29 = 3;
				}
			}
			else if (Local_99.f_27 == joaat("valkyrie"))
			{
				if (Local_99.f_29 == 2)
				{
					Local_99.f_29 = 3;
				}
				else if (Local_99.f_29 == 3)
				{
					Local_99.f_29 = 4;
				}
			}
			else if (Local_99.f_27 == joaat("buzzard"))
			{
				if (Local_99.f_29 == 0)
				{
					Local_99.f_29 = 1;
				}
				else if (Local_99.f_29 == 1)
				{
					Local_99.f_29 = 2;
				}
				else if (Local_99.f_29 == 2)
				{
					Local_99.f_29 = 3;
				}
				else if (Local_99.f_29 == 3)
				{
					Local_99.f_29 = 4;
				}
			}
		}
		else if (Local_99.f_27 == joaat("savage"))
		{
			if (Local_99.f_29 == 0)
			{
				Local_99.f_29 = 1;
			}
			else if (Local_99.f_29 == 1)
			{
				Local_99.f_29 = 2;
			}
			else if (Local_99.f_29 == 2)
			{
				Local_99.f_29 = 3;
			}
		}
	}
	switch (Local_99.f_27)
	{
		case joaat("rhino"):
			Local_99.f_280[0] = 4;
			Local_99.f_291[0] = func_45(4);
			Local_99.f_305[0] = func_44(4);
			Local_99.f_280[1] = 4;
			Local_99.f_291[1] = func_45(4);
			Local_99.f_305[1] = func_44(4);
			Local_99.f_280[2] = 4;
			Local_99.f_291[2] = func_45(4);
			Local_99.f_305[2] = func_44(4);
			if (Local_99.f_12 <= 2 || !func_685())
			{
				Local_99.f_278 = 3;
			}
			else if (Local_99.f_12 == 3)
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_278 = 4;
			}
			else
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 4;
				Local_99.f_291[4] = func_45(4);
				Local_99.f_305[4] = func_44(4);
				Local_99.f_278 = 5;
			}
			Local_99.f_255 = func_41();
			if (!func_685())
			{
				Local_99.f_1 = 0;
			}
			else
			{
				Local_99.f_1 = 5;
			}
			Local_99.f_2 = Local_99.f_29;
			switch (Local_99.f_29)
			{
				case 0:
					Local_99.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_99.f_43[0] = 269.414f;
					Local_99.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_99.f_43[1] = 3.5491f;
					Local_99.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_99.f_43[2] = 54.4509f;
					Local_99.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_99.f_43[3] = 178.1948f;
					Local_99.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_99.f_175[0] = 270.8322f;
					Local_99.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_99.f_175[1] = 177.3506f;
					Local_99.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_99.f_175[2] = 318.1089f;
					Local_99.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_99.f_175[3] = 272.0801f;
					Local_99.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_99.f_175[4] = 104.0591f;
					Local_99.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_99.f_148[0] = 296.4225f;
					Local_99.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_99.f_148[1] = 164.9695f;
					Local_99.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_99.f_148[2] = 136.0596f;
					Local_99.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_99.f_148[3] = 116.379f;
					Local_99.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_99.f_148[4] = 86.6586f;
					Local_99.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_99.f_148[5] = 74.6822f;
					Local_99.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_99.f_148[6] = 206.8863f;
					Local_99.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_99.f_148[7] = 267.8581f;
					Local_99.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_99.f_148[8] = 267.5856f;
					Local_99.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_99.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_99.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_99.f_43[0] = 194.8062f;
					Local_99.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_99.f_43[1] = 238.9372f;
					Local_99.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_99.f_43[2] = 16.3071f;
					Local_99.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_99.f_43[3] = 209.9883f;
					Local_99.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_99.f_148[0] = 221.3913f;
					Local_99.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_99.f_148[1] = 246.3415f;
					Local_99.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_99.f_148[2] = 213.4087f;
					Local_99.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_99.f_148[3] = 100.5405f;
					Local_99.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_99.f_148[4] = 289.6017f;
					Local_99.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_99.f_148[5] = 285.6456f;
					Local_99.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_99.f_148[6] = 310.9245f;
					Local_99.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_99.f_148[7] = 46.7117f;
					Local_99.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_99.f_148[8] = 35.9192f;
					Local_99.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_99.f_148[9] = 207.53f;
					Local_99.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_99.f_175[0] = 286.6127f;
					Local_99.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_99.f_175[1] = 124.1428f;
					Local_99.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_99.f_175[2] = 275.0147f;
					Local_99.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_99.f_175[3] = 287.91f;
					Local_99.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_99.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_99.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_99.f_43[0] = 172.439f;
					Local_99.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_99.f_43[1] = 53.9805f;
					Local_99.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_99.f_43[2] = 303.2142f;
					Local_99.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_99.f_43[3] = 218.5974f;
					Local_99.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_99.f_148[0] = 264.5842f;
					Local_99.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_99.f_148[1] = 133.7932f;
					Local_99.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_99.f_148[2] = 205.1215f;
					Local_99.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_99.f_148[3] = 66.1065f;
					Local_99.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_99.f_148[4] = 7.8064f;
					Local_99.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_99.f_148[5] = 358.7563f;
					Local_99.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_99.f_148[6] = 142.1748f;
					Local_99.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_99.f_148[7] = 247.816f;
					Local_99.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_99.f_148[8] = 124.4666f;
					Local_99.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_99.f_148[9] = 348.6588f;
					Local_99.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_99.f_175[0] = 89.8563f;
					Local_99.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_99.f_175[1] = 163.8004f;
					Local_99.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_99.f_175[2] = 270.0754f;
					Local_99.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_99.f_175[3] = 184.9752f;
					Local_99.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_99.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_99.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_99.f_43[0] = 0.5044f;
					Local_99.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_99.f_43[1] = 179.2507f;
					Local_99.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_99.f_43[2] = 0.3066f;
					Local_99.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_99.f_43[3] = 180.2973f;
					Local_99.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_99.f_148[0] = 336.7541f;
					Local_99.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_99.f_148[1] = 6.0929f;
					Local_99.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_99.f_148[2] = 4.2803f;
					Local_99.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_99.f_148[3] = 274.985f;
					Local_99.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_99.f_148[4] = 267.2555f;
					Local_99.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_99.f_148[5] = 6.5529f;
					Local_99.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_99.f_148[6] = 89.1724f;
					Local_99.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_99.f_148[7] = 348.279f;
					Local_99.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_99.f_148[8] = 267.8075f;
					Local_99.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_99.f_148[9] = 0.5237f;
					Local_99.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_99.f_175[0] = 357.9713f;
					Local_99.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_99.f_175[1] = 269.3234f;
					Local_99.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_99.f_175[2] = 269.3055f;
					Local_99.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_99.f_175[3] = 359.1497f;
					Local_99.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_99.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_99.f_240 = joaat("insurgent");
			Local_99.f_280[0] = 2;
			Local_99.f_291[0] = func_45(2);
			Local_99.f_280[1] = 4;
			Local_99.f_291[1] = func_45(4);
			Local_99.f_305[1] = func_44(4);
			Local_99.f_280[2] = 2;
			Local_99.f_291[2] = func_45(2);
			if (Local_99.f_12 <= 2 || !func_685())
			{
				Local_99.f_280[3] = 5;
				Local_99.f_291[3] = func_45(5);
				Local_99.f_278 = 4;
			}
			else if (Local_99.f_12 == 3)
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 5;
				Local_99.f_291[5] = func_45(5);
				Local_99.f_278 = 6;
			}
			else
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 4;
				Local_99.f_291[5] = func_45(4);
				Local_99.f_305[5] = func_44(4);
				Local_99.f_280[6] = 5;
				Local_99.f_291[6] = func_45(5);
				Local_99.f_278 = 7;
			}
			Local_99.f_255 = func_41();
			if (!func_685())
			{
				Local_99.f_1 = 2;
			}
			else
			{
				Local_99.f_1 = 7;
			}
			Local_99.f_2 = Local_99.f_29;
			switch (Local_99.f_29)
			{
				case 0:
					Local_99.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_99.f_43[0] = 331.74f;
					Local_99.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_99.f_43[1] = 327.7335f;
					Local_99.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_99.f_43[2] = 149.1604f;
					Local_99.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_99.f_43[3] = 150.6753f;
					Local_99.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_99.f_148[0] = 147.2177f;
					Local_99.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_99.f_148[1] = 103.9461f;
					Local_99.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_99.f_148[2] = 160.822f;
					Local_99.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_99.f_148[3] = 205.8375f;
					Local_99.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_99.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_99.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_99.f_43[0] = 344.2504f;
					Local_99.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_99.f_43[1] = 340.3425f;
					Local_99.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_99.f_43[2] = 351.5693f;
					Local_99.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_99.f_43[3] = 354.2446f;
					Local_99.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_99.f_148[0] = 245.2865f;
					Local_99.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_99.f_148[1] = 74.1185f;
					Local_99.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_99.f_148[2] = 10.2312f;
					Local_99.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_99.f_148[3] = 222.4017f;
					Local_99.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_99.f_148[4] = 150.2763f;
					Local_99.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_99.f_148[5] = 105.4526f;
					Local_99.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_99.f_148[6] = 88.9429f;
					Local_99.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_99.f_148[7] = 51.1733f;
					Local_99.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_99.f_148[8] = 169.7083f;
					Local_99.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_99.f_148[9] = 29.5849f;
					Local_99.f_243 = 3;
					break;
				
				case 2:
					if (!func_685())
					{
						Local_99.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_99.f_43[0] = 319.153f;
					}
					else
					{
						Local_99.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_99.f_43[0] = 319.153f;
						Local_99.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_99.f_43[1] = 316.7079f;
						Local_99.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_99.f_43[2] = 316.9623f;
						Local_99.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_99.f_43[3] = 314.2003f;
					}
					Local_99.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_99.f_148[0] = 326.4292f;
					Local_99.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_99.f_148[1] = 6.8118f;
					Local_99.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_99.f_148[2] = 32.8776f;
					Local_99.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_99.f_148[3] = 8.387f;
					Local_99.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_99.f_148[4] = 291.5504f;
					Local_99.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_99.f_148[5] = 333.1838f;
					Local_99.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_99.f_148[6] = 203.8353f;
					Local_99.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_99.f_148[7] = 32.2329f;
					Local_99.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_99.f_148[8] = 195.4847f;
					Local_99.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_99.f_148[9] = 327.4941f;
					Local_99.f_243 = 4;
					break;
				
				case 3:
					if (!func_685())
					{
						Local_99.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_99.f_43[0] = 156.0209f;
					}
					else
					{
						Local_99.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_99.f_43[0] = 156.0209f;
						Local_99.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_99.f_43[1] = 41.8571f;
						Local_99.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_99.f_43[2] = 305.7411f;
						Local_99.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_99.f_43[3] = 223.2489f;
					}
					if (func_93() == 2 || func_93() == 5)
					{
						Local_99.f_242 = 3;
					}
					else
					{
						Local_99.f_242 = 4;
					}
					Local_99.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_99.f_148[0] = 197.3456f;
					Local_99.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_99.f_148[1] = 140.7211f;
					Local_99.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_99.f_148[2] = 98.9528f;
					Local_99.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_99.f_148[3] = 107.0238f;
					Local_99.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_99.f_148[4] = 202.129f;
					Local_99.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_99.f_148[5] = 230.1207f;
					Local_99.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_99.f_148[6] = 36.194f;
					Local_99.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_99.f_148[7] = 48.2522f;
					Local_99.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_99.f_148[8] = 296.114f;
					Local_99.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_99.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_99.f_240 = joaat("lazer");
			Local_99.f_280[0] = 2;
			Local_99.f_291[0] = func_45(2);
			Local_99.f_280[1] = 2;
			Local_99.f_291[1] = func_45(2);
			Local_99.f_280[2] = 2;
			Local_99.f_291[2] = func_45(2);
			if (Local_99.f_12 <= 2 || !func_685())
			{
				Local_99.f_278 = 3;
			}
			else if (Local_99.f_12 == 3)
			{
				Local_99.f_280[3] = 2;
				Local_99.f_291[3] = func_45(2);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_278 = 5;
			}
			else
			{
				Local_99.f_280[3] = 2;
				Local_99.f_291[3] = func_45(2);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 2;
				Local_99.f_291[5] = func_45(2);
				Local_99.f_278 = 6;
			}
			Local_99.f_255 = func_41();
			if (!func_685())
			{
				Local_99.f_1 = 1;
			}
			else
			{
				Local_99.f_1 = 6;
			}
			Local_99.f_2 = Local_99.f_29;
			switch (Local_99.f_29)
			{
				case 0:
					if (!func_685())
					{
						Local_99.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_99.f_43[0] = 197.4435f;
					}
					else
					{
						Local_99.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_99.f_43[0] = 197.4435f;
						Local_99.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_99.f_43[1] = 197.1133f;
						Local_99.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_99.f_43[2] = 272.2065f;
						Local_99.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_99.f_43[3] = 142.941f;
					}
					Local_99.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_99.f_175[0] = 34.149f;
					Local_99.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_99.f_175[1] = -26.0182f;
					Local_99.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_99.f_175[2] = 88.3998f;
					Local_99.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_99.f_175[3] = -141.7949f;
					Local_99.f_228[0] = 10000;
					Local_99.f_228[1] = 10000;
					Local_99.f_228[2] = 10000;
					Local_99.f_228[3] = 10000;
					Local_99.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_99.f_148[0] = 143.4012f;
					Local_99.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_99.f_148[1] = 212.1136f;
					Local_99.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_99.f_148[2] = 95.8248f;
					Local_99.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_99.f_148[3] = 113.3084f;
					Local_99.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_99.f_148[4] = 260.1329f;
					Local_99.f_242 = 4;
					break;
				
				case 1:
					if (!func_685())
					{
						Local_99.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_99.f_43[0] = 131.0993f;
					}
					else
					{
						Local_99.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_99.f_43[0] = 131.0993f;
						Local_99.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_99.f_43[1] = 127.8408f;
						Local_99.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_99.f_43[2] = 131.1571f;
						Local_99.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_99.f_43[3] = 132.943f;
					}
					Local_99.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_99.f_175[0] = 316.9068f;
					Local_99.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_99.f_175[1] = 142.3075f;
					Local_99.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_99.f_175[2] = 93.1231f;
					Local_99.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_99.f_175[3] = -9.0334f;
					Local_99.f_228[0] = 10000;
					Local_99.f_228[1] = 10000;
					Local_99.f_228[2] = 10000;
					Local_99.f_228[3] = 10000;
					Local_99.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_99.f_148[0] = 236.3566f;
					Local_99.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_99.f_148[1] = 212.7533f;
					Local_99.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_99.f_148[2] = 299.3619f;
					Local_99.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_99.f_148[3] = 115.7556f;
					Local_99.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_99.f_148[4] = 191.3862f;
					Local_99.f_242 = 4;
					break;
				
				case 2:
					Local_99.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_99.f_43[0] = 176.244f;
					Local_99.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_99.f_175[0] = 93.8354f;
					Local_99.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_99.f_175[1] = 250.5173f;
					Local_99.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_99.f_175[2] = 337.8961f;
					Local_99.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_99.f_175[3] = 142.1369f;
					Local_99.f_228[0] = 10000;
					Local_99.f_228[1] = 10000;
					Local_99.f_228[2] = 10000;
					Local_99.f_228[3] = 10000;
					Local_99.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_99.f_148[0] = 208.2624f;
					Local_99.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_99.f_148[1] = 349.048f;
					Local_99.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_99.f_148[2] = 69.8162f;
					Local_99.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_99.f_148[3] = 286.6181f;
					Local_99.f_242 = 4;
					Local_99.f_243 = 4;
					break;
				
				case 3:
					Local_99.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_99.f_43[0] = 292.0822f;
					Local_99.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_99.f_43[1] = 43.3907f;
					Local_99.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_99.f_43[2] = 124.2279f;
					Local_99.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_99.f_43[3] = 129.3366f;
					Local_99.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_99.f_175[0] = 137.5025f;
					Local_99.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_99.f_175[1] = 227.9336f;
					Local_99.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_99.f_175[2] = 6.0299f;
					Local_99.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_99.f_175[3] = -87.5596f;
					Local_99.f_228[0] = 10000;
					Local_99.f_228[1] = 10000;
					Local_99.f_228[2] = 10000;
					Local_99.f_228[3] = 10000;
					Local_99.f_242 = 4;
					Local_99.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_99.f_148[0] = 338.8487f;
					Local_99.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_99.f_148[1] = 272.5443f;
					Local_99.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_99.f_148[2] = 223.0158f;
					Local_99.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_99.f_148[3] = 355.6682f;
					Local_99.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_99.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_685())
					{
						Local_99.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_99.f_43[0] = 331.7771f;
					}
					else
					{
						Local_99.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_99.f_43[0] = 331.7771f;
						Local_99.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_99.f_43[1] = 324.1843f;
						Local_99.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_99.f_43[2] = 330.0586f;
						Local_99.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_99.f_43[3] = 329.5413f;
					}
					Local_99.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_99.f_175[0] = 146.9594f;
					Local_99.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_99.f_175[1] = 137.6555f;
					Local_99.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_99.f_175[2] = 114.7478f;
					Local_99.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_99.f_175[3] = -84.6269f;
					Local_99.f_228[0] = 10000;
					Local_99.f_228[1] = 10000;
					Local_99.f_228[2] = 10000;
					Local_99.f_228[3] = 10000;
					Local_99.f_242 = 4;
					Local_99.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_99.f_148[0] = 153.0449f;
					Local_99.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_99.f_148[1] = 153.1271f;
					Local_99.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_99.f_148[2] = 331.3771f;
					Local_99.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_99.f_148[3] = 183.2579f;
					Local_99.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_99.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_99.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_99.f_43[0] = 184.7817f;
					Local_99.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_99.f_175[0] = 91.7761f;
					Local_99.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_99.f_175[1] = 269.7376f;
					Local_99.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_99.f_175[1] = 211.4614f;
					Local_99.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_99.f_175[3] = 148.9204f;
					Local_99.f_228[0] = 10000;
					Local_99.f_228[1] = 10000;
					Local_99.f_228[2] = 10000;
					Local_99.f_228[3] = 10000;
					Local_99.f_242 = 4;
					Local_99.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_99.f_148[0] = 113.298f;
					Local_99.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_99.f_148[1] = 353.0292f;
					Local_99.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_99.f_148[2] = 216.1793f;
					Local_99.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_99.f_148[3] = 347.4008f;
					Local_99.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_99.f_240 = joaat("buzzard");
			Local_99.f_280[0] = 2;
			Local_99.f_291[0] = func_45(2);
			Local_99.f_305[0] = func_44(4);
			Local_99.f_280[1] = 4;
			Local_99.f_291[1] = func_45(4);
			Local_99.f_305[1] = func_44(4);
			Local_99.f_280[2] = 2;
			Local_99.f_291[2] = func_45(2);
			Local_99.f_305[2] = func_44(4);
			if (Local_99.f_12 <= 2 || !func_685())
			{
				Local_99.f_280[3] = 5;
				Local_99.f_291[3] = func_45(5);
				Local_99.f_278 = 4;
			}
			else if (Local_99.f_12 == 3)
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 5;
				Local_99.f_291[5] = func_45(5);
				Local_99.f_278 = 6;
			}
			else
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 4;
				Local_99.f_291[5] = func_45(4);
				Local_99.f_305[5] = func_44(4);
				Local_99.f_280[6] = 5;
				Local_99.f_291[6] = func_45(5);
				Local_99.f_278 = 7;
			}
			Local_99.f_255 = func_41();
			if (!func_685())
			{
				Local_99.f_1 = 3;
			}
			else
			{
				Local_99.f_1 = 8;
			}
			Local_99.f_2 = Local_99.f_29;
			switch (Local_99.f_29)
			{
				case 0:
					if (!func_685())
					{
						Local_99.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_99.f_43[0] = 290.0732f;
					}
					else
					{
						Local_99.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_99.f_43[0] = 290.0732f;
						Local_99.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_99.f_43[1] = 231.5867f;
						Local_99.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_99.f_43[2] = 49.6234f;
						Local_99.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_99.f_43[3] = 229.3317f;
					}
					Local_99.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_99.f_148[0] = 230.0049f;
					Local_99.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_99.f_148[1] = 147.9421f;
					Local_99.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_99.f_148[2] = 22.3204f;
					Local_99.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_99.f_148[3] = 80.7676f;
					Local_99.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_99.f_148[4] = 162.0507f;
					Local_99.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_99.f_148[5] = 225.9002f;
					Local_99.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_99.f_148[6] = 140.0515f;
					Local_99.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_99.f_148[7] = 90.6966f;
					Local_99.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_99.f_148[8] = 226.042f;
					Local_99.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_99.f_148[9] = 79.7294f;
					Local_99.f_243 = 4;
					break;
				
				case 1:
					Local_99.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_99.f_43[0] = 122.9714f;
					Local_99.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_99.f_43[1] = 118.6931f;
					Local_99.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_99.f_43[2] = 26.5272f;
					Local_99.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_99.f_43[3] = 211.0638f;
					Local_99.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_99.f_148[0] = 203.4084f;
					Local_99.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_99.f_148[1] = 123.7895f;
					Local_99.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_99.f_148[2] = 115.9053f;
					Local_99.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_99.f_148[3] = 330.5807f;
					Local_99.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_99.f_148[4] = 116.311f;
					Local_99.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_99.f_148[5] = 145.855f;
					Local_99.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_99.f_148[6] = 41.353f;
					Local_99.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_99.f_148[7] = 266.0158f;
					Local_99.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_99.f_148[8] = 290.3963f;
					Local_99.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_99.f_148[9] = 243.2495f;
					Local_99.f_243 = 4;
					break;
				
				case 2:
					Local_99.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_99.f_43[0] = 280.2862f;
					Local_99.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_99.f_43[1] = 32.9157f;
					Local_99.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_99.f_43[2] = 106.2954f;
					Local_99.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_99.f_43[3] = 272.3807f;
					Local_99.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_99.f_148[0] = 254.5411f;
					Local_99.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_99.f_148[1] = 183.227f;
					Local_99.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_99.f_148[2] = 338.6039f;
					Local_99.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_99.f_148[3] = 71.8258f;
					Local_99.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_99.f_148[4] = 179.6626f;
					Local_99.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_99.f_148[5] = 272.7491f;
					Local_99.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_99.f_148[6] = 270.8252f;
					Local_99.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_99.f_148[7] = 180.4937f;
					Local_99.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_99.f_148[8] = 107.4297f;
					Local_99.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_99.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_99.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_99.f_43[0] = 117.7311f;
					Local_99.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_99.f_43[1] = 46.3958f;
					Local_99.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_99.f_43[2] = 189.2091f;
					Local_99.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_99.f_43[3] = 50.0778f;
					Local_99.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_99.f_148[0] = 229.5714f;
					Local_99.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_99.f_148[1] = 136.4963f;
					Local_99.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_99.f_148[2] = 88.3908f;
					Local_99.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_99.f_148[3] = 271.8922f;
					Local_99.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_99.f_148[4] = 316.4374f;
					Local_99.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_99.f_148[5] = 246.1521f;
					Local_99.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_99.f_148[6] = 198.8985f;
					Local_99.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_99.f_148[7] = 257.2332f;
					Local_99.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_99.f_148[8] = 104.7808f;
					Local_99.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_99.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_99.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_99.f_43[0] = 306.7662f;
					Local_99.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_99.f_43[1] = 303.3918f;
					Local_99.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_99.f_43[2] = 302.365f;
					Local_99.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_99.f_43[3] = 304.9788f;
					Local_99.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_99.f_148[0] = 30.9787f;
					Local_99.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_99.f_148[1] = 97.3626f;
					Local_99.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_99.f_148[2] = 218.2636f;
					Local_99.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_99.f_148[3] = 257.6324f;
					Local_99.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_99.f_148[4] = 244.6777f;
					Local_99.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_99.f_148[5] = 12.745f;
					Local_99.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_99.f_148[6] = 196.3743f;
					Local_99.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_99.f_148[7] = 283.2556f;
					Local_99.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_99.f_148[8] = 243.4268f;
					Local_99.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_99.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_99.f_240 = joaat("buzzard");
			Local_99.f_280[0] = 2;
			Local_99.f_291[0] = func_45(2);
			Local_99.f_280[1] = 4;
			Local_99.f_291[1] = func_45(4);
			Local_99.f_305[1] = func_44(4);
			Local_99.f_280[2] = 2;
			Local_99.f_291[2] = func_45(2);
			if (Local_99.f_12 <= 2 || !func_685())
			{
				Local_99.f_280[3] = 5;
				Local_99.f_291[3] = func_45(5);
				Local_99.f_278 = 4;
			}
			else if (Local_99.f_12 == 3)
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 5;
				Local_99.f_291[5] = func_45(5);
				Local_99.f_278 = 6;
			}
			else
			{
				Local_99.f_280[3] = 4;
				Local_99.f_291[3] = func_45(4);
				Local_99.f_305[3] = func_44(4);
				Local_99.f_280[4] = 2;
				Local_99.f_291[4] = func_45(2);
				Local_99.f_280[5] = 4;
				Local_99.f_291[5] = func_45(4);
				Local_99.f_305[5] = func_44(4);
				Local_99.f_280[6] = 5;
				Local_99.f_291[6] = func_45(5);
				Local_99.f_278 = 7;
			}
			Local_99.f_255 = func_41();
			if (!func_685())
			{
				Local_99.f_1 = 4;
			}
			else
			{
				Local_99.f_1 = 9;
			}
			Local_99.f_2 = Local_99.f_29;
			switch (Local_99.f_29)
			{
				case 0:
					Local_99.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_99.f_43[0] = 180.7904f;
					Local_99.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_99.f_43[1] = 269.3001f;
					Local_99.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_99.f_43[2] = 180.39f;
					Local_99.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_99.f_43[3] = 276.7351f;
					Local_99.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_99.f_148[0] = 329.9165f;
					Local_99.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_99.f_148[1] = 264.7702f;
					Local_99.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_99.f_148[2] = 359.5203f;
					Local_99.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_99.f_148[3] = 111.3101f;
					Local_99.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_99.f_148[4] = 176.3058f;
					Local_99.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_99.f_148[5] = 213.1969f;
					Local_99.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_99.f_148[6] = 275.2275f;
					Local_99.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_99.f_148[7] = 220.0349f;
					Local_99.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_99.f_148[8] = 359.15f;
					Local_99.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_99.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_99.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_99.f_43[0] = 247.4892f;
					Local_99.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_99.f_43[1] = 66.129f;
					Local_99.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_99.f_43[2] = 340.0713f;
					Local_99.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_99.f_43[3] = 245.7466f;
					Local_99.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_99.f_148[0] = 252.6017f;
					Local_99.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_99.f_148[1] = 245.262f;
					Local_99.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_99.f_148[2] = 44.7945f;
					Local_99.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_99.f_148[3] = 255.6518f;
					Local_99.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_99.f_148[4] = 124.8391f;
					Local_99.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_99.f_148[5] = 188.9979f;
					Local_99.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_99.f_148[6] = 159.3613f;
					Local_99.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_99.f_148[7] = 5.7762f;
					Local_99.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_99.f_148[8] = 89.3388f;
					Local_99.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_99.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_99.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_99.f_43[0] = 310.6241f;
					Local_99.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_99.f_43[1] = 166.0191f;
					Local_99.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_99.f_43[2] = 343.1715f;
					Local_99.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_99.f_43[3] = 342.4984f;
					Local_99.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_99.f_148[0] = 248.8594f;
					Local_99.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_99.f_148[1] = 195.7758f;
					Local_99.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_99.f_148[2] = 28.6127f;
					Local_99.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_99.f_148[3] = 296.7476f;
					Local_99.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_99.f_148[4] = 240.9422f;
					Local_99.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_99.f_148[5] = 2.473f;
					Local_99.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_99.f_148[6] = 343.6776f;
					Local_99.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_99.f_148[7] = 0.2495f;
					Local_99.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_99.f_148[8] = 72.7889f;
					Local_99.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_99.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_99.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_99.f_43[0] = 351.0324f;
					Local_99.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_99.f_43[1] = 3.5452f;
					Local_99.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_99.f_43[2] = 7.3237f;
					Local_99.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_99.f_43[3] = 332.0844f;
					Local_99.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_99.f_148[0] = 2.6416f;
					Local_99.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_99.f_148[1] = 171.8638f;
					Local_99.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_99.f_148[2] = 257.0332f;
					Local_99.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_99.f_148[3] = 91.7869f;
					Local_99.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_99.f_148[4] = 4.2016f;
					Local_99.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_99.f_148[5] = 339.729f;
					Local_99.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_99.f_148[6] = 359.2033f;
					Local_99.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_99.f_148[7] = 333.6298f;
					Local_99.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_99.f_148[8] = 73.2788f;
					Local_99.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_99.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_99.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_99.f_43[0] = 42.1535f;
					Local_99.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_99.f_43[1] = 315.0261f;
					Local_99.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_99.f_43[2] = 1.2527f;
					Local_99.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_99.f_43[3] = 1.9403f;
					Local_99.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_99.f_148[0] = 352.9674f;
					Local_99.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_99.f_148[1] = 88.8285f;
					Local_99.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_99.f_148[2] = 177.2297f;
					Local_99.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_99.f_148[3] = 273.1487f;
					Local_99.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_99.f_148[4] = 225.394f;
					Local_99.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_99.f_148[5] = 175.5423f;
					Local_99.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_99.f_148[6] = 191.1842f;
					Local_99.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_99.f_148[7] = 269.6831f;
					Local_99.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_99.f_148[8] = 29.4203f;
					Local_99.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_99.f_148[9] = 287.677f;
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
	
	if (Local_99.f_255 != -1)
	{
		return Local_99.f_255;
	}
	if (Local_99.f_278 == 0)
	{
		return ((4 * Global_262145.f_8655) + Global_262145.f_8656);
	}
	iVar2 = func_93();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_99.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_99.f_278)
			{
				iVar0 = (iVar0 + ((Local_99.f_291[iVar1] * iVar4) + Local_99.f_305[iVar1]));
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
			if (Local_99.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_99.f_27 == joaat("rhino"))
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
			if (Local_99.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_99.f_27 == joaat("hydra"))
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
			if (func_685())
			{
				iVar0 = Global_262145.f_9824;
			}
			else
			{
				iVar0 = Global_262145.f_9545;
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
			if (func_685())
			{
				iVar0 = Global_262145.f_9825;
			}
			else
			{
				iVar0 = Global_262145.f_9546;
			}
			break;
		
		case 5:
			if (func_685())
			{
				iVar0 = Global_262145.f_9826;
			}
			else
			{
				iVar0 = Global_262145.f_9547;
			}
			break;
		
		case 4:
			if (func_685())
			{
				iVar0 = Global_262145.f_9823;
			}
			else
			{
				iVar0 = Global_262145.f_9544;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_685())
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
	Local_99.f_252 = 0;
	Local_99.f_302 = 0;
	Local_99.f_317 = 0;
	Local_99.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_99.f_48[iVar0]))
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
	
	iVar0 = Local_99.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_99.f_280[iVar0];
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
		if (func_104(Local_99.f_73[iVar1]))
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
	
	if (Local_99.f_318 == 0 || Local_99.f_318 == func_39())
	{
		if (func_93() == 2 || func_93() == 5)
		{
			return 0;
		}
	}
	if (func_93() == 3 || func_93() == 4)
	{
		if (Local_99.f_317 >= func_38())
		{
			iVar0 = Local_99.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_99.f_280[iVar0];
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
	else if (Local_99.f_317 == 2)
	{
		iVar0 = Local_99.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_99.f_280[iVar0];
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
	if (Local_99.f_318 == func_39())
	{
		return 0;
	}
	if (Local_99.f_318 == func_68())
	{
		return 0;
	}
	if (func_93() == 1)
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(Local_99.f_48[(20 + iParam0)]))
	{
		if (func_67(Local_99.f_239) && unk_0x420841F5621E7397(0, 1, 0, 0))
		{
			if (func_65(&iVar3))
			{
				if (func_55(Local_99.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_99.f_48[(20 + iParam0)]), 22, Local_99.f_239, Local_99.f_117[iVar3 /*3*/], Local_99.f_148[iVar3], 1, 1, 1))
					{
						unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), iLocal_1521);
						unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1, 0);
						unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0xFC58A524C1CF0304(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_53());
						unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179(fVar6));
						unk_0x54753279989302A7(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1);
						unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 2);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 0, 1);
						unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1);
						unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1);
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 42, 1);
						unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
						unk_0x84B1D0A0FE1C520D(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1);
						unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1);
						unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 1);
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0xC6FE0F623405BFA8(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = unk_0xF2DB717A73826179((fVar5 * unk_0xBBDA792448DB5A89(iVar4)));
						unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_48[(20 + iParam0)]), iVar4);
						iVar7 = (20 + iParam0);
						if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar7)], func_85(iVar7)))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_272[func_86(iVar7)]), func_85(iVar7));
						}
						Local_99.f_247++;
						Local_99.f_317++;
						Local_99.f_250++;
						Local_99.f_318++;
						func_101(&(Local_99.f_414[iVar7 /*2*/]));
						func_19(&(Local_99.f_414[iVar7 /*2*/]), 0, 0);
						if (func_21(&(Local_99.f_364[iVar7 /*2*/])))
						{
							func_101(&(Local_99.f_364[iVar7 /*2*/]));
						}
						func_19(&(Local_3651[iVar3 /*2*/]), 0, 0);
						unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_48[iVar7]), 1, iLocal_1520);
					}
				}
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_99.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_685())
	{
		return Global_262145.f_9812;
	}
	return Global_262145.f_9533;
}

float func_53()
{
	if (func_685())
	{
		return Global_262145.f_9814;
	}
	return Global_262145.f_9535;
}

int func_54(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	iVar0 = unk_0xF8418B3B87CFCCBF(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x9ED2AEF3CEBC2436(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam9);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam7)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_59(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
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
	Global_2404993.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_782(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_58(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
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
		if (func_782(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_59(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_782(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_60(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_58(iVar1), Param0, 1) < fParam3)
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
	if (func_64(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_63(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_61(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (!iVar0 == func_26())
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
	if (iParam0 != func_26())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_26();
}

struct<13> func_63(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_63(iParam0) };
		Global_2471207 = { func_63(iParam1) };
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

int func_65(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 10);
	if (!func_66(Local_99.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_21(&(Local_3651[iVar0 /*2*/])) || (func_21(&(Local_3651[iVar0 /*2*/])) && func_18(&(Local_3651[iVar0 /*2*/]), 10000, 0)))
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_279 == 0)
	{
		iVar0 = Local_99.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_99.f_279)
		{
			iVar0 = (iVar0 + Local_99.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_69()
{
	int iVar0;
	int iVar1;
	
	switch (Local_99.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_99.f_305[iVar0]);
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
	if (Local_99.f_242 < iVar0)
	{
	}
	if (Local_99.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_93() > 1)
	{
		iVar1 = func_83();
		if (Local_99.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_67(Local_99.f_240) && func_67(Local_99.f_239))
	{
		if (func_71(iParam0))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_245, iParam0))
			{
				Local_99.f_249++;
				Local_99.f_251++;
				Local_99.f_252++;
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_245), iParam0);
				if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 19))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0x420841F5621E7397(4, 1, 0, 0))
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
	
	if (func_104(Local_99.f_73[iParam0]) && unk_0x08BA6DD398CA197C(Local_99.f_245, iParam0))
	{
		if (func_76(Local_99.f_73[iParam0]))
		{
			if (Local_99.f_116 <= 0)
			{
				if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_99.f_116 = 2;
				}
				else
				{
					Local_99.f_116 = unk_0x8EF0E5E933BE561D(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0])) + 1;
					if (Local_99.f_116 > 4)
					{
						Local_99.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_99.f_116)
			{
				if (!unk_0x0E091C9F3918F674(Local_99.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_67(Local_99.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_75(&(Local_99.f_48[(iParam0 * 4 + iVar6)]), Local_99.f_73[iParam0], 22, Local_99.f_239, iVar4, 1, 1, 1))
						{
							unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), iLocal_1521);
							unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0xFC58A524C1CF0304(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_74())
							{
								unk_0xFC58A524C1CF0304(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0xFC58A524C1CF0304(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
							unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0x54753279989302A7(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
							unk_0x84B1D0A0FE1C520D(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0x181C1956DD1F0598(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x9E177D12CEEF2332(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x4C79AE263CECDBFE(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x089391A6493B0105(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_73());
									unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
									unk_0x69C55299AED882A7(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0xD38FBE9CB8D1BC3F(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_9797;
								uVar1 = Global_262145.f_9798;
								uVar2 = Global_262145.f_9799;
								uVar3 = Global_262145.f_9800;
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0x1E3C80E7C4B8041B(unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]))))
							{
								unk_0x089391A6493B0105(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_73());
								unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
								unk_0x69C55299AED882A7(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_9797;
								uVar1 = Global_262145.f_9798;
								uVar2 = Global_262145.f_9799;
								uVar3 = Global_262145.f_9800;
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xB1F3E0B056AE92FB(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar7)], func_85(iVar7)))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_99.f_272[func_86(iVar7)]), func_85(iVar7));
							}
							unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xB77EBFE57674ED21(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1520);
							Local_99.f_250++;
							func_101(&(Local_99.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_19(&(Local_99.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_21(&(Local_99.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_101(&(Local_99.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_99.f_116)
			{
				if (!unk_0x0E091C9F3918F674(Local_99.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_99.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_48[(iParam0 * 4 + iVar6)]), unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0])))
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
	if (func_685())
	{
		return Global_262145.f_9815;
	}
	return Global_262145.f_9536;
}

int func_74()
{
	if (unk_0x08BA6DD398CA197C(unk_0xB5BF1B58C833F7A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_75(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(uParam1))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x564EAE6038A81C07(*uParam0), iParam7);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x564EAE6038A81C07(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		unk_0xDC64FA270C733B30(uParam0);
		return unk_0xB480350E4250D92A(uParam0);
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
	Local_99.f_240 = func_43(iVar0);
	if (!unk_0x0E091C9F3918F674(Local_99.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_99.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0x0E091C9F3918F674(Local_99.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_67(Local_99.f_240) && !unk_0x08BA6DD398CA197C(Local_99.f_245, iParam0))
		{
			fVar10 = 300f;
			if (unk_0xFC4346F9DE2AB4AE(Local_99.f_240) || unk_0x1E3C80E7C4B8041B(Local_99.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (unk_0x1E3C80E7C4B8041B(Local_99.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_99.f_242)
			{
				if (func_82(iVar11))
				{
					func_81(Local_99.f_240, iVar11, &Var12, &uVar15);
					if (!func_66(Var12, 0f, 0f, 0f, 0))
					{
						if (func_55(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_7(&(Local_99.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_99.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (unk_0xFC4346F9DE2AB4AE(Local_99.f_240) || unk_0x1E3C80E7C4B8041B(Local_99.f_240))
				{
					iVar16 = 0;
				}
				if (func_80(iParam0))
				{
					if (func_79(&(Local_99.f_73[iParam0]), Local_99.f_240, Var4, uVar7, 1, 1, 1, 0, iVar16, 1, 0))
					{
						unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 2);
						unk_0x1B640269845E999D(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1);
						unk_0x483A8C64905D06CC(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0, 0);
						unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 2);
						unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1, 1, 0);
						unk_0xCF3E72E81E9E1684(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0);
						if (unk_0xFC4346F9DE2AB4AE(Local_99.f_240))
						{
							unk_0xE88D5F6F072B64A7(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]));
							unk_0x694EF7CD95D5BD27(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1);
							unk_0x64EB89F75844C12B(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]));
							unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0);
						}
						else if (unk_0x1E3C80E7C4B8041B(Local_99.f_240))
						{
							unk_0x1682BCC816B3B035(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 3);
							unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0);
							unk_0x694EF7CD95D5BD27(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1);
							unk_0x64EB89F75844C12B(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]));
							unk_0xF1F2951FCA900FD0(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 30f);
							unk_0xC8C47F9570274CAF(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1);
							unk_0xDFC64B38BF018FAA(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0xA082D4AC00BC651A(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
						}
						else
						{
							unk_0xEDA527A4943E849D(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1);
						}
						if (func_93() == 5)
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_78());
							unk_0xA082D4AC00BC651A(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0x63F91492C8440A2E(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0xFE9791BE61B48751(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), fVar1);
							unk_0x63CAEF48CD3CA460(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), fVar1);
							unk_0xA0BCF2878D04DC73(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), fVar1);
							unk_0x39C4DA429D9174C5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x122553702278DB51(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), fVar1);
							unk_0xF5D68F89E8CC3F1D(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), fVar1);
						}
						if (func_21(&(Local_99.f_336[iParam0 /*2*/])))
						{
							func_101(&(Local_99.f_336[iParam0 /*2*/]));
						}
						unk_0x09C86C0C5CA26B1E(&(Local_99.f_253), iParam0);
						unk_0x88B0F0DC270164B7(&(Local_99.f_245), iParam0);
						unk_0xC5B26F8B749502D2(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 1, iLocal_1520);
						if (unk_0x08BA6DD398CA197C(Local_99.f_271, iParam0))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_271), iParam0);
						}
						if (unk_0x08BA6DD398CA197C(Local_99.f_303, iParam0))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_303), iParam0);
						}
						if (Local_99.f_240 == joaat("hydra") || Local_99.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_99.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_78()
{
	if (func_685())
	{
		return Global_262145.f_9813;
	}
	return Global_262145.f_9534;
}

int func_79(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
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
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			if (unk_0x08BA6DD398CA197C(Local_733[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
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
	
	bVar0 = (unk_0x1E3C80E7C4B8041B(iParam0) || unk_0xFC4346F9DE2AB4AE(iParam0));
	switch (Local_99.f_27)
	{
		case joaat("rhino"):
			if (!func_66(Local_99.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_99.f_159[iParam1 /*3*/] };
				*uParam3 = Local_99.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_66(Local_99.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_99.f_159[iParam1 /*3*/] };
				*uParam3 = Local_99.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_99.f_29)
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
			switch (Local_99.f_29)
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
			switch (Local_99.f_29)
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
	if (Local_99.f_228[iParam0] > 0)
	{
		if (!func_21(&(Local_99.f_207[iParam0 /*2*/])))
		{
			func_19(&(Local_99.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_18(&(Local_99.f_207[iParam0 /*2*/]), Local_99.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_21(&(Local_99.f_186[iParam0 /*2*/])))
	{
		if (!func_18(&(Local_99.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_83()
{
	return Local_99.f_291[Local_99.f_279];
}

void func_84(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 434;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iParam1);
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
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
		bVar0 = true;
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_1))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_7))
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_7))
		{
			if (unk_0x86998240179B9048(uParam0->f_7))
			{
				unk_0x2E0880CA20A96DBE(uParam0->f_7, 0);
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
	if (Local_99.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iParam0)], func_85(iParam0)))
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
	
	if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0]), 0);
	if (unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_99.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_99.f_27 == joaat("hydra"))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_271, iParam0))
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
	
	Var0.f_0 = 431;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iParam1);
	}
}

int func_93()
{
	return Local_99.f_280[Local_99.f_279];
}

void func_94(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 440;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iParam0);
	}
}

int func_95(int iParam0)
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
			if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0))
			{
				if (unk_0xF78BA9E6CC3CD891(iVar2, unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x4188FA32E81897F1(iVar2, unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), &uVar0))
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
	
	Var0.f_0 = 439;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iParam0);
	}
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]));
	if (unk_0x1E3C80E7C4B8041B(iVar0) || unk_0xFC4346F9DE2AB4AE(iVar0))
	{
		return !unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0);
	}
	return !unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iParam0]), 0);
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	switch (Local_99.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_99.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_99.f_291[iVar0]);
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
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_782(iVar2, 0, 0))
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

int func_100()
{
	if (func_685())
	{
		return Global_262145.f_9806;
	}
	return Global_262145.f_9530;
}

void func_101(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_102(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
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
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_782(iVar2, 1, 0))
		{
			if (!unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iVar2), iParam0, 0))
			{
				if (unk_0x10B1B072E9514664(iVar2) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) || !bParam2)
				{
					if (iVar2 != unk_0x0C1D3C552325765B() || iParam1)
					{
						unk_0x88B0F0DC270164B7(&uVar0, iVar1);
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_105(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_105(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
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
	
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 20))
	{
		return;
	}
	if (!func_21(&uLocal_3695))
	{
		func_19(&uLocal_3695, 0, 0);
		return;
	}
	if (!func_18(&uLocal_3695, 5000, 0))
	{
		return;
	}
	iVar0 = func_107();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_24(&(Local_99.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0x88B0F0DC270164B7(&(Local_99.f_3), 20);
}

int func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_99.f_12 != 0)
	{
		return Local_99.f_12;
	}
	if (!func_685())
	{
		Local_99.f_12 = 1;
		return Local_99.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar2))
		{
			if (!func_15(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_109())
	{
		Local_99.f_12 = 2;
	}
	else if (iVar1 < func_108())
	{
		Local_99.f_12 = 3;
	}
	else
	{
		Local_99.f_12 = 4;
	}
	return Local_99.f_12;
}

int func_108()
{
	return Global_262145.f_9555;
}

int func_109()
{
	return Global_262145.f_9554;
}

void func_110()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
		{
			func_116(iVar0);
			func_115(iVar0, Local_99.f_256[iVar0], Local_99.f_22[iVar0]);
		}
		else if (Local_99.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
	func_114();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
			func_113(iVar0);
			if (Local_733[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_733[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_733[iVar0 /*18*/].f_9;
					func_112(uVar1, Local_733[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_112(-1, -1, iVar2);
			}
		}
		else if (Local_99.f_465[iVar0 /*4*/].f_1 != -1)
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
				if (Local_99.f_465[iVar1 /*4*/].f_1 > Local_99.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_99.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_99.f_465[iVar1 /*4*/];
					uVar4 = Local_99.f_465[iVar1 /*4*/].f_2;
					Local_99.f_465[iVar1 /*4*/].f_1 = Local_99.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_99.f_465[iVar1 /*4*/] = Local_99.f_465[(iVar1 - 1) /*4*/];
					Local_99.f_465[iVar1 /*4*/].f_2 = Local_99.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_99.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_99.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_99.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	Local_99.f_465[iParam2 /*4*/] = iParam0;
	Local_99.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_99.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_113(int iParam0)
{
	Local_99.f_465[iParam0 /*4*/] = -1;
	Local_99.f_465[iParam0 /*4*/].f_2 = -1;
	Local_99.f_465[iParam0 /*4*/].f_1 = -1;
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
				if (Local_99.f_594[iVar1 /*4*/].f_1 > Local_99.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_99.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_99.f_594[iVar1 /*4*/];
					uVar4 = Local_99.f_594[iVar1 /*4*/].f_2;
					Local_99.f_594[iVar1 /*4*/].f_1 = Local_99.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_99.f_594[iVar1 /*4*/] = Local_99.f_594[(iVar1 - 1) /*4*/];
					Local_99.f_594[iVar1 /*4*/].f_2 = Local_99.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_99.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_99.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_99.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	Local_99.f_594[iParam0 /*4*/] = iParam0;
	Local_99.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_99.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_116(int iParam0)
{
	Local_99.f_594[iParam0 /*4*/] = -1;
	Local_99.f_594[iParam0 /*4*/].f_1 = -1;
	Local_99.f_594[iParam0 /*4*/].f_2 = -1;
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
			func_101(&(Local_99.f_5));
			return 0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_13, iVar1))
		{
			func_101(&(Local_99.f_5));
			return 0;
		}
		else if (func_4(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_101(&(Local_99.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_21(&(Local_99.f_5)))
	{
		func_19(&(Local_99.f_5), 0, 0);
	}
	else if (func_18(&(Local_99.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	if (func_104(Local_99.f_7[iParam0]))
	{
		if (unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), -1, 0) != 0)
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
	
	if (!func_685())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
		{
			if (func_104(Local_99.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_99.f_12)
	{
		Local_99.f_12 = iVar1;
	}
	if (Local_99.f_12 <= 1)
	{
		unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 8);
		if (!func_104(Local_99.f_7[0]))
		{
			if (func_104(Local_99.f_7[iVar2]))
			{
				func_24(&(Local_99.f_7[0]));
				Local_99.f_7[0] = Local_99.f_7[iVar2];
			}
		}
	}
}

void func_120()
{
	bool bVar0;
	
	if (!func_685())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[0]))
		{
			if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_99.f_15 != false;
			}
			else
			{
				bVar0 = Local_99.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x08BA6DD398CA197C(Local_99.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_99.f_413 == -1)
		{
			Local_99.f_413 = func_122();
		}
		if (!func_21(&(Local_99.f_326)))
		{
			func_19(&(Local_99.f_326), 0, 0);
		}
		else if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 4))
		{
			if ((Local_99.f_413 - func_121(&(Local_99.f_326), 0, 0)) < 0)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_3), 4);
			}
		}
	}
	else if (func_21(&(Local_99.f_326)))
	{
		func_101(&(Local_99.f_326));
		Local_99.f_413 = (Local_99.f_413 - func_121(&(Local_99.f_326), 0, 0));
	}
}

int func_121(var uParam0, bool bParam1, bool bParam2)
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

var func_122()
{
	if (func_685())
	{
		return Global_262145.f_9816;
	}
	return Global_262145.f_9537;
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
		iLocal_1523[iVar0] = 0;
		iLocal_728[iVar0] = -2;
		iLocal_1528[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_99.f_0 != 4)
	{
		iLocal_1318 = 0;
		while (iLocal_1318 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iLocal_1318)))
			{
				iVar7 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iLocal_1318));
				if (!func_15(iVar7, 0))
				{
					if (Local_733[iLocal_1318 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_130(iLocal_1318, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_129(iLocal_1318, iVar0);
						iVar0++;
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
					{
						if (!unk_0x08BA6DD398CA197C(Local_733[iLocal_1318 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_128(iLocal_1318, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0x08BA6DD398CA197C(Local_733[iLocal_1318 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_126(iLocal_1318, iVar7);
					if (func_782(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_99.f_17[iVar0] == func_26())
							{
								if (unk_0x08BA6DD398CA197C(Local_733[iLocal_1318 /*18*/].f_2, (0 + iVar0)))
								{
									Local_99.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_99.f_17[iVar0] == iVar7 && Local_99.f_241 == 0)
							{
								if (!unk_0x08BA6DD398CA197C(Local_733[iLocal_1318 /*18*/].f_2, (0 + iVar0)))
								{
									Local_99.f_17[iVar0] = func_26();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1318++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_13, iVar0))
		{
			if (iLocal_1523[iVar0] == func_125() && func_118(iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_13), iVar0);
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_14, iVar0))
			{
				if (iLocal_1523[iVar0] >= 1 && func_118(iVar0))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_14), iVar0);
				}
			}
			else if (iLocal_1523[iVar0] == 0 || !func_118(iVar0))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_14, iVar0))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_99.f_14), iVar0);
					if (iLocal_1523[iVar0] == 0)
					{
						if (Local_99.f_241 >= 1)
						{
							if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
							{
								func_24(&(Local_99.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_15, iVar0) && func_118(iVar0))
			{
				if (iLocal_1523[iVar0] >= 2)
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_15), iVar0);
				}
			}
			else if (iLocal_1523[iVar0] <= 1 || !func_118(iVar0))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_15, iVar0))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_99.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1523[iVar0] < func_125() || !func_118(iVar0))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_99.f_13), iVar0);
		}
		if (Local_99.f_266[iVar0] != iLocal_1523[iVar0])
		{
			Local_99.f_266[iVar0] = iLocal_1523[iVar0];
			if (Local_99.f_241 == 1)
			{
				if (Local_99.f_266[iVar0] == 0)
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_616, iVar0))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_616), iVar0);
					}
				}
			}
		}
		if (Local_99.f_241 == 0)
		{
			if (func_685())
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
				{
					iVar3 = unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]));
					if (iLocal_1523[iVar0] >= func_124(iVar3) && func_118(iVar0))
					{
						iLocal_1528[iVar0] = 1;
					}
				}
			}
		}
		if (Local_99.f_241 == 1)
		{
			if (Local_99.f_256[iVar0] != iLocal_728[iVar0])
			{
				if (iLocal_728[iVar0] >= 0)
				{
					if (iLocal_728[iVar0] > Local_99.f_256[iVar0])
					{
						Local_99.f_256[iVar0] = iLocal_728[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_99.f_256[iVar0] - iLocal_728[iVar0]);
						if (Local_99.f_261[iVar0] != iVar8)
						{
							Local_99.f_261[iVar0] = iVar8;
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
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_99.f_241 == 0)
	{
		if (func_685())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1528[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_3), 9);
			}
		}
	}
	if (Local_99.f_241 == 0)
	{
		if (!func_21(&(Local_99.f_360)))
		{
			func_19(&(Local_99.f_360), 0, 0);
		}
		else if (func_18(&(Local_99.f_360), 5000, 0))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
			{
				if (func_685())
				{
					if (Local_99.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 14);
					}
				}
				else if (Local_99.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_99.f_614)
	{
		Local_99.f_614 = iVar1;
	}
	else
	{
		Local_99.f_613 = (Local_99.f_614 - iVar1);
	}
	if (iVar2 > Local_99.f_615)
	{
		Local_99.f_615 = iVar2;
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
	return Local_99.f_28;
}

void func_126(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(Local_99.f_16, iParam0))
	{
		if (unk_0x08BA6DD398CA197C(Local_733[iParam0 /*18*/].f_2, 12))
		{
			func_127(iParam1, 1);
			unk_0x88B0F0DC270164B7(&(Local_99.f_16), iParam0);
		}
		else if (Local_99.f_241 >= 1)
		{
			if (Local_733[iParam0 /*18*/].f_1 == 0)
			{
				func_127(iParam1, 1);
				unk_0x88B0F0DC270164B7(&(Local_99.f_16), iParam0);
			}
			else if (Local_733[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar1]))
					{
						if (func_104(Local_99.f_7[iVar1]))
						{
							if (unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iParam1), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), 0))
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
					unk_0x88B0F0DC270164B7(&(Local_99.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_99.f_241 < 1)
	{
		if (!unk_0x08BA6DD398CA197C(Local_733[iParam0 /*18*/].f_2, 12))
		{
			func_127(iParam1, 0);
			unk_0x09C86C0C5CA26B1E(&(Local_99.f_16), iParam0);
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
		{
			unk_0x93456C539FCB41E2(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_128(int iParam0, int iParam1)
{
	if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iParam1)], func_85(iParam1)))
	{
		if (unk_0x08BA6DD398CA197C(Local_733[iParam0 /*18*/].f_3[func_86(iParam1)], func_85(iParam1)))
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_272[func_86(iParam1)]), func_85(iParam1));
			if (Local_733[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iParam1]))
			{
				if (!func_31(Local_99.f_48[iParam1]))
				{
					if (!func_89(iParam1))
					{
						unk_0x09C86C0C5CA26B1E(&(Local_99.f_272[func_86(iParam1)]), func_85(iParam1));
					}
					else if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_272[func_86(iParam1)]), func_85(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_129(int iParam0, int iParam1)
{
	if (!unk_0x08BA6DD398CA197C(Local_99.f_271, iParam1))
	{
		if (unk_0x08BA6DD398CA197C(Local_733[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_271), iParam1);
			if (Local_733[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x08BA6DD398CA197C(Local_99.f_303, iParam1))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_253, iParam1))
				{
					Local_99.f_251 = (Local_99.f_251 - 1);
					if (func_93() > 1)
					{
						if (Local_99.f_252 > 0)
						{
							Local_99.f_302++;
							func_92(iParam1, func_99(1));
						}
					}
					unk_0x88B0F0DC270164B7(&(Local_99.f_253), iParam1);
				}
				if (func_21(&(Local_99.f_336[iParam1 /*2*/])))
				{
					func_101(&(Local_99.f_336[iParam1 /*2*/]));
				}
				func_24(&(Local_99.f_73[iParam1]));
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_303), iParam1);
			}
		}
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x08BA6DD398CA197C(Local_733[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1523[iParam1]++;
		if (iLocal_728[iParam1] < 0)
		{
			if (Local_733[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_99.f_261[iParam1] > 0)
				{
					iLocal_728[iParam1] = Local_99.f_261[iParam1];
				}
				else
				{
					iLocal_728[iParam1] = 0;
				}
			}
		}
		iLocal_728[iParam1] = (iLocal_728[iParam1] + Local_733[iParam0 /*18*/].f_8);
		if (Local_99.f_241 >= 1)
		{
			if (Local_99.f_22[iParam1] == func_26())
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iParam1]))
				{
					if (func_104(Local_99.f_7[iParam1]))
					{
						iVar1 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (unk_0x54F0AEFB11EA090A(iVar1))
							{
								iVar0 = unk_0xA43666ACD375E339(iVar1);
								if (iVar0 == iParam2)
								{
									Local_99.f_22[iParam1] = iParam2;
									func_110();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_319, iParam1))
		{
			if (Local_733[iParam0 /*18*/].f_10 > -1)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_319), iParam1);
				func_19(&(Local_99.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_99.f_22[iParam1] != func_26())
	{
		if (!unk_0xCB129F9A01D14082(Local_99.f_22[iParam1]))
		{
			iVar0 = func_131(iParam1, 1);
			if (iVar0 != func_26())
			{
				Local_99.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_99.f_22[iParam1] = func_26();
			}
		}
		else if (func_15(Local_99.f_22[iParam1], 0))
		{
			Local_99.f_22[iParam1] = func_26();
			func_110();
		}
		else
		{
			iVar1 = unk_0x21F191D9AFF98B5E(Local_99.f_22[iParam1]);
			if (!unk_0xEB361B4BD195A4D3(iVar1))
			{
				if (func_104(Local_99.f_7[iParam1]))
				{
					if (!unk_0x1FD87E888EB4FC00(iVar1, unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam1]), 0))
					{
						iVar0 = func_131(iParam1, 1);
						if (iVar0 != func_26())
						{
							Local_99.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_99.f_22[iParam1] = func_26();
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
	
	iVar0 = func_26();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar3)))
			{
				if (iVar0 == func_26())
				{
					if (Local_733[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0x08BA6DD398CA197C(Local_733[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar3));
							}
							else
							{
								iVar1 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar3));
								if (func_104(Local_99.f_7[iParam0]))
								{
									iVar2 = unk_0x21F191D9AFF98B5E(iVar1);
									if (!unk_0xEB361B4BD195A4D3(iVar2))
									{
										if (unk_0x1FD87E888EB4FC00(iVar2, unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 0))
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
	
	Var0.f_0 = 427;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam0;
	iVar3 = func_133(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_782(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_15(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
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
	if (func_67(Local_99.f_27))
	{
		if (func_136())
		{
			unk_0x2C07692AA3545079(Local_99.f_27);
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
	while (iVar0 < Local_99.f_12)
	{
		if (!unk_0x0E091C9F3918F674(Local_99.f_7[iVar0]))
		{
			if (func_67(Local_99.f_27))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_244, iVar0))
				{
					unk_0x0B17BC5D018E224B(Local_99.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0x88B0F0DC270164B7(&(Local_99.f_244), iVar0);
				}
				if (func_79(&(Local_99.f_7[iVar0]), Local_99.f_27, Local_99.f_30[iVar0 /*3*/], Local_99.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0))
				{
					unk_0x93399EEBD0090AD6(unk_0x63CE7A3848B84093(Local_99.f_7[iVar0]), 1, 1);
					unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
					unk_0xC00E0AC91B7F5055(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
					unk_0xF369791429FC3437(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
					unk_0x483A8C64905D06CC(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0, 0);
					unk_0xBB21B5C3111E5F85(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
					unk_0x694EF7CD95D5BD27(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
					unk_0x64EB89F75844C12B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]));
					unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1, 1, 0);
					unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
					unk_0xCF3E72E81E9E1684(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
					if (unk_0xFC4346F9DE2AB4AE(Local_99.f_27) || unk_0x1E3C80E7C4B8041B(Local_99.f_27))
					{
						unk_0x39C4DA429D9174C5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
						if (unk_0xFC4346F9DE2AB4AE(Local_99.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_139());
						}
						else if (unk_0x1E3C80E7C4B8041B(Local_99.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						unk_0xA082D4AC00BC651A(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x63F91492C8440A2E(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xFE9791BE61B48751(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
						unk_0x63CAEF48CD3CA460(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
						unk_0xA0BCF2878D04DC73(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
						if (unk_0x1E3C80E7C4B8041B(Local_99.f_27))
						{
							unk_0xC8C47F9570274CAF(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
						}
						if (unk_0xFC4346F9DE2AB4AE(Local_99.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x122553702278DB51(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
							unk_0xF5D68F89E8CC3F1D(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xFC4346F9DE2AB4AE(Local_99.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_139());
						}
						else if (unk_0x1E3C80E7C4B8041B(Local_99.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						unk_0xA082D4AC00BC651A(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x63F91492C8440A2E(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0xFE9791BE61B48751(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
						unk_0x63CAEF48CD3CA460(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
						unk_0xA0BCF2878D04DC73(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), fVar1);
					}
					unk_0x30AACBA8A7A124E3(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
					if (Local_99.f_27 == joaat("savage"))
					{
					}
					if (unk_0x71F81D3603710A43("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x71F81D3603710A43("MPBitset", 3))
					{
						if (unk_0x4184E6D274FCBFF1(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x96FB4818617F93B9(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), "MPBitset");
						}
						unk_0x88B0F0DC270164B7(&iVar2, 10);
						unk_0x88B0F0DC270164B7(&iVar2, 15);
						unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0xB243C55E970DC491(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0, iLocal_1520);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0xB243C55E970DC491(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0, Global_1574240[iVar3]);
						iVar3++;
					}
					unk_0xEED18EBEE3E5AA82(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0, 0);
					unk_0x18710E6BAF38BF55(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
					unk_0x39800A40136ECF37(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1);
					unk_0xE5D4D5071B67B5E9(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), false);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_99.f_12)
	{
		if (!unk_0x0E091C9F3918F674(Local_99.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_137()
{
	if (func_685())
	{
		return Global_262145.f_9810;
	}
	return Global_262145.f_9550;
}

var func_138()
{
	if (func_685())
	{
		return Global_262145.f_9811;
	}
	return Global_262145.f_9551;
}

var func_139()
{
	if (func_685())
	{
		return Global_262145.f_9809;
	}
	return Global_262145.f_9549;
}

bool func_140()
{
	int iVar0;
	int iVar1;
	
	if (!func_21(&(Local_99.f_362)))
	{
		func_19(&(Local_99.f_362), 0, 0);
		return 0;
	}
	else if (!func_18(&(Local_99.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 10))
	{
		if (func_154(&iVar0))
		{
			if (iVar0 < func_153())
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_3), 10);
			}
			else
			{
				iVar1 = unk_0xB5BF1B58C833F7A9(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_9804) && !Global_262145.f_9802) || Global_262145.f_9803)
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 8);
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 10);
				}
				else
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 10);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 10))
	{
		if (Local_99.f_12 == 0)
		{
			func_107();
			return 0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 13))
		{
			if (func_149())
			{
				if (!func_147(129, Local_99.f_1, Local_99.f_2, 0))
				{
					if (func_141())
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_3), 13);
					}
					else
					{
						Local_99.f_29 = -1;
					}
				}
				else
				{
					Local_99.f_29 = -1;
				}
			}
		}
	}
	return unk_0x08BA6DD398CA197C(Local_99.f_3, 13);
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_107();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_142(Local_99.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_99.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
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
	
	if (Global_2420049.f_75.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2420049.f_75[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = unk_0x3BB8D1C5FAAB25B3(&(Global_2420049.f_75[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2420049.f_75.f_225)
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
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359719[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (unk_0x999A157665D69393(Var36, Var39, 1) < fParam3)
			{
				Var43 = { Global_2359719[iVar34 /*26*/].f_15 };
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
			return Global_794608.f_98389[iVar1 /*12*/].f_2;
		
		case 62:
			return Global_906487.f_18805[iVar1 /*12*/].f_2;
		
		default:
	}
	return iVar0;
}

int func_144(var uParam0)
{
	int iVar0;
	
	if (unk_0x509383441597090D(&(uParam0->f_3)))
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

int func_145(var uParam0)
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
		if (iVar0 < Global_262145.f_6893)
		{
			if (Global_2466504.f_148[iVar0 /*2*/] == iVar1 && Global_2466504.f_148[iVar0 /*2*/].f_1 == func_134(iParam0, iParam1, iParam2, iParam3))
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
	if (func_151(&(Local_99.f_27)))
	{
		if (Local_99.f_4)
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
	Global_1748041 = 1;
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 0))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 0);
		unk_0x88B0F0DC270164B7(&Global_1748042, 0);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 1))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 1);
		unk_0x88B0F0DC270164B7(&Global_1748042, 1);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 5))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 5);
		unk_0x88B0F0DC270164B7(&Global_1748042, 5);
	}
	if (unk_0x7B0208FFAEF67EF9(-355737150))
	{
		unk_0x6A7EBBBF8B647A25(-355737150, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-580979506))
	{
		unk_0x6A7EBBBF8B647A25(-580979506, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1426452475))
	{
		unk_0x6A7EBBBF8B647A25(-1426452475, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(745417724))
	{
		unk_0x6A7EBBBF8B647A25(745417724, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1305304906))
	{
		unk_0x6A7EBBBF8B647A25(-1305304906, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1543175077))
	{
		unk_0x6A7EBBBF8B647A25(-1543175077, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-811770997))
	{
		unk_0x6A7EBBBF8B647A25(-811770997, 0, 0, 0);
	}
}

int func_151(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_152(joaat("rhino")))
			{
				Local_99.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_152(joaat("hydra")))
			{
				Local_99.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_99.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_152(joaat("savage")))
			{
				Local_99.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_99.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_152(joaat("valkyrie")))
			{
				Local_99.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_152(joaat("buzzard")))
			{
				Local_99.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	if (!func_685())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9539;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9541;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9540;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9543;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9542;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9818;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9820;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9819;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9822;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9821;
				break;
			}
	}
	return 0;
}

int func_153()
{
	return Global_262145.f_9553;
}

int func_154(var uParam0)
{
	int iVar0;
	
	if (!func_21(&(Local_99.f_334)))
	{
		func_19(&(Local_99.f_334), 0, 0);
	}
	else if (func_18(&(Local_99.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
			{
				if (!func_15(unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0)), 0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_733[iVar0 /*18*/].f_2, 7))
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
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
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
		if (unk_0xD9E8CA806A80203D())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_157()
{
	struct<3> Var0;
	
	if (iLocal_3704 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iLocal_3704]))
		{
			if (unk_0xB480350E4250D92A(Local_99.f_7[iLocal_3704]))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iLocal_3704]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_24(&(Local_99.f_7[iLocal_3704]));
				}
			}
		}
	}
	iLocal_3704++;
	if (iLocal_3704 >= 4)
	{
		iLocal_3704 = 0;
	}
}

void func_158()
{
	if (func_15(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 1)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1311, 13))
		{
			unk_0x88B0F0DC270164B7(&iLocal_1311, 13);
			unk_0x9066E5B82BC6B02C(1, 0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1311, 13))
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				unk_0x9066E5B82BC6B02C(0, 0);
				unk_0x09C86C0C5CA26B1E(&iLocal_1311, 13);
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
	
	if (!func_15(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	if (func_395())
	{
		func_260(0);
	}
	iVar0 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
	{
		Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_26())
	{
		if (unk_0xCB129F9A01D14082(iVar0))
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar0))
			{
				uVar1 = unk_0x9259DE19D910276C(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_733[iVar2 /*18*/].f_17;
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
			func_161(Local_99.f_48[iVar0], &(Local_1327[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_161(Local_99.f_48[iVar0], &(Local_1327[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (unk_0x16833EFAA58E63DB(Local_1327[iVar0 /*8*/]))
		{
			unk_0x6F18BFEFE84565FF(Local_1327[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x9ABFD60B4E082992(Local_1327[iVar0 /*8*/], 1);
			}
		}
		if (unk_0x16833EFAA58E63DB(Local_1327[iVar0 /*8*/].f_1))
		{
			unk_0x6F18BFEFE84565FF(Local_1327[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x9ABFD60B4E082992(Local_1327[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_99.f_27 != joaat("hydra"))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar0)], func_85(iVar0)) || unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar0)], func_85(iVar0)))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar0]))
				{
					func_87(&(Local_1327[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0x08BA6DD398CA197C(Local_99.f_271, iVar1) || unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6, iVar1))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar0]))
				{
					func_87(&(Local_1327[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_161(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (func_163())
		{
			Global_2432628 = unk_0x0C1D3C552325765B();
		}
		if (bParam3)
		{
			func_162(unk_0x564EAE6038A81C07(uParam0), uParam1, 1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_162(unk_0x564EAE6038A81C07(uParam0), uParam1, -1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x16833EFAA58E63DB(*uParam1))
	{
		func_87(uParam1);
	}
}

int func_162(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4A0FB18E33FE5805();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0x86998240179B9048(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x2E0880CA20A96DBE(iParam0, 1);
			}
			else
			{
				unk_0x57C2F08BE587ABD2(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xE632D58AA6B26F2D(iParam0, iParam2);
			unk_0xB1EB57004481ED5D(iParam0, fParam6);
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0xC6458FBC206C61F2(iParam0, uParam4);
		unk_0x71CB3379ED1310DF(iParam0, uParam5);
		*uParam1 = unk_0x968B07E3B24F8761(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x77804F3DCBA01DB5(*uParam1, iParam8);
				}
				unk_0x940E74834C801A79("STRING");
				if (bParam10)
				{
					unk_0xDA35BDB37E728640(uParam7);
				}
				else
				{
					unk_0xBDE6EEC5F6BDC060(uParam7);
				}
				unk_0x61C3F79E9ECF289E(*uParam1);
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 2))
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!unk_0x509383441597090D(sParam7))
				{
					unk_0x940E74834C801A79("STRING");
					if (bParam10)
					{
						unk_0xDA35BDB37E728640(sParam7);
					}
					else
					{
						unk_0xBDE6EEC5F6BDC060(sParam7);
					}
					unk_0x61C3F79E9ECF289E(*uParam1);
				}
				unk_0x88B0F0DC270164B7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x165B5F1F7F703B2D(iParam0);
			if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 3))
			{
				if (unk_0x16833EFAA58E63DB(uParam1->f_1))
				{
					unk_0x420759DE4A6A9555(uParam1->f_1, 7);
					unk_0x88B0F0DC270164B7(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_6), 3);
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
	return Global_1315206;
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
	
	iVar2 = (func_34() - func_121(&(Local_99.f_332), 0, 0));
	if (iLocal_3650 == 0)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_1310, 26))
		{
			if ((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2))
			{
				iLocal_3650 = (func_34() - func_121(&(Local_99.f_332), 0, 0));
				iVar2 = iLocal_3650;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3650;
	}
	if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_685())
	{
		iVar0 = (((Local_99.f_256[0] + Local_99.f_256[1]) + Local_99.f_256[2]) + Local_99.f_256[3]);
	}
	else
	{
		iVar0 = Local_99.f_256[0];
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
	if (func_685())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = unk_0x81C85E54237F8A2E(Local_99.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_26())
			{
				if (unk_0xCB129F9A01D14082(iVar21))
				{
					sVar4[iVar1] = unk_0xCF66111B26743875(iVar21);
					iVar10[iVar1] = Local_99.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_99.f_594[iVar1 /*4*/];
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 == uVar15[iVar1])
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
		if ((func_34() - func_121(&(Local_99.f_332), 0, 0)) >= 0)
		{
			if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
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
		if (iVar0 > Local_99.f_255)
		{
			iVar0 = Local_99.f_255;
		}
		if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
		{
			func_179(unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), iVar0, iVar0, Local_99.f_255, iVar2, iVar3, 0, func_183());
		}
		else
		{
			func_165(iVar0, iVar0, Local_99.f_255, iVar2, iVar3, 0, func_183(), 1);
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
		func_171(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	func_170(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0);
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
		Global_1344178.f_1 = 1;
		func_167(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_167(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_168(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

int func_169(char* sParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
		Global_1344178.f_1 = 1;
		func_167(4, iVar0);
		Global_1344178.f_2929[iVar0] = iParam0;
		Global_1344178.f_2929.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1344178.f_2929.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1344178.f_2929.f_183[iVar0] = iParam3;
		Global_1344178.f_2929.f_216[iVar0] = iParam5;
		Global_1344178.f_2929.f_194[iVar0] = iParam4;
		Global_1344178.f_2929.f_227[iVar0] = iParam6;
		Global_1344178.f_2929.f_270[iVar0] = iParam7;
		Global_1344178.f_2929.f_281[iVar0] = iParam8;
		Global_1344178.f_2929.f_292[iVar0] = iParam9;
		Global_1344178.f_2929.f_303[iVar0] = iParam10;
		Global_1344178.f_2929.f_314[iVar0] = iParam11;
		Global_1344178.f_2929.f_325[iVar0] = iParam13;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x955B8C8F89CC3AC0()) && iParam12)
		{
			Global_1344178.f_941 = 1;
		}
	}
}

void func_171(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
		Global_1344178.f_1 = 1;
		func_167(6, iVar0);
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
		if (iParam15 == 4 && func_173())
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
			if (func_172())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_172()
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

int func_173()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	Global_2453276 = 1;
}

void func_175()
{
	Global_1344178.f_941 = 1;
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
		if (func_782(unk_0x0C1D3C552325765B(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_178()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 12);
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
		func_171(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_170(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0);
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
		func_171(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_181(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_171(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_181(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_171(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_181(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_171(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0);
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
	
	StringConCat(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_TEAM"), 64);
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
		func_171(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_171(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_171(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_171(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0);
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
	switch (func_185(unk_0x0C1D3C552325765B()))
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
	if (func_185(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

void func_186(int iParam0)
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

void func_187()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_1322[iVar0]))
		{
			unk_0x0B57C567D698C373(&(uLocal_1322[iVar0]));
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
		if (!unk_0x16833EFAA58E63DB(uLocal_1322[iVar0]))
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_13, iVar0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_733[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1322[iVar0] = unk_0x91B4D18C6AFDC14C(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]));
						unk_0x32479C670EB9962F(uLocal_1322[iVar0], 429);
						func_189(&(uLocal_1322[iVar0]), 29);
						if (func_685())
						{
							unk_0x6F18BFEFE84565FF(uLocal_1322[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0x6F18BFEFE84565FF(uLocal_1322[iVar0], "UW_BLIP");
						}
						unk_0x420759DE4A6A9555(uLocal_1322[iVar0], 9);
					}
					else if (unk_0x16833EFAA58E63DB(uLocal_1322[iVar0]))
					{
						unk_0x0B57C567D698C373(&(uLocal_1322[iVar0]));
					}
				}
				else if (unk_0x16833EFAA58E63DB(uLocal_1322[iVar0]))
				{
					unk_0x0B57C567D698C373(&(uLocal_1322[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_189(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_190(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_191()
{
	bool bVar0;
	
	bVar0 = func_252();
	if (bVar0)
	{
		if (Local_99.f_413 > -1)
		{
			if ((Local_99.f_413 - func_121(&(Local_99.f_326), 0, 0)) >= 0)
			{
				if (!func_195())
				{
					func_194((Local_99.f_413 - func_121(&(Local_99.f_326), 0, 0)));
					func_192((Local_99.f_413 - func_121(&(Local_99.f_326), 0, 0)), func_193(-1));
				}
			}
			else
			{
				if (!func_195())
				{
					func_192(0, func_193(-1));
				}
				if (unk_0xD9E8CA806A80203D())
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_3), 4);
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
	
	sVar0 = unk_0x367152330DB70D69();
	return "HUD_STARTING";
	if (unk_0x28C1B9853548BD8E(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_challenges"))
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
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_194(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x62E2FDDFDA7A731D())
	{
		Global_2482149.f_4601 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
		{
			unk_0xAB16AADE80707D47(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2482149.f_4601 = 0;
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 1);
		}
	}
}

bool func_195()
{
	bool bVar0;
	var uVar1;
	
	if (func_250(8))
	{
		bVar0 = true;
	}
	if (func_250(0))
	{
		bVar0 = true;
	}
	if (!func_242(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_202())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 9))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				uVar1 = unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5());
				if (!unk_0x1F1B2B6E500380C5(uVar1, 0))
				{
					func_200(0, -1);
					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 9))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 9);
	}
	if (Global_1738544)
	{
		bVar0 = true;
	}
	if (func_199(unk_0x0C1D3C552325765B()))
	{
		bVar0 = true;
	}
	if (func_198(unk_0x0C1D3C552325765B(), 2))
	{
		bVar0 = true;
	}
	if (func_196(unk_0x0C1D3C552325765B()))
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

bool func_197(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

bool func_198(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_199(int iParam0)
{
	if (!func_782(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

void func_200(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1588659)
		{
			if (!func_250(0) && !func_250(func_201(iParam1)))
			{
				Global_1588659 = 1;
			}
		}
	}
	else if (Global_1588659)
	{
		Global_1588659 = 0;
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
	if (func_198(unk_0x0C1D3C552325765B(), 21))
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
	if (func_240(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_239())
	{
		return 0;
	}
	if (func_238(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_237())
	{
		return 0;
	}
	if (func_219(unk_0x0C1D3C552325765B()) == 3)
	{
		return 0;
	}
	if (func_217(func_218()))
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_214(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_212())
	{
		return 0;
	}
	if (func_198(unk_0x0C1D3C552325765B(), 0) || func_198(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_198(unk_0x0C1D3C552325765B(), 12) || func_198(unk_0x0C1D3C552325765B(), 14)) || func_198(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_208(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		return 0;
	}
	if (func_207(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_199(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (func_203(unk_0x0C1D3C552325765B()) && Global_1588450.f_168)
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0)
{
	if (func_204(Global_1588660[iParam0 /*532*/].f_256.f_11))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
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

int func_205()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_206()
{
	return Global_91458.f_304 > 0;
}

bool func_207(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11);
}

int func_208(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
		if (func_211(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_209(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_782(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_210(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_210(int iParam0)
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

int func_211(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_782(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_210(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_212()
{
	if (func_213() == 0)
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	return Global_1312462.f_18;
}

bool func_214(int iParam0)
{
	return func_215(iParam0);
}

bool func_215(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_216()
{
	return Global_1315229;
}

int func_217(int iParam0)
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

int func_218()
{
	return Global_2432628.f_2198[0 /*72*/].f_1;
}

int func_219(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_236(iParam0) && !func_197(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_235(iParam0);
	bVar3 = func_234();
	uVar4 = func_225();
	if ((bVar1 && (func_224(iParam0) || func_223(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_222(iParam0)) && !func_220(iParam0)))
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

bool func_220(int iParam0)
{
	return func_221(iParam0, 19);
}

bool func_221(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_221(iParam0, 9);
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

int func_225()
{
	if ((func_221(unk_0x0C1D3C552325765B(), 21) || func_221(unk_0x0C1D3C552325765B(), 22)) || func_231())
	{
		return 1;
	}
	if (func_227())
	{
		func_226(22);
		return 1;
	}
	return 0;
}

void func_226(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_227()
{
	if (func_230(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_234() && !func_229()) || func_198(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_221(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_228(27);
		}
	}
	return 0;
}

void func_228(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

bool func_229()
{
	return Global_1312412.f_1;
}

int func_230(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_231()
{
	return func_232(286, -1);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_233(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

bool func_234()
{
	return Global_1312412;
}

bool func_235(int iParam0)
{
	return func_221(iParam0, 20);
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

bool func_237()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

int func_238(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_239()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_240(int iParam0)
{
	if (func_241(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_214(iParam0))
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

bool func_242(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6500 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_246(unk_0x0C1D3C552325765B(), 85))
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
		if (Global_262145.f_4874 == 1)
		{
			return 1;
		}
	}
	if (func_245() || func_244())
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
			if (func_243())
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
	return unk_0x08BA6DD398CA197C(Global_1573912[iVar1], iVar0);
}

int func_243()
{
	var uVar0;
	
	if (Global_1312442)
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1638, 23))
	{
		return 1;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_244())
	{
		return 1;
	}
	uVar0 = Global_1352331[func_233(-1)];
	if (unk_0x08BA6DD398CA197C(uVar0, 7))
	{
		unk_0x88B0F0DC270164B7(&(Global_2482149.f_1638), 23);
		return 1;
	}
	return 0;
}

bool func_244()
{
	return Global_1315217;
}

bool func_245()
{
	return Global_1315219;
}

bool func_246(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_249())
	{
		return 0;
	}
	if (func_248())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_247(iParam1);
	iVar1 = uVar0;
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_424, iVar1);
}

int func_247(int iParam0)
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

bool func_248()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_141, 3);
}

int func_249()
{
	if (Global_1312442)
	{
		return 1;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_244())
	{
		return 1;
	}
	return func_232(120, -1);
}

bool func_250(int iParam0)
{
	var uVar0;
	
	uVar0 = func_251(2460, -1, 0);
	return unk_0x08BA6DD398CA197C(uVar0, iParam0);
}

int func_251(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_233(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_252()
{
	bool bVar0;
	
	if (!func_685())
	{
		if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
	{
		if (func_107() == 2)
		{
			return 0;
		}
	}
	if (!func_685())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[0]))
		{
			if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_99.f_15 != false;
			}
			else
			{
				bVar0 = Local_99.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x08BA6DD398CA197C(Local_99.f_3, 9);
	}
	if (!func_15(unk_0x0C1D3C552325765B(), 0))
	{
		if (bVar0 && !func_195())
		{
			if (func_685())
			{
				if (!func_259("UW_ABTSC"))
				{
					func_253("UW_ABTSC", 0);
				}
			}
			else if (!func_259("UW_ABTS"))
			{
				func_253("UW_ABTS", 0);
			}
		}
		else if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
		{
			func_8();
		}
	}
	return bVar0;
}

void func_253(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_257(sParam0))
	{
		return;
	}
	func_9();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_256();
	func_255(bParam1);
	func_254();
}

void func_254()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_255(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_256()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

bool func_257(char* sParam0)
{
	if (!func_14())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_258(uParam0);
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_258(char* sParam0)
{
	if (!func_14())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_259(char* sParam0)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (!func_14())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x8BC27E98D5626ED8(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	return func_257(sParam0);
}

void func_260(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	bool bVar9;
	
	Var1 = { func_394() };
	StringCopy(&Var5, "UW_TM", 16);
	bVar9 = false;
	if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1536[iVar0 /*49*/] = -1;
			Local_1536[iVar0 /*49*/].f_1 = func_26();
			Local_1536[iVar0 /*49*/].f_9 = 0;
			Local_1536[iVar0 /*49*/].f_31 = -1;
			if (Local_99.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1536[iVar0 /*49*/].f_1 = Local_99.f_465[iVar0 /*4*/].f_2;
				Local_1536[iVar0 /*49*/].f_9 = Local_99.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_393())
			{
				if (Local_3105.f_103 != 129)
				{
					Local_3105.f_103 = 129;
				}
				else
				{
					func_200(1, 129);
				}
			}
		}
		else if (Local_3105.f_103 != 129)
		{
			Local_3105.f_103 = 129;
		}
		func_265(&Local_1536, &uLocal_1535, 23, &Local_3105, &uLocal_3214, -1, 0);
		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 1)
		{
			if (Local_1536[0 /*49*/].f_1 != unk_0x0C1D3C552325765B())
			{
				if (Local_99.f_465[0 /*4*/].f_1 > 0)
				{
					func_264();
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
			Local_1536[iVar0 /*49*/] = -1;
			Local_1536[iVar0 /*49*/].f_1 = func_26();
			Local_1536[iVar0 /*49*/].f_9 = 0;
			Local_1536[iVar0 /*49*/].f_31 = -1;
			if (Local_99.f_465[iVar0 /*4*/].f_1 > -1)
			{
				StringIntConCat(&Var5, Local_99.f_465[iVar0 /*4*/] + 1, 16);
				Local_1536[iVar0 /*49*/].f_39 = { Var5 };
				Local_1536[iVar0 /*49*/].f_1 = unk_0x81C85E54237F8A2E(Local_99.f_465[iVar0 /*4*/].f_2);
				StringCopy(&(Local_1536[iVar0 /*49*/].f_43), "", 16);
				Local_1536[iVar0 /*49*/].f_47 = Local_99.f_465[iVar0 /*4*/].f_1;
				Local_1536[iVar0 /*49*/].f_9 = Local_99.f_465[iVar0 /*4*/].f_1;
				Local_1536[iVar0 /*49*/].f_2 = Local_99.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_261();
		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 1)
		{
			if (Local_99.f_594[0 /*4*/] > 0)
			{
				if (Local_99.f_594[0 /*4*/] != Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9)
				{
					if (Local_99.f_256[Local_99.f_594[0 /*4*/]] > 0)
					{
						func_264();
					}
				}
			}
		}
		func_265(&Local_1536, &uLocal_1535, 23, &Local_3105, &uLocal_3214, -1, 1);
		if (bParam0)
		{
			if (!func_393())
			{
				if (Local_3105.f_103 != 129)
				{
					Local_3105.f_103 = 129;
				}
				else
				{
					func_200(1, 129);
				}
			}
		}
		else if (Local_3105.f_103 != 129)
		{
			Local_3105.f_103 = 129;
		}
	}
}

void func_261()
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
	
	uLocal_3739[0] = Local_99.f_594[0 /*4*/];
	uLocal_3739[1] = Local_99.f_594[1 /*4*/];
	uLocal_3739[2] = Local_99.f_594[2 /*4*/];
	uLocal_3739[3] = Local_99.f_594[3 /*4*/];
	iVar3 = Local_99.f_594[0 /*4*/];
	iVar4 = Local_99.f_594[1 /*4*/];
	iVar5 = Local_99.f_594[2 /*4*/];
	iVar6 = Local_99.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_99.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_99.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_99.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_99.f_266[iVar6];
	}
	uLocal_3744[0] = uVar7;
	uLocal_3744[1] = uVar8;
	uLocal_3744[2] = uVar9;
	uLocal_3744[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0x8BCACDC751B3961A())
	{
		iVar2 = func_263(uLocal_3739[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1536[iVar2 /*49*/].f_9 = Local_99.f_594[iVar0 /*4*/].f_1;
		}
		func_262(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3744[iVar0])
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

void func_262(int iParam0, int iParam1)
{
	struct<49> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1536[iParam1 /*49*/] };
	Local_1536[iParam1 /*49*/] = { Local_1536[iParam0 /*49*/] };
	Local_1536[iParam0 /*49*/] = { Var0 };
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0x8BCACDC751B3961A() - 1))
	{
		if (iParam0 == Local_1536[iVar0 /*49*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0x8BCACDC751B3961A();
		}
		iVar0++;
	}
	return iVar1;
}

void func_264()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 19);
}

void func_265(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_392(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_390() || iParam2 == 24)
	{
		if (func_345(uParam1, iParam2, uParam3, Global_1573696, 0, func_395()))
		{
			func_344(1);
			if ((!func_342() && !func_340()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_339())
				{
					func_336();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_335(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_334(uParam1);
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
								if (func_782(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_15(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_333(iVar35))
										{
											iVar44 = iVar35;
											if (func_332(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_329(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_326(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_325())
							{
								if (func_782(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
								}
								else
								{
									iVar35 = func_26();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_324(iVar35) && func_320(iVar35, iParam2)) && func_782(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_315(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
								iVar37 = func_309(iVar35);
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
									if (!func_325())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_304(&iVar43, &fVar45, (iParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_303(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_298(iVar35, 0);
								if (bVar34)
								{
									if (func_297(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_296(iParam5))
								{
									func_295(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_295(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
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
							if (func_782(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_26();
							}
							if (func_324(iVar35))
							{
								if (func_782(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_315(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
									iVar37 = func_309(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_298(iVar35, 1);
									if (bVar34)
									{
										if (func_297(iVar35, 1))
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
									func_278(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_275(uParam3, uParam1);
						}
						func_101(&(uParam3->f_21));
						func_274();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_273(uParam3, uParam1);
							func_272(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_273(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_268(uParam3))
						{
							Global_1573844 = 1;
						}
						func_266(uParam3);
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
			func_274();
			func_335(0);
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

void func_266(var uParam0)
{
	if (!func_21(&(uParam0->f_21)))
	{
		func_19(&(uParam0->f_21), 0, 0);
	}
	else if (func_18(&(uParam0->f_21), 250, 0))
	{
		func_101(&(uParam0->f_21));
		func_267(0);
	}
}

void func_267(bool bParam0)
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

int func_268(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_26() && func_782(iVar15, 0, 1))
	{
		Var2 = { func_63(iVar15) };
		iVar1 = func_271(uParam0, uParam0->f_37);
		if (func_270(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_269(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_269(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_269(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_269(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_269(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_269(uParam0, iVar0, 0);
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

void func_269(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_271(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_272(var uParam0, int iParam1, int iParam2)
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

void func_273(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_274()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_275(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_26())
		{
			if (func_782(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_277(uParam0->f_38[iVar0 /*2*/], 0);
					func_276(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_276(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_277(int iParam0, bool bParam1)
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

void func_278(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_294() && iParam4 < func_293())
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
				func_292("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_292(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_292("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_292("");
			if (uParam3->f_108 == 6)
			{
				func_292("");
			}
			else
			{
				func_292(&sParam5);
			}
			func_283(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_282(uParam3))
			{
				func_281("DPAD_FRIEND");
			}
			else if (func_280(uParam3))
			{
				func_281("DPAD_FRIEND");
			}
			else if (func_279(uParam3))
			{
				func_281("DPAD_CREW");
			}
			else
			{
				func_281("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_279(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_280(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_281(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_282(var uParam0)
{
	if (func_280(uParam0) && func_279(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_283(var uParam0, int iParam1)
{
	if (func_291(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_284(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_284(int iParam0)
{
	if ((func_782(iParam0, 0, 1) && func_288()) && func_285(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_285(int iParam0, bool bParam1)
{
	return func_286(iParam0, bParam1, 1);
}

int func_286(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_287(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_26() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_287(int iParam0, int iParam1)
{
	if (iParam0 != func_26())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_26())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_288()
{
	if (func_236(unk_0x0C1D3C552325765B()) || func_289())
	{
		return 0;
	}
	return 1;
}

int func_289()
{
	switch (func_290(unk_0x0C1D3C552325765B()))
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

int func_290(int iParam0)
{
	if (func_230(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_291(int iParam0)
{
	if ((func_782(iParam0, 0, 1) && func_288()) && func_287(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_292(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_293()
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

int func_294()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_295(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_294() && iParam3 < func_293())
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
					func_292("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_281(sParam16);
				}
				else
				{
					func_292(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_292("");
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
				if (func_325())
				{
					func_292("");
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
						func_281(&(uParam2->f_104));
					}
					else
					{
						func_292("");
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
					func_292("");
				}
				if (uParam2->f_108 == 6)
				{
					func_292("");
				}
				else
				{
					func_292(&sParam4);
				}
				func_283(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_292("");
					func_292("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_282(uParam2))
				{
					func_281("DPAD_FRIEND");
				}
				else if (func_280(uParam2))
				{
					func_281("DPAD_FRIEND");
				}
				else if (func_279(uParam2))
				{
					func_281("DPAD_CREW");
				}
				else
				{
					func_281("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_296(int iParam0)
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

bool func_297(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_332(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_26();
}

int func_298(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_236(iParam0)) && !func_235(iParam0))
	{
		iVar0 = func_302();
	}
	iVar1 = func_301(iParam0);
	if (!iVar1 == -1)
	{
		return func_299(iVar1);
	}
	return iVar0;
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_300(iParam0);
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

var func_300(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_301(int iParam0)
{
	if (!iParam0 == func_26())
	{
		if (func_297(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_302()
{
	return 21;
}

char* func_303(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_304(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_308(iParam3))
	{
		*fParam1 = (func_305(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_296(iParam3))
	{
		*fParam1 = (func_305(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_305(int iParam0, int iParam1)
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
				return func_307(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_306(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_306(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_307(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_308(int iParam0)
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

int func_309(int iParam0)
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	if (iVar0 == -1)
	{
		func_310(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_310(int iParam0, bool bParam1)
{
	if (!func_782(iParam0, 0, 1))
	{
		return;
	}
	if (func_312(iParam0) != -1)
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
	if (func_311(iParam0))
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

int func_311(int iParam0)
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

int func_312(int iParam0)
{
	int iVar0;
	
	if (!func_782(iParam0, 0, 1))
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
			func_313(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_313(int iParam0)
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
	func_314(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_314(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_26();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_315(int iParam0)
{
	struct<4> Var0;
	
	if (func_782(iParam0, 0, 1))
	{
		Global_2471194 = { func_63(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_270(Global_2471194))
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
		if (func_319(&Global_2471194))
		{
			Global_2471124 = { func_317(iParam0) };
			func_316(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_316(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_317(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_318(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_63(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_318(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_319(var uParam0)
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

int func_320(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_197(iParam0) || func_323(iParam0)) || func_196(iParam0))
		{
			return 0;
		}
	}
	if (!func_322(iParam0))
	{
		return 0;
	}
	if ((!func_321(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_333(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_321(int iParam0)
{
	if (func_782(iParam0, 0, 1))
	{
		if (func_782(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_322(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

int func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_324(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (func_15(iParam0, 0))
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

int func_325()
{
	switch (func_290(unk_0x0C1D3C552325765B()))
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
	switch (func_185(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_235(unk_0x0C1D3C552325765B()))
	{
		switch (func_290(unk_0x0C1D3C552325765B()))
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

int func_326(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_327(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_327(Global_1614576[iParam0 /*324*/].f_10.f_31))
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
	return func_328(iParam0, 0);
	return 0;
}

int func_328(int iParam0, int iParam1)
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

void func_329(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_782(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_15(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_333(iVar1))
				{
					if (func_330(iVar1, iParam1, 0))
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

int func_330(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_26())
	{
		if (!bParam2)
		{
			if (func_331(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_26())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_331(int iParam0, int iParam1)
{
	if (iParam1 != func_26())
	{
		if (iParam0 != func_26())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_26())
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

int func_332(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_26())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_333(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

void func_334(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_335(bool bParam0)
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

void func_336()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_338())
		{
			func_337();
		}
	}
}

void func_337()
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

bool func_338()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

int func_339()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_338())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_338())
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	if (func_338())
	{
		if (func_341(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_341(int iParam0)
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

int func_342()
{
	if (func_338())
	{
		if (func_343(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0)
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

void func_344(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_345(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_389(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_388();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_387())
		{
			if (func_386() > 0 && Global_1573698)
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
		if (!func_375())
		{
			func_374(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_374(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_19)))
	{
		if (func_386() == 1)
		{
			func_373(bVar6, uParam0, 0);
			func_19(&(uParam2->f_19), 0, 0);
			func_374(uParam0, uParam2, 0);
		}
	}
	if (func_21(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_18(&(uParam2->f_19), 10000, 0) || (func_386() == 0 && !bParam5))
		{
			func_374(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_372();
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
					func_372();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_373(bVar6, uParam0, 0))
				{
					func_334(uParam0);
					uVar4 = func_370(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_367(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_362(uParam0, func_364(uParam2), func_363(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_353(uParam0, func_355(), func_354(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_367(uParam0, uVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_351(iParam1) };
						iVar8 = func_346(iParam1);
						func_367(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_350())
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
			if (func_349(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_348(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_347(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_347(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_348(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_349(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_350()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_351(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_352(unk_0x0C1D3C552325765B()) || func_347(unk_0x0C1D3C552325765B()))
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

bool func_352(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_353(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_281(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_281("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_354()
{
	switch (func_290(unk_0x0C1D3C552325765B()))
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

char* func_355()
{
	switch (func_290(unk_0x0C1D3C552325765B()))
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
			if (func_358())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_357(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_357(1))
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
			if (func_356(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_356(int iParam0)
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

bool func_357(bool bParam0)
{
	return func_285(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_358()
{
	return (func_361() && func_359(func_360()));
}

int func_359(int iParam0)
{
	return func_287(iParam0, 1);
}

int func_360()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_361()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_362(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(uParam2))
		{
			func_281(uParam1);
		}
		else if (func_185(unk_0x0C1D3C552325765B()) == 133)
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
		func_281("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_363(var uParam0)
{
	int iVar0;
	
	iVar0 = func_185(unk_0x0C1D3C552325765B());
	if (func_393())
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

char* func_364(var uParam0)
{
	int iVar0;
	
	iVar0 = func_185(unk_0x0C1D3C552325765B());
	if (func_393())
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
			if (func_366() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_366() == 1)
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
			if (func_365() == 1)
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

int func_365()
{
	return Global_2482149.f_4688;
}

int func_366()
{
	if (func_185(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_367(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_292(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(uParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_281(sParam1);
		}
		if (func_387() && iParam6)
		{
			if (func_369())
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
			func_281(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_368(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_368(int iParam0)
{
	if (func_349(iParam0) || func_348(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_369()
{
	return Global_1573698;
}

char* func_370(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_371();
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

char* func_371()
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

void func_372()
{
	Global_36678 = 1;
}

bool func_373(bool bParam0, var uParam1, bool bParam2)
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

void func_374(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_274();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_19)))
		{
			func_101(&(uParam1->f_19));
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

int func_375()
{
	if (func_385())
	{
		return 0;
	}
	if (func_237())
	{
		return 0;
	}
	if (!func_383())
	{
		return 0;
	}
	if (!func_212())
	{
		return 0;
	}
	if (func_382(8, -1))
	{
		return 0;
	}
	if (func_386() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	else if (!func_241(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_381(1) || func_379(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_377(unk_0x0C1D3C552325765B()))
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
	if (func_376(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

bool func_376(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

int func_377(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_378())
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

bool func_378()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_379(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_380(unk_0xA0081090911D13E5()))
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

int func_380(int iParam0)
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

bool func_381(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_382(int iParam0, int iParam1)
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

int func_383()
{
	if (func_384())
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

bool func_384()
{
	return Global_1312434;
}

bool func_385()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_386()
{
	return Global_1342783.f_68;
}

int func_387()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_388()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_389(int iParam0)
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

int func_390()
{
	if (func_395())
	{
		return 1;
	}
	if (func_196(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_393())
	{
		return 1;
	}
	if (func_236(unk_0x0C1D3C552325765B()))
	{
		switch (func_185(unk_0x0C1D3C552325765B()))
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
				if (!func_391(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_391(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_391(unk_0x0C1D3C552325765B()))
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

bool func_391(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_392(int iParam0)
{
	if ((iParam0 == 24 && func_236(unk_0x0C1D3C552325765B())) && !func_235(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_230(unk_0x0C1D3C552325765B(), 0) && func_235(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_219(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_393()
{
	return Global_1588659;
}

struct<4> func_394()
{
	struct<4> Var0;
	
	switch (Local_99.f_27)
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

int func_395()
{
	if (func_396(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_396(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_15(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

void func_397()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_15(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	switch (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17)
	{
		case 0:
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 == 0)
			{
				if (Local_99.f_241 == 0)
				{
					func_690();
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 22))
			{
				if (Local_99.f_27 == joaat("rhino") && Local_99.f_29 == 2)
				{
					func_659(Local_99.f_30[0 /*3*/]);
					unk_0x88B0F0DC270164B7(&iLocal_1310, 22);
				}
				else if (!func_66(Local_99.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_659(Local_99.f_30[0 /*3*/]);
					unk_0x88B0F0DC270164B7(&iLocal_1310, 22);
				}
			}
			func_658();
			func_652();
			if (Local_99.f_241 == 0)
			{
				func_649(1);
			}
			func_648(0);
			if (Local_99.f_241 == 0)
			{
				if (!Local_99.f_27 == joaat("hydra") && !Local_99.f_27 == joaat("rhino"))
				{
					func_191();
				}
				else if (func_685())
				{
					func_191();
				}
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_1311, 1))
					{
						func_647(129);
						func_625(1);
						unk_0x88B0F0DC270164B7(&iLocal_1311, 1);
						unk_0x83CDA1F1ADCD9582(0);
					}
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 6))
					{
						if (Local_99.f_28 > 1 || (Local_99.f_28 == 1 && func_107() > 1))
						{
							if (unk_0x08BA6DD398CA197C(Local_99.f_3, 4))
							{
								Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 = 0;
								unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0x08BA6DD398CA197C(iLocal_1311, 1))
				{
					unk_0x09C86C0C5CA26B1E(&iLocal_1311, 1);
					func_624(1);
					func_623();
					func_625(0);
				}
			}
			if (Local_99.f_241 == 1)
			{
				func_622(&iVar4, &uVar5);
				iLocal_3640 = iVar4;
				func_621(0);
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
				{
					if (!func_620())
					{
						unk_0x88B0F0DC270164B7(&iLocal_1311, 19);
					}
					if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
					{
						func_8();
					}
					unk_0x83CDA1F1ADCD9582(0);
					if ((func_619("UW_MINV") || func_619("UW_TIMELA")) || func_619("UW_TIMEL"))
					{
						unk_0x94724F7C938EBE34(1);
					}
					func_187();
					func_609(129, 0f, 0f, 1, 1, 1, 0);
					func_606(1);
					func_605();
					unk_0xACD6D334FD769B0C(0.1f);
					iLocal_1320 = unk_0x34E98013CA352B7E();
					unk_0xCF03D9C8A7F1577C(0);
					func_604(1);
					func_603(1);
					if (Local_99.f_27 != joaat("rhino"))
					{
						func_585(1);
					}
					iLocal_1522 = unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5());
					unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), iLocal_1520);
					unk_0x0756AF366187C194("DisableFlightMusic", 1);
					unk_0xB49DAD10DC051295("MP_MC_START");
					unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 184, 1);
					unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 151, 0);
					func_584(0);
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 = iLocal_3640;
					if (!func_685())
					{
						func_583(62, "UW_TITLE", "UW_DESC", func_302(), -1, func_302());
					}
					else if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
					{
						func_583(62, "UW_TITLEC", "UW_DESCC", func_302(), -1, func_302());
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_582(62, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_302(), func_302());
					}
					Local_716.f_9 = unk_0x39E54E7BC7452169();
					func_584(0);
					func_580(0);
					func_19(&uLocal_3678, 0, 0);
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 1;
				}
				else
				{
					func_187();
					if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
					{
						func_8();
					}
					if (func_577("UW_HELP1", func_579(), func_578(1)) || func_577("UW_HELP1C", func_579(), func_578(1)))
					{
						unk_0x94724F7C938EBE34(1);
					}
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
					func_584(0);
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 == 0)
					{
					}
					else if (!func_576())
					{
					}
				}
			}
			else if (Local_99.f_241 == 3)
			{
				func_584(0);
				if (func_577("UW_HELP1", func_579(), func_578(1)) || func_577("UW_HELP1C", func_579(), func_578(1)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				if (!func_575())
				{
				}
				if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
				{
					func_8();
				}
				func_187();
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 3;
			}
			else if (Local_99.f_241 > 3)
			{
				if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
				{
					func_8();
				}
				func_584(0);
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
				{
					func_574();
					func_573();
					if (func_117())
					{
						func_605();
					}
				}
				if (func_685())
				{
					if (func_567(2, 0, 1, 0, 0))
					{
						if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
						{
							func_8();
						}
						func_584(0);
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
					}
				}
				else if (Local_99.f_27 == joaat("valkyrie"))
				{
					if (func_567(2, 0, 1, 0, 0))
					{
						if (func_259("UW_ABTSC") || func_259("UW_ABTS"))
						{
							func_8();
						}
						func_584(0);
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_160(1);
			func_652();
			func_515();
			func_164();
			func_513();
			func_501();
			func_260(0);
			func_497();
			func_494();
			func_574();
			func_573();
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 26))
			{
				if (!func_493(54))
				{
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
					{
						if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 10))
						{
							if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 == -1)
							{
								if (!func_685())
								{
									if (!func_259("UW_ATTK"))
									{
										func_253("UW_ATTK", 0);
									}
								}
								else if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
								{
									if (!func_259("UW_ATTK"))
									{
										func_253("UW_ATTK", 0);
									}
								}
								else if (!func_259("UW_ATTK"))
								{
									func_622(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_253("UW_ATTK", 0);
								}
							}
							else if (func_259("UW_ATTK"))
							{
								func_8();
							}
						}
					}
				}
			}
			func_492();
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
			{
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 == -1)
				{
					func_605();
				}
			}
			if (!func_782(unk_0x0C1D3C552325765B(), 1, 1))
			{
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
				func_8();
				unk_0x88B0F0DC270164B7(&iLocal_1310, 21);
			}
			else if (func_177())
			{
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
				func_8();
			}
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 1)
			{
				if (!func_491())
				{
					unk_0x88B0F0DC270164B7(&iLocal_1310, 23);
					func_8();
					if (iLocal_3640 > -1)
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iLocal_3640]))
						{
							func_24(&(Local_99.f_7[iLocal_3640]));
						}
					}
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
				}
			}
			if (Local_99.f_241 == 3)
			{
				func_624(1);
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 3;
			}
			else if (Local_99.f_241 > 3)
			{
				func_624(1);
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
			}
			else if (func_685())
			{
				if (func_567(2, 0, 1, 0, 0))
				{
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_99.f_241 == 3)
			{
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 3;
			}
			else if (Local_99.f_241 > 3)
			{
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
			}
			func_430();
			if (func_575())
			{
				if (func_185(unk_0x0C1D3C552325765B()) == 129)
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !unk_0x0893ED56F523F729())
					{
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 398, 0);
						if (unk_0x08BA6DD398CA197C(iLocal_1310, 22))
						{
							func_429();
							unk_0x09C86C0C5CA26B1E(&iLocal_1310, 22);
						}
						func_623();
						func_426();
						func_424(0);
						func_422(0);
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 184, 0);
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 151, 1);
						func_625(0);
						func_624(1);
					}
					func_421();
				}
			}
			else if (!unk_0x08BA6DD398CA197C(iLocal_1311, 8))
			{
				unk_0x88B0F0DC270164B7(&iLocal_1311, 8);
			}
			if (!func_195())
			{
				func_420();
				func_513();
				func_160(0);
				func_501();
				func_260(1);
				func_497();
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_419();
			}
			func_414();
			func_413();
			func_515();
			if (!unk_0x08BA6DD398CA197C(iLocal_1311, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar6]))
					{
						if (!func_31(Local_99.f_48[iVar6]))
						{
							unk_0x48262A314D66BAF1(unk_0x564EAE6038A81C07(Local_99.f_48[iVar6]), unk_0x0C1D3C552325765B(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_80[iVar6]))
					{
						if (!func_31(Local_99.f_80[iVar6]))
						{
							unk_0x48262A314D66BAF1(unk_0x564EAE6038A81C07(Local_99.f_80[iVar6]), unk_0x0C1D3C552325765B(), 0);
						}
					}
					iVar6++;
				}
				unk_0x88B0F0DC270164B7(&iLocal_1311, 7);
			}
			else if (Local_99.f_247 != iLocal_3638)
			{
				iLocal_3638 = Local_99.f_247;
				unk_0x09C86C0C5CA26B1E(&iLocal_1311, 7);
			}
			if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 11);
			}
			if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 10);
			}
			if (unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == iLocal_1520)
			{
				unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), iLocal_1522);
			}
			break;
		
		case 3:
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 31))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_3, 12))
				{
					func_187();
					unk_0x88B0F0DC270164B7(&iLocal_1310, 31);
				}
			}
			func_492();
			func_408();
			if (!func_195())
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 14) && !unk_0x08BA6DD398CA197C(Local_99.f_3, 12))
				{
					func_260(1);
				}
				func_501();
				func_513();
				func_497();
				func_399();
			}
			func_430();
			func_413();
			func_515();
			if (Local_99.f_241 > 3)
			{
				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_731();
			break;
	}
	func_398();
}

void func_398()
{
	int iVar0;
	
	if (iLocal_3701 != Local_99.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_616, iVar0))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_3701, iVar0))
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_7[iVar0]))
						{
							unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 2);
							func_24(&(Local_99.f_7[iVar0]));
							unk_0x88B0F0DC270164B7(&iLocal_3701, iVar0);
						}
					}
					else
					{
						unk_0x88B0F0DC270164B7(&iLocal_3701, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_399()
{
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1311, 5))
		{
			if (func_402(0, 1, 1, 1))
			{
				if (func_685())
				{
					func_401("UW_TFEWC", 30000);
				}
				else
				{
					func_401("UW_TFEW", 30000);
				}
				func_400(1);
				unk_0x88B0F0DC270164B7(&iLocal_1311, 5);
			}
		}
	}
}

void func_400(int iParam0)
{
	unk_0x65F5CA804AAEE6C3(3, 21, 200, 0, 0);
	if (iParam0 && !func_338())
	{
		unk_0xAB16AADE80707D47(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_401(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_402(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_407())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (func_239())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_241(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_406(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_405())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_404())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_403()
{
	return Global_2442442.f_569;
}

bool func_404()
{
	return Global_2442442.f_721;
}

bool func_405()
{
	return Global_2432628.f_2489.f_585;
}

int func_406(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_407()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

void func_408()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_259("UW_EXPL") && !func_259("UW_EXPLC"))
	{
		func_8();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1310, (27 + iVar2)))
		{
			if (unk_0x0E091C9F3918F674(Local_99.f_7[iVar2]))
			{
				if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 0))
				{
					unk_0x88B0F0DC270164B7(&iLocal_1310, (27 + iVar2));
					uLocal_3641[iVar2] = unk_0x2657E29E0DD8087E();
					unk_0x7DEFCA77DEA2C174(uLocal_3641[iVar2], "Explosion_Countdown", unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x86F350F5CCA04497(uLocal_3641[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_685())
	{
		if (unk_0x0E091C9F3918F674(Local_99.f_7[0]))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_319, 0))
			{
				if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 0))
				{
					if ((func_412() - func_121(&(Local_99.f_324), 0, 0)) >= 0)
					{
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0 || unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
						{
							if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_195())
								{
									func_411();
									func_166((func_412() - func_121(&(Local_99.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0 || unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
						{
							if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_195())
								{
									func_411();
									func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
						{
							func_624(1);
						}
						if (unk_0xB480350E4250D92A(Local_99.f_7[0]))
						{
							unk_0x39800A40136ECF37(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 0);
							unk_0xE5D4D5071B67B5E9(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), true);
							if (!unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]))))
							{
								unk_0x8286505D1FF300DC(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 1, 0, -1);
								func_24(&(Local_99.f_7[0]));
							}
							else
							{
								unk_0x9CBF97E9EFC920EB(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), 1, 0, 0);
								func_24(&(Local_99.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_187();
		if (!func_195())
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 12))
			{
				if (func_104(Local_99.f_7[0]))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[0])))
						{
							if (!func_685())
							{
								if (!func_259("UW_EXPL"))
								{
									func_253("UW_EXPL", 0);
								}
							}
							else if (!func_259("UW_EXPLC"))
							{
								func_253("UW_EXPLC", 0);
							}
							unk_0x88B0F0DC270164B7(&iLocal_1310, 12);
						}
					}
				}
			}
			else if (func_259("UW_EXPL") || func_259("UW_EXPLC"))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
					{
						func_8();
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
			if (unk_0x0E091C9F3918F674(Local_99.f_7[iVar0]))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_319, iVar0))
				{
					if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0))
					{
						if ((func_412() - func_121(&(Local_99.f_324), 0, 0)) >= 0)
						{
							if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0 || unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
							{
								if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_195())
									{
										if (!bVar1)
										{
											func_411();
											func_166((func_412() - func_121(&(Local_99.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0 || unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
							{
								if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_195())
									{
										if (!bVar1)
										{
											func_411();
											func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
							{
								func_624(1);
							}
							if (func_409(Local_99.f_7[iVar0]))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_7[iVar0]))
								{
									unk_0x39800A40136ECF37(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
									unk_0xE5D4D5071B67B5E9(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), true);
									if (!unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]))))
									{
										unk_0x8286505D1FF300DC(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1, 0, -1);
										func_24(&(Local_99.f_7[iVar0]));
									}
									else
									{
										unk_0x9CBF97E9EFC920EB(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 1, 0, 0);
										func_24(&(Local_99.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_1310, 12))
				{
					if (func_104(Local_99.f_7[iVar0]))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0])))
							{
								if (!func_195())
								{
									if (!func_685())
									{
										if (!func_259("UW_EXPL"))
										{
											func_253("UW_EXPL", 0);
										}
									}
									else if (!func_259("UW_EXPLC"))
									{
										func_253("UW_EXPLC", 0);
									}
									unk_0x88B0F0DC270164B7(&iLocal_1310, 12);
								}
							}
						}
					}
				}
				else if (func_259("UW_EXPL") || func_259("UW_EXPLC"))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
						{
							func_8();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_409(var uParam0)
{
	if (unk_0x2042D9774DF3D324(uParam0))
	{
		return 1;
	}
	if (func_410(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_410(var uParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(uParam0))
	{
		return 0;
	}
	if (func_76(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_411()
{
	Global_1344178.f_942 = 1;
}

int func_412()
{
	if (func_685())
	{
		return Global_262145.f_9817;
	}
	return Global_262145.f_9538;
}

void func_413()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_1311, 4))
	{
		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					func_624(1);
					unk_0x88B0F0DC270164B7(&iLocal_1311, 4);
				}
			}
		}
	}
}

void func_414()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x81C7A2950EF11C8A(iLocal_1319);
	if (unk_0x1489FFC2CBA39486(iVar0))
	{
		iVar1 = unk_0xF3B8A064D228878B(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (iLocal_1319 != unk_0x848AF823A8EA3C62())
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_3702, iLocal_1319))
				{
					if (!func_195())
					{
						if (Local_733[iLocal_1319 /*18*/].f_17 == 1)
						{
							unk_0x88B0F0DC270164B7(&iLocal_3702, iLocal_1319);
							func_415(iVar1, 55, 1);
						}
					}
				}
				else if (func_195())
				{
					func_415(iVar1, 55, 0);
					unk_0x09C86C0C5CA26B1E(&iLocal_3702, iLocal_1319);
				}
				else if (Local_733[iLocal_1319 /*18*/].f_17 > 1)
				{
					unk_0x09C86C0C5CA26B1E(&iLocal_3702, iLocal_1319);
					func_415(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_1319++;
	if (iLocal_1319 >= unk_0xE5697AB254094B0D())
	{
		iLocal_1319 = 0;
	}
}

void func_415(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_417())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_416(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = iParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_416(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

int func_417()
{
	switch (func_418())
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

int func_418()
{
	return Global_25185;
}

void func_419()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x16833EFAA58E63DB(Local_1327[iVar0 /*8*/]))
		{
			unk_0x0B57C567D698C373(&(Local_1327[iVar0 /*8*/]));
		}
		if (unk_0x16833EFAA58E63DB(Local_1327[iVar0 /*8*/].f_1))
		{
			unk_0x0B57C567D698C373(&(Local_1327[iVar0 /*8*/].f_1));
		}
		if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar0]))
		{
			if (!func_31(Local_99.f_48[iVar0]))
			{
				if (unk_0x86998240179B9048(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0])))
				{
					func_87(&(Local_1327[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_420()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_1310, 11))
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 13))
			{
				if (func_185(unk_0x0C1D3C552325765B()) != 129)
				{
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
					{
						if (!func_493(64) && !func_493(65))
						{
							if (unk_0x08BA6DD398CA197C(iLocal_1311, 11))
							{
								if (!unk_0x08BA6DD398CA197C(iLocal_1311, 12))
								{
									if (func_402(0, 1, 1, 1))
									{
										if (func_685())
										{
											func_401("UW_HELIMC", -1);
										}
										else
										{
											func_401("UW_HELIM", -1);
										}
										func_400(1);
										unk_0x88B0F0DC270164B7(&iLocal_1311, 12);
									}
								}
							}
							else if (!(Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra")))
							{
								if (func_402(0, 1, 1, 1))
								{
									if (!func_685())
									{
										func_401("UW_TAVAIL", 30000);
									}
									else
									{
										func_401("UW_TAVAILC", 30000);
									}
									func_400(1);
									unk_0x88B0F0DC270164B7(&iLocal_1310, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_421()
{
	float fVar0;
	
	if (iLocal_3697 != 0)
	{
		return;
	}
	if (func_21(&uLocal_3678))
	{
		iLocal_3697 = func_121(&uLocal_3678, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_3697);
	fVar0 = (fVar0 / 60000f);
	iLocal_3697 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_3697 >= 1)
	{
	}
	else
	{
		iLocal_3697 = 1;
	}
	if (iLocal_3697 > Global_262145.f_9877)
	{
		iLocal_3697 = Global_262145.f_9877;
	}
}

void func_422(bool bParam0)
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
		func_423(iVar0);
		iVar0++;
	}
}

void func_423(int iParam0)
{
	Global_91458.f_160[iParam0] = 1;
	Global_91458.f_159 = 1;
}

void func_424(int iParam0)
{
	if (func_425() && iParam0)
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

int func_425()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

void func_426()
{
	unk_0xCF03D9C8A7F1577C(5);
	func_428();
	unk_0xACD6D334FD769B0C(1f);
	unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 8);
	func_427();
}

void func_427()
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

void func_428()
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

void func_429()
{
	Global_2391047 = { 0f, 0f, 0f };
	Global_2391050 = 0;
}

void func_430()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (unk_0x08BA6DD398CA197C(iLocal_1310, 13))
	{
		return;
	}
	bVar0 = unk_0x08BA6DD398CA197C(Local_99.f_3, 6);
	bVar1 = unk_0x08BA6DD398CA197C(iLocal_1310, 21);
	bVar2 = unk_0x08BA6DD398CA197C(iLocal_1310, 23);
	bVar3 = Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_575())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1311, 17))
		{
			if (func_782(unk_0x0C1D3C552325765B(), 1, 1))
			{
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || bVar2)
				{
					if (!func_195())
					{
						if (!func_685())
						{
							if (bVar0)
							{
								func_583(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
								{
									func_583(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (unk_0x3CF373660FCFAFCE(Local_99.f_7[0]) && func_104(Local_99.f_7[0]))
								{
									unk_0x88B0F0DC270164B7(&iLocal_1311, 11);
									unk_0x88B0F0DC270164B7(&iLocal_1311, 16);
									func_583(65, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_583(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_583(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || unk_0x08BA6DD398CA197C(Local_99.f_3, 16))
							{
								func_583(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_583(64, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
							{
								if (func_490())
								{
									unk_0x88B0F0DC270164B7(&iLocal_1311, 11);
									unk_0x88B0F0DC270164B7(&iLocal_1311, 16);
									func_583(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_583(64, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_490())
							{
								unk_0x88B0F0DC270164B7(&iLocal_1311, 11);
								unk_0x88B0F0DC270164B7(&iLocal_1311, 16);
								func_583(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_583(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_490())
							{
								unk_0x88B0F0DC270164B7(&iLocal_1311, 11);
								unk_0x88B0F0DC270164B7(&iLocal_1311, 16);
								func_583(65, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_583(64, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || unk_0x08BA6DD398CA197C(Local_99.f_3, 16))
						{
							func_583(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_489(1);
					Local_716.f_6 = (Local_716.f_6 + iVar4);
					if (!Global_262145.f_9944)
					{
						if (Local_716.f_6 > 0)
						{
							func_488(19, Local_716.f_6);
						}
					}
					Global_2453923 = iVar4;
					if (iVar4 > 0)
					{
						if (func_487())
						{
							func_478(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0x62EA9E19007EE5C6(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_477(1);
					Local_716.f_7 = (Local_716.f_7 + iVar10);
					func_476();
					func_431(0, unk_0xA0081090911D13E5(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_716.f_5 = 2;
					unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 398, 0);
					if (!unk_0x08BA6DD398CA197C(iLocal_1311, 16))
					{
						unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 8);
					}
					unk_0x88B0F0DC270164B7(&iLocal_1311, 17);
					unk_0x88B0F0DC270164B7(&iLocal_1311, 18);
				}
			}
		}
	}
}

int func_431(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_432(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_432(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_442(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				iVar1 = unk_0x90897FA118314142(iParam1);
				func_438(unk_0x7560B9B6FB83879C(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_433(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_433(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_436(iParam0, 1) };
	if (iParam0 == func_435(unk_0xA0081090911D13E5()))
	{
		func_434(1);
	}
	func_438(Var0, iParam1, 0, sParam2, iParam3);
}

void func_434(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_435(int iParam0)
{
	return iParam0;
}

Vector3 func_436(int iParam0, bool bParam1)
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
	if (iParam0 == func_437(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
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

int func_437(int iParam0)
{
	return iParam0;
}

void func_438(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_441(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_440();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_439();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_439()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_440()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_441(struct<3> Param0, var uParam3, var uParam4)
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

var func_442(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_443(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_443(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_475(unk_0x0C1D3C552325765B()) || func_474(unk_0x0C1D3C552325765B()))
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
	if (func_169(uParam2))
	{
	}
	if (func_473())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_471(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_470(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_468(0, &iVar1);
					break;
				
				case 3:
					func_468(1, &iVar1);
					break;
				
				case 1:
					func_465(&iVar1);
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
			func_463(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_453((func_462(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_463(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_448(iVar1);
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
				func_444((func_446(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_444((func_446(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_444(int iParam0)
{
	if (func_473())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_445(joaat("mpply_globalxp"), iParam0);
	}
}

void func_445(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
}

int func_446(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_782(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_447(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_447(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_447(int iParam0)
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

void func_448(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_63(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_451(func_452(&Var0));
			if (iVar13 == 0)
			{
				func_450(&Global_1352222, iParam0);
				func_449(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_450(&Global_1352223, iParam0);
				func_449(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_450(&Global_1352224, iParam0);
				func_449(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_450(&Global_1352225, iParam0);
				func_449(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_450(&Global_1352226, iParam0);
				func_449(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_449(int iParam0, int iParam1)
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

void func_450(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_451(int iParam0)
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

int func_452(var uParam0)
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

void func_453(int iParam0, int iParam1, int iParam2)
{
	if (func_473())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_233(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_233(-1)])
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
		if (func_461(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_459(iParam0, 1);
		}
		func_458(632, iParam0, -1, 1);
		func_457(633, func_459(iParam0, 1), -1, 1, 0);
		Global_1352337[func_233(-1)] = iParam0;
		func_454(7, 0);
	}
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_456(iParam0, iParam1))
	{
		iVar0 = func_455();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_455()
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

int func_456(int iParam0, var uParam1)
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

void func_457(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_233(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_458(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_233(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_233(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_233(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_233(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_233(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_233(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_233(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_233(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_233(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_233(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_233(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_233(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_233(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_233(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_233(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_233(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_233(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_233(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_233(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_233(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_233(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_233(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_233(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_233(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_233(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_233(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_233(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_233(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_233(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_233(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_233(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_233(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_459(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_460(iParam0, 0);
}

int func_460(int iParam0, int iParam1)
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

int func_461(int iParam0)
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

int func_462(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_233(-1)];
			}
			else if (func_461(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_233(-1)];
	}
	return 0;
}

void func_463(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_251(iParam0, func_233(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_464(iParam0))
	{
		func_457(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_458(iParam0, iVar0, iParam2, 1);
	}
}

int func_464(int iParam0)
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

void func_465(int iParam0)
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
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_467(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_64(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_466(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_466(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_466(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_467(int iParam0, int iParam1, int iParam2)
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

void func_468(bool bParam0, int iParam1)
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
				if (func_782(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_64(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_782(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_469(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_64(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_466(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_466(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_469(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_58(iParam0), func_58(iParam1));
	return 0f;
}

int func_470(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_466(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_471(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_462(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_462(unk_0x0C1D3C552325765B());
		}
	}
	if (func_472(8000, 0, 0) > 0)
	{
		if (func_472(8000, 0, 0) < (iParam0 + func_462(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_472(8000, 0, 0) - func_462(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_472(int iParam0, bool bParam1, int iParam2)
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

int func_473()
{
	return 1;
}

bool func_474(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_475(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_476()
{
	Global_2453272 = 1;
}

int func_477(bool bParam0)
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(iLocal_1311, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_685())
		{
			return Global_262145.f_9759;
		}
		else
		{
			return Global_262145.f_9698;
		}
	}
	func_421();
	if (func_685())
	{
		iVar0 = (Global_262145.f_9759 * iLocal_3697);
	}
	else
	{
		iVar0 = (Global_262145.f_9698 * iLocal_3697);
	}
	return iVar0;
}

void func_478(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_487())
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
				func_479(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_479(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_479(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_487())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_17()) || unk_0x474B3F20E92EE4B9())
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
			*uParam0 = func_486(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_485(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_480(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_480(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_481(iParam0);
	}
}

void func_481(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_487())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_484(iParam0))
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
		func_482(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_482(var uParam0)
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
	func_483(&(uParam0->f_8.f_3));
	func_483(&(uParam0->f_8.f_16));
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

void func_483(var uParam0)
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

int func_484(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_485(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_486(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_487())
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

int func_487()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

void func_488(int iParam0, int iParam1)
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

int func_489(bool bParam0)
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(iLocal_1311, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_685())
		{
			return Global_262145.f_9758;
		}
		else
		{
			return Global_262145.f_9697;
		}
	}
	func_421();
	if (func_685())
	{
		iVar0 = (Global_262145.f_9758 * iLocal_3697);
	}
	else
	{
		iVar0 = (Global_262145.f_9697 * iLocal_3697);
	}
	return iVar0;
}

int func_490()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iLocal_3640]))
	{
		if (func_104(Local_99.f_7[iLocal_3640]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_99.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_99.f_256[iLocal_3640];
	if (!bVar0)
	{
		if (Local_99.f_594[0 /*4*/] != iLocal_3640)
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
	else if (Local_99.f_594[0 /*4*/] == iLocal_3640)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_99.f_256[Local_99.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_99.f_255 - iVar2);
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

int func_491()
{
	int iVar0;
	var uVar1;
	
	func_622(&iVar0, &uVar1);
	if (iLocal_3640 > -1)
	{
		if (func_104(Local_99.f_7[iLocal_3640]))
		{
			return 1;
		}
	}
	return 0;
}

void func_492()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_99.f_241 == 1)
	{
		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
		{
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 == -1)
			{
				if (!func_21(&uLocal_3676) || (func_21(&uLocal_3676) && func_18(&uLocal_3676, 5000, 0)))
				{
					if (Local_99.f_27 == joaat("savage") || Local_99.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3640;
						if (iVar1 > -1)
						{
							if (func_104(Local_99.f_7[iVar1]))
							{
								iVar0 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
								}
								else if (unk_0xEB361B4BD195A4D3(iVar0))
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x54F0AEFB11EA090A(iVar0))
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_99.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3640;
						if (iVar1 > -1)
						{
							if (func_104(Local_99.f_7[iVar1]))
							{
								iVar0 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
								}
								else if (unk_0xEB361B4BD195A4D3(iVar0))
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x54F0AEFB11EA090A(iVar0))
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
								}
								if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0xAF3D6F27CC1E594E(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!unk_0xEB361B4BD195A4D3(iVar0))
											{
												if (unk_0x54F0AEFB11EA090A(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_101(&uLocal_3676);
					func_19(&uLocal_3676, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_319, iVar2))
		{
			if (unk_0x0E091C9F3918F674(Local_99.f_7[iVar2]))
			{
				if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 0))
				{
					if ((func_412() - func_121(&(Local_99.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
						{
							if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 0))
							{
								if (!func_195())
								{
									func_411();
									func_166((func_412() - func_121(&(Local_99.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
						{
							if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 0))
							{
								if (!func_195())
								{
									func_411();
									func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (unk_0xB480350E4250D92A(Local_99.f_7[iVar2]))
						{
							unk_0x39800A40136ECF37(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 0);
							unk_0xE5D4D5071B67B5E9(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), true);
							if (!unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]))))
							{
								unk_0x8286505D1FF300DC(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 1, 0, -1);
								func_24(&(Local_99.f_7[iVar2]));
							}
							else
							{
								unk_0x9CBF97E9EFC920EB(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar2]), 1, 0, 0);
								func_24(&(Local_99.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 == iVar2)
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_1311, 6))
				{
					if (func_402(0, 1, 1, 1))
					{
						if (func_685())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1311, 19))
							{
								func_401("UW_NOPILC", 30000);
							}
							else
							{
								func_401("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_401("UW_NOPIL", 30000);
						}
						func_400(1);
						unk_0x88B0F0DC270164B7(&iLocal_1311, 6);
					}
					else if (unk_0x08BA6DD398CA197C(iLocal_1311, 19))
					{
						if (unk_0x598A9E990F05F82C())
						{
							unk_0x94724F7C938EBE34(1);
						}
					}
				}
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					iVar5 = Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10;
					if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar5]))
					{
						if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar5])))
						{
							if (!func_685())
							{
								if (!func_259("UW_EXPL"))
								{
									func_253("UW_EXPL", 0);
								}
							}
							else if (!func_259("UW_EXPLC"))
							{
								func_253("UW_EXPLC", 0);
							}
						}
						else if (func_259("UW_EXPL") || func_259("UW_EXPLC"))
						{
							func_8();
						}
					}
					else if (func_259("UW_EXPL") || func_259("UW_EXPLC"))
					{
						func_8();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_493(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

void func_494()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
	{
		if (Local_99.f_27 == joaat("rhino"))
		{
			if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
			{
				if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 10))
				{
					if (!func_21(&uLocal_3672) || (func_21(&uLocal_3672) && func_18(&uLocal_3672, 5000, 0)))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (func_66(Local_3698, 0f, 0f, 0f, 0))
							{
								Local_3698 = { Local_99.f_30[0 /*3*/] };
							}
							fVar0 = func_496(unk_0xA0081090911D13E5(), Local_3698, 1);
							if (fVar0 > 750f)
							{
								unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 10);
							}
						}
						func_101(&uLocal_3672);
						func_19(&uLocal_3672, 0, 0);
					}
				}
				else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if (!func_259("UW_OOB"))
					{
						func_253("UW_OOB", 0);
					}
					if (!func_21(&uLocal_3674))
					{
						uVar2 = unk_0x2657E29E0DD8087E();
						unk_0x7DEFCA77DEA2C174(uVar2, "Explosion_Countdown", unk_0x15F0E6D5AC2852F1(Local_99.f_7[func_495()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x86F350F5CCA04497(uVar2, "Time", 30f);
						func_19(&uLocal_3674, 0, 0);
					}
					if (func_21(&uLocal_3674))
					{
						if ((func_412() - func_121(&uLocal_3674, 0, 0)) >= 0)
						{
							func_411();
							func_166((func_412() - func_121(&uLocal_3674, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
						}
						else
						{
							func_411();
							func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
							func_8();
							unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 11);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
					{
						fVar0 = func_496(unk_0xA0081090911D13E5(), Local_99.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 10);
							func_101(&uLocal_3674);
							unk_0x15761381A3072BFA(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
	{
		func_624(1);
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			iVar1 = func_495();
			if (iVar1 > -1)
			{
				if (func_104(Local_99.f_7[iVar1]))
				{
					if (unk_0xB480350E4250D92A(Local_99.f_7[iVar1]))
					{
						unk_0x39800A40136ECF37(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), 0);
						unk_0xE5D4D5071B67B5E9(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), true);
						unk_0x8286505D1FF300DC(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1]), 1, 0, -1);
						func_24(&(Local_99.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_495()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar1]))
			{
				if (func_104(Local_99.f_7[iVar1]))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar1])))
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

float func_496(int iParam0, struct<3> Param1, int iParam4)
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

void func_497()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1310, 24))
	{
		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 1)
		{
			func_622(&iVar1, &uVar0);
			if (func_500(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_99.f_22[iVar1] != func_26())
					{
						fLocal_1321 = unk_0xF864EAB38CC4555C();
						unk_0x2F0BC247C05B0D28(-1f);
						func_499(1, iVar1);
						unk_0x88B0F0DC270164B7(&iLocal_1310, 24);
						func_498(1);
					}
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_1310, 24);
				unk_0x88B0F0DC270164B7(&iLocal_1310, 25);
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1310, 25))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_1310, 24))
		{
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 > 1)
			{
				unk_0x2F0BC247C05B0D28(fLocal_1321);
				func_622(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_499(0, iVar1);
					unk_0x88B0F0DC270164B7(&iLocal_1310, 25);
					func_498(0);
				}
			}
		}
	}
}

void func_498(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 15);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 4);
	}
}

void func_499(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			iVar1 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
			if (func_782(iVar1, 0, 1) && iVar1 != unk_0x0C1D3C552325765B())
			{
				if (unk_0x08BA6DD398CA197C(Local_733[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0x4C43A46A39485FB8(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0x4C43A46A39485FB8(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_500(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (!bVar0)
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
			{
				if (iVar1 != unk_0x848AF823A8EA3C62())
				{
					if (unk_0x08BA6DD398CA197C(Local_733[iVar1 /*18*/].f_1, iParam0))
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

void func_501()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8188FDE7090D3AF6())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1310, 15))
	{
		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 2)
		{
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 == 0)
			{
				if (Local_99.f_22[0] != func_26())
				{
					if (func_402(0, 0, 1, 1))
					{
						if (!func_685())
						{
							if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
							{
								if (!func_685())
								{
									func_512("UW_START1P", unk_0xCF66111B26743875(Local_99.f_22[0]), 1, 30000);
								}
								else
								{
									func_512("UW_START1PC", unk_0xCF66111B26743875(Local_99.f_22[0]), 1, 30000);
								}
								func_400(1);
							}
							else if (unk_0x08BA6DD398CA197C(Local_99.f_15, 0))
							{
								if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 14))
								{
									if (!func_685())
									{
										func_401("UW_STARTM", 30000);
									}
									else
									{
										func_401("UW_STARTMC", 30000);
									}
									func_400(1);
								}
							}
							else
							{
								func_512("UW_START1P", unk_0xCF66111B26743875(Local_99.f_22[0]), 1, 30000);
								func_400(1);
							}
						}
						else if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 14))
						{
							if (!func_685())
							{
								func_401("UW_STARTM", 30000);
							}
							else
							{
								func_401("UW_STARTMC", 30000);
							}
							func_400(1);
						}
						unk_0x88B0F0DC270164B7(&iLocal_1310, 15);
					}
				}
			}
		}
	}
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 2)
	{
		if (Local_99.f_241 == 1)
		{
			if (Local_99.f_27 != joaat("hydra") && Local_99.f_27 != joaat("rhino"))
			{
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
				{
					if (iLocal_3640 >= 0)
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_1311, 10))
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1311, 9))
							{
								if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iLocal_3640]))
								{
									if (func_104(Local_99.f_7[iLocal_3640]))
									{
										unk_0x88B0F0DC270164B7(&iLocal_1311, 9);
									}
								}
							}
							else if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iLocal_3640]))
							{
								if (!func_104(Local_99.f_7[iLocal_3640]))
								{
									func_511("UW_TEAMV", 1);
									unk_0x88B0F0DC270164B7(&iLocal_1311, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_685())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_1310, (16 + iVar1)))
				{
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 >= 2)
					{
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 == 0)
						{
							if ((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2))
							{
								if (unk_0x0E091C9F3918F674(Local_99.f_7[0]))
								{
									if (func_104(Local_99.f_7[0]))
									{
										if (unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_510(iVar1, 0);
											if (iVar0 != func_26())
											{
												func_502("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											unk_0x88B0F0DC270164B7(&iLocal_1310, (16 + iVar1));
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

int func_502(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(iParam2);
		unk_0xDA35BDB37E728640(func_508(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_63(iParam1) };
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
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_507(&Var1) };
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
		func_503(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_503(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_506() || !unk_0x1504F110F2576375()) || !func_15(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_504(iParam2);
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

int func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_505(iVar0);
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

void func_505(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_506()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

struct<16> func_507(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_508(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_509(&cVar0);
}

var func_509(char[4] cParam0)
{
	return cParam0;
}

int func_510(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar2 = (iParam0 - 1);
	if (unk_0x0E091C9F3918F674(Local_99.f_7[iParam1]))
	{
		if (func_104(Local_99.f_7[iParam1]))
		{
			iVar1 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (unk_0x54F0AEFB11EA090A(iVar1))
				{
					iVar0 = unk_0xA43666ACD375E339(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_511(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_503(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_512(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(sParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

void func_513()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_1310, 9))
	{
		if (Local_99.f_241 == 1)
		{
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
			{
				if (unk_0xB49DAD10DC051295("KILL_LIST_START_MUSIC"))
				{
					unk_0x88B0F0DC270164B7(&iLocal_1310, 9);
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1310, 10))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_1310, 9))
		{
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 > 1)
			{
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
				{
					if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0xB49DAD10DC051295("MP_MC_FAIL"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_1310, 10);
						}
					}
					else if (unk_0xB49DAD10DC051295("KILL_LIST_STOP_MUSIC"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_1310, 10);
						func_514();
					}
				}
			}
		}
	}
}

void func_514()
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

void func_515()
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
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
	{
		if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 8))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 26))
			{
				if ((((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2)) || (func_685() && unk_0x08BA6DD398CA197C(Local_99.f_3, 6))) || (func_685() && unk_0x08BA6DD398CA197C(Local_99.f_3, 15)))
				{
					if (!func_21(&uLocal_3693))
					{
						func_19(&uLocal_3693, 0, 0);
					}
					if (func_18(&uLocal_3693, 1000, 0))
					{
						if (func_259("UW_ATTK"))
						{
							func_8();
						}
						func_566();
						if (func_565())
						{
							iVar25 = func_489(1);
							if (iVar25 > 0)
							{
								Local_716.f_6 = (Local_716.f_6 + iVar25);
								if ((!Global_262145.f_9944 && !unk_0x08BA6DD398CA197C(Local_99.f_3, 8)) || (!Global_262145.f_9945 && unk_0x08BA6DD398CA197C(Local_99.f_3, 8)))
								{
									if (Local_716.f_6 > 0)
									{
										func_488(19, Local_716.f_6);
									}
								}
								Global_2453923 = iVar25;
								if (func_487())
								{
									func_478(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_477(1);
							func_476();
							Local_716.f_7 = (Local_716.f_7 + iVar23);
							func_431(0, unk_0xA0081090911D13E5(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_716.f_5 = 2;
							func_583(64, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_685())
						{
							iVar25 = func_578(0);
							func_554(&iVar25, 1);
							iVar25 = (iVar25 + func_489(1));
							if (iVar25 > 0)
							{
								Local_716.f_6 = (Local_716.f_6 + iVar25);
								if (!Global_262145.f_9944)
								{
									if (Local_716.f_6 > 0)
									{
										func_488(19, Local_716.f_6);
									}
								}
								Global_2453923 = iVar25;
								if (func_487())
								{
									func_478(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_477(1);
							iVar23 = (iVar23 + func_553());
							Local_716.f_7 = (Local_716.f_7 + iVar23);
							func_476();
							func_431(0, unk_0xA0081090911D13E5(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_716.f_5 = 1;
							func_582(63, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_552())
						{
							if (!func_551(1))
							{
								if (!func_259("UW_EXPL") && !func_259("UW_EXPLC"))
								{
									func_8();
								}
								iVar25 = func_578(0);
								func_554(&iVar25, 1);
								iVar25 = (iVar25 + func_489(1));
								Local_716.f_6 = (Local_716.f_6 + iVar25);
								if (!Global_262145.f_9945)
								{
									if (Local_716.f_6 > 0)
									{
										func_488(19, Local_716.f_6);
									}
								}
								Global_2453923 = iVar25;
								if (iVar25 > 0)
								{
									if (func_487())
									{
										func_478(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
								{
									func_582(63, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_582(63, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_716.f_5 = 1;
								iVar23 = func_553();
								iVar23 = (iVar23 + func_477(1));
								Local_716.f_7 = (Local_716.f_7 + iVar23);
								func_476();
								func_431(0, unk_0xA0081090911D13E5(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_489(1);
								iVar23 = func_477(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_99.f_465[iVar22 /*4*/].f_1 == Local_99.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
										{
											if (Local_99.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_99.f_465[iVar22 /*4*/].f_2 != unk_0x0C1D3C552325765B())
												{
													if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_99.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = unk_0x81C85E54237F8A2E(Local_99.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3640 > -1)
										{
											if (iLocal_3640 != Local_99.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_99.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_26())
									{
										bVar21 = true;
									}
									else
									{
										func_550(67, "UW_DRAWP", unk_0xCF66111B26743875(iVar9[0]), 1, 15000, "UW_BIGO", 2);
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
									func_582(67, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar21)
								{
									if (!func_685())
									{
										func_583(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_583(67, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar26 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_578(0)) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar24 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_553()) / unk_0xBBDA792448DB5A89(iVar20)));
								func_554(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_716.f_6 = (Local_716.f_6 + iVar25);
								if (!Global_262145.f_9945)
								{
									if (Local_716.f_6 > 0)
									{
										func_488(19, Local_716.f_6);
									}
								}
								Global_2453923 = iVar25;
								if (iVar25 > 0)
								{
									if (func_487())
									{
										func_478(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_716.f_7 = (Local_716.f_7 + iVar23);
								func_476();
								func_431(0, unk_0xA0081090911D13E5(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_548(1);
							iVar25 = func_489(1);
							iVar23 = func_477(1);
							Local_716.f_6 = (Local_716.f_6 + iVar25);
							if (!Global_262145.f_9945)
							{
								if (Local_716.f_6 > 0)
								{
									func_488(19, Local_716.f_6);
								}
							}
							Global_2453923 = iVar25;
							if (iVar25 > 0)
							{
								if (func_487())
								{
									func_478(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_716.f_7 = (Local_716.f_7 + iVar23);
							func_476();
							func_431(0, unk_0xA0081090911D13E5(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_551(0))
							{
								iVar13 = Local_99.f_465[0 /*4*/];
								if (!func_259("UW_EXPL") && !func_259("UW_EXPLC"))
								{
									func_8();
								}
								if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
								{
									iVar8 = unk_0x81C85E54237F8A2E(Local_99.f_465[0 /*4*/].f_2);
									if (func_297(iVar8, 1))
									{
										iVar53 = func_301(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_299(iVar53);
											sVar54 = func_542(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_26())
									{
										if (!bVar52)
										{
											if (!func_685())
											{
												func_550(64, "UW_FWONP", unk_0xCF66111B26743875(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_550(64, "UW_FWONPC", unk_0xCF66111B26743875(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_685())
										{
											func_540(65, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_540(65, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_685())
									{
										func_582(64, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_582(64, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_259("UW_EXPL") && !func_259("UW_EXPLC"))
								{
									func_8();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_99.f_465[iVar22 /*4*/].f_1 == Local_99.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
										{
											if (Local_99.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_99.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = unk_0x81C85E54237F8A2E(Local_99.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3640 > -1)
										{
											if (iLocal_3640 != Local_99.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_99.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_99.f_27 == joaat("hydra") || Local_99.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_26() && unk_0xCB129F9A01D14082(iVar9[0]))
										{
											if (iVar9[1] != func_26() && unk_0xCB129F9A01D14082(iVar9[1]))
											{
												func_520(67, func_26(), func_26(), -1, "UW_DRAW2P", "UW_BIGF", func_302(), 15000, func_302(), unk_0xCF66111B26743875(iVar9[0]), unk_0xCF66111B26743875(iVar9[1]), 0);
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
									func_582(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_583(67, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_603(0);
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
						{
							Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
						}
						unk_0x88B0F0DC270164B7(&iLocal_1310, 13);
						unk_0x88B0F0DC270164B7(&iLocal_1310, 26);
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_3, 6) || (!func_685() && unk_0x08BA6DD398CA197C(Local_99.f_3, 15)))
				{
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_10 != -1)
					{
						func_583(65, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_582(64, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_603(0);
					unk_0x88B0F0DC270164B7(&iLocal_1310, 26);
					iVar25 = func_489(1);
					Local_716.f_6 = (Local_716.f_6 + iVar25);
					if (!Global_262145.f_9944)
					{
						if (Local_716.f_6 > 0)
						{
							func_488(19, Local_716.f_6);
						}
					}
					Global_2453923 = iVar25;
					if (iVar25 > 0)
					{
						if (func_487())
						{
							func_478(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_477(1);
					Local_716.f_7 = (Local_716.f_7 + iVar23);
					func_476();
					func_431(0, unk_0xA0081090911D13E5(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_716.f_5 = 2;
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
					{
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_3, 14))
				{
					func_603(0);
					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 8);
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 3)
					{
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 11))
				{
					func_582(64, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_603(0);
					unk_0x88B0F0DC270164B7(&iLocal_1310, 26);
					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 8);
					iVar25 = func_489(1);
					Local_716.f_6 = (Local_716.f_6 + iVar25);
					if (!Global_262145.f_9944)
					{
						if (Local_716.f_6 > 0)
						{
							func_488(19, Local_716.f_6);
						}
					}
					Global_2453923 = iVar25;
					if (iVar25 > 0)
					{
						if (func_487())
						{
							func_478(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							unk_0x62EA9E19007EE5C6(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_477(1);
					Local_716.f_7 = (Local_716.f_7 + iVar23);
					func_476();
					func_431(0, unk_0xA0081090911D13E5(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_716.f_5 = 2;
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
					{
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_3, 12))
				{
					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 8);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 8))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_1310, 26))
				{
					if (func_259("UW_ATTK"))
					{
						func_8();
					}
					if (func_516(&uLocal_3631, 1))
					{
						unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 8);
					}
					if (!func_259("UW_EXPL") && !func_259("UW_EXPLC"))
					{
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 > -1)
						{
							if (unk_0x3CF373660FCFAFCE(Local_99.f_7[Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9]))
							{
								if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
								{
									if (func_104(Local_99.f_7[Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9]))
									{
										if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9])))
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
	else if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 8))
	{
		unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 8);
	}
}

int func_516(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_338()) && !(func_230(unk_0x0C1D3C552325765B(), 0) && (func_222(unk_0x0C1D3C552325765B()) || func_220(unk_0x0C1D3C552325765B())))) && !func_209(unk_0x0C1D3C552325765B()))
	{
		func_519();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_19(&(uParam0->f_3), 0, 0);
			}
			else if (func_18(&(uParam0->f_3), 1000, 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 25);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_19(&(uParam0->f_5), 0, 0);
				}
				func_19(&(uParam0->f_1), 0, 0);
				func_518(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_18(&(uParam0->f_5), 3000, 0))
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
				func_517();
				func_518(uParam0, 2);
			}
			break;
		
		case 2:
			func_517();
			if (func_18(&(uParam0->f_1), 15000, 0))
			{
				if (func_619("AMEV_LBD_HELP"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_518(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_18(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				func_518(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			return 1;
	}
	return 0;
}

void func_517()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_782(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF())
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_401("AMEV_LBD_HELP", -1);
			func_400(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_518(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_519()
{
	Global_2453273 = 1;
}

int func_520(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_539(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_65 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_66 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_521(&Var0);
}

int func_521(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_524(uParam0, uParam0->f_16);
	func_523(uParam0);
	if (func_522(uParam0->f_1))
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
				if (func_341(Global_2432628.f_2198[iVar0 /*72*/].f_1))
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

int func_522(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_523(var uParam0)
{
	if (func_343(uParam0->f_1))
	{
		uParam0->f_66 = func_302();
	}
}

void func_524(var uParam0, int iParam1)
{
	if (func_343(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_26())
	{
		return;
	}
	if (func_341(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_525(iParam1, -2, 0, 0);
		}
	}
}

int func_525(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_377(iParam0))
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
	if (func_377(unk_0x0C1D3C552325765B()) || (func_538() && func_537()))
	{
		uVar1 = func_536();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_782(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_535(iParam1, iParam0, 0);
							}
							else
							{
								return func_532(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_532(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_535(iParam1, iParam0, 0);
				}
				else
				{
					return func_526(0, -1, 0);
				}
			}
			else
			{
				return func_526(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_535(iParam1, iParam0, 0);
		}
		else
		{
			return func_532(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_532(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_526(bool bParam0, int iParam1, bool bParam2)
{
	return func_527(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_527(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_467(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_531(1);
				}
				else
				{
					return func_531(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_528(iVar0, iParam2, 1);
			}
			else
			{
				return func_528(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_531(1);
	}
	return func_531(0);
}

int func_528(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_530(iParam0, iParam1);
	if (func_529(Global_1626500.f_83867))
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

int func_529(int iParam0)
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

int func_530(int iParam0, int iParam1)
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
			if (!func_467(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_531(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_532(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if ((func_534(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_467(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_531(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_533(1);
			}
			else
			{
				return func_527(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_531(1);
			}
			else
			{
				return func_527(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_301(iParam0);
	if (!iVar3 == -1)
	{
		return func_299(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_533(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_534(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_535(int iParam0, int iParam1, bool bParam2)
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
		iVar0 = func_527(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_536()
{
	return Global_2359301.f_2;
}

bool func_537()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_538()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

void func_539(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_26();
	uParam1->f_17 = func_26();
	uParam1->f_18 = func_26();
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

int func_540(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar1 = func_26();
	iVar2 = func_26();
	return func_541(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_541(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_539(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_521(&Var0);
}

char* func_542(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		uVar0 = func_547(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return uVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		uVar0 = func_545(iParam0, 0);
		return uVar0;
	}
	if (((func_221(iParam0, 28) || func_221(unk_0x0C1D3C552325765B(), 28)) || func_544(iParam0)) && !func_543(iParam0))
	{
		return func_545(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_26())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_545(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_26())
	{
		uVar0 = func_547(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar0))
		{
			return func_545(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_543(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

char* func_545(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_285(iParam0, 1))
		{
			return func_546();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

char* func_546()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

var func_547(var uParam0)
{
	return uParam0;
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		if (func_549(1))
		{
			unk_0x88B0F0DC270164B7(&Global_1573949, 1);
		}
	}
	else if (func_549(2))
	{
		unk_0x88B0F0DC270164B7(&Global_1573949, 2);
	}
}

int func_549(int iParam0)
{
	var uVar0;
	
	uVar0 = func_251(2514, -1, 0);
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

int func_550(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_539(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_521(&Var0);
}

int func_551(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_622(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_99.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_99.f_27 == joaat("rhino") || Local_99.f_27 == joaat("hydra"))
	{
		return Local_99.f_465[0 /*4*/].f_1 == Local_99.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_99.f_594[0 /*4*/].f_1 == Local_99.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_552()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_622(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_99.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_553()
{
	if (!func_685())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9694) * Global_262145.f_9883));
	}
	if ((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9755) * Global_262145.f_9885));
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9755) * Global_262145.f_9885));
	}
	return 0;
}

void func_554(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_564())
		{
			if (func_563(0))
			{
				if (!func_357(0))
				{
					if (unk_0xCB129F9A01D14082(func_562()))
					{
						if (func_561() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_561());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_559(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_558("GB_BCUT_TICK1", func_562(), iVar0, 0, 0, 1, 1);
						}
						func_557(20);
						func_555(func_562(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_555(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_782(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_556(iParam0));
	}
}

var func_556(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_557(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_558(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x212C24688D441F9E(func_525(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_508(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_503(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_559(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_560(1);
	}
	else
	{
		iVar1 = func_560(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_560(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_561()
{
	return Global_262145.f_10821;
}

int func_562()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_563(bool bParam0)
{
	return func_297(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_564()
{
	return func_332(unk_0x0C1D3C552325765B());
}

int func_565()
{
	int iVar0;
	
	if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 6) && !unk_0x08BA6DD398CA197C(Local_99.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_99.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_566()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_73[iVar0]))
		{
			if (!func_104(Local_99.f_73[iVar0]))
			{
				func_24(&(Local_99.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar0]))
		{
			if (func_31(Local_99.f_48[iVar0]))
			{
				func_24(&(Local_99.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_567(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x6AC3C3A7CD358D90() < iParam0)
	{
		if (bParam2)
		{
			func_572(sParam3, sParam4, 1);
		}
		if (func_571(26, -1))
		{
			func_569(26, -1);
		}
		return 1;
	}
	if (func_21(&(Global_1573924.f_18)))
	{
		if (!func_18(&(Global_1573924.f_18), 7500, 0))
		{
			return 0;
		}
		func_101(&(Global_1573924.f_18));
	}
	if (func_568())
	{
		if (bParam2)
		{
			func_572(sParam3, sParam4, 0);
		}
		if (func_571(26, -1))
		{
			func_569(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x8BCACDC751B3961A() < iParam0)
	{
		if (bParam2)
		{
			func_572(sParam3, sParam4, 1);
		}
		if (func_571(26, -1))
		{
			func_569(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_568()
{
	return unk_0x08BA6DD398CA197C(Global_1573924.f_1, 0);
}

void func_569(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x9460FEB503073236(0, iParam1);
			break;
		
		default:
			uVar1 = func_570(iParam1);
			iVar0 = unk_0x680A5FBB1F20F775(uVar1);
			if (unk_0x08BA6DD398CA197C(iVar0, iParam0))
			{
				unk_0x09C86C0C5CA26B1E(&iVar0, iParam0);
				unk_0x9460FEB503073236(iVar0, iParam1);
			}
			break;
	}
}

int func_570(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_17();
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

bool func_571(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	uVar0 = func_570(iParam1);
	uVar1 = unk_0x680A5FBB1F20F775(uVar0);
	return unk_0x08BA6DD398CA197C(uVar1, iParam0);
}

void func_572(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 2) && !func_197(unk_0x0C1D3C552325765B())) && !func_196(unk_0x0C1D3C552325765B()))
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
		func_583(65, sParam0, sParam1, 1, -1, 2);
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 2);
	}
}

void func_573()
{
	Global_2482149.f_1651.f_56 = 1;
}

void func_574()
{
	Global_2482149.f_1651.f_54 = 1;
}

bool func_575()
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 11);
}

int func_576()
{
	if (iLocal_3640 > -1)
	{
		if (func_104(Local_99.f_7[iLocal_3640]))
		{
			if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iLocal_3640])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_577(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xA277242E6FB38513(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_578(bool bParam0)
{
	if (!func_685())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9693) * Global_262145.f_9882));
	}
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9754) * Global_262145.f_9884));
	}
	if ((unk_0x08BA6DD398CA197C(Local_99.f_3, 0) && unk_0x08BA6DD398CA197C(Local_99.f_3, 1)) && unk_0x08BA6DD398CA197C(Local_99.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9754) * Global_262145.f_9884));
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9754) * Global_262145.f_9884));
	}
	return 0;
}

char* func_579()
{
	if (Local_99.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0x1E3C80E7C4B8041B(Local_99.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_580(int iParam0)
{
	if (func_234())
	{
		if (iParam0 == 1)
		{
			if (Global_2482149.f_4255 == -1)
			{
				Global_2482149.f_4255 = 60000;
			}
			func_7(&(Global_2482149.f_4253), 0, 0);
			if (Global_2482149.f_4258 == -1)
			{
				Global_2482149.f_4258 = 10000;
			}
			func_7(&(Global_2482149.f_4256), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_624(1);
		}
		if ((!unk_0x1504F110F2576375() && !func_581()) && !func_240(unk_0x0C1D3C552325765B()))
		{
			Global_978174 = 0;
		}
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_8 = 0;
	}
}

bool func_581()
{
	return Global_2442442.f_717;
}

int func_582(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
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
	func_539(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_521(&Var0);
}

int func_583(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_539(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_521(&Var0);
}

void func_584(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 4);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 4);
	}
}

void func_585(bool bParam0)
{
	int iVar0;
	
	if (unk_0x0604A0F4F09283DF(unk_0xA0081090911D13E5(), 5) != 0)
	{
		unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 177, 1);
		unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_251(578, -1, 0));
		if (func_602())
		{
			unk_0x68E8E6E200A00B62(unk_0x0C1D3C552325765B(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_601())
		{
			unk_0x68E8E6E200A00B62(unk_0x0C1D3C552325765B(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_598(3610, -1, -1))
		{
		}
		iVar0 = func_251(2032, -1, 0);
		unk_0x9F207F50E0FBF3A7(unk_0x0C1D3C552325765B(), func_597(unk_0x21F191D9AFF98B5E(unk_0x0C1D3C552325765B()), iVar0));
		if (func_563(0))
		{
			unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_251(578, -1, 0));
		}
		else
		{
			unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_596(Global_2489588));
		}
		func_595(unk_0x0C1D3C552325765B(), iVar0);
		unk_0xB684B99E13D983C3(unk_0x0C1D3C552325765B(), 5, func_590(unk_0xA0081090911D13E5(), iVar0), func_589(unk_0xA0081090911D13E5(), iVar0), 0);
		func_588(func_251(2032, -1, 0), 1);
		Global_2482149.f_273 = 1;
		func_586(unk_0x0C1D3C552325765B(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_586(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_251(2032, -1, 0);
		}
		unk_0xB684B99E13D983C3(iParam0, 5, func_590(unk_0x21F191D9AFF98B5E(iParam0), iParam2), func_589(unk_0x21F191D9AFF98B5E(iParam0), iParam2), 0);
		func_595(iParam0, iParam2);
		unk_0x9F207F50E0FBF3A7(iParam0, func_597(unk_0x21F191D9AFF98B5E(iParam0), iParam2));
		unk_0xA27FDFE5C0EBB875(unk_0x21F191D9AFF98B5E(iParam0), 5, func_590(unk_0x21F191D9AFF98B5E(iParam0), iParam2), func_589(unk_0x21F191D9AFF98B5E(iParam0), iParam2), func_597(unk_0x21F191D9AFF98B5E(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_251(578, -1, 0);
		}
		if (func_563(1) && func_587(unk_0x0C1D3C552325765B()))
		{
			unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_596(Global_2489588));
		}
		else
		{
			unk_0x77F98D6F2BAFD419(iParam0, iParam1);
		}
		if (func_602())
		{
			unk_0x68E8E6E200A00B62(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_601())
		{
			unk_0x68E8E6E200A00B62(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0xF674E664795C8CB3(unk_0x21F191D9AFF98B5E(iParam0), 177, 1);
	}
}

bool func_587(int iParam0)
{
	return func_221(iParam0, 10);
}

void func_588(int iParam0, int iParam1)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		func_457(2032, iParam0, -1, 1, 0);
		unk_0xB684B99E13D983C3(unk_0x0C1D3C552325765B(), 5, func_590(unk_0xA0081090911D13E5(), iParam0), func_589(unk_0xA0081090911D13E5(), iParam0), 0);
		func_595(unk_0x0C1D3C552325765B(), iParam0);
		unk_0x9F207F50E0FBF3A7(unk_0x0C1D3C552325765B(), func_597(unk_0xA0081090911D13E5(), iParam0));
		if ((iParam1 && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) && unk_0x0604A0F4F09283DF(unk_0xA0081090911D13E5(), 5) != 0)
		{
			func_586(unk_0x0C1D3C552325765B(), -1, -1);
		}
	}
}

int func_589(int iParam0, int iParam1)
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

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x0604A0F4F09283DF(iParam0, 11);
	if (unk_0x0604A0F4F09283DF(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x705BC1BB91F530B5(iParam0);
	uVar3 = unk_0x1CB19F5BE62B1507(iParam0, 8, unk_0x0604A0F4F09283DF(iParam0, 8), unk_0xE2E31A57FC3F8410(iParam0, 8));
	if (unk_0xE2ADF4B06E90B1E2(uVar3, joaat("OVER_JACKET"), 8))
	{
		return func_594(iParam0, iParam1);
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
		uVar5 = unk_0x1CB19F5BE62B1507(iParam0, 11, iVar0, unk_0xE2E31A57FC3F8410(iParam0, 11));
		if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_593(uVar5, 0);
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
						iVar0 = func_592(uVar5);
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
						iVar0 = func_592(uVar5);
						break;
					}
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_591(uVar5, 0);
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
					iVar0 = func_592(uVar5);
					break;
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0xE2ADF4B06E90B1E2(uVar5, -1086258388, 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_594(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, -872449705, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 144417099, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, -102825006, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_21"), 0))
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
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (59 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
			else
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 970679185, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 83294665, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 382246252, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (59 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_594(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xE2ADF4B06E90B1E2(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("SILK_ROBE"), 0)) || unk_0xE2ADF4B06E90B1E2(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_592(uVar5);
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

int func_591(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_592(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_593(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_594(int iParam0, int iParam1)
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

void func_595(int iParam0, int iParam1)
{
	if (func_602())
	{
		if (iParam1 > 46)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xEA088391B09C3682(iParam0);
		}
	}
	else if (func_601())
	{
		if (iParam1 > 0)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xEA088391B09C3682(iParam0);
		}
	}
}

int func_596(var uParam0)
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

int func_597(int iParam0, int iParam1)
{
	return 0;
}

int func_598(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar1 = func_600(iParam0, iParam1);
	uVar2 = func_599(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_599(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_600(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

bool func_601()
{
	return unk_0x6E373DDF41F95D44(joaat("mppilot"));
}

bool func_602()
{
	return unk_0x6E373DDF41F95D44(joaat("mplts"));
}

void func_603(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 11))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 11);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 11))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1641), 11);
	}
}

void func_604(bool bParam0)
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

void func_605()
{
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
}

void func_606(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (func_234())
		{
			func_580(0);
			func_608();
		}
		if (func_250(0))
		{
			iVar0 = func_251(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			func_608();
		}
		if (func_250(func_201(func_185(unk_0x0C1D3C552325765B()))))
		{
			iVar0 = func_251(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, func_201(func_185(unk_0x0C1D3C552325765B())));
			func_608();
		}
		if (func_607())
		{
			func_608();
		}
		if (func_185(unk_0x0C1D3C552325765B()) > -1)
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 7);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 7);
	}
}

int func_607()
{
	if (Global_2432628.f_654.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_608()
{
	if (func_607())
	{
		Global_2432628.f_654.f_16 = 1;
	}
}

void func_609(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0756AF366187C194("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0756AF366187C194("WantedMusicDisabled", 1);
	}
	Global_2482149.f_4611 = -1;
	bVar0 = (func_230(unk_0x0C1D3C552325765B(), 0) && func_222(unk_0x0C1D3C552325765B()));
	if (bParam6)
	{
		func_618(21, 1);
	}
	else
	{
		func_617(iParam0, -1);
		if (func_197(unk_0x0C1D3C552325765B()))
		{
			Global_1573924.f_3 = iParam0;
		}
		else
		{
			func_647(iParam0);
		}
		Global_1573924.f_4 = -1;
		if (func_197(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 5);
		}
		if ((func_234() && !func_229()) || func_198(unk_0x0C1D3C552325765B(), 21))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 4);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 17);
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 20);
		if (func_616(iParam0))
		{
			func_615();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_614(fParam1);
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
		if (func_613(iParam0))
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
				func_424(1);
				if (func_549(0))
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_422(1);
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
		}
		if (bParam5)
		{
			func_612();
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_610(iParam0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 21);
			}
		}
	}
	Global_2471085 = 1;
}

int func_610(int iParam0)
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
	if (func_611())
	{
		return 1;
	}
	return 0;
}

int func_611()
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

void func_612()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4602), 0);
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_223(unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_614(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_417())
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

void func_615()
{
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_200 = 0;
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4422), 1);
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_617(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_250(0) || func_250(func_201(iVar0)))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 2);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 2);
		}
	}
}

void func_618(int iParam0, bool bParam1)
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

bool func_619(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_620()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_99.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	iVar1 = unk_0xAF3D6F27CC1E594E(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0x8FD32443A080784B(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!unk_0xEB361B4BD195A4D3(iVar4))
			{
				if (unk_0x54F0AEFB11EA090A(iVar4))
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

void func_621(bool bParam0)
{
	var uVar0;
	
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		uVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (unk_0x775F8FFC8E29F525(uVar0))
		{
			unk_0x39800A40136ECF37(uVar0, bParam0);
			unk_0xE5D4D5071B67B5E9(iVar0, !bParam0);
		}
	}
}

void func_622(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_99.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_623()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (iVar0 != -1)
	{
		Global_1614576[iVar0 /*324*/] = -1;
	}
}

void func_624(bool bParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_234())
		{
			if (func_782(unk_0x0C1D3C552325765B(), 1, 0))
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
			if (func_782(unk_0x0C1D3C552325765B(), 1, 1))
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

void func_625(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2453905 = func_185(unk_0x0C1D3C552325765B());
		if (Global_2453905 == -1)
		{
			Global_2453905 = Global_1573924.f_4;
		}
		if (func_646(Global_2453905) == 0)
		{
			if (func_645(1) > 0)
			{
				func_644(26, -1);
			}
		}
		if (func_234())
		{
			func_580(0);
			func_608();
		}
		if (func_250(0))
		{
			iVar1 = func_251(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&iVar1, 0);
			func_608();
		}
		if (func_250(func_201(func_185(unk_0x0C1D3C552325765B()))))
		{
			iVar1 = func_251(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&iVar1, func_201(func_185(unk_0x0C1D3C552325765B())));
			func_608();
		}
		if (func_607())
		{
			func_608();
		}
		unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 0);
	}
	else
	{
		if ((!func_216() && !func_643()) && !func_642())
		{
			Global_2453905 = -1;
			func_569(26, -1);
		}
		else if (func_646(Global_2453905) == 0)
		{
			iVar0 = func_628(1);
			if (iVar0 > 0)
			{
				func_626(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_463(1924, 1, -1);
				func_626(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_571(26, -1))
		{
			Global_2453905 = -1;
			func_569(26, -1);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 0);
	}
}

void func_626(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_447(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_627(iParam0))
	{
		func_445(iParam0, iVar0);
	}
	else
	{
		func_449(iParam0, iVar0);
	}
}

int func_627(int iParam0)
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

int func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2452799 == 0)
	{
		return 0;
	}
	if (func_642())
	{
		if (unk_0x1504F110F2576375() || (func_641() || func_639()))
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
	if (func_638(Global_100581.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2451706)
	{
		iVar0 = 1;
	}
	if (func_637(512))
	{
		iVar0 = 1;
	}
	if (func_636(128))
	{
		iVar0 = 1;
	}
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_163())
	{
		iVar0 = 0;
	}
	if (Global_2452238)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_634())
		{
			if (Global_1626500.f_84506 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = 0;
	}
	if (func_633())
	{
		iVar0 = 0;
	}
	if ((Global_2451781 || Global_2451780) || Global_1318055)
	{
		if (func_639())
		{
			iVar0 = 0;
		}
	}
	Global_2452238 = 0;
	Global_2451780 = 0;
	Global_2451781 = 0;
	Global_1318055 = 0;
	Global_2451706 = 0;
	func_631(&(Global_100581.f_1), 32);
	func_630(512);
	func_629(128);
	return iVar0;
}

void func_629(int iParam0)
{
	Global_100638 = (Global_100638 - (Global_100638 && iParam0));
}

void func_630(int iParam0)
{
	Global_100639 = (Global_100639 - (Global_100639 && iParam0));
}

void func_631(var uParam0, int iParam1)
{
	func_632(uParam0, iParam1);
}

void func_632(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_633()
{
	if (((Global_1573865 || Global_1573836) || func_15(unk_0x0C1D3C552325765B(), 0)) || func_538())
	{
		return 1;
	}
	return 0;
}

int func_634()
{
	switch (func_635())
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

int func_635()
{
	return Global_2443212.f_1.f_2818;
}

bool func_636(int iParam0)
{
	return (Global_100638 && iParam0) != 0;
}

bool func_637(int iParam0)
{
	return (Global_100639 && iParam0) != 0;
}

bool func_638(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_639()
{
	if (func_646(Global_2453905))
	{
		return 0;
	}
	if (func_640(unk_0x0C1D3C552325765B(), 146))
	{
		return 1;
	}
	return 0;
}

int func_640(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/] == iParam1)
	{
		return func_223(iParam0);
	}
	return 0;
}

int func_641()
{
	if (func_646(Global_2453905))
	{
		return 0;
	}
	if (func_223(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

bool func_642()
{
	return unk_0x08BA6DD398CA197C(Global_1312419, 0);
}

bool func_643()
{
	return Global_1315198;
}

void func_644(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x9460FEB503073236(0, iParam1);
			break;
		
		default:
			uVar1 = func_570(iParam1);
			iVar0 = unk_0x680A5FBB1F20F775(uVar1);
			if (!unk_0x08BA6DD398CA197C(iVar0, iParam0))
			{
				unk_0x88B0F0DC270164B7(&iVar0, iParam0);
				unk_0x9460FEB503073236(iVar0, iParam1);
			}
			break;
	}
}

int func_645(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_163())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_634())
		{
			if (Global_1626500.f_84506 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = 0;
	}
	if (func_633())
	{
		iVar0 = 0;
	}
	Global_2452799 = 1;
	return iVar0;
}

int func_646(int iParam0)
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

void func_647(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/] = iParam0;
}

void func_648(int iParam0)
{
	Global_2453035 = iParam0;
}

void func_649(int iParam0)
{
	if (func_195())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0x08BA6DD398CA197C(iLocal_1310, 0))
			{
				if ((((func_651(60000) && !unk_0x598A9E990F05F82C()) && !func_385()) && !unk_0x84C71F36E7D97756()) && func_402(0, 1, 1, 1))
				{
					if (!func_685())
					{
						func_650("UW_HELP1", func_579(), func_578(1), 30000);
					}
					else
					{
						func_650("UW_HELP1C", func_579(), func_578(1), 30000);
					}
					func_400(0);
					unk_0xAB16AADE80707D47(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0x88B0F0DC270164B7(&iLocal_1310, 0);
				}
			}
			break;
	}
}

void func_650(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

bool func_651(int iParam0)
{
	return unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2412476, unk_0x4B50AAB32FBE0483())) > iParam0;
}

void func_652()
{
	int iVar0;
	
	unk_0x09C86C0C5CA26B1E(&iLocal_1311, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_653(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1311, 15))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 15))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 15);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 15))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 15);
	}
}

void func_653(int iParam0)
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
	
	if (unk_0x0E091C9F3918F674(Local_99.f_7[iParam0]))
	{
		if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 0))
		{
			if (Local_99.f_241 == 0)
			{
			}
		}
		if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 0))
		{
			if (!func_195())
			{
				if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1, iParam0))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_1311, 15))
						{
							if (unk_0x02056DA113641E74(unk_0xA0081090911D13E5()) == unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]))
							{
								unk_0x88B0F0DC270164B7(&iLocal_1311, 15);
							}
						}
						if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 0))
						{
							if (func_657("UW_HELP2", func_579()) || func_657("UW_HELP2C", func_579()))
							{
								unk_0x94724F7C938EBE34(1);
							}
							if (!func_391(unk_0x0C1D3C552325765B()))
							{
								func_584(1);
							}
							iVar0 = func_656(unk_0xA0081090911D13E5(), 0);
							if (func_577("UW_HELP1", func_579(), func_578(1)) || func_577("UW_HELP1C", func_579(), func_578(1)))
							{
								unk_0x94724F7C938EBE34(1);
							}
							if (Local_99.f_463 != -1)
							{
								if (iVar0 > (Local_99.f_463 - 2))
								{
									iVar0 = (Local_99.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1), iParam0);
							Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 = iParam0;
							unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 398, 1);
							func_187();
							iLocal_3703 = iVar0;
						}
						else if (Local_99.f_241 == 0)
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1310, 1))
							{
								if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 0)
								{
									if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_402(0, 1, 1, 1))
										{
											if (!func_685())
											{
												func_655("UW_HELP2", func_579(), 30000);
											}
											else
											{
												func_655("UW_HELP2C", func_579(), 30000);
											}
											func_400(1);
											unk_0x88B0F0DC270164B7(&iLocal_1310, 1);
										}
									}
								}
							}
							if (!func_234())
							{
								if (unk_0x08BA6DD398CA197C(iLocal_1311, 2))
								{
									unk_0x09C86C0C5CA26B1E(&iLocal_1311, 2);
								}
								if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
								{
									if (!unk_0x08BA6DD398CA197C(iLocal_1310, 4))
									{
										if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 12))
										{
											unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 12);
										}
										if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
										{
											if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_402(0, 1, 1, 1))
												{
													if (!func_685())
													{
														func_401("UW_COPS", 30000);
													}
													else
													{
														func_401("UW_COPSC", 30000);
													}
													func_400(1);
													unk_0x88B0F0DC270164B7(&iLocal_1310, 4);
												}
											}
										}
									}
									else if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0x09C86C0C5CA26B1E(&iLocal_1310, 4);
									}
								}
								else
								{
									if (unk_0x08BA6DD398CA197C(iLocal_1310, 4))
									{
										unk_0x09C86C0C5CA26B1E(&iLocal_1310, 4);
									}
									if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 12))
									{
										unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 12))
								{
									unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 12);
								}
								if (!unk_0x08BA6DD398CA197C(iLocal_1311, 2))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_402(0, 1, 1, 1))
										{
											if (!func_685())
											{
												func_401("UW_PASSMD", 30000);
											}
											else
											{
												func_401("UW_PASSMD", 30000);
											}
											func_400(1);
											unk_0x88B0F0DC270164B7(&iLocal_1311, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 == 0)
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_99.f_28)
								{
									if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, (0 + iVar2)))
									{
										func_8();
										unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1, iParam0))
								{
									unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1), iParam0);
								}
								if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 != -1)
								{
									Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 = -1;
								}
								if (func_619("UW_TIMEL"))
								{
									unk_0x94724F7C938EBE34(1);
								}
								if (func_619("UW_TIMELA"))
								{
									unk_0x94724F7C938EBE34(1);
								}
								if (func_391(unk_0x0C1D3C552325765B()))
								{
									func_584(0);
								}
								unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 398, 0);
							}
							else
							{
								if (Local_99.f_241 == 0 && !unk_0x08BA6DD398CA197C(Local_99.f_3, 4))
								{
									iVar0 = func_656(unk_0xA0081090911D13E5(), 0);
									if (Local_99.f_463 != -1)
									{
										if (iVar0 > (Local_99.f_463 - 2))
										{
											iVar0 = (Local_99.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3703)
									{
										unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1), iParam0);
										unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), (0 + iLocal_3703 + 1));
									}
								}
								bVar1 = false;
								if (func_252())
								{
									if (Local_99.f_413 > -1)
									{
										iVar3 = (Local_99.f_413 - func_121(&(Local_99.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_654(bVar1);
								if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xE5104FB3B61B1216(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]));
								}
								if (!func_21(&uLocal_1533))
								{
									func_19(&uLocal_1533, 0, 0);
								}
								else if (func_18(&uLocal_1533, 2000, 0))
								{
									if (unk_0x08BA6DD398CA197C(Local_99.f_3, 9) || !func_685())
									{
										if (func_619("UW_MINV"))
										{
										}
										if (!unk_0x08BA6DD398CA197C(iLocal_1310, 5))
										{
											if (Local_99.f_28 > 1 || (Local_99.f_28 == 1 && func_107() > 1))
											{
												if (func_21(&(Local_99.f_326)))
												{
													if (!unk_0x598A9E990F05F82C())
													{
														if (func_107() > 1)
														{
															func_401("UW_TIMELA", 30000);
														}
														else
														{
															func_401("UW_TIMEL", 30000);
														}
														func_400(1);
														unk_0x88B0F0DC270164B7(&iLocal_1310, 5);
													}
												}
											}
										}
									}
									else if (func_685())
									{
										if (!unk_0x08BA6DD398CA197C(Local_99.f_3, 9))
										{
											if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0x08BA6DD398CA197C(iLocal_1310, 14))
												{
													if (!unk_0x598A9E990F05F82C())
													{
														func_401("UW_MINV", 30000);
														func_400(1);
														unk_0x88B0F0DC270164B7(&iLocal_1310, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_99.f_241 == 0)
					{
						if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_619("UW_VALK") && !func_619("UW_VALKC"))
							{
								unk_0xED3BAEA4520667CF();
								if (unk_0x08BA6DD398CA197C(iLocal_1310, 8))
								{
									unk_0x09C86C0C5CA26B1E(&iLocal_1310, 8);
								}
							}
							if (!unk_0x08BA6DD398CA197C(iLocal_1310, 8))
							{
								if (!unk_0x598A9E990F05F82C())
								{
									iVar6 = 0;
									iVar4 = unk_0x8EF0E5E933BE561D(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0x6315EBE95A97CADF(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_685())
										{
											func_401("UW_VALK", 30000);
										}
										else
										{
											func_401("UW_VALKC", 30000);
										}
										func_400(1);
										unk_0x88B0F0DC270164B7(&iLocal_1310, 8);
									}
									if (!unk_0x08BA6DD398CA197C(iLocal_1310, 8))
									{
										if (func_685())
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
														if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar7]))
														{
															if (func_104(Local_99.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0x6315EBE95A97CADF(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar7]), (iVar5 - 1), 0))
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
												func_401("UW_VALKC", 30000);
												func_400(1);
												unk_0x88B0F0DC270164B7(&iLocal_1310, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_99.f_241 == 1)
					{
						if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1, iParam0))
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1310, 6))
							{
								if (func_104(Local_99.f_7[iParam0]))
								{
									if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
									{
										if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0])))
										{
											if (!unk_0x08BA6DD398CA197C(iLocal_1310, 7))
											{
												if ((unk_0x2A57AED61E15C7C7(0, 75) || unk_0x7F6103BD34B839B0(0, 75)) || unk_0xFEB2816B7220E998(0, 75))
												{
													unk_0x88B0F0DC270164B7(&iLocal_1310, 7);
												}
											}
											if (unk_0x08BA6DD398CA197C(iLocal_1310, 7))
											{
												if (!unk_0x598A9E990F05F82C())
												{
													if (func_685())
													{
														func_401("UW_EXITVC", 30000);
													}
													else
													{
														func_401("UW_EXITV", 30000);
													}
													func_400(1);
													unk_0x88B0F0DC270164B7(&iLocal_1310, 6);
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
					if (unk_0x0E091C9F3918F674(Local_99.f_7[iVar10]))
					{
						if (unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar10]), 0))
						{
							if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_250(0))
					{
						iVar9 = func_251(2460, -1, 0);
						unk_0x09C86C0C5CA26B1E(&iVar9, 0);
						func_457(2460, iVar9, -1, 1, 0);
						func_608();
						if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 9))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 9);
						}
					}
					if (func_250(8))
					{
						iVar9 = func_251(2460, -1, 0);
						unk_0x09C86C0C5CA26B1E(&iVar9, 8);
						func_457(2460, iVar9, -1, 1, 0);
						func_608();
						if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 9))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
					{
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 = 0;
					}
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 12))
					{
						unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 12);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_1311, 14))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (func_104(Local_99.f_7[iParam0]))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_402(0, 1, 1, 1))
								{
									if (!func_242(129, 0, 0))
									{
										if (!func_685())
										{
											func_401("UW_TUT", -1);
										}
										else
										{
											func_401("UW_TUTC", -1);
										}
										func_400(1);
										unk_0x88B0F0DC270164B7(&iLocal_1311, 14);
									}
									else
									{
										if (!func_685())
										{
											func_401("UW_HIDE", -1);
										}
										else
										{
											func_401("UW_HIDEC", -1);
										}
										func_400(1);
										unk_0x88B0F0DC270164B7(&iLocal_1311, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_782(unk_0x0C1D3C552325765B(), 1, 1) && Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_1 != 0)
			{
				if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4443, 1))
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4443), 1);
				}
			}
			else if (unk_0x08BA6DD398CA197C(Global_2482149.f_4443, 1))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4443), 1);
			}
		}
	}
}

void func_654(bool bParam0)
{
	unk_0xABC36CFE4F3421A0(0, 71, 1);
	unk_0xABC36CFE4F3421A0(0, 72, 1);
	unk_0xABC36CFE4F3421A0(0, 76, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	if (bParam0)
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 80, 1);
	unk_0xABC36CFE4F3421A0(0, 69, 1);
	unk_0xABC36CFE4F3421A0(0, 70, 1);
	unk_0xABC36CFE4F3421A0(0, 92, 1);
	unk_0xABC36CFE4F3421A0(0, 68, 1);
	unk_0xABC36CFE4F3421A0(0, 91, 1);
	unk_0xABC36CFE4F3421A0(0, 74, 1);
	unk_0xABC36CFE4F3421A0(0, 86, 1);
	unk_0xABC36CFE4F3421A0(0, 81, 1);
	unk_0xABC36CFE4F3421A0(0, 82, 1);
	unk_0xABC36CFE4F3421A0(0, 99, 1);
	unk_0xABC36CFE4F3421A0(0, 100, 1);
	unk_0xABC36CFE4F3421A0(0, 65, 1);
	unk_0xABC36CFE4F3421A0(0, 105, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 107, 1);
	unk_0xABC36CFE4F3421A0(0, 110, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 87, 1);
	unk_0xABC36CFE4F3421A0(0, 88, 1);
	unk_0xABC36CFE4F3421A0(0, 113, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 117, 1);
	unk_0xABC36CFE4F3421A0(0, 118, 1);
	unk_0xABC36CFE4F3421A0(0, 119, 1);
	unk_0xABC36CFE4F3421A0(0, 51, 1);
	unk_0xABC36CFE4F3421A0(0, 47, 1);
	unk_0xABC36CFE4F3421A0(0, 24, 1);
	unk_0xABC36CFE4F3421A0(0, 257, 1);
}

void func_655(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam2);
}

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0x39FEE545B315414E(iParam0, iParam1))
		{
			iVar0 = unk_0xF8DB47D339B8B953(iParam0, iParam1);
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					iVar1 = unk_0xAF3D6F27CC1E594E(unk_0x705BC1BB91F530B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x6315EBE95A97CADF(iVar0, iVar3, 0))
						{
							if (unk_0x8FD32443A080784B(iVar0, iVar3, 0) == iParam0)
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

var func_657(char* sParam0, char* sParam1)
{
	unk_0xA277242E6FB38513(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_658()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x0E091C9F3918F674(Local_99.f_7[iVar0]) && unk_0xB480350E4250D92A(Local_99.f_7[iVar0]))
		{
			iVar1 = unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]);
			if (unk_0xD3FACCDA4D66AEAD(iVar1) && !unk_0x912AD5A10E7633F0(iVar1, 0))
			{
				unk_0x38C96BE92C8372E7(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_659(struct<3> Param0)
{
	Global_2391047 = { Param0 };
	Global_2391050 = 1;
}

void func_660()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_676(iVar0);
				break;
			
			case 168:
				func_661(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_661(int iParam0)
{
	int iVar0;
	
	unk_0x4FD5256AFF6E50B7(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 431:
			func_675(iParam0);
			break;
		
		case 434:
			func_674(iParam0);
			break;
		
		case 433:
			func_673(iParam0);
			break;
		
		case 432:
			func_672(iParam0);
			break;
		
		case 437:
			func_671(iParam0);
			break;
		
		case 439:
			func_668(iParam0);
			break;
		
		case 440:
			func_662(iParam0);
			break;
	}
}

void func_662(int iParam0)
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
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_73[iVar6]))
		{
			return;
		}
		if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6, iVar6))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_271, iVar6))
			{
				if (func_95(iVar6))
				{
					if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]), 0))
					{
						if (unk_0xF78BA9E6CC3CD891(unk_0x0C1D3C552325765B(), unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0x4188FA32E81897F1(unk_0x0C1D3C552325765B(), unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_685())
				{
					if (Local_99.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = unk_0x81C85E54237F8A2E(Local_99.f_465[0 /*4*/].f_2);
						if (iVar9 != func_26())
						{
							if (iVar9 == unk_0x0C1D3C552325765B())
							{
								bVar8 = true;
							}
						}
					}
					else if (unk_0x3CF373660FCFAFCE(Local_99.f_7[0]))
					{
						if (func_104(Local_99.f_7[0]))
						{
							iVar11 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), -1, 0);
							if (iVar11 != 0)
							{
								if (unk_0x54F0AEFB11EA090A(iVar11))
								{
									iVar10 = unk_0xA43666ACD375E339(iVar11);
									if (iVar10 == unk_0x0C1D3C552325765B())
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
			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
			{
				iVar4 = func_667();
				iVar12 = unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_666(iVar12))
				{
					iVar3 = func_42(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar14]) && !unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar14)], func_85(iVar14)))
						{
							iVar13++;
							unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar14)]), func_85(iVar14));
						}
						iVar14++;
					}
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 = (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8++;
				}
				if (Local_716.f_11 == 0)
				{
					Local_716.f_11 = unk_0x39E54E7BC7452169();
				}
				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
				{
					Local_716.f_7 = (Local_716.f_7 + iVar4);
					func_664(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_663();
				}
			}
			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar6);
		}
	}
}

void func_663()
{
	if (!func_21(&uLocal_3680) || (func_21(&uLocal_3680) && func_18(&uLocal_3680, 2000, 0)))
	{
		unk_0xAB16AADE80707D47(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_101(&uLocal_3680);
		func_19(&uLocal_3680, 0, 0);
	}
}

var func_664(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_442(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_665()
{
	if (func_685())
	{
		return Global_262145.f_9757;
	}
	return Global_262145.f_9696;
}

bool func_666(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_667()
{
	if (func_685())
	{
		return Global_262145.f_9756;
	}
	return Global_262145.f_9695;
}

void func_668(int iParam0)
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
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6, iVar6))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_271, iVar6))
			{
				if (func_670(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_669(iVar6))
				{
					if (func_95(iVar6))
					{
						if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]), 0))
						{
							if (unk_0xF78BA9E6CC3CD891(unk_0x0C1D3C552325765B(), unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0x4188FA32E81897F1(unk_0x0C1D3C552325765B(), unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_685())
					{
						if (Local_99.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = unk_0x81C85E54237F8A2E(Local_99.f_465[0 /*4*/].f_2);
							if (iVar9 != func_26())
							{
								if (iVar9 == unk_0x0C1D3C552325765B())
								{
									bVar8 = true;
								}
							}
						}
						else if (unk_0x3CF373660FCFAFCE(Local_99.f_7[0]))
						{
							if (func_104(Local_99.f_7[0]))
							{
								iVar11 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[0]), -1, 0);
								if (iVar11 != 0)
								{
									if (unk_0x54F0AEFB11EA090A(iVar11))
									{
										iVar10 = unk_0xA43666ACD375E339(iVar11);
										if (iVar10 == unk_0x0C1D3C552325765B())
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
					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar12]) && !unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar12)], func_85(iVar12)))
							{
								iVar13++;
								unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar12)]), func_85(iVar12));
							}
							iVar12++;
						}
						Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 = (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
						{
							iVar4 = func_667();
							iVar4 = (iVar4 * iVar3);
							Local_716.f_7 = (Local_716.f_7 + iVar4);
							func_664(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_663();
							if (Local_716.f_11 == 0)
							{
								Local_716.f_11 = unk_0x39E54E7BC7452169();
							}
						}
						unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_669(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			if (Local_733[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_670(int iParam0)
{
	int iVar0;
	
	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			if (iVar0 != unk_0x848AF823A8EA3C62())
			{
				if (Local_733[iVar0 /*18*/].f_11[iParam0] > Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_671(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (unk_0xC2CF02E3462D1EAA("am_kill_list", -1, 0) != func_26())
		{
		}
		if (unk_0xD9E8CA806A80203D())
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_464), Var0.f_2);
		}
	}
}

void func_672(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		unk_0x88B0F0DC270164B7(&uLocal_3647, Var0.f_2);
	}
}

void func_673(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		unk_0x88B0F0DC270164B7(&uLocal_3648, Var0.f_2);
	}
}

void func_674(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(Var0.f_2)], func_85(Var0.f_2)))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(Var0.f_2)]), func_85(Var0.f_2));
		}
	}
}

void func_675(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6, iVar3))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar3);
		}
	}
}

void func_676(int iParam0)
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
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 10))
	{
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6, iVar10))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_271, iVar10))
				{
					if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
					{
						if (unk_0x264883409423C6C3(Var0.f_0))
						{
							if (unk_0x3CF373660FCFAFCE(Local_99.f_73[iVar10]))
							{
								if (unk_0xD3FACCDA4D66AEAD(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar10])))
								{
									if (unk_0x5293F3C38E4842B3(Var0.f_0) == unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar10]))
									{
										if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
										{
											if (unk_0x60F161681C368C4E(Var0.f_1))
											{
												if (unk_0x90897FA118314142(Var0.f_1) == unk_0xA0081090911D13E5())
												{
													if (Var0.f_3)
													{
														iVar13 = unk_0x705BC1BB91F530B5(Var0.f_0);
														if (Local_99.f_27 == joaat("hydra"))
														{
															if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
															{
																iVar16 = func_667();
																if (func_666(iVar13))
																{
																	iVar11 = func_42(iVar13);
																	Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 = (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 + iVar11);
																	iVar16 = (iVar16 * iVar11);
																}
																else
																{
																	Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8++;
																}
																if (Local_716.f_11 == 0)
																{
																	Local_716.f_11 = unk_0x39E54E7BC7452169();
																}
																if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																{
																	Local_716.f_7 = (Local_716.f_7 + iVar16);
																	func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																	func_663();
																}
															}
															unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar10);
														}
														else if (iVar13 == joaat("buzzard"))
														{
															iVar18 = -1;
															iVar18 = -1;
															while (iVar18 <= 3)
															{
																iVar15 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar10]), iVar18, 0);
																if (iVar15 != 0)
																{
																	iVar17 = func_677(iVar15);
																	if (iVar17 > -1)
																	{
																		if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar17)], func_85(iVar17)))
																		{
																			if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar17)], func_85(iVar17)))
																			{
																				unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar17)]), func_85(iVar17));
																				iVar16 = func_667();
																				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8++;
																				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																				{
																					Local_716.f_7 = (Local_716.f_7 + iVar16);
																					func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_663();
																				}
																				if (unk_0x86998240179B9048(unk_0x564EAE6038A81C07(Local_99.f_48[iVar17])))
																				{
																					func_87(&(Local_1327[iVar17 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar18++;
															}
															unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar10);
														}
													}
													else if (!func_104(Local_99.f_73[iVar10]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var0.f_1)))
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
		if (Local_99.f_27 != joaat("hydra"))
		{
			iVar10 = 0;
			while (iVar10 <= 19)
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar10)], func_85(iVar10)))
				{
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
					{
						if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
						{
							if (unk_0x60F161681C368C4E(Var0.f_0))
							{
								if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar10]))
								{
									if (unk_0xD3FACCDA4D66AEAD(unk_0x15F0E6D5AC2852F1(Local_99.f_48[iVar10])))
									{
										if (unk_0x90897FA118314142(Var0.f_0) == unk_0x564EAE6038A81C07(Local_99.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
												{
													if (unk_0x60F161681C368C4E(Var0.f_1))
													{
														iVar14 = unk_0x90897FA118314142(Var0.f_1);
														if (unk_0x54F0AEFB11EA090A(iVar14))
														{
															if (iVar14 == unk_0xA0081090911D13E5())
															{
																if (Var0.f_3)
																{
																	iVar16 = func_667();
																	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
																	{
																		Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8++;
																		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																		{
																			func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			Local_716.f_7 = (Local_716.f_7 + iVar16);
																			func_663();
																		}
																	}
																	if (Local_716.f_11 == 0)
																	{
																		Local_716.f_11 = unk_0x39E54E7BC7452169();
																	}
																	unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
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
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6, iVar10))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_271, iVar10))
						{
							if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
							{
								if (unk_0x264883409423C6C3(Var0.f_0))
								{
									if (unk_0x3CF373660FCFAFCE(Local_99.f_73[iVar10]))
									{
										if (unk_0xD3FACCDA4D66AEAD(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar10])))
										{
											if (unk_0x5293F3C38E4842B3(Var0.f_0) == unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar10]))
											{
												if (unk_0x705BC1BB91F530B5(Var0.f_0) == joaat("savage"))
												{
													if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
													{
														if (Var0.f_3)
														{
															if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
															{
																if (unk_0x60F161681C368C4E(Var0.f_1))
																{
																	iVar14 = unk_0x90897FA118314142(Var0.f_1);
																	if (unk_0x54F0AEFB11EA090A(iVar14))
																	{
																		if (iVar14 == unk_0xA0081090911D13E5())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
																				{
																					iVar11 = func_42(joaat("savage"));
																					Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 = (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 + iVar11);
																					iVar16 = func_667();
																					iVar16 = (iVar16 * iVar11);
																					if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																					{
																						func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																						Local_716.f_7 = (Local_716.f_7 + iVar16);
																						func_663();
																						if (Local_716.f_11 == 0)
																						{
																							Local_716.f_11 = unk_0x39E54E7BC7452169();
																						}
																					}
																					iVar19 = iVar10 * 4;
																					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																					unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar10);
																				}
																			}
																		}
																	}
																	else if (func_670(iVar10))
																	{
																		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
																		{
																			iVar11 = func_42(joaat("savage"));
																			Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 = (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 + iVar11);
																			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																			{
																				iVar16 = func_667();
																				iVar16 = (iVar16 * iVar11);
																				Local_716.f_7 = (Local_716.f_7 + iVar16);
																				func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																				func_663();
																				if (Local_716.f_11 == 0)
																				{
																					Local_716.f_11 = unk_0x39E54E7BC7452169();
																				}
																			}
																			iVar19 = iVar10 * 4;
																			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar10);
																		}
																	}
																	else if (func_669(iVar10))
																	{
																	}
																	else if (unk_0x4188FA32E81897F1(iVar20, Var0.f_0, &uVar21))
																	{
																		if (iVar20 == unk_0x0C1D3C552325765B())
																		{
																			if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
																			{
																				iVar11 = func_42(joaat("savage"));
																				Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 = (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 + iVar11);
																				if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																				{
																					iVar16 = func_667();
																					iVar16 = (iVar16 * iVar11);
																					Local_716.f_7 = (Local_716.f_7 + iVar16);
																					func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_663();
																					if (Local_716.f_11 == 0)
																					{
																						Local_716.f_11 = unk_0x39E54E7BC7452169();
																					}
																				}
																				iVar19 = iVar10 * 4;
																				unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																				unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																				unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																				unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																				unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_6), iVar10);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
															{
																if (unk_0x60F161681C368C4E(Var0.f_1))
																{
																	iVar14 = unk_0x90897FA118314142(Var0.f_1);
																	if (unk_0x54F0AEFB11EA090A(iVar14))
																	{
																		if (iVar14 == unk_0xA0081090911D13E5())
																		{
																			iVar12 = unk_0x39E54E7BC7452169();
																			Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_11[iVar10] = iVar12;
																		}
																	}
																}
															}
															if (!unk_0x1F1B2B6E500380C5(unk_0x5293F3C38E4842B3(Var0.f_0), 0))
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
				if (!unk_0x08BA6DD398CA197C(Local_99.f_272[func_86(iVar10)], func_85(iVar10)))
				{
					if (!unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
					{
						if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
						{
							if (unk_0x60F161681C368C4E(Var0.f_0))
							{
								if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar10]))
								{
									if (unk_0xD3FACCDA4D66AEAD(unk_0x15F0E6D5AC2852F1(Local_99.f_48[iVar10])))
									{
										if (unk_0x90897FA118314142(Var0.f_0) == unk_0x564EAE6038A81C07(Local_99.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
												{
													if (unk_0x60F161681C368C4E(Var0.f_1))
													{
														iVar14 = unk_0x90897FA118314142(Var0.f_1);
														if (unk_0x54F0AEFB11EA090A(iVar14))
														{
															if (iVar14 == unk_0xA0081090911D13E5())
															{
																if (Var0.f_3)
																{
																	if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_17 < 2)
																	{
																		Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8++;
																		if (Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8 <= func_665())
																		{
																			iVar16 = func_667();
																			Local_716.f_7 = (Local_716.f_7 + iVar16);
																			if (Local_716.f_11 == 0)
																			{
																				Local_716.f_11 = unk_0x39E54E7BC7452169();
																			}
																			func_664(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			func_663();
																		}
																	}
																	unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
																}
															}
														}
													}
												}
												else
												{
													unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar10]))
				{
				}
				iVar10++;
			}
		}
	}
}

int func_677(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar1]))
			{
				if (unk_0x564EAE6038A81C07(Local_99.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_678()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_27 != joaat("hydra"))
	{
		if (iLocal_3705 == 0)
		{
			iLocal_3705 = 20;
		}
		if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iLocal_3705]))
		{
			if (!func_31(Local_99.f_48[iLocal_3705]))
			{
				iVar0 = unk_0x73CB307FFAD60025(unk_0x564EAE6038A81C07(Local_99.f_48[iLocal_3705]));
				if (iLocal_3706[iLocal_3705] != iVar0)
				{
					iLocal_3706[iLocal_3705] = iVar0;
					unk_0xDDA2B67F3860CB4F(Local_99.f_48[iLocal_3705], 1);
				}
			}
		}
		iLocal_3705++;
		if (iLocal_3705 == 23)
		{
			iLocal_3705 = 20;
		}
	}
	if (Local_99.f_27 != joaat("hydra") && Local_99.f_27 != joaat("rhino"))
	{
		if (!bLocal_3738)
		{
			if (func_93() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_73[iVar1]))
					{
						if (func_104(Local_99.f_73[iVar1]))
						{
							if (unk_0x705BC1BB91F530B5(unk_0x15F0E6D5AC2852F1(Local_99.f_73[iVar1])) == joaat("savage"))
							{
								unk_0xDDA2B67F3860CB4F(Local_99.f_73[iVar1], 1);
								bLocal_3738 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_73[iLocal_3731]))
	{
		if (func_104(Local_99.f_73[iLocal_3731]))
		{
			iVar0 = unk_0x73CB307FFAD60025(unk_0x564EAE6038A81C07(Local_99.f_73[iLocal_3731]));
			if (iLocal_3732[iLocal_3731] != iVar0)
			{
				iLocal_3732[iLocal_3731] = iVar0;
				if (!bLocal_3738)
				{
					unk_0xDDA2B67F3860CB4F(Local_99.f_73[iLocal_3731], 1);
				}
			}
		}
	}
	iLocal_3731++;
	if (iLocal_3731 == 5)
	{
		iLocal_3731 = 0;
	}
}

void func_679()
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
		if (unk_0x08BA6DD398CA197C(uLocal_3649, iVar0))
		{
			if (Local_99.f_85[iVar0] != 2)
			{
				unk_0x09C86C0C5CA26B1E(&iLocal_3649, iVar0);
			}
		}
		if (unk_0x3CF373660FCFAFCE(Local_99.f_48[iVar0]))
		{
			func_683(iVar0);
			if (!func_31(Local_99.f_48[iVar0]))
			{
				switch (Local_99.f_85[iVar0])
				{
					case 1:
						if (unk_0xB480350E4250D92A(Local_99.f_48[iVar0]))
						{
							if (unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 0))
							{
								uVar2 = unk_0xF8DB47D339B8B953(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 0);
								uVar1 = unk_0x705BC1BB91F530B5(uVar2);
								if (unk_0xFC4346F9DE2AB4AE(uVar1))
								{
									if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0x8FD32443A080784B(iVar2, -1, 0) == unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_26())
											{
												uVar10 = unk_0x21F191D9AFF98B5E(iVar9);
												if (!unk_0xEB361B4BD195A4D3(uVar10))
												{
													if (func_25(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { unk_0xC59DF10B4FC39DF8(iVar10, 1) };
														unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0x1E3C80E7C4B8041B(iVar1))
								{
									if (unk_0x8FD32443A080784B(iVar2, -1, 0) == unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1312[iVar14] != Local_99.f_110[iVar14]))
									{
										if (unk_0x8FD32443A080784B(iVar2, -1, 0) == unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]))
										{
											iVar13 = Local_99.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = unk_0x81C85E54237F8A2E(iVar13);
												if (iVar9 != func_26())
												{
													iVar10 = unk_0x21F191D9AFF98B5E(iVar9);
													if (!unk_0xEB361B4BD195A4D3(iVar10))
													{
														Var3 = { unk_0xC59DF10B4FC39DF8(iVar10, 1) };
														unk_0x228DA122420DEAF4(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 100, 50);
														if (iLocal_1312[iVar14] != Local_99.f_110[iVar14])
														{
															iLocal_1312[iVar14] = Local_99.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1273030092) != 0) && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 1306903184) != 0) && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0x8FD32443A080784B(iVar2, -1, 0) == unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]))
									{
										iVar9 = func_27();
										if (iVar9 != func_26())
										{
											iVar10 = unk_0x21F191D9AFF98B5E(iVar9);
											if (!unk_0xEB361B4BD195A4D3(iVar10))
											{
												fVar11 = func_25(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													unk_0xA10B8E8ED4075619(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), unk_0xC59DF10B4FC39DF8(iVar10, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													unk_0x96F7890AEA06DDAE(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xB480350E4250D92A(Local_99.f_48[iVar0]))
						{
							if (!func_22())
							{
								if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1442466670) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 0))
									{
										if (!unk_0x08BA6DD398CA197C(iLocal_3649, iVar0))
										{
											iVar12 = func_682(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0x08BA6DD398CA197C(iLocal_3649, iVar0))
											{
												func_681(iVar0, func_99(1));
												unk_0x88B0F0DC270164B7(&iLocal_3649, iVar0);
											}
										}
									}
									else
									{
										unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -251125078) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_680() };
							unk_0xD3032BAC1ECE011F(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]));
							unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), 1);
							unk_0x8D95319102961B7A(unk_0x564EAE6038A81C07(Local_99.f_48[iVar0]), Var6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_680()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
		{
			return unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_99.f_30[0 /*3*/];
}

void func_681(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 437;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iParam1);
	}
}

int func_682(int iParam0, float fParam1)
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
		if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar3]))
		{
			if (func_104(Local_99.f_7[iVar3]))
			{
				iVar7 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar3]), -1, 0);
				if (!unk_0xEB361B4BD195A4D3(iVar7))
				{
					if (unk_0x54F0AEFB11EA090A(iVar7))
					{
						Var4 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar3]), 1) };
						fVar2 = func_496(iParam0, Var4, 1);
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

void func_683(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_31(Local_99.f_48[iParam0]))
	{
		if (unk_0xB480350E4250D92A(Local_99.f_48[iParam0]))
		{
			if (unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0])))
			{
				uVar0 = unk_0xF8DB47D339B8B953(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0]), 0);
				if (unk_0x1E3C80E7C4B8041B(unk_0x705BC1BB91F530B5(uVar0)) || unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(iVar0)))
				{
					if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
					{
						unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_48[iParam0]), 5);
					}
				}
			}
		}
	}
}

void func_684(struct<3> Param0)
{
	Global_1573924.f_6 = { Param0 };
}

bool func_685()
{
	return unk_0x08BA6DD398CA197C(Local_99.f_3, 8);
}

void func_686(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_687("kwUfKUus6EuQyNSL8KpY-w");
					func_687("yMTOFLfO2UKwzKrmgPP7kg");
					func_687("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_687("tP5HSeCA0UiHnkRzakdO2Q");
					func_687("uEkrqoerQEmQ0uZRtp4rkw");
					func_687("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_687("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_687("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_687("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_687("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_687("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_687("uEkrqoerQEmQ0uZRtp4rkw");
					func_687("92t91kL3Wkqvl2Kc82cNSA");
					func_687("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_687("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_687("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_687("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_687("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_687("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_687("fOfm7nzMLkav0ldcSCNAzA");
					func_687("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_687("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_687("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_687("Ma78E44OMkGfYPmCPZXUNA");
					func_687("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_687("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_687("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_687("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_687("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_687("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_687("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_687("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_687("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_687("3AAj-muvN0iHI5IMyGlboA");
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
							func_687("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_687("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_687("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_687("fOfm7nzMLkav0ldcSCNAzA");
							func_687("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_687("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_687("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_687("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_687("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_687("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_687("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_687("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_687("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_687("fOfm7nzMLkav0ldcSCNAzA");
							func_687("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_687("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_687("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_687("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_687("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_687("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_687("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_687("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_687("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_687("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_687("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_687("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_687("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_687("aGBjo2rKi0yMDLl3a2ATGA");
									func_687("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_687("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_687("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_687("f2lnL6wZPkGWUowu0yLm1Q");
									func_687("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_687("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_687("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_687("W-OJzHlM-0ym9PsIASYZtw");
									func_687("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_687("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_687("TjGz31AMYE6bGCjAIitu6w");
									func_687("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_687("QmlvLMLCwkOvoZlkAstYxw");
									func_687("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_687("BktATxH9R0Wp2x0kWSbqjw");
									func_687("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_687("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_687("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_687("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_687("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_687("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_687("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_687("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_687("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_687("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_687("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_687(char* sParam0)
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
			if (func_688(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
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

int func_688(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_144(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_689(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_689(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_144(uParam0);
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

void func_690()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 12))
	{
		func_187();
	}
	if (func_685())
	{
		if (iLocal_3639 != Local_99.f_12)
		{
			iLocal_3639 = Local_99.f_12;
			func_187();
		}
	}
	if (!func_195())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0x16833EFAA58E63DB(uLocal_1322[iVar0]))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
				{
					if (func_104(Local_99.f_7[iVar0]))
					{
						Var1 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0) };
						if (!func_691(iVar0, Var1))
						{
							if (!unk_0x08BA6DD398CA197C(Local_99.f_13, iVar0))
							{
								uLocal_1322[iVar0] = unk_0x91B4D18C6AFDC14C(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]));
								unk_0x32479C670EB9962F(uLocal_1322[iVar0], 429);
								func_189(&(uLocal_1322[iVar0]), 29);
								if (!unk_0x08BA6DD398CA197C(iLocal_1310, 20))
								{
									unk_0x3AE9C8E8575D2576(uLocal_1322[iVar0], 1);
									unk_0xFB70601EAE8F9B9E(uLocal_1322[iVar0], 7000);
									unk_0x88B0F0DC270164B7(&iLocal_1310, 20);
								}
								unk_0x420759DE4A6A9555(uLocal_1322[iVar0], 9);
								if (func_685())
								{
									unk_0x6F18BFEFE84565FF(uLocal_1322[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0x6F18BFEFE84565FF(uLocal_1322[iVar0], "UW_BLIP");
								}
								if (!unk_0x08BA6DD398CA197C(iLocal_1311, 3))
								{
									unk_0x07FD940F5798C7D3();
									unk_0x88B0F0DC270164B7(&iLocal_1311, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
			{
				if (!func_104(Local_99.f_7[iVar0]))
				{
					unk_0x0B57C567D698C373(&(uLocal_1322[iVar0]));
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_13, iVar0))
				{
					unk_0x0B57C567D698C373(&(uLocal_1322[iVar0]));
				}
			}
			else
			{
				unk_0x0B57C567D698C373(&(uLocal_1322[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_187();
	}
}

int func_691(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_7[iVar0]))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_7[iVar0]), 0) };
				if (func_66(Param1, Var1, 0))
				{
					if (unk_0x16833EFAA58E63DB(uLocal_1322[iVar0]))
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

int func_692()
{
	return Local_99.f_0;
}

int func_693(int iParam0)
{
	return Local_733[iParam0 /*18*/];
}

void func_694()
{
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 6))
	{
		func_426();
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 6);
	}
	if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 7))
	{
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 4) || unk_0x08BA6DD398CA197C(Global_1573924.f_1, 16))
		{
			if (((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_338()) && func_782(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 7);
				func_401("FME_PASINT", 30000);
				func_400(1);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 17))
		{
			if (func_234() && !func_229())
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 17);
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 16);
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 23))
	{
		if (((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_782(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x598A9E990F05F82C())
		{
			if (func_717())
			{
				func_401("AMEV_GA_RP", -1);
				if (func_290(unk_0x0C1D3C552325765B()) != 200)
				{
					func_400(1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 23);
			}
		}
	}
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_223(unk_0x0C1D3C552325765B()))
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
		if ((((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_338()) && func_782(unk_0x0C1D3C552325765B(), 1, 1)) && !func_198(unk_0x0C1D3C552325765B(), 21))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 9);
			func_716(0);
			func_401("FME_TBL00", -1);
			func_400(1);
		}
	}
	if (func_236(unk_0x0C1D3C552325765B()))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 18))
		{
			if ((func_198(unk_0x0C1D3C552325765B(), 21) && unk_0x08BA6DD398CA197C(Global_1573924.f_1, 20)) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 19))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 18);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 18))
		{
			if (((((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_338()) && func_782(unk_0x0C1D3C552325765B(), 1, 1)) && unk_0xB20CA7A3EE29687A()) && !Global_2482149.f_4692)
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 18);
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 19);
				func_401("AMTT_RPAS", -1);
				func_400(1);
			}
		}
	}
	if (((((func_236(unk_0x0C1D3C552325765B()) && !func_197(unk_0x0C1D3C552325765B())) && func_185(unk_0x0C1D3C552325765B()) != 146) && !func_196(unk_0x0C1D3C552325765B())) && !func_715(unk_0x0C1D3C552325765B())) && !func_705())
	{
		if (func_613(func_185(unk_0x0C1D3C552325765B())))
		{
			unk_0xFE110F7E7B5A77FB(unk_0x0C1D3C552325765B());
		}
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 22))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 22);
		}
		if (func_224(unk_0x0C1D3C552325765B()) || func_611())
		{
			if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 10))
			{
				if (func_703(func_185(unk_0x0C1D3C552325765B())))
				{
					if (func_549(0) && !Global_2391043)
					{
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_424(1);
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
					}
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 10);
			}
		}
		if (func_223(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 11))
			{
				if (!Global_91458.f_8)
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
					func_422(1);
				}
				if (!func_702())
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 13);
					func_612();
				}
				if (!Global_2391043)
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
					if (func_549(0) && !Global_2391043)
					{
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
					}
					func_424(1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 11);
			}
		}
		else
		{
			func_700(0);
		}
	}
	else
	{
		func_700(1);
	}
	func_695();
	if (func_610(func_185(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 21))
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 21);
	}
	if ((func_234() && !func_229()) || func_198(unk_0x0C1D3C552325765B(), 21))
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

void func_695()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_338())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_493(iVar2))
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
				func_696(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 26))
	{
		func_101(&(Global_1573924.f_22));
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 26);
	}
}

void func_696(int iParam0, int iParam1)
{
	if (!func_21(&(Global_1573924.f_22)))
	{
		func_19(&(Global_1573924.f_22), 0, 0);
	}
	else if (func_18(&(Global_1573924.f_22), iParam1, 0))
	{
		if (func_386() > 0)
		{
			func_699(iParam0);
			if (func_619("AMEV_LBD_HELP"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			func_101(&(Global_1573924.f_22));
		}
	}
	else
	{
		func_698(0);
		func_697();
	}
}

void func_697()
{
	Global_2482149.f_4392 = 0;
}

void func_698(int iParam0)
{
	Global_1342783.f_68 = iParam0;
}

void func_699(int iParam0)
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

void func_700(int iParam0)
{
	if ((unk_0x08BA6DD398CA197C(Global_1573924.f_1, 11) || (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 10) && iParam0)) || (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 22) && iParam0))
	{
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 12))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 12);
			func_422(0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 13))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 13);
			func_701();
		}
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_230(unk_0x0C1D3C552325765B(), 0))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 14);
			func_424(0);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 11);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 10);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 22);
	}
}

void func_701()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4602), 0);
}

bool func_702()
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4602, 0);
}

int func_703(int iParam0)
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
			return func_223(unk_0x0C1D3C552325765B());
		
		case 133:
			return (func_611() || func_704(func_184()));
		
		default:
	}
	return 0;
}

int func_704(int iParam0)
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

int func_705()
{
	if (((((((((func_714() || func_713()) || func_712()) || func_177()) || (func_711() && !unk_0x1504F110F2576375())) || (func_708() && !func_707())) || Global_2394682) || Global_2394682.f_1 != 0) || Global_2394755 != 0) || (func_706() == 2 && !unk_0x1504F110F2576375()))
	{
		return 1;
	}
	return 0;
}

int func_706()
{
	return Global_978175;
}

bool func_707()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 27);
}

int func_708()
{
	if (func_710() || func_709())
	{
		return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 == 8;
	}
	return 0;
}

var func_709()
{
	return Global_2442442.f_612;
}

bool func_710()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

bool func_711()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 5);
}

bool func_712()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

bool func_713()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

bool func_714()
{
	return Global_2442442.f_576;
}

bool func_715(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		if ((func_234() && !func_229()) || func_198(unk_0x0C1D3C552325765B(), 21))
		{
			return 1;
		}
		if (func_21(&(Global_1573924.f_13)))
		{
			if (!func_18(&(Global_1573924.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_101(&(Global_1573924.f_13));
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9);
}

void func_716(int iParam0)
{
	int iVar0;
	
	iVar0 = func_251(2514, -1, 0);
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
	func_457(2514, iVar0, -1, 1, 0);
}

int func_717()
{
	int iVar0;
	
	if (!func_21(&(Global_1573924.f_15)))
	{
		func_19(&(Global_1573924.f_15), 0, 0);
		Global_1573924.f_17 = 0;
	}
	else if (func_18(&(Global_1573924.f_15), 1000, 0))
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(Global_1573924.f_17)))
		{
			iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Global_1573924.f_17));
			if (unk_0xCB129F9A01D14082(iVar0))
			{
				if (func_782(iVar0, 1, 1) && func_718(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_58(unk_0x0C1D3C552325765B()), func_58(iVar0)) < 80f)
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
			func_101(&(Global_1573924.f_15));
		}
	}
	return 0;
}

int func_718(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312443 != 0)
	{
		return 0;
	}
	if (!func_461(iParam0))
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

bool func_719()
{
	return Global_1573924.f_24;
}

bool func_720(int iParam0)
{
	return !func_721(iParam0);
}

int func_721(int iParam0)
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
			if (func_198(unk_0x0C1D3C552325765B(), 7))
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
			if (func_198(unk_0x0C1D3C552325765B(), 7))
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
			if (func_198(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_722(4))
			{
				return 0;
			}
			if (func_198(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_722(4))
			{
				return 0;
			}
			if (func_198(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_722(4))
			{
				return 0;
			}
			if (func_198(unk_0x0C1D3C552325765B(), 7))
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
			if (func_722(4))
			{
				return 0;
			}
			if (func_198(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_722(4))
			{
				return 0;
			}
			if (func_198(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_722(4))
			{
				return 0;
			}
			if (func_198(unk_0x0C1D3C552325765B(), 7))
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

int func_722(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_782(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
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

int func_723()
{
	bool bVar0;
	var uVar1;
	
	func_727(&bVar0, &uVar1);
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
	if (func_726())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_725())
	{
		return 1;
	}
	if (func_724(157))
	{
		if (!func_714())
		{
			return 1;
		}
	}
	if (func_724(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_417() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_417()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_724(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_725()
{
	return Global_2451777;
}

bool func_726()
{
	return Global_2442442.f_571;
}

void func_727(var uParam0, var uParam1)
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
					func_728(iVar0);
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

void func_728(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_782(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_729(uVar4, &bVar5))
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

int func_729(int iParam0, var uParam1)
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

void func_730()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_731()
{
	int iVar0;
	
	func_187();
	if (func_692() == 4 && Local_99.f_27 != 0)
	{
		unk_0x3607936F13065720(Local_99.f_27, 0);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4443), 1);
	func_618(19, 0);
	func_604(0);
	if (unk_0x848AF823A8EA3C62() != -1)
	{
		func_736(129, 0, unk_0x08BA6DD398CA197C(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2, 8));
	}
	func_735(129);
	unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 184, 0);
	unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 151, 1);
	unk_0xACD6D334FD769B0C(1f);
	if (iLocal_1320 > 0)
	{
		unk_0xCF03D9C8A7F1577C(iLocal_1320);
	}
	if (unk_0x0C1D3C552325765B() != -1)
	{
		if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 129)
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/] = -1;
		}
	}
	if (unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == iLocal_1520)
	{
		unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), iLocal_1522);
	}
	func_734();
	func_200(0, 129);
	if (unk_0x08BA6DD398CA197C(iLocal_1310, 22))
	{
		func_429();
		unk_0x09C86C0C5CA26B1E(&iLocal_1310, 22);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1310, 9))
	{
		unk_0x0756AF366187C194("DisableFlightMusic", 0);
		if (!unk_0x08BA6DD398CA197C(iLocal_1310, 10))
		{
			unk_0xB49DAD10DC051295("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1321 != -100f)
	{
		func_499(0, 0);
		unk_0x2F0BC247C05B0D28(fLocal_1321);
	}
	func_498(0);
	if (func_723())
	{
		Local_716.f_5 = 5;
	}
	else if (func_567(2, 0, 0, 0, 0))
	{
		Local_716.f_5 = 6;
	}
	else if (Local_716.f_5 != 1)
	{
		Local_716.f_5 = 2;
	}
	unk_0x15761381A3072BFA(uLocal_3646);
	Local_716.f_0 = Local_99.f_611;
	Local_716.f_1 = Local_99.f_612;
	Local_716.f_4 = Local_99.f_613;
	Local_716.f_3 = Local_99.f_615;
	if (Local_716.f_9 > 0)
	{
		Local_716.f_10 = (unk_0x39E54E7BC7452169() - Local_716.f_9);
	}
	if ((!Global_262145.f_9944 && !unk_0x08BA6DD398CA197C(Local_99.f_3, 8)) || (!Global_262145.f_9945 && unk_0x08BA6DD398CA197C(Local_99.f_3, 8)))
	{
		if (Local_716.f_6 > 0)
		{
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1311, 1))
	{
		func_624(1);
		unk_0x9066E5B82BC6B02C(0, 0);
	}
	if (iVar0 == 0)
	{
		func_733(Local_716, Local_99.f_27, Local_99.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x848AF823A8EA3C62() != -1)
	{
		func_733(Local_716, Local_99.f_279, Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_391(unk_0x0C1D3C552325765B()))
	{
		func_584(0);
	}
	func_603(0);
	func_648(1);
	func_732();
}

void func_732()
{
	unk_0x78C587487CD40B92();
}

void func_733(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
		else if (unk_0x28C1B9853548BD8E(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x5DCAD2F659FD51F3(&Var14);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xD660C18DC0B0416A(&Var28);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_challenges"))
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
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_penned_in"))
		{
			unk_0x2B9499F823AD9D4D(&Param0);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xE710F68D7F7F6DBC(&Var66);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x04BADAC1C9C10BEF(&Var79);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xAD6691D2B297C152(&Var93);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x5DAC2993B423DE6A(&Var107);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x04F66D0DA94C82FA(&Var123);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "AM_KILL_LIST"))
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
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xD6666F4B2CA7FC7F(&Var164);
		}
	}
}

void func_734()
{
	unk_0x17BC7AF21106B65E(iLocal_1521);
	unk_0x17BC7AF21106B65E(iLocal_1520);
}

void func_735(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_736(int iParam0, bool bParam1, bool bParam2)
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
	func_767();
	unk_0x0756AF366187C194("DisableFlightMusic", 0);
	unk_0x0756AF366187C194("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_766(func_185(unk_0x0C1D3C552325765B()));
		func_618(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x0C1D3C552325765B() != -1) && func_765(unk_0x0C1D3C552325765B()) >= 12)
		{
			func_764(2526, -1);
			iVar1 = func_251(2526, -1, 0);
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
		func_623();
		func_763();
		func_762();
		if ((!func_222(unk_0x0C1D3C552325765B()) && !func_220(unk_0x0C1D3C552325765B())) && !func_761())
		{
			func_743();
		}
		func_742();
		if (!unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0) && !unk_0x08BA6DD398CA197C(Global_1750560.f_3, 1))
		{
			func_426();
		}
		func_741();
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1646), 2);
		func_514();
		func_740();
	}
	if (unk_0x7645014AAA2B6DDF(1344549371))
	{
		unk_0x2099DD912801B1F4(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x0C1D3C552325765B() != -1 && !func_198(unk_0x0C1D3C552325765B(), 21)) && !func_230(unk_0x0C1D3C552325765B(), 0))
		{
			func_424(0);
			func_422(0);
			func_739();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_571(26, -1))
		{
			Global_2453905 = -1;
			func_569(26, -1);
		}
	}
	if (!func_737())
	{
		Global_2471085 = 1;
	}
}

int func_737()
{
	if (((!func_368(unk_0x0C1D3C552325765B()) && !func_347(unk_0x0C1D3C552325765B())) && func_185(unk_0x0C1D3C552325765B()) != 146) && !func_738())
	{
		return 0;
	}
	return 1;
}

int func_738()
{
	if ((Global_1626500 == 0 && unk_0x1504F110F2576375()) && (((((((Global_1626500.f_5 != 0 || Global_1626500.f_102390 > 0) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 15)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 18)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 19)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 29)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 28)) || unk_0x08BA6DD398CA197C(Global_1626500.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_739()
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

void func_740()
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_7 = 0;
}

void func_741()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1573924 = { Var0 };
}

void func_742()
{
	var uVar0;
	
	Global_1318162 = uVar0;
}

void func_743()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_759();
	func_746(1, 1);
	func_744();
}

void func_744()
{
	func_745(0, 0);
}

void func_745(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_746(bool bParam0, bool bParam1)
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
		func_758();
	}
	func_749(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_748(0);
	func_747();
}

void func_747()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_748(bool bParam0)
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

void func_749(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_757())
		{
			func_756();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_754();
		func_753(8, 0, 0);
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
		func_750();
	}
}

void func_750()
{
	if (func_757() && !func_752())
	{
		func_756();
	}
	if (func_752())
	{
		func_751();
	}
	else
	{
		func_754();
		func_753(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_751()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_752()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_753(int iParam0, int iParam1, int iParam2)
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

void func_754()
{
	if (func_757() && !func_752())
	{
		func_756();
	}
	func_755();
	Global_2404993.f_649 = 0;
}

void func_755()
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

void func_756()
{
	if (func_752())
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

int func_757()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_758()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_759()
{
	func_760();
	Global_2404993.f_1813 = 0;
}

void func_760()
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

bool func_761()
{
	return Global_1573843;
}

void func_762()
{
	Global_2482149.f_4602 = 0;
}

void func_763()
{
	if (unk_0x0C1D3C552325765B() != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1 = 0;
	}
}

void func_764(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_251(iParam0, func_233(iParam1), 0);
	iVar0++;
	if (!func_464(iParam0))
	{
		func_457(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_458(iParam0, iVar0, iParam1, 1);
	}
}

int func_765(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_201.f_6;
}

int func_766(int iParam0)
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
			if (func_223(unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_767()
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
	func_770(0);
	func_769(0);
	func_768(0);
}

void func_768(int iParam0)
{
	if (Global_2482149.f_4380 != iParam0)
	{
		Global_2482149.f_4380 = iParam0;
	}
}

void func_769(bool bParam0)
{
	if (Global_2482149.f_4379 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2482149.f_4379 = bParam0;
	}
}

void func_770(int iParam0)
{
	if (Global_2482149.f_4377 != iParam0)
	{
		Global_2482149.f_4377 = iParam0;
	}
}

void func_771(struct<20> Param0)
{
	int iVar0;
	
	func_780(func_781(Param0.f_0), Param0);
	unk_0xF2797029E839595C(24);
	unk_0x23DFD22869618226(9);
	func_779(0, -1, 0);
	func_777(129);
	unk_0x4331DF6C42BE352E(&Local_99, 617);
	unk_0xCCA45C9E00D2BC01(&Local_733, 577);
	func_776(1);
	if (!func_775())
	{
		func_731();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		if (unk_0xD9E8CA806A80203D())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_99.f_17[iVar0] = func_26();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_99.f_22[iVar0] = func_26();
				Local_99.f_256[iVar0] = -1;
				Local_99.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0xB21EB307350F5CA1(&(Local_99.f_611), &(Local_99.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1312[iVar0] = -1;
			iVar0++;
		}
		Local_716.f_2 = unk_0x6AC3C3A7CD358D90();
		Local_716.f_8 = unk_0x39E54E7BC7452169();
		func_618(19, 1);
		func_772();
		if (func_195())
		{
			unk_0x88B0F0DC270164B7(&(Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_2), 7);
		}
		Local_733[unk_0x848AF823A8EA3C62() /*18*/].f_9 = -1;
		Global_2482149.f_4688 = -1;
		Local_733[unk_0x848AF823A8EA3C62() /*18*/] = 0;
	}
	else
	{
		func_731();
	}
}

void func_772()
{
	int iVar0;
	
	unk_0xD8C3303D0A49D05B("relUWPlayer", &iLocal_1520);
	unk_0xD8C3303D0A49D05B("relUWAi", &iLocal_1521);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar0], iLocal_1520);
		unk_0xFDDE2C1A05E64390(1, iLocal_1520, Global_1574240[iVar0]);
		unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar0], iLocal_1521);
		unk_0xFDDE2C1A05E64390(1, iLocal_1521, Global_1574240[iVar0]);
		unk_0xFDDE2C1A05E64390(1, iLocal_1520, joaat("COP"));
		unk_0xFDDE2C1A05E64390(1, joaat("COP"), iLocal_1520);
		unk_0xFDDE2C1A05E64390(1, iLocal_1520, Global_1574284[5]);
		unk_0xFDDE2C1A05E64390(1, Global_1574284[5], iLocal_1520);
		unk_0xFDDE2C1A05E64390(1, iLocal_1520, Global_1574273);
		unk_0xFDDE2C1A05E64390(1, Global_1574273, iLocal_1520);
		iVar0++;
	}
	unk_0xFDDE2C1A05E64390(5, iLocal_1520, iLocal_1521);
	unk_0xFDDE2C1A05E64390(5, iLocal_1521, iLocal_1520);
	unk_0xFDDE2C1A05E64390(1, 2017343592, iLocal_1521);
	unk_0xFDDE2C1A05E64390(5, 2017343592, iLocal_1520);
	func_774(1, &iLocal_1521);
	func_773(&iLocal_1521);
	func_773(&iLocal_1520);
}

void func_773(int iParam0)
{
	unk_0xFDDE2C1A05E64390(1, -1865950624, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1865950624);
	unk_0xFDDE2C1A05E64390(1, 296331235, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 296331235);
	unk_0xFDDE2C1A05E64390(1, 1166638144, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 1166638144);
	unk_0xFDDE2C1A05E64390(1, 2037579709, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 2037579709);
	unk_0xFDDE2C1A05E64390(1, 2017343592, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 2017343592);
	unk_0xFDDE2C1A05E64390(1, -1821475077, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1821475077);
	unk_0xFDDE2C1A05E64390(1, 1782292358, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 1782292358);
	unk_0xFDDE2C1A05E64390(1, -1033021910, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1033021910);
	unk_0xFDDE2C1A05E64390(1, -1285976420, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1285976420);
}

void func_774(int iParam0, int iParam1)
{
	unk_0xFDDE2C1A05E64390(iParam0, joaat("COP"), *iParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *iParam1, joaat("COP"));
	unk_0xFDDE2C1A05E64390(iParam0, joaat("army"), *iParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *iParam1, joaat("army"));
	unk_0xFDDE2C1A05E64390(iParam0, -183807561, *iParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *iParam1, -183807561);
}

int func_775()
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
		if (func_726())
		{
			return 0;
		}
		if (func_724(155))
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

void func_776(bool bParam0)
{
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_417())
	{
		return;
	}
	if (!unk_0x96549B1C2E196049(Global_2414657.f_734) || Global_2414657.f_734 == unk_0xEAE20F1125B83888())
	{
		if (bParam0)
		{
			Global_2414657.f_734 = unk_0xEAE20F1125B83888();
		}
		else
		{
			Global_2414657.f_734 = -1;
		}
	}
}

void func_777(int iParam0)
{
	func_741();
	func_778();
	func_762();
	Global_1573924.f_4 = iParam0;
	Global_1573924.f_5 = iParam0;
	func_617(iParam0, -1);
	func_7(&(Global_1573924.f_18), 0, 0);
	Global_2482149.f_4439 = 0;
	Global_2452809[0] = func_26();
	Global_2452809[1] = func_26();
	Global_2452809[2] = func_26();
	Global_2452809[3] = func_26();
	Global_2452809[4] = func_26();
	func_740();
	func_337();
	if (func_234() && !func_229())
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 16);
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 17);
	}
}

void func_778()
{
	var uVar0;
	
	Global_1573949 = uVar0;
}

int func_779(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_732();
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
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_732();
					}
					else
					{
						return 0;
					}
				}
				if (func_726())
				{
					if (!bParam2)
					{
						func_732();
					}
					else
					{
						return 0;
					}
				}
				if (func_724(155))
				{
					if (!bParam2)
					{
						func_732();
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
					func_732();
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
				func_732();
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
			func_732();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_780(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_732();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_781(int iParam0)
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

int func_782(int iParam0, bool bParam1, bool bParam2)
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

