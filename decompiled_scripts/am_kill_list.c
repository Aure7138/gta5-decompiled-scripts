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
	var uLocal_59 = 10;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 2;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 8;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 8;
	var uLocal_83 = 0;
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
	struct<617> Local_121 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_738 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_750[4] = { 0, 0, 0, 0 };
	struct<18> Local_755[32];
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	float fLocal_1343 = 0f;
	var uLocal_1344[4] = { 0, 0, 0, 0 };
	struct<8> Local_1349[24];
	int iLocal_1542 = 0;
	int iLocal_1543 = 0;
	int iLocal_1544 = 0;
	int iLocal_1545[4] = { 0, 0, 0, 0 };
	int iLocal_1550[4] = { 0, 0, 0, 0 };
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	struct<49> Local_1558[32];
	struct<104> Local_3127 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = -1;
	var uLocal_3237 = -1;
	var uLocal_3238 = 32;
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
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	int iLocal_3662 = 0;
	int iLocal_3663 = 0;
	int iLocal_3664 = 0;
	var uLocal_3665[4] = { 0, 0, 0, 0 };
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	int iLocal_3673 = 0;
	int iLocal_3674 = 0;
	struct<2> Local_3675[10];
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	struct<2> Local_3706[5];
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	int iLocal_3721 = 0;
	struct<3> Local_3722 = { 0, 0, 0 } ;
	int iLocal_3725 = 0;
	int iLocal_3726 = 0;
	int iLocal_3727 = 0;
	int iLocal_3728 = 0;
	int iLocal_3729 = 0;
	int iLocal_3730[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3755 = 0;
	int iLocal_3756[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3762 = 0;
	var uLocal_3763[4] = { 0, 0, 0, 0 };
	var uLocal_3768[4] = { 0, 0, 0, 0 };
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
	fLocal_1343 = -100f;
	iLocal_3663 = -1;
	iLocal_3664 = -1;
	iLocal_3727 = -1;
	if (unk_0x591AF4C50B46E014() && func_802(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_791(ScriptParam_0);
	}
	else
	{
		func_751();
	}
	while (true)
	{
		func_750();
		if (func_743())
		{
			func_751();
		}
		else if (func_740(19))
		{
			func_751();
		}
		if (func_739())
		{
			func_751();
		}
		func_714();
		switch (func_713(unk_0x88641E5BC172153A()))
		{
			case 0:
				if ((func_712() == 1 && Local_121.f_1 != -1) && Local_121.f_2 != -1)
				{
					func_710();
					func_706(129, Local_121.f_1, Local_121.f_2, 0);
					if (Global_2497344.f_4753 == -1)
					{
						if (!func_705())
						{
							Global_2497344.f_4753 = 0;
						}
						else
						{
							Global_2497344.f_4753 = 1;
						}
					}
					func_704(Local_121.f_30[0 /*3*/]);
					Local_755[unk_0x88641E5BC172153A() /*18*/] = 1;
				}
				else if (func_712() == 4)
				{
					Local_755[unk_0x88641E5BC172153A() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_712() == 1)
				{
					func_699();
					func_698();
					func_680();
					func_404();
					func_159();
					func_158();
					func_157();
				}
				else if (func_712() == 4)
				{
					Local_755[unk_0x88641E5BC172153A() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_156(&(Local_121.f_320));
				if (func_155(&(Local_121.f_320)))
				{
					Local_755[unk_0x88641E5BC172153A() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_755[unk_0x88641E5BC172153A() /*18*/] = 4;
			
			case 4:
				func_751();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_712())
			{
				case 0:
					if (func_140())
					{
						if (func_135())
						{
							func_132(func_134(129, Local_121.f_1, Local_121.f_2, 0));
							Local_121.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_123();
					func_32();
					func_24();
					if (func_1())
					{
						Local_121.f_0 = 4;
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
	
	if ((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_121.f_241 > 0)
	{
		if (Local_121.f_0 != 4)
		{
			if (func_23())
			{
				if (Local_121.f_241 == 3)
				{
					if (func_21())
					{
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_121.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_121.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_121.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0x244673FE98A43CA3())
				{
					if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
					{
						if (!func_16(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1)), 0))
						{
							if (Local_755[iVar1 /*18*/].f_17 < 2)
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
				if ((!((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2)) && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6)) && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 15);
				}
				func_7();
			}
			else if (Local_121.f_241 < 3)
			{
				if (func_3())
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 16);
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 15);
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
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
		{
			if (!func_4(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0))
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
	
	iVar1 = unk_0xCBA4F77BB9D2F115(iParam0) + 1;
	if (iParam4 || !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_5(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x2137828D03306CAF(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x2A5EB8B0FE590B91())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x769F0F6444C1ABE0(iVar2))
					{
						if (unk_0xDB61DD81432BD145(iVar2))
						{
							if (unk_0xEA49C7D4FDCF922C(unk_0xB0BB7458627D389F(iVar2)) == 0)
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
				else if (!unk_0x769F0F6444C1ABE0(iVar2))
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
	
	if (!unk_0x457D9E478E06E354(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, iParam1, iParam3);
		iVar1 = unk_0xB0BB7458627D389F(iVar0);
		if (iVar1 != func_6())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, iParam1);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xE897E371352225D5(iVar0, 451360105) == 1 || unk_0xE897E371352225D5(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 0), unk_0xD1EE0E9FCD74A37B(iVar0, 0)) < 10f)
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
	if (Local_121.f_241 != 3)
	{
		func_9();
		func_8(&(Local_121.f_324), 0, 0);
		Local_121.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
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

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_13();
		unk_0x3CBB1A3F50D6B58F();
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

int func_14()
{
	if (!func_15())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_13();
	return unk_0x0D3452E263E036CA();
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
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_121.f_328)))
	{
		func_20(&(Local_121.f_328), 0, 0);
	}
	else if (func_19(&(Local_121.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar0]))
		{
			if (Local_121.f_85[iVar0] < 4)
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
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
		{
			if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0))
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
	
	if (!unk_0x62E688B72E3C57B0())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar1]))
		{
			if (!func_31(Local_121.f_48[iVar1]))
			{
				switch (Local_121.f_85[iVar1])
				{
					case 0:
						if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar1]), 0))
						{
							Local_121.f_85[iVar1] = 1;
						}
						else if (unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_121.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_121.f_241 == 1)
						{
							if (!func_23())
							{
								if (unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar1]), 0))
								{
									iVar4 = unk_0x0C20E539D876C5B3(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_121.f_85[iVar1] = 2;
									}
									else if (unk_0xDA6E804770521A18(unk_0xD3B21CE53AA7BE51(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_121.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_6())
													{
														iVar3 = unk_0x1E199569E0295838(iVar2);
														if (!unk_0x769F0F6444C1ABE0(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_121.f_110[iVar0] = iVar2;
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
									Local_121.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_121.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_121.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_121.f_241 == 1)
						{
							if (func_23())
							{
								Local_121.f_85[iVar1] = 3;
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
							{
								Local_121.f_85[iVar1] = 3;
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_121.f_464, iVar1))
							{
								Local_121.f_85[iVar1] = 1;
								unk_0x507FE690B1271947(&(Local_121.f_464), iVar1);
							}
						}
						else
						{
							Local_121.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0xE4B596B1029F4F6A(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar1])))
						{
							func_25(&(Local_121.f_48[iVar1]));
							Local_121.f_85[iVar1] = 4;
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
	
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xC76AD47E2B4CE25C(&uVar0);
	}
}

float func_26(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_6();
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (iVar0 == func_6())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
			{
				if (Local_755[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_755[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
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
			if (Local_121.f_110[iVar0] != -1)
			{
				iVar3 = Local_121.f_110[iVar0];
				iVar1 = unk_0x7C214DA899F05536(iVar3);
				if (unk_0x885F483F34E47503(iVar1))
				{
					if (func_802(iVar1, 1, 1))
					{
						if (unk_0x76BCE6C7B20502DA(iVar1))
						{
							iVar2 = unk_0x675E1E93DBDAF30B(iVar1);
							iVar3 = iVar2;
							if (Local_755[iVar3 /*18*/].f_17 != 1)
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
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			if (Local_755[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_755[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
					iVar2 = unk_0x1E199569E0295838(iVar1);
					if (!unk_0x769F0F6444C1ABE0(iVar2))
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
	
	if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0x0C20E539D876C5B3(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0]), 0);
	if (!unk_0x7FAC45D56235AB39(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_121.f_463 > 0)
	{
		if (Local_121.f_28 != Local_121.f_463)
		{
			Local_121.f_28 = Local_121.f_463;
		}
	}
	switch (Local_121.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_121.f_28)
			{
				if (Local_121.f_17[iVar0] == func_6())
				{
				}
				else
				{
					iVar1++;
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_120();
			func_119();
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 4))
			{
				Local_121.f_463 = iVar1;
			}
			if (func_117())
			{
				func_110();
				Local_121.f_241 = 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 4) && func_107() > 1)
			{
				func_106();
				func_110();
				Local_121.f_241 = 1;
			}
			if (!func_705())
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[0]))
				{
					if (!func_104(Local_121.f_7[0]))
					{
						Var2.f_2 = 654019167;
						func_102(Var2, func_103(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 1, 0));
						Local_121.f_241 = 2;
					}
				}
			}
			if (Local_121.f_241 == 0)
			{
				if (!func_22(&(Local_121.f_330)))
				{
					if (!func_22(&(Local_121.f_326)))
					{
						func_20(&(Local_121.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_121.f_326)))
				{
					func_101(&(Local_121.f_330));
				}
				else if (func_19(&(Local_121.f_330), func_100(), 0))
				{
					Var2.f_2 = 654019167;
					func_102(Var2, func_99(1));
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 12);
					func_7();
				}
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_106();
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
			{
				Local_121.f_241 = 2;
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
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 19))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
	{
		if (!func_22(&(Local_121.f_332)))
		{
			func_20(&(Local_121.f_332), 0, 0);
			unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 7);
		}
		else if (func_19(&(Local_121.f_332), func_34(), 0))
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_705())
	{
		return Global_262145.f_9769;
	}
	return Global_262145.f_9746;
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
	if (Local_121.f_278 > 0)
	{
		if (Local_121.f_279 >= Local_121.f_278)
		{
			if (Local_121.f_254 >= Local_121.f_255)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 0);
				unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 1);
				unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_121.f_278 > 0)
		{
			if (Local_121.f_279 >= Local_121.f_278)
			{
				if (Local_121.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_121.f_256[0]);
				}
				if (Local_121.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_121.f_256[1]);
				}
				if (Local_121.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_121.f_256[2]);
				}
				if (Local_121.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_121.f_256[3]);
				}
				if (iVar5 >= Local_121.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar4]))
						{
							if (!func_31(Local_121.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 0);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 1);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar4]))
					{
						if (!func_31(Local_121.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_121.f_347)))
					{
						func_20(&(Local_121.f_347), 0, 0);
					}
					else if (func_19(&(Local_121.f_347), 3000, 0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 0);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 1);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) || !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1))
	{
		if (Local_121.f_249 >= func_98())
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 0);
			unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_121.f_242)
		{
			if (unk_0x3756406E4D76B25E(Local_121.f_73[iVar0]))
			{
				if (func_97(iVar0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_245, iVar0))
					{
						if ((Local_121.f_27 != joaat("hydra") && !func_4(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0)) || Local_121.f_27 == joaat("hydra"))
						{
							unk_0x507FE690B1271947(&(Local_121.f_3), 0);
							if (func_22(&(Local_3706[iVar0 /*2*/])))
							{
								func_101(&(Local_3706[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0) && unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0))
							{
								unk_0x507FE690B1271947(&(Local_121.f_3), 0);
							}
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 18))
							{
								func_96(func_99(1), iVar0);
								unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 18);
							}
						}
						else if (func_95(iVar0) || !func_705())
						{
							if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0))
							{
								unk_0x507FE690B1271947(&(Local_121.f_3), 0);
							}
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_303, iVar0))
							{
								func_94(func_99(1), iVar0);
								unk_0xF6082E2ADA1C795B(&(Local_121.f_303), iVar0);
							}
						}
						else
						{
							func_25(&(Local_121.f_73[iVar0]));
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_253, iVar0))
							{
								Local_121.f_251 = (Local_121.f_251 - 1);
								if (func_93() > 1)
								{
									if (Local_121.f_252 > 0)
									{
										Local_121.f_302++;
										func_92(iVar0, func_99(1));
									}
								}
								unk_0xF6082E2ADA1C795B(&(Local_121.f_253), iVar0);
							}
							func_101(&(Local_3706[iVar0 /*2*/]));
						}
					}
				}
				else if (func_91(iVar0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_253, iVar0))
					{
						Local_121.f_251 = (Local_121.f_251 - 1);
						if (func_93() > 1)
						{
							if (Local_121.f_252 > 0)
							{
								Local_121.f_302++;
								func_92(iVar0, func_99(1));
							}
						}
						if (Local_121.f_27 == joaat("hydra"))
						{
							Local_121.f_254++;
						}
						unk_0xF6082E2ADA1C795B(&(Local_121.f_253), iVar0);
					}
					if (func_22(&(Local_121.f_336[iVar0 /*2*/])))
					{
						func_101(&(Local_121.f_336[iVar0 /*2*/]));
					}
					func_25(&(Local_121.f_73[iVar0]));
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0))
					{
						unk_0x507FE690B1271947(&(Local_121.f_3), 0);
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_271, iVar0))
					{
						if (!func_22(&(Local_121.f_336[iVar0 /*2*/])))
						{
							func_20(&(Local_121.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_121.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_271), iVar0);
						}
						else if (func_19(&(Local_121.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 18))
								{
									func_96(func_99(1), iVar0);
									unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 18);
								}
							}
							else if (func_95(iVar0) || !func_705())
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_121.f_303, iVar0))
								{
									func_94(func_99(1), iVar0);
									unk_0xF6082E2ADA1C795B(&(Local_121.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_121.f_116)
			{
				if (unk_0x3756406E4D76B25E(Local_121.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_121.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_89((iVar0 * 4 + iVar1)))
							{
								unk_0x507FE690B1271947(&(Local_121.f_3), 0);
							}
							else if (func_88(iVar6))
							{
								if (!func_19(&(Local_121.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0x4C2C9007DF4A7DB6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_87(&(Local_1349[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_121.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar6)], func_85(iVar6)))
								{
									if (Local_121.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_84((iVar0 * 4 + iVar1), func_99(1));
										Local_121.f_254++;
									}
								}
								Local_121.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_121.f_364[iVar6 /*2*/])))
								{
									func_101(&(Local_121.f_364[iVar6 /*2*/]));
								}
								if (unk_0xAA4F14DA15DB0B51(Local_121.f_275[func_86(iVar6)], func_85(iVar6)))
								{
									unk_0x507FE690B1271947(&(Local_121.f_275[func_86(iVar6)]), func_85(iVar6));
								}
							}
							else
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar6)], func_85(iVar6)))
								{
									if (!func_22(&(Local_121.f_364[iVar6 /*2*/])))
									{
										func_20(&(Local_121.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_121.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0xF6082E2ADA1C795B(&(Local_121.f_272[func_86(iVar6)]), func_85(iVar6));
										func_101(&(Local_121.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0xAA4F14DA15DB0B51(Local_121.f_275[func_86(iVar6)], func_85(iVar6)))
								{
									unk_0xF6082E2ADA1C795B(&(Local_121.f_275[func_86(iVar6)]), func_85(iVar6));
								}
							}
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar6)], func_85(iVar6)) || Local_121.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_121.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_121.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar6)], func_85(iVar6)))
						{
							if (Local_121.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_121.f_254++;
								func_84((iVar0 * 4 + iVar1), func_99(1));
							}
						}
						Local_121.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_275[func_86(iVar6)], func_85(iVar6)))
						{
							unk_0x507FE690B1271947(&(Local_121.f_275[func_86(iVar6)]), func_85(iVar6));
						}
					}
					else
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar6)], func_85(iVar6)))
						{
							if (!func_22(&(Local_121.f_364[iVar6 /*2*/])))
							{
								func_20(&(Local_121.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_121.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0xF6082E2ADA1C795B(&(Local_121.f_272[func_86(iVar6)]), func_85(iVar6));
								func_101(&(Local_121.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_275[func_86(iVar6)], func_85(iVar6)))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_275[func_86(iVar6)]), func_85(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_121.f_249 < func_98())
			{
				if (func_70(iVar0))
				{
				}
				unk_0x507FE690B1271947(&(Local_121.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2))
	{
		if (Local_121.f_247 >= Global_262145.f_8871)
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_121.f_243)
		{
			if (unk_0x3756406E4D76B25E(Local_121.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0xA9A04898798AE9E6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iVar1)]), 0))
				{
					unk_0x507FE690B1271947(&(Local_121.f_3), 2);
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar7)], func_85(iVar7)))
				{
					if (!func_19(&(Local_121.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_121.f_364[iVar7 /*2*/])))
					{
						func_101(&(Local_121.f_364[iVar7 /*2*/]));
					}
					func_25(&(Local_121.f_48[(20 + iVar1)]));
					if (Local_121.f_85[(20 + iVar1)] > 0)
					{
						Local_121.f_254++;
						if (func_93() > 1)
						{
							if (Local_121.f_317 > 0)
							{
								Local_121.f_316++;
							}
						}
						func_84((20 + iVar1), func_99(1));
					}
					Local_121.f_85[(20 + iVar1)] = 0;
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_275[func_86(iVar7)], func_85(iVar7)))
					{
						unk_0x507FE690B1271947(&(Local_121.f_275[func_86(iVar7)]), func_85(iVar7));
					}
				}
				else
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar7)], func_85(iVar7)))
					{
						if (!func_22(&(Local_121.f_364[iVar7 /*2*/])))
						{
							func_20(&(Local_121.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_121.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_272[func_86(iVar7)]), func_85(iVar7));
							func_101(&(Local_121.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_275[func_86(iVar7)], func_85(iVar7)))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_275[func_86(iVar7)]), func_85(iVar7));
					}
				}
			}
			if (Local_121.f_247 < func_69())
			{
				if (func_51(iVar1))
				{
				}
				unk_0x507FE690B1271947(&(Local_121.f_3), 2);
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
		if (Local_121.f_252 > 0)
		{
			if (Local_121.f_302 > 0)
			{
				if (Local_121.f_302 >= (Local_121.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_121.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_121.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_121.f_279++;
									func_40();
								}
								else if (Local_121.f_318 >= func_39())
								{
									func_47();
									Local_121.f_279++;
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
		if (Local_121.f_317 > 0)
		{
			if (Local_121.f_316 > 0)
			{
				if (Local_121.f_316 >= Local_121.f_317)
				{
					if (Local_121.f_317 >= func_38())
					{
						func_47();
						Local_121.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_93() == 4)
	{
		if (Local_121.f_316 > 0)
		{
			if (Local_121.f_302 > 0)
			{
				if (Local_121.f_317 > 0)
				{
					if (Local_121.f_316 >= (Local_121.f_317 - 2))
					{
						if (Local_121.f_252 > 0)
						{
							if (Local_121.f_302 >= (Local_121.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_121.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_121.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_121.f_279++;
												func_40();
											}
											else if (Local_121.f_318 >= func_39())
											{
												func_47();
												Local_121.f_279++;
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
		if (Local_121.f_252 > 0)
		{
			if (Local_121.f_302 > 0)
			{
				if (Local_121.f_302 >= (Local_121.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_121.f_279++;
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
	
	iVar0 = Local_121.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_121.f_280[iVar0];
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
	return Local_121.f_305[Local_121.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_121.f_278)
	{
		iVar0 = (iVar0 + Local_121.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_121.f_29 == -1)
	{
		iVar0 = func_46(Local_121.f_27);
		Local_121.f_29 = unk_0x895FB9FE885E36ED(0, iVar0);
		if (func_705())
		{
			if (Local_121.f_27 == joaat("hydra"))
			{
				if (Local_121.f_29 == 2)
				{
					Local_121.f_29 = 4;
				}
			}
			else if (Local_121.f_27 == joaat("savage"))
			{
				if (Local_121.f_29 == 0)
				{
					Local_121.f_29 = 1;
				}
				else if (Local_121.f_29 == 1)
				{
					Local_121.f_29 = 2;
				}
				else if (Local_121.f_29 == 2)
				{
					Local_121.f_29 = 3;
				}
			}
			else if (Local_121.f_27 == joaat("valkyrie"))
			{
				if (Local_121.f_29 == 2)
				{
					Local_121.f_29 = 3;
				}
				else if (Local_121.f_29 == 3)
				{
					Local_121.f_29 = 4;
				}
			}
			else if (Local_121.f_27 == joaat("buzzard"))
			{
				if (Local_121.f_29 == 0)
				{
					Local_121.f_29 = 1;
				}
				else if (Local_121.f_29 == 1)
				{
					Local_121.f_29 = 2;
				}
				else if (Local_121.f_29 == 2)
				{
					Local_121.f_29 = 3;
				}
				else if (Local_121.f_29 == 3)
				{
					Local_121.f_29 = 4;
				}
			}
		}
		else if (Local_121.f_27 == joaat("savage"))
		{
			if (Local_121.f_29 == 0)
			{
				Local_121.f_29 = 1;
			}
			else if (Local_121.f_29 == 1)
			{
				Local_121.f_29 = 2;
			}
			else if (Local_121.f_29 == 2)
			{
				Local_121.f_29 = 3;
			}
		}
	}
	switch (Local_121.f_27)
	{
		case joaat("rhino"):
			Local_121.f_280[0] = 4;
			Local_121.f_291[0] = func_45(4);
			Local_121.f_305[0] = func_44(4);
			Local_121.f_280[1] = 4;
			Local_121.f_291[1] = func_45(4);
			Local_121.f_305[1] = func_44(4);
			Local_121.f_280[2] = 4;
			Local_121.f_291[2] = func_45(4);
			Local_121.f_305[2] = func_44(4);
			if (Local_121.f_12 <= 2 || !func_705())
			{
				Local_121.f_278 = 3;
			}
			else if (Local_121.f_12 == 3)
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_278 = 4;
			}
			else
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 4;
				Local_121.f_291[4] = func_45(4);
				Local_121.f_305[4] = func_44(4);
				Local_121.f_278 = 5;
			}
			Local_121.f_255 = func_41();
			if (!func_705())
			{
				Local_121.f_1 = 0;
			}
			else
			{
				Local_121.f_1 = 5;
			}
			Local_121.f_2 = Local_121.f_29;
			switch (Local_121.f_29)
			{
				case 0:
					Local_121.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_121.f_43[0] = 269.414f;
					Local_121.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_121.f_43[1] = 3.5491f;
					Local_121.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_121.f_43[2] = 54.4509f;
					Local_121.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_121.f_43[3] = 178.1948f;
					Local_121.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_121.f_175[0] = 270.8322f;
					Local_121.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_121.f_175[1] = 177.3506f;
					Local_121.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_121.f_175[2] = 318.1089f;
					Local_121.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_121.f_175[3] = 272.0801f;
					Local_121.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_121.f_175[4] = 104.0591f;
					Local_121.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_121.f_148[0] = 296.4225f;
					Local_121.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_121.f_148[1] = 164.9695f;
					Local_121.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_121.f_148[2] = 136.0596f;
					Local_121.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_121.f_148[3] = 116.379f;
					Local_121.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_121.f_148[4] = 86.6586f;
					Local_121.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_121.f_148[5] = 74.6822f;
					Local_121.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_121.f_148[6] = 206.8863f;
					Local_121.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_121.f_148[7] = 267.8581f;
					Local_121.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_121.f_148[8] = 267.5856f;
					Local_121.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_121.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_121.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_121.f_43[0] = 194.8062f;
					Local_121.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_121.f_43[1] = 238.9372f;
					Local_121.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_121.f_43[2] = 16.3071f;
					Local_121.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_121.f_43[3] = 209.9883f;
					Local_121.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_121.f_148[0] = 221.3913f;
					Local_121.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_121.f_148[1] = 246.3415f;
					Local_121.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_121.f_148[2] = 213.4087f;
					Local_121.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_121.f_148[3] = 100.5405f;
					Local_121.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_121.f_148[4] = 289.6017f;
					Local_121.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_121.f_148[5] = 285.6456f;
					Local_121.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_121.f_148[6] = 310.9245f;
					Local_121.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_121.f_148[7] = 46.7117f;
					Local_121.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_121.f_148[8] = 35.9192f;
					Local_121.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_121.f_148[9] = 207.53f;
					Local_121.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_121.f_175[0] = 286.6127f;
					Local_121.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_121.f_175[1] = 124.1428f;
					Local_121.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_121.f_175[2] = 275.0147f;
					Local_121.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_121.f_175[3] = 287.91f;
					Local_121.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_121.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_121.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_121.f_43[0] = 172.439f;
					Local_121.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_121.f_43[1] = 53.9805f;
					Local_121.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_121.f_43[2] = 303.2142f;
					Local_121.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_121.f_43[3] = 218.5974f;
					Local_121.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_121.f_148[0] = 264.5842f;
					Local_121.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_121.f_148[1] = 133.7932f;
					Local_121.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_121.f_148[2] = 205.1215f;
					Local_121.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_121.f_148[3] = 66.1065f;
					Local_121.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_121.f_148[4] = 7.8064f;
					Local_121.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_121.f_148[5] = 358.7563f;
					Local_121.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_121.f_148[6] = 142.1748f;
					Local_121.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_121.f_148[7] = 247.816f;
					Local_121.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_121.f_148[8] = 124.4666f;
					Local_121.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_121.f_148[9] = 348.6588f;
					Local_121.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_121.f_175[0] = 89.8563f;
					Local_121.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_121.f_175[1] = 163.8004f;
					Local_121.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_121.f_175[2] = 270.0754f;
					Local_121.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_121.f_175[3] = 184.9752f;
					Local_121.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_121.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_121.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_121.f_43[0] = 0.5044f;
					Local_121.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_121.f_43[1] = 179.2507f;
					Local_121.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_121.f_43[2] = 0.3066f;
					Local_121.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_121.f_43[3] = 180.2973f;
					Local_121.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_121.f_148[0] = 336.7541f;
					Local_121.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_121.f_148[1] = 6.0929f;
					Local_121.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_121.f_148[2] = 4.2803f;
					Local_121.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_121.f_148[3] = 274.985f;
					Local_121.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_121.f_148[4] = 267.2555f;
					Local_121.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_121.f_148[5] = 6.5529f;
					Local_121.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_121.f_148[6] = 89.1724f;
					Local_121.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_121.f_148[7] = 348.279f;
					Local_121.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_121.f_148[8] = 267.8075f;
					Local_121.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_121.f_148[9] = 0.5237f;
					Local_121.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_121.f_175[0] = 357.9713f;
					Local_121.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_121.f_175[1] = 269.3234f;
					Local_121.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_121.f_175[2] = 269.3055f;
					Local_121.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_121.f_175[3] = 359.1497f;
					Local_121.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_121.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_121.f_240 = joaat("insurgent");
			Local_121.f_280[0] = 2;
			Local_121.f_291[0] = func_45(2);
			Local_121.f_280[1] = 4;
			Local_121.f_291[1] = func_45(4);
			Local_121.f_305[1] = func_44(4);
			Local_121.f_280[2] = 2;
			Local_121.f_291[2] = func_45(2);
			if (Local_121.f_12 <= 2 || !func_705())
			{
				Local_121.f_280[3] = 5;
				Local_121.f_291[3] = func_45(5);
				Local_121.f_278 = 4;
			}
			else if (Local_121.f_12 == 3)
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 5;
				Local_121.f_291[5] = func_45(5);
				Local_121.f_278 = 6;
			}
			else
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 4;
				Local_121.f_291[5] = func_45(4);
				Local_121.f_305[5] = func_44(4);
				Local_121.f_280[6] = 5;
				Local_121.f_291[6] = func_45(5);
				Local_121.f_278 = 7;
			}
			Local_121.f_255 = func_41();
			if (!func_705())
			{
				Local_121.f_1 = 2;
			}
			else
			{
				Local_121.f_1 = 7;
			}
			Local_121.f_2 = Local_121.f_29;
			switch (Local_121.f_29)
			{
				case 0:
					Local_121.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_121.f_43[0] = 331.74f;
					Local_121.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_121.f_43[1] = 327.7335f;
					Local_121.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_121.f_43[2] = 149.1604f;
					Local_121.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_121.f_43[3] = 150.6753f;
					Local_121.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_121.f_148[0] = 147.2177f;
					Local_121.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_121.f_148[1] = 103.9461f;
					Local_121.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_121.f_148[2] = 160.822f;
					Local_121.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_121.f_148[3] = 205.8375f;
					Local_121.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_121.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_121.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_121.f_43[0] = 344.2504f;
					Local_121.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_121.f_43[1] = 340.3425f;
					Local_121.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_121.f_43[2] = 351.5693f;
					Local_121.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_121.f_43[3] = 354.2446f;
					Local_121.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_121.f_148[0] = 245.2865f;
					Local_121.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_121.f_148[1] = 74.1185f;
					Local_121.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_121.f_148[2] = 10.2312f;
					Local_121.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_121.f_148[3] = 222.4017f;
					Local_121.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_121.f_148[4] = 150.2763f;
					Local_121.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_121.f_148[5] = 105.4526f;
					Local_121.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_121.f_148[6] = 88.9429f;
					Local_121.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_121.f_148[7] = 51.1733f;
					Local_121.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_121.f_148[8] = 169.7083f;
					Local_121.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_121.f_148[9] = 29.5849f;
					Local_121.f_243 = 3;
					break;
				
				case 2:
					if (!func_705())
					{
						Local_121.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_121.f_43[0] = 319.153f;
					}
					else
					{
						Local_121.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_121.f_43[0] = 319.153f;
						Local_121.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_121.f_43[1] = 316.7079f;
						Local_121.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_121.f_43[2] = 316.9623f;
						Local_121.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_121.f_43[3] = 314.2003f;
					}
					Local_121.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_121.f_148[0] = 326.4292f;
					Local_121.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_121.f_148[1] = 6.8118f;
					Local_121.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_121.f_148[2] = 32.8776f;
					Local_121.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_121.f_148[3] = 8.387f;
					Local_121.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_121.f_148[4] = 291.5504f;
					Local_121.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_121.f_148[5] = 333.1838f;
					Local_121.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_121.f_148[6] = 203.8353f;
					Local_121.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_121.f_148[7] = 32.2329f;
					Local_121.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_121.f_148[8] = 195.4847f;
					Local_121.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_121.f_148[9] = 327.4941f;
					Local_121.f_243 = 4;
					break;
				
				case 3:
					if (!func_705())
					{
						Local_121.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_121.f_43[0] = 156.0209f;
					}
					else
					{
						Local_121.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_121.f_43[0] = 156.0209f;
						Local_121.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_121.f_43[1] = 41.8571f;
						Local_121.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_121.f_43[2] = 305.7411f;
						Local_121.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_121.f_43[3] = 223.2489f;
					}
					if (func_93() == 2 || func_93() == 5)
					{
						Local_121.f_242 = 3;
					}
					else
					{
						Local_121.f_242 = 4;
					}
					Local_121.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_121.f_148[0] = 197.3456f;
					Local_121.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_121.f_148[1] = 140.7211f;
					Local_121.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_121.f_148[2] = 98.9528f;
					Local_121.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_121.f_148[3] = 107.0238f;
					Local_121.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_121.f_148[4] = 202.129f;
					Local_121.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_121.f_148[5] = 230.1207f;
					Local_121.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_121.f_148[6] = 36.194f;
					Local_121.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_121.f_148[7] = 48.2522f;
					Local_121.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_121.f_148[8] = 296.114f;
					Local_121.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_121.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_121.f_240 = joaat("lazer");
			Local_121.f_280[0] = 2;
			Local_121.f_291[0] = func_45(2);
			Local_121.f_280[1] = 2;
			Local_121.f_291[1] = func_45(2);
			Local_121.f_280[2] = 2;
			Local_121.f_291[2] = func_45(2);
			if (Local_121.f_12 <= 2 || !func_705())
			{
				Local_121.f_278 = 3;
			}
			else if (Local_121.f_12 == 3)
			{
				Local_121.f_280[3] = 2;
				Local_121.f_291[3] = func_45(2);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_278 = 5;
			}
			else
			{
				Local_121.f_280[3] = 2;
				Local_121.f_291[3] = func_45(2);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 2;
				Local_121.f_291[5] = func_45(2);
				Local_121.f_278 = 6;
			}
			Local_121.f_255 = func_41();
			if (!func_705())
			{
				Local_121.f_1 = 1;
			}
			else
			{
				Local_121.f_1 = 6;
			}
			Local_121.f_2 = Local_121.f_29;
			switch (Local_121.f_29)
			{
				case 0:
					if (!func_705())
					{
						Local_121.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_121.f_43[0] = 197.4435f;
					}
					else
					{
						Local_121.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_121.f_43[0] = 197.4435f;
						Local_121.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_121.f_43[1] = 197.1133f;
						Local_121.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_121.f_43[2] = 272.2065f;
						Local_121.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_121.f_43[3] = 142.941f;
					}
					Local_121.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_121.f_175[0] = 34.149f;
					Local_121.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_121.f_175[1] = -26.0182f;
					Local_121.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_121.f_175[2] = 88.3998f;
					Local_121.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_121.f_175[3] = -141.7949f;
					Local_121.f_228[0] = 10000;
					Local_121.f_228[1] = 10000;
					Local_121.f_228[2] = 10000;
					Local_121.f_228[3] = 10000;
					Local_121.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_121.f_148[0] = 143.4012f;
					Local_121.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_121.f_148[1] = 212.1136f;
					Local_121.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_121.f_148[2] = 95.8248f;
					Local_121.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_121.f_148[3] = 113.3084f;
					Local_121.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_121.f_148[4] = 260.1329f;
					Local_121.f_242 = 4;
					break;
				
				case 1:
					if (!func_705())
					{
						Local_121.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_121.f_43[0] = 131.0993f;
					}
					else
					{
						Local_121.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_121.f_43[0] = 131.0993f;
						Local_121.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_121.f_43[1] = 127.8408f;
						Local_121.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_121.f_43[2] = 131.1571f;
						Local_121.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_121.f_43[3] = 132.943f;
					}
					Local_121.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_121.f_175[0] = 316.9068f;
					Local_121.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_121.f_175[1] = 142.3075f;
					Local_121.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_121.f_175[2] = 93.1231f;
					Local_121.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_121.f_175[3] = -9.0334f;
					Local_121.f_228[0] = 10000;
					Local_121.f_228[1] = 10000;
					Local_121.f_228[2] = 10000;
					Local_121.f_228[3] = 10000;
					Local_121.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_121.f_148[0] = 236.3566f;
					Local_121.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_121.f_148[1] = 212.7533f;
					Local_121.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_121.f_148[2] = 299.3619f;
					Local_121.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_121.f_148[3] = 115.7556f;
					Local_121.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_121.f_148[4] = 191.3862f;
					Local_121.f_242 = 4;
					break;
				
				case 2:
					Local_121.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_121.f_43[0] = 176.244f;
					Local_121.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_121.f_175[0] = 93.8354f;
					Local_121.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_121.f_175[1] = 250.5173f;
					Local_121.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_121.f_175[2] = 337.8961f;
					Local_121.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_121.f_175[3] = 142.1369f;
					Local_121.f_228[0] = 10000;
					Local_121.f_228[1] = 10000;
					Local_121.f_228[2] = 10000;
					Local_121.f_228[3] = 10000;
					Local_121.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_121.f_148[0] = 208.2624f;
					Local_121.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_121.f_148[1] = 349.048f;
					Local_121.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_121.f_148[2] = 69.8162f;
					Local_121.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_121.f_148[3] = 286.6181f;
					Local_121.f_242 = 4;
					Local_121.f_243 = 4;
					break;
				
				case 3:
					Local_121.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_121.f_43[0] = 292.0822f;
					Local_121.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_121.f_43[1] = 43.3907f;
					Local_121.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_121.f_43[2] = 124.2279f;
					Local_121.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_121.f_43[3] = 129.3366f;
					Local_121.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_121.f_175[0] = 137.5025f;
					Local_121.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_121.f_175[1] = 227.9336f;
					Local_121.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_121.f_175[2] = 6.0299f;
					Local_121.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_121.f_175[3] = -87.5596f;
					Local_121.f_228[0] = 10000;
					Local_121.f_228[1] = 10000;
					Local_121.f_228[2] = 10000;
					Local_121.f_228[3] = 10000;
					Local_121.f_242 = 4;
					Local_121.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_121.f_148[0] = 338.8487f;
					Local_121.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_121.f_148[1] = 272.5443f;
					Local_121.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_121.f_148[2] = 223.0158f;
					Local_121.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_121.f_148[3] = 355.6682f;
					Local_121.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_121.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_705())
					{
						Local_121.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_121.f_43[0] = 331.7771f;
					}
					else
					{
						Local_121.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_121.f_43[0] = 331.7771f;
						Local_121.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_121.f_43[1] = 324.1843f;
						Local_121.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_121.f_43[2] = 330.0586f;
						Local_121.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_121.f_43[3] = 329.5413f;
					}
					Local_121.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_121.f_175[0] = 146.9594f;
					Local_121.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_121.f_175[1] = 137.6555f;
					Local_121.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_121.f_175[2] = 114.7478f;
					Local_121.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_121.f_175[3] = -84.6269f;
					Local_121.f_228[0] = 10000;
					Local_121.f_228[1] = 10000;
					Local_121.f_228[2] = 10000;
					Local_121.f_228[3] = 10000;
					Local_121.f_242 = 4;
					Local_121.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_121.f_148[0] = 153.0449f;
					Local_121.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_121.f_148[1] = 153.1271f;
					Local_121.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_121.f_148[2] = 331.3771f;
					Local_121.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_121.f_148[3] = 183.2579f;
					Local_121.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_121.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_121.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_121.f_43[0] = 184.7817f;
					Local_121.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_121.f_175[0] = 91.7761f;
					Local_121.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_121.f_175[1] = 269.7376f;
					Local_121.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_121.f_175[1] = 211.4614f;
					Local_121.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_121.f_175[3] = 148.9204f;
					Local_121.f_228[0] = 10000;
					Local_121.f_228[1] = 10000;
					Local_121.f_228[2] = 10000;
					Local_121.f_228[3] = 10000;
					Local_121.f_242 = 4;
					Local_121.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_121.f_148[0] = 113.298f;
					Local_121.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_121.f_148[1] = 353.0292f;
					Local_121.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_121.f_148[2] = 216.1793f;
					Local_121.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_121.f_148[3] = 347.4008f;
					Local_121.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_121.f_240 = joaat("buzzard");
			Local_121.f_280[0] = 2;
			Local_121.f_291[0] = func_45(2);
			Local_121.f_305[0] = func_44(4);
			Local_121.f_280[1] = 4;
			Local_121.f_291[1] = func_45(4);
			Local_121.f_305[1] = func_44(4);
			Local_121.f_280[2] = 2;
			Local_121.f_291[2] = func_45(2);
			Local_121.f_305[2] = func_44(4);
			if (Local_121.f_12 <= 2 || !func_705())
			{
				Local_121.f_280[3] = 5;
				Local_121.f_291[3] = func_45(5);
				Local_121.f_278 = 4;
			}
			else if (Local_121.f_12 == 3)
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 5;
				Local_121.f_291[5] = func_45(5);
				Local_121.f_278 = 6;
			}
			else
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 4;
				Local_121.f_291[5] = func_45(4);
				Local_121.f_305[5] = func_44(4);
				Local_121.f_280[6] = 5;
				Local_121.f_291[6] = func_45(5);
				Local_121.f_278 = 7;
			}
			Local_121.f_255 = func_41();
			if (!func_705())
			{
				Local_121.f_1 = 3;
			}
			else
			{
				Local_121.f_1 = 8;
			}
			Local_121.f_2 = Local_121.f_29;
			switch (Local_121.f_29)
			{
				case 0:
					if (!func_705())
					{
						Local_121.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_121.f_43[0] = 290.0732f;
					}
					else
					{
						Local_121.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_121.f_43[0] = 290.0732f;
						Local_121.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_121.f_43[1] = 231.5867f;
						Local_121.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_121.f_43[2] = 49.6234f;
						Local_121.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_121.f_43[3] = 229.3317f;
					}
					Local_121.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_121.f_148[0] = 230.0049f;
					Local_121.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_121.f_148[1] = 147.9421f;
					Local_121.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_121.f_148[2] = 22.3204f;
					Local_121.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_121.f_148[3] = 80.7676f;
					Local_121.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_121.f_148[4] = 162.0507f;
					Local_121.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_121.f_148[5] = 225.9002f;
					Local_121.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_121.f_148[6] = 140.0515f;
					Local_121.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_121.f_148[7] = 90.6966f;
					Local_121.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_121.f_148[8] = 226.042f;
					Local_121.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_121.f_148[9] = 79.7294f;
					Local_121.f_243 = 4;
					break;
				
				case 1:
					Local_121.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_121.f_43[0] = 122.9714f;
					Local_121.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_121.f_43[1] = 118.6931f;
					Local_121.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_121.f_43[2] = 26.5272f;
					Local_121.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_121.f_43[3] = 211.0638f;
					Local_121.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_121.f_148[0] = 203.4084f;
					Local_121.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_121.f_148[1] = 123.7895f;
					Local_121.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_121.f_148[2] = 115.9053f;
					Local_121.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_121.f_148[3] = 330.5807f;
					Local_121.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_121.f_148[4] = 116.311f;
					Local_121.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_121.f_148[5] = 145.855f;
					Local_121.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_121.f_148[6] = 41.353f;
					Local_121.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_121.f_148[7] = 266.0158f;
					Local_121.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_121.f_148[8] = 290.3963f;
					Local_121.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_121.f_148[9] = 243.2495f;
					Local_121.f_243 = 4;
					break;
				
				case 2:
					Local_121.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_121.f_43[0] = 280.2862f;
					Local_121.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_121.f_43[1] = 32.9157f;
					Local_121.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_121.f_43[2] = 106.2954f;
					Local_121.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_121.f_43[3] = 272.3807f;
					Local_121.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_121.f_148[0] = 254.5411f;
					Local_121.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_121.f_148[1] = 183.227f;
					Local_121.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_121.f_148[2] = 338.6039f;
					Local_121.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_121.f_148[3] = 71.8258f;
					Local_121.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_121.f_148[4] = 179.6626f;
					Local_121.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_121.f_148[5] = 272.7491f;
					Local_121.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_121.f_148[6] = 270.8252f;
					Local_121.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_121.f_148[7] = 180.4937f;
					Local_121.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_121.f_148[8] = 107.4297f;
					Local_121.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_121.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_121.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_121.f_43[0] = 117.7311f;
					Local_121.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_121.f_43[1] = 46.3958f;
					Local_121.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_121.f_43[2] = 189.2091f;
					Local_121.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_121.f_43[3] = 50.0778f;
					Local_121.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_121.f_148[0] = 229.5714f;
					Local_121.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_121.f_148[1] = 136.4963f;
					Local_121.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_121.f_148[2] = 88.3908f;
					Local_121.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_121.f_148[3] = 271.8922f;
					Local_121.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_121.f_148[4] = 316.4374f;
					Local_121.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_121.f_148[5] = 246.1521f;
					Local_121.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_121.f_148[6] = 198.8985f;
					Local_121.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_121.f_148[7] = 257.2332f;
					Local_121.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_121.f_148[8] = 104.7808f;
					Local_121.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_121.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_121.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_121.f_43[0] = 306.7662f;
					Local_121.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_121.f_43[1] = 303.3918f;
					Local_121.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_121.f_43[2] = 302.365f;
					Local_121.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_121.f_43[3] = 304.9788f;
					Local_121.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_121.f_148[0] = 30.9787f;
					Local_121.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_121.f_148[1] = 97.3626f;
					Local_121.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_121.f_148[2] = 218.2636f;
					Local_121.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_121.f_148[3] = 257.6324f;
					Local_121.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_121.f_148[4] = 244.6777f;
					Local_121.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_121.f_148[5] = 12.745f;
					Local_121.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_121.f_148[6] = 196.3743f;
					Local_121.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_121.f_148[7] = 283.2556f;
					Local_121.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_121.f_148[8] = 243.4268f;
					Local_121.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_121.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_121.f_240 = joaat("buzzard");
			Local_121.f_280[0] = 2;
			Local_121.f_291[0] = func_45(2);
			Local_121.f_280[1] = 4;
			Local_121.f_291[1] = func_45(4);
			Local_121.f_305[1] = func_44(4);
			Local_121.f_280[2] = 2;
			Local_121.f_291[2] = func_45(2);
			if (Local_121.f_12 <= 2 || !func_705())
			{
				Local_121.f_280[3] = 5;
				Local_121.f_291[3] = func_45(5);
				Local_121.f_278 = 4;
			}
			else if (Local_121.f_12 == 3)
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 5;
				Local_121.f_291[5] = func_45(5);
				Local_121.f_278 = 6;
			}
			else
			{
				Local_121.f_280[3] = 4;
				Local_121.f_291[3] = func_45(4);
				Local_121.f_305[3] = func_44(4);
				Local_121.f_280[4] = 2;
				Local_121.f_291[4] = func_45(2);
				Local_121.f_280[5] = 4;
				Local_121.f_291[5] = func_45(4);
				Local_121.f_305[5] = func_44(4);
				Local_121.f_280[6] = 5;
				Local_121.f_291[6] = func_45(5);
				Local_121.f_278 = 7;
			}
			Local_121.f_255 = func_41();
			if (!func_705())
			{
				Local_121.f_1 = 4;
			}
			else
			{
				Local_121.f_1 = 9;
			}
			Local_121.f_2 = Local_121.f_29;
			switch (Local_121.f_29)
			{
				case 0:
					Local_121.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_121.f_43[0] = 180.7904f;
					Local_121.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_121.f_43[1] = 269.3001f;
					Local_121.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_121.f_43[2] = 180.39f;
					Local_121.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_121.f_43[3] = 276.7351f;
					Local_121.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_121.f_148[0] = 329.9165f;
					Local_121.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_121.f_148[1] = 264.7702f;
					Local_121.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_121.f_148[2] = 359.5203f;
					Local_121.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_121.f_148[3] = 111.3101f;
					Local_121.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_121.f_148[4] = 176.3058f;
					Local_121.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_121.f_148[5] = 213.1969f;
					Local_121.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_121.f_148[6] = 275.2275f;
					Local_121.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_121.f_148[7] = 220.0349f;
					Local_121.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_121.f_148[8] = 359.15f;
					Local_121.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_121.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_121.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_121.f_43[0] = 247.4892f;
					Local_121.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_121.f_43[1] = 66.129f;
					Local_121.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_121.f_43[2] = 340.0713f;
					Local_121.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_121.f_43[3] = 245.7466f;
					Local_121.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_121.f_148[0] = 252.6017f;
					Local_121.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_121.f_148[1] = 245.262f;
					Local_121.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_121.f_148[2] = 44.7945f;
					Local_121.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_121.f_148[3] = 255.6518f;
					Local_121.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_121.f_148[4] = 124.8391f;
					Local_121.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_121.f_148[5] = 188.9979f;
					Local_121.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_121.f_148[6] = 159.3613f;
					Local_121.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_121.f_148[7] = 5.7762f;
					Local_121.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_121.f_148[8] = 89.3388f;
					Local_121.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_121.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_121.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_121.f_43[0] = 310.6241f;
					Local_121.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_121.f_43[1] = 166.0191f;
					Local_121.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_121.f_43[2] = 343.1715f;
					Local_121.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_121.f_43[3] = 342.4984f;
					Local_121.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_121.f_148[0] = 248.8594f;
					Local_121.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_121.f_148[1] = 195.7758f;
					Local_121.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_121.f_148[2] = 28.6127f;
					Local_121.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_121.f_148[3] = 296.7476f;
					Local_121.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_121.f_148[4] = 240.9422f;
					Local_121.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_121.f_148[5] = 2.473f;
					Local_121.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_121.f_148[6] = 343.6776f;
					Local_121.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_121.f_148[7] = 0.2495f;
					Local_121.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_121.f_148[8] = 72.7889f;
					Local_121.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_121.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_121.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_121.f_43[0] = 351.0324f;
					Local_121.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_121.f_43[1] = 3.5452f;
					Local_121.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_121.f_43[2] = 7.3237f;
					Local_121.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_121.f_43[3] = 332.0844f;
					Local_121.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_121.f_148[0] = 2.6416f;
					Local_121.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_121.f_148[1] = 171.8638f;
					Local_121.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_121.f_148[2] = 257.0332f;
					Local_121.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_121.f_148[3] = 91.7869f;
					Local_121.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_121.f_148[4] = 4.2016f;
					Local_121.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_121.f_148[5] = 339.729f;
					Local_121.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_121.f_148[6] = 359.2033f;
					Local_121.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_121.f_148[7] = 333.6298f;
					Local_121.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_121.f_148[8] = 73.2788f;
					Local_121.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_121.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_121.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_121.f_43[0] = 42.1535f;
					Local_121.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_121.f_43[1] = 315.0261f;
					Local_121.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_121.f_43[2] = 1.2527f;
					Local_121.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_121.f_43[3] = 1.9403f;
					Local_121.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_121.f_148[0] = 352.9674f;
					Local_121.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_121.f_148[1] = 88.8285f;
					Local_121.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_121.f_148[2] = 177.2297f;
					Local_121.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_121.f_148[3] = 273.1487f;
					Local_121.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_121.f_148[4] = 225.394f;
					Local_121.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_121.f_148[5] = 175.5423f;
					Local_121.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_121.f_148[6] = 191.1842f;
					Local_121.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_121.f_148[7] = 269.6831f;
					Local_121.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_121.f_148[8] = 29.4203f;
					Local_121.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_121.f_148[9] = 287.677f;
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
	
	if (Local_121.f_255 != -1)
	{
		return Local_121.f_255;
	}
	if (Local_121.f_278 == 0)
	{
		return ((4 * Global_262145.f_8870) + Global_262145.f_8871);
	}
	iVar2 = func_93();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_121.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_121.f_278)
			{
				iVar0 = (iVar0 + ((Local_121.f_291[iVar1] * iVar4) + Local_121.f_305[iVar1]));
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
			if (Local_121.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_121.f_27 == joaat("rhino"))
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
			if (Local_121.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_121.f_27 == joaat("hydra"))
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
			if (func_705())
			{
				iVar0 = Global_262145.f_10041;
			}
			else
			{
				iVar0 = Global_262145.f_9762;
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
			if (func_705())
			{
				iVar0 = Global_262145.f_10042;
			}
			else
			{
				iVar0 = Global_262145.f_9763;
			}
			break;
		
		case 5:
			if (func_705())
			{
				iVar0 = Global_262145.f_10043;
			}
			else
			{
				iVar0 = Global_262145.f_9764;
			}
			break;
		
		case 4:
			if (func_705())
			{
				iVar0 = Global_262145.f_10040;
			}
			else
			{
				iVar0 = Global_262145.f_9761;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_705())
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
	Local_121.f_252 = 0;
	Local_121.f_302 = 0;
	Local_121.f_317 = 0;
	Local_121.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_121.f_48[iVar0]))
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
	
	iVar0 = Local_121.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_121.f_280[iVar0];
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
		if (func_104(Local_121.f_73[iVar1]))
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
	
	if (Local_121.f_318 == 0 || Local_121.f_318 == func_39())
	{
		if (func_93() == 2 || func_93() == 5)
		{
			return 0;
		}
	}
	if (func_93() == 3 || func_93() == 4)
	{
		if (Local_121.f_317 >= func_38())
		{
			iVar0 = Local_121.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_121.f_280[iVar0];
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
	else if (Local_121.f_317 == 2)
	{
		iVar0 = Local_121.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_121.f_280[iVar0];
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
	if (Local_121.f_318 == func_39())
	{
		return 0;
	}
	if (Local_121.f_318 == func_68())
	{
		return 0;
	}
	if (func_93() == 1)
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(Local_121.f_48[(20 + iParam0)]))
	{
		if (func_67(Local_121.f_239) && unk_0x7DC1E7E4F4F004B4(0, 1, 0, 0))
		{
			if (func_65(&iVar3))
			{
				if (func_55(Local_121.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_121.f_48[(20 + iParam0)]), 22, Local_121.f_239, Local_121.f_117[iVar3 /*3*/], Local_121.f_148[iVar3], 1, 1, 1))
					{
						unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), iLocal_1543);
						unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1, 0);
						unk_0x580E0316A37C6FD5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0x64B11F881078C75D(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_53());
						unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179(fVar6));
						unk_0xE5989282DAC350E1(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1);
						unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 2);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 0, 1);
						unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1);
						unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1);
						unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 42, 1);
						unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), unk_0xF2DB717A73826179((200f * Global_262145.f_153)));
						unk_0x0E9E5456339F425B(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1);
						unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1);
						unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 1);
						unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0xE86A53C202B21FAB(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = unk_0xF2DB717A73826179((fVar5 * unk_0xBBDA792448DB5A89(iVar4)));
						unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(20 + iParam0)]), iVar4);
						iVar7 = (20 + iParam0);
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar7)], func_85(iVar7)))
						{
							unk_0x507FE690B1271947(&(Local_121.f_272[func_86(iVar7)]), func_85(iVar7));
						}
						Local_121.f_247++;
						Local_121.f_317++;
						Local_121.f_250++;
						Local_121.f_318++;
						func_101(&(Local_121.f_414[iVar7 /*2*/]));
						func_20(&(Local_121.f_414[iVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_121.f_364[iVar7 /*2*/])))
						{
							func_101(&(Local_121.f_364[iVar7 /*2*/]));
						}
						func_20(&(Local_3675[iVar3 /*2*/]), 0, 0);
						unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar7]), 1, iLocal_1542);
					}
				}
			}
		}
	}
	if (!unk_0x3756406E4D76B25E(Local_121.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_705())
	{
		return Global_262145.f_10029;
	}
	return Global_262145.f_9750;
}

