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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45[8];
	struct<3> Local_70[1];
	int iLocal_74 = 0;
	int iLocal_75[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_82[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<165> Local_96 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_271 = 0;
	char cLocal_272[16] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	char cLocal_276[16] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	struct<3> Local_280[12];
	char cLocal_317[32] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 1132396544;
	var uLocal_328 = 1132396544;
	var uLocal_329 = 1132396544;
	var uLocal_330 = 0;
	var uLocal_331 = -1082130432;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 8;
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
	var uLocal_390 = 0;
	var uLocal_391 = -1;
	var uLocal_392 = 1092616192;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	bool bLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1000;
	var uLocal_409 = 1000;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 1097859072;
	var uLocal_415 = 1500;
	var uLocal_416 = 45;
	var uLocal_417 = 1103626240;
	var uLocal_418 = 5;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	bool bLocal_427 = 0;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	struct<3> Local_437 = { 0, 0, 0 } ;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	int iLocal_443 = 0;
	bool bLocal_444 = 0;
	int iLocal_445 = 0;
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
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	var uLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	bool bLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	bool bLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	bool bLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	int iLocal_476 = 0;
	struct<6> Local_477 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_483 = NULL;
	var uLocal_484 = 16;
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
	var uLocal_648 = 0;
	int iLocal_649 = 0;
	struct<23> Local_650[53];
	struct<28> Local_1870[17];
	var uLocal_2347 = 0;
	struct<165> Local_2348 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_2530 = 0;
	struct<3> Local_2531 = { 0, 0, 0 } ;
	float fLocal_2534 = 0f;
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
	var uLocal_2555 = 0;
	struct<18> Local_2556[2];
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	float fLocal_2600 = 0f;
	int iLocal_2601 = 0;
	bool bLocal_2602 = 0;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	int iLocal_2606 = 0;
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
	var uLocal_2617 = 0;
	char* sLocal_2618 = NULL;
	char* sLocal_2619 = NULL;
	char* sLocal_2620[3] = { NULL, NULL, NULL };
	char* sLocal_2624 = NULL;
	struct<3> Local_2625[1];
	struct<3> Local_2629 = { 0, 0, 0 } ;
	struct<3> Local_2632 = { 0, 0, 0 } ;
	struct<3> Local_2635 = { 0, 0, 0 } ;
	var uLocal_2638 = 9;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 7;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 15;
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
	var uLocal_2928 = 0;
	var uLocal_2929 = 1;
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	int iLocal_2934 = 0;
	bool bLocal_2935 = 0;
	bool bLocal_2936 = 0;
	int iLocal_2937 = 0;
	int iLocal_2938 = 0;
	bool bLocal_2939 = 0;
	bool bLocal_2940 = 0;
	int iLocal_2941 = 0;
	bool bLocal_2942 = 0;
	bool bLocal_2943 = 0;
	var uLocal_2944 = 0;
	bool bLocal_2945 = 0;
	int iLocal_2946 = 0;
	int iLocal_2947 = 0;
	bool bLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	int iLocal_2953 = 0;
	int iLocal_2954 = 0;
	var uLocal_2955 = 0;
	bool bLocal_2956 = 0;
	bool bLocal_2957 = 0;
	bool bLocal_2958 = 0;
	bool bLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	int iLocal_2962 = 0;
	int iLocal_2963 = 0;
	bool bLocal_2964 = 0;
	bool bLocal_2965 = 0;
	bool bLocal_2966 = 0;
	int iLocal_2967 = 0;
	bool bLocal_2968 = 0;
	var uLocal_2969 = 0;
	bool bLocal_2970 = 0;
	bool bLocal_2971 = 0;
	int iLocal_2972 = 0;
	bool bLocal_2973 = 0;
	int iLocal_2974 = 0;
	int iLocal_2975 = 0;
	int iLocal_2976 = 0;
	int iLocal_2977 = 0;
	int iLocal_2978 = 0;
	bool bLocal_2979 = 0;
	var uLocal_2980[2] = { 0, 0 };
	int iLocal_2983 = 0;
	int iLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	int iLocal_2987[1] = { 0 };
	var uLocal_2989[2] = { 0, 0 };
	int iLocal_2992 = 0;
	struct<2> Local_2993 = { 0, 0 } ;
	var uLocal_2995 = 0;
	struct<20> Local_2996[1];
	struct<7> Local_3017 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	int iLocal_3040 = 0;
	int iLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	int iLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	int iLocal_3050 = 0;
	int iLocal_3051 = 0;
	int iLocal_3052 = 0;
	int iLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	struct<3> Local_3060 = { 0, 0, 0 } ;
	struct<3> Local_3063 = { 0, 0, 0 } ;
	float fLocal_3066 = 0f;
	float fLocal_3067 = 0f;
	char cLocal_3068[64] = "";
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	int iLocal_3084 = 0;
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
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	int iLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	char* sLocal_3114 = NULL;
	int iLocal_3115 = 0;
	var uLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	int iLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 8;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	int iLocal_3136 = 0;
	bool bLocal_3137 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_93 = { 500f, 500f, 500f };
	fLocal_428 = 0f;
	fLocal_429 = 0f;
	fLocal_430 = 0f;
	fLocal_431 = 0.8f;
	fLocal_432 = 1.5f;
	fLocal_433 = 0.5f;
	Local_437 = { 401.55f, -1631.309f, 29.3f };
	iLocal_440 = 1;
	iLocal_441 = 1;
	iLocal_649 = joaat("towtruck");
	Local_2531 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2534 = 275.5635f;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	fLocal_2600 = 0f;
	sLocal_2618 = "";
	sLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2931 = 1;
	iLocal_2932 = 1;
	iLocal_2933 = 1;
	iLocal_2941 = 1;
	iLocal_2976 = 1;
	iLocal_3037 = -1;
	Local_3060 = { -229.8159f, -1172f, 21.8557f };
	iLocal_3115 = 1;
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(67))
	{
		if (!func_278())
		{
			func_276(&Global_100353, 3);
			func_249(unk_0x6AF6B39BFDB53CB5());
		}
		func_245();
	}
	if (unk_0x23E9113C762466ED(ScriptParam_0.f_0) && unk_0x23E9113C762466ED(ScriptParam_0.f_1))
	{
		if (!unk_0xA929B2923D14E2F8(ScriptParam_0.f_0, 0) && !unk_0xA929B2923D14E2F8(ScriptParam_0.f_1, 0))
		{
			unk_0xF0F77C99098F999B(ScriptParam_0.f_0, 1, 1);
			unk_0xF0F77C99098F999B(ScriptParam_0.f_1, 1, 1);
		}
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	}
	func_244(&Local_650);
	func_243(&Local_1870);
	func_242();
	iVar0 = 0;
	func_241(&uLocal_3091);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_420 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2604 = iVar0;
				}
				else
				{
					iLocal_2604 = func_240(100000f, iLocal_420, Global_101700.f_18932.f_9);
				}
			}
			else
			{
				if (Global_101700.f_18932.f_3 == 0)
				{
					bLocal_2959 = true;
				}
				if (!func_239())
				{
					func_236();
				}
				else
				{
					iLocal_2604 = Global_101700.f_18932.f_9;
					iLocal_420 = Global_101700.f_18932.f_2;
				}
				ScriptParam_0.f_3 = iLocal_420;
			}
			iLocal_2992 = 0;
			break;
	}
	if (!bLocal_2959)
	{
		func_235(&Local_2348, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_420 == 0)
	{
		iLocal_2962 = 1;
		if ((Global_101700.f_18932.f_6 % 2) == 0)
		{
			bLocal_2965 = true;
		}
	}
	else if (iLocal_420 == 2)
	{
		bLocal_2966 = true;
		iLocal_2962 = 1;
	}
	if (iLocal_420 == 3 || iLocal_420 == 1)
	{
		iLocal_2961 = 1;
		iLocal_2962 = 1;
		iLocal_3051 = 1;
	}
	else if (iLocal_420 == 4)
	{
		iLocal_2962 = 1;
		iLocal_3051 = Local_1870[func_234() /*28*/].f_27;
	}
	func_233();
	func_209(&ScriptParam_0);
	if (Global_101700.f_18932.f_3 >= 5)
	{
		bLocal_2945 = true;
		bLocal_2945 = bLocal_2945;
	}
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iLocal_3109 = ScriptParam_0.f_1;
			uVar1 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x23E9113C762466ED(uVar1) && !unk_0xA929B2923D14E2F8(iVar1, 0))
			{
				if (unk_0x0324EEB10F81965F(iVar1) == joaat("towtruck") || unk_0x0324EEB10F81965F(iVar1) == joaat("towtruck2"))
				{
					iLocal_3109 = iVar1;
				}
			}
		}
	}
	unk_0x73624B45C8E405BA(0);
	unk_0x000E46314C3A507F(0.2f);
	if (unk_0x23E9113C762466ED(iLocal_3109))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0))
		{
			unk_0xF0F77C99098F999B(iLocal_3109, 1, 1);
			unk_0x26C9531CF391AB1D(iLocal_3109);
			unk_0xEC2A26A6CA02C73C(iLocal_3109, 0);
			unk_0x2B9B4DCEF80D1566(iLocal_3109, 1);
		}
	}
	uLocal_3112 = unk_0xD1D19967E553E144(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_3113 = unk_0xD1D19967E553E144(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	unk_0xB82FD68B5DE68F01(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 0, 1);
	unk_0x862504E4C5E80C78(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 0);
	func_208();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_204(&uLocal_2656);
		func_203();
		unk_0x271C07D02388CBCB(unk_0xBE369BE1BC57A796());
		if (bLocal_2945 && !unk_0x9CE8181CB6710437(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x25BD4C26D84038CD())
			{
				unk_0xAEA344F4AC19514E(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!unk_0xDDF188456A3373B2())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				unk_0x772E33FE6031D858();
				unk_0xBA7CD73403732191(0);
				unk_0x503F20CB07C55470(0, 1065353216);
				unk_0x0668B21A0C3A4821(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, 0);
				unk_0xC7845898207D067F(500);
			}
		}
		if (iLocal_3115 < 15)
		{
			func_201(&iLocal_3109, &uLocal_2985, &Local_2996, &Local_2625, &cLocal_3068, &iLocal_3052, iLocal_3047, bLocal_2958, &iLocal_2967, iLocal_2949, bLocal_2939, bLocal_461, iLocal_3115, 1);
		}
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			switch (iLocal_2992)
			{
				case 0:
					if (iLocal_3115 > 4 && iLocal_3115 < 15)
					{
						if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_3109, 0))
						{
						}
						if (iLocal_420 != 2 && iLocal_420 != 4)
						{
							if (!func_198(&uLocal_3122, Local_2996[0 /*20*/].f_6, iLocal_3109, &uLocal_3042, &uLocal_3043, bLocal_2945))
							{
								iLocal_3084 = 15;
								func_245();
							}
						}
						if (bLocal_2959 || uLocal_2955)
						{
							func_197(&uLocal_3123, iLocal_3109, &uLocal_3045, &uLocal_3046, bLocal_2945);
						}
					}
					if (bLocal_2959)
					{
						if (iLocal_3115 >= 7)
						{
							func_192(iLocal_3109, Local_2996[0 /*20*/].f_6, Local_3017, &(Local_2996[0 /*20*/].f_8), &Local_2625, &cLocal_3068, &Local_437, bLocal_2959, &(Local_2996[0 /*20*/]));
						}
					}
					bLocal_2948 = false;
					if (((iLocal_420 == 0 || iLocal_420 == 2) && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (bLocal_2965 && iLocal_2976)
						{
							func_190();
							func_189(Local_2996[0 /*20*/].f_6, Local_2996[0 /*20*/]);
						}
						if (!bLocal_2959)
						{
							func_178();
						}
					}
					else if ((iLocal_420 == 1 && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (func_174())
						{
							func_171();
						}
						if (iLocal_3119 > 0)
						{
							func_167();
						}
					}
					else if (iLocal_420 == 3)
					{
						if ((iLocal_3115 == 5 && iLocal_3117 < 1) && !iLocal_2930)
						{
							if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
							{
								if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_2996[0 /*20*/].f_6))
								{
									iLocal_2930 = 1;
									unk_0x15848523A8959DBC(Local_2996[0 /*20*/]);
									unk_0x6349785089ED32B4(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 0);
								}
							}
						}
					}
					if (iLocal_2950 && !bLocal_442)
					{
						func_163(&(Local_1870[func_234() /*28*/]), &(Local_1870[func_234() /*28*/].f_10), Local_650[iLocal_2604 /*23*/].f_1, &(Local_2996[0 /*20*/]), &(Local_2996[0 /*20*/].f_2), &uLocal_2989, fLocal_3066, sLocal_2619, &sLocal_2620, iLocal_3051);
					}
					if (iLocal_420 == 4)
					{
						func_161(&uLocal_3116, iLocal_3110, iLocal_3111, iLocal_3109, &(Local_2996[0 /*20*/].f_2), iLocal_3051, sLocal_2619, &sLocal_2620, &iLocal_2984, bLocal_2945, &(Local_2996[0 /*20*/].f_6));
					}
					if (!bLocal_2945)
					{
						if (unk_0x23E9113C762466ED(iLocal_2984) && !unk_0xA929B2923D14E2F8(iLocal_2984, 0))
						{
							if (func_153(iLocal_2984, 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
							{
								bLocal_2942 = true;
								unk_0xCA58071CE9CCE891(iLocal_2984, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
							}
							if (func_151())
							{
								bLocal_2943 = true;
							}
						}
					}
					if (bLocal_442 && !bLocal_2964)
					{
						if (func_153(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, &uLocal_412, &iLocal_419, 0, 1, 1, 1, 0))
						{
							func_150();
							if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
							{
								unk_0x15848523A8959DBC(Local_2996[0 /*20*/]);
								unk_0x650BB0E111420EAF(Local_2996[0 /*20*/], 1);
								unk_0xCA58071CE9CCE891(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
							if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_1, 0))
							{
								unk_0x15848523A8959DBC(Local_2996[0 /*20*/].f_1);
								unk_0x650BB0E111420EAF(Local_2996[0 /*20*/].f_1, 1);
								unk_0x08377FB2AE4C6899(&uLocal_421);
								unk_0x86DD54980FE55567(&uLocal_421);
								unk_0x83150B7E65C16AFE(0, 1, 256);
								unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
								unk_0x007AE2AA9E15FA7B(uLocal_421);
								if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_1, 0))
								{
									unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/].f_1, uLocal_421);
								}
								unk_0x08377FB2AE4C6899(&uLocal_421);
								iLocal_3084 = 18;
							}
							if (!bLocal_2959)
							{
								switch (iLocal_419)
								{
									case 16:
										if (iLocal_420 == 2)
										{
											iLocal_3084 = 17;
											func_245();
										}
										else
										{
											iLocal_3084 = 16;
											func_245();
										}
										break;
									
									case 2:
										func_149(&Local_2348, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3084 = 3;
										func_245();
										break;
								}
							}
							else
							{
								iLocal_3084 = 21;
								func_245();
							}
							if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
							{
								func_245();
							}
						}
						if (func_153(Local_2996[0 /*20*/].f_1, Local_2996[0 /*20*/].f_6, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
						{
							func_150();
							if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_1, 0))
							{
								unk_0x15848523A8959DBC(Local_2996[0 /*20*/].f_1);
								unk_0x650BB0E111420EAF(Local_2996[0 /*20*/].f_1, 1);
								unk_0xCA58071CE9CCE891(Local_2996[0 /*20*/].f_1, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
						}
					}
					else if (bLocal_2964)
					{
					}
					if (!bLocal_2948 && func_148(0))
					{
						if ((!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(iLocal_3109, 0)) && unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_3109, 0))
						{
							if (!iLocal_468)
							{
								if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_6))
								{
									if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
									{
										func_132(&uLocal_399, unk_0x57240623C1BC6E88(Local_2996[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_132(&uLocal_399, Local_2629, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_148(0))
					{
						func_131(&uLocal_399, 0, 0);
					}
					func_129(&uLocal_3094, 7f, 1);
					func_128();
					func_127();
					if (((!bLocal_467 || iLocal_3115 >= 15) || uLocal_2944) || bLocal_2939)
					{
						if (func_49())
						{
							func_43();
						}
					}
					if (iLocal_3115 == 9)
					{
						if (iLocal_420 == 1 || iLocal_420 == 3)
						{
							func_13(Local_2348, &Local_2996, &iLocal_3109);
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
	
	if (bLocal_2970)
	{
		iLocal_3084 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_3084 = 11;
		return 1;
	}
	if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_6))
	{
		if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
		{
			if (unk_0x01F09F0D64EF3285(Local_2996[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_3084 = 15;
				return 1;
			}
		}
	}
	if (bLocal_467)
	{
		if ((unk_0x94E3E074F38DF86C() - iLocal_3052) > 50000)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			}
			if (unk_0x23E9113C762466ED(iLocal_3109) && !unk_0xA929B2923D14E2F8(iLocal_3109, 0))
			{
				Var3 = { unk_0x57240623C1BC6E88(iLocal_3109, 1) };
			}
			if (unk_0xB7A628320EFF8E47(Var0, Var3) > 625f)
			{
				iLocal_3084 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2942)
	{
		iLocal_3084 = 22;
		return 1;
	}
	if (bLocal_2943)
	{
		iLocal_3084 = 23;
		return 1;
	}
	if (unk_0x23E9113C762466ED(iLocal_3109))
	{
		if (!unk_0x45CD66F0A131E554(iLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return 1;
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_3109))
	{
		if (unk_0xA929B2923D14E2F8(iLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_3115 > 4 && iLocal_3115 < 17)
			{
				if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_6))
				{
					if (unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
					{
						iLocal_3084 = 5;
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
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_442)
					{
						if (!bLocal_2964)
						{
							if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/]))
							{
								if (unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
								{
									iLocal_3084 = 8;
									return 1;
								}
							}
						}
						if (bLocal_2965)
						{
							if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_1))
							{
								if (unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_1, 0))
								{
									iLocal_3084 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
	{
		iLocal_3084 = 3;
		return 1;
	}
	if (!unk_0x3EFAA1D388F677C6(iLocal_3109))
	{
		unk_0x26C9531CF391AB1D(iLocal_3109);
	}
	else if (unk_0x745DF692265C6509(iLocal_3109))
	{
		iLocal_3084 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_2951)
	{
		if (func_3(&uLocal_3100, 180f))
		{
			iLocal_2951 = 1;
			func_149(&Local_2348, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_3100, 300f))
	{
		if (iLocal_420 != 2)
		{
			iLocal_3084 = 14;
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
			return (func_5(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar2 = unk_0xCB150A8B81012128();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_420 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3115 < 9)
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
	if (!func_11(Local_2625[0 /*3*/]))
	{
		if (!iLocal_2952)
		{
			if (func_9(Local_2625[0 /*3*/], 0) > (fLocal_430 + 400f))
			{
				func_149(&Local_2348, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2952 = 1;
			}
		}
		if (func_9(Local_2625[0 /*3*/], 0) > (fLocal_430 + 450f))
		{
			iLocal_3084 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, int iParam3)
{
	return func_10(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), Param0, iParam3);
}

float func_10(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), Param1, iParam4);
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
	return Global_91543.f_303 > 0;
}

void func_13(struct<165> Param0, int iParam165, int iParam166)
{
	if (!iLocal_463)
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (iLocal_2605 > 1)
			{
				if (func_42(iParam165, iParam166))
				{
					if (func_41())
					{
						Local_477 = { func_40() };
						func_38();
						iLocal_463 = 1;
						iLocal_2605 = 3;
					}
					else
					{
						iLocal_463 = 1;
						iLocal_2605 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2605)
	{
		case 0:
			if (!func_41())
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_2605 = 1;
			}
			break;
		
		case 1:
			if ((unk_0x83666F9FB8FEBD4B() > 3000 && iLocal_468) && !func_37("TOWT_OBJ_04", 0, 0))
			{
				if (!func_41())
				{
					func_235(&Param0, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					if (unk_0x82F1A060D8F4583B(joaat("tonya3")) == 1 || unk_0x82F1A060D8F4583B(joaat("tonya4")) == 1)
					{
						if (iLocal_420 == 1)
						{
							func_149(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_483 = "TOW_TRN_C1";
						}
						else if (iLocal_420 == 3)
						{
							func_149(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_C";
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 1)
					{
						if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
						{
							func_235(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_483 = "TOW_MECH";
						}
						else if (Global_101700.f_18932.f_5 == 2)
						{
							func_235(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_483 = "TOW_MECH2";
						}
						else
						{
							func_36(Param0, iParam165);
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 3)
					{
						if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
						{
							func_235(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_CONV";
						}
						else if (Global_101700.f_18932.f_7 == 2)
						{
							func_235(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_149(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_CON2";
						}
						else
						{
							func_35(Param0, iParam165);
						}
						bLocal_464 = true;
					}
				}
				else if (func_33(sLocal_483))
				{
					iLocal_2605 = 2;
				}
			}
			break;
		
		case 3:
			func_32(Param0, iParam165);
			if (iLocal_465)
			{
				iLocal_2605 = 2;
			}
			break;
		
		case 2:
			if (func_31(iParam166))
			{
				if (bLocal_464)
				{
					if (iLocal_463)
					{
						if (!func_41())
						{
							if (func_14(&Local_2348, "TOWAUD", sLocal_483, &Local_477, 8, 0, 0))
							{
								iLocal_463 = 0;
								iLocal_2605 = 4;
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
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x660E8E7836E95077(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_27();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_20();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_19())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				switch (Global_14443.f_1)
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_17();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_16();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_17()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_18()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_21();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_21()
{
	func_22();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_25(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_24(unk_0x17B5CC8A8615737D());
			if (func_23(iVar0) && (!func_26(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_23(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_29()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_31(var uParam0)
{
	switch (iLocal_2606)
	{
		case 1:
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) == 0 && !unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
			{
				iLocal_465 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(*uParam0, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *uParam0, 0))
				{
					iLocal_465 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_2606)
	{
		case 1:
			if (unk_0x82F1A060D8F4583B(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0xB2C7E752EB146AE1(unk_0xBE369BE1BC57A796());
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0xB2C7E752EB146AE1(unk_0xBE369BE1BC57A796());
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_7 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x82F1A060D8F4583B(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_7 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x82F1A060D8F4583B(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_7 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x82F1A060D8F4583B(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_7 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_149(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
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
		if (unk_0x6A7B0D91FD88D9EE(sParam0, &uVar0))
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
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0x0E29C61F26D96FDB(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH4";
	}
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_235(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_149(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_483 = "TOW_GEN_MCH2";
}

bool func_37(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5A99EA84320AB387(sParam0);
	if (iParam1 == 1)
	{
		unk_0x34D84D73B5DF8E80(iParam2);
	}
	return unk_0x2B886121A03F928A();
}

void func_38()
{
	Global_14611 = 0;
	func_39();
}

void func_39()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
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
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xD8D502167864F70D();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x63A528817609801B(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x63A528817609801B(&(Global_14613[iVar8 /*6*/])))
					{
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
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
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1)
{
	if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0 || unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xE2A9DE343F2FC00E(unk_0xBE369BE1BC57A796()))
		{
			unk_0xB2C7E752EB146AE1(unk_0xBE369BE1BC57A796());
		}
		iLocal_2606 = 1;
		return 1;
	}
	if ((unk_0x23E9113C762466ED((uParam0[0 /*20*/])->f_6) && !unk_0xA929B2923D14E2F8((uParam0[0 /*20*/])->f_6, 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!bLocal_427)
		{
			if ((unk_0xC017443DBE6DA4D6((uParam0[0 /*20*/])->f_6, unk_0x17B5CC8A8615737D(), 1) || unk_0xC951922EF432DFAE((uParam0[0 /*20*/])->f_6)) || unk_0x15CAF505CC185675((uParam0[0 /*20*/])->f_6))
			{
				iLocal_2606 = 2;
				return 1;
			}
		}
	}
	if ((unk_0x23E9113C762466ED((*uParam0)[0 /*20*/]) && !unk_0xA929B2923D14E2F8((*uParam0)[0 /*20*/], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xC017443DBE6DA4D6(unk_0x17B5CC8A8615737D(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_2606 = 4;
			return 1;
		}
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(*uParam1, 0))
	{
		if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *uParam1, 0))
		{
			iLocal_2606 = 6;
			return 1;
		}
	}
	return 0;
}

void func_43()
{
	func_47(&Global_100353, 3);
	func_276(&(Global_101700.f_18932.f_1), 8192);
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
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
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
	
	switch (iLocal_3115)
	{
		case 1:
			func_126(14);
			if (iLocal_420 == 3)
			{
				if (func_124(&Local_3063, &fLocal_3066, &uLocal_3054, &uLocal_3057))
				{
					iLocal_3115 = 2;
				}
			}
			else
			{
				iLocal_3115 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x75342B3CD0FB5275())
			{
				switch (iLocal_420)
				{
					case 3:
						func_235(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2348, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 2:
						func_235(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2348, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 0:
						func_235(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2965)
						{
							if (func_149(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3115 = 4;
							}
						}
						else if (func_149(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 1:
						func_235(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2348, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 4:
						func_235(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_149(&Local_2348, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_420)
			{
				case 3:
					if (func_117("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
						{
							unk_0xD602D152E57C823D(Local_2996[0 /*20*/].f_6, 10);
						}
						func_115();
						func_241(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 2:
					if (func_117("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2632 = { (Local_2625[0 /*3*/] + 15f), (Local_2625[0 /*3*/].f_1 + 15f), (Local_2625[0 /*3*/].f_2 + 15f) };
						Local_2635 = { (Local_2625[0 /*3*/] - 15f), (Local_2625[0 /*3*/].f_1 - 15f), (Local_2625[0 /*3*/].f_2 - 15f) };
						unk_0xB82FD68B5DE68F01(Local_2632, Local_2635, 0, 1);
						iLocal_2963 = 1;
						unk_0xC1B95D5AC645957D(Local_2996[0 /*20*/].f_6, 1);
						func_241(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 0:
					if (func_117("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_241(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 1:
					if (func_117("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0xC1B95D5AC645957D(Local_2996[0 /*20*/].f_6, 1);
						func_115();
						unk_0x223C8480EA6EE20B(0);
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
						iLocal_2960 = 1;
						func_241(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 4:
					if (func_117("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0xC1B95D5AC645957D(Local_2996[0 /*20*/].f_6, 1);
						func_115();
						func_241(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_8))
			{
				if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_6))
				{
					Local_2996[0 /*20*/].f_8 = unk_0xF1FE04D602EA392E(Local_2996[0 /*20*/].f_6);
					unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_8, 3);
					unk_0x5ACBCE67F0494242(Local_2996[0 /*20*/].f_8, 1);
				}
			}
			break;
		
		case 5:
			func_109();
			if (func_101(&iLocal_3117, 0, "TOW_BREAK1"))
			{
				iLocal_3115 = 7;
			}
			break;
		
		case 6:
			if (!func_41())
			{
				func_100(sLocal_3114, 7500, 1);
				StringCopy(&cLocal_3068, sLocal_3114, 64);
				if (iLocal_420 == 3)
				{
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_2629))
					{
						Local_2629 = { Local_70[0 /*3*/] };
					}
					func_99(8, &Local_3017);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_420 == 1 && !unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], iLocal_3109, 0))
			{
				bLocal_2957 = true;
			}
			func_98();
			if (func_91(sVar2, Local_2629))
			{
				if (iLocal_420 == 1 && !unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], iLocal_3109, 0))
				{
					bLocal_2957 = false;
					iLocal_2953 = 1;
					if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/]))
					{
						Local_2996[0 /*20*/].f_9 = unk_0xF1FE04D602EA392E(Local_2996[0 /*20*/]);
						unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_9, 3);
						unk_0x00EA14207118EEE2(Local_2996[0 /*20*/].f_9, 0.7f);
					}
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 9;
				}
			}
			if (func_89(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2935 = true;
				iLocal_3115 = 9;
			}
			break;
		
		case 9:
			if (iLocal_420 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_88(sVar2))
			{
				func_131(&uLocal_399, 0, 0);
				unk_0x22BD31A68F219650(Local_2996[0 /*20*/].f_6, 0, 0);
				if (iLocal_3038 == 0)
				{
					iLocal_2941 = 0;
					iLocal_3115 = 15;
				}
				else
				{
					func_100("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3068, "TOWT_OBJ_05", 64);
					iLocal_3115 = 7;
				}
			}
			break;
		
		case 15:
			func_87();
			if (bLocal_2939)
			{
				if (unk_0xA3794949321E107C(uLocal_2985))
				{
					unk_0x020DF7300725ECAB(&uLocal_2985);
				}
			}
			unk_0x2E2945F5602A744F(1);
			fLocal_429 = (fLocal_429 + 500f);
			if (iLocal_470 != 0 && !bLocal_2935)
			{
				if (bLocal_2945)
				{
					if ((unk_0x94E3E074F38DF86C() - iLocal_470) < 12000)
					{
						fLocal_429 = (fLocal_429 + 50f);
					}
				}
			}
			if (!bLocal_2945)
			{
				fLocal_429 = 0f;
			}
			fLocal_3067 = func_4(&uLocal_3091);
			fLocal_3067 = (fLocal_3067 * 1000f);
			iVar1 = unk_0xF2DB717A73826179(fLocal_3067);
			unk_0xD7D18E1FDC28C12C(iVar1, 14, 0);
			if (iLocal_420 != 2)
			{
			}
			if (bLocal_2945)
			{
				fLocal_429 = (fLocal_429 - fLocal_428);
			}
			iLocal_472 = unk_0xF2DB717A73826179(fLocal_429);
			func_86(&uLocal_2608, "TOW_UI07", 500, unk_0xF2DB717A73826179(fLocal_428), unk_0xF2DB717A73826179(fLocal_429), "TOW_UI08", 4000, 1);
			if (iLocal_472 > 0)
			{
				func_56(0, iLocal_472);
			}
			func_55(1);
			iLocal_3115 = 16;
			break;
		
		case 16:
			if (unk_0x7AED88F5CDBFFB3C())
			{
				unk_0x2E2945F5602A744F(1);
			}
			if (!func_50(&uLocal_2608, 0))
			{
				unk_0x69E47427C5084888("TOW_TUT_04A");
				unk_0x69E47427C5084888("TOWT_OBJ_03Ga");
				iLocal_3115 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_70[0 /*3*/] = { Local_70[0 /*3*/] };
	return 0;
}

int func_50(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_53(&(uParam0->f_2));
	}
	unk_0xE57F94EA937AAD99(14);
	unk_0x90101FEE397F4A7E(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x4B972043966C2EB8(2, 201) || uParam0->f_8)
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
	unk_0xEAC9A8A194DF8F91(*uParam0, "SHARD_ANIM_OUT");
	unk_0xDF18CF55301CEB8B(uParam0->f_9);
	unk_0x584CF9CAE83942E5(iParam1);
	unk_0x44983883E630A945();
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0x48B8265059381CD0(*uParam0, 4)) - fParam1);
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0x21E7933CCC7B3724(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55(bool bParam0)
{
	char* sVar0;
	
	unk_0x8D25D78C081AB5E2(0);
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
	unk_0x3FB911E0030D4BB5(sVar0);
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	func_58(Global_101700.f_23863[iParam0 /*4*/], func_85(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_101700.f_23863.f_69 = (Global_101700.f_23863.f_69 + iParam1);
			break;
		
		case 2:
			Global_101700.f_23863.f_70 = (Global_101700.f_23863.f_70 + iParam1);
			break;
		
		case 0:
			Global_101700.f_23863.f_71 = (Global_101700.f_23863.f_71 + iParam1);
			break;
	}
	unk_0x7FE4F330D3D74809(func_57(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(func_57(iParam0, 1), iVar0, 1);
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
	
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_59(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x7FE4F330D3D74809(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x731753D8494ABECD(iVar1, iVar0, 1);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
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
					switch (unk_0xBDF22BDA553CBEE4())
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
	iVar5 = (Global_52996[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52996[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52996[iVar2] = 2147483647;
				}
				else
				{
					Global_52996[iVar2] = (Global_52996[iVar2] + iParam3);
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
				if ((Global_52996[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52996[iVar2];
			Global_52996[iVar2] = (Global_52996[iVar2] - iParam3);
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
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_61(iParam0);
	if (Global_35781 == 15)
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
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!bParam0)
		{
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52996[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x731753D8494ABECD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x731753D8494ABECD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x731753D8494ABECD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_62(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0) || unk_0x48B8265059381CD0(Global_2097152[func_64() /*10758*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		unk_0x21E7933CCC7B3724(&(Global_2097152[func_64() /*10758*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xBD18006F0815A298("COUP_RED");
		unk_0x34D84D73B5DF8E80(func_63(iParam0));
		unk_0x6132B0FB7289E50A(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x63C468D583002D23())
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0);
	}
	return unk_0x48B8265059381CD0(Global_2097152[func_64() /*10758*/].f_7546.f_10, iParam0);
}

int func_67(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF0EE2EF8EA972239(27))
	{
		return 0;
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x7FE4F330D3D74809(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x731753D8494ABECD(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xF0EE2EF8EA972239(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702)
	{
		return 0;
	}
	if (func_79(&Global_2595550))
	{
		if (func_77(&Global_2595550, iParam0))
		{
			return 0;
		}
		if (func_70(&Global_2595550, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xDDAC6D364DFB4FD7(iParam0))
		{
			return 0;
		}
		if (unk_0xF0EE2EF8EA972239(iParam0))
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
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
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
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
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
	func_75(uParam0, (Global_2595549 - 0.5f));
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x7FE4F330D3D74809(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(iParam0, iVar0, 1);
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_84()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		unk_0x7FE4F330D3D74809(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52996[0] == iVar0)
		{
			Global_52996[0] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52996[1] == iVar0)
		{
			Global_52996[1] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52996[2] == iVar0)
		{
			Global_52996[2] = iVar0;
		}
	}
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 98;
			break;
		
		case 1:
			return 99;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 101;
			break;
		
		case 4:
			return 102;
			break;
		
		case 5:
			return 103;
			break;
		
		case 6:
			return 104;
			break;
		
		case 7:
			return 105;
			break;
		
		case 8:
			return 106;
			break;
		
		case 9:
			return 107;
			break;
		
		case 10:
			return 108;
			break;
		
		case 11:
			return 109;
			break;
		
		case 12:
			return 110;
			break;
		
		case 13:
			return 111;
			break;
		
		case 14:
			return 112;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_86(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0xEAC9A8A194DF8F91(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0xDCEB60B79ECB219E("STRING");
	unk_0x80A171A436807CA0(iParam7);
	unk_0x34D84D73B5DF8E80(sParam1);
	unk_0x1798EBF9408190D3();
	unk_0xDCEB60B79ECB219E(sParam5);
	unk_0x69967F83C1E636E2(iParam2);
	unk_0x69967F83C1E636E2(iParam3);
	unk_0x69967F83C1E636E2(iParam4);
	unk_0x1798EBF9408190D3();
	unk_0x44983883E630A945();
	func_53(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

void func_87()
{
	Global_101700.f_18932.f_3++;
	Global_101700.f_18932.f_2 = iLocal_420;
	switch (iLocal_420)
	{
		case 2:
			Global_101700.f_18932.f_4++;
			break;
		
		case 3:
			Global_101700.f_18932.f_7++;
			break;
		
		case 0:
			Global_101700.f_18932.f_6++;
			break;
		
		case 1:
			Global_101700.f_18932.f_5++;
			break;
		
		case 4:
			Global_101700.f_18932.f_8++;
			break;
	}
}

int func_88(char* sParam0)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar7;
	
	if (iLocal_3037 == -1)
	{
	}
	if (Local_2996[iLocal_3037 /*20*/].f_15)
	{
		if ((func_4(&(Local_2996[iLocal_3037 /*20*/].f_11)) - Local_2996[iLocal_3037 /*20*/].f_14) > 120f)
		{
			unk_0x28EB63CAF526B891(Local_2996[iLocal_3037 /*20*/].f_6, 1, 0);
		}
	}
	if (func_89(&uVar0, &uVar3, &uVar6))
	{
		if (!unk_0xA929B2923D14E2F8(Local_2996[iLocal_3037 /*20*/], 0) && unk_0x2315BB1606BC3DC3(Local_2996[iLocal_3037 /*20*/], iLocal_3109, 0))
		{
			unk_0xEEA9C8F490BB3507(iLocal_3109, 6f, 2, 0);
			iLocal_466 = 1;
			if (unk_0x23E9113C762466ED(Local_2996[iLocal_3037 /*20*/]) && !unk_0xA929B2923D14E2F8(Local_2996[iLocal_3037 /*20*/], 0))
			{
				unk_0x86DD54980FE55567(&uLocal_421);
				unk_0xEF9294ED57E4AC3D(0);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x1195B021D7C2C096(0, Local_2996[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (unk_0x0E29C61F26D96FDB(0, 65535) % 3);
				if (iVar7 == 0)
				{
					unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar7 == 1)
				{
					unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar7 == 2)
				{
					unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				unk_0x007AE2AA9E15FA7B(uLocal_421);
				unk_0x00E85C3B3BD34B10(Local_2996[iLocal_3037 /*20*/], uLocal_421);
				unk_0x08377FB2AE4C6899(&uLocal_421);
				unk_0x650BB0E111420EAF(Local_2996[iLocal_3037 /*20*/], 1);
			}
			if ((Global_101700.f_18932.f_3 == 0 || Global_101700.f_18932.f_3 == 1) || Global_101700.f_18932.f_3 == 4)
			{
				if (unk_0x23E9113C762466ED(iLocal_2984) && !unk_0xA929B2923D14E2F8(iLocal_2984, 0))
				{
					unk_0x86DD54980FE55567(&uLocal_421);
					unk_0x83150B7E65C16AFE(0, 0, 0);
					unk_0x401B18D8E7BEEC86(0, 227.082f, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_421);
					if (!unk_0xA929B2923D14E2F8(iLocal_2984, 0))
					{
						unk_0x00E85C3B3BD34B10(iLocal_2984, uLocal_421);
						unk_0x650BB0E111420EAF(iLocal_2984, 1);
					}
					unk_0x08377FB2AE4C6899(&uLocal_421);
				}
			}
			if (func_41())
			{
				func_150();
			}
			if ((Global_101700.f_18932.f_3 == 0 || Global_101700.f_18932.f_3 == 1) || Global_101700.f_18932.f_3 == 4)
			{
				if (Global_101700.f_18932.f_3 == 0)
				{
					func_149(&Local_2348, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_101700.f_18932.f_3 == 1)
				{
					func_149(&Local_2348, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_101700.f_18932.f_3 == 4)
				{
					func_149(&Local_2348, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
				{
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_101700.f_18932.f_7 == 2)
				{
					func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2959)
		{
		}
		iLocal_468 = 0;
		unk_0x020DF7300725ECAB(&(Local_2996[iLocal_3037 /*20*/].f_8));
		func_53(&uLocal_3088);
		iLocal_3038 = (iLocal_3038 - 1);
		return 1;
	}
	if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[iLocal_3037 /*20*/].f_6, 0))
	{
		if (!unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6))
		{
			iLocal_468 = 0;
			func_131(&uLocal_399, 0, 0);
			unk_0x5ACBCE67F0494242(Local_2996[iLocal_3037 /*20*/].f_8, 0);
			unk_0x020DF7300725ECAB(&(Local_2996[iLocal_3037 /*20*/].f_8));
			if (unk_0x23E9113C762466ED(Local_2996[iLocal_3037 /*20*/].f_6) && !unk_0xA929B2923D14E2F8(Local_2996[iLocal_3037 /*20*/].f_6, 0))
			{
				if (!unk_0xA3794949321E107C(Local_2996[iLocal_3037 /*20*/].f_8))
				{
					Local_2996[iLocal_3037 /*20*/].f_8 = unk_0xF1FE04D602EA392E(Local_2996[iLocal_3037 /*20*/].f_6);
					unk_0xCC930AE12D020496(Local_2996[iLocal_3037 /*20*/].f_8, 3);
				}
			}
			if (iLocal_420 == 1)
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_2978)
					{
						if (func_149(&Local_2348, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2978)
					{
						if (func_149(&Local_2348, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_2978)
					{
						if (func_149(&Local_2348, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
				else if (Global_101700.f_18932.f_7 == 2)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2978)
					{
						if (func_149(&Local_2348, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
			}
			func_53(&uLocal_3088);
			if (!bLocal_2957)
			{
				if (func_41())
				{
					unk_0x660E8E7836E95077(1);
					unk_0xD12BCC85C2F8B1DE();
					func_100(sParam0, 7500, 1);
				}
				if (!func_41())
				{
					if (iLocal_2931)
					{
						unk_0xD12BCC85C2F8B1DE();
						func_100(sParam0, 7500, 1);
						iLocal_2931 = 0;
					}
					else
					{
						unk_0xD12BCC85C2F8B1DE();
						func_100(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3068, sParam0, 64);
				}
			}
			iLocal_3115 = 7;
		}
	}
	return 0;
}

int func_89(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_3037 != -1)
	{
		if (!func_11(Local_3017.f_14))
		{
			Local_2629 = { Local_3017.f_14 };
			*uParam0 = { Local_3017.f_7 };
			*uParam1 = { Local_3017.f_10 };
			*uParam2 = Local_3017.f_13;
		}
		else
		{
			*uParam0 = { Local_3017 };
			*uParam1 = { Local_3017.f_3 };
			*uParam2 = Local_3017.f_6;
		}
		if (!bLocal_2959)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_2629, 30f, 30f, 2f, 1, 1, 0))
				{
					if (iLocal_420 == 0 || iLocal_420 == 4)
					{
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
						{
							unk_0xD602D152E57C823D(Local_2996[0 /*20*/].f_6, 1);
							bLocal_2939 = true;
						}
					}
				}
			}
		}
		if (unk_0x23E9113C762466ED(Local_2996[iLocal_3037 /*20*/].f_6))
		{
			if (unk_0x70A9F320A34FAC28(Local_2996[iLocal_3037 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_2941)
				{
					func_90("TOWT_HELP_UH", -1);
				}
				if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[iLocal_3037 /*20*/].f_6, 0))
				{
					if (!unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6) || (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_2996[iLocal_3037 /*20*/].f_6, 0) && !unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6)))
					{
						if (func_41())
						{
							func_150();
						}
						func_131(&uLocal_399, 0, 0);
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
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_91(char* sParam0, struct<3> Param1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_2945 && !bLocal_2956)
	{
		if (unk_0x23E9113C762466ED(iLocal_3109) && !unk_0xA929B2923D14E2F8(iLocal_3109, 0))
		{
			iVar2 = unk_0xF0F8585FD7BEB515(iLocal_3109);
			if (unk_0x23E9113C762466ED(iVar2) && !unk_0xA929B2923D14E2F8(iVar2, 0))
			{
				if (unk_0x3983CCB0D958159C(iVar2))
				{
					if (unk_0xBFC71CD990E479DB(iVar2) != Local_2996[0 /*20*/].f_6)
					{
						if (!iLocal_2972)
						{
							func_235(&uLocal_484, 3, iLocal_2984, "TONYA", 0, 1);
							if (func_149(&uLocal_484, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_2972 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2972 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0x23E9113C762466ED(Local_2996[iVar1 /*20*/].f_6))
		{
			if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[iVar1 /*20*/].f_6, 0))
			{
				if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[iVar1 /*20*/].f_6) && func_97())
				{
					unk_0x71FF26FDD46DECD5(iLocal_3109, 1);
					func_94();
					func_131(&uLocal_399, 0, 0);
					iLocal_468 = 1;
					if (iLocal_2961 && !unk_0x2315BB1606BC3DC3(Local_2996[iVar1 /*20*/], iLocal_3109, 0))
					{
						bVar0 = false;
						if (iLocal_3120 < 4)
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_3120 = 5;
						}
					}
					if (bVar0)
					{
						func_93(&uLocal_3094);
						unk_0x5ACBCE67F0494242(Local_2996[iVar1 /*20*/].f_8, 0);
						iLocal_2967 = 0;
						func_92(Local_2996[iVar1 /*20*/].f_8);
						Local_2996[iVar1 /*20*/].f_14 = func_4(&(Local_2996[iVar1 /*20*/].f_11));
						if (iLocal_2992 == 0)
						{
							Local_2996[iVar1 /*20*/].f_8 = unk_0x9213703D695C6A7A(Param1);
							fLocal_430 = func_9(Param1, 0);
							Local_2625[0 /*3*/] = { Param1 };
						}
						if (iLocal_420 == 4)
						{
							unk_0xFBD8170293283E41(Local_2996[0 /*20*/].f_6, 0, 0);
						}
						func_53(&uLocal_3100);
						unk_0xCC930AE12D020496(Local_2996[iVar1 /*20*/].f_8, 5);
						unk_0x5ACBCE67F0494242(Local_2996[iVar1 /*20*/].f_8, 1);
						if (iLocal_420 == 0 && bLocal_2965)
						{
						}
						else if (iLocal_2932)
						{
							func_100(sParam0, 7500, 1);
							iLocal_2932 = 0;
						}
						StringCopy(&cLocal_3068, sParam0, 64);
						unk_0x0668B21A0C3A4821(Local_2625[0 /*3*/], 6f, 0, 0, 0, 0, 0);
						iLocal_3037 = iVar1;
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
	if (unk_0xA3794949321E107C(uParam0))
	{
		unk_0x020DF7300725ECAB(&uParam0);
	}
}

void func_93(var uParam0)
{
	func_51(uParam0);
	StringCopy(&cLocal_317, "", 32);
}

void func_94()
{
	func_95("TOW_TUT_03");
	func_95("TOW_TUT_02");
	func_95("TOW_TUT_01");
	unk_0x69E47427C5084888("TOWT_OBJ_03");
	unk_0x69E47427C5084888("TOWT_OBJ_03a");
	unk_0x69E47427C5084888("TOWT_OBJ_03G");
	unk_0x69E47427C5084888("TOWT_OBJ_03Ga");
	unk_0x69E47427C5084888("TOWT_OBJS_03");
}

void func_95(char* sParam0)
{
	if (func_96(sParam0))
	{
		unk_0x2E2945F5602A744F(1);
	}
}

bool func_96(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

int func_97()
{
	if (bLocal_2959)
	{
		if (bLocal_2602 && !func_41())
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
	
	if (((!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0)) && unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6)) || (Global_101700.f_18932.f_3 == 0 || Global_101700.f_18932.f_3 > 2))
	{
		return;
	}
	switch (iLocal_3050)
	{
		case 0:
			if (!func_7(&uLocal_3106))
			{
				func_241(&uLocal_3106);
				iLocal_3050 = 1;
			}
			break;
		
		case 1:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 10f)
				{
					if (!unk_0x7AED88F5CDBFFB3C() && !func_41())
					{
						iVar0 = (unk_0x0E29C61F26D96FDB(0, 65535) % 2);
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
						func_53(&uLocal_3106);
						iLocal_3050 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!unk_0x7AED88F5CDBFFB3C() && !func_41())
					{
						func_90("TOW_TUT_03", -1);
						func_53(&uLocal_3106);
						iLocal_3050 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!unk_0x7AED88F5CDBFFB3C() && !func_41())
					{
						func_90("TOW_TUT_01", -1);
						iLocal_3050 = 4;
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
	if (func_11(Local_45[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_45[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_45[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_45[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_45[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_45[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_45[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_70[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_100(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

int func_101(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2958)
			{
				if ((func_108(Local_2996[iParam1 /*20*/].f_6, iLocal_3109, &iLocal_2603, 10, 150f, 4f, 1) || iLocal_2953) || iLocal_468)
				{
					if (!bLocal_2936)
					{
						iLocal_2603 = 0;
						func_107(&iLocal_2598);
						if (unk_0x1F8F07D86DA1A701(Local_2996[iParam1 /*20*/], -875674219) != 1)
						{
							unk_0x6349785089ED32B4(Local_2996[iParam1 /*20*/], unk_0x17B5CC8A8615737D(), -1);
						}
						bLocal_2936 = true;
					}
					if (bLocal_2936)
					{
						if (unk_0x1C34CE8087E3897C(iLocal_3109, unk_0x57240623C1BC6E88(Local_2996[iParam1 /*20*/], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (unk_0x5132972D2BBC5A62(Local_2996[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0xA587396DD8FB936E(Local_2996[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_106())
							{
								if (iLocal_420 == 1)
								{
									if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
									{
										func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
										func_235(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_149(&Local_2348, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_101700.f_18932.f_5 == 2)
									{
										func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
										func_235(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_149(&Local_2348, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0x3AD5401AC8DD9226(Local_2996[iParam1 /*20*/], iLocal_3109, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_420 == 3)
								{
									if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
									{
										func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
										func_235(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_149(&Local_2348, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_101700.f_18932.f_7 == 2)
									{
										func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
										func_235(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_149(&Local_2348, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0x3AD5401AC8DD9226(Local_2996[iParam1 /*20*/], iLocal_3109, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_2953)
								{
									unk_0x020DF7300725ECAB(&(Local_2996[iParam1 /*20*/].f_8));
									if (unk_0x23E9113C762466ED(Local_2996[iParam1 /*20*/]))
									{
										Local_2996[iParam1 /*20*/].f_8 = unk_0xF1FE04D602EA392E(Local_2996[iParam1 /*20*/]);
										unk_0xCC930AE12D020496(Local_2996[iParam1 /*20*/].f_8, 3);
										unk_0x00EA14207118EEE2(Local_2996[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								*iParam0 = 1;
							}
						}
						else if (unk_0x1C34CE8087E3897C(iLocal_3109, unk_0x57240623C1BC6E88(Local_2996[iParam1 /*20*/], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_2977)
							{
								if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
								{
									func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
									func_235(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_149(&Local_2348, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2977 = 1;
									}
								}
								else if (Global_101700.f_18932.f_7 == 2)
								{
									func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
									func_235(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_149(&Local_2348, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_2977 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2940 = true;
			func_53(&uLocal_3100);
			func_53(&uLocal_3085);
			func_92(Local_2996[iParam1 /*20*/].f_8);
			if (!unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_9))
			{
				if (unk_0x23E9113C762466ED(Local_2996[iParam1 /*20*/]))
				{
					Local_2996[0 /*20*/].f_9 = unk_0xF1FE04D602EA392E(Local_2996[iParam1 /*20*/]);
					unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_9, 3);
					unk_0x00EA14207118EEE2(Local_2996[0 /*20*/].f_9, 0.7f);
				}
			}
			func_100("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0x1EF7A8224AE81790("TOWBUDDIES", &uLocal_2995);
			unk_0xDE574EA7A7A2CAF8(1, uLocal_2995, joaat("player"));
			unk_0x3BB70315907D9456(Local_2996[iParam1 /*20*/], uLocal_2995);
			func_105(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0x2315BB1606BC3DC3(Local_2996[iParam1 /*20*/], iLocal_3109, 0))
			{
				if (func_102(&uLocal_3124, Local_2996[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_3084 = 11;
					func_245();
				}
			}
			if (unk_0x2315BB1606BC3DC3(Local_2996[iParam1 /*20*/], iLocal_3109, 0))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0))
				{
					unk_0xD602D152E57C823D(iLocal_3109, 9);
					func_92(Local_2996[0 /*20*/].f_9);
				}
			}
			if (unk_0x2315BB1606BC3DC3(Local_2996[iParam1 /*20*/], iLocal_3109, 0) && !unk_0x55C74612BE548D78())
			{
				if (iLocal_420 == 1)
				{
					if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
					{
						if (iLocal_2953)
						{
							func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_101700.f_18932.f_5 == 2)
					{
						if (iLocal_2953)
						{
							func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_420 == 3)
				{
					if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1)
					{
						if (iLocal_2953)
						{
							func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_101700.f_18932.f_7 == 2)
					{
						if (iLocal_2953)
						{
							func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_149(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x2315BB1606BC3DC3(Local_2996[iParam1 /*20*/], iLocal_3109, 0))
			{
				func_105(iParam1);
				if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
				{
					if (iLocal_2953 && unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_8))
				{
					if (unk_0x23E9113C762466ED(Local_2996[iParam1 /*20*/].f_6) && !unk_0xA929B2923D14E2F8(Local_2996[iParam1 /*20*/].f_6, 0))
					{
						Local_2996[0 /*20*/].f_8 = unk_0xF1FE04D602EA392E(Local_2996[iParam1 /*20*/].f_6);
						unk_0xCC930AE12D020496(Local_2996[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
				{
					if (!unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						func_100("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3068, "TOWT_OBJ_03", 64);
					}
				}
				func_53(&uLocal_3085);
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
			uParam0->f_1 = unk_0x94E3E074F38DF86C();
			uParam0->f_2 = func_103(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			}
			if (!unk_0xA929B2923D14E2F8(iParam1, 0))
			{
				Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
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
	return func_104(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), iParam0, iParam1);
}

float func_104(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

void func_105(int iParam0)
{
	int iVar0;
	
	bLocal_2958 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xA3794949321E107C(Local_2996[iVar0 /*20*/].f_8))
			{
				unk_0x020DF7300725ECAB(&(Local_2996[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_106()
{
	float fVar0;
	
	if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
	{
		if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
		{
			fVar0 = unk_0x13B7ACE69D27E3E4(iLocal_3109);
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
		unk_0x2EB37CDED0E516F3(*iParam0);
		unk_0xB47CC6339ADB0B67(*iParam0);
		*iParam0 = -1;
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	var uVar0;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			uVar0 = unk_0xB80CAAF3D65FBC1F(iParam0);
		}
	}
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(uVar0, 0) && unk_0xCA41A00932714525(iVar0))
		{
			return 0;
		}
	}
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x23E9113C762466ED(iParam1))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0) && !unk_0xA929B2923D14E2F8(iParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!unk_0xF6563E19EDE84B8C(iParam0) && func_103(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_103(iParam0, 1) < 8f) && unk_0x13B7ACE69D27E3E4(iParam1) < fParam5) && !unk_0xF6563E19EDE84B8C(iParam0))
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
	
	if (!bLocal_2940)
	{
		iVar0 = unk_0xF2DB717A73826179(((300f - func_113(&uLocal_3100)) * 1000f));
		if (iLocal_420 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_110(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_110(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_110(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
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
		Global_1354542.f_1 = 1;
		func_111(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_111(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_112(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
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
			return (func_5(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_114(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&Global_100340, iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

void func_115()
{
	int iVar0;
	
	iVar0 = func_116(&Local_45, Local_2625[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_2629 = { Local_45[iVar0 /*3*/] };
		func_99(iVar0, &Local_3017);
	}
	else
	{
		Local_2629 = { Local_45[0 /*3*/] };
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
	fLocal_430 = func_9(Local_3063, 0);
	Local_2625[0 /*3*/] = { Local_3063 };
	sLocal_3114 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_123(Local_3063, fLocal_3066, uParam2, 0))
		{
			func_122(Local_2996[0 /*20*/].f_6, &uLocal_3042, &uLocal_3044);
			unk_0x250DE4033DCCFBBA(Local_2996[0 /*20*/].f_6, 1);
			unk_0x5DED87DD8464517B(Local_2996[0 /*20*/].f_6, 0);
			unk_0x4114B83B329702FF(Local_2996[0 /*20*/].f_6, 1);
			unk_0x2B9B4DCEF80D1566(Local_2996[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_118(bParam4, 0))
	{
		func_122(Local_2996[0 /*20*/].f_6, &uLocal_3042, &uLocal_3044);
		unk_0x250DE4033DCCFBBA(Local_2996[0 /*20*/].f_6, 1);
		unk_0x5DED87DD8464517B(Local_2996[0 /*20*/].f_6, 0);
		unk_0x4114B83B329702FF(Local_2996[0 /*20*/].f_6, 1);
		unk_0x2B9B4DCEF80D1566(Local_2996[0 /*20*/].f_6, 1);
		return 1;
	}
	return 0;
}

int func_118(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_120(Local_650[iLocal_2604 /*23*/].f_1, Local_650[iLocal_2604 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_430 = func_9(Local_650[iLocal_2604 /*23*/].f_1, 0);
	Local_2625[0 /*3*/] = { Local_650[iLocal_2604 /*23*/].f_1 };
	if (Local_650[iLocal_2604 /*23*/] == 2)
	{
		unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_650[iLocal_2604 /*23*/] == 4)
	{
		fLocal_3066 = -1f;
		iLocal_2950 = 1;
		iLocal_3110 = unk_0x692A2891A2BA7352(joaat("ambulance"), Local_1870[func_234() /*28*/].f_23, Local_1870[func_234() /*28*/].f_26, 1, 1);
		if (!unk_0xA929B2923D14E2F8(iLocal_3110, 0))
		{
			unk_0x71FF26FDD46DECD5(iLocal_3110, 1);
			unk_0x524A422B74847594(iLocal_3110, 1, 1, 0);
			iLocal_3111 = unk_0x3FBC0964EB7878AF(iLocal_3110, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
		}
		if (!func_11(Local_1870[func_234() /*28*/].f_17))
		{
			uLocal_2347 = func_119(Local_1870[func_234() /*28*/].f_17, Local_1870[func_234() /*28*/].f_20);
		}
		switch (Local_650[iLocal_2604 /*23*/].f_21)
		{
			case 1:
				unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				unk_0xE4FDA285C25BBA3A(Local_2996[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		unk_0xDE043EE8B3F02B86(Local_2996[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_442 = true;
		if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
		{
			Local_2996[0 /*20*/] = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, 1, 1);
		}
		else if (Global_101700.f_18932.f_5 == 2)
		{
			Local_2996[0 /*20*/] = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
		}
		else
		{
			Local_2996[0 /*20*/] = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_6, 26, uLocal_2989[0], -1, 1, 1);
		}
	}
	return 1;
}

var func_119(struct<3> Param0, struct<3> Param3)
{
	unk_0xB57996B091C5D677(Param0, Param3);
	unk_0xEEB6FB1A486B379E(Param0, Param3, 1);
	return unk_0xD1D19967E553E144(Param0, Param3, 0, 1, 1, 1);
}

int func_120(struct<3> Param0, var uParam3, int iParam4, bool bParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = func_121(&Local_2996);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_3039 >= 2)
	{
		iLocal_3039 = 0;
	}
	Local_2996[*iParam4 /*20*/].f_6 = unk_0x692A2891A2BA7352(iLocal_2987[iLocal_3039], Param0, uParam3, 1, 1);
	unk_0x4114B83B329702FF(Local_2996[*iParam4 /*20*/].f_6, 1);
	iLocal_3039++;
	fLocal_430 = func_9(Param0, 0);
	if (iLocal_420 == 1)
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
	if (!func_11(Local_650[iLocal_2604 /*23*/].f_10))
	{
		Local_2996[*iParam4 /*20*/].f_17 = unk_0x69C2AF7775CB38F5(Local_650[iLocal_2604 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2996[*iParam4 /*20*/].f_17 = unk_0x69C2AF7775CB38F5(Param0, fVar0, 0f, 0);
	}
	Local_2996[*iParam4 /*20*/].f_18 = unk_0x69C2AF7775CB38F5(Param0, fVar1, 2.5f, 0);
	Local_2996[*iParam4 /*20*/].f_19 = unk_0x69C2AF7775CB38F5(Param0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2996[*iParam4 /*20*/].f_15)
		{
			unk_0x1B923DBD91BF893F(Local_2996[*iParam4 /*20*/].f_6, 1);
			unk_0xEC0212C05F98C1DF(Local_2996[*iParam4 /*20*/].f_6, 1f);
			unk_0x3D8459AD189E8571(Local_2996[*iParam4 /*20*/].f_6, 1);
		}
		else
		{
			unk_0x1B923DBD91BF893F(Local_2996[*iParam4 /*20*/].f_6, 1);
			unk_0xEC0212C05F98C1DF(Local_2996[*iParam4 /*20*/].f_6, 1f);
			unk_0x3D8459AD189E8571(Local_2996[*iParam4 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_2958 && uParam6)
	{
		if (unk_0x23E9113C762466ED(Local_2996[*iParam4 /*20*/].f_6))
		{
			Local_2996[*iParam4 /*20*/].f_8 = unk_0xF1FE04D602EA392E(Local_2996[*iParam4 /*20*/].f_6);
			unk_0xCC930AE12D020496(Local_2996[*iParam4 /*20*/].f_8, 3);
		}
	}
	iLocal_3038++;
	func_241(&(Local_2996[*iParam4 /*20*/].f_11));
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
	if (unk_0x23E9113C762466ED(iParam0))
	{
		*uParam1 = unk_0xB5DF060B138CD2EA(iParam0);
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
	unk_0xDE043EE8B3F02B86(Local_2996[*uParam4 /*20*/].f_6, 4, 0, 0);
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(Local_2996[*uParam4 /*20*/].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2950 = 1;
	Var0 = { unk_0x854ED33E6D715648(Local_2996[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var12 = { unk_0x57240623C1BC6E88(Local_2996[*uParam4 /*20*/].f_6, 1) };
	uVar15 = unk_0x638527C9799F2AE4(Local_2996[*uParam4 /*20*/].f_6);
	uLocal_3048 = unk_0x69C2AF7775CB38F5(unk_0x3CE07141081BBC2B(Var12, uVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	uLocal_3049 = unk_0x69C2AF7775CB38F5(unk_0x3CE07141081BBC2B(Var12, uVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	unk_0x0668B21A0C3A4821(Var0, 30f, 0, 0, 0, 0, 0);
	Local_1870[func_234() /*28*/][0 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 1f) };
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
	iVar10 = (unk_0x0E29C61F26D96FDB(0, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -unk_0x6B1497B2FDBC8466(450f, 700f);
		fVar9 = unk_0x6B1497B2FDBC8466(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = unk_0x6B1497B2FDBC8466(450f, 700f);
		fVar9 = unk_0x6B1497B2FDBC8466(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = unk_0x6B1497B2FDBC8466(450f, 700f);
		fVar8 = unk_0x6B1497B2FDBC8466(-100f, 100f);
	}
	else
	{
		fVar9 = -unk_0x6B1497B2FDBC8466(450f, 700f);
		fVar8 = unk_0x6B1497B2FDBC8466(-100f, 100f);
	}
	Var0 = { unk_0x854ED33E6D715648(unk_0x17B5CC8A8615737D(), fVar8, fVar9, 0f) };
	if (!unk_0xFC18BDE0C49AAF34(Var0, 10f, 1, 1, 1, &Var5, &uVar4))
	{
		return 0;
	}
	unk_0x25F8DA4A9E82297D(Var5, 2, uParam2, fParam1, &uVar3, 1, 1077936128, 0);
	*uParam0 = { Var5 };
	if (unk_0x82F1A060D8F4583B(joaat("tonya4")) == 1)
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
	
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		uVar0 = iParam0;
		unk_0x21E9CCAA51709FD0(8, &uVar0, 1, 1);
	}
	else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xCDDCD2630EF7A698(8, &cVar1);
	}
}

void func_127()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xA3794949321E107C(Local_280[iVar0 /*3*/].f_1))
		{
			if (unk_0xA929B2923D14E2F8(Local_280[iVar0 /*3*/], 0))
			{
				unk_0x020DF7300725ECAB(&(Local_280[iVar0 /*3*/].f_1));
			}
			else if (Local_280[iVar0 /*3*/].f_2 && func_103(Local_280[iVar0 /*3*/], 1) > 200f)
			{
				unk_0x020DF7300725ECAB(&(Local_280[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_128()
{
	if (!unk_0x6A7B0D91FD88D9EE(&cLocal_272, ""))
	{
		if (!func_41())
		{
			func_149(&Local_96, &cLocal_272, &cLocal_276, 9, 0, 0, 0);
			StringCopy(&cLocal_272, "", 16);
		}
	}
}

void func_129(var uParam0, float fParam1, bool bParam2)
{
	if (func_130(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_90(&cLocal_317, -1);
		}
		else
		{
			func_100(&cLocal_317, 7500, 1);
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
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x72B6EAB729050F5B(iParam2);
		unk_0x8BBC558C75738A6D("FocusIn");
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x73624B45C8E405BA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD3115E7F7876D6E6(uParam0->f_3))
	{
		if (func_96(uParam0->f_3))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
	if (!unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
}

void func_132(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xAB01297DD4A8577F())
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (unk_0xD3115E7F7876D6E6(iVar0))
	{
		if (!unk_0x63C468D583002D23())
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
	if (!unk_0xAB01297DD4A8577F())
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
				if ((unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0)) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					if ((unk_0xF7E1BD8196545EE3(Param1, 1f) && !unk_0x9E123D5FF2973C60()) && iParam7)
					{
						if (!func_96(iVar0))
						{
							func_90(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
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
			if (unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0))
			{
				if ((unk_0xF7E1BD8196545EE3(Param1, 1f) && !unk_0x9E123D5FF2973C60()) && iParam7)
				{
					if (!func_96(iVar0))
					{
						func_90(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
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
		if (!unk_0xD3115E7F7876D6E6(iVar0))
		{
			if (func_96(iVar0) && unk_0x9E123D5FF2973C60())
			{
				unk_0x2E2945F5602A744F(1);
			}
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					func_131(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
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
	if (func_134(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x73624B45C8E405BA(1);
		unk_0x72B6EAB729050F5B(0);
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		unk_0x8BBC558C75738A6D("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_134(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x3983CCB0D958159C(iParam0))
		{
			if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam0))
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
		if (uParam0->f_2 + iVar0) > unk_0x94E3E074F38DF86C()
		{
			return 1;
		}
	}
	return 0;
}

int func_136(bool bParam0)
{
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101700.f_9008.f_100++;
			}
			return Global_101700.f_9008.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101700.f_9008.f_101++;
			}
			return Global_101700.f_9008.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101700.f_9008.f_102++;
			}
			return Global_101700.f_9008.f_102;
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
		if ((!unk_0x9C88EB7B70229335(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return 0;
	}
	switch (Global_35781)
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
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
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
	if (unk_0x349B6C82BE3EF6DD())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53003)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
			{
				return 0;
			}
			if (unk_0x54271E538645DBDB())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_139()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_140(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
	
	unk_0x73624B45C8E405BA(0);
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
	unk_0x572C7F438DD94431(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x0D322CDF37087C0E(unk_0x17B5CC8A8615737D(), Param1, -1, iVar2, iVar3);
	unk_0x9AF1ABF0E97411BF("FocusIn", 0, 0);
	unk_0x4A5D4AD0FE6ACF73("HINT_CAM_SCENE");
	unk_0x4988C48537D1AE4F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x94E3E074F38DF86C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_142(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_146(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
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
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (!func_146(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x94E3E074F38DF86C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
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
				if (!func_145(bParam1, bParam2, bParam3) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
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
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
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
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
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
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x7C48E6953368E08B(0, 80))
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
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				unk_0x73624B45C8E405BA(0);
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
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
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
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_147()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

int func_148(bool bParam0)
{
	if (bLocal_467 || iLocal_466)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_468)
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_15(sParam2, iParam3, 0);
}

void func_150()
{
	Global_14611 = 0;
	func_29();
}

int func_151()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	if (unk_0x23E9113C762466ED(iLocal_2984) && !unk_0xA929B2923D14E2F8(iLocal_2984, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iLocal_2984, 1) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) > 2500f)
	{
		if (!bLocal_2968)
		{
			func_152("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2968 = true;
			if (!unk_0xA3794949321E107C(uLocal_425))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_2984, 0))
				{
					uLocal_425 = unk_0xF1FE04D602EA392E(iLocal_2984);
					unk_0xCC930AE12D020496(uLocal_425, 3);
					unk_0x00EA14207118EEE2(uLocal_425, 0.5f);
				}
			}
			if (unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_8))
			{
				unk_0x020DF7300725ECAB(&(Local_2996[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_2968)
	{
		bLocal_2968 = false;
		if (unk_0xA3794949321E107C(uLocal_425))
		{
			unk_0x020DF7300725ECAB(&uLocal_425);
		}
		if (!unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_8))
		{
			Local_2996[0 /*20*/].f_8 = unk_0x9213703D695C6A7A(Local_2625[0 /*3*/]);
			if (iLocal_468)
			{
				unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_8, 5);
				unk_0x5ACBCE67F0494242(Local_2996[0 /*20*/].f_8, 1);
				unk_0x4E6CD8C764667FA1(Local_2996[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_8, 3);
				unk_0x5ACBCE67F0494242(Local_2996[0 /*20*/].f_8, 1);
				unk_0x4E6CD8C764667FA1(Local_2996[0 /*20*/].f_8, 3);
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) > 22500f)
	{
		if (bLocal_2968)
		{
			return 1;
		}
	}
	return 0;
}

void func_152(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 0);
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x17B5CC8A8615737D();
	if (!unk_0xA929B2923D14E2F8(iVar0, 0) && !unk_0xA929B2923D14E2F8(iParam0, 0))
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
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
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
	else if (unk_0x23E9113C762466ED(iParam0))
	{
		if (iParam7 && unk_0xC017443DBE6DA4D6(iParam0, iVar0, 1))
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
		if (!bLocal_395)
		{
			iLocal_396 = unk_0xB5DF060B138CD2EA(iParam0);
			bLocal_395 = true;
		}
		iLocal_397 = unk_0xB5DF060B138CD2EA(iParam0);
		iLocal_398 = (iLocal_396 - iLocal_397);
		iVar0 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_395)
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(iVar1, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (unk_0x4FF557C7B233F003(iParam0))
			{
				if (unk_0xFFE01300722A85E9(iParam0) == unk_0x17B5CC8A8615737D())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x1C34CE8087E3897C(iParam0, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xB95F3BAC01F95DB8(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0x8E36A9305D573CF7(iParam0))
		{
			return 1;
		}
	}
	if (func_155(unk_0x17B5CC8A8615737D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x7F4AE93855973529(iParam0) && func_103(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), unk_0x60604E51E30D25B8(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iParam0))
		{
			return 1;
		}
		if (!unk_0xA929B2923D14E2F8(iParam1, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
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
	
	unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(iParam1, 1)) < 2.5f)
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, iParam1, 180f))
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
	if (unk_0x758839786F3B98F0(iParam0, 4))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0) && !unk_0xDC93048D895B2146(iParam0))
		{
			if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
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
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	if (unk_0x579A94EB2BF9398F(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x5193E99B6917C701(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x758839786F3B98F0(iParam0, 2))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0))
		{
			if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xCAA82A181F15BFF5(unk_0xB80CAAF3D65FBC1F(iParam1), iParam0, 120f) && unk_0x7F5C1711F4E1FDF7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xFD0FE723227D5AB6(unk_0xB80CAAF3D65FBC1F(iParam1), 0))
			{
				iVar3 = unk_0x60604E51E30D25B8(unk_0xB80CAAF3D65FBC1F(iParam1), 0);
			}
			if (unk_0x95E290AF7BCBF364(iParam0) || func_158(iVar3))
			{
				if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xCAA82A181F15BFF5(unk_0xB80CAAF3D65FBC1F(iParam1), iParam0, 120f) && unk_0x7F5C1711F4E1FDF7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x3BA3AD8AC9469C63((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x17206B315923243C(iParam0, -1, 0) != 0)
			{
				if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_104(unk_0x17B5CC8A8615737D(), iParam0, 1) < 40f)
						{
							if (unk_0x7940476800F126AE(unk_0xBE369BE1BC57A796(), &iVar1))
							{
								if ((unk_0x3983CCB0D958159C(iVar1) && unk_0xBFC71CD990E479DB(iVar1) == iParam0) || (unk_0x80E9CA64E9C8E070(iVar1) && unk_0xB80CAAF3D65FBC1F(iVar1) == unk_0x17206B315923243C(iParam0, -1, 0)))
								{
									if ((unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()) && unk_0x79888727131C6854(0, 24)) || (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x79888727131C6854(0, 69)))
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
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6))
		{
			if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iParam0) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iParam0))
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, unk_0x17B5CC8A8615737D(), 90f))
				{
					if (func_103(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x94E3E074F38DF86C();
						}
						else if ((unk_0x94E3E074F38DF86C() - uParam1->f_1) > uParam1->f_3)
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
		if (unk_0x23E9113C762466ED((*uParam4)[iVar0]))
		{
			if (!unk_0xA929B2923D14E2F8((*uParam4)[iVar0], 0) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (func_153((*uParam4)[iVar0], 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 1))
				{
					unk_0xCA58071CE9CCE891((*uParam4)[iVar0], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_108(iParam1, iParam3, &iLocal_2603, 20, 70f, 65f, 0))
			{
				iLocal_2603 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0x23E9113C762466ED(iParam2))
			{
				if (!unk_0xA929B2923D14E2F8(iParam1, 0) && !unk_0xA929B2923D14E2F8(iParam2, 0))
				{
					unk_0x9178B6CFE95D27C6(iParam2, iParam1, 50f, 786469);
					unk_0x650BB0E111420EAF(iParam2, 1);
					unk_0x6500ADB01E821BC0(&iParam2);
					unk_0x921CF98C637B0043(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_468)
			{
				func_53(&uLocal_2513);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0x23E9113C762466ED((*uParam4)[iVar0]))
				{
					if (!unk_0xA929B2923D14E2F8((*uParam4)[iVar0], 0))
					{
						if (func_103((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_471 = iVar0;
							iLocal_471 = iLocal_471;
							func_53(&uLocal_2513);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_1870[func_234() /*28*/].f_17))
			{
				func_162(uLocal_2347, Local_1870[func_234() /*28*/].f_17, Local_1870[func_234() /*28*/].f_20);
			}
			if (unk_0x82F1A060D8F4583B(joaat("tonya5")) == 1)
			{
				if (!iLocal_457)
				{
					func_235(&uLocal_484, 3, *uParam8, "TONYA", 0, 1);
					if (func_149(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_457 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0xA929B2923D14E2F8((*uParam4)[iVar0], 0))
				{
					unk_0x86DD54980FE55567(&uLocal_421);
					unk_0xEB1EFACA68933402(0, sParam6, (*sParam7)[iVar0], 4f, -4f, unk_0x0E29C61F26D96FDB(10000, 20000), 0, 0, 0, 0, 0);
					unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_421);
					unk_0x00E85C3B3BD34B10((*uParam4)[iVar0], uLocal_421);
					unk_0x08377FB2AE4C6899(&uLocal_421);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x82F1A060D8F4583B(joaat("tonya5")) == 1)
			{
				if (!iLocal_457)
				{
					func_235(&uLocal_484, 3, *uParam8, "TONYA", 0, 1);
					if (func_149(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_457 = 1;
					}
				}
				if (!iLocal_469)
				{
					if (!unk_0xA929B2923D14E2F8(iParam3, 0) && !unk_0xA929B2923D14E2F8(*uParam10, 0))
					{
						if (!unk_0x2AFFA8434FA2066D(iParam3, *uParam10))
						{
							if (!func_7(&uLocal_2528))
							{
								func_241(&uLocal_2528);
							}
							else if (func_4(&uLocal_2528) > 20f)
							{
								if (func_149(&uLocal_484, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_469 = 1;
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
	unk_0x571422CE42B47889(uParam0, 0);
	unk_0xB61819CCF7A3F445();
	unk_0xEEB6FB1A486B379E(Param1, Param4, 0);
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
	if (unk_0x4F34E573D7F5024B(Var3, &uVar0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_165(uParam1);
		unk_0x26D48449559660BA(Param2, 28f, 0);
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
			if (unk_0x82F1A060D8F4583B(joaat("tonya4")) == 1)
			{
				iVar1 = unk_0x2AD5F4170F4ACBEB(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
				unk_0x2F933BB106547968(iVar1, 0, 0, 1, 0);
				unk_0x2F933BB106547968(iVar1, 2, 0, 0, 0);
				unk_0x2F933BB106547968(iVar1, 3, 0, 2, 0);
				unk_0x2F933BB106547968(iVar1, 4, 1, 2, 0);
				unk_0x2F933BB106547968(iVar1, 8, 0, 0, 0);
				unk_0x2F933BB106547968(iVar1, 10, 1, 1, 0);
				unk_0x924CDE68BA2ED3BA(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x82F1A060D8F4583B(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = unk_0x2AD5F4170F4ACBEB(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					unk_0x924CDE68BA2ED3BA(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = unk_0x2AD5F4170F4ACBEB(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					unk_0x924CDE68BA2ED3BA(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = unk_0x2AD5F4170F4ACBEB(4, (*uParam7)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
			}
			unk_0x4114B83B329702FF(iVar1, 1);
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
			unk_0xCC61640A821F277C(iVar1, 1);
			unk_0x6018E338F7ABCE75(iVar1, 42, 1);
			unk_0x64A85DB6D037D644(iVar1, "move_m@JOG@", 1048576000);
			unk_0x0E21DA99F698AF06(iVar1, 109, 1);
			if (iLocal_420 == 3)
			{
				unk_0x08377FB2AE4C6899(&uVar6);
				unk_0x86DD54980FE55567(&uVar6);
				unk_0xEB1EFACA68933402(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
				unk_0x007AE2AA9E15FA7B(uVar6);
				if (!unk_0xA929B2923D14E2F8(iVar1, 0))
				{
					unk_0x00E85C3B3BD34B10(iVar1, uVar6);
				}
				unk_0x08377FB2AE4C6899(&uVar6);
			}
			iVar2++;
		}
		bLocal_442 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_164(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xC659BC2E3EDC150A((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2556[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2556[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2556[iVar0 /*18*/].f_8 = { func_166(unk_0x6B1497B2FDBC8466(0f, 1f), unk_0x6B1497B2FDBC8466(0f, 1f), 0f) };
		}
		else
		{
			Local_2556[iVar0 /*18*/].f_8 = { func_166(0.5f, 1f, 0f) };
		}
		Local_2556[iVar0 /*18*/].f_11 = 2f;
		Local_2556[iVar0 /*18*/].f_12 = 1f;
		Local_2556[iVar0 /*18*/].f_13 = 1f;
		Local_2556[iVar0 /*18*/].f_14 = -1f;
		Local_2556[iVar0 /*18*/].f_15 = 0.1f;
		Local_2556[iVar0 /*18*/].f_17 = 0;
		Local_2556[iVar0 /*18*/].f_1 = 1110;
		Local_2556[iVar0 /*18*/] = unk_0xCFDEE0C0A1CC1B2C(Local_2556[iVar0 /*18*/].f_1, Local_2556[iVar0 /*18*/].f_2, Local_2556[iVar0 /*18*/].f_5, Local_2556[iVar0 /*18*/].f_8, Local_2556[iVar0 /*18*/].f_11, Local_2556[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
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
	switch (iLocal_3120)
	{
		case 0:
			func_235(&Local_2348, 0, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
			func_235(&Local_2348, 3, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
			unk_0xCC61640A821F277C(Local_2996[0 /*20*/], 1);
			iLocal_3041 = unk_0x0E29C61F26D96FDB(35, 80);
			iLocal_3120 = 1;
			break;
		
		case 1:
			unk_0x86DD54980FE55567(&uLocal_421);
			unk_0xEB1EFACA68933402(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x007AE2AA9E15FA7B(uLocal_421);
			unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
			unk_0x08377FB2AE4C6899(&uLocal_421);
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 40f || Local_2993.f_1 > 0)
			{
				if (iLocal_420 == 1)
				{
					if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
					{
						func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
						func_149(&Local_2348, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
					else if (Global_101700.f_18932.f_5 == 2)
					{
						func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_149(&Local_2348, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
				}
			}
			else if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041 + 10))
			{
				unk_0xEB1EFACA68933402(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_3120 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_650[iLocal_2604 /*23*/].f_13))
			{
				Local_650[iLocal_2604 /*23*/].f_13.f_2 = 45f;
				Local_650[iLocal_2604 /*23*/].f_16.f_2 = -45f;
				if (!unk_0x70A9F320A34FAC28(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, 1, 0))
				{
					func_107(&iLocal_2598);
					iLocal_2947 = 1;
					iLocal_2954 = 1;
					bLocal_427 = true;
					if (unk_0xFD0FE723227D5AB6(Local_2996[0 /*20*/], 0))
					{
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x83150B7E65C16AFE(0, 0, 0);
						unk_0xEB1EFACA68933402(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
						unk_0x08377FB2AE4C6899(&uLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041 + 15))
			{
				if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1)
				{
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_101700.f_18932.f_5 == 2)
				{
					func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_107(&iLocal_2598);
				unk_0x4718A774D9248520(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_7, -1, 2, 2);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_3120 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041))
			{
				if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
				{
					if (iLocal_3040 == 1)
					{
						func_169(&Local_2993);
					}
					iLocal_2947 = 1;
					if (unk_0xFD0FE723227D5AB6(Local_2996[0 /*20*/], 0))
					{
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x83150B7E65C16AFE(0, 0, 0);
						unk_0x26AB82CDFC655AC9(0, unk_0x3CE07141081BBC2B(Local_650[iLocal_2604 /*23*/].f_1, Local_650[iLocal_2604 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						unk_0xB195EE9DB37DA7F2(Local_2996[0 /*20*/], 64, 0);
						unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
						unk_0x08377FB2AE4C6899(&uLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_3119 == 8 && iLocal_468) || func_168())
			{
				unk_0x5AE11BC36633DE4E(3000);
				iLocal_3120 = 5;
			}
			break;
		
		case 5:
			iLocal_2953 = 1;
			if (unk_0xC9D9444186B5A374() > 3000)
			{
				if (func_101(&iLocal_3117, 0, "TOW_TRAIN1"))
				{
					iLocal_3120 = 6;
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
	if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
	{
		if (bLocal_427)
		{
			switch (iLocal_3053)
			{
				case 0:
					if (unk_0x408A2D0FD72AD367(Local_2996[0 /*20*/]) == 1)
					{
						iLocal_3053 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x5132972D2BBC5A62(Local_2996[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3053 = 2;
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
	unk_0x2BC4A4AFFC2D937D(*uParam0, 0);
	unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
}

void func_170()
{
	float fVar0;
	
	if (iLocal_2947 || ((!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0)) && !unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0)))
	{
		if (iLocal_2598 != -1)
		{
			unk_0x2EB37CDED0E516F3(iLocal_2598);
			unk_0xB47CC6339ADB0B67(iLocal_2598);
			iLocal_2598 = -1;
			return;
		}
	}
	if (!iLocal_2938)
	{
		iLocal_2598 = unk_0x3DF2C10FD29336A3();
		iLocal_2938 = 1;
	}
	if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
	{
		if (unk_0x5132972D2BBC5A62(Local_2996[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x8E978F99E8F731CB(Local_2996[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
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
				if (!iLocal_2937)
				{
					unk_0xEE4ED1F88396A702(iLocal_2598, "TOWING_ENGINE_TURNING_MASTER", Local_2996[0 /*20*/].f_6, 0, 0, 0);
					iLocal_2937 = 1;
				}
			}
			else
			{
				unk_0x2EB37CDED0E516F3(iLocal_2598);
				iLocal_2937 = 0;
			}
		}
	}
}

void func_171()
{
	int iVar0;
	
	func_173();
	unk_0x2E2945F5602A744F(1);
	unk_0x6DB5F7460B043A80(2, 1);
	if (unk_0xFF84A94166FBB351(uLocal_2608))
	{
		unk_0x33CBABDFE7B17924(&uLocal_2608);
	}
	if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0))
	{
		unk_0xD602D152E57C823D(iLocal_3109, 1);
		unk_0x71FF26FDD46DECD5(iLocal_3109, 0);
	}
	unk_0x44BED698F10ECC19(uLocal_3048);
	unk_0x44BED698F10ECC19(uLocal_3049);
	unk_0x571422CE42B47889(uLocal_3112, 0);
	unk_0x571422CE42B47889(uLocal_3113, 0);
	unk_0xB82FD68B5DE68F01(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0x44BED698F10ECC19(Local_2996[iVar0 /*20*/].f_17);
		unk_0x44BED698F10ECC19(Local_2996[iVar0 /*20*/].f_18);
		unk_0x44BED698F10ECC19(Local_2996[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_1870[func_234() /*28*/].f_17))
	{
		func_162(uLocal_2347, Local_1870[func_234() /*28*/].f_17, Local_1870[func_234() /*28*/].f_20);
	}
	unk_0x921CF98C637B0043(&(Local_2996[0 /*20*/].f_6));
	if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
	{
		unk_0x6500ADB01E821BC0(&(Local_2996[0 /*20*/]));
		if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/]))
		{
			if (unk_0xF30AB065E07D2B0F(Local_2996[0 /*20*/]))
			{
				unk_0xFB2D342CDD441DD9(Local_2996[0 /*20*/]);
			}
		}
	}
	if (unk_0x23E9113C762466ED(uLocal_2983))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_2983, 0))
		{
			unk_0x6500ADB01E821BC0(&iLocal_2983);
		}
	}
	if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0))
	{
		unk_0xF0F77C99098F999B(iLocal_3109, 1, 1);
		unk_0x921CF98C637B0043(&iLocal_3109);
	}
	if (iLocal_2963)
	{
		unk_0xB82FD68B5DE68F01(Local_2632, Local_2635, 1, 1);
	}
	if (iLocal_2960 && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_7, 0))
	{
		unk_0x4C0BCB4631EE8F68(Local_2996[0 /*20*/].f_7, 1);
		unk_0x9F5197261B33D544(&(Local_2996[0 /*20*/].f_7), 0);
		unk_0x223C8480EA6EE20B(1);
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
	func_107(&iLocal_2596);
	func_107(&iLocal_2597);
	func_172(&uLocal_3127);
	func_107(&iLocal_2598);
	func_131(&uLocal_399, 0, 0);
	if (unk_0x0F1BF24ED3B7ED40(Local_2993.f_0))
	{
		func_169(&Local_2993);
	}
	unk_0x000E46314C3A507F(1f);
	unk_0xD90CB3CF9A40791C(joaat("towtruck"), 0);
	unk_0x921053BAF754303D();
}

void func_172(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x0A977DD607DA1424((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_173()
{
	char cVar0[24];
	
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		unk_0x21E9CCAA51709FD0(StackVal, 0, 0, 0);
	}
	else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xCDDCD2630EF7A698(0, &cVar0);
	}
}

int func_174()
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0) && !unk_0xA929B2923D14E2F8(iLocal_3109, 0))
	{
		if (unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], iLocal_3109, 0))
		{
			if (unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_10))
			{
				unk_0x020DF7300725ECAB(&(Local_2996[0 /*20*/].f_10));
				func_107(&iLocal_2598);
			}
		}
		else if (!unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
		{
			func_107(&iLocal_2598);
		}
	}
	switch (iLocal_3119)
	{
		case 0:
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 100f)
			{
				Local_2996[0 /*20*/].f_7 = unk_0x31E4DA47D87171B7(6, Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_5);
				if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_7))
				{
					Local_2996[0 /*20*/].f_10 = unk_0xF1FE04D602EA392E(Local_2996[0 /*20*/].f_7);
				}
				iLocal_2983 = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
				unk_0xCC61640A821F277C(iLocal_2983, 1);
				if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_7, 0))
				{
					unk_0xED138B869E6DF35A(Local_2996[0 /*20*/].f_7, 0f);
				}
				func_100("TOW_OBJ_05", 7500, 1);
				unk_0xC1B1E9A034A63A62(0);
				func_177("CROSSING_BELL", &iLocal_2599, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3119 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 80f || unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (!unk_0x4E1850F5FF023071("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x4A5D4AD0FE6ACF73("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_7, 0))
			{
				unk_0xED138B869E6DF35A(Local_2996[0 /*20*/].f_7, 26f);
				unk_0x68AD1450A50267E1(Local_2996[0 /*20*/].f_7, 22f);
			}
			iLocal_3119 = 3;
			break;
		
		case 3:
			if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_7, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
			{
				if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < 175f)
				{
					func_176(Local_2996[0 /*20*/].f_7);
					func_177("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2597, 1, Local_2996[0 /*20*/].f_7, 0, 0, 0, 0);
					func_175(&uLocal_3127, Local_2996[0 /*20*/].f_7);
					func_177("TOWING_TRAIN_HORN_MASTER", &iLocal_2596, 1, Local_2996[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_3119 = 4;
				}
			}
			else
			{
				iLocal_3119 = 8;
			}
			break;
		
		case 4:
			if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_7, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
			{
				func_176(Local_2996[0 /*20*/].f_7);
				if (!unk_0x70A9F320A34FAC28(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, 1, 0))
				{
					func_172(&uLocal_3127);
				}
				Var0 = { unk_0x57240623C1BC6E88(Local_2996[0 /*20*/].f_7, 1) };
				if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < 3f)
				{
					iLocal_2934 = 1;
				}
				if (unk_0xB42101338C533CB4(Local_2996[0 /*20*/].f_7, Local_2996[0 /*20*/].f_6))
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
					{
						if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
						{
							unk_0x0A57226793A19176(iLocal_3109, Local_2996[0 /*20*/].f_6);
						}
					}
					unk_0x28EB63CAF526B891(Local_2996[0 /*20*/].f_6, 1, 0);
					iLocal_3119 = 6;
				}
				else if (func_10(Local_2996[0 /*20*/].f_6, Var0, 1) < 10f && unk_0x70A9F320A34FAC28(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, 1, 0))
				{
					iLocal_2934 = 1;
					if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
					{
						if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
						{
							unk_0x0A57226793A19176(iLocal_3109, Local_2996[0 /*20*/].f_6);
						}
					}
					unk_0x28EB63CAF526B891(Local_2996[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_2934 && func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) > 4f)
				{
					iLocal_3119 = 6;
				}
			}
			else
			{
				iLocal_3119 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_468)
			{
				func_100("TOWT_OBJ_03G", 7500, 1);
				if (unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_10))
				{
					unk_0x020DF7300725ECAB(&(Local_2996[0 /*20*/].f_10));
				}
			}
			unk_0x020DF7300725ECAB(&(Local_2996[0 /*20*/].f_10));
			func_107(&iLocal_2596);
			func_107(&iLocal_2597);
			func_172(&uLocal_3127);
			func_107(&iLocal_2598);
			func_107(&iLocal_2599);
			iLocal_3119 = 7;
			break;
		
		case 7:
			if (!func_41())
			{
				if (!iLocal_468)
				{
					func_100("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0x4E1850F5FF023071("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xB8CAC5F3774894A1("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_175(var uParam0, var uParam1)
{
	(*uParam0)[0] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = unk_0x4281F7DFB73874A8("scr_ojtt_train_sparks", uParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_176(int iParam0)
{
	float fVar0;
	
	if (!func_7(&uLocal_2593))
	{
		func_241(&uLocal_2593);
	}
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			fVar0 = unk_0x13B7ACE69D27E3E4(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&uLocal_2593, 0.15f))
	{
		fLocal_2600 = (fVar0 - 0.35f);
		if (fLocal_2600 < 8f)
		{
			fLocal_2600 = 8f;
		}
		func_53(&uLocal_2593);
		unk_0xED138B869E6DF35A(iParam0, fLocal_2600);
		unk_0x68AD1450A50267E1(iParam0, fLocal_2600);
	}
	return 1;
}

void func_177(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_107(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0x3DF2C10FD29336A3();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		unk_0xEE4ED1F88396A702(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0x4876B73C5A534970(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		unk_0x4988C48537D1AE4F(*iParam1, sParam0, sParam7, 1);
	}
}

int func_178()
{
	var uVar0;
	struct<3> Var1;
	
	func_188();
	switch (iLocal_3118)
	{
		case 0:
			if (bLocal_2965)
			{
				if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
				{
					Local_2996[0 /*20*/] = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_6, 26, uLocal_2989[0], 1, 1, 1);
					unk_0xCC61640A821F277C(Local_2996[0 /*20*/], 1);
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2996[0 /*20*/].f_1 = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_6, 26, iLocal_74, 2, 1, 1);
					unk_0xCC61640A821F277C(Local_2996[0 /*20*/].f_1, 1);
					unk_0x6018E338F7ABCE75(Local_2996[0 /*20*/].f_1, 42, 1);
					func_235(&Local_2348, 6, Local_2996[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0xEB1EFACA68933402(Local_2996[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xEB1EFACA68933402(Local_2996[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
					{
						unk_0xD602D152E57C823D(Local_2996[0 /*20*/].f_6, 10);
					}
					bLocal_442 = true;
					func_235(&Local_2348, 0, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2966)
			{
				if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
				{
					Local_2996[0 /*20*/] = unk_0x3FBC0964EB7878AF(Local_2996[0 /*20*/].f_6, 26, uLocal_2989[0], 0, 1, 1);
					unk_0xCC61640A821F277C(Local_2996[0 /*20*/], 1);
					unk_0x6018E338F7ABCE75(Local_2996[0 /*20*/], 42, 1);
					func_235(&Local_2348, 2, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
					unk_0xEB1EFACA68933402(Local_2996[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_442 = true;
				}
			}
			else if (func_187())
			{
				bLocal_2964 = true;
			}
			else
			{
				bLocal_2964 = false;
			}
			iLocal_3118 = 1;
			break;
		
		case 1:
			if (bLocal_2965)
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
				{
					if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(Local_2996[0 /*20*/].f_6, 1), 15f, 15f, 15f, 0, 1, 0))
					{
						if (!iLocal_3136)
						{
							if (func_149(&Local_2348, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_3136 = 1;
							}
						}
					}
				}
			}
			if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
			{
				if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6) || func_186(iLocal_3109, Local_2996[0 /*20*/].f_6, !(bLocal_2965 || bLocal_2966)))
				{
					if (func_186(iLocal_3109, Local_2996[0 /*20*/].f_6, !(bLocal_2965 || bLocal_2966)))
					{
						bLocal_2979 = true;
					}
					if (!bLocal_2966)
					{
						func_185(&uLocal_3103, 1f);
					}
					else
					{
						func_241(&uLocal_3103);
					}
				}
			}
			if (func_7(&uLocal_3103) && func_4(&uLocal_3103) > 1f)
			{
				if (bLocal_2965 && func_7(&uLocal_3103))
				{
					if (func_41())
					{
						func_150();
					}
					iLocal_2976 = 0;
					if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
					{
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x83150B7E65C16AFE(0, 750, 0);
						unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
						unk_0xEB1EFACA68933402(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
						unk_0x08377FB2AE4C6899(&uLocal_421);
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x83150B7E65C16AFE(0, 0, 0);
						unk_0x6349785089ED32B4(0, Local_2996[0 /*20*/], 0);
						unk_0xEB1EFACA68933402(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						unk_0xCA58071CE9CCE891(0, Local_2996[0 /*20*/], 1000f, -1, 0, 0);
						unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_1, 0))
						{
							unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/].f_1, uLocal_421);
						}
						unk_0x08377FB2AE4C6899(&uLocal_421);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2966)
				{
					if ((Global_101700.f_18932.f_4 % 2) == 0)
					{
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
						{
							unk_0x86DD54980FE55567(&uLocal_421);
							unk_0x83150B7E65C16AFE(0, 0, 0);
							unk_0x834EF3BF2E6A8D29(0, iLocal_3109, 20000, 9f, 1f, 1073741824, 0);
							unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
							unk_0xEB1EFACA68933402(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_421);
							unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
							unk_0x08377FB2AE4C6899(&uLocal_421);
						}
						func_235(&Local_2348, 2, Local_2996[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_149(&Local_2348, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
						{
							func_184(Local_2996[0 /*20*/]);
							unk_0xC96275575DC981A9(Local_2996[0 /*20*/], 0, 0);
							unk_0xC96275575DC981A9(Local_2996[0 /*20*/], 1, 0);
							unk_0x86DD54980FE55567(&uLocal_421);
							unk_0x83150B7E65C16AFE(0, 0, 0);
							unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
							unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
							unk_0x007AE2AA9E15FA7B(uLocal_421);
							unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
							unk_0x08377FB2AE4C6899(&uLocal_421);
							if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/]))
							{
								uLocal_2986 = unk_0xF1FE04D602EA392E(Local_2996[0 /*20*/]);
								unk_0xCC930AE12D020496(uLocal_2986, 1);
								unk_0x00EA14207118EEE2(uLocal_2986, 0.7f);
								func_183(Local_2996[0 /*20*/], uLocal_2986, 1);
							}
							bLocal_2964 = true;
						}
						func_149(&Local_2348, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2964)
				{
					Local_2996[0 /*20*/] = unk_0x2AD5F4170F4ACBEB(4, uLocal_2989[0], Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_9, 1, 1);
					unk_0xCC61640A821F277C(Local_2996[0 /*20*/], 1);
					unk_0x6018E338F7ABCE75(Local_2996[0 /*20*/], 42, 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_PED_ANGR";
					bLocal_442 = false;
					if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
					{
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x834EF3BF2E6A8D29(0, iLocal_3109, 20000, 15f, 3f, 1073741824, 0);
						unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
						unk_0x08377FB2AE4C6899(&uLocal_421);
					}
					iLocal_3118 = 3;
				}
				else
				{
					Local_2996[0 /*20*/] = unk_0x2AD5F4170F4ACBEB(4, uLocal_2989[0], Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_9, 1, 1);
					unk_0xCC61640A821F277C(Local_2996[0 /*20*/], 1);
					unk_0x6018E338F7ABCE75(Local_2996[0 /*20*/], 42, 1);
					unk_0x4114B83B329702FF(Local_2996[0 /*20*/], 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_ILLEG1";
					if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
					{
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x1195B021D7C2C096(0, unk_0x17B5CC8A8615737D(), 20000, 12f, 0f, 3f, 0);
						unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
						unk_0x08377FB2AE4C6899(&uLocal_421);
					}
					iLocal_3118 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_2965)
			{
				if (!bLocal_2973)
				{
					if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6) || bLocal_2979)
					{
						if (!unk_0x75342B3CD0FB5275())
						{
							if (!func_41())
							{
								if (func_149(&Local_2348, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2973 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
			{
				if (!unk_0xFD0FE723227D5AB6(Local_2996[0 /*20*/], 0))
				{
					if (bLocal_2966)
					{
						if (!func_41())
						{
							if (unk_0x1F8F07D86DA1A701(Local_2996[0 /*20*/], 242628503) == 1)
							{
								if (unk_0x408A2D0FD72AD367(Local_2996[0 /*20*/]) == 2)
								{
									if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
									{
										Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
									}
									if (unk_0xB7A628320EFF8E47(Var1, unk_0x57240623C1BC6E88(Local_2996[0 /*20*/], 1)) < 400f)
									{
										if ((Global_101700.f_18932.f_4 % 2) == 0)
										{
											func_149(&Local_2348, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_149(&Local_2348, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3118 = 8;
								}
							}
						}
					}
					else if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
					{
						if (func_182() || (!unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6) && !bLocal_2979))
						{
							func_150();
							iLocal_3118 = 5;
						}
						else if (!unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6) && bLocal_2979)
						{
							if (bLocal_2973)
							{
								if (!func_41())
								{
									iLocal_3118 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
			{
				if (func_104(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 1) < 12f)
				{
					unk_0x15848523A8959DBC(Local_2996[0 /*20*/]);
					if (bLocal_2964)
					{
						unk_0x7DD7196E1A0C1D43(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 0, 16);
					}
					else if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
					{
						unk_0x86DD54980FE55567(&uLocal_421);
						unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
						unk_0xEB1EFACA68933402(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_421);
						unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uLocal_421);
						unk_0x08377FB2AE4C6899(&uLocal_421);
					}
					iLocal_2949 = 1;
					if (bLocal_2965)
					{
						iLocal_3118 = 5;
					}
					else
					{
						iLocal_3118 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/]))
			{
				Local_2996[0 /*20*/].f_9 = unk_0xF1FE04D602EA392E(Local_2996[0 /*20*/]);
				if (bLocal_2964)
				{
					unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_9, 1);
					unk_0x00EA14207118EEE2(Local_2996[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					unk_0xCC930AE12D020496(Local_2996[0 /*20*/].f_9, 3);
					unk_0x00EA14207118EEE2(Local_2996[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_2964)
			{
				if (iLocal_420 == 0)
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_181(Local_2348, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_235(&Local_2348, 2, Local_2996[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_181(Local_2348, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
				func_235(&Local_2348, 3, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
				func_181(Local_2348, "TOWAUD", sLocal_2618, 0);
			}
			bLocal_2957 = true;
			unk_0xC1B1E9A034A63A62(0);
			if (bLocal_2964)
			{
				func_53(&uLocal_3097);
				iLocal_3118 = 6;
			}
			else
			{
				iLocal_3118 = 5;
			}
			break;
		
		case 5:
			if (!func_41())
			{
				if (bLocal_2965)
				{
					unk_0x5AE11BC36633DE4E(0);
				}
				func_53(&uLocal_3097);
				if ((!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0)) && !unk_0xA929B2923D14E2F8(iLocal_3109, 0))
				{
					if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						unk_0x8C17F851E89377D3(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
						{
							unk_0xD602D152E57C823D(Local_2996[0 /*20*/].f_6, 1);
						}
						unk_0x08377FB2AE4C6899(&uVar0);
						unk_0x86DD54980FE55567(&uVar0);
						unk_0x3AD5401AC8DD9226(0, Local_2996[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
						unk_0x9178B6CFE95D27C6(0, Local_2996[0 /*20*/].f_6, 5f, 786597);
						unk_0x007AE2AA9E15FA7B(uVar0);
						if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
						{
							unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uVar0);
						}
						unk_0x08377FB2AE4C6899(&uVar0);
						bLocal_3137 = true;
					}
				}
				iLocal_3118 = 6;
			}
			break;
		
		case 6:
			func_179(0);
			if (!bLocal_2971)
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
				{
					if (!unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						if (bLocal_2965)
						{
							if (unk_0xC9D9444186B5A374() > 8000)
							{
								func_53(&uLocal_3097);
								if (!bLocal_3137)
								{
									unk_0xD602D152E57C823D(Local_2996[0 /*20*/].f_6, 1);
									unk_0x3AD5401AC8DD9226(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
								}
								iLocal_3118 = 7;
							}
						}
						else
						{
							func_53(&uLocal_3097);
							unk_0xD602D152E57C823D(Local_2996[0 /*20*/].f_6, 1);
							unk_0x3AD5401AC8DD9226(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
							iLocal_3118 = 7;
						}
					}
					else if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
					{
						if (unk_0xC9D9444186B5A374() > 7000)
						{
							if (!bLocal_2964)
							{
								if (unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
								{
									if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0))
									{
										if (unk_0x13B7ACE69D27E3E4(iLocal_3109) < 2f)
										{
											if (unk_0x1F8F07D86DA1A701(Local_2996[0 /*20*/], -258271821) != 1)
											{
												unk_0x9178B6CFE95D27C6(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0x08377FB2AE4C6899(&uVar0);
											unk_0x86DD54980FE55567(&uVar0);
											unk_0x83150B7E65C16AFE(0, 5000, 4096);
											unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
											unk_0x007AE2AA9E15FA7B(uVar0);
											if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
											{
												unk_0x00E85C3B3BD34B10(Local_2996[0 /*20*/], uVar0);
											}
											unk_0x08377FB2AE4C6899(&uVar0);
											iLocal_3118 = 7;
										}
									}
								}
								else if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0))
								{
									if (unk_0x13B7ACE69D27E3E4(iLocal_3109) < 5f)
									{
										if (unk_0x1F8F07D86DA1A701(Local_2996[0 /*20*/], -1794415470) != 1)
										{
											if (unk_0xC0FA8EEF6413F866(Local_2996[0 /*20*/].f_6, -1, 0))
											{
												unk_0x3AD5401AC8DD9226(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, -1, -1, 1073741824, 1, 0);
											}
										}
									}
									else if (unk_0x1F8F07D86DA1A701(Local_2996[0 /*20*/], 1056466932) != 1)
									{
										unk_0x8C17F851E89377D3(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
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
			if (unk_0xFD0FE723227D5AB6(Local_2996[0 /*20*/], 0) && !unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6))
			{
				if (bLocal_2964)
				{
					sLocal_2618 = "TOW_PED_ANTH";
				}
				else if (bLocal_2965)
				{
					sLocal_2618 = "TOW_ILLEG_SE";
				}
				bLocal_2970 = true;
				func_149(&Local_2348, "TOWAUD", sLocal_2618, 9, 0, 0, 0);
				bLocal_2957 = false;
				unk_0x9178B6CFE95D27C6(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 5f, 786597);
				iLocal_3118 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_2949 = 0;
			bLocal_2957 = false;
			if (unk_0xA3794949321E107C(Local_2996[0 /*20*/].f_9))
			{
				unk_0x020DF7300725ECAB(&(Local_2996[0 /*20*/].f_9));
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
	fVar1 = func_104(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_3109, 0) && !unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
		{
			if (unk_0x2AFFA8434FA2066D(iLocal_3109, Local_2996[0 /*20*/].f_6) && !unk_0x2315BB1606BC3DC3(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
	{
		if (unk_0xC017443DBE6DA4D6(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 1) || unk_0xC017443DBE6DA4D6(unk_0x17B5CC8A8615737D(), Local_2996[0 /*20*/], 1))
		{
			func_53(&uLocal_3097);
			unk_0xCF458DC2F9000261(Local_2996[0 /*20*/]);
			unk_0xCF458DC2F9000261(unk_0x17B5CC8A8615737D());
		}
	}
	if (unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
	{
		iLocal_3118 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_3097) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6)))
	{
		if (bLocal_2964)
		{
			func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2965)
		{
			func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_235(&Local_2348, 6, Local_2996[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2980[0] = Local_2996[0 /*20*/];
		uLocal_2980[1] = Local_2996[0 /*20*/].f_1;
		bLocal_2971 = true;
		func_180(Local_2348, "TOWAUD", sVar2, &uLocal_2980, 0);
		unk_0x020DF7300725ECAB(&(Local_2996[0 /*20*/].f_9));
		if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/], 0))
		{
			unk_0x15848523A8959DBC(Local_2996[0 /*20*/]);
			unk_0xCA58071CE9CCE891(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
		}
		iLocal_3118 = 8;
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
		unk_0x660E8E7836E95077(0);
	}
	StringCopy(&cLocal_272, sParam165, 16);
	StringCopy(&cLocal_276, sParam166, 16);
	Local_96 = { Param0 };
}

int func_182()
{
	switch (iLocal_3121)
	{
		case 0:
			if (unk_0x408A2D0FD72AD367(Local_2996[0 /*20*/]) >= 1 && !unk_0x75342B3CD0FB5275())
			{
				iLocal_3121 = 1;
			}
			break;
		
		case 1:
			if (bLocal_2973 && !iLocal_2974)
			{
				if (!func_41())
				{
					if (!iLocal_2975)
					{
						if (!bLocal_2979)
						{
							func_100("TOWT_OBJ_06", 7500, 1);
							iLocal_2975 = 1;
						}
					}
					if (iLocal_2975 && !unk_0x75342B3CD0FB5275())
					{
						if (unk_0x1F8F07D86DA1A701(Local_2996[0 /*20*/], -875674219) != 1)
						{
							unk_0x6349785089ED32B4(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_1, 0);
						}
						iLocal_2974 = 1;
						iLocal_3121 = 2;
					}
				}
			}
			if (func_103(Local_2996[0 /*20*/], 1) > 20f)
			{
				unk_0x660E8E7836E95077(1);
				return 1;
			}
			break;
		
		case 2:
			if (func_103(Local_2996[0 /*20*/], 1) > 20f)
			{
				unk_0x660E8E7836E95077(1);
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
		if (Local_280[iVar0 /*3*/] == iParam0 && !unk_0xA3794949321E107C(Local_280[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0xA3794949321E107C(Local_280[iVar0 /*3*/].f_1))
		{
			Local_280[iVar0 /*3*/] = iParam0;
			Local_280[iVar0 /*3*/].f_1 = uParam1;
			Local_280[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_184(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			unk_0x8B54B100C5719325(iParam0, 1);
			unk_0x73655D4147D2FFBC(iParam0, 1);
			unk_0xC96275575DC981A9(iParam0, 23, 0);
			unk_0x2937901439E611F5(iParam0, 2);
			unk_0xC1B7B5C6FDC0755B(iParam0, joaat("weapon_microsmg"), 1000, 1, 1);
			unk_0x5B36DF5C54D0170F(iParam0, 500);
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
	if (unk_0xB6FF35C3DAE3B8A1(unk_0x592069F95C314814()) && func_103(uParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0xB42101338C533CB4(iParam0, uParam1))
	{
		iVar0 = 1;
	}
	if (unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = 1;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_187()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!iLocal_2946)
	{
		if (unk_0x23E9113C762466ED(Local_2996[0 /*20*/].f_6))
		{
			if (!unk_0xA929B2923D14E2F8(Local_2996[0 /*20*/].f_6, 0))
			{
				Var3 = { unk_0x57240623C1BC6E88(Local_2996[0 /*20*/].f_6, 1) };
			}
		}
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
		}
		if (bLocal_2965)
		{
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				unk_0x660E8E7836E95077(1);
				if (!func_41())
				{
					unk_0x4718A774D9248520(Local_2996[0 /*20*/], unk_0x17B5CC8A8615737D(), 5000, 0, 2);
					func_235(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_149(&Local_2348, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_2946 = 1;
					}
				}
			}
		}
	}
}

int func_189(var uParam0, int iParam1)
{
	if (unk_0x23E9113C762466ED(uParam1))
	{
		if (!unk_0xA929B2923D14E2F8(iParam1, 0))
		{
			if (!unk_0xFD0FE723227D5AB6(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_434))
	{
		func_53(&uLocal_434);
	}
	if (func_103(uParam0, 0) < 15f)
	{
		fLocal_431 = 0.3f;
		fLocal_432 = 0.5f;
		fLocal_433 = 0.1f;
	}
	else if (func_103(uParam0, 0) < 40f)
	{
		fLocal_431 = 0.6f;
		fLocal_432 = 1f;
		fLocal_433 = 0.2f;
	}
	if (func_3(&uLocal_434, unk_0x6B1497B2FDBC8466(fLocal_431, fLocal_432)))
	{
		func_53(&uLocal_434);
		unk_0x5C9883713FC5A923(uParam0, 1, 0f, 0f, fLocal_433, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_190()
{
	unk_0xF6EFB598FD123B39();
	func_191();
}

void func_191()
{
	Global_17151.f_134 = 1;
}

int func_192(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (iLocal_2601 != 12)
	{
		func_196(Param2, uParam0, uParam1);
	}
	if (!bLocal_467)
	{
		if (iLocal_2601 >= 6 && iLocal_2601 <= 11)
		{
			if (bParam26)
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, 1, 1, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2601)
		{
			case 0:
				if (func_108(uParam1, uParam0, &iLocal_2603, 10, 90f, 100f, 0))
				{
					unk_0x5DED87DD8464517B(uParam1, 0);
					func_235(&Local_2348, 3, *uParam27, "TONYA", 0, 1);
					func_235(&Local_2348, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
					func_149(&Local_2348, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2601 = 1;
				}
				break;
			
			case 1:
				if (!func_41())
				{
					func_90("TOW_TUT_03", -1);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_2601 = 2;
				}
				break;
			
			case 2:
				if (iLocal_468)
				{
					unk_0x2E2945F5602A744F(1);
					iLocal_2601 = 4;
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (((unk_0x83666F9FB8FEBD4B() > 12000 || func_104(uParam0, uParam1, 1) < 15f) && func_104(uParam0, uParam1, 1) < 30f) && !func_41())
					{
						func_149(&Local_2348, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2601 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_468)
				{
					if (!func_41() && !func_96("TOW_TUT_03"))
					{
						func_195("TOW_TUT_02");
						iLocal_2601 = 4;
					}
				}
				else
				{
					iLocal_2601 = 4;
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 5000 || iLocal_468)
				{
					if ((unk_0x83666F9FB8FEBD4B() > 12000 || func_104(uParam0, uParam1, 1) < 7.5f) || (iLocal_468 && func_104(uParam0, uParam1, 1) < 30f))
					{
						iLocal_443 = 1;
						iLocal_443 = iLocal_443;
						func_195("TOW_TUT_01");
						iLocal_2601 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 8000)
				{
					iLocal_2601 = 6;
				}
				break;
			
			case 6:
				if ((!func_41() && !unk_0x75342B3CD0FB5275()) && unk_0x83666F9FB8FEBD4B() > 12000)
				{
					if (!iLocal_460)
					{
						func_90("TOWT_HELP_CR", -1);
						iLocal_460 = 1;
					}
				}
				if (unk_0x70A9F320A34FAC28(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					func_149(&Local_2348, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0xA3794949321E107C(*uParam22))
					{
						unk_0x5ACBCE67F0494242(*uParam22, 0);
						unk_0x020DF7300725ECAB(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_430 = func_9(Param2.f_14, 0);
					*uParam22 = unk_0x9213703D695C6A7A(Param2.f_14);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_2601 = 7;
				}
				break;
			
			case 7:
				if (!func_41())
				{
					if (unk_0xC9D9444186B5A374() > 6000)
					{
						unk_0xC1B1E9A034A63A62(0);
						func_100("TOW_TUT_04A", 7500, 1);
						iLocal_2601 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2601 = 10;
				}
				if (!func_41())
				{
					if (unk_0x70A9F320A34FAC28(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_470 = unk_0x94E3E074F38DF86C();
						if (bLocal_444)
						{
							unk_0x5ACBCE67F0494242(*uParam22, 0);
							unk_0x020DF7300725ECAB(uParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_430 = func_9(Param2.f_14, 0);
							*uParam22 = unk_0x9213703D695C6A7A(Param2.f_14);
						}
						if (unk_0xA3794949321E107C(*uParam22))
						{
							unk_0xCC930AE12D020496(*uParam22, 5);
						}
						iLocal_2601 = 10;
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
				if (unk_0x70A9F320A34FAC28(uParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_90("TOWT_HELP_UH", -1);
					func_194();
					if (!unk_0xA929B2923D14E2F8(uParam0, 0) && !unk_0xA929B2923D14E2F8(uParam1, 0))
					{
						if (unk_0x2AFFA8434FA2066D(iParam0, iParam1))
						{
							iLocal_2601 = 11;
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
				if (unk_0x70A9F320A34FAC28(iParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_90("TOWT_HELP_UH", -1);
					func_194();
				}
				if (((unk_0x23E9113C762466ED(iParam0) && unk_0x23E9113C762466ED(iParam1)) && !unk_0xA929B2923D14E2F8(iParam0, 0)) && !unk_0xA929B2923D14E2F8(iParam1, 0))
				{
					if (!unk_0x2AFFA8434FA2066D(iParam0, iParam1))
					{
						unk_0x2E2945F5602A744F(1);
						unk_0xD12BCC85C2F8B1DE();
						func_131(&uLocal_399, 0, 0);
						iLocal_2601 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((unk_0x23E9113C762466ED(iParam0) && unk_0x23E9113C762466ED(iParam1)) && !unk_0xA929B2923D14E2F8(iParam0, 0)) && !unk_0xA929B2923D14E2F8(iParam1, 0))
			{
				if (unk_0x2AFFA8434FA2066D(iParam0, iParam1) && !bLocal_2602)
				{
					if (func_41())
					{
						if (unk_0x9E123D5FF2973C60())
						{
							unk_0x2E2945F5602A744F(1);
						}
						func_150();
						iLocal_2601 = 6;
					}
					else
					{
						func_92(*uParam22);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_2601 = 6;
						func_149(&Local_2348, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2602 = true;
					}
				}
			}
			if (!iLocal_462)
			{
				if (bLocal_2602)
				{
					if (!func_41())
					{
						unk_0x2E2945F5602A744F(1);
						func_100("TOWT_OBJ_06", 7500, 1);
						iLocal_462 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_193()
{
	switch (iLocal_476)
	{
		case 0:
			if (!func_7(&uLocal_2525))
			{
				func_241(&uLocal_2525);
			}
			else if (func_4(&uLocal_2525) > 10f)
			{
				if (func_149(&uLocal_484, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_476 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_41())
			{
				if (func_149(&uLocal_484, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_53(&uLocal_2525);
					iLocal_476 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_2525))
			{
				if (func_4(&uLocal_2525) > 15f)
				{
					if (!func_41())
					{
						if (func_149(&uLocal_484, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_476 = 3;
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
	if (!iLocal_459)
	{
		if (!unk_0x75342B3CD0FB5275())
		{
			if (!func_41())
			{
				if (func_149(&uLocal_484, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_459 = 1;
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
	
	if (!unk_0x23E9113C762466ED(uParam20) || !unk_0x23E9113C762466ED(uParam21))
	{
		return;
	}
	if (unk_0xA929B2923D14E2F8(iParam20, 0) || unk_0xA929B2923D14E2F8(iParam21, 0))
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
	if (!iLocal_445)
	{
		if (unk_0x70A9F320A34FAC28(iParam21, Var0, Var3, uVar6, 0, 1, 0))
		{
			if (!unk_0xA929B2923D14E2F8(iParam20, 0) && !unk_0xA929B2923D14E2F8(iParam21, 0))
			{
				if (!unk_0x2AFFA8434FA2066D(iParam20, iParam21))
				{
					unk_0x2E2945F5602A744F(1);
					unk_0xD12BCC85C2F8B1DE();
					iLocal_2601 = 12;
					iLocal_445 = 1;
				}
			}
		}
	}
}

int func_197(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(uParam1))
	{
		iVar0 = (*uParam2 - unk_0xB5DF060B138CD2EA(iParam1));
	}
	if (fLocal_428 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (!unk_0xA929B2923D14E2F8(iParam1, 0))
			{
				if ((unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam1, 0)) || unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0x23E9113C762466ED(iParam1))
				{
					*uParam2 = unk_0xB5DF060B138CD2EA(iParam1);
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
					if (func_149(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_149(&Local_2348, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_149(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_149(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_149(&Local_2348, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_149(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0x23E9113C762466ED(iParam1))
	{
		*uParam2 = unk_0xB5DF060B138CD2EA(iParam1);
	}
	return 0;
}

int func_198(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(uParam1))
	{
		iVar0 = (*uParam3 - unk_0xB5DF060B138CD2EA(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0x23E9113C762466ED(iParam1) && unk_0x23E9113C762466ED(uParam2))
			{
				if (!unk_0xA929B2923D14E2F8(iParam1, 0) && !unk_0xA929B2923D14E2F8(iParam2, 0))
				{
					if ((unk_0xB42101338C533CB4(iParam1, iParam2) || unk_0x2AFFA8434FA2066D(iParam2, iParam1)) || unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0x23E9113C762466ED(iParam1))
					{
						*uParam3 = unk_0xB5DF060B138CD2EA(iParam1);
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
					fLocal_428 = (fLocal_428 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_200("TOW_DMG_01", 75, -1);
					func_199(func_21(), 1, 75);
					fLocal_428 = (fLocal_428 + 75f);
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
	if (unk_0x23E9113C762466ED(iParam1))
	{
		*uParam3 = unk_0xB5DF060B138CD2EA(iParam1);
	}
	return 1;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_59(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

void func_200(char* sParam0, int iParam1, int iParam2)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x69967F83C1E636E2(iParam1);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam2);
}

void func_201(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0xA3794949321E107C(*uParam1))
		{
			unk_0x020DF7300725ECAB(uParam1);
		}
		*uParam5 = unk_0x94E3E074F38DF86C();
		bLocal_467 = !func_202(uParam0);
		return;
	}
	else if (!unk_0xA3794949321E107C(*uParam1) && bLocal_467)
	{
		*uParam1 = unk_0xF1FE04D602EA392E(*uParam0);
		unk_0xCC930AE12D020496(*uParam1, 3);
		unk_0x5ACBCE67F0494242(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_467)
		{
			if (!func_202(uParam0))
			{
				unk_0xED9940795E054052();
				*uParam5 = unk_0x94E3E074F38DF86C();
				if (bParam13)
				{
					if (iLocal_440)
					{
						func_100("DTRSHRD_03", 7500, 1);
						iLocal_440 = 0;
					}
					if (!unk_0xA3794949321E107C(*uParam1))
					{
						*uParam1 = unk_0xF1FE04D602EA392E(*uParam0);
						unk_0xCC930AE12D020496(*uParam1, 3);
						unk_0x5ACBCE67F0494242(*uParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0xA3794949321E107C((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0x5ACBCE67F0494242((uParam2[iVar0 /*20*/])->f_8, 0);
						unk_0x020DF7300725ECAB(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0xA3794949321E107C((uParam2[0 /*20*/])->f_9))
				{
					unk_0x020DF7300725ECAB(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_467 = true;
			}
		}
		else if (func_202(uParam0))
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				unk_0x020DF7300725ECAB(uParam1);
			}
			if (!unk_0xCA41A00932714525((*uParam2)[0 /*20*/]))
			{
				if (!unk_0x2315BB1606BC3DC3((*uParam2)[0 /*20*/], *uParam0, 0) && !unk_0x2315BB1606BC3DC3((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xA3794949321E107C((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0xF1FE04D602EA392E((*uParam2)[iVar0 /*20*/]);
						unk_0xCC930AE12D020496((uParam2[0 /*20*/])->f_9, 3);
						unk_0x00EA14207118EEE2((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_441)
			{
				func_100(sParam4, 7500, 1);
				iLocal_441 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0xA3794949321E107C((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x9213703D695C6A7A(*(uParam3[0 /*3*/]));
					unk_0x5ACBCE67F0494242((uParam2[0 /*20*/])->f_8, 1);
				}
			}
			else if (bParam7)
			{
				if (!unk_0xA929B2923D14E2F8((uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xA3794949321E107C((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0xF1FE04D602EA392E((uParam2[iParam6 /*20*/])->f_6);
						unk_0xCC930AE12D020496((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0x5ACBCE67F0494242((uParam2[0 /*20*/])->f_8, 1);
					}
				}
				else
				{
					if (iLocal_420 == 3)
					{
						Local_650[iLocal_2604 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!unk_0xA3794949321E107C((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x9213703D695C6A7A(Local_650[iLocal_2604 /*23*/].f_1);
						unk_0xCC930AE12D020496((uParam2[0 /*20*/])->f_8, 3);
						unk_0x5ACBCE67F0494242((uParam2[0 /*20*/])->f_8, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0xA929B2923D14E2F8((uParam2[iVar0 /*20*/])->f_6, 0))
					{
						if (!unk_0xA3794949321E107C((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0xF1FE04D602EA392E((uParam2[iVar0 /*20*/])->f_6);
							unk_0xCC930AE12D020496((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0x5ACBCE67F0494242((uParam2[iVar0 /*20*/])->f_8, 1);
						}
					}
					else
					{
						if (iLocal_420 == 3)
						{
							Local_650[iLocal_2604 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!unk_0xA3794949321E107C((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x9213703D695C6A7A(Local_650[iLocal_2604 /*23*/].f_1);
							unk_0xCC930AE12D020496((uParam2[0 /*20*/])->f_8, 3);
							unk_0x5ACBCE67F0494242((uParam2[0 /*20*/])->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_467 = false;
		}
	}
}

int func_202(var uParam0)
{
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0) != *uParam0)
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
		if ((unk_0x0385EDD8AAEC86F4() >= (uParam0->f_272 + uParam0->f_273) || unk_0x48B8265059381CD0(Global_91491.f_20, 2)) || unk_0x48B8265059381CD0(Global_91491.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], 29))
					{
						func_205(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x0385EDD8AAEC86F4();
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
	if (unk_0x48B8265059381CD0(*uParam0, 30))
	{
		switch (func_207(*uParam0))
		{
			case 0:
				unk_0xE1324F59713746FA(uParam2);
				break;
			
			case 1:
				unk_0xA0E7D0E8FE126EE8(uParam1);
				break;
			
			case 2:
				unk_0xFD2E59A7CCE66AB3(uParam1);
				break;
			
			case 3:
				unk_0xA6AD245AF4469018(uParam1, unk_0x48B8265059381CD0(*uParam0, 28));
				break;
			
			case 4:
				unk_0xF5B59A4EB5622187(uParam2, uParam1);
				break;
			
			case 5:
				unk_0xD2EFABA17D4F41B0(uParam1);
				break;
			
			case 6:
				unk_0x985A2515CBAF7290(uParam1, unk_0x48B8265059381CD0(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x40DAFD1EE608CAF6(uParam2);
				break;
			
			case 8:
				unk_0xA73AE78D2491E6E1(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xD250AE1AB37DC648();
				break;
			
			default:
				break;
		}
		unk_0xEB79FECD9022AAF0(uParam0, 29);
	}
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x48B8265059381CD0(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_208()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 25);
	unk_0xEB79FECD9022AAF0(&Global_2314, 11);
}

void func_209(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_232();
	uLocal_2608 = func_231();
	if (uParam0->f_3 == 3)
	{
		sLocal_2620[0] = "base";
		func_229(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_229(&uLocal_2648, "oddjobs@towingcome_here");
		func_229(&uLocal_2648, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2959)
	{
		func_229(&uLocal_2648, "Ped");
		func_229(&uLocal_2648, "oddjobs@towing");
		func_229(&uLocal_2648, "oddjobs@towingangryidle_a");
		func_229(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_229(&uLocal_2648, "oddjobs@towingpleadingidle_a");
		func_229(&uLocal_2648, "move_m@JOG@");
	}
	else if (bLocal_2959)
	{
		func_229(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_229(&uLocal_2648, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_229(&uLocal_2648, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_229(&uLocal_2648, sLocal_2619);
		func_227(&uLocal_2638, joaat("ambulance"));
		func_227(&uLocal_2638, joaat("s_m_m_paramedic_01"));
		sLocal_2620[0] = "react_big_variations_a";
		sLocal_2620[1] = "react_big_variations_b";
		sLocal_2620[2] = "react_big_variations_c";
		func_229(&uLocal_2648, "move_m@JOG@");
	}
	unk_0xD90CB3CF9A40791C(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		unk_0xD250AE1AB37DC648();
		func_229(&uLocal_2648, "oddjobs@towing");
		func_229(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_229(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_227(&uLocal_2638, joaat("freightcont1"));
		func_227(&uLocal_2638, joaat("tankercar"));
		func_227(&uLocal_2638, joaat("freight"));
		func_227(&uLocal_2638, joaat("freightcar"));
		func_227(&uLocal_2638, joaat("s_m_m_lsmetro_01"));
		func_227(&uLocal_2638, joaat("a_f_m_bevhills_01"));
		func_227(&uLocal_2638, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_226();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_2987[iVar0] = Local_650[iLocal_2604 /*23*/].f_20;
	}
	else
	{
		func_225();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2987[iVar0] == 0)
		{
			iLocal_2987[iVar0] = func_223(&iLocal_2987, &iLocal_82, 10);
			unk_0xA56CF5F719228F25(iLocal_2987[iVar0], 3);
		}
		if (bLocal_2965)
		{
			iLocal_2987[iVar0] = joaat("landstalker");
			func_227(&uLocal_2638, iLocal_2987[iVar0]);
			unk_0xA56CF5F719228F25(iLocal_2987[iVar0], 3);
		}
		else if (iLocal_2987[iVar0] != 0)
		{
			func_227(&uLocal_2638, iLocal_2987[iVar0]);
			unk_0xA56CF5F719228F25(iLocal_2987[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2959 && iLocal_2962)
	{
		if (bLocal_2965)
		{
			func_222(&iVar1);
			iLocal_74 = joaat("a_m_m_tranvest_01");
			iLocal_74 = iLocal_74;
			func_227(&uLocal_2638, iLocal_74);
		}
		else if (bLocal_2966)
		{
			func_221(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_220(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_2965)
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
			uLocal_2989[iVar0] = func_223(&uLocal_2989, &iLocal_75, iVar1);
			if (uLocal_2989[iVar0] != 0)
			{
				func_227(&uLocal_2638, uLocal_2989[iVar0]);
			}
			iVar0++;
		}
	}
	func_227(&uLocal_2638, iLocal_649);
	func_219(&uLocal_2656, "TOW", 2, 0);
	func_219(&uLocal_2656, "DTRSHRD", 3, 0);
	func_218(&uLocal_2638);
	func_215(&uLocal_2648, &uLocal_2656);
	while (!unk_0xFF84A94166FBB351(uLocal_2608))
	{
		func_204(&uLocal_2656);
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_214(&uLocal_2638) || !unk_0x18EE473F859D0FB2(iLocal_2987[0]))
	{
		func_204(&uLocal_2656);
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_210(&uLocal_2656))
	{
		func_204(&uLocal_2656);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0x985A2515CBAF7290("SCRIPT\TOWING_TRAIN", false, -1) || !unk_0xD181F97E98E28C18())
		{
			func_204(&uLocal_2656);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	while (!unk_0x657558590DD37F85(2) || !unk_0x657558590DD37F85(3))
	{
		func_204(&uLocal_2656);
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
		if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0x48B8265059381CD0(uParam0, 30))
	{
		if (unk_0x48B8265059381CD0(iParam0, 29))
		{
			switch (func_207(iParam0))
			{
				case 0:
					return unk_0x9F746898F7881612(uParam2);
					break;
				
				case 1:
					return unk_0xF4F8AE8DD0F08C1E(uParam1);
					break;
				
				case 2:
					return unk_0x69EB2CB272E0AD5D(uParam1);
					break;
				
				case 3:
					return unk_0xE0B615EF03FE4422(uParam1);
					break;
				
				case 4:
					return unk_0x63781672EC63FB83(uParam2, uParam1);
					break;
				
				case 5:
					return unk_0x246AF348B8F0270F(uParam1);
					break;
				
				case 6:
					return unk_0x985A2515CBAF7290(uParam1, unk_0x48B8265059381CD0(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x1773B272030A4F46(uParam2);
					break;
				
				case 8:
					return unk_0x657558590DD37F85(uParam2);
					break;
				
				case 9:
					return unk_0xD181F97E98E28C18();
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
			if (!unk_0x9F746898F7881612((*uParam0)[iVar0]))
			{
				if (!unk_0x9F746898F7881612((*uParam0)[iVar0]))
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
		if (!unk_0xD3115E7F7876D6E6((*uParam0)[iVar0]))
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
		if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x6A7B0D91FD88D9EE(sParam3, "NULL"))
					{
						if (unk_0x6A7B0D91FD88D9EE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x48B8265059381CD0((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xEB79FECD9022AAF0(uParam0[iVar0 /*18*/], iParam1);
			unk_0xEB79FECD9022AAF0(uParam0[iVar0 /*18*/], 30);
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
			unk_0xE1324F59713746FA((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_219(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0xEB79FECD9022AAF0(&uVar0, 26);
	}
	func_217(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_75[0] = joaat("a_m_y_genstreet_02");
		iLocal_75[1] = joaat("a_m_y_beach_03");
		iLocal_75[2] = joaat("g_m_y_salvagoon_01");
		iLocal_75[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_75[0] = joaat("a_f_m_bevhills_01");
		iLocal_75[1] = joaat("a_m_y_genstreet_02");
		iLocal_75[2] = joaat("a_f_y_hipster_02");
		iLocal_75[3] = joaat("a_m_y_beach_03");
		iLocal_75[4] = joaat("s_f_y_sweatshop_01");
		iLocal_75[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_221(var uParam0)
{
	iLocal_75[0] = joaat("a_m_m_tramp_01");
	iLocal_75[1] = joaat("a_m_y_methhead_01");
	iLocal_75[2] = joaat("a_m_m_tramp_01");
	iLocal_75[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_222(var uParam0)
{
	iLocal_75[0] = joaat("a_m_y_yoga_01");
	iLocal_75[1] = joaat("a_m_y_beach_03");
	iLocal_75[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_223(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x0E29C61F26D96FDB(0, (iParam2 - 1));
	while (func_224((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = unk_0x0E29C61F26D96FDB(0, (iParam2 - 1));
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
	iLocal_82[0] = joaat("tailgater");
	iLocal_82[1] = joaat("asterope");
	iLocal_82[2] = joaat("primo");
	iLocal_82[3] = joaat("primo");
	iLocal_82[4] = joaat("schwarzer");
	iLocal_82[5] = joaat("emperor");
	iLocal_82[6] = joaat("premier");
	iLocal_82[7] = joaat("buffalo");
	iLocal_82[8] = joaat("intruder");
	iLocal_82[9] = joaat("intruder");
}

void func_226()
{
	iLocal_82[0] = joaat("buccaneer");
	iLocal_82[1] = joaat("voodoo2");
	iLocal_82[2] = joaat("manana");
	iLocal_82[3] = joaat("ruiner");
	iLocal_82[4] = joaat("ruiner");
	iLocal_82[5] = joaat("voodoo2");
	iLocal_82[6] = joaat("surfer2");
	iLocal_82[7] = joaat("emperor2");
	iLocal_82[8] = joaat("stanier");
	iLocal_82[9] = joaat("tailgater");
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
		if (!unk_0xD3115E7F7876D6E6((*uParam0)[iVar0]))
		{
			if (unk_0x6A7B0D91FD88D9EE((*uParam0)[iVar0], sParam1))
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
		if (unk_0xD3115E7F7876D6E6((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_231()
{
	return unk_0xB50E108F09B8EC7A("MIDSIZED_MESSAGE");
}

void func_232()
{
	func_276(&uLocal_412, 1);
}

void func_233()
{
	switch (iLocal_420)
	{
		case 2:
			if ((Global_101700.f_18932.f_4 % 2) == 0)
			{
				sLocal_2624 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2624 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2624 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_2965)
			{
			}
			else
			{
				sLocal_2624 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_2624 = "TOWTRAINM";
			break;
	}
}

int func_234()
{
	return Local_650[iLocal_2604 /*23*/].f_22;
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_236()
{
	iLocal_420 = func_238(Global_101700.f_18932.f_2);
	if (!func_237(iLocal_420))
	{
		iLocal_420 = 3;
	}
	if (iLocal_420 == 3)
	{
	}
	else
	{
		iLocal_2604 = func_240(1300f, iLocal_420, Global_101700.f_18932.f_9);
		Global_101700.f_18932.f_9 = iLocal_2604;
	}
	if (iLocal_2604 == 0)
	{
		iLocal_420 = 3;
	}
	Global_101700.f_18932.f_2 = iLocal_420;
}

int func_237(int iParam0)
{
	iLocal_2604 = func_240(1300f, iParam0, Global_101700.f_18932.f_9);
	if (iLocal_2604 == -1)
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
		if (Global_101700.f_18932.f_4 < iVar0)
		{
			iVar0 = Global_101700.f_18932.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_101700.f_18932.f_6 < iVar0)
		{
			iVar0 = Global_101700.f_18932.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_101700.f_18932.f_5 < iVar0)
		{
			iVar0 = Global_101700.f_18932.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_101700.f_18932.f_7 < iVar0)
		{
			iVar0 = Global_101700.f_18932.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_101700.f_18932.f_8 < iVar0)
		{
			iVar0 = Global_101700.f_18932.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_239()
{
	if (Global_91491 == 10 || Global_91491 == 9)
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
		fVar2 = func_9(Local_650[iVar58 /*23*/].f_1, 1);
		if (!func_11(Local_650[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_650[iVar58 /*23*/] == iParam1)
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
		iVar1 = iVar3[unk_0x0E29C61F26D96FDB(0, (iVar57 - 1))];
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
	Local_45[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_45[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_45[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	Local_45[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_45[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_45[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	Local_70[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
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
	
	if (iLocal_3115 < 16)
	{
		unk_0xD12BCC85C2F8B1DE();
		unk_0x660E8E7836E95077(1);
		func_276(&Global_100353, 3);
		switch (iLocal_3084)
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
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!unk_0x9C88EB7B70229335(sVar0))
		{
			func_248(sVar0);
		}
		func_247();
		func_249(unk_0x6AF6B39BFDB53CB5());
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
	if (Global_91491 == 7 || Global_91491 == 8)
	{
		return 1;
	}
	return 0;
}

void func_247()
{
	Global_91526 = 1;
	if (unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 25);
	}
}

void func_248(char* sParam0)
{
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		if (unk_0xF9108830F4935563(sParam0) <= 16)
		{
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk_0xC81784511829F091())
			{
				unk_0x319B2408D3EC19AC();
			}
		}
	}
}

void func_249(char* sParam0)
{
	if (Global_91491 != 12)
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
	Global_91491 = 0;
	StringCopy(&(Global_91491.f_3), sParam0, 32);
	Global_91491.f_11 = iParam1;
	unk_0xFEBB03103CA42EBA(1);
	unk_0x853F52F88ADE73F4(0);
	unk_0x32FDBF4A41B0698D(0);
	func_270(1);
	func_268(1);
	func_265(0);
	func_264(1);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 9);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 6);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 20);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 21);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 5);
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if (unk_0x879A5482D4D7A218(uVar0))
				{
					unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 5);
				}
			}
		}
	}
	unk_0x2E2945F5602A744F(1);
	unk_0xD12BCC85C2F8B1DE();
	func_263(0);
	func_262(1);
	Global_91491.f_2 = Global_91528;
	if (func_261())
	{
		if (func_260())
		{
			if (Global_91528 >= func_257())
			{
				if (!unk_0x48B8265059381CD0(Global_82612[iParam2 /*34*/].f_15, 16))
				{
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6)
		{
			func_252(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2)
				{
					Global_86000 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_251(unk_0x6AF6B39BFDB53CB5());
			if (iVar33 > -1)
			{
				if (Global_101700.f_23945.f_4[iVar33] >= 2)
				{
					Global_86000 = 1;
				}
			}
		}
	}
	return 1;
}

int func_251(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond4", sParam0))
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
	if (unk_0x9C88EB7B70229335(&cVar2))
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
	
	iVar0 = func_258(&(Global_91491.f_3), 0);
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
	
	iVar0 = unk_0x765F5B806B517045(uParam0);
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
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0)
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
	if ((((Global_91491.f_11 == 0 || Global_91491.f_11 == 1) || Global_91491.f_11 == 2) || Global_91491.f_11 == 3) || Global_91491.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	if ((((Global_91491.f_11 == 0 || Global_91491.f_11 == 1) || Global_91491.f_11 == 2) || Global_91491.f_11 == 6) || Global_91491.f_11 == 3)
	{
		return 1;
	}
	if (Global_91491.f_11 == 5)
	{
		if (func_251(&(Global_91491.f_3)) > -1)
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
		Global_36330 = 1;
	}
	else
	{
		Global_36330 = 0;
	}
}

void func_263(int iParam0)
{
	unk_0xE418A8E16B02C0AC(iParam0);
	unk_0x2D28D5B324F77D2D(iParam0);
}

void func_264(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD57128A757C0216E();
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 3);
	}
	else if (unk_0x48B8265059381CD0(Global_91491.f_20, 3))
	{
		unk_0x42DE1068884C3BE9();
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 3);
	}
}

void func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x48B8265059381CD0(Global_91491.f_20, 4))
		{
			func_267();
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 4);
		}
	}
	else
	{
		func_266();
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 4);
	}
}

void func_266()
{
	Global_17151.f_5 = 1;
}

void func_267()
{
	Global_17151.f_5 = 0;
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		func_269();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_140(0))
		{
			func_270(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_269()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_270(int iParam0)
{
	if (Global_14604)
	{
		func_271(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_18())
	{
		Global_14443.f_1 = 3;
	}
}

void func_271(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_140(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

void func_272()
{
	Global_86000 = 0;
	Global_86001 = 0;
}

void func_273()
{
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 25);
	Global_91525 = 0;
	func_262(0);
	func_275();
	func_274();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

void func_274()
{
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 22);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 8);
}

void func_275()
{
	if (Global_91491.f_16 != 0)
	{
		unk_0x33CBABDFE7B17924(&(Global_91491.f_16));
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0)
	{
		unk_0x33CBABDFE7B17924(&(Global_91491.f_17));
		Global_91491.f_17 = 0;
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
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

