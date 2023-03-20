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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44[8];
	struct<3> Local_69[1];
	int iLocal_73 = 0;
	int iLocal_74[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_81[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<165> Local_95 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	char cLocal_271[16] = "";
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	char cLocal_275[16] = "";
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	struct<3> Local_279[12];
	char cLocal_316[32] = "";
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 1132396544;
	var uLocal_327 = 1132396544;
	var uLocal_328 = 1132396544;
	var uLocal_329 = 0;
	var uLocal_330 = -1082130432;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 8;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = -1;
	var uLocal_391 = 1092616192;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	bool bLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = -1;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 1000;
	var uLocal_408 = 1000;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 1097859072;
	var uLocal_414 = 1500;
	var uLocal_415 = 45;
	var uLocal_416 = 1103626240;
	var uLocal_417 = 5;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	bool bLocal_426 = 0;
	float fLocal_427 = 0f;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	struct<3> Local_436 = { 0, 0, 0 } ;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	bool bLocal_441 = 0;
	int iLocal_442 = 0;
	bool bLocal_443 = 0;
	int iLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	int iLocal_456 = 0;
	var uLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	bool bLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	bool bLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	bool bLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	struct<6> Local_476 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_482 = NULL;
	var uLocal_483 = 16;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	int iLocal_648 = 0;
	struct<23> Local_649[53];
	struct<28> Local_1869[17];
	var uLocal_2346 = 0;
	struct<165> Local_2347 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	struct<3> Local_2530 = { 0, 0, 0 } ;
	float fLocal_2533 = 0f;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	struct<18> Local_2555[2];
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	int iLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	float fLocal_2599 = 0f;
	int iLocal_2600 = 0;
	bool bLocal_2601 = 0;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	char* sLocal_2617 = NULL;
	char* sLocal_2618 = NULL;
	char* sLocal_2619[3] = { NULL, NULL, NULL };
	char* sLocal_2623 = NULL;
	struct<3> Local_2624[1];
	struct<3> Local_2628 = { 0, 0, 0 } ;
	struct<3> Local_2631 = { 0, 0, 0 } ;
	struct<3> Local_2634 = { 0, 0, 0 } ;
	var uLocal_2637 = 9;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 7;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 15;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
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
	var uLocal_2928 = 1;
	int iLocal_2929 = 0;
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	bool bLocal_2934 = 0;
	bool bLocal_2935 = 0;
	int iLocal_2936 = 0;
	int iLocal_2937 = 0;
	bool bLocal_2938 = 0;
	bool bLocal_2939 = 0;
	int iLocal_2940 = 0;
	bool bLocal_2941 = 0;
	bool bLocal_2942 = 0;
	var uLocal_2943 = 0;
	bool bLocal_2944 = 0;
	int iLocal_2945 = 0;
	int iLocal_2946 = 0;
	bool bLocal_2947 = 0;
	int iLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	int iLocal_2953 = 0;
	var uLocal_2954 = 0;
	bool bLocal_2955 = 0;
	bool bLocal_2956 = 0;
	bool bLocal_2957 = 0;
	bool bLocal_2958 = 0;
	int iLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	int iLocal_2962 = 0;
	bool bLocal_2963 = 0;
	bool bLocal_2964 = 0;
	bool bLocal_2965 = 0;
	int iLocal_2966 = 0;
	bool bLocal_2967 = 0;
	var uLocal_2968 = 0;
	bool bLocal_2969 = 0;
	bool bLocal_2970 = 0;
	int iLocal_2971 = 0;
	bool bLocal_2972 = 0;
	int iLocal_2973 = 0;
	int iLocal_2974 = 0;
	int iLocal_2975 = 0;
	int iLocal_2976 = 0;
	int iLocal_2977 = 0;
	bool bLocal_2978 = 0;
	var uLocal_2979[2] = { 0, 0 };
	int iLocal_2982 = 0;
	int iLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	int iLocal_2986[1] = { 0 };
	var uLocal_2988[2] = { 0, 0 };
	int iLocal_2991 = 0;
	struct<2> Local_2992 = { 0, 0 } ;
	var uLocal_2994 = 0;
	struct<20> Local_2995[1];
	struct<7> Local_3016 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_3036 = 0;
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	int iLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	int iLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	int iLocal_3049 = 0;
	int iLocal_3050 = 0;
	int iLocal_3051 = 0;
	int iLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	struct<3> Local_3059 = { 0, 0, 0 } ;
	struct<3> Local_3062 = { 0, 0, 0 } ;
	float fLocal_3065 = 0f;
	float fLocal_3066 = 0f;
	char cLocal_3067[64] = "";
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	int iLocal_3083 = 0;
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
	int iLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	char* sLocal_3113 = NULL;
	int iLocal_3114 = 0;
	var uLocal_3115 = 0;
	int iLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 8;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	int iLocal_3135 = 0;
	bool bLocal_3136 = 0;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_92 = { 500f, 500f, 500f };
	fLocal_427 = 0f;
	fLocal_428 = 0f;
	fLocal_429 = 0f;
	fLocal_430 = 0.8f;
	fLocal_431 = 1.5f;
	fLocal_432 = 0.5f;
	Local_436 = { 401.55f, -1631.309f, 29.3f };
	iLocal_439 = 1;
	iLocal_440 = 1;
	iLocal_648 = joaat("towtruck");
	Local_2530 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2533 = 275.5635f;
	iLocal_2595 = -1;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	iLocal_2598 = -1;
	fLocal_2599 = 0f;
	sLocal_2617 = "";
	sLocal_2618 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2930 = 1;
	iLocal_2931 = 1;
	iLocal_2932 = 1;
	iLocal_2940 = 1;
	iLocal_2975 = 1;
	iLocal_3036 = -1;
	Local_3059 = { -229.8159f, -1172f, 21.8557f };
	iLocal_3114 = 1;
	unk_0x2DD582B35DC84774(1);
	if (unk_0x2C897F101BA20806(67))
	{
		if (!func_278())
		{
			func_276(&Global_96092, 3);
			func_249(unk_0x7E5A426328F6E635());
		}
		func_245();
	}
	if (unk_0x538DF9E5B1DF01EB(ScriptParam_0.f_0) && unk_0x538DF9E5B1DF01EB(ScriptParam_0.f_1))
	{
		if (!unk_0xE44A580B551C3645(ScriptParam_0.f_0) && !unk_0xE44A580B551C3645(ScriptParam_0.f_1))
		{
			unk_0x7B9576B4E099FB1F(ScriptParam_0.f_0, 1, 1);
			unk_0x7B9576B4E099FB1F(ScriptParam_0.f_1, 1, 1);
		}
	}
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
	func_244(&Local_649);
	func_243(&Local_1869);
	func_242();
	iVar0 = 0;
	func_241(&uLocal_3090);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_419 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2603 = iVar0;
				}
				else
				{
					iLocal_2603 = func_240(100000f, iLocal_419, Global_97439.f_18227.f_9);
				}
			}
			else
			{
				if (Global_97439.f_18227.f_3 == 0)
				{
					bLocal_2958 = true;
				}
				if (!func_239())
				{
					func_236();
				}
				else
				{
					iLocal_2603 = Global_97439.f_18227.f_9;
					iLocal_419 = Global_97439.f_18227.f_2;
				}
				ScriptParam_0.f_3 = iLocal_419;
			}
			iLocal_2991 = 0;
			break;
	}
	if (!bLocal_2958)
	{
		func_235(&Local_2347, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_419 == 0)
	{
		iLocal_2961 = 1;
		if ((Global_97439.f_18227.f_6 % 2) == 0)
		{
			bLocal_2964 = true;
		}
	}
	else if (iLocal_419 == 2)
	{
		bLocal_2965 = true;
		iLocal_2961 = 1;
	}
	if (iLocal_419 == 3 || iLocal_419 == 1)
	{
		iLocal_2960 = 1;
		iLocal_2961 = 1;
		iLocal_3050 = 1;
	}
	else if (iLocal_419 == 4)
	{
		iLocal_2961 = 1;
		iLocal_3050 = Local_1869[func_234() /*28*/].f_27;
	}
	func_233();
	func_209(&ScriptParam_0);
	if (Global_97439.f_18227.f_3 >= 5)
	{
		bLocal_2944 = true;
		bLocal_2944 = bLocal_2944;
	}
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			iLocal_3108 = ScriptParam_0.f_1;
			uVar1 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (unk_0x538DF9E5B1DF01EB(uVar1) && !unk_0xE44A580B551C3645(iVar1))
			{
				if (unk_0xA609E58449080951(iVar1) == joaat("towtruck") || unk_0xA609E58449080951(iVar1) == joaat("towtruck2"))
				{
					iLocal_3108 = iVar1;
				}
			}
		}
	}
	unk_0x7FF5364DCE67B621(0);
	unk_0xABC4F2A6D7D56CF4(0.2f);
	if (unk_0x538DF9E5B1DF01EB(iLocal_3108))
	{
		if (!unk_0xE44A580B551C3645(iLocal_3108))
		{
			unk_0x7B9576B4E099FB1F(iLocal_3108, 1, 1);
			unk_0x684B3872EC4760B0(iLocal_3108);
			unk_0x52BDA8F138779817(iLocal_3108, 0);
			unk_0xE6E4CD7E9A3DA71E(iLocal_3108, 1);
		}
	}
	uLocal_3111 = unk_0x4210B2DCFC2838AC(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_3112 = unk_0x4210B2DCFC2838AC(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	unk_0xC7210908156431E0(Local_3059 - Vector(15f, 15f, 15f), Local_3059 + Vector(15f, 15f, 15f), 0, 1);
	unk_0xD1D6EEB3AEFA757C(Local_3059 - Vector(15f, 15f, 15f), Local_3059 + Vector(15f, 15f, 15f));
	func_208();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_204(&uLocal_2655);
		func_203();
		unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
		if (bLocal_2944 && !unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xF4C685E933068D23())
			{
				unk_0x1232944746AEB20F(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!unk_0xDC7784B8DE7B58D5())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				unk_0x099E9F2D6F93D420();
				unk_0x20D6E0EA145DF751(0);
				unk_0x60365B850FB7354F(0, 1065353216);
				unk_0x597CB55BA0825820(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, 0);
				unk_0x5FE2A83120E8127F(500);
			}
		}
		if (iLocal_3114 < 15)
		{
			func_201(&iLocal_3108, &uLocal_2984, &Local_2995, &Local_2624, &cLocal_3067, &iLocal_3051, iLocal_3046, bLocal_2957, &iLocal_2966, iLocal_2948, bLocal_2938, bLocal_460, iLocal_3114, 1);
		}
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			switch (iLocal_2991)
			{
				case 0:
					if (iLocal_3114 > 4 && iLocal_3114 < 15)
					{
						if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_3108, 0))
						{
						}
						if (iLocal_419 != 2 && iLocal_419 != 4)
						{
							if (!func_198(&uLocal_3121, Local_2995[0 /*20*/].f_6, iLocal_3108, &uLocal_3041, &uLocal_3042, bLocal_2944))
							{
								iLocal_3083 = 15;
								func_245();
							}
						}
						if (bLocal_2958 || uLocal_2954)
						{
							func_197(&uLocal_3122, iLocal_3108, &uLocal_3044, &uLocal_3045, bLocal_2944);
						}
					}
					if (bLocal_2958)
					{
						if (iLocal_3114 >= 7)
						{
							func_192(iLocal_3108, Local_2995[0 /*20*/].f_6, Local_3016, &(Local_2995[0 /*20*/].f_8), &Local_2624, &cLocal_3067, &Local_436, bLocal_2958, &(Local_2995[0 /*20*/]));
						}
					}
					bLocal_2947 = false;
					if (((iLocal_419 == 0 || iLocal_419 == 2) && iLocal_3114 > 4) && iLocal_3114 < 17)
					{
						if (bLocal_2964 && iLocal_2975)
						{
							func_190();
							func_189(Local_2995[0 /*20*/].f_6, Local_2995[0 /*20*/]);
						}
						if (!bLocal_2958)
						{
							func_178();
						}
					}
					else if ((iLocal_419 == 1 && iLocal_3114 > 4) && iLocal_3114 < 17)
					{
						if (func_174())
						{
							func_171();
						}
						if (iLocal_3118 > 0)
						{
							func_167();
						}
					}
					else if (iLocal_419 == 3)
					{
						if ((iLocal_3114 == 5 && iLocal_3116 < 1) && !iLocal_2929)
						{
							if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
							{
								if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), Local_2995[0 /*20*/].f_6))
								{
									iLocal_2929 = 1;
									unk_0x937785D9C1929236(Local_2995[0 /*20*/]);
									unk_0x1CAB36EC4E43E586(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 0);
								}
							}
						}
					}
					if (iLocal_2949 && !bLocal_441)
					{
						func_163(&(Local_1869[func_234() /*28*/]), &(Local_1869[func_234() /*28*/].f_10), Local_649[iLocal_2603 /*23*/].f_1, &(Local_2995[0 /*20*/]), &(Local_2995[0 /*20*/].f_2), &uLocal_2988, fLocal_3065, sLocal_2618, &sLocal_2619, iLocal_3050);
					}
					if (iLocal_419 == 4)
					{
						func_161(&uLocal_3115, iLocal_3109, iLocal_3110, iLocal_3108, &(Local_2995[0 /*20*/].f_2), iLocal_3050, sLocal_2618, &sLocal_2619, &iLocal_2983, bLocal_2944, &(Local_2995[0 /*20*/].f_6));
					}
					if (!bLocal_2944)
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_2983) && !unk_0xE44A580B551C3645(iLocal_2983))
						{
							if (func_153(iLocal_2983, 0, &uLocal_411, &iLocal_418, 0, 1, 0, 1, 0))
							{
								bLocal_2941 = true;
								unk_0xEA36CC2E7750344B(iLocal_2983, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
							}
							if (func_151())
							{
								bLocal_2942 = true;
							}
						}
					}
					if (bLocal_441 && !bLocal_2963)
					{
						if (func_153(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, &uLocal_411, &iLocal_418, 0, 1, 1, 1, 0))
						{
							func_150();
							if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
							{
								unk_0x937785D9C1929236(Local_2995[0 /*20*/]);
								unk_0x2686393074E14730(Local_2995[0 /*20*/], 1);
								unk_0xEA36CC2E7750344B(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
								iLocal_3083 = 18;
							}
							if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_1))
							{
								unk_0x937785D9C1929236(Local_2995[0 /*20*/].f_1);
								unk_0x2686393074E14730(Local_2995[0 /*20*/].f_1, 1);
								unk_0x2AF68ED52DC74B7D(&uLocal_420);
								unk_0x6D98AA46076A68BE(&uLocal_420);
								unk_0xBB5AA994E06B28E2(0, 1, 256);
								unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
								unk_0x963BB7C99350D827(uLocal_420);
								if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_1))
								{
									unk_0x0891776D0327B77A(Local_2995[0 /*20*/].f_1, uLocal_420);
								}
								unk_0x2AF68ED52DC74B7D(&uLocal_420);
								iLocal_3083 = 18;
							}
							if (!bLocal_2958)
							{
								switch (iLocal_418)
								{
									case 16:
										if (iLocal_419 == 2)
										{
											iLocal_3083 = 17;
											func_245();
										}
										else
										{
											iLocal_3083 = 16;
											func_245();
										}
										break;
									
									case 2:
										func_149(&Local_2347, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3083 = 3;
										func_245();
										break;
								}
							}
							else
							{
								iLocal_3083 = 21;
								func_245();
							}
							if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
							{
								func_245();
							}
						}
						if (func_153(Local_2995[0 /*20*/].f_1, Local_2995[0 /*20*/].f_6, &uLocal_411, &iLocal_418, 0, 1, 0, 1, 0))
						{
							func_150();
							if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_1))
							{
								unk_0x937785D9C1929236(Local_2995[0 /*20*/].f_1);
								unk_0x2686393074E14730(Local_2995[0 /*20*/].f_1, 1);
								unk_0xEA36CC2E7750344B(Local_2995[0 /*20*/].f_1, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
								iLocal_3083 = 18;
							}
						}
					}
					else if (bLocal_2963)
					{
					}
					if (!bLocal_2947 && func_148(0))
					{
						if ((!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(iLocal_3108)) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_3108, 0))
						{
							if (!iLocal_467)
							{
								if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_6))
								{
									if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
									{
										func_132(&uLocal_398, unk_0xBF8499F46AD9093A(Local_2995[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_132(&uLocal_398, Local_2628, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_148(0))
					{
						func_131(&uLocal_398, 0, 0);
					}
					func_129(&uLocal_3093, 7f, 1);
					func_128();
					func_127();
					if (((!bLocal_466 || iLocal_3114 >= 15) || uLocal_2943) || bLocal_2938)
					{
						if (func_49())
						{
							func_43();
						}
					}
					if (iLocal_3114 == 9)
					{
						if (iLocal_419 == 1 || iLocal_419 == 3)
						{
							func_13(Local_2347, &Local_2995, &iLocal_3108);
						}
					}
					break;
			}
			if (func_1(ScriptParam_0))
			{
				func_245();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_2969)
	{
		iLocal_3083 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_3083 = 11;
		return 1;
	}
	if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_6))
	{
		if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
		{
			if (unk_0x5E8694417D361328(Local_2995[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_3083 = 15;
				return 1;
			}
		}
	}
	if (bLocal_466)
	{
		if ((unk_0x09560C7DE2A384BD() - iLocal_3051) > 50000)
		{
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_3108) && !unk_0xE44A580B551C3645(iLocal_3108))
			{
				Var3 = { unk_0xBF8499F46AD9093A(iLocal_3108, 1) };
			}
			if (unk_0xB7A628320EFF8E47(Var0, Var3) > 625f)
			{
				iLocal_3083 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2941)
	{
		iLocal_3083 = 22;
		return 1;
	}
	if (bLocal_2942)
	{
		iLocal_3083 = 23;
		return 1;
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_3108))
	{
		if (!unk_0xECFECDAD51A6184F(iLocal_3108, 0))
		{
			iLocal_3083 = 2;
			return 1;
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_3108))
	{
		if (unk_0xE44A580B551C3645(iLocal_3108))
		{
			iLocal_3083 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_3114 > 4 && iLocal_3114 < 17)
			{
				if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_6))
				{
					if (unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
					{
						iLocal_3083 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_419)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_441)
					{
						if (!bLocal_2963)
						{
							if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/]))
							{
								if (unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
								{
									iLocal_3083 = 8;
									return 1;
								}
							}
						}
						if (bLocal_2964)
						{
							if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_1))
							{
								if (unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_1))
								{
									iLocal_3083 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
	{
		iLocal_3083 = 3;
		return 1;
	}
	if (!unk_0x8B8942079F200B57(iLocal_3108))
	{
		unk_0x684B3872EC4760B0(iLocal_3108);
	}
	else if (unk_0x02AE016A85A33AB4(iLocal_3108))
	{
		iLocal_3083 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_2950)
	{
		if (func_3(&uLocal_3099, 180f))
		{
			iLocal_2950 = 1;
			func_149(&Local_2347, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_3099, 300f))
	{
		if (iLocal_419 != 2)
		{
			iLocal_3083 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_7(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_419 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3114 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(Local_2624[0 /*3*/]))
	{
		if (!iLocal_2951)
		{
			if (func_9(Local_2624[0 /*3*/], 0) > (fLocal_429 + 400f))
			{
				func_149(&Local_2347, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2951 = 1;
			}
		}
		if (func_9(Local_2624[0 /*3*/], 0) > (fLocal_429 + 450f))
		{
			iLocal_3083 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, int iParam3)
{
	return func_10(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), Param0, iParam3);
}

float func_10(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xE44A580B551C3645(uParam0))
	{
		return -1f;
	}
	return unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam0, 1), Param1, iParam4);
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_90094.f_290 > 0;
}

void func_13(struct<165> Param0, int iParam165, int iParam166)
{
	if (!iLocal_462)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (iLocal_2604 > 1)
			{
				if (func_42(iParam165, iParam166))
				{
					if (func_41())
					{
						Local_476 = { func_40() };
						func_38();
						iLocal_462 = 1;
						iLocal_2604 = 3;
					}
					else
					{
						iLocal_462 = 1;
						iLocal_2604 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2604)
	{
		case 0:
			if (!func_41())
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_2604 = 1;
			}
			break;
		
		case 1:
			if ((unk_0x83666F9FB8FEBD4B() > 3000 && iLocal_467) && !func_37("TOWT_OBJ_04", 0, 0))
			{
				if (!func_41())
				{
					func_235(&Param0, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					if (unk_0x16CDA1894CFE0781(joaat("tonya3")) == 1 || unk_0x16CDA1894CFE0781(joaat("tonya4")) == 1)
					{
						if (iLocal_419 == 1)
						{
							func_149(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_482 = "TOW_TRN_C1";
						}
						else if (iLocal_419 == 3)
						{
							func_149(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_C";
						}
						bLocal_463 = true;
					}
					else if (iLocal_419 == 1)
					{
						if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
						{
							func_235(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_482 = "TOW_MECH";
						}
						else if (Global_97439.f_18227.f_5 == 2)
						{
							func_235(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_482 = "TOW_MECH2";
						}
						else
						{
							func_36(Param0, iParam165);
						}
						bLocal_463 = true;
					}
					else if (iLocal_419 == 3)
					{
						if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
						{
							func_235(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_CONV";
						}
						else if (Global_97439.f_18227.f_7 == 2)
						{
							func_235(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_CON2";
						}
						else
						{
							func_35(Param0, iParam165);
						}
						bLocal_463 = true;
					}
				}
				else if (func_33(sLocal_482))
				{
					iLocal_2604 = 2;
				}
			}
			break;
		
		case 3:
			func_32(Param0, iParam165);
			if (iLocal_464)
			{
				iLocal_2604 = 2;
			}
			break;
		
		case 2:
			if (func_31(iParam166))
			{
				if (bLocal_463)
				{
					if (iLocal_462)
					{
						if (!func_41())
						{
							if (func_14(&Local_2347, "TOWAUD", sLocal_482, &Local_476, 8, 0, 0))
							{
								iLocal_462 = 0;
								iLocal_2604 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_31(iParam166);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_29();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_27();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_20();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_19())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_18())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_17();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_16();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_29();
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_17()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_18()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_20()
{
	if (func_26(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_21();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

int func_21()
{
	func_22();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_25(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_24(unk_0xA16EC202D9D35357());
			if (func_23(iVar0) && (!func_26(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_23(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_29()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_31(var uParam0)
{
	switch (iLocal_2605)
	{
		case 1:
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0 && !unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
			{
				iLocal_464 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(*uParam0))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), *uParam0, 0))
				{
					iLocal_464 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_2605)
	{
		case 1:
			if (unk_0x16CDA1894CFE0781(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0x90EAE1C90152FA2D(unk_0x1788E93557766241());
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0x90EAE1C90152FA2D(unk_0x1788E93557766241());
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_7 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x16CDA1894CFE0781(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_7 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x16CDA1894CFE0781(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_7 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x16CDA1894CFE0781(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_7 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_33(char* sParam0)
{
	var uVar0;
	
	if (func_41())
	{
		MemCopy(&uVar0, {func_34()}, 4);
		if (unk_0x9BA82E09A986BA4B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_34()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0x444ECD635D5FD45F(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH4";
	}
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_482 = "TOW_GEN_MCH2";
}

bool func_37(char* sParam0, int iParam1, int iParam2)
{
	unk_0xA5FA652414A5B56F(sParam0);
	if (iParam1 == 1)
	{
		unk_0x4498E0CBD76B2D72(iParam2);
	}
	return unk_0x516C4E27C3C5FFAD();
}

void func_38()
{
	Global_14559 = 0;
	func_39();
}

void func_39()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

struct<6> func_40()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x8E904BB26E98BDB0();
		iVar6 = (iVar6 + Global_16703);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xC929DDA58687736B(&(Global_14561[iVar7 /*6*/])))
			{
				return Global_14561[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xC929DDA58687736B(&(Global_14561[iVar8 /*6*/])))
					{
						return Global_14561[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_41()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1)
{
	if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0 || unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x87A6D0A35BD971FB(unk_0x1788E93557766241()))
		{
			unk_0x90EAE1C90152FA2D(unk_0x1788E93557766241());
		}
		iLocal_2605 = 1;
		return 1;
	}
	if ((unk_0x538DF9E5B1DF01EB((uParam0[0 /*20*/])->f_6) && !unk_0xE44A580B551C3645((uParam0[0 /*20*/])->f_6)) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (!bLocal_426)
		{
			if ((unk_0xBF8ADDCADFC4691E((uParam0[0 /*20*/])->f_6, unk_0xA16EC202D9D35357(), 1) || unk_0x3EBEB227491853A1((uParam0[0 /*20*/])->f_6)) || unk_0xE1D540101EC17933((uParam0[0 /*20*/])->f_6))
			{
				iLocal_2605 = 2;
				return 1;
			}
		}
	}
	if ((unk_0x538DF9E5B1DF01EB((*uParam0)[0 /*20*/]) && !unk_0xE44A580B551C3645((*uParam0)[0 /*20*/])) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xBF8ADDCADFC4691E(unk_0xA16EC202D9D35357(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_2605 = 4;
			return 1;
		}
	}
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(*uParam1))
	{
		if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), *uParam1, 0))
		{
			iLocal_2605 = 6;
			return 1;
		}
	}
	return 0;
}

void func_43()
{
	func_47(&Global_96092, 3);
	func_276(&(Global_97439.f_18227.f_1), 8192);
	func_44();
	func_171();
}

void func_44()
{
	func_45();
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_47(var uParam0, int iParam1)
{
	func_48(uParam0, iParam1);
}

void func_48(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_49()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar6;
	var uVar9;
	
	switch (iLocal_3114)
	{
		case 1:
			func_126(14);
			if (iLocal_419 == 3)
			{
				if (func_124(&Local_3062, &fLocal_3065, &uLocal_3053, &uLocal_3056))
				{
					iLocal_3114 = 2;
				}
			}
			else
			{
				iLocal_3114 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xCE3402BDFD2ADED8())
			{
				switch (iLocal_419)
				{
					case 3:
						func_235(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2347, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 2:
						func_235(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2347, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 0:
						func_235(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2964)
						{
							if (func_149(&Local_2347, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3114 = 4;
							}
						}
						else if (func_149(&Local_2347, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 1:
						func_235(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2347, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 4:
						func_235(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2347, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_419)
			{
				case 3:
					if (func_117("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
						{
							unk_0x542B8BF5C21F2470(Local_2995[0 /*20*/].f_6, 10);
						}
						func_115();
						func_241(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 2:
					if (func_117("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2631 = { (Local_2624[0 /*3*/] + 15f), (Local_2624[0 /*3*/].f_1 + 15f), (Local_2624[0 /*3*/].f_2 + 15f) };
						Local_2634 = { (Local_2624[0 /*3*/] - 15f), (Local_2624[0 /*3*/].f_1 - 15f), (Local_2624[0 /*3*/].f_2 - 15f) };
						unk_0xC7210908156431E0(Local_2631, Local_2634, 0, 1);
						iLocal_2962 = 1;
						unk_0xB337120ACC9DC929(Local_2995[0 /*20*/].f_6, 1);
						func_241(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 0:
					if (func_117("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_241(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 1:
					if (func_117("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0xB337120ACC9DC929(Local_2995[0 /*20*/].f_6, 1);
						func_115();
						unk_0xDEA972D2C0A2FAD4(0);
						func_114(0, 0);
						func_114(1, 0);
						func_114(2, 0);
						func_114(3, 0);
						func_114(4, 0);
						func_114(5, 0);
						func_114(6, 0);
						func_114(7, 0);
						func_114(8, 0);
						func_114(9, 0);
						func_114(10, 0);
						func_114(11, 0);
						iLocal_2959 = 1;
						func_241(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 4:
					if (func_117("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0xB337120ACC9DC929(Local_2995[0 /*20*/].f_6, 1);
						func_115();
						func_241(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_8))
			{
				if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/].f_8 = unk_0xDF78B7F06503567E(Local_2995[0 /*20*/].f_6);
					unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_8, 3);
					unk_0xF1D09F0F8B016765(Local_2995[0 /*20*/].f_8, 1);
				}
			}
			break;
		
		case 5:
			func_109();
			if (func_101(&iLocal_3116, 0, "TOW_BREAK1"))
			{
				iLocal_3114 = 7;
			}
			break;
		
		case 6:
			if (!func_41())
			{
				func_100(sLocal_3113, 7500, 1);
				StringCopy(&cLocal_3067, sLocal_3113, 64);
				if (iLocal_419 == 3)
				{
					iLocal_3114 = 5;
				}
				else
				{
					iLocal_3114 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_419)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_2628))
					{
						Local_2628 = { Local_69[0 /*3*/] };
					}
					func_99(8, &Local_3016);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_419 == 1 && !unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], iLocal_3108, 0))
			{
				bLocal_2956 = true;
			}
			func_98();
			if (func_91(sVar2, Local_2628))
			{
				if (iLocal_419 == 1 && !unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], iLocal_3108, 0))
				{
					bLocal_2956 = false;
					iLocal_2952 = 1;
					if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/]))
					{
						Local_2995[0 /*20*/].f_9 = unk_0xDF78B7F06503567E(Local_2995[0 /*20*/]);
						unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_9, 3);
						unk_0xBE97A5A41C1F5C4C(Local_2995[0 /*20*/].f_9, 0.7f);
					}
					iLocal_3114 = 5;
				}
				else
				{
					iLocal_3114 = 9;
				}
			}
			if (func_89(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2934 = true;
				iLocal_3114 = 9;
			}
			break;
		
		case 9:
			if (iLocal_419 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_88(sVar2))
			{
				func_131(&uLocal_398, 0, 0);
				unk_0x58E0272CBA220320(Local_2995[0 /*20*/].f_6, 0, 0);
				if (iLocal_3037 == 0)
				{
					iLocal_2940 = 0;
					iLocal_3114 = 15;
				}
				else
				{
					func_100("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3067, "TOWT_OBJ_05", 64);
					iLocal_3114 = 7;
				}
			}
			break;
		
		case 15:
			func_87();
			if (bLocal_2938)
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_2984))
				{
					unk_0xB6FB9702660D84F6(&uLocal_2984);
				}
			}
			unk_0xFD1E0AEC770DAF2E(1);
			fLocal_428 = (fLocal_428 + 500f);
			if (iLocal_469 != 0 && !bLocal_2934)
			{
				if (bLocal_2944)
				{
					if ((unk_0x09560C7DE2A384BD() - iLocal_469) < 12000)
					{
						fLocal_428 = (fLocal_428 + 50f);
					}
				}
			}
			if (!bLocal_2944)
			{
				fLocal_428 = 0f;
			}
			fLocal_3066 = func_4(&uLocal_3090);
			fLocal_3066 = (fLocal_3066 * 1000f);
			iVar1 = unk_0xF2DB717A73826179(fLocal_3066);
			unk_0xF8F5E34D0F34D715(iVar1, 14, 0);
			if (iLocal_419 != 2)
			{
			}
			if (bLocal_2944)
			{
				fLocal_428 = (fLocal_428 - fLocal_427);
			}
			iLocal_471 = unk_0xF2DB717A73826179(fLocal_428);
			func_86(&uLocal_2607, "TOW_UI07", 500, unk_0xF2DB717A73826179(fLocal_427), unk_0xF2DB717A73826179(fLocal_428), "TOW_UI08", 4000, 1);
			if (iLocal_471 > 0)
			{
				func_56(0, iLocal_471);
			}
			func_55(1);
			iLocal_3114 = 16;
			break;
		
		case 16:
			if (unk_0xDFB4F36E24D3B10B())
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			if (!func_50(&uLocal_2607, 0))
			{
				unk_0x82C6F6D9893237F0("TOW_TUT_04A");
				unk_0x82C6F6D9893237F0("TOWT_OBJ_03Ga");
				iLocal_3114 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_69[0 /*3*/] = { Local_69[0 /*3*/] };
	return 0;
}

int func_50(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_53(&(uParam0->f_2));
	}
	unk_0x8A5A9834DB717F2D(14);
	unk_0x27BDF28219C810BA(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x1453F50088A91E4E(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_53(&(uParam0->f_5));
				func_52(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_4(&(uParam0->f_5)) > 0.33f)
			{
				func_51(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_53(&(uParam0->f_5));
			func_52(uParam0, 1051260355);
		}
		else if (func_4(&(uParam0->f_5)) > 0.33f)
		{
			func_51(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_52(var uParam0, int iParam1)
{
	unk_0xB067107D878E9585(*uParam0, "SHARD_ANIM_OUT");
	unk_0x26221D1D76579618(uParam0->f_9);
	unk_0x50050D925C27B388(iParam1);
	unk_0xD3DF251F2DF3B257();
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55(bool bParam0)
{
	char* sVar0;
	
	unk_0x6D073A8BCDE701F6(0);
	switch (func_21())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xBD8105692CD43A56(sVar0);
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	func_58(Global_97439.f_28101[iParam0 /*4*/], func_85(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_97439.f_28101.f_69 = (Global_97439.f_28101.f_69 + iParam1);
			break;
		
		case 2:
			Global_97439.f_28101.f_70 = (Global_97439.f_28101.f_70 + iParam1);
			break;
		
		case 0:
			Global_97439.f_28101.f_71 = (Global_97439.f_28101.f_71 + iParam1);
			break;
	}
	unk_0x3ED04C9A60CBD249(func_57(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(func_57(iParam0, 1), iVar0, 1);
}

int func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_59(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_84();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_83(99, 1);
					func_82(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_67(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_66(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_66(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_66(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_65(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_83(95, iParam3);
					break;
				
				case 1:
					func_83(97, iParam3);
					break;
				
				case 2:
					func_83(96, iParam3);
					break;
			}
			func_83(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_62(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_62(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_82(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_61(iParam0);
	if (Global_34915 == 15)
	{
		func_60(0);
	}
	return 1;
}

void func_60(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_62(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_64() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_64() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_63(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_65(int iParam0)
{
	func_83(93, iParam0);
	func_83(29, iParam0);
	func_83(30, iParam0);
}

bool func_66(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_64() /*8064*/].f_5756.f_10, iParam0);
}

int func_67(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_81(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_68(27, 1);
	return 1;
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_69(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1)
{
	if (func_26(14) && !func_80(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_79(&Global_2542838))
	{
		if (func_77(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_70(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_80(iParam1))
	{
		return 0;
	}
	if (func_77(uParam0, iParam1))
	{
		return 0;
	}
	if (func_76(uParam0) < 0f)
	{
		func_75(uParam0, 0);
	}
	func_73(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_71(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_71(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_80(iParam1))
	{
		return 0;
	}
	if (func_77(uParam0, iParam1))
	{
		return 0;
	}
	if (func_76(uParam0) < 0f)
	{
		func_75(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_72(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_73(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_74(uParam0, iVar0);
		iVar0++;
	}
	func_75(uParam0, (Global_2542837 - 0.5f));
}

void func_74(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_75(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_76(var uParam0)
{
	return uParam0->f_72;
}

bool func_77(var uParam0, int iParam1)
{
	return func_78(uParam0, iParam1) != -1;
}

int func_78(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_79(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_84()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 97;
			break;
		
		case 1:
			return 98;
			break;
		
		case 2:
			return 99;
			break;
		
		case 3:
			return 100;
			break;
		
		case 4:
			return 101;
			break;
		
		case 5:
			return 102;
			break;
		
		case 6:
			return 103;
			break;
		
		case 7:
			return 104;
			break;
		
		case 8:
			return 105;
			break;
		
		case 9:
			return 106;
			break;
		
		case 10:
			return 107;
			break;
		
		case 11:
			return 108;
			break;
		
		case 12:
			return 109;
			break;
		
		case 13:
			return 110;
			break;
		
		case 14:
			return 111;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_86(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0xB067107D878E9585(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x61329A2F1E63248B(iParam7);
	unk_0x4498E0CBD76B2D72(sParam1);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xEBC0B3BDAD1250BE(sParam5);
	unk_0x53B64327E3305DCB(iParam2);
	unk_0x53B64327E3305DCB(iParam3);
	unk_0x53B64327E3305DCB(iParam4);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xD3DF251F2DF3B257();
	func_53(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

void func_87()
{
	Global_97439.f_18227.f_3++;
	Global_97439.f_18227.f_2 = iLocal_419;
	switch (iLocal_419)
	{
		case 2:
			Global_97439.f_18227.f_4++;
			break;
		
		case 3:
			Global_97439.f_18227.f_7++;
			break;
		
		case 0:
			Global_97439.f_18227.f_6++;
			break;
		
		case 1:
			Global_97439.f_18227.f_5++;
			break;
		
		case 4:
			Global_97439.f_18227.f_8++;
			break;
	}
}

int func_88(char* sParam0)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar7;
	
	if (iLocal_3036 == -1)
	{
	}
	if (Local_2995[iLocal_3036 /*20*/].f_15)
	{
		if ((func_4(&(Local_2995[iLocal_3036 /*20*/].f_11)) - Local_2995[iLocal_3036 /*20*/].f_14) > 120f)
		{
			unk_0x1BA44265D2A4897B(Local_2995[iLocal_3036 /*20*/].f_6, 1, 0);
		}
	}
	if (func_89(&uVar0, &uVar3, &uVar6))
	{
		if (!unk_0xE44A580B551C3645(Local_2995[iLocal_3036 /*20*/]) && unk_0xAD203DB71ADF6E57(Local_2995[iLocal_3036 /*20*/], iLocal_3108, 0))
		{
			unk_0x7DDC5160036EE766(iLocal_3108, 6f, 2, 0);
			iLocal_465 = 1;
			if (unk_0x538DF9E5B1DF01EB(Local_2995[iLocal_3036 /*20*/]) && !unk_0xE44A580B551C3645(Local_2995[iLocal_3036 /*20*/]))
			{
				unk_0x6D98AA46076A68BE(&uLocal_420);
				unk_0x574CC08ACCB0F5FC(0);
				unk_0xBB5AA994E06B28E2(0, 0, 0);
				unk_0x72201360F71A4D8A(0, Local_2995[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (unk_0x444ECD635D5FD45F(0, 65535) % 3);
				if (iVar7 == 0)
				{
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar7 == 1)
				{
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar7 == 2)
				{
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				unk_0x963BB7C99350D827(uLocal_420);
				unk_0x0891776D0327B77A(Local_2995[iLocal_3036 /*20*/], uLocal_420);
				unk_0x2AF68ED52DC74B7D(&uLocal_420);
				unk_0x2686393074E14730(Local_2995[iLocal_3036 /*20*/], 1);
			}
			if ((Global_97439.f_18227.f_3 == 0 || Global_97439.f_18227.f_3 == 1) || Global_97439.f_18227.f_3 == 4)
			{
				if (unk_0x538DF9E5B1DF01EB(iLocal_2983) && !unk_0xE44A580B551C3645(iLocal_2983))
				{
					unk_0x6D98AA46076A68BE(&uLocal_420);
					unk_0xBB5AA994E06B28E2(0, 0, 0);
					unk_0xAC9F22F89987627B(0, 227.082f, 0);
					unk_0x963BB7C99350D827(uLocal_420);
					if (!unk_0xE44A580B551C3645(iLocal_2983))
					{
						unk_0x0891776D0327B77A(iLocal_2983, uLocal_420);
						unk_0x2686393074E14730(iLocal_2983, 1);
					}
					unk_0x2AF68ED52DC74B7D(&uLocal_420);
				}
			}
			if (func_41())
			{
				func_150();
			}
			if ((Global_97439.f_18227.f_3 == 0 || Global_97439.f_18227.f_3 == 1) || Global_97439.f_18227.f_3 == 4)
			{
				if (Global_97439.f_18227.f_3 == 0)
				{
					func_149(&Local_2347, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_97439.f_18227.f_3 == 1)
				{
					func_149(&Local_2347, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_97439.f_18227.f_3 == 4)
				{
					func_149(&Local_2347, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
				{
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_97439.f_18227.f_7 == 2)
				{
					func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2958)
		{
		}
		iLocal_467 = 0;
		unk_0xB6FB9702660D84F6(&(Local_2995[iLocal_3036 /*20*/].f_8));
		func_53(&uLocal_3087);
		iLocal_3037 = (iLocal_3037 - 1);
		return 1;
	}
	if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[iLocal_3036 /*20*/].f_6))
	{
		if (!unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6))
		{
			iLocal_467 = 0;
			func_131(&uLocal_398, 0, 0);
			unk_0xF1D09F0F8B016765(Local_2995[iLocal_3036 /*20*/].f_8, 0);
			unk_0xB6FB9702660D84F6(&(Local_2995[iLocal_3036 /*20*/].f_8));
			if (unk_0x538DF9E5B1DF01EB(Local_2995[iLocal_3036 /*20*/].f_6) && !unk_0xE44A580B551C3645(Local_2995[iLocal_3036 /*20*/].f_6))
			{
				if (!unk_0x5660C8AFDD9C1721(Local_2995[iLocal_3036 /*20*/].f_8))
				{
					Local_2995[iLocal_3036 /*20*/].f_8 = unk_0xDF78B7F06503567E(Local_2995[iLocal_3036 /*20*/].f_6);
					unk_0x1AD45E3CF020D50D(Local_2995[iLocal_3036 /*20*/].f_8, 3);
				}
			}
			if (iLocal_419 == 1)
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_2977)
					{
						if (func_149(&Local_2347, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2977)
					{
						if (func_149(&Local_2347, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_2977)
					{
						if (func_149(&Local_2347, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
				else if (Global_97439.f_18227.f_7 == 2)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2977)
					{
						if (func_149(&Local_2347, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
			}
			func_53(&uLocal_3087);
			if (!bLocal_2956)
			{
				if (func_41())
				{
					unk_0x0D68C13151B68364(1);
					unk_0xEDC11454B9658FE1();
					func_100(sParam0, 7500, 1);
				}
				if (!func_41())
				{
					if (iLocal_2930)
					{
						unk_0xEDC11454B9658FE1();
						func_100(sParam0, 7500, 1);
						iLocal_2930 = 0;
					}
					else
					{
						unk_0xEDC11454B9658FE1();
						func_100(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3067, sParam0, 64);
				}
			}
			iLocal_3114 = 7;
		}
	}
	return 0;
}

int func_89(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_3036 != -1)
	{
		if (!func_11(Local_3016.f_14))
		{
			Local_2628 = { Local_3016.f_14 };
			*uParam0 = { Local_3016.f_7 };
			*uParam1 = { Local_3016.f_10 };
			*uParam2 = Local_3016.f_13;
		}
		else
		{
			*uParam0 = { Local_3016 };
			*uParam1 = { Local_3016.f_3 };
			*uParam2 = Local_3016.f_6;
		}
		if (!bLocal_2958)
		{
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_2628, 30f, 30f, 2f, 1, 1, 0))
				{
					if (iLocal_419 == 0 || iLocal_419 == 4)
					{
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
						{
							unk_0x542B8BF5C21F2470(Local_2995[0 /*20*/].f_6, 1);
							bLocal_2938 = true;
						}
					}
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(Local_2995[iLocal_3036 /*20*/].f_6))
		{
			if (unk_0x0852C405AF94F670(Local_2995[iLocal_3036 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_2940)
				{
					func_90("TOWT_HELP_UH", -1);
				}
				if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[iLocal_3036 /*20*/].f_6))
				{
					if (!unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6) || (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Local_2995[iLocal_3036 /*20*/].f_6, 0) && !unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6)))
					{
						if (func_41())
						{
							func_150();
						}
						func_131(&uLocal_398, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_90(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_91(char* sParam0, struct<3> Param1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_2944 && !bLocal_2955)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_3108) && !unk_0xE44A580B551C3645(iLocal_3108))
		{
			iVar2 = unk_0x5D1B2D92490B1F5F(iLocal_3108);
			if (unk_0x538DF9E5B1DF01EB(iVar2) && !unk_0xE44A580B551C3645(iVar2))
			{
				if (unk_0x9FF5D51C24AD2308(iVar2))
				{
					if (unk_0xF22EE5E4C0C2704B(iVar2) != Local_2995[0 /*20*/].f_6)
					{
						if (!iLocal_2971)
						{
							func_235(&uLocal_483, 3, iLocal_2983, "TONYA", 0, 1);
							if (func_149(&uLocal_483, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_2971 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2971 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_2995[iVar1 /*20*/].f_6))
		{
			if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[iVar1 /*20*/].f_6))
			{
				if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[iVar1 /*20*/].f_6) && func_97())
				{
					unk_0x426C3D44449AE9F1(iLocal_3108, 1);
					func_94();
					func_131(&uLocal_398, 0, 0);
					iLocal_467 = 1;
					if (iLocal_2960 && !unk_0xAD203DB71ADF6E57(Local_2995[iVar1 /*20*/], iLocal_3108, 0))
					{
						bVar0 = false;
						if (iLocal_3119 < 4)
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_3119 = 5;
						}
					}
					if (bVar0)
					{
						func_93(&uLocal_3093);
						unk_0xF1D09F0F8B016765(Local_2995[iVar1 /*20*/].f_8, 0);
						iLocal_2966 = 0;
						func_92(Local_2995[iVar1 /*20*/].f_8);
						Local_2995[iVar1 /*20*/].f_14 = func_4(&(Local_2995[iVar1 /*20*/].f_11));
						if (iLocal_2991 == 0)
						{
							Local_2995[iVar1 /*20*/].f_8 = unk_0x64F646E6A974BF18(Param1);
							fLocal_429 = func_9(Param1, 0);
							Local_2624[0 /*3*/] = { Param1 };
						}
						if (iLocal_419 == 4)
						{
							unk_0x048CB31CFEFF3599(Local_2995[0 /*20*/].f_6, 0, 0);
						}
						func_53(&uLocal_3099);
						unk_0x1AD45E3CF020D50D(Local_2995[iVar1 /*20*/].f_8, 5);
						unk_0xF1D09F0F8B016765(Local_2995[iVar1 /*20*/].f_8, 1);
						if (iLocal_419 == 0 && bLocal_2964)
						{
						}
						else if (iLocal_2931)
						{
							func_100(sParam0, 7500, 1);
							iLocal_2931 = 0;
						}
						StringCopy(&cLocal_3067, sParam0, 64);
						unk_0x597CB55BA0825820(Local_2624[0 /*3*/], 6f, 0, 0, 0, 0, 0);
						iLocal_3036 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_92(var uParam0)
{
	if (unk_0x5660C8AFDD9C1721(uParam0))
	{
		unk_0xB6FB9702660D84F6(&uParam0);
	}
}

void func_93(var uParam0)
{
	func_51(uParam0);
	StringCopy(&cLocal_316, "", 32);
}

void func_94()
{
	func_95("TOW_TUT_03");
	func_95("TOW_TUT_02");
	func_95("TOW_TUT_01");
	unk_0x82C6F6D9893237F0("TOWT_OBJ_03");
	unk_0x82C6F6D9893237F0("TOWT_OBJ_03a");
	unk_0x82C6F6D9893237F0("TOWT_OBJ_03G");
	unk_0x82C6F6D9893237F0("TOWT_OBJ_03Ga");
	unk_0x82C6F6D9893237F0("TOWT_OBJS_03");
}

void func_95(char* sParam0)
{
	if (func_96(sParam0))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
}

bool func_96(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

int func_97()
{
	if (bLocal_2958)
	{
		if (bLocal_2601 && !func_41())
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

void func_98()
{
	int iVar0;
	
	if (((!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6)) && unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6)) || (Global_97439.f_18227.f_3 == 0 || Global_97439.f_18227.f_3 > 2))
	{
		return;
	}
	switch (iLocal_3049)
	{
		case 0:
			if (!func_7(&uLocal_3105))
			{
				func_241(&uLocal_3105);
				iLocal_3049 = 1;
			}
			break;
		
		case 1:
			if (func_7(&uLocal_3105))
			{
				if (func_4(&uLocal_3105) > 10f)
				{
					if (!unk_0xDFB4F36E24D3B10B() && !func_41())
					{
						iVar0 = (unk_0x444ECD635D5FD45F(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_90("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_90("TOW_TUT_02", -1);
						}
						else
						{
							func_90("TOW_TUT_04C", -1);
						}
						func_53(&uLocal_3105);
						iLocal_3049 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_3105))
			{
				if (func_4(&uLocal_3105) > 15f)
				{
					if (!unk_0xDFB4F36E24D3B10B() && !func_41())
					{
						func_90("TOW_TUT_03", -1);
						func_53(&uLocal_3105);
						iLocal_3049 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&uLocal_3105))
			{
				if (func_4(&uLocal_3105) > 15f)
				{
					if (!unk_0xDFB4F36E24D3B10B() && !func_41())
					{
						func_90("TOW_TUT_01", -1);
						iLocal_3049 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_99(int iParam0, var uParam1)
{
	if (func_11(Local_44[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_44[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_44[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_44[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_44[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_44[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_44[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_44[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_44[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_69[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_100(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8E9A80E27DB553E5(sParam0);
	unk_0x6E070B8EEA199511(iParam1, 1);
}

int func_101(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2957)
			{
				if ((func_108(Local_2995[iParam1 /*20*/].f_6, iLocal_3108, &iLocal_2602, 10, 150f, 4f, 1) || iLocal_2952) || iLocal_467)
				{
					if (!bLocal_2935)
					{
						iLocal_2602 = 0;
						func_107(&iLocal_2597);
						if (unk_0x221AC1EF116F6053(Local_2995[iParam1 /*20*/], -875674219) != 1)
						{
							unk_0x1CAB36EC4E43E586(Local_2995[iParam1 /*20*/], unk_0xA16EC202D9D35357(), -1);
						}
						bLocal_2935 = true;
					}
					if (bLocal_2935)
					{
						if (unk_0x965556ACF6A83973(iLocal_3108, unk_0xBF8499F46AD9093A(Local_2995[iParam1 /*20*/], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (unk_0x95EDB2DEFA5BB405(Local_2995[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0x5A8C213A1384C077(Local_2995[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_106())
							{
								if (iLocal_419 == 1)
								{
									if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
									{
										func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
										func_235(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_149(&Local_2347, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_97439.f_18227.f_5 == 2)
									{
										func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
										func_235(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_149(&Local_2347, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0xA34C986DDC3D92F1(Local_2995[iParam1 /*20*/], iLocal_3108, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_419 == 3)
								{
									if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
									{
										func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
										func_235(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_149(&Local_2347, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_97439.f_18227.f_7 == 2)
									{
										func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
										func_235(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_149(&Local_2347, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0xA34C986DDC3D92F1(Local_2995[iParam1 /*20*/], iLocal_3108, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_2952)
								{
									unk_0xB6FB9702660D84F6(&(Local_2995[iParam1 /*20*/].f_8));
									if (unk_0x538DF9E5B1DF01EB(Local_2995[iParam1 /*20*/]))
									{
										Local_2995[iParam1 /*20*/].f_8 = unk_0xDF78B7F06503567E(Local_2995[iParam1 /*20*/]);
										unk_0x1AD45E3CF020D50D(Local_2995[iParam1 /*20*/].f_8, 3);
										unk_0xBE97A5A41C1F5C4C(Local_2995[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								*iParam0 = 1;
							}
						}
						else if (unk_0x965556ACF6A83973(iLocal_3108, unk_0xBF8499F46AD9093A(Local_2995[iParam1 /*20*/], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_2976)
							{
								if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
								{
									func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
									func_235(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_149(&Local_2347, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2976 = 1;
									}
								}
								else if (Global_97439.f_18227.f_7 == 2)
								{
									func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
									func_235(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_149(&Local_2347, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_2976 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2939 = true;
			func_53(&uLocal_3099);
			func_53(&uLocal_3084);
			func_92(Local_2995[iParam1 /*20*/].f_8);
			if (!unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_9))
			{
				if (unk_0x538DF9E5B1DF01EB(Local_2995[iParam1 /*20*/]))
				{
					Local_2995[0 /*20*/].f_9 = unk_0xDF78B7F06503567E(Local_2995[iParam1 /*20*/]);
					unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_9, 3);
					unk_0xBE97A5A41C1F5C4C(Local_2995[0 /*20*/].f_9, 0.7f);
				}
			}
			func_100("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0x0B29CE7F19BFE6C0("TOWBUDDIES", &uLocal_2994);
			unk_0x2966D41514EAE84B(1, uLocal_2994, joaat("player"));
			unk_0xA9465591B42213AE(Local_2995[iParam1 /*20*/], uLocal_2994);
			func_105(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0xAD203DB71ADF6E57(Local_2995[iParam1 /*20*/], iLocal_3108, 0))
			{
				if (func_102(&uLocal_3123, Local_2995[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_3083 = 11;
					func_245();
				}
			}
			if (unk_0xAD203DB71ADF6E57(Local_2995[iParam1 /*20*/], iLocal_3108, 0))
			{
				if (!unk_0xE44A580B551C3645(iLocal_3108))
				{
					unk_0x542B8BF5C21F2470(iLocal_3108, 9);
					func_92(Local_2995[0 /*20*/].f_9);
				}
			}
			if (unk_0xAD203DB71ADF6E57(Local_2995[iParam1 /*20*/], iLocal_3108, 0) && !unk_0xD47B332729054512())
			{
				if (iLocal_419 == 1)
				{
					if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
					{
						if (iLocal_2952)
						{
							func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_97439.f_18227.f_5 == 2)
					{
						if (iLocal_2952)
						{
							func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_419 == 3)
				{
					if (Global_97439.f_18227.f_7 == 0 || Global_97439.f_18227.f_7 == 1)
					{
						if (iLocal_2952)
						{
							func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_97439.f_18227.f_7 == 2)
					{
						if (iLocal_2952)
						{
							func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_149(&Local_2347, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xAD203DB71ADF6E57(Local_2995[iParam1 /*20*/], iLocal_3108, 0))
			{
				func_105(iParam1);
				if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
				{
					if (iLocal_2952 && unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_8))
				{
					if (unk_0x538DF9E5B1DF01EB(Local_2995[iParam1 /*20*/].f_6) && !unk_0xE44A580B551C3645(Local_2995[iParam1 /*20*/].f_6))
					{
						Local_2995[0 /*20*/].f_8 = unk_0xDF78B7F06503567E(Local_2995[iParam1 /*20*/].f_6);
						unk_0x1AD45E3CF020D50D(Local_2995[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
				{
					if (!unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						func_100("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3067, "TOWT_OBJ_03", 64);
					}
				}
				func_53(&uLocal_3084);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_102(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = unk_0x09560C7DE2A384BD();
			uParam0->f_2 = func_103(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			if (!unk_0xE44A580B551C3645(iParam1))
			{
				Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
			}
			if (unk_0xB7A628320EFF8E47(Var0, Var3) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_103(int iParam0, int iParam1)
{
	return func_104(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), iParam0, iParam1);
}

float func_104(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

void func_105(int iParam0)
{
	int iVar0;
	
	bLocal_2957 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x5660C8AFDD9C1721(Local_2995[iVar0 /*20*/].f_8))
			{
				unk_0xB6FB9702660D84F6(&(Local_2995[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_106()
{
	float fVar0;
	
	if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
	{
		if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
		{
			fVar0 = unk_0x5AF66EDEBFA76B9B(iLocal_3108);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_107(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x7CB5477E93D6A302(*iParam0);
		unk_0x0D992EF9B9F0C8E3(*iParam0);
		*iParam0 = -1;
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	var uVar0;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0xA34B85701D8A1FA8(iParam0))
		{
			uVar0 = unk_0xA7CC89FF539E1376(iParam0);
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(uVar0) && unk_0x2DE0B96E966FD817(iVar0))
		{
			return 0;
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0x538DF9E5B1DF01EB(iParam1))
	{
		if (!unk_0xE44A580B551C3645(iParam0) && !unk_0xE44A580B551C3645(iParam1))
		{
			if (bParam6)
			{
			}
			if (!unk_0x0E7E162F5A49FAAA(iParam0) && func_103(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_103(iParam0, 1) < 8f) && unk_0x5AF66EDEBFA76B9B(iParam1) < fParam5) && !unk_0x0E7E162F5A49FAAA(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_109()
{
	int iVar0;
	
	if (!bLocal_2939)
	{
		iVar0 = unk_0xF2DB717A73826179(((300f - func_113(&uLocal_3099)) * 1000f));
		if (iLocal_419 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_110(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			else
			{
				func_110(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_110(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_112(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_111(7, iVar0);
		Global_1328903.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3911.f_172[iVar0] = iParam2;
		Global_1328903.f_3911.f_216[iVar0] = iParam3;
		Global_1328903.f_3911.f_183[iVar0] = iParam4;
		Global_1328903.f_3911.f_194[iVar0] = iParam5;
		Global_1328903.f_3911.f_249[iVar0] = iParam6;
		Global_1328903.f_3911.f_260[iVar0] = iParam7;
		Global_1328903.f_3911.f_205[iVar0] = iParam8;
		Global_1328903.f_3911.f_314[iVar0] = iParam9;
		Global_1328903.f_3911.f_325[iVar0] = iParam10;
		Global_1328903.f_3911.f_357[iVar0] = iParam11;
		Global_1328903.f_3911.f_238[iVar0] = iParam12;
		Global_1328903.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_111(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_112(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

float func_113(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_114(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_96079, iParam0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_96079, iParam0);
	}
	Global_96078 = 1;
}

void func_115()
{
	int iVar0;
	
	iVar0 = func_116(&Local_44, Local_2624[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_2628 = { Local_44[iVar0 /*3*/] };
		func_99(iVar0, &Local_3016);
	}
	else
	{
		Local_2628 = { Local_44[0 /*3*/] };
	}
}

int func_116(var uParam0, struct<3> Param1, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = unk_0xB7A628320EFF8E47(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_117(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_429 = func_9(Local_3062, 0);
	Local_2624[0 /*3*/] = { Local_3062 };
	sLocal_3113 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_123(Local_3062, fLocal_3065, uParam2, 0))
		{
			func_122(Local_2995[0 /*20*/].f_6, &uLocal_3041, &uLocal_3043);
			unk_0x92405E137A38311E(Local_2995[0 /*20*/].f_6, 1);
			unk_0xB4226393A1696ACE(Local_2995[0 /*20*/].f_6, 0);
			unk_0xDD56EF930C7A5863(Local_2995[0 /*20*/].f_6, 1);
			unk_0xE6E4CD7E9A3DA71E(Local_2995[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_118(bParam4, 0))
	{
		func_122(Local_2995[0 /*20*/].f_6, &uLocal_3041, &uLocal_3043);
		unk_0x92405E137A38311E(Local_2995[0 /*20*/].f_6, 1);
		unk_0xB4226393A1696ACE(Local_2995[0 /*20*/].f_6, 0);
		unk_0xDD56EF930C7A5863(Local_2995[0 /*20*/].f_6, 1);
		unk_0xE6E4CD7E9A3DA71E(Local_2995[0 /*20*/].f_6, 1);
		return 1;
	}
	return 0;
}

int func_118(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_120(Local_649[iLocal_2603 /*23*/].f_1, Local_649[iLocal_2603 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_429 = func_9(Local_649[iLocal_2603 /*23*/].f_1, 0);
	Local_2624[0 /*3*/] = { Local_649[iLocal_2603 /*23*/].f_1 };
	if (Local_649[iLocal_2603 /*23*/] == 2)
	{
		unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_649[iLocal_2603 /*23*/] == 4)
	{
		fLocal_3065 = -1f;
		iLocal_2949 = 1;
		iLocal_3109 = unk_0x9BB6F54E415071A1(joaat("ambulance"), Local_1869[func_234() /*28*/].f_23, Local_1869[func_234() /*28*/].f_26, 1, 1);
		if (!unk_0xE44A580B551C3645(iLocal_3109))
		{
			unk_0x426C3D44449AE9F1(iLocal_3109, 1);
			unk_0x6EBB9B0E214CCF0F(iLocal_3109, 1, 1);
			iLocal_3110 = unk_0x793482A351850A4F(iLocal_3109, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
		}
		if (!func_11(Local_1869[func_234() /*28*/].f_17))
		{
			uLocal_2346 = func_119(Local_1869[func_234() /*28*/].f_17, Local_1869[func_234() /*28*/].f_20);
		}
		switch (Local_649[iLocal_2603 /*23*/].f_21)
		{
			case 1:
				unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				unk_0x69542DE06E708D80(Local_2995[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		unk_0x38A205E419E42642(Local_2995[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_441 = true;
		if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
		{
			Local_2995[0 /*20*/] = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, 1, 1);
		}
		else if (Global_97439.f_18227.f_5 == 2)
		{
			Local_2995[0 /*20*/] = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
		}
		else
		{
			Local_2995[0 /*20*/] = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], -1, 1, 1);
		}
	}
	return 1;
}

var func_119(struct<3> Param0, struct<3> Param3)
{
	unk_0xF003F4333EDCC0BE(Param0, Param3);
	unk_0x9D92F25226C3ECED(Param0, Param3, 1);
	return unk_0x4210B2DCFC2838AC(Param0, Param3, 0, 1, 1, 1);
}

int func_120(struct<3> Param0, var uParam3, int iParam4, bool bParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = func_121(&Local_2995);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_3038 >= 2)
	{
		iLocal_3038 = 0;
	}
	Local_2995[*iParam4 /*20*/].f_6 = unk_0x9BB6F54E415071A1(iLocal_2986[iLocal_3038], Param0, uParam3, 1, 1);
	unk_0xDD56EF930C7A5863(Local_2995[*iParam4 /*20*/].f_6, 1);
	iLocal_3038++;
	fLocal_429 = func_9(Param0, 0);
	if (iLocal_419 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_649[iLocal_2603 /*23*/].f_10))
	{
		Local_2995[*iParam4 /*20*/].f_17 = unk_0x6C1675D4DFABEDC6(Local_649[iLocal_2603 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2995[*iParam4 /*20*/].f_17 = unk_0x6C1675D4DFABEDC6(Param0, fVar0, 0f, 0);
	}
	Local_2995[*iParam4 /*20*/].f_18 = unk_0x6C1675D4DFABEDC6(Param0, fVar1, 2.5f, 0);
	Local_2995[*iParam4 /*20*/].f_19 = unk_0x6C1675D4DFABEDC6(Param0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2995[*iParam4 /*20*/].f_15)
		{
			unk_0xA4C996EB206AEF14(Local_2995[*iParam4 /*20*/].f_6, 1);
			unk_0xBCA53A1278653F4C(Local_2995[*iParam4 /*20*/].f_6, 1f);
			unk_0xB85DF3EAC1572F12(Local_2995[*iParam4 /*20*/].f_6, 1);
		}
		else
		{
			unk_0xA4C996EB206AEF14(Local_2995[*iParam4 /*20*/].f_6, 1);
			unk_0xBCA53A1278653F4C(Local_2995[*iParam4 /*20*/].f_6, 1f);
			unk_0xB85DF3EAC1572F12(Local_2995[*iParam4 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_2957 && uParam6)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_2995[*iParam4 /*20*/].f_6))
		{
			Local_2995[*iParam4 /*20*/].f_8 = unk_0xDF78B7F06503567E(Local_2995[*iParam4 /*20*/].f_6);
			unk_0x1AD45E3CF020D50D(Local_2995[*iParam4 /*20*/].f_8, 3);
		}
	}
	iLocal_3037++;
	func_241(&(Local_2995[*iParam4 /*20*/].f_11));
	return 1;
}

int func_121(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((uParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		*uParam1 = unk_0x6360D2FA3AD62AD1(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_123(struct<3> Param0, float fParam3, var uParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	var uVar15;
	
	if (!func_120(Param0, fParam3, uParam4, 1, iParam5))
	{
		return 0;
	}
	if (*uParam4 == -1)
	{
	}
	unk_0x38A205E419E42642(Local_2995[*uParam4 /*20*/].f_6, 4, 0, 0);
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(Local_2995[*uParam4 /*20*/].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2949 = 1;
	Var0 = { unk_0xA783C6007920169C(Local_2995[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var12 = { unk_0xBF8499F46AD9093A(Local_2995[*uParam4 /*20*/].f_6, 1) };
	uVar15 = unk_0xD1613577C809E98B(Local_2995[*uParam4 /*20*/].f_6);
	uLocal_3047 = unk_0x6C1675D4DFABEDC6(unk_0xCC6B7A025E72F529(Var12, uVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	uLocal_3048 = unk_0x6C1675D4DFABEDC6(unk_0xCC6B7A025E72F529(Var12, uVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	unk_0x597CB55BA0825820(Var0, 30f, 0, 0, 0, 0, 0);
	Local_1869[func_234() /*28*/][0 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_124(var uParam0, float fParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	
	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = (unk_0x444ECD635D5FD45F(0, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -unk_0x1E253A1A83763D22(450f, 700f);
		fVar9 = unk_0x1E253A1A83763D22(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = unk_0x1E253A1A83763D22(450f, 700f);
		fVar9 = unk_0x1E253A1A83763D22(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = unk_0x1E253A1A83763D22(450f, 700f);
		fVar8 = unk_0x1E253A1A83763D22(-100f, 100f);
	}
	else
	{
		fVar9 = -unk_0x1E253A1A83763D22(450f, 700f);
		fVar8 = unk_0x1E253A1A83763D22(-100f, 100f);
	}
	Var0 = { unk_0xA783C6007920169C(unk_0xA16EC202D9D35357(), fVar8, fVar9, 0f) };
	if (!unk_0xD6B9A4C04B98151E(Var0, 10f, 1, 1, 1, &Var5, &uVar4))
	{
		return 0;
	}
	unk_0x8C4964C5036133AB(Var5, 2, uParam2, fParam1, &uVar3, 1, 1077936128, 0);
	*uParam0 = { Var5 };
	if (unk_0x16CDA1894CFE0781(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_125(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_125(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_126(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		uVar0 = iParam0;
		unk_0x012365AC00FE1314(8, &uVar0, 1, 1);
	}
	else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5FD676841BE4531E(8, &cVar1);
	}
}

void func_127()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x5660C8AFDD9C1721(Local_279[iVar0 /*3*/].f_1))
		{
			if (unk_0xE44A580B551C3645(Local_279[iVar0 /*3*/]))
			{
				unk_0xB6FB9702660D84F6(&(Local_279[iVar0 /*3*/].f_1));
			}
			else if (Local_279[iVar0 /*3*/].f_2 && func_103(Local_279[iVar0 /*3*/], 1) > 200f)
			{
				unk_0xB6FB9702660D84F6(&(Local_279[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_128()
{
	if (!unk_0x9BA82E09A986BA4B(&cLocal_271, ""))
	{
		if (!func_41())
		{
			func_149(&Local_95, &cLocal_271, &cLocal_275, 9, 0, 0, 0);
			StringCopy(&cLocal_271, "", 16);
		}
	}
}

void func_129(var uParam0, float fParam1, bool bParam2)
{
	if (func_130(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_90(&cLocal_316, -1);
		}
		else
		{
			func_100(&cLocal_316, 7500, 1);
		}
	}
}

int func_130(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_51(uParam0);
		return 1;
	}
	return 0;
}

void func_131(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4405, 25))
		{
			return;
		}
	}
	if (unk_0x99483D9B7795CE90())
	{
		unk_0x1CCF3860AEBA07CC(iParam2);
		unk_0xBB74A3D7C0228EBE("FocusIn");
		unk_0x124843CE93F39C27("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDF3B1A0343547226("FocusOut", 0, 0);
			unk_0xC2E1777941B4536E(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x7FF5364DCE67B621(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8CD18E96F1984EE6(sVar0))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8CD18E96F1984EE6(uParam0->f_3))
	{
		if (func_96(uParam0->f_3))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
	if (!unk_0x8CD18E96F1984EE6(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
}

void func_132(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x99483D9B7795CE90())
	{
		if (unk_0x09560C7DE2A384BD() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (unk_0x8CD18E96F1984EE6(iVar0))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_96(iVar0))
	{
		func_147();
	}
	if (!unk_0x99483D9B7795CE90())
	{
		if (func_142(uParam0, bParam6, bParam8, 0))
		{
			func_141(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_137(iVar0))
			{
				if ((unk_0x8CD18E96F1984EE6(uParam0->f_3) && !unk_0x8CD18E96F1984EE6(iVar0)) && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if ((unk_0x7A98E0DD2E6FAB7A(Param1, 1f) && !unk_0x11A809BBE3889742()) && iParam7)
					{
						if (!func_96(iVar0))
						{
							func_90(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9BA82E09A986BA4B("CMN_HINT", iVar0))
							{
								func_136(1);
							}
						}
					}
				}
			}
		}
		else if (func_137(iVar0))
		{
			if (unk_0x8CD18E96F1984EE6(uParam0->f_3) && !unk_0x8CD18E96F1984EE6(iVar0))
			{
				if ((unk_0x7A98E0DD2E6FAB7A(Param1, 1f) && !unk_0x11A809BBE3889742()) && iParam7)
				{
					if (!func_96(iVar0))
					{
						func_90(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x9BA82E09A986BA4B("CMN_HINT", iVar0))
						{
							func_136(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x8CD18E96F1984EE6(iVar0))
		{
			if (func_96(iVar0) && unk_0x11A809BBE3889742())
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
		}
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(3) == 3 || unk_0x95AD511976EEFC6B(3) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(6) == 3 || unk_0x95AD511976EEFC6B(6) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(4) == 3 || unk_0x95AD511976EEFC6B(4) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(5) == 3 || unk_0x95AD511976EEFC6B(5) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(2) == 3 || unk_0x95AD511976EEFC6B(2) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC89B7DD8E2CD22E5() == 3 || unk_0xC89B7DD8E2CD22E5() == 4)
			{
				func_131(uParam0, iVar0, 1);
			}
		}
		if (!func_142(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_135(uParam0))
			{
				func_133(uParam0);
			}
		}
	}
}

void func_133(var uParam0)
{
	if (func_134(unk_0xA16EC202D9D35357()))
	{
		unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
	}
	if (unk_0x99483D9B7795CE90())
	{
		unk_0x7FF5364DCE67B621(1);
		unk_0x1CCF3860AEBA07CC(0);
		unk_0x124843CE93F39C27("HINT_CAM_SCENE");
		unk_0xBB74A3D7C0228EBE("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDF3B1A0343547226("FocusOut", 0, 0);
			unk_0xC2E1777941B4536E(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_134(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0x9FF5D51C24AD2308(iParam0))
		{
			if (unk_0xECFECDAD51A6184F(unk_0xF22EE5E4C0C2704B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA34B85701D8A1FA8(iParam0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA7CC89FF539E1376(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x15CE956C279F4825(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x09560C7DE2A384BD()
		{
			return 1;
		}
	}
	return 0;
}

int func_136(bool bParam0)
{
	switch (Global_34915)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97439.f_8303.f_100++;
			}
			return Global_97439.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97439.f_8303.f_101++;
			}
			return Global_97439.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97439.f_8303.f_102++;
			}
			return Global_97439.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_137(char* sParam0)
{
	if (!func_138(1, 1, 0))
	{
		if ((!unk_0x06771AF7795B3ECF(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
		return 0;
	}
	switch (Global_34915)
	{
		case 0:
		case 3:
			if (func_136(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_136(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_136(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB4B5BF5882A555F9())
	{
		return 0;
	}
	if (func_140(0))
	{
		return 0;
	}
	if (func_139())
	{
		return 0;
	}
	if (unk_0x6E6ED37B068198D0())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (unk_0x16CDA1894CFE0781(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51940)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(3) == 3 || unk_0x95AD511976EEFC6B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(6) == 3 || unk_0x95AD511976EEFC6B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(4) == 3 || unk_0x95AD511976EEFC6B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(5) == 3 || unk_0x95AD511976EEFC6B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(2) == 3 || unk_0x95AD511976EEFC6B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC89B7DD8E2CD22E5() == 3 || unk_0xC89B7DD8E2CD22E5() == 4)
			{
				return 0;
			}
			if (unk_0xE7F9BEE8EDDF19C2())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_139()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_140(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
			{
				return 1;
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_141(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7FF5364DCE67B621(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x54CD1E147EB50625(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x3116CFED02763A5D(unk_0xA16EC202D9D35357(), Param1, -1, iVar2, iVar3);
	unk_0xDF3B1A0343547226("FocusIn", 0, 0);
	unk_0x3EF2F05E6EA65602("HINT_CAM_SCENE");
	unk_0xC2E1777941B4536E(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x09560C7DE2A384BD();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_142(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x09560C7DE2A384BD() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					if (func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_146(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_135(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x09560C7DE2A384BD() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						if (!func_146(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x09560C7DE2A384BD();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					if (!func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_145(bParam1, bParam2, bParam3) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_146(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x09560C7DE2A384BD() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						if (func_144(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_144(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_135(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_138(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_147();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_143(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			unk_0x4B404C739A9AFC7A(0, 140, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			if (unk_0xAFD068D020C517F6(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		if (unk_0x0898B12B629D9B74())
		{
			if (unk_0xAFD068D020C517F6(0, 80))
			{
				unk_0x7FF5364DCE67B621(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_145(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			unk_0x4B404C739A9AFC7A(0, 140, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			if (unk_0x4E151C54AB29940C(0, 80) && unk_0x09560C7DE2A384BD() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		if (unk_0x0898B12B629D9B74())
		{
			if (unk_0x4E151C54AB29940C(0, 80) && unk_0x09560C7DE2A384BD() > Global_97)
			{
				unk_0x7FF5364DCE67B621(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_147()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 4);
}

int func_148(bool bParam0)
{
	if (bLocal_466 || iLocal_465)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_467)
		{
			return 0;
		}
	}
	return 1;
}

bool func_149(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_15(sParam2, iParam3, 0);
}

void func_150()
{
	Global_14559 = 0;
	func_29();
}

int func_151()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_2983) && !unk_0xE44A580B551C3645(iLocal_2983))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iLocal_2983, 1) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) > 2500f)
	{
		if (!bLocal_2967)
		{
			func_152("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2967 = true;
			if (!unk_0x5660C8AFDD9C1721(uLocal_424))
			{
				if (!unk_0xE44A580B551C3645(iLocal_2983))
				{
					uLocal_424 = unk_0xDF78B7F06503567E(iLocal_2983);
					unk_0x1AD45E3CF020D50D(uLocal_424, 3);
					unk_0xBE97A5A41C1F5C4C(uLocal_424, 0.5f);
				}
			}
			if (unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_8))
			{
				unk_0xB6FB9702660D84F6(&(Local_2995[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_2967)
	{
		bLocal_2967 = false;
		if (unk_0x5660C8AFDD9C1721(uLocal_424))
		{
			unk_0xB6FB9702660D84F6(&uLocal_424);
		}
		if (!unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_8))
		{
			Local_2995[0 /*20*/].f_8 = unk_0x64F646E6A974BF18(Local_2624[0 /*3*/]);
			if (iLocal_467)
			{
				unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_8, 5);
				unk_0xF1D09F0F8B016765(Local_2995[0 /*20*/].f_8, 1);
				unk_0xD683FA225012FD93(Local_2995[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_8, 3);
				unk_0xF1D09F0F8B016765(Local_2995[0 /*20*/].f_8, 1);
				unk_0xD683FA225012FD93(Local_2995[0 /*20*/].f_8, 3);
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) > 22500f)
	{
		if (bLocal_2967)
		{
			return 1;
		}
	}
	return 0;
}

void func_152(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8E9A80E27DB553E5(sParam0);
	unk_0x6E070B8EEA199511(iParam1, 0);
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xA16EC202D9D35357();
	if (!unk_0xE44A580B551C3645(iVar0) && !unk_0xE44A580B551C3645(iParam0))
	{
		if (!func_160(*uParam2, 1))
		{
			if (func_159(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_160(*uParam2, 2))
		{
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_160(*uParam2, 4))
		{
			if (func_157(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_160(*uParam2, 8))
		{
			if (func_156(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_160(*uParam2, 128);
		if (bParam4)
		{
			if (func_154(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_160(*uParam2, 16))
		{
			if (func_154(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (iParam7 && unk_0xBF8ADDCADFC4691E(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_154(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_394)
		{
			iLocal_395 = unk_0x6360D2FA3AD62AD1(iParam0);
			bLocal_394 = true;
		}
		iLocal_396 = unk_0x6360D2FA3AD62AD1(iParam0);
		iLocal_397 = (iLocal_395 - iLocal_396);
		iVar0 = unk_0xB49BA83A5C224F40();
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_397) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_394)
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
			{
				if (IntToFloat(iLocal_397) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xB49BA83A5C224F40();
		if (!unk_0xE44A580B551C3645(iVar1))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			if (unk_0xFE57C063743B552A(iParam0))
			{
				if (unk_0xE399D3F81C1C1426(iParam0) == unk_0xA16EC202D9D35357())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x965556ACF6A83973(iParam0, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xE3DA5C92341F5AE4(unk_0x1788E93557766241()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x5AF85B8074B2C7E5(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA6A618F269FC6FEE(iParam0))
		{
			return 1;
		}
	}
	if (func_155(unk_0xA16EC202D9D35357(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xEAABEAE1DB589285(iParam0) && func_103(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x202EF5D8203705EF(iParam0, 0))
		{
			if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), unk_0x6ADAC08D70C79DE5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE44A580B551C3645(iParam1))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam1, unk_0xA16EC202D9D35357(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xC00D643B16552C4D(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7D0624057C8895A0(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iParam0, 1), unk_0xBF8499F46AD9093A(iParam1, 1)) < 2.5f)
			{
				if (unk_0x68E6C2D89A534992(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x14766EFE923CD38F(iParam0, 4))
	{
		if (unk_0x7D0624057C8895A0(iParam0) && !unk_0xB7761EC96D6D9B92(iParam0))
		{
			if (unk_0x965556ACF6A83973(iParam1, unk_0xBF8499F46AD9093A(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	if (unk_0xF6BC67E137183D3F(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x68D2C45FB503DDA1(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x14766EFE923CD38F(iParam0, 2))
	{
		if (unk_0x7D0624057C8895A0(iParam0))
		{
			if (unk_0x965556ACF6A83973(iParam1, unk_0xBF8499F46AD9093A(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x68E6C2D89A534992(unk_0xA7CC89FF539E1376(iParam1), iParam0, 120f) && unk_0xAA23516DE8E2A707(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x202EF5D8203705EF(unk_0xA7CC89FF539E1376(iParam1), 0))
			{
				iVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA7CC89FF539E1376(iParam1), 0);
			}
			if (unk_0x24C7291CDBC023F1(iParam0) || func_158(iVar3))
			{
				if (unk_0x965556ACF6A83973(iParam1, unk_0xBF8499F46AD9093A(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x68E6C2D89A534992(unk_0xA7CC89FF539E1376(iParam1), iParam0, 120f) && unk_0xAA23516DE8E2A707(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x98B0F512CA1C2670((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (unk_0xD8A521688BDBE867(iParam0, -1) != 0)
			{
				if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_104(unk_0xA16EC202D9D35357(), iParam0, 1) < 40f)
						{
							if (unk_0xEEE633507C8B2B0F(unk_0x1788E93557766241(), &iVar1))
							{
								if ((unk_0x9FF5D51C24AD2308(iVar1) && unk_0xF22EE5E4C0C2704B(iVar1) == iParam0) || (unk_0xA34B85701D8A1FA8(iVar1) && unk_0xA7CC89FF539E1376(iVar1) == unk_0xD8A521688BDBE867(iParam0, -1)))
								{
									if ((unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) && unk_0xF49761626882E968(0, 24)) || (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xF49761626882E968(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_159(int iParam0, var uParam1)
{
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
		{
			if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iParam0) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iParam0))
			{
				if (unk_0x68E6C2D89A534992(iParam0, unk_0xA16EC202D9D35357(), 90f))
				{
					if (func_103(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x09560C7DE2A384BD();
						}
						else if ((unk_0x09560C7DE2A384BD() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (unk_0x538DF9E5B1DF01EB((*uParam4)[iVar0]))
		{
			if (!unk_0xE44A580B551C3645((*uParam4)[iVar0]) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				if (func_153((*uParam4)[iVar0], 0, &uLocal_411, &iLocal_418, 0, 1, 0, 1, 1))
				{
					unk_0xEA36CC2E7750344B((*uParam4)[iVar0], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_108(iParam1, iParam3, &iLocal_2602, 20, 70f, 65f, 0))
			{
				iLocal_2602 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0x538DF9E5B1DF01EB(iParam2))
			{
				if (!unk_0xE44A580B551C3645(iParam1) && !unk_0xE44A580B551C3645(iParam2))
				{
					unk_0x2B79CD6A5064FB19(iParam2, iParam1, 50f, 786469);
					unk_0x2686393074E14730(iParam2, 1);
					unk_0x6B3DDEE91652BE59(&iParam2);
					unk_0x3A3C5A6572B3C611(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_467)
			{
				func_53(&uLocal_2512);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0x538DF9E5B1DF01EB((*uParam4)[iVar0]))
				{
					if (!unk_0xE44A580B551C3645((*uParam4)[iVar0]))
					{
						if (func_103((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_470 = iVar0;
							iLocal_470 = iLocal_470;
							func_53(&uLocal_2512);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_1869[func_234() /*28*/].f_17))
			{
				func_162(uLocal_2346, Local_1869[func_234() /*28*/].f_17, Local_1869[func_234() /*28*/].f_20);
			}
			if (unk_0x16CDA1894CFE0781(joaat("tonya5")) == 1)
			{
				if (!iLocal_456)
				{
					func_235(&uLocal_483, 3, *uParam8, "TONYA", 0, 1);
					if (func_149(&uLocal_483, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_456 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0xE44A580B551C3645((*uParam4)[iVar0]))
				{
					unk_0x6D98AA46076A68BE(&uLocal_420);
					unk_0x5B5659C49032B96C(0, sParam6, (*sParam7)[iVar0], 4f, -4f, unk_0x444ECD635D5FD45F(10000, 20000), 0, 0, 0, 0, 0);
					unk_0xAC9F22F89987627B(0, 1193033728, 0);
					unk_0x963BB7C99350D827(uLocal_420);
					unk_0x0891776D0327B77A((*uParam4)[iVar0], uLocal_420);
					unk_0x2AF68ED52DC74B7D(&uLocal_420);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x16CDA1894CFE0781(joaat("tonya5")) == 1)
			{
				if (!iLocal_456)
				{
					func_235(&uLocal_483, 3, *uParam8, "TONYA", 0, 1);
					if (func_149(&uLocal_483, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_456 = 1;
					}
				}
				if (!iLocal_468)
				{
					if (!unk_0xE44A580B551C3645(iParam3) && !unk_0xE44A580B551C3645(*uParam10))
					{
						if (!unk_0x2EF25A34B1247F72(iParam3, *uParam10))
						{
							if (!func_7(&uLocal_2527))
							{
								func_241(&uLocal_2527);
							}
							else if (func_4(&uLocal_2527) > 20f)
							{
								if (func_149(&uLocal_483, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_468 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_162(var uParam0, struct<3> Param1, struct<3> Param4)
{
	unk_0xA2D4DD3AE5BD39B4(uParam0, 0);
	unk_0xC70C5E9FFFC14B2A();
	unk_0x9D92F25226C3ECED(Param1, Param4, 0);
}

int func_163(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char[4] cParam9, char* sParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (unk_0x21B0D803C4C9C45E(Var3, &uVar0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_165(uParam1);
		unk_0x11E84835ED616A25(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11)
		{
			if (fParam8 == -1f)
			{
				fParam8 = func_164(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				fParam8 = (fParam8 + 180f);
			}
			if (unk_0x16CDA1894CFE0781(joaat("tonya4")) == 1)
			{
				iVar1 = unk_0x6F9DE0DE8363ADF1(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
				unk_0x42544C0CC4949BD5(iVar1, 0, 0, 1, 0);
				unk_0x42544C0CC4949BD5(iVar1, 2, 0, 0, 0);
				unk_0x42544C0CC4949BD5(iVar1, 3, 0, 2, 0);
				unk_0x42544C0CC4949BD5(iVar1, 4, 1, 2, 0);
				unk_0x42544C0CC4949BD5(iVar1, 8, 0, 0, 0);
				unk_0x42544C0CC4949BD5(iVar1, 10, 1, 1, 0);
				unk_0xEA054561294AEC10(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x16CDA1894CFE0781(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = unk_0x6F9DE0DE8363ADF1(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					unk_0xEA054561294AEC10(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = unk_0x6F9DE0DE8363ADF1(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					unk_0xEA054561294AEC10(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = unk_0x6F9DE0DE8363ADF1(4, (*uParam7)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
			}
			unk_0xDD56EF930C7A5863(iVar1, 1);
			fParam8 = -1f;
			if (iParam11 > 1)
			{
				(*uParam6)[iVar2] = iVar1;
			}
			else
			{
				*uParam5 = iVar1;
			}
			cParam9 = cParam9;
			(*sParam10)[iVar2] = (*sParam10)[iVar2];
			unk_0x2C4E82CF88213975(iVar1, 1);
			unk_0xA1478EBA54DDE31B(iVar1, 42, 1);
			unk_0xA956F9A1F0F9C2EC(iVar1, "move_m@JOG@", 1048576000);
			unk_0x117411595F7E531A(iVar1, 109, 1);
			if (iLocal_419 == 3)
			{
				unk_0x2AF68ED52DC74B7D(&uVar6);
				unk_0x6D98AA46076A68BE(&uVar6);
				unk_0x5B5659C49032B96C(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
				unk_0x963BB7C99350D827(uVar6);
				if (!unk_0xE44A580B551C3645(iVar1))
				{
					unk_0x0891776D0327B77A(iVar1, uVar6);
				}
				unk_0x2AF68ED52DC74B7D(&uVar6);
			}
			iVar2++;
		}
		bLocal_441 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_164(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x3C616B96B92181C5((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2555[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2555[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2555[iVar0 /*18*/].f_8 = { func_166(unk_0x1E253A1A83763D22(0f, 1f), unk_0x1E253A1A83763D22(0f, 1f), 0f) };
		}
		else
		{
			Local_2555[iVar0 /*18*/].f_8 = { func_166(0.5f, 1f, 0f) };
		}
		Local_2555[iVar0 /*18*/].f_11 = 2f;
		Local_2555[iVar0 /*18*/].f_12 = 1f;
		Local_2555[iVar0 /*18*/].f_13 = 1f;
		Local_2555[iVar0 /*18*/].f_14 = -1f;
		Local_2555[iVar0 /*18*/].f_15 = 0.1f;
		Local_2555[iVar0 /*18*/].f_17 = 0;
		Local_2555[iVar0 /*18*/].f_1 = 1110;
		Local_2555[iVar0 /*18*/] = unk_0x9F9408A1A58DD5CC(Local_2555[iVar0 /*18*/].f_1, Local_2555[iVar0 /*18*/].f_2, Local_2555[iVar0 /*18*/].f_5, Local_2555[iVar0 /*18*/].f_8, Local_2555[iVar0 /*18*/].f_11, Local_2555[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_166(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_167()
{
	func_170();
	switch (iLocal_3119)
	{
		case 0:
			func_235(&Local_2347, 0, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
			func_235(&Local_2347, 3, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
			unk_0x2C4E82CF88213975(Local_2995[0 /*20*/], 1);
			iLocal_3040 = unk_0x444ECD635D5FD45F(35, 80);
			iLocal_3119 = 1;
			break;
		
		case 1:
			unk_0x6D98AA46076A68BE(&uLocal_420);
			unk_0x5B5659C49032B96C(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x963BB7C99350D827(uLocal_420);
			unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
			unk_0x2AF68ED52DC74B7D(&uLocal_420);
			if (func_9(Local_649[iLocal_2603 /*23*/].f_1, 1) < 40f || Local_2992.f_1 > 0)
			{
				if (iLocal_419 == 1)
				{
					if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
					{
						func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
						func_149(&Local_2347, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3119 = 2;
					}
					else if (Global_97439.f_18227.f_5 == 2)
					{
						func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_149(&Local_2347, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3119 = 2;
					}
				}
			}
			else if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040 + 10))
			{
				unk_0x5B5659C49032B96C(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_3119 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_649[iLocal_2603 /*23*/].f_13))
			{
				Local_649[iLocal_2603 /*23*/].f_13.f_2 = 45f;
				Local_649[iLocal_2603 /*23*/].f_16.f_2 = -45f;
				if (!unk_0x0852C405AF94F670(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					func_107(&iLocal_2597);
					iLocal_2946 = 1;
					iLocal_2953 = 1;
					bLocal_426 = true;
					if (unk_0x202EF5D8203705EF(Local_2995[0 /*20*/], 0))
					{
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0xBB5AA994E06B28E2(0, 0, 0);
						unk_0x5B5659C49032B96C(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_420);
						unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
						iLocal_3119 = 4;
					}
				}
			}
			if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040 + 15))
			{
				if (Global_97439.f_18227.f_5 == 0 || Global_97439.f_18227.f_5 == 1)
				{
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_97439.f_18227.f_5 == 2)
				{
					func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_107(&iLocal_2597);
				unk_0x4745F9C50C63A48C(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_7, -1, 2, 2);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_3119 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040))
			{
				if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
				{
					if (iLocal_3039 == 1)
					{
						func_169(&Local_2992);
					}
					iLocal_2946 = 1;
					if (unk_0x202EF5D8203705EF(Local_2995[0 /*20*/], 0))
					{
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0xBB5AA994E06B28E2(0, 0, 0);
						unk_0x6344A08C11506593(0, unk_0xCC6B7A025E72F529(Local_649[iLocal_2603 /*23*/].f_1, Local_649[iLocal_2603 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
						unk_0x963BB7C99350D827(uLocal_420);
						unk_0xDEB0A02F25120B62(Local_2995[0 /*20*/], 64, 0);
						unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
						iLocal_3119 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_3118 == 8 && iLocal_467) || func_168())
			{
				unk_0x5AE11BC36633DE4E(3000);
				iLocal_3119 = 5;
			}
			break;
		
		case 5:
			iLocal_2952 = 1;
			if (unk_0xC9D9444186B5A374() > 3000)
			{
				if (func_101(&iLocal_3116, 0, "TOW_TRAIN1"))
				{
					iLocal_3119 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_168()
{
	if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
	{
		if (bLocal_426)
		{
			switch (iLocal_3052)
			{
				case 0:
					if (unk_0x221830F81FA80744(Local_2995[0 /*20*/]) == 1)
					{
						iLocal_3052 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x95EDB2DEFA5BB405(Local_2995[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3052 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_169(var uParam0)
{
	uParam0->f_1 = 0;
	unk_0x27A62B1C26941E13(*uParam0, 0);
	unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
}

void func_170()
{
	float fVar0;
	
	if (iLocal_2946 || ((!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6)) && !unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0)))
	{
		if (iLocal_2597 != -1)
		{
			unk_0x7CB5477E93D6A302(iLocal_2597);
			unk_0x0D992EF9B9F0C8E3(iLocal_2597);
			iLocal_2597 = -1;
			return;
		}
	}
	if (!iLocal_2937)
	{
		iLocal_2597 = unk_0x74F076F396F8C361();
		iLocal_2937 = 1;
	}
	if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
	{
		if (unk_0x95EDB2DEFA5BB405(Local_2995[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x4CB0BCFFEC712BA2(Local_2995[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_2936)
				{
					unk_0x9AF4B23C594DCEE5(iLocal_2597, "TOWING_ENGINE_TURNING_MASTER", Local_2995[0 /*20*/].f_6, 0, 0, 0);
					iLocal_2936 = 1;
				}
			}
			else
			{
				unk_0x7CB5477E93D6A302(iLocal_2597);
				iLocal_2936 = 0;
			}
		}
	}
}

void func_171()
{
	int iVar0;
	
	func_173();
	unk_0xFD1E0AEC770DAF2E(1);
	unk_0x3D3D5DB8C3B816AF(2, 1);
	if (unk_0xC8378A96673BCC40(uLocal_2607))
	{
		unk_0x7559DFAB61B017F2(&uLocal_2607);
	}
	if (!unk_0xE44A580B551C3645(iLocal_3108))
	{
		unk_0x542B8BF5C21F2470(iLocal_3108, 1);
		unk_0x426C3D44449AE9F1(iLocal_3108, 0);
	}
	unk_0xB78C2D977041A266(uLocal_3047);
	unk_0xB78C2D977041A266(uLocal_3048);
	unk_0xA2D4DD3AE5BD39B4(uLocal_3111, 0);
	unk_0xA2D4DD3AE5BD39B4(uLocal_3112, 0);
	unk_0xC7210908156431E0(Local_3059 - Vector(15f, 15f, 15f), Local_3059 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0xB78C2D977041A266(Local_2995[iVar0 /*20*/].f_17);
		unk_0xB78C2D977041A266(Local_2995[iVar0 /*20*/].f_18);
		unk_0xB78C2D977041A266(Local_2995[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_1869[func_234() /*28*/].f_17))
	{
		func_162(uLocal_2346, Local_1869[func_234() /*28*/].f_17, Local_1869[func_234() /*28*/].f_20);
	}
	unk_0x3A3C5A6572B3C611(&(Local_2995[0 /*20*/].f_6));
	if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
	{
		unk_0x6B3DDEE91652BE59(&(Local_2995[0 /*20*/]));
		if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/]))
		{
			if (unk_0x9A132E8DFAE1F524(Local_2995[0 /*20*/]))
			{
				unk_0xA7130AF256ED96A1(Local_2995[0 /*20*/]);
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_2982))
	{
		if (!unk_0xE44A580B551C3645(iLocal_2982))
		{
			unk_0x6B3DDEE91652BE59(&iLocal_2982);
		}
	}
	if (!unk_0xE44A580B551C3645(iLocal_3108))
	{
		unk_0x7B9576B4E099FB1F(iLocal_3108, 1, 1);
		unk_0x3A3C5A6572B3C611(&iLocal_3108);
	}
	if (iLocal_2962)
	{
		unk_0xC7210908156431E0(Local_2631, Local_2634, 1, 1);
	}
	if (iLocal_2959 && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_7))
	{
		unk_0x6357EC5FDD66BEB2(Local_2995[0 /*20*/].f_7, 1);
		unk_0xB8B941B3311DDB40(&(Local_2995[0 /*20*/].f_7), 0);
		unk_0xDEA972D2C0A2FAD4(1);
		func_114(0, 1);
		func_114(1, 0);
		func_114(2, 0);
		func_114(3, 1);
		func_114(4, 0);
		func_114(5, 0);
		func_114(6, 0);
		func_114(7, 0);
		func_114(8, 0);
		func_114(9, 0);
		func_114(10, 0);
		func_114(11, 0);
	}
	func_107(&iLocal_2595);
	func_107(&iLocal_2596);
	func_172(&uLocal_3126);
	func_107(&iLocal_2597);
	func_131(&uLocal_398, 0, 0);
	if (unk_0xBAB691F99A2A7346(Local_2992.f_0))
	{
		func_169(&Local_2992);
	}
	unk_0xABC4F2A6D7D56CF4(1f);
	unk_0x32DC163A33A4AB6D(joaat("towtruck"), 0);
	unk_0x82706E6C897B0FA1();
}

void func_172(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x7B2EA00855157A0A((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_173()
{
	char cVar0[24];
	
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		unk_0x012365AC00FE1314(StackVal, 0, 0, 0);
	}
	else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5FD676841BE4531E(0, &cVar0);
	}
}

int func_174()
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]) && !unk_0xE44A580B551C3645(iLocal_3108))
	{
		if (unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], iLocal_3108, 0))
		{
			if (unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_10))
			{
				unk_0xB6FB9702660D84F6(&(Local_2995[0 /*20*/].f_10));
				func_107(&iLocal_2597);
			}
		}
		else if (!unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
		{
			func_107(&iLocal_2597);
		}
	}
	switch (iLocal_3118)
	{
		case 0:
			if (func_9(Local_649[iLocal_2603 /*23*/].f_1, 1) < 100f)
			{
				Local_2995[0 /*20*/].f_7 = unk_0xFEA182393FE22829(6, Local_649[iLocal_2603 /*23*/].f_6, Local_649[iLocal_2603 /*23*/].f_5);
				if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_7))
				{
					Local_2995[0 /*20*/].f_10 = unk_0xDF78B7F06503567E(Local_2995[0 /*20*/].f_7);
				}
				iLocal_2982 = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
				unk_0x2C4E82CF88213975(iLocal_2982, 1);
				if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_7))
				{
					unk_0xC608E84801EC5872(Local_2995[0 /*20*/].f_7, 0f);
				}
				func_100("TOW_OBJ_05", 7500, 1);
				unk_0xC1B1E9A034A63A62(0);
				func_177("CROSSING_BELL", &iLocal_2598, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3118 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_649[iLocal_2603 /*23*/].f_1, 1) < 80f || unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (!unk_0x4CBFDAD06D630F7C("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x3EF2F05E6EA65602("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3118 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_7))
			{
				unk_0xC608E84801EC5872(Local_2995[0 /*20*/].f_7, 26f);
				unk_0xC8D031F3B30814F8(Local_2995[0 /*20*/].f_7, 22f);
			}
			iLocal_3118 = 3;
			break;
		
		case 3:
			if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_7) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
			{
				if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < 175f)
				{
					func_176(Local_2995[0 /*20*/].f_7);
					func_177("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2596, 1, Local_2995[0 /*20*/].f_7, 0, 0, 0, 0);
					func_175(&uLocal_3126, Local_2995[0 /*20*/].f_7);
					func_177("TOWING_TRAIN_HORN_MASTER", &iLocal_2595, 1, Local_2995[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_3118 = 4;
				}
			}
			else
			{
				iLocal_3118 = 8;
			}
			break;
		
		case 4:
			if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_7) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
			{
				func_176(Local_2995[0 /*20*/].f_7);
				if (!unk_0x0852C405AF94F670(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					func_172(&uLocal_3126);
				}
				Var0 = { unk_0xBF8499F46AD9093A(Local_2995[0 /*20*/].f_7, 1) };
				if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < 3f)
				{
					iLocal_2933 = 1;
				}
				if (unk_0x59C8BF753F6A2D1C(Local_2995[0 /*20*/].f_7, Local_2995[0 /*20*/].f_6))
				{
					if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
					{
						if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
						{
							unk_0x28202ECE887A81DB(iLocal_3108, Local_2995[0 /*20*/].f_6);
						}
					}
					unk_0x1BA44265D2A4897B(Local_2995[0 /*20*/].f_6, 1, 0);
					iLocal_3118 = 6;
				}
				else if (func_10(Local_2995[0 /*20*/].f_6, Var0, 1) < 10f && unk_0x0852C405AF94F670(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					iLocal_2933 = 1;
					if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
					{
						if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
						{
							unk_0x28202ECE887A81DB(iLocal_3108, Local_2995[0 /*20*/].f_6);
						}
					}
					unk_0x1BA44265D2A4897B(Local_2995[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_2933 && func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) > 4f)
				{
					iLocal_3118 = 6;
				}
			}
			else
			{
				iLocal_3118 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_467)
			{
				func_100("TOWT_OBJ_03G", 7500, 1);
				if (unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_10))
				{
					unk_0xB6FB9702660D84F6(&(Local_2995[0 /*20*/].f_10));
				}
			}
			unk_0xB6FB9702660D84F6(&(Local_2995[0 /*20*/].f_10));
			func_107(&iLocal_2595);
			func_107(&iLocal_2596);
			func_172(&uLocal_3126);
			func_107(&iLocal_2597);
			func_107(&iLocal_2598);
			iLocal_3118 = 7;
			break;
		
		case 7:
			if (!func_41())
			{
				if (!iLocal_467)
				{
					func_100("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0x4CBFDAD06D630F7C("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x124843CE93F39C27("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3118 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_175(var uParam0, var uParam1)
{
	(*uParam0)[0] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = unk_0xA61A77F0B90645BB("scr_ojtt_train_sparks", uParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_176(int iParam0)
{
	float fVar0;
	
	if (!func_7(&uLocal_2592))
	{
		func_241(&uLocal_2592);
	}
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			fVar0 = unk_0x5AF66EDEBFA76B9B(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&uLocal_2592, 0.15f))
	{
		fLocal_2599 = (fVar0 - 0.35f);
		if (fLocal_2599 < 8f)
		{
			fLocal_2599 = 8f;
		}
		func_53(&uLocal_2592);
		unk_0xC608E84801EC5872(iParam0, fLocal_2599);
		unk_0xC8D031F3B30814F8(iParam0, fLocal_2599);
	}
	return 1;
}

void func_177(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_107(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0x74F076F396F8C361();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		unk_0x9AF4B23C594DCEE5(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0x859FD7253E29A93D(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		unk_0xC2E1777941B4536E(*iParam1, sParam0, sParam7, 1);
	}
}

int func_178()
{
	var uVar0;
	struct<3> Var1;
	
	func_188();
	switch (iLocal_3117)
	{
		case 0:
			if (bLocal_2964)
			{
				if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/] = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], 1, 1, 1);
					unk_0x2C4E82CF88213975(Local_2995[0 /*20*/], 1);
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2995[0 /*20*/].f_1 = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_6, 26, iLocal_73, 2, 1, 1);
					unk_0x2C4E82CF88213975(Local_2995[0 /*20*/].f_1, 1);
					unk_0xA1478EBA54DDE31B(Local_2995[0 /*20*/].f_1, 42, 1);
					func_235(&Local_2347, 6, Local_2995[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0x5B5659C49032B96C(Local_2995[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(Local_2995[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
					{
						unk_0x542B8BF5C21F2470(Local_2995[0 /*20*/].f_6, 10);
					}
					bLocal_441 = true;
					func_235(&Local_2347, 0, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2965)
			{
				if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/] = unk_0x793482A351850A4F(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], 0, 1, 1);
					unk_0x2C4E82CF88213975(Local_2995[0 /*20*/], 1);
					unk_0xA1478EBA54DDE31B(Local_2995[0 /*20*/], 42, 1);
					func_235(&Local_2347, 2, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
					unk_0x5B5659C49032B96C(Local_2995[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_441 = true;
				}
			}
			else if (func_187())
			{
				bLocal_2963 = true;
			}
			else
			{
				bLocal_2963 = false;
			}
			iLocal_3117 = 1;
			break;
		
		case 1:
			if (bLocal_2964)
			{
				if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
				{
					if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(Local_2995[0 /*20*/].f_6, 1), 15f, 15f, 15f, 0, 1, 0))
					{
						if (!iLocal_3135)
						{
							if (func_149(&Local_2347, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_3135 = 1;
							}
						}
					}
				}
			}
			if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
			{
				if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6) || func_186(iLocal_3108, Local_2995[0 /*20*/].f_6, !(bLocal_2964 || bLocal_2965)))
				{
					if (func_186(iLocal_3108, Local_2995[0 /*20*/].f_6, !(bLocal_2964 || bLocal_2965)))
					{
						bLocal_2978 = true;
					}
					if (!bLocal_2965)
					{
						func_185(&uLocal_3102, 1f);
					}
					else
					{
						func_241(&uLocal_3102);
					}
				}
			}
			if (func_7(&uLocal_3102) && func_4(&uLocal_3102) > 1f)
			{
				if (bLocal_2964 && func_7(&uLocal_3102))
				{
					if (func_41())
					{
						func_150();
					}
					iLocal_2975 = 0;
					if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
					{
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0xBB5AA994E06B28E2(0, 750, 0);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
						unk_0x5B5659C49032B96C(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_420);
						unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0xBB5AA994E06B28E2(0, 0, 0);
						unk_0x1CAB36EC4E43E586(0, Local_2995[0 /*20*/], 0);
						unk_0x5B5659C49032B96C(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						unk_0xEA36CC2E7750344B(0, Local_2995[0 /*20*/], 1000f, -1, 0, 0);
						unk_0xAC9F22F89987627B(0, 1193033728, 0);
						unk_0x963BB7C99350D827(uLocal_420);
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_1))
						{
							unk_0x0891776D0327B77A(Local_2995[0 /*20*/].f_1, uLocal_420);
						}
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
					}
					iLocal_3117 = 2;
				}
				else if (bLocal_2965)
				{
					if ((Global_97439.f_18227.f_4 % 2) == 0)
					{
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
						{
							unk_0x6D98AA46076A68BE(&uLocal_420);
							unk_0xBB5AA994E06B28E2(0, 0, 0);
							unk_0xF3B924DCFDECDB4B(0, iLocal_3108, 20000, 9f, 1f, 1073741824, 0);
							unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
							unk_0x5B5659C49032B96C(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							unk_0xAC9F22F89987627B(0, 1193033728, 0);
							unk_0x963BB7C99350D827(uLocal_420);
							unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
							unk_0x2AF68ED52DC74B7D(&uLocal_420);
						}
						func_235(&Local_2347, 2, Local_2995[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_149(&Local_2347, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
						{
							func_184(Local_2995[0 /*20*/]);
							unk_0x15EBFEEB77BF84B7(Local_2995[0 /*20*/], 0, 0);
							unk_0x15EBFEEB77BF84B7(Local_2995[0 /*20*/], 1, 0);
							unk_0x6D98AA46076A68BE(&uLocal_420);
							unk_0xBB5AA994E06B28E2(0, 0, 0);
							unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
							unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x963BB7C99350D827(uLocal_420);
							unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
							unk_0x2AF68ED52DC74B7D(&uLocal_420);
							if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/]))
							{
								uLocal_2985 = unk_0xDF78B7F06503567E(Local_2995[0 /*20*/]);
								unk_0x1AD45E3CF020D50D(uLocal_2985, 1);
								unk_0xBE97A5A41C1F5C4C(uLocal_2985, 0.7f);
								func_183(Local_2995[0 /*20*/], uLocal_2985, 1);
							}
							bLocal_2963 = true;
						}
						func_149(&Local_2347, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3117 = 2;
				}
				else if (bLocal_2963)
				{
					Local_2995[0 /*20*/] = unk_0x6F9DE0DE8363ADF1(4, uLocal_2988[0], Local_649[iLocal_2603 /*23*/].f_6, Local_649[iLocal_2603 /*23*/].f_9, 1, 1);
					unk_0x2C4E82CF88213975(Local_2995[0 /*20*/], 1);
					unk_0xA1478EBA54DDE31B(Local_2995[0 /*20*/], 42, 1);
					bLocal_441 = true;
					sLocal_2617 = "TOW_PED_ANGR";
					bLocal_441 = false;
					if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
					{
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0xF3B924DCFDECDB4B(0, iLocal_3108, 20000, 15f, 3f, 1073741824, 0);
						unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
						unk_0x963BB7C99350D827(uLocal_420);
						unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
					}
					iLocal_3117 = 3;
				}
				else
				{
					Local_2995[0 /*20*/] = unk_0x6F9DE0DE8363ADF1(4, uLocal_2988[0], Local_649[iLocal_2603 /*23*/].f_6, Local_649[iLocal_2603 /*23*/].f_9, 1, 1);
					unk_0x2C4E82CF88213975(Local_2995[0 /*20*/], 1);
					unk_0xA1478EBA54DDE31B(Local_2995[0 /*20*/], 42, 1);
					unk_0xDD56EF930C7A5863(Local_2995[0 /*20*/], 1);
					bLocal_441 = true;
					sLocal_2617 = "TOW_ILLEG1";
					if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
					{
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0x72201360F71A4D8A(0, unk_0xA16EC202D9D35357(), 20000, 12f, 0f, 3f, 0);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
						unk_0x963BB7C99350D827(uLocal_420);
						unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
					}
					iLocal_3117 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_2964)
			{
				if (!bLocal_2972)
				{
					if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6) || bLocal_2978)
					{
						if (!unk_0xCE3402BDFD2ADED8())
						{
							if (!func_41())
							{
								if (func_149(&Local_2347, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2972 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
			{
				if (!unk_0x202EF5D8203705EF(Local_2995[0 /*20*/], 0))
				{
					if (bLocal_2965)
					{
						if (!func_41())
						{
							if (unk_0x221AC1EF116F6053(Local_2995[0 /*20*/], 242628503) == 1)
							{
								if (unk_0x221830F81FA80744(Local_2995[0 /*20*/]) == 2)
								{
									if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
									{
										Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
									}
									if (unk_0xB7A628320EFF8E47(Var1, unk_0xBF8499F46AD9093A(Local_2995[0 /*20*/], 1)) < 400f)
									{
										if ((Global_97439.f_18227.f_4 % 2) == 0)
										{
											func_149(&Local_2347, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_149(&Local_2347, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3117 = 8;
								}
							}
						}
					}
					else if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
					{
						if (func_182() || (!unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6) && !bLocal_2978))
						{
							func_150();
							iLocal_3117 = 5;
						}
						else if (!unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6) && bLocal_2978)
						{
							if (bLocal_2972)
							{
								if (!func_41())
								{
									iLocal_3117 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
			{
				if (func_104(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 1) < 12f)
				{
					unk_0x937785D9C1929236(Local_2995[0 /*20*/]);
					if (bLocal_2963)
					{
						unk_0x85A1016DBBC5E64B(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 0, 16);
					}
					else if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
					{
						unk_0x6D98AA46076A68BE(&uLocal_420);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
						unk_0x5B5659C49032B96C(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_420);
						unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uLocal_420);
						unk_0x2AF68ED52DC74B7D(&uLocal_420);
					}
					iLocal_2948 = 1;
					if (bLocal_2964)
					{
						iLocal_3117 = 5;
					}
					else
					{
						iLocal_3117 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/]))
			{
				Local_2995[0 /*20*/].f_9 = unk_0xDF78B7F06503567E(Local_2995[0 /*20*/]);
				if (bLocal_2963)
				{
					unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_9, 1);
					unk_0xBE97A5A41C1F5C4C(Local_2995[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					unk_0x1AD45E3CF020D50D(Local_2995[0 /*20*/].f_9, 3);
					unk_0xBE97A5A41C1F5C4C(Local_2995[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_2963)
			{
				if (iLocal_419 == 0)
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_181(Local_2347, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_235(&Local_2347, 2, Local_2995[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_181(Local_2347, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
				func_235(&Local_2347, 3, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
				func_181(Local_2347, "TOWAUD", sLocal_2617, 0);
			}
			bLocal_2956 = true;
			unk_0xC1B1E9A034A63A62(0);
			if (bLocal_2963)
			{
				func_53(&uLocal_3096);
				iLocal_3117 = 6;
			}
			else
			{
				iLocal_3117 = 5;
			}
			break;
		
		case 5:
			if (!func_41())
			{
				if (bLocal_2964)
				{
					unk_0x5AE11BC36633DE4E(0);
				}
				func_53(&uLocal_3096);
				if ((!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6)) && !unk_0xE44A580B551C3645(iLocal_3108))
				{
					if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						unk_0x99C7091782A79B14(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
						{
							unk_0x542B8BF5C21F2470(Local_2995[0 /*20*/].f_6, 1);
						}
						unk_0x2AF68ED52DC74B7D(&uVar0);
						unk_0x6D98AA46076A68BE(&uVar0);
						unk_0xA34C986DDC3D92F1(0, Local_2995[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
						unk_0x2B79CD6A5064FB19(0, Local_2995[0 /*20*/].f_6, 5f, 786597);
						unk_0x963BB7C99350D827(uVar0);
						if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
						{
							unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uVar0);
						}
						unk_0x2AF68ED52DC74B7D(&uVar0);
						bLocal_3136 = true;
					}
				}
				iLocal_3117 = 6;
			}
			break;
		
		case 6:
			func_179(0);
			if (!bLocal_2970)
			{
				if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
				{
					if (!unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						if (bLocal_2964)
						{
							if (unk_0xC9D9444186B5A374() > 8000)
							{
								func_53(&uLocal_3096);
								if (!bLocal_3136)
								{
									unk_0x542B8BF5C21F2470(Local_2995[0 /*20*/].f_6, 1);
									unk_0xA34C986DDC3D92F1(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
								}
								iLocal_3117 = 7;
							}
						}
						else
						{
							func_53(&uLocal_3096);
							unk_0x542B8BF5C21F2470(Local_2995[0 /*20*/].f_6, 1);
							unk_0xA34C986DDC3D92F1(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
							iLocal_3117 = 7;
						}
					}
					else if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
					{
						if (unk_0xC9D9444186B5A374() > 7000)
						{
							if (!bLocal_2963)
							{
								if (unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
								{
									if (!unk_0xE44A580B551C3645(iLocal_3108))
									{
										if (unk_0x5AF66EDEBFA76B9B(iLocal_3108) < 2f)
										{
											if (unk_0x221AC1EF116F6053(Local_2995[0 /*20*/], -258271821) != 1)
											{
												unk_0x2B79CD6A5064FB19(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0x2AF68ED52DC74B7D(&uVar0);
											unk_0x6D98AA46076A68BE(&uVar0);
											unk_0xBB5AA994E06B28E2(0, 5000, 4096);
											unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
											unk_0x963BB7C99350D827(uVar0);
											if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
											{
												unk_0x0891776D0327B77A(Local_2995[0 /*20*/], uVar0);
											}
											unk_0x2AF68ED52DC74B7D(&uVar0);
											iLocal_3117 = 7;
										}
									}
								}
								else if (!unk_0xE44A580B551C3645(iLocal_3108))
								{
									if (unk_0x5AF66EDEBFA76B9B(iLocal_3108) < 5f)
									{
										if (unk_0x221AC1EF116F6053(Local_2995[0 /*20*/], -1794415470) != 1)
										{
											if (unk_0x557C6E696286C67A(Local_2995[0 /*20*/].f_6, -1))
											{
												unk_0xA34C986DDC3D92F1(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, -1, -1, 1073741824, 1, 0);
											}
										}
									}
									else if (unk_0x221AC1EF116F6053(Local_2995[0 /*20*/], 1056466932) != 1)
									{
										unk_0x99C7091782A79B14(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_179(1);
			if (unk_0x202EF5D8203705EF(Local_2995[0 /*20*/], 0) && !unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6))
			{
				if (bLocal_2963)
				{
					sLocal_2617 = "TOW_PED_ANTH";
				}
				else if (bLocal_2964)
				{
					sLocal_2617 = "TOW_ILLEG_SE";
				}
				bLocal_2969 = true;
				func_149(&Local_2347, "TOWAUD", sLocal_2617, 9, 0, 0, 0);
				bLocal_2956 = false;
				unk_0x2B79CD6A5064FB19(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 5f, 786597);
				iLocal_3117 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_2948 = 0;
			bLocal_2956 = false;
			if (unk_0x5660C8AFDD9C1721(Local_2995[0 /*20*/].f_9))
			{
				unk_0xB6FB9702660D84F6(&(Local_2995[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_179(bool bParam0)
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_104(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0xE44A580B551C3645(iLocal_3108) && !unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
		{
			if (unk_0x2EF25A34B1247F72(iLocal_3108, Local_2995[0 /*20*/].f_6) && !unk_0xAD203DB71ADF6E57(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
	{
		if (unk_0xBF8ADDCADFC4691E(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 1) || unk_0xBF8ADDCADFC4691E(unk_0xA16EC202D9D35357(), Local_2995[0 /*20*/], 1))
		{
			func_53(&uLocal_3096);
			unk_0xFAF4121083211853(Local_2995[0 /*20*/]);
			unk_0xFAF4121083211853(unk_0xA16EC202D9D35357());
		}
	}
	if (unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
	{
		iLocal_3117 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_3096) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6)))
	{
		if (bLocal_2963)
		{
			func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2964)
		{
			func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_235(&Local_2347, 6, Local_2995[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2979[0] = Local_2995[0 /*20*/];
		uLocal_2979[1] = Local_2995[0 /*20*/].f_1;
		bLocal_2970 = true;
		func_180(Local_2347, "TOWAUD", sVar2, &uLocal_2979, 0);
		unk_0xB6FB9702660D84F6(&(Local_2995[0 /*20*/].f_9));
		if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/]))
		{
			unk_0x937785D9C1929236(Local_2995[0 /*20*/]);
			unk_0xEA36CC2E7750344B(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
		}
		iLocal_3117 = 8;
	}
}

int func_180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_103((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_149(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_181(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)
{
	if (bParam167)
	{
		unk_0x0D68C13151B68364(0);
	}
	StringCopy(&cLocal_271, sParam165, 16);
	StringCopy(&cLocal_275, sParam166, 16);
	Local_95 = { Param0 };
}

int func_182()
{
	switch (iLocal_3120)
	{
		case 0:
			if (unk_0x221830F81FA80744(Local_2995[0 /*20*/]) >= 1 && !unk_0xCE3402BDFD2ADED8())
			{
				iLocal_3120 = 1;
			}
			break;
		
		case 1:
			if (bLocal_2972 && !iLocal_2973)
			{
				if (!func_41())
				{
					if (!iLocal_2974)
					{
						if (!bLocal_2978)
						{
							func_100("TOWT_OBJ_06", 7500, 1);
							iLocal_2974 = 1;
						}
					}
					if (iLocal_2974 && !unk_0xCE3402BDFD2ADED8())
					{
						if (unk_0x221AC1EF116F6053(Local_2995[0 /*20*/], -875674219) != 1)
						{
							unk_0x1CAB36EC4E43E586(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_1, 0);
						}
						iLocal_2973 = 1;
						iLocal_3120 = 2;
					}
				}
			}
			if (func_103(Local_2995[0 /*20*/], 1) > 20f)
			{
				unk_0x0D68C13151B68364(1);
				return 1;
			}
			break;
		
		case 2:
			if (func_103(Local_2995[0 /*20*/], 1) > 20f)
			{
				unk_0x0D68C13151B68364(1);
				return 1;
			}
			if (!func_41())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_183(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_279[iVar0 /*3*/] == iParam0 && !unk_0x5660C8AFDD9C1721(Local_279[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0x5660C8AFDD9C1721(Local_279[iVar0 /*3*/].f_1))
		{
			Local_279[iVar0 /*3*/] = iParam0;
			Local_279[iVar0 /*3*/].f_1 = uParam1;
			Local_279[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_184(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			unk_0x0CB975C4C6AB2C13(iParam0, 1);
			unk_0x23FA15CAC1C1E536(iParam0, 1);
			unk_0x15EBFEEB77BF84B7(iParam0, 23, 0);
			unk_0x59FF47176A212235(iParam0, 2);
			unk_0x39272B2594E03395(iParam0, joaat("weapon_microsmg"), 1000, 1, 1);
			unk_0xFDEA10D71178C300(iParam0, 500);
		}
	}
}

void func_185(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_54(uParam0, fParam1);
	}
}

int func_186(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (unk_0xF9B25E181FF6237B(unk_0xA495B6AB6F2BF8C7()) && func_103(uParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0x59C8BF753F6A2D1C(iParam0, uParam1))
	{
		iVar0 = 1;
	}
	if (unk_0xBF8ADDCADFC4691E(iParam1, unk_0xA16EC202D9D35357(), 1))
	{
		iVar0 = 1;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_187()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!iLocal_2945)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_2995[0 /*20*/].f_6))
		{
			if (!unk_0xE44A580B551C3645(Local_2995[0 /*20*/].f_6))
			{
				Var3 = { unk_0xBF8499F46AD9093A(Local_2995[0 /*20*/].f_6, 1) };
			}
		}
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		}
		if (bLocal_2964)
		{
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				unk_0x0D68C13151B68364(1);
				if (!func_41())
				{
					unk_0x4745F9C50C63A48C(Local_2995[0 /*20*/], unk_0xA16EC202D9D35357(), 5000, 0, 2);
					func_235(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_149(&Local_2347, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_2945 = 1;
					}
				}
			}
		}
	}
}

int func_189(var uParam0, int iParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam1))
	{
		if (!unk_0xE44A580B551C3645(iParam1))
		{
			if (!unk_0x202EF5D8203705EF(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_433))
	{
		func_53(&uLocal_433);
	}
	if (func_103(uParam0, 0) < 15f)
	{
		fLocal_430 = 0.3f;
		fLocal_431 = 0.5f;
		fLocal_432 = 0.1f;
	}
	else if (func_103(uParam0, 0) < 40f)
	{
		fLocal_430 = 0.6f;
		fLocal_431 = 1f;
		fLocal_432 = 0.2f;
	}
	if (func_3(&uLocal_433, unk_0x1E253A1A83763D22(fLocal_430, fLocal_431)))
	{
		func_53(&uLocal_433);
		unk_0x3899C3FF414D2D90(uParam0, 1, 0f, 0f, fLocal_432, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_190()
{
	unk_0xA7CEB400EFD58154();
	func_191();
}

void func_191()
{
	Global_17099.f_134 = 1;
}

int func_192(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (iLocal_2600 != 12)
	{
		func_196(Param2, uParam0, uParam1);
	}
	if (!bLocal_466)
	{
		if (iLocal_2600 >= 6 && iLocal_2600 <= 11)
		{
			if (bParam26)
			{
				if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, 1, 1, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2600)
		{
			case 0:
				if (func_108(uParam1, uParam0, &iLocal_2602, 10, 90f, 100f, 0))
				{
					unk_0xB4226393A1696ACE(uParam1, 0);
					func_235(&Local_2347, 3, *uParam27, "TONYA", 0, 1);
					func_235(&Local_2347, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
					func_149(&Local_2347, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2600 = 1;
				}
				break;
			
			case 1:
				if (!func_41())
				{
					func_90("TOW_TUT_03", -1);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_2600 = 2;
				}
				break;
			
			case 2:
				if (iLocal_467)
				{
					unk_0xFD1E0AEC770DAF2E(1);
					iLocal_2600 = 4;
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (((unk_0x83666F9FB8FEBD4B() > 12000 || func_104(uParam0, uParam1, 1) < 15f) && func_104(uParam0, uParam1, 1) < 30f) && !func_41())
					{
						func_149(&Local_2347, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2600 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_467)
				{
					if (!func_41() && !func_96("TOW_TUT_03"))
					{
						func_195("TOW_TUT_02");
						iLocal_2600 = 4;
					}
				}
				else
				{
					iLocal_2600 = 4;
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 5000 || iLocal_467)
				{
					if ((unk_0x83666F9FB8FEBD4B() > 12000 || func_104(uParam0, uParam1, 1) < 7.5f) || (iLocal_467 && func_104(uParam0, uParam1, 1) < 30f))
					{
						iLocal_442 = 1;
						iLocal_442 = iLocal_442;
						func_195("TOW_TUT_01");
						iLocal_2600 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 8000)
				{
					iLocal_2600 = 6;
				}
				break;
			
			case 6:
				if ((!func_41() && !unk_0xCE3402BDFD2ADED8()) && unk_0x83666F9FB8FEBD4B() > 12000)
				{
					if (!iLocal_459)
					{
						func_90("TOWT_HELP_CR", -1);
						iLocal_459 = 1;
					}
				}
				if (unk_0x0852C405AF94F670(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					func_149(&Local_2347, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0x5660C8AFDD9C1721(*uParam22))
					{
						unk_0xF1D09F0F8B016765(*uParam22, 0);
						unk_0xB6FB9702660D84F6(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_429 = func_9(Param2.f_14, 0);
					*uParam22 = unk_0x64F646E6A974BF18(Param2.f_14);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_2600 = 7;
				}
				break;
			
			case 7:
				if (!func_41())
				{
					if (unk_0xC9D9444186B5A374() > 6000)
					{
						unk_0xC1B1E9A034A63A62(0);
						func_100("TOW_TUT_04A", 7500, 1);
						iLocal_2600 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2600 = 10;
				}
				if (!func_41())
				{
					if (unk_0x0852C405AF94F670(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_469 = unk_0x09560C7DE2A384BD();
						if (bLocal_443)
						{
							unk_0xF1D09F0F8B016765(*uParam22, 0);
							unk_0xB6FB9702660D84F6(uParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_429 = func_9(Param2.f_14, 0);
							*uParam22 = unk_0x64F646E6A974BF18(Param2.f_14);
						}
						if (unk_0x5660C8AFDD9C1721(*uParam22))
						{
							unk_0x1AD45E3CF020D50D(*uParam22, 5);
						}
						iLocal_2600 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (unk_0x0852C405AF94F670(uParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_90("TOWT_HELP_UH", -1);
					func_194();
					if (!unk_0xE44A580B551C3645(uParam0) && !unk_0xE44A580B551C3645(uParam1))
					{
						if (unk_0x2EF25A34B1247F72(iParam0, iParam1))
						{
							iLocal_2600 = 11;
						}
					}
				}
				else
				{
					func_193();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (unk_0x0852C405AF94F670(iParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_90("TOWT_HELP_UH", -1);
					func_194();
				}
				if (((unk_0x538DF9E5B1DF01EB(iParam0) && unk_0x538DF9E5B1DF01EB(iParam1)) && !unk_0xE44A580B551C3645(iParam0)) && !unk_0xE44A580B551C3645(iParam1))
				{
					if (!unk_0x2EF25A34B1247F72(iParam0, iParam1))
					{
						unk_0xFD1E0AEC770DAF2E(1);
						unk_0xEDC11454B9658FE1();
						func_131(&uLocal_398, 0, 0);
						iLocal_2600 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((unk_0x538DF9E5B1DF01EB(iParam0) && unk_0x538DF9E5B1DF01EB(iParam1)) && !unk_0xE44A580B551C3645(iParam0)) && !unk_0xE44A580B551C3645(iParam1))
			{
				if (unk_0x2EF25A34B1247F72(iParam0, iParam1) && !bLocal_2601)
				{
					if (func_41())
					{
						if (unk_0x11A809BBE3889742())
						{
							unk_0xFD1E0AEC770DAF2E(1);
						}
						func_150();
						iLocal_2600 = 6;
					}
					else
					{
						func_92(*uParam22);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_2600 = 6;
						func_149(&Local_2347, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2601 = true;
					}
				}
			}
			if (!iLocal_461)
			{
				if (bLocal_2601)
				{
					if (!func_41())
					{
						unk_0xFD1E0AEC770DAF2E(1);
						func_100("TOWT_OBJ_06", 7500, 1);
						iLocal_461 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_193()
{
	switch (iLocal_475)
	{
		case 0:
			if (!func_7(&uLocal_2524))
			{
				func_241(&uLocal_2524);
			}
			else if (func_4(&uLocal_2524) > 10f)
			{
				if (func_149(&uLocal_483, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_475 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_41())
			{
				if (func_149(&uLocal_483, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_53(&uLocal_2524);
					iLocal_475 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_2524))
			{
				if (func_4(&uLocal_2524) > 15f)
				{
					if (!func_41())
					{
						if (func_149(&uLocal_483, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_475 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_194()
{
	if (!iLocal_458)
	{
		if (!unk_0xCE3402BDFD2ADED8())
		{
			if (!func_41())
			{
				if (func_149(&uLocal_483, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_458 = 1;
				}
			}
		}
	}
}

void func_195(char* sParam0)
{
	unk_0xC1B1E9A034A63A62(0);
	func_90(sParam0, -1);
}

void func_196(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, int iParam21)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam20) || !unk_0x538DF9E5B1DF01EB(uParam21))
	{
		return;
	}
	if (unk_0xE44A580B551C3645(iParam20) || unk_0xE44A580B551C3645(iParam21))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var3 = { Param0.f_10 };
		uVar6 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var3 = { Param0.f_3 };
		uVar6 = Param0.f_6;
	}
	if (!iLocal_444)
	{
		if (unk_0x0852C405AF94F670(iParam21, Var0, Var3, uVar6, 0, 1, 0))
		{
			if (!unk_0xE44A580B551C3645(iParam20) && !unk_0xE44A580B551C3645(iParam21))
			{
				if (!unk_0x2EF25A34B1247F72(iParam20, iParam21))
				{
					unk_0xFD1E0AEC770DAF2E(1);
					unk_0xEDC11454B9658FE1();
					iLocal_2600 = 12;
					iLocal_444 = 1;
				}
			}
		}
	}
}

int func_197(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(uParam1))
	{
		iVar0 = (*uParam2 - unk_0x6360D2FA3AD62AD1(iParam1));
	}
	if (fLocal_427 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0x538DF9E5B1DF01EB(iParam1))
		{
			if (!unk_0xE44A580B551C3645(iParam1))
			{
				if ((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iParam1, 0)) || unk_0xBF8ADDCADFC4691E(iParam1, unk_0xA16EC202D9D35357(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0x538DF9E5B1DF01EB(iParam1))
				{
					*uParam2 = unk_0x6360D2FA3AD62AD1(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_149(&Local_2347, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_149(&Local_2347, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_427 = (fLocal_427 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_149(&Local_2347, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_149(&Local_2347, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_427 = (fLocal_427 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_149(&Local_2347, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_149(&Local_2347, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_427 = (fLocal_427 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0x538DF9E5B1DF01EB(iParam1))
	{
		*uParam2 = unk_0x6360D2FA3AD62AD1(iParam1);
	}
	return 0;
}

int func_198(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(uParam1))
	{
		iVar0 = (*uParam3 - unk_0x6360D2FA3AD62AD1(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0x538DF9E5B1DF01EB(iParam1) && unk_0x538DF9E5B1DF01EB(uParam2))
			{
				if (!unk_0xE44A580B551C3645(iParam1) && !unk_0xE44A580B551C3645(iParam2))
				{
					if ((unk_0x59C8BF753F6A2D1C(iParam1, iParam2) || unk_0x2EF25A34B1247F72(iParam2, iParam1)) || unk_0xBF8ADDCADFC4691E(iParam1, unk_0xA16EC202D9D35357(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0x538DF9E5B1DF01EB(iParam1))
					{
						*uParam3 = unk_0x6360D2FA3AD62AD1(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_200("TOW_DMG_01", 25, -1);
					func_199(func_21(), 1, 25);
					fLocal_427 = (fLocal_427 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_200("TOW_DMG_01", 75, -1);
					func_199(func_21(), 1, 75);
					fLocal_427 = (fLocal_427 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_90("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (unk_0x538DF9E5B1DF01EB(iParam1))
	{
		*uParam3 = unk_0x6360D2FA3AD62AD1(iParam1);
	}
	return 1;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_59(Global_97439.f_29795[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

void func_200(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x53B64327E3305DCB(iParam1);
	unk_0x644558F3AB755120(0, 0, 1, iParam2);
}

void func_201(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0x5660C8AFDD9C1721(*uParam1))
		{
			unk_0xB6FB9702660D84F6(uParam1);
		}
		*uParam5 = unk_0x09560C7DE2A384BD();
		bLocal_466 = !func_202(uParam0);
		return;
	}
	else if (!unk_0x5660C8AFDD9C1721(*uParam1) && bLocal_466)
	{
		*uParam1 = unk_0xDF78B7F06503567E(*uParam0);
		unk_0x1AD45E3CF020D50D(*uParam1, 3);
		unk_0xF1D09F0F8B016765(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_466)
		{
			if (!func_202(uParam0))
			{
				unk_0x17198835D4678BEE();
				*uParam5 = unk_0x09560C7DE2A384BD();
				if (bParam13)
				{
					if (iLocal_439)
					{
						func_100("DTRSHRD_03", 7500, 1);
						iLocal_439 = 0;
					}
					if (!unk_0x5660C8AFDD9C1721(*uParam1))
					{
						*uParam1 = unk_0xDF78B7F06503567E(*uParam0);
						unk_0x1AD45E3CF020D50D(*uParam1, 3);
						unk_0xF1D09F0F8B016765(*uParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0x5660C8AFDD9C1721((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0xF1D09F0F8B016765((uParam2[iVar0 /*20*/])->f_8, 0);
						unk_0xB6FB9702660D84F6(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0x5660C8AFDD9C1721((uParam2[0 /*20*/])->f_9))
				{
					unk_0xB6FB9702660D84F6(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_466 = true;
			}
		}
		else if (func_202(uParam0))
		{
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				unk_0xB6FB9702660D84F6(uParam1);
			}
			if (!unk_0x2DE0B96E966FD817((*uParam2)[0 /*20*/]))
			{
				if (!unk_0xAD203DB71ADF6E57((*uParam2)[0 /*20*/], *uParam0, 0) && !unk_0xAD203DB71ADF6E57((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0x5660C8AFDD9C1721((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0xDF78B7F06503567E((*uParam2)[iVar0 /*20*/]);
						unk_0x1AD45E3CF020D50D((uParam2[0 /*20*/])->f_9, 3);
						unk_0xBE97A5A41C1F5C4C((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_440)
			{
				func_100(sParam4, 7500, 1);
				iLocal_440 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0x5660C8AFDD9C1721((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x64F646E6A974BF18(*(uParam3[0 /*3*/]));
					unk_0xF1D09F0F8B016765((uParam2[0 /*20*/])->f_8, 1);
				}
			}
			else if (bParam7)
			{
				if (!unk_0xE44A580B551C3645((uParam2[iParam6 /*20*/])->f_6))
				{
					if (!unk_0x5660C8AFDD9C1721((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0xDF78B7F06503567E((uParam2[iParam6 /*20*/])->f_6);
						unk_0x1AD45E3CF020D50D((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0xF1D09F0F8B016765((uParam2[0 /*20*/])->f_8, 1);
					}
				}
				else
				{
					if (iLocal_419 == 3)
					{
						Local_649[iLocal_2603 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!unk_0x5660C8AFDD9C1721((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x64F646E6A974BF18(Local_649[iLocal_2603 /*23*/].f_1);
						unk_0x1AD45E3CF020D50D((uParam2[0 /*20*/])->f_8, 3);
						unk_0xF1D09F0F8B016765((uParam2[0 /*20*/])->f_8, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0xE44A580B551C3645((uParam2[iVar0 /*20*/])->f_6))
					{
						if (!unk_0x5660C8AFDD9C1721((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0xDF78B7F06503567E((uParam2[iVar0 /*20*/])->f_6);
							unk_0x1AD45E3CF020D50D((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0xF1D09F0F8B016765((uParam2[iVar0 /*20*/])->f_8, 1);
						}
					}
					else
					{
						if (iLocal_419 == 3)
						{
							Local_649[iLocal_2603 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!unk_0x5660C8AFDD9C1721((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x64F646E6A974BF18(Local_649[iLocal_2603 /*23*/].f_1);
							unk_0x1AD45E3CF020D50D((uParam2[0 /*20*/])->f_8, 3);
							unk_0xF1D09F0F8B016765((uParam2[0 /*20*/])->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_466 = false;
		}
	}
}

int func_202(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				if (unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) != *uParam0)
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
	return 1;
}

void func_203()
{
	int iVar0;
	
	iVar0 = func_21();
	if (iVar0 != 1)
	{
		func_171();
	}
}

void func_204(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xA152BE858C442B26() >= (uParam0->f_272 + uParam0->f_273) || unk_0x889D01384B54BCE3(Global_90042.f_20, 2)) || unk_0x889D01384B54BCE3(Global_90042.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 29))
					{
						func_205(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xA152BE858C442B26();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_205(var uParam0)
{
	func_206(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_206(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0x889D01384B54BCE3(*uParam0, 30))
	{
		switch (func_207(*uParam0))
		{
			case 0:
				unk_0x939DA7EBCC6588FF(uParam2);
				break;
			
			case 1:
				unk_0x3D28909AF30D70F4(uParam1);
				break;
			
			case 2:
				unk_0x660D567D3EB18812(uParam1);
				break;
			
			case 3:
				unk_0x52964052BC489DDD(uParam1, unk_0x889D01384B54BCE3(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDF529DC50AE6BC93(uParam2, uParam1);
				break;
			
			case 5:
				unk_0xB3F2C2105E254F2B(uParam1);
				break;
			
			case 6:
				unk_0x45B7DFCE888B2A02(uParam1, unk_0x889D01384B54BCE3(*uParam0, 27));
				break;
			
			case 7:
				unk_0x2EDAAB9A8F7BCA0B(uParam2);
				break;
			
			case 8:
				unk_0x95AB598E6554985B(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xE8C49E8D4B533F7D();
				break;
			
			default:
				break;
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 29);
	}
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x889D01384B54BCE3(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_208()
{
	if (Global_3069[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 25);
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 11);
}

void func_209(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_232();
	uLocal_2607 = func_231();
	if (uParam0->f_3 == 3)
	{
		sLocal_2619[0] = "base";
		func_229(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		func_229(&uLocal_2647, "oddjobs@towingcome_here");
		func_229(&uLocal_2647, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2958)
	{
		func_229(&uLocal_2647, "Ped");
		func_229(&uLocal_2647, "oddjobs@towing");
		func_229(&uLocal_2647, "oddjobs@towingangryidle_a");
		func_229(&uLocal_2647, "oddjobs@towingpleadingidle_b");
		func_229(&uLocal_2647, "oddjobs@towingpleadingidle_a");
		func_229(&uLocal_2647, "move_m@JOG@");
	}
	else if (bLocal_2958)
	{
		func_229(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		func_229(&uLocal_2647, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_229(&uLocal_2647, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2618 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_229(&uLocal_2647, sLocal_2618);
		func_227(&uLocal_2637, joaat("ambulance"));
		func_227(&uLocal_2637, joaat("s_m_m_paramedic_01"));
		sLocal_2619[0] = "react_big_variations_a";
		sLocal_2619[1] = "react_big_variations_b";
		sLocal_2619[2] = "react_big_variations_c";
		func_229(&uLocal_2647, "move_m@JOG@");
	}
	unk_0x32DC163A33A4AB6D(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		unk_0xE8C49E8D4B533F7D();
		func_229(&uLocal_2647, "oddjobs@towing");
		func_229(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		func_229(&uLocal_2647, "oddjobs@towingpleadingidle_b");
		func_227(&uLocal_2637, joaat("freightcont1"));
		func_227(&uLocal_2637, joaat("tankercar"));
		func_227(&uLocal_2637, joaat("freight"));
		func_227(&uLocal_2637, joaat("freightcar"));
		func_227(&uLocal_2637, joaat("s_m_m_lsmetro_01"));
		func_227(&uLocal_2637, joaat("a_f_m_bevhills_01"));
		func_227(&uLocal_2637, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_226();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_2986[iVar0] = Local_649[iLocal_2603 /*23*/].f_20;
	}
	else
	{
		func_225();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2986[iVar0] == 0)
		{
			iLocal_2986[iVar0] = func_223(&iLocal_2986, &iLocal_81, 10);
			unk_0x648ADF4C7FD7F710(iLocal_2986[iVar0], 3);
		}
		if (bLocal_2964)
		{
			iLocal_2986[iVar0] = joaat("landstalker");
			func_227(&uLocal_2637, iLocal_2986[iVar0]);
			unk_0x648ADF4C7FD7F710(iLocal_2986[iVar0], 3);
		}
		else if (iLocal_2986[iVar0] != 0)
		{
			func_227(&uLocal_2637, iLocal_2986[iVar0]);
			unk_0x648ADF4C7FD7F710(iLocal_2986[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2958 && iLocal_2961)
	{
		if (bLocal_2964)
		{
			func_222(&iVar1);
			iLocal_73 = joaat("a_m_m_tranvest_01");
			iLocal_73 = iLocal_73;
			func_227(&uLocal_2637, iLocal_73);
		}
		else if (bLocal_2965)
		{
			func_221(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_220(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_2964)
		{
			func_220(&iVar1, 1);
		}
		else
		{
			func_220(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_2988[iVar0] = func_223(&uLocal_2988, &iLocal_74, iVar1);
			if (uLocal_2988[iVar0] != 0)
			{
				func_227(&uLocal_2637, uLocal_2988[iVar0]);
			}
			iVar0++;
		}
	}
	func_227(&uLocal_2637, iLocal_648);
	func_219(&uLocal_2655, "TOW", 2, 0);
	func_219(&uLocal_2655, "DTRSHRD", 3, 0);
	func_218(&uLocal_2637);
	func_215(&uLocal_2647, &uLocal_2655);
	while (!unk_0xC8378A96673BCC40(uLocal_2607))
	{
		func_204(&uLocal_2655);
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_214(&uLocal_2637) || !unk_0x8AFC458D338220C6(iLocal_2986[0]))
	{
		func_204(&uLocal_2655);
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_210(&uLocal_2655))
	{
		func_204(&uLocal_2655);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0x45B7DFCE888B2A02("SCRIPT\TOWING_TRAIN", false) || !unk_0xEA01082BB3EA9C37())
		{
			func_204(&uLocal_2655);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	while (!unk_0x5CD78FA34B48CB6E(2) || !unk_0x5CD78FA34B48CB6E(3))
	{
		func_204(&uLocal_2655);
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_210(var uParam0)
{
	return func_211(uParam0);
}

int func_211(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_212(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_212(var uParam0)
{
	return func_213(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_213(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x889D01384B54BCE3(uParam0, 30))
	{
		if (unk_0x889D01384B54BCE3(iParam0, 29))
		{
			switch (func_207(iParam0))
			{
				case 0:
					return unk_0x5494F37F35C1D7D7(uParam2);
					break;
				
				case 1:
					return unk_0x6C47E32491756A1A(uParam1);
					break;
				
				case 2:
					return unk_0x307330CEB84DD3AE(uParam1);
					break;
				
				case 3:
					return unk_0xDC8071F347A8DD3F(uParam1);
					break;
				
				case 4:
					return unk_0x0C73411A25059A28(uParam2, uParam1);
					break;
				
				case 5:
					return unk_0xBE56E3F122265AAC(uParam1);
					break;
				
				case 6:
					return unk_0x45B7DFCE888B2A02(uParam1, unk_0x889D01384B54BCE3(iParam0, 27));
					break;
				
				case 7:
					return unk_0xACFDEC9C39CAD932(uParam2);
					break;
				
				case 8:
					return unk_0x5CD78FA34B48CB6E(uParam2);
					break;
				
				case 9:
					return unk_0xEA01082BB3EA9C37();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_214(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x5494F37F35C1D7D7((*uParam0)[iVar0]))
			{
				if (!unk_0x5494F37F35C1D7D7((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_215(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x8CD18E96F1984EE6((*uParam0)[iVar0]))
		{
			func_216(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_216(var uParam0, char* sParam1)
{
	func_217(uParam0, 1, -1, sParam1, 0);
}

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x9BA82E09A986BA4B(sParam3, "NULL"))
					{
						if (unk_0x9BA82E09A986BA4B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*18*/], iParam1);
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_218(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x939DA7EBCC6588FF((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_219(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0xD0E2BFCE93AE3ABD(&uVar0, 26);
	}
	func_217(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_74[0] = joaat("a_m_y_genstreet_02");
		iLocal_74[1] = joaat("a_m_y_beach_03");
		iLocal_74[2] = joaat("g_m_y_salvagoon_01");
		iLocal_74[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_74[0] = joaat("a_f_m_bevhills_01");
		iLocal_74[1] = joaat("a_m_y_genstreet_02");
		iLocal_74[2] = joaat("a_f_y_hipster_02");
		iLocal_74[3] = joaat("a_m_y_beach_03");
		iLocal_74[4] = joaat("s_f_y_sweatshop_01");
		iLocal_74[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_221(var uParam0)
{
	iLocal_74[0] = joaat("a_m_m_tramp_01");
	iLocal_74[1] = joaat("a_m_y_methhead_01");
	iLocal_74[2] = joaat("a_m_m_tramp_01");
	iLocal_74[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_222(var uParam0)
{
	iLocal_74[0] = joaat("a_m_y_yoga_01");
	iLocal_74[1] = joaat("a_m_y_beach_03");
	iLocal_74[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_223(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x444ECD635D5FD45F(0, (iParam2 - 1));
	while (func_224((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = unk_0x444ECD635D5FD45F(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_224(int iParam0, var uParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_225()
{
	iLocal_81[0] = joaat("tailgater");
	iLocal_81[1] = joaat("asterope");
	iLocal_81[2] = joaat("primo");
	iLocal_81[3] = joaat("primo");
	iLocal_81[4] = joaat("schwarzer");
	iLocal_81[5] = joaat("emperor");
	iLocal_81[6] = joaat("premier");
	iLocal_81[7] = joaat("buffalo");
	iLocal_81[8] = joaat("intruder");
	iLocal_81[9] = joaat("intruder");
}

void func_226()
{
	iLocal_81[0] = joaat("buccaneer");
	iLocal_81[1] = joaat("voodoo2");
	iLocal_81[2] = joaat("manana");
	iLocal_81[3] = joaat("ruiner");
	iLocal_81[4] = joaat("ruiner");
	iLocal_81[5] = joaat("voodoo2");
	iLocal_81[6] = joaat("surfer2");
	iLocal_81[7] = joaat("emperor2");
	iLocal_81[8] = joaat("stanier");
	iLocal_81[9] = joaat("tailgater");
}

int func_227(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_228(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_228(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_229(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x8CD18E96F1984EE6((*uParam0)[iVar0]))
		{
			if (unk_0x9BA82E09A986BA4B((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_230(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_230(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x8CD18E96F1984EE6((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_231()
{
	return unk_0x36ECDA4DD9A3F08D("MIDSIZED_MESSAGE");
}

void func_232()
{
	func_276(&uLocal_411, 1);
}

void func_233()
{
	switch (iLocal_419)
	{
		case 2:
			if ((Global_97439.f_18227.f_4 % 2) == 0)
			{
				sLocal_2623 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2623 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2623 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_2964)
			{
			}
			else
			{
				sLocal_2623 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_2623 = "TOWTRAINM";
			break;
	}
}

int func_234()
{
	return Local_649[iLocal_2603 /*23*/].f_22;
}

void func_235(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_236()
{
	iLocal_419 = func_238(Global_97439.f_18227.f_2);
	if (!func_237(iLocal_419))
	{
		iLocal_419 = 3;
	}
	if (iLocal_419 == 3)
	{
	}
	else
	{
		iLocal_2603 = func_240(1300f, iLocal_419, Global_97439.f_18227.f_9);
		Global_97439.f_18227.f_9 = iLocal_2603;
	}
	if (iLocal_2603 == 0)
	{
		iLocal_419 = 3;
	}
	Global_97439.f_18227.f_2 = iLocal_419;
}

int func_237(int iParam0)
{
	iLocal_2603 = func_240(1300f, iParam0, Global_97439.f_18227.f_9);
	if (iLocal_2603 == -1)
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_97439.f_18227.f_4 < iVar0)
		{
			iVar0 = Global_97439.f_18227.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_97439.f_18227.f_6 < iVar0)
		{
			iVar0 = Global_97439.f_18227.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_97439.f_18227.f_5 < iVar0)
		{
			iVar0 = Global_97439.f_18227.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_97439.f_18227.f_7 < iVar0)
		{
			iVar0 = Global_97439.f_18227.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_97439.f_18227.f_8 < iVar0)
		{
			iVar0 = Global_97439.f_18227.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_239()
{
	if (Global_90042 == 10 || Global_90042 == 9)
	{
		return 1;
	}
	return 0;
}

int func_240(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar57;
	int iVar58;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53)
	{
		fVar2 = func_9(Local_649[iVar58 /*23*/].f_1, 1);
		if (!func_11(Local_649[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_649[iVar58 /*23*/] == iParam1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1)
	{
		iVar1 = iVar3[unk_0x444ECD635D5FD45F(0, (iVar57 - 1))];
	}
	else if (iVar57 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_241(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_53(uParam0);
	}
}

void func_242()
{
	Local_44[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_44[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_44[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_44[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_44[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	Local_44[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_44[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_44[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	Local_69[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_243(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_244(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_245()
{
	char* sVar0;
	
	if (iLocal_3114 < 16)
	{
		unk_0xEDC11454B9658FE1();
		unk_0x0D68C13151B68364(1);
		func_276(&Global_96092, 3);
		switch (iLocal_3083)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!unk_0x06771AF7795B3ECF(sVar0))
		{
			func_248(sVar0);
		}
		func_247();
		func_249(unk_0x7E5A426328F6E635());
		while (!func_246())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_171();
	}
}

int func_246()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_90042 == 7 || Global_90042 == 8)
	{
		return 1;
	}
	return 0;
}

void func_247()
{
	Global_90077 = 1;
	if (unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1))
	{
		if (unk_0x06771AF7795B3ECF(&Global_68557))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_68557, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68557, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68557, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68561, "", 16);
		}
		Global_90077 = 0;
	}
	else if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x06771AF7795B3ECF(&Global_68557))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_68557, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68557, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68557, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68561, "", 16);
		}
		Global_90077 = 0;
		unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 25);
	}
}

void func_248(char* sParam0)
{
	if (!unk_0x06771AF7795B3ECF(sParam0))
	{
		if (unk_0x77FAE22505910E89(sParam0) <= 16)
		{
			StringCopy(&Global_68557, sParam0, 16);
			StringCopy(&Global_68561, "", 16);
			if (unk_0xAC1A8CD5F370307D())
			{
				unk_0x273D4B19675FB905();
			}
		}
	}
}

void func_249(char* sParam0)
{
	if (Global_90042 != 12)
	{
		func_250(sParam0, 5, -1);
	}
}

int func_250(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_273();
	func_272();
	Global_90042 = 0;
	StringCopy(&(Global_90042.f_3), sParam0, 32);
	Global_90042.f_11 = iParam1;
	unk_0xEFDB2ECE44F69921(1);
	unk_0x0E6864E17BE73921(0);
	unk_0x55904BA1B8D77456(0);
	func_270(1);
	func_268(1);
	func_265(0);
	func_264(1);
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 9);
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 6);
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 20);
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 21);
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 5);
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if (unk_0xF2530FE8E8353E7B(uVar0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 5);
				}
			}
		}
	}
	unk_0xFD1E0AEC770DAF2E(1);
	unk_0xEDC11454B9658FE1();
	func_263(0);
	func_262(1);
	Global_90042.f_2 = Global_90079;
	if (func_261())
	{
		if (func_260())
		{
			if (Global_90079 >= func_257())
			{
				if (!unk_0x889D01384B54BCE3(Global_81235[iParam2 /*34*/].f_15, 16))
				{
					if (Global_97439.f_7341.f_328[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84623 = 1;
					}
				}
			}
		}
		else if (Global_90042.f_11 == 6)
		{
			func_252(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_97439.f_16828[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84623 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_251(unk_0x7E5A426328F6E635());
			if (iVar33 > -1)
			{
				if (Global_97439.f_28183.f_4[iVar33] >= 2)
				{
					Global_84623 = 1;
				}
			}
		}
	}
	return 1;
}

int func_251(char* sParam0)
{
	if (unk_0x9BA82E09A986BA4B("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x9BA82E09A986BA4B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x9BA82E09A986BA4B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_252(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_253(uParam1, "Abigail1", func_255(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 1:
			func_253(uParam1, "Abigail2", func_255(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 2:
			func_253(uParam1, "Barry1", func_255(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 3:
			func_253(uParam1, "Barry2", func_255(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_254(iParam0), 1, 1);
			break;
		
		case 4:
			func_253(uParam1, "Barry3", func_255(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 5:
			func_253(uParam1, "Barry3A", func_255(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 6:
			func_253(uParam1, "Barry3C", func_255(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 7:
			func_253(uParam1, "Barry4", func_255(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_254(iParam0), 0, 0);
			break;
		
		case 8:
			func_253(uParam1, "Dreyfuss1", func_255(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 9:
			func_253(uParam1, "Epsilon1", func_255(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 10:
			func_253(uParam1, "Epsilon2", func_255(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 11:
			func_253(uParam1, "Epsilon3", func_255(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 12:
			func_253(uParam1, "Epsilon4", func_255(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 13:
			func_253(uParam1, "Epsilon5", func_255(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 14:
			func_253(uParam1, "Epsilon6", func_255(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 15:
			func_253(uParam1, "Epsilon7", func_255(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 16:
			func_253(uParam1, "Epsilon8", func_255(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 17:
			func_253(uParam1, "Extreme1", func_255(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 18:
			func_253(uParam1, "Extreme2", func_255(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 19:
			func_253(uParam1, "Extreme3", func_255(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 20:
			func_253(uParam1, "Extreme4", func_255(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 21:
			func_253(uParam1, "Fanatic1", func_255(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_254(iParam0), 1, 0);
			break;
		
		case 22:
			func_253(uParam1, "Fanatic2", func_255(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_254(iParam0), 1, 0);
			break;
		
		case 23:
			func_253(uParam1, "Fanatic3", func_255(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_254(iParam0), 0, 1);
			break;
		
		case 24:
			func_253(uParam1, "Hao1", func_255(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_254(iParam0), 0, 1);
			break;
		
		case 25:
			func_253(uParam1, "Hunting1", func_255(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 26:
			func_253(uParam1, "Hunting2", func_255(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 27:
			func_253(uParam1, "Josh1", func_255(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 28:
			func_253(uParam1, "Josh2", func_255(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_254(iParam0), 1, 1);
			break;
		
		case 29:
			func_253(uParam1, "Josh3", func_255(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_254(iParam0), 1, 1);
			break;
		
		case 30:
			func_253(uParam1, "Josh4", func_255(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 31:
			func_253(uParam1, "Maude1", func_255(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 32:
			func_253(uParam1, "Minute1", func_255(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 33:
			func_253(uParam1, "Minute2", func_255(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 34:
			func_253(uParam1, "Minute3", func_255(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 35:
			func_253(uParam1, "MrsPhilips1", func_255(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 36:
			func_253(uParam1, "MrsPhilips2", func_255(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 37:
			func_253(uParam1, "Nigel1", func_255(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 38:
			func_253(uParam1, "Nigel1A", func_255(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_254(iParam0), 1, 1);
			break;
		
		case 39:
			func_253(uParam1, "Nigel1B", func_255(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_254(iParam0), 1, 1);
			break;
		
		case 40:
			func_253(uParam1, "Nigel1C", func_255(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_254(iParam0), 1, 1);
			break;
		
		case 41:
			func_253(uParam1, "Nigel1D", func_255(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_254(iParam0), 1, 1);
			break;
		
		case 42:
			func_253(uParam1, "Nigel2", func_255(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_254(iParam0), 1, 1);
			break;
		
		case 43:
			func_253(uParam1, "Nigel3", func_255(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_254(iParam0), 1, 1);
			break;
		
		case 44:
			func_253(uParam1, "Omega1", func_255(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 45:
			func_253(uParam1, "Omega2", func_255(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 46:
			func_253(uParam1, "Paparazzo1", func_255(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 47:
			func_253(uParam1, "Paparazzo2", func_255(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 48:
			func_253(uParam1, "Paparazzo3", func_255(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 49:
			func_253(uParam1, "Paparazzo3A", func_255(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 50:
			func_253(uParam1, "Paparazzo3B", func_255(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 51:
			func_253(uParam1, "Paparazzo4", func_255(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 52:
			func_253(uParam1, "Rampage1", func_255(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 54:
			func_253(uParam1, "Rampage3", func_255(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 55:
			func_253(uParam1, "Rampage4", func_255(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 56:
			func_253(uParam1, "Rampage5", func_255(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_254(iParam0), 0, 0);
			break;
		
		case 53:
			func_253(uParam1, "Rampage2", func_255(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_254(iParam0), 1, 0);
			break;
		
		case 57:
			func_253(uParam1, "TheLastOne", func_255(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 58:
			func_253(uParam1, "Tonya1", func_255(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 59:
			func_253(uParam1, "Tonya2", func_255(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 60:
			func_253(uParam1, "Tonya3", func_255(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 61:
			func_253(uParam1, "Tonya4", func_255(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		case 62:
			func_253(uParam1, "Tonya5", func_255(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_254(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_253(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_255(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_256(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_256(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_257()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_258(&(Global_90042.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_258(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB793F1A0B6CC4AE1(uParam0);
	iVar1 = func_259(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_259(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_81235[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_260()
{
	if ((((Global_90042.f_11 == 0 || Global_90042.f_11 == 1) || Global_90042.f_11 == 2) || Global_90042.f_11 == 3) || Global_90042.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	if ((((Global_90042.f_11 == 0 || Global_90042.f_11 == 1) || Global_90042.f_11 == 2) || Global_90042.f_11 == 6) || Global_90042.f_11 == 3)
	{
		return 1;
	}
	if (Global_90042.f_11 == 5)
	{
		if (func_251(&(Global_90042.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_262(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_35464 = 1;
	}
	else
	{
		Global_35464 = 0;
	}
}

void func_263(int iParam0)
{
	unk_0x6853F2DD1CFD3CA2(iParam0);
	unk_0xA0ED52A12ED3E5E5(iParam0);
}

void func_264(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xADD1FEC2646B4ECF();
		unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 3);
	}
	else if (unk_0x889D01384B54BCE3(Global_90042.f_20, 3))
	{
		unk_0x5C6ECA43D8ACED5D();
		unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 3);
	}
}

void func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x889D01384B54BCE3(Global_90042.f_20, 4))
		{
			func_267();
			unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 4);
		}
	}
	else
	{
		func_266();
		unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 4);
	}
}

void func_266()
{
	Global_17099.f_5 = 1;
}

void func_267()
{
	Global_17099.f_5 = 0;
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		func_269();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_140(0))
		{
			func_270(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_269()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

void func_270(int iParam0)
{
	if (Global_14552)
	{
		func_271(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_18())
	{
		Global_14394.f_1 = 3;
	}
}

void func_271(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_140(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

void func_272()
{
	Global_84623 = 0;
	Global_84624 = 0;
}

void func_273()
{
	Global_90042 = 13;
	Global_90042.f_1 = -1;
	Global_90042.f_2 = 0;
	Global_90042.f_30 = 0f;
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 25);
	Global_90076 = 0;
	func_262(0);
	func_275();
	func_274();
	Global_90042.f_18 = -1;
	Global_90042.f_19 = -1;
}

void func_274()
{
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 22);
	unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 8);
}

void func_275()
{
	if (Global_90042.f_16 != 0)
	{
		unk_0x7559DFAB61B017F2(&(Global_90042.f_16));
		Global_90042.f_16 = 0;
	}
	if (Global_90042.f_17 != 0)
	{
		unk_0x7559DFAB61B017F2(&(Global_90042.f_17));
		Global_90042.f_17 = 0;
	}
}

void func_276(var uParam0, int iParam1)
{
	func_277(uParam0, iParam1);
}

void func_277(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_278()
{
	if (((Global_90042 == 13 || Global_90042 == 10) || Global_90042 == 11) || Global_90042 == 12)
	{
		return 0;
	}
	return 1;
}