float func_53()
{
	if (func_705())
	{
		return Global_262145.f_10031;
	}
	return Global_262145.f_9752;
}

int func_54(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	iVar0 = unk_0xD00B79C0E206E082(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xDF7D91421097E934(iVar0);
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(iVar0, iParam9);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam7)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_59(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
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
	Global_2404996.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_802(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_58(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
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
		if (func_802(iVar1, 1, 1))
		{
			if (!func_16(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
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
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_59(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_802(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && uParam9) && bParam6) && func_60(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_58(iVar1), Param0, 1) < fParam3)
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
	if (func_64(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_63(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_61(unk_0x0FFED3E94261A832(), iParam0))
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
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_6();
}

struct<13> func_63(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_63(iParam0) };
		Global_2484585 = { func_63(iParam1) };
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

int func_65(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x895FB9FE885E36ED(0, 10);
	if (!func_66(Local_121.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_3675[iVar0 /*2*/])) || (func_22(&(Local_3675[iVar0 /*2*/])) && func_19(&(Local_3675[iVar0 /*2*/]), 10000, 0)))
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
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	if (Local_121.f_279 == 0)
	{
		iVar0 = Local_121.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_121.f_279)
		{
			iVar0 = (iVar0 + Local_121.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_69()
{
	int iVar0;
	int iVar1;
	
	switch (Local_121.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_121.f_305[iVar0]);
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
	if (Local_121.f_242 < iVar0)
	{
	}
	if (Local_121.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_93() > 1)
	{
		iVar1 = func_83();
		if (Local_121.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_67(Local_121.f_240) && func_67(Local_121.f_239))
	{
		if (func_71(iParam0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_245, iParam0))
			{
				Local_121.f_249++;
				Local_121.f_251++;
				Local_121.f_252++;
				unk_0x507FE690B1271947(&(Local_121.f_245), iParam0);
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 19))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0x7DC1E7E4F4F004B4(4, 1, 0, 0))
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
	
	if (func_104(Local_121.f_73[iParam0]) && unk_0xAA4F14DA15DB0B51(Local_121.f_245, iParam0))
	{
		if (func_76(Local_121.f_73[iParam0]))
		{
			if (Local_121.f_116 <= 0)
			{
				if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_121.f_116 = 2;
				}
				else
				{
					Local_121.f_116 = unk_0xCBA4F77BB9D2F115(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0])) + 1;
					if (Local_121.f_116 > 4)
					{
						Local_121.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_121.f_116)
			{
				if (!unk_0x3756406E4D76B25E(Local_121.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_67(Local_121.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_75(&(Local_121.f_48[(iParam0 * 4 + iVar6)]), Local_121.f_73[iParam0], 22, Local_121.f_239, iVar4, 1, 1, 1))
						{
							unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), iLocal_1543);
							unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0x580E0316A37C6FD5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0x64B11F881078C75D(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_74())
							{
								unk_0x64B11F881078C75D(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0x64B11F881078C75D(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
							unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0xE5989282DAC350E1(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179((200f * Global_262145.f_153)));
							unk_0x0E9E5456339F425B(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0x2E0701CEBB06668C(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x4589DF13161114E5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x1914716FB84CED87(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x65648841F3329FD6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_73());
									unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
									unk_0x83153769EA6DF5B2(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0x1CDF2A367CBA85B4(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_10014;
								uVar1 = Global_262145.f_10015;
								uVar2 = Global_262145.f_10016;
								uVar3 = Global_262145.f_10017;
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0xDA6E804770521A18(unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]))))
							{
								unk_0x65648841F3329FD6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_73());
								unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), unk_0xF2DB717A73826179(fVar5));
								unk_0x83153769EA6DF5B2(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_10014;
								uVar1 = Global_262145.f_10015;
								uVar2 = Global_262145.f_10016;
								uVar3 = Global_262145.f_10017;
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x0C1E1750CE209BF7(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar7)], func_85(iVar7)))
							{
								unk_0x507FE690B1271947(&(Local_121.f_272[func_86(iVar7)]), func_85(iVar7));
							}
							unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xD022E7E227665647(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1542);
							Local_121.f_250++;
							func_101(&(Local_121.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_121.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_121.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_101(&(Local_121.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_121.f_116)
			{
				if (!unk_0x3756406E4D76B25E(Local_121.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_121.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0xF8ED2D0629FE764D(unk_0xC09E9E2B61AD04E7(Local_121.f_48[(iParam0 * 4 + iVar6)]), unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0])))
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
	if (func_705())
	{
		return Global_262145.f_10032;
	}
	return Global_262145.f_9753;
}

int func_74()
{
	if (unk_0xAA4F14DA15DB0B51(unk_0x895FB9FE885E36ED(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_75(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		unk_0x47ABF422A76CAA6A(uParam0);
		return unk_0x434105A1C45F1BED(uParam0);
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
	Local_121.f_240 = func_43(iVar0);
	if (!unk_0x3756406E4D76B25E(Local_121.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_121.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0x3756406E4D76B25E(Local_121.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_67(Local_121.f_240) && !unk_0xAA4F14DA15DB0B51(Local_121.f_245, iParam0))
		{
			fVar10 = 300f;
			if (unk_0x0F93427D94EAEAA2(Local_121.f_240) || unk_0xDA6E804770521A18(Local_121.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (unk_0xDA6E804770521A18(Local_121.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_121.f_242)
			{
				if (func_82(iVar11))
				{
					func_81(Local_121.f_240, iVar11, &Var12, &uVar15);
					if (!func_66(Var12, 0f, 0f, 0f, 0))
					{
						if (func_55(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_8(&(Local_121.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_121.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (unk_0x0F93427D94EAEAA2(Local_121.f_240) || unk_0xDA6E804770521A18(Local_121.f_240))
				{
					iVar16 = 0;
				}
				if (func_80(iParam0))
				{
					if (func_79(&(Local_121.f_73[iParam0]), Local_121.f_240, Var4, uVar7, 1, 1, 1, 0, iVar16, 1, 0, 0, 0, 0))
					{
						unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 2);
						unk_0x22079179ECAB5003(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1);
						unk_0xD3E5E6DE4F3CED03(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0, 0);
						unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 2);
						unk_0x2DEA38A68AA89671(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1, 1, 0);
						unk_0x4FF56972862B602F(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
						unk_0x66836FB7C87AD349(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
						if (unk_0x0F93427D94EAEAA2(Local_121.f_240))
						{
							unk_0x6437B8B0C99971F3(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]));
							unk_0xFEF767EEC8AAF41E(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1);
							unk_0x435850511E04A8D1(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]));
							unk_0xE77EEA92586CF2E8(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
						}
						else if (unk_0xDA6E804770521A18(Local_121.f_240))
						{
							unk_0x0C2EA5A202FDF476(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 3);
							unk_0xE77EEA92586CF2E8(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
							unk_0xFEF767EEC8AAF41E(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1);
							unk_0x435850511E04A8D1(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]));
							unk_0xDFFEF66D82BDA05C(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 30f);
							unk_0x91E310A5AD61C549(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1);
							unk_0xA75AC5CB66CDAE9F(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0x67E5DE1657F60AC6(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
						}
						else
						{
							unk_0xD44F61F61676BA14(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1);
						}
						if (func_93() == 5)
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_78());
							unk_0x67E5DE1657F60AC6(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0x4EA5B5526A4651E9(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), unk_0xF2DB717A73826179(fVar1));
							unk_0x6385100E76566DD6(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), fVar1);
							unk_0xBE519AD97D32A1D0(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), fVar1);
							unk_0x525CB8A0699017B3(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), fVar1);
							unk_0x5ADC55733B227FF7(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x880A8D6F3A1B7A36(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), fVar1);
							unk_0xD9E9CC18714902C0(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), fVar1);
						}
						if (func_22(&(Local_121.f_336[iParam0 /*2*/])))
						{
							func_101(&(Local_121.f_336[iParam0 /*2*/]));
						}
						unk_0x507FE690B1271947(&(Local_121.f_253), iParam0);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_245), iParam0);
						unk_0x84758BE449C417C5(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 1, iLocal_1542);
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_271, iParam0))
						{
							unk_0x507FE690B1271947(&(Local_121.f_271), iParam0);
						}
						if (unk_0xAA4F14DA15DB0B51(Local_121.f_303, iParam0))
						{
							unk_0x507FE690B1271947(&(Local_121.f_303), iParam0);
						}
						if (Local_121.f_240 == joaat("hydra") || Local_121.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0x3756406E4D76B25E(Local_121.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_78()
{
	if (func_705())
	{
		return Global_262145.f_10030;
	}
	return Global_262145.f_9751;
}

int func_79(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE42A511281C9895B(uParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(uVar0);
	Global_2497344.f_5742 = uVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(uVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(uVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(iVar0, iParam9);
		unk_0xE373A18F5FF76D31(iVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(iVar0);
			unk_0x1873102BDC0A9FE0(iVar0, 5, 5, 1f);
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
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_755[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
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
	
	bVar0 = (unk_0xDA6E804770521A18(iParam0) || unk_0x0F93427D94EAEAA2(iParam0));
	switch (Local_121.f_27)
	{
		case joaat("rhino"):
			if (!func_66(Local_121.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_121.f_159[iParam1 /*3*/] };
				*uParam3 = Local_121.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_66(Local_121.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_121.f_159[iParam1 /*3*/] };
				*uParam3 = Local_121.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_121.f_29)
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
			switch (Local_121.f_29)
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
			switch (Local_121.f_29)
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
	if (Local_121.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_121.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_121.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_121.f_207[iParam0 /*2*/]), Local_121.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_121.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_121.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_83()
{
	return Local_121.f_291[Local_121.f_279];
}

void func_84(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -2033487132;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iParam1);
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
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
		bVar0 = true;
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_1))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x2137828D03306CAF(uParam0->f_7))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_7))
		{
			if (unk_0x4C2C9007DF4A7DB6(uParam0->f_7))
			{
				unk_0x740D0745C06D2DDC(uParam0->f_7, 0);
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
	if (Local_121.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iParam0)], func_85(iParam0)))
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
	
	if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0x0C20E539D876C5B3(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0]), 0);
	if (unk_0xA9A04898798AE9E6(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_121.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_121.f_27 == joaat("hydra"))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_271, iParam0))
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
	
	Var0.f_0 = -831777982;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iParam1);
	}
}

int func_93()
{
	return Local_121.f_280[Local_121.f_279];
}

void func_94(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -683751269;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iParam0);
	}
}

int func_95(int iParam0)
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
			if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0))
			{
				if (unk_0x984FB159E7A6C186(iVar2, unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x4CF5038218F9A596(iVar2, unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), &uVar0))
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
	
	Var0.f_0 = 834995424;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iParam0);
	}
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]));
	if (unk_0xDA6E804770521A18(iVar0) || unk_0x0F93427D94EAEAA2(iVar0))
	{
		return !unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
	}
	return !unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_73[iParam0]), 0);
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	switch (Local_121.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_121.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_121.f_291[iVar0]);
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
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
			if (func_802(iVar2, 0, 0))
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

int func_100()
{
	if (func_705())
	{
		return Global_262145.f_10023;
	}
	return Global_262145.f_9747;
}

void func_101(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_102(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
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
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_802(iVar2, 1, 0))
		{
			if (!unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar2), iParam0, 0))
			{
				if (unk_0x220AE8028FACE96A(iVar2) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) || !bParam2)
				{
					if (iVar2 != unk_0x0FFED3E94261A832() || iParam1)
					{
						unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
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
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_105(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_105(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(iParam0, 0))
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
	
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_3719))
	{
		func_20(&uLocal_3719, 0, 0);
		return;
	}
	if (!func_19(&uLocal_3719, 5000, 0))
	{
		return;
	}
	iVar0 = func_107();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_25(&(Local_121.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 20);
}

int func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_121.f_12 != 0)
	{
		return Local_121.f_12;
	}
	if (!func_705())
	{
		Local_121.f_12 = 1;
		return Local_121.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar2))
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
		Local_121.f_12 = 2;
	}
	else if (iVar1 < func_108())
	{
		Local_121.f_12 = 3;
	}
	else
	{
		Local_121.f_12 = 4;
	}
	return Local_121.f_12;
}

int func_108()
{
	return Global_262145.f_9772;
}

int func_109()
{
	return Global_262145.f_9771;
}

void func_110()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
		{
			func_116(iVar0);
			func_115(iVar0, Local_121.f_256[iVar0], Local_121.f_22[iVar0]);
		}
		else if (Local_121.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
	func_114();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
			func_113(iVar0);
			if (Local_755[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_755[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_755[iVar0 /*18*/].f_9;
					func_112(uVar1, Local_755[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_112(-1, -1, iVar2);
			}
		}
		else if (Local_121.f_465[iVar0 /*4*/].f_1 != -1)
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
				if (Local_121.f_465[iVar1 /*4*/].f_1 > Local_121.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_121.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_121.f_465[iVar1 /*4*/];
					uVar4 = Local_121.f_465[iVar1 /*4*/].f_2;
					Local_121.f_465[iVar1 /*4*/].f_1 = Local_121.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_121.f_465[iVar1 /*4*/] = Local_121.f_465[(iVar1 - 1) /*4*/];
					Local_121.f_465[iVar1 /*4*/].f_2 = Local_121.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_121.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_121.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_121.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	Local_121.f_465[iParam2 /*4*/] = iParam0;
	Local_121.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_121.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_113(int iParam0)
{
	Local_121.f_465[iParam0 /*4*/] = -1;
	Local_121.f_465[iParam0 /*4*/].f_2 = -1;
	Local_121.f_465[iParam0 /*4*/].f_1 = -1;
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
				if (Local_121.f_594[iVar1 /*4*/].f_1 > Local_121.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_121.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_121.f_594[iVar1 /*4*/];
					uVar4 = Local_121.f_594[iVar1 /*4*/].f_2;
					Local_121.f_594[iVar1 /*4*/].f_1 = Local_121.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_121.f_594[iVar1 /*4*/] = Local_121.f_594[(iVar1 - 1) /*4*/];
					Local_121.f_594[iVar1 /*4*/].f_2 = Local_121.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_121.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_121.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_121.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	Local_121.f_594[iParam0 /*4*/] = iParam0;
	Local_121.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_121.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_116(int iParam0)
{
	Local_121.f_594[iParam0 /*4*/] = -1;
	Local_121.f_594[iParam0 /*4*/].f_1 = -1;
	Local_121.f_594[iParam0 /*4*/].f_2 = -1;
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
			func_101(&(Local_121.f_5));
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_13, iVar1))
		{
			func_101(&(Local_121.f_5));
			return 0;
		}
		else if (func_4(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_101(&(Local_121.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_22(&(Local_121.f_5)))
	{
		func_20(&(Local_121.f_5), 0, 0);
	}
	else if (func_19(&(Local_121.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	if (func_104(Local_121.f_7[iParam0]))
	{
		if (unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), -1, 0) != 0)
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
	
	if (!func_705())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
		{
			if (func_104(Local_121.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_121.f_12)
	{
		Local_121.f_12 = iVar1;
	}
	if (Local_121.f_12 <= 1)
	{
		unk_0x507FE690B1271947(&(Local_121.f_3), 8);
		if (!func_104(Local_121.f_7[0]))
		{
			if (func_104(Local_121.f_7[iVar2]))
			{
				func_25(&(Local_121.f_7[0]));
				Local_121.f_7[0] = Local_121.f_7[iVar2];
			}
		}
	}
}

void func_120()
{
	bool bVar0;
	
	if (!func_705())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[0]))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_121.f_15 != false;
			}
			else
			{
				bVar0 = Local_121.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0xAA4F14DA15DB0B51(Local_121.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_121.f_413 == -1)
		{
			Local_121.f_413 = func_122();
		}
		if (!func_22(&(Local_121.f_326)))
		{
			func_20(&(Local_121.f_326), 0, 0);
		}
		else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 4))
		{
			if ((Local_121.f_413 - func_121(&(Local_121.f_326), 0, 0)) < 0)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_121.f_326)))
	{
		func_101(&(Local_121.f_326));
		Local_121.f_413 = (Local_121.f_413 - func_121(&(Local_121.f_326), 0, 0));
	}
}

int func_121(var uParam0, bool bParam1, bool bParam2)
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

var func_122()
{
	if (func_705())
	{
		return Global_262145.f_10033;
	}
	return Global_262145.f_9754;
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
		iLocal_1545[iVar0] = 0;
		iLocal_750[iVar0] = -2;
		iLocal_1550[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_121.f_0 != 4)
	{
		iLocal_1340 = 0;
		while (iLocal_1340 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_1340)))
			{
				iVar7 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_1340));
				if (!func_16(iVar7, 0))
				{
					if (Local_755[iLocal_1340 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_130(iLocal_1340, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_129(iLocal_1340, iVar0);
						iVar0++;
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_755[iLocal_1340 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_128(iLocal_1340, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_755[iLocal_1340 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_126(iLocal_1340, iVar7);
					if (func_802(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_121.f_17[iVar0] == func_6())
							{
								if (unk_0xAA4F14DA15DB0B51(Local_755[iLocal_1340 /*18*/].f_2, (0 + iVar0)))
								{
									Local_121.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_121.f_17[iVar0] == iVar7 && Local_121.f_241 == 0)
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_755[iLocal_1340 /*18*/].f_2, (0 + iVar0)))
								{
									Local_121.f_17[iVar0] = func_6();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1340++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_13, iVar0))
		{
			if (iLocal_1545[iVar0] == func_125() && func_118(iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_13), iVar0);
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_14, iVar0))
			{
				if (iLocal_1545[iVar0] >= 1 && func_118(iVar0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_14), iVar0);
				}
			}
			else if (iLocal_1545[iVar0] == 0 || !func_118(iVar0))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_14, iVar0))
				{
					unk_0x507FE690B1271947(&(Local_121.f_14), iVar0);
					if (iLocal_1545[iVar0] == 0)
					{
						if (Local_121.f_241 >= 1)
						{
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
							{
								func_25(&(Local_121.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_15, iVar0) && func_118(iVar0))
			{
				if (iLocal_1545[iVar0] >= 2)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_15), iVar0);
				}
			}
			else if (iLocal_1545[iVar0] <= 1 || !func_118(iVar0))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_15, iVar0))
				{
					unk_0x507FE690B1271947(&(Local_121.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1545[iVar0] < func_125() || !func_118(iVar0))
		{
			unk_0x507FE690B1271947(&(Local_121.f_13), iVar0);
		}
		if (Local_121.f_266[iVar0] != iLocal_1545[iVar0])
		{
			Local_121.f_266[iVar0] = iLocal_1545[iVar0];
			if (Local_121.f_241 == 1)
			{
				if (Local_121.f_266[iVar0] == 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_616, iVar0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_616), iVar0);
					}
				}
			}
		}
		if (Local_121.f_241 == 0)
		{
			if (func_705())
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
				{
					iVar3 = unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]));
					if (iLocal_1545[iVar0] >= func_124(iVar3) && func_118(iVar0))
					{
						iLocal_1550[iVar0] = 1;
					}
				}
			}
		}
		if (Local_121.f_241 == 1)
		{
			if (Local_121.f_256[iVar0] != iLocal_750[iVar0])
			{
				if (iLocal_750[iVar0] >= 0)
				{
					if (iLocal_750[iVar0] > Local_121.f_256[iVar0])
					{
						Local_121.f_256[iVar0] = iLocal_750[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_121.f_256[iVar0] - iLocal_750[iVar0]);
						if (Local_121.f_261[iVar0] != iVar8)
						{
							Local_121.f_261[iVar0] = iVar8;
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
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_121.f_241 == 0)
	{
		if (func_705())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1550[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0x507FE690B1271947(&(Local_121.f_3), 9);
			}
		}
	}
	if (Local_121.f_241 == 0)
	{
		if (!func_22(&(Local_121.f_360)))
		{
			func_20(&(Local_121.f_360), 0, 0);
		}
		else if (func_19(&(Local_121.f_360), 5000, 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
			{
				if (func_705())
				{
					if (Local_121.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 14);
					}
				}
				else if (Local_121.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_121.f_614)
	{
		Local_121.f_614 = iVar1;
	}
	else
	{
		Local_121.f_613 = (Local_121.f_614 - iVar1);
	}
	if (iVar2 > Local_121.f_615)
	{
		Local_121.f_615 = iVar2;
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
	return Local_121.f_28;
}

void func_126(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_16, iParam0))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_755[iParam0 /*18*/].f_2, 12))
		{
			func_127(iParam1, 1);
			unk_0xF6082E2ADA1C795B(&(Local_121.f_16), iParam0);
		}
		else if (Local_121.f_241 >= 1)
		{
			if (Local_755[iParam0 /*18*/].f_1 == 0)
			{
				func_127(iParam1, 1);
				unk_0xF6082E2ADA1C795B(&(Local_121.f_16), iParam0);
			}
			else if (Local_755[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar1]))
					{
						if (func_104(Local_121.f_7[iVar1]))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iParam1), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), 0))
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
					unk_0xF6082E2ADA1C795B(&(Local_121.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_121.f_241 < 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_755[iParam0 /*18*/].f_2, 12))
		{
			func_127(iParam1, 0);
			unk_0x507FE690B1271947(&(Local_121.f_16), iParam0);
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
		{
			unk_0xB463DE5FD1717E9D(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_128(int iParam0, int iParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iParam1)], func_85(iParam1)))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_755[iParam0 /*18*/].f_3[func_86(iParam1)], func_85(iParam1)))
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_272[func_86(iParam1)]), func_85(iParam1));
			if (Local_755[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iParam1]))
			{
				if (!func_31(Local_121.f_48[iParam1]))
				{
					if (!func_89(iParam1))
					{
						unk_0x507FE690B1271947(&(Local_121.f_272[func_86(iParam1)]), func_85(iParam1));
					}
					else if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0x507FE690B1271947(&(Local_121.f_272[func_86(iParam1)]), func_85(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_129(int iParam0, int iParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_271, iParam1))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_755[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_271), iParam1);
			if (Local_755[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_303, iParam1))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_253, iParam1))
				{
					Local_121.f_251 = (Local_121.f_251 - 1);
					if (func_93() > 1)
					{
						if (Local_121.f_252 > 0)
						{
							Local_121.f_302++;
							func_92(iParam1, func_99(1));
						}
					}
					unk_0xF6082E2ADA1C795B(&(Local_121.f_253), iParam1);
				}
				if (func_22(&(Local_121.f_336[iParam1 /*2*/])))
				{
					func_101(&(Local_121.f_336[iParam1 /*2*/]));
				}
				func_25(&(Local_121.f_73[iParam1]));
				unk_0x507FE690B1271947(&(Local_121.f_303), iParam1);
			}
		}
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAA4F14DA15DB0B51(Local_755[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1545[iParam1]++;
		if (iLocal_750[iParam1] < 0)
		{
			if (Local_755[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_121.f_261[iParam1] > 0)
				{
					iLocal_750[iParam1] = Local_121.f_261[iParam1];
				}
				else
				{
					iLocal_750[iParam1] = 0;
				}
			}
		}
		iLocal_750[iParam1] = (iLocal_750[iParam1] + Local_755[iParam0 /*18*/].f_8);
		if (Local_121.f_241 >= 1)
		{
			if (Local_121.f_22[iParam1] == func_6())
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iParam1]))
				{
					if (func_104(Local_121.f_7[iParam1]))
					{
						iVar1 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (unk_0xDB61DD81432BD145(iVar1))
							{
								iVar0 = unk_0xB0BB7458627D389F(iVar1);
								if (iVar0 == iParam2)
								{
									Local_121.f_22[iParam1] = iParam2;
									func_110();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_319, iParam1))
		{
			if (Local_755[iParam0 /*18*/].f_10 > -1)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_319), iParam1);
				func_20(&(Local_121.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_121.f_22[iParam1] != func_6())
	{
		if (!unk_0x885F483F34E47503(Local_121.f_22[iParam1]))
		{
			iVar0 = func_131(iParam1, 1);
			if (iVar0 != func_6())
			{
				Local_121.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_121.f_22[iParam1] = func_6();
			}
		}
		else if (func_16(Local_121.f_22[iParam1], 0))
		{
			Local_121.f_22[iParam1] = func_6();
			func_110();
		}
		else
		{
			iVar1 = unk_0x1E199569E0295838(Local_121.f_22[iParam1]);
			if (!unk_0x769F0F6444C1ABE0(iVar1))
			{
				if (func_104(Local_121.f_7[iParam1]))
				{
					if (!unk_0x5B9B499C707C2A95(iVar1, unk_0xECBE9D2902B2B964(Local_121.f_7[iParam1]), 0))
					{
						iVar0 = func_131(iParam1, 1);
						if (iVar0 != func_6())
						{
							Local_121.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_121.f_22[iParam1] = func_6();
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
		while (iVar3 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar3)))
			{
				if (iVar0 == func_6())
				{
					if (Local_755[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0xAA4F14DA15DB0B51(Local_755[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar3));
							}
							else
							{
								iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar3));
								if (func_104(Local_121.f_7[iParam0]))
								{
									iVar2 = unk_0x1E199569E0295838(iVar1);
									if (!unk_0x769F0F6444C1ABE0(iVar2))
									{
										if (unk_0x5B9B499C707C2A95(iVar2, unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 0))
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
	
	Var0.f_0 = 1187610982;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	iVar3 = func_133(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_802(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
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
	if (func_67(Local_121.f_27))
	{
		if (func_136())
		{
			unk_0xFD213087BC4CC3B3(Local_121.f_27);
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
	while (iVar0 < Local_121.f_12)
	{
		if (!unk_0x3756406E4D76B25E(Local_121.f_7[iVar0]))
		{
			if (func_67(Local_121.f_27))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_244, iVar0))
				{
					unk_0x333EF04F1A5ADEB5(Local_121.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0xF6082E2ADA1C795B(&(Local_121.f_244), iVar0);
				}
				if (func_79(&(Local_121.f_7[iVar0]), Local_121.f_27, Local_121.f_30[iVar0 /*3*/], Local_121.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0x2B783BB37AA23A41(unk_0x7BAE3A9057619E1F(Local_121.f_7[iVar0]), 1, 1);
					unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
					unk_0x4ACEF9AFD39C05AD(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
					unk_0xD5D212A571028C13(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
					unk_0xD3E5E6DE4F3CED03(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0, 0);
					unk_0xA32D9C84C1A93920(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
					unk_0xFEF767EEC8AAF41E(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
					unk_0x435850511E04A8D1(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]));
					unk_0x2DEA38A68AA89671(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1, 1, 0);
					unk_0xE77EEA92586CF2E8(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
					unk_0x4FF56972862B602F(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
					if (unk_0x0F93427D94EAEAA2(Local_121.f_27) || unk_0xDA6E804770521A18(Local_121.f_27))
					{
						unk_0x5ADC55733B227FF7(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
						if (unk_0x0F93427D94EAEAA2(Local_121.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_139());
						}
						else if (unk_0xDA6E804770521A18(Local_121.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						unk_0x67E5DE1657F60AC6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x4EA5B5526A4651E9(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x6385100E76566DD6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
						unk_0xBE519AD97D32A1D0(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
						unk_0x525CB8A0699017B3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
						if (unk_0xDA6E804770521A18(Local_121.f_27))
						{
							unk_0x91E310A5AD61C549(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
						}
						if (unk_0x0F93427D94EAEAA2(Local_121.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x880A8D6F3A1B7A36(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
							unk_0xD9E9CC18714902C0(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0x0F93427D94EAEAA2(Local_121.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_139());
						}
						else if (unk_0xDA6E804770521A18(Local_121.f_27))
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_138());
						}
						else
						{
							fVar1 = unk_0xBBDA792448DB5A89(func_137());
						}
						unk_0x67E5DE1657F60AC6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x4EA5B5526A4651E9(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), unk_0xF2DB717A73826179(fVar1));
						unk_0x6385100E76566DD6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
						unk_0xBE519AD97D32A1D0(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
						unk_0x525CB8A0699017B3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), fVar1);
					}
					unk_0x3EACD080B21FFD9A(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
					if (Local_121.f_27 == joaat("savage"))
					{
					}
					if (unk_0x4D1A8278BAE26361("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xE7B1DEED5908F19B(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x4D1A8278BAE26361("MPBitset", 3))
					{
						if (unk_0x30BD96CB13063EC9(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x01307FD0B54F50D3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), "MPBitset");
						}
						unk_0xF6082E2ADA1C795B(&iVar2, 10);
						unk_0xF6082E2ADA1C795B(&iVar2, 15);
						unk_0xE7B1DEED5908F19B(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0xB082361505D98AC8(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0, iLocal_1542);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0xB082361505D98AC8(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0, Global_1574695[iVar3]);
						iVar3++;
					}
					unk_0x6EBF6E4215485684(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0, 0);
					unk_0x8679116E3E8CB607(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
					unk_0xF65C7766FB8D4B2C(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1);
					unk_0xE3DB968E63BCE4D3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), false);
					unk_0x66836FB7C87AD349(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_121.f_12)
	{
		if (!unk_0x3756406E4D76B25E(Local_121.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_137()
{
	if (func_705())
	{
		return Global_262145.f_10027;
	}
	return Global_262145.f_9767;
}

var func_138()
{
	if (func_705())
	{
		return Global_262145.f_10028;
	}
	return Global_262145.f_9768;
}

var func_139()
{
	if (func_705())
	{
		return Global_262145.f_10026;
	}
	return Global_262145.f_9766;
}

bool func_140()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_121.f_362)))
	{
		func_20(&(Local_121.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_121.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 10))
	{
		if (func_154(&iVar0))
		{
			if (iVar0 < func_153())
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 10);
			}
			else
			{
				iVar1 = unk_0x895FB9FE885E36ED(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_10021) && !Global_262145.f_10019) || Global_262145.f_10020)
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 8);
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 10);
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 10);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 10))
	{
		if (Local_121.f_12 == 0)
		{
			func_107();
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 13))
		{
			if (func_149())
			{
				if (!func_147(129, Local_121.f_1, Local_121.f_2, 0))
				{
					if (func_141())
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 13);
					}
					else
					{
						Local_121.f_29 = -1;
					}
				}
				else
				{
					Local_121.f_29 = -1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Local_121.f_3, 13);
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_107();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_142(Local_121.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_121.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
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
	
	if (Global_2420928.f_84.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2420928.f_84[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = unk_0xCAEDBF30E3EA14FC(&(Global_2420928.f_84[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2420928.f_84.f_225)
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
		if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359719[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (unk_0x4A2E6F541CD8C36E(Var36, Var39, 1) < fParam3)
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
	
	if (unk_0x58478145CAF8429C(&(uParam0->f_3)))
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

int func_145(var uParam0)
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
		if (iVar0 < Global_262145.f_6995)
		{
			if (Global_2479594.f_148[iVar0 /*2*/] == iVar1 && Global_2479594.f_148[iVar0 /*2*/].f_1 == func_134(iParam0, iParam1, iParam2, iParam3))
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
	if (func_151(&(Local_121.f_27)))
	{
		if (Local_121.f_4)
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
	Global_1770670 = 1;
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 0))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 0);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 0);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 1))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 1);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 1);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 5))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 5);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 5);
	}
	if (unk_0x5D03CCED0E46E032(-355737150))
	{
		unk_0x6ADA8071E27ECAB6(-355737150, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-580979506))
	{
		unk_0x6ADA8071E27ECAB6(-580979506, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1426452475))
	{
		unk_0x6ADA8071E27ECAB6(-1426452475, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(745417724))
	{
		unk_0x6ADA8071E27ECAB6(745417724, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1305304906))
	{
		unk_0x6ADA8071E27ECAB6(-1305304906, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1543175077))
	{
		unk_0x6ADA8071E27ECAB6(-1543175077, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-811770997))
	{
		unk_0x6ADA8071E27ECAB6(-811770997, 0, 0, 0);
	}
}

int func_151(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x895FB9FE885E36ED(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_152(joaat("rhino")))
			{
				Local_121.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_152(joaat("hydra")))
			{
				Local_121.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_121.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_152(joaat("savage")))
			{
				Local_121.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_121.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_152(joaat("valkyrie")))
			{
				Local_121.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_152(joaat("buzzard")))
			{
				Local_121.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	if (!func_705())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_9756;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_9758;
				break;
			
			case joaat("savage"):
				return Global_262145.f_9757;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_9760;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_9759;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_10035;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_10037;
				break;
			
			case joaat("savage"):
				return Global_262145.f_10036;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_10039;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_10038;
				break;
			}
	}
	return 0;
}

int func_153()
{
	return Global_262145.f_9770;
}

int func_154(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_121.f_334)))
	{
		func_20(&(Local_121.f_334), 0, 0);
	}
	else if (func_19(&(Local_121.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
			{
				if (!func_16(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0)), 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_755[iVar0 /*18*/].f_2, 7))
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
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
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
		if (unk_0x62E688B72E3C57B0())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_157()
{
	struct<3> Var0;
	
	if (iLocal_3728 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iLocal_3728]))
		{
			if (unk_0x434105A1C45F1BED(Local_121.f_7[iLocal_3728]))
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iLocal_3728]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_121.f_7[iLocal_3728]));
				}
			}
		}
	}
	iLocal_3728++;
	if (iLocal_3728 >= 4)
	{
		iLocal_3728 = 0;
	}
}

void func_158()
{
	if (func_16(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 13))
		{
			unk_0xF6082E2ADA1C795B(&iLocal_1333, 13);
			unk_0x0E76FE9D6BA1007D(1, 0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 13))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				unk_0x0E76FE9D6BA1007D(0, 0);
				unk_0x507FE690B1271947(&iLocal_1333, 13);
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
	
	if (!func_16(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	if (func_402())
	{
		func_263(0);
	}
	iVar0 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
	{
		Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_6())
	{
		if (unk_0x885F483F34E47503(iVar0))
		{
			if (unk_0x76BCE6C7B20502DA(iVar0))
			{
				uVar1 = unk_0x675E1E93DBDAF30B(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_755[iVar2 /*18*/].f_17;
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
			func_161(Local_121.f_48[iVar0], &(Local_1349[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_161(Local_121.f_48[iVar0], &(Local_1349[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (unk_0xBDD3EABACAB97D09(Local_1349[iVar0 /*8*/]))
		{
			unk_0xA6B842B66643C116(Local_1349[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x462AF05FA2053F74(Local_1349[iVar0 /*8*/], 1);
			}
		}
		if (unk_0xBDD3EABACAB97D09(Local_1349[iVar0 /*8*/].f_1))
		{
			unk_0xA6B842B66643C116(Local_1349[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x462AF05FA2053F74(Local_1349[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_121.f_27 != joaat("hydra"))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar0)], func_85(iVar0)) || unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar0)], func_85(iVar0)))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar0]))
				{
					func_87(&(Local_1349[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_271, iVar1) || unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6, iVar1))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar0]))
				{
					func_87(&(Local_1349[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_161(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (func_163())
		{
			Global_2434604 = unk_0x0FFED3E94261A832();
		}
		if (bParam3)
		{
			func_162(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, 1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_162(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, -1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(*uParam1))
	{
		func_87(uParam1);
	}
}

int func_162(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x8A41C463063AFC8E();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (!unk_0x4C2C9007DF4A7DB6(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x740D0745C06D2DDC(iParam0, 1);
			}
			else
			{
				unk_0xEC788EF0F7E0437A(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x958B0F67184F0A15(iParam0, iParam2);
			unk_0xE27A966E15A7110C(iParam0, fParam6);
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA4130A6FADB516EE(iParam0, iParam9);
		}
		unk_0xEEFEA3C5BD4B4CEC(iParam0, uParam4);
		unk_0xFA67C6B6608350D2(iParam0, uParam5);
		*uParam1 = unk_0x964C09CA77A5150B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB5D36079067EBA5(*uParam1, iParam8);
				}
				unk_0xCE515166115E0087("STRING");
				if (bParam10)
				{
					unk_0xCF6846167A5EFE98(uParam7);
				}
				else
				{
					unk_0xD5DA3EC5EEC78358(uParam7);
				}
				unk_0xC3EC4F430EC11854(*uParam1);
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 2))
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!unk_0x58478145CAF8429C(sParam7))
				{
					unk_0xCE515166115E0087("STRING");
					if (bParam10)
					{
						unk_0xCF6846167A5EFE98(sParam7);
					}
					else
					{
						unk_0xD5DA3EC5EEC78358(sParam7);
					}
					unk_0xC3EC4F430EC11854(*uParam1);
				}
				unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			uParam1->f_1 = unk_0x05DF223770EFF48B(iParam0);
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 3))
			{
				if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
				{
					unk_0x697F84823ACFF84C(uParam1->f_1, 7);
					unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x507FE690B1271947(&(uParam1->f_6), 3);
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
	return Global_1312829;
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
	
	iVar2 = (func_34() - func_121(&(Local_121.f_332), 0, 0));
	if (iLocal_3674 == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 26))
		{
			if ((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2))
			{
				iLocal_3674 = (func_34() - func_121(&(Local_121.f_332), 0, 0));
				iVar2 = iLocal_3674;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3674;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_705())
	{
		iVar0 = (((Local_121.f_256[0] + Local_121.f_256[1]) + Local_121.f_256[2]) + Local_121.f_256[3]);
	}
	else
	{
		iVar0 = Local_121.f_256[0];
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
	if (func_705())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = unk_0x7C214DA899F05536(Local_121.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_6())
			{
				if (unk_0x885F483F34E47503(iVar21))
				{
					sVar4[iVar1] = unk_0x4325D353D7D27B34(iVar21);
					iVar10[iVar1] = Local_121.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_121.f_594[iVar1 /*4*/];
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 == uVar15[iVar1])
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
		if ((func_34() - func_121(&(Local_121.f_332), 0, 0)) >= 0)
		{
			if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
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
		if (iVar0 > Local_121.f_255)
		{
			iVar0 = Local_121.f_255;
		}
		if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
		{
			func_179(unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), iVar0, iVar0, Local_121.f_255, iVar2, iVar3, 0, func_183());
		}
		else
		{
			func_165(iVar0, iVar0, Local_121.f_255, iVar2, iVar3, 0, func_183(), 1);
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
		Global_1353013.f_1 = 1;
		func_167(7, iVar0);
		Global_1353013.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = iParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = iParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_167(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_168(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

int func_169(char* sParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(sParam0, "0"))
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
		Global_1353013.f_1 = 1;
		func_167(4, iVar0);
		Global_1353013.f_3098[iVar0] = iParam0;
		Global_1353013.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1353013.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_3098.f_183[iVar0] = iParam3;
		Global_1353013.f_3098.f_216[iVar0] = iParam5;
		Global_1353013.f_3098.f_194[iVar0] = iParam4;
		Global_1353013.f_3098.f_227[iVar0] = iParam6;
		Global_1353013.f_3098.f_270[iVar0] = iParam7;
		Global_1353013.f_3098.f_281[iVar0] = iParam8;
		Global_1353013.f_3098.f_292[iVar0] = iParam9;
		Global_1353013.f_3098.f_303[iVar0] = iParam10;
		Global_1353013.f_3098.f_314[iVar0] = iParam11;
		Global_1353013.f_3098.f_325[iVar0] = iParam13;
		Global_1353013.f_3098.f_336[iVar0] = iParam14;
		Global_1353013.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x5018862FF5D9F844()) && iParam12)
		{
			Global_1353013.f_1088 = 1;
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
		Global_1353013.f_1 = 1;
		func_167(6, iVar0);
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
		if (iParam15 == 5 && func_173())
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
			if (func_172())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_172()
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

int func_173()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	Global_2456239 = 1;
}

void func_175()
{
	Global_1353013.f_1088 = 1;
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
		if (func_802(unk_0x0FFED3E94261A832(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_178()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 12);
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
	
	StringConCat(&Var0, unk_0x91D2F083AE17E209("HUD_TEAM"), 64);
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
	switch (func_185(unk_0x0FFED3E94261A832()))
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
	if (func_185(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

void func_186(int iParam0)
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

void func_187()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_1344[iVar0]))
		{
			unk_0x789C84F1B8496AD0(&(uLocal_1344[iVar0]));
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
		if (!unk_0xBDD3EABACAB97D09(uLocal_1344[iVar0]))
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_13, iVar0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_755[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1344[iVar0] = unk_0x9E3A324AB806771E(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]));
						unk_0x9FD1808EF916E312(uLocal_1344[iVar0], 429);
						func_189(&(uLocal_1344[iVar0]), 29);
						if (func_705())
						{
							unk_0xA6B842B66643C116(uLocal_1344[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0xA6B842B66643C116(uLocal_1344[iVar0], "UW_BLIP");
						}
						unk_0x697F84823ACFF84C(uLocal_1344[iVar0], 9);
					}
					else if (unk_0xBDD3EABACAB97D09(uLocal_1344[iVar0]))
					{
						unk_0x789C84F1B8496AD0(&(uLocal_1344[iVar0]));
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uLocal_1344[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_1344[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_189(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		uVar0 = func_190(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, uVar0);
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
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_191()
{
	bool bVar0;
	
	bVar0 = func_255();
	if (bVar0)
	{
		if (Local_121.f_413 > -1)
		{
			if ((Local_121.f_413 - func_121(&(Local_121.f_326), 0, 0)) >= 0)
			{
				if (!func_195())
				{
					func_194((Local_121.f_413 - func_121(&(Local_121.f_326), 0, 0)));
					func_192((Local_121.f_413 - func_121(&(Local_121.f_326), 0, 0)), func_193(-1));
				}
			}
			else
			{
				if (!func_195())
				{
					func_192(0, func_193(-1));
				}
				if (unk_0x62E688B72E3C57B0())
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_3), 4);
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
	
	sVar0 = unk_0xFABF5258A318B1DC();
	return "HUD_STARTING";
	if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_challenges"))
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
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_194(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xBCA469D44FBFAC80())
	{
		Global_2497344.f_4666 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 1))
		{
			unk_0x08BE237DBCD9CBD9(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2497344.f_4666 = 0;
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 1);
		}
	}
}

bool func_195()
{
	bool bVar0;
	var uVar1;
	
	if (func_253(8))
	{
		bVar0 = true;
	}
	if (func_253(0))
	{
		bVar0 = true;
	}
	if (!func_245(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_202())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 9))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				uVar1 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
				if (!unk_0x7FAC45D56235AB39(uVar1, 0))
				{
					func_200(0, -1);
					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 9))
	{
		unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 9);
	}
	if (Global_1761100)
	{
		bVar0 = true;
	}
	if (func_199(unk_0x0FFED3E94261A832()))
	{
		bVar0 = true;
	}
	if (func_198(unk_0x0FFED3E94261A832(), 2))
	{
		bVar0 = true;
	}
	if (func_196(unk_0x0FFED3E94261A832()))
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
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

bool func_197(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

bool func_198(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_199(int iParam0)
{
	if (!func_802(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

void func_200(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1592329)
		{
			if (!func_253(0) && !func_253(func_201(iParam1)))
			{
				Global_1592329 = 1;
			}
		}
	}
	else if (Global_1592329)
	{
		Global_1592329 = 0;
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
	if (func_198(unk_0x0FFED3E94261A832(), 21))
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
	if (func_243(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_242())
	{
		return 0;
	}
	if (func_241(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_240())
	{
		return 0;
	}
	if (func_222(unk_0x0FFED3E94261A832()) == 3)
	{
		return 0;
	}
	if (func_220(func_221()))
	{
		return 0;
	}
	if (func_219())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_217(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_215())
	{
		return 0;
	}
	if (func_198(unk_0x0FFED3E94261A832(), 0) || func_198(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_198(unk_0x0FFED3E94261A832(), 12) || func_198(unk_0x0FFED3E94261A832(), 14)) || func_198(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_211(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_210(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_209())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_199(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_208())
	{
		return 0;
	}
	if (func_206(unk_0x0FFED3E94261A832()) && Global_1592110.f_170)
	{
		return 0;
	}
	if (func_205(unk_0x0FFED3E94261A832()) || func_203(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_802(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1 && Global_2422215[iParam0 /*387*/].f_318.f_4 != func_6())
			{
				return func_204(Global_2422215[iParam0 /*387*/].f_318.f_1) == 5;
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
	}
	return -1;
}

int func_205(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_802(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	if (func_207(Global_1592456[iParam0 /*635*/].f_259.f_15))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)
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

int func_208()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_209()
{
	return Global_91829.f_310 > 0;
}

bool func_210(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11);
}

int func_211(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (func_214(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_213(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_212(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_205(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_802(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_802(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_802(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_204(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_215()
{
	if (func_216() == 0)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	return Global_1312466.f_18;
}

bool func_217(int iParam0)
{
	return func_218(iParam0);
}

bool func_218(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_219()
{
	return Global_1312852;
}

int func_220(int iParam0)
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

int func_221()
{
	return Global_2434604.f_2483[0 /*76*/].f_1;
}

int func_222(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_239(iParam0) && !func_197(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_238(iParam0);
	bVar3 = func_237();
	uVar4 = func_228();
	if ((bVar1 && (func_227(iParam0) || func_226(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_225(iParam0)) && !func_223(iParam0)))
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

bool func_223(int iParam0)
{
	return func_224(iParam0, 19);
}

bool func_224(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_224(iParam0, 9);
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

int func_228()
{
	if ((func_224(unk_0x0FFED3E94261A832(), 21) || func_224(unk_0x0FFED3E94261A832(), 22)) || func_234())
	{
		return 1;
	}
	if (func_230())
	{
		func_229(22);
		return 1;
	}
	return 0;
}

void func_229(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

int func_230()
{
	if (func_233(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_237() && !func_232()) || func_198(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_231(27);
		}
	}
	return 0;
}

void func_231(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

bool func_232()
{
	return Global_1312416.f_1;
}

int func_233(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_234()
{
	return func_235(289, -1);
}

int func_235(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_236(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

bool func_237()
{
	return Global_1312416;
}

bool func_238(int iParam0)
{
	return func_224(iParam0, 20);
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

bool func_240()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

int func_241(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_242()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_243(int iParam0)
{
	if (func_244(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_244(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_217(iParam0))
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

bool func_245(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6600 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_249(unk_0x0FFED3E94261A832(), 85))
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
	if (func_248() || func_247())
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
			if (func_246())
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
	return unk_0xAA4F14DA15DB0B51(Global_1574366[iVar1], iVar0);
}

int func_246()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 23))
	{
		return 1;
	}
	if (func_248())
	{
		return 1;
	}
	if (func_247())
	{
		return 1;
	}
	uVar0 = Global_1361996[func_236(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 7))
	{
		unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1694), 23);
		return 1;
	}
	return 0;
}

bool func_247()
{
	return Global_1312840;
}

bool func_248()
{
	return Global_1312842;
}

bool func_249(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_252())
	{
		return 0;
	}
	if (func_251())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_250(iParam1);
	iVar1 = uVar0;
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_524, iVar1);
}

int func_250(int iParam0)
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

bool func_251()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144, 3);
}

int func_252()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_248())
	{
		return 1;
	}
	if (func_247())
	{
		return 1;
	}
	return func_235(120, -1);
}

bool func_253(int iParam0)
{
	var uVar0;
	
	uVar0 = func_254(2465, -1, 0);
	return unk_0xAA4F14DA15DB0B51(uVar0, iParam0);
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_236(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_255()
{
	bool bVar0;
	
	if (!func_705())
	{
		if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
	{
		if (func_107() == 2)
		{
			return 0;
		}
	}
	if (!func_705())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[0]))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_121.f_15 != false;
			}
			else
			{
				bVar0 = Local_121.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0xAA4F14DA15DB0B51(Local_121.f_3, 9);
	}
	if (!func_16(unk_0x0FFED3E94261A832(), 0))
	{
		if (bVar0 && !func_195())
		{
			if (func_705())
			{
				if (!func_262("UW_ABTSC"))
				{
					func_256("UW_ABTSC", 0);
				}
			}
			else if (!func_262("UW_ABTS"))
			{
				func_256("UW_ABTS", 0);
			}
		}
		else if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_256(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_260(sParam0))
	{
		return;
	}
	func_10();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_259();
	func_258(bParam1);
	func_257();
}

void func_257()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_258(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_259()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

bool func_260(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_261(uParam0);
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_261(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_262(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x8A3FBC299F47ED6B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	return func_260(sParam0);
}

void func_263(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	bool bVar9;
	
	Var1 = { func_401() };
	StringCopy(&Var5, "UW_TM", 16);
	bVar9 = false;
	if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1558[iVar0 /*49*/] = -1;
			Local_1558[iVar0 /*49*/].f_1 = func_6();
			Local_1558[iVar0 /*49*/].f_9 = 0;
			Local_1558[iVar0 /*49*/].f_31 = -1;
			if (Local_121.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1558[iVar0 /*49*/].f_1 = Local_121.f_465[iVar0 /*4*/].f_2;
				Local_1558[iVar0 /*49*/].f_9 = Local_121.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_400())
			{
				if (Local_3127.f_103 != 129)
				{
					Local_3127.f_103 = 129;
				}
				else
				{
					func_200(1, 129);
				}
			}
		}
		else if (Local_3127.f_103 != 129)
		{
			Local_3127.f_103 = 129;
		}
		func_268(&Local_1558, &uLocal_1557, 25, &Local_3127, &uLocal_3238, -1, 0);
		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 1)
		{
			if (Local_1558[0 /*49*/].f_1 != unk_0x0FFED3E94261A832())
			{
				if (Local_121.f_465[0 /*4*/].f_1 > 0)
				{
					func_267();
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
			Local_1558[iVar0 /*49*/] = -1;
			Local_1558[iVar0 /*49*/].f_1 = func_6();
			Local_1558[iVar0 /*49*/].f_9 = 0;
			Local_1558[iVar0 /*49*/].f_31 = -1;
			if (Local_121.f_465[iVar0 /*4*/].f_1 > -1)
			{
				StringIntConCat(&Var5, Local_121.f_465[iVar0 /*4*/] + 1, 16);
				Local_1558[iVar0 /*49*/].f_39 = { Var5 };
				Local_1558[iVar0 /*49*/].f_1 = unk_0x7C214DA899F05536(Local_121.f_465[iVar0 /*4*/].f_2);
				StringCopy(&(Local_1558[iVar0 /*49*/].f_43), "", 16);
				Local_1558[iVar0 /*49*/].f_47 = Local_121.f_465[iVar0 /*4*/].f_1;
				Local_1558[iVar0 /*49*/].f_9 = Local_121.f_465[iVar0 /*4*/].f_1;
				Local_1558[iVar0 /*49*/].f_2 = Local_121.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_264();
		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 1)
		{
			if (Local_121.f_594[0 /*4*/] > 0)
			{
				if (Local_121.f_594[0 /*4*/] != Local_755[unk_0x88641E5BC172153A() /*18*/].f_9)
				{
					if (Local_121.f_256[Local_121.f_594[0 /*4*/]] > 0)
					{
						func_267();
					}
				}
			}
		}
		func_268(&Local_1558, &uLocal_1557, 25, &Local_3127, &uLocal_3238, -1, 1);
		if (bParam0)
		{
			if (!func_400())
			{
				if (Local_3127.f_103 != 129)
				{
					Local_3127.f_103 = 129;
				}
				else
				{
					func_200(1, 129);
				}
			}
		}
		else if (Local_3127.f_103 != 129)
		{
			Local_3127.f_103 = 129;
		}
	}
}

void func_264()
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
	
	uLocal_3763[0] = Local_121.f_594[0 /*4*/];
	uLocal_3763[1] = Local_121.f_594[1 /*4*/];
	uLocal_3763[2] = Local_121.f_594[2 /*4*/];
	uLocal_3763[3] = Local_121.f_594[3 /*4*/];
	iVar3 = Local_121.f_594[0 /*4*/];
	iVar4 = Local_121.f_594[1 /*4*/];
	iVar5 = Local_121.f_594[2 /*4*/];
	iVar6 = Local_121.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_121.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_121.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_121.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_121.f_266[iVar6];
	}
	uLocal_3768[0] = uVar7;
	uLocal_3768[1] = uVar8;
	uLocal_3768[2] = uVar9;
	uLocal_3768[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0xD7577082A8533202())
	{
		iVar2 = func_266(uLocal_3763[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1558[iVar2 /*49*/].f_9 = Local_121.f_594[iVar0 /*4*/].f_1;
		}
		func_265(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3768[iVar0])
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

void func_265(int iParam0, int iParam1)
{
	struct<49> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1558[iParam1 /*49*/] };
	Local_1558[iParam1 /*49*/] = { Local_1558[iParam0 /*49*/] };
	Local_1558[iParam0 /*49*/] = { Var0 };
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0xD7577082A8533202() - 1))
	{
		if (iParam0 == Local_1558[iVar0 /*49*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0xD7577082A8533202();
		}
		iVar0++;
	}
	return iVar1;
}

void func_267()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1697), 19);
}

void func_268(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_399(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_397() || iParam2 == 26)
	{
		if (func_352(uParam1, iParam2, uParam3, Global_1574108, 0, func_402()))
		{
			func_351(1);
			if ((!func_349() && !func_347()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_346())
				{
					func_343();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_342(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_341(uParam1);
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
								if (func_802(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_16(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_340(iVar35))
										{
											iVar44 = iVar35;
											if (func_339(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_336(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_333(unk_0x0FFED3E94261A832(), 0) && func_332(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_331())
							{
								if (func_802(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_6();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_330(iVar35) && func_326(iVar35, iParam2)) && func_802(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_321(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
								iVar37 = func_315(iVar35);
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
									if (!func_331())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_310(&iVar43, &fVar45, (iParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_309(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_304(iVar35, 0);
								if (bVar34)
								{
									if (func_303(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_302(iParam5))
								{
									func_301(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_301(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*49*/])->f_39), &((iParam0[iVar52 /*49*/])->f_43), (iParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
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
							if (func_802(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_6();
							}
							if (func_330(iVar35))
							{
								if (func_802(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_321(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
									iVar37 = func_315(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_304(iVar35, 1);
									if (bVar34)
									{
										if (func_303(iVar35, 1))
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
									func_281(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_278(uParam3, uParam1);
						}
						func_101(&(uParam3->f_21));
						func_277();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_276(uParam3, uParam1);
							func_275(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_276(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_271(uParam3))
						{
							Global_1574291 = 1;
						}
						func_269(uParam3);
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
			func_277();
			func_342(0);
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

void func_269(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_101(&(uParam0->f_21));
		func_270(0);
	}
}

void func_270(bool bParam0)
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

int func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_6() && func_802(iVar15, 0, 1))
	{
		Var2 = { func_63(iVar15) };
		iVar1 = func_274(uParam0, uParam0->f_37);
		if (func_273(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_272(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_272(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_272(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_272(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_272(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_272(uParam0, iVar0, 0);
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

void func_272(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_274(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_275(var uParam0, int iParam1, int iParam2)
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

void func_276(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_277()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_278(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_6())
		{
			if (func_802(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_280(uParam0->f_38[iVar0 /*2*/], 0);
					func_279(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_279(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_280(int iParam0, bool bParam1)
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

void func_281(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_300() && iParam4 < func_299())
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
				func_298("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_298(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_298("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_298("");
			if (uParam3->f_108 == 6)
			{
				func_298("");
			}
			else
			{
				func_298(&sParam5);
			}
			func_286(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_285(uParam3))
			{
				func_284("DPAD_FRIEND");
			}
			else if (func_283(uParam3))
			{
				func_284("DPAD_FRIEND");
			}
			else if (func_282(uParam3))
			{
				func_284("DPAD_CREW");
			}
			else
			{
				func_284("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_282(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_283(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_284(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_285(var uParam0)
{
	if (func_283(uParam0) && func_282(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_286(var uParam0, int iParam1)
{
	if (func_297(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_291(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_287())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_287()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_289() || func_288())
		{
			return 1;
		}
	}
	return 0;
}

var func_288()
{
	return Global_2445217.f_12;
}

int func_289()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_288();
	}
	return func_290(Global_1638223.f_93532);
}

int func_290(int iParam0)
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

int func_291(int iParam0)
{
	if ((func_802(iParam0, 0, 1) && func_295()) && func_292(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_292(int iParam0, bool bParam1)
{
	return func_293(iParam0, bParam1, 1);
}

int func_293(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_294(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_6() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_6())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_295()
{
	if (func_239(unk_0x0FFED3E94261A832()) || func_296())
	{
		return 0;
	}
	return 1;
}

int func_296()
{
	switch (func_332(unk_0x0FFED3E94261A832()))
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

int func_297(int iParam0)
{
	if (func_287())
	{
		if (func_802(iParam0, 0, 1))
		{
			return func_339(iParam0);
		}
	}
	if ((func_802(iParam0, 0, 1) && func_295()) && func_294(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_298(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_299()
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

int func_300()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_301(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_300() && iParam3 < func_299())
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
					func_298("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_284(sParam16);
				}
				else
				{
					func_298(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_298("");
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
				if (func_331())
				{
					func_298("");
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
						func_284(&(uParam2->f_104));
					}
					else
					{
						func_298("");
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
					func_298("");
				}
				if (uParam2->f_108 == 6)
				{
					func_298("");
				}
				else
				{
					func_298(&sParam4);
				}
				func_286(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_298("");
					func_298("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_285(uParam2))
				{
					func_284("DPAD_FRIEND");
				}
				else if (func_283(uParam2))
				{
					func_284("DPAD_FRIEND");
				}
				else if (func_282(uParam2))
				{
					func_284("DPAD_CREW");
				}
				else
				{
					func_284("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_302(int iParam0)
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

bool func_303(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_339(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_6();
}

int func_304(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_239(iParam0)) && !func_238(iParam0))
	{
		iVar0 = func_308();
	}
	iVar1 = func_307(iParam0);
	if (!iVar1 == -1)
	{
		return func_305(iVar1);
	}
	return iVar0;
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_306(iParam0);
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

var func_306(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_307(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_303(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_308()
{
	return 21;
}

char* func_309(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_310(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_314(iParam3))
	{
		*fParam1 = (func_311(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_302(iParam3))
	{
		*fParam1 = (func_311(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_311(int iParam0, int iParam1)
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
				return func_313(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_312(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_312(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_313(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_314(int iParam0)
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

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = func_318(iParam0);
	if (iVar0 == -1)
	{
		func_316(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_316(int iParam0, bool bParam1)
{
	if (!func_802(iParam0, 0, 1))
	{
		return;
	}
	if (func_318(iParam0) != -1)
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
	if (func_317(iParam0))
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

int func_317(int iParam0)
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

int func_318(int iParam0)
{
	int iVar0;
	
	if (!func_802(iParam0, 0, 1))
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
			func_319(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_319(int iParam0)
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
	func_320(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_320(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_6();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_321(int iParam0)
{
	struct<4> Var0;
	
	if (func_802(iParam0, 0, 1))
	{
		Global_2484572 = { func_63(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_273(Global_2484572))
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
		if (func_325(&Global_2484572))
		{
			Global_2484502 = { func_323(iParam0) };
			func_322(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_322(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_323(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_324(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_63(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_324(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_325(var uParam0)
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

int func_326(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_197(iParam0) || func_329(iParam0)) || func_196(iParam0))
		{
			return 0;
		}
	}
	if (!func_328(iParam0))
	{
		return 0;
	}
	if ((!func_327(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_340(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_327(int iParam0)
{
	if (func_802(iParam0, 0, 1))
	{
		if (func_802(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_328(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

int func_329(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_330(int iParam0)
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
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_331()
{
	switch (func_332(unk_0x0FFED3E94261A832()))
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
	switch (func_185(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_238(unk_0x0FFED3E94261A832()))
	{
		switch (func_332(unk_0x0FFED3E94261A832()))
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

int func_332(int iParam0)
{
	if (func_233(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_333(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_334(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_334(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_334(int iParam0)
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
	return func_335(iParam0, 0);
	return 0;
}

int func_335(int iParam0, int iParam1)
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

void func_336(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_802(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_16(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_340(iVar1))
				{
					if (func_337(iVar1, iParam1, 0))
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

int func_337(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_6())
	{
		if (!bParam2)
		{
			if (func_338(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_6())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	if (iParam1 != func_6())
	{
		if (iParam0 != func_6())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_6())
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

int func_339(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_6())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_340(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

void func_341(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_342(bool bParam0)
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

void func_343()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_345())
		{
			func_344();
		}
	}
}

void func_344()
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

bool func_345()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

int func_346()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_345())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_345())
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	if (func_345())
	{
		if (func_348(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
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

int func_349()
{
	if (func_345())
	{
		if (func_350(Global_2434604.f_2483[0 /*76*/].f_1))
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

void func_351(int iParam0)
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

int func_352(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_396(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_395();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_394())
		{
			if (func_393() > 0 && Global_1574110)
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
		if (!func_382())
		{
			func_381(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_381(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_393() == 1)
		{
			func_380(bVar6, uParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_381(uParam0, uParam2, 0);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_393() == 0 && !bParam5))
		{
			func_381(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_379();
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
					func_379();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_380(bVar6, uParam0, 0))
				{
					func_341(uParam0);
					uVar4 = func_377(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_375(iParam1) };
					if (bParam4)
					{
						func_372(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_367(uParam0, func_369(uParam2), func_368(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_358(uParam0, func_360(uParam2), func_359(), -1);
					}
					else if (func_287())
					{
						uParam2->f_34 = Global_1574109;
						func_372(uParam0, uVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_372(uParam0, uVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_353(iParam1);
						func_372(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
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

int func_353(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_357())
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
			if (func_356(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_355(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_354(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_354(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_355(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_356(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_357()
{
	return Global_1638223.f_1 == 0;
}

void func_358(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_284(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_284("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_359()
{
	switch (func_332(unk_0x0FFED3E94261A832()))
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

char* func_360(var uParam0)
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
	switch (func_332(unk_0x0FFED3E94261A832()))
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
			if (func_363())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_362(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_362(1))
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
			if (func_361(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_361(int iParam0)
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

bool func_362(bool bParam0)
{
	return func_292(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_363()
{
	return (func_366() && func_364(func_365()));
}

int func_364(int iParam0)
{
	return func_294(iParam0, 1);
}

int func_365()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_366()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_367(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(uParam2))
		{
			func_284(uParam1);
		}
		else if (func_185(unk_0x0FFED3E94261A832()) == 133)
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
		func_284("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_368(var uParam0)
{
	int iVar0;
	
	iVar0 = func_185(unk_0x0FFED3E94261A832());
	if (func_400())
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

char* func_369(var uParam0)
{
	int iVar0;
	
	iVar0 = func_185(unk_0x0FFED3E94261A832());
	if (func_400())
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
			if (func_371() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_371() == 1)
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
			if (func_370() == 1)
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

int func_370()
{
	return Global_2497344.f_4753;
}

int func_371()
{
	if (func_185(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_372(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_298(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(uParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_284(sParam1);
		}
		if (func_394() && iParam6)
		{
			if (func_374())
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
			func_284(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_373(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_373(int iParam0)
{
	if (func_356(iParam0) || func_355(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_374()
{
	return Global_1574110;
}

struct<4> func_375(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_376(unk_0x0FFED3E94261A832()) || func_354(unk_0x0FFED3E94261A832()))
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
	if (func_287() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_376(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_377(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_287() || unk_0x58478145CAF8429C(uParam1)))
	{
		uVar0 = func_378();
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

char* func_378()
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

void func_379()
{
	Global_36716 = 1;
}

bool func_380(bool bParam0, var uParam1, bool bParam2)
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

void func_381(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_277();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_101(&(uParam1->f_19));
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

int func_382()
{
	if (func_392())
	{
		return 0;
	}
	if (func_240())
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (!func_215())
	{
		return 0;
	}
	if (func_389(8, -1))
	{
		return 0;
	}
	if (func_393() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	else if (!func_244(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_388(1) || func_386(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_384(unk_0x0FFED3E94261A832()))
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
	if (func_383(0))
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

bool func_383(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

int func_384(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_385())
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

bool func_385()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_386(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_387(unk_0x2A5EB8B0FE590B91()))
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

int func_387(int iParam0)
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

bool func_388(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_389(int iParam0, int iParam1)
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

int func_390()
{
	if (func_391())
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

bool func_391()
{
	return Global_1312438;
}

bool func_392()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_393()
{
	return Global_1351508.f_68;
}

int func_394()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_395()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_396(int iParam0)
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

int func_397()
{
	if (func_402())
	{
		return 1;
	}
	if (func_196(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_400())
	{
		return 1;
	}
	if (func_239(unk_0x0FFED3E94261A832()))
	{
		switch (func_185(unk_0x0FFED3E94261A832()))
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
				if (!func_398(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_398(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_398(unk_0x0FFED3E94261A832()))
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

bool func_398(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_399(int iParam0)
{
	if ((iParam0 == 26 && func_239(unk_0x0FFED3E94261A832())) && !func_238(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_233(unk_0x0FFED3E94261A832(), 0) && func_238(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_222(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_400()
{
	return Global_1592329;
}

struct<4> func_401()
{
	struct<4> Var0;
	
	switch (Local_121.f_27)
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

int func_402()
{
	if (func_403(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_403(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_16(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

void func_404()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_16(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	switch (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17)
	{
		case 0:
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 == 0)
			{
				if (Local_121.f_241 == 0)
				{
					func_710();
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 22))
			{
				if (Local_121.f_27 == joaat("rhino") && Local_121.f_29 == 2)
				{
					func_679(Local_121.f_30[0 /*3*/]);
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 22);
				}
				else if (!func_66(Local_121.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_679(Local_121.f_30[0 /*3*/]);
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 22);
				}
			}
			func_678();
			func_672();
			if (Local_121.f_241 == 0)
			{
				func_669(1);
			}
			func_668(0);
			if (Local_121.f_241 == 0)
			{
				if (!Local_121.f_27 == joaat("hydra") && !Local_121.f_27 == joaat("rhino"))
				{
					func_191();
				}
				else if (func_705())
				{
					func_191();
				}
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 1))
					{
						func_667(129);
						func_645(1);
						unk_0xF6082E2ADA1C795B(&iLocal_1333, 1);
						unk_0x337229861BC52CD5(0);
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 6))
					{
						if (Local_121.f_28 > 1 || (Local_121.f_28 == 1 && func_107() > 1))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 4))
							{
								Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 = 0;
								unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 1))
				{
					unk_0x507FE690B1271947(&iLocal_1333, 1);
					func_644(1);
					func_643();
					func_645(0);
				}
			}
			if (Local_121.f_241 == 1)
			{
				func_642(&iVar4, &uVar5);
				iLocal_3664 = iVar4;
				func_641(0);
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
				{
					if (!func_640())
					{
						unk_0xF6082E2ADA1C795B(&iLocal_1333, 19);
					}
					if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
					{
						func_9();
					}
					unk_0x337229861BC52CD5(0);
					if ((func_639("UW_MINV") || func_639("UW_TIMELA")) || func_639("UW_TIMEL"))
					{
						unk_0x7D53B6FFAEDA810A(1);
					}
					func_187();
					func_629(129, 0f, 0f, 1, 1, 1, 0);
					func_626(1);
					func_625();
					unk_0xFBC4596E19752537(0.1f);
					iLocal_1342 = unk_0xA0F7964BC7FD74A9();
					unk_0xE0125DCD8DB3EFC3(0);
					func_624(1);
					func_623(1);
					if (Local_121.f_27 != joaat("rhino"))
					{
						func_604(1);
					}
					iLocal_1544 = unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91());
					unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_1542);
					unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
					unk_0x988197573BDAD49A("MP_MC_START");
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 184, 1);
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 151, 0);
					func_603(0);
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 = iLocal_3664;
					if (!func_705())
					{
						func_602(63, "UW_TITLE", "UW_DESC", func_308(), -1, func_308());
					}
					else if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
					{
						func_602(63, "UW_TITLEC", "UW_DESCC", func_308(), -1, func_308());
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_601(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_308(), func_308());
					}
					Local_738.f_9 = unk_0xDA84A1E29323722E();
					func_603(0);
					func_599(0);
					func_20(&uLocal_3702, 0, 0);
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 1;
				}
				else
				{
					func_187();
					if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
					{
						func_9();
					}
					if (func_596("UW_HELP1", func_598(), func_597(1)) || func_596("UW_HELP1C", func_598(), func_597(1)))
					{
						unk_0x7D53B6FFAEDA810A(1);
					}
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
					func_603(0);
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 == 0)
					{
					}
					else if (!func_595())
					{
					}
				}
			}
			else if (Local_121.f_241 == 3)
			{
				func_603(0);
				if (func_596("UW_HELP1", func_598(), func_597(1)) || func_596("UW_HELP1C", func_598(), func_597(1)))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				if (!func_594())
				{
				}
				if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
				{
					func_9();
				}
				func_187();
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 3;
			}
			else if (Local_121.f_241 > 3)
			{
				if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
				{
					func_9();
				}
				func_603(0);
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
				{
					func_593();
					func_592();
					if (func_117())
					{
						func_625();
					}
				}
				if (func_705())
				{
					if (func_586(2, 0, 1, 0, 0))
					{
						if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
						{
							func_9();
						}
						func_603(0);
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
					}
				}
				else if (Local_121.f_27 == joaat("valkyrie"))
				{
					if (func_586(2, 0, 1, 0, 0))
					{
						if (func_262("UW_ABTSC") || func_262("UW_ABTS"))
						{
							func_9();
						}
						func_603(0);
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_160(1);
			func_672();
			func_522();
			func_164();
			func_520();
			func_508();
			func_263(0);
			func_504();
			func_501();
			func_593();
			func_592();
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 26))
			{
				if (!func_500(55))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 10))
						{
							if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 == -1)
							{
								if (!func_705())
								{
									if (!func_262("UW_ATTK"))
									{
										func_256("UW_ATTK", 0);
									}
								}
								else if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
								{
									if (!func_262("UW_ATTK"))
									{
										func_256("UW_ATTK", 0);
									}
								}
								else if (!func_262("UW_ATTK"))
								{
									func_642(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_256("UW_ATTK", 0);
								}
							}
							else if (func_262("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_499();
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
			{
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 == -1)
				{
					func_625();
				}
			}
			if (!func_802(unk_0x0FFED3E94261A832(), 1, 1))
			{
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
				func_9();
				unk_0xF6082E2ADA1C795B(&iLocal_1332, 21);
			}
			else if (func_177())
			{
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 1)
			{
				if (!func_498())
				{
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 23);
					func_9();
					if (iLocal_3664 > -1)
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iLocal_3664]))
						{
							func_25(&(Local_121.f_7[iLocal_3664]));
						}
					}
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
				}
			}
			if (Local_121.f_241 == 3)
			{
				func_644(1);
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 3;
			}
			else if (Local_121.f_241 > 3)
			{
				func_644(1);
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
			}
			else if (func_705())
			{
				if (func_586(2, 0, 1, 0, 0))
				{
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_121.f_241 == 3)
			{
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 3;
			}
			else if (Local_121.f_241 > 3)
			{
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
			}
			func_437();
			if (func_594())
			{
				if (func_185(unk_0x0FFED3E94261A832()) == 129)
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x6B7E3D3B66456AA8())
					{
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
						if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 22))
						{
							func_436();
							unk_0x507FE690B1271947(&iLocal_1332, 22);
						}
						func_643();
						func_433();
						func_431(0);
						func_429(0);
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 184, 0);
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 151, 1);
						func_645(0);
						func_644(1);
					}
					func_428();
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 8))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_1333, 8);
			}
			if (!func_195())
			{
				func_427();
				func_520();
				func_160(0);
				func_508();
				func_263(1);
				func_504();
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_426();
			}
			func_421();
			func_420();
			func_522();
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar6]))
					{
						if (!func_31(Local_121.f_48[iVar6]))
						{
							unk_0xA12751452A2A58D1(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar6]), unk_0x0FFED3E94261A832(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_80[iVar6]))
					{
						if (!func_31(Local_121.f_80[iVar6]))
						{
							unk_0xA12751452A2A58D1(unk_0xC09E9E2B61AD04E7(Local_121.f_80[iVar6]), unk_0x0FFED3E94261A832(), 0);
						}
					}
					iVar6++;
				}
				unk_0xF6082E2ADA1C795B(&iLocal_1333, 7);
			}
			else if (Local_121.f_247 != iLocal_3662)
			{
				iLocal_3662 = Local_121.f_247;
				unk_0x507FE690B1271947(&iLocal_1333, 7);
			}
			if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
			{
				unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 11);
			}
			if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 10))
			{
				unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 10);
			}
			if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == iLocal_1542)
			{
				unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_1544);
			}
			break;
		
		case 3:
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 31))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 12))
				{
					func_187();
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 31);
				}
			}
			func_499();
			func_415();
			if (!func_195())
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14) && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 12))
				{
					func_263(1);
				}
				func_508();
				func_520();
				func_504();
				func_406();
			}
			func_437();
			func_420();
			func_522();
			if (Local_121.f_241 > 3)
			{
				Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_751();
			break;
	}
	func_405();
}

void func_405()
{
	int iVar0;
	
	if (iLocal_3725 != Local_121.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_616, iVar0))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3725, iVar0))
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
					{
						if (unk_0x434105A1C45F1BED(Local_121.f_7[iVar0]))
						{
							unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 2);
							func_25(&(Local_121.f_7[iVar0]));
							unk_0xF6082E2ADA1C795B(&iLocal_3725, iVar0);
						}
					}
					else
					{
						unk_0xF6082E2ADA1C795B(&iLocal_3725, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_406()
{
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 5))
		{
			if (func_409(0, 1, 1, 1))
			{
				if (func_705())
				{
					func_408("UW_TFEWC", 30000);
				}
				else
				{
					func_408("UW_TFEW", 30000);
				}
				func_407(1);
				unk_0xF6082E2ADA1C795B(&iLocal_1333, 5);
			}
		}
	}
}

void func_407(int iParam0)
{
	unk_0xE068B121D78064B6(3, 21, 200, 0, 0);
	if (iParam0 && !func_345())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_408(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_409(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_414())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_392())
	{
		return 0;
	}
	if (func_242())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_244(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_413(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_412())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_411())
	{
		return 0;
	}
	if (func_410())
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
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_410()
{
	return Global_2445217.f_571;
}

bool func_411()
{
	return Global_2445217.f_723;
}

bool func_412()
{
	return Global_2434604.f_2791.f_578;
}

int func_413(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_414()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_415()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_262("UW_EXPL") && !func_262("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, (27 + iVar2)))
		{
			if (unk_0x3756406E4D76B25E(Local_121.f_7[iVar2]))
			{
				if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 0))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_1332, (27 + iVar2));
					uLocal_3665[iVar2] = unk_0x9FF6FFD9EB30D086();
					unk_0x853D8B40635017CB(uLocal_3665[iVar2], "Explosion_Countdown", unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x634090A93BBC4EEE(uLocal_3665[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_705())
	{
		if (unk_0x3756406E4D76B25E(Local_121.f_7[0]))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_319, 0))
			{
				if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 0))
				{
					if ((func_419() - func_121(&(Local_121.f_324), 0, 0)) >= 0)
					{
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0 || unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
						{
							if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_195())
								{
									func_418();
									func_166((func_419() - func_121(&(Local_121.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0 || unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
						{
							if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_195())
								{
									func_418();
									func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
						{
							func_644(1);
						}
						if (unk_0x434105A1C45F1BED(Local_121.f_7[0]))
						{
							unk_0xF65C7766FB8D4B2C(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 0);
							unk_0xE3DB968E63BCE4D3(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), true);
							if (!unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[0]))))
							{
								unk_0x5E747C0F628B78E8(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 1, 0, -1);
								func_25(&(Local_121.f_7[0]));
							}
							else
							{
								unk_0x7DDF1C6CBE6C21B0(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), 1, 0, 0);
								func_25(&(Local_121.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_187();
		if (!func_195())
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 12))
			{
				if (func_104(Local_121.f_7[0]))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[0])))
						{
							if (!func_705())
							{
								if (!func_262("UW_EXPL"))
								{
									func_256("UW_EXPL", 0);
								}
							}
							else if (!func_262("UW_EXPLC"))
							{
								func_256("UW_EXPLC", 0);
							}
							unk_0xF6082E2ADA1C795B(&iLocal_1332, 12);
						}
					}
				}
			}
			else if (func_262("UW_EXPL") || func_262("UW_EXPLC"))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
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
			if (unk_0x3756406E4D76B25E(Local_121.f_7[iVar0]))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_319, iVar0))
				{
					if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0))
					{
						if ((func_419() - func_121(&(Local_121.f_324), 0, 0)) >= 0)
						{
							if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0 || unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
							{
								if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_195())
									{
										if (!bVar1)
										{
											func_418();
											func_166((func_419() - func_121(&(Local_121.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0 || unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
							{
								if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_195())
									{
										if (!bVar1)
										{
											func_418();
											func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
							{
								func_644(1);
							}
							if (func_416(Local_121.f_7[iVar0]))
							{
								if (unk_0x434105A1C45F1BED(Local_121.f_7[iVar0]))
								{
									unk_0xF65C7766FB8D4B2C(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
									unk_0xE3DB968E63BCE4D3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), true);
									if (!unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]))))
									{
										unk_0x5E747C0F628B78E8(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1, 0, -1);
										func_25(&(Local_121.f_7[iVar0]));
									}
									else
									{
										unk_0x7DDF1C6CBE6C21B0(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 1, 0, 0);
										func_25(&(Local_121.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 12))
				{
					if (func_104(Local_121.f_7[iVar0]))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0])))
							{
								if (!func_195())
								{
									if (!func_705())
									{
										if (!func_262("UW_EXPL"))
										{
											func_256("UW_EXPL", 0);
										}
									}
									else if (!func_262("UW_EXPLC"))
									{
										func_256("UW_EXPLC", 0);
									}
									unk_0xF6082E2ADA1C795B(&iLocal_1332, 12);
								}
							}
						}
					}
				}
				else if (func_262("UW_EXPL") || func_262("UW_EXPLC"))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
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

int func_416(var uParam0)
{
	if (unk_0x2D46D2FB70C76390(uParam0))
	{
		return 1;
	}
	if (func_417(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_417(var uParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return 0;
	}
	if (!unk_0xD0BCF9877CD72A3F(uParam0))
	{
		return 0;
	}
	if (func_76(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_418()
{
	Global_1353013.f_1089 = 1;
}

int func_419()
{
	if (func_705())
	{
		return Global_262145.f_10034;
	}
	return Global_262145.f_9755;
}

void func_420()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 4))
	{
		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					func_644(1);
					unk_0xF6082E2ADA1C795B(&iLocal_1333, 4);
				}
			}
		}
	}
}

void func_421()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xBA948A9E34D09E6E(iLocal_1341);
	if (unk_0x9E8AB4FC19962A90(iVar0))
	{
		iVar1 = unk_0x2AFA21CE4322B48D(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (iLocal_1341 != unk_0x88641E5BC172153A())
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_3726, iLocal_1341))
				{
					if (!func_195())
					{
						if (Local_755[iLocal_1341 /*18*/].f_17 == 1)
						{
							unk_0xF6082E2ADA1C795B(&iLocal_3726, iLocal_1341);
							func_422(iVar1, 55, 1);
						}
					}
				}
				else if (func_195())
				{
					func_422(iVar1, 55, 0);
					unk_0x507FE690B1271947(&iLocal_3726, iLocal_1341);
				}
				else if (Local_755[iLocal_1341 /*18*/].f_17 > 1)
				{
					unk_0x507FE690B1271947(&iLocal_3726, iLocal_1341);
					func_422(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_1341++;
	if (iLocal_1341 >= unk_0x244673FE98A43CA3())
	{
		iLocal_1341 = 0;
	}
}

void func_422(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_424())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_423(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = iParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_423(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

int func_424()
{
	switch (func_425())
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

int func_425()
{
	return Global_25222;
}

void func_426()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xBDD3EABACAB97D09(Local_1349[iVar0 /*8*/]))
		{
			unk_0x789C84F1B8496AD0(&(Local_1349[iVar0 /*8*/]));
		}
		if (unk_0xBDD3EABACAB97D09(Local_1349[iVar0 /*8*/].f_1))
		{
			unk_0x789C84F1B8496AD0(&(Local_1349[iVar0 /*8*/].f_1));
		}
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar0]))
		{
			if (!func_31(Local_121.f_48[iVar0]))
			{
				if (unk_0x4C2C9007DF4A7DB6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0])))
				{
					func_87(&(Local_1349[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_427()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 11))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 13))
			{
				if (func_185(unk_0x0FFED3E94261A832()) != 129)
				{
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
					{
						if (!func_500(65) && !func_500(66))
						{
							if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 11))
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 12))
								{
									if (func_409(0, 1, 1, 1))
									{
										if (func_705())
										{
											func_408("UW_HELIMC", -1);
										}
										else
										{
											func_408("UW_HELIM", -1);
										}
										func_407(1);
										unk_0xF6082E2ADA1C795B(&iLocal_1333, 12);
									}
								}
							}
							else if (!(Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra")))
							{
								if (func_409(0, 1, 1, 1))
								{
									if (!func_705())
									{
										func_408("UW_TAVAIL", 30000);
									}
									else
									{
										func_408("UW_TAVAILC", 30000);
									}
									func_407(1);
									unk_0xF6082E2ADA1C795B(&iLocal_1332, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_428()
{
	float fVar0;
	
	if (iLocal_3721 != 0)
	{
		return;
	}
	if (func_22(&uLocal_3702))
	{
		iLocal_3721 = func_121(&uLocal_3702, 0, 0);
	}
	fVar0 = unk_0xBBDA792448DB5A89(iLocal_3721);
	fVar0 = (fVar0 / 60000f);
	iLocal_3721 = unk_0xF34EE736CF047844(fVar0);
	if (iLocal_3721 >= 1)
	{
	}
	else
	{
		iLocal_3721 = 1;
	}
	if (iLocal_3721 > Global_262145.f_10094)
	{
		iLocal_3721 = Global_262145.f_10094;
	}
}

void func_429(bool bParam0)
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
		func_430(iVar0);
		iVar0++;
	}
}

void func_430(int iParam0)
{
	Global_91829.f_163[iParam0] = 1;
	Global_91829.f_162 = 1;
}

void func_431(int iParam0)
{
	if (func_432() && iParam0)
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

int func_432()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

void func_433()
{
	unk_0xE0125DCD8DB3EFC3(5);
	func_435();
	unk_0xFBC4596E19752537(1f);
	unk_0x507FE690B1271947(&(Global_1574379.f_1), 8);
	func_434();
}

void func_434()
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

void func_435()
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

void func_436()
{
	Global_2391047 = { 0f, 0f, 0f };
	Global_2391050 = 0;
}

void func_437()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 13))
	{
		return;
	}
	bVar0 = unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6);
	bVar1 = unk_0xAA4F14DA15DB0B51(iLocal_1332, 21);
	bVar2 = unk_0xAA4F14DA15DB0B51(iLocal_1332, 23);
	bVar3 = Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_594())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 17))
		{
			if (func_802(unk_0x0FFED3E94261A832(), 1, 1))
			{
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) || bVar2)
				{
					if (!func_195())
					{
						if (!func_705())
						{
							if (bVar0)
							{
								func_602(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
								{
									func_602(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[0]) && func_104(Local_121.f_7[0]))
								{
									unk_0xF6082E2ADA1C795B(&iLocal_1333, 11);
									unk_0xF6082E2ADA1C795B(&iLocal_1333, 16);
									func_602(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_602(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_602(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || unk_0xAA4F14DA15DB0B51(Local_121.f_3, 16))
							{
								func_602(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_602(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
							{
								if (func_497())
								{
									unk_0xF6082E2ADA1C795B(&iLocal_1333, 11);
									unk_0xF6082E2ADA1C795B(&iLocal_1333, 16);
									func_602(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_602(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_497())
							{
								unk_0xF6082E2ADA1C795B(&iLocal_1333, 11);
								unk_0xF6082E2ADA1C795B(&iLocal_1333, 16);
								func_602(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_602(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_497())
							{
								unk_0xF6082E2ADA1C795B(&iLocal_1333, 11);
								unk_0xF6082E2ADA1C795B(&iLocal_1333, 16);
								func_602(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_602(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || unk_0xAA4F14DA15DB0B51(Local_121.f_3, 16))
						{
							func_602(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_496(1);
					Local_738.f_6 = (Local_738.f_6 + iVar4);
					if (!Global_262145.f_10161)
					{
						if (Local_738.f_6 > 0)
						{
							func_495(19, Local_738.f_6);
						}
					}
					Global_2456893 = iVar4;
					if (iVar4 > 0)
					{
						if (func_494())
						{
							func_485(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0xD227FE677C456569(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_484(1);
					Local_738.f_7 = (Local_738.f_7 + iVar10);
					func_483();
					func_438(0, unk_0x2A5EB8B0FE590B91(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_738.f_5 = 2;
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
					if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 16))
					{
						unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 8);
					}
					unk_0xF6082E2ADA1C795B(&iLocal_1333, 17);
					unk_0xF6082E2ADA1C795B(&iLocal_1333, 18);
				}
			}
		}
	}
}

int func_438(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_439(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_439(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_449(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				iVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_445(unk_0x585F703DF3E83B6E(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_440(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_440(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_443(iParam0, 1) };
	if (iParam0 == func_442(unk_0x2A5EB8B0FE590B91()))
	{
		func_441(1);
	}
	func_445(Var0, iParam1, 0, sParam2, iParam3);
}

void func_441(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_442(int iParam0)
{
	return iParam0;
}

Vector3 func_443(int iParam0, bool bParam1)
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
	if (iParam0 == func_444(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
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

int func_444(int iParam0)
{
	return iParam0;
}

void func_445(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_448(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_447();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_446();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_446()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_447()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_448(struct<3> Param0, var uParam3, var uParam4)
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

var func_449(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_450(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_450(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_482(unk_0x0FFED3E94261A832()) || func_481(unk_0x0FFED3E94261A832()))
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
	if (func_169(uParam2))
	{
	}
	if (func_480())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_478(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_477(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_475(0, &iVar1);
					break;
				
				case 3:
					func_475(1, &iVar1);
					break;
				
				case 1:
					func_472(&iVar1);
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
			func_470(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_460((func_469(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_470(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_455(iVar1);
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
				func_451((func_453(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_451((func_453(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_451(int iParam0)
{
	if (func_480())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_452(joaat("mpply_globalxp"), iParam0);
	}
}

void func_452(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
}

int func_453(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_802(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_454(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_454(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_454(int iParam0)
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

void func_455(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_63(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_458(func_459(&Var0));
			if (iVar13 == 0)
			{
				func_457(&Global_1361887, iParam0);
				func_456(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_457(&Global_1361888, iParam0);
				func_456(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_457(&Global_1361889, iParam0);
				func_456(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_457(&Global_1361890, iParam0);
				func_456(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_457(&Global_1361891, iParam0);
				func_456(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_456(int iParam0, int iParam1)
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

void func_457(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_458(int iParam0)
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

int func_459(var uParam0)
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

void func_460(int iParam0, int iParam1, int iParam2)
{
	if (func_480())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_236(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_236(-1)])
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
		if (func_468(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_466(iParam0, 1);
		}
		func_465(635, iParam0, -1, 1);
		func_464(636, func_466(iParam0, 1), -1, 1, 0);
		Global_1362002[func_236(-1)] = iParam0;
		func_461(7, 0);
	}
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_463(iParam0, iParam1))
	{
		iVar0 = func_462();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_462()
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

int func_463(int iParam0, var uParam1)
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

void func_464(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_236(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

void func_465(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_236(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_236(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_236(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_236(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_236(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_236(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_236(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_236(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_236(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_236(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_236(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_236(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_236(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_236(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_236(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_236(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_236(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_236(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_236(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_236(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_236(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_236(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_236(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_236(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_236(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_236(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_236(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_236(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_236(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_236(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_236(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_236(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_236(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_466(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_467(iParam0, 0);
}

int func_467(int iParam0, int iParam1)
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

int func_468(int iParam0)
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

int func_469(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_236(-1)];
			}
			else if (func_468(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_236(-1)];
	}
	return 0;
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_254(iParam0, func_236(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_471(iParam0))
	{
		func_464(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_465(iParam0, iVar0, iParam2, 1);
	}
}

int func_471(int iParam0)
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

void func_472(int iParam0)
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
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_474(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_64(unk_0x0FFED3E94261A832(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_473(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_473(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_473(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_474(int iParam0, int iParam1, int iParam2)
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

void func_475(bool bParam0, int iParam1)
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
				if (func_802(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_64(unk_0x0FFED3E94261A832(), iVar4))
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
			if (func_802(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_476(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_64(unk_0x0FFED3E94261A832(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_473(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_473(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_476(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_58(iParam0), func_58(iParam1));
	return 0f;
}

int func_477(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_473(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_478(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_469(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_469(unk_0x0FFED3E94261A832());
		}
	}
	if (func_479(8000, 0, 0) > 0)
	{
		if (func_479(8000, 0, 0) < (iParam0 + func_469(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_479(8000, 0, 0) - func_469(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_479(int iParam0, bool bParam1, int iParam2)
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

int func_480()
{
	return 1;
}

bool func_481(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_482(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_483()
{
	Global_2456235 = 1;
}

int func_484(bool bParam0)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_705())
		{
			return Global_262145.f_9976;
		}
		else
		{
			return Global_262145.f_9915;
		}
	}
	func_428();
	if (func_705())
	{
		iVar0 = (Global_262145.f_9976 * iLocal_3721);
	}
	else
	{
		iVar0 = (Global_262145.f_9915 * iLocal_3721);
	}
	return iVar0;
}

void func_485(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_494())
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
				func_486(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_486(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_486(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_494())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_18()) || unk_0x3227E797058C3C9A())
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
			*uParam0 = func_493(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_492(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_487(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_487(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_488(iParam0);
	}
}

void func_488(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_494())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_491(iParam0))
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
		func_489(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_489(var uParam0)
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
	func_490(&(uParam0->f_8.f_3));
	func_490(&(uParam0->f_8.f_16));
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

void func_490(var uParam0)
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

int func_491(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_492(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_493(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_494())
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

int func_494()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

void func_495(int iParam0, int iParam1)
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

int func_496(bool bParam0)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_705())
		{
			return Global_262145.f_9975;
		}
		else
		{
			return Global_262145.f_9914;
		}
	}
	func_428();
	if (func_705())
	{
		iVar0 = (Global_262145.f_9975 * iLocal_3721);
	}
	else
	{
		iVar0 = (Global_262145.f_9914 * iLocal_3721);
	}
	return iVar0;
}

int func_497()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iLocal_3664]))
	{
		if (func_104(Local_121.f_7[iLocal_3664]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_121.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_121.f_256[iLocal_3664];
	if (!bVar0)
	{
		if (Local_121.f_594[0 /*4*/] != iLocal_3664)
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
	else if (Local_121.f_594[0 /*4*/] == iLocal_3664)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_121.f_256[Local_121.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_121.f_255 - iVar2);
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

int func_498()
{
	int iVar0;
	var uVar1;
	
	func_642(&iVar0, &uVar1);
	if (iLocal_3664 > -1)
	{
		if (func_104(Local_121.f_7[iLocal_3664]))
		{
			return 1;
		}
	}
	return 0;
}

void func_499()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_121.f_241 == 1)
	{
		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
		{
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_3700) || (func_22(&uLocal_3700) && func_19(&uLocal_3700, 5000, 0)))
				{
					if (Local_121.f_27 == joaat("savage") || Local_121.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3664;
						if (iVar1 > -1)
						{
							if (func_104(Local_121.f_7[iVar1]))
							{
								iVar0 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x769F0F6444C1ABE0(iVar0))
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0xDB61DD81432BD145(iVar0))
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_121.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3664;
						if (iVar1 > -1)
						{
							if (func_104(Local_121.f_7[iVar1]))
							{
								iVar0 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x769F0F6444C1ABE0(iVar0))
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0xDB61DD81432BD145(iVar0))
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
								}
								if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0xF0178FC88859A30C(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!unk_0x769F0F6444C1ABE0(iVar0))
											{
												if (unk_0xDB61DD81432BD145(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_101(&uLocal_3700);
					func_20(&uLocal_3700, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_319, iVar2))
		{
			if (unk_0x3756406E4D76B25E(Local_121.f_7[iVar2]))
			{
				if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 0))
				{
					if ((func_419() - func_121(&(Local_121.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
						{
							if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 0))
							{
								if (!func_195())
								{
									func_418();
									func_166((func_419() - func_121(&(Local_121.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
						{
							if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 0))
							{
								if (!func_195())
								{
									func_418();
									func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (unk_0x434105A1C45F1BED(Local_121.f_7[iVar2]))
						{
							unk_0xF65C7766FB8D4B2C(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 0);
							unk_0xE3DB968E63BCE4D3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), true);
							if (!unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]))))
							{
								unk_0x5E747C0F628B78E8(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 1, 0, -1);
								func_25(&(Local_121.f_7[iVar2]));
							}
							else
							{
								unk_0x7DDF1C6CBE6C21B0(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar2]), 1, 0, 0);
								func_25(&(Local_121.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 == iVar2)
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 6))
				{
					if (func_409(0, 1, 1, 1))
					{
						if (func_705())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 19))
							{
								func_408("UW_NOPILC", 30000);
							}
							else
							{
								func_408("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_408("UW_NOPIL", 30000);
						}
						func_407(1);
						unk_0xF6082E2ADA1C795B(&iLocal_1333, 6);
					}
					else if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 19))
					{
						if (unk_0x6235C49EA2DBA22D())
						{
							unk_0x7D53B6FFAEDA810A(1);
						}
					}
				}
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					iVar5 = Local_755[unk_0x88641E5BC172153A() /*18*/].f_10;
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar5]))
					{
						if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar5])))
						{
							if (!func_705())
							{
								if (!func_262("UW_EXPL"))
								{
									func_256("UW_EXPL", 0);
								}
							}
							else if (!func_262("UW_EXPLC"))
							{
								func_256("UW_EXPLC", 0);
							}
						}
						else if (func_262("UW_EXPL") || func_262("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_262("UW_EXPL") || func_262("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_500(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

void func_501()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
	{
		if (Local_121.f_27 == joaat("rhino"))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_3696) || (func_22(&uLocal_3696) && func_19(&uLocal_3696, 5000, 0)))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (func_66(Local_3722, 0f, 0f, 0f, 0))
							{
								Local_3722 = { Local_121.f_30[0 /*3*/] };
							}
							fVar0 = func_503(unk_0x2A5EB8B0FE590B91(), Local_3722, 1);
							if (fVar0 > 750f)
							{
								unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 10);
							}
						}
						func_101(&uLocal_3696);
						func_20(&uLocal_3696, 0, 0);
					}
				}
				else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (!func_262("UW_OOB"))
					{
						func_256("UW_OOB", 0);
					}
					if (!func_22(&uLocal_3698))
					{
						uVar2 = unk_0x9FF6FFD9EB30D086();
						unk_0x853D8B40635017CB(uVar2, "Explosion_Countdown", unk_0xECBE9D2902B2B964(Local_121.f_7[func_502()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x634090A93BBC4EEE(uVar2, "Time", 30f);
						func_20(&uLocal_3698, 0, 0);
					}
					if (func_22(&uLocal_3698))
					{
						if ((func_419() - func_121(&uLocal_3698, 0, 0)) >= 0)
						{
							func_418();
							func_166((func_419() - func_121(&uLocal_3698, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
						}
						else
						{
							func_418();
							func_166(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
							func_9();
							unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 11);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
					{
						fVar0 = func_503(unk_0x2A5EB8B0FE590B91(), Local_121.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 10);
							func_101(&uLocal_3698);
							unk_0xDC0343058D861402(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
	{
		func_644(1);
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			iVar1 = func_502();
			if (iVar1 > -1)
			{
				if (func_104(Local_121.f_7[iVar1]))
				{
					if (unk_0x434105A1C45F1BED(Local_121.f_7[iVar1]))
					{
						unk_0xF65C7766FB8D4B2C(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), 0);
						unk_0xE3DB968E63BCE4D3(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), true);
						unk_0x5E747C0F628B78E8(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1]), 1, 0, -1);
						func_25(&(Local_121.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_502()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar1]))
			{
				if (func_104(Local_121.f_7[iVar1]))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar1])))
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

float func_503(int iParam0, struct<3> Param1, int iParam4)
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

void func_504()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 24))
	{
		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 1)
		{
			func_642(&iVar1, &uVar0);
			if (func_507(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_121.f_22[iVar1] != func_6())
					{
						fLocal_1343 = unk_0xD1C3860D37676BB5();
						unk_0x2B8C2CE4B857E60B(-1f);
						func_506(1, iVar1);
						unk_0xF6082E2ADA1C795B(&iLocal_1332, 24);
						func_505(1);
					}
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&iLocal_1332, 24);
				unk_0xF6082E2ADA1C795B(&iLocal_1332, 25);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 25))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 24))
		{
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 > 1)
			{
				unk_0x2B8C2CE4B857E60B(fLocal_1343);
				func_642(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_506(0, iVar1);
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 25);
					func_505(0);
				}
			}
		}
	}
}

void func_505(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 15);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 4);
	}
}

void func_506(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
			if (func_802(iVar1, 0, 1) && iVar1 != unk_0x0FFED3E94261A832())
			{
				if (unk_0xAA4F14DA15DB0B51(Local_755[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0xE33D10200F38E45C(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0xE33D10200F38E45C(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_507(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (!bVar0)
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
			{
				if (iVar1 != unk_0x88641E5BC172153A())
				{
					if (unk_0xAA4F14DA15DB0B51(Local_755[iVar1 /*18*/].f_1, iParam0))
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

void func_508()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1CF28DE85743D98B())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 15))
	{
		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 2)
		{
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 == 0)
			{
				if (Local_121.f_22[0] != func_6())
				{
					if (func_409(0, 0, 1, 1))
					{
						if (!func_705())
						{
							if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
							{
								if (!func_705())
								{
									func_519("UW_START1P", unk_0x4325D353D7D27B34(Local_121.f_22[0]), 1, 30000);
								}
								else
								{
									func_519("UW_START1PC", unk_0x4325D353D7D27B34(Local_121.f_22[0]), 1, 30000);
								}
								func_407(1);
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_121.f_15, 0))
							{
								if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14))
								{
									if (!func_705())
									{
										func_408("UW_STARTM", 30000);
									}
									else
									{
										func_408("UW_STARTMC", 30000);
									}
									func_407(1);
								}
							}
							else
							{
								func_519("UW_START1P", unk_0x4325D353D7D27B34(Local_121.f_22[0]), 1, 30000);
								func_407(1);
							}
						}
						else if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14))
						{
							if (!func_705())
							{
								func_408("UW_STARTM", 30000);
							}
							else
							{
								func_408("UW_STARTMC", 30000);
							}
							func_407(1);
						}
						unk_0xF6082E2ADA1C795B(&iLocal_1332, 15);
					}
				}
			}
		}
	}
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 2)
	{
		if (Local_121.f_241 == 1)
		{
			if (Local_121.f_27 != joaat("hydra") && Local_121.f_27 != joaat("rhino"))
			{
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
				{
					if (iLocal_3664 >= 0)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 10))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 9))
							{
								if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iLocal_3664]))
								{
									if (func_104(Local_121.f_7[iLocal_3664]))
									{
										unk_0xF6082E2ADA1C795B(&iLocal_1333, 9);
									}
								}
							}
							else if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iLocal_3664]))
							{
								if (!func_104(Local_121.f_7[iLocal_3664]))
								{
									func_518("UW_TEAMV", 1);
									unk_0xF6082E2ADA1C795B(&iLocal_1333, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_705())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, (16 + iVar1)))
				{
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 >= 2)
					{
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 == 0)
						{
							if ((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2))
							{
								if (unk_0x3756406E4D76B25E(Local_121.f_7[0]))
								{
									if (func_104(Local_121.f_7[0]))
									{
										if (unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_517(iVar1, 0);
											if (iVar0 != func_6())
											{
												func_509("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											unk_0xF6082E2ADA1C795B(&iLocal_1332, (16 + iVar1));
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

int func_509(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam4)
	{
		if (!bParam3)
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
		unk_0xCF6846167A5EFE98(func_515(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_63(iParam1) };
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
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_514(&Var1) };
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
		func_510(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_510(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_513() || !unk_0x1B154DE2D4606530()) || !func_16(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_511(iParam2);
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

int func_511(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_512(iVar0);
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

void func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_513()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

struct<16> func_514(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_515(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_516(&cVar0);
}

var func_516(char[4] cParam0)
{
	return cParam0;
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_6();
	iVar2 = (iParam0 - 1);
	if (unk_0x3756406E4D76B25E(Local_121.f_7[iParam1]))
	{
		if (func_104(Local_121.f_7[iParam1]))
		{
			iVar1 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (unk_0xDB61DD81432BD145(iVar1))
				{
					iVar0 = unk_0xB0BB7458627D389F(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_518(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_510(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_519(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(sParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam3);
}

void func_520()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 9))
	{
		if (Local_121.f_241 == 1)
		{
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
			{
				if (unk_0x988197573BDAD49A("KILL_LIST_START_MUSIC"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 9);
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 10))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 9))
		{
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 > 1)
			{
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
				{
					if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0x988197573BDAD49A("MP_MC_FAIL"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_1332, 10);
						}
					}
					else if (unk_0x988197573BDAD49A("KILL_LIST_STOP_MUSIC"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_1332, 10);
						func_521();
					}
				}
			}
		}
	}
}

void func_521()
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

void func_522()
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
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 8))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 26))
			{
				if ((((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2)) || (func_705() && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))) || (func_705() && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 15)))
				{
					if (!func_22(&uLocal_3717))
					{
						func_20(&uLocal_3717, 0, 0);
					}
					if (func_19(&uLocal_3717, 1000, 0))
					{
						if (func_262("UW_ATTK"))
						{
							func_9();
						}
						func_585();
						if (func_584())
						{
							iVar25 = func_496(1);
							if (iVar25 > 0)
							{
								Local_738.f_6 = (Local_738.f_6 + iVar25);
								if ((!Global_262145.f_10161 && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 8)) || (!Global_262145.f_10162 && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 8)))
								{
									if (Local_738.f_6 > 0)
									{
										func_495(19, Local_738.f_6);
									}
								}
								Global_2456893 = iVar25;
								if (func_494())
								{
									func_485(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_484(1);
							func_483();
							Local_738.f_7 = (Local_738.f_7 + iVar23);
							func_438(0, unk_0x2A5EB8B0FE590B91(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_738.f_5 = 2;
							func_602(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_705())
						{
							iVar25 = func_597(0);
							func_571(&iVar25, 1);
							iVar25 = (iVar25 + func_496(1));
							if (iVar25 > 0)
							{
								Local_738.f_6 = (Local_738.f_6 + iVar25);
								if (!Global_262145.f_10161)
								{
									if (Local_738.f_6 > 0)
									{
										func_495(19, Local_738.f_6);
									}
								}
								Global_2456893 = iVar25;
								if (func_494())
								{
									func_485(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_484(1);
							iVar23 = (iVar23 + func_570());
							Local_738.f_7 = (Local_738.f_7 + iVar23);
							func_483();
							func_438(0, unk_0x2A5EB8B0FE590B91(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_738.f_5 = 1;
							func_601(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_569())
						{
							if (!func_568(1))
							{
								if (!func_262("UW_EXPL") && !func_262("UW_EXPLC"))
								{
									func_9();
								}
								iVar25 = func_597(0);
								func_571(&iVar25, 1);
								iVar25 = (iVar25 + func_496(1));
								Local_738.f_6 = (Local_738.f_6 + iVar25);
								if (!Global_262145.f_10162)
								{
									if (Local_738.f_6 > 0)
									{
										func_495(19, Local_738.f_6);
									}
								}
								Global_2456893 = iVar25;
								if (iVar25 > 0)
								{
									if (func_494())
									{
										func_485(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
								{
									func_601(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_601(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_738.f_5 = 1;
								iVar23 = func_570();
								iVar23 = (iVar23 + func_484(1));
								Local_738.f_7 = (Local_738.f_7 + iVar23);
								func_483();
								func_438(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_496(1);
								iVar23 = func_484(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_121.f_465[iVar22 /*4*/].f_1 == Local_121.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
										{
											if (Local_121.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_121.f_465[iVar22 /*4*/].f_2 != unk_0x0FFED3E94261A832())
												{
													if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_121.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = unk_0x7C214DA899F05536(Local_121.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3664 > -1)
										{
											if (iLocal_3664 != Local_121.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_121.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
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
										func_567(68, "UW_DRAWP", unk_0x4325D353D7D27B34(iVar9[0]), 1, 15000, "UW_BIGO", 2);
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
									func_601(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar21)
								{
									if (!func_705())
									{
										func_602(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_602(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar26 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_597(0)) / unk_0xBBDA792448DB5A89(iVar20)));
								iVar24 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(func_570()) / unk_0xBBDA792448DB5A89(iVar20)));
								func_571(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_738.f_6 = (Local_738.f_6 + iVar25);
								if (!Global_262145.f_10162)
								{
									if (Local_738.f_6 > 0)
									{
										func_495(19, Local_738.f_6);
									}
								}
								Global_2456893 = iVar25;
								if (iVar25 > 0)
								{
									if (func_494())
									{
										func_485(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_738.f_7 = (Local_738.f_7 + iVar23);
								func_483();
								func_438(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_565(1);
							iVar25 = func_496(1);
							iVar23 = func_484(1);
							Local_738.f_6 = (Local_738.f_6 + iVar25);
							if (!Global_262145.f_10162)
							{
								if (Local_738.f_6 > 0)
								{
									func_495(19, Local_738.f_6);
								}
							}
							Global_2456893 = iVar25;
							if (iVar25 > 0)
							{
								if (func_494())
								{
									func_485(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_738.f_7 = (Local_738.f_7 + iVar23);
							func_483();
							func_438(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_568(0))
							{
								iVar13 = Local_121.f_465[0 /*4*/];
								if (!func_262("UW_EXPL") && !func_262("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
								{
									iVar8 = unk_0x7C214DA899F05536(Local_121.f_465[0 /*4*/].f_2);
									if (func_303(iVar8, 1))
									{
										iVar53 = func_307(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_305(iVar53);
											sVar54 = func_559(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_6())
									{
										if (!bVar52)
										{
											if (!func_705())
											{
												func_567(65, "UW_FWONP", unk_0x4325D353D7D27B34(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_567(65, "UW_FWONPC", unk_0x4325D353D7D27B34(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_705())
										{
											func_557(66, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_557(66, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_705())
									{
										func_601(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_601(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_262("UW_EXPL") && !func_262("UW_EXPLC"))
								{
									func_9();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_121.f_465[iVar22 /*4*/].f_1 == Local_121.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
										{
											if (Local_121.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_121.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = unk_0x7C214DA899F05536(Local_121.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3664 > -1)
										{
											if (iLocal_3664 != Local_121.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_121.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_121.f_27 == joaat("hydra") || Local_121.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_6() && unk_0x885F483F34E47503(iVar9[0]))
										{
											if (iVar9[1] != func_6() && unk_0x885F483F34E47503(iVar9[1]))
											{
												func_527(68, func_6(), func_6(), -1, "UW_DRAW2P", "UW_BIGF", func_308(), 15000, func_308(), unk_0x4325D353D7D27B34(iVar9[0]), unk_0x4325D353D7D27B34(iVar9[1]), 0);
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
									func_601(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_602(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_623(0);
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
						{
							Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
						}
						unk_0xF6082E2ADA1C795B(&iLocal_1332, 13);
						unk_0xF6082E2ADA1C795B(&iLocal_1332, 26);
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6) || (!func_705() && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 15)))
				{
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_10 != -1)
					{
						func_602(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_601(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_623(0);
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 26);
					iVar25 = func_496(1);
					Local_738.f_6 = (Local_738.f_6 + iVar25);
					if (!Global_262145.f_10161)
					{
						if (Local_738.f_6 > 0)
						{
							func_495(19, Local_738.f_6);
						}
					}
					Global_2456893 = iVar25;
					if (iVar25 > 0)
					{
						if (func_494())
						{
							func_485(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_484(1);
					Local_738.f_7 = (Local_738.f_7 + iVar23);
					func_483();
					func_438(0, unk_0x2A5EB8B0FE590B91(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_738.f_5 = 2;
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
					{
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 14))
				{
					func_623(0);
					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 8);
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 3)
					{
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 11))
				{
					func_601(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_623(0);
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 26);
					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 8);
					iVar25 = func_496(1);
					Local_738.f_6 = (Local_738.f_6 + iVar25);
					if (!Global_262145.f_10161)
					{
						if (Local_738.f_6 > 0)
						{
							func_495(19, Local_738.f_6);
						}
					}
					Global_2456893 = iVar25;
					if (iVar25 > 0)
					{
						if (func_494())
						{
							func_485(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							unk_0xD227FE677C456569(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_484(1);
					Local_738.f_7 = (Local_738.f_7 + iVar23);
					func_483();
					func_438(0, unk_0x2A5EB8B0FE590B91(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_738.f_5 = 2;
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
					{
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 12))
				{
					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 8);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 8))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 26))
				{
					if (func_262("UW_ATTK"))
					{
						func_9();
					}
					if (func_523(&uLocal_3655, 1))
					{
						unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 8);
					}
					if (!func_262("UW_EXPL") && !func_262("UW_EXPLC"))
					{
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 > -1)
						{
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[Local_755[unk_0x88641E5BC172153A() /*18*/].f_9]))
							{
								if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
								{
									if (func_104(Local_121.f_7[Local_755[unk_0x88641E5BC172153A() /*18*/].f_9]))
									{
										if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[Local_755[unk_0x88641E5BC172153A() /*18*/].f_9])))
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
	else if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 8))
	{
		unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 8);
	}
}

int func_523(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_345()) && !(func_233(unk_0x0FFED3E94261A832(), 0) && (func_225(unk_0x0FFED3E94261A832()) || func_223(unk_0x0FFED3E94261A832())))) && !func_213(unk_0x0FFED3E94261A832()))
	{
		func_526();
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
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 25);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_525(uParam0, 1);
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
				func_524();
				func_525(uParam0, 2);
			}
			break;
		
		case 2:
			func_524();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_639("AMEV_LBD_HELP"))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_525(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				func_525(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
			return 1;
	}
	return 0;
}

void func_524()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_802(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22())
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_408("AMEV_LBD_HELP", -1);
			func_407(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_525(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_526()
{
	Global_2456236 = 1;
}

int func_527(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_556(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_69 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_70 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_528(&Var0);
}

int func_528(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_538(uParam0, uParam0->f_16);
	func_537(uParam0);
	if (func_536(uParam0->f_1))
	{
		func_529();
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
				func_529();
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
				if (func_348(Global_2434604.f_2483[iVar0 /*76*/].f_1))
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

void func_529()
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
	func_530();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_530()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_534(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_531(&(Global_2434604.f_2791.f_1));
}

void func_531(var uParam0)
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
				if (unk_0xF4EE9D6C8E60AE22() && !func_533(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_532(0);
}

void func_532(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_533(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_534(var uParam0)
{
	func_535(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_535(var uParam0)
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

int func_536(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_537(var uParam0)
{
	if (func_350(uParam0->f_1))
	{
		uParam0->f_70 = func_308();
	}
}

void func_538(var uParam0, int iParam1)
{
	if (func_350(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_6())
	{
		return;
	}
	if (func_348(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_539(iParam1, -2, 0, 0);
		}
	}
}

int func_539(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_384(iParam0))
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
	if ((func_384(unk_0x0FFED3E94261A832()) || (func_555() && func_554())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_553();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_802(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_551(iParam1, iParam0, 0);
							}
							else
							{
								return func_546(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_546(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_551(iParam1, iParam0, 0);
				}
				else
				{
					return func_540(0, -1, 0);
				}
			}
			else
			{
				return func_540(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_551(iParam1, iParam0, 0);
		}
		else
		{
			return func_546(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_546(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_540(bool bParam0, int iParam1, bool bParam2)
{
	return func_541(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_541(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			if (func_474(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_545(1);
				}
				else
				{
					return func_545(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_542(iVar0, iParam2, 1);
			}
			else
			{
				return func_542(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_545(1);
	}
	return func_545(0);
}

int func_542(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_544(iParam0, iParam1);
	if (func_543(Global_1638223.f_93532))
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

int func_543(int iParam0)
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

int func_544(int iParam0, int iParam1)
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
			if (!func_474(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_545(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_546(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_549())
			{
				iVar3 = func_307(iParam0);
				if (!iVar3 == -1)
				{
					return func_305(iVar3);
				}
			}
			if ((func_548(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_474(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_545(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_547(1);
			}
			else
			{
				return func_541(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_545(1);
			}
			else
			{
				return func_541(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_307(iParam0);
	if (!iVar4 == -1)
	{
		return func_305(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_547(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_548(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_549()
{
	if (func_288() || func_550())
	{
		return 1;
	}
	return 0;
}

var func_550()
{
	return Global_2445217.f_13;
}

int func_551(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_549())
	{
		iVar1 = func_307(iParam1);
		if (!iVar1 == -1)
		{
			return func_305(iVar1);
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
		iVar0 = func_541(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_552(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_552(int iParam0)
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

var func_553()
{
	return Global_2359301.f_2;
}

bool func_554()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_555()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

void func_556(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_557(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_6();
	iVar1 = func_6();
	iVar2 = func_6();
	return func_558(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_558(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_556(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xF6082E2ADA1C795B(&(Var0.f_67), 2);
	return func_528(&Var0);
}

char* func_559(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		uVar0 = func_564(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		uVar0 = func_562(iParam0, 0);
		return uVar0;
	}
	if (((func_224(iParam0, 28) || func_224(unk_0x0FFED3E94261A832(), 28)) || func_561(iParam0)) && !func_560(iParam0))
	{
		return func_562(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_6())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_562(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_6())
	{
		uVar0 = func_564(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar0))
		{
			return func_562(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_560(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

int func_561(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

char* func_562(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_292(iParam0, 1))
		{
			return func_563();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

char* func_563()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

var func_564(var uParam0)
{
	return uParam0;
}

void func_565(bool bParam0)
{
	if (bParam0)
	{
		if (func_566(1))
		{
			unk_0xF6082E2ADA1C795B(&Global_1574404, 1);
		}
	}
	else if (func_566(2))
	{
		unk_0xF6082E2ADA1C795B(&Global_1574404, 2);
	}
}

int func_566(int iParam0)
{
	var uVar0;
	
	uVar0 = func_254(2519, -1, 0);
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

int func_567(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_556(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam6;
	return func_528(&Var0);
}

int func_568(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_642(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_121.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_121.f_27 == joaat("rhino") || Local_121.f_27 == joaat("hydra"))
	{
		return Local_121.f_465[0 /*4*/].f_1 == Local_121.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_121.f_594[0 /*4*/].f_1 == Local_121.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_569()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_642(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_121.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_570()
{
	if (!func_705())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9911) * Global_262145.f_10100));
	}
	if ((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9972) * Global_262145.f_10102));
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9972) * Global_262145.f_10102));
	}
	return 0;
}

void func_571(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_583())
		{
			if (func_582(0))
			{
				if (!func_362(0))
				{
					if (unk_0x885F483F34E47503(func_581()))
					{
						if (func_580() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_580());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_578(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_577("GB_BCUT_TICK1", func_581(), iVar0, 0, 0, 1, 1);
						}
						func_576(20);
						func_572(func_581(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_572(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_802(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_575(iParam0);
		func_574(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_573(iParam0));
	}
}

var func_573(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_574(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_575(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_576(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_577(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x95CE6D748899618C(func_539(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_515(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_510(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_578(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_579(1);
	}
	else
	{
		iVar1 = func_579(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_579(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_580()
{
	return Global_262145.f_11041;
}

int func_581()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

bool func_582(bool bParam0)
{
	return func_303(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_583()
{
	return func_339(unk_0x0FFED3E94261A832());
}

int func_584()
{
	int iVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6) && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_121.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_585()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_73[iVar0]))
		{
			if (!func_104(Local_121.f_73[iVar0]))
			{
				func_25(&(Local_121.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar0]))
		{
			if (func_31(Local_121.f_48[iVar0]))
			{
				func_25(&(Local_121.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_586(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_233(unk_0x0FFED3E94261A832(), 0) || func_333(unk_0x0FFED3E94261A832(), 0))
	{
		if (func_225(unk_0x0FFED3E94261A832()) || func_238(unk_0x0FFED3E94261A832()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xE66A798F07C5EFC7() < iParam0)
	{
		if (bParam2)
		{
			func_591(sParam3, sParam4, 1);
		}
		if (func_590(26, -1))
		{
			func_588(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1574379.f_18)))
	{
		if (!func_19(&(Global_1574379.f_18), 7500, 0))
		{
			return 0;
		}
		func_101(&(Global_1574379.f_18));
	}
	if (func_587())
	{
		if (bParam2)
		{
			func_591(sParam3, sParam4, 0);
		}
		if (func_590(26, -1))
		{
			func_588(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD7577082A8533202() < iParam0)
	{
		if (bParam2)
		{
			func_591(sParam3, sParam4, 1);
		}
		if (func_590(26, -1))
		{
			func_588(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_587()
{
	return unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 0);
}

void func_588(int iParam0, int iParam1)
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
			unk_0xB8D595DDD2159686(0, iParam1);
			break;
		
		default:
			uVar1 = func_589(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0x507FE690B1271947(&iVar0, iParam0);
				unk_0xB8D595DDD2159686(iVar0, iParam1);
			}
			break;
	}
}

int func_589(int iParam0)
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

bool func_590(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	uVar0 = func_589(iParam1);
	uVar1 = unk_0x29B06605BA5CF280(uVar0);
	return unk_0xAA4F14DA15DB0B51(uVar1, iParam0);
}

void func_591(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 2) && !func_197(unk_0x0FFED3E94261A832())) && !func_196(unk_0x0FFED3E94261A832()))
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
		func_602(66, sParam0, sParam1, 1, -1, 2);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 2);
	}
}

void func_592()
{
	Global_2497344.f_1710.f_56 = 1;
}

void func_593()
{
	Global_2497344.f_1710.f_54 = 1;
}

bool func_594()
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_1697, 11);
}

int func_595()
{
	if (iLocal_3664 > -1)
	{
		if (func_104(Local_121.f_7[iLocal_3664]))
		{
			if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iLocal_3664])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_596(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	unk_0xEA97619D8B89D387(uParam2);
	return unk_0x95886DF60C19E1CC(0);
}

int func_597(bool bParam0)
{
	if (!func_705())
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9910) * Global_262145.f_10099));
	}
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9971) * Global_262145.f_10101));
	}
	if ((unk_0xAA4F14DA15DB0B51(Local_121.f_3, 0) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 1)) && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 2))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9971) * Global_262145.f_10101));
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 6))
	{
		return unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_262145.f_9971) * Global_262145.f_10101));
	}
	return 0;
}

char* func_598()
{
	if (Local_121.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0xDA6E804770521A18(Local_121.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_599(int iParam0)
{
	if (func_237())
	{
		if (iParam0 == 1)
		{
			if (Global_2497344.f_4314 == -1)
			{
				Global_2497344.f_4314 = 60000;
			}
			func_8(&(Global_2497344.f_4312), 0, 0);
			if (Global_2497344.f_4317 == -1)
			{
				Global_2497344.f_4317 = 10000;
			}
			func_8(&(Global_2497344.f_4315), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_644(1);
		}
		if ((!unk_0x1B154DE2D4606530() && !func_600()) && !func_243(unk_0x0FFED3E94261A832()))
		{
			Global_979817 = 0;
		}
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_8 = 0;
	}
}

bool func_600()
{
	return Global_2445217.f_719;
}

int func_601(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
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
	func_556(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_69 = iParam8;
	Var0.f_70 = iParam9;
	return func_528(&Var0);
}

int func_602(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_556(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_528(&Var0);
}

void func_603(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 4);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 4);
	}
}

void func_604(bool bParam0)
{
	int iVar0;
	
	if (unk_0x29D988205B5459BD(unk_0x2A5EB8B0FE590B91(), 5) != 0)
	{
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 177, 1);
		unk_0x6AD7D4849FABA792(unk_0x0FFED3E94261A832(), func_254(581, -1, 0));
		if (func_622())
		{
			unk_0xA4D3AD9C55E18487(unk_0x0FFED3E94261A832(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_621())
		{
			unk_0xA4D3AD9C55E18487(unk_0x0FFED3E94261A832(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_618(3610, -1, -1))
		{
		}
		iVar0 = func_254(2035, -1, 0);
		unk_0x9A2DF7C4DC239708(unk_0x0FFED3E94261A832(), func_617(unk_0x1E199569E0295838(unk_0x0FFED3E94261A832()), iVar0));
		if (func_582(0))
		{
			unk_0x6AD7D4849FABA792(unk_0x0FFED3E94261A832(), func_254(581, -1, 0));
		}
		else
		{
			unk_0x6AD7D4849FABA792(unk_0x0FFED3E94261A832(), func_616(Global_2505391));
		}
		func_615(unk_0x0FFED3E94261A832(), iVar0);
		unk_0xA6A9C51241153793(unk_0x0FFED3E94261A832(), 5, func_609(unk_0x2A5EB8B0FE590B91(), iVar0), func_608(unk_0x2A5EB8B0FE590B91(), iVar0), 0);
		func_607(func_254(2035, -1, 0), 1);
		Global_2497344.f_275 = 1;
		func_605(unk_0x0FFED3E94261A832(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_605(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_254(2035, -1, 0);
		}
		unk_0xA6A9C51241153793(iParam0, 5, func_609(unk_0x1E199569E0295838(iParam0), iParam2), func_608(unk_0x1E199569E0295838(iParam0), iParam2), 0);
		func_615(iParam0, iParam2);
		unk_0x9A2DF7C4DC239708(iParam0, func_617(unk_0x1E199569E0295838(iParam0), iParam2));
		unk_0x6CA29A70250F194F(unk_0x1E199569E0295838(iParam0), 5, func_609(unk_0x1E199569E0295838(iParam0), iParam2), func_608(unk_0x1E199569E0295838(iParam0), iParam2), func_617(unk_0x1E199569E0295838(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_254(581, -1, 0);
		}
		if (func_582(1) && func_606(iParam0))
		{
			unk_0x6AD7D4849FABA792(iParam0, func_616(Global_2505391));
		}
		else
		{
			unk_0x6AD7D4849FABA792(iParam0, iParam1);
		}
		if (func_622())
		{
			unk_0xA4D3AD9C55E18487(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_621())
		{
			unk_0xA4D3AD9C55E18487(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x3EFE40733EFB6649(unk_0x1E199569E0295838(iParam0), 177, 1);
	}
}

bool func_606(int iParam0)
{
	return func_224(iParam0, 10);
}

void func_607(int iParam0, int iParam1)
{
	if (unk_0x591AF4C50B46E014())
	{
		func_464(2035, iParam0, -1, 1, 0);
		unk_0xA6A9C51241153793(unk_0x0FFED3E94261A832(), 5, func_609(unk_0x2A5EB8B0FE590B91(), iParam0), func_608(unk_0x2A5EB8B0FE590B91(), iParam0), 0);
		func_615(unk_0x0FFED3E94261A832(), iParam0);
		unk_0x9A2DF7C4DC239708(unk_0x0FFED3E94261A832(), func_617(unk_0x2A5EB8B0FE590B91(), iParam0));
		if ((iParam1 && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && unk_0x29D988205B5459BD(unk_0x2A5EB8B0FE590B91(), 5) != 0)
		{
			func_605(unk_0x0FFED3E94261A832(), -1, -1);
		}
	}
}

int func_608(int iParam0, int iParam1)
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

int func_609(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x29D988205B5459BD(iParam0, 11);
	if (unk_0x29D988205B5459BD(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0xD3B21CE53AA7BE51(iParam0);
	uVar3 = unk_0xE1155F8509CBD256(iParam0, 8, unk_0x29D988205B5459BD(iParam0, 8), unk_0x0B56C00A178536FE(iParam0, 8));
	if (unk_0x62B1B843DC27A464(uVar3, joaat("OVER_JACKET"), 8))
	{
		return func_614(iParam0, iParam1);
	}
	iVar4 = 0;
	if (iParam1 > 61)
	{
		iVar4 = 50;
	}
	else if (iParam1 > 51)
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
	if (func_613(iParam0))
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
		uVar5 = unk_0xE1155F8509CBD256(iParam0, 11, iVar0, unk_0x0B56C00A178536FE(iParam0, 11));
		if (unk_0x62B1B843DC27A464(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("HOODED_JACKET"), 0))
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
			else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_614(iParam0, iParam1) + 15;
			}
			else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_614(iParam0, iParam1) + 15;
			}
			else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_614(iParam0, iParam1) + 15;
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_612(uVar5, 0);
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
						iVar0 = func_611(uVar5);
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
						iVar0 = func_611(uVar5);
						break;
					}
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x62B1B843DC27A464(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_610(uVar5, 0);
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
					iVar0 = func_611(uVar5);
					break;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0x62B1B843DC27A464(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0x62B1B843DC27A464(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0x62B1B843DC27A464(uVar5, -1086258388, 0) || unk_0x62B1B843DC27A464(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x62B1B843DC27A464(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_614(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, -872449705, 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, 144417099, 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, -102825006, 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_21"), 0))
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
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_0"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return func_614(iParam0, iParam1);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return func_614(iParam0, iParam1);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, 970679185, 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, 83294665, 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, 382246252, 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1);
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1) + 15;
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1) + 15;
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_614(iParam0, iParam1) + 15;
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar4);
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("IE_DRAW_5"), 0))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_614(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x62B1B843DC27A464(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0x62B1B843DC27A464(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x62B1B843DC27A464(uVar5, joaat("SILK_ROBE"), 0)) || unk_0x62B1B843DC27A464(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_611(uVar5);
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

int func_610(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_611(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_612(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x62B1B843DC27A464(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_613(int iParam0)
{
	if (unk_0x62B1B843DC27A464(unk_0xE1155F8509CBD256(iParam0, 4, unk_0x29D988205B5459BD(iParam0, 4), unk_0x0B56C00A178536FE(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_614(int iParam0, int iParam1)
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

void func_615(int iParam0, int iParam1)
{
	if (func_622())
	{
		if (iParam1 > 46)
		{
			unk_0x5C4184A5DD15E38F(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x5C4184A5DD15E38F(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x5C4184A5DD15E38F(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xF4B45061E902991D(iParam0);
		}
	}
	else if (func_621())
	{
		if (iParam1 > 0)
		{
			unk_0x5C4184A5DD15E38F(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xF4B45061E902991D(iParam0);
		}
	}
}

int func_616(var uParam0)
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

int func_617(int iParam0, int iParam1)
{
	return 0;
}

int func_618(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_620(iParam0, iParam1);
	uVar2 = func_619(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_619(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_620(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_621()
{
	return unk_0xA438D14FADC1185B(joaat("mppilot"));
}

bool func_622()
{
	return unk_0xA438D14FADC1185B(joaat("mplts"));
}

void func_623(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1697, 11))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1697), 11);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1697, 11))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_1697), 11);
	}
}

void func_624(bool bParam0)
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

void func_625()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
}

void func_626(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (func_237())
		{
			func_599(0);
			func_628();
		}
		if (func_253(0))
		{
			iVar0 = func_254(2465, -1, 0);
			unk_0x507FE690B1271947(&iVar0, 0);
			func_628();
		}
		if (func_253(func_201(func_185(unk_0x0FFED3E94261A832()))))
		{
			iVar0 = func_254(2465, -1, 0);
			unk_0x507FE690B1271947(&iVar0, func_201(func_185(unk_0x0FFED3E94261A832())));
			func_628();
		}
		if (func_627())
		{
			func_628();
		}
		if (func_185(unk_0x0FFED3E94261A832()) > -1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 7);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 7);
	}
}

int func_627()
{
	if (Global_2434604.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_628()
{
	if (func_627())
	{
		Global_2434604.f_933.f_16 = 1;
	}
}

void func_629(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
	}
	Global_2497344.f_4676 = -1;
	bVar0 = (func_233(unk_0x0FFED3E94261A832(), 0) && func_225(unk_0x0FFED3E94261A832()));
	if (bParam6)
	{
		func_638(21, 1);
	}
	else
	{
		func_637(iParam0, -1);
		if (func_197(unk_0x0FFED3E94261A832()))
		{
			Global_1574379.f_3 = iParam0;
		}
		else
		{
			func_667(iParam0);
		}
		Global_1574379.f_4 = -1;
		if (func_197(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 5);
		}
		if ((func_237() && !func_232()) || func_198(unk_0x0FFED3E94261A832(), 21))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 4);
		}
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 17);
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 20);
		if (func_636(iParam0))
		{
			func_635();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_634(fParam1);
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
		if (func_633(iParam0))
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
				func_431(1);
				if (func_566(0))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_429(1);
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
		}
		if (bParam5)
		{
			func_632();
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_630(iParam0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 21);
			}
		}
	}
	Global_2484463 = 1;
}

int func_630(int iParam0)
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
	if (func_631())
	{
		return 1;
	}
	return 0;
}

int func_631()
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

void func_632()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4667), 0);
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_226(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_634(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_424())
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

void func_635()
{
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_209 = 0;
	unk_0x507FE690B1271947(&(Global_2497344.f_4482), 1);
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_637(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_253(0) || func_253(func_201(iVar0)))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 2);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 2);
		}
	}
}

void func_638(int iParam0, bool bParam1)
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

bool func_639(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

int func_640()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_121.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
	iVar1 = unk_0xF0178FC88859A30C(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0x8F8E5C33266ED978(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!unk_0x769F0F6444C1ABE0(iVar4))
			{
				if (unk_0xDB61DD81432BD145(iVar4))
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

void func_641(bool bParam0)
{
	var uVar0;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (unk_0x1979A7D1D0538188(uVar0))
		{
			unk_0xF65C7766FB8D4B2C(uVar0, bParam0);
			unk_0xE3DB968E63BCE4D3(iVar0, !bParam0);
		}
	}
}

void func_642(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_121.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_643()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (iVar0 != -1)
	{
		Global_1622795[iVar0 /*431*/] = -1;
	}
}

void func_644(bool bParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (!func_237())
		{
			if (func_802(unk_0x0FFED3E94261A832(), 1, 0))
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
			if (func_802(unk_0x0FFED3E94261A832(), 1, 1))
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

void func_645(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		Global_2456868 = func_185(unk_0x0FFED3E94261A832());
		if (Global_2456868 == -1)
		{
			Global_2456868 = Global_1574379.f_4;
		}
		if (func_666(Global_2456868) == 0)
		{
			if (func_665(1) > 0)
			{
				func_664(26, -1);
			}
		}
		if (func_237())
		{
			func_599(0);
			func_628();
		}
		if (func_253(0))
		{
			iVar1 = func_254(2465, -1, 0);
			unk_0x507FE690B1271947(&iVar1, 0);
			func_628();
		}
		if (func_253(func_201(func_185(unk_0x0FFED3E94261A832()))))
		{
			iVar1 = func_254(2465, -1, 0);
			unk_0x507FE690B1271947(&iVar1, func_201(func_185(unk_0x0FFED3E94261A832())));
			func_628();
		}
		if (func_627())
		{
			func_628();
		}
		unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 0);
	}
	else
	{
		if ((!func_219() && !func_663()) && !func_662())
		{
			Global_2456868 = -1;
			func_588(26, -1);
		}
		else if (func_666(Global_2456868) == 0)
		{
			iVar0 = func_648(1);
			if (iVar0 > 0)
			{
				func_646(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_470(1927, 1, -1);
				func_646(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_590(26, -1))
		{
			Global_2456868 = -1;
			func_588(26, -1);
		}
		unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 0);
	}
}

void func_646(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_454(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_647(iParam0))
	{
		func_452(iParam0, iVar0);
	}
	else
	{
		func_456(iParam0, iVar0);
	}
}

int func_647(int iParam0)
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

int func_648(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2455759 == 0)
	{
		return 0;
	}
	if (func_662())
	{
		if (unk_0x1B154DE2D4606530() || (func_661() || func_659()))
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
	if (func_658(Global_102264.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2454637)
	{
		iVar0 = 1;
	}
	if (func_657(512))
	{
		iVar0 = 1;
	}
	if (func_656(128))
	{
		iVar0 = 1;
	}
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_163())
	{
		iVar0 = 0;
	}
	if (Global_2455198)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_654())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_653())
	{
		iVar0 = 0;
	}
	if ((Global_2454713 || Global_2454712) || Global_1315678)
	{
		if (func_659())
		{
			iVar0 = 0;
		}
	}
	Global_2455198 = 0;
	Global_2454712 = 0;
	Global_2454713 = 0;
	Global_1315678 = 0;
	Global_2454637 = 0;
	func_651(&(Global_102264.f_1), 32);
	func_650(512);
	func_649(128);
	return iVar0;
}

void func_649(int iParam0)
{
	Global_102321 = (Global_102321 - (Global_102321 && iParam0));
}

void func_650(int iParam0)
{
	Global_102322 = (Global_102322 - (Global_102322 && iParam0));
}

void func_651(var uParam0, int iParam1)
{
	func_652(uParam0, iParam1);
}

void func_652(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_653()
{
	if (((Global_1574312 || Global_1574283) || func_16(unk_0x0FFED3E94261A832(), 0)) || func_555())
	{
		return 1;
	}
	return 0;
}

int func_654()
{
	switch (func_655())
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

int func_655()
{
	return Global_2445989.f_1.f_2819;
}

bool func_656(int iParam0)
{
	return (Global_102321 && iParam0) != 0;
}

bool func_657(int iParam0)
{
	return (Global_102322 && iParam0) != 0;
}

bool func_658(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_659()
{
	if (func_666(Global_2456868))
	{
		return 0;
	}
	if (func_660(unk_0x0FFED3E94261A832(), 146))
	{
		return 1;
	}
	return 0;
}

int func_660(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
	{
		return func_226(iParam0);
	}
	return 0;
}

int func_661()
{
	if (func_666(Global_2456868))
	{
		return 0;
	}
	if (func_226(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

bool func_662()
{
	return unk_0xAA4F14DA15DB0B51(Global_1312423, 0);
}

bool func_663()
{
	return Global_1312821;
}

void func_664(int iParam0, int iParam1)
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
			unk_0xB8D595DDD2159686(0, iParam1);
			break;
		
		default:
			uVar1 = func_589(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (!unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0xF6082E2ADA1C795B(&iVar0, iParam0);
				unk_0xB8D595DDD2159686(iVar0, iParam1);
			}
			break;
	}
}

int func_665(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_163())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_654())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_653())
	{
		iVar0 = 0;
	}
	Global_2455759 = 1;
	return iVar0;
}

int func_666(int iParam0)
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

void func_667(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/] = iParam0;
}

void func_668(int iParam0)
{
	Global_2455995 = iParam0;
}

void func_669(int iParam0)
{
	if (func_195())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 0))
			{
				if ((((func_671(60000) && !unk_0x6235C49EA2DBA22D()) && !func_392()) && !unk_0x9E5289F5D782437C()) && func_409(0, 1, 1, 1))
				{
					if (!func_705())
					{
						func_670("UW_HELP1", func_598(), func_597(1), 30000);
					}
					else
					{
						func_670("UW_HELP1C", func_598(), func_597(1), 30000);
					}
					func_407(0);
					unk_0x08BE237DBCD9CBD9(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0xF6082E2ADA1C795B(&iLocal_1332, 0);
				}
			}
			break;
	}
}

void func_670(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	unk_0xEA97619D8B89D387(uParam2);
	unk_0xED95966D04271FDA(0, 0, 0, iParam3);
}

bool func_671(int iParam0)
{
	return unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(Global_2412847, unk_0x11ABC381A58DD5AB())) > iParam0;
}

void func_672()
{
	int iVar0;
	
	unk_0x507FE690B1271947(&iLocal_1333, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_673(iVar0);
		iVar0++;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 15))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 15))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 15);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 15))
	{
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 15);
	}
}

void func_673(int iParam0)
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
	
	if (unk_0x3756406E4D76B25E(Local_121.f_7[iParam0]))
	{
		if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 0))
		{
			if (Local_121.f_241 == 0)
			{
			}
		}
		if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 0))
		{
			if (!func_195())
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1, iParam0))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 15))
						{
							if (unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91()) == unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_1333, 15);
							}
						}
						if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 0))
						{
							if (func_677("UW_HELP2", func_598()) || func_677("UW_HELP2C", func_598()))
							{
								unk_0x7D53B6FFAEDA810A(1);
							}
							if (!func_398(unk_0x0FFED3E94261A832()))
							{
								func_603(1);
							}
							iVar0 = func_676(unk_0x2A5EB8B0FE590B91(), 0);
							if (func_596("UW_HELP1", func_598(), func_597(1)) || func_596("UW_HELP1C", func_598(), func_597(1)))
							{
								unk_0x7D53B6FFAEDA810A(1);
							}
							if (Local_121.f_463 != -1)
							{
								if (iVar0 > (Local_121.f_463 - 2))
								{
									iVar0 = (Local_121.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1), iParam0);
							Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 = iParam0;
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 1);
							func_187();
							iLocal_3727 = iVar0;
						}
						else if (Local_121.f_241 == 0)
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 1))
							{
								if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
								{
									if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_409(0, 1, 1, 1))
										{
											if (!func_705())
											{
												func_675("UW_HELP2", func_598(), 30000);
											}
											else
											{
												func_675("UW_HELP2C", func_598(), 30000);
											}
											func_407(1);
											unk_0xF6082E2ADA1C795B(&iLocal_1332, 1);
										}
									}
								}
							}
							if (!func_237())
							{
								if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 2))
								{
									unk_0x507FE690B1271947(&iLocal_1333, 2);
								}
								if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
								{
									if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 4))
									{
										if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 12))
										{
											unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 12);
										}
										if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
										{
											if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_409(0, 1, 1, 1))
												{
													if (!func_705())
													{
														func_408("UW_COPS", 30000);
													}
													else
													{
														func_408("UW_COPSC", 30000);
													}
													func_407(1);
													unk_0xF6082E2ADA1C795B(&iLocal_1332, 4);
												}
											}
										}
									}
									else if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0x507FE690B1271947(&iLocal_1332, 4);
									}
								}
								else
								{
									if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 4))
									{
										unk_0x507FE690B1271947(&iLocal_1332, 4);
									}
									if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 12))
									{
										unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 12))
								{
									unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 12);
								}
								if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 2))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_409(0, 1, 1, 1))
										{
											if (!func_705())
											{
												func_408("UW_PASSMD", 30000);
											}
											else
											{
												func_408("UW_PASSMD", 30000);
											}
											func_407(1);
											unk_0xF6082E2ADA1C795B(&iLocal_1333, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 == 0)
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_121.f_28)
								{
									if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1, iParam0))
								{
									unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1), iParam0);
								}
								if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 != -1)
								{
									Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 = -1;
								}
								if (func_639("UW_TIMEL"))
								{
									unk_0x7D53B6FFAEDA810A(1);
								}
								if (func_639("UW_TIMELA"))
								{
									unk_0x7D53B6FFAEDA810A(1);
								}
								if (func_398(unk_0x0FFED3E94261A832()))
								{
									func_603(0);
								}
								unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
							}
							else
							{
								if (Local_121.f_241 == 0 && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 4))
								{
									iVar0 = func_676(unk_0x2A5EB8B0FE590B91(), 0);
									if (Local_121.f_463 != -1)
									{
										if (iVar0 > (Local_121.f_463 - 2))
										{
											iVar0 = (Local_121.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3727)
									{
										unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1), iParam0);
										unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), (0 + iLocal_3727 + 1));
									}
								}
								bVar1 = false;
								if (func_255())
								{
									if (Local_121.f_413 > -1)
									{
										iVar3 = (Local_121.f_413 - func_121(&(Local_121.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_674(bVar1);
								if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0x8A366A9CD78F976E(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]));
								}
								if (!func_22(&uLocal_1555))
								{
									func_20(&uLocal_1555, 0, 0);
								}
								else if (func_19(&uLocal_1555, 2000, 0))
								{
									if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 9) || !func_705())
									{
										if (func_639("UW_MINV"))
										{
										}
										if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 5))
										{
											if (Local_121.f_28 > 1 || (Local_121.f_28 == 1 && func_107() > 1))
											{
												if (func_22(&(Local_121.f_326)))
												{
													if (!unk_0x6235C49EA2DBA22D())
													{
														if (func_107() > 1)
														{
															func_408("UW_TIMELA", 30000);
														}
														else
														{
															func_408("UW_TIMEL", 30000);
														}
														func_407(1);
														unk_0xF6082E2ADA1C795B(&iLocal_1332, 5);
													}
												}
											}
										}
									}
									else if (func_705())
									{
										if (!unk_0xAA4F14DA15DB0B51(Local_121.f_3, 9))
										{
											if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 14))
												{
													if (!unk_0x6235C49EA2DBA22D())
													{
														func_408("UW_MINV", 30000);
														func_407(1);
														unk_0xF6082E2ADA1C795B(&iLocal_1332, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_121.f_241 == 0)
					{
						if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_639("UW_VALK") && !func_639("UW_VALKC"))
							{
								unk_0xC1E9CB2C9C0328F2();
								if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 8))
								{
									unk_0x507FE690B1271947(&iLocal_1332, 8);
								}
							}
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 8))
							{
								if (!unk_0x6235C49EA2DBA22D())
								{
									iVar6 = 0;
									iVar4 = unk_0xCBA4F77BB9D2F115(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0x457D9E478E06E354(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_705())
										{
											func_408("UW_VALK", 30000);
										}
										else
										{
											func_408("UW_VALKC", 30000);
										}
										func_407(1);
										unk_0xF6082E2ADA1C795B(&iLocal_1332, 8);
									}
									if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 8))
									{
										if (func_705())
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
														if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar7]))
														{
															if (func_104(Local_121.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0x457D9E478E06E354(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar7]), (iVar5 - 1), 0))
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
												func_408("UW_VALKC", 30000);
												func_407(1);
												unk_0xF6082E2ADA1C795B(&iLocal_1332, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_121.f_241 == 1)
					{
						if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_1, iParam0))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 6))
							{
								if (func_104(Local_121.f_7[iParam0]))
								{
									if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
									{
										if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0])))
										{
											if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 7))
											{
												if ((unk_0x92BC4A8239BDDACC(0, 75) || unk_0x83F6A1E4E653AD75(0, 75)) || unk_0xC20E8B2E17B46871(0, 75))
												{
													unk_0xF6082E2ADA1C795B(&iLocal_1332, 7);
												}
											}
											if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 7))
											{
												if (!unk_0x6235C49EA2DBA22D())
												{
													if (func_705())
													{
														func_408("UW_EXITVC", 30000);
													}
													else
													{
														func_408("UW_EXITV", 30000);
													}
													func_407(1);
													unk_0xF6082E2ADA1C795B(&iLocal_1332, 6);
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
					if (unk_0x3756406E4D76B25E(Local_121.f_7[iVar10]))
					{
						if (unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar10]), 0))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_253(0))
					{
						iVar9 = func_254(2465, -1, 0);
						unk_0x507FE690B1271947(&iVar9, 0);
						func_464(2465, iVar9, -1, 1, 0);
						func_628();
						if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 9))
						{
							unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 9);
						}
					}
					if (func_253(8))
					{
						iVar9 = func_254(2465, -1, 0);
						unk_0x507FE690B1271947(&iVar9, 8);
						func_464(2465, iVar9, -1, 1, 0);
						func_628();
						if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 9))
						{
							unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
					{
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 = 0;
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 12))
					{
						unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 12);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 14))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (func_104(Local_121.f_7[iParam0]))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_409(0, 1, 1, 1))
								{
									if (!func_245(129, 0, 0))
									{
										if (!func_705())
										{
											func_408("UW_TUT", -1);
										}
										else
										{
											func_408("UW_TUTC", -1);
										}
										func_407(1);
										unk_0xF6082E2ADA1C795B(&iLocal_1333, 14);
									}
									else
									{
										if (!func_705())
										{
											func_408("UW_HIDE", -1);
										}
										else
										{
											func_408("UW_HIDEC", -1);
										}
										func_407(1);
										unk_0xF6082E2ADA1C795B(&iLocal_1333, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_802(unk_0x0FFED3E94261A832(), 1, 1) && Local_755[unk_0x88641E5BC172153A() /*18*/].f_1 != 0)
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4508, 1))
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4508), 1);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4508, 1))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4508), 1);
			}
		}
	}
}

void func_674(bool bParam0)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam0)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	unk_0x4E6996123FABDB93(0, 69, 1);
	unk_0x4E6996123FABDB93(0, 70, 1);
	unk_0x4E6996123FABDB93(0, 92, 1);
	unk_0x4E6996123FABDB93(0, 68, 1);
	unk_0x4E6996123FABDB93(0, 91, 1);
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 99, 1);
	unk_0x4E6996123FABDB93(0, 100, 1);
	unk_0x4E6996123FABDB93(0, 65, 1);
	unk_0x4E6996123FABDB93(0, 105, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
	unk_0x4E6996123FABDB93(0, 51, 1);
	unk_0x4E6996123FABDB93(0, 47, 1);
	unk_0x4E6996123FABDB93(0, 24, 1);
	unk_0x4E6996123FABDB93(0, 257, 1);
}

void func_675(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam2);
}

int func_676(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

var func_677(char* sParam0, char* sParam1)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	return unk_0x95886DF60C19E1CC(0);
}

void func_678()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3756406E4D76B25E(Local_121.f_7[iVar0]) && unk_0x434105A1C45F1BED(Local_121.f_7[iVar0]))
		{
			iVar1 = unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]);
			if (unk_0x2137828D03306CAF(iVar1) && !unk_0xA9A04898798AE9E6(iVar1, 0))
			{
				unk_0xFBE322CD80455FA9(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_679(struct<3> Param0)
{
	Global_2391047 = { Param0 };
	Global_2391050 = 1;
}

void func_680()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_696(iVar0);
				break;
			
			case 171:
				func_681(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_681(int iParam0)
{
	int iVar0;
	
	unk_0xD9298AF91B40C8C4(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -831777982:
			func_695(iParam0);
			break;
		
		case -2033487132:
			func_694(iParam0);
			break;
		
		case 462815244:
			func_693(iParam0);
			break;
		
		case -1974018919:
			func_692(iParam0);
			break;
		
		case 277586189:
			func_691(iParam0);
			break;
		
		case 834995424:
			func_688(iParam0);
			break;
		
		case -683751269:
			func_682(iParam0);
			break;
	}
}

void func_682(int iParam0)
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
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0xD0BCF9877CD72A3F(Local_121.f_73[iVar6]))
		{
			return;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6, iVar6))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_271, iVar6))
			{
				if (func_95(iVar6))
				{
					if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]), 0))
					{
						if (unk_0x984FB159E7A6C186(unk_0x0FFED3E94261A832(), unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0x4CF5038218F9A596(unk_0x0FFED3E94261A832(), unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_705())
				{
					if (Local_121.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = unk_0x7C214DA899F05536(Local_121.f_465[0 /*4*/].f_2);
						if (iVar9 != func_6())
						{
							if (iVar9 == unk_0x0FFED3E94261A832())
							{
								bVar8 = true;
							}
						}
					}
					else if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[0]))
					{
						if (func_104(Local_121.f_7[0]))
						{
							iVar11 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), -1, 0);
							if (iVar11 != 0)
							{
								if (unk_0xDB61DD81432BD145(iVar11))
								{
									iVar10 = unk_0xB0BB7458627D389F(iVar11);
									if (iVar10 == unk_0x0FFED3E94261A832())
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
			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
			{
				iVar4 = func_687();
				iVar12 = unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_686(iVar12))
				{
					iVar3 = func_42(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar14]) && !unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar14)], func_85(iVar14)))
						{
							iVar13++;
							unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar14)]), func_85(iVar14));
						}
						iVar14++;
					}
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 = (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_755[unk_0x88641E5BC172153A() /*18*/].f_8++;
				}
				if (Local_738.f_11 == 0)
				{
					Local_738.f_11 = unk_0xDA84A1E29323722E();
				}
				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
				{
					Local_738.f_7 = (Local_738.f_7 + iVar4);
					func_684(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_683();
				}
			}
			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar6);
		}
	}
}

void func_683()
{
	if (!func_22(&uLocal_3704) || (func_22(&uLocal_3704) && func_19(&uLocal_3704, 2000, 0)))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_101(&uLocal_3704);
		func_20(&uLocal_3704, 0, 0);
	}
}

var func_684(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_449(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_685()
{
	if (func_705())
	{
		return Global_262145.f_9974;
	}
	return Global_262145.f_9913;
}

bool func_686(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_687()
{
	if (func_705())
	{
		return Global_262145.f_9973;
	}
	return Global_262145.f_9912;
}

void func_688(int iParam0)
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
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6, iVar6))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_271, iVar6))
			{
				if (func_690(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_689(iVar6))
				{
					if (func_95(iVar6))
					{
						if (!unk_0xA9A04898798AE9E6(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]), 0))
						{
							if (unk_0x984FB159E7A6C186(unk_0x0FFED3E94261A832(), unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0x4CF5038218F9A596(unk_0x0FFED3E94261A832(), unk_0xECBE9D2902B2B964(Local_121.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_705())
					{
						if (Local_121.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = unk_0x7C214DA899F05536(Local_121.f_465[0 /*4*/].f_2);
							if (iVar9 != func_6())
							{
								if (iVar9 == unk_0x0FFED3E94261A832())
								{
									bVar8 = true;
								}
							}
						}
						else if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[0]))
						{
							if (func_104(Local_121.f_7[0]))
							{
								iVar11 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[0]), -1, 0);
								if (iVar11 != 0)
								{
									if (unk_0xDB61DD81432BD145(iVar11))
									{
										iVar10 = unk_0xB0BB7458627D389F(iVar11);
										if (iVar10 == unk_0x0FFED3E94261A832())
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
					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar12]) && !unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar12)], func_85(iVar12)))
							{
								iVar13++;
								unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar12)]), func_85(iVar12));
							}
							iVar12++;
						}
						Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 = (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
						{
							iVar4 = func_687();
							iVar4 = (iVar4 * iVar3);
							Local_738.f_7 = (Local_738.f_7 + iVar4);
							func_684(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_683();
							if (Local_738.f_11 == 0)
							{
								Local_738.f_11 = unk_0xDA84A1E29323722E();
							}
						}
						unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_689(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			if (Local_755[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_690(int iParam0)
{
	int iVar0;
	
	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			if (iVar0 != unk_0x88641E5BC172153A())
			{
				if (Local_755[iVar0 /*18*/].f_11[iParam0] > Local_755[unk_0x88641E5BC172153A() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_691(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (unk_0x0B3559E0A7030003("am_kill_list", -1, 0) != func_6())
		{
		}
		if (unk_0x62E688B72E3C57B0())
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_464), Var0.f_2);
		}
	}
}

void func_692(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		unk_0xF6082E2ADA1C795B(&uLocal_3671, Var0.f_2);
	}
}

void func_693(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		unk_0xF6082E2ADA1C795B(&uLocal_3672, Var0.f_2);
	}
}

void func_694(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(Var0.f_2)], func_85(Var0.f_2)))
		{
			unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(Var0.f_2)]), func_85(Var0.f_2));
		}
	}
}

void func_695(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6, iVar3))
		{
			unk_0x507FE690B1271947(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar3);
		}
	}
}

void func_696(int iParam0)
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
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 10))
	{
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6, iVar10))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_271, iVar10))
				{
					if (unk_0x2137828D03306CAF(Var0.f_0))
					{
						if (unk_0x82DF3B947FC3E281(Var0.f_0))
						{
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_73[iVar10]))
							{
								if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar10])))
								{
									if (unk_0x761AC59E782D169D(Var0.f_0) == unk_0xECBE9D2902B2B964(Local_121.f_73[iVar10]))
									{
										if (unk_0x2137828D03306CAF(Var0.f_1))
										{
											if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
											{
												if (unk_0xC3A7AD90290CA72E(Var0.f_1) == unk_0x2A5EB8B0FE590B91())
												{
													if (Var0.f_3)
													{
														iVar13 = unk_0xD3B21CE53AA7BE51(Var0.f_0);
														if (Local_121.f_27 == joaat("hydra"))
														{
															if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
															{
																iVar16 = func_687();
																if (func_686(iVar13))
																{
																	iVar11 = func_42(iVar13);
																	Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 = (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 + iVar11);
																	iVar16 = (iVar16 * iVar11);
																}
																else
																{
																	Local_755[unk_0x88641E5BC172153A() /*18*/].f_8++;
																}
																if (Local_738.f_11 == 0)
																{
																	Local_738.f_11 = unk_0xDA84A1E29323722E();
																}
																if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																{
																	Local_738.f_7 = (Local_738.f_7 + iVar16);
																	func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																	func_683();
																}
															}
															unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar10);
														}
														else if (iVar13 == joaat("buzzard"))
														{
															iVar18 = -1;
															iVar18 = -1;
															while (iVar18 <= 3)
															{
																iVar15 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar10]), iVar18, 0);
																if (iVar15 != 0)
																{
																	iVar17 = func_697(iVar15);
																	if (iVar17 > -1)
																	{
																		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar17)], func_85(iVar17)))
																		{
																			if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar17)], func_85(iVar17)))
																			{
																				unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar17)]), func_85(iVar17));
																				iVar16 = func_687();
																				Local_755[unk_0x88641E5BC172153A() /*18*/].f_8++;
																				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																				{
																					Local_738.f_7 = (Local_738.f_7 + iVar16);
																					func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_683();
																				}
																				if (unk_0x4C2C9007DF4A7DB6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar17])))
																				{
																					func_87(&(Local_1349[iVar17 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar18++;
															}
															unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar10);
														}
													}
													else if (!func_104(Local_121.f_73[iVar10]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (unk_0xDB61DD81432BD145(unk_0xC3A7AD90290CA72E(Var0.f_1)))
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
		if (Local_121.f_27 != joaat("hydra"))
		{
			iVar10 = 0;
			while (iVar10 <= 19)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar10)], func_85(iVar10)))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
					{
						if (unk_0x2137828D03306CAF(Var0.f_0))
						{
							if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
							{
								if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar10]))
								{
									if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_121.f_48[iVar10])))
									{
										if (unk_0xC3A7AD90290CA72E(Var0.f_0) == unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x2137828D03306CAF(Var0.f_1))
												{
													if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
													{
														iVar14 = unk_0xC3A7AD90290CA72E(Var0.f_1);
														if (unk_0xDB61DD81432BD145(iVar14))
														{
															if (iVar14 == unk_0x2A5EB8B0FE590B91())
															{
																if (Var0.f_3)
																{
																	iVar16 = func_687();
																	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
																	{
																		Local_755[unk_0x88641E5BC172153A() /*18*/].f_8++;
																		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																		{
																			func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			Local_738.f_7 = (Local_738.f_7 + iVar16);
																			func_683();
																		}
																	}
																	if (Local_738.f_11 == 0)
																	{
																		Local_738.f_11 = unk_0xDA84A1E29323722E();
																	}
																	unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
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
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6, iVar10))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_271, iVar10))
						{
							if (unk_0x2137828D03306CAF(Var0.f_0))
							{
								if (unk_0x82DF3B947FC3E281(Var0.f_0))
								{
									if (unk_0xD0BCF9877CD72A3F(Local_121.f_73[iVar10]))
									{
										if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar10])))
										{
											if (unk_0x761AC59E782D169D(Var0.f_0) == unk_0xECBE9D2902B2B964(Local_121.f_73[iVar10]))
											{
												if (unk_0xD3B21CE53AA7BE51(Var0.f_0) == joaat("savage"))
												{
													if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
													{
														if (Var0.f_3)
														{
															if (unk_0x2137828D03306CAF(Var0.f_1))
															{
																if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
																{
																	iVar14 = unk_0xC3A7AD90290CA72E(Var0.f_1);
																	if (unk_0xDB61DD81432BD145(iVar14))
																	{
																		if (iVar14 == unk_0x2A5EB8B0FE590B91())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
																				{
																					iVar11 = func_42(joaat("savage"));
																					Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 = (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 + iVar11);
																					iVar16 = func_687();
																					iVar16 = (iVar16 * iVar11);
																					if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																					{
																						func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																						Local_738.f_7 = (Local_738.f_7 + iVar16);
																						func_683();
																						if (Local_738.f_11 == 0)
																						{
																							Local_738.f_11 = unk_0xDA84A1E29323722E();
																						}
																					}
																					iVar19 = iVar10 * 4;
																					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																					unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar10);
																				}
																			}
																		}
																	}
																	else if (func_690(iVar10))
																	{
																		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
																		{
																			iVar11 = func_42(joaat("savage"));
																			Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 = (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 + iVar11);
																			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																			{
																				iVar16 = func_687();
																				iVar16 = (iVar16 * iVar11);
																				Local_738.f_7 = (Local_738.f_7 + iVar16);
																				func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																				func_683();
																				if (Local_738.f_11 == 0)
																				{
																					Local_738.f_11 = unk_0xDA84A1E29323722E();
																				}
																			}
																			iVar19 = iVar10 * 4;
																			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar10);
																		}
																	}
																	else if (func_689(iVar10))
																	{
																	}
																	else if (unk_0x4CF5038218F9A596(iVar20, Var0.f_0, &uVar21))
																	{
																		if (iVar20 == unk_0x0FFED3E94261A832())
																		{
																			if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
																			{
																				iVar11 = func_42(joaat("savage"));
																				Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 = (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 + iVar11);
																				if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																				{
																					iVar16 = func_687();
																					iVar16 = (iVar16 * iVar11);
																					Local_738.f_7 = (Local_738.f_7 + iVar16);
																					func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																					func_683();
																					if (Local_738.f_11 == 0)
																					{
																						Local_738.f_11 = unk_0xDA84A1E29323722E();
																					}
																				}
																				iVar19 = iVar10 * 4;
																				unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19)]), func_85(iVar19));
																				unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 1)]), func_85(iVar19 + 1));
																				unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 2)]), func_85(iVar19 + 2));
																				unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar19 + 3)]), func_85(iVar19 + 3));
																				unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_6), iVar10);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0x2137828D03306CAF(Var0.f_1))
															{
																if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
																{
																	iVar14 = unk_0xC3A7AD90290CA72E(Var0.f_1);
																	if (unk_0xDB61DD81432BD145(iVar14))
																	{
																		if (iVar14 == unk_0x2A5EB8B0FE590B91())
																		{
																			iVar12 = unk_0xDA84A1E29323722E();
																			Local_755[unk_0x88641E5BC172153A() /*18*/].f_11[iVar10] = iVar12;
																		}
																	}
																}
															}
															if (!unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(Var0.f_0), 0))
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
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_272[func_86(iVar10)], func_85(iVar10)))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar10)], func_85(iVar10)))
					{
						if (unk_0x2137828D03306CAF(Var0.f_0))
						{
							if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
							{
								if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar10]))
								{
									if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_121.f_48[iVar10])))
									{
										if (unk_0xC3A7AD90290CA72E(Var0.f_0) == unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar10]))
										{
											if (Var0.f_3)
											{
												if (unk_0x2137828D03306CAF(Var0.f_1))
												{
													if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
													{
														iVar14 = unk_0xC3A7AD90290CA72E(Var0.f_1);
														if (unk_0xDB61DD81432BD145(iVar14))
														{
															if (iVar14 == unk_0x2A5EB8B0FE590B91())
															{
																if (Var0.f_3)
																{
																	if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_17 < 2)
																	{
																		Local_755[unk_0x88641E5BC172153A() /*18*/].f_8++;
																		if (Local_755[unk_0x88641E5BC172153A() /*18*/].f_8 <= func_685())
																		{
																			iVar16 = func_687();
																			Local_738.f_7 = (Local_738.f_7 + iVar16);
																			if (Local_738.f_11 == 0)
																			{
																				Local_738.f_11 = unk_0xDA84A1E29323722E();
																			}
																			func_684(0, "", -875716015, 153786435, iVar16, 1, -1, 0);
																			func_683();
																		}
																	}
																	unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
																}
															}
														}
													}
												}
												else
												{
													unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_3[func_86(iVar10)]), func_85(iVar10));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar10]))
				{
				}
				iVar10++;
			}
		}
	}
}

int func_697(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar1]))
			{
				if (unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_698()
{
	int iVar0;
	int iVar1;
	
	if (Local_121.f_27 != joaat("hydra"))
	{
		if (iLocal_3729 == 0)
		{
			iLocal_3729 = 20;
		}
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iLocal_3729]))
		{
			if (!func_31(Local_121.f_48[iLocal_3729]))
			{
				iVar0 = unk_0x216645823720875A(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iLocal_3729]));
				if (iLocal_3730[iLocal_3729] != iVar0)
				{
					iLocal_3730[iLocal_3729] = iVar0;
					unk_0xE82E0BF24586F04D(Local_121.f_48[iLocal_3729], 1);
				}
			}
		}
		iLocal_3729++;
		if (iLocal_3729 == 23)
		{
			iLocal_3729 = 20;
		}
	}
	if (Local_121.f_27 != joaat("hydra") && Local_121.f_27 != joaat("rhino"))
	{
		if (!bLocal_3762)
		{
			if (func_93() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_73[iVar1]))
					{
						if (func_104(Local_121.f_73[iVar1]))
						{
							if (unk_0xD3B21CE53AA7BE51(unk_0xECBE9D2902B2B964(Local_121.f_73[iVar1])) == joaat("savage"))
							{
								unk_0xE82E0BF24586F04D(Local_121.f_73[iVar1], 1);
								bLocal_3762 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_73[iLocal_3755]))
	{
		if (func_104(Local_121.f_73[iLocal_3755]))
		{
			iVar0 = unk_0x216645823720875A(unk_0xC09E9E2B61AD04E7(Local_121.f_73[iLocal_3755]));
			if (iLocal_3756[iLocal_3755] != iVar0)
			{
				iLocal_3756[iLocal_3755] = iVar0;
				if (!bLocal_3762)
				{
					unk_0xE82E0BF24586F04D(Local_121.f_73[iLocal_3755], 1);
				}
			}
		}
	}
	iLocal_3755++;
	if (iLocal_3755 == 5)
	{
		iLocal_3755 = 0;
	}
}

void func_699()
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
		if (unk_0xAA4F14DA15DB0B51(uLocal_3673, iVar0))
		{
			if (Local_121.f_85[iVar0] != 2)
			{
				unk_0x507FE690B1271947(&iLocal_3673, iVar0);
			}
		}
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_48[iVar0]))
		{
			func_703(iVar0);
			if (!func_31(Local_121.f_48[iVar0]))
			{
				switch (Local_121.f_85[iVar0])
				{
					case 1:
						if (unk_0x434105A1C45F1BED(Local_121.f_48[iVar0]))
						{
							if (unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 0))
							{
								uVar2 = unk_0x0C20E539D876C5B3(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 0);
								uVar1 = unk_0xD3B21CE53AA7BE51(uVar2);
								if (unk_0x0F93427D94EAEAA2(uVar1))
								{
									if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1273030092) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0x8F8E5C33266ED978(iVar2, -1, 0) == unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_6())
											{
												uVar10 = unk_0x1E199569E0295838(iVar9);
												if (!unk_0x769F0F6444C1ABE0(uVar10))
												{
													if (func_26(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { unk_0xD1EE0E9FCD74A37B(iVar10, 1) };
														unk_0x9CD13E23F5D54507(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0xDA6E804770521A18(iVar1))
								{
									if (unk_0x8F8E5C33266ED978(iVar2, -1, 0) == unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1273030092) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1334[iVar14] != Local_121.f_110[iVar14]))
									{
										if (unk_0x8F8E5C33266ED978(iVar2, -1, 0) == unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]))
										{
											iVar13 = Local_121.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = unk_0x7C214DA899F05536(iVar13);
												if (iVar9 != func_6())
												{
													iVar10 = unk_0x1E199569E0295838(iVar9);
													if (!unk_0x769F0F6444C1ABE0(iVar10))
													{
														Var3 = { unk_0xD1EE0E9FCD74A37B(iVar10, 1) };
														unk_0x3D82DADEB1753CD5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 100, 50);
														if (iLocal_1334[iVar14] != Local_121.f_110[iVar14])
														{
															iLocal_1334[iVar14] = Local_121.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1273030092) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1273030092) != 0) && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 1306903184) != 0) && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0x8F8E5C33266ED978(iVar2, -1, 0) == unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]))
									{
										iVar9 = func_27();
										if (iVar9 != func_6())
										{
											iVar10 = unk_0x1E199569E0295838(iVar9);
											if (!unk_0x769F0F6444C1ABE0(iVar10))
											{
												fVar11 = func_26(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													unk_0xDFAE18F7048583B6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), unk_0xD1EE0E9FCD74A37B(iVar10, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													unk_0x8C6A1F8B258BDF97(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x434105A1C45F1BED(Local_121.f_48[iVar0]))
						{
							if (!func_23())
							{
								if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1442466670) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 0))
									{
										if (!unk_0xAA4F14DA15DB0B51(iLocal_3673, iVar0))
										{
											iVar12 = func_702(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0xAA4F14DA15DB0B51(iLocal_3673, iVar0))
											{
												func_701(iVar0, func_99(1));
												unk_0xF6082E2ADA1C795B(&iLocal_3673, iVar0);
											}
										}
									}
									else
									{
										unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -251125078) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_700() };
							unk_0x654FFF4D16298AC5(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]));
							unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), 1);
							unk_0x07A44999F605B530(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iVar0]), Var6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_700()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
		{
			return unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_121.f_30[0 /*3*/];
}

void func_701(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 277586189;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 3, iParam1);
	}
}

int func_702(int iParam0, float fParam1)
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
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar3]))
		{
			if (func_104(Local_121.f_7[iVar3]))
			{
				iVar7 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar3]), -1, 0);
				if (!unk_0x769F0F6444C1ABE0(iVar7))
				{
					if (unk_0xDB61DD81432BD145(iVar7))
					{
						Var4 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar3]), 1) };
						fVar2 = func_503(iParam0, Var4, 1);
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

void func_703(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_31(Local_121.f_48[iParam0]))
	{
		if (unk_0x434105A1C45F1BED(Local_121.f_48[iParam0]))
		{
			if (unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0])))
			{
				uVar0 = unk_0x0C20E539D876C5B3(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0]), 0);
				if (unk_0xDA6E804770521A18(unk_0xD3B21CE53AA7BE51(uVar0)) || unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(iVar0)))
				{
					if (!unk_0x7FAC45D56235AB39(iVar0, 0))
					{
						unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_48[iParam0]), 5);
					}
				}
			}
		}
	}
}

void func_704(struct<3> Param0)
{
	Global_1574379.f_6 = { Param0 };
}

bool func_705()
{
	return unk_0xAA4F14DA15DB0B51(Local_121.f_3, 8);
}

void func_706(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_707("kwUfKUus6EuQyNSL8KpY-w");
					func_707("yMTOFLfO2UKwzKrmgPP7kg");
					func_707("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_707("tP5HSeCA0UiHnkRzakdO2Q");
					func_707("uEkrqoerQEmQ0uZRtp4rkw");
					func_707("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_707("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_707("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_707("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_707("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_707("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_707("uEkrqoerQEmQ0uZRtp4rkw");
					func_707("92t91kL3Wkqvl2Kc82cNSA");
					func_707("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_707("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_707("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_707("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_707("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_707("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_707("fOfm7nzMLkav0ldcSCNAzA");
					func_707("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_707("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_707("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_707("Ma78E44OMkGfYPmCPZXUNA");
					func_707("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_707("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_707("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_707("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_707("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_707("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_707("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_707("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_707("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_707("3AAj-muvN0iHI5IMyGlboA");
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
							func_707("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_707("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_707("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_707("fOfm7nzMLkav0ldcSCNAzA");
							func_707("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_707("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_707("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_707("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_707("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_707("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_707("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_707("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_707("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_707("fOfm7nzMLkav0ldcSCNAzA");
							func_707("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_707("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_707("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_707("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_707("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_707("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_707("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_707("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_707("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_707("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_707("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_707("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_707("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_707("aGBjo2rKi0yMDLl3a2ATGA");
									func_707("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_707("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_707("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_707("f2lnL6wZPkGWUowu0yLm1Q");
									func_707("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_707("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_707("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_707("W-OJzHlM-0ym9PsIASYZtw");
									func_707("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_707("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_707("TjGz31AMYE6bGCjAIitu6w");
									func_707("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_707("QmlvLMLCwkOvoZlkAstYxw");
									func_707("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_707("BktATxH9R0Wp2x0kWSbqjw");
									func_707("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_707("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_707("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_707("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_707("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_707("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_707("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_707("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_707("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_707("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_707("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_707(char* sParam0)
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
			if (func_708(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
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

int func_708(var uParam0)
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
			Var0 = { func_709(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_709(var uParam0)
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

void func_710()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 12))
	{
		func_187();
	}
	if (func_705())
	{
		if (iLocal_3663 != Local_121.f_12)
		{
			iLocal_3663 = Local_121.f_12;
			func_187();
		}
	}
	if (!func_195())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_1344[iVar0]))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
				{
					if (func_104(Local_121.f_7[iVar0]))
					{
						Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0) };
						if (!func_711(iVar0, Var1))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_13, iVar0))
							{
								uLocal_1344[iVar0] = unk_0x9E3A324AB806771E(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]));
								unk_0x9FD1808EF916E312(uLocal_1344[iVar0], 429);
								func_189(&(uLocal_1344[iVar0]), 29);
								if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 20))
								{
									unk_0xA4F6216A8431C2E8(uLocal_1344[iVar0], 1);
									unk_0x43FC07DB1C2FA4B3(uLocal_1344[iVar0], 7000);
									unk_0xF6082E2ADA1C795B(&iLocal_1332, 20);
								}
								unk_0x697F84823ACFF84C(uLocal_1344[iVar0], 9);
								if (func_705())
								{
									unk_0xA6B842B66643C116(uLocal_1344[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0xA6B842B66643C116(uLocal_1344[iVar0], "UW_BLIP");
								}
								if (!unk_0xAA4F14DA15DB0B51(iLocal_1333, 3))
								{
									unk_0x847E5C2DF89423C1();
									unk_0xF6082E2ADA1C795B(&iLocal_1333, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
			{
				if (!func_104(Local_121.f_7[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_1344[iVar0]));
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_13, iVar0))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_1344[iVar0]));
				}
			}
			else
			{
				unk_0x789C84F1B8496AD0(&(uLocal_1344[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_187();
	}
}

int func_711(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_7[iVar0]))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_7[iVar0]), 0) };
				if (func_66(Param1, Var1, 0))
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_1344[iVar0]))
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

int func_712()
{
	return Local_121.f_0;
}

int func_713(int iParam0)
{
	return Local_755[iParam0 /*18*/];
}

void func_714()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 6))
	{
		func_433();
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 6);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 7))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 4) || unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 16))
		{
			if (((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_345()) && func_802(unk_0x0FFED3E94261A832(), 1, 1))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 7);
				func_408("FME_PASINT", 30000);
				func_407(1);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 17))
		{
			if (func_237() && !func_232())
			{
				unk_0x507FE690B1271947(&(Global_1574379.f_1), 17);
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 16);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 23))
	{
		if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_802(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x6235C49EA2DBA22D())
		{
			if (func_737())
			{
				func_408("AMEV_GA_RP", -1);
				if (func_332(unk_0x0FFED3E94261A832()) != 200)
				{
					func_407(1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 23);
			}
		}
	}
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_226(unk_0x0FFED3E94261A832()))
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
		if ((((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_345()) && func_802(unk_0x0FFED3E94261A832(), 1, 1)) && !func_198(unk_0x0FFED3E94261A832(), 21))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 9);
			func_736(0);
			func_408("FME_TBL00", -1);
			func_407(1);
		}
	}
	if (func_239(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 18))
		{
			if ((func_198(unk_0x0FFED3E94261A832(), 21) && unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 20)) && !unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 19))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 18);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 18))
		{
			if (((((!unk_0x6B7E3D3B66456AA8() && !unk_0x6235C49EA2DBA22D()) && !func_345()) && func_802(unk_0x0FFED3E94261A832(), 1, 1)) && unk_0x0B21CC5276C2CE1B()) && !Global_2497344.f_4762)
			{
				unk_0x507FE690B1271947(&(Global_1574379.f_1), 18);
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 19);
				func_408("AMTT_RPAS", -1);
				func_407(1);
			}
		}
	}
	if (((((func_239(unk_0x0FFED3E94261A832()) && !func_197(unk_0x0FFED3E94261A832())) && func_185(unk_0x0FFED3E94261A832()) != 146) && !func_196(unk_0x0FFED3E94261A832())) && !func_735(unk_0x0FFED3E94261A832())) && !func_725())
	{
		if (func_633(func_185(unk_0x0FFED3E94261A832())))
		{
			unk_0xAA5F36A70B643256(unk_0x0FFED3E94261A832());
		}
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 22))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 22);
		}
		if (func_227(unk_0x0FFED3E94261A832()) || func_631())
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 10))
			{
				if (func_723(func_185(unk_0x0FFED3E94261A832())))
				{
					if (func_566(0) && !Global_2391043)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_431(1);
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
					}
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 10);
			}
		}
		if (func_226(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 11))
			{
				if (!Global_91829.f_8)
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 12);
					func_429(1);
				}
				if (!func_722())
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 13);
					func_632();
				}
				if (!Global_2391043)
				{
					unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 14);
					if (func_566(0) && !Global_2391043)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 9);
					}
					func_431(1);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 11);
			}
		}
		else
		{
			func_720(0);
		}
	}
	else
	{
		func_720(1);
	}
	func_715();
	if (func_630(func_185(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 21))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 21);
	}
	if ((func_237() && !func_232()) || func_198(unk_0x0FFED3E94261A832(), 21))
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

void func_715()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_345())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_500(iVar2))
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
				func_716(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 26))
	{
		func_101(&(Global_1574379.f_22));
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 26);
	}
}

void func_716(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1574379.f_22)))
	{
		func_20(&(Global_1574379.f_22), 0, 0);
	}
	else if (func_19(&(Global_1574379.f_22), iParam1, 0))
	{
		if (func_393() > 0)
		{
			func_719(iParam0);
			if (func_639("AMEV_LBD_HELP"))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
			func_101(&(Global_1574379.f_22));
		}
	}
	else
	{
		func_718(0);
		func_717();
	}
}

void func_717()
{
	Global_2497344.f_4451 = 0;
}

void func_718(int iParam0)
{
	Global_1351508.f_68 = iParam0;
}

void func_719(int iParam0)
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

void func_720(int iParam0)
{
	if ((unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 11) || (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 10) && iParam0)) || (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 22) && iParam0))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 12))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 12);
			func_429(0);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 13))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 13);
			func_721();
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_233(unk_0x0FFED3E94261A832(), 0))
		{
			unk_0x507FE690B1271947(&(Global_1574379.f_1), 14);
			func_431(0);
		}
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 11);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 10);
		unk_0x507FE690B1271947(&(Global_1574379.f_1), 22);
	}
}

void func_721()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4667), 0);
}

bool func_722()
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4667, 0);
}

int func_723(int iParam0)
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
			return func_226(unk_0x0FFED3E94261A832());
		
		case 133:
			return (func_631() || func_724(func_184()));
		
		default:
	}
	return 0;
}

int func_724(int iParam0)
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

int func_725()
{
	if (((((((((func_734() || func_733()) || func_732()) || func_177()) || (func_731() && !unk_0x1B154DE2D4606530())) || (func_728() && !func_727())) || Global_2394683) || Global_2394683.f_1 != 0) || Global_2394756 != 0) || (func_726() == 2 && !unk_0x1B154DE2D4606530()))
	{
		return 1;
	}
	return 0;
}

int func_726()
{
	return Global_979818;
}

bool func_727()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 27);
}

int func_728()
{
	if (func_730() || func_729())
	{
		return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 == 8;
	}
	return 0;
}

var func_729()
{
	return Global_2445217.f_614;
}

bool func_730()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

bool func_731()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 5);
}

bool func_732()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

bool func_733()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

bool func_734()
{
	return Global_2445217.f_578;
}

bool func_735(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		if ((func_237() && !func_232()) || func_198(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		if (func_22(&(Global_1574379.f_13)))
		{
			if (!func_19(&(Global_1574379.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_101(&(Global_1574379.f_13));
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9);
}

void func_736(int iParam0)
{
	int iVar0;
	
	iVar0 = func_254(2519, -1, 0);
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
	func_464(2519, iVar0, -1, 1, 0);
}

int func_737()
{
	int iVar0;
	
	if (!func_22(&(Global_1574379.f_15)))
	{
		func_20(&(Global_1574379.f_15), 0, 0);
		Global_1574379.f_17 = 0;
	}
	else if (func_19(&(Global_1574379.f_15), 1000, 0))
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(Global_1574379.f_17)))
		{
			iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Global_1574379.f_17));
			if (unk_0x885F483F34E47503(iVar0))
			{
				if (func_802(iVar0, 1, 1) && func_738(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_58(unk_0x0FFED3E94261A832()), func_58(iVar0)) < 80f)
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
			func_101(&(Global_1574379.f_15));
		}
	}
	return 0;
}

int func_738(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_468(iParam0))
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

bool func_739()
{
	return Global_1574379.f_24;
}

bool func_740(int iParam0)
{
	return !func_741(iParam0);
}

int func_741(int iParam0)
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
			if (func_198(unk_0x0FFED3E94261A832(), 7))
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
			if (func_198(unk_0x0FFED3E94261A832(), 7))
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
			if (func_198(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_742(4))
			{
				return 0;
			}
			if (func_198(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_742(4))
			{
				return 0;
			}
			if (func_198(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_742(4))
			{
				return 0;
			}
			if (func_198(unk_0x0FFED3E94261A832(), 7))
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
			if (func_742(4))
			{
				return 0;
			}
			if (func_198(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_742(4))
			{
				return 0;
			}
			if (func_198(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_742(4))
			{
				return 0;
			}
			if (func_198(unk_0x0FFED3E94261A832(), 7))
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

int func_742(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_802(unk_0x7C214DA899F05536(iVar0), 0, 1))
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

int func_743()
{
	var uVar0;
	
	func_747(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_746())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_745())
	{
		return 1;
	}
	if (func_744(157))
	{
		if (!func_734())
		{
			return 1;
		}
	}
	if (func_744(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_424() != 0)
	{
		if (unk_0x09952BA662A7629B(func_424()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_744(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_745()
{
	return Global_2454709;
}

bool func_746()
{
	return Global_2445217.f_573;
}

void func_747(var uParam0)
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
					func_748(iVar0);
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

void func_748(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_802(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_749(uVar4, &bVar5))
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

int func_749(int iParam0, var uParam1)
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

void func_750()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_751()
{
	int iVar0;
	
	func_187();
	if (func_712() == 4 && Local_121.f_27 != 0)
	{
		unk_0x02E663D7DDAE8202(Local_121.f_27, 0);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_4508), 1);
	func_638(19, 0);
	func_624(0);
	if (unk_0x88641E5BC172153A() != -1)
	{
		func_756(129, 0, unk_0xAA4F14DA15DB0B51(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2, 8));
	}
	func_755(129);
	unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 184, 0);
	unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 151, 1);
	unk_0xFBC4596E19752537(1f);
	if (iLocal_1342 > 0)
	{
		unk_0xE0125DCD8DB3EFC3(iLocal_1342);
	}
	if (unk_0x0FFED3E94261A832() != -1)
	{
		if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 129)
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/] = -1;
		}
	}
	if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == iLocal_1542)
	{
		unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_1544);
	}
	func_754();
	func_200(0, 129);
	if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 22))
	{
		func_436();
		unk_0x507FE690B1271947(&iLocal_1332, 22);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1332, 9))
	{
		unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1332, 10))
		{
			unk_0x988197573BDAD49A("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1343 != -100f)
	{
		func_506(0, 0);
		unk_0x2B8C2CE4B857E60B(fLocal_1343);
	}
	func_505(0);
	if (func_743())
	{
		Local_738.f_5 = 5;
	}
	else if (func_586(2, 0, 0, 0, 0))
	{
		Local_738.f_5 = 6;
	}
	else if (Local_738.f_5 != 1)
	{
		Local_738.f_5 = 2;
	}
	unk_0xDC0343058D861402(uLocal_3670);
	Local_738.f_0 = Local_121.f_611;
	Local_738.f_1 = Local_121.f_612;
	Local_738.f_4 = Local_121.f_613;
	Local_738.f_3 = Local_121.f_615;
	if (Local_738.f_9 > 0)
	{
		Local_738.f_10 = (unk_0xDA84A1E29323722E() - Local_738.f_9);
	}
	if ((!Global_262145.f_10161 && !unk_0xAA4F14DA15DB0B51(Local_121.f_3, 8)) || (!Global_262145.f_10162 && unk_0xAA4F14DA15DB0B51(Local_121.f_3, 8)))
	{
		if (Local_738.f_6 > 0)
		{
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1333, 1))
	{
		func_644(1);
		unk_0x0E76FE9D6BA1007D(0, 0);
	}
	if (iVar0 == 0)
	{
		func_753(Local_738, Local_121.f_27, Local_121.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x88641E5BC172153A() != -1)
	{
		func_753(Local_738, Local_121.f_279, Local_755[unk_0x88641E5BC172153A() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_398(unk_0x0FFED3E94261A832()))
	{
		func_603(0);
	}
	func_623(0);
	func_668(1);
	func_752();
}

void func_752()
{
	unk_0xA232817B0B36F2E5();
}

void func_753(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
		else if (unk_0x35302CD5A5D37EED(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x1BFD81725890FE16(&Var14);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xF3E387DE7804E755(&Var28);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_challenges"))
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
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_penned_in"))
		{
			unk_0xDB781DB9C232EAD6(&Param0);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x9E58BCF1884E0E01(&Var66);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xA5019E62FE9FEDA7(&Var79);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x01876C8ABC66C46F(&Var93);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x713A4A8D7D95D21D(&Var107);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xBEFCFE9DF0E86F20(&Var123);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "AM_KILL_LIST"))
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
		else if (unk_0x35302CD5A5D37EED(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xCD7D4855D6DCE0F3(&Var164);
		}
	}
}

void func_754()
{
	unk_0x28BD561DA3E207B1(iLocal_1543);
	unk_0x28BD561DA3E207B1(iLocal_1542);
}

void func_755(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_756(int iParam0, bool bParam1, bool bParam2)
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
	func_787();
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
	unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_786(func_185(unk_0x0FFED3E94261A832()));
		func_638(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x0FFED3E94261A832() != -1) && func_785(unk_0x0FFED3E94261A832()) >= 12)
		{
			func_784(2531, -1);
			iVar1 = func_254(2531, -1, 0);
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
		func_643();
		func_783();
		func_782();
		if ((!func_225(unk_0x0FFED3E94261A832()) && !func_223(unk_0x0FFED3E94261A832())) && !func_781())
		{
			func_763();
		}
		func_762();
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0) && !unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 1))
		{
			func_433();
		}
		func_761();
		unk_0x507FE690B1271947(&(Global_2497344.f_1703), 2);
		func_521();
		func_760();
	}
	if (unk_0x440E77FA46936F83(1344549371))
	{
		unk_0x74B42EAFF204A87F(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x0FFED3E94261A832() != -1 && !func_198(unk_0x0FFED3E94261A832(), 21)) && !func_233(unk_0x0FFED3E94261A832(), 0))
		{
			func_431(0);
			func_429(0);
			func_759();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_590(26, -1))
		{
			Global_2456868 = -1;
			func_588(26, -1);
		}
	}
	if (!func_757())
	{
		Global_2484463 = 1;
	}
}

int func_757()
{
	if (((!func_373(unk_0x0FFED3E94261A832()) && !func_354(unk_0x0FFED3E94261A832())) && func_185(unk_0x0FFED3E94261A832()) != 146) && !func_758())
	{
		return 0;
	}
	return 1;
}

int func_758()
{
	if ((Global_1638223 == 0 && unk_0x1B154DE2D4606530()) && (((((((Global_1638223.f_5 != 0 || Global_1638223.f_112772 > 0) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 15)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 18)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 19)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 29)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 28)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_759()
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

void func_760()
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_7 = 0;
}

void func_761()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574379 = { Var0 };
}

void func_762()
{
	var uVar0;
	
	Global_1316425 = uVar0;
}

void func_763()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_779();
	func_766(1, 1);
	func_764();
}

void func_764()
{
	func_765(0, 0);
}

void func_765(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_766(bool bParam0, bool bParam1)
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
		func_778();
	}
	func_769(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_768(0);
	func_767();
}

void func_767()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_768(bool bParam0)
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

void func_769(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_777())
		{
			func_776();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_774();
		func_773(8, 0, 0, 0, 0);
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
		func_770();
	}
}

void func_770()
{
	if (func_777() && !func_772())
	{
		func_776();
	}
	if (func_772())
	{
		func_771();
	}
	else
	{
		func_774();
		func_773(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_771()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_772()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_773(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_774()
{
	if (func_777() && !func_772())
	{
		func_776();
	}
	func_775();
	Global_2404996.f_676 = 0;
}

void func_775()
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

void func_776()
{
	if (func_772())
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

int func_777()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_778()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_779()
{
	func_780();
	Global_2404996.f_2053 = 0;
}

void func_780()
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

bool func_781()
{
	return Global_1574290;
}

void func_782()
{
	Global_2497344.f_4667 = 0;
}

void func_783()
{
	if (unk_0x0FFED3E94261A832() != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1 = 0;
	}
}

void func_784(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_254(iParam0, func_236(iParam1), 0);
	iVar0++;
	if (!func_471(iParam0))
	{
		func_464(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_465(iParam0, iVar0, iParam1, 1);
	}
}

int func_785(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_204.f_6;
}

int func_786(int iParam0)
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
			if (func_226(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_787()
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
	func_790(0);
	func_789(0);
	func_788(0);
}

void func_788(int iParam0)
{
	if (Global_2497344.f_4439 != iParam0)
	{
		Global_2497344.f_4439 = iParam0;
	}
}

void func_789(bool bParam0)
{
	if (Global_2497344.f_4438 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2497344.f_4438 = bParam0;
	}
}

void func_790(int iParam0)
{
	if (Global_2497344.f_4436 != iParam0)
	{
		Global_2497344.f_4436 = iParam0;
	}
}

void func_791(struct<21> Param0)
{
	int iVar0;
	
	func_800(func_801(Param0.f_0), Param0);
	unk_0x20DC9856B13C398C(24);
	unk_0x7E04478E16257BA0(9);
	func_799(0, -1, 0);
	func_797(129);
	unk_0x2D179B3FFCF1AADA(&Local_121, 617);
	unk_0xA5929B03CD847BE8(&Local_755, 577);
	func_796(1);
	if (!func_795())
	{
		func_751();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		if (unk_0x62E688B72E3C57B0())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_121.f_17[iVar0] = func_6();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_121.f_22[iVar0] = func_6();
				Local_121.f_256[iVar0] = -1;
				Local_121.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0xABE13CB17EB2BE02(&(Local_121.f_611), &(Local_121.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1334[iVar0] = -1;
			iVar0++;
		}
		Local_738.f_2 = unk_0xE66A798F07C5EFC7();
		Local_738.f_8 = unk_0xDA84A1E29323722E();
		func_638(19, 1);
		func_792();
		if (func_195())
		{
			unk_0xF6082E2ADA1C795B(&(Local_755[unk_0x88641E5BC172153A() /*18*/].f_2), 7);
		}
		Local_755[unk_0x88641E5BC172153A() /*18*/].f_9 = -1;
		Global_2497344.f_4753 = -1;
		Local_755[unk_0x88641E5BC172153A() /*18*/] = 0;
	}
	else
	{
		func_751();
	}
}

void func_792()
{
	int iVar0;
	
	unk_0xEE8231F61ED038B0("relUWPlayer", &iLocal_1542);
	unk_0xEE8231F61ED038B0("relUWAi", &iLocal_1543);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], iLocal_1542);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1542, Global_1574695[iVar0]);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], iLocal_1543);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1543, Global_1574695[iVar0]);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1542, joaat("COP"));
		unk_0x3A8EFBE4AB457FE2(1, joaat("COP"), iLocal_1542);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1542, Global_1574739[5]);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574739[5], iLocal_1542);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1542, Global_1574728);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574728, iLocal_1542);
		iVar0++;
	}
	unk_0x3A8EFBE4AB457FE2(5, iLocal_1542, iLocal_1543);
	unk_0x3A8EFBE4AB457FE2(5, iLocal_1543, iLocal_1542);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, iLocal_1543);
	unk_0x3A8EFBE4AB457FE2(5, 2017343592, iLocal_1542);
	func_794(1, &iLocal_1543);
	func_793(&iLocal_1543);
	func_793(&iLocal_1542);
}

void func_793(int iParam0)
{
	unk_0x3A8EFBE4AB457FE2(1, -1865950624, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1865950624);
	unk_0x3A8EFBE4AB457FE2(1, 296331235, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 296331235);
	unk_0x3A8EFBE4AB457FE2(1, 1166638144, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1166638144);
	unk_0x3A8EFBE4AB457FE2(1, 2037579709, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2037579709);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2017343592);
	unk_0x3A8EFBE4AB457FE2(1, -1821475077, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1821475077);
	unk_0x3A8EFBE4AB457FE2(1, 1782292358, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1782292358);
	unk_0x3A8EFBE4AB457FE2(1, -1033021910, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1033021910);
	unk_0x3A8EFBE4AB457FE2(1, -1285976420, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1285976420);
}

void func_794(int iParam0, int iParam1)
{
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("COP"), *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, joaat("COP"));
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("army"), *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, joaat("army"));
	unk_0x3A8EFBE4AB457FE2(iParam0, -183807561, *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, -183807561);
}

int func_795()
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
		if (func_746())
		{
			return 0;
		}
		if (func_744(155))
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

void func_796(bool bParam0)
{
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_424())
	{
		return;
	}
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_806) || Global_2415029.f_806 == unk_0xFF09208EC90C94CB())
	{
		if (bParam0)
		{
			Global_2415029.f_806 = unk_0xFF09208EC90C94CB();
		}
		else
		{
			Global_2415029.f_806 = -1;
		}
	}
}

void func_797(int iParam0)
{
	func_761();
	func_798();
	func_782();
	Global_1574379.f_4 = iParam0;
	Global_1574379.f_5 = iParam0;
	func_637(iParam0, -1);
	func_8(&(Global_1574379.f_18), 0, 0);
	Global_2497344.f_4504 = 0;
	Global_2455769[0] = func_6();
	Global_2455769[1] = func_6();
	Global_2455769[2] = func_6();
	Global_2455769[3] = func_6();
	Global_2455769[4] = func_6();
	func_760();
	func_344();
	if (func_237() && !func_232())
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 16);
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_1574379.f_1), 17);
	}
}

void func_798()
{
	var uVar0;
	
	Global_1574404 = uVar0;
}

int func_799(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_752();
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
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_746())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_744(155))
				{
					if (!bParam2)
					{
						func_752();
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
					func_752();
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
				func_752();
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
			func_752();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_800(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_752();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_801(int iParam0)
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

int func_802(int iParam0, bool bParam1, bool bParam2)
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

